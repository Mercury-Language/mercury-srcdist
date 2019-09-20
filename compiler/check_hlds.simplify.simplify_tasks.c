/*
** Automatically generated from `simplify_tasks.m'
** by the Mercury compiler,
** version rotd-2019-09-20
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


// :- module check_hlds.simplify.simplify_tasks.
// :- implementation.

/*
INIT mercury__check_hlds__simplify__simplify_tasks__init
ENDINIT
*/

#include "check_hlds.simplify.simplify_tasks.mih"


#include "check_hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "check_hlds.simplify.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.sym_name.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "univ.mih"




static const MR_EnumFunctorDesc check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__enum_functor_desc_simplify_task_0_0;

static const MR_EnumFunctorDesc check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__enum_functor_desc_simplify_task_0_1;

static const MR_EnumFunctorDesc check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__enum_functor_desc_simplify_task_0_2;

static const MR_EnumFunctorDesc check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__enum_functor_desc_simplify_task_0_3;

static const MR_EnumFunctorDesc check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__enum_functor_desc_simplify_task_0_4;

static const MR_EnumFunctorDesc check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__enum_functor_desc_simplify_task_0_5;

static const MR_EnumFunctorDesc check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__enum_functor_desc_simplify_task_0_6;

static const MR_EnumFunctorDesc check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__enum_functor_desc_simplify_task_0_7;

static const MR_EnumFunctorDesc check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__enum_functor_desc_simplify_task_0_8;

static const MR_EnumFunctorDesc check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__enum_functor_desc_simplify_task_0_9;

static const MR_EnumFunctorDesc check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__enum_functor_desc_simplify_task_0_10;

static const MR_EnumFunctorDesc check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__enum_functor_desc_simplify_task_0_11;

static const MR_EnumFunctorDesc check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__enum_functor_desc_simplify_task_0_12;

static const MR_EnumFunctorDesc check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__enum_functor_desc_simplify_task_0_13;

static const MR_EnumFunctorDesc check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__enum_functor_desc_simplify_task_0_14;

static const MR_EnumFunctorDesc check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__enum_functor_desc_simplify_task_0_15;

static const MR_EnumFunctorDescPtr check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__enum_value_ordered_simplify_task_0[16];

static const MR_EnumFunctorDescPtr check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__enum_name_ordered_simplify_task_0[16];

static const MR_Integer check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__functor_number_map_simplify_task_0[16];

static const MR_PseudoTypeInfo check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__field_types_simplify_tasks_0_0[16];

static const MR_ConstString check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__field_names_simplify_tasks_0_0[16];

static const MR_DuArgLocn check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__field_locns_simplify_tasks_0_0[16];

static const MR_DuFunctorDesc check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__du_functor_desc_simplify_tasks_0_0;

static const MR_DuFunctorDescPtr check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__du_stag_ordered_simplify_tasks_0_0[1];

static const MR_DuPtagLayout check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__du_ptag_ordered_simplify_tasks_0[1];

static const MR_DuFunctorDescPtr check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__du_name_ordered_simplify_tasks_0[1];

static const MR_Integer check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__functor_number_map_simplify_tasks_0[1];

static MR_bool MR_CALL 
check_hlds__simplify__simplify_tasks____Unify____simplify_task_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__simplify__simplify_tasks____Compare____simplify_task_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__simplify__simplify_tasks____Unify____simplify_tasks_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__simplify__simplify_tasks____Compare____simplify_tasks_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box check_hlds__simplify__simplify_tasks_scalar_common_1[16][2];




static /* final */ const MR_Box check_hlds__simplify__simplify_tasks_scalar_common_1[16][2] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 10 */
  {
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 11 */
  {
    ((MR_Box) ((MR_Integer) 11)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 12 */
  {
    ((MR_Box) ((MR_Integer) 12)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 13 */
  {
    ((MR_Box) ((MR_Integer) 13)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 14 */
  {
    ((MR_Box) ((MR_Integer) 14)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 15 */
  {
    ((MR_Box) ((MR_Integer) 15)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_EnumFunctorDesc check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__enum_functor_desc_simplify_task_0_0 = {
  (MR_String) "simptask_warn_simple_code",
  INT32_C(0)
};

static const MR_EnumFunctorDesc check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__enum_functor_desc_simplify_task_0_1 = {
  (MR_String) "simptask_warn_duplicate_calls",
  INT32_C(1)
};

static const MR_EnumFunctorDesc check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__enum_functor_desc_simplify_task_0_2 = {
  (MR_String) "simptask_warn_implicit_stream_calls",
  INT32_C(2)
};

static const MR_EnumFunctorDesc check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__enum_functor_desc_simplify_task_0_3 = {
  (MR_String) "simptask_format_calls",
  INT32_C(3)
};

static const MR_EnumFunctorDesc check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__enum_functor_desc_simplify_task_0_4 = {
  (MR_String) "simptask_warn_obsolete",
  INT32_C(4)
};

static const MR_EnumFunctorDesc check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__enum_functor_desc_simplify_task_0_5 = {
  (MR_String) "simptask_mark_code_model_changes",
  INT32_C(5)
};

static const MR_EnumFunctorDesc check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__enum_functor_desc_simplify_task_0_6 = {
  (MR_String) "simptask_after_front_end",
  INT32_C(6)
};

static const MR_EnumFunctorDesc check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__enum_functor_desc_simplify_task_0_7 = {
  (MR_String) "simptask_excess_assigns",
  INT32_C(7)
};

static const MR_EnumFunctorDesc check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__enum_functor_desc_simplify_task_0_8 = {
  (MR_String) "simptask_test_after_switch",
  INT32_C(8)
};

static const MR_EnumFunctorDesc check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__enum_functor_desc_simplify_task_0_9 = {
  (MR_String) "simptask_elim_removable_scopes",
  INT32_C(9)
};

static const MR_EnumFunctorDesc check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__enum_functor_desc_simplify_task_0_10 = {
  (MR_String) "simptask_opt_duplicate_calls",
  INT32_C(10)
};

static const MR_EnumFunctorDesc check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__enum_functor_desc_simplify_task_0_11 = {
  (MR_String) "simptask_constant_prop",
  INT32_C(11)
};

static const MR_EnumFunctorDesc check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__enum_functor_desc_simplify_task_0_12 = {
  (MR_String) "simptask_common_struct",
  INT32_C(12)
};

static const MR_EnumFunctorDesc check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__enum_functor_desc_simplify_task_0_13 = {
  (MR_String) "simptask_extra_common_struct",
  INT32_C(13)
};

static const MR_EnumFunctorDesc check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__enum_functor_desc_simplify_task_0_14 = {
  (MR_String) "simptask_ignore_par_conjs",
  INT32_C(14)
};

static const MR_EnumFunctorDesc check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__enum_functor_desc_simplify_task_0_15 = {
  (MR_String) "simptask_warn_suspicious_recursion",
  INT32_C(15)
};

static const MR_EnumFunctorDescPtr check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__enum_value_ordered_simplify_task_0[16] = {
  &check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__enum_functor_desc_simplify_task_0_0,
  &check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__enum_functor_desc_simplify_task_0_1,
  &check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__enum_functor_desc_simplify_task_0_2,
  &check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__enum_functor_desc_simplify_task_0_3,
  &check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__enum_functor_desc_simplify_task_0_4,
  &check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__enum_functor_desc_simplify_task_0_5,
  &check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__enum_functor_desc_simplify_task_0_6,
  &check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__enum_functor_desc_simplify_task_0_7,
  &check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__enum_functor_desc_simplify_task_0_8,
  &check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__enum_functor_desc_simplify_task_0_9,
  &check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__enum_functor_desc_simplify_task_0_10,
  &check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__enum_functor_desc_simplify_task_0_11,
  &check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__enum_functor_desc_simplify_task_0_12,
  &check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__enum_functor_desc_simplify_task_0_13,
  &check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__enum_functor_desc_simplify_task_0_14,
  &check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__enum_functor_desc_simplify_task_0_15
};

static const MR_EnumFunctorDescPtr check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__enum_name_ordered_simplify_task_0[16] = {
  &check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__enum_functor_desc_simplify_task_0_6,
  &check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__enum_functor_desc_simplify_task_0_12,
  &check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__enum_functor_desc_simplify_task_0_11,
  &check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__enum_functor_desc_simplify_task_0_9,
  &check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__enum_functor_desc_simplify_task_0_7,
  &check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__enum_functor_desc_simplify_task_0_13,
  &check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__enum_functor_desc_simplify_task_0_3,
  &check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__enum_functor_desc_simplify_task_0_14,
  &check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__enum_functor_desc_simplify_task_0_5,
  &check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__enum_functor_desc_simplify_task_0_10,
  &check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__enum_functor_desc_simplify_task_0_8,
  &check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__enum_functor_desc_simplify_task_0_1,
  &check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__enum_functor_desc_simplify_task_0_2,
  &check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__enum_functor_desc_simplify_task_0_4,
  &check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__enum_functor_desc_simplify_task_0_0,
  &check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__enum_functor_desc_simplify_task_0_15
};

static const MR_Integer check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__functor_number_map_simplify_task_0[16] = {
  (MR_Integer) 14,
  (MR_Integer) 11,
  (MR_Integer) 12,
  (MR_Integer) 6,
  (MR_Integer) 13,
  (MR_Integer) 8,
  (MR_Integer) 0,
  (MR_Integer) 4,
  (MR_Integer) 10,
  (MR_Integer) 3,
  (MR_Integer) 9,
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 5,
  (MR_Integer) 7,
  (MR_Integer) 15
};

const MR_TypeCtorInfo_Struct check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__type_ctor_info_simplify_task_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__simplify__simplify_tasks____Unify____simplify_task_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__simplify_tasks____Compare____simplify_task_0_0_10001)),
  (MR_String) "check_hlds.simplify.simplify_tasks",
  (MR_String) "simplify_task",
  {     check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__enum_name_ordered_simplify_task_0 },
  {     check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__enum_value_ordered_simplify_task_0 },
  (MR_Integer) 16,
  UINT16_C(4),
  check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__functor_number_map_simplify_task_0
};

static const MR_PseudoTypeInfo check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__field_types_simplify_tasks_0_0[16] = {
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0)
};

static const MR_ConstString check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__field_names_simplify_tasks_0_0[16] = {
  (MR_String) "do_warn_simple_code",
  (MR_String) "do_warn_duplicate_calls",
  (MR_String) "do_warn_implicit_stream_calls",
  (MR_String) "do_format_calls",
  (MR_String) "do_warn_obsolete",
  (MR_String) "do_mark_code_model_changes",
  (MR_String) "do_after_front_end",
  (MR_String) "do_excess_assign",
  (MR_String) "do_test_after_switch",
  (MR_String) "do_elim_removable_scopes",
  (MR_String) "do_opt_duplicate_calls",
  (MR_String) "do_constant_prop",
  (MR_String) "do_common_struct",
  (MR_String) "do_extra_common_struct",
  (MR_String) "do_ignore_par_conjunctions",
  (MR_String) "do_warn_suspicious_recursion"
};

static const MR_DuArgLocn check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__field_locns_simplify_tasks_0_0[16] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 15,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 14,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 13,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 12,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 11,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 10,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 9,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 8,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 7,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 6,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 5,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 4,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 3,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 2,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 1,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__du_functor_desc_simplify_tasks_0_0 = {
  (MR_String) "simplify_tasks",
  INT16_C(16),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__field_types_simplify_tasks_0_0,
  check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__field_names_simplify_tasks_0_0,
  check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__field_locns_simplify_tasks_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__du_stag_ordered_simplify_tasks_0_0[1] = {
  &check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__du_functor_desc_simplify_tasks_0_0
};

static const MR_DuPtagLayout check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__du_ptag_ordered_simplify_tasks_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__du_stag_ordered_simplify_tasks_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__du_name_ordered_simplify_tasks_0[1] = {
  &check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__du_functor_desc_simplify_tasks_0_0
};

static const MR_Integer check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__functor_number_map_simplify_tasks_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__type_ctor_info_simplify_tasks_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__simplify__simplify_tasks____Unify____simplify_tasks_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__simplify_tasks____Compare____simplify_tasks_0_0_10001)),
  (MR_String) "check_hlds.simplify.simplify_tasks",
  (MR_String) "simplify_tasks",
  {     check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__du_name_ordered_simplify_tasks_0 },
  {     check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__du_ptag_ordered_simplify_tasks_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__functor_number_map_simplify_tasks_0
};

void MR_CALL 
check_hlds__simplify__simplify_tasks____Compare____simplify_tasks_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_51 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_52 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_51 == CastY_52);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 15)) & (MR_Integer) 1);
      MR_Word ArgY1_5 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) >> 15)) & (MR_Integer) 1);
      MR_Word ArgX2_7 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 14)) & (MR_Integer) 1);
      MR_Word ArgY2_8 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) >> 14)) & (MR_Integer) 1);
      MR_Word ArgX3_10 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 13)) & (MR_Integer) 1);
      MR_Word ArgY3_11 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) >> 13)) & (MR_Integer) 1);
      MR_Word ArgX4_13 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 12)) & (MR_Integer) 1);
      MR_Word ArgY4_14 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) >> 12)) & (MR_Integer) 1);
      MR_Word ArgX5_16 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 11)) & (MR_Integer) 1);
      MR_Word ArgY5_17 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) >> 11)) & (MR_Integer) 1);
      MR_Word ArgX6_19 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 10)) & (MR_Integer) 1);
      MR_Word ArgY6_20 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) >> 10)) & (MR_Integer) 1);
      MR_Word ArgX7_22 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 9)) & (MR_Integer) 1);
      MR_Word ArgY7_23 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) >> 9)) & (MR_Integer) 1);
      MR_Word ArgX8_25 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 8)) & (MR_Integer) 1);
      MR_Word ArgY8_26 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) >> 8)) & (MR_Integer) 1);
      MR_Word ArgX9_28 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 7)) & (MR_Integer) 1);
      MR_Word ArgY9_29 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) >> 7)) & (MR_Integer) 1);
      MR_Word ArgX10_31 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 6)) & (MR_Integer) 1);
      MR_Word ArgY10_32 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) >> 6)) & (MR_Integer) 1);
      MR_Word ArgX11_34 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 5)) & (MR_Integer) 1);
      MR_Word ArgY11_35 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) >> 5)) & (MR_Integer) 1);
      MR_Word ArgX12_37 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 4)) & (MR_Integer) 1);
      MR_Word ArgY12_38 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) >> 4)) & (MR_Integer) 1);
      MR_Word ArgX13_40 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 3)) & (MR_Integer) 1);
      MR_Word ArgY13_41 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) >> 3)) & (MR_Integer) 1);
      MR_Word ArgX14_43 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
      MR_Word ArgY14_44 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
      MR_Word ArgX15_46 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgY15_47 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgX16_49 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word ArgY16_50 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word SubResult1_6;
      MR_Integer Var_69 = (MR_Integer) (ArgX1_4);
      MR_Integer Var_70 = (MR_Integer) (ArgY1_5);

      succeeded = (Var_69 < Var_70);
      if (succeeded)
      {
        SubResult1_6 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (Var_69 > Var_70);
        if (succeeded)
        {
          SubResult1_6 = (MR_Integer) 2;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = MR_TRUE;
          succeeded = !(succeeded);
          if (succeeded)
          {
            SubResult1_6 = (MR_Integer) 0;
            succeeded = MR_TRUE;
          }
        }
      }
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;
        MR_Integer Var_71 = (MR_Integer) (ArgX2_7);
        MR_Integer Var_72 = (MR_Integer) (ArgY2_8);

        succeeded = (Var_71 < Var_72);
        if (succeeded)
        {
          SubResult2_9 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (Var_71 > Var_72);
          if (succeeded)
          {
            SubResult2_9 = (MR_Integer) 2;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = MR_TRUE;
            succeeded = !(succeeded);
            if (succeeded)
            {
              SubResult2_9 = (MR_Integer) 0;
              succeeded = MR_TRUE;
            }
          }
        }
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
        {
          MR_Word SubResult3_12;
          MR_Integer Var_73 = (MR_Integer) (ArgX3_10);
          MR_Integer Var_74 = (MR_Integer) (ArgY3_11);

          succeeded = (Var_73 < Var_74);
          if (succeeded)
          {
            SubResult3_12 = (MR_Integer) 1;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = (Var_73 > Var_74);
            if (succeeded)
            {
              SubResult3_12 = (MR_Integer) 2;
              succeeded = MR_TRUE;
            }
            else
            {
              succeeded = MR_TRUE;
              succeeded = !(succeeded);
              if (succeeded)
              {
                SubResult3_12 = (MR_Integer) 0;
                succeeded = MR_TRUE;
              }
            }
          }
          if (succeeded)
            *HeadVar__1_1 = SubResult3_12;
          else
          {
            MR_Word SubResult4_15;
            MR_Integer Var_75 = (MR_Integer) (ArgX4_13);
            MR_Integer Var_76 = (MR_Integer) (ArgY4_14);

            succeeded = (Var_75 < Var_76);
            if (succeeded)
            {
              SubResult4_15 = (MR_Integer) 1;
              succeeded = MR_TRUE;
            }
            else
            {
              succeeded = (Var_75 > Var_76);
              if (succeeded)
              {
                SubResult4_15 = (MR_Integer) 2;
                succeeded = MR_TRUE;
              }
              else
              {
                succeeded = MR_TRUE;
                succeeded = !(succeeded);
                if (succeeded)
                {
                  SubResult4_15 = (MR_Integer) 0;
                  succeeded = MR_TRUE;
                }
              }
            }
            if (succeeded)
              *HeadVar__1_1 = SubResult4_15;
            else
            {
              MR_Word SubResult5_18;
              MR_Integer Var_77 = (MR_Integer) (ArgX5_16);
              MR_Integer Var_78 = (MR_Integer) (ArgY5_17);

              succeeded = (Var_77 < Var_78);
              if (succeeded)
              {
                SubResult5_18 = (MR_Integer) 1;
                succeeded = MR_TRUE;
              }
              else
              {
                succeeded = (Var_77 > Var_78);
                if (succeeded)
                {
                  SubResult5_18 = (MR_Integer) 2;
                  succeeded = MR_TRUE;
                }
                else
                {
                  succeeded = MR_TRUE;
                  succeeded = !(succeeded);
                  if (succeeded)
                  {
                    SubResult5_18 = (MR_Integer) 0;
                    succeeded = MR_TRUE;
                  }
                }
              }
              if (succeeded)
                *HeadVar__1_1 = SubResult5_18;
              else
              {
                MR_Word SubResult6_21;
                MR_Integer Var_79 = (MR_Integer) (ArgX6_19);
                MR_Integer Var_80 = (MR_Integer) (ArgY6_20);

                succeeded = (Var_79 < Var_80);
                if (succeeded)
                {
                  SubResult6_21 = (MR_Integer) 1;
                  succeeded = MR_TRUE;
                }
                else
                {
                  succeeded = (Var_79 > Var_80);
                  if (succeeded)
                  {
                    SubResult6_21 = (MR_Integer) 2;
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    succeeded = MR_TRUE;
                    succeeded = !(succeeded);
                    if (succeeded)
                    {
                      SubResult6_21 = (MR_Integer) 0;
                      succeeded = MR_TRUE;
                    }
                  }
                }
                if (succeeded)
                  *HeadVar__1_1 = SubResult6_21;
                else
                {
                  MR_Word SubResult7_24;
                  MR_Integer Var_81 = (MR_Integer) (ArgX7_22);
                  MR_Integer Var_82 = (MR_Integer) (ArgY7_23);

                  succeeded = (Var_81 < Var_82);
                  if (succeeded)
                  {
                    SubResult7_24 = (MR_Integer) 1;
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    succeeded = (Var_81 > Var_82);
                    if (succeeded)
                    {
                      SubResult7_24 = (MR_Integer) 2;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = MR_TRUE;
                      succeeded = !(succeeded);
                      if (succeeded)
                      {
                        SubResult7_24 = (MR_Integer) 0;
                        succeeded = MR_TRUE;
                      }
                    }
                  }
                  if (succeeded)
                    *HeadVar__1_1 = SubResult7_24;
                  else
                  {
                    MR_Word SubResult8_27;
                    MR_Integer Var_83 = (MR_Integer) (ArgX8_25);
                    MR_Integer Var_84 = (MR_Integer) (ArgY8_26);

                    succeeded = (Var_83 < Var_84);
                    if (succeeded)
                    {
                      SubResult8_27 = (MR_Integer) 1;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = (Var_83 > Var_84);
                      if (succeeded)
                      {
                        SubResult8_27 = (MR_Integer) 2;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = MR_TRUE;
                        succeeded = !(succeeded);
                        if (succeeded)
                        {
                          SubResult8_27 = (MR_Integer) 0;
                          succeeded = MR_TRUE;
                        }
                      }
                    }
                    if (succeeded)
                      *HeadVar__1_1 = SubResult8_27;
                    else
                    {
                      MR_Word SubResult9_30;
                      MR_Integer Var_85 = (MR_Integer) (ArgX9_28);
                      MR_Integer Var_86 = (MR_Integer) (ArgY9_29);

                      succeeded = (Var_85 < Var_86);
                      if (succeeded)
                      {
                        SubResult9_30 = (MR_Integer) 1;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = (Var_85 > Var_86);
                        if (succeeded)
                        {
                          SubResult9_30 = (MR_Integer) 2;
                          succeeded = MR_TRUE;
                        }
                        else
                        {
                          succeeded = MR_TRUE;
                          succeeded = !(succeeded);
                          if (succeeded)
                          {
                            SubResult9_30 = (MR_Integer) 0;
                            succeeded = MR_TRUE;
                          }
                        }
                      }
                      if (succeeded)
                        *HeadVar__1_1 = SubResult9_30;
                      else
                      {
                        MR_Word SubResult10_33;
                        MR_Integer Var_87 = (MR_Integer) (ArgX10_31);
                        MR_Integer Var_88 = (MR_Integer) (ArgY10_32);

                        succeeded = (Var_87 < Var_88);
                        if (succeeded)
                        {
                          SubResult10_33 = (MR_Integer) 1;
                          succeeded = MR_TRUE;
                        }
                        else
                        {
                          succeeded = (Var_87 > Var_88);
                          if (succeeded)
                          {
                            SubResult10_33 = (MR_Integer) 2;
                            succeeded = MR_TRUE;
                          }
                          else
                          {
                            succeeded = MR_TRUE;
                            succeeded = !(succeeded);
                            if (succeeded)
                            {
                              SubResult10_33 = (MR_Integer) 0;
                              succeeded = MR_TRUE;
                            }
                          }
                        }
                        if (succeeded)
                          *HeadVar__1_1 = SubResult10_33;
                        else
                        {
                          MR_Word SubResult11_36;
                          MR_Integer Var_89 = (MR_Integer) (ArgX11_34);
                          MR_Integer Var_90 = (MR_Integer) (ArgY11_35);

                          succeeded = (Var_89 < Var_90);
                          if (succeeded)
                          {
                            SubResult11_36 = (MR_Integer) 1;
                            succeeded = MR_TRUE;
                          }
                          else
                          {
                            succeeded = (Var_89 > Var_90);
                            if (succeeded)
                            {
                              SubResult11_36 = (MR_Integer) 2;
                              succeeded = MR_TRUE;
                            }
                            else
                            {
                              succeeded = MR_TRUE;
                              succeeded = !(succeeded);
                              if (succeeded)
                              {
                                SubResult11_36 = (MR_Integer) 0;
                                succeeded = MR_TRUE;
                              }
                            }
                          }
                          if (succeeded)
                            *HeadVar__1_1 = SubResult11_36;
                          else
                          {
                            MR_Word SubResult12_39;
                            MR_Integer Var_91 = (MR_Integer) (ArgX12_37);
                            MR_Integer Var_92 = (MR_Integer) (ArgY12_38);

                            succeeded = (Var_91 < Var_92);
                            if (succeeded)
                            {
                              SubResult12_39 = (MR_Integer) 1;
                              succeeded = MR_TRUE;
                            }
                            else
                            {
                              succeeded = (Var_91 > Var_92);
                              if (succeeded)
                              {
                                SubResult12_39 = (MR_Integer) 2;
                                succeeded = MR_TRUE;
                              }
                              else
                              {
                                succeeded = MR_TRUE;
                                succeeded = !(succeeded);
                                if (succeeded)
                                {
                                  SubResult12_39 = (MR_Integer) 0;
                                  succeeded = MR_TRUE;
                                }
                              }
                            }
                            if (succeeded)
                              *HeadVar__1_1 = SubResult12_39;
                            else
                            {
                              MR_Word SubResult13_42;
                              MR_Integer Var_93 = (MR_Integer) (ArgX13_40);
                              MR_Integer Var_94 = (MR_Integer) (ArgY13_41);

                              succeeded = (Var_93 < Var_94);
                              if (succeeded)
                              {
                                SubResult13_42 = (MR_Integer) 1;
                                succeeded = MR_TRUE;
                              }
                              else
                              {
                                succeeded = (Var_93 > Var_94);
                                if (succeeded)
                                {
                                  SubResult13_42 = (MR_Integer) 2;
                                  succeeded = MR_TRUE;
                                }
                                else
                                {
                                  succeeded = MR_TRUE;
                                  succeeded = !(succeeded);
                                  if (succeeded)
                                  {
                                    SubResult13_42 = (MR_Integer) 0;
                                    succeeded = MR_TRUE;
                                  }
                                }
                              }
                              if (succeeded)
                                *HeadVar__1_1 = SubResult13_42;
                              else
                              {
                                MR_Word SubResult14_45;
                                MR_Integer Var_95 = (MR_Integer) (ArgX14_43);
                                MR_Integer Var_96 = (MR_Integer) (ArgY14_44);

                                succeeded = (Var_95 < Var_96);
                                if (succeeded)
                                {
                                  SubResult14_45 = (MR_Integer) 1;
                                  succeeded = MR_TRUE;
                                }
                                else
                                {
                                  succeeded = (Var_95 > Var_96);
                                  if (succeeded)
                                  {
                                    SubResult14_45 = (MR_Integer) 2;
                                    succeeded = MR_TRUE;
                                  }
                                  else
                                  {
                                    succeeded = MR_TRUE;
                                    succeeded = !(succeeded);
                                    if (succeeded)
                                    {
                                      SubResult14_45 = (MR_Integer) 0;
                                      succeeded = MR_TRUE;
                                    }
                                  }
                                }
                                if (succeeded)
                                  *HeadVar__1_1 = SubResult14_45;
                                else
                                {
                                  MR_Word SubResult15_48;
                                  MR_Integer Var_97 = (MR_Integer) (ArgX15_46);
                                  MR_Integer Var_98 = (MR_Integer) (ArgY15_47);

                                  succeeded = (Var_97 < Var_98);
                                  if (succeeded)
                                  {
                                    SubResult15_48 = (MR_Integer) 1;
                                    succeeded = MR_TRUE;
                                  }
                                  else
                                  {
                                    succeeded = (Var_97 > Var_98);
                                    if (succeeded)
                                    {
                                      SubResult15_48 = (MR_Integer) 2;
                                      succeeded = MR_TRUE;
                                    }
                                    else
                                    {
                                      succeeded = MR_TRUE;
                                      succeeded = !(succeeded);
                                      if (succeeded)
                                      {
                                        SubResult15_48 = (MR_Integer) 0;
                                        succeeded = MR_TRUE;
                                      }
                                    }
                                  }
                                  if (succeeded)
                                    *HeadVar__1_1 = SubResult15_48;
                                  else
                                  {
                                    MR_Integer Var_99 = (MR_Integer) (ArgX16_49);
                                    MR_Integer Var_100 = (MR_Integer) (ArgY16_50);

                                    succeeded = (Var_99 < Var_100);
                                    if (succeeded)
                                      *HeadVar__1_1 = (MR_Integer) 1;
                                    else
                                    {
                                      succeeded = (Var_99 > Var_100);
                                      if (succeeded)
                                        *HeadVar__1_1 = (MR_Integer) 2;
                                      else
                                        *HeadVar__1_1 = (MR_Integer) 0;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
}

MR_bool MR_CALL 
check_hlds__simplify__simplify_tasks____Unify____simplify_tasks_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_35 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_36 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_35 == CastY_36);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word ArgX1_3 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) >> 15)) & (MR_Integer) 1);
      MR_Word ArgY1_4 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 15)) & (MR_Integer) 1);
      MR_Word ArgX2_5 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) >> 14)) & (MR_Integer) 1);
      MR_Word ArgY2_6 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 14)) & (MR_Integer) 1);
      MR_Word ArgX3_7 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) >> 13)) & (MR_Integer) 1);
      MR_Word ArgY3_8 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 13)) & (MR_Integer) 1);
      MR_Word ArgX4_9 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) >> 12)) & (MR_Integer) 1);
      MR_Word ArgY4_10 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 12)) & (MR_Integer) 1);
      MR_Word ArgX5_11 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) >> 11)) & (MR_Integer) 1);
      MR_Word ArgY5_12 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 11)) & (MR_Integer) 1);
      MR_Word ArgX6_13 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) >> 10)) & (MR_Integer) 1);
      MR_Word ArgY6_14 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 10)) & (MR_Integer) 1);
      MR_Word ArgX7_15 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) >> 9)) & (MR_Integer) 1);
      MR_Word ArgY7_16 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 9)) & (MR_Integer) 1);
      MR_Word ArgX8_17 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) >> 8)) & (MR_Integer) 1);
      MR_Word ArgY8_18 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 8)) & (MR_Integer) 1);
      MR_Word ArgX9_19 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) >> 7)) & (MR_Integer) 1);
      MR_Word ArgY9_20 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 7)) & (MR_Integer) 1);
      MR_Word ArgX10_21 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) >> 6)) & (MR_Integer) 1);
      MR_Word ArgY10_22 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 6)) & (MR_Integer) 1);
      MR_Word ArgX11_23 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) >> 5)) & (MR_Integer) 1);
      MR_Word ArgY11_24 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 5)) & (MR_Integer) 1);
      MR_Word ArgX12_25 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) >> 4)) & (MR_Integer) 1);
      MR_Word ArgY12_26 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 4)) & (MR_Integer) 1);
      MR_Word ArgX13_27 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) >> 3)) & (MR_Integer) 1);
      MR_Word ArgY13_28 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 3)) & (MR_Integer) 1);
      MR_Word ArgX14_29 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
      MR_Word ArgY14_30 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
      MR_Word ArgX15_31 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgY15_32 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgX16_33 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word ArgY16_34 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);

      succeeded = (ArgX1_3 == ArgY1_4);
      if (succeeded)
      {
        succeeded = (ArgX2_5 == ArgY2_6);
        if (succeeded)
        {
          succeeded = (ArgX3_7 == ArgY3_8);
          if (succeeded)
          {
            succeeded = (ArgX4_9 == ArgY4_10);
            if (succeeded)
            {
              succeeded = (ArgX5_11 == ArgY5_12);
              if (succeeded)
              {
                succeeded = (ArgX6_13 == ArgY6_14);
                if (succeeded)
                {
                  succeeded = (ArgX7_15 == ArgY7_16);
                  if (succeeded)
                  {
                    succeeded = (ArgX8_17 == ArgY8_18);
                    if (succeeded)
                    {
                      succeeded = (ArgX9_19 == ArgY9_20);
                      if (succeeded)
                      {
                        succeeded = (ArgX10_21 == ArgY10_22);
                        if (succeeded)
                        {
                          succeeded = (ArgX11_23 == ArgY11_24);
                          if (succeeded)
                          {
                            succeeded = (ArgX12_25 == ArgY12_26);
                            if (succeeded)
                            {
                              succeeded = (ArgX13_27 == ArgY13_28);
                              if (succeeded)
                              {
                                succeeded = (ArgX14_29 == ArgY14_30);
                                if (succeeded)
                                {
                                  succeeded = (ArgX15_31 == ArgY15_32);
                                  if (succeeded)
                                    succeeded = (ArgX16_33 == ArgY16_34);
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    return succeeded;
  }
}

void MR_CALL 
check_hlds__simplify__simplify_tasks____Compare____simplify_task_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
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
}

MR_bool MR_CALL 
check_hlds__simplify__simplify_tasks____Unify____simplify_task_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
check_hlds__simplify__simplify_tasks__find_simplify_tasks_3_p_0(
  MR_Word WarnThisPass_4,
  MR_Word Globals_5,
  MR_Word * SimplifyTasks_6)
{
  {
    MR_bool succeeded;
    MR_Word WarnSimple_7;
    MR_Word WarnDupCalls_8;
    MR_Word WarnImplicitStreamCalls_9;
    MR_Word WarnKnownBadFormat_10;
    MR_Word WarnUnknownFormat_11;
    MR_Word OptFormatCalls_12;
    MR_Word DoFormatCalls_13;
    MR_Word WarnObsolete_14;
    MR_Word ExcessAssign_15;
    MR_Word TestAfterSwitch_16;
    MR_Word CommonStruct_17;
    MR_Word OptDuplicateCalls_18;
    MR_Word ConstantProp_19;
    MR_Word RemoveParConjunctions_24;
    MR_Word WarnSuspiciousRecursion_25;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word Var_43;

    libs__globals__lookup_bool_option_3_p_0(Globals_5, (MR_Integer) 25, &WarnSimple_7);
    libs__globals__lookup_bool_option_3_p_0(Globals_5, (MR_Integer) 26, &WarnDupCalls_8);
    libs__globals__lookup_bool_option_3_p_0(Globals_5, (MR_Integer) 27, &WarnImplicitStreamCalls_9);
    libs__globals__lookup_bool_option_3_p_0(Globals_5, (MR_Integer) 44, &WarnKnownBadFormat_10);
    libs__globals__lookup_bool_option_3_p_0(Globals_5, (MR_Integer) 46, &WarnUnknownFormat_11);
    libs__globals__lookup_bool_option_3_p_0(Globals_5, (MR_Integer) 396, &OptFormatCalls_12);
    succeeded = (WarnThisPass_4 == (MR_Integer) 1);
    if (succeeded)
    {
      succeeded = (WarnKnownBadFormat_10 == (MR_Integer) 1);
      if (!(succeeded))
        succeeded = (WarnUnknownFormat_11 == (MR_Integer) 1);
    }
    if (!(succeeded))
      succeeded = (OptFormatCalls_12 == (MR_Integer) 1);
    if (succeeded)
      DoFormatCalls_13 = (MR_Integer) 1;
    else
      DoFormatCalls_13 = (MR_Integer) 0;
    libs__globals__lookup_bool_option_3_p_0(Globals_5, (MR_Integer) 47, &WarnObsolete_14);
    libs__globals__lookup_bool_option_3_p_0(Globals_5, (MR_Integer) 394, &ExcessAssign_15);
    libs__globals__lookup_bool_option_3_p_0(Globals_5, (MR_Integer) 395, &TestAfterSwitch_16);
    libs__globals__lookup_bool_option_3_p_0(Globals_5, (MR_Integer) 373, &CommonStruct_17);
    libs__globals__lookup_bool_option_3_p_0(Globals_5, (MR_Integer) 392, &OptDuplicateCalls_18);
    libs__globals__lookup_bool_option_3_p_0(Globals_5, (MR_Integer) 393, &ConstantProp_19);
    libs__globals__lookup_bool_option_3_p_0(Globals_5, (MR_Integer) 700, &RemoveParConjunctions_24);
    libs__globals__lookup_bool_option_3_p_0(Globals_5, (MR_Integer) 32, &WarnSuspiciousRecursion_25);
    succeeded = (WarnSimple_7 == (MR_Integer) 1);
    if (succeeded)
      succeeded = (WarnThisPass_4 == (MR_Integer) 1);
    if (succeeded)
      Var_40 = (MR_Integer) 1;
    else
      Var_40 = (MR_Integer) 0;
    succeeded = (WarnDupCalls_8 == (MR_Integer) 1);
    if (succeeded)
      succeeded = (WarnThisPass_4 == (MR_Integer) 1);
    if (succeeded)
      Var_41 = (MR_Integer) 1;
    else
      Var_41 = (MR_Integer) 0;
    succeeded = (WarnImplicitStreamCalls_9 == (MR_Integer) 1);
    if (succeeded)
      succeeded = (WarnThisPass_4 == (MR_Integer) 1);
    if (succeeded)
      Var_42 = (MR_Integer) 1;
    else
      Var_42 = (MR_Integer) 0;
    succeeded = (WarnObsolete_14 == (MR_Integer) 1);
    if (succeeded)
      succeeded = (WarnThisPass_4 == (MR_Integer) 1);
    if (succeeded)
      Var_43 = (MR_Integer) 1;
    else
      Var_43 = (MR_Integer) 0;
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *SimplifyTasks_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = (MR_Box) (((((MR_Unsigned) (Var_40) << 15)) | (((((MR_Unsigned) (Var_41) << 14)) | (((((MR_Unsigned) (Var_42) << 13)) | (((((MR_Unsigned) (DoFormatCalls_13) << 12)) | (((((MR_Unsigned) (Var_43) << 11)) | (((((MR_Unsigned) ((MR_Integer) 0) << 10)) | (((((MR_Unsigned) ((MR_Integer) 0) << 9)) | (((((MR_Unsigned) (ExcessAssign_15) << 8)) | (((((MR_Unsigned) (TestAfterSwitch_16) << 7)) | (((((MR_Unsigned) ((MR_Integer) 0) << 6)) | (((((MR_Unsigned) (OptDuplicateCalls_18) << 5)) | (((((MR_Unsigned) (ConstantProp_19) << 4)) | (((((MR_Unsigned) (CommonStruct_17) << 3)) | (((((MR_Unsigned) ((MR_Integer) 0) << 2)) | (((((MR_Unsigned) (RemoveParConjunctions_24) << 1)) | (MR_Unsigned) (WarnSuspiciousRecursion_25)))))))))))))))))))))))))))))));
    }
  }
}

MR_Word MR_CALL 
check_hlds__simplify__simplify_tasks__list_to_simplify_tasks_1_f_0(
  MR_Word List_3)
{
  {
    MR_bool succeeded;
    MR_Word HeadVar__2_2;
    MR_Word Var_4;
    MR_Word Var_6;
    MR_Word Var_8;
    MR_Word Var_10;
    MR_Word Var_12;
    MR_Word Var_14;
    MR_Word Var_16;
    MR_Word Var_18;
    MR_Word Var_20;
    MR_Word Var_22;
    MR_Word Var_24;
    MR_Word Var_26;
    MR_Word Var_28;
    MR_Word Var_30;
    MR_Word Var_32;
    MR_Word Var_34;

    succeeded = mercury__list__member_2_p_0((MR_Word) (&check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__type_ctor_info_simplify_task_0), ((MR_Box) ((MR_Integer) 0)), List_3);
    if (succeeded)
      Var_4 = (MR_Integer) 1;
    else
      Var_4 = (MR_Integer) 0;
    succeeded = mercury__list__member_2_p_0((MR_Word) (&check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__type_ctor_info_simplify_task_0), ((MR_Box) ((MR_Integer) 1)), List_3);
    if (succeeded)
      Var_6 = (MR_Integer) 1;
    else
      Var_6 = (MR_Integer) 0;
    succeeded = mercury__list__member_2_p_0((MR_Word) (&check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__type_ctor_info_simplify_task_0), ((MR_Box) ((MR_Integer) 2)), List_3);
    if (succeeded)
      Var_8 = (MR_Integer) 1;
    else
      Var_8 = (MR_Integer) 0;
    succeeded = mercury__list__member_2_p_0((MR_Word) (&check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__type_ctor_info_simplify_task_0), ((MR_Box) ((MR_Integer) 3)), List_3);
    if (succeeded)
      Var_10 = (MR_Integer) 1;
    else
      Var_10 = (MR_Integer) 0;
    succeeded = mercury__list__member_2_p_0((MR_Word) (&check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__type_ctor_info_simplify_task_0), ((MR_Box) ((MR_Integer) 4)), List_3);
    if (succeeded)
      Var_12 = (MR_Integer) 1;
    else
      Var_12 = (MR_Integer) 0;
    succeeded = mercury__list__member_2_p_0((MR_Word) (&check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__type_ctor_info_simplify_task_0), ((MR_Box) ((MR_Integer) 5)), List_3);
    if (succeeded)
      Var_14 = (MR_Integer) 1;
    else
      Var_14 = (MR_Integer) 0;
    succeeded = mercury__list__member_2_p_0((MR_Word) (&check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__type_ctor_info_simplify_task_0), ((MR_Box) ((MR_Integer) 6)), List_3);
    if (succeeded)
      Var_16 = (MR_Integer) 1;
    else
      Var_16 = (MR_Integer) 0;
    succeeded = mercury__list__member_2_p_0((MR_Word) (&check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__type_ctor_info_simplify_task_0), ((MR_Box) ((MR_Integer) 7)), List_3);
    if (succeeded)
      Var_18 = (MR_Integer) 1;
    else
      Var_18 = (MR_Integer) 0;
    succeeded = mercury__list__member_2_p_0((MR_Word) (&check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__type_ctor_info_simplify_task_0), ((MR_Box) ((MR_Integer) 8)), List_3);
    if (succeeded)
      Var_20 = (MR_Integer) 1;
    else
      Var_20 = (MR_Integer) 0;
    succeeded = mercury__list__member_2_p_0((MR_Word) (&check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__type_ctor_info_simplify_task_0), ((MR_Box) ((MR_Integer) 9)), List_3);
    if (succeeded)
      Var_22 = (MR_Integer) 1;
    else
      Var_22 = (MR_Integer) 0;
    succeeded = mercury__list__member_2_p_0((MR_Word) (&check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__type_ctor_info_simplify_task_0), ((MR_Box) ((MR_Integer) 10)), List_3);
    if (succeeded)
      Var_24 = (MR_Integer) 1;
    else
      Var_24 = (MR_Integer) 0;
    succeeded = mercury__list__member_2_p_0((MR_Word) (&check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__type_ctor_info_simplify_task_0), ((MR_Box) ((MR_Integer) 11)), List_3);
    if (succeeded)
      Var_26 = (MR_Integer) 1;
    else
      Var_26 = (MR_Integer) 0;
    succeeded = mercury__list__member_2_p_0((MR_Word) (&check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__type_ctor_info_simplify_task_0), ((MR_Box) ((MR_Integer) 12)), List_3);
    if (succeeded)
      Var_28 = (MR_Integer) 1;
    else
      Var_28 = (MR_Integer) 0;
    succeeded = mercury__list__member_2_p_0((MR_Word) (&check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__type_ctor_info_simplify_task_0), ((MR_Box) ((MR_Integer) 13)), List_3);
    if (succeeded)
      Var_30 = (MR_Integer) 1;
    else
      Var_30 = (MR_Integer) 0;
    succeeded = mercury__list__member_2_p_0((MR_Word) (&check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__type_ctor_info_simplify_task_0), ((MR_Box) ((MR_Integer) 14)), List_3);
    if (succeeded)
      Var_32 = (MR_Integer) 1;
    else
      Var_32 = (MR_Integer) 0;
    succeeded = mercury__list__member_2_p_0((MR_Word) (&check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__type_ctor_info_simplify_task_0), ((MR_Box) ((MR_Integer) 15)), List_3);
    if (succeeded)
      Var_34 = (MR_Integer) 1;
    else
      Var_34 = (MR_Integer) 0;
    {
      HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 0) = (MR_Box) (((((MR_Unsigned) (Var_4) << 15)) | (((((MR_Unsigned) (Var_6) << 14)) | (((((MR_Unsigned) (Var_8) << 13)) | (((((MR_Unsigned) (Var_10) << 12)) | (((((MR_Unsigned) (Var_12) << 11)) | (((((MR_Unsigned) (Var_14) << 10)) | (((((MR_Unsigned) (Var_16) << 9)) | (((((MR_Unsigned) (Var_18) << 8)) | (((((MR_Unsigned) (Var_20) << 7)) | (((((MR_Unsigned) (Var_22) << 6)) | (((((MR_Unsigned) (Var_24) << 5)) | (((((MR_Unsigned) (Var_26) << 4)) | (((((MR_Unsigned) (Var_28) << 3)) | (((((MR_Unsigned) (Var_30) << 2)) | (((((MR_Unsigned) (Var_32) << 1)) | (MR_Unsigned) (Var_34)))))))))))))))))))))))))))))));
    }
    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
check_hlds__simplify__simplify_tasks__simplify_tasks_to_list_1_f_0(
  MR_Word SimplifyTasks_3)
{
  {
    MR_bool succeeded;
    MR_Word List_4;
    MR_Word WarnSimpleCode_5 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0))) >> 15)) & (MR_Integer) 1);
    MR_Word WarnDupCalls_6 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0))) >> 14)) & (MR_Integer) 1);
    MR_Word WarnImplicitStreamCalls_7 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0))) >> 13)) & (MR_Integer) 1);
    MR_Word DoFormatCalls_8 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0))) >> 12)) & (MR_Integer) 1);
    MR_Word WarnObsolete_9 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0))) >> 11)) & (MR_Integer) 1);
    MR_Word MarkCodeModelChanges_10 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0))) >> 10)) & (MR_Integer) 1);
    MR_Word AfterFrontEnd_11 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0))) >> 9)) & (MR_Integer) 1);
    MR_Word ExcessAssign_12 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0))) >> 8)) & (MR_Integer) 1);
    MR_Word TestAfterSwitch_13 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0))) >> 7)) & (MR_Integer) 1);
    MR_Word ElimRemovableScopes_14 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0))) >> 6)) & (MR_Integer) 1);
    MR_Word OptDuplicateCalls_15 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0))) >> 5)) & (MR_Integer) 1);
    MR_Word ConstantProp_16 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0))) >> 4)) & (MR_Integer) 1);
    MR_Word CommonStruct_17 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0))) >> 3)) & (MR_Integer) 1);
    MR_Word ExtraCommonStruct_18 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
    MR_Word RemoveParConjunctions_19 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
    MR_Word WarnSuspiciousRecursion_20 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word Var_21;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word Var_28;
    MR_Word Var_29;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_Word Var_44;
    MR_Word Var_45;
    MR_Word Var_48;
    MR_Word Var_49;
    MR_Word Var_52;
    MR_Word Var_53;
    MR_Word Var_56;
    MR_Word Var_57;
    MR_Word Var_60;
    MR_Word Var_61;
    MR_Word Var_64;
    MR_Word Var_65;
    MR_Word Var_68;
    MR_Word Var_69;
    MR_Word Var_72;
    MR_Word Var_73;
    MR_Word Var_76;
    MR_Word Var_77;
    MR_Word Var_80;

    succeeded = (WarnSimpleCode_5 == (MR_Integer) 1);
    if (succeeded)
      Var_21 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_tasks_scalar_common_1[0]));
    else
      Var_21 = (MR_Word) ((MR_Unsigned) 0U);
    succeeded = (WarnDupCalls_6 == (MR_Integer) 1);
    if (succeeded)
      Var_25 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_tasks_scalar_common_1[1]));
    else
      Var_25 = (MR_Word) ((MR_Unsigned) 0U);
    succeeded = (WarnImplicitStreamCalls_7 == (MR_Integer) 1);
    if (succeeded)
      Var_29 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_tasks_scalar_common_1[2]));
    else
      Var_29 = (MR_Word) ((MR_Unsigned) 0U);
    succeeded = (DoFormatCalls_8 == (MR_Integer) 1);
    if (succeeded)
      Var_33 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_tasks_scalar_common_1[3]));
    else
      Var_33 = (MR_Word) ((MR_Unsigned) 0U);
    succeeded = (WarnObsolete_9 == (MR_Integer) 1);
    if (succeeded)
      Var_37 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_tasks_scalar_common_1[4]));
    else
      Var_37 = (MR_Word) ((MR_Unsigned) 0U);
    succeeded = (MarkCodeModelChanges_10 == (MR_Integer) 1);
    if (succeeded)
      Var_41 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_tasks_scalar_common_1[5]));
    else
      Var_41 = (MR_Word) ((MR_Unsigned) 0U);
    succeeded = (AfterFrontEnd_11 == (MR_Integer) 1);
    if (succeeded)
      Var_45 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_tasks_scalar_common_1[6]));
    else
      Var_45 = (MR_Word) ((MR_Unsigned) 0U);
    succeeded = (ExcessAssign_12 == (MR_Integer) 1);
    if (succeeded)
      Var_49 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_tasks_scalar_common_1[7]));
    else
      Var_49 = (MR_Word) ((MR_Unsigned) 0U);
    succeeded = (TestAfterSwitch_13 == (MR_Integer) 1);
    if (succeeded)
      Var_53 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_tasks_scalar_common_1[8]));
    else
      Var_53 = (MR_Word) ((MR_Unsigned) 0U);
    succeeded = (ElimRemovableScopes_14 == (MR_Integer) 1);
    if (succeeded)
      Var_57 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_tasks_scalar_common_1[9]));
    else
      Var_57 = (MR_Word) ((MR_Unsigned) 0U);
    succeeded = (OptDuplicateCalls_15 == (MR_Integer) 1);
    if (succeeded)
      Var_61 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_tasks_scalar_common_1[10]));
    else
      Var_61 = (MR_Word) ((MR_Unsigned) 0U);
    succeeded = (ConstantProp_16 == (MR_Integer) 1);
    if (succeeded)
      Var_65 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_tasks_scalar_common_1[11]));
    else
      Var_65 = (MR_Word) ((MR_Unsigned) 0U);
    succeeded = (CommonStruct_17 == (MR_Integer) 1);
    if (succeeded)
      Var_69 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_tasks_scalar_common_1[12]));
    else
      Var_69 = (MR_Word) ((MR_Unsigned) 0U);
    succeeded = (ExtraCommonStruct_18 == (MR_Integer) 1);
    if (succeeded)
      Var_73 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_tasks_scalar_common_1[13]));
    else
      Var_73 = (MR_Word) ((MR_Unsigned) 0U);
    succeeded = (RemoveParConjunctions_19 == (MR_Integer) 1);
    if (succeeded)
      Var_77 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_tasks_scalar_common_1[14]));
    else
      Var_77 = (MR_Word) ((MR_Unsigned) 0U);
    succeeded = (WarnSuspiciousRecursion_20 == (MR_Integer) 1);
    if (succeeded)
      Var_80 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_tasks_scalar_common_1[15]));
    else
      Var_80 = (MR_Word) ((MR_Unsigned) 0U);
    Var_76 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__type_ctor_info_simplify_task_0), Var_77, Var_80);
    Var_72 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__type_ctor_info_simplify_task_0), Var_73, Var_76);
    Var_68 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__type_ctor_info_simplify_task_0), Var_69, Var_72);
    Var_64 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__type_ctor_info_simplify_task_0), Var_65, Var_68);
    Var_60 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__type_ctor_info_simplify_task_0), Var_61, Var_64);
    Var_56 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__type_ctor_info_simplify_task_0), Var_57, Var_60);
    Var_52 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__type_ctor_info_simplify_task_0), Var_53, Var_56);
    Var_48 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__type_ctor_info_simplify_task_0), Var_49, Var_52);
    Var_44 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__type_ctor_info_simplify_task_0), Var_45, Var_48);
    Var_40 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__type_ctor_info_simplify_task_0), Var_41, Var_44);
    Var_36 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__type_ctor_info_simplify_task_0), Var_37, Var_40);
    Var_32 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__type_ctor_info_simplify_task_0), Var_33, Var_36);
    Var_28 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__type_ctor_info_simplify_task_0), Var_29, Var_32);
    Var_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__type_ctor_info_simplify_task_0), Var_25, Var_28);
    List_4 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__type_ctor_info_simplify_task_0), Var_21, Var_24);
    return List_4;
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__simplify_tasks____Unify____simplify_task_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__simplify__simplify_tasks____Unify____simplify_task_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_tasks____Compare____simplify_task_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__simplify__simplify_tasks____Compare____simplify_task_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__simplify_tasks____Unify____simplify_tasks_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__simplify__simplify_tasks____Unify____simplify_tasks_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_tasks____Compare____simplify_tasks_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__simplify__simplify_tasks____Compare____simplify_tasks_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__check_hlds__simplify__simplify_tasks__init(void)
{
}

void mercury__check_hlds__simplify__simplify_tasks__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__type_ctor_info_simplify_task_0);
	MR_register_type_ctor_info(&check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__type_ctor_info_simplify_tasks_0);
}

void mercury__check_hlds__simplify__simplify_tasks__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__simplify__simplify_tasks__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module check_hlds.simplify.simplify_tasks.
