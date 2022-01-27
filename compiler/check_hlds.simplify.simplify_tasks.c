/*
** Automatically generated from `simplify_tasks.m'
** by the Mercury compiler,
** version rotd-2014-09-30
** configured for x86_64-apple-darwin13.3.0.
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
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "hlds.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "multi_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "random.mih"
#include "recompilation.mih"
#include "robdd.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "tree_bitset.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.simplify.mih"
#include "check_hlds.unify_proc.mih"
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
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
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
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 131 "check_hlds.simplify.simplify_tasks.c"
static const MR_EnumFunctorDesc check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__enum_functor_desc_simplify_task_0_0;

#line 134 "check_hlds.simplify.simplify_tasks.c"
static const MR_EnumFunctorDesc check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__enum_functor_desc_simplify_task_0_1;

#line 137 "check_hlds.simplify.simplify_tasks.c"
static const MR_EnumFunctorDesc check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__enum_functor_desc_simplify_task_0_2;

#line 140 "check_hlds.simplify.simplify_tasks.c"
static const MR_EnumFunctorDesc check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__enum_functor_desc_simplify_task_0_3;

#line 143 "check_hlds.simplify.simplify_tasks.c"
static const MR_EnumFunctorDesc check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__enum_functor_desc_simplify_task_0_4;

#line 146 "check_hlds.simplify.simplify_tasks.c"
static const MR_EnumFunctorDesc check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__enum_functor_desc_simplify_task_0_5;

#line 149 "check_hlds.simplify.simplify_tasks.c"
static const MR_EnumFunctorDesc check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__enum_functor_desc_simplify_task_0_6;

#line 152 "check_hlds.simplify.simplify_tasks.c"
static const MR_EnumFunctorDesc check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__enum_functor_desc_simplify_task_0_7;

#line 155 "check_hlds.simplify.simplify_tasks.c"
static const MR_EnumFunctorDesc check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__enum_functor_desc_simplify_task_0_8;

#line 158 "check_hlds.simplify.simplify_tasks.c"
static const MR_EnumFunctorDesc check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__enum_functor_desc_simplify_task_0_9;

#line 161 "check_hlds.simplify.simplify_tasks.c"
static const MR_EnumFunctorDesc check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__enum_functor_desc_simplify_task_0_10;

#line 164 "check_hlds.simplify.simplify_tasks.c"
static const MR_EnumFunctorDesc check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__enum_functor_desc_simplify_task_0_11;

#line 167 "check_hlds.simplify.simplify_tasks.c"
static const MR_EnumFunctorDesc check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__enum_functor_desc_simplify_task_0_12;

#line 170 "check_hlds.simplify.simplify_tasks.c"
static const MR_EnumFunctorDescPtr check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__enum_value_ordered_simplify_task_0[13];

#line 173 "check_hlds.simplify.simplify_tasks.c"
static const MR_EnumFunctorDescPtr check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__enum_name_ordered_simplify_task_0[13];

#line 176 "check_hlds.simplify.simplify_tasks.c"
static const MR_Integer check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__functor_number_map_simplify_task_0[13];

#line 179 "check_hlds.simplify.simplify_tasks.c"
static const MR_PseudoTypeInfo check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__field_types_simplify_tasks_0_0[13];

#line 182 "check_hlds.simplify.simplify_tasks.c"
static const MR_ConstString check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__field_names_simplify_tasks_0_0[13];

#line 185 "check_hlds.simplify.simplify_tasks.c"
static const MR_DuArgLocn check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__field_locns_simplify_tasks_0_0[13];

#line 188 "check_hlds.simplify.simplify_tasks.c"
static const MR_DuFunctorDesc check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__du_functor_desc_simplify_tasks_0_0;

#line 191 "check_hlds.simplify.simplify_tasks.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__du_stag_ordered_simplify_tasks_0_0[1];

#line 194 "check_hlds.simplify.simplify_tasks.c"
static const MR_DuPtagLayout check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__du_ptag_ordered_simplify_tasks_0[1];

#line 197 "check_hlds.simplify.simplify_tasks.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__du_name_ordered_simplify_tasks_0[1];

#line 200 "check_hlds.simplify.simplify_tasks.c"
static const MR_Integer check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__functor_number_map_simplify_tasks_0[1];

#line 203 "check_hlds.simplify.simplify_tasks.c"
static MR_bool MR_CALL 
check_hlds__simplify__simplify_tasks____Unify____simplify_task_0_0_10001(
#line 206 "check_hlds.simplify.simplify_tasks.c"
  MR_Box check_hlds__simplify__simplify_tasks__wrapper_arg_1,
#line 208 "check_hlds.simplify.simplify_tasks.c"
  MR_Box check_hlds__simplify__simplify_tasks__wrapper_arg_2);

#line 211 "check_hlds.simplify.simplify_tasks.c"
static void MR_CALL 
check_hlds__simplify__simplify_tasks____Compare____simplify_task_0_0_10001(
#line 214 "check_hlds.simplify.simplify_tasks.c"
  MR_Box * check_hlds__simplify__simplify_tasks__wrapper_arg_1,
#line 216 "check_hlds.simplify.simplify_tasks.c"
  MR_Box check_hlds__simplify__simplify_tasks__wrapper_arg_2,
#line 218 "check_hlds.simplify.simplify_tasks.c"
  MR_Box check_hlds__simplify__simplify_tasks__wrapper_arg_3);

#line 221 "check_hlds.simplify.simplify_tasks.c"
static MR_bool MR_CALL 
check_hlds__simplify__simplify_tasks____Unify____simplify_tasks_0_0_10001(
#line 224 "check_hlds.simplify.simplify_tasks.c"
  MR_Box check_hlds__simplify__simplify_tasks__wrapper_arg_1,
#line 226 "check_hlds.simplify.simplify_tasks.c"
  MR_Box check_hlds__simplify__simplify_tasks__wrapper_arg_2);

#line 229 "check_hlds.simplify.simplify_tasks.c"
static void MR_CALL 
check_hlds__simplify__simplify_tasks____Compare____simplify_tasks_0_0_10001(
#line 232 "check_hlds.simplify.simplify_tasks.c"
  MR_Box * check_hlds__simplify__simplify_tasks__wrapper_arg_1,
#line 234 "check_hlds.simplify.simplify_tasks.c"
  MR_Box check_hlds__simplify__simplify_tasks__wrapper_arg_2,
#line 236 "check_hlds.simplify.simplify_tasks.c"
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
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"
#include "array.mh"
#include "array.mh"



#line 330 "check_hlds.simplify.simplify_tasks.c"
static const MR_EnumFunctorDesc check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__enum_functor_desc_simplify_task_0_0 = {
  (MR_String) "simptask_warn_simple_code",
  (MR_Integer) 0
};

#line 336 "check_hlds.simplify.simplify_tasks.c"
static const MR_EnumFunctorDesc check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__enum_functor_desc_simplify_task_0_1 = {
  (MR_String) "simptask_warn_duplicate_calls",
  (MR_Integer) 1
};

#line 342 "check_hlds.simplify.simplify_tasks.c"
static const MR_EnumFunctorDesc check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__enum_functor_desc_simplify_task_0_2 = {
  (MR_String) "simptask_format_calls",
  (MR_Integer) 2
};

#line 348 "check_hlds.simplify.simplify_tasks.c"
static const MR_EnumFunctorDesc check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__enum_functor_desc_simplify_task_0_3 = {
  (MR_String) "simptask_warn_obsolete",
  (MR_Integer) 3
};

#line 354 "check_hlds.simplify.simplify_tasks.c"
static const MR_EnumFunctorDesc check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__enum_functor_desc_simplify_task_0_4 = {
  (MR_String) "simptask_mark_code_model_changes",
  (MR_Integer) 4
};

#line 360 "check_hlds.simplify.simplify_tasks.c"
static const MR_EnumFunctorDesc check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__enum_functor_desc_simplify_task_0_5 = {
  (MR_String) "simptask_after_front_end",
  (MR_Integer) 5
};

#line 366 "check_hlds.simplify.simplify_tasks.c"
static const MR_EnumFunctorDesc check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__enum_functor_desc_simplify_task_0_6 = {
  (MR_String) "simptask_excess_assigns",
  (MR_Integer) 6
};

#line 372 "check_hlds.simplify.simplify_tasks.c"
static const MR_EnumFunctorDesc check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__enum_functor_desc_simplify_task_0_7 = {
  (MR_String) "simptask_elim_removable_scopes",
  (MR_Integer) 7
};

#line 378 "check_hlds.simplify.simplify_tasks.c"
static const MR_EnumFunctorDesc check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__enum_functor_desc_simplify_task_0_8 = {
  (MR_String) "simptask_opt_duplicate_calls",
  (MR_Integer) 8
};

#line 384 "check_hlds.simplify.simplify_tasks.c"
static const MR_EnumFunctorDesc check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__enum_functor_desc_simplify_task_0_9 = {
  (MR_String) "simptask_constant_prop",
  (MR_Integer) 9
};

#line 390 "check_hlds.simplify.simplify_tasks.c"
static const MR_EnumFunctorDesc check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__enum_functor_desc_simplify_task_0_10 = {
  (MR_String) "simptask_common_struct",
  (MR_Integer) 10
};

#line 396 "check_hlds.simplify.simplify_tasks.c"
static const MR_EnumFunctorDesc check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__enum_functor_desc_simplify_task_0_11 = {
  (MR_String) "simptask_extra_common_struct",
  (MR_Integer) 11
};

#line 402 "check_hlds.simplify.simplify_tasks.c"
static const MR_EnumFunctorDesc check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__enum_functor_desc_simplify_task_0_12 = {
  (MR_String) "simptask_ignore_par_conjs",
  (MR_Integer) 12
};

#line 408 "check_hlds.simplify.simplify_tasks.c"
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

#line 425 "check_hlds.simplify.simplify_tasks.c"
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

#line 442 "check_hlds.simplify.simplify_tasks.c"
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

#line 459 "check_hlds.simplify.simplify_tasks.c"
const MR_TypeCtorInfo_Struct check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__type_ctor_info_simplify_task_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__simplify__simplify_tasks____Unify____simplify_task_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__simplify_tasks____Compare____simplify_task_0_0_10001)),
  (MR_String) "check_hlds.simplify.simplify_tasks",
  (MR_String) "simplify_task",
  {
    check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__enum_name_ordered_simplify_task_0
  },
  {
    check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__enum_value_ordered_simplify_task_0
  },
  (MR_Integer) 13,
  (MR_Integer) 4,
  check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__functor_number_map_simplify_task_0
};

#line 480 "check_hlds.simplify.simplify_tasks.c"
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

#line 497 "check_hlds.simplify.simplify_tasks.c"
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

#line 514 "check_hlds.simplify.simplify_tasks.c"
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

#line 583 "check_hlds.simplify.simplify_tasks.c"
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

#line 598 "check_hlds.simplify.simplify_tasks.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__du_stag_ordered_simplify_tasks_0_0[1] = {
  &check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__du_functor_desc_simplify_tasks_0_0
};

#line 603 "check_hlds.simplify.simplify_tasks.c"
static const MR_DuPtagLayout check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__du_ptag_ordered_simplify_tasks_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__du_stag_ordered_simplify_tasks_0_0
  }
};

#line 612 "check_hlds.simplify.simplify_tasks.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__du_name_ordered_simplify_tasks_0[1] = {
  &check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__du_functor_desc_simplify_tasks_0_0
};

#line 617 "check_hlds.simplify.simplify_tasks.c"
static const MR_Integer check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__functor_number_map_simplify_tasks_0[1] = {
  (MR_Integer) 0
};

#line 622 "check_hlds.simplify.simplify_tasks.c"
const MR_TypeCtorInfo_Struct check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__type_ctor_info_simplify_tasks_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__simplify__simplify_tasks____Unify____simplify_tasks_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__simplify_tasks____Compare____simplify_tasks_0_0_10001)),
  (MR_String) "check_hlds.simplify.simplify_tasks",
  (MR_String) "simplify_tasks",
  {
    check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__du_name_ordered_simplify_tasks_0
  },
  {
    check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__du_ptag_ordered_simplify_tasks_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__functor_number_map_simplify_tasks_0
};

#line 643 "check_hlds.simplify.simplify_tasks.c"
static MR_bool MR_CALL 
check_hlds__simplify__simplify_tasks____Unify____simplify_task_0_0_10001(
#line 646 "check_hlds.simplify.simplify_tasks.c"
  MR_Box check_hlds__simplify__simplify_tasks__wrapper_arg_1,
#line 648 "check_hlds.simplify.simplify_tasks.c"
  MR_Box check_hlds__simplify__simplify_tasks__wrapper_arg_2)
#line 650 "check_hlds.simplify.simplify_tasks.c"
{
#line 652 "check_hlds.simplify.simplify_tasks.c"
  {
#line 654 "check_hlds.simplify.simplify_tasks.c"
    MR_bool check_hlds__simplify__simplify_tasks__succeeded;

#line 657 "check_hlds.simplify.simplify_tasks.c"
    {
#line 659 "check_hlds.simplify.simplify_tasks.c"
      check_hlds__simplify__simplify_tasks__succeeded = check_hlds__simplify__simplify_tasks____Unify____simplify_task_0_0(((MR_Word) check_hlds__simplify__simplify_tasks__wrapper_arg_1), ((MR_Word) check_hlds__simplify__simplify_tasks__wrapper_arg_2));
    }
#line 662 "check_hlds.simplify.simplify_tasks.c"
    return check_hlds__simplify__simplify_tasks__succeeded;
#line 664 "check_hlds.simplify.simplify_tasks.c"
  }
#line 666 "check_hlds.simplify.simplify_tasks.c"
}

#line 669 "check_hlds.simplify.simplify_tasks.c"
static void MR_CALL 
check_hlds__simplify__simplify_tasks____Compare____simplify_task_0_0_10001(
#line 672 "check_hlds.simplify.simplify_tasks.c"
  MR_Box * check_hlds__simplify__simplify_tasks__wrapper_arg_1,
#line 674 "check_hlds.simplify.simplify_tasks.c"
  MR_Box check_hlds__simplify__simplify_tasks__wrapper_arg_2,
#line 676 "check_hlds.simplify.simplify_tasks.c"
  MR_Box check_hlds__simplify__simplify_tasks__wrapper_arg_3)
#line 678 "check_hlds.simplify.simplify_tasks.c"
{
#line 680 "check_hlds.simplify.simplify_tasks.c"
  {
#line 682 "check_hlds.simplify.simplify_tasks.c"
    MR_Word check_hlds__simplify__simplify_tasks__conv0_HeadVar__1_1;

#line 685 "check_hlds.simplify.simplify_tasks.c"
    {
#line 687 "check_hlds.simplify.simplify_tasks.c"
      check_hlds__simplify__simplify_tasks____Compare____simplify_task_0_0(&check_hlds__simplify__simplify_tasks__conv0_HeadVar__1_1, ((MR_Word) check_hlds__simplify__simplify_tasks__wrapper_arg_2), ((MR_Word) check_hlds__simplify__simplify_tasks__wrapper_arg_3));
    }
#line 690 "check_hlds.simplify.simplify_tasks.c"
    *check_hlds__simplify__simplify_tasks__wrapper_arg_1 = ((MR_Box) (check_hlds__simplify__simplify_tasks__conv0_HeadVar__1_1));
#line 692 "check_hlds.simplify.simplify_tasks.c"
  }
#line 694 "check_hlds.simplify.simplify_tasks.c"
}

#line 697 "check_hlds.simplify.simplify_tasks.c"
static MR_bool MR_CALL 
check_hlds__simplify__simplify_tasks____Unify____simplify_tasks_0_0_10001(
#line 700 "check_hlds.simplify.simplify_tasks.c"
  MR_Box check_hlds__simplify__simplify_tasks__wrapper_arg_1,
#line 702 "check_hlds.simplify.simplify_tasks.c"
  MR_Box check_hlds__simplify__simplify_tasks__wrapper_arg_2)
#line 704 "check_hlds.simplify.simplify_tasks.c"
{
#line 706 "check_hlds.simplify.simplify_tasks.c"
  {
#line 708 "check_hlds.simplify.simplify_tasks.c"
    MR_bool check_hlds__simplify__simplify_tasks__succeeded;

#line 711 "check_hlds.simplify.simplify_tasks.c"
    {
#line 713 "check_hlds.simplify.simplify_tasks.c"
      check_hlds__simplify__simplify_tasks__succeeded = check_hlds__simplify__simplify_tasks____Unify____simplify_tasks_0_0(((MR_Word) check_hlds__simplify__simplify_tasks__wrapper_arg_1), ((MR_Word) check_hlds__simplify__simplify_tasks__wrapper_arg_2));
    }
#line 716 "check_hlds.simplify.simplify_tasks.c"
    return check_hlds__simplify__simplify_tasks__succeeded;
#line 718 "check_hlds.simplify.simplify_tasks.c"
  }
#line 720 "check_hlds.simplify.simplify_tasks.c"
}

#line 723 "check_hlds.simplify.simplify_tasks.c"
static void MR_CALL 
check_hlds__simplify__simplify_tasks____Compare____simplify_tasks_0_0_10001(
#line 726 "check_hlds.simplify.simplify_tasks.c"
  MR_Box * check_hlds__simplify__simplify_tasks__wrapper_arg_1,
#line 728 "check_hlds.simplify.simplify_tasks.c"
  MR_Box check_hlds__simplify__simplify_tasks__wrapper_arg_2,
#line 730 "check_hlds.simplify.simplify_tasks.c"
  MR_Box check_hlds__simplify__simplify_tasks__wrapper_arg_3)
#line 732 "check_hlds.simplify.simplify_tasks.c"
{
#line 734 "check_hlds.simplify.simplify_tasks.c"
  {
#line 736 "check_hlds.simplify.simplify_tasks.c"
    MR_Word check_hlds__simplify__simplify_tasks__conv0_HeadVar__1_1;

#line 739 "check_hlds.simplify.simplify_tasks.c"
    {
#line 741 "check_hlds.simplify.simplify_tasks.c"
      check_hlds__simplify__simplify_tasks____Compare____simplify_tasks_0_0(&check_hlds__simplify__simplify_tasks__conv0_HeadVar__1_1, ((MR_Word) check_hlds__simplify__simplify_tasks__wrapper_arg_2), ((MR_Word) check_hlds__simplify__simplify_tasks__wrapper_arg_3));
    }
#line 744 "check_hlds.simplify.simplify_tasks.c"
    *check_hlds__simplify__simplify_tasks__wrapper_arg_1 = ((MR_Box) (check_hlds__simplify__simplify_tasks__conv0_HeadVar__1_1));
#line 746 "check_hlds.simplify.simplify_tasks.c"
  }
#line 748 "check_hlds.simplify.simplify_tasks.c"
}

#line 81 "simplify_tasks.m"
void MR_CALL 
check_hlds__simplify__simplify_tasks____Compare____simplify_tasks_0_0(
#line 81 "simplify_tasks.m"
  MR_Word * check_hlds__simplify__simplify_tasks__HeadVar__1_1,
#line 81 "simplify_tasks.m"
  MR_Word check_hlds__simplify__simplify_tasks__HeadVar__2_2,
#line 81 "simplify_tasks.m"
  MR_Word check_hlds__simplify__simplify_tasks__HeadVar__3_3)
#line 81 "simplify_tasks.m"
{
#line 81 "simplify_tasks.m"
  {
#line 81 "simplify_tasks.m"
    MR_bool check_hlds__simplify__simplify_tasks__succeeded;
#line 81 "simplify_tasks.m"
    MR_Integer check_hlds__simplify__simplify_tasks__CastX_42 = (MR_Integer) check_hlds__simplify__simplify_tasks__HeadVar__2_2;
#line 81 "simplify_tasks.m"
    MR_Integer check_hlds__simplify__simplify_tasks__CastY_43 = (MR_Integer) check_hlds__simplify__simplify_tasks__HeadVar__3_3;

#line 81 "simplify_tasks.m"
    check_hlds__simplify__simplify_tasks__succeeded = (check_hlds__simplify__simplify_tasks__CastX_42 == check_hlds__simplify__simplify_tasks__CastY_43);
#line 81 "simplify_tasks.m"
    if (check_hlds__simplify__simplify_tasks__succeeded)
#line 775 "check_hlds.simplify.simplify_tasks.c"
      *check_hlds__simplify__simplify_tasks__HeadVar__1_1 = (MR_Integer) 0;
#line 81 "simplify_tasks.m"
    else
#line 81 "simplify_tasks.m"
      {
#line 81 "simplify_tasks.m"
        MR_Word check_hlds__simplify__simplify_tasks__V_4_4 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_tasks__HeadVar__2_2, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 81 "simplify_tasks.m"
        MR_Word check_hlds__simplify__simplify_tasks__V_5_5 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_tasks__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 81 "simplify_tasks.m"
        MR_Word check_hlds__simplify__simplify_tasks__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_tasks__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 81 "simplify_tasks.m"
        MR_Word check_hlds__simplify__simplify_tasks__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_tasks__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 81 "simplify_tasks.m"
        MR_Word check_hlds__simplify__simplify_tasks__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_tasks__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 81 "simplify_tasks.m"
        MR_Word check_hlds__simplify__simplify_tasks__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_tasks__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 81 "simplify_tasks.m"
        MR_Word check_hlds__simplify__simplify_tasks__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_tasks__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 81 "simplify_tasks.m"
        MR_Word check_hlds__simplify__simplify_tasks__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_tasks__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 81 "simplify_tasks.m"
        MR_Word check_hlds__simplify__simplify_tasks__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_tasks__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 81 "simplify_tasks.m"
        MR_Word check_hlds__simplify__simplify_tasks__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_tasks__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 81 "simplify_tasks.m"
        MR_Word check_hlds__simplify__simplify_tasks__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_tasks__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 81 "simplify_tasks.m"
        MR_Word check_hlds__simplify__simplify_tasks__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_tasks__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 81 "simplify_tasks.m"
        MR_Word check_hlds__simplify__simplify_tasks__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_tasks__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 81 "simplify_tasks.m"
        MR_Word check_hlds__simplify__simplify_tasks__V_17_17 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_tasks__HeadVar__3_3, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 81 "simplify_tasks.m"
        MR_Word check_hlds__simplify__simplify_tasks__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_tasks__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 81 "simplify_tasks.m"
        MR_Word check_hlds__simplify__simplify_tasks__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_tasks__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 81 "simplify_tasks.m"
        MR_Word check_hlds__simplify__simplify_tasks__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_tasks__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 81 "simplify_tasks.m"
        MR_Word check_hlds__simplify__simplify_tasks__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_tasks__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 81 "simplify_tasks.m"
        MR_Word check_hlds__simplify__simplify_tasks__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_tasks__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 81 "simplify_tasks.m"
        MR_Word check_hlds__simplify__simplify_tasks__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_tasks__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 81 "simplify_tasks.m"
        MR_Word check_hlds__simplify__simplify_tasks__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_tasks__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 81 "simplify_tasks.m"
        MR_Word check_hlds__simplify__simplify_tasks__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_tasks__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 81 "simplify_tasks.m"
        MR_Word check_hlds__simplify__simplify_tasks__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_tasks__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 81 "simplify_tasks.m"
        MR_Word check_hlds__simplify__simplify_tasks__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_tasks__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 81 "simplify_tasks.m"
        MR_Word check_hlds__simplify__simplify_tasks__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_tasks__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 81 "simplify_tasks.m"
        MR_Word check_hlds__simplify__simplify_tasks__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_tasks__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 81 "simplify_tasks.m"
        MR_Word check_hlds__simplify__simplify_tasks__V_30_30;
#line 81 "simplify_tasks.m"
        MR_Integer check_hlds__simplify__simplify_tasks__V_57_57 = (MR_Integer) check_hlds__simplify__simplify_tasks__V_4_4;
#line 81 "simplify_tasks.m"
        MR_Integer check_hlds__simplify__simplify_tasks__V_58_58 = (MR_Integer) check_hlds__simplify__simplify_tasks__V_17_17;

#line 81 "simplify_tasks.m"
        {
#line 81 "simplify_tasks.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__simplify__simplify_tasks__V_30_30, check_hlds__simplify__simplify_tasks__V_57_57, check_hlds__simplify__simplify_tasks__V_58_58);
        }
#line 845 "check_hlds.simplify.simplify_tasks.c"
        check_hlds__simplify__simplify_tasks__succeeded = (check_hlds__simplify__simplify_tasks__V_30_30 == (MR_Integer) 0);
#line 81 "simplify_tasks.m"
        check_hlds__simplify__simplify_tasks__succeeded = !(check_hlds__simplify__simplify_tasks__succeeded);
#line 81 "simplify_tasks.m"
        if (check_hlds__simplify__simplify_tasks__succeeded)
#line 81 "simplify_tasks.m"
          *check_hlds__simplify__simplify_tasks__HeadVar__1_1 = check_hlds__simplify__simplify_tasks__V_30_30;
#line 81 "simplify_tasks.m"
        else
#line 81 "simplify_tasks.m"
          {
#line 81 "simplify_tasks.m"
            MR_Word check_hlds__simplify__simplify_tasks__V_31_31;
#line 81 "simplify_tasks.m"
            MR_Integer check_hlds__simplify__simplify_tasks__V_59_59 = (MR_Integer) check_hlds__simplify__simplify_tasks__V_5_5;
#line 81 "simplify_tasks.m"
            MR_Integer check_hlds__simplify__simplify_tasks__V_60_60 = (MR_Integer) check_hlds__simplify__simplify_tasks__V_18_18;

#line 81 "simplify_tasks.m"
            {
#line 81 "simplify_tasks.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__simplify__simplify_tasks__V_31_31, check_hlds__simplify__simplify_tasks__V_59_59, check_hlds__simplify__simplify_tasks__V_60_60);
            }
#line 869 "check_hlds.simplify.simplify_tasks.c"
            check_hlds__simplify__simplify_tasks__succeeded = (check_hlds__simplify__simplify_tasks__V_31_31 == (MR_Integer) 0);
#line 81 "simplify_tasks.m"
            check_hlds__simplify__simplify_tasks__succeeded = !(check_hlds__simplify__simplify_tasks__succeeded);
#line 81 "simplify_tasks.m"
            if (check_hlds__simplify__simplify_tasks__succeeded)
#line 81 "simplify_tasks.m"
              *check_hlds__simplify__simplify_tasks__HeadVar__1_1 = check_hlds__simplify__simplify_tasks__V_31_31;
#line 81 "simplify_tasks.m"
            else
#line 81 "simplify_tasks.m"
              {
#line 81 "simplify_tasks.m"
                MR_Word check_hlds__simplify__simplify_tasks__V_32_32;
#line 81 "simplify_tasks.m"
                MR_Integer check_hlds__simplify__simplify_tasks__V_61_61 = (MR_Integer) check_hlds__simplify__simplify_tasks__V_6_6;
#line 81 "simplify_tasks.m"
                MR_Integer check_hlds__simplify__simplify_tasks__V_62_62 = (MR_Integer) check_hlds__simplify__simplify_tasks__V_19_19;

#line 81 "simplify_tasks.m"
                {
#line 81 "simplify_tasks.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__simplify__simplify_tasks__V_32_32, check_hlds__simplify__simplify_tasks__V_61_61, check_hlds__simplify__simplify_tasks__V_62_62);
                }
#line 893 "check_hlds.simplify.simplify_tasks.c"
                check_hlds__simplify__simplify_tasks__succeeded = (check_hlds__simplify__simplify_tasks__V_32_32 == (MR_Integer) 0);
#line 81 "simplify_tasks.m"
                check_hlds__simplify__simplify_tasks__succeeded = !(check_hlds__simplify__simplify_tasks__succeeded);
#line 81 "simplify_tasks.m"
                if (check_hlds__simplify__simplify_tasks__succeeded)
#line 81 "simplify_tasks.m"
                  *check_hlds__simplify__simplify_tasks__HeadVar__1_1 = check_hlds__simplify__simplify_tasks__V_32_32;
#line 81 "simplify_tasks.m"
                else
#line 81 "simplify_tasks.m"
                  {
#line 81 "simplify_tasks.m"
                    MR_Word check_hlds__simplify__simplify_tasks__V_33_33;
#line 81 "simplify_tasks.m"
                    MR_Integer check_hlds__simplify__simplify_tasks__V_63_63 = (MR_Integer) check_hlds__simplify__simplify_tasks__V_7_7;
#line 81 "simplify_tasks.m"
                    MR_Integer check_hlds__simplify__simplify_tasks__V_64_64 = (MR_Integer) check_hlds__simplify__simplify_tasks__V_20_20;

#line 81 "simplify_tasks.m"
                    {
#line 81 "simplify_tasks.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__simplify__simplify_tasks__V_33_33, check_hlds__simplify__simplify_tasks__V_63_63, check_hlds__simplify__simplify_tasks__V_64_64);
                    }
#line 917 "check_hlds.simplify.simplify_tasks.c"
                    check_hlds__simplify__simplify_tasks__succeeded = (check_hlds__simplify__simplify_tasks__V_33_33 == (MR_Integer) 0);
#line 81 "simplify_tasks.m"
                    check_hlds__simplify__simplify_tasks__succeeded = !(check_hlds__simplify__simplify_tasks__succeeded);
#line 81 "simplify_tasks.m"
                    if (check_hlds__simplify__simplify_tasks__succeeded)
#line 81 "simplify_tasks.m"
                      *check_hlds__simplify__simplify_tasks__HeadVar__1_1 = check_hlds__simplify__simplify_tasks__V_33_33;
#line 81 "simplify_tasks.m"
                    else
#line 81 "simplify_tasks.m"
                      {
#line 81 "simplify_tasks.m"
                        MR_Word check_hlds__simplify__simplify_tasks__V_34_34;
#line 81 "simplify_tasks.m"
                        MR_Integer check_hlds__simplify__simplify_tasks__V_65_65 = (MR_Integer) check_hlds__simplify__simplify_tasks__V_8_8;
#line 81 "simplify_tasks.m"
                        MR_Integer check_hlds__simplify__simplify_tasks__V_66_66 = (MR_Integer) check_hlds__simplify__simplify_tasks__V_21_21;

#line 81 "simplify_tasks.m"
                        {
#line 81 "simplify_tasks.m"
                          mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__simplify__simplify_tasks__V_34_34, check_hlds__simplify__simplify_tasks__V_65_65, check_hlds__simplify__simplify_tasks__V_66_66);
                        }
#line 941 "check_hlds.simplify.simplify_tasks.c"
                        check_hlds__simplify__simplify_tasks__succeeded = (check_hlds__simplify__simplify_tasks__V_34_34 == (MR_Integer) 0);
#line 81 "simplify_tasks.m"
                        check_hlds__simplify__simplify_tasks__succeeded = !(check_hlds__simplify__simplify_tasks__succeeded);
#line 81 "simplify_tasks.m"
                        if (check_hlds__simplify__simplify_tasks__succeeded)
#line 81 "simplify_tasks.m"
                          *check_hlds__simplify__simplify_tasks__HeadVar__1_1 = check_hlds__simplify__simplify_tasks__V_34_34;
#line 81 "simplify_tasks.m"
                        else
#line 81 "simplify_tasks.m"
                          {
#line 81 "simplify_tasks.m"
                            MR_Word check_hlds__simplify__simplify_tasks__V_35_35;
#line 81 "simplify_tasks.m"
                            MR_Integer check_hlds__simplify__simplify_tasks__V_67_67 = (MR_Integer) check_hlds__simplify__simplify_tasks__V_9_9;
#line 81 "simplify_tasks.m"
                            MR_Integer check_hlds__simplify__simplify_tasks__V_68_68 = (MR_Integer) check_hlds__simplify__simplify_tasks__V_22_22;

#line 81 "simplify_tasks.m"
                            {
#line 81 "simplify_tasks.m"
                              mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__simplify__simplify_tasks__V_35_35, check_hlds__simplify__simplify_tasks__V_67_67, check_hlds__simplify__simplify_tasks__V_68_68);
                            }
#line 965 "check_hlds.simplify.simplify_tasks.c"
                            check_hlds__simplify__simplify_tasks__succeeded = (check_hlds__simplify__simplify_tasks__V_35_35 == (MR_Integer) 0);
#line 81 "simplify_tasks.m"
                            check_hlds__simplify__simplify_tasks__succeeded = !(check_hlds__simplify__simplify_tasks__succeeded);
#line 81 "simplify_tasks.m"
                            if (check_hlds__simplify__simplify_tasks__succeeded)
#line 81 "simplify_tasks.m"
                              *check_hlds__simplify__simplify_tasks__HeadVar__1_1 = check_hlds__simplify__simplify_tasks__V_35_35;
#line 81 "simplify_tasks.m"
                            else
#line 81 "simplify_tasks.m"
                              {
#line 81 "simplify_tasks.m"
                                MR_Word check_hlds__simplify__simplify_tasks__V_36_36;
#line 81 "simplify_tasks.m"
                                MR_Integer check_hlds__simplify__simplify_tasks__V_69_69 = (MR_Integer) check_hlds__simplify__simplify_tasks__V_10_10;
#line 81 "simplify_tasks.m"
                                MR_Integer check_hlds__simplify__simplify_tasks__V_70_70 = (MR_Integer) check_hlds__simplify__simplify_tasks__V_23_23;

#line 81 "simplify_tasks.m"
                                {
#line 81 "simplify_tasks.m"
                                  mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__simplify__simplify_tasks__V_36_36, check_hlds__simplify__simplify_tasks__V_69_69, check_hlds__simplify__simplify_tasks__V_70_70);
                                }
#line 989 "check_hlds.simplify.simplify_tasks.c"
                                check_hlds__simplify__simplify_tasks__succeeded = (check_hlds__simplify__simplify_tasks__V_36_36 == (MR_Integer) 0);
#line 81 "simplify_tasks.m"
                                check_hlds__simplify__simplify_tasks__succeeded = !(check_hlds__simplify__simplify_tasks__succeeded);
#line 81 "simplify_tasks.m"
                                if (check_hlds__simplify__simplify_tasks__succeeded)
#line 81 "simplify_tasks.m"
                                  *check_hlds__simplify__simplify_tasks__HeadVar__1_1 = check_hlds__simplify__simplify_tasks__V_36_36;
#line 81 "simplify_tasks.m"
                                else
#line 81 "simplify_tasks.m"
                                  {
#line 81 "simplify_tasks.m"
                                    MR_Word check_hlds__simplify__simplify_tasks__V_37_37;
#line 81 "simplify_tasks.m"
                                    MR_Integer check_hlds__simplify__simplify_tasks__V_71_71 = (MR_Integer) check_hlds__simplify__simplify_tasks__V_11_11;
#line 81 "simplify_tasks.m"
                                    MR_Integer check_hlds__simplify__simplify_tasks__V_72_72 = (MR_Integer) check_hlds__simplify__simplify_tasks__V_24_24;

#line 81 "simplify_tasks.m"
                                    {
#line 81 "simplify_tasks.m"
                                      mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__simplify__simplify_tasks__V_37_37, check_hlds__simplify__simplify_tasks__V_71_71, check_hlds__simplify__simplify_tasks__V_72_72);
                                    }
#line 1013 "check_hlds.simplify.simplify_tasks.c"
                                    check_hlds__simplify__simplify_tasks__succeeded = (check_hlds__simplify__simplify_tasks__V_37_37 == (MR_Integer) 0);
#line 81 "simplify_tasks.m"
                                    check_hlds__simplify__simplify_tasks__succeeded = !(check_hlds__simplify__simplify_tasks__succeeded);
#line 81 "simplify_tasks.m"
                                    if (check_hlds__simplify__simplify_tasks__succeeded)
#line 81 "simplify_tasks.m"
                                      *check_hlds__simplify__simplify_tasks__HeadVar__1_1 = check_hlds__simplify__simplify_tasks__V_37_37;
#line 81 "simplify_tasks.m"
                                    else
#line 81 "simplify_tasks.m"
                                      {
#line 81 "simplify_tasks.m"
                                        MR_Word check_hlds__simplify__simplify_tasks__V_38_38;
#line 81 "simplify_tasks.m"
                                        MR_Integer check_hlds__simplify__simplify_tasks__V_73_73 = (MR_Integer) check_hlds__simplify__simplify_tasks__V_12_12;
#line 81 "simplify_tasks.m"
                                        MR_Integer check_hlds__simplify__simplify_tasks__V_74_74 = (MR_Integer) check_hlds__simplify__simplify_tasks__V_25_25;

#line 81 "simplify_tasks.m"
                                        {
#line 81 "simplify_tasks.m"
                                          mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__simplify__simplify_tasks__V_38_38, check_hlds__simplify__simplify_tasks__V_73_73, check_hlds__simplify__simplify_tasks__V_74_74);
                                        }
#line 1037 "check_hlds.simplify.simplify_tasks.c"
                                        check_hlds__simplify__simplify_tasks__succeeded = (check_hlds__simplify__simplify_tasks__V_38_38 == (MR_Integer) 0);
#line 81 "simplify_tasks.m"
                                        check_hlds__simplify__simplify_tasks__succeeded = !(check_hlds__simplify__simplify_tasks__succeeded);
#line 81 "simplify_tasks.m"
                                        if (check_hlds__simplify__simplify_tasks__succeeded)
#line 81 "simplify_tasks.m"
                                          *check_hlds__simplify__simplify_tasks__HeadVar__1_1 = check_hlds__simplify__simplify_tasks__V_38_38;
#line 81 "simplify_tasks.m"
                                        else
#line 81 "simplify_tasks.m"
                                          {
#line 81 "simplify_tasks.m"
                                            MR_Word check_hlds__simplify__simplify_tasks__V_39_39;
#line 81 "simplify_tasks.m"
                                            MR_Integer check_hlds__simplify__simplify_tasks__V_75_75 = (MR_Integer) check_hlds__simplify__simplify_tasks__V_13_13;
#line 81 "simplify_tasks.m"
                                            MR_Integer check_hlds__simplify__simplify_tasks__V_76_76 = (MR_Integer) check_hlds__simplify__simplify_tasks__V_26_26;

#line 81 "simplify_tasks.m"
                                            {
#line 81 "simplify_tasks.m"
                                              mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__simplify__simplify_tasks__V_39_39, check_hlds__simplify__simplify_tasks__V_75_75, check_hlds__simplify__simplify_tasks__V_76_76);
                                            }
#line 1061 "check_hlds.simplify.simplify_tasks.c"
                                            check_hlds__simplify__simplify_tasks__succeeded = (check_hlds__simplify__simplify_tasks__V_39_39 == (MR_Integer) 0);
#line 81 "simplify_tasks.m"
                                            check_hlds__simplify__simplify_tasks__succeeded = !(check_hlds__simplify__simplify_tasks__succeeded);
#line 81 "simplify_tasks.m"
                                            if (check_hlds__simplify__simplify_tasks__succeeded)
#line 81 "simplify_tasks.m"
                                              *check_hlds__simplify__simplify_tasks__HeadVar__1_1 = check_hlds__simplify__simplify_tasks__V_39_39;
#line 81 "simplify_tasks.m"
                                            else
#line 81 "simplify_tasks.m"
                                              {
#line 81 "simplify_tasks.m"
                                                MR_Word check_hlds__simplify__simplify_tasks__V_40_40;
#line 81 "simplify_tasks.m"
                                                MR_Integer check_hlds__simplify__simplify_tasks__V_77_77 = (MR_Integer) check_hlds__simplify__simplify_tasks__V_14_14;
#line 81 "simplify_tasks.m"
                                                MR_Integer check_hlds__simplify__simplify_tasks__V_78_78 = (MR_Integer) check_hlds__simplify__simplify_tasks__V_27_27;

#line 81 "simplify_tasks.m"
                                                {
#line 81 "simplify_tasks.m"
                                                  mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__simplify__simplify_tasks__V_40_40, check_hlds__simplify__simplify_tasks__V_77_77, check_hlds__simplify__simplify_tasks__V_78_78);
                                                }
#line 1085 "check_hlds.simplify.simplify_tasks.c"
                                                check_hlds__simplify__simplify_tasks__succeeded = (check_hlds__simplify__simplify_tasks__V_40_40 == (MR_Integer) 0);
#line 81 "simplify_tasks.m"
                                                check_hlds__simplify__simplify_tasks__succeeded = !(check_hlds__simplify__simplify_tasks__succeeded);
#line 81 "simplify_tasks.m"
                                                if (check_hlds__simplify__simplify_tasks__succeeded)
#line 81 "simplify_tasks.m"
                                                  *check_hlds__simplify__simplify_tasks__HeadVar__1_1 = check_hlds__simplify__simplify_tasks__V_40_40;
#line 81 "simplify_tasks.m"
                                                else
#line 81 "simplify_tasks.m"
                                                  {
#line 81 "simplify_tasks.m"
                                                    MR_Word check_hlds__simplify__simplify_tasks__V_41_41;
#line 81 "simplify_tasks.m"
                                                    MR_Integer check_hlds__simplify__simplify_tasks__V_79_79 = (MR_Integer) check_hlds__simplify__simplify_tasks__V_15_15;
#line 81 "simplify_tasks.m"
                                                    MR_Integer check_hlds__simplify__simplify_tasks__V_80_80 = (MR_Integer) check_hlds__simplify__simplify_tasks__V_28_28;

#line 81 "simplify_tasks.m"
                                                    {
#line 81 "simplify_tasks.m"
                                                      mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__simplify__simplify_tasks__V_41_41, check_hlds__simplify__simplify_tasks__V_79_79, check_hlds__simplify__simplify_tasks__V_80_80);
                                                    }
#line 1109 "check_hlds.simplify.simplify_tasks.c"
                                                    check_hlds__simplify__simplify_tasks__succeeded = (check_hlds__simplify__simplify_tasks__V_41_41 == (MR_Integer) 0);
#line 81 "simplify_tasks.m"
                                                    check_hlds__simplify__simplify_tasks__succeeded = !(check_hlds__simplify__simplify_tasks__succeeded);
#line 81 "simplify_tasks.m"
                                                    if (check_hlds__simplify__simplify_tasks__succeeded)
#line 81 "simplify_tasks.m"
                                                      *check_hlds__simplify__simplify_tasks__HeadVar__1_1 = check_hlds__simplify__simplify_tasks__V_41_41;
#line 81 "simplify_tasks.m"
                                                    else
#line 81 "simplify_tasks.m"
                                                      {
#line 81 "simplify_tasks.m"
                                                        MR_Integer check_hlds__simplify__simplify_tasks__V_81_81 = (MR_Integer) check_hlds__simplify__simplify_tasks__V_16_16;
#line 81 "simplify_tasks.m"
                                                        MR_Integer check_hlds__simplify__simplify_tasks__V_82_82 = (MR_Integer) check_hlds__simplify__simplify_tasks__V_29_29;

#line 81 "simplify_tasks.m"
                                                        {
#line 81 "simplify_tasks.m"
                                                          mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__simplify__simplify_tasks__HeadVar__1_1, check_hlds__simplify__simplify_tasks__V_81_81, check_hlds__simplify__simplify_tasks__V_82_82);
#line 81 "simplify_tasks.m"
                                                          return;
                                                        }
#line 81 "simplify_tasks.m"
                                                      }
#line 81 "simplify_tasks.m"
                                                  }
#line 81 "simplify_tasks.m"
                                              }
#line 81 "simplify_tasks.m"
                                          }
#line 81 "simplify_tasks.m"
                                      }
#line 81 "simplify_tasks.m"
                                  }
#line 81 "simplify_tasks.m"
                              }
#line 81 "simplify_tasks.m"
                          }
#line 81 "simplify_tasks.m"
                      }
#line 81 "simplify_tasks.m"
                  }
#line 81 "simplify_tasks.m"
              }
#line 81 "simplify_tasks.m"
          }
#line 81 "simplify_tasks.m"
      }
#line 81 "simplify_tasks.m"
  }
#line 81 "simplify_tasks.m"
}

#line 81 "simplify_tasks.m"
MR_bool MR_CALL 
check_hlds__simplify__simplify_tasks____Unify____simplify_tasks_0_0(
#line 81 "simplify_tasks.m"
  MR_Word check_hlds__simplify__simplify_tasks__HeadVar__1_1,
#line 81 "simplify_tasks.m"
  MR_Word check_hlds__simplify__simplify_tasks__HeadVar__2_2)
#line 81 "simplify_tasks.m"
{
#line 81 "simplify_tasks.m"
  {
#line 81 "simplify_tasks.m"
    MR_bool check_hlds__simplify__simplify_tasks__succeeded;
#line 81 "simplify_tasks.m"
    MR_Integer check_hlds__simplify__simplify_tasks__CastX_29 = (MR_Integer) check_hlds__simplify__simplify_tasks__HeadVar__1_1;
#line 81 "simplify_tasks.m"
    MR_Integer check_hlds__simplify__simplify_tasks__CastY_30 = (MR_Integer) check_hlds__simplify__simplify_tasks__HeadVar__2_2;

#line 81 "simplify_tasks.m"
    check_hlds__simplify__simplify_tasks__succeeded = (check_hlds__simplify__simplify_tasks__CastX_29 == check_hlds__simplify__simplify_tasks__CastY_30);
#line 81 "simplify_tasks.m"
    if (check_hlds__simplify__simplify_tasks__succeeded)
#line 81 "simplify_tasks.m"
      check_hlds__simplify__simplify_tasks__succeeded = MR_TRUE;
#line 81 "simplify_tasks.m"
    else
#line 81 "simplify_tasks.m"
      {
#line 81 "simplify_tasks.m"
        MR_Word check_hlds__simplify__simplify_tasks__V_3_3 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_tasks__HeadVar__1_1, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 81 "simplify_tasks.m"
        MR_Word check_hlds__simplify__simplify_tasks__V_4_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_tasks__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 81 "simplify_tasks.m"
        MR_Word check_hlds__simplify__simplify_tasks__V_5_5 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_tasks__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 81 "simplify_tasks.m"
        MR_Word check_hlds__simplify__simplify_tasks__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_tasks__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 81 "simplify_tasks.m"
        MR_Word check_hlds__simplify__simplify_tasks__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_tasks__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 81 "simplify_tasks.m"
        MR_Word check_hlds__simplify__simplify_tasks__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_tasks__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 81 "simplify_tasks.m"
        MR_Word check_hlds__simplify__simplify_tasks__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_tasks__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 81 "simplify_tasks.m"
        MR_Word check_hlds__simplify__simplify_tasks__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_tasks__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 81 "simplify_tasks.m"
        MR_Word check_hlds__simplify__simplify_tasks__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_tasks__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 81 "simplify_tasks.m"
        MR_Word check_hlds__simplify__simplify_tasks__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_tasks__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 81 "simplify_tasks.m"
        MR_Word check_hlds__simplify__simplify_tasks__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_tasks__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 81 "simplify_tasks.m"
        MR_Word check_hlds__simplify__simplify_tasks__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_tasks__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 81 "simplify_tasks.m"
        MR_Word check_hlds__simplify__simplify_tasks__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_tasks__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 81 "simplify_tasks.m"
        MR_Word check_hlds__simplify__simplify_tasks__V_16_16 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_tasks__HeadVar__2_2, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 81 "simplify_tasks.m"
        MR_Word check_hlds__simplify__simplify_tasks__V_17_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_tasks__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 81 "simplify_tasks.m"
        MR_Word check_hlds__simplify__simplify_tasks__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_tasks__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 81 "simplify_tasks.m"
        MR_Word check_hlds__simplify__simplify_tasks__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_tasks__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 81 "simplify_tasks.m"
        MR_Word check_hlds__simplify__simplify_tasks__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_tasks__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 81 "simplify_tasks.m"
        MR_Word check_hlds__simplify__simplify_tasks__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_tasks__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 81 "simplify_tasks.m"
        MR_Word check_hlds__simplify__simplify_tasks__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_tasks__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 81 "simplify_tasks.m"
        MR_Word check_hlds__simplify__simplify_tasks__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_tasks__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 81 "simplify_tasks.m"
        MR_Word check_hlds__simplify__simplify_tasks__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_tasks__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 81 "simplify_tasks.m"
        MR_Word check_hlds__simplify__simplify_tasks__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_tasks__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 81 "simplify_tasks.m"
        MR_Word check_hlds__simplify__simplify_tasks__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_tasks__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 81 "simplify_tasks.m"
        MR_Word check_hlds__simplify__simplify_tasks__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_tasks__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 81 "simplify_tasks.m"
        MR_Word check_hlds__simplify__simplify_tasks__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_tasks__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 12)) & (MR_Integer) 1);

#line 1245 "check_hlds.simplify.simplify_tasks.c"
        check_hlds__simplify__simplify_tasks__succeeded = (check_hlds__simplify__simplify_tasks__V_3_3 == check_hlds__simplify__simplify_tasks__V_16_16);
#line 81 "simplify_tasks.m"
        if (check_hlds__simplify__simplify_tasks__succeeded)
#line 81 "simplify_tasks.m"
          {
#line 1251 "check_hlds.simplify.simplify_tasks.c"
            check_hlds__simplify__simplify_tasks__succeeded = (check_hlds__simplify__simplify_tasks__V_4_4 == check_hlds__simplify__simplify_tasks__V_17_17);
#line 81 "simplify_tasks.m"
            if (check_hlds__simplify__simplify_tasks__succeeded)
#line 81 "simplify_tasks.m"
              {
#line 1257 "check_hlds.simplify.simplify_tasks.c"
                check_hlds__simplify__simplify_tasks__succeeded = (check_hlds__simplify__simplify_tasks__V_5_5 == check_hlds__simplify__simplify_tasks__V_18_18);
#line 81 "simplify_tasks.m"
                if (check_hlds__simplify__simplify_tasks__succeeded)
#line 81 "simplify_tasks.m"
                  {
#line 1263 "check_hlds.simplify.simplify_tasks.c"
                    check_hlds__simplify__simplify_tasks__succeeded = (check_hlds__simplify__simplify_tasks__V_6_6 == check_hlds__simplify__simplify_tasks__V_19_19);
#line 81 "simplify_tasks.m"
                    if (check_hlds__simplify__simplify_tasks__succeeded)
#line 81 "simplify_tasks.m"
                      {
#line 1269 "check_hlds.simplify.simplify_tasks.c"
                        check_hlds__simplify__simplify_tasks__succeeded = (check_hlds__simplify__simplify_tasks__V_7_7 == check_hlds__simplify__simplify_tasks__V_20_20);
#line 81 "simplify_tasks.m"
                        if (check_hlds__simplify__simplify_tasks__succeeded)
#line 81 "simplify_tasks.m"
                          {
#line 1275 "check_hlds.simplify.simplify_tasks.c"
                            check_hlds__simplify__simplify_tasks__succeeded = (check_hlds__simplify__simplify_tasks__V_8_8 == check_hlds__simplify__simplify_tasks__V_21_21);
#line 81 "simplify_tasks.m"
                            if (check_hlds__simplify__simplify_tasks__succeeded)
#line 81 "simplify_tasks.m"
                              {
#line 1281 "check_hlds.simplify.simplify_tasks.c"
                                check_hlds__simplify__simplify_tasks__succeeded = (check_hlds__simplify__simplify_tasks__V_9_9 == check_hlds__simplify__simplify_tasks__V_22_22);
#line 81 "simplify_tasks.m"
                                if (check_hlds__simplify__simplify_tasks__succeeded)
#line 81 "simplify_tasks.m"
                                  {
#line 1287 "check_hlds.simplify.simplify_tasks.c"
                                    check_hlds__simplify__simplify_tasks__succeeded = (check_hlds__simplify__simplify_tasks__V_10_10 == check_hlds__simplify__simplify_tasks__V_23_23);
#line 81 "simplify_tasks.m"
                                    if (check_hlds__simplify__simplify_tasks__succeeded)
#line 81 "simplify_tasks.m"
                                      {
#line 1293 "check_hlds.simplify.simplify_tasks.c"
                                        check_hlds__simplify__simplify_tasks__succeeded = (check_hlds__simplify__simplify_tasks__V_11_11 == check_hlds__simplify__simplify_tasks__V_24_24);
#line 81 "simplify_tasks.m"
                                        if (check_hlds__simplify__simplify_tasks__succeeded)
#line 81 "simplify_tasks.m"
                                          {
#line 1299 "check_hlds.simplify.simplify_tasks.c"
                                            check_hlds__simplify__simplify_tasks__succeeded = (check_hlds__simplify__simplify_tasks__V_12_12 == check_hlds__simplify__simplify_tasks__V_25_25);
#line 81 "simplify_tasks.m"
                                            if (check_hlds__simplify__simplify_tasks__succeeded)
#line 81 "simplify_tasks.m"
                                              {
#line 1305 "check_hlds.simplify.simplify_tasks.c"
                                                check_hlds__simplify__simplify_tasks__succeeded = (check_hlds__simplify__simplify_tasks__V_13_13 == check_hlds__simplify__simplify_tasks__V_26_26);
#line 81 "simplify_tasks.m"
                                                if (check_hlds__simplify__simplify_tasks__succeeded)
#line 81 "simplify_tasks.m"
                                                  {
#line 1311 "check_hlds.simplify.simplify_tasks.c"
                                                    check_hlds__simplify__simplify_tasks__succeeded = (check_hlds__simplify__simplify_tasks__V_14_14 == check_hlds__simplify__simplify_tasks__V_27_27);
#line 81 "simplify_tasks.m"
                                                    if (check_hlds__simplify__simplify_tasks__succeeded)
#line 1315 "check_hlds.simplify.simplify_tasks.c"
                                                      check_hlds__simplify__simplify_tasks__succeeded = (check_hlds__simplify__simplify_tasks__V_15_15 == check_hlds__simplify__simplify_tasks__V_28_28);
#line 81 "simplify_tasks.m"
                                                  }
#line 81 "simplify_tasks.m"
                                              }
#line 81 "simplify_tasks.m"
                                          }
#line 81 "simplify_tasks.m"
                                      }
#line 81 "simplify_tasks.m"
                                  }
#line 81 "simplify_tasks.m"
                              }
#line 81 "simplify_tasks.m"
                          }
#line 81 "simplify_tasks.m"
                      }
#line 81 "simplify_tasks.m"
                  }
#line 81 "simplify_tasks.m"
              }
#line 81 "simplify_tasks.m"
          }
#line 81 "simplify_tasks.m"
      }
#line 81 "simplify_tasks.m"
    return check_hlds__simplify__simplify_tasks__succeeded;
#line 81 "simplify_tasks.m"
  }
#line 81 "simplify_tasks.m"
}

#line 27 "simplify_tasks.m"
void MR_CALL 
check_hlds__simplify__simplify_tasks____Compare____simplify_task_0_0(
#line 27 "simplify_tasks.m"
  MR_Word * check_hlds__simplify__simplify_tasks__HeadVar__1_1,
#line 27 "simplify_tasks.m"
  MR_Word check_hlds__simplify__simplify_tasks__HeadVar__2_2,
#line 27 "simplify_tasks.m"
  MR_Word check_hlds__simplify__simplify_tasks__HeadVar__3_3)
#line 27 "simplify_tasks.m"
{
#line 27 "simplify_tasks.m"
  {
#line 27 "simplify_tasks.m"
    MR_bool check_hlds__simplify__simplify_tasks__succeeded;
#line 27 "simplify_tasks.m"
    MR_Integer check_hlds__simplify__simplify_tasks__Cast_HeadVar1_4 = (MR_Integer) check_hlds__simplify__simplify_tasks__HeadVar__2_2;
#line 27 "simplify_tasks.m"
    MR_Integer check_hlds__simplify__simplify_tasks__Cast_HeadVar2_5 = (MR_Integer) check_hlds__simplify__simplify_tasks__HeadVar__3_3;

#line 27 "simplify_tasks.m"
    {
#line 27 "simplify_tasks.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__simplify__simplify_tasks__HeadVar__1_1, check_hlds__simplify__simplify_tasks__Cast_HeadVar1_4, check_hlds__simplify__simplify_tasks__Cast_HeadVar2_5);
#line 27 "simplify_tasks.m"
      return;
    }
#line 27 "simplify_tasks.m"
  }
#line 27 "simplify_tasks.m"
}

#line 27 "simplify_tasks.m"
MR_bool MR_CALL 
check_hlds__simplify__simplify_tasks____Unify____simplify_task_0_0(
#line 27 "simplify_tasks.m"
  MR_Word check_hlds__simplify__simplify_tasks__HeadVar__2_1,
#line 27 "simplify_tasks.m"
  MR_Word check_hlds__simplify__simplify_tasks__HeadVar__2_2)
#line 27 "simplify_tasks.m"
{
#line 1389 "check_hlds.simplify.simplify_tasks.c"
  {
#line 1391 "check_hlds.simplify.simplify_tasks.c"
    MR_bool check_hlds__simplify__simplify_tasks__succeeded = (check_hlds__simplify__simplify_tasks__HeadVar__2_1 == check_hlds__simplify__simplify_tasks__HeadVar__2_2);

#line 1394 "check_hlds.simplify.simplify_tasks.c"
    return check_hlds__simplify__simplify_tasks__succeeded;
#line 1396 "check_hlds.simplify.simplify_tasks.c"
  }
#line 27 "simplify_tasks.m"
}

#line 105 "simplify_tasks.m"
void MR_CALL 
check_hlds__simplify__simplify_tasks__find_simplify_tasks_3_p_0(
#line 105 "simplify_tasks.m"
  MR_Word check_hlds__simplify__simplify_tasks__WarnThisPass_4,
#line 105 "simplify_tasks.m"
  MR_Word check_hlds__simplify__simplify_tasks__Globals_5,
#line 105 "simplify_tasks.m"
  MR_Word * check_hlds__simplify__simplify_tasks__SimplifyTasks_6)
#line 105 "simplify_tasks.m"
{
#line 152 "simplify_tasks.m"
  {
#line 152 "simplify_tasks.m"
    MR_bool check_hlds__simplify__simplify_tasks__succeeded;
#line 152 "simplify_tasks.m"
    MR_Word check_hlds__simplify__simplify_tasks__WarnSimple_7;
#line 152 "simplify_tasks.m"
    MR_Word check_hlds__simplify__simplify_tasks__WarnDupCalls_8;
#line 152 "simplify_tasks.m"
    MR_Word check_hlds__simplify__simplify_tasks__WarnKnownBadFormat_9;
#line 152 "simplify_tasks.m"
    MR_Word check_hlds__simplify__simplify_tasks__WarnUnknownFormat_10;
#line 152 "simplify_tasks.m"
    MR_Word check_hlds__simplify__simplify_tasks__OptFormatCalls_11;
#line 152 "simplify_tasks.m"
    MR_Word check_hlds__simplify__simplify_tasks__DoFormatCalls_12;
#line 152 "simplify_tasks.m"
    MR_Word check_hlds__simplify__simplify_tasks__WarnObsolete_13;
#line 152 "simplify_tasks.m"
    MR_Word check_hlds__simplify__simplify_tasks__ExcessAssign_14;
#line 152 "simplify_tasks.m"
    MR_Word check_hlds__simplify__simplify_tasks__CommonStruct_15;
#line 152 "simplify_tasks.m"
    MR_Word check_hlds__simplify__simplify_tasks__OptDuplicateCalls_16;
#line 152 "simplify_tasks.m"
    MR_Word check_hlds__simplify__simplify_tasks__ConstantProp_17;
#line 152 "simplify_tasks.m"
    MR_Word check_hlds__simplify__simplify_tasks__RemoveParConjunctions_22;
#line 152 "simplify_tasks.m"
    MR_Word check_hlds__simplify__simplify_tasks__V_34_34;
#line 152 "simplify_tasks.m"
    MR_Word check_hlds__simplify__simplify_tasks__V_35_35;
#line 152 "simplify_tasks.m"
    MR_Word check_hlds__simplify__simplify_tasks__V_36_36;

#line 153 "simplify_tasks.m"
    {
#line 153 "simplify_tasks.m"
      libs__globals__lookup_bool_option_3_p_0(check_hlds__simplify__simplify_tasks__Globals_5, (MR_Integer) 19, &check_hlds__simplify__simplify_tasks__WarnSimple_7);
    }
#line 154 "simplify_tasks.m"
    {
#line 154 "simplify_tasks.m"
      libs__globals__lookup_bool_option_3_p_0(check_hlds__simplify__simplify_tasks__Globals_5, (MR_Integer) 20, &check_hlds__simplify__simplify_tasks__WarnDupCalls_8);
    }
#line 155 "simplify_tasks.m"
    {
#line 155 "simplify_tasks.m"
      libs__globals__lookup_bool_option_3_p_0(check_hlds__simplify__simplify_tasks__Globals_5, (MR_Integer) 32, &check_hlds__simplify__simplify_tasks__WarnKnownBadFormat_9);
    }
#line 157 "simplify_tasks.m"
    {
#line 157 "simplify_tasks.m"
      libs__globals__lookup_bool_option_3_p_0(check_hlds__simplify__simplify_tasks__Globals_5, (MR_Integer) 33, &check_hlds__simplify__simplify_tasks__WarnUnknownFormat_10);
    }
#line 159 "simplify_tasks.m"
    {
#line 159 "simplify_tasks.m"
      libs__globals__lookup_bool_option_3_p_0(check_hlds__simplify__simplify_tasks__Globals_5, (MR_Integer) 365, &check_hlds__simplify__simplify_tasks__OptFormatCalls_11);
    }
#line 163 "simplify_tasks.m"
    check_hlds__simplify__simplify_tasks__succeeded = (check_hlds__simplify__simplify_tasks__WarnThisPass_4 == (MR_Integer) 1);
#line 163 "simplify_tasks.m"
    if (check_hlds__simplify__simplify_tasks__succeeded)
#line 163 "simplify_tasks.m"
      {
#line 164 "simplify_tasks.m"
        check_hlds__simplify__simplify_tasks__succeeded = (check_hlds__simplify__simplify_tasks__WarnKnownBadFormat_9 == (MR_Integer) 1);
#line 164 "simplify_tasks.m"
        if (!(check_hlds__simplify__simplify_tasks__succeeded))
#line 164 "simplify_tasks.m"
          check_hlds__simplify__simplify_tasks__succeeded = (check_hlds__simplify__simplify_tasks__WarnUnknownFormat_10 == (MR_Integer) 1);
#line 163 "simplify_tasks.m"
      }
#line 165 "simplify_tasks.m"
    if (!(check_hlds__simplify__simplify_tasks__succeeded))
#line 166 "simplify_tasks.m"
      check_hlds__simplify__simplify_tasks__succeeded = (check_hlds__simplify__simplify_tasks__OptFormatCalls_11 == (MR_Integer) 1);
#line 170 "simplify_tasks.m"
    if (check_hlds__simplify__simplify_tasks__succeeded)
#line 169 "simplify_tasks.m"
      check_hlds__simplify__simplify_tasks__DoFormatCalls_12 = (MR_Integer) 1;
#line 170 "simplify_tasks.m"
    else
#line 171 "simplify_tasks.m"
      check_hlds__simplify__simplify_tasks__DoFormatCalls_12 = (MR_Integer) 0;
#line 173 "simplify_tasks.m"
    {
#line 173 "simplify_tasks.m"
      libs__globals__lookup_bool_option_3_p_0(check_hlds__simplify__simplify_tasks__Globals_5, (MR_Integer) 34, &check_hlds__simplify__simplify_tasks__WarnObsolete_13);
    }
#line 174 "simplify_tasks.m"
    {
#line 174 "simplify_tasks.m"
      libs__globals__lookup_bool_option_3_p_0(check_hlds__simplify__simplify_tasks__Globals_5, (MR_Integer) 364, &check_hlds__simplify__simplify_tasks__ExcessAssign_14);
    }
#line 175 "simplify_tasks.m"
    {
#line 175 "simplify_tasks.m"
      libs__globals__lookup_bool_option_3_p_0(check_hlds__simplify__simplify_tasks__Globals_5, (MR_Integer) 343, &check_hlds__simplify__simplify_tasks__CommonStruct_15);
    }
#line 176 "simplify_tasks.m"
    {
#line 176 "simplify_tasks.m"
      libs__globals__lookup_bool_option_3_p_0(check_hlds__simplify__simplify_tasks__Globals_5, (MR_Integer) 362, &check_hlds__simplify__simplify_tasks__OptDuplicateCalls_16);
    }
#line 178 "simplify_tasks.m"
    {
#line 178 "simplify_tasks.m"
      libs__globals__lookup_bool_option_3_p_0(check_hlds__simplify__simplify_tasks__Globals_5, (MR_Integer) 363, &check_hlds__simplify__simplify_tasks__ConstantProp_17);
    }
#line 183 "simplify_tasks.m"
    {
#line 183 "simplify_tasks.m"
      libs__globals__lookup_bool_option_3_p_0(check_hlds__simplify__simplify_tasks__Globals_5, (MR_Integer) 665, &check_hlds__simplify__simplify_tasks__RemoveParConjunctions_22);
    }
#line 187 "simplify_tasks.m"
    check_hlds__simplify__simplify_tasks__succeeded = (check_hlds__simplify__simplify_tasks__WarnSimple_7 == (MR_Integer) 1);
#line 187 "simplify_tasks.m"
    if (check_hlds__simplify__simplify_tasks__succeeded)
#line 187 "simplify_tasks.m"
      check_hlds__simplify__simplify_tasks__succeeded = (check_hlds__simplify__simplify_tasks__WarnThisPass_4 == (MR_Integer) 1);
#line 186 "simplify_tasks.m"
    if (check_hlds__simplify__simplify_tasks__succeeded)
#line 187 "simplify_tasks.m"
      check_hlds__simplify__simplify_tasks__V_34_34 = (MR_Integer) 1;
#line 186 "simplify_tasks.m"
    else
#line 187 "simplify_tasks.m"
      check_hlds__simplify__simplify_tasks__V_34_34 = (MR_Integer) 0;
#line 188 "simplify_tasks.m"
    check_hlds__simplify__simplify_tasks__succeeded = (check_hlds__simplify__simplify_tasks__WarnDupCalls_8 == (MR_Integer) 1);
#line 188 "simplify_tasks.m"
    if (check_hlds__simplify__simplify_tasks__succeeded)
#line 188 "simplify_tasks.m"
      check_hlds__simplify__simplify_tasks__succeeded = (check_hlds__simplify__simplify_tasks__WarnThisPass_4 == (MR_Integer) 1);
#line 186 "simplify_tasks.m"
    if (check_hlds__simplify__simplify_tasks__succeeded)
#line 188 "simplify_tasks.m"
      check_hlds__simplify__simplify_tasks__V_35_35 = (MR_Integer) 1;
#line 186 "simplify_tasks.m"
    else
#line 188 "simplify_tasks.m"
      check_hlds__simplify__simplify_tasks__V_35_35 = (MR_Integer) 0;
#line 190 "simplify_tasks.m"
    check_hlds__simplify__simplify_tasks__succeeded = (check_hlds__simplify__simplify_tasks__WarnObsolete_13 == (MR_Integer) 1);
#line 190 "simplify_tasks.m"
    if (check_hlds__simplify__simplify_tasks__succeeded)
#line 190 "simplify_tasks.m"
      check_hlds__simplify__simplify_tasks__succeeded = (check_hlds__simplify__simplify_tasks__WarnThisPass_4 == (MR_Integer) 1);
#line 186 "simplify_tasks.m"
    if (check_hlds__simplify__simplify_tasks__succeeded)
#line 190 "simplify_tasks.m"
      check_hlds__simplify__simplify_tasks__V_36_36 = (MR_Integer) 1;
#line 186 "simplify_tasks.m"
    else
#line 190 "simplify_tasks.m"
      check_hlds__simplify__simplify_tasks__V_36_36 = (MR_Integer) 0;
#line 186 "simplify_tasks.m"
    {
#line 186 "simplify_tasks.m"
      MR_Word base;
#line 186 "simplify_tasks.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 186 "simplify_tasks.m"
      *check_hlds__simplify__simplify_tasks__SimplifyTasks_6 = base;
#line 186 "simplify_tasks.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((check_hlds__simplify__simplify_tasks__V_34_34 | ((((check_hlds__simplify__simplify_tasks__V_35_35 << (MR_Integer) 1)) | ((((check_hlds__simplify__simplify_tasks__DoFormatCalls_12 << (MR_Integer) 2)) | ((((check_hlds__simplify__simplify_tasks__V_36_36 << (MR_Integer) 3)) | (((((MR_Integer) 0 << (MR_Integer) 4)) | (((((MR_Integer) 0 << (MR_Integer) 5)) | ((((check_hlds__simplify__simplify_tasks__ExcessAssign_14 << (MR_Integer) 6)) | (((((MR_Integer) 0 << (MR_Integer) 7)) | ((((check_hlds__simplify__simplify_tasks__OptDuplicateCalls_16 << (MR_Integer) 8)) | ((((check_hlds__simplify__simplify_tasks__ConstantProp_17 << (MR_Integer) 9)) | ((((check_hlds__simplify__simplify_tasks__CommonStruct_15 << (MR_Integer) 10)) | (((((MR_Integer) 0 << (MR_Integer) 11)) | ((check_hlds__simplify__simplify_tasks__RemoveParConjunctions_22 << (MR_Integer) 12)))))))))))))))))))))))))));
#line 186 "simplify_tasks.m"
    }
#line 152 "simplify_tasks.m"
  }
#line 105 "simplify_tasks.m"
}

#line 99 "simplify_tasks.m"
MR_Word MR_CALL 
check_hlds__simplify__simplify_tasks__list_to_simplify_tasks_1_f_0(
#line 99 "simplify_tasks.m"
  MR_Word check_hlds__simplify__simplify_tasks__List_3)
#line 99 "simplify_tasks.m"
{
#line 135 "simplify_tasks.m"
  {
#line 135 "simplify_tasks.m"
    MR_bool check_hlds__simplify__simplify_tasks__succeeded;
#line 135 "simplify_tasks.m"
    MR_Word check_hlds__simplify__simplify_tasks__HeadVar__2_2;
#line 135 "simplify_tasks.m"
    MR_Word check_hlds__simplify__simplify_tasks__V_4_4;
#line 135 "simplify_tasks.m"
    MR_Word check_hlds__simplify__simplify_tasks__V_6_6;
#line 135 "simplify_tasks.m"
    MR_Word check_hlds__simplify__simplify_tasks__V_8_8;
#line 135 "simplify_tasks.m"
    MR_Word check_hlds__simplify__simplify_tasks__V_10_10;
#line 135 "simplify_tasks.m"
    MR_Word check_hlds__simplify__simplify_tasks__V_12_12;
#line 135 "simplify_tasks.m"
    MR_Word check_hlds__simplify__simplify_tasks__V_14_14;
#line 135 "simplify_tasks.m"
    MR_Word check_hlds__simplify__simplify_tasks__V_16_16;
#line 135 "simplify_tasks.m"
    MR_Word check_hlds__simplify__simplify_tasks__V_18_18;
#line 135 "simplify_tasks.m"
    MR_Word check_hlds__simplify__simplify_tasks__V_20_20;
#line 135 "simplify_tasks.m"
    MR_Word check_hlds__simplify__simplify_tasks__V_22_22;
#line 135 "simplify_tasks.m"
    MR_Word check_hlds__simplify__simplify_tasks__V_24_24;
#line 135 "simplify_tasks.m"
    MR_Word check_hlds__simplify__simplify_tasks__V_26_26;
#line 135 "simplify_tasks.m"
    MR_Word check_hlds__simplify__simplify_tasks__V_28_28;

#line 137 "simplify_tasks.m"
    {
#line 137 "simplify_tasks.m"
      check_hlds__simplify__simplify_tasks__succeeded = mercury__list__member_2_p_0((MR_Word) &check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__type_ctor_info_simplify_task_0, ((MR_Box) ((MR_Integer) 0)), check_hlds__simplify__simplify_tasks__List_3);
    }
#line 136 "simplify_tasks.m"
    if (check_hlds__simplify__simplify_tasks__succeeded)
#line 137 "simplify_tasks.m"
      check_hlds__simplify__simplify_tasks__V_4_4 = (MR_Integer) 1;
#line 136 "simplify_tasks.m"
    else
#line 137 "simplify_tasks.m"
      check_hlds__simplify__simplify_tasks__V_4_4 = (MR_Integer) 0;
#line 138 "simplify_tasks.m"
    {
#line 138 "simplify_tasks.m"
      check_hlds__simplify__simplify_tasks__succeeded = mercury__list__member_2_p_0((MR_Word) &check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__type_ctor_info_simplify_task_0, ((MR_Box) ((MR_Integer) 1)), check_hlds__simplify__simplify_tasks__List_3);
    }
#line 136 "simplify_tasks.m"
    if (check_hlds__simplify__simplify_tasks__succeeded)
#line 138 "simplify_tasks.m"
      check_hlds__simplify__simplify_tasks__V_6_6 = (MR_Integer) 1;
#line 136 "simplify_tasks.m"
    else
#line 138 "simplify_tasks.m"
      check_hlds__simplify__simplify_tasks__V_6_6 = (MR_Integer) 0;
#line 139 "simplify_tasks.m"
    {
#line 139 "simplify_tasks.m"
      check_hlds__simplify__simplify_tasks__succeeded = mercury__list__member_2_p_0((MR_Word) &check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__type_ctor_info_simplify_task_0, ((MR_Box) ((MR_Integer) 2)), check_hlds__simplify__simplify_tasks__List_3);
    }
#line 136 "simplify_tasks.m"
    if (check_hlds__simplify__simplify_tasks__succeeded)
#line 139 "simplify_tasks.m"
      check_hlds__simplify__simplify_tasks__V_8_8 = (MR_Integer) 1;
#line 136 "simplify_tasks.m"
    else
#line 139 "simplify_tasks.m"
      check_hlds__simplify__simplify_tasks__V_8_8 = (MR_Integer) 0;
#line 140 "simplify_tasks.m"
    {
#line 140 "simplify_tasks.m"
      check_hlds__simplify__simplify_tasks__succeeded = mercury__list__member_2_p_0((MR_Word) &check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__type_ctor_info_simplify_task_0, ((MR_Box) ((MR_Integer) 3)), check_hlds__simplify__simplify_tasks__List_3);
    }
#line 136 "simplify_tasks.m"
    if (check_hlds__simplify__simplify_tasks__succeeded)
#line 140 "simplify_tasks.m"
      check_hlds__simplify__simplify_tasks__V_10_10 = (MR_Integer) 1;
#line 136 "simplify_tasks.m"
    else
#line 140 "simplify_tasks.m"
      check_hlds__simplify__simplify_tasks__V_10_10 = (MR_Integer) 0;
#line 141 "simplify_tasks.m"
    {
#line 141 "simplify_tasks.m"
      check_hlds__simplify__simplify_tasks__succeeded = mercury__list__member_2_p_0((MR_Word) &check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__type_ctor_info_simplify_task_0, ((MR_Box) ((MR_Integer) 4)), check_hlds__simplify__simplify_tasks__List_3);
    }
#line 136 "simplify_tasks.m"
    if (check_hlds__simplify__simplify_tasks__succeeded)
#line 141 "simplify_tasks.m"
      check_hlds__simplify__simplify_tasks__V_12_12 = (MR_Integer) 1;
#line 136 "simplify_tasks.m"
    else
#line 141 "simplify_tasks.m"
      check_hlds__simplify__simplify_tasks__V_12_12 = (MR_Integer) 0;
#line 142 "simplify_tasks.m"
    {
#line 142 "simplify_tasks.m"
      check_hlds__simplify__simplify_tasks__succeeded = mercury__list__member_2_p_0((MR_Word) &check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__type_ctor_info_simplify_task_0, ((MR_Box) ((MR_Integer) 5)), check_hlds__simplify__simplify_tasks__List_3);
    }
#line 136 "simplify_tasks.m"
    if (check_hlds__simplify__simplify_tasks__succeeded)
#line 142 "simplify_tasks.m"
      check_hlds__simplify__simplify_tasks__V_14_14 = (MR_Integer) 1;
#line 136 "simplify_tasks.m"
    else
#line 142 "simplify_tasks.m"
      check_hlds__simplify__simplify_tasks__V_14_14 = (MR_Integer) 0;
#line 143 "simplify_tasks.m"
    {
#line 143 "simplify_tasks.m"
      check_hlds__simplify__simplify_tasks__succeeded = mercury__list__member_2_p_0((MR_Word) &check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__type_ctor_info_simplify_task_0, ((MR_Box) ((MR_Integer) 6)), check_hlds__simplify__simplify_tasks__List_3);
    }
#line 136 "simplify_tasks.m"
    if (check_hlds__simplify__simplify_tasks__succeeded)
#line 143 "simplify_tasks.m"
      check_hlds__simplify__simplify_tasks__V_16_16 = (MR_Integer) 1;
#line 136 "simplify_tasks.m"
    else
#line 143 "simplify_tasks.m"
      check_hlds__simplify__simplify_tasks__V_16_16 = (MR_Integer) 0;
#line 144 "simplify_tasks.m"
    {
#line 144 "simplify_tasks.m"
      check_hlds__simplify__simplify_tasks__succeeded = mercury__list__member_2_p_0((MR_Word) &check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__type_ctor_info_simplify_task_0, ((MR_Box) ((MR_Integer) 7)), check_hlds__simplify__simplify_tasks__List_3);
    }
#line 136 "simplify_tasks.m"
    if (check_hlds__simplify__simplify_tasks__succeeded)
#line 144 "simplify_tasks.m"
      check_hlds__simplify__simplify_tasks__V_18_18 = (MR_Integer) 1;
#line 136 "simplify_tasks.m"
    else
#line 144 "simplify_tasks.m"
      check_hlds__simplify__simplify_tasks__V_18_18 = (MR_Integer) 0;
#line 145 "simplify_tasks.m"
    {
#line 145 "simplify_tasks.m"
      check_hlds__simplify__simplify_tasks__succeeded = mercury__list__member_2_p_0((MR_Word) &check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__type_ctor_info_simplify_task_0, ((MR_Box) ((MR_Integer) 8)), check_hlds__simplify__simplify_tasks__List_3);
    }
#line 136 "simplify_tasks.m"
    if (check_hlds__simplify__simplify_tasks__succeeded)
#line 145 "simplify_tasks.m"
      check_hlds__simplify__simplify_tasks__V_20_20 = (MR_Integer) 1;
#line 136 "simplify_tasks.m"
    else
#line 145 "simplify_tasks.m"
      check_hlds__simplify__simplify_tasks__V_20_20 = (MR_Integer) 0;
#line 146 "simplify_tasks.m"
    {
#line 146 "simplify_tasks.m"
      check_hlds__simplify__simplify_tasks__succeeded = mercury__list__member_2_p_0((MR_Word) &check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__type_ctor_info_simplify_task_0, ((MR_Box) ((MR_Integer) 9)), check_hlds__simplify__simplify_tasks__List_3);
    }
#line 136 "simplify_tasks.m"
    if (check_hlds__simplify__simplify_tasks__succeeded)
#line 146 "simplify_tasks.m"
      check_hlds__simplify__simplify_tasks__V_22_22 = (MR_Integer) 1;
#line 136 "simplify_tasks.m"
    else
#line 146 "simplify_tasks.m"
      check_hlds__simplify__simplify_tasks__V_22_22 = (MR_Integer) 0;
#line 147 "simplify_tasks.m"
    {
#line 147 "simplify_tasks.m"
      check_hlds__simplify__simplify_tasks__succeeded = mercury__list__member_2_p_0((MR_Word) &check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__type_ctor_info_simplify_task_0, ((MR_Box) ((MR_Integer) 10)), check_hlds__simplify__simplify_tasks__List_3);
    }
#line 136 "simplify_tasks.m"
    if (check_hlds__simplify__simplify_tasks__succeeded)
#line 147 "simplify_tasks.m"
      check_hlds__simplify__simplify_tasks__V_24_24 = (MR_Integer) 1;
#line 136 "simplify_tasks.m"
    else
#line 147 "simplify_tasks.m"
      check_hlds__simplify__simplify_tasks__V_24_24 = (MR_Integer) 0;
#line 148 "simplify_tasks.m"
    {
#line 148 "simplify_tasks.m"
      check_hlds__simplify__simplify_tasks__succeeded = mercury__list__member_2_p_0((MR_Word) &check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__type_ctor_info_simplify_task_0, ((MR_Box) ((MR_Integer) 11)), check_hlds__simplify__simplify_tasks__List_3);
    }
#line 136 "simplify_tasks.m"
    if (check_hlds__simplify__simplify_tasks__succeeded)
#line 148 "simplify_tasks.m"
      check_hlds__simplify__simplify_tasks__V_26_26 = (MR_Integer) 1;
#line 136 "simplify_tasks.m"
    else
#line 148 "simplify_tasks.m"
      check_hlds__simplify__simplify_tasks__V_26_26 = (MR_Integer) 0;
#line 149 "simplify_tasks.m"
    {
#line 149 "simplify_tasks.m"
      check_hlds__simplify__simplify_tasks__succeeded = mercury__list__member_2_p_0((MR_Word) &check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__type_ctor_info_simplify_task_0, ((MR_Box) ((MR_Integer) 12)), check_hlds__simplify__simplify_tasks__List_3);
    }
#line 136 "simplify_tasks.m"
    if (check_hlds__simplify__simplify_tasks__succeeded)
#line 149 "simplify_tasks.m"
      check_hlds__simplify__simplify_tasks__V_28_28 = (MR_Integer) 1;
#line 136 "simplify_tasks.m"
    else
#line 149 "simplify_tasks.m"
      check_hlds__simplify__simplify_tasks__V_28_28 = (MR_Integer) 0;
#line 136 "simplify_tasks.m"
    {
#line 136 "simplify_tasks.m"
      check_hlds__simplify__simplify_tasks__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 136 "simplify_tasks.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_tasks__HeadVar__2_2, 0) = ((MR_Box) ((check_hlds__simplify__simplify_tasks__V_4_4 | ((((check_hlds__simplify__simplify_tasks__V_6_6 << (MR_Integer) 1)) | ((((check_hlds__simplify__simplify_tasks__V_8_8 << (MR_Integer) 2)) | ((((check_hlds__simplify__simplify_tasks__V_10_10 << (MR_Integer) 3)) | ((((check_hlds__simplify__simplify_tasks__V_12_12 << (MR_Integer) 4)) | ((((check_hlds__simplify__simplify_tasks__V_14_14 << (MR_Integer) 5)) | ((((check_hlds__simplify__simplify_tasks__V_16_16 << (MR_Integer) 6)) | ((((check_hlds__simplify__simplify_tasks__V_18_18 << (MR_Integer) 7)) | ((((check_hlds__simplify__simplify_tasks__V_20_20 << (MR_Integer) 8)) | ((((check_hlds__simplify__simplify_tasks__V_22_22 << (MR_Integer) 9)) | ((((check_hlds__simplify__simplify_tasks__V_24_24 << (MR_Integer) 10)) | ((((check_hlds__simplify__simplify_tasks__V_26_26 << (MR_Integer) 11)) | ((check_hlds__simplify__simplify_tasks__V_28_28 << (MR_Integer) 12)))))))))))))))))))))))))));
#line 136 "simplify_tasks.m"
    }
#line 135 "simplify_tasks.m"
    return check_hlds__simplify__simplify_tasks__HeadVar__2_2;
#line 135 "simplify_tasks.m"
  }
#line 99 "simplify_tasks.m"
}

#line 98 "simplify_tasks.m"
MR_Word MR_CALL 
check_hlds__simplify__simplify_tasks__simplify_tasks_to_list_1_f_0(
#line 98 "simplify_tasks.m"
  MR_Word check_hlds__simplify__simplify_tasks__SimplifyTasks_3)
#line 98 "simplify_tasks.m"
{
#line 113 "simplify_tasks.m"
  {
#line 113 "simplify_tasks.m"
    MR_bool check_hlds__simplify__simplify_tasks__succeeded;
#line 113 "simplify_tasks.m"
    MR_Word check_hlds__simplify__simplify_tasks__List_4;
#line 113 "simplify_tasks.m"
    MR_Word check_hlds__simplify__simplify_tasks__TypeCtorInfo_68_68 = (MR_Word) &check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__type_ctor_info_simplify_task_0;
#line 113 "simplify_tasks.m"
    MR_Word check_hlds__simplify__simplify_tasks__WarnSimpleCode_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_tasks__SimplifyTasks_3, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 113 "simplify_tasks.m"
    MR_Word check_hlds__simplify__simplify_tasks__WarnDupCalls_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_tasks__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 113 "simplify_tasks.m"
    MR_Word check_hlds__simplify__simplify_tasks__DoFormatCalls_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_tasks__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 113 "simplify_tasks.m"
    MR_Word check_hlds__simplify__simplify_tasks__WarnObsolete_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_tasks__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 113 "simplify_tasks.m"
    MR_Word check_hlds__simplify__simplify_tasks__MarkCodeModelChanges_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_tasks__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 113 "simplify_tasks.m"
    MR_Word check_hlds__simplify__simplify_tasks__AfterFrontEnd_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_tasks__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 113 "simplify_tasks.m"
    MR_Word check_hlds__simplify__simplify_tasks__ExcessAssign_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_tasks__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 113 "simplify_tasks.m"
    MR_Word check_hlds__simplify__simplify_tasks__ElimRemovableScopes_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_tasks__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 113 "simplify_tasks.m"
    MR_Word check_hlds__simplify__simplify_tasks__OptDuplicateCalls_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_tasks__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 113 "simplify_tasks.m"
    MR_Word check_hlds__simplify__simplify_tasks__ConstantProp_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_tasks__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 113 "simplify_tasks.m"
    MR_Word check_hlds__simplify__simplify_tasks__CommonStruct_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_tasks__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 113 "simplify_tasks.m"
    MR_Word check_hlds__simplify__simplify_tasks__ExtraCommonStruct_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_tasks__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 113 "simplify_tasks.m"
    MR_Word check_hlds__simplify__simplify_tasks__RemoveParConjunctions_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_tasks__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 113 "simplify_tasks.m"
    MR_Word check_hlds__simplify__simplify_tasks__V_18_18;
#line 113 "simplify_tasks.m"
    MR_Word check_hlds__simplify__simplify_tasks__V_21_21;
#line 113 "simplify_tasks.m"
    MR_Word check_hlds__simplify__simplify_tasks__V_22_22;
#line 113 "simplify_tasks.m"
    MR_Word check_hlds__simplify__simplify_tasks__V_25_25;
#line 113 "simplify_tasks.m"
    MR_Word check_hlds__simplify__simplify_tasks__V_26_26;
#line 113 "simplify_tasks.m"
    MR_Word check_hlds__simplify__simplify_tasks__V_29_29;
#line 113 "simplify_tasks.m"
    MR_Word check_hlds__simplify__simplify_tasks__V_30_30;
#line 113 "simplify_tasks.m"
    MR_Word check_hlds__simplify__simplify_tasks__V_33_33;
#line 113 "simplify_tasks.m"
    MR_Word check_hlds__simplify__simplify_tasks__V_34_34;
#line 113 "simplify_tasks.m"
    MR_Word check_hlds__simplify__simplify_tasks__V_37_37;
#line 113 "simplify_tasks.m"
    MR_Word check_hlds__simplify__simplify_tasks__V_38_38;
#line 113 "simplify_tasks.m"
    MR_Word check_hlds__simplify__simplify_tasks__V_41_41;
#line 113 "simplify_tasks.m"
    MR_Word check_hlds__simplify__simplify_tasks__V_42_42;
#line 113 "simplify_tasks.m"
    MR_Word check_hlds__simplify__simplify_tasks__V_45_45;
#line 113 "simplify_tasks.m"
    MR_Word check_hlds__simplify__simplify_tasks__V_46_46;
#line 113 "simplify_tasks.m"
    MR_Word check_hlds__simplify__simplify_tasks__V_49_49;
#line 113 "simplify_tasks.m"
    MR_Word check_hlds__simplify__simplify_tasks__V_50_50;
#line 113 "simplify_tasks.m"
    MR_Word check_hlds__simplify__simplify_tasks__V_53_53;
#line 113 "simplify_tasks.m"
    MR_Word check_hlds__simplify__simplify_tasks__V_54_54;
#line 113 "simplify_tasks.m"
    MR_Word check_hlds__simplify__simplify_tasks__V_57_57;
#line 113 "simplify_tasks.m"
    MR_Word check_hlds__simplify__simplify_tasks__V_58_58;
#line 113 "simplify_tasks.m"
    MR_Word check_hlds__simplify__simplify_tasks__V_61_61;
#line 113 "simplify_tasks.m"
    MR_Word check_hlds__simplify__simplify_tasks__V_62_62;
#line 113 "simplify_tasks.m"
    MR_Word check_hlds__simplify__simplify_tasks__V_65_65;

#line 119 "simplify_tasks.m"
    check_hlds__simplify__simplify_tasks__succeeded = (check_hlds__simplify__simplify_tasks__WarnSimpleCode_5 == (MR_Integer) 1);
#line 119 "simplify_tasks.m"
    if (check_hlds__simplify__simplify_tasks__succeeded)
#line 119 "simplify_tasks.m"
      {
#line 119 "simplify_tasks.m"
        check_hlds__simplify__simplify_tasks__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_tasks_scalar_common_1[0]);
#line 119 "simplify_tasks.m"
      }
#line 119 "simplify_tasks.m"
    else
#line 119 "simplify_tasks.m"
      check_hlds__simplify__simplify_tasks__V_18_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 120 "simplify_tasks.m"
    check_hlds__simplify__simplify_tasks__succeeded = (check_hlds__simplify__simplify_tasks__WarnDupCalls_6 == (MR_Integer) 1);
#line 120 "simplify_tasks.m"
    if (check_hlds__simplify__simplify_tasks__succeeded)
#line 120 "simplify_tasks.m"
      {
#line 120 "simplify_tasks.m"
        check_hlds__simplify__simplify_tasks__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_tasks_scalar_common_1[1]);
#line 120 "simplify_tasks.m"
      }
#line 120 "simplify_tasks.m"
    else
#line 120 "simplify_tasks.m"
      check_hlds__simplify__simplify_tasks__V_22_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 121 "simplify_tasks.m"
    check_hlds__simplify__simplify_tasks__succeeded = (check_hlds__simplify__simplify_tasks__DoFormatCalls_7 == (MR_Integer) 1);
#line 121 "simplify_tasks.m"
    if (check_hlds__simplify__simplify_tasks__succeeded)
#line 121 "simplify_tasks.m"
      {
#line 121 "simplify_tasks.m"
        check_hlds__simplify__simplify_tasks__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_tasks_scalar_common_1[2]);
#line 121 "simplify_tasks.m"
      }
#line 121 "simplify_tasks.m"
    else
#line 121 "simplify_tasks.m"
      check_hlds__simplify__simplify_tasks__V_26_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 122 "simplify_tasks.m"
    check_hlds__simplify__simplify_tasks__succeeded = (check_hlds__simplify__simplify_tasks__WarnObsolete_8 == (MR_Integer) 1);
#line 122 "simplify_tasks.m"
    if (check_hlds__simplify__simplify_tasks__succeeded)
#line 122 "simplify_tasks.m"
      {
#line 122 "simplify_tasks.m"
        check_hlds__simplify__simplify_tasks__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_tasks_scalar_common_1[3]);
#line 122 "simplify_tasks.m"
      }
#line 122 "simplify_tasks.m"
    else
#line 122 "simplify_tasks.m"
      check_hlds__simplify__simplify_tasks__V_30_30 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 123 "simplify_tasks.m"
    check_hlds__simplify__simplify_tasks__succeeded = (check_hlds__simplify__simplify_tasks__MarkCodeModelChanges_9 == (MR_Integer) 1);
#line 124 "simplify_tasks.m"
    if (check_hlds__simplify__simplify_tasks__succeeded)
#line 124 "simplify_tasks.m"
      {
#line 124 "simplify_tasks.m"
        check_hlds__simplify__simplify_tasks__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_tasks_scalar_common_1[4]);
#line 124 "simplify_tasks.m"
      }
#line 124 "simplify_tasks.m"
    else
#line 124 "simplify_tasks.m"
      check_hlds__simplify__simplify_tasks__V_34_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 125 "simplify_tasks.m"
    check_hlds__simplify__simplify_tasks__succeeded = (check_hlds__simplify__simplify_tasks__AfterFrontEnd_10 == (MR_Integer) 1);
#line 125 "simplify_tasks.m"
    if (check_hlds__simplify__simplify_tasks__succeeded)
#line 125 "simplify_tasks.m"
      {
#line 125 "simplify_tasks.m"
        check_hlds__simplify__simplify_tasks__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_tasks_scalar_common_1[5]);
#line 125 "simplify_tasks.m"
      }
#line 125 "simplify_tasks.m"
    else
#line 125 "simplify_tasks.m"
      check_hlds__simplify__simplify_tasks__V_38_38 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 126 "simplify_tasks.m"
    check_hlds__simplify__simplify_tasks__succeeded = (check_hlds__simplify__simplify_tasks__ExcessAssign_11 == (MR_Integer) 1);
#line 126 "simplify_tasks.m"
    if (check_hlds__simplify__simplify_tasks__succeeded)
#line 126 "simplify_tasks.m"
      {
#line 126 "simplify_tasks.m"
        check_hlds__simplify__simplify_tasks__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_tasks_scalar_common_1[6]);
#line 126 "simplify_tasks.m"
      }
#line 126 "simplify_tasks.m"
    else
#line 126 "simplify_tasks.m"
      check_hlds__simplify__simplify_tasks__V_42_42 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 127 "simplify_tasks.m"
    check_hlds__simplify__simplify_tasks__succeeded = (check_hlds__simplify__simplify_tasks__ElimRemovableScopes_12 == (MR_Integer) 1);
#line 128 "simplify_tasks.m"
    if (check_hlds__simplify__simplify_tasks__succeeded)
#line 128 "simplify_tasks.m"
      {
#line 128 "simplify_tasks.m"
        check_hlds__simplify__simplify_tasks__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_tasks_scalar_common_1[7]);
#line 128 "simplify_tasks.m"
      }
#line 128 "simplify_tasks.m"
    else
#line 128 "simplify_tasks.m"
      check_hlds__simplify__simplify_tasks__V_46_46 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 129 "simplify_tasks.m"
    check_hlds__simplify__simplify_tasks__succeeded = (check_hlds__simplify__simplify_tasks__OptDuplicateCalls_13 == (MR_Integer) 1);
#line 129 "simplify_tasks.m"
    if (check_hlds__simplify__simplify_tasks__succeeded)
#line 129 "simplify_tasks.m"
      {
#line 129 "simplify_tasks.m"
        check_hlds__simplify__simplify_tasks__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_tasks_scalar_common_1[8]);
#line 129 "simplify_tasks.m"
      }
#line 129 "simplify_tasks.m"
    else
#line 129 "simplify_tasks.m"
      check_hlds__simplify__simplify_tasks__V_50_50 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 130 "simplify_tasks.m"
    check_hlds__simplify__simplify_tasks__succeeded = (check_hlds__simplify__simplify_tasks__ConstantProp_14 == (MR_Integer) 1);
#line 130 "simplify_tasks.m"
    if (check_hlds__simplify__simplify_tasks__succeeded)
#line 130 "simplify_tasks.m"
      {
#line 130 "simplify_tasks.m"
        check_hlds__simplify__simplify_tasks__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_tasks_scalar_common_1[9]);
#line 130 "simplify_tasks.m"
      }
#line 130 "simplify_tasks.m"
    else
#line 130 "simplify_tasks.m"
      check_hlds__simplify__simplify_tasks__V_54_54 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 131 "simplify_tasks.m"
    check_hlds__simplify__simplify_tasks__succeeded = (check_hlds__simplify__simplify_tasks__CommonStruct_15 == (MR_Integer) 1);
#line 131 "simplify_tasks.m"
    if (check_hlds__simplify__simplify_tasks__succeeded)
#line 131 "simplify_tasks.m"
      {
#line 131 "simplify_tasks.m"
        check_hlds__simplify__simplify_tasks__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_tasks_scalar_common_1[10]);
#line 131 "simplify_tasks.m"
      }
#line 131 "simplify_tasks.m"
    else
#line 131 "simplify_tasks.m"
      check_hlds__simplify__simplify_tasks__V_58_58 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 132 "simplify_tasks.m"
    check_hlds__simplify__simplify_tasks__succeeded = (check_hlds__simplify__simplify_tasks__ExtraCommonStruct_16 == (MR_Integer) 1);
#line 132 "simplify_tasks.m"
    if (check_hlds__simplify__simplify_tasks__succeeded)
#line 132 "simplify_tasks.m"
      {
#line 132 "simplify_tasks.m"
        check_hlds__simplify__simplify_tasks__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_tasks_scalar_common_1[11]);
#line 132 "simplify_tasks.m"
      }
#line 132 "simplify_tasks.m"
    else
#line 132 "simplify_tasks.m"
      check_hlds__simplify__simplify_tasks__V_62_62 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 133 "simplify_tasks.m"
    check_hlds__simplify__simplify_tasks__succeeded = (check_hlds__simplify__simplify_tasks__RemoveParConjunctions_17 == (MR_Integer) 1);
#line 132 "simplify_tasks.m"
    if (check_hlds__simplify__simplify_tasks__succeeded)
#line 133 "simplify_tasks.m"
      {
#line 133 "simplify_tasks.m"
        check_hlds__simplify__simplify_tasks__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_tasks_scalar_common_1[12]);
#line 133 "simplify_tasks.m"
      }
#line 132 "simplify_tasks.m"
    else
#line 133 "simplify_tasks.m"
      check_hlds__simplify__simplify_tasks__V_65_65 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 132 "simplify_tasks.m"
    {
#line 132 "simplify_tasks.m"
      check_hlds__simplify__simplify_tasks__V_61_61 = mercury__list__f_43_43_2_f_0(check_hlds__simplify__simplify_tasks__TypeCtorInfo_68_68, check_hlds__simplify__simplify_tasks__V_62_62, check_hlds__simplify__simplify_tasks__V_65_65);
    }
#line 131 "simplify_tasks.m"
    {
#line 131 "simplify_tasks.m"
      check_hlds__simplify__simplify_tasks__V_57_57 = mercury__list__f_43_43_2_f_0(check_hlds__simplify__simplify_tasks__TypeCtorInfo_68_68, check_hlds__simplify__simplify_tasks__V_58_58, check_hlds__simplify__simplify_tasks__V_61_61);
    }
#line 130 "simplify_tasks.m"
    {
#line 130 "simplify_tasks.m"
      check_hlds__simplify__simplify_tasks__V_53_53 = mercury__list__f_43_43_2_f_0(check_hlds__simplify__simplify_tasks__TypeCtorInfo_68_68, check_hlds__simplify__simplify_tasks__V_54_54, check_hlds__simplify__simplify_tasks__V_57_57);
    }
#line 129 "simplify_tasks.m"
    {
#line 129 "simplify_tasks.m"
      check_hlds__simplify__simplify_tasks__V_49_49 = mercury__list__f_43_43_2_f_0(check_hlds__simplify__simplify_tasks__TypeCtorInfo_68_68, check_hlds__simplify__simplify_tasks__V_50_50, check_hlds__simplify__simplify_tasks__V_53_53);
    }
#line 128 "simplify_tasks.m"
    {
#line 128 "simplify_tasks.m"
      check_hlds__simplify__simplify_tasks__V_45_45 = mercury__list__f_43_43_2_f_0(check_hlds__simplify__simplify_tasks__TypeCtorInfo_68_68, check_hlds__simplify__simplify_tasks__V_46_46, check_hlds__simplify__simplify_tasks__V_49_49);
    }
#line 126 "simplify_tasks.m"
    {
#line 126 "simplify_tasks.m"
      check_hlds__simplify__simplify_tasks__V_41_41 = mercury__list__f_43_43_2_f_0(check_hlds__simplify__simplify_tasks__TypeCtorInfo_68_68, check_hlds__simplify__simplify_tasks__V_42_42, check_hlds__simplify__simplify_tasks__V_45_45);
    }
#line 125 "simplify_tasks.m"
    {
#line 125 "simplify_tasks.m"
      check_hlds__simplify__simplify_tasks__V_37_37 = mercury__list__f_43_43_2_f_0(check_hlds__simplify__simplify_tasks__TypeCtorInfo_68_68, check_hlds__simplify__simplify_tasks__V_38_38, check_hlds__simplify__simplify_tasks__V_41_41);
    }
#line 124 "simplify_tasks.m"
    {
#line 124 "simplify_tasks.m"
      check_hlds__simplify__simplify_tasks__V_33_33 = mercury__list__f_43_43_2_f_0(check_hlds__simplify__simplify_tasks__TypeCtorInfo_68_68, check_hlds__simplify__simplify_tasks__V_34_34, check_hlds__simplify__simplify_tasks__V_37_37);
    }
#line 122 "simplify_tasks.m"
    {
#line 122 "simplify_tasks.m"
      check_hlds__simplify__simplify_tasks__V_29_29 = mercury__list__f_43_43_2_f_0(check_hlds__simplify__simplify_tasks__TypeCtorInfo_68_68, check_hlds__simplify__simplify_tasks__V_30_30, check_hlds__simplify__simplify_tasks__V_33_33);
    }
#line 121 "simplify_tasks.m"
    {
#line 121 "simplify_tasks.m"
      check_hlds__simplify__simplify_tasks__V_25_25 = mercury__list__f_43_43_2_f_0(check_hlds__simplify__simplify_tasks__TypeCtorInfo_68_68, check_hlds__simplify__simplify_tasks__V_26_26, check_hlds__simplify__simplify_tasks__V_29_29);
    }
#line 120 "simplify_tasks.m"
    {
#line 120 "simplify_tasks.m"
      check_hlds__simplify__simplify_tasks__V_21_21 = mercury__list__f_43_43_2_f_0(check_hlds__simplify__simplify_tasks__TypeCtorInfo_68_68, check_hlds__simplify__simplify_tasks__V_22_22, check_hlds__simplify__simplify_tasks__V_25_25);
    }
#line 119 "simplify_tasks.m"
    {
#line 119 "simplify_tasks.m"
      check_hlds__simplify__simplify_tasks__List_4 = mercury__list__f_43_43_2_f_0(check_hlds__simplify__simplify_tasks__TypeCtorInfo_68_68, check_hlds__simplify__simplify_tasks__V_18_18, check_hlds__simplify__simplify_tasks__V_21_21);
    }
#line 113 "simplify_tasks.m"
    return check_hlds__simplify__simplify_tasks__List_4;
#line 113 "simplify_tasks.m"
  }
#line 98 "simplify_tasks.m"
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
