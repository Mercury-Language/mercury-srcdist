/*
** Automatically generated from `simplify_goal_ite.m'
** by the Mercury compiler,
** version rotd-2026-04-22
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


// :- module check_hlds.simplify.simplify_goal_ite.
// :- implementation.

/*
INIT mercury__check_hlds__simplify__simplify_goal_ite__init
ENDINIT
*/

#include "check_hlds.simplify.simplify_goal_ite.mih"


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
#include "edit_seq.mih"
#include "enum.mih"
#include "getopt.mih"
#include "hlds.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "multi_map.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
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
#include "term_context.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "analysis.framework.mih"
#include "analysis.operations.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.simplify.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.goal_refs.mih"
#include "hlds.goal_util.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_markers.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.instmap.mih"
#include "hlds.make_goal.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.type_util.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.optdb_help.mih"
#include "libs.optimization_options.mih"
#include "libs.option_categories.mih"
#include "libs.options.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.d_file_deps.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_detism.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "recompilation.record_uses.mih"
#include "check_hlds.simplify.common.mih"
#include "check_hlds.simplify.simplify_goal.mih"
#include "check_hlds.simplify.simplify_info.mih"
#include "check_hlds.simplify.simplify_tasks.mih"
#include "parse_tree.module_qual.mq_info.mih"




static const MR_DuFunctorDesc check_hlds__simplify__simplify_goal_ite__check_hlds__simplify__simplify_goal_ite__du_functor_desc_cond_can_switch_0_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__simplify_goal_ite__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_PseudoTypeInfo check_hlds__simplify__simplify_goal_ite__check_hlds__simplify__simplify_goal_ite__field_types_cond_can_switch_0_1[1];

static const MR_DuFunctorDesc check_hlds__simplify__simplify_goal_ite__check_hlds__simplify__simplify_goal_ite__du_functor_desc_cond_can_switch_0_1;

static const MR_DuFunctorDesc check_hlds__simplify__simplify_goal_ite__check_hlds__simplify__simplify_goal_ite__du_functor_desc_cond_can_switch_0_2;

static const MR_DuFunctorDescPtr check_hlds__simplify__simplify_goal_ite__check_hlds__simplify__simplify_goal_ite__du_stag_ordered_cond_can_switch_0_0[2];

static const MR_DuFunctorDescPtr check_hlds__simplify__simplify_goal_ite__check_hlds__simplify__simplify_goal_ite__du_stag_ordered_cond_can_switch_0_1[1];

static const MR_DuPtagLayout check_hlds__simplify__simplify_goal_ite__check_hlds__simplify__simplify_goal_ite__du_ptag_ordered_cond_can_switch_0[2];

static const MR_DuFunctorDescPtr check_hlds__simplify__simplify_goal_ite__check_hlds__simplify__simplify_goal_ite__du_name_ordered_cond_can_switch_0[3];

static const MR_Integer check_hlds__simplify__simplify_goal_ite__check_hlds__simplify__simplify_goal_ite__functor_number_map_cond_can_switch_0[3];

static void MR_CALL 
check_hlds__simplify__simplify_goal_ite____Compare____cond_can_switch_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_ite____Unify____cond_can_switch_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__simplify__simplify_goal_ite__simplify_goal_ordinary_ite_13_p_0(
  MR_Word Vars_14,
  MR_Word Cond0_15,
  MR_Word Then0_16,
  MR_Word Else0_17,
  MR_Word * GoalExpr_18,
  MR_Word GoalInfo0_19,
  MR_Word * GoalInfo_20,
  MR_Word NestedContext0_21,
  MR_Word InstMap0_22,
  MR_Word Common0_23,
  MR_Word * Common_24,
  MR_Word STATE_VARIABLE_Info_0_67,
  MR_Word * STATE_VARIABLE_Info_68);

static void MR_CALL 
check_hlds__simplify__simplify_goal_ite__warn_switch_for_ite_cond_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__simplify__simplify_goal_ite__warn_switch_for_ite_cond_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word VarTable_7,
  MR_Word Cond_8,
  MR_Word STATE_VARIABLE_CondCanSwitch_0_86,
  MR_Word * STATE_VARIABLE_CondCanSwitch_87);

static void MR_CALL 
check_hlds__simplify__simplify_goal_ite__maybe_warn_about_condition_5_p_0(
  MR_Word GoalInfo0_6,
  MR_Word NestedContext0_7,
  MR_String Problem_8,
  MR_Word STATE_VARIABLE_Info_0_14,
  MR_Word * STATE_VARIABLE_Info_15);

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_ite____Unify____cond_can_switch_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__simplify__simplify_goal_ite____Compare____cond_can_switch_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box check_hlds__simplify__simplify_goal_ite_scalar_common_1[18][2];

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_ite_scalar_common_2[4][1];

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_ite_scalar_common_3[1][8];




static /* final */ const MR_Box check_hlds__simplify__simplify_goal_ite_scalar_common_1[18][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Warning: the negated goal"))
  },
  /* row   2 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_ite_scalar_common_1[1]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   3 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "cannot fail."))
  },
  /* row   4 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_ite_scalar_common_1[3]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   5 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "cannot succeed."))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_ite_scalar_common_1[6]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Warning: the condition of this if-then-else"))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_ite_scalar_common_1[8]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_ite_scalar_common_1[10]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "on"))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Warning: this if-then-else"))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_ite_scalar_common_1[13]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "could be replaced by a switch"))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_ite_scalar_common_1[15]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
};

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_ite_scalar_common_2[4][1] = {
  /* row   0 */
  { (MR_Box) ((MR_Unsigned) 186U) },
  /* row   1 */
  { (MR_Box) ((MR_Unsigned) 1U) },
  /* row   2 */
  { (MR_Box) ((MR_Unsigned) 224U) },
  /* row   3 */
  { (MR_Box) ((MR_Unsigned) 0U) },
};

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_ite_scalar_common_3[1][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&check_hlds__simplify__simplify_goal_ite__check_hlds__simplify__simplify_goal_ite__type_ctor_info_cond_can_switch_0)),
    ((MR_Box) (&check_hlds__simplify__simplify_goal_ite__check_hlds__simplify__simplify_goal_ite__type_ctor_info_cond_can_switch_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_DuFunctorDesc check_hlds__simplify__simplify_goal_ite__check_hlds__simplify__simplify_goal_ite__du_functor_desc_cond_can_switch_0_0 = {
  (MR_String) "cond_can_switch_uncommitted",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(0),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__simplify_goal_ite__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_PseudoTypeInfo check_hlds__simplify__simplify_goal_ite__check_hlds__simplify__simplify_goal_ite__field_types_cond_can_switch_0_1[1] = { (MR_PseudoTypeInfo) (&check_hlds__simplify__simplify_goal_ite__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) };

static const MR_DuFunctorDesc check_hlds__simplify__simplify_goal_ite__check_hlds__simplify__simplify_goal_ite__du_functor_desc_cond_can_switch_0_1 = {
  (MR_String) "cond_can_switch_on",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  check_hlds__simplify__simplify_goal_ite__check_hlds__simplify__simplify_goal_ite__field_types_cond_can_switch_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc check_hlds__simplify__simplify_goal_ite__check_hlds__simplify__simplify_goal_ite__du_functor_desc_cond_can_switch_0_2 = {
  (MR_String) "cond_cannot_switch",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 1,
  INT32_C(2),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__simplify__simplify_goal_ite__check_hlds__simplify__simplify_goal_ite__du_stag_ordered_cond_can_switch_0_0[2] = {
  &check_hlds__simplify__simplify_goal_ite__check_hlds__simplify__simplify_goal_ite__du_functor_desc_cond_can_switch_0_0,
  &check_hlds__simplify__simplify_goal_ite__check_hlds__simplify__simplify_goal_ite__du_functor_desc_cond_can_switch_0_2
};

static const MR_DuFunctorDescPtr check_hlds__simplify__simplify_goal_ite__check_hlds__simplify__simplify_goal_ite__du_stag_ordered_cond_can_switch_0_1[1] = { &check_hlds__simplify__simplify_goal_ite__check_hlds__simplify__simplify_goal_ite__du_functor_desc_cond_can_switch_0_1 };

static const MR_DuPtagLayout check_hlds__simplify__simplify_goal_ite__check_hlds__simplify__simplify_goal_ite__du_ptag_ordered_cond_can_switch_0[2] = {
  {
    UINT32_C(2),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    check_hlds__simplify__simplify_goal_ite__check_hlds__simplify__simplify_goal_ite__du_stag_ordered_cond_can_switch_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__simplify__simplify_goal_ite__check_hlds__simplify__simplify_goal_ite__du_stag_ordered_cond_can_switch_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__simplify__simplify_goal_ite__check_hlds__simplify__simplify_goal_ite__du_name_ordered_cond_can_switch_0[3] = {
  &check_hlds__simplify__simplify_goal_ite__check_hlds__simplify__simplify_goal_ite__du_functor_desc_cond_can_switch_0_1,
  &check_hlds__simplify__simplify_goal_ite__check_hlds__simplify__simplify_goal_ite__du_functor_desc_cond_can_switch_0_0,
  &check_hlds__simplify__simplify_goal_ite__check_hlds__simplify__simplify_goal_ite__du_functor_desc_cond_can_switch_0_2
};

static const MR_Integer check_hlds__simplify__simplify_goal_ite__check_hlds__simplify__simplify_goal_ite__functor_number_map_cond_can_switch_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct check_hlds__simplify__simplify_goal_ite__check_hlds__simplify__simplify_goal_ite__type_ctor_info_cond_can_switch_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__simplify__simplify_goal_ite____Unify____cond_can_switch_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__simplify_goal_ite____Compare____cond_can_switch_0_0_10001)),
  (MR_String) "check_hlds.simplify.simplify_goal_ite",
  (MR_String) "cond_can_switch",
  { check_hlds__simplify__simplify_goal_ite__check_hlds__simplify__simplify_goal_ite__du_name_ordered_cond_can_switch_0 },
  { check_hlds__simplify__simplify_goal_ite__check_hlds__simplify__simplify_goal_ite__du_ptag_ordered_cond_can_switch_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  check_hlds__simplify__simplify_goal_ite__check_hlds__simplify__simplify_goal_ite__functor_number_map_cond_can_switch_0,

};

static void MR_CALL 
check_hlds__simplify__simplify_goal_ite____Compare____cond_can_switch_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_6 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_7 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_6 == CastY_7);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(HeadVar__2_2)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
            break;
          case (MR_Integer) 1:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 0;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
              MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));

              mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__simplify__simplify_goal_ite_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
            }
            break;
        }
        break;
    }
}

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_ite____Unify____cond_can_switch_0_0(
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
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
          MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

          succeeded = (CastY_6 == CastX_5);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word TypeInfo_9_9;
          MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
          MR_Word ArgY1_4;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
            TypeInfo_9_9 = (MR_Word) (&check_hlds__simplify__simplify_goal_ite_scalar_common_1[0]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_9_9, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
          }
        }
        break;
    }
  return succeeded;
}

void MR_CALL 
check_hlds__simplify__simplify_goal_ite__simplify_goal_neg_10_p_0(
  MR_Word GoalExpr0_11,
  MR_Word * GoalExpr_12,
  MR_Word GoalInfo0_13,
  MR_Word * GoalInfo_14,
  MR_Word NestedContext0_15,
  MR_Word InstMap0_16,
  MR_Word Common0_17,
  MR_Word * Common_18,
  MR_Word STATE_VARIABLE_Info_0_37,
  MR_Word * STATE_VARIABLE_Info_38)
{
  MR_bool succeeded;
  MR_Word SubGoal0_20 = (MR_Word) ((MR_Word) (GoalExpr0_11));
  MR_Word SubGoal1_21;
  MR_Word Context_23;
  MR_Word InsideDuplForSwitch_24;
  MR_Word STATE_VARIABLE_Info_1_39;
  MR_Word STATE_VARIABLE_Info_2_58;
  MR_Word _Common1_22;
  MR_Word Var_78;
  MR_Word Var_79;
  MR_Word Var_80;

  check_hlds__simplify__simplify_goal__simplify_goal_8_p_0(SubGoal0_20, &SubGoal1_21, NestedContext0_15, InstMap0_16, Common0_17, &_Common1_22, STATE_VARIABLE_Info_0_37, &STATE_VARIABLE_Info_1_39);
  Context_23 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo0_13);
  InsideDuplForSwitch_24 = ((MR_Unsigned) ((MR_hl_field(0, NestedContext0_15, 0))) & (MR_Integer) 1);
  succeeded = check_hlds__simplify__simplify_info__simplify_do_warn_dodgy_simple_code_1_p_0(STATE_VARIABLE_Info_1_39);
  if (succeeded)
    succeeded = (InsideDuplForSwitch_24 == (MR_Integer) 0);
  if (succeeded)
  {
    MR_Word SubGoalInfo1_26 = ((MR_Word) ((MR_hl_field(0, SubGoal1_21, 1))));
    MR_Word Detism_27;
    MR_Word CanFail_28;
    MR_Word MaxSoln_29;

    Detism_27 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(SubGoalInfo1_26);
    parse_tree__prog_data__determinism_components_3_p_0(Detism_27, &CanFail_28, &MaxSoln_29);
    succeeded = (CanFail_28 == (MR_Integer) 1);
    if (succeeded)
    {
      MR_Word Pieces_30;
      MR_Word Spec_31;
      MR_Word Var_44;
      MR_Word Var_45;

      Var_45 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__simplify__simplify_goal_ite_scalar_common_1[4])));
      Var_44 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_45, (MR_Word) (MR_mkword(1, &check_hlds__simplify__simplify_goal_ite_scalar_common_1[5])));
      Pieces_30 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__simplify__simplify_goal_ite_scalar_common_1[2])), Var_44);
      {
        Spec_31 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Spec_31, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.simplify.simplify_goal_ite.simplify_goal_neg\'/10"));
        MR_hl_field(0, Spec_31, 1) = ((MR_Box) (MR_mkword(2, &check_hlds__simplify__simplify_goal_ite_scalar_common_2[0])));
        MR_hl_field(0, Spec_31, 2) = ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_ite_scalar_common_2[1])));
        MR_hl_field(0, Spec_31, 3) = ((MR_Box) (Context_23));
        MR_hl_field(0, Spec_31, 4) = ((MR_Box) (Pieces_30));
      }
      check_hlds__simplify__simplify_info__simplify_info_add_message_3_p_0(Spec_31, STATE_VARIABLE_Info_1_39, &STATE_VARIABLE_Info_2_58);
    }
    else
    {
      succeeded = (MaxSoln_29 == (MR_Integer) 0);
      if (succeeded)
      {
        MR_Word Var_63;
        MR_Word Var_64;
        MR_Word Pieces_88;
        MR_Word Spec_89;

        Var_64 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__simplify__simplify_goal_ite_scalar_common_1[7])));
        Var_63 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_64, (MR_Word) (MR_mkword(1, &check_hlds__simplify__simplify_goal_ite_scalar_common_1[5])));
        Pieces_88 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__simplify__simplify_goal_ite_scalar_common_1[2])), Var_63);
        {
          Spec_89 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_89, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.simplify.simplify_goal_ite.simplify_goal_neg\'/10"));
          MR_hl_field(0, Spec_89, 1) = ((MR_Box) (MR_mkword(2, &check_hlds__simplify__simplify_goal_ite_scalar_common_2[0])));
          MR_hl_field(0, Spec_89, 2) = ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_ite_scalar_common_2[1])));
          MR_hl_field(0, Spec_89, 3) = ((MR_Box) (Context_23));
          MR_hl_field(0, Spec_89, 4) = ((MR_Box) (Pieces_88));
        }
        check_hlds__simplify__simplify_info__simplify_info_add_message_3_p_0(Spec_89, STATE_VARIABLE_Info_1_39, &STATE_VARIABLE_Info_2_58);
      }
      else
        STATE_VARIABLE_Info_2_58 = STATE_VARIABLE_Info_1_39;
    }
  }
  else
    STATE_VARIABLE_Info_2_58 = STATE_VARIABLE_Info_1_39;
  Var_78 = ((MR_Word) ((MR_hl_field(0, SubGoal1_21, 0))));
  succeeded = ((((MR_tag((MR_Word) Var_78)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_78, 0)))) == (MR_Integer) 2)));
  if (succeeded)
  {
    Var_79 = ((MR_Unsigned) ((MR_hl_field(3, Var_78, 1))) & (MR_Integer) 1);
    Var_80 = ((MR_Word) ((MR_hl_field(3, Var_78, 2))));
    succeeded = (Var_79 == (MR_Integer) 0);
    if (succeeded)
      succeeded = (Var_80 == (MR_Word) ((MR_Unsigned) 0U));
  }
  if (succeeded)
  {
    MR_Word Var_81;

    Var_81 = hlds__make_goal__fail_goal_with_context_1_f_0(Context_23);
    *GoalExpr_12 = ((MR_Word) ((MR_hl_field(0, Var_81, 0))));
    *GoalInfo_14 = ((MR_Word) ((MR_hl_field(0, Var_81, 1))));
    *STATE_VARIABLE_Info_38 = STATE_VARIABLE_Info_2_58;
  }
  else
  {
    MR_Word Var_82 = ((MR_Word) ((MR_hl_field(0, SubGoal1_21, 0))));
    MR_Word Var_83;

    succeeded = ((((MR_tag((MR_Word) Var_82)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_82, 0)))) == (MR_Integer) 3)));
    if (succeeded)
    {
      Var_83 = ((MR_Word) ((MR_hl_field(3, Var_82, 1))));
      succeeded = (Var_83 == (MR_Word) ((MR_Unsigned) 0U));
    }
    if (succeeded)
    {
      MR_Word Var_84;

      Var_84 = hlds__make_goal__true_goal_with_context_1_f_0(Context_23);
      *GoalExpr_12 = ((MR_Word) ((MR_hl_field(0, Var_84, 0))));
      *GoalInfo_14 = ((MR_Word) ((MR_hl_field(0, Var_84, 1))));
      *STATE_VARIABLE_Info_38 = STATE_VARIABLE_Info_2_58;
    }
    else
    {
      MR_Word SubSubGoal_34;
      MR_Word SubSubGoalInfo_35;
      MR_Word Var_85 = ((MR_Word) ((MR_hl_field(0, SubGoal1_21, 0))));
      MR_Word Var_86;

      succeeded = ((MR_tag((MR_Word) Var_85)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_86 = (MR_Word) ((MR_Word) (Var_85));
        SubSubGoal_34 = ((MR_Word) ((MR_hl_field(0, Var_86, 0))));
        SubSubGoalInfo_35 = ((MR_Word) ((MR_hl_field(0, Var_86, 1))));
        succeeded = mercury__builtin__semidet_fail_0_p_0();
      }
      if (succeeded)
        check_hlds__simplify__simplify_goal__simplify_maybe_wrap_goal_7_p_0(GoalInfo0_13, SubSubGoalInfo_35, SubSubGoal_34, GoalExpr_12, GoalInfo_14, STATE_VARIABLE_Info_2_58, STATE_VARIABLE_Info_38);
      else
      {
        *GoalExpr_12 = (MR_Word) ((MR_Word) (SubGoal1_21));
        *GoalInfo_14 = GoalInfo0_13;
        *STATE_VARIABLE_Info_38 = STATE_VARIABLE_Info_2_58;
      }
    }
  }
  *Common_18 = Common0_17;
}

void MR_CALL 
check_hlds__simplify__simplify_goal_ite__simplify_goal_ite_10_p_0(
  MR_Word GoalExpr0_11,
  MR_Word * GoalExpr_12,
  MR_Word GoalInfo0_13,
  MR_Word * GoalInfo_14,
  MR_Word NestedContext0_15,
  MR_Word InstMap0_16,
  MR_Word Common0_17,
  MR_Word * Common_18,
  MR_Word STATE_VARIABLE_Info_0_48,
  MR_Word * STATE_VARIABLE_Info_49)
{
  MR_bool succeeded;
  MR_Word Vars_20 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_11, 1))));
  MR_Word Cond0_21 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_11, 2))));
  MR_Word Then0_22 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_11, 3))));
  MR_Word Else0_23 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_11, 4))));
  MR_Word CondInfo0_25 = ((MR_Word) ((MR_hl_field(0, Cond0_21, 1))));
  MR_Word CondDetism0_26;
  MR_Word CondCanFail0_27;
  MR_Word CondSolns0_28;

  CondDetism0_26 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(CondInfo0_25);
  parse_tree__prog_data__determinism_components_3_p_0(CondDetism0_26, &CondCanFail0_27, &CondSolns0_28);
  switch (CondCanFail0_27) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (CondSolns0_28) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 3:
        case (MR_Integer) 2:
        case (MR_Integer) 1:
          {
            MR_Word Var_70 = ((MR_Word) ((MR_hl_field(0, Else0_23, 0))));
            MR_Word Var_71;

            succeeded = ((((MR_tag((MR_Word) Var_70)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_70, 0)))) == (MR_Integer) 3)));
            if (succeeded)
            {
              Var_71 = ((MR_Word) ((MR_hl_field(3, Var_70, 1))));
              succeeded = (Var_71 == (MR_Word) ((MR_Unsigned) 0U));
            }
            if (succeeded)
            {
              MR_Word Var_72;
              MR_Word Var_73;
              MR_Word STATE_VARIABLE_Info_7_74;
              MR_Word Var_75;
              MR_Word STATE_VARIABLE_Info_8_77;
              MR_Word CondGoals_83;
              MR_Word ThenGoals_84;
              MR_Word Goals_85;

              hlds__hlds_goal__goal_to_conj_list_2_p_0(Cond0_21, &CondGoals_83);
              hlds__hlds_goal__goal_to_conj_list_2_p_0(Then0_22, &ThenGoals_84);
              Goals_85 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), CondGoals_83, ThenGoals_84);
              {
                Var_75 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_75, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                MR_hl_field(3, Var_75, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                MR_hl_field(3, Var_75, 2) = ((MR_Box) (Goals_85));
              }
              {
                Var_72 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_72, 0) = ((MR_Box) (Var_75));
                MR_hl_field(0, Var_72, 1) = ((MR_Box) (GoalInfo0_13));
              }
              check_hlds__simplify__simplify_goal__simplify_goal_8_p_0(Var_72, &Var_73, NestedContext0_15, InstMap0_16, Common0_17, Common_18, STATE_VARIABLE_Info_0_48, &STATE_VARIABLE_Info_7_74);
              *GoalExpr_12 = ((MR_Word) ((MR_hl_field(0, Var_73, 0))));
              *GoalInfo_14 = ((MR_Word) ((MR_hl_field(0, Var_73, 1))));
              check_hlds__simplify__simplify_info__simplify_info_set_rerun_quant_instmap_delta_2_p_0(STATE_VARIABLE_Info_7_74, &STATE_VARIABLE_Info_8_77);
              check_hlds__simplify__simplify_info__simplify_info_set_rerun_det_2_p_0(STATE_VARIABLE_Info_8_77, STATE_VARIABLE_Info_49);
            }
            else
              check_hlds__simplify__simplify_goal_ite__simplify_goal_ordinary_ite_13_p_0(Vars_20, Cond0_21, Then0_22, Else0_23, GoalExpr_12, GoalInfo0_13, GoalInfo_14, NestedContext0_15, InstMap0_16, Common0_17, Common_18, STATE_VARIABLE_Info_0_48, STATE_VARIABLE_Info_49);
          }
          break;
        case (MR_Integer) 0:
          {
            MR_Word MaybeNegDetism_35;
            MR_Word Cond_38;
            MR_Word ElseList_45;
            MR_Word List_46;
            MR_Word Var_62;
            MR_Word Var_63;
            MR_Word STATE_VARIABLE_Info_4_64;
            MR_Word Var_65;
            MR_Word STATE_VARIABLE_Info_5_68;
            MR_Word DeletedCallCallees0_80;
            MR_Word SubGoalCalledProcs_81;
            MR_Word DeletedCallCallees_82;
            MR_Word NegCond_36;
            MR_Word Var_58;

            parse_tree__prog_detism__det_negation_det_2_p_0(CondDetism0_26, &MaybeNegDetism_35);
            Var_58 = ((MR_Word) ((MR_hl_field(0, Cond0_21, 0))));
            succeeded = ((MR_tag((MR_Word) Var_58)) == (MR_Integer) 0);
            if (succeeded)
            {
              NegCond_36 = (MR_Word) ((MR_Word) (Var_58));
              succeeded = mercury__builtin__semidet_fail_0_p_0();
            }
            if (succeeded)
              Cond_38 = NegCond_36;
            else
            {
              MR_Word NegDetism_41;
              MR_Word NegInstMapDelta_42;
              MR_Word NegCondInfo0_43;
              MR_Word NegCondInfo_44;
              MR_Word Var_61;
              MR_Word NegDetism1_39;
              MR_Word NegInstMapDelta1_40;

              succeeded = (MaybeNegDetism_35 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                NegDetism1_39 = ((MR_Word) ((MR_hl_field(1, MaybeNegDetism_35, 0))));
                switch (NegDetism1_39) {
                  default:
                    succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 0:
                    {
                      hlds__instmap__instmap_delta_init_reachable_1_p_0(&NegInstMapDelta1_40);
                      succeeded = MR_TRUE;
                    }
                    break;
                  case (MR_Integer) 6:
                    {
                      hlds__instmap__instmap_delta_init_unreachable_1_p_0(&NegInstMapDelta1_40);
                      succeeded = MR_TRUE;
                    }
                    break;
                }
              }
              if (succeeded)
              {
                NegDetism_41 = NegDetism1_39;
                NegInstMapDelta_42 = NegInstMapDelta1_40;
              }
              else
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.simplify.simplify_goal_ite.simplify_goal_ite\'/10", (MR_String) "cannot get negated determinism");
                  return;
                }
              hlds__hlds_goal__goal_info_set_determinism_3_p_0(NegDetism_41, CondInfo0_25, &NegCondInfo0_43);
              hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(NegInstMapDelta_42, NegCondInfo0_43, &NegCondInfo_44);
              Var_61 = (MR_Word) ((MR_Word) (Cond0_21));
              {
                Cond_38 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Cond_38, 0) = ((MR_Box) (Var_61));
                MR_hl_field(0, Cond_38, 1) = ((MR_Box) (NegCondInfo_44));
              }
            }
            hlds__hlds_goal__goal_to_conj_list_2_p_0(Else0_23, &ElseList_45);
            {
              List_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, List_46, 0) = ((MR_Box) (Cond_38));
              MR_hl_field(1, List_46, 1) = ((MR_Box) (ElseList_45));
            }
            {
              Var_65 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_65, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(3, Var_65, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
              MR_hl_field(3, Var_65, 2) = ((MR_Box) (List_46));
            }
            {
              Var_62 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_62, 0) = ((MR_Box) (Var_65));
              MR_hl_field(0, Var_62, 1) = ((MR_Box) (GoalInfo0_13));
            }
            check_hlds__simplify__simplify_goal__simplify_goal_8_p_0(Var_62, &Var_63, NestedContext0_15, InstMap0_16, Common0_17, Common_18, STATE_VARIABLE_Info_0_48, &STATE_VARIABLE_Info_4_64);
            *GoalExpr_12 = ((MR_Word) ((MR_hl_field(0, Var_63, 0))));
            *GoalInfo_14 = ((MR_Word) ((MR_hl_field(0, Var_63, 1))));
            check_hlds__simplify__simplify_goal_ite__maybe_warn_about_condition_5_p_0(GoalInfo0_13, NestedContext0_15, (MR_String) "cannot succeed", STATE_VARIABLE_Info_4_64, &STATE_VARIABLE_Info_5_68);
            check_hlds__simplify__simplify_info__simplify_info_get_deleted_call_callees_2_p_0(STATE_VARIABLE_Info_5_68, &DeletedCallCallees0_80);
            SubGoalCalledProcs_81 = hlds__goal_refs__goal_proc_refs_1_f_0(Then0_22);
            mercury__set__union_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), SubGoalCalledProcs_81, DeletedCallCallees0_80, &DeletedCallCallees_82);
            check_hlds__simplify__simplify_info__simplify_info_set_deleted_call_callees_3_p_0(DeletedCallCallees_82, STATE_VARIABLE_Info_5_68, STATE_VARIABLE_Info_49);
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word CondGoals_29;
        MR_Word ThenGoals_30;
        MR_Word Goals_31;
        MR_Word DeletedCallCallees0_32;
        MR_Word SubGoalCalledProcs_33;
        MR_Word DeletedCallCallees_34;
        MR_Word Var_50;
        MR_Word Var_51;
        MR_Word STATE_VARIABLE_Info_1_52;
        MR_Word Var_53;
        MR_Word STATE_VARIABLE_Info_2_56;

        hlds__hlds_goal__goal_to_conj_list_2_p_0(Cond0_21, &CondGoals_29);
        hlds__hlds_goal__goal_to_conj_list_2_p_0(Then0_22, &ThenGoals_30);
        Goals_31 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), CondGoals_29, ThenGoals_30);
        {
          Var_53 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_53, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(3, Var_53, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          MR_hl_field(3, Var_53, 2) = ((MR_Box) (Goals_31));
        }
        {
          Var_50 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_50, 0) = ((MR_Box) (Var_53));
          MR_hl_field(0, Var_50, 1) = ((MR_Box) (GoalInfo0_13));
        }
        check_hlds__simplify__simplify_goal__simplify_goal_8_p_0(Var_50, &Var_51, NestedContext0_15, InstMap0_16, Common0_17, Common_18, STATE_VARIABLE_Info_0_48, &STATE_VARIABLE_Info_1_52);
        *GoalExpr_12 = ((MR_Word) ((MR_hl_field(0, Var_51, 0))));
        *GoalInfo_14 = ((MR_Word) ((MR_hl_field(0, Var_51, 1))));
        check_hlds__simplify__simplify_goal_ite__maybe_warn_about_condition_5_p_0(GoalInfo0_13, NestedContext0_15, (MR_String) "cannot fail", STATE_VARIABLE_Info_1_52, &STATE_VARIABLE_Info_2_56);
        check_hlds__simplify__simplify_info__simplify_info_get_deleted_call_callees_2_p_0(STATE_VARIABLE_Info_2_56, &DeletedCallCallees0_32);
        SubGoalCalledProcs_33 = hlds__goal_refs__goal_proc_refs_1_f_0(Else0_23);
        mercury__set__union_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), SubGoalCalledProcs_33, DeletedCallCallees0_32, &DeletedCallCallees_34);
        check_hlds__simplify__simplify_info__simplify_info_set_deleted_call_callees_3_p_0(DeletedCallCallees_34, STATE_VARIABLE_Info_2_56, STATE_VARIABLE_Info_49);
      }
      break;
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_ite__simplify_goal_ordinary_ite_13_p_0(
  MR_Word Vars_14,
  MR_Word Cond0_15,
  MR_Word Then0_16,
  MR_Word Else0_17,
  MR_Word * GoalExpr_18,
  MR_Word GoalInfo0_19,
  MR_Word * GoalInfo_20,
  MR_Word NestedContext0_21,
  MR_Word InstMap0_22,
  MR_Word Common0_23,
  MR_Word * Common_24,
  MR_Word STATE_VARIABLE_Info_0_67,
  MR_Word * STATE_VARIABLE_Info_68)
{
  MR_bool succeeded;
  MR_Word Cond_26;
  MR_Word AfterCondCommon_27;
  MR_Word AfterCondInstMap0_28;
  MR_Word Then_29;
  MR_Word Else_31;
  MR_Word CondInfo_34;
  MR_Word CondDelta_35;
  MR_Word ThenInfo_37;
  MR_Word ThenDelta_38;
  MR_Word CondThenDelta_39;
  MR_Word ElseInfo_41;
  MR_Word ElseDelta_42;
  MR_Word NonLocals_43;
  MR_Word VarTable_45;
  MR_Word NewDelta_46;
  MR_Word GoalInfo1_47;
  MR_Word IfThenElseExpr_48;
  MR_Word IfThenElseDetism0_49;
  MR_Word IfThenElseCanFail_50;
  MR_Word IfThenElseNumSolns_51;
  MR_Word CondDetism_52;
  MR_Word CondCanFail_53;
  MR_Word CondSolns_54;
  MR_Word STATE_VARIABLE_Info_1_69;
  MR_Word STATE_VARIABLE_Info_2_70;
  MR_Word STATE_VARIABLE_Info_3_71;
  MR_Word STATE_VARIABLE_ModuleInfo_1_73;
  MR_Word Var_74;
  MR_Word STATE_VARIABLE_ModuleInfo_2_75;
  MR_Word Var_76;
  MR_Word STATE_VARIABLE_Info_4_78;
  MR_Word _AfterThenCommon_30;
  MR_Word _AfterElseCommon_32;

  check_hlds__simplify__simplify_goal__simplify_goal_8_p_0(Cond0_15, &Cond_26, NestedContext0_21, InstMap0_22, Common0_23, &AfterCondCommon_27, STATE_VARIABLE_Info_0_67, &STATE_VARIABLE_Info_1_69);
  hlds__goal_util__apply_goal_instmap_delta_3_p_0(Cond_26, InstMap0_22, &AfterCondInstMap0_28);
  check_hlds__simplify__simplify_goal__simplify_goal_8_p_0(Then0_16, &Then_29, NestedContext0_21, AfterCondInstMap0_28, AfterCondCommon_27, &_AfterThenCommon_30, STATE_VARIABLE_Info_1_69, &STATE_VARIABLE_Info_2_70);
  check_hlds__simplify__simplify_goal__simplify_goal_8_p_0(Else0_17, &Else_31, NestedContext0_21, InstMap0_22, Common0_23, &_AfterElseCommon_32, STATE_VARIABLE_Info_2_70, &STATE_VARIABLE_Info_3_71);
  CondInfo_34 = ((MR_Word) ((MR_hl_field(0, Cond_26, 1))));
  CondDelta_35 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(CondInfo_34);
  ThenInfo_37 = ((MR_Word) ((MR_hl_field(0, Then_29, 1))));
  ThenDelta_38 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(ThenInfo_37);
  hlds__instmap__instmap_delta_apply_instmap_delta_4_p_0(CondDelta_35, ThenDelta_38, (MR_Integer) 2, &CondThenDelta_39);
  ElseInfo_41 = ((MR_Word) ((MR_hl_field(0, Else_31, 1))));
  ElseDelta_42 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(ElseInfo_41);
  NonLocals_43 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo0_19);
  check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(STATE_VARIABLE_Info_3_71, &STATE_VARIABLE_ModuleInfo_1_73);
  check_hlds__simplify__simplify_info__simplify_info_get_var_table_2_p_0(STATE_VARIABLE_Info_3_71, &VarTable_45);
  {
    Var_76 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_76, 0) = ((MR_Box) (ElseDelta_42));
    MR_hl_field(1, Var_76, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_74 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_74, 0) = ((MR_Box) (CondThenDelta_39));
    MR_hl_field(1, Var_74, 1) = ((MR_Box) (Var_76));
  }
  hlds__instmap__merge_instmap_deltas_7_p_0(VarTable_45, NonLocals_43, InstMap0_22, Var_74, &NewDelta_46, STATE_VARIABLE_ModuleInfo_1_73, &STATE_VARIABLE_ModuleInfo_2_75);
  check_hlds__simplify__simplify_info__simplify_info_set_module_info_3_p_0(STATE_VARIABLE_ModuleInfo_2_75, STATE_VARIABLE_Info_3_71, &STATE_VARIABLE_Info_4_78);
  hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(NewDelta_46, GoalInfo0_19, &GoalInfo1_47);
  {
    IfThenElseExpr_48 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, IfThenElseExpr_48, 0) = ((MR_Box) ((MR_Unsigned) 6U));
    MR_hl_field(3, IfThenElseExpr_48, 1) = ((MR_Box) (Vars_14));
    MR_hl_field(3, IfThenElseExpr_48, 2) = ((MR_Box) (Cond_26));
    MR_hl_field(3, IfThenElseExpr_48, 3) = ((MR_Box) (Then_29));
    MR_hl_field(3, IfThenElseExpr_48, 4) = ((MR_Box) (Else_31));
  }
  IfThenElseDetism0_49 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo0_19);
  parse_tree__prog_data__determinism_components_3_p_0(IfThenElseDetism0_49, &IfThenElseCanFail_50, &IfThenElseNumSolns_51);
  CondDetism_52 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(CondInfo_34);
  parse_tree__prog_data__determinism_components_3_p_0(CondDetism_52, &CondCanFail_53, &CondSolns_54);
  succeeded = (CondCanFail_53 == (MR_Integer) 1);
  if (!(succeeded))
  {
    succeeded = (CondSolns_54 == (MR_Integer) 0);
    if (!(succeeded))
    {
      MR_Word Var_79 = ((MR_Word) ((MR_hl_field(0, Else_31, 0))));
      MR_Word Var_80;

      succeeded = ((((MR_tag((MR_Word) Var_79)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_79, 0)))) == (MR_Integer) 3)));
      if (succeeded)
      {
        Var_80 = ((MR_Word) ((MR_hl_field(3, Var_79, 1))));
        succeeded = (Var_80 == (MR_Word) ((MR_Unsigned) 0U));
      }
    }
  }
  if (succeeded)
    check_hlds__simplify__simplify_goal__simplify_goal_expr_10_p_0(IfThenElseExpr_48, GoalExpr_18, GoalInfo1_47, GoalInfo_20, NestedContext0_21, InstMap0_22, Common0_23, Common_24, STATE_VARIABLE_Info_4_78, STATE_VARIABLE_Info_68);
  else
  {
    MR_Word ModuleInfo_44;
    MR_Word CanSwitch_56;

    *Common_24 = Common0_23;
    check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(STATE_VARIABLE_Info_4_78, &ModuleInfo_44);
    check_hlds__simplify__simplify_goal_ite__warn_switch_for_ite_cond_5_p_0(ModuleInfo_44, VarTable_45, Cond_26, (MR_Word) ((MR_Unsigned) 0U), &CanSwitch_56);
    switch (MR_tag((MR_Word) CanSwitch_56)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(CanSwitch_56)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *STATE_VARIABLE_Info_68 = STATE_VARIABLE_Info_4_78;
            break;
          case (MR_Integer) 1:
            *STATE_VARIABLE_Info_68 = STATE_VARIABLE_Info_4_78;
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word SwitchVar_57 = ((MR_Word) ((MR_hl_field(1, CanSwitch_56, 0))));
          MR_Word Context_58;
          MR_Word SwitchVarEntry_59;
          MR_String SwitchVarName_60;
          MR_Word OnPieces_61;
          MR_Word Pieces_62;
          MR_Word Spec_64;
          MR_Word Var_92;
          MR_Word Var_93;
          MR_Word Var_94;
          MR_Word Var_99;

          Context_58 = hlds__hlds_goal__goal_info_get_context_1_f_0(CondInfo_34);
          parse_tree__var_table__lookup_var_entry_3_p_0(VarTable_45, SwitchVar_57, &SwitchVarEntry_59);
          SwitchVarName_60 = ((MR_String) ((MR_hl_field(0, SwitchVarEntry_59, 0))));
          succeeded = (strcmp(SwitchVarName_60, (MR_String) "") == 0);
          if (succeeded)
            OnPieces_61 = (MR_Word) ((MR_Unsigned) 0U);
          else
          {
            MR_Word Var_85;
            MR_Word Var_86;

            {
              Var_86 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_86, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(3, Var_86, 1) = ((MR_Box) (SwitchVarName_60));
            }
            {
              Var_85 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_85, 0) = ((MR_Box) (Var_86));
              MR_hl_field(1, Var_85, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              OnPieces_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, OnPieces_61, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_ite_scalar_common_1[12])));
              MR_hl_field(1, OnPieces_61, 1) = ((MR_Box) (Var_85));
            }
          }
          Var_99 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), OnPieces_61, (MR_Word) (MR_mkword(1, &check_hlds__simplify__simplify_goal_ite_scalar_common_1[11])));
          Var_94 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__simplify__simplify_goal_ite_scalar_common_1[16])), Var_99);
          Var_93 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_94);
          Var_92 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_93, (MR_Word) (MR_mkword(1, &check_hlds__simplify__simplify_goal_ite_scalar_common_1[5])));
          Pieces_62 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__simplify__simplify_goal_ite_scalar_common_1[14])), Var_92);
          {
            Spec_64 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Spec_64, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.simplify.simplify_goal_ite.simplify_goal_ordinary_ite\'/13"));
            MR_hl_field(0, Spec_64, 1) = ((MR_Box) (MR_mkword(2, &check_hlds__simplify__simplify_goal_ite_scalar_common_2[2])));
            MR_hl_field(0, Spec_64, 2) = ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_ite_scalar_common_2[3])));
            MR_hl_field(0, Spec_64, 3) = ((MR_Box) (Context_58));
            MR_hl_field(0, Spec_64, 4) = ((MR_Box) (Pieces_62));
          }
          check_hlds__simplify__simplify_info__simplify_info_add_message_3_p_0(Spec_64, STATE_VARIABLE_Info_4_78, STATE_VARIABLE_Info_68);
        }
        break;
    }
    succeeded = check_hlds__simplify__simplify_info__simplify_do_mark_code_model_changes_1_p_0(*STATE_VARIABLE_Info_68);
    if (succeeded)
    {
      succeeded = (CondSolns_54 == (MR_Integer) 3);
      if (succeeded)
        succeeded = (IfThenElseNumSolns_51 != (MR_Integer) 3);
    }
    if (succeeded)
    {
      MR_Word InnerDetism_65;
      MR_Word InnerInfo_66;
      MR_Word Var_115;

      parse_tree__prog_data__determinism_components_3_p_1(&InnerDetism_65, IfThenElseCanFail_50, (MR_Integer) 3);
      hlds__hlds_goal__goal_info_set_determinism_3_p_0(InnerDetism_65, GoalInfo1_47, &InnerInfo_66);
      {
        Var_115 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_115, 0) = ((MR_Box) (IfThenElseExpr_48));
        MR_hl_field(0, Var_115, 1) = ((MR_Box) (InnerInfo_66));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        *GoalExpr_18 = base;
        MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(3, base, 1) = ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_ite_scalar_common_1[17])));
        MR_hl_field(3, base, 2) = ((MR_Box) (Var_115));
      }
    }
    else
      *GoalExpr_18 = IfThenElseExpr_48;
    *GoalInfo_20 = GoalInfo1_47;
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_ite__warn_switch_for_ite_cond_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_CondCanSwitch_87;

  check_hlds__simplify__simplify_goal_ite__warn_switch_for_ite_cond_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_CondCanSwitch_87);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_CondCanSwitch_87));
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_ite__warn_switch_for_ite_cond_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word VarTable_7,
  MR_Word Cond_8,
  MR_Word STATE_VARIABLE_CondCanSwitch_0_86,
  MR_Word * STATE_VARIABLE_CondCanSwitch_87)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word CondExpr_10 = ((MR_Word) ((MR_hl_field(0, Cond_8, 0))));

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) CondExpr_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SubGoal_42 = (MR_Word) ((MR_Word) (CondExpr_10));

          switch (MR_tag((MR_Word) STATE_VARIABLE_CondCanSwitch_0_86)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(STATE_VARIABLE_CondCanSwitch_0_86)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word next_value_of_Cond_8 = SubGoal_42;

                    // direct tailcall eliminated
                    ;
                    Cond_8 = next_value_of_Cond_8;
                    continue;
                  }
                  break;
                case (MR_Integer) 1:
                  *STATE_VARIABLE_CondCanSwitch_87 = STATE_VARIABLE_CondCanSwitch_0_86;
                  break;
              }
              break;
            case (MR_Integer) 1:
              *STATE_VARIABLE_CondCanSwitch_87 = (MR_Word) ((MR_Unsigned) 4U);
              break;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Unification_15 = ((MR_Word) ((MR_hl_field(1, CondExpr_10, 3))));

          switch (MR_tag((MR_Word) Unification_15)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
            case (MR_Integer) 2:
              *STATE_VARIABLE_CondCanSwitch_87 = (MR_Word) ((MR_Unsigned) 4U);
              break;
            case (MR_Integer) 1:
              {
                MR_Word LHSVar_28 = ((MR_Word) ((MR_hl_field(1, Unification_15, 0))));
                MR_Word LHSVarType_34;
                MR_Word TypeBody_35;

                parse_tree__var_table__lookup_var_type_3_p_0(VarTable_7, LHSVar_28, &LHSVarType_34);
                succeeded = hlds__type_util__type_to_type_defn_body_3_p_0(ModuleInfo_6, LHSVarType_34, &TypeBody_35);
                if (succeeded)
                  switch (MR_tag((MR_Word) TypeBody_35)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word TypeBodyDu_110 = (MR_Word) ((MR_Word) (TypeBody_35));
                        MR_Word Ctors_111 = ((MR_Word) ((MR_hl_field(0, TypeBodyDu_110, 0))));
                        MR_Word Var_124 = ((MR_Word) ((MR_hl_field(0, Ctors_111, 1))));

                        succeeded = (Var_124 != (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                          switch (MR_tag((MR_Word) STATE_VARIABLE_CondCanSwitch_0_86)) {
                            default: /*NOTREACHED*/ MR_assert(0);
                            case (MR_Integer) 0:
                              switch (MR_unmkbody(STATE_VARIABLE_CondCanSwitch_0_86)) {
                                default: /*NOTREACHED*/ MR_assert(0);
                                case (MR_Integer) 0:
                                  {
                                    MR_Word base;
                                    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                                    *STATE_VARIABLE_CondCanSwitch_87 = base;
                                    MR_hl_field(1, base, 0) = ((MR_Box) (LHSVar_28));
                                  }
                                  break;
                                case (MR_Integer) 1:
                                  *STATE_VARIABLE_CondCanSwitch_87 = STATE_VARIABLE_CondCanSwitch_0_86;
                                  break;
                              }
                              break;
                            case (MR_Integer) 1:
                              {
                                MR_Word SwitchVar_37 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_CondCanSwitch_0_86, 0))));

                                succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__simplify__simplify_goal_ite_scalar_common_1[0]), ((MR_Box) (SwitchVar_37)), ((MR_Box) (LHSVar_28)));
                                if (succeeded)
                                  *STATE_VARIABLE_CondCanSwitch_87 = STATE_VARIABLE_CondCanSwitch_0_86;
                                else
                                  *STATE_VARIABLE_CondCanSwitch_87 = (MR_Word) ((MR_Unsigned) 4U);
                              }
                              break;
                          }
                        else
                          *STATE_VARIABLE_CondCanSwitch_87 = (MR_Word) ((MR_Unsigned) 4U);
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        mercury__require__unexpected_2_p_0((MR_String) "function \140check_hlds.simplify.simplify_goal_ite.can_switch_on_type\'/1", (MR_String) "foreign type");
                        return;
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        mercury__require__unexpected_2_p_0((MR_String) "function \140check_hlds.simplify.simplify_goal_ite.can_switch_on_type\'/1", (MR_String) "eqv type");
                        return;
                      }
                      break;
                    case (MR_Integer) 3:
                      switch (((MR_Integer) ((MR_hl_field(3, TypeBody_35, 0))))) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          {
                            mercury__require__unexpected_2_p_0((MR_String) "function \140check_hlds.simplify.simplify_goal_ite.can_switch_on_type\'/1", (MR_String) "solver type");
                            return;
                          }
                          break;
                        case (MR_Integer) 1:
                          {
                            mercury__require__unexpected_2_p_0((MR_String) "function \140check_hlds.simplify.simplify_goal_ite.can_switch_on_type\'/1", (MR_String) "abstract type");
                            return;
                          }
                          break;
                      }
                      break;
                  }
                else
                  *STATE_VARIABLE_CondCanSwitch_87 = (MR_Word) ((MR_Unsigned) 4U);
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(3, Unification_15, 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *STATE_VARIABLE_CondCanSwitch_87 = (MR_Word) ((MR_Unsigned) 4U);
                  break;
                case (MR_Integer) 1:
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.simplify.simplify_goal_ite.warn_switch_for_ite_cond\'/5", (MR_String) "complicated unify");
                    return;
                  }
                  break;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        *STATE_VARIABLE_CondCanSwitch_87 = (MR_Word) ((MR_Unsigned) 4U);
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, CondExpr_10, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
          case (MR_Integer) 2:
          case (MR_Integer) 4:
          case (MR_Integer) 5:
          case (MR_Integer) 6:
            *STATE_VARIABLE_CondCanSwitch_87 = (MR_Word) ((MR_Unsigned) 4U);
            break;
          case (MR_Integer) 3:
            {
              MR_Word Disjuncts_41 = ((MR_Word) ((MR_hl_field(3, CondExpr_10, 1))));
              MR_Word Var_95;
              MR_Box conv1_STATE_VARIABLE_CondCanSwitch_87;

              {
                Var_95 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_95, 0) = ((MR_Box) (&check_hlds__simplify__simplify_goal_ite_scalar_common_3[0]));
                MR_hl_field(0, Var_95, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_ite__warn_switch_for_ite_cond_5_p_0_1));
                MR_hl_field(0, Var_95, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(0, Var_95, 3) = ((MR_Box) (ModuleInfo_6));
                MR_hl_field(0, Var_95, 4) = ((MR_Box) (VarTable_7));
              }
              mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&check_hlds__simplify__simplify_goal_ite__check_hlds__simplify__simplify_goal_ite__type_ctor_info_cond_can_switch_0), Var_95, Disjuncts_41, ((MR_Box) (STATE_VARIABLE_CondCanSwitch_0_86)), &conv1_STATE_VARIABLE_CondCanSwitch_87);
              *STATE_VARIABLE_CondCanSwitch_87 = ((MR_Word) (conv1_STATE_VARIABLE_CondCanSwitch_87));
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word ShortHand_73 = ((MR_Word) ((MR_hl_field(3, CondExpr_10, 1))));

              switch (MR_tag((MR_Word) ShortHand_73)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.simplify.simplify_goal_ite.warn_switch_for_ite_cond\'/5", (MR_String) "shorthand");
                    return;
                  }
                  break;
                case (MR_Integer) 1:
                  *STATE_VARIABLE_CondCanSwitch_87 = (MR_Word) ((MR_Unsigned) 4U);
                  break;
                case (MR_Integer) 2:
                  *STATE_VARIABLE_CondCanSwitch_87 = (MR_Word) ((MR_Unsigned) 4U);
                  break;
              }
            }
            break;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_ite__maybe_warn_about_condition_5_p_0(
  MR_Word GoalInfo0_6,
  MR_Word NestedContext0_7,
  MR_String Problem_8,
  MR_Word STATE_VARIABLE_Info_0_14,
  MR_Word * STATE_VARIABLE_Info_15)
{
  MR_bool succeeded;
  MR_Word InsideDuplForSwitch_10 = ((MR_Unsigned) ((MR_hl_field(0, NestedContext0_7, 0))) & (MR_Integer) 1);
  MR_Word STATE_VARIABLE_Info_1_36;
  MR_Word STATE_VARIABLE_Info_2_37;

  succeeded = check_hlds__simplify__simplify_info__simplify_do_warn_dodgy_simple_code_1_p_0(STATE_VARIABLE_Info_0_14);
  if (succeeded)
    succeeded = (InsideDuplForSwitch_10 == (MR_Integer) 0);
  if (succeeded)
  {
    MR_Word Context_11;
    MR_Word Pieces_12;
    MR_Word Spec_13;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_22;
    MR_Word Var_23;

    Context_11 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo0_6);
    {
      Var_23 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_23, 0) = ((MR_Box) ((MR_Unsigned) 9U));
      MR_hl_field(3, Var_23, 1) = ((MR_Box) (Problem_8));
    }
    {
      Var_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_22, 0) = ((MR_Box) (Var_23));
      MR_hl_field(1, Var_22, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__simplify__simplify_goal_ite_scalar_common_1[11])));
    }
    Var_21 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_22);
    Var_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_21, (MR_Word) (MR_mkword(1, &check_hlds__simplify__simplify_goal_ite_scalar_common_1[5])));
    Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__simplify__simplify_goal_ite_scalar_common_1[9])), Var_20);
    {
      Spec_13 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_13, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.simplify.simplify_goal_ite.maybe_warn_about_condition\'/5"));
      MR_hl_field(0, Spec_13, 1) = ((MR_Box) (MR_mkword(2, &check_hlds__simplify__simplify_goal_ite_scalar_common_2[0])));
      MR_hl_field(0, Spec_13, 2) = ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_ite_scalar_common_2[1])));
      MR_hl_field(0, Spec_13, 3) = ((MR_Box) (Context_11));
      MR_hl_field(0, Spec_13, 4) = ((MR_Box) (Pieces_12));
    }
    check_hlds__simplify__simplify_info__simplify_info_add_message_3_p_0(Spec_13, STATE_VARIABLE_Info_0_14, &STATE_VARIABLE_Info_1_36);
  }
  else
    STATE_VARIABLE_Info_1_36 = STATE_VARIABLE_Info_0_14;
  check_hlds__simplify__simplify_info__simplify_info_set_rerun_quant_instmap_delta_2_p_0(STATE_VARIABLE_Info_1_36, &STATE_VARIABLE_Info_2_37);
  check_hlds__simplify__simplify_info__simplify_info_set_rerun_det_2_p_0(STATE_VARIABLE_Info_2_37, STATE_VARIABLE_Info_15);
}

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_ite____Unify____cond_can_switch_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__simplify__simplify_goal_ite____Unify____cond_can_switch_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_ite____Compare____cond_can_switch_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__simplify__simplify_goal_ite____Compare____cond_can_switch_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__check_hlds__simplify__simplify_goal_ite__init(void)
{
}

void mercury__check_hlds__simplify__simplify_goal_ite__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&check_hlds__simplify__simplify_goal_ite__check_hlds__simplify__simplify_goal_ite__type_ctor_info_cond_can_switch_0);
}

void mercury__check_hlds__simplify__simplify_goal_ite__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__simplify__simplify_goal_ite__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module check_hlds.simplify.simplify_goal_ite.
