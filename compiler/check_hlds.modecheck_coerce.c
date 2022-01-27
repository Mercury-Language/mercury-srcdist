/*
** Automatically generated from `modecheck_coerce.m'
** by the Mercury compiler,
** version rotd-2021-04-29
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


// :- module check_hlds.modecheck_coerce.
// :- implementation.

/*
INIT mercury__check_hlds__modecheck_coerce__init
ENDINIT
*/

#include "check_hlds.modecheck_coerce.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
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
#include "getopt.mih"
#include "hlds.mih"
#include "integer.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
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
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "sparse_bitset.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.inst_test.mih"
#include "check_hlds.inst_util.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.modecheck_unify.mih"
#include "check_hlds.modecheck_util.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_util.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.timestamp.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"




static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modecheck_coerce__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modecheck_coerce__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_constructor_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modecheck_coerce__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__modecheck_coerce__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__modecheck_coerce__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__modecheck_coerce__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0;

static const MR_PseudoTypeInfo check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__field_types_modecheck_coerce_result_0_0[3];

static const MR_DuFunctorDesc check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__du_functor_desc_modecheck_coerce_result_0_0;

static const MR_DuFunctorDesc check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__du_functor_desc_modecheck_coerce_result_0_1;

static const MR_DuFunctorDescPtr check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__du_stag_ordered_modecheck_coerce_result_0_0[1];

static const MR_DuFunctorDescPtr check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__du_stag_ordered_modecheck_coerce_result_0_1[1];

static const MR_DuPtagLayout check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__du_ptag_ordered_modecheck_coerce_result_0[2];

static const MR_DuFunctorDescPtr check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__du_name_ordered_modecheck_coerce_result_0[2];

static const MR_Integer check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__functor_number_map_modecheck_coerce_result_0[2];

static void MR_CALL 
check_hlds__modecheck_coerce____Compare____modecheck_coerce_result_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__modecheck_coerce____Unify____modecheck_coerce_result_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
check_hlds__modecheck_coerce__bound_check_bound_functors_in_tuple_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word ArgTypes_6,
  MR_Word BoundInst0_7,
  MR_Word * BoundInst_8);

static MR_bool MR_CALL 
check_hlds__modecheck_coerce__check_bound_functors_in_tuple_args_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static MR_bool MR_CALL 
check_hlds__modecheck_coerce__check_bound_functor_in_du_type_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word TypeCtor_7,
  MR_Word Ctors_8,
  MR_Word BoundInst0_9,
  MR_Word * BoundInst_10);

static MR_bool MR_CALL 
check_hlds__modecheck_coerce__check_bound_functors_in_ctor_args_4_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static MR_bool MR_CALL 
check_hlds__modecheck_coerce__find_first_matching_constructor_unqual_4_p_0(
  MR_String Name_5,
  MR_Integer Arity_6,
  MR_Word HeadVar__3_3,
  MR_Word * MatchingCtor_9);

static void MR_CALL 
check_hlds__modecheck_coerce__modecheck_coerce_vars_8_p_0(
  MR_Word ModuleInfo0_9,
  MR_Word X_10,
  MR_Word Y_11,
  MR_Word InstX_12,
  MR_Word InstY_13,
  MR_Word * Res_14,
  MR_Word STATE_VARIABLE_ModeInfo_0_37,
  MR_Word * STATE_VARIABLE_ModeInfo_38);

static MR_bool MR_CALL 
check_hlds__modecheck_coerce__check_bound_functors_in_type_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
check_hlds__modecheck_coerce__check_bound_functors_in_type_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word Type_6,
  MR_Word Inst0_7,
  MR_Word * Inst_8);

static MR_bool MR_CALL 
check_hlds__modecheck_coerce__check_bound_functors_in_defined_type_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
check_hlds__modecheck_coerce__check_bound_functors_in_defined_type_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word Type_6,
  MR_Word Inst0_7,
  MR_Word * Inst_8);

static void MR_CALL 
check_hlds__modecheck_coerce__make_bound_inst_for_type_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__modecheck_coerce__make_bound_inst_for_type_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word Seen0_7,
  MR_Word Uniq_8,
  MR_Word Type_9,
  MR_Word * Inst_10);

static void MR_CALL 
check_hlds__modecheck_coerce__ctor_arg_list_to_inst_list_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5);

static void MR_CALL 
check_hlds__modecheck_coerce__constructors_to_bound_insts_loop_over_ctors_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6);

static MR_bool MR_CALL 
check_hlds__modecheck_coerce____Unify____modecheck_coerce_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__modecheck_coerce____Compare____modecheck_coerce_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box check_hlds__modecheck_coerce_scalar_common_1[3][2];

static /* final */ const MR_Box check_hlds__modecheck_coerce_scalar_common_2[1][5];

static /* final */ const MR_Box check_hlds__modecheck_coerce_scalar_common_3[2][8];

static /* final */ const MR_Box check_hlds__modecheck_coerce_scalar_common_4[1][7];




static /* final */ const MR_Box check_hlds__modecheck_coerce_scalar_common_1[3][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__modecheck_coerce_scalar_common_1[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0))
  },
};

static /* final */ const MR_Box check_hlds__modecheck_coerce_scalar_common_2[1][5] = {
  /* row 0 */
  {
    (MR_Box) (((MR_Unsigned) 1U << 2)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box check_hlds__modecheck_coerce_scalar_common_3[2][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&check_hlds__modecheck_coerce__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_uniqueness_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&check_hlds__modecheck_coerce__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_constructor_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0))
  },
};

static /* final */ const MR_Box check_hlds__modecheck_coerce_scalar_common_4[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&check_hlds__modecheck_coerce__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modecheck_coerce__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modecheck_coerce__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_constructor_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modecheck_coerce__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__modecheck_coerce__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__modecheck_coerce__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&check_hlds__modecheck_coerce__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__modecheck_coerce__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0)
  }
};

static const MR_PseudoTypeInfo check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__field_types_modecheck_coerce_result_0_0[3] = {
  (MR_PseudoTypeInfo) (&check_hlds__modecheck_coerce__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&check_hlds__modecheck_coerce__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0),
  (MR_PseudoTypeInfo) (&check_hlds__modecheck_util__check_hlds__modecheck_util__type_ctor_info_extra_goals_0)
};

static const MR_DuFunctorDesc check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__du_functor_desc_modecheck_coerce_result_0_0 = {
  (MR_String) "coerce_mode_ok",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__field_types_modecheck_coerce_result_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__du_functor_desc_modecheck_coerce_result_0_1 = {
  (MR_String) "coerce_mode_error",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(1),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__du_stag_ordered_modecheck_coerce_result_0_0[1] = {
  &check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__du_functor_desc_modecheck_coerce_result_0_1
};

static const MR_DuFunctorDescPtr check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__du_stag_ordered_modecheck_coerce_result_0_1[1] = {
  &check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__du_functor_desc_modecheck_coerce_result_0_0
};

static const MR_DuPtagLayout check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__du_ptag_ordered_modecheck_coerce_result_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__du_stag_ordered_modecheck_coerce_result_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__du_stag_ordered_modecheck_coerce_result_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__du_name_ordered_modecheck_coerce_result_0[2] = {
  &check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__du_functor_desc_modecheck_coerce_result_0_1,
  &check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__du_functor_desc_modecheck_coerce_result_0_0
};

static const MR_Integer check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__functor_number_map_modecheck_coerce_result_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__type_ctor_info_modecheck_coerce_result_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__modecheck_coerce____Unify____modecheck_coerce_result_0_0_10001)),
  ((MR_Box) (check_hlds__modecheck_coerce____Compare____modecheck_coerce_result_0_0_10001)),
  (MR_String) "check_hlds.modecheck_coerce",
  (MR_String) "modecheck_coerce_result",
  {     check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__du_name_ordered_modecheck_coerce_result_0 },
  {     check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__du_ptag_ordered_modecheck_coerce_result_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__functor_number_map_modecheck_coerce_result_0,

};

static void MR_CALL 
check_hlds__modecheck_coerce____Compare____modecheck_coerce_result_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_18 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_19 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_18 == CastY_19);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__1_1 = (MR_Integer) 0;
      else
        *HeadVar__1_1 = (MR_Integer) 2;
    else
    {
      MR_Word Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
        MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
        MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 2))));
        MR_Word SubResult1_6;

        mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__modecheck_coerce_scalar_common_1[1]), &SubResult1_6, ((MR_Box) (Var_25)), ((MR_Box) (ArgY1_5)));
        succeeded = (SubResult1_6 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult1_6;
        else
        {
          MR_Word SubResult2_9;

          mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__modecheck_coerce_scalar_common_1[2]), &SubResult2_9, ((MR_Box) (Var_24)), ((MR_Box) (ArgY2_8)));
          succeeded = (SubResult2_9 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult2_9;
          else
            check_hlds__modecheck_util____Compare____extra_goals_0_0(HeadVar__1_1, Var_23, ArgY3_11);
        }
      }
    }
  }
}

static MR_bool MR_CALL 
check_hlds__modecheck_coerce____Unify____modecheck_coerce_result_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_11 == CastY_12);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
      MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

      succeeded = (CastY_10 == CastX_9);
    }
    else
    {
      MR_Word TypeInfo_13_13;
      MR_Word TypeInfo_14_14;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4;
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6;
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8;

      succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
        TypeInfo_13_13 = (MR_Word) (&check_hlds__modecheck_coerce_scalar_common_1[1]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_13_13, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
        if (succeeded)
        {
          TypeInfo_14_14 = (MR_Word) (&check_hlds__modecheck_coerce_scalar_common_1[2]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_14_14, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
          if (succeeded)
            succeeded = check_hlds__modecheck_util____Unify____extra_goals_0_0(ArgX3_7, ArgY3_8);
        }
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__modecheck_coerce__bound_check_bound_functors_in_tuple_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word ArgTypes_6,
  MR_Word BoundInst0_7,
  MR_Word * BoundInst_8)
{
  {
    MR_bool succeeded;
    MR_Word ConsId_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BoundInst0_7, (MR_Integer) 0))));
    MR_Word ArgInsts0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BoundInst0_7, (MR_Integer) 1))));
    MR_Integer Arity_11;
    MR_Word ArgInsts_12;
    MR_Integer Var_14;

    mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypes_6, &Arity_11);
    succeeded = ((((MR_tag((MR_Word) ConsId_9)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_9, (MR_Integer) 0)))) == (MR_Integer) 3)));
    if (succeeded)
    {
      Var_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_9, (MR_Integer) 1))));
      succeeded = (Arity_11 == Var_14);
      if (succeeded)
      {
        succeeded = check_hlds__modecheck_coerce__check_bound_functors_in_tuple_args_4_p_0(ModuleInfo_5, ArgTypes_6, ArgInsts0_10, &ArgInsts_12);
        if (succeeded)
        {
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            *BoundInst_8 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ConsId_9));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ArgInsts_12));
          }
          succeeded = MR_TRUE;
        }
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__modecheck_coerce__check_bound_functors_in_tuple_args_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  {
    MR_bool succeeded;

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      succeeded = (HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
        succeeded = MR_TRUE;
      }
    }
    else
    {
      MR_Word Type_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Types_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Inst0_9;
      MR_Word Insts0_10;
      MR_Word Inst_11;
      MR_Word Insts_12;

      succeeded = (HeadVar__3_3 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Inst0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
        Insts0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
        succeeded = check_hlds__modecheck_coerce__check_bound_functors_in_type_4_p_0(HeadVar__1_1, Type_7, Inst0_9, &Inst_11);
        if (succeeded)
        {
          succeeded = check_hlds__modecheck_coerce__check_bound_functors_in_tuple_args_4_p_0(HeadVar__1_1, Types_8, Insts0_10, &Insts_12);
          if (succeeded)
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__4_4 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Inst_11));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Insts_12));
            }
            succeeded = MR_TRUE;
          }
        }
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__modecheck_coerce__check_bound_functor_in_du_type_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word TypeCtor_7,
  MR_Word Ctors_8,
  MR_Word BoundInst0_9,
  MR_Word * BoundInst_10)
{
  {
    MR_bool succeeded;
    MR_Word ConsId0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BoundInst0_9, (MR_Integer) 0))));
    MR_Word ArgInsts0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BoundInst0_9, (MR_Integer) 1))));
    MR_Word SymName0_13;
    MR_Integer Arity_14;
    MR_String Name_16;
    MR_Word MatchingCtor_17;
    MR_Word SymName_20;
    MR_Word CtorArgs_21;
    MR_Word ConsId_24;
    MR_Word ArgInsts_25;

    succeeded = ((((MR_tag((MR_Word) ConsId0_11)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId0_11, (MR_Integer) 0)))) == (MR_Integer) 2)));
    if (succeeded)
    {
      SymName0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId0_11, (MR_Integer) 1))));
      Arity_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId0_11, (MR_Integer) 2))));
      Name_16 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName0_13);
      succeeded = check_hlds__modecheck_coerce__find_first_matching_constructor_unqual_4_p_0(Name_16, Arity_14, Ctors_8, &MatchingCtor_17);
      if (succeeded)
      {
        SymName_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MatchingCtor_17, (MR_Integer) 2))));
        CtorArgs_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MatchingCtor_17, (MR_Integer) 3))));
        {
          ConsId_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ConsId_24, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(MR_mktag(3), ConsId_24, 1) = ((MR_Box) (SymName_20));
          MR_hl_field(MR_mktag(3), ConsId_24, 2) = ((MR_Box) (Arity_14));
          MR_hl_field(MR_mktag(3), ConsId_24, 3) = ((MR_Box) (TypeCtor_7));
        }
        succeeded = check_hlds__modecheck_coerce__check_bound_functors_in_ctor_args_4_p_0(ModuleInfo_6, CtorArgs_21, ArgInsts0_12, &ArgInsts_25);
        if (succeeded)
        {
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            *BoundInst_10 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ConsId_24));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ArgInsts_25));
          }
          succeeded = MR_TRUE;
        }
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__modecheck_coerce__check_bound_functors_in_ctor_args_4_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  {
    MR_bool succeeded;

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      succeeded = (HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
        succeeded = MR_TRUE;
      }
    }
    else
    {
      MR_Word CtorArg_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word CtorArgs_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgInst0_9;
      MR_Word ArgInsts0_10;
      MR_Word ArgInst_11;
      MR_Word ArgInsts_12;
      MR_Word ArgType_18;

      succeeded = (HeadVar__3_3 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ArgInst0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
        ArgInsts0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
        ArgType_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorArg_7, (MR_Integer) 1))));
        succeeded = check_hlds__modecheck_coerce__check_bound_functors_in_type_4_p_0(ModuleInfo_1, ArgType_18, ArgInst0_9, &ArgInst_11);
        if (succeeded)
        {
          succeeded = check_hlds__modecheck_coerce__check_bound_functors_in_ctor_args_4_p_0(ModuleInfo_1, CtorArgs_8, ArgInsts0_10, &ArgInsts_12);
          if (succeeded)
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__4_4 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ArgInst_11));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ArgInsts_12));
            }
            succeeded = MR_TRUE;
          }
        }
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__modecheck_coerce__find_first_matching_constructor_unqual_4_p_0(
  MR_String Name_5,
  MR_Integer Arity_6,
  MR_Word HeadVar__3_3,
  MR_Word * MatchingCtor_9)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__3_3 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word Ctor_7;
    MR_Word Ctors_8;
    MR_Word ConsName_12;
    MR_Integer Var_15;
    MR_String Var_16;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      Ctor_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      Ctors_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      ConsName_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_7, (MR_Integer) 2))));
      Var_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Ctor_7, (MR_Integer) 4))));
      succeeded = (Arity_6 == Var_15);
      if (succeeded)
      {
        Var_16 = mdbcomp__sym_name__unqualify_name_1_f_0(ConsName_12);
        succeeded = (strcmp(Name_5, Var_16) == 0);
      }
      if (succeeded)
      {
        *MatchingCtor_9 = Ctor_7;
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word next_value_of_HeadVar__3_3 = Ctors_8;

        // direct tailcall eliminated
        ;
        HeadVar__3_3 = next_value_of_HeadVar__3_3;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

void MR_CALL 
check_hlds__modecheck_coerce__modecheck_coerce_8_p_0(
  MR_Word Args0_9,
  MR_Word * Args_10,
  MR_Word Modes0_11,
  MR_Word * Modes_12,
  MR_Word * Det_13,
  MR_Word * ExtraGoals_14,
  MR_Word STATE_VARIABLE_ModeInfo_0_25,
  MR_Word * STATE_VARIABLE_ModeInfo_26)
{
  {
    MR_bool succeeded = (Args0_9 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word X_16;
    MR_Word Y_17;
    MR_Word Var_27;
    MR_Word Var_28;

    if (succeeded)
    {
      X_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args0_9, (MR_Integer) 0))));
      Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args0_9, (MR_Integer) 1))));
      succeeded = (Var_27 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Y_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_27, (MR_Integer) 0))));
        Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_27, (MR_Integer) 1))));
        succeeded = (Var_28 == (MR_Word) ((MR_Unsigned) 0U));
      }
    }
    if (succeeded)
    {
      MR_Word ModuleInfo0_18;
      MR_Word InstMap_19;

      check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_0_25, &ModuleInfo0_18);
      check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_0_25, &InstMap_19);
      succeeded = hlds__instmap__instmap_is_reachable_1_p_0(InstMap_19);
      if (succeeded)
      {
        MR_Word InstX_20;
        MR_Word InstY_21;

        hlds__instmap__instmap_lookup_var_3_p_0(InstMap_19, X_16, &InstX_20);
        hlds__instmap__instmap_lookup_var_3_p_0(InstMap_19, Y_17, &InstY_21);
        succeeded = check_hlds__inst_test__inst_is_ground_2_p_0(ModuleInfo0_18, InstX_20);
        if (succeeded)
        {
          succeeded = check_hlds__inst_test__inst_is_clobbered_2_p_0(ModuleInfo0_18, InstX_20);
          succeeded = !(succeeded);
        }
        if (succeeded)
        {
          MR_Word Res_22;

          check_hlds__modecheck_coerce__modecheck_coerce_vars_8_p_0(ModuleInfo0_18, X_16, Y_17, InstX_20, InstY_21, &Res_22, STATE_VARIABLE_ModeInfo_0_25, STATE_VARIABLE_ModeInfo_26);
          if ((Res_22 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            *Args_10 = Args0_9;
            *Modes_12 = Modes0_11;
            *Det_13 = (MR_Integer) 6;
            *ExtraGoals_14 = (MR_Word) ((MR_Unsigned) 0U);
          }
          else
          {
            *Args_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Res_22, (MR_Integer) 0))));
            *Modes_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Res_22, (MR_Integer) 1))));
            *ExtraGoals_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Res_22, (MR_Integer) 2))));
            *Det_13 = (MR_Integer) 0;
          }
        }
        else
        {
          MR_Word WaitingVars_23;
          MR_Word ModeError_24;

          WaitingVars_23 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), X_16);
          {
            ModeError_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ModeError_24, 0) = ((MR_Box) ((MR_Unsigned) 12U));
            MR_hl_field(MR_mktag(3), ModeError_24, 1) = ((MR_Box) (X_16));
            MR_hl_field(MR_mktag(3), ModeError_24, 2) = ((MR_Box) (InstX_20));
          }
          check_hlds__mode_info__mode_info_error_4_p_0(WaitingVars_23, ModeError_24, STATE_VARIABLE_ModeInfo_0_25, STATE_VARIABLE_ModeInfo_26);
          *Args_10 = Args0_9;
          *Modes_12 = Modes0_11;
          *Det_13 = (MR_Integer) 6;
          *ExtraGoals_14 = (MR_Word) ((MR_Unsigned) 0U);
        }
      }
      else
      {
        *Args_10 = Args0_9;
        *Modes_12 = Modes0_11;
        *Det_13 = (MR_Integer) 6;
        *ExtraGoals_14 = (MR_Word) ((MR_Unsigned) 0U);
        *STATE_VARIABLE_ModeInfo_26 = STATE_VARIABLE_ModeInfo_0_25;
      }
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.modecheck_coerce.modecheck_coerce\'/8", (MR_String) "bad coerce");
        return;
      }
  }
}

static void MR_CALL 
check_hlds__modecheck_coerce__modecheck_coerce_vars_8_p_0(
  MR_Word ModuleInfo0_9,
  MR_Word X_10,
  MR_Word Y_11,
  MR_Word InstX_12,
  MR_Word InstY_13,
  MR_Word * Res_14,
  MR_Word STATE_VARIABLE_ModeInfo_0_37,
  MR_Word * STATE_VARIABLE_ModeInfo_38)
{
  {
    MR_bool succeeded;
    MR_Word VarTypes_16;
    MR_Word TypeX_17;
    MR_Word TypeY_18;
    MR_Word LiveX_19;
    MR_Word LiveY_20;
    MR_Word BothLive_21;
    MR_Word Uniq_22;
    MR_Word Seen0_23;
    MR_Word BoundInstForTypeX_24;
    MR_Word UnifyInstForTypeX_25;
    MR_Word ModuleInfo_27;
    MR_Word _Det_26;

    check_hlds__mode_info__mode_info_get_var_types_2_p_0(STATE_VARIABLE_ModeInfo_0_37, &VarTypes_16);
    hlds__vartypes__lookup_var_type_3_p_0(VarTypes_16, X_10, &TypeX_17);
    hlds__vartypes__lookup_var_type_3_p_0(VarTypes_16, Y_11, &TypeY_18);
    check_hlds__mode_info__mode_info_var_is_live_3_p_0(STATE_VARIABLE_ModeInfo_0_37, X_10, &LiveX_19);
    check_hlds__mode_info__mode_info_var_is_live_3_p_0(STATE_VARIABLE_ModeInfo_0_37, Y_11, &LiveY_20);
    succeeded = (LiveX_19 == (MR_Integer) 0);
    if (succeeded)
      succeeded = (LiveY_20 == (MR_Integer) 0);
    if (succeeded)
    {
      BothLive_21 = (MR_Integer) 0;
      Uniq_22 = (MR_Integer) 0;
    }
    else
    {
      BothLive_21 = (MR_Integer) 1;
      Uniq_22 = (MR_Integer) 1;
    }
    mercury__set__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), &Seen0_23);
    check_hlds__modecheck_coerce__make_bound_inst_for_type_5_p_0(ModuleInfo0_9, Seen0_23, Uniq_22, TypeX_17, &BoundInstForTypeX_24);
    succeeded = check_hlds__inst_util__abstractly_unify_inst_8_p_0(BothLive_21, BoundInstForTypeX_24, InstX_12, (MR_Integer) 0, &UnifyInstForTypeX_25, &_Det_26, ModuleInfo0_9, &ModuleInfo_27);
    if (succeeded)
    {
      MR_Word UnifyInstForTypeY_28;

      succeeded = check_hlds__modecheck_coerce__check_bound_functors_in_type_4_p_0(ModuleInfo_27, TypeY_18, UnifyInstForTypeX_25, &UnifyInstForTypeY_28);
      if (succeeded)
      {
        MR_Word ModeX_29;
        MR_Word STATE_VARIABLE_ModeInfo_40_40;
        MR_Word STATE_VARIABLE_ModeInfo_42_42;

        check_hlds__mode_info__mode_info_set_module_info_3_p_0(ModuleInfo_27, STATE_VARIABLE_ModeInfo_0_37, &STATE_VARIABLE_ModeInfo_40_40);
        check_hlds__modecheck_util__modecheck_set_var_inst_5_p_0(X_10, UnifyInstForTypeX_25, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_ModeInfo_40_40, &STATE_VARIABLE_ModeInfo_42_42);
        {
          ModeX_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ModeX_29, 0) = ((MR_Box) (InstX_12));
          MR_hl_field(MR_mktag(0), ModeX_29, 1) = ((MR_Box) (UnifyInstForTypeX_25));
        }
        succeeded = check_hlds__inst_test__inst_is_free_2_p_0(ModuleInfo0_9, InstY_13);
        if (succeeded)
        {
          MR_Word ModeY_30;
          MR_Word Var_45;
          MR_Word Var_46;
          MR_Word Var_48;
          MR_Word Var_49;

          check_hlds__modecheck_util__modecheck_set_var_inst_5_p_0(Y_11, UnifyInstForTypeY_28, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_ModeInfo_42_42, STATE_VARIABLE_ModeInfo_38);
          {
            ModeY_30 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ModeY_30, 0) = ((MR_Box) (InstY_13));
            MR_hl_field(MR_mktag(0), ModeY_30, 1) = ((MR_Box) (UnifyInstForTypeY_28));
          }
          {
            Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (Y_11));
            MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (X_10));
            MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) (Var_46));
          }
          {
            Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) (ModeY_30));
            MR_hl_field(MR_mktag(1), Var_49, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) (ModeX_29));
            MR_hl_field(MR_mktag(1), Var_48, 1) = ((MR_Box) (Var_49));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            *Res_14 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_45));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_48));
            MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
        else
        {
          MR_Word YPrime_31;
          MR_Word ExtraGoal_32;
          MR_Word ExtraGoals_33;
          MR_Word ModeYPrime_34;
          MR_Word STATE_VARIABLE_ModeInfo_52_52;
          MR_Word Var_54;
          MR_Word Var_58;
          MR_Word Var_59;
          MR_Word Var_60;
          MR_Word Var_62;
          MR_Word Var_63;
          MR_Word VarTypes0_75;
          MR_Word VarSet0_76;
          MR_Word VarSet_77;
          MR_Word VarTypes_78;
          MR_Word STATE_VARIABLE_ModeInfo_14_79;

          check_hlds__mode_info__mode_info_get_var_types_2_p_0(STATE_VARIABLE_ModeInfo_42_42, &VarTypes0_75);
          check_hlds__mode_info__mode_info_get_varset_2_p_0(STATE_VARIABLE_ModeInfo_42_42, &VarSet0_76);
          mercury__varset__new_var_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &YPrime_31, VarSet0_76, &VarSet_77);
          hlds__vartypes__add_var_type_4_p_0(YPrime_31, TypeY_18, VarTypes0_75, &VarTypes_78);
          check_hlds__mode_info__mode_info_set_varset_3_p_0(VarSet_77, STATE_VARIABLE_ModeInfo_42_42, &STATE_VARIABLE_ModeInfo_14_79);
          check_hlds__mode_info__mode_info_set_var_types_3_p_0(VarTypes_78, STATE_VARIABLE_ModeInfo_14_79, &STATE_VARIABLE_ModeInfo_52_52);
          check_hlds__modecheck_unify__create_var_var_unification_5_p_0(Y_11, YPrime_31, TypeY_18, STATE_VARIABLE_ModeInfo_52_52, &ExtraGoal_32);
          {
            Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (ExtraGoal_32));
            MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            ExtraGoals_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ExtraGoals_33, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(1), ExtraGoals_33, 1) = ((MR_Box) (Var_54));
          }
          check_hlds__modecheck_util__modecheck_set_var_inst_5_p_0(YPrime_31, UnifyInstForTypeY_28, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_ModeInfo_52_52, STATE_VARIABLE_ModeInfo_38);
          Var_58 = parse_tree__prog_mode__free_inst_0_f_0();
          {
            ModeYPrime_34 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ModeYPrime_34, 0) = ((MR_Box) (Var_58));
            MR_hl_field(MR_mktag(0), ModeYPrime_34, 1) = ((MR_Box) (UnifyInstForTypeY_28));
          }
          {
            Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (YPrime_31));
            MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (X_10));
            MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) (Var_60));
          }
          {
            Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_63, 0) = ((MR_Box) (ModeYPrime_34));
            MR_hl_field(MR_mktag(1), Var_63, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) (ModeX_29));
            MR_hl_field(MR_mktag(1), Var_62, 1) = ((MR_Box) (Var_63));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            *Res_14 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_59));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_62));
            MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (ExtraGoals_33));
          }
        }
      }
      else
      {
        MR_Word WaitingVars_35;
        MR_Word ModeError_36;

        parse_tree__set_of_var__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &WaitingVars_35);
        {
          ModeError_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ModeError_36, 0) = ((MR_Box) ((MR_Unsigned) 13U));
          MR_hl_field(MR_mktag(3), ModeError_36, 1) = ((MR_Box) (UnifyInstForTypeX_25));
          MR_hl_field(MR_mktag(3), ModeError_36, 2) = ((MR_Box) (TypeY_18));
        }
        check_hlds__mode_info__mode_info_error_4_p_0(WaitingVars_35, ModeError_36, STATE_VARIABLE_ModeInfo_0_37, STATE_VARIABLE_ModeInfo_38);
        *Res_14 = (MR_Word) ((MR_Unsigned) 0U);
      }
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.modecheck_coerce.modecheck_coerce_vars\'/8", (MR_String) "abstractly_unify_inst failed");
        return;
      }
  }
}

static MR_bool MR_CALL 
check_hlds__modecheck_coerce__check_bound_functors_in_type_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv0_BoundInst_8;

    succeeded = check_hlds__modecheck_coerce__bound_check_bound_functors_in_tuple_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv0_BoundInst_8);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv0_BoundInst_8));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__modecheck_coerce__check_bound_functors_in_type_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word Type_6,
  MR_Word Inst0_7,
  MR_Word * Inst_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word Inst1_9;

    // setup for model_semi tailcalls optimized into a loop
    ;
    check_hlds__inst_util__inst_expand_3_p_0(ModuleInfo_5, Inst0_7, &Inst1_9);
    switch (MR_tag((MR_Word) Type_6)) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 0:
        {
          *Inst_8 = Inst1_9;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 1:
        succeeded = check_hlds__modecheck_coerce__check_bound_functors_in_defined_type_4_p_0(ModuleInfo_5, Type_6, Inst1_9, Inst_8);
        break;
      case (MR_Integer) 2:
        {
          *Inst_8 = Inst1_9;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Type_6, (MR_Integer) 0))))) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 0:
            {
              MR_Word ArgTypes_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type_6, (MR_Integer) 1))));

              switch (MR_tag((MR_Word) Inst1_9)) {
                default:
                  succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Inst1_9, (MR_Integer) 0))))) {
                    default:
                      succeeded = MR_FALSE;
                      break;
                    case (MR_Integer) 0:
                      {
                        MR_Word Uniq_58 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Inst1_9, (MR_Integer) 1))) & (MR_Integer) 7);
                        MR_Word BoundInsts0_60 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst1_9, (MR_Integer) 3))));
                        MR_Word BoundInsts_61;
                        MR_Word Var_77;
                        MR_Word Var_78;

                        {
                          Var_77 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), Var_77, 0) = ((MR_Box) (&check_hlds__modecheck_coerce_scalar_common_4[0]));
                          MR_hl_field(MR_mktag(0), Var_77, 1) = ((MR_Box) (check_hlds__modecheck_coerce__check_bound_functors_in_type_4_p_0_1));
                          MR_hl_field(MR_mktag(0), Var_77, 2) = ((MR_Box) ((MR_Integer) 2));
                          MR_hl_field(MR_mktag(0), Var_77, 3) = ((MR_Box) (ModuleInfo_5));
                          MR_hl_field(MR_mktag(0), Var_77, 4) = ((MR_Box) (ArgTypes_16));
                        }
                        succeeded = mercury__list__map_3_p_2((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0), Var_77, BoundInsts0_60, &BoundInsts_61);
                        if (succeeded)
                        {
                          Var_78 = (MR_Word) ((MR_Unsigned) 0U);
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                            *Inst_8 = base;
                            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                            MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (Uniq_58));
                            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Var_78));
                            MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (BoundInsts_61));
                          }
                          succeeded = MR_TRUE;
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        *Inst_8 = Inst1_9;
                        succeeded = MR_TRUE;
                      }
                      break;
                    case (MR_Integer) 3:
                      {
                        mercury__require__sorry_2_p_0((MR_String) "predicate \140check_hlds.modecheck_coerce.check_bound_functors_in_tuple\'/4", (MR_String) "constrained_inst_vars");
                        succeeded = MR_TRUE;
                      }
                      break;
                    case (MR_Integer) 4:
                      {
                        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.modecheck_coerce.check_bound_functors_in_tuple\'/4", (MR_String) "unexpanded inst");
                        succeeded = MR_TRUE;
                      }
                      break;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 1:
            switch (MR_tag((MR_Word) Inst1_9)) {
              default:
                succeeded = MR_FALSE;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Inst1_9, (MR_Integer) 0))))) {
                  default:
                    succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 0:
                    {
                      mercury__require__sorry_2_p_0((MR_String) "predicate \140check_hlds.modecheck_coerce.check_bound_functors_in_higher_order_type\'/4", (MR_String) "bound inst");
                      succeeded = MR_TRUE;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      *Inst_8 = Inst1_9;
                      succeeded = MR_TRUE;
                    }
                    break;
                  case (MR_Integer) 3:
                    {
                      mercury__require__sorry_2_p_0((MR_String) "predicate \140check_hlds.modecheck_coerce.check_bound_functors_in_higher_order_type\'/4", (MR_String) "constrained_inst_vars");
                      succeeded = MR_TRUE;
                    }
                    break;
                  case (MR_Integer) 4:
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.modecheck_coerce.check_bound_functors_in_higher_order_type\'/4", (MR_String) "unexpanded inst");
                      succeeded = MR_TRUE;
                    }
                    break;
                }
                break;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Type1_25 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type_6, (MR_Integer) 1))));
              MR_Word next_value_of_Type_6 = Type1_25;
              MR_Word next_value_of_Inst0_7 = Inst1_9;

              // direct tailcall eliminated
              ;
              Type_6 = next_value_of_Type_6;
              Inst0_7 = next_value_of_Inst0_7;
              continue;
            }
            break;
        }
        break;
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
check_hlds__modecheck_coerce__check_bound_functors_in_defined_type_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv0_BoundInst_10;

    succeeded = check_hlds__modecheck_coerce__check_bound_functor_in_du_type_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv0_BoundInst_10);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv0_BoundInst_10));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__modecheck_coerce__check_bound_functors_in_defined_type_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word Type_6,
  MR_Word Inst0_7,
  MR_Word * Inst_8)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) Inst0_7)) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Inst0_7, (MR_Integer) 0))))) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 0:
            {
              MR_Word TypeCtorInfo_33_33;
              MR_Word Uniq_9 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Inst0_7, (MR_Integer) 1))) & (MR_Integer) 7);
              MR_Word BoundInsts0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_7, (MR_Integer) 3))));
              MR_Word TypeCtor_12;
              MR_Word Constructors_13;
              MR_Word BoundInsts_14;
              MR_Word Var_29;
              MR_Word Var_30;

              succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(Type_6, &TypeCtor_12);
              if (succeeded)
              {
                succeeded = check_hlds__type_util__type_constructors_3_p_0(ModuleInfo_5, Type_6, &Constructors_13);
                if (succeeded)
                {
                  TypeCtorInfo_33_33 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0);
                  {
                    Var_29 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_29, 0) = ((MR_Box) (&check_hlds__modecheck_coerce_scalar_common_3[1]));
                    MR_hl_field(MR_mktag(0), Var_29, 1) = ((MR_Box) (check_hlds__modecheck_coerce__check_bound_functors_in_defined_type_4_p_0_1));
                    MR_hl_field(MR_mktag(0), Var_29, 2) = ((MR_Box) ((MR_Integer) 3));
                    MR_hl_field(MR_mktag(0), Var_29, 3) = ((MR_Box) (ModuleInfo_5));
                    MR_hl_field(MR_mktag(0), Var_29, 4) = ((MR_Box) (TypeCtor_12));
                    MR_hl_field(MR_mktag(0), Var_29, 5) = ((MR_Box) (Constructors_13));
                  }
                  succeeded = mercury__list__map_3_p_2(TypeCtorInfo_33_33, TypeCtorInfo_33_33, Var_29, BoundInsts0_11, &BoundInsts_14);
                  if (succeeded)
                  {
                    Var_30 = (MR_Word) ((MR_Unsigned) 0U);
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                      *Inst_8 = base;
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (Uniq_9));
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Var_30));
                      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (BoundInsts_14));
                    }
                    succeeded = MR_TRUE;
                  }
                }
              }
            }
            break;
          case (MR_Integer) 1:
            {
              *Inst_8 = Inst0_7;
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word InstVars_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_7, (MR_Integer) 1))));
              MR_Word SubInst0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_7, (MR_Integer) 2))));
              MR_Word SubInst_19;

              succeeded = check_hlds__modecheck_coerce__check_bound_functors_in_defined_type_4_p_0(ModuleInfo_5, Type_6, SubInst0_18, &SubInst_19);
              if (succeeded)
              {
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  *Inst_8 = base;
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (InstVars_17));
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (SubInst_19));
                }
                succeeded = MR_TRUE;
              }
            }
            break;
          case (MR_Integer) 4:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.modecheck_coerce.check_bound_functors_in_defined_type\'/4", (MR_String) "unexpanded inst");
              succeeded = MR_TRUE;
            }
            break;
        }
        break;
    }
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__modecheck_coerce__make_bound_inst_for_type_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_Inst_10;

    check_hlds__modecheck_coerce__make_bound_inst_for_type_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv0_Inst_10);
    *wrapper_arg_2 = ((MR_Box) (conv0_Inst_10));
  }
}

static void MR_CALL 
check_hlds__modecheck_coerce__make_bound_inst_for_type_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word Seen0_7,
  MR_Word Uniq_8,
  MR_Word Type_9,
  MR_Word * Inst_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Type_9)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          succeeded = (Uniq_8 == (MR_Integer) 0);
          if (succeeded)
            *Inst_10 = parse_tree__prog_mode__ground_inst_0_f_0();
          else
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *Inst_10 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (Uniq_8));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) ((MR_Unsigned) 0U));
            }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word TypeCtor_17;
          MR_Word Seen_18;

          parse_tree__prog_type__type_to_ctor_det_2_p_0(Type_9, &TypeCtor_17);
          succeeded = mercury__set__insert_new_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), ((MR_Box) (TypeCtor_17)), Seen0_7, &Seen_18);
          if (succeeded)
          {
            MR_Word Constructors_19;

            succeeded = check_hlds__type_util__type_constructors_3_p_0(ModuleInfo_6, Type_9, &Constructors_19);
            if (succeeded)
            {
              MR_Word BoundInsts0_20;
              MR_Word BoundInsts_21;

              check_hlds__modecheck_coerce__constructors_to_bound_insts_loop_over_ctors_6_p_0(ModuleInfo_6, Seen_18, TypeCtor_17, Uniq_8, Constructors_19, &BoundInsts0_20);
              mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0), BoundInsts0_20, &BoundInsts_21);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                *Inst_10 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (Uniq_8));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__modecheck_coerce_scalar_common_2[0])));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (BoundInsts_21));
              }
            }
            else
            {
              succeeded = (Uniq_8 == (MR_Integer) 0);
              if (succeeded)
                *Inst_10 = parse_tree__prog_mode__ground_inst_0_f_0();
              else
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  *Inst_10 = base;
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                  MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (Uniq_8));
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                }
            }
          }
          else
          {
            MR_Word Var_54;

            {
              Var_54 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_54, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(MR_mktag(3), Var_54, 1) = (MR_Box) ((MR_Unsigned) (Uniq_8));
              MR_hl_field(MR_mktag(3), Var_54, 2) = ((MR_Box) (Type_9));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Inst_10 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_54));
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          succeeded = (Uniq_8 == (MR_Integer) 0);
          if (succeeded)
            *Inst_10 = parse_tree__prog_mode__ground_inst_0_f_0();
          else
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *Inst_10 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (Uniq_8));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) ((MR_Unsigned) 0U));
            }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Type_9, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ArgTypes_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type_9, (MR_Integer) 1))));
              MR_Integer Arity_24;
              MR_Word ConsId_25;
              MR_Word ArgInsts_26;
              MR_Word BoundInst_27;
              MR_Word Var_39;
              MR_Word Var_46;

              mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypes_23, &Arity_24);
              {
                ConsId_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ConsId_25, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                MR_hl_field(MR_mktag(3), ConsId_25, 1) = ((MR_Box) (Arity_24));
              }
              {
                Var_39 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_39, 0) = ((MR_Box) (&check_hlds__modecheck_coerce_scalar_common_3[0]));
                MR_hl_field(MR_mktag(0), Var_39, 1) = ((MR_Box) (check_hlds__modecheck_coerce__make_bound_inst_for_type_5_p_0_1));
                MR_hl_field(MR_mktag(0), Var_39, 2) = ((MR_Box) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(0), Var_39, 3) = ((MR_Box) (ModuleInfo_6));
                MR_hl_field(MR_mktag(0), Var_39, 4) = ((MR_Box) (Seen0_7));
                MR_hl_field(MR_mktag(0), Var_39, 5) = ((MR_Box) (Uniq_8));
              }
              mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), Var_39, ArgTypes_23, &ArgInsts_26);
              {
                BoundInst_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), BoundInst_27, 0) = ((MR_Box) (ConsId_25));
                MR_hl_field(MR_mktag(0), BoundInst_27, 1) = ((MR_Box) (ArgInsts_26));
              }
              {
                Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (BoundInst_27));
                MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                *Inst_10 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (Uniq_8));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__modecheck_coerce_scalar_common_2[0])));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Var_46));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              succeeded = (Uniq_8 == (MR_Integer) 0);
              if (succeeded)
                *Inst_10 = parse_tree__prog_mode__ground_inst_0_f_0();
              else
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  *Inst_10 = base;
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                  MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (Uniq_8));
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                }
            }
            break;
          case (MR_Integer) 2:
            {
              mercury__require__sorry_2_p_0((MR_String) "predicate \140check_hlds.modecheck_coerce.make_bound_inst_for_type\'/5", (MR_String) "apply_n_type");
              return;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Type1_35 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type_9, (MR_Integer) 1))));
              MR_Word next_value_of_Type_9 = Type1_35;

              // direct tailcall eliminated
              ;
              Type_9 = next_value_of_Type_9;
              continue;
            }
            break;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__modecheck_coerce__ctor_arg_list_to_inst_list_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5)
{
  if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Arg_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
    MR_Word Args_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
    MR_Word ArgInst_14;
    MR_Word ArgInsts_15;
    MR_Word ArgType_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Arg_12, (MR_Integer) 1))));

    check_hlds__modecheck_coerce__make_bound_inst_for_type_5_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, ArgType_17, &ArgInst_14);
    check_hlds__modecheck_coerce__ctor_arg_list_to_inst_list_5_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, Args_13, &ArgInsts_15);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__5_5 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ArgInst_14));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ArgInsts_15));
    }
  }
}

static void MR_CALL 
check_hlds__modecheck_coerce__constructors_to_bound_insts_loop_over_ctors_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6)
{
  if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Ctor_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 0))));
    MR_Word Ctors_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 1))));
    MR_Word BoundInst_17;
    MR_Word BoundInsts_18;
    MR_Word Name_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_15, (MR_Integer) 2))));
    MR_Word Args_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_15, (MR_Integer) 3))));
    MR_Word ArgInsts_25;
    MR_Integer Arity_26;
    MR_Word Var_27;

    check_hlds__modecheck_coerce__ctor_arg_list_to_inst_list_5_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__4_4, Args_22, &ArgInsts_25);
    mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), ArgInsts_25, &Arity_26);
    {
      Var_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_27, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(MR_mktag(3), Var_27, 1) = ((MR_Box) (Name_21));
      MR_hl_field(MR_mktag(3), Var_27, 2) = ((MR_Box) (Arity_26));
      MR_hl_field(MR_mktag(3), Var_27, 3) = ((MR_Box) (HeadVar__3_3));
    }
    {
      BoundInst_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), BoundInst_17, 0) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(0), BoundInst_17, 1) = ((MR_Box) (ArgInsts_25));
    }
    check_hlds__modecheck_coerce__constructors_to_bound_insts_loop_over_ctors_6_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, HeadVar__4_4, Ctors_16, &BoundInsts_18);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__6_6 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (BoundInst_17));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (BoundInsts_18));
    }
  }
}

static MR_bool MR_CALL 
check_hlds__modecheck_coerce____Unify____modecheck_coerce_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__modecheck_coerce____Unify____modecheck_coerce_result_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__modecheck_coerce____Compare____modecheck_coerce_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__modecheck_coerce____Compare____modecheck_coerce_result_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__check_hlds__modecheck_coerce__init(void)
{
}

void mercury__check_hlds__modecheck_coerce__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&check_hlds__modecheck_coerce__check_hlds__modecheck_coerce__type_ctor_info_modecheck_coerce_result_0);
}

void mercury__check_hlds__modecheck_coerce__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__modecheck_coerce__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module check_hlds.modecheck_coerce.
