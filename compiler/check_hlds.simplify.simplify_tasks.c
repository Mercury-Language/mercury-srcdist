/*
** Automatically generated from `simplify_tasks.m'
** by the Mercury compiler,
** version rotd-2016-02-08
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


/* :- module check_hlds.simplify.simplify_tasks. */
/* :- implementation. */

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

static const MR_EnumFunctorDescPtr check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__enum_value_ordered_simplify_task_0[13];

static const MR_EnumFunctorDescPtr check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__enum_name_ordered_simplify_task_0[13];

static const MR_Integer check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__functor_number_map_simplify_task_0[13];

static const MR_PseudoTypeInfo check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__field_types_simplify_tasks_0_0[13];

static const MR_ConstString check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__field_names_simplify_tasks_0_0[13];

static const MR_DuArgLocn check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__field_locns_simplify_tasks_0_0[13];

static const MR_DuFunctorDesc check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__du_functor_desc_simplify_tasks_0_0;

static const MR_DuFunctorDescPtr check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__du_stag_ordered_simplify_tasks_0_0[1];

static const MR_DuPtagLayout check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__du_ptag_ordered_simplify_tasks_0[1];

static const MR_DuFunctorDescPtr check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__du_name_ordered_simplify_tasks_0[1];

static const MR_Integer check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__functor_number_map_simplify_tasks_0[1];

static MR_bool MR_CALL 
check_hlds__simplify__simplify_tasks____Unify____simplify_task_0_0_10001(
  MR_Box check_hlds__simplify__simplify_tasks__wrapper_arg_1,
  MR_Box check_hlds__simplify__simplify_tasks__wrapper_arg_2);

static void MR_CALL 
check_hlds__simplify__simplify_tasks____Compare____simplify_task_0_0_10001(
  MR_Box * check_hlds__simplify__simplify_tasks__wrapper_arg_1,
  MR_Box check_hlds__simplify__simplify_tasks__wrapper_arg_2,
  MR_Box check_hlds__simplify__simplify_tasks__wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__simplify__simplify_tasks____Unify____simplify_tasks_0_0_10001(
  MR_Box check_hlds__simplify__simplify_tasks__wrapper_arg_1,
  MR_Box check_hlds__simplify__simplify_tasks__wrapper_arg_2);

static void MR_CALL 
check_hlds__simplify__simplify_tasks____Compare____simplify_tasks_0_0_10001(
  MR_Box * check_hlds__simplify__simplify_tasks__wrapper_arg_1,
  MR_Box check_hlds__simplify__simplify_tasks__wrapper_arg_2,
  MR_Box check_hlds__simplify__simplify_tasks__wrapper_arg_3);


static /* final */ const MR_Box check_hlds__simplify__simplify_tasks_scalar_common_1[13][2];




static /* final */ const MR_Box check_hlds__simplify__simplify_tasks_scalar_common_1[13][2] = {
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
  (MR_String) "simptask_format_calls",
  (MR_Integer) 2
};

static const MR_EnumFunctorDesc check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__enum_functor_desc_simplify_task_0_3 = {
  (MR_String) "simptask_warn_obsolete",
  (MR_Integer) 3
};

static const MR_EnumFunctorDesc check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__enum_functor_desc_simplify_task_0_4 = {
  (MR_String) "simptask_mark_code_model_changes",
  (MR_Integer) 4
};

static const MR_EnumFunctorDesc check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__enum_functor_desc_simplify_task_0_5 = {
  (MR_String) "simptask_after_front_end",
  (MR_Integer) 5
};

static const MR_EnumFunctorDesc check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__enum_functor_desc_simplify_task_0_6 = {
  (MR_String) "simptask_excess_assigns",
  (MR_Integer) 6
};

static const MR_EnumFunctorDesc check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__enum_functor_desc_simplify_task_0_7 = {
  (MR_String) "simptask_elim_removable_scopes",
  (MR_Integer) 7
};

static const MR_EnumFunctorDesc check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__enum_functor_desc_simplify_task_0_8 = {
  (MR_String) "simptask_opt_duplicate_calls",
  (MR_Integer) 8
};

static const MR_EnumFunctorDesc check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__enum_functor_desc_simplify_task_0_9 = {
  (MR_String) "simptask_constant_prop",
  (MR_Integer) 9
};

static const MR_EnumFunctorDesc check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__enum_functor_desc_simplify_task_0_10 = {
  (MR_String) "simptask_common_struct",
  (MR_Integer) 10
};

static const MR_EnumFunctorDesc check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__enum_functor_desc_simplify_task_0_11 = {
  (MR_String) "simptask_extra_common_struct",
  (MR_Integer) 11
};

static const MR_EnumFunctorDesc check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__enum_functor_desc_simplify_task_0_12 = {
  (MR_String) "simptask_ignore_par_conjs",
  (MR_Integer) 12
};

static const MR_EnumFunctorDescPtr check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__enum_value_ordered_simplify_task_0[13] = {
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
  &check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__enum_functor_desc_simplify_task_0_12
};

static const MR_EnumFunctorDescPtr check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__enum_name_ordered_simplify_task_0[13] = {
  &check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__enum_functor_desc_simplify_task_0_5,
  &check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__enum_functor_desc_simplify_task_0_10,
  &check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__enum_functor_desc_simplify_task_0_9,
  &check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__enum_functor_desc_simplify_task_0_7,
  &check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__enum_functor_desc_simplify_task_0_6,
  &check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__enum_functor_desc_simplify_task_0_11,
  &check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__enum_functor_desc_simplify_task_0_2,
  &check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__enum_functor_desc_simplify_task_0_12,
  &check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__enum_functor_desc_simplify_task_0_4,
  &check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__enum_functor_desc_simplify_task_0_8,
  &check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__enum_functor_desc_simplify_task_0_1,
  &check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__enum_functor_desc_simplify_task_0_3,
  &check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__enum_functor_desc_simplify_task_0_0
};

static const MR_Integer check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__functor_number_map_simplify_task_0[13] = {
  (MR_Integer) 12,
  (MR_Integer) 10,
  (MR_Integer) 6,
  (MR_Integer) 11,
  (MR_Integer) 8,
  (MR_Integer) 0,
  (MR_Integer) 4,
  (MR_Integer) 3,
  (MR_Integer) 9,
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 5,
  (MR_Integer) 7
};

const MR_TypeCtorInfo_Struct check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__type_ctor_info_simplify_task_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__simplify__simplify_tasks____Unify____simplify_task_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__simplify_tasks____Compare____simplify_task_0_0_10001)),
  (MR_String) "check_hlds.simplify.simplify_tasks",
  (MR_String) "simplify_task",
  {     check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__enum_name_ordered_simplify_task_0 },
  {     check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__enum_value_ordered_simplify_task_0 },
  (MR_Integer) 13,
  (MR_Integer) 4,
  check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__functor_number_map_simplify_task_0
};

static const MR_PseudoTypeInfo check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__field_types_simplify_tasks_0_0[13] = {
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

static const MR_ConstString check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__field_names_simplify_tasks_0_0[13] = {
  (MR_String) "do_warn_simple_code",
  (MR_String) "do_warn_duplicate_calls",
  (MR_String) "do_format_calls",
  (MR_String) "do_warn_obsolete",
  (MR_String) "do_mark_code_model_changes",
  (MR_String) "do_after_front_end",
  (MR_String) "do_excess_assign",
  (MR_String) "do_elim_removable_scopes",
  (MR_String) "do_opt_duplicate_calls",
  (MR_String) "do_constant_prop",
  (MR_String) "do_common_struct",
  (MR_String) "do_extra_common_struct",
  (MR_String) "do_ignore_par_conjunctions"
};

static const MR_DuArgLocn check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__field_locns_simplify_tasks_0_0[13] = {
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
  }
};

static const MR_DuFunctorDesc check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__du_functor_desc_simplify_tasks_0_0 = {
  (MR_String) "simplify_tasks",
  (MR_Integer) 13,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__field_types_simplify_tasks_0_0,
  check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__field_names_simplify_tasks_0_0,
  check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__field_locns_simplify_tasks_0_0,
  NULL
};

static const MR_DuFunctorDescPtr check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__du_stag_ordered_simplify_tasks_0_0[1] = {
  &check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__du_functor_desc_simplify_tasks_0_0
};

static const MR_DuPtagLayout check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__du_ptag_ordered_simplify_tasks_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
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
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
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

static MR_bool MR_CALL 
check_hlds__simplify__simplify_tasks____Unify____simplify_task_0_0_10001(
  MR_Box check_hlds__simplify__simplify_tasks__wrapper_arg_1,
  MR_Box check_hlds__simplify__simplify_tasks__wrapper_arg_2)
{
  {
    MR_bool check_hlds__simplify__simplify_tasks__succeeded;

    {
      check_hlds__simplify__simplify_tasks__succeeded = check_hlds__simplify__simplify_tasks____Unify____simplify_task_0_0(((MR_Word) check_hlds__simplify__simplify_tasks__wrapper_arg_1), ((MR_Word) check_hlds__simplify__simplify_tasks__wrapper_arg_2));
    }
    return check_hlds__simplify__simplify_tasks__succeeded;
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_tasks____Compare____simplify_task_0_0_10001(
  MR_Box * check_hlds__simplify__simplify_tasks__wrapper_arg_1,
  MR_Box check_hlds__simplify__simplify_tasks__wrapper_arg_2,
  MR_Box check_hlds__simplify__simplify_tasks__wrapper_arg_3)
{
  {
    MR_Word check_hlds__simplify__simplify_tasks__conv0_HeadVar__1_1;

    {
      check_hlds__simplify__simplify_tasks____Compare____simplify_task_0_0(&check_hlds__simplify__simplify_tasks__conv0_HeadVar__1_1, ((MR_Word) check_hlds__simplify__simplify_tasks__wrapper_arg_2), ((MR_Word) check_hlds__simplify__simplify_tasks__wrapper_arg_3));
    }
    *check_hlds__simplify__simplify_tasks__wrapper_arg_1 = ((MR_Box) (check_hlds__simplify__simplify_tasks__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__simplify_tasks____Unify____simplify_tasks_0_0_10001(
  MR_Box check_hlds__simplify__simplify_tasks__wrapper_arg_1,
  MR_Box check_hlds__simplify__simplify_tasks__wrapper_arg_2)
{
  {
    MR_bool check_hlds__simplify__simplify_tasks__succeeded;

    {
      check_hlds__simplify__simplify_tasks__succeeded = check_hlds__simplify__simplify_tasks____Unify____simplify_tasks_0_0(((MR_Word) check_hlds__simplify__simplify_tasks__wrapper_arg_1), ((MR_Word) check_hlds__simplify__simplify_tasks__wrapper_arg_2));
    }
    return check_hlds__simplify__simplify_tasks__succeeded;
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_tasks____Compare____simplify_tasks_0_0_10001(
  MR_Box * check_hlds__simplify__simplify_tasks__wrapper_arg_1,
  MR_Box check_hlds__simplify__simplify_tasks__wrapper_arg_2,
  MR_Box check_hlds__simplify__simplify_tasks__wrapper_arg_3)
{
  {
    MR_Word check_hlds__simplify__simplify_tasks__conv0_HeadVar__1_1;

    {
      check_hlds__simplify__simplify_tasks____Compare____simplify_tasks_0_0(&check_hlds__simplify__simplify_tasks__conv0_HeadVar__1_1, ((MR_Word) check_hlds__simplify__simplify_tasks__wrapper_arg_2), ((MR_Word) check_hlds__simplify__simplify_tasks__wrapper_arg_3));
    }
    *check_hlds__simplify__simplify_tasks__wrapper_arg_1 = ((MR_Box) (check_hlds__simplify__simplify_tasks__conv0_HeadVar__1_1));
  }
}

void MR_CALL 
check_hlds__simplify__simplify_tasks____Compare____simplify_tasks_0_0(
  MR_Word * check_hlds__simplify__simplify_tasks__HeadVar__1_1,
  MR_Word check_hlds__simplify__simplify_tasks__HeadVar__2_2,
  MR_Word check_hlds__simplify__simplify_tasks__HeadVar__3_3)
{
  {
    MR_bool check_hlds__simplify__simplify_tasks__succeeded;
    MR_Integer check_hlds__simplify__simplify_tasks__CastX_42 = (MR_Integer) check_hlds__simplify__simplify_tasks__HeadVar__2_2;
    MR_Integer check_hlds__simplify__simplify_tasks__CastY_43 = (MR_Integer) check_hlds__simplify__simplify_tasks__HeadVar__3_3;

    check_hlds__simplify__simplify_tasks__succeeded = (check_hlds__simplify__simplify_tasks__CastX_42 == check_hlds__simplify__simplify_tasks__CastY_43);
    if (check_hlds__simplify__simplify_tasks__succeeded)
      *check_hlds__simplify__simplify_tasks__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word check_hlds__simplify__simplify_tasks__V_4_4 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_tasks__HeadVar__2_2, (MR_Integer) 0)))) & (MR_Integer) 1);
        MR_Word check_hlds__simplify__simplify_tasks__V_5_5 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_tasks__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        MR_Word check_hlds__simplify__simplify_tasks__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_tasks__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
        MR_Word check_hlds__simplify__simplify_tasks__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_tasks__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
        MR_Word check_hlds__simplify__simplify_tasks__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_tasks__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
        MR_Word check_hlds__simplify__simplify_tasks__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_tasks__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
        MR_Word check_hlds__simplify__simplify_tasks__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_tasks__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
        MR_Word check_hlds__simplify__simplify_tasks__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_tasks__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
        MR_Word check_hlds__simplify__simplify_tasks__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_tasks__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
        MR_Word check_hlds__simplify__simplify_tasks__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_tasks__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
        MR_Word check_hlds__simplify__simplify_tasks__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_tasks__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
        MR_Word check_hlds__simplify__simplify_tasks__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_tasks__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
        MR_Word check_hlds__simplify__simplify_tasks__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_tasks__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
        MR_Word check_hlds__simplify__simplify_tasks__V_17_17 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_tasks__HeadVar__3_3, (MR_Integer) 0)))) & (MR_Integer) 1);
        MR_Word check_hlds__simplify__simplify_tasks__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_tasks__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        MR_Word check_hlds__simplify__simplify_tasks__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_tasks__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
        MR_Word check_hlds__simplify__simplify_tasks__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_tasks__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
        MR_Word check_hlds__simplify__simplify_tasks__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_tasks__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
        MR_Word check_hlds__simplify__simplify_tasks__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_tasks__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
        MR_Word check_hlds__simplify__simplify_tasks__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_tasks__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
        MR_Word check_hlds__simplify__simplify_tasks__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_tasks__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
        MR_Word check_hlds__simplify__simplify_tasks__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_tasks__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
        MR_Word check_hlds__simplify__simplify_tasks__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_tasks__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
        MR_Word check_hlds__simplify__simplify_tasks__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_tasks__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
        MR_Word check_hlds__simplify__simplify_tasks__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_tasks__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
        MR_Word check_hlds__simplify__simplify_tasks__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_tasks__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
        MR_Word check_hlds__simplify__simplify_tasks__V_30_30;
        MR_Integer check_hlds__simplify__simplify_tasks__V_57_57 = (MR_Integer) check_hlds__simplify__simplify_tasks__V_4_4;
        MR_Integer check_hlds__simplify__simplify_tasks__V_58_58 = (MR_Integer) check_hlds__simplify__simplify_tasks__V_17_17;

        {
          mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__simplify__simplify_tasks__V_30_30, check_hlds__simplify__simplify_tasks__V_57_57, check_hlds__simplify__simplify_tasks__V_58_58);
        }
        check_hlds__simplify__simplify_tasks__succeeded = (check_hlds__simplify__simplify_tasks__V_30_30 == (MR_Integer) 0);
        check_hlds__simplify__simplify_tasks__succeeded = !(check_hlds__simplify__simplify_tasks__succeeded);
        if (check_hlds__simplify__simplify_tasks__succeeded)
          *check_hlds__simplify__simplify_tasks__HeadVar__1_1 = check_hlds__simplify__simplify_tasks__V_30_30;
        else
          {
            MR_Word check_hlds__simplify__simplify_tasks__V_31_31;
            MR_Integer check_hlds__simplify__simplify_tasks__V_59_59 = (MR_Integer) check_hlds__simplify__simplify_tasks__V_5_5;
            MR_Integer check_hlds__simplify__simplify_tasks__V_60_60 = (MR_Integer) check_hlds__simplify__simplify_tasks__V_18_18;

            {
              mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__simplify__simplify_tasks__V_31_31, check_hlds__simplify__simplify_tasks__V_59_59, check_hlds__simplify__simplify_tasks__V_60_60);
            }
            check_hlds__simplify__simplify_tasks__succeeded = (check_hlds__simplify__simplify_tasks__V_31_31 == (MR_Integer) 0);
            check_hlds__simplify__simplify_tasks__succeeded = !(check_hlds__simplify__simplify_tasks__succeeded);
            if (check_hlds__simplify__simplify_tasks__succeeded)
              *check_hlds__simplify__simplify_tasks__HeadVar__1_1 = check_hlds__simplify__simplify_tasks__V_31_31;
            else
              {
                MR_Word check_hlds__simplify__simplify_tasks__V_32_32;
                MR_Integer check_hlds__simplify__simplify_tasks__V_61_61 = (MR_Integer) check_hlds__simplify__simplify_tasks__V_6_6;
                MR_Integer check_hlds__simplify__simplify_tasks__V_62_62 = (MR_Integer) check_hlds__simplify__simplify_tasks__V_19_19;

                {
                  mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__simplify__simplify_tasks__V_32_32, check_hlds__simplify__simplify_tasks__V_61_61, check_hlds__simplify__simplify_tasks__V_62_62);
                }
                check_hlds__simplify__simplify_tasks__succeeded = (check_hlds__simplify__simplify_tasks__V_32_32 == (MR_Integer) 0);
                check_hlds__simplify__simplify_tasks__succeeded = !(check_hlds__simplify__simplify_tasks__succeeded);
                if (check_hlds__simplify__simplify_tasks__succeeded)
                  *check_hlds__simplify__simplify_tasks__HeadVar__1_1 = check_hlds__simplify__simplify_tasks__V_32_32;
                else
                  {
                    MR_Word check_hlds__simplify__simplify_tasks__V_33_33;
                    MR_Integer check_hlds__simplify__simplify_tasks__V_63_63 = (MR_Integer) check_hlds__simplify__simplify_tasks__V_7_7;
                    MR_Integer check_hlds__simplify__simplify_tasks__V_64_64 = (MR_Integer) check_hlds__simplify__simplify_tasks__V_20_20;

                    {
                      mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__simplify__simplify_tasks__V_33_33, check_hlds__simplify__simplify_tasks__V_63_63, check_hlds__simplify__simplify_tasks__V_64_64);
                    }
                    check_hlds__simplify__simplify_tasks__succeeded = (check_hlds__simplify__simplify_tasks__V_33_33 == (MR_Integer) 0);
                    check_hlds__simplify__simplify_tasks__succeeded = !(check_hlds__simplify__simplify_tasks__succeeded);
                    if (check_hlds__simplify__simplify_tasks__succeeded)
                      *check_hlds__simplify__simplify_tasks__HeadVar__1_1 = check_hlds__simplify__simplify_tasks__V_33_33;
                    else
                      {
                        MR_Word check_hlds__simplify__simplify_tasks__V_34_34;
                        MR_Integer check_hlds__simplify__simplify_tasks__V_65_65 = (MR_Integer) check_hlds__simplify__simplify_tasks__V_8_8;
                        MR_Integer check_hlds__simplify__simplify_tasks__V_66_66 = (MR_Integer) check_hlds__simplify__simplify_tasks__V_21_21;

                        {
                          mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__simplify__simplify_tasks__V_34_34, check_hlds__simplify__simplify_tasks__V_65_65, check_hlds__simplify__simplify_tasks__V_66_66);
                        }
                        check_hlds__simplify__simplify_tasks__succeeded = (check_hlds__simplify__simplify_tasks__V_34_34 == (MR_Integer) 0);
                        check_hlds__simplify__simplify_tasks__succeeded = !(check_hlds__simplify__simplify_tasks__succeeded);
                        if (check_hlds__simplify__simplify_tasks__succeeded)
                          *check_hlds__simplify__simplify_tasks__HeadVar__1_1 = check_hlds__simplify__simplify_tasks__V_34_34;
                        else
                          {
                            MR_Word check_hlds__simplify__simplify_tasks__V_35_35;
                            MR_Integer check_hlds__simplify__simplify_tasks__V_67_67 = (MR_Integer) check_hlds__simplify__simplify_tasks__V_9_9;
                            MR_Integer check_hlds__simplify__simplify_tasks__V_68_68 = (MR_Integer) check_hlds__simplify__simplify_tasks__V_22_22;

                            {
                              mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__simplify__simplify_tasks__V_35_35, check_hlds__simplify__simplify_tasks__V_67_67, check_hlds__simplify__simplify_tasks__V_68_68);
                            }
                            check_hlds__simplify__simplify_tasks__succeeded = (check_hlds__simplify__simplify_tasks__V_35_35 == (MR_Integer) 0);
                            check_hlds__simplify__simplify_tasks__succeeded = !(check_hlds__simplify__simplify_tasks__succeeded);
                            if (check_hlds__simplify__simplify_tasks__succeeded)
                              *check_hlds__simplify__simplify_tasks__HeadVar__1_1 = check_hlds__simplify__simplify_tasks__V_35_35;
                            else
                              {
                                MR_Word check_hlds__simplify__simplify_tasks__V_36_36;
                                MR_Integer check_hlds__simplify__simplify_tasks__V_69_69 = (MR_Integer) check_hlds__simplify__simplify_tasks__V_10_10;
                                MR_Integer check_hlds__simplify__simplify_tasks__V_70_70 = (MR_Integer) check_hlds__simplify__simplify_tasks__V_23_23;

                                {
                                  mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__simplify__simplify_tasks__V_36_36, check_hlds__simplify__simplify_tasks__V_69_69, check_hlds__simplify__simplify_tasks__V_70_70);
                                }
                                check_hlds__simplify__simplify_tasks__succeeded = (check_hlds__simplify__simplify_tasks__V_36_36 == (MR_Integer) 0);
                                check_hlds__simplify__simplify_tasks__succeeded = !(check_hlds__simplify__simplify_tasks__succeeded);
                                if (check_hlds__simplify__simplify_tasks__succeeded)
                                  *check_hlds__simplify__simplify_tasks__HeadVar__1_1 = check_hlds__simplify__simplify_tasks__V_36_36;
                                else
                                  {
                                    MR_Word check_hlds__simplify__simplify_tasks__V_37_37;
                                    MR_Integer check_hlds__simplify__simplify_tasks__V_71_71 = (MR_Integer) check_hlds__simplify__simplify_tasks__V_11_11;
                                    MR_Integer check_hlds__simplify__simplify_tasks__V_72_72 = (MR_Integer) check_hlds__simplify__simplify_tasks__V_24_24;

                                    {
                                      mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__simplify__simplify_tasks__V_37_37, check_hlds__simplify__simplify_tasks__V_71_71, check_hlds__simplify__simplify_tasks__V_72_72);
                                    }
                                    check_hlds__simplify__simplify_tasks__succeeded = (check_hlds__simplify__simplify_tasks__V_37_37 == (MR_Integer) 0);
                                    check_hlds__simplify__simplify_tasks__succeeded = !(check_hlds__simplify__simplify_tasks__succeeded);
                                    if (check_hlds__simplify__simplify_tasks__succeeded)
                                      *check_hlds__simplify__simplify_tasks__HeadVar__1_1 = check_hlds__simplify__simplify_tasks__V_37_37;
                                    else
                                      {
                                        MR_Word check_hlds__simplify__simplify_tasks__V_38_38;
                                        MR_Integer check_hlds__simplify__simplify_tasks__V_73_73 = (MR_Integer) check_hlds__simplify__simplify_tasks__V_12_12;
                                        MR_Integer check_hlds__simplify__simplify_tasks__V_74_74 = (MR_Integer) check_hlds__simplify__simplify_tasks__V_25_25;

                                        {
                                          mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__simplify__simplify_tasks__V_38_38, check_hlds__simplify__simplify_tasks__V_73_73, check_hlds__simplify__simplify_tasks__V_74_74);
                                        }
                                        check_hlds__simplify__simplify_tasks__succeeded = (check_hlds__simplify__simplify_tasks__V_38_38 == (MR_Integer) 0);
                                        check_hlds__simplify__simplify_tasks__succeeded = !(check_hlds__simplify__simplify_tasks__succeeded);
                                        if (check_hlds__simplify__simplify_tasks__succeeded)
                                          *check_hlds__simplify__simplify_tasks__HeadVar__1_1 = check_hlds__simplify__simplify_tasks__V_38_38;
                                        else
                                          {
                                            MR_Word check_hlds__simplify__simplify_tasks__V_39_39;
                                            MR_Integer check_hlds__simplify__simplify_tasks__V_75_75 = (MR_Integer) check_hlds__simplify__simplify_tasks__V_13_13;
                                            MR_Integer check_hlds__simplify__simplify_tasks__V_76_76 = (MR_Integer) check_hlds__simplify__simplify_tasks__V_26_26;

                                            {
                                              mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__simplify__simplify_tasks__V_39_39, check_hlds__simplify__simplify_tasks__V_75_75, check_hlds__simplify__simplify_tasks__V_76_76);
                                            }
                                            check_hlds__simplify__simplify_tasks__succeeded = (check_hlds__simplify__simplify_tasks__V_39_39 == (MR_Integer) 0);
                                            check_hlds__simplify__simplify_tasks__succeeded = !(check_hlds__simplify__simplify_tasks__succeeded);
                                            if (check_hlds__simplify__simplify_tasks__succeeded)
                                              *check_hlds__simplify__simplify_tasks__HeadVar__1_1 = check_hlds__simplify__simplify_tasks__V_39_39;
                                            else
                                              {
                                                MR_Word check_hlds__simplify__simplify_tasks__V_40_40;
                                                MR_Integer check_hlds__simplify__simplify_tasks__V_77_77 = (MR_Integer) check_hlds__simplify__simplify_tasks__V_14_14;
                                                MR_Integer check_hlds__simplify__simplify_tasks__V_78_78 = (MR_Integer) check_hlds__simplify__simplify_tasks__V_27_27;

                                                {
                                                  mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__simplify__simplify_tasks__V_40_40, check_hlds__simplify__simplify_tasks__V_77_77, check_hlds__simplify__simplify_tasks__V_78_78);
                                                }
                                                check_hlds__simplify__simplify_tasks__succeeded = (check_hlds__simplify__simplify_tasks__V_40_40 == (MR_Integer) 0);
                                                check_hlds__simplify__simplify_tasks__succeeded = !(check_hlds__simplify__simplify_tasks__succeeded);
                                                if (check_hlds__simplify__simplify_tasks__succeeded)
                                                  *check_hlds__simplify__simplify_tasks__HeadVar__1_1 = check_hlds__simplify__simplify_tasks__V_40_40;
                                                else
                                                  {
                                                    MR_Word check_hlds__simplify__simplify_tasks__V_41_41;
                                                    MR_Integer check_hlds__simplify__simplify_tasks__V_79_79 = (MR_Integer) check_hlds__simplify__simplify_tasks__V_15_15;
                                                    MR_Integer check_hlds__simplify__simplify_tasks__V_80_80 = (MR_Integer) check_hlds__simplify__simplify_tasks__V_28_28;

                                                    {
                                                      mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__simplify__simplify_tasks__V_41_41, check_hlds__simplify__simplify_tasks__V_79_79, check_hlds__simplify__simplify_tasks__V_80_80);
                                                    }
                                                    check_hlds__simplify__simplify_tasks__succeeded = (check_hlds__simplify__simplify_tasks__V_41_41 == (MR_Integer) 0);
                                                    check_hlds__simplify__simplify_tasks__succeeded = !(check_hlds__simplify__simplify_tasks__succeeded);
                                                    if (check_hlds__simplify__simplify_tasks__succeeded)
                                                      *check_hlds__simplify__simplify_tasks__HeadVar__1_1 = check_hlds__simplify__simplify_tasks__V_41_41;
                                                    else
                                                      {
                                                        MR_Integer check_hlds__simplify__simplify_tasks__V_81_81 = (MR_Integer) check_hlds__simplify__simplify_tasks__V_16_16;
                                                        MR_Integer check_hlds__simplify__simplify_tasks__V_82_82 = (MR_Integer) check_hlds__simplify__simplify_tasks__V_29_29;

                                                        {
                                                          mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__simplify__simplify_tasks__HeadVar__1_1, check_hlds__simplify__simplify_tasks__V_81_81, check_hlds__simplify__simplify_tasks__V_82_82);
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
  MR_Word check_hlds__simplify__simplify_tasks__HeadVar__1_1,
  MR_Word check_hlds__simplify__simplify_tasks__HeadVar__2_2)
{
  {
    MR_bool check_hlds__simplify__simplify_tasks__succeeded;
    MR_Integer check_hlds__simplify__simplify_tasks__CastX_29 = (MR_Integer) check_hlds__simplify__simplify_tasks__HeadVar__1_1;
    MR_Integer check_hlds__simplify__simplify_tasks__CastY_30 = (MR_Integer) check_hlds__simplify__simplify_tasks__HeadVar__2_2;

    check_hlds__simplify__simplify_tasks__succeeded = (check_hlds__simplify__simplify_tasks__CastX_29 == check_hlds__simplify__simplify_tasks__CastY_30);
    if (check_hlds__simplify__simplify_tasks__succeeded)
      check_hlds__simplify__simplify_tasks__succeeded = MR_TRUE;
    else
      {
        MR_Word check_hlds__simplify__simplify_tasks__V_3_3 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_tasks__HeadVar__1_1, (MR_Integer) 0)))) & (MR_Integer) 1);
        MR_Word check_hlds__simplify__simplify_tasks__V_4_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_tasks__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        MR_Word check_hlds__simplify__simplify_tasks__V_5_5 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_tasks__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
        MR_Word check_hlds__simplify__simplify_tasks__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_tasks__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
        MR_Word check_hlds__simplify__simplify_tasks__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_tasks__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
        MR_Word check_hlds__simplify__simplify_tasks__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_tasks__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
        MR_Word check_hlds__simplify__simplify_tasks__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_tasks__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
        MR_Word check_hlds__simplify__simplify_tasks__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_tasks__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
        MR_Word check_hlds__simplify__simplify_tasks__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_tasks__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
        MR_Word check_hlds__simplify__simplify_tasks__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_tasks__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
        MR_Word check_hlds__simplify__simplify_tasks__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_tasks__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
        MR_Word check_hlds__simplify__simplify_tasks__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_tasks__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
        MR_Word check_hlds__simplify__simplify_tasks__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_tasks__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
        MR_Word check_hlds__simplify__simplify_tasks__V_16_16 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_tasks__HeadVar__2_2, (MR_Integer) 0)))) & (MR_Integer) 1);
        MR_Word check_hlds__simplify__simplify_tasks__V_17_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_tasks__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        MR_Word check_hlds__simplify__simplify_tasks__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_tasks__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
        MR_Word check_hlds__simplify__simplify_tasks__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_tasks__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
        MR_Word check_hlds__simplify__simplify_tasks__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_tasks__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
        MR_Word check_hlds__simplify__simplify_tasks__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_tasks__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
        MR_Word check_hlds__simplify__simplify_tasks__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_tasks__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
        MR_Word check_hlds__simplify__simplify_tasks__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_tasks__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
        MR_Word check_hlds__simplify__simplify_tasks__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_tasks__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
        MR_Word check_hlds__simplify__simplify_tasks__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_tasks__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
        MR_Word check_hlds__simplify__simplify_tasks__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_tasks__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
        MR_Word check_hlds__simplify__simplify_tasks__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_tasks__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
        MR_Word check_hlds__simplify__simplify_tasks__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_tasks__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 12)) & (MR_Integer) 1);

        check_hlds__simplify__simplify_tasks__succeeded = (check_hlds__simplify__simplify_tasks__V_3_3 == check_hlds__simplify__simplify_tasks__V_16_16);
        if (check_hlds__simplify__simplify_tasks__succeeded)
          {
            check_hlds__simplify__simplify_tasks__succeeded = (check_hlds__simplify__simplify_tasks__V_4_4 == check_hlds__simplify__simplify_tasks__V_17_17);
            if (check_hlds__simplify__simplify_tasks__succeeded)
              {
                check_hlds__simplify__simplify_tasks__succeeded = (check_hlds__simplify__simplify_tasks__V_5_5 == check_hlds__simplify__simplify_tasks__V_18_18);
                if (check_hlds__simplify__simplify_tasks__succeeded)
                  {
                    check_hlds__simplify__simplify_tasks__succeeded = (check_hlds__simplify__simplify_tasks__V_6_6 == check_hlds__simplify__simplify_tasks__V_19_19);
                    if (check_hlds__simplify__simplify_tasks__succeeded)
                      {
                        check_hlds__simplify__simplify_tasks__succeeded = (check_hlds__simplify__simplify_tasks__V_7_7 == check_hlds__simplify__simplify_tasks__V_20_20);
                        if (check_hlds__simplify__simplify_tasks__succeeded)
                          {
                            check_hlds__simplify__simplify_tasks__succeeded = (check_hlds__simplify__simplify_tasks__V_8_8 == check_hlds__simplify__simplify_tasks__V_21_21);
                            if (check_hlds__simplify__simplify_tasks__succeeded)
                              {
                                check_hlds__simplify__simplify_tasks__succeeded = (check_hlds__simplify__simplify_tasks__V_9_9 == check_hlds__simplify__simplify_tasks__V_22_22);
                                if (check_hlds__simplify__simplify_tasks__succeeded)
                                  {
                                    check_hlds__simplify__simplify_tasks__succeeded = (check_hlds__simplify__simplify_tasks__V_10_10 == check_hlds__simplify__simplify_tasks__V_23_23);
                                    if (check_hlds__simplify__simplify_tasks__succeeded)
                                      {
                                        check_hlds__simplify__simplify_tasks__succeeded = (check_hlds__simplify__simplify_tasks__V_11_11 == check_hlds__simplify__simplify_tasks__V_24_24);
                                        if (check_hlds__simplify__simplify_tasks__succeeded)
                                          {
                                            check_hlds__simplify__simplify_tasks__succeeded = (check_hlds__simplify__simplify_tasks__V_12_12 == check_hlds__simplify__simplify_tasks__V_25_25);
                                            if (check_hlds__simplify__simplify_tasks__succeeded)
                                              {
                                                check_hlds__simplify__simplify_tasks__succeeded = (check_hlds__simplify__simplify_tasks__V_13_13 == check_hlds__simplify__simplify_tasks__V_26_26);
                                                if (check_hlds__simplify__simplify_tasks__succeeded)
                                                  {
                                                    check_hlds__simplify__simplify_tasks__succeeded = (check_hlds__simplify__simplify_tasks__V_14_14 == check_hlds__simplify__simplify_tasks__V_27_27);
                                                    if (check_hlds__simplify__simplify_tasks__succeeded)
                                                      check_hlds__simplify__simplify_tasks__succeeded = (check_hlds__simplify__simplify_tasks__V_15_15 == check_hlds__simplify__simplify_tasks__V_28_28);
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
    return check_hlds__simplify__simplify_tasks__succeeded;
  }
}

void MR_CALL 
check_hlds__simplify__simplify_tasks____Compare____simplify_task_0_0(
  MR_Word * check_hlds__simplify__simplify_tasks__HeadVar__1_1,
  MR_Word check_hlds__simplify__simplify_tasks__HeadVar__2_2,
  MR_Word check_hlds__simplify__simplify_tasks__HeadVar__3_3)
{
  {
    MR_bool check_hlds__simplify__simplify_tasks__succeeded;
    MR_Integer check_hlds__simplify__simplify_tasks__Cast_HeadVar1_4 = (MR_Integer) check_hlds__simplify__simplify_tasks__HeadVar__2_2;
    MR_Integer check_hlds__simplify__simplify_tasks__Cast_HeadVar2_5 = (MR_Integer) check_hlds__simplify__simplify_tasks__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__simplify__simplify_tasks__HeadVar__1_1, check_hlds__simplify__simplify_tasks__Cast_HeadVar1_4, check_hlds__simplify__simplify_tasks__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
check_hlds__simplify__simplify_tasks____Unify____simplify_task_0_0(
  MR_Word check_hlds__simplify__simplify_tasks__HeadVar__2_1,
  MR_Word check_hlds__simplify__simplify_tasks__HeadVar__2_2)
{
  {
    MR_bool check_hlds__simplify__simplify_tasks__succeeded = (check_hlds__simplify__simplify_tasks__HeadVar__2_1 == check_hlds__simplify__simplify_tasks__HeadVar__2_2);

    return check_hlds__simplify__simplify_tasks__succeeded;
  }
}

void MR_CALL 
check_hlds__simplify__simplify_tasks__find_simplify_tasks_3_p_0(
  MR_Word check_hlds__simplify__simplify_tasks__WarnThisPass_4,
  MR_Word check_hlds__simplify__simplify_tasks__Globals_5,
  MR_Word * check_hlds__simplify__simplify_tasks__SimplifyTasks_6)
{
  {
    MR_bool check_hlds__simplify__simplify_tasks__succeeded;
    MR_Word check_hlds__simplify__simplify_tasks__WarnSimple_7;
    MR_Word check_hlds__simplify__simplify_tasks__WarnDupCalls_8;
    MR_Word check_hlds__simplify__simplify_tasks__WarnKnownBadFormat_9;
    MR_Word check_hlds__simplify__simplify_tasks__WarnUnknownFormat_10;
    MR_Word check_hlds__simplify__simplify_tasks__OptFormatCalls_11;
    MR_Word check_hlds__simplify__simplify_tasks__DoFormatCalls_12;
    MR_Word check_hlds__simplify__simplify_tasks__WarnObsolete_13;
    MR_Word check_hlds__simplify__simplify_tasks__ExcessAssign_14;
    MR_Word check_hlds__simplify__simplify_tasks__CommonStruct_15;
    MR_Word check_hlds__simplify__simplify_tasks__OptDuplicateCalls_16;
    MR_Word check_hlds__simplify__simplify_tasks__ConstantProp_17;
    MR_Word check_hlds__simplify__simplify_tasks__RemoveParConjunctions_22;
    MR_Word check_hlds__simplify__simplify_tasks__V_34_34;
    MR_Word check_hlds__simplify__simplify_tasks__V_35_35;
    MR_Word check_hlds__simplify__simplify_tasks__V_36_36;

    {
      libs__globals__lookup_bool_option_3_p_0(check_hlds__simplify__simplify_tasks__Globals_5, (MR_Integer) 20, &check_hlds__simplify__simplify_tasks__WarnSimple_7);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(check_hlds__simplify__simplify_tasks__Globals_5, (MR_Integer) 21, &check_hlds__simplify__simplify_tasks__WarnDupCalls_8);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(check_hlds__simplify__simplify_tasks__Globals_5, (MR_Integer) 34, &check_hlds__simplify__simplify_tasks__WarnKnownBadFormat_9);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(check_hlds__simplify__simplify_tasks__Globals_5, (MR_Integer) 36, &check_hlds__simplify__simplify_tasks__WarnUnknownFormat_10);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(check_hlds__simplify__simplify_tasks__Globals_5, (MR_Integer) 364, &check_hlds__simplify__simplify_tasks__OptFormatCalls_11);
    }
    check_hlds__simplify__simplify_tasks__succeeded = (check_hlds__simplify__simplify_tasks__WarnThisPass_4 == (MR_Integer) 1);
    if (check_hlds__simplify__simplify_tasks__succeeded)
      {
        check_hlds__simplify__simplify_tasks__succeeded = (check_hlds__simplify__simplify_tasks__WarnKnownBadFormat_9 == (MR_Integer) 1);
        if (!(check_hlds__simplify__simplify_tasks__succeeded))
          check_hlds__simplify__simplify_tasks__succeeded = (check_hlds__simplify__simplify_tasks__WarnUnknownFormat_10 == (MR_Integer) 1);
      }
    if (!(check_hlds__simplify__simplify_tasks__succeeded))
      check_hlds__simplify__simplify_tasks__succeeded = (check_hlds__simplify__simplify_tasks__OptFormatCalls_11 == (MR_Integer) 1);
    if (check_hlds__simplify__simplify_tasks__succeeded)
      check_hlds__simplify__simplify_tasks__DoFormatCalls_12 = (MR_Integer) 1;
    else
      check_hlds__simplify__simplify_tasks__DoFormatCalls_12 = (MR_Integer) 0;
    {
      libs__globals__lookup_bool_option_3_p_0(check_hlds__simplify__simplify_tasks__Globals_5, (MR_Integer) 37, &check_hlds__simplify__simplify_tasks__WarnObsolete_13);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(check_hlds__simplify__simplify_tasks__Globals_5, (MR_Integer) 363, &check_hlds__simplify__simplify_tasks__ExcessAssign_14);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(check_hlds__simplify__simplify_tasks__Globals_5, (MR_Integer) 342, &check_hlds__simplify__simplify_tasks__CommonStruct_15);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(check_hlds__simplify__simplify_tasks__Globals_5, (MR_Integer) 361, &check_hlds__simplify__simplify_tasks__OptDuplicateCalls_16);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(check_hlds__simplify__simplify_tasks__Globals_5, (MR_Integer) 362, &check_hlds__simplify__simplify_tasks__ConstantProp_17);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(check_hlds__simplify__simplify_tasks__Globals_5, (MR_Integer) 659, &check_hlds__simplify__simplify_tasks__RemoveParConjunctions_22);
    }
    check_hlds__simplify__simplify_tasks__succeeded = (check_hlds__simplify__simplify_tasks__WarnSimple_7 == (MR_Integer) 1);
    if (check_hlds__simplify__simplify_tasks__succeeded)
      check_hlds__simplify__simplify_tasks__succeeded = (check_hlds__simplify__simplify_tasks__WarnThisPass_4 == (MR_Integer) 1);
    if (check_hlds__simplify__simplify_tasks__succeeded)
      check_hlds__simplify__simplify_tasks__V_34_34 = (MR_Integer) 1;
    else
      check_hlds__simplify__simplify_tasks__V_34_34 = (MR_Integer) 0;
    check_hlds__simplify__simplify_tasks__succeeded = (check_hlds__simplify__simplify_tasks__WarnDupCalls_8 == (MR_Integer) 1);
    if (check_hlds__simplify__simplify_tasks__succeeded)
      check_hlds__simplify__simplify_tasks__succeeded = (check_hlds__simplify__simplify_tasks__WarnThisPass_4 == (MR_Integer) 1);
    if (check_hlds__simplify__simplify_tasks__succeeded)
      check_hlds__simplify__simplify_tasks__V_35_35 = (MR_Integer) 1;
    else
      check_hlds__simplify__simplify_tasks__V_35_35 = (MR_Integer) 0;
    check_hlds__simplify__simplify_tasks__succeeded = (check_hlds__simplify__simplify_tasks__WarnObsolete_13 == (MR_Integer) 1);
    if (check_hlds__simplify__simplify_tasks__succeeded)
      check_hlds__simplify__simplify_tasks__succeeded = (check_hlds__simplify__simplify_tasks__WarnThisPass_4 == (MR_Integer) 1);
    if (check_hlds__simplify__simplify_tasks__succeeded)
      check_hlds__simplify__simplify_tasks__V_36_36 = (MR_Integer) 1;
    else
      check_hlds__simplify__simplify_tasks__V_36_36 = (MR_Integer) 0;
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      *check_hlds__simplify__simplify_tasks__SimplifyTasks_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((check_hlds__simplify__simplify_tasks__V_34_34 | ((((check_hlds__simplify__simplify_tasks__V_35_35 << (MR_Integer) 1)) | ((((check_hlds__simplify__simplify_tasks__DoFormatCalls_12 << (MR_Integer) 2)) | ((((check_hlds__simplify__simplify_tasks__V_36_36 << (MR_Integer) 3)) | (((((MR_Integer) 0 << (MR_Integer) 4)) | (((((MR_Integer) 0 << (MR_Integer) 5)) | ((((check_hlds__simplify__simplify_tasks__ExcessAssign_14 << (MR_Integer) 6)) | (((((MR_Integer) 0 << (MR_Integer) 7)) | ((((check_hlds__simplify__simplify_tasks__OptDuplicateCalls_16 << (MR_Integer) 8)) | ((((check_hlds__simplify__simplify_tasks__ConstantProp_17 << (MR_Integer) 9)) | ((((check_hlds__simplify__simplify_tasks__CommonStruct_15 << (MR_Integer) 10)) | (((((MR_Integer) 0 << (MR_Integer) 11)) | ((check_hlds__simplify__simplify_tasks__RemoveParConjunctions_22 << (MR_Integer) 12)))))))))))))))))))))))))));
    }
  }
}

MR_Word MR_CALL 
check_hlds__simplify__simplify_tasks__list_to_simplify_tasks_1_f_0(
  MR_Word check_hlds__simplify__simplify_tasks__List_3)
{
  {
    MR_bool check_hlds__simplify__simplify_tasks__succeeded;
    MR_Word check_hlds__simplify__simplify_tasks__HeadVar__2_2;
    MR_Word check_hlds__simplify__simplify_tasks__V_4_4;
    MR_Word check_hlds__simplify__simplify_tasks__V_6_6;
    MR_Word check_hlds__simplify__simplify_tasks__V_8_8;
    MR_Word check_hlds__simplify__simplify_tasks__V_10_10;
    MR_Word check_hlds__simplify__simplify_tasks__V_12_12;
    MR_Word check_hlds__simplify__simplify_tasks__V_14_14;
    MR_Word check_hlds__simplify__simplify_tasks__V_16_16;
    MR_Word check_hlds__simplify__simplify_tasks__V_18_18;
    MR_Word check_hlds__simplify__simplify_tasks__V_20_20;
    MR_Word check_hlds__simplify__simplify_tasks__V_22_22;
    MR_Word check_hlds__simplify__simplify_tasks__V_24_24;
    MR_Word check_hlds__simplify__simplify_tasks__V_26_26;
    MR_Word check_hlds__simplify__simplify_tasks__V_28_28;

    {
      check_hlds__simplify__simplify_tasks__succeeded = mercury__list__member_2_p_0((MR_Word) &check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__type_ctor_info_simplify_task_0, ((MR_Box) ((MR_Integer) 0)), check_hlds__simplify__simplify_tasks__List_3);
    }
    if (check_hlds__simplify__simplify_tasks__succeeded)
      check_hlds__simplify__simplify_tasks__V_4_4 = (MR_Integer) 1;
    else
      check_hlds__simplify__simplify_tasks__V_4_4 = (MR_Integer) 0;
    {
      check_hlds__simplify__simplify_tasks__succeeded = mercury__list__member_2_p_0((MR_Word) &check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__type_ctor_info_simplify_task_0, ((MR_Box) ((MR_Integer) 1)), check_hlds__simplify__simplify_tasks__List_3);
    }
    if (check_hlds__simplify__simplify_tasks__succeeded)
      check_hlds__simplify__simplify_tasks__V_6_6 = (MR_Integer) 1;
    else
      check_hlds__simplify__simplify_tasks__V_6_6 = (MR_Integer) 0;
    {
      check_hlds__simplify__simplify_tasks__succeeded = mercury__list__member_2_p_0((MR_Word) &check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__type_ctor_info_simplify_task_0, ((MR_Box) ((MR_Integer) 2)), check_hlds__simplify__simplify_tasks__List_3);
    }
    if (check_hlds__simplify__simplify_tasks__succeeded)
      check_hlds__simplify__simplify_tasks__V_8_8 = (MR_Integer) 1;
    else
      check_hlds__simplify__simplify_tasks__V_8_8 = (MR_Integer) 0;
    {
      check_hlds__simplify__simplify_tasks__succeeded = mercury__list__member_2_p_0((MR_Word) &check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__type_ctor_info_simplify_task_0, ((MR_Box) ((MR_Integer) 3)), check_hlds__simplify__simplify_tasks__List_3);
    }
    if (check_hlds__simplify__simplify_tasks__succeeded)
      check_hlds__simplify__simplify_tasks__V_10_10 = (MR_Integer) 1;
    else
      check_hlds__simplify__simplify_tasks__V_10_10 = (MR_Integer) 0;
    {
      check_hlds__simplify__simplify_tasks__succeeded = mercury__list__member_2_p_0((MR_Word) &check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__type_ctor_info_simplify_task_0, ((MR_Box) ((MR_Integer) 4)), check_hlds__simplify__simplify_tasks__List_3);
    }
    if (check_hlds__simplify__simplify_tasks__succeeded)
      check_hlds__simplify__simplify_tasks__V_12_12 = (MR_Integer) 1;
    else
      check_hlds__simplify__simplify_tasks__V_12_12 = (MR_Integer) 0;
    {
      check_hlds__simplify__simplify_tasks__succeeded = mercury__list__member_2_p_0((MR_Word) &check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__type_ctor_info_simplify_task_0, ((MR_Box) ((MR_Integer) 5)), check_hlds__simplify__simplify_tasks__List_3);
    }
    if (check_hlds__simplify__simplify_tasks__succeeded)
      check_hlds__simplify__simplify_tasks__V_14_14 = (MR_Integer) 1;
    else
      check_hlds__simplify__simplify_tasks__V_14_14 = (MR_Integer) 0;
    {
      check_hlds__simplify__simplify_tasks__succeeded = mercury__list__member_2_p_0((MR_Word) &check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__type_ctor_info_simplify_task_0, ((MR_Box) ((MR_Integer) 6)), check_hlds__simplify__simplify_tasks__List_3);
    }
    if (check_hlds__simplify__simplify_tasks__succeeded)
      check_hlds__simplify__simplify_tasks__V_16_16 = (MR_Integer) 1;
    else
      check_hlds__simplify__simplify_tasks__V_16_16 = (MR_Integer) 0;
    {
      check_hlds__simplify__simplify_tasks__succeeded = mercury__list__member_2_p_0((MR_Word) &check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__type_ctor_info_simplify_task_0, ((MR_Box) ((MR_Integer) 7)), check_hlds__simplify__simplify_tasks__List_3);
    }
    if (check_hlds__simplify__simplify_tasks__succeeded)
      check_hlds__simplify__simplify_tasks__V_18_18 = (MR_Integer) 1;
    else
      check_hlds__simplify__simplify_tasks__V_18_18 = (MR_Integer) 0;
    {
      check_hlds__simplify__simplify_tasks__succeeded = mercury__list__member_2_p_0((MR_Word) &check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__type_ctor_info_simplify_task_0, ((MR_Box) ((MR_Integer) 8)), check_hlds__simplify__simplify_tasks__List_3);
    }
    if (check_hlds__simplify__simplify_tasks__succeeded)
      check_hlds__simplify__simplify_tasks__V_20_20 = (MR_Integer) 1;
    else
      check_hlds__simplify__simplify_tasks__V_20_20 = (MR_Integer) 0;
    {
      check_hlds__simplify__simplify_tasks__succeeded = mercury__list__member_2_p_0((MR_Word) &check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__type_ctor_info_simplify_task_0, ((MR_Box) ((MR_Integer) 9)), check_hlds__simplify__simplify_tasks__List_3);
    }
    if (check_hlds__simplify__simplify_tasks__succeeded)
      check_hlds__simplify__simplify_tasks__V_22_22 = (MR_Integer) 1;
    else
      check_hlds__simplify__simplify_tasks__V_22_22 = (MR_Integer) 0;
    {
      check_hlds__simplify__simplify_tasks__succeeded = mercury__list__member_2_p_0((MR_Word) &check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__type_ctor_info_simplify_task_0, ((MR_Box) ((MR_Integer) 10)), check_hlds__simplify__simplify_tasks__List_3);
    }
    if (check_hlds__simplify__simplify_tasks__succeeded)
      check_hlds__simplify__simplify_tasks__V_24_24 = (MR_Integer) 1;
    else
      check_hlds__simplify__simplify_tasks__V_24_24 = (MR_Integer) 0;
    {
      check_hlds__simplify__simplify_tasks__succeeded = mercury__list__member_2_p_0((MR_Word) &check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__type_ctor_info_simplify_task_0, ((MR_Box) ((MR_Integer) 11)), check_hlds__simplify__simplify_tasks__List_3);
    }
    if (check_hlds__simplify__simplify_tasks__succeeded)
      check_hlds__simplify__simplify_tasks__V_26_26 = (MR_Integer) 1;
    else
      check_hlds__simplify__simplify_tasks__V_26_26 = (MR_Integer) 0;
    {
      check_hlds__simplify__simplify_tasks__succeeded = mercury__list__member_2_p_0((MR_Word) &check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__type_ctor_info_simplify_task_0, ((MR_Box) ((MR_Integer) 12)), check_hlds__simplify__simplify_tasks__List_3);
    }
    if (check_hlds__simplify__simplify_tasks__succeeded)
      check_hlds__simplify__simplify_tasks__V_28_28 = (MR_Integer) 1;
    else
      check_hlds__simplify__simplify_tasks__V_28_28 = (MR_Integer) 0;
    {
      check_hlds__simplify__simplify_tasks__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_tasks__HeadVar__2_2, 0) = ((MR_Box) ((check_hlds__simplify__simplify_tasks__V_4_4 | ((((check_hlds__simplify__simplify_tasks__V_6_6 << (MR_Integer) 1)) | ((((check_hlds__simplify__simplify_tasks__V_8_8 << (MR_Integer) 2)) | ((((check_hlds__simplify__simplify_tasks__V_10_10 << (MR_Integer) 3)) | ((((check_hlds__simplify__simplify_tasks__V_12_12 << (MR_Integer) 4)) | ((((check_hlds__simplify__simplify_tasks__V_14_14 << (MR_Integer) 5)) | ((((check_hlds__simplify__simplify_tasks__V_16_16 << (MR_Integer) 6)) | ((((check_hlds__simplify__simplify_tasks__V_18_18 << (MR_Integer) 7)) | ((((check_hlds__simplify__simplify_tasks__V_20_20 << (MR_Integer) 8)) | ((((check_hlds__simplify__simplify_tasks__V_22_22 << (MR_Integer) 9)) | ((((check_hlds__simplify__simplify_tasks__V_24_24 << (MR_Integer) 10)) | ((((check_hlds__simplify__simplify_tasks__V_26_26 << (MR_Integer) 11)) | ((check_hlds__simplify__simplify_tasks__V_28_28 << (MR_Integer) 12)))))))))))))))))))))))))));
    }
    return check_hlds__simplify__simplify_tasks__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
check_hlds__simplify__simplify_tasks__simplify_tasks_to_list_1_f_0(
  MR_Word check_hlds__simplify__simplify_tasks__SimplifyTasks_3)
{
  {
    MR_bool check_hlds__simplify__simplify_tasks__succeeded;
    MR_Word check_hlds__simplify__simplify_tasks__List_4;
    MR_Word check_hlds__simplify__simplify_tasks__TypeCtorInfo_68_68 = (MR_Word) &check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__type_ctor_info_simplify_task_0;
    MR_Word check_hlds__simplify__simplify_tasks__WarnSimpleCode_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_tasks__SimplifyTasks_3, (MR_Integer) 0)))) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_tasks__WarnDupCalls_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_tasks__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_tasks__DoFormatCalls_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_tasks__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_tasks__WarnObsolete_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_tasks__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_tasks__MarkCodeModelChanges_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_tasks__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_tasks__AfterFrontEnd_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_tasks__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_tasks__ExcessAssign_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_tasks__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_tasks__ElimRemovableScopes_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_tasks__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_tasks__OptDuplicateCalls_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_tasks__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_tasks__ConstantProp_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_tasks__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_tasks__CommonStruct_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_tasks__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_tasks__ExtraCommonStruct_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_tasks__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_tasks__RemoveParConjunctions_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_tasks__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_tasks__V_18_18;
    MR_Word check_hlds__simplify__simplify_tasks__V_21_21;
    MR_Word check_hlds__simplify__simplify_tasks__V_22_22;
    MR_Word check_hlds__simplify__simplify_tasks__V_25_25;
    MR_Word check_hlds__simplify__simplify_tasks__V_26_26;
    MR_Word check_hlds__simplify__simplify_tasks__V_29_29;
    MR_Word check_hlds__simplify__simplify_tasks__V_30_30;
    MR_Word check_hlds__simplify__simplify_tasks__V_33_33;
    MR_Word check_hlds__simplify__simplify_tasks__V_34_34;
    MR_Word check_hlds__simplify__simplify_tasks__V_37_37;
    MR_Word check_hlds__simplify__simplify_tasks__V_38_38;
    MR_Word check_hlds__simplify__simplify_tasks__V_41_41;
    MR_Word check_hlds__simplify__simplify_tasks__V_42_42;
    MR_Word check_hlds__simplify__simplify_tasks__V_45_45;
    MR_Word check_hlds__simplify__simplify_tasks__V_46_46;
    MR_Word check_hlds__simplify__simplify_tasks__V_49_49;
    MR_Word check_hlds__simplify__simplify_tasks__V_50_50;
    MR_Word check_hlds__simplify__simplify_tasks__V_53_53;
    MR_Word check_hlds__simplify__simplify_tasks__V_54_54;
    MR_Word check_hlds__simplify__simplify_tasks__V_57_57;
    MR_Word check_hlds__simplify__simplify_tasks__V_58_58;
    MR_Word check_hlds__simplify__simplify_tasks__V_61_61;
    MR_Word check_hlds__simplify__simplify_tasks__V_62_62;
    MR_Word check_hlds__simplify__simplify_tasks__V_65_65;

    check_hlds__simplify__simplify_tasks__succeeded = (check_hlds__simplify__simplify_tasks__WarnSimpleCode_5 == (MR_Integer) 1);
    if (check_hlds__simplify__simplify_tasks__succeeded)
      {
        check_hlds__simplify__simplify_tasks__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_tasks_scalar_common_1[0]);
      }
    else
      check_hlds__simplify__simplify_tasks__V_18_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    check_hlds__simplify__simplify_tasks__succeeded = (check_hlds__simplify__simplify_tasks__WarnDupCalls_6 == (MR_Integer) 1);
    if (check_hlds__simplify__simplify_tasks__succeeded)
      {
        check_hlds__simplify__simplify_tasks__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_tasks_scalar_common_1[1]);
      }
    else
      check_hlds__simplify__simplify_tasks__V_22_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    check_hlds__simplify__simplify_tasks__succeeded = (check_hlds__simplify__simplify_tasks__DoFormatCalls_7 == (MR_Integer) 1);
    if (check_hlds__simplify__simplify_tasks__succeeded)
      {
        check_hlds__simplify__simplify_tasks__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_tasks_scalar_common_1[2]);
      }
    else
      check_hlds__simplify__simplify_tasks__V_26_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    check_hlds__simplify__simplify_tasks__succeeded = (check_hlds__simplify__simplify_tasks__WarnObsolete_8 == (MR_Integer) 1);
    if (check_hlds__simplify__simplify_tasks__succeeded)
      {
        check_hlds__simplify__simplify_tasks__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_tasks_scalar_common_1[3]);
      }
    else
      check_hlds__simplify__simplify_tasks__V_30_30 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    check_hlds__simplify__simplify_tasks__succeeded = (check_hlds__simplify__simplify_tasks__MarkCodeModelChanges_9 == (MR_Integer) 1);
    if (check_hlds__simplify__simplify_tasks__succeeded)
      {
        check_hlds__simplify__simplify_tasks__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_tasks_scalar_common_1[4]);
      }
    else
      check_hlds__simplify__simplify_tasks__V_34_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    check_hlds__simplify__simplify_tasks__succeeded = (check_hlds__simplify__simplify_tasks__AfterFrontEnd_10 == (MR_Integer) 1);
    if (check_hlds__simplify__simplify_tasks__succeeded)
      {
        check_hlds__simplify__simplify_tasks__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_tasks_scalar_common_1[5]);
      }
    else
      check_hlds__simplify__simplify_tasks__V_38_38 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    check_hlds__simplify__simplify_tasks__succeeded = (check_hlds__simplify__simplify_tasks__ExcessAssign_11 == (MR_Integer) 1);
    if (check_hlds__simplify__simplify_tasks__succeeded)
      {
        check_hlds__simplify__simplify_tasks__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_tasks_scalar_common_1[6]);
      }
    else
      check_hlds__simplify__simplify_tasks__V_42_42 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    check_hlds__simplify__simplify_tasks__succeeded = (check_hlds__simplify__simplify_tasks__ElimRemovableScopes_12 == (MR_Integer) 1);
    if (check_hlds__simplify__simplify_tasks__succeeded)
      {
        check_hlds__simplify__simplify_tasks__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_tasks_scalar_common_1[7]);
      }
    else
      check_hlds__simplify__simplify_tasks__V_46_46 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    check_hlds__simplify__simplify_tasks__succeeded = (check_hlds__simplify__simplify_tasks__OptDuplicateCalls_13 == (MR_Integer) 1);
    if (check_hlds__simplify__simplify_tasks__succeeded)
      {
        check_hlds__simplify__simplify_tasks__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_tasks_scalar_common_1[8]);
      }
    else
      check_hlds__simplify__simplify_tasks__V_50_50 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    check_hlds__simplify__simplify_tasks__succeeded = (check_hlds__simplify__simplify_tasks__ConstantProp_14 == (MR_Integer) 1);
    if (check_hlds__simplify__simplify_tasks__succeeded)
      {
        check_hlds__simplify__simplify_tasks__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_tasks_scalar_common_1[9]);
      }
    else
      check_hlds__simplify__simplify_tasks__V_54_54 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    check_hlds__simplify__simplify_tasks__succeeded = (check_hlds__simplify__simplify_tasks__CommonStruct_15 == (MR_Integer) 1);
    if (check_hlds__simplify__simplify_tasks__succeeded)
      {
        check_hlds__simplify__simplify_tasks__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_tasks_scalar_common_1[10]);
      }
    else
      check_hlds__simplify__simplify_tasks__V_58_58 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    check_hlds__simplify__simplify_tasks__succeeded = (check_hlds__simplify__simplify_tasks__ExtraCommonStruct_16 == (MR_Integer) 1);
    if (check_hlds__simplify__simplify_tasks__succeeded)
      {
        check_hlds__simplify__simplify_tasks__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_tasks_scalar_common_1[11]);
      }
    else
      check_hlds__simplify__simplify_tasks__V_62_62 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    check_hlds__simplify__simplify_tasks__succeeded = (check_hlds__simplify__simplify_tasks__RemoveParConjunctions_17 == (MR_Integer) 1);
    if (check_hlds__simplify__simplify_tasks__succeeded)
      {
        check_hlds__simplify__simplify_tasks__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_tasks_scalar_common_1[12]);
      }
    else
      check_hlds__simplify__simplify_tasks__V_65_65 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      check_hlds__simplify__simplify_tasks__V_61_61 = mercury__list__f_43_43_2_f_0(check_hlds__simplify__simplify_tasks__TypeCtorInfo_68_68, check_hlds__simplify__simplify_tasks__V_62_62, check_hlds__simplify__simplify_tasks__V_65_65);
    }
    {
      check_hlds__simplify__simplify_tasks__V_57_57 = mercury__list__f_43_43_2_f_0(check_hlds__simplify__simplify_tasks__TypeCtorInfo_68_68, check_hlds__simplify__simplify_tasks__V_58_58, check_hlds__simplify__simplify_tasks__V_61_61);
    }
    {
      check_hlds__simplify__simplify_tasks__V_53_53 = mercury__list__f_43_43_2_f_0(check_hlds__simplify__simplify_tasks__TypeCtorInfo_68_68, check_hlds__simplify__simplify_tasks__V_54_54, check_hlds__simplify__simplify_tasks__V_57_57);
    }
    {
      check_hlds__simplify__simplify_tasks__V_49_49 = mercury__list__f_43_43_2_f_0(check_hlds__simplify__simplify_tasks__TypeCtorInfo_68_68, check_hlds__simplify__simplify_tasks__V_50_50, check_hlds__simplify__simplify_tasks__V_53_53);
    }
    {
      check_hlds__simplify__simplify_tasks__V_45_45 = mercury__list__f_43_43_2_f_0(check_hlds__simplify__simplify_tasks__TypeCtorInfo_68_68, check_hlds__simplify__simplify_tasks__V_46_46, check_hlds__simplify__simplify_tasks__V_49_49);
    }
    {
      check_hlds__simplify__simplify_tasks__V_41_41 = mercury__list__f_43_43_2_f_0(check_hlds__simplify__simplify_tasks__TypeCtorInfo_68_68, check_hlds__simplify__simplify_tasks__V_42_42, check_hlds__simplify__simplify_tasks__V_45_45);
    }
    {
      check_hlds__simplify__simplify_tasks__V_37_37 = mercury__list__f_43_43_2_f_0(check_hlds__simplify__simplify_tasks__TypeCtorInfo_68_68, check_hlds__simplify__simplify_tasks__V_38_38, check_hlds__simplify__simplify_tasks__V_41_41);
    }
    {
      check_hlds__simplify__simplify_tasks__V_33_33 = mercury__list__f_43_43_2_f_0(check_hlds__simplify__simplify_tasks__TypeCtorInfo_68_68, check_hlds__simplify__simplify_tasks__V_34_34, check_hlds__simplify__simplify_tasks__V_37_37);
    }
    {
      check_hlds__simplify__simplify_tasks__V_29_29 = mercury__list__f_43_43_2_f_0(check_hlds__simplify__simplify_tasks__TypeCtorInfo_68_68, check_hlds__simplify__simplify_tasks__V_30_30, check_hlds__simplify__simplify_tasks__V_33_33);
    }
    {
      check_hlds__simplify__simplify_tasks__V_25_25 = mercury__list__f_43_43_2_f_0(check_hlds__simplify__simplify_tasks__TypeCtorInfo_68_68, check_hlds__simplify__simplify_tasks__V_26_26, check_hlds__simplify__simplify_tasks__V_29_29);
    }
    {
      check_hlds__simplify__simplify_tasks__V_21_21 = mercury__list__f_43_43_2_f_0(check_hlds__simplify__simplify_tasks__TypeCtorInfo_68_68, check_hlds__simplify__simplify_tasks__V_22_22, check_hlds__simplify__simplify_tasks__V_25_25);
    }
    {
      check_hlds__simplify__simplify_tasks__List_4 = mercury__list__f_43_43_2_f_0(check_hlds__simplify__simplify_tasks__TypeCtorInfo_68_68, check_hlds__simplify__simplify_tasks__V_18_18, check_hlds__simplify__simplify_tasks__V_21_21);
    }
    return check_hlds__simplify__simplify_tasks__List_4;
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module check_hlds.simplify.simplify_tasks. */
