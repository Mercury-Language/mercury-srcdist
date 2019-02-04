/*
** Automatically generated from `simplify_tasks.m'
** by the Mercury compiler,
** version rotd-2018-03-14
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
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "integer.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "random.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




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

static const MR_EnumFunctorDescPtr check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__enum_value_ordered_simplify_task_0[15];

static const MR_EnumFunctorDescPtr check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__enum_name_ordered_simplify_task_0[15];

static const MR_Integer check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__functor_number_map_simplify_task_0[15];

static const MR_PseudoTypeInfo check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__field_types_simplify_tasks_0_0[15];

static const MR_ConstString check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__field_names_simplify_tasks_0_0[15];

static const MR_DuArgLocn check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__field_locns_simplify_tasks_0_0[15];

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


static /* final */ const MR_Box check_hlds__simplify__simplify_tasks_scalar_common_1[15][2];




static /* final */ const MR_Box check_hlds__simplify__simplify_tasks_scalar_common_1[15][2] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 10 */
  {
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 11 */
  {
    ((MR_Box) ((MR_Integer) 11)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 12 */
  {
    ((MR_Box) ((MR_Integer) 12)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 13 */
  {
    ((MR_Box) ((MR_Integer) 13)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 14 */
  {
    ((MR_Box) ((MR_Integer) 14)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_EnumFunctorDesc check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__enum_functor_desc_simplify_task_0_0 = {
  (MR_String) "simptask_warn_simple_code",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__enum_functor_desc_simplify_task_0_1 = {
  (MR_String) "simptask_warn_duplicate_calls",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__enum_functor_desc_simplify_task_0_2 = {
  (MR_String) "simptask_warn_implicit_stream_calls",
  (MR_Integer) 2
};

static const MR_EnumFunctorDesc check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__enum_functor_desc_simplify_task_0_3 = {
  (MR_String) "simptask_format_calls",
  (MR_Integer) 3
};

static const MR_EnumFunctorDesc check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__enum_functor_desc_simplify_task_0_4 = {
  (MR_String) "simptask_warn_obsolete",
  (MR_Integer) 4
};

static const MR_EnumFunctorDesc check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__enum_functor_desc_simplify_task_0_5 = {
  (MR_String) "simptask_mark_code_model_changes",
  (MR_Integer) 5
};

static const MR_EnumFunctorDesc check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__enum_functor_desc_simplify_task_0_6 = {
  (MR_String) "simptask_after_front_end",
  (MR_Integer) 6
};

static const MR_EnumFunctorDesc check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__enum_functor_desc_simplify_task_0_7 = {
  (MR_String) "simptask_excess_assigns",
  (MR_Integer) 7
};

static const MR_EnumFunctorDesc check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__enum_functor_desc_simplify_task_0_8 = {
  (MR_String) "simptask_test_after_switch",
  (MR_Integer) 8
};

static const MR_EnumFunctorDesc check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__enum_functor_desc_simplify_task_0_9 = {
  (MR_String) "simptask_elim_removable_scopes",
  (MR_Integer) 9
};

static const MR_EnumFunctorDesc check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__enum_functor_desc_simplify_task_0_10 = {
  (MR_String) "simptask_opt_duplicate_calls",
  (MR_Integer) 10
};

static const MR_EnumFunctorDesc check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__enum_functor_desc_simplify_task_0_11 = {
  (MR_String) "simptask_constant_prop",
  (MR_Integer) 11
};

static const MR_EnumFunctorDesc check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__enum_functor_desc_simplify_task_0_12 = {
  (MR_String) "simptask_common_struct",
  (MR_Integer) 12
};

static const MR_EnumFunctorDesc check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__enum_functor_desc_simplify_task_0_13 = {
  (MR_String) "simptask_extra_common_struct",
  (MR_Integer) 13
};

static const MR_EnumFunctorDesc check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__enum_functor_desc_simplify_task_0_14 = {
  (MR_String) "simptask_ignore_par_conjs",
  (MR_Integer) 14
};

static const MR_EnumFunctorDescPtr check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__enum_value_ordered_simplify_task_0[15] = {
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
  &check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__enum_functor_desc_simplify_task_0_14
};

static const MR_EnumFunctorDescPtr check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__enum_name_ordered_simplify_task_0[15] = {
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
  &check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__enum_functor_desc_simplify_task_0_0
};

static const MR_Integer check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__functor_number_map_simplify_task_0[15] = {
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
  (MR_Integer) 7
};

const MR_TypeCtorInfo_Struct check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__type_ctor_info_simplify_task_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__simplify__simplify_tasks____Unify____simplify_task_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__simplify_tasks____Compare____simplify_task_0_0_10001)),
  (MR_String) "check_hlds.simplify.simplify_tasks",
  (MR_String) "simplify_task",
  {     check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__enum_name_ordered_simplify_task_0 },
  {     check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__enum_value_ordered_simplify_task_0 },
  (MR_Integer) 15,
  (MR_Integer) 4,
  check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__functor_number_map_simplify_task_0
};

static const MR_PseudoTypeInfo check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__field_types_simplify_tasks_0_0[15] = {
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
};

static const MR_ConstString check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__field_names_simplify_tasks_0_0[15] = {
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
  (MR_String) "do_ignore_par_conjunctions"
};

static const MR_DuArgLocn check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__field_locns_simplify_tasks_0_0[15] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 1,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 2,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 3,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 4,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 5,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 6,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 7,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 8,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 9,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 10,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 11,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 12,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 13,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 14,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__du_functor_desc_simplify_tasks_0_0 = {
  (MR_String) "simplify_tasks",
  (MR_Integer) 15,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__field_types_simplify_tasks_0_0,
  check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__field_names_simplify_tasks_0_0,
  check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__field_locns_simplify_tasks_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__du_stag_ordered_simplify_tasks_0_0[1] = {
  &check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__du_functor_desc_simplify_tasks_0_0
};

static const MR_DuPtagLayout check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__du_ptag_ordered_simplify_tasks_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__du_stag_ordered_simplify_tasks_0_0
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
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__simplify__simplify_tasks____Unify____simplify_tasks_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__simplify_tasks____Compare____simplify_tasks_0_0_10001)),
  (MR_String) "check_hlds.simplify.simplify_tasks",
  (MR_String) "simplify_tasks",
  {     check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__du_name_ordered_simplify_tasks_0 },
  {     check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__du_ptag_ordered_simplify_tasks_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
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
    MR_Integer CastX_48 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_49 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_48 == CastY_49);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)))) & (MR_Integer) 1);
      MR_Word ArgY1_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)))) & (MR_Integer) 1);
      MR_Word ArgX2_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      MR_Word ArgY2_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      MR_Word ArgX3_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      MR_Word ArgY3_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      MR_Word ArgX4_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
      MR_Word ArgY4_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
      MR_Word ArgX5_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
      MR_Word ArgY5_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
      MR_Word ArgX6_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
      MR_Word ArgY6_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
      MR_Word ArgX7_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
      MR_Word ArgY7_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
      MR_Word ArgX8_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
      MR_Word ArgY8_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
      MR_Word ArgX9_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
      MR_Word ArgY9_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
      MR_Word ArgX10_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
      MR_Word ArgY10_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
      MR_Word ArgX11_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
      MR_Word ArgY11_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
      MR_Word ArgX12_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
      MR_Word ArgY12_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
      MR_Word ArgX13_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
      MR_Word ArgY13_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
      MR_Word ArgX14_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 13)) & (MR_Integer) 1);
      MR_Word ArgY14_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 13)) & (MR_Integer) 1);
      MR_Word ArgX15_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 14)) & (MR_Integer) 1);
      MR_Word ArgY15_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 14)) & (MR_Integer) 1);
      MR_Word Var_34;
      MR_Integer Var_65 = (MR_Integer) ArgX1_4;
      MR_Integer Var_66 = (MR_Integer) ArgY1_5;

      mercury__private_builtin__builtin_compare_int_3_p_0(&Var_34, Var_65, Var_66);
      succeeded = (Var_34 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_34;
      else
      {
        MR_Word Var_35;
        MR_Integer Var_67 = (MR_Integer) ArgX2_6;
        MR_Integer Var_68 = (MR_Integer) ArgY2_7;

        mercury__private_builtin__builtin_compare_int_3_p_0(&Var_35, Var_67, Var_68);
        succeeded = (Var_35 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_35;
        else
        {
          MR_Word Var_36;
          MR_Integer Var_69 = (MR_Integer) ArgX3_8;
          MR_Integer Var_70 = (MR_Integer) ArgY3_9;

          mercury__private_builtin__builtin_compare_int_3_p_0(&Var_36, Var_69, Var_70);
          succeeded = (Var_36 == (MR_Integer) 0);
          succeeded = !(succeeded);
          if (succeeded)
            *HeadVar__1_1 = Var_36;
          else
          {
            MR_Word Var_37;
            MR_Integer Var_71 = (MR_Integer) ArgX4_10;
            MR_Integer Var_72 = (MR_Integer) ArgY4_11;

            mercury__private_builtin__builtin_compare_int_3_p_0(&Var_37, Var_71, Var_72);
            succeeded = (Var_37 == (MR_Integer) 0);
            succeeded = !(succeeded);
            if (succeeded)
              *HeadVar__1_1 = Var_37;
            else
            {
              MR_Word Var_38;
              MR_Integer Var_73 = (MR_Integer) ArgX5_12;
              MR_Integer Var_74 = (MR_Integer) ArgY5_13;

              mercury__private_builtin__builtin_compare_int_3_p_0(&Var_38, Var_73, Var_74);
              succeeded = (Var_38 == (MR_Integer) 0);
              succeeded = !(succeeded);
              if (succeeded)
                *HeadVar__1_1 = Var_38;
              else
              {
                MR_Word Var_39;
                MR_Integer Var_75 = (MR_Integer) ArgX6_14;
                MR_Integer Var_76 = (MR_Integer) ArgY6_15;

                mercury__private_builtin__builtin_compare_int_3_p_0(&Var_39, Var_75, Var_76);
                succeeded = (Var_39 == (MR_Integer) 0);
                succeeded = !(succeeded);
                if (succeeded)
                  *HeadVar__1_1 = Var_39;
                else
                {
                  MR_Word Var_40;
                  MR_Integer Var_77 = (MR_Integer) ArgX7_16;
                  MR_Integer Var_78 = (MR_Integer) ArgY7_17;

                  mercury__private_builtin__builtin_compare_int_3_p_0(&Var_40, Var_77, Var_78);
                  succeeded = (Var_40 == (MR_Integer) 0);
                  succeeded = !(succeeded);
                  if (succeeded)
                    *HeadVar__1_1 = Var_40;
                  else
                  {
                    MR_Word Var_41;
                    MR_Integer Var_79 = (MR_Integer) ArgX8_18;
                    MR_Integer Var_80 = (MR_Integer) ArgY8_19;

                    mercury__private_builtin__builtin_compare_int_3_p_0(&Var_41, Var_79, Var_80);
                    succeeded = (Var_41 == (MR_Integer) 0);
                    succeeded = !(succeeded);
                    if (succeeded)
                      *HeadVar__1_1 = Var_41;
                    else
                    {
                      MR_Word Var_42;
                      MR_Integer Var_81 = (MR_Integer) ArgX9_20;
                      MR_Integer Var_82 = (MR_Integer) ArgY9_21;

                      mercury__private_builtin__builtin_compare_int_3_p_0(&Var_42, Var_81, Var_82);
                      succeeded = (Var_42 == (MR_Integer) 0);
                      succeeded = !(succeeded);
                      if (succeeded)
                        *HeadVar__1_1 = Var_42;
                      else
                      {
                        MR_Word Var_43;
                        MR_Integer Var_83 = (MR_Integer) ArgX10_22;
                        MR_Integer Var_84 = (MR_Integer) ArgY10_23;

                        mercury__private_builtin__builtin_compare_int_3_p_0(&Var_43, Var_83, Var_84);
                        succeeded = (Var_43 == (MR_Integer) 0);
                        succeeded = !(succeeded);
                        if (succeeded)
                          *HeadVar__1_1 = Var_43;
                        else
                        {
                          MR_Word Var_44;
                          MR_Integer Var_85 = (MR_Integer) ArgX11_24;
                          MR_Integer Var_86 = (MR_Integer) ArgY11_25;

                          mercury__private_builtin__builtin_compare_int_3_p_0(&Var_44, Var_85, Var_86);
                          succeeded = (Var_44 == (MR_Integer) 0);
                          succeeded = !(succeeded);
                          if (succeeded)
                            *HeadVar__1_1 = Var_44;
                          else
                          {
                            MR_Word Var_45;
                            MR_Integer Var_87 = (MR_Integer) ArgX12_26;
                            MR_Integer Var_88 = (MR_Integer) ArgY12_27;

                            mercury__private_builtin__builtin_compare_int_3_p_0(&Var_45, Var_87, Var_88);
                            succeeded = (Var_45 == (MR_Integer) 0);
                            succeeded = !(succeeded);
                            if (succeeded)
                              *HeadVar__1_1 = Var_45;
                            else
                            {
                              MR_Word Var_46;
                              MR_Integer Var_89 = (MR_Integer) ArgX13_28;
                              MR_Integer Var_90 = (MR_Integer) ArgY13_29;

                              mercury__private_builtin__builtin_compare_int_3_p_0(&Var_46, Var_89, Var_90);
                              succeeded = (Var_46 == (MR_Integer) 0);
                              succeeded = !(succeeded);
                              if (succeeded)
                                *HeadVar__1_1 = Var_46;
                              else
                              {
                                MR_Word Var_47;
                                MR_Integer Var_91 = (MR_Integer) ArgX14_30;
                                MR_Integer Var_92 = (MR_Integer) ArgY14_31;

                                mercury__private_builtin__builtin_compare_int_3_p_0(&Var_47, Var_91, Var_92);
                                succeeded = (Var_47 == (MR_Integer) 0);
                                succeeded = !(succeeded);
                                if (succeeded)
                                  *HeadVar__1_1 = Var_47;
                                else
                                {
                                  MR_Integer Var_93 = (MR_Integer) ArgX15_32;
                                  MR_Integer Var_94 = (MR_Integer) ArgY15_33;

                                  mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Var_93, Var_94);
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
    MR_Integer CastX_33 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_34 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_33 == CastY_34);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word ArgX1_3 = ((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)))) & (MR_Integer) 1);
      MR_Word ArgY1_4 = ((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)))) & (MR_Integer) 1);
      MR_Word ArgX2_5 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      MR_Word ArgY2_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      MR_Word ArgX3_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      MR_Word ArgY3_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      MR_Word ArgX4_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
      MR_Word ArgY4_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
      MR_Word ArgX5_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
      MR_Word ArgY5_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
      MR_Word ArgX6_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
      MR_Word ArgY6_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
      MR_Word ArgX7_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
      MR_Word ArgY7_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
      MR_Word ArgX8_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
      MR_Word ArgY8_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
      MR_Word ArgX9_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
      MR_Word ArgY9_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
      MR_Word ArgX10_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
      MR_Word ArgY10_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
      MR_Word ArgX11_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
      MR_Word ArgY11_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
      MR_Word ArgX12_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
      MR_Word ArgY12_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
      MR_Word ArgX13_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
      MR_Word ArgY13_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
      MR_Word ArgX14_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 13)) & (MR_Integer) 1);
      MR_Word ArgY14_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 13)) & (MR_Integer) 1);
      MR_Word ArgX15_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 14)) & (MR_Integer) 1);
      MR_Word ArgY15_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 14)) & (MR_Integer) 1);

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
                                  succeeded = (ArgX15_31 == ArgY15_32);
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
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
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
    MR_Word Var_38;
    MR_Word Var_39;
    MR_Word Var_40;
    MR_Word Var_41;

    libs__globals__lookup_bool_option_3_p_0(Globals_5, (MR_Integer) 24, &WarnSimple_7);
    libs__globals__lookup_bool_option_3_p_0(Globals_5, (MR_Integer) 25, &WarnDupCalls_8);
    libs__globals__lookup_bool_option_3_p_0(Globals_5, (MR_Integer) 26, &WarnImplicitStreamCalls_9);
    libs__globals__lookup_bool_option_3_p_0(Globals_5, (MR_Integer) 42, &WarnKnownBadFormat_10);
    libs__globals__lookup_bool_option_3_p_0(Globals_5, (MR_Integer) 44, &WarnUnknownFormat_11);
    libs__globals__lookup_bool_option_3_p_0(Globals_5, (MR_Integer) 378, &OptFormatCalls_12);
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
    libs__globals__lookup_bool_option_3_p_0(Globals_5, (MR_Integer) 45, &WarnObsolete_14);
    libs__globals__lookup_bool_option_3_p_0(Globals_5, (MR_Integer) 376, &ExcessAssign_15);
    libs__globals__lookup_bool_option_3_p_0(Globals_5, (MR_Integer) 377, &TestAfterSwitch_16);
    libs__globals__lookup_bool_option_3_p_0(Globals_5, (MR_Integer) 355, &CommonStruct_17);
    libs__globals__lookup_bool_option_3_p_0(Globals_5, (MR_Integer) 374, &OptDuplicateCalls_18);
    libs__globals__lookup_bool_option_3_p_0(Globals_5, (MR_Integer) 375, &ConstantProp_19);
    libs__globals__lookup_bool_option_3_p_0(Globals_5, (MR_Integer) 676, &RemoveParConjunctions_24);
    succeeded = (WarnSimple_7 == (MR_Integer) 1);
    if (succeeded)
      succeeded = (WarnThisPass_4 == (MR_Integer) 1);
    if (succeeded)
      Var_38 = (MR_Integer) 1;
    else
      Var_38 = (MR_Integer) 0;
    succeeded = (WarnDupCalls_8 == (MR_Integer) 1);
    if (succeeded)
      succeeded = (WarnThisPass_4 == (MR_Integer) 1);
    if (succeeded)
      Var_39 = (MR_Integer) 1;
    else
      Var_39 = (MR_Integer) 0;
    succeeded = (WarnImplicitStreamCalls_9 == (MR_Integer) 1);
    if (succeeded)
      succeeded = (WarnThisPass_4 == (MR_Integer) 1);
    if (succeeded)
      Var_40 = (MR_Integer) 1;
    else
      Var_40 = (MR_Integer) 0;
    succeeded = (WarnObsolete_14 == (MR_Integer) 1);
    if (succeeded)
      succeeded = (WarnThisPass_4 == (MR_Integer) 1);
    if (succeeded)
      Var_41 = (MR_Integer) 1;
    else
      Var_41 = (MR_Integer) 0;
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      *SimplifyTasks_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((Var_38 | ((((Var_39 << (MR_Integer) 1)) | ((((Var_40 << (MR_Integer) 2)) | ((((DoFormatCalls_13 << (MR_Integer) 3)) | ((((Var_41 << (MR_Integer) 4)) | (((((MR_Integer) 0 << (MR_Integer) 5)) | (((((MR_Integer) 0 << (MR_Integer) 6)) | ((((ExcessAssign_15 << (MR_Integer) 7)) | ((((TestAfterSwitch_16 << (MR_Integer) 8)) | (((((MR_Integer) 0 << (MR_Integer) 9)) | ((((OptDuplicateCalls_18 << (MR_Integer) 10)) | ((((ConstantProp_19 << (MR_Integer) 11)) | ((((CommonStruct_17 << (MR_Integer) 12)) | (((((MR_Integer) 0 << (MR_Integer) 13)) | ((RemoveParConjunctions_24 << (MR_Integer) 14)))))))))))))))))))))))))))))));
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

    succeeded = mercury__list__member_2_p_0((MR_Word) &check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__type_ctor_info_simplify_task_0, ((MR_Box) ((MR_Integer) 0)), List_3);
    if (succeeded)
      Var_4 = (MR_Integer) 1;
    else
      Var_4 = (MR_Integer) 0;
    succeeded = mercury__list__member_2_p_0((MR_Word) &check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__type_ctor_info_simplify_task_0, ((MR_Box) ((MR_Integer) 1)), List_3);
    if (succeeded)
      Var_6 = (MR_Integer) 1;
    else
      Var_6 = (MR_Integer) 0;
    succeeded = mercury__list__member_2_p_0((MR_Word) &check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__type_ctor_info_simplify_task_0, ((MR_Box) ((MR_Integer) 2)), List_3);
    if (succeeded)
      Var_8 = (MR_Integer) 1;
    else
      Var_8 = (MR_Integer) 0;
    succeeded = mercury__list__member_2_p_0((MR_Word) &check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__type_ctor_info_simplify_task_0, ((MR_Box) ((MR_Integer) 3)), List_3);
    if (succeeded)
      Var_10 = (MR_Integer) 1;
    else
      Var_10 = (MR_Integer) 0;
    succeeded = mercury__list__member_2_p_0((MR_Word) &check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__type_ctor_info_simplify_task_0, ((MR_Box) ((MR_Integer) 4)), List_3);
    if (succeeded)
      Var_12 = (MR_Integer) 1;
    else
      Var_12 = (MR_Integer) 0;
    succeeded = mercury__list__member_2_p_0((MR_Word) &check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__type_ctor_info_simplify_task_0, ((MR_Box) ((MR_Integer) 5)), List_3);
    if (succeeded)
      Var_14 = (MR_Integer) 1;
    else
      Var_14 = (MR_Integer) 0;
    succeeded = mercury__list__member_2_p_0((MR_Word) &check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__type_ctor_info_simplify_task_0, ((MR_Box) ((MR_Integer) 6)), List_3);
    if (succeeded)
      Var_16 = (MR_Integer) 1;
    else
      Var_16 = (MR_Integer) 0;
    succeeded = mercury__list__member_2_p_0((MR_Word) &check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__type_ctor_info_simplify_task_0, ((MR_Box) ((MR_Integer) 7)), List_3);
    if (succeeded)
      Var_18 = (MR_Integer) 1;
    else
      Var_18 = (MR_Integer) 0;
    succeeded = mercury__list__member_2_p_0((MR_Word) &check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__type_ctor_info_simplify_task_0, ((MR_Box) ((MR_Integer) 8)), List_3);
    if (succeeded)
      Var_20 = (MR_Integer) 1;
    else
      Var_20 = (MR_Integer) 0;
    succeeded = mercury__list__member_2_p_0((MR_Word) &check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__type_ctor_info_simplify_task_0, ((MR_Box) ((MR_Integer) 9)), List_3);
    if (succeeded)
      Var_22 = (MR_Integer) 1;
    else
      Var_22 = (MR_Integer) 0;
    succeeded = mercury__list__member_2_p_0((MR_Word) &check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__type_ctor_info_simplify_task_0, ((MR_Box) ((MR_Integer) 10)), List_3);
    if (succeeded)
      Var_24 = (MR_Integer) 1;
    else
      Var_24 = (MR_Integer) 0;
    succeeded = mercury__list__member_2_p_0((MR_Word) &check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__type_ctor_info_simplify_task_0, ((MR_Box) ((MR_Integer) 11)), List_3);
    if (succeeded)
      Var_26 = (MR_Integer) 1;
    else
      Var_26 = (MR_Integer) 0;
    succeeded = mercury__list__member_2_p_0((MR_Word) &check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__type_ctor_info_simplify_task_0, ((MR_Box) ((MR_Integer) 12)), List_3);
    if (succeeded)
      Var_28 = (MR_Integer) 1;
    else
      Var_28 = (MR_Integer) 0;
    succeeded = mercury__list__member_2_p_0((MR_Word) &check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__type_ctor_info_simplify_task_0, ((MR_Box) ((MR_Integer) 13)), List_3);
    if (succeeded)
      Var_30 = (MR_Integer) 1;
    else
      Var_30 = (MR_Integer) 0;
    succeeded = mercury__list__member_2_p_0((MR_Word) &check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__type_ctor_info_simplify_task_0, ((MR_Box) ((MR_Integer) 14)), List_3);
    if (succeeded)
      Var_32 = (MR_Integer) 1;
    else
      Var_32 = (MR_Integer) 0;
    {
      HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 0) = ((MR_Box) ((Var_4 | ((((Var_6 << (MR_Integer) 1)) | ((((Var_8 << (MR_Integer) 2)) | ((((Var_10 << (MR_Integer) 3)) | ((((Var_12 << (MR_Integer) 4)) | ((((Var_14 << (MR_Integer) 5)) | ((((Var_16 << (MR_Integer) 6)) | ((((Var_18 << (MR_Integer) 7)) | ((((Var_20 << (MR_Integer) 8)) | ((((Var_22 << (MR_Integer) 9)) | ((((Var_24 << (MR_Integer) 10)) | ((((Var_26 << (MR_Integer) 11)) | ((((Var_28 << (MR_Integer) 12)) | ((((Var_30 << (MR_Integer) 13)) | ((Var_32 << (MR_Integer) 14)))))))))))))))))))))))))))))));
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
    MR_Word TypeCtorInfo_78_78 = (MR_Word) &check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__type_ctor_info_simplify_task_0;
    MR_Word WarnSimpleCode_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) & (MR_Integer) 1);
    MR_Word WarnDupCalls_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word WarnImplicitStreamCalls_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word DoFormatCalls_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    MR_Word WarnObsolete_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    MR_Word MarkCodeModelChanges_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    MR_Word AfterFrontEnd_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    MR_Word ExcessAssign_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
    MR_Word TestAfterSwitch_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
    MR_Word ElimRemovableScopes_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
    MR_Word OptDuplicateCalls_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
    MR_Word ConstantProp_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
    MR_Word CommonStruct_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
    MR_Word ExtraCommonStruct_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 13)) & (MR_Integer) 1);
    MR_Word RemoveParConjunctions_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 14)) & (MR_Integer) 1);
    MR_Word Var_20;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Word Var_35;
    MR_Word Var_36;
    MR_Word Var_39;
    MR_Word Var_40;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word Var_47;
    MR_Word Var_48;
    MR_Word Var_51;
    MR_Word Var_52;
    MR_Word Var_55;
    MR_Word Var_56;
    MR_Word Var_59;
    MR_Word Var_60;
    MR_Word Var_63;
    MR_Word Var_64;
    MR_Word Var_67;
    MR_Word Var_68;
    MR_Word Var_71;
    MR_Word Var_72;
    MR_Word Var_75;

    succeeded = (WarnSimpleCode_5 == (MR_Integer) 1);
    if (succeeded)
    {
      Var_20 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_tasks_scalar_common_1[0]);
    }
    else
      Var_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    succeeded = (WarnDupCalls_6 == (MR_Integer) 1);
    if (succeeded)
    {
      Var_24 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_tasks_scalar_common_1[1]);
    }
    else
      Var_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    succeeded = (WarnImplicitStreamCalls_7 == (MR_Integer) 1);
    if (succeeded)
    {
      Var_28 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_tasks_scalar_common_1[2]);
    }
    else
      Var_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    succeeded = (DoFormatCalls_8 == (MR_Integer) 1);
    if (succeeded)
    {
      Var_32 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_tasks_scalar_common_1[3]);
    }
    else
      Var_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    succeeded = (WarnObsolete_9 == (MR_Integer) 1);
    if (succeeded)
    {
      Var_36 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_tasks_scalar_common_1[4]);
    }
    else
      Var_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    succeeded = (MarkCodeModelChanges_10 == (MR_Integer) 1);
    if (succeeded)
    {
      Var_40 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_tasks_scalar_common_1[5]);
    }
    else
      Var_40 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    succeeded = (AfterFrontEnd_11 == (MR_Integer) 1);
    if (succeeded)
    {
      Var_44 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_tasks_scalar_common_1[6]);
    }
    else
      Var_44 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    succeeded = (ExcessAssign_12 == (MR_Integer) 1);
    if (succeeded)
    {
      Var_48 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_tasks_scalar_common_1[7]);
    }
    else
      Var_48 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    succeeded = (TestAfterSwitch_13 == (MR_Integer) 1);
    if (succeeded)
    {
      Var_52 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_tasks_scalar_common_1[8]);
    }
    else
      Var_52 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    succeeded = (ElimRemovableScopes_14 == (MR_Integer) 1);
    if (succeeded)
    {
      Var_56 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_tasks_scalar_common_1[9]);
    }
    else
      Var_56 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    succeeded = (OptDuplicateCalls_15 == (MR_Integer) 1);
    if (succeeded)
    {
      Var_60 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_tasks_scalar_common_1[10]);
    }
    else
      Var_60 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    succeeded = (ConstantProp_16 == (MR_Integer) 1);
    if (succeeded)
    {
      Var_64 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_tasks_scalar_common_1[11]);
    }
    else
      Var_64 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    succeeded = (CommonStruct_17 == (MR_Integer) 1);
    if (succeeded)
    {
      Var_68 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_tasks_scalar_common_1[12]);
    }
    else
      Var_68 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    succeeded = (ExtraCommonStruct_18 == (MR_Integer) 1);
    if (succeeded)
    {
      Var_72 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_tasks_scalar_common_1[13]);
    }
    else
      Var_72 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    succeeded = (RemoveParConjunctions_19 == (MR_Integer) 1);
    if (succeeded)
    {
      Var_75 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_tasks_scalar_common_1[14]);
    }
    else
      Var_75 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    Var_71 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_78_78, Var_72, Var_75);
    Var_67 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_78_78, Var_68, Var_71);
    Var_63 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_78_78, Var_64, Var_67);
    Var_59 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_78_78, Var_60, Var_63);
    Var_55 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_78_78, Var_56, Var_59);
    Var_51 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_78_78, Var_52, Var_55);
    Var_47 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_78_78, Var_48, Var_51);
    Var_43 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_78_78, Var_44, Var_47);
    Var_39 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_78_78, Var_40, Var_43);
    Var_35 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_78_78, Var_36, Var_39);
    Var_31 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_78_78, Var_32, Var_35);
    Var_27 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_78_78, Var_28, Var_31);
    Var_23 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_78_78, Var_24, Var_27);
    List_4 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_78_78, Var_20, Var_23);
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

    succeeded = check_hlds__simplify__simplify_tasks____Unify____simplify_task_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
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

    check_hlds__simplify__simplify_tasks____Compare____simplify_task_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
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

    succeeded = check_hlds__simplify__simplify_tasks____Unify____simplify_tasks_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
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

    check_hlds__simplify__simplify_tasks____Compare____simplify_tasks_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
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
