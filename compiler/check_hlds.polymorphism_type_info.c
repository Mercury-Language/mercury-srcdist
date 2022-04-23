/*
** Automatically generated from `polymorphism_type_info.m'
** by the Mercury compiler,
** version rotd-2022-04-23
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
check_hlds__polymorphism_type_info__IntroducedFrom__pred__polymorphism_make_type_info_vars_mi__372__1_2_p_0(
  MR_Word PolySpecs_20,
  MR_Word HeadVar__2_33);

static MR_bool MR_CALL 
check_hlds__polymorphism_type_info__IntroducedFrom__pred__polymorphism_make_type_info_var_mi__364__1_2_p_0(
  MR_Word PolySpecs_20,
  MR_Word HeadVar__2_33);

static void MR_CALL 
check_hlds__polymorphism_type_info____Compare____type_ctor_is_var_arity_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__polymorphism_type_info____Unify____type_ctor_is_var_arity_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__polymorphism_type_info____Compare____maybe_need_arity_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__polymorphism_type_info____Unify____maybe_need_arity_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
check_hlds__polymorphism_type_info__polymorphism_make_type_info_vars_mi_10_p_0_1(
  MR_Box closure_arg);

static MR_bool MR_CALL 
check_hlds__polymorphism_type_info__polymorphism_make_type_info_var_mi_10_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
check_hlds__polymorphism_type_info__polymorphism_do_make_type_info_var_6_p_0(
  MR_Word Type_7,
  MR_Word Context_8,
  MR_Word * VarMCA_9,
  MR_Word * ExtraGoals_10,
  MR_Word STATE_VARIABLE_Info_0_34,
  MR_Word * STATE_VARIABLE_Info_35);

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
  MR_Word STATE_VARIABLE_Info_0_38,
  MR_Word * STATE_VARIABLE_Info_39);

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
check_hlds__polymorphism_type_info__get_type_info_from_locn_7_p_0(
  MR_Word TypeVar_8,
  MR_Word TypeInfoLocn_9,
  MR_Word Context_10,
  MR_Word * Var_11,
  MR_Word * ExtraGoals_12,
  MR_Word STATE_VARIABLE_Info_0_17,
  MR_Word * STATE_VARIABLE_Info_18);

static void MR_CALL 
check_hlds__polymorphism_type_info__init_const_type_ctor_info_var_from_cons_id_3_p_0(
  MR_Word ConsId_4,
  MR_Word TypeCtorInfoVar_5,
  MR_Word * TypeCtorInfoGoal_6);

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
  MR_Word * Var_24,
  MR_Word * MCA_25,
  MR_Word * ExtraGoals_26,
  MR_Word STATE_VARIABLE_Info_0_37,
  MR_Word * STATE_VARIABLE_Info_38);

static void MR_CALL 
check_hlds__polymorphism_type_info__polymorphism_construct_second_type_info_cell_14_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__polymorphism_type_info__polymorphism_construct_second_type_info_cell_14_p_0(
  MR_Word Type_15,
  MR_Word TypeCtor_16,
  MR_Word NeedTypeCtorArity_17,
  MR_Word TypeCtorVar_18,
  MR_Word TypeCtorConsId_19,
  MR_Word TypeCtorGoals_20,
  MR_Word ArgTypeInfoVarsMCAs_21,
  MR_Word ArgTypeInfoGoals_22,
  MR_Word InitialVarMapsSnapshot_23,
  MR_Word * Var_24,
  MR_Word * MCA_25,
  MR_Word * ExtraGoals_26,
  MR_Word STATE_VARIABLE_Info_0_73,
  MR_Word * STATE_VARIABLE_Info_74);

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
check_hlds__polymorphism_type_info__IntroducedFrom__pred__polymorphism_make_type_info_vars_mi__372__1_2_p_0(
  MR_Word PolySpecs_20,
  MR_Word HeadVar__2_33)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__polymorphism_type_info_scalar_common_1[2]), ((MR_Box) (PolySpecs_20)), ((MR_Box) (HeadVar__2_33)));
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__polymorphism_type_info__IntroducedFrom__pred__polymorphism_make_type_info_var_mi__364__1_2_p_0(
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
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

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
check_hlds__polymorphism_type_info__gen_extract_type_info_vt_12_p_0(
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

  if (((MR_tag((MR_Word) IndexIntOrVar_17)) == (MR_Integer) 0))
  {
    MR_Integer Index_23 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), IndexIntOrVar_17, (MR_Integer) 0))));
    MR_Word IndexGoal_24;

    hlds__make_goal__make_int_const_construction_alloc_vt_6_p_0(Index_23, (MR_String) "TypeInfoIndex", &IndexGoal_24, &IndexVar_25, STATE_VARIABLE_VarTable_0_29, &STATE_VARIABLE_VarTable_34_34);
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
  parse_tree__var_table__add_prefix_number_var_entry_6_p_0((MR_String) "TypeInfo_", Type_27, (MR_Integer) 1, TypeInfoVar_20, STATE_VARIABLE_VarTable_34_34, STATE_VARIABLE_VarTable_30);
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
check_hlds__polymorphism_type_info__poly_get_type_info_locn_raw_vt_7_p_0(
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
    MR_Word Kind_18;
    MR_Word Type_19;
    MR_Word Var_20;
    MR_Word STATE_VARIABLE_RttiVarMaps_22_22;

    parse_tree__prog_data__get_tvar_kind_3_p_0(TVarKindMap_8, TypeVar_9, &Kind_18);
    {
      Type_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Type_19, 0) = ((MR_Box) (TypeVar_9));
      MR_hl_field(MR_mktag(0), Type_19, 1) = ((MR_Box) (Kind_18));
    }
    parse_tree__var_table__add_prefix_number_var_entry_6_p_0((MR_String) "TypeInfo_", Type_19, (MR_Integer) 1, &Var_20, STATE_VARIABLE_VarTable_0_14, STATE_VARIABLE_VarTable_15);
    hlds__hlds_rtti__rtti_det_insert_type_info_type_4_p_0(Var_20, Type_19, STATE_VARIABLE_RttiVarMaps_0_16, &STATE_VARIABLE_RttiVarMaps_22_22);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *TypeInfoLocn_10 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_20));
    }
    hlds__hlds_rtti__rtti_det_insert_type_info_locn_4_p_0(TypeVar_9, *TypeInfoLocn_10, STATE_VARIABLE_RttiVarMaps_22_22, STATE_VARIABLE_RttiVarMaps_17);
  }
}

void MR_CALL 
check_hlds__polymorphism_type_info__poly_get_type_info_locn_raw_9_p_0(
  MR_Word TVarKindMap_10,
  MR_Word TypeVar_11,
  MR_Word * TypeInfoLocn_12,
  MR_Word STATE_VARIABLE_VarSet_0_17,
  MR_Word * STATE_VARIABLE_VarSet_18,
  MR_Word STATE_VARIABLE_VarTypes_0_19,
  MR_Word * STATE_VARIABLE_VarTypes_20,
  MR_Word STATE_VARIABLE_RttiVarMaps_0_21,
  MR_Word * STATE_VARIABLE_RttiVarMaps_22)
{
  MR_bool succeeded;
  MR_Word TypeInfoLocn0_16;

  succeeded = hlds__hlds_rtti__rtti_search_type_info_locn_3_p_0(STATE_VARIABLE_RttiVarMaps_0_21, TypeVar_11, &TypeInfoLocn0_16);
  if (succeeded)
  {
    *TypeInfoLocn_12 = TypeInfoLocn0_16;
    *STATE_VARIABLE_RttiVarMaps_22 = STATE_VARIABLE_RttiVarMaps_0_21;
    *STATE_VARIABLE_VarTypes_20 = STATE_VARIABLE_VarTypes_0_19;
    *STATE_VARIABLE_VarSet_18 = STATE_VARIABLE_VarSet_0_17;
  }
  else
  {
    MR_Word Kind_23;
    MR_Word Type_24;
    MR_Word Var_25;
    MR_Word STATE_VARIABLE_RttiVarMaps_28_27;
    MR_Integer VarNum_28;
    MR_String VarNumStr_29;
    MR_String Name_31;
    MR_Word STATE_VARIABLE_VarSet_26_32;
    MR_Word Var_33;

    parse_tree__prog_data__get_tvar_kind_3_p_0(TVarKindMap_10, TypeVar_11, &Kind_23);
    {
      Type_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Type_24, 0) = ((MR_Box) (TypeVar_11));
      MR_hl_field(MR_mktag(0), Type_24, 1) = ((MR_Box) (Kind_23));
    }
    mercury__varset__new_var_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &Var_25, STATE_VARIABLE_VarSet_0_17, &STATE_VARIABLE_VarSet_26_32);
    mercury__term__var_to_int_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_25, &VarNum_28);
    mercury__string__int_to_string_2_p_0(VarNum_28, &VarNumStr_29);
    hlds__hlds_rtti__rtti_det_insert_type_info_type_4_p_0(Var_25, Type_24, STATE_VARIABLE_RttiVarMaps_0_21, &STATE_VARIABLE_RttiVarMaps_28_27);
    Name_31 = mercury__string__f_43_43_2_f_0((MR_String) "TypeInfo_", VarNumStr_29);
    mercury__varset__name_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_25, Name_31, STATE_VARIABLE_VarSet_26_32, STATE_VARIABLE_VarSet_18);
    Var_33 = parse_tree__builtin_lib_types__type_info_type_0_f_0();
    parse_tree__vartypes__add_var_type_4_p_0(Var_25, Var_33, STATE_VARIABLE_VarTypes_0_19, STATE_VARIABLE_VarTypes_20);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *TypeInfoLocn_12 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_25));
    }
    hlds__hlds_rtti__rtti_det_insert_type_info_locn_4_p_0(TypeVar_11, *TypeInfoLocn_12, STATE_VARIABLE_RttiVarMaps_28_27, STATE_VARIABLE_RttiVarMaps_22);
  }
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
  MR_Word TypeInfoRHS_22;
  MR_Word Unification_23;
  MR_Word Unify_27;
  MR_Word NonLocals_28;
  MR_Word InstmapDelta_29;
  MR_Word GoalInfo_30;

  *ConsId_13 = hlds__hlds_code_util__type_ctor_info_cons_id_1_f_0(TypeCtor_11);
  parse_tree__var_table__add_prefix_number_var_entry_6_p_0((MR_String) "TypeCtorInfo_", Type_10, (MR_Integer) 1, TypeCtorInfoVar_12, STATE_VARIABLE_VarTable_0_17, STATE_VARIABLE_VarTable_18);
  *STATE_VARIABLE_RttiVarMaps_20 = STATE_VARIABLE_RttiVarMaps_0_19;
  {
    TypeInfoRHS_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), TypeInfoRHS_22, 0) = ((MR_Box) (*ConsId_13));
    MR_hl_field(MR_mktag(1), TypeInfoRHS_22, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(MR_mktag(1), TypeInfoRHS_22, 2) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Unification_23 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Unification_23, 0) = ((MR_Box) (*TypeCtorInfoVar_12));
    MR_hl_field(MR_mktag(0), Unification_23, 1) = ((MR_Box) (*ConsId_13));
    MR_hl_field(MR_mktag(0), Unification_23, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(0), Unification_23, 3) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(0), Unification_23, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(0), Unification_23, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(0), Unification_23, 6) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Unify_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Unify_27, 0) = ((MR_Box) (*TypeCtorInfoVar_12));
    MR_hl_field(MR_mktag(1), Unify_27, 1) = ((MR_Box) (TypeInfoRHS_22));
    MR_hl_field(MR_mktag(1), Unify_27, 2) = ((MR_Box) (&check_hlds__polymorphism_type_info_scalar_common_4[0]));
    MR_hl_field(MR_mktag(1), Unify_27, 3) = ((MR_Box) (Unification_23));
    MR_hl_field(MR_mktag(1), Unify_27, 4) = ((MR_Box) (&check_hlds__polymorphism_type_info_scalar_common_1[4]));
  }
  NonLocals_28 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), *TypeCtorInfoVar_12);
  InstmapDelta_29 = hlds__instmap__instmap_delta_bind_var_1_f_0(*TypeCtorInfoVar_12);
  hlds__hlds_goal__goal_info_init_5_p_0(NonLocals_28, InstmapDelta_29, (MR_Integer) 0, (MR_Integer) 0, &GoalInfo_30);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *TypeCtorInfoGoal_14 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Unify_27));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_30));
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
  MR_Word TypeInfoRHS_27;
  MR_Word Unification_28;
  MR_Word Unify_32;
  MR_Word NonLocals_33;
  MR_Word InstmapDelta_34;
  MR_Word GoalInfo_35;
  MR_Integer VarNum_53;
  MR_String VarNumStr_54;
  MR_String Name_56;
  MR_Word STATE_VARIABLE_VarSet_26_57;
  MR_Word Var_58;

  *ConsId_15 = hlds__hlds_code_util__type_ctor_info_cons_id_1_f_0(TypeCtor_13);
  mercury__varset__new_var_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeCtorInfoVar_14, STATE_VARIABLE_VarSet_0_20, &STATE_VARIABLE_VarSet_26_57);
  mercury__term__var_to_int_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), *TypeCtorInfoVar_14, &VarNum_53);
  mercury__string__int_to_string_2_p_0(VarNum_53, &VarNumStr_54);
  *STATE_VARIABLE_RttiVarMaps_25 = STATE_VARIABLE_RttiVarMaps_0_24;
  Name_56 = mercury__string__f_43_43_2_f_0((MR_String) "TypeCtorInfo_", VarNumStr_54);
  mercury__varset__name_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), *TypeCtorInfoVar_14, Name_56, STATE_VARIABLE_VarSet_26_57, STATE_VARIABLE_VarSet_21);
  Var_58 = parse_tree__builtin_lib_types__type_info_type_0_f_0();
  parse_tree__vartypes__add_var_type_4_p_0(*TypeCtorInfoVar_14, Var_58, STATE_VARIABLE_VarTypes_0_22, STATE_VARIABLE_VarTypes_23);
  {
    TypeInfoRHS_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), TypeInfoRHS_27, 0) = ((MR_Box) (*ConsId_15));
    MR_hl_field(MR_mktag(1), TypeInfoRHS_27, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(MR_mktag(1), TypeInfoRHS_27, 2) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Unification_28 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Unification_28, 0) = ((MR_Box) (*TypeCtorInfoVar_14));
    MR_hl_field(MR_mktag(0), Unification_28, 1) = ((MR_Box) (*ConsId_15));
    MR_hl_field(MR_mktag(0), Unification_28, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(0), Unification_28, 3) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(0), Unification_28, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(0), Unification_28, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(0), Unification_28, 6) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Unify_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Unify_32, 0) = ((MR_Box) (*TypeCtorInfoVar_14));
    MR_hl_field(MR_mktag(1), Unify_32, 1) = ((MR_Box) (TypeInfoRHS_27));
    MR_hl_field(MR_mktag(1), Unify_32, 2) = ((MR_Box) (&check_hlds__polymorphism_type_info_scalar_common_4[0]));
    MR_hl_field(MR_mktag(1), Unify_32, 3) = ((MR_Box) (Unification_28));
    MR_hl_field(MR_mktag(1), Unify_32, 4) = ((MR_Box) (&check_hlds__polymorphism_type_info_scalar_common_1[4]));
  }
  NonLocals_33 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), *TypeCtorInfoVar_14);
  InstmapDelta_34 = hlds__instmap__instmap_delta_bind_var_1_f_0(*TypeCtorInfoVar_14);
  hlds__hlds_goal__goal_info_init_5_p_0(NonLocals_33, InstmapDelta_34, (MR_Integer) 0, (MR_Integer) 0, &GoalInfo_35);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *TypeCtorInfoGoal_16 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Unify_32));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_35));
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
  MR_Word TypeCtor_24;
  MR_Word Cell_25;
  MR_Word ConsId_26;
  MR_Word TypeInfoRHS_27;
  MR_Integer NumArgVars_30;
  MR_Word ArgModes_31;
  MR_Word Unification_32;
  MR_Word Unify_35;
  MR_Word NonLocals_36;
  MR_Word ArgInsts_37;
  MR_Word InstConsId_38;
  MR_Word InstResults_39;
  MR_Word TypeInfoVarInst_40;
  MR_Word InstMapDelta_41;
  MR_Word GoalInfo_42;
  MR_Word Var_57;
  MR_Word Var_60;
  MR_Word Var_61;
  MR_Word Var_66;
  MR_Word Var_67;
  MR_Word Var_69;
  MR_Word Var_70;

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
  parse_tree__prog_type__type_to_ctor_det_2_p_0(Type_10, &TypeCtor_24);
  {
    Cell_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Cell_25, 0) = ((MR_Box) (TypeCtor_24));
  }
  ConsId_26 = parse_tree__prog_type__cell_cons_id_1_f_0(Cell_25);
  {
    TypeInfoRHS_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), TypeInfoRHS_27, 0) = ((MR_Box) (ConsId_26));
    MR_hl_field(MR_mktag(1), TypeInfoRHS_27, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(MR_mktag(1), TypeInfoRHS_27, 2) = ((MR_Box) (ArgVars_11));
  }
  mercury__list__length_2_p_0((MR_Word) (&check_hlds__polymorphism_type_info_scalar_common_1[0]), ArgVars_11, &NumArgVars_30);
  mercury__list__duplicate_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_mode_0), NumArgVars_30, ((MR_Box) (&check_hlds__polymorphism_type_info_scalar_common_4[0])), &ArgModes_31);
  {
    Unification_32 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Unification_32, 0) = ((MR_Box) (*TypeInfoVar_13));
    MR_hl_field(MR_mktag(0), Unification_32, 1) = ((MR_Box) (ConsId_26));
    MR_hl_field(MR_mktag(0), Unification_32, 2) = ((MR_Box) (ArgVars_11));
    MR_hl_field(MR_mktag(0), Unification_32, 3) = ((MR_Box) (ArgModes_31));
    MR_hl_field(MR_mktag(0), Unification_32, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(0), Unification_32, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(MR_mktag(0), Unification_32, 6) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Unify_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Unify_35, 0) = ((MR_Box) (*TypeInfoVar_13));
    MR_hl_field(MR_mktag(1), Unify_35, 1) = ((MR_Box) (TypeInfoRHS_27));
    MR_hl_field(MR_mktag(1), Unify_35, 2) = ((MR_Box) (&check_hlds__polymorphism_type_info_scalar_common_4[0]));
    MR_hl_field(MR_mktag(1), Unify_35, 3) = ((MR_Box) (Unification_32));
    MR_hl_field(MR_mktag(1), Unify_35, 4) = ((MR_Box) (&check_hlds__polymorphism_type_info_scalar_common_1[4]));
  }
  {
    Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) (*TypeInfoVar_13));
    MR_hl_field(MR_mktag(1), Var_57, 1) = ((MR_Box) (ArgVars_11));
  }
  parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_57, &NonLocals_36);
  mercury__list__duplicate_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), NumArgVars_30, ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__polymorphism_type_info_scalar_common_2[2]))), &ArgInsts_37);
  InstConsId_38 = parse_tree__prog_type__cell_inst_cons_id_2_f_0(Cell_25, NumArgVars_30);
  Var_61 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0));
  {
    Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (Var_61));
  }
  {
    InstResults_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), InstResults_39, 0) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 2)) | (MR_Unsigned) ((MR_Integer) 0)));
    MR_hl_field(MR_mktag(1), InstResults_39, 1) = ((MR_Box) (Var_60));
    MR_hl_field(MR_mktag(1), InstResults_39, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(1), InstResults_39, 3) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(1), InstResults_39, 4) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_67 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_67, 0) = ((MR_Box) (InstConsId_38));
    MR_hl_field(MR_mktag(0), Var_67, 1) = ((MR_Box) (ArgInsts_37));
  }
  {
    Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_66, 0) = ((MR_Box) (Var_67));
    MR_hl_field(MR_mktag(1), Var_66, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    TypeInfoVarInst_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), TypeInfoVarInst_40, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(3), TypeInfoVarInst_40, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(3), TypeInfoVarInst_40, 2) = ((MR_Box) (InstResults_39));
    MR_hl_field(MR_mktag(3), TypeInfoVarInst_40, 3) = ((MR_Box) (Var_66));
  }
  {
    Var_70 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_70, 0) = ((MR_Box) (*TypeInfoVar_13));
    MR_hl_field(MR_mktag(0), Var_70, 1) = ((MR_Box) (TypeInfoVarInst_40));
  }
  {
    Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) (Var_70));
    MR_hl_field(MR_mktag(1), Var_69, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  InstMapDelta_41 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(Var_69);
  hlds__hlds_goal__goal_info_init_5_p_0(NonLocals_36, InstMapDelta_41, (MR_Integer) 0, (MR_Integer) 0, &GoalInfo_42);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *TypeInfoGoal_14 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Unify_35));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_42));
  }
}

static MR_bool MR_CALL 
check_hlds__polymorphism_type_info__polymorphism_make_type_info_vars_mi_10_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__polymorphism_type_info__IntroducedFrom__pred__polymorphism_make_type_info_vars_mi__372__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
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
  MR_Word VarsMCAs_34;

  check_hlds__polymorphism_info__create_poly_info_4_p_0(STATE_VARIABLE_ModuleInfo_0_21, STATE_VARIABLE_PredInfo_0_23, STATE_VARIABLE_ProcInfo_0_25, &PolyInfo0_18);
  check_hlds__polymorphism_type_info__polymorphism_do_make_type_info_vars_6_p_0(Types_11, Context_12, &VarsMCAs_34, ExtraGoals_14, PolyInfo0_18, &PolyInfo_19);
  mercury__assoc_list__keys_2_p_0((MR_Word) (&check_hlds__polymorphism_type_info_scalar_common_1[0]), (MR_Word) (&check_hlds__polymorphism_type_info_scalar_common_1[1]), VarsMCAs_34, Vars_13);
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

  succeeded = check_hlds__polymorphism_type_info__IntroducedFrom__pred__polymorphism_make_type_info_var_mi__364__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
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
  MR_Word VarMCA_34;

  check_hlds__polymorphism_info__create_poly_info_4_p_0(STATE_VARIABLE_ModuleInfo_0_21, STATE_VARIABLE_PredInfo_0_23, STATE_VARIABLE_ProcInfo_0_25, &PolyInfo0_18);
  check_hlds__polymorphism_type_info__polymorphism_do_make_type_info_var_6_p_0(Type_11, Context_12, &VarMCA_34, ExtraGoals_14, PolyInfo0_18, &PolyInfo_19);
  *Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), VarMCA_34, (MR_Integer) 0))));
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
  MR_Word VarMCA_12;

  check_hlds__polymorphism_type_info__polymorphism_do_make_type_info_var_6_p_0(Type_7, Context_8, &VarMCA_12, ExtraGoals_10, STATE_VARIABLE_Info_0_14, STATE_VARIABLE_Info_15);
  *Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), VarMCA_12, (MR_Integer) 0))));
}

static void MR_CALL 
check_hlds__polymorphism_type_info__polymorphism_do_make_type_info_var_6_p_0(
  MR_Word Type_7,
  MR_Word Context_8,
  MR_Word * VarMCA_9,
  MR_Word * ExtraGoals_10,
  MR_Word STATE_VARIABLE_Info_0_34,
  MR_Word * STATE_VARIABLE_Info_35)
{
  MR_bool succeeded;
  MR_Word TypeCtor_12;
  MR_Word TypeArgs_13;

  succeeded = parse_tree__prog_type__type_has_variable_arity_ctor_3_p_0(Type_7, &TypeCtor_12, &TypeArgs_13);
  if (succeeded)
  {
    MR_Word TypeInfoVarMap0_45;
    MR_Word OldTypeInfoVarMCA_47;
    MR_Word TypeInfo_38_61;
    MR_Word TypeInfo_39_62;
    MR_Word TypeCtorVarMap0_46;
    MR_Box conv0_TypeCtorVarMap0_46;
    MR_Box conv1_OldTypeInfoVarMCA_47;

    check_hlds__polymorphism_info__poly_info_get_type_info_var_map_2_p_0(STATE_VARIABLE_Info_0_34, &TypeInfoVarMap0_45);
    succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&check_hlds__polymorphism_type_info_scalar_common_2[1]), TypeInfoVarMap0_45, ((MR_Box) (TypeCtor_12)), &conv0_TypeCtorVarMap0_46);
    if (succeeded)
    {
      TypeCtorVarMap0_46 = ((MR_Word) (conv0_TypeCtorVarMap0_46));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      TypeInfo_38_61 = (MR_Word) (&check_hlds__polymorphism_type_info_scalar_common_1[3]);
      TypeInfo_39_62 = (MR_Word) (&check_hlds__polymorphism_type_info_scalar_common_2[0]);
      succeeded = mercury__map__search_3_p_0(TypeInfo_38_61, TypeInfo_39_62, TypeCtorVarMap0_46, ((MR_Box) (TypeArgs_13)), &conv1_OldTypeInfoVarMCA_47);
      if (succeeded)
      {
        OldTypeInfoVarMCA_47 = ((MR_Word) (conv1_OldTypeInfoVarMCA_47));
        succeeded = MR_TRUE;
      }
    }
    if (succeeded)
    {
      MR_Integer NumReuses_48;
      MR_Integer Var_55;

      check_hlds__polymorphism_info__poly_info_get_num_reuses_2_p_0(STATE_VARIABLE_Info_0_34, &NumReuses_48);
      Var_55 = (MR_Integer) ((MR_Unsigned) NumReuses_48 + (MR_Unsigned) 1);
      check_hlds__polymorphism_info__poly_info_set_num_reuses_3_p_0(Var_55, STATE_VARIABLE_Info_0_34, STATE_VARIABLE_Info_35);
      *VarMCA_9 = OldTypeInfoVarMCA_47;
      *ExtraGoals_10 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_Word TypeInfoVar_49;
      MR_Word TypeInfoConstArg_50;
      MR_Word TypeInfoVarMap1_51;
      MR_Word TypeInfoVarMap_54;
      MR_Word STATE_VARIABLE_Info_33_57;
      MR_Word TypeCtorVarMap1_52;
      MR_Box conv2_TypeCtorVarMap1_52;

      check_hlds__polymorphism_type_info__polymorphism_construct_type_info_10_p_0(Type_7, TypeCtor_12, TypeArgs_13, (MR_Integer) 1, Context_8, &TypeInfoVar_49, &TypeInfoConstArg_50, ExtraGoals_10, STATE_VARIABLE_Info_0_34, &STATE_VARIABLE_Info_33_57);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        *VarMCA_9 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (TypeInfoVar_49));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (TypeInfoConstArg_50));
      }
      check_hlds__polymorphism_info__poly_info_get_type_info_var_map_2_p_0(STATE_VARIABLE_Info_33_57, &TypeInfoVarMap1_51);
      succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&check_hlds__polymorphism_type_info_scalar_common_2[1]), TypeInfoVarMap1_51, ((MR_Box) (TypeCtor_12)), &conv2_TypeCtorVarMap1_52);
      if (succeeded)
      {
        TypeCtorVarMap1_52 = ((MR_Word) (conv2_TypeCtorVarMap1_52));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word TypeCtorVarMap_53;

        mercury__map__det_insert_4_p_0((MR_Word) (&check_hlds__polymorphism_type_info_scalar_common_1[3]), (MR_Word) (&check_hlds__polymorphism_type_info_scalar_common_2[0]), ((MR_Box) (TypeArgs_13)), ((MR_Box) (*VarMCA_9)), TypeCtorVarMap1_52, &TypeCtorVarMap_53);
        mercury__map__det_update_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&check_hlds__polymorphism_type_info_scalar_common_2[1]), ((MR_Box) (TypeCtor_12)), ((MR_Box) (TypeCtorVarMap_53)), TypeInfoVarMap1_51, &TypeInfoVarMap_54);
      }
      else
      {
        MR_Word TypeCtorVarMap_58;

        TypeCtorVarMap_58 = mercury__map__singleton_2_f_0((MR_Word) (&check_hlds__polymorphism_type_info_scalar_common_1[3]), (MR_Word) (&check_hlds__polymorphism_type_info_scalar_common_2[0]), ((MR_Box) (TypeArgs_13)), ((MR_Box) (*VarMCA_9)));
        mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&check_hlds__polymorphism_type_info_scalar_common_2[1]), ((MR_Box) (TypeCtor_12)), ((MR_Box) (TypeCtorVarMap_58)), TypeInfoVarMap1_51, &TypeInfoVarMap_54);
      }
      check_hlds__polymorphism_info__poly_info_set_type_info_var_map_3_p_0(TypeInfoVarMap_54, STATE_VARIABLE_Info_33_57, STATE_VARIABLE_Info_35);
    }
  }
  else
    switch (MR_tag((MR_Word) Type_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word TypeVar_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Type_7, (MR_Integer) 0))));
          MR_Word TypeInfoLocn_32;
          MR_Word Var_33;
          MR_Word STATE_VARIABLE_Info_38_38;

          check_hlds__polymorphism_type_info__poly_get_type_info_locn_4_p_0(TypeVar_30, &TypeInfoLocn_32, STATE_VARIABLE_Info_0_34, &STATE_VARIABLE_Info_38_38);
          if (((MR_tag((MR_Word) TypeInfoLocn_32)) == (MR_Integer) 0))
          {
            Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeInfoLocn_32, (MR_Integer) 0))));
            *ExtraGoals_10 = (MR_Word) ((MR_Unsigned) 0U);
            *STATE_VARIABLE_Info_35 = STATE_VARIABLE_Info_38_38;
          }
          else
          {
            MR_Word TypeClassInfoVar_102 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeInfoLocn_32, (MR_Integer) 0))));
            MR_Integer Index_103 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), TypeInfoLocn_32, (MR_Integer) 1))));

            check_hlds__polymorphism_type_info__polymorphism_extract_type_info_8_p_0(TypeVar_30, TypeClassInfoVar_102, Index_103, Context_8, ExtraGoals_10, &Var_33, STATE_VARIABLE_Info_38_38, STATE_VARIABLE_Info_35);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            *VarMCA_9 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_33));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          MR_Word TypeCtor_43;
          MR_Word TypeArgs_44;
          MR_Word TypeInfoVarMap0_73;
          MR_Word OldTypeInfoVarMCA_75;
          MR_Word TypeInfo_38_89;
          MR_Word TypeInfo_39_90;
          MR_Word TypeCtorVarMap0_74;
          MR_Box conv3_TypeCtorVarMap0_74;
          MR_Box conv4_OldTypeInfoVarMCA_75;

          parse_tree__prog_type__type_to_ctor_and_args_det_3_p_0(Type_7, &TypeCtor_43, &TypeArgs_44);
          check_hlds__polymorphism_info__poly_info_get_type_info_var_map_2_p_0(STATE_VARIABLE_Info_0_34, &TypeInfoVarMap0_73);
          succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&check_hlds__polymorphism_type_info_scalar_common_2[1]), TypeInfoVarMap0_73, ((MR_Box) (TypeCtor_43)), &conv3_TypeCtorVarMap0_74);
          if (succeeded)
          {
            TypeCtorVarMap0_74 = ((MR_Word) (conv3_TypeCtorVarMap0_74));
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            TypeInfo_38_89 = (MR_Word) (&check_hlds__polymorphism_type_info_scalar_common_1[3]);
            TypeInfo_39_90 = (MR_Word) (&check_hlds__polymorphism_type_info_scalar_common_2[0]);
            succeeded = mercury__map__search_3_p_0(TypeInfo_38_89, TypeInfo_39_90, TypeCtorVarMap0_74, ((MR_Box) (TypeArgs_44)), &conv4_OldTypeInfoVarMCA_75);
            if (succeeded)
            {
              OldTypeInfoVarMCA_75 = ((MR_Word) (conv4_OldTypeInfoVarMCA_75));
              succeeded = MR_TRUE;
            }
          }
          if (succeeded)
          {
            MR_Integer NumReuses_76;
            MR_Integer Var_83;

            check_hlds__polymorphism_info__poly_info_get_num_reuses_2_p_0(STATE_VARIABLE_Info_0_34, &NumReuses_76);
            Var_83 = (MR_Integer) ((MR_Unsigned) NumReuses_76 + (MR_Unsigned) 1);
            check_hlds__polymorphism_info__poly_info_set_num_reuses_3_p_0(Var_83, STATE_VARIABLE_Info_0_34, STATE_VARIABLE_Info_35);
            *VarMCA_9 = OldTypeInfoVarMCA_75;
            *ExtraGoals_10 = (MR_Word) ((MR_Unsigned) 0U);
          }
          else
          {
            MR_Word TypeInfoVar_77;
            MR_Word TypeInfoConstArg_78;
            MR_Word TypeInfoVarMap1_79;
            MR_Word TypeInfoVarMap_82;
            MR_Word STATE_VARIABLE_Info_33_85;
            MR_Word TypeCtorVarMap1_80;
            MR_Box conv5_TypeCtorVarMap1_80;

            check_hlds__polymorphism_type_info__polymorphism_construct_type_info_10_p_0(Type_7, TypeCtor_43, TypeArgs_44, (MR_Integer) 0, Context_8, &TypeInfoVar_77, &TypeInfoConstArg_78, ExtraGoals_10, STATE_VARIABLE_Info_0_34, &STATE_VARIABLE_Info_33_85);
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *VarMCA_9 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (TypeInfoVar_77));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (TypeInfoConstArg_78));
            }
            check_hlds__polymorphism_info__poly_info_get_type_info_var_map_2_p_0(STATE_VARIABLE_Info_33_85, &TypeInfoVarMap1_79);
            succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&check_hlds__polymorphism_type_info_scalar_common_2[1]), TypeInfoVarMap1_79, ((MR_Box) (TypeCtor_43)), &conv5_TypeCtorVarMap1_80);
            if (succeeded)
            {
              TypeCtorVarMap1_80 = ((MR_Word) (conv5_TypeCtorVarMap1_80));
              succeeded = MR_TRUE;
            }
            if (succeeded)
            {
              MR_Word TypeCtorVarMap_81;

              mercury__map__det_insert_4_p_0((MR_Word) (&check_hlds__polymorphism_type_info_scalar_common_1[3]), (MR_Word) (&check_hlds__polymorphism_type_info_scalar_common_2[0]), ((MR_Box) (TypeArgs_44)), ((MR_Box) (*VarMCA_9)), TypeCtorVarMap1_80, &TypeCtorVarMap_81);
              mercury__map__det_update_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&check_hlds__polymorphism_type_info_scalar_common_2[1]), ((MR_Box) (TypeCtor_43)), ((MR_Box) (TypeCtorVarMap_81)), TypeInfoVarMap1_79, &TypeInfoVarMap_82);
            }
            else
            {
              MR_Word TypeCtorVarMap_86;

              TypeCtorVarMap_86 = mercury__map__singleton_2_f_0((MR_Word) (&check_hlds__polymorphism_type_info_scalar_common_1[3]), (MR_Word) (&check_hlds__polymorphism_type_info_scalar_common_2[0]), ((MR_Box) (TypeArgs_44)), ((MR_Box) (*VarMCA_9)));
              mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&check_hlds__polymorphism_type_info_scalar_common_2[1]), ((MR_Box) (TypeCtor_43)), ((MR_Box) (TypeCtorVarMap_86)), TypeInfoVarMap1_79, &TypeInfoVarMap_82);
            }
            check_hlds__polymorphism_info__poly_info_set_type_info_var_map_3_p_0(TypeInfoVarMap_82, STATE_VARIABLE_Info_33_85, STATE_VARIABLE_Info_35);
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word TypeCtor_43;
          MR_Word TypeArgs_44;
          MR_Word TypeInfoVarMap0_73;
          MR_Word OldTypeInfoVarMCA_75;
          MR_Word TypeInfo_38_89;
          MR_Word TypeInfo_39_90;
          MR_Word TypeCtorVarMap0_74;
          MR_Box conv3_TypeCtorVarMap0_74;
          MR_Box conv4_OldTypeInfoVarMCA_75;

          parse_tree__prog_type__type_to_ctor_and_args_det_3_p_0(Type_7, &TypeCtor_43, &TypeArgs_44);
          check_hlds__polymorphism_info__poly_info_get_type_info_var_map_2_p_0(STATE_VARIABLE_Info_0_34, &TypeInfoVarMap0_73);
          succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&check_hlds__polymorphism_type_info_scalar_common_2[1]), TypeInfoVarMap0_73, ((MR_Box) (TypeCtor_43)), &conv3_TypeCtorVarMap0_74);
          if (succeeded)
          {
            TypeCtorVarMap0_74 = ((MR_Word) (conv3_TypeCtorVarMap0_74));
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            TypeInfo_38_89 = (MR_Word) (&check_hlds__polymorphism_type_info_scalar_common_1[3]);
            TypeInfo_39_90 = (MR_Word) (&check_hlds__polymorphism_type_info_scalar_common_2[0]);
            succeeded = mercury__map__search_3_p_0(TypeInfo_38_89, TypeInfo_39_90, TypeCtorVarMap0_74, ((MR_Box) (TypeArgs_44)), &conv4_OldTypeInfoVarMCA_75);
            if (succeeded)
            {
              OldTypeInfoVarMCA_75 = ((MR_Word) (conv4_OldTypeInfoVarMCA_75));
              succeeded = MR_TRUE;
            }
          }
          if (succeeded)
          {
            MR_Integer NumReuses_76;
            MR_Integer Var_83;

            check_hlds__polymorphism_info__poly_info_get_num_reuses_2_p_0(STATE_VARIABLE_Info_0_34, &NumReuses_76);
            Var_83 = (MR_Integer) ((MR_Unsigned) NumReuses_76 + (MR_Unsigned) 1);
            check_hlds__polymorphism_info__poly_info_set_num_reuses_3_p_0(Var_83, STATE_VARIABLE_Info_0_34, STATE_VARIABLE_Info_35);
            *VarMCA_9 = OldTypeInfoVarMCA_75;
            *ExtraGoals_10 = (MR_Word) ((MR_Unsigned) 0U);
          }
          else
          {
            MR_Word TypeInfoVar_77;
            MR_Word TypeInfoConstArg_78;
            MR_Word TypeInfoVarMap1_79;
            MR_Word TypeInfoVarMap_82;
            MR_Word STATE_VARIABLE_Info_33_85;
            MR_Word TypeCtorVarMap1_80;
            MR_Box conv5_TypeCtorVarMap1_80;

            check_hlds__polymorphism_type_info__polymorphism_construct_type_info_10_p_0(Type_7, TypeCtor_43, TypeArgs_44, (MR_Integer) 0, Context_8, &TypeInfoVar_77, &TypeInfoConstArg_78, ExtraGoals_10, STATE_VARIABLE_Info_0_34, &STATE_VARIABLE_Info_33_85);
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *VarMCA_9 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (TypeInfoVar_77));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (TypeInfoConstArg_78));
            }
            check_hlds__polymorphism_info__poly_info_get_type_info_var_map_2_p_0(STATE_VARIABLE_Info_33_85, &TypeInfoVarMap1_79);
            succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&check_hlds__polymorphism_type_info_scalar_common_2[1]), TypeInfoVarMap1_79, ((MR_Box) (TypeCtor_43)), &conv5_TypeCtorVarMap1_80);
            if (succeeded)
            {
              TypeCtorVarMap1_80 = ((MR_Word) (conv5_TypeCtorVarMap1_80));
              succeeded = MR_TRUE;
            }
            if (succeeded)
            {
              MR_Word TypeCtorVarMap_81;

              mercury__map__det_insert_4_p_0((MR_Word) (&check_hlds__polymorphism_type_info_scalar_common_1[3]), (MR_Word) (&check_hlds__polymorphism_type_info_scalar_common_2[0]), ((MR_Box) (TypeArgs_44)), ((MR_Box) (*VarMCA_9)), TypeCtorVarMap1_80, &TypeCtorVarMap_81);
              mercury__map__det_update_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&check_hlds__polymorphism_type_info_scalar_common_2[1]), ((MR_Box) (TypeCtor_43)), ((MR_Box) (TypeCtorVarMap_81)), TypeInfoVarMap1_79, &TypeInfoVarMap_82);
            }
            else
            {
              MR_Word TypeCtorVarMap_86;

              TypeCtorVarMap_86 = mercury__map__singleton_2_f_0((MR_Word) (&check_hlds__polymorphism_type_info_scalar_common_1[3]), (MR_Word) (&check_hlds__polymorphism_type_info_scalar_common_2[0]), ((MR_Box) (TypeArgs_44)), ((MR_Box) (*VarMCA_9)));
              mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&check_hlds__polymorphism_type_info_scalar_common_2[1]), ((MR_Box) (TypeCtor_43)), ((MR_Box) (TypeCtorVarMap_86)), TypeInfoVarMap1_79, &TypeInfoVarMap_82);
            }
            check_hlds__polymorphism_info__poly_info_set_type_info_var_map_3_p_0(TypeInfoVarMap_82, STATE_VARIABLE_Info_33_85, STATE_VARIABLE_Info_35);
          }
        }
        break;
    }
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
  MR_Word STATE_VARIABLE_Info_0_38,
  MR_Word * STATE_VARIABLE_Info_39)
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
  MR_Word STATE_VARIABLE_Info_41_41;
  MR_Word STATE_VARIABLE_Info_42_42;
  MR_Word Var_43;
  MR_Word STATE_VARIABLE_Info_45_45;
  MR_Word NeedTypeCtorArity_82;
  MR_Word OldTypeCtorVar_26;
  MR_Box conv0_OldTypeCtorVar_26;

  check_hlds__polymorphism_info__get_var_maps_snapshot_4_p_0((MR_String) "polymorphism_construct_type_info", &InitialVarMapsSnapshot_20, STATE_VARIABLE_Info_0_38, &STATE_VARIABLE_Info_41_41);
  check_hlds__polymorphism_type_info__polymorphism_do_make_type_info_vars_6_p_0(TypeArgs_13, Context_15, &ArgTypeInfoVarsMCAs_21, &ArgTypeInfoGoals_22, STATE_VARIABLE_Info_41_41, &STATE_VARIABLE_Info_42_42);
  TypeCtorConsId_23 = hlds__hlds_code_util__type_ctor_info_cons_id_1_f_0(TypeCtor_12);
  Var_43 = parse_tree__builtin_lib_types__type_info_type_0_f_0();
  {
    TypeCtorConsIdConstArg_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), TypeCtorConsIdConstArg_24, 0) = ((MR_Box) (TypeCtorConsId_23));
    MR_hl_field(MR_mktag(1), TypeCtorConsIdConstArg_24, 1) = ((MR_Box) (Var_43));
  }
  check_hlds__polymorphism_info__poly_info_get_const_struct_var_map_2_p_0(STATE_VARIABLE_Info_42_42, &ConstStructVarMap0_25);
  succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0), (MR_Word) (&check_hlds__polymorphism_type_info_scalar_common_1[0]), ConstStructVarMap0_25, ((MR_Box) (TypeCtorConsIdConstArg_24)), &conv0_OldTypeCtorVar_26);
  if (succeeded)
  {
    OldTypeCtorVar_26 = ((MR_Word) (conv0_OldTypeCtorVar_26));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Integer NumReuses_27;
    MR_Integer Var_44;

    check_hlds__polymorphism_info__poly_info_get_num_reuses_2_p_0(STATE_VARIABLE_Info_42_42, &NumReuses_27);
    Var_44 = (MR_Integer) ((MR_Unsigned) NumReuses_27 + (MR_Unsigned) 1);
    check_hlds__polymorphism_info__poly_info_set_num_reuses_3_p_0(Var_44, STATE_VARIABLE_Info_42_42, &STATE_VARIABLE_Info_45_45);
    TypeCtorVar_28 = OldTypeCtorVar_26;
    TypeCtorGoals_29 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Word VarSet0_30;
    MR_Word VarTypes0_31;
    MR_Word VarSet1_33;
    MR_Word VarTypes1_34;
    MR_Word RttiVarMaps1_35;
    MR_Word TypeCtorGoal_36;
    MR_Word ConstStructVarMap1_37;
    MR_Word STATE_VARIABLE_Info_49_49;
    MR_Word TypeInfoRHS_56;
    MR_Word Unification_57;
    MR_Word Unify_61;
    MR_Word NonLocals_62;
    MR_Word InstmapDelta_63;
    MR_Word GoalInfo_64;
    MR_Integer VarNum_93;
    MR_String VarNumStr_94;
    MR_String Name_96;
    MR_Word STATE_VARIABLE_VarSet_26_97;
    MR_Word Var_98;

    check_hlds__polymorphism_info__poly_info_get_varset_2_p_0(STATE_VARIABLE_Info_42_42, &VarSet0_30);
    check_hlds__polymorphism_info__poly_info_get_var_types_2_p_0(STATE_VARIABLE_Info_42_42, &VarTypes0_31);
    check_hlds__polymorphism_info__poly_info_get_rtti_varmaps_2_p_0(STATE_VARIABLE_Info_42_42, &RttiVarMaps1_35);
    mercury__varset__new_var_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &TypeCtorVar_28, VarSet0_30, &STATE_VARIABLE_VarSet_26_97);
    mercury__term__var_to_int_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeCtorVar_28, &VarNum_93);
    mercury__string__int_to_string_2_p_0(VarNum_93, &VarNumStr_94);
    Name_96 = mercury__string__f_43_43_2_f_0((MR_String) "TypeCtorInfo_", VarNumStr_94);
    mercury__varset__name_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeCtorVar_28, Name_96, STATE_VARIABLE_VarSet_26_97, &VarSet1_33);
    Var_98 = parse_tree__builtin_lib_types__type_info_type_0_f_0();
    parse_tree__vartypes__add_var_type_4_p_0(TypeCtorVar_28, Var_98, VarTypes0_31, &VarTypes1_34);
    {
      TypeInfoRHS_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), TypeInfoRHS_56, 0) = ((MR_Box) (TypeCtorConsId_23));
      MR_hl_field(MR_mktag(1), TypeInfoRHS_56, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(1), TypeInfoRHS_56, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Unification_57 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Unification_57, 0) = ((MR_Box) (TypeCtorVar_28));
      MR_hl_field(MR_mktag(0), Unification_57, 1) = ((MR_Box) (TypeCtorConsId_23));
      MR_hl_field(MR_mktag(0), Unification_57, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Unification_57, 3) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Unification_57, 4) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Unification_57, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Unification_57, 6) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Unify_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Unify_61, 0) = ((MR_Box) (TypeCtorVar_28));
      MR_hl_field(MR_mktag(1), Unify_61, 1) = ((MR_Box) (TypeInfoRHS_56));
      MR_hl_field(MR_mktag(1), Unify_61, 2) = ((MR_Box) (&check_hlds__polymorphism_type_info_scalar_common_4[0]));
      MR_hl_field(MR_mktag(1), Unify_61, 3) = ((MR_Box) (Unification_57));
      MR_hl_field(MR_mktag(1), Unify_61, 4) = ((MR_Box) (&check_hlds__polymorphism_type_info_scalar_common_1[4]));
    }
    NonLocals_62 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeCtorVar_28);
    InstmapDelta_63 = hlds__instmap__instmap_delta_bind_var_1_f_0(TypeCtorVar_28);
    hlds__hlds_goal__goal_info_init_5_p_0(NonLocals_62, InstmapDelta_63, (MR_Integer) 0, (MR_Integer) 0, &GoalInfo_64);
    {
      TypeCtorGoal_36 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeCtorGoal_36, 0) = ((MR_Box) (Unify_61));
      MR_hl_field(MR_mktag(0), TypeCtorGoal_36, 1) = ((MR_Box) (GoalInfo_64));
    }
    {
      TypeCtorGoals_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), TypeCtorGoals_29, 0) = ((MR_Box) (TypeCtorGoal_36));
      MR_hl_field(MR_mktag(1), TypeCtorGoals_29, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__map__det_insert_4_p_0((MR_Word) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0), (MR_Word) (&check_hlds__polymorphism_type_info_scalar_common_1[0]), ((MR_Box) (TypeCtorConsIdConstArg_24)), ((MR_Box) (TypeCtorVar_28)), ConstStructVarMap0_25, &ConstStructVarMap1_37);
    check_hlds__polymorphism_info__poly_info_set_const_struct_var_map_3_p_0(ConstStructVarMap1_37, STATE_VARIABLE_Info_42_42, &STATE_VARIABLE_Info_49_49);
    check_hlds__polymorphism_info__poly_info_set_varset_types_rtti_5_p_0(VarSet1_33, VarTypes1_34, RttiVarMaps1_35, STATE_VARIABLE_Info_49_49, &STATE_VARIABLE_Info_45_45);
  }
  switch (TypeCtorIsVarArity_14) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      NeedTypeCtorArity_82 = (MR_Integer) 0;
      break;
    case (MR_Integer) 1:
      {
        MR_Word ModuleInfo_83;
        MR_Word Globals_84;
        MR_Word Target_85;

        check_hlds__polymorphism_info__poly_info_get_module_info_2_p_0(STATE_VARIABLE_Info_45_45, &ModuleInfo_83);
        hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_83, &Globals_84);
        libs__globals__get_target_2_p_0(Globals_84, &Target_85);
        switch (Target_85) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            NeedTypeCtorArity_82 = (MR_Integer) 1;
            break;
          case (MR_Integer) 2:
            NeedTypeCtorArity_82 = (MR_Integer) 0;
            break;
        }
      }
      break;
  }
  succeeded = (NeedTypeCtorArity_82 == (MR_Integer) 0);
  if (succeeded)
    succeeded = (ArgTypeInfoVarsMCAs_21 == (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    MR_Word TypeCtorConstArg_86;
    MR_Word TypeInfoType_87;
    MR_Word VarSet_88;
    MR_Word VarTypes2_89;
    MR_Word VarTypes_90;
    MR_Word Var_91;

    Var_91 = parse_tree__builtin_lib_types__type_info_type_0_f_0();
    {
      TypeCtorConstArg_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), TypeCtorConstArg_86, 0) = ((MR_Box) (TypeCtorConsId_23));
      MR_hl_field(MR_mktag(1), TypeCtorConstArg_86, 1) = ((MR_Box) (Var_91));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MCA_17 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (TypeCtorConstArg_86));
    }
    *ExtraGoals_18 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ArgTypeInfoGoals_22, TypeCtorGoals_29);
    TypeInfoType_87 = parse_tree__builtin_lib_types__type_info_type_0_f_0();
    check_hlds__polymorphism_info__poly_info_get_varset_2_p_0(STATE_VARIABLE_Info_45_45, &VarSet_88);
    check_hlds__polymorphism_info__poly_info_get_var_types_2_p_0(STATE_VARIABLE_Info_45_45, &VarTypes2_89);
    parse_tree__vartypes__update_var_type_4_p_0(TypeCtorVar_28, TypeInfoType_87, VarTypes2_89, &VarTypes_90);
    check_hlds__polymorphism_info__poly_info_set_varset_types_4_p_0(VarSet_88, VarTypes_90, STATE_VARIABLE_Info_45_45, STATE_VARIABLE_Info_39);
    *Var_16 = TypeCtorVar_28;
  }
  else
    check_hlds__polymorphism_type_info__polymorphism_construct_second_type_info_cell_14_p_0(Type_11, TypeCtor_12, NeedTypeCtorArity_82, TypeCtorVar_28, TypeCtorConsId_23, TypeCtorGoals_29, ArgTypeInfoVarsMCAs_21, ArgTypeInfoGoals_22, InitialVarMapsSnapshot_20, Var_16, MCA_17, ExtraGoals_18, STATE_VARIABLE_Info_45_45, STATE_VARIABLE_Info_39);
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
    MR_Word InitialVarMapsSnapshot_50;
    MR_Word ArgTypeInfoVarsMCAs_51;
    MR_Word ArgTypeInfoGoals_52;
    MR_Word TypeCtorConsId_53;
    MR_Word TypeCtorConsIdConstArg_54;
    MR_Word ConstStructVarMap0_55;
    MR_Word TypeCtorVar_58;
    MR_Word TypeCtorGoals_59;
    MR_Word STATE_VARIABLE_Info_41_69;
    MR_Word STATE_VARIABLE_Info_42_70;
    MR_Word Var_71;
    MR_Word STATE_VARIABLE_Info_45_73;
    MR_Word OldTypeCtorVar_56;
    MR_Box conv2_OldTypeCtorVar_56;
    MR_Word TypeCtorVarMap1_25;
    MR_Box conv3_TypeCtorVarMap1_25;

    check_hlds__polymorphism_info__get_var_maps_snapshot_4_p_0((MR_String) "polymorphism_construct_type_info", &InitialVarMapsSnapshot_50, STATE_VARIABLE_Info_0_28, &STATE_VARIABLE_Info_41_69);
    check_hlds__polymorphism_type_info__polymorphism_do_make_type_info_vars_6_p_0(TypeArgs_12, Context_14, &ArgTypeInfoVarsMCAs_51, &ArgTypeInfoGoals_52, STATE_VARIABLE_Info_41_69, &STATE_VARIABLE_Info_42_70);
    TypeCtorConsId_53 = hlds__hlds_code_util__type_ctor_info_cons_id_1_f_0(TypeCtor_11);
    Var_71 = parse_tree__builtin_lib_types__type_info_type_0_f_0();
    {
      TypeCtorConsIdConstArg_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), TypeCtorConsIdConstArg_54, 0) = ((MR_Box) (TypeCtorConsId_53));
      MR_hl_field(MR_mktag(1), TypeCtorConsIdConstArg_54, 1) = ((MR_Box) (Var_71));
    }
    check_hlds__polymorphism_info__poly_info_get_const_struct_var_map_2_p_0(STATE_VARIABLE_Info_42_70, &ConstStructVarMap0_55);
    succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0), (MR_Word) (&check_hlds__polymorphism_type_info_scalar_common_1[0]), ConstStructVarMap0_55, ((MR_Box) (TypeCtorConsIdConstArg_54)), &conv2_OldTypeCtorVar_56);
    if (succeeded)
    {
      OldTypeCtorVar_56 = ((MR_Word) (conv2_OldTypeCtorVar_56));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Integer NumReuses_57;
      MR_Integer Var_72;

      check_hlds__polymorphism_info__poly_info_get_num_reuses_2_p_0(STATE_VARIABLE_Info_42_70, &NumReuses_57);
      Var_72 = (MR_Integer) ((MR_Unsigned) NumReuses_57 + (MR_Unsigned) 1);
      check_hlds__polymorphism_info__poly_info_set_num_reuses_3_p_0(Var_72, STATE_VARIABLE_Info_42_70, &STATE_VARIABLE_Info_45_73);
      TypeCtorVar_58 = OldTypeCtorVar_56;
      TypeCtorGoals_59 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_Word VarSet0_60;
      MR_Word VarTypes0_61;
      MR_Word VarSet1_63;
      MR_Word VarTypes1_64;
      MR_Word RttiVarMaps1_65;
      MR_Word TypeCtorGoal_66;
      MR_Word ConstStructVarMap1_67;
      MR_Word STATE_VARIABLE_Info_49_77;
      MR_Integer VarNum_82;
      MR_String VarNumStr_83;
      MR_String Name_85;
      MR_Word STATE_VARIABLE_VarSet_26_86;
      MR_Word Var_87;

      check_hlds__polymorphism_info__poly_info_get_varset_2_p_0(STATE_VARIABLE_Info_42_70, &VarSet0_60);
      check_hlds__polymorphism_info__poly_info_get_var_types_2_p_0(STATE_VARIABLE_Info_42_70, &VarTypes0_61);
      check_hlds__polymorphism_info__poly_info_get_rtti_varmaps_2_p_0(STATE_VARIABLE_Info_42_70, &RttiVarMaps1_65);
      mercury__varset__new_var_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &TypeCtorVar_58, VarSet0_60, &STATE_VARIABLE_VarSet_26_86);
      mercury__term__var_to_int_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeCtorVar_58, &VarNum_82);
      mercury__string__int_to_string_2_p_0(VarNum_82, &VarNumStr_83);
      Name_85 = mercury__string__f_43_43_2_f_0((MR_String) "TypeCtorInfo_", VarNumStr_83);
      mercury__varset__name_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeCtorVar_58, Name_85, STATE_VARIABLE_VarSet_26_86, &VarSet1_63);
      Var_87 = parse_tree__builtin_lib_types__type_info_type_0_f_0();
      parse_tree__vartypes__add_var_type_4_p_0(TypeCtorVar_58, Var_87, VarTypes0_61, &VarTypes1_64);
      check_hlds__polymorphism_type_info__init_const_type_ctor_info_var_from_cons_id_3_p_0(TypeCtorConsId_53, TypeCtorVar_58, &TypeCtorGoal_66);
      {
        TypeCtorGoals_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), TypeCtorGoals_59, 0) = ((MR_Box) (TypeCtorGoal_66));
        MR_hl_field(MR_mktag(1), TypeCtorGoals_59, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      mercury__map__det_insert_4_p_0((MR_Word) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0), (MR_Word) (&check_hlds__polymorphism_type_info_scalar_common_1[0]), ((MR_Box) (TypeCtorConsIdConstArg_54)), ((MR_Box) (TypeCtorVar_58)), ConstStructVarMap0_55, &ConstStructVarMap1_67);
      check_hlds__polymorphism_info__poly_info_set_const_struct_var_map_3_p_0(ConstStructVarMap1_67, STATE_VARIABLE_Info_42_70, &STATE_VARIABLE_Info_49_77);
      check_hlds__polymorphism_info__poly_info_set_varset_types_rtti_5_p_0(VarSet1_63, VarTypes1_64, RttiVarMaps1_65, STATE_VARIABLE_Info_49_77, &STATE_VARIABLE_Info_45_73);
    }
    check_hlds__polymorphism_type_info__polymorphism_maybe_construct_second_type_info_cell_14_p_0(Type_10, TypeCtor_11, TypeCtorIsVarArity_13, TypeCtorVar_58, TypeCtorConsId_53, TypeCtorGoals_59, ArgTypeInfoVarsMCAs_51, ArgTypeInfoGoals_52, InitialVarMapsSnapshot_50, &TypeInfoVar_22, &TypeInfoConstArg_23, ExtraGoals_16, STATE_VARIABLE_Info_45_73, &STATE_VARIABLE_Info_33_33);
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
    MR_Word TypeCtor_26;
    MR_Word TypeArgs_27;

    succeeded = parse_tree__prog_type__type_has_variable_arity_ctor_3_p_0(Type_11, &TypeCtor_26, &TypeArgs_27);
    if (succeeded)
      check_hlds__polymorphism_type_info__polymorphism_make_type_info_9_p_0(Type_11, TypeCtor_26, TypeArgs_27, (MR_Integer) 1, Context_2, &HeadVarMCA_17, &HeadGoals_18, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_23_23);
    else
      switch (MR_tag((MR_Word) Type_11)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word TypeVar_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Type_11, (MR_Integer) 0))));
            MR_Word TypeInfoLocn_46;
            MR_Word Var_47;
            MR_Word STATE_VARIABLE_Info_38_49;

            check_hlds__polymorphism_type_info__poly_get_type_info_locn_4_p_0(TypeVar_44, &TypeInfoLocn_46, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_38_49);
            check_hlds__polymorphism_type_info__get_type_info_from_locn_7_p_0(TypeVar_44, TypeInfoLocn_46, Context_2, &Var_47, &HeadGoals_18, STATE_VARIABLE_Info_38_49, &STATE_VARIABLE_Info_23_23);
            {
              HeadVarMCA_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), HeadVarMCA_17, 0) = ((MR_Box) (Var_47));
              MR_hl_field(MR_mktag(0), HeadVarMCA_17, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
          }
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          {
            MR_Word TypeCtor_52;
            MR_Word TypeArgs_53;

            parse_tree__prog_type__type_to_ctor_and_args_det_3_p_0(Type_11, &TypeCtor_52, &TypeArgs_53);
            check_hlds__polymorphism_type_info__polymorphism_make_type_info_9_p_0(Type_11, TypeCtor_52, TypeArgs_53, (MR_Integer) 0, Context_2, &HeadVarMCA_17, &HeadGoals_18, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_23_23);
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word TypeCtor_52;
            MR_Word TypeArgs_53;

            parse_tree__prog_type__type_to_ctor_and_args_det_3_p_0(Type_11, &TypeCtor_52, &TypeArgs_53);
            check_hlds__polymorphism_type_info__polymorphism_make_type_info_9_p_0(Type_11, TypeCtor_52, TypeArgs_53, (MR_Integer) 0, Context_2, &HeadVarMCA_17, &HeadGoals_18, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_23_23);
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
  MR_Word * Var_24,
  MR_Word * MCA_25,
  MR_Word * ExtraGoals_26,
  MR_Word STATE_VARIABLE_Info_0_37,
  MR_Word * STATE_VARIABLE_Info_38)
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

        check_hlds__polymorphism_info__poly_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_37, &ModuleInfo_29);
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
    MR_Word TypeCtorConstArg_32;
    MR_Word TypeInfoType_33;
    MR_Word VarSet_34;
    MR_Word VarTypes2_35;
    MR_Word VarTypes_36;
    MR_Word Var_39;

    Var_39 = parse_tree__builtin_lib_types__type_info_type_0_f_0();
    {
      TypeCtorConstArg_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), TypeCtorConstArg_32, 0) = ((MR_Box) (TypeCtorConsId_19));
      MR_hl_field(MR_mktag(1), TypeCtorConstArg_32, 1) = ((MR_Box) (Var_39));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MCA_25 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (TypeCtorConstArg_32));
    }
    *ExtraGoals_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ArgTypeInfoGoals_22, TypeCtorGoals_20);
    TypeInfoType_33 = parse_tree__builtin_lib_types__type_info_type_0_f_0();
    check_hlds__polymorphism_info__poly_info_get_varset_2_p_0(STATE_VARIABLE_Info_0_37, &VarSet_34);
    check_hlds__polymorphism_info__poly_info_get_var_types_2_p_0(STATE_VARIABLE_Info_0_37, &VarTypes2_35);
    parse_tree__vartypes__update_var_type_4_p_0(TypeCtorVar_18, TypeInfoType_33, VarTypes2_35, &VarTypes_36);
    check_hlds__polymorphism_info__poly_info_set_varset_types_4_p_0(VarSet_34, VarTypes_36, STATE_VARIABLE_Info_0_37, STATE_VARIABLE_Info_38);
    *Var_24 = TypeCtorVar_18;
  }
  else
    check_hlds__polymorphism_type_info__polymorphism_construct_second_type_info_cell_14_p_0(Type_15, TypeCtor_16, NeedTypeCtorArity_28, TypeCtorVar_18, TypeCtorConsId_19, TypeCtorGoals_20, ArgTypeInfoVarsMCAs_21, ArgTypeInfoGoals_22, InitialVarMapsSnapshot_23, Var_24, MCA_25, ExtraGoals_26, STATE_VARIABLE_Info_0_37, STATE_VARIABLE_Info_38);
}

static void MR_CALL 
check_hlds__polymorphism_type_info__polymorphism_construct_second_type_info_cell_14_p_0_1(
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
check_hlds__polymorphism_type_info__polymorphism_construct_second_type_info_cell_14_p_0(
  MR_Word Type_15,
  MR_Word TypeCtor_16,
  MR_Word NeedTypeCtorArity_17,
  MR_Word TypeCtorVar_18,
  MR_Word TypeCtorConsId_19,
  MR_Word TypeCtorGoals_20,
  MR_Word ArgTypeInfoVarsMCAs_21,
  MR_Word ArgTypeInfoGoals_22,
  MR_Word InitialVarMapsSnapshot_23,
  MR_Word * Var_24,
  MR_Word * MCA_25,
  MR_Word * ExtraGoals_26,
  MR_Word STATE_VARIABLE_Info_0_73,
  MR_Word * STATE_VARIABLE_Info_74)
{
  MR_bool succeeded;
  MR_Word Cell_28;
  MR_Word ConsId_29;
  MR_Word ConstStructDb0_30;
  MR_Word Enabled_31;
  MR_Word ArgTypeInfoConstArgs_32;

  {
    Cell_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Cell_28, 0) = ((MR_Box) (TypeCtor_16));
  }
  ConsId_29 = parse_tree__prog_type__cell_cons_id_1_f_0(Cell_28);
  check_hlds__polymorphism_info__poly_info_get_const_struct_db_2_p_0(STATE_VARIABLE_Info_0_73, &ConstStructDb0_30);
  hlds__const_struct__const_struct_db_get_poly_enabled_2_p_0(ConstStructDb0_30, &Enabled_31);
  succeeded = (Enabled_31 == (MR_Integer) 0);
  if (succeeded)
    succeeded = check_hlds__polymorphism_info__all_are_const_struct_args_2_p_0(ArgTypeInfoVarsMCAs_21, &ArgTypeInfoConstArgs_32);
  if (succeeded)
  {
    MR_Word TypeCtorConstArg_33;
    MR_Word TypeCtorInst_34;
    MR_Word ArgTypeInfoInsts_35;
    MR_Word StructConstArgs_40;
    MR_Word StructArgInsts_41;
    MR_Word StructType_42;
    MR_Integer NumArgs_43;
    MR_Word InstConsId_44;
    MR_Word StructInst_45;
    MR_Word DefinedWhere_46;
    MR_Word ConstStruct_47;
    MR_Integer ConstNum_48;
    MR_Word ConstStructDb_49;
    MR_Word Unification_50;
    MR_Word TypeInfoRHS_54;
    MR_Word Unify_55;
    MR_Word NonLocals_56;
    MR_Word VarInst_57;
    MR_Word InstMapDelta_58;
    MR_Word GoalInfo_59;
    MR_Word TypeInfoGoal_60;
    MR_Word Var_75;
    MR_Word Var_78;
    MR_Word Var_79;
    MR_Word Var_82;
    MR_Word Var_95;
    MR_Word Var_96;
    MR_Word Var_98;
    MR_Word STATE_VARIABLE_Info_99_99;
    MR_Word STATE_VARIABLE_Info_101_101;
    MR_Word Var_104;
    MR_Word Var_123;
    MR_Word Var_124;
    MR_Word Var_127;
    MR_Word Var_128;

    Var_75 = parse_tree__builtin_lib_types__type_info_type_0_f_0();
    {
      TypeCtorConstArg_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), TypeCtorConstArg_33, 0) = ((MR_Box) (TypeCtorConsId_19));
      MR_hl_field(MR_mktag(1), TypeCtorConstArg_33, 1) = ((MR_Box) (Var_75));
    }
    {
      Var_79 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_79, 0) = ((MR_Box) (TypeCtorConsId_19));
      MR_hl_field(MR_mktag(0), Var_79, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_78, 0) = ((MR_Box) (Var_79));
      MR_hl_field(MR_mktag(1), Var_78, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      TypeCtorInst_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), TypeCtorInst_34, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), TypeCtorInst_34, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), TypeCtorInst_34, 2) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(3), TypeCtorInst_34, 3) = ((MR_Box) (Var_78));
    }
    {
      Var_82 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_82, 0) = ((MR_Box) (&check_hlds__polymorphism_type_info_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), Var_82, 1) = ((MR_Box) (check_hlds__polymorphism_type_info__polymorphism_construct_second_type_info_cell_14_p_0_1));
      MR_hl_field(MR_mktag(0), Var_82, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_82, 3) = ((MR_Box) (ConstStructDb0_30));
    }
    mercury__list__map_3_p_0((MR_Word) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), Var_82, ArgTypeInfoConstArgs_32, &ArgTypeInfoInsts_35);
    switch (NeedTypeCtorArity_17) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            StructConstArgs_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), StructConstArgs_40, 0) = ((MR_Box) (TypeCtorConstArg_33));
            MR_hl_field(MR_mktag(1), StructConstArgs_40, 1) = ((MR_Box) (ArgTypeInfoConstArgs_32));
          }
          {
            StructArgInsts_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), StructArgInsts_41, 0) = ((MR_Box) (TypeCtorInst_34));
            MR_hl_field(MR_mktag(1), StructArgInsts_41, 1) = ((MR_Box) (ArgTypeInfoInsts_35));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer ActualArity_36;
          MR_Word ArityConsId_37;
          MR_Word ArityConstArg_38;
          MR_Word ArityInst_39;
          MR_Word Var_83;
          MR_Word Var_84;
          MR_Word Var_87;
          MR_Word Var_88;
          MR_Word Var_91;
          MR_Word Var_92;

          mercury__list__length_2_p_0((MR_Word) (&check_hlds__polymorphism_type_info_scalar_common_2[0]), ArgTypeInfoVarsMCAs_21, &ActualArity_36);
          {
            Var_83 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_83, 0) = ((MR_Box) (ActualArity_36));
          }
          {
            ArityConsId_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ArityConsId_37, 0) = ((MR_Box) ((MR_Unsigned) 5U));
            MR_hl_field(MR_mktag(3), ArityConsId_37, 1) = ((MR_Box) (Var_83));
          }
          Var_84 = parse_tree__builtin_lib_types__int_type_0_f_0();
          {
            ArityConstArg_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ArityConstArg_38, 0) = ((MR_Box) (ArityConsId_37));
            MR_hl_field(MR_mktag(1), ArityConstArg_38, 1) = ((MR_Box) (Var_84));
          }
          {
            Var_88 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_88, 0) = ((MR_Box) (ArityConsId_37));
            MR_hl_field(MR_mktag(0), Var_88, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_87, 0) = ((MR_Box) (Var_88));
            MR_hl_field(MR_mktag(1), Var_87, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            ArityInst_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ArityInst_39, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(3), ArityInst_39, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), ArityInst_39, 2) = ((MR_Box) ((MR_Unsigned) 4U));
            MR_hl_field(MR_mktag(3), ArityInst_39, 3) = ((MR_Box) (Var_87));
          }
          {
            Var_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_91, 0) = ((MR_Box) (ArityConstArg_38));
            MR_hl_field(MR_mktag(1), Var_91, 1) = ((MR_Box) (ArgTypeInfoConstArgs_32));
          }
          {
            StructConstArgs_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), StructConstArgs_40, 0) = ((MR_Box) (TypeCtorConstArg_33));
            MR_hl_field(MR_mktag(1), StructConstArgs_40, 1) = ((MR_Box) (Var_91));
          }
          {
            Var_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_92, 0) = ((MR_Box) (ArityInst_39));
            MR_hl_field(MR_mktag(1), Var_92, 1) = ((MR_Box) (ArgTypeInfoInsts_35));
          }
          {
            StructArgInsts_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), StructArgInsts_41, 0) = ((MR_Box) (TypeCtorInst_34));
            MR_hl_field(MR_mktag(1), StructArgInsts_41, 1) = ((MR_Box) (Var_92));
          }
        }
        break;
    }
    StructType_42 = parse_tree__builtin_lib_types__type_info_type_0_f_0();
    mercury__list__length_2_p_0((MR_Word) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0), StructConstArgs_40, &NumArgs_43);
    InstConsId_44 = parse_tree__prog_type__cell_inst_cons_id_2_f_0(Cell_28, NumArgs_43);
    {
      Var_96 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_96, 0) = ((MR_Box) (InstConsId_44));
      MR_hl_field(MR_mktag(0), Var_96, 1) = ((MR_Box) (StructArgInsts_41));
    }
    {
      Var_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_95, 0) = ((MR_Box) (Var_96));
      MR_hl_field(MR_mktag(1), Var_95, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      StructInst_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), StructInst_45, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), StructInst_45, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), StructInst_45, 2) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(3), StructInst_45, 3) = ((MR_Box) (Var_95));
    }
    check_hlds__polymorphism_info__poly_info_get_defined_where_2_p_0(STATE_VARIABLE_Info_0_73, &DefinedWhere_46);
    {
      ConstStruct_47 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ConstStruct_47, 0) = ((MR_Box) (ConsId_29));
      MR_hl_field(MR_mktag(0), ConstStruct_47, 1) = ((MR_Box) (StructConstArgs_40));
      MR_hl_field(MR_mktag(0), ConstStruct_47, 2) = ((MR_Box) (StructType_42));
      MR_hl_field(MR_mktag(0), ConstStruct_47, 3) = ((MR_Box) (StructInst_45));
      MR_hl_field(MR_mktag(0), ConstStruct_47, 4) = (MR_Box) ((MR_Unsigned) (DefinedWhere_46));
    }
    hlds__const_struct__lookup_insert_const_struct_4_p_0(ConstStruct_47, &ConstNum_48, ConstStructDb0_30, &ConstStructDb_49);
    {
      Var_98 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_98, 0) = ((MR_Box) (ConstNum_48));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MCA_25 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_98));
    }
    check_hlds__polymorphism_info__poly_info_set_const_struct_db_3_p_0(ConstStructDb_49, STATE_VARIABLE_Info_0_73, &STATE_VARIABLE_Info_99_99);
    check_hlds__polymorphism_info__set_var_maps_snapshot_4_p_0((MR_String) "maybe_init_second_cell", InitialVarMapsSnapshot_23, STATE_VARIABLE_Info_99_99, &STATE_VARIABLE_Info_101_101);
    check_hlds__polymorphism_type_info__new_type_info_var_5_p_0(Type_15, (MR_Integer) 0, Var_24, STATE_VARIABLE_Info_101_101, STATE_VARIABLE_Info_74);
    {
      Var_104 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_104, 0) = ((MR_Box) ((MR_Unsigned) 12U));
      MR_hl_field(MR_mktag(3), Var_104, 1) = ((MR_Box) (ConstNum_48));
    }
    {
      Unification_50 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Unification_50, 0) = ((MR_Box) (*Var_24));
      MR_hl_field(MR_mktag(0), Unification_50, 1) = ((MR_Box) (Var_104));
      MR_hl_field(MR_mktag(0), Unification_50, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Unification_50, 3) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Unification_50, 4) = ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__polymorphism_type_info_scalar_common_3[1])));
      MR_hl_field(MR_mktag(0), Unification_50, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Unification_50, 6) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      TypeInfoRHS_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), TypeInfoRHS_54, 0) = ((MR_Box) (Var_104));
      MR_hl_field(MR_mktag(1), TypeInfoRHS_54, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(1), TypeInfoRHS_54, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Unify_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Unify_55, 0) = ((MR_Box) (*Var_24));
      MR_hl_field(MR_mktag(1), Unify_55, 1) = ((MR_Box) (TypeInfoRHS_54));
      MR_hl_field(MR_mktag(1), Unify_55, 2) = ((MR_Box) (&check_hlds__polymorphism_type_info_scalar_common_4[0]));
      MR_hl_field(MR_mktag(1), Unify_55, 3) = ((MR_Box) (Unification_50));
      MR_hl_field(MR_mktag(1), Unify_55, 4) = ((MR_Box) (&check_hlds__polymorphism_type_info_scalar_common_1[4]));
    }
    NonLocals_56 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), *Var_24);
    {
      Var_124 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_124, 0) = ((MR_Box) (InstConsId_44));
      MR_hl_field(MR_mktag(0), Var_124, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_123, 0) = ((MR_Box) (Var_124));
      MR_hl_field(MR_mktag(1), Var_123, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      VarInst_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), VarInst_57, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), VarInst_57, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), VarInst_57, 2) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(3), VarInst_57, 3) = ((MR_Box) (Var_123));
    }
    {
      Var_128 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_128, 0) = ((MR_Box) (*Var_24));
      MR_hl_field(MR_mktag(0), Var_128, 1) = ((MR_Box) (VarInst_57));
    }
    {
      Var_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_127, 0) = ((MR_Box) (Var_128));
      MR_hl_field(MR_mktag(1), Var_127, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    InstMapDelta_58 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(Var_127);
    hlds__hlds_goal__goal_info_init_5_p_0(NonLocals_56, InstMapDelta_58, (MR_Integer) 0, (MR_Integer) 0, &GoalInfo_59);
    {
      TypeInfoGoal_60 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfoGoal_60, 0) = ((MR_Box) (Unify_55));
      MR_hl_field(MR_mktag(0), TypeInfoGoal_60, 1) = ((MR_Box) (GoalInfo_59));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *ExtraGoals_26 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (TypeInfoGoal_60));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
  else
  {
    MR_Word ArgTypeInfoVars_61;
    MR_Word VarSet_67;
    MR_Word VarTypes_68;
    MR_Word RttiVarMaps_69;
    MR_Word STATE_VARIABLE_Info_138_138;

    mercury__assoc_list__keys_2_p_0((MR_Word) (&check_hlds__polymorphism_type_info_scalar_common_1[0]), (MR_Word) (&check_hlds__polymorphism_type_info_scalar_common_1[1]), ArgTypeInfoVarsMCAs_21, &ArgTypeInfoVars_61);
    switch (NeedTypeCtorArity_17) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word VarSet0_70;
          MR_Word VarTypes0_71;
          MR_Word RttiVarMaps0_72;
          MR_Word Var_133;
          MR_Word Var_135;
          MR_Word Var_136;
          MR_Word TypeInfoGoal_149;

          check_hlds__polymorphism_info__poly_info_get_varset_2_p_0(STATE_VARIABLE_Info_0_73, &VarSet0_70);
          check_hlds__polymorphism_info__poly_info_get_var_types_2_p_0(STATE_VARIABLE_Info_0_73, &VarTypes0_71);
          check_hlds__polymorphism_info__poly_info_get_rtti_varmaps_2_p_0(STATE_VARIABLE_Info_0_73, &RttiVarMaps0_72);
          {
            Var_133 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_133, 0) = ((MR_Box) (TypeCtorVar_18));
            MR_hl_field(MR_mktag(1), Var_133, 1) = ((MR_Box) (ArgTypeInfoVars_61));
          }
          check_hlds__polymorphism_type_info__init_type_info_var_11_p_0(Type_15, Var_133, (MR_Word) ((MR_Unsigned) 0U), Var_24, &TypeInfoGoal_149, VarSet0_70, &VarSet_67, VarTypes0_71, &VarTypes_68, RttiVarMaps0_72, &RttiVarMaps_69);
          {
            Var_136 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_136, 0) = ((MR_Box) (TypeInfoGoal_149));
            MR_hl_field(MR_mktag(1), Var_136, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          Var_135 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ArgTypeInfoGoals_22, Var_136);
          *ExtraGoals_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), TypeCtorGoals_20, Var_135);
          STATE_VARIABLE_Info_138_138 = STATE_VARIABLE_Info_0_73;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ArityVar_62;
          MR_Word ArityGoals_63;
          MR_Word VarSet1_64;
          MR_Word VarTypes1_65;
          MR_Word RttiVarMaps1_66;
          MR_Word Var_139;
          MR_Word Var_141;
          MR_Word Var_142;
          MR_Word Var_143;
          MR_Word Var_144;
          MR_Integer ActualArity_147;
          MR_Word TypeInfoGoal_148;

          mercury__list__length_2_p_0((MR_Word) (&check_hlds__polymorphism_type_info_scalar_common_1[0]), ArgTypeInfoVars_61, &ActualArity_147);
          check_hlds__polymorphism_info__get_poly_const_5_p_0(ActualArity_147, &ArityVar_62, &ArityGoals_63, STATE_VARIABLE_Info_0_73, &STATE_VARIABLE_Info_138_138);
          check_hlds__polymorphism_info__poly_info_get_varset_2_p_0(STATE_VARIABLE_Info_138_138, &VarSet1_64);
          check_hlds__polymorphism_info__poly_info_get_var_types_2_p_0(STATE_VARIABLE_Info_138_138, &VarTypes1_65);
          check_hlds__polymorphism_info__poly_info_get_rtti_varmaps_2_p_0(STATE_VARIABLE_Info_138_138, &RttiVarMaps1_66);
          {
            Var_141 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_141, 0) = ((MR_Box) (ArityVar_62));
            MR_hl_field(MR_mktag(1), Var_141, 1) = ((MR_Box) (ArgTypeInfoVars_61));
          }
          {
            Var_139 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_139, 0) = ((MR_Box) (TypeCtorVar_18));
            MR_hl_field(MR_mktag(1), Var_139, 1) = ((MR_Box) (Var_141));
          }
          check_hlds__polymorphism_type_info__init_type_info_var_11_p_0(Type_15, Var_139, (MR_Word) ((MR_Unsigned) 0U), Var_24, &TypeInfoGoal_148, VarSet1_64, &VarSet_67, VarTypes1_65, &VarTypes_68, RttiVarMaps1_66, &RttiVarMaps_69);
          {
            Var_144 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_144, 0) = ((MR_Box) (TypeInfoGoal_148));
            MR_hl_field(MR_mktag(1), Var_144, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          Var_143 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ArgTypeInfoGoals_22, Var_144);
          Var_142 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ArityGoals_63, Var_143);
          *ExtraGoals_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), TypeCtorGoals_20, Var_142);
        }
        break;
    }
    check_hlds__polymorphism_info__poly_info_set_varset_types_rtti_5_p_0(VarSet_67, VarTypes_68, RttiVarMaps_69, STATE_VARIABLE_Info_138_138, STATE_VARIABLE_Info_74);
    *MCA_25 = (MR_Word) ((MR_Unsigned) 0U);
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
  MR_Word TypeCtor_30;
  MR_Word Cell_31;
  MR_Word ConsId_32;
  MR_Word TypeInfoRHS_33;
  MR_Integer NumArgVars_36;
  MR_Word ArgModes_37;
  MR_Word Unification_38;
  MR_Word Unify_41;
  MR_Word NonLocals_42;
  MR_Word ArgInsts_43;
  MR_Word InstConsId_44;
  MR_Word InstResults_45;
  MR_Word TypeInfoVarInst_46;
  MR_Word InstMapDelta_47;
  MR_Word GoalInfo_48;
  MR_Word Var_63;
  MR_Word Var_66;
  MR_Word Var_67;
  MR_Word Var_72;
  MR_Word Var_73;
  MR_Word Var_75;
  MR_Word Var_76;

  if ((MaybePreferredVar_14 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Integer VarNum_85;
    MR_String VarNumStr_86;
    MR_String Name_88;
    MR_Word STATE_VARIABLE_VarSet_26_89;
    MR_Word Var_90;

    mercury__varset__new_var_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeInfoVar_15, STATE_VARIABLE_VarSet_0_20, &STATE_VARIABLE_VarSet_26_89);
    mercury__term__var_to_int_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), *TypeInfoVar_15, &VarNum_85);
    mercury__string__int_to_string_2_p_0(VarNum_85, &VarNumStr_86);
    hlds__hlds_rtti__rtti_det_insert_type_info_type_4_p_0(*TypeInfoVar_15, Type_12, STATE_VARIABLE_RttiVarMaps_0_24, STATE_VARIABLE_RttiVarMaps_25);
    Name_88 = mercury__string__f_43_43_2_f_0((MR_String) "TypeInfo_", VarNumStr_86);
    mercury__varset__name_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), *TypeInfoVar_15, Name_88, STATE_VARIABLE_VarSet_26_89, STATE_VARIABLE_VarSet_21);
    Var_90 = parse_tree__builtin_lib_types__type_info_type_0_f_0();
    parse_tree__vartypes__add_var_type_4_p_0(*TypeInfoVar_15, Var_90, STATE_VARIABLE_VarTypes_0_22, STATE_VARIABLE_VarTypes_23);
  }
  else
  {
    *TypeInfoVar_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePreferredVar_14, (MR_Integer) 0))));
    *STATE_VARIABLE_VarSet_21 = STATE_VARIABLE_VarSet_0_20;
    *STATE_VARIABLE_VarTypes_23 = STATE_VARIABLE_VarTypes_0_22;
    *STATE_VARIABLE_RttiVarMaps_25 = STATE_VARIABLE_RttiVarMaps_0_24;
  }
  parse_tree__prog_type__type_to_ctor_det_2_p_0(Type_12, &TypeCtor_30);
  {
    Cell_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Cell_31, 0) = ((MR_Box) (TypeCtor_30));
  }
  ConsId_32 = parse_tree__prog_type__cell_cons_id_1_f_0(Cell_31);
  {
    TypeInfoRHS_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), TypeInfoRHS_33, 0) = ((MR_Box) (ConsId_32));
    MR_hl_field(MR_mktag(1), TypeInfoRHS_33, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(MR_mktag(1), TypeInfoRHS_33, 2) = ((MR_Box) (ArgVars_13));
  }
  mercury__list__length_2_p_0((MR_Word) (&check_hlds__polymorphism_type_info_scalar_common_1[0]), ArgVars_13, &NumArgVars_36);
  mercury__list__duplicate_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_mode_0), NumArgVars_36, ((MR_Box) (&check_hlds__polymorphism_type_info_scalar_common_4[0])), &ArgModes_37);
  {
    Unification_38 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Unification_38, 0) = ((MR_Box) (*TypeInfoVar_15));
    MR_hl_field(MR_mktag(0), Unification_38, 1) = ((MR_Box) (ConsId_32));
    MR_hl_field(MR_mktag(0), Unification_38, 2) = ((MR_Box) (ArgVars_13));
    MR_hl_field(MR_mktag(0), Unification_38, 3) = ((MR_Box) (ArgModes_37));
    MR_hl_field(MR_mktag(0), Unification_38, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(0), Unification_38, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(MR_mktag(0), Unification_38, 6) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Unify_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Unify_41, 0) = ((MR_Box) (*TypeInfoVar_15));
    MR_hl_field(MR_mktag(1), Unify_41, 1) = ((MR_Box) (TypeInfoRHS_33));
    MR_hl_field(MR_mktag(1), Unify_41, 2) = ((MR_Box) (&check_hlds__polymorphism_type_info_scalar_common_4[0]));
    MR_hl_field(MR_mktag(1), Unify_41, 3) = ((MR_Box) (Unification_38));
    MR_hl_field(MR_mktag(1), Unify_41, 4) = ((MR_Box) (&check_hlds__polymorphism_type_info_scalar_common_1[4]));
  }
  {
    Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_63, 0) = ((MR_Box) (*TypeInfoVar_15));
    MR_hl_field(MR_mktag(1), Var_63, 1) = ((MR_Box) (ArgVars_13));
  }
  parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_63, &NonLocals_42);
  mercury__list__duplicate_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), NumArgVars_36, ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__polymorphism_type_info_scalar_common_2[2]))), &ArgInsts_43);
  InstConsId_44 = parse_tree__prog_type__cell_inst_cons_id_2_f_0(Cell_31, NumArgVars_36);
  Var_67 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0));
  {
    Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_66, 0) = ((MR_Box) (Var_67));
  }
  {
    InstResults_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), InstResults_45, 0) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 2)) | (MR_Unsigned) ((MR_Integer) 0)));
    MR_hl_field(MR_mktag(1), InstResults_45, 1) = ((MR_Box) (Var_66));
    MR_hl_field(MR_mktag(1), InstResults_45, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(1), InstResults_45, 3) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(1), InstResults_45, 4) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_73 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_73, 0) = ((MR_Box) (InstConsId_44));
    MR_hl_field(MR_mktag(0), Var_73, 1) = ((MR_Box) (ArgInsts_43));
  }
  {
    Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_72, 0) = ((MR_Box) (Var_73));
    MR_hl_field(MR_mktag(1), Var_72, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    TypeInfoVarInst_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), TypeInfoVarInst_46, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(3), TypeInfoVarInst_46, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(3), TypeInfoVarInst_46, 2) = ((MR_Box) (InstResults_45));
    MR_hl_field(MR_mktag(3), TypeInfoVarInst_46, 3) = ((MR_Box) (Var_72));
  }
  {
    Var_76 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_76, 0) = ((MR_Box) (*TypeInfoVar_15));
    MR_hl_field(MR_mktag(0), Var_76, 1) = ((MR_Box) (TypeInfoVarInst_46));
  }
  {
    Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_75, 0) = ((MR_Box) (Var_76));
    MR_hl_field(MR_mktag(1), Var_75, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  InstMapDelta_47 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(Var_75);
  hlds__hlds_goal__goal_info_init_5_p_0(NonLocals_42, InstMapDelta_47, (MR_Integer) 0, (MR_Integer) 0, &GoalInfo_48);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *TypeInfoGoal_16 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Unify_41));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_48));
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
  MR_Integer VarNum_63;
  MR_String VarNumStr_64;
  MR_String Name_66;
  MR_Word STATE_VARIABLE_VarSet_26_67;
  MR_Word Var_68;

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
  mercury__varset__new_var_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeInfoVar_22, STATE_VARIABLE_VarSet_39_39, &STATE_VARIABLE_VarSet_26_67);
  mercury__term__var_to_int_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), *TypeInfoVar_22, &VarNum_63);
  mercury__string__int_to_string_2_p_0(VarNum_63, &VarNumStr_64);
  hlds__hlds_rtti__rtti_det_insert_type_info_type_4_p_0(*TypeInfoVar_22, Type_30, STATE_VARIABLE_RttiVarMaps_0_36, STATE_VARIABLE_RttiVarMaps_37);
  Name_66 = mercury__string__f_43_43_2_f_0((MR_String) "TypeInfo_", VarNumStr_64);
  mercury__varset__name_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), *TypeInfoVar_22, Name_66, STATE_VARIABLE_VarSet_26_67, STATE_VARIABLE_VarSet_33);
  Var_68 = parse_tree__builtin_lib_types__type_info_type_0_f_0();
  parse_tree__vartypes__add_var_type_4_p_0(*TypeInfoVar_22, Var_68, STATE_VARIABLE_VarTypes_40_40, STATE_VARIABLE_VarTypes_35);
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
    MR_Word VarSet0_20;
    MR_Word VarTypes0_21;
    MR_Word RttiVarMaps0_22;
    MR_Word VarSet_23;
    MR_Word VarTypes_24;
    MR_Word RttiVarMaps_25;
    MR_Integer VarNum_26;
    MR_String VarNumStr_27;
    MR_String Name_29;
    MR_Word STATE_VARIABLE_VarSet_26_30;
    MR_Word Var_31;

    check_hlds__polymorphism_info__poly_info_get_tvar_kind_map_2_p_0(STATE_VARIABLE_Info_0_16, &TVarKindMap_10);
    parse_tree__prog_data__get_tvar_kind_3_p_0(TVarKindMap_10, TypeVar_5, &Kind_11);
    {
      Type_12 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Type_12, 0) = ((MR_Box) (TypeVar_5));
      MR_hl_field(MR_mktag(0), Type_12, 1) = ((MR_Box) (Kind_11));
    }
    check_hlds__polymorphism_info__poly_info_get_varset_2_p_0(STATE_VARIABLE_Info_0_16, &VarSet0_20);
    check_hlds__polymorphism_info__poly_info_get_var_types_2_p_0(STATE_VARIABLE_Info_0_16, &VarTypes0_21);
    check_hlds__polymorphism_info__poly_info_get_rtti_varmaps_2_p_0(STATE_VARIABLE_Info_0_16, &RttiVarMaps0_22);
    mercury__varset__new_var_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &Var_13, VarSet0_20, &STATE_VARIABLE_VarSet_26_30);
    mercury__term__var_to_int_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_13, &VarNum_26);
    mercury__string__int_to_string_2_p_0(VarNum_26, &VarNumStr_27);
    hlds__hlds_rtti__rtti_det_insert_type_info_type_4_p_0(Var_13, Type_12, RttiVarMaps0_22, &RttiVarMaps_25);
    Name_29 = mercury__string__f_43_43_2_f_0((MR_String) "TypeInfo_", VarNumStr_27);
    mercury__varset__name_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_13, Name_29, STATE_VARIABLE_VarSet_26_30, &VarSet_23);
    Var_31 = parse_tree__builtin_lib_types__type_info_type_0_f_0();
    parse_tree__vartypes__add_var_type_4_p_0(Var_13, Var_31, VarTypes0_21, &VarTypes_24);
    check_hlds__polymorphism_info__poly_info_set_varset_types_rtti_5_p_0(VarSet_23, VarTypes_24, RttiVarMaps_25, STATE_VARIABLE_Info_0_16, &STATE_VARIABLE_Info_19_19);
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
