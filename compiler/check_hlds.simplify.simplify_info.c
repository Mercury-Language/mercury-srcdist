/*
** Automatically generated from `simplify_info.m'
** by the Mercury compiler,
** version rotd-2015-09-18
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


/* :- module check_hlds.simplify.simplify_info. */
/* :- implementation. */

/*
INIT mercury__check_hlds__simplify__simplify_info__init
ENDINIT
*/

#include "check_hlds.simplify.simplify_info.mih"


#include "analysis.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
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
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
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
#include "array.mih"
#include "assoc_list.mih"
#include "bag.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "multi_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "random.mih"
#include "robdd.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "check_hlds.simplify.simplify_tasks.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 139 "check_hlds.simplify.simplify_info.c"
static const MR_DuFunctorDesc check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_functor_desc_innermost_proc_0_0;

#line 142 "check_hlds.simplify.simplify_info.c"
static const MR_PseudoTypeInfo check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__field_types_innermost_proc_0_1[1];

#line 145 "check_hlds.simplify.simplify_info.c"
static const MR_DuFunctorDesc check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_functor_desc_innermost_proc_0_1;

#line 148 "check_hlds.simplify.simplify_info.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_stag_ordered_innermost_proc_0_0[1];

#line 151 "check_hlds.simplify.simplify_info.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_stag_ordered_innermost_proc_0_1[1];

#line 154 "check_hlds.simplify.simplify_info.c"
static const MR_DuPtagLayout check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_ptag_ordered_innermost_proc_0[2];

#line 157 "check_hlds.simplify.simplify_info.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_name_ordered_innermost_proc_0[2];

#line 160 "check_hlds.simplify.simplify_info.c"
static const MR_Integer check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__functor_number_map_innermost_proc_0[2];

#line 163 "check_hlds.simplify.simplify_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__simplify_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 166 "check_hlds.simplify.simplify_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__simplify_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 169 "check_hlds.simplify.simplify_info.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__simplify__simplify_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 172 "check_hlds.simplify.simplify_info.c"
static const MR_PseudoTypeInfo check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__field_types_simplify_info_0_0[7];

#line 175 "check_hlds.simplify.simplify_info.c"
static const MR_ConstString check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__field_names_simplify_info_0_0[7];

#line 178 "check_hlds.simplify.simplify_info.c"
static const MR_DuFunctorDesc check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_functor_desc_simplify_info_0_0;

#line 181 "check_hlds.simplify.simplify_info.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_stag_ordered_simplify_info_0_0[1];

#line 184 "check_hlds.simplify.simplify_info.c"
static const MR_DuPtagLayout check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_ptag_ordered_simplify_info_0[1];

#line 187 "check_hlds.simplify.simplify_info.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_name_ordered_simplify_info_0[1];

#line 190 "check_hlds.simplify.simplify_info.c"
static const MR_Integer check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__functor_number_map_simplify_info_0[1];

#line 193 "check_hlds.simplify.simplify_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__simplify_info__maybe__ti_maybe_1check_hlds__simplify__simplify_info__type_ctor_info_innermost_proc_0;

#line 196 "check_hlds.simplify.simplify_info.c"
static const MR_PseudoTypeInfo check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__field_types_simplify_nested_context_0_0[3];

#line 199 "check_hlds.simplify.simplify_info.c"
static const MR_ConstString check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__field_names_simplify_nested_context_0_0[3];

#line 202 "check_hlds.simplify.simplify_info.c"
static const MR_DuFunctorDesc check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_functor_desc_simplify_nested_context_0_0;

#line 205 "check_hlds.simplify.simplify_info.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_stag_ordered_simplify_nested_context_0_0[1];

#line 208 "check_hlds.simplify.simplify_info.c"
static const MR_DuPtagLayout check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_ptag_ordered_simplify_nested_context_0[1];

#line 211 "check_hlds.simplify.simplify_info.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_name_ordered_simplify_nested_context_0[1];

#line 214 "check_hlds.simplify.simplify_info.c"
static const MR_Integer check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__functor_number_map_simplify_nested_context_0[1];

#line 217 "check_hlds.simplify.simplify_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__simplify_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0;

#line 220 "check_hlds.simplify.simplify_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__simplify_info__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 223 "check_hlds.simplify.simplify_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__simplify_info__list__ti_list_1list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 226 "check_hlds.simplify.simplify_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__simplify_info__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0;

#line 229 "check_hlds.simplify.simplify_info.c"
static const MR_PseudoTypeInfo check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__field_types_simplify_sub_info_0_0[11];

#line 232 "check_hlds.simplify.simplify_info.c"
static const MR_ConstString check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__field_names_simplify_sub_info_0_0[11];

#line 235 "check_hlds.simplify.simplify_info.c"
static const MR_DuArgLocn check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__field_locns_simplify_sub_info_0_0[11];

#line 238 "check_hlds.simplify.simplify_info.c"
static const MR_DuFunctorDesc check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_functor_desc_simplify_sub_info_0_0;

#line 241 "check_hlds.simplify.simplify_info.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_stag_ordered_simplify_sub_info_0_0[1];

#line 244 "check_hlds.simplify.simplify_info.c"
static const MR_DuPtagLayout check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_ptag_ordered_simplify_sub_info_0[1];

#line 247 "check_hlds.simplify.simplify_info.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_name_ordered_simplify_sub_info_0[1];

#line 250 "check_hlds.simplify.simplify_info.c"
static const MR_Integer check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__functor_number_map_simplify_sub_info_0[1];

#line 253 "check_hlds.simplify.simplify_info.c"
static MR_bool MR_CALL 
check_hlds__simplify__simplify_info____Unify____innermost_proc_0_0_10001(
#line 256 "check_hlds.simplify.simplify_info.c"
  MR_Box check_hlds__simplify__simplify_info__wrapper_arg_1,
#line 258 "check_hlds.simplify.simplify_info.c"
  MR_Box check_hlds__simplify__simplify_info__wrapper_arg_2);

#line 261 "check_hlds.simplify.simplify_info.c"
static void MR_CALL 
check_hlds__simplify__simplify_info____Compare____innermost_proc_0_0_10001(
#line 264 "check_hlds.simplify.simplify_info.c"
  MR_Box * check_hlds__simplify__simplify_info__wrapper_arg_1,
#line 266 "check_hlds.simplify.simplify_info.c"
  MR_Box check_hlds__simplify__simplify_info__wrapper_arg_2,
#line 268 "check_hlds.simplify.simplify_info.c"
  MR_Box check_hlds__simplify__simplify_info__wrapper_arg_3);

#line 271 "check_hlds.simplify.simplify_info.c"
static MR_bool MR_CALL 
check_hlds__simplify__simplify_info____Unify____simplify_info_0_0_10001(
#line 274 "check_hlds.simplify.simplify_info.c"
  MR_Box check_hlds__simplify__simplify_info__wrapper_arg_1,
#line 276 "check_hlds.simplify.simplify_info.c"
  MR_Box check_hlds__simplify__simplify_info__wrapper_arg_2);

#line 279 "check_hlds.simplify.simplify_info.c"
static void MR_CALL 
check_hlds__simplify__simplify_info____Compare____simplify_info_0_0_10001(
#line 282 "check_hlds.simplify.simplify_info.c"
  MR_Box * check_hlds__simplify__simplify_info__wrapper_arg_1,
#line 284 "check_hlds.simplify.simplify_info.c"
  MR_Box check_hlds__simplify__simplify_info__wrapper_arg_2,
#line 286 "check_hlds.simplify.simplify_info.c"
  MR_Box check_hlds__simplify__simplify_info__wrapper_arg_3);

#line 289 "check_hlds.simplify.simplify_info.c"
static MR_bool MR_CALL 
check_hlds__simplify__simplify_info____Unify____simplify_nested_context_0_0_10001(
#line 292 "check_hlds.simplify.simplify_info.c"
  MR_Box check_hlds__simplify__simplify_info__wrapper_arg_1,
#line 294 "check_hlds.simplify.simplify_info.c"
  MR_Box check_hlds__simplify__simplify_info__wrapper_arg_2);

#line 297 "check_hlds.simplify.simplify_info.c"
static void MR_CALL 
check_hlds__simplify__simplify_info____Compare____simplify_nested_context_0_0_10001(
#line 300 "check_hlds.simplify.simplify_info.c"
  MR_Box * check_hlds__simplify__simplify_info__wrapper_arg_1,
#line 302 "check_hlds.simplify.simplify_info.c"
  MR_Box check_hlds__simplify__simplify_info__wrapper_arg_2,
#line 304 "check_hlds.simplify.simplify_info.c"
  MR_Box check_hlds__simplify__simplify_info__wrapper_arg_3);

#line 307 "check_hlds.simplify.simplify_info.c"
static MR_bool MR_CALL 
check_hlds__simplify__simplify_info____Unify____simplify_sub_info_0_0_10001(
#line 310 "check_hlds.simplify.simplify_info.c"
  MR_Box check_hlds__simplify__simplify_info__wrapper_arg_1,
#line 312 "check_hlds.simplify.simplify_info.c"
  MR_Box check_hlds__simplify__simplify_info__wrapper_arg_2);

#line 315 "check_hlds.simplify.simplify_info.c"
static void MR_CALL 
check_hlds__simplify__simplify_info____Compare____simplify_sub_info_0_0_10001(
#line 318 "check_hlds.simplify.simplify_info.c"
  MR_Box * check_hlds__simplify__simplify_info__wrapper_arg_1,
#line 320 "check_hlds.simplify.simplify_info.c"
  MR_Box check_hlds__simplify__simplify_info__wrapper_arg_2,
#line 322 "check_hlds.simplify.simplify_info.c"
  MR_Box check_hlds__simplify__simplify_info__wrapper_arg_3);

#line 229 "simplify_info.m"
static void MR_CALL 
check_hlds__simplify__simplify_info____Compare____simplify_sub_info_0_0(
#line 229 "simplify_info.m"
  MR_Word * check_hlds__simplify__simplify_info__HeadVar__1_1,
#line 229 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__HeadVar__2_2,
#line 229 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__HeadVar__3_3);

#line 229 "simplify_info.m"
static MR_bool MR_CALL 
check_hlds__simplify__simplify_info____Unify____simplify_sub_info_0_0(
#line 229 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__HeadVar__1_1,
#line 229 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__HeadVar__2_2);


static /* final */ const MR_Box check_hlds__simplify__simplify_info_scalar_common_1[8][2];

static /* final */ const MR_Box check_hlds__simplify__simplify_info_scalar_common_2[1][3];




static /* final */ const MR_Box check_hlds__simplify__simplify_info_scalar_common_1[8][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__type_ctor_info_innermost_proc_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__simplify__simplify_info_scalar_common_1[0]))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__simplify__simplify_info_scalar_common_1[5]))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box check_hlds__simplify__simplify_info_scalar_common_2[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__simplify__simplify_info_scalar_common_1[0])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 412 "check_hlds.simplify.simplify_info.c"
static const MR_DuFunctorDesc check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_functor_desc_innermost_proc_0_0 = {
  (MR_String) "imp_whole_proc",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 427 "check_hlds.simplify.simplify_info.c"
static const MR_PseudoTypeInfo check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__field_types_innermost_proc_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0
};

#line 432 "check_hlds.simplify.simplify_info.c"
static const MR_DuFunctorDesc check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_functor_desc_innermost_proc_0_1 = {
  (MR_String) "imp_lambda",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__field_types_innermost_proc_0_1,
  NULL,
  NULL,
  NULL
};

#line 447 "check_hlds.simplify.simplify_info.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_stag_ordered_innermost_proc_0_0[1] = {
  &check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_functor_desc_innermost_proc_0_0
};

#line 452 "check_hlds.simplify.simplify_info.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_stag_ordered_innermost_proc_0_1[1] = {
  &check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_functor_desc_innermost_proc_0_1
};

#line 457 "check_hlds.simplify.simplify_info.c"
static const MR_DuPtagLayout check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_ptag_ordered_innermost_proc_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_stag_ordered_innermost_proc_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_stag_ordered_innermost_proc_0_1
  }
};

#line 471 "check_hlds.simplify.simplify_info.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_name_ordered_innermost_proc_0[2] = {
  &check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_functor_desc_innermost_proc_0_1,
  &check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_functor_desc_innermost_proc_0_0
};

#line 477 "check_hlds.simplify.simplify_info.c"
static const MR_Integer check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__functor_number_map_innermost_proc_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 483 "check_hlds.simplify.simplify_info.c"
const MR_TypeCtorInfo_Struct check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__type_ctor_info_innermost_proc_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__simplify__simplify_info____Unify____innermost_proc_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__simplify_info____Compare____innermost_proc_0_0_10001)),
  (MR_String) "check_hlds.simplify.simplify_info",
  (MR_String) "innermost_proc",
  {     check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_name_ordered_innermost_proc_0 },
  {     check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_ptag_ordered_innermost_proc_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__functor_number_map_innermost_proc_0
};

#line 500 "check_hlds.simplify.simplify_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__simplify_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 508 "check_hlds.simplify.simplify_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__simplify_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 516 "check_hlds.simplify.simplify_info.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__simplify__simplify_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &check_hlds__simplify__simplify_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 525 "check_hlds.simplify.simplify_info.c"
static const MR_PseudoTypeInfo check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__field_types_simplify_info_0_0[7] = {
  (MR_PseudoTypeInfo) &check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__type_ctor_info_simplify_tasks_0,
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__simplify_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__simplify_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__type_ctor_info_simplify_sub_info_0
};

#line 536 "check_hlds.simplify.simplify_info.c"
static const MR_ConstString check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__field_names_simplify_info_0_0[7] = {
  (MR_String) "simp_simplify_tasks",
  (MR_String) "simp_module_info",
  (MR_String) "simp_varset",
  (MR_String) "simp_vartypes",
  (MR_String) "simp_rtti_varmaps",
  (MR_String) "simp_fully_strict",
  (MR_String) "simp_sub_info"
};

#line 547 "check_hlds.simplify.simplify_info.c"
static const MR_DuFunctorDesc check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_functor_desc_simplify_info_0_0 = {
  (MR_String) "simplify_info",
  (MR_Integer) 7,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__field_types_simplify_info_0_0,
  check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__field_names_simplify_info_0_0,
  NULL,
  NULL
};

#line 562 "check_hlds.simplify.simplify_info.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_stag_ordered_simplify_info_0_0[1] = {
  &check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_functor_desc_simplify_info_0_0
};

#line 567 "check_hlds.simplify.simplify_info.c"
static const MR_DuPtagLayout check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_ptag_ordered_simplify_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_stag_ordered_simplify_info_0_0
  }
};

#line 576 "check_hlds.simplify.simplify_info.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_name_ordered_simplify_info_0[1] = {
  &check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_functor_desc_simplify_info_0_0
};

#line 581 "check_hlds.simplify.simplify_info.c"
static const MR_Integer check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__functor_number_map_simplify_info_0[1] = {
  (MR_Integer) 0
};

#line 586 "check_hlds.simplify.simplify_info.c"
const MR_TypeCtorInfo_Struct check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__type_ctor_info_simplify_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__simplify__simplify_info____Unify____simplify_info_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__simplify_info____Compare____simplify_info_0_0_10001)),
  (MR_String) "check_hlds.simplify.simplify_info",
  (MR_String) "simplify_info",
  {     check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_name_ordered_simplify_info_0 },
  {     check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_ptag_ordered_simplify_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__functor_number_map_simplify_info_0
};

#line 603 "check_hlds.simplify.simplify_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__simplify_info__maybe__ti_maybe_1check_hlds__simplify__simplify_info__type_ctor_info_innermost_proc_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__type_ctor_info_innermost_proc_0
  }
};

#line 611 "check_hlds.simplify.simplify_info.c"
static const MR_PseudoTypeInfo check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__field_types_simplify_nested_context_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__simplify_info__maybe__ti_maybe_1check_hlds__simplify__simplify_info__type_ctor_info_innermost_proc_0
};

#line 618 "check_hlds.simplify.simplify_info.c"
static const MR_ConstString check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__field_names_simplify_nested_context_0_0[3] = {
  (MR_String) "snc_inside_dupl_for_switch",
  (MR_String) "snc_num_enclosing_lambdas",
  (MR_String) "snc_proc_is_model_non"
};

#line 625 "check_hlds.simplify.simplify_info.c"
static const MR_DuFunctorDesc check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_functor_desc_simplify_nested_context_0_0 = {
  (MR_String) "simplify_nested_context",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__field_types_simplify_nested_context_0_0,
  check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__field_names_simplify_nested_context_0_0,
  NULL,
  NULL
};

#line 640 "check_hlds.simplify.simplify_info.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_stag_ordered_simplify_nested_context_0_0[1] = {
  &check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_functor_desc_simplify_nested_context_0_0
};

#line 645 "check_hlds.simplify.simplify_info.c"
static const MR_DuPtagLayout check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_ptag_ordered_simplify_nested_context_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_stag_ordered_simplify_nested_context_0_0
  }
};

#line 654 "check_hlds.simplify.simplify_info.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_name_ordered_simplify_nested_context_0[1] = {
  &check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_functor_desc_simplify_nested_context_0_0
};

#line 659 "check_hlds.simplify.simplify_info.c"
static const MR_Integer check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__functor_number_map_simplify_nested_context_0[1] = {
  (MR_Integer) 0
};

#line 664 "check_hlds.simplify.simplify_info.c"
const MR_TypeCtorInfo_Struct check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__type_ctor_info_simplify_nested_context_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__simplify__simplify_info____Unify____simplify_nested_context_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__simplify_info____Compare____simplify_nested_context_0_0_10001)),
  (MR_String) "check_hlds.simplify.simplify_info",
  (MR_String) "simplify_nested_context",
  {     check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_name_ordered_simplify_nested_context_0 },
  {     check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_ptag_ordered_simplify_nested_context_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__functor_number_map_simplify_nested_context_0
};

#line 681 "check_hlds.simplify.simplify_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__simplify_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

#line 689 "check_hlds.simplify.simplify_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__simplify_info__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__simplify__simplify_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 697 "check_hlds.simplify.simplify_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__simplify_info__list__ti_list_1list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__simplify__simplify_info__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 705 "check_hlds.simplify.simplify_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__simplify_info__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 713 "check_hlds.simplify.simplify_info.c"
static const MR_PseudoTypeInfo check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__field_types_simplify_sub_info_0_0[11] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__simplify_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__simplify_info__list__ti_list_1list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__simplify_info__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_has_parallel_conj_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_has_user_event_0
};

#line 728 "check_hlds.simplify.simplify_info.c"
static const MR_ConstString check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__field_names_simplify_sub_info_0_0[11] = {
  (MR_String) "ssimp_pred_id",
  (MR_String) "ssimp_proc_id",
  (MR_String) "ssimp_inst_varset",
  (MR_String) "ssimp_elim_vars",
  (MR_String) "ssimp_error_specs",
  (MR_String) "ssimp_should_requantify",
  (MR_String) "ssimp_should_rerun_det",
  (MR_String) "ssimp_cost_delta",
  (MR_String) "ssimp_has_parallel_conj",
  (MR_String) "ssimp_found_contains_trace",
  (MR_String) "ssimp_has_user_event"
};

#line 743 "check_hlds.simplify.simplify_info.c"
static const MR_DuArgLocn check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__field_locns_simplify_sub_info_0_0[11] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 4,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 5,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 5,
    (MR_Integer) 1,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 6,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 7,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 7,
    (MR_Integer) 1,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 7,
    (MR_Integer) 2,
    (MR_Integer) 1
  }
};

#line 802 "check_hlds.simplify.simplify_info.c"
static const MR_DuFunctorDesc check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_functor_desc_simplify_sub_info_0_0 = {
  (MR_String) "simplify_sub_info",
  (MR_Integer) 11,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__field_types_simplify_sub_info_0_0,
  check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__field_names_simplify_sub_info_0_0,
  check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__field_locns_simplify_sub_info_0_0,
  NULL
};

#line 817 "check_hlds.simplify.simplify_info.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_stag_ordered_simplify_sub_info_0_0[1] = {
  &check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_functor_desc_simplify_sub_info_0_0
};

#line 822 "check_hlds.simplify.simplify_info.c"
static const MR_DuPtagLayout check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_ptag_ordered_simplify_sub_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_stag_ordered_simplify_sub_info_0_0
  }
};

#line 831 "check_hlds.simplify.simplify_info.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_name_ordered_simplify_sub_info_0[1] = {
  &check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_functor_desc_simplify_sub_info_0_0
};

#line 836 "check_hlds.simplify.simplify_info.c"
static const MR_Integer check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__functor_number_map_simplify_sub_info_0[1] = {
  (MR_Integer) 0
};

#line 841 "check_hlds.simplify.simplify_info.c"
const MR_TypeCtorInfo_Struct check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__type_ctor_info_simplify_sub_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__simplify__simplify_info____Unify____simplify_sub_info_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__simplify_info____Compare____simplify_sub_info_0_0_10001)),
  (MR_String) "check_hlds.simplify.simplify_info",
  (MR_String) "simplify_sub_info",
  {     check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_name_ordered_simplify_sub_info_0 },
  {     check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_ptag_ordered_simplify_sub_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__functor_number_map_simplify_sub_info_0
};

#line 858 "check_hlds.simplify.simplify_info.c"
static MR_bool MR_CALL 
check_hlds__simplify__simplify_info____Unify____innermost_proc_0_0_10001(
#line 861 "check_hlds.simplify.simplify_info.c"
  MR_Box check_hlds__simplify__simplify_info__wrapper_arg_1,
#line 863 "check_hlds.simplify.simplify_info.c"
  MR_Box check_hlds__simplify__simplify_info__wrapper_arg_2)
#line 865 "check_hlds.simplify.simplify_info.c"
{
#line 867 "check_hlds.simplify.simplify_info.c"
  {
#line 869 "check_hlds.simplify.simplify_info.c"
    MR_bool check_hlds__simplify__simplify_info__succeeded;

#line 872 "check_hlds.simplify.simplify_info.c"
    {
#line 874 "check_hlds.simplify.simplify_info.c"
      check_hlds__simplify__simplify_info__succeeded = check_hlds__simplify__simplify_info____Unify____innermost_proc_0_0(((MR_Word) check_hlds__simplify__simplify_info__wrapper_arg_1), ((MR_Word) check_hlds__simplify__simplify_info__wrapper_arg_2));
    }
#line 877 "check_hlds.simplify.simplify_info.c"
    return check_hlds__simplify__simplify_info__succeeded;
#line 879 "check_hlds.simplify.simplify_info.c"
  }
#line 881 "check_hlds.simplify.simplify_info.c"
}

#line 884 "check_hlds.simplify.simplify_info.c"
static void MR_CALL 
check_hlds__simplify__simplify_info____Compare____innermost_proc_0_0_10001(
#line 887 "check_hlds.simplify.simplify_info.c"
  MR_Box * check_hlds__simplify__simplify_info__wrapper_arg_1,
#line 889 "check_hlds.simplify.simplify_info.c"
  MR_Box check_hlds__simplify__simplify_info__wrapper_arg_2,
#line 891 "check_hlds.simplify.simplify_info.c"
  MR_Box check_hlds__simplify__simplify_info__wrapper_arg_3)
#line 893 "check_hlds.simplify.simplify_info.c"
{
#line 895 "check_hlds.simplify.simplify_info.c"
  {
#line 897 "check_hlds.simplify.simplify_info.c"
    MR_Word check_hlds__simplify__simplify_info__conv0_HeadVar__1_1;

#line 900 "check_hlds.simplify.simplify_info.c"
    {
#line 902 "check_hlds.simplify.simplify_info.c"
      check_hlds__simplify__simplify_info____Compare____innermost_proc_0_0(&check_hlds__simplify__simplify_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__simplify__simplify_info__wrapper_arg_2), ((MR_Word) check_hlds__simplify__simplify_info__wrapper_arg_3));
    }
#line 905 "check_hlds.simplify.simplify_info.c"
    *check_hlds__simplify__simplify_info__wrapper_arg_1 = ((MR_Box) (check_hlds__simplify__simplify_info__conv0_HeadVar__1_1));
#line 907 "check_hlds.simplify.simplify_info.c"
  }
#line 909 "check_hlds.simplify.simplify_info.c"
}

#line 912 "check_hlds.simplify.simplify_info.c"
static MR_bool MR_CALL 
check_hlds__simplify__simplify_info____Unify____simplify_info_0_0_10001(
#line 915 "check_hlds.simplify.simplify_info.c"
  MR_Box check_hlds__simplify__simplify_info__wrapper_arg_1,
#line 917 "check_hlds.simplify.simplify_info.c"
  MR_Box check_hlds__simplify__simplify_info__wrapper_arg_2)
#line 919 "check_hlds.simplify.simplify_info.c"
{
#line 921 "check_hlds.simplify.simplify_info.c"
  {
#line 923 "check_hlds.simplify.simplify_info.c"
    MR_bool check_hlds__simplify__simplify_info__succeeded;

#line 926 "check_hlds.simplify.simplify_info.c"
    {
#line 928 "check_hlds.simplify.simplify_info.c"
      check_hlds__simplify__simplify_info__succeeded = check_hlds__simplify__simplify_info____Unify____simplify_info_0_0(((MR_Word) check_hlds__simplify__simplify_info__wrapper_arg_1), ((MR_Word) check_hlds__simplify__simplify_info__wrapper_arg_2));
    }
#line 931 "check_hlds.simplify.simplify_info.c"
    return check_hlds__simplify__simplify_info__succeeded;
#line 933 "check_hlds.simplify.simplify_info.c"
  }
#line 935 "check_hlds.simplify.simplify_info.c"
}

#line 938 "check_hlds.simplify.simplify_info.c"
static void MR_CALL 
check_hlds__simplify__simplify_info____Compare____simplify_info_0_0_10001(
#line 941 "check_hlds.simplify.simplify_info.c"
  MR_Box * check_hlds__simplify__simplify_info__wrapper_arg_1,
#line 943 "check_hlds.simplify.simplify_info.c"
  MR_Box check_hlds__simplify__simplify_info__wrapper_arg_2,
#line 945 "check_hlds.simplify.simplify_info.c"
  MR_Box check_hlds__simplify__simplify_info__wrapper_arg_3)
#line 947 "check_hlds.simplify.simplify_info.c"
{
#line 949 "check_hlds.simplify.simplify_info.c"
  {
#line 951 "check_hlds.simplify.simplify_info.c"
    MR_Word check_hlds__simplify__simplify_info__conv0_HeadVar__1_1;

#line 954 "check_hlds.simplify.simplify_info.c"
    {
#line 956 "check_hlds.simplify.simplify_info.c"
      check_hlds__simplify__simplify_info____Compare____simplify_info_0_0(&check_hlds__simplify__simplify_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__simplify__simplify_info__wrapper_arg_2), ((MR_Word) check_hlds__simplify__simplify_info__wrapper_arg_3));
    }
#line 959 "check_hlds.simplify.simplify_info.c"
    *check_hlds__simplify__simplify_info__wrapper_arg_1 = ((MR_Box) (check_hlds__simplify__simplify_info__conv0_HeadVar__1_1));
#line 961 "check_hlds.simplify.simplify_info.c"
  }
#line 963 "check_hlds.simplify.simplify_info.c"
}

#line 966 "check_hlds.simplify.simplify_info.c"
static MR_bool MR_CALL 
check_hlds__simplify__simplify_info____Unify____simplify_nested_context_0_0_10001(
#line 969 "check_hlds.simplify.simplify_info.c"
  MR_Box check_hlds__simplify__simplify_info__wrapper_arg_1,
#line 971 "check_hlds.simplify.simplify_info.c"
  MR_Box check_hlds__simplify__simplify_info__wrapper_arg_2)
#line 973 "check_hlds.simplify.simplify_info.c"
{
#line 975 "check_hlds.simplify.simplify_info.c"
  {
#line 977 "check_hlds.simplify.simplify_info.c"
    MR_bool check_hlds__simplify__simplify_info__succeeded;

#line 980 "check_hlds.simplify.simplify_info.c"
    {
#line 982 "check_hlds.simplify.simplify_info.c"
      check_hlds__simplify__simplify_info__succeeded = check_hlds__simplify__simplify_info____Unify____simplify_nested_context_0_0(((MR_Word) check_hlds__simplify__simplify_info__wrapper_arg_1), ((MR_Word) check_hlds__simplify__simplify_info__wrapper_arg_2));
    }
#line 985 "check_hlds.simplify.simplify_info.c"
    return check_hlds__simplify__simplify_info__succeeded;
#line 987 "check_hlds.simplify.simplify_info.c"
  }
#line 989 "check_hlds.simplify.simplify_info.c"
}

#line 992 "check_hlds.simplify.simplify_info.c"
static void MR_CALL 
check_hlds__simplify__simplify_info____Compare____simplify_nested_context_0_0_10001(
#line 995 "check_hlds.simplify.simplify_info.c"
  MR_Box * check_hlds__simplify__simplify_info__wrapper_arg_1,
#line 997 "check_hlds.simplify.simplify_info.c"
  MR_Box check_hlds__simplify__simplify_info__wrapper_arg_2,
#line 999 "check_hlds.simplify.simplify_info.c"
  MR_Box check_hlds__simplify__simplify_info__wrapper_arg_3)
#line 1001 "check_hlds.simplify.simplify_info.c"
{
#line 1003 "check_hlds.simplify.simplify_info.c"
  {
#line 1005 "check_hlds.simplify.simplify_info.c"
    MR_Word check_hlds__simplify__simplify_info__conv0_HeadVar__1_1;

#line 1008 "check_hlds.simplify.simplify_info.c"
    {
#line 1010 "check_hlds.simplify.simplify_info.c"
      check_hlds__simplify__simplify_info____Compare____simplify_nested_context_0_0(&check_hlds__simplify__simplify_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__simplify__simplify_info__wrapper_arg_2), ((MR_Word) check_hlds__simplify__simplify_info__wrapper_arg_3));
    }
#line 1013 "check_hlds.simplify.simplify_info.c"
    *check_hlds__simplify__simplify_info__wrapper_arg_1 = ((MR_Box) (check_hlds__simplify__simplify_info__conv0_HeadVar__1_1));
#line 1015 "check_hlds.simplify.simplify_info.c"
  }
#line 1017 "check_hlds.simplify.simplify_info.c"
}

#line 1020 "check_hlds.simplify.simplify_info.c"
static MR_bool MR_CALL 
check_hlds__simplify__simplify_info____Unify____simplify_sub_info_0_0_10001(
#line 1023 "check_hlds.simplify.simplify_info.c"
  MR_Box check_hlds__simplify__simplify_info__wrapper_arg_1,
#line 1025 "check_hlds.simplify.simplify_info.c"
  MR_Box check_hlds__simplify__simplify_info__wrapper_arg_2)
#line 1027 "check_hlds.simplify.simplify_info.c"
{
#line 1029 "check_hlds.simplify.simplify_info.c"
  {
#line 1031 "check_hlds.simplify.simplify_info.c"
    MR_bool check_hlds__simplify__simplify_info__succeeded;

#line 1034 "check_hlds.simplify.simplify_info.c"
    {
#line 1036 "check_hlds.simplify.simplify_info.c"
      check_hlds__simplify__simplify_info__succeeded = check_hlds__simplify__simplify_info____Unify____simplify_sub_info_0_0(((MR_Word) check_hlds__simplify__simplify_info__wrapper_arg_1), ((MR_Word) check_hlds__simplify__simplify_info__wrapper_arg_2));
    }
#line 1039 "check_hlds.simplify.simplify_info.c"
    return check_hlds__simplify__simplify_info__succeeded;
#line 1041 "check_hlds.simplify.simplify_info.c"
  }
#line 1043 "check_hlds.simplify.simplify_info.c"
}

#line 1046 "check_hlds.simplify.simplify_info.c"
static void MR_CALL 
check_hlds__simplify__simplify_info____Compare____simplify_sub_info_0_0_10001(
#line 1049 "check_hlds.simplify.simplify_info.c"
  MR_Box * check_hlds__simplify__simplify_info__wrapper_arg_1,
#line 1051 "check_hlds.simplify.simplify_info.c"
  MR_Box check_hlds__simplify__simplify_info__wrapper_arg_2,
#line 1053 "check_hlds.simplify.simplify_info.c"
  MR_Box check_hlds__simplify__simplify_info__wrapper_arg_3)
#line 1055 "check_hlds.simplify.simplify_info.c"
{
#line 1057 "check_hlds.simplify.simplify_info.c"
  {
#line 1059 "check_hlds.simplify.simplify_info.c"
    MR_Word check_hlds__simplify__simplify_info__conv0_HeadVar__1_1;

#line 1062 "check_hlds.simplify.simplify_info.c"
    {
#line 1064 "check_hlds.simplify.simplify_info.c"
      check_hlds__simplify__simplify_info____Compare____simplify_sub_info_0_0(&check_hlds__simplify__simplify_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__simplify__simplify_info__wrapper_arg_2), ((MR_Word) check_hlds__simplify__simplify_info__wrapper_arg_3));
    }
#line 1067 "check_hlds.simplify.simplify_info.c"
    *check_hlds__simplify__simplify_info__wrapper_arg_1 = ((MR_Box) (check_hlds__simplify__simplify_info__conv0_HeadVar__1_1));
#line 1069 "check_hlds.simplify.simplify_info.c"
  }
#line 1071 "check_hlds.simplify.simplify_info.c"
}

#line 229 "simplify_info.m"
static void MR_CALL 
check_hlds__simplify__simplify_info____Compare____simplify_sub_info_0_0(
#line 229 "simplify_info.m"
  MR_Word * check_hlds__simplify__simplify_info__HeadVar__1_1,
#line 229 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__HeadVar__2_2,
#line 229 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__HeadVar__3_3)
#line 229 "simplify_info.m"
{
#line 229 "simplify_info.m"
  {
#line 229 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 229 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__CastX_36 = (MR_Integer) check_hlds__simplify__simplify_info__HeadVar__2_2;
#line 229 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__CastY_37 = (MR_Integer) check_hlds__simplify__simplify_info__HeadVar__3_3;

#line 229 "simplify_info.m"
    check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__CastX_36 == check_hlds__simplify__simplify_info__CastY_37);
#line 229 "simplify_info.m"
    if (check_hlds__simplify__simplify_info__succeeded)
#line 1098 "check_hlds.simplify.simplify_info.c"
      *check_hlds__simplify__simplify_info__HeadVar__1_1 = (MR_Integer) 0;
#line 229 "simplify_info.m"
    else
#line 229 "simplify_info.m"
      {
#line 229 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 0)));
#line 229 "simplify_info.m"
        MR_Integer check_hlds__simplify__simplify_info__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 1)));
#line 229 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 2)));
#line 229 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 3)));
#line 229 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 4)));
#line 229 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 5)))) & (MR_Integer) 1);
#line 229 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 229 "simplify_info.m"
        MR_Integer check_hlds__simplify__simplify_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 6)));
#line 229 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 229 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 229 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 229 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__3_3, (MR_Integer) 0)));
#line 229 "simplify_info.m"
        MR_Integer check_hlds__simplify__simplify_info__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__3_3, (MR_Integer) 1)));
#line 229 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__3_3, (MR_Integer) 2)));
#line 229 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__3_3, (MR_Integer) 3)));
#line 229 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__3_3, (MR_Integer) 4)));
#line 229 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_20_20 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__3_3, (MR_Integer) 5)))) & (MR_Integer) 1);
#line 229 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__3_3, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 229 "simplify_info.m"
        MR_Integer check_hlds__simplify__simplify_info__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__3_3, (MR_Integer) 6)));
#line 229 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_23_23 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__3_3, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 229 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__3_3, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 229 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__3_3, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 229 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_26_26;

#line 229 "simplify_info.m"
        {
#line 229 "simplify_info.m"
          hlds__hlds_pred____Compare____pred_id_0_0(&check_hlds__simplify__simplify_info__V_26_26, check_hlds__simplify__simplify_info__V_4_4, check_hlds__simplify__simplify_info__V_15_15);
        }
#line 1156 "check_hlds.simplify.simplify_info.c"
        check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_26_26 == (MR_Integer) 0);
#line 229 "simplify_info.m"
        check_hlds__simplify__simplify_info__succeeded = !(check_hlds__simplify__simplify_info__succeeded);
#line 229 "simplify_info.m"
        if (check_hlds__simplify__simplify_info__succeeded)
#line 229 "simplify_info.m"
          *check_hlds__simplify__simplify_info__HeadVar__1_1 = check_hlds__simplify__simplify_info__V_26_26;
#line 229 "simplify_info.m"
        else
#line 229 "simplify_info.m"
          {
#line 229 "simplify_info.m"
            MR_Word check_hlds__simplify__simplify_info__V_27_27;

#line 229 "simplify_info.m"
            {
#line 229 "simplify_info.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__simplify__simplify_info__V_27_27, check_hlds__simplify__simplify_info__V_5_5, check_hlds__simplify__simplify_info__V_16_16);
            }
#line 1176 "check_hlds.simplify.simplify_info.c"
            check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_27_27 == (MR_Integer) 0);
#line 229 "simplify_info.m"
            check_hlds__simplify__simplify_info__succeeded = !(check_hlds__simplify__simplify_info__succeeded);
#line 229 "simplify_info.m"
            if (check_hlds__simplify__simplify_info__succeeded)
#line 229 "simplify_info.m"
              *check_hlds__simplify__simplify_info__HeadVar__1_1 = check_hlds__simplify__simplify_info__V_27_27;
#line 229 "simplify_info.m"
            else
#line 229 "simplify_info.m"
              {
#line 229 "simplify_info.m"
                MR_Word check_hlds__simplify__simplify_info__V_28_28;

#line 229 "simplify_info.m"
                {
#line 229 "simplify_info.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__simplify_info_scalar_common_1[4], &check_hlds__simplify__simplify_info__V_28_28, ((MR_Box) (check_hlds__simplify__simplify_info__V_6_6)), ((MR_Box) (check_hlds__simplify__simplify_info__V_17_17)));
                }
#line 1196 "check_hlds.simplify.simplify_info.c"
                check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_28_28 == (MR_Integer) 0);
#line 229 "simplify_info.m"
                check_hlds__simplify__simplify_info__succeeded = !(check_hlds__simplify__simplify_info__succeeded);
#line 229 "simplify_info.m"
                if (check_hlds__simplify__simplify_info__succeeded)
#line 229 "simplify_info.m"
                  *check_hlds__simplify__simplify_info__HeadVar__1_1 = check_hlds__simplify__simplify_info__V_28_28;
#line 229 "simplify_info.m"
                else
#line 229 "simplify_info.m"
                  {
#line 229 "simplify_info.m"
                    MR_Word check_hlds__simplify__simplify_info__V_29_29;

#line 229 "simplify_info.m"
                    {
#line 229 "simplify_info.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__simplify_info_scalar_common_1[6], &check_hlds__simplify__simplify_info__V_29_29, ((MR_Box) (check_hlds__simplify__simplify_info__V_7_7)), ((MR_Box) (check_hlds__simplify__simplify_info__V_18_18)));
                    }
#line 1216 "check_hlds.simplify.simplify_info.c"
                    check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_29_29 == (MR_Integer) 0);
#line 229 "simplify_info.m"
                    check_hlds__simplify__simplify_info__succeeded = !(check_hlds__simplify__simplify_info__succeeded);
#line 229 "simplify_info.m"
                    if (check_hlds__simplify__simplify_info__succeeded)
#line 229 "simplify_info.m"
                      *check_hlds__simplify__simplify_info__HeadVar__1_1 = check_hlds__simplify__simplify_info__V_29_29;
#line 229 "simplify_info.m"
                    else
#line 229 "simplify_info.m"
                      {
#line 229 "simplify_info.m"
                        MR_Word check_hlds__simplify__simplify_info__V_30_30;

#line 229 "simplify_info.m"
                        {
#line 229 "simplify_info.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__simplify_info_scalar_common_1[7], &check_hlds__simplify__simplify_info__V_30_30, ((MR_Box) (check_hlds__simplify__simplify_info__V_8_8)), ((MR_Box) (check_hlds__simplify__simplify_info__V_19_19)));
                        }
#line 1236 "check_hlds.simplify.simplify_info.c"
                        check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_30_30 == (MR_Integer) 0);
#line 229 "simplify_info.m"
                        check_hlds__simplify__simplify_info__succeeded = !(check_hlds__simplify__simplify_info__succeeded);
#line 229 "simplify_info.m"
                        if (check_hlds__simplify__simplify_info__succeeded)
#line 229 "simplify_info.m"
                          *check_hlds__simplify__simplify_info__HeadVar__1_1 = check_hlds__simplify__simplify_info__V_30_30;
#line 229 "simplify_info.m"
                        else
#line 229 "simplify_info.m"
                          {
#line 229 "simplify_info.m"
                            MR_Word check_hlds__simplify__simplify_info__V_31_31;
#line 229 "simplify_info.m"
                            MR_Integer check_hlds__simplify__simplify_info__V_49_49 = (MR_Integer) check_hlds__simplify__simplify_info__V_9_9;
#line 229 "simplify_info.m"
                            MR_Integer check_hlds__simplify__simplify_info__V_50_50 = (MR_Integer) check_hlds__simplify__simplify_info__V_20_20;

#line 229 "simplify_info.m"
                            {
#line 229 "simplify_info.m"
                              mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__simplify__simplify_info__V_31_31, check_hlds__simplify__simplify_info__V_49_49, check_hlds__simplify__simplify_info__V_50_50);
                            }
#line 1260 "check_hlds.simplify.simplify_info.c"
                            check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_31_31 == (MR_Integer) 0);
#line 229 "simplify_info.m"
                            check_hlds__simplify__simplify_info__succeeded = !(check_hlds__simplify__simplify_info__succeeded);
#line 229 "simplify_info.m"
                            if (check_hlds__simplify__simplify_info__succeeded)
#line 229 "simplify_info.m"
                              *check_hlds__simplify__simplify_info__HeadVar__1_1 = check_hlds__simplify__simplify_info__V_31_31;
#line 229 "simplify_info.m"
                            else
#line 229 "simplify_info.m"
                              {
#line 229 "simplify_info.m"
                                MR_Word check_hlds__simplify__simplify_info__V_32_32;
#line 229 "simplify_info.m"
                                MR_Integer check_hlds__simplify__simplify_info__V_51_51 = (MR_Integer) check_hlds__simplify__simplify_info__V_10_10;
#line 229 "simplify_info.m"
                                MR_Integer check_hlds__simplify__simplify_info__V_52_52 = (MR_Integer) check_hlds__simplify__simplify_info__V_21_21;

#line 229 "simplify_info.m"
                                {
#line 229 "simplify_info.m"
                                  mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__simplify__simplify_info__V_32_32, check_hlds__simplify__simplify_info__V_51_51, check_hlds__simplify__simplify_info__V_52_52);
                                }
#line 1284 "check_hlds.simplify.simplify_info.c"
                                check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_32_32 == (MR_Integer) 0);
#line 229 "simplify_info.m"
                                check_hlds__simplify__simplify_info__succeeded = !(check_hlds__simplify__simplify_info__succeeded);
#line 229 "simplify_info.m"
                                if (check_hlds__simplify__simplify_info__succeeded)
#line 229 "simplify_info.m"
                                  *check_hlds__simplify__simplify_info__HeadVar__1_1 = check_hlds__simplify__simplify_info__V_32_32;
#line 229 "simplify_info.m"
                                else
#line 229 "simplify_info.m"
                                  {
#line 229 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__V_33_33;

#line 229 "simplify_info.m"
                                    {
#line 229 "simplify_info.m"
                                      mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__simplify__simplify_info__V_33_33, check_hlds__simplify__simplify_info__V_11_11, check_hlds__simplify__simplify_info__V_22_22);
                                    }
#line 1304 "check_hlds.simplify.simplify_info.c"
                                    check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_33_33 == (MR_Integer) 0);
#line 229 "simplify_info.m"
                                    check_hlds__simplify__simplify_info__succeeded = !(check_hlds__simplify__simplify_info__succeeded);
#line 229 "simplify_info.m"
                                    if (check_hlds__simplify__simplify_info__succeeded)
#line 229 "simplify_info.m"
                                      *check_hlds__simplify__simplify_info__HeadVar__1_1 = check_hlds__simplify__simplify_info__V_33_33;
#line 229 "simplify_info.m"
                                    else
#line 229 "simplify_info.m"
                                      {
#line 229 "simplify_info.m"
                                        MR_Word check_hlds__simplify__simplify_info__V_34_34;
#line 229 "simplify_info.m"
                                        MR_Integer check_hlds__simplify__simplify_info__V_53_53 = (MR_Integer) check_hlds__simplify__simplify_info__V_12_12;
#line 229 "simplify_info.m"
                                        MR_Integer check_hlds__simplify__simplify_info__V_54_54 = (MR_Integer) check_hlds__simplify__simplify_info__V_23_23;

#line 229 "simplify_info.m"
                                        {
#line 229 "simplify_info.m"
                                          mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__simplify__simplify_info__V_34_34, check_hlds__simplify__simplify_info__V_53_53, check_hlds__simplify__simplify_info__V_54_54);
                                        }
#line 1328 "check_hlds.simplify.simplify_info.c"
                                        check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_34_34 == (MR_Integer) 0);
#line 229 "simplify_info.m"
                                        check_hlds__simplify__simplify_info__succeeded = !(check_hlds__simplify__simplify_info__succeeded);
#line 229 "simplify_info.m"
                                        if (check_hlds__simplify__simplify_info__succeeded)
#line 229 "simplify_info.m"
                                          *check_hlds__simplify__simplify_info__HeadVar__1_1 = check_hlds__simplify__simplify_info__V_34_34;
#line 229 "simplify_info.m"
                                        else
#line 229 "simplify_info.m"
                                          {
#line 229 "simplify_info.m"
                                            MR_Word check_hlds__simplify__simplify_info__V_35_35;
#line 229 "simplify_info.m"
                                            MR_Integer check_hlds__simplify__simplify_info__V_55_55 = (MR_Integer) check_hlds__simplify__simplify_info__V_13_13;
#line 229 "simplify_info.m"
                                            MR_Integer check_hlds__simplify__simplify_info__V_56_56 = (MR_Integer) check_hlds__simplify__simplify_info__V_24_24;

#line 229 "simplify_info.m"
                                            {
#line 229 "simplify_info.m"
                                              mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__simplify__simplify_info__V_35_35, check_hlds__simplify__simplify_info__V_55_55, check_hlds__simplify__simplify_info__V_56_56);
                                            }
#line 1352 "check_hlds.simplify.simplify_info.c"
                                            check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_35_35 == (MR_Integer) 0);
#line 229 "simplify_info.m"
                                            check_hlds__simplify__simplify_info__succeeded = !(check_hlds__simplify__simplify_info__succeeded);
#line 229 "simplify_info.m"
                                            if (check_hlds__simplify__simplify_info__succeeded)
#line 229 "simplify_info.m"
                                              *check_hlds__simplify__simplify_info__HeadVar__1_1 = check_hlds__simplify__simplify_info__V_35_35;
#line 229 "simplify_info.m"
                                            else
#line 229 "simplify_info.m"
                                              {
#line 229 "simplify_info.m"
                                                MR_Integer check_hlds__simplify__simplify_info__V_57_57 = (MR_Integer) check_hlds__simplify__simplify_info__V_14_14;
#line 229 "simplify_info.m"
                                                MR_Integer check_hlds__simplify__simplify_info__V_58_58 = (MR_Integer) check_hlds__simplify__simplify_info__V_25_25;

#line 229 "simplify_info.m"
                                                {
#line 229 "simplify_info.m"
                                                  mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__simplify__simplify_info__HeadVar__1_1, check_hlds__simplify__simplify_info__V_57_57, check_hlds__simplify__simplify_info__V_58_58);
#line 229 "simplify_info.m"
                                                  return;
                                                }
#line 229 "simplify_info.m"
                                              }
#line 229 "simplify_info.m"
                                          }
#line 229 "simplify_info.m"
                                      }
#line 229 "simplify_info.m"
                                  }
#line 229 "simplify_info.m"
                              }
#line 229 "simplify_info.m"
                          }
#line 229 "simplify_info.m"
                      }
#line 229 "simplify_info.m"
                  }
#line 229 "simplify_info.m"
              }
#line 229 "simplify_info.m"
          }
#line 229 "simplify_info.m"
      }
#line 229 "simplify_info.m"
  }
#line 229 "simplify_info.m"
}

#line 229 "simplify_info.m"
static MR_bool MR_CALL 
check_hlds__simplify__simplify_info____Unify____simplify_sub_info_0_0(
#line 229 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__HeadVar__1_1,
#line 229 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__HeadVar__2_2)
#line 229 "simplify_info.m"
{
#line 229 "simplify_info.m"
  {
#line 229 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 229 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__CastX_25 = (MR_Integer) check_hlds__simplify__simplify_info__HeadVar__1_1;
#line 229 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__CastY_26 = (MR_Integer) check_hlds__simplify__simplify_info__HeadVar__2_2;

#line 229 "simplify_info.m"
    check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__CastX_25 == check_hlds__simplify__simplify_info__CastY_26);
#line 229 "simplify_info.m"
    if (check_hlds__simplify__simplify_info__succeeded)
#line 229 "simplify_info.m"
      check_hlds__simplify__simplify_info__succeeded = MR_TRUE;
#line 229 "simplify_info.m"
    else
#line 229 "simplify_info.m"
      {
#line 229 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__TypeInfo_28_28;
#line 229 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__TypeInfo_29_29;
#line 229 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__TypeInfo_30_30;
#line 229 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__1_1, (MR_Integer) 0)));
#line 229 "simplify_info.m"
        MR_Integer check_hlds__simplify__simplify_info__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__1_1, (MR_Integer) 1)));
#line 229 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__1_1, (MR_Integer) 2)));
#line 229 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__1_1, (MR_Integer) 3)));
#line 229 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__1_1, (MR_Integer) 4)));
#line 229 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_8_8 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__1_1, (MR_Integer) 5)))) & (MR_Integer) 1);
#line 229 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__1_1, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 229 "simplify_info.m"
        MR_Integer check_hlds__simplify__simplify_info__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__1_1, (MR_Integer) 6)));
#line 229 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__1_1, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 229 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__1_1, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 229 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__1_1, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 229 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 0)));
#line 229 "simplify_info.m"
        MR_Integer check_hlds__simplify__simplify_info__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 1)));
#line 229 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 2)));
#line 229 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 3)));
#line 229 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 4)));
#line 229 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_19_19 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 5)))) & (MR_Integer) 1);
#line 229 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 229 "simplify_info.m"
        MR_Integer check_hlds__simplify__simplify_info__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 6)));
#line 229 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_22_22 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 229 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 229 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);

#line 1482 "check_hlds.simplify.simplify_info.c"
        {
#line 1484 "check_hlds.simplify.simplify_info.c"
          check_hlds__simplify__simplify_info__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(check_hlds__simplify__simplify_info__V_3_3, check_hlds__simplify__simplify_info__V_14_14);
        }
#line 229 "simplify_info.m"
        if (check_hlds__simplify__simplify_info__succeeded)
#line 229 "simplify_info.m"
          {
#line 1491 "check_hlds.simplify.simplify_info.c"
            check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_4_4 == check_hlds__simplify__simplify_info__V_15_15);
#line 229 "simplify_info.m"
            if (check_hlds__simplify__simplify_info__succeeded)
#line 229 "simplify_info.m"
              {
#line 1497 "check_hlds.simplify.simplify_info.c"
                check_hlds__simplify__simplify_info__TypeInfo_28_28 = (MR_Word) &check_hlds__simplify__simplify_info_scalar_common_1[4];
#line 1499 "check_hlds.simplify.simplify_info.c"
                {
#line 1501 "check_hlds.simplify.simplify_info.c"
                  check_hlds__simplify__simplify_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__simplify_info__TypeInfo_28_28, ((MR_Box) (check_hlds__simplify__simplify_info__V_5_5)), ((MR_Box) (check_hlds__simplify__simplify_info__V_16_16)));
                }
#line 229 "simplify_info.m"
                if (check_hlds__simplify__simplify_info__succeeded)
#line 229 "simplify_info.m"
                  {
#line 1508 "check_hlds.simplify.simplify_info.c"
                    check_hlds__simplify__simplify_info__TypeInfo_29_29 = (MR_Word) &check_hlds__simplify__simplify_info_scalar_common_1[6];
#line 1510 "check_hlds.simplify.simplify_info.c"
                    {
#line 1512 "check_hlds.simplify.simplify_info.c"
                      check_hlds__simplify__simplify_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__simplify_info__TypeInfo_29_29, ((MR_Box) (check_hlds__simplify__simplify_info__V_6_6)), ((MR_Box) (check_hlds__simplify__simplify_info__V_17_17)));
                    }
#line 229 "simplify_info.m"
                    if (check_hlds__simplify__simplify_info__succeeded)
#line 229 "simplify_info.m"
                      {
#line 1519 "check_hlds.simplify.simplify_info.c"
                        check_hlds__simplify__simplify_info__TypeInfo_30_30 = (MR_Word) &check_hlds__simplify__simplify_info_scalar_common_1[7];
#line 1521 "check_hlds.simplify.simplify_info.c"
                        {
#line 1523 "check_hlds.simplify.simplify_info.c"
                          check_hlds__simplify__simplify_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__simplify_info__TypeInfo_30_30, ((MR_Box) (check_hlds__simplify__simplify_info__V_7_7)), ((MR_Box) (check_hlds__simplify__simplify_info__V_18_18)));
                        }
#line 229 "simplify_info.m"
                        if (check_hlds__simplify__simplify_info__succeeded)
#line 229 "simplify_info.m"
                          {
#line 1530 "check_hlds.simplify.simplify_info.c"
                            check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_8_8 == check_hlds__simplify__simplify_info__V_19_19);
#line 229 "simplify_info.m"
                            if (check_hlds__simplify__simplify_info__succeeded)
#line 229 "simplify_info.m"
                              {
#line 1536 "check_hlds.simplify.simplify_info.c"
                                check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_9_9 == check_hlds__simplify__simplify_info__V_20_20);
#line 229 "simplify_info.m"
                                if (check_hlds__simplify__simplify_info__succeeded)
#line 229 "simplify_info.m"
                                  {
#line 1542 "check_hlds.simplify.simplify_info.c"
                                    check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_10_10 == check_hlds__simplify__simplify_info__V_21_21);
#line 229 "simplify_info.m"
                                    if (check_hlds__simplify__simplify_info__succeeded)
#line 229 "simplify_info.m"
                                      {
#line 1548 "check_hlds.simplify.simplify_info.c"
                                        check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_11_11 == check_hlds__simplify__simplify_info__V_22_22);
#line 229 "simplify_info.m"
                                        if (check_hlds__simplify__simplify_info__succeeded)
#line 229 "simplify_info.m"
                                          {
#line 1554 "check_hlds.simplify.simplify_info.c"
                                            check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_12_12 == check_hlds__simplify__simplify_info__V_23_23);
#line 229 "simplify_info.m"
                                            if (check_hlds__simplify__simplify_info__succeeded)
#line 1558 "check_hlds.simplify.simplify_info.c"
                                              check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_13_13 == check_hlds__simplify__simplify_info__V_24_24);
#line 229 "simplify_info.m"
                                          }
#line 229 "simplify_info.m"
                                      }
#line 229 "simplify_info.m"
                                  }
#line 229 "simplify_info.m"
                              }
#line 229 "simplify_info.m"
                          }
#line 229 "simplify_info.m"
                      }
#line 229 "simplify_info.m"
                  }
#line 229 "simplify_info.m"
              }
#line 229 "simplify_info.m"
          }
#line 229 "simplify_info.m"
      }
#line 229 "simplify_info.m"
    return check_hlds__simplify__simplify_info__succeeded;
#line 229 "simplify_info.m"
  }
#line 229 "simplify_info.m"
}

#line 46 "simplify_info.m"
void MR_CALL 
check_hlds__simplify__simplify_info____Compare____simplify_nested_context_0_0(
#line 46 "simplify_info.m"
  MR_Word * check_hlds__simplify__simplify_info__HeadVar__1_1,
#line 46 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__HeadVar__2_2,
#line 46 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__HeadVar__3_3)
#line 46 "simplify_info.m"
{
#line 46 "simplify_info.m"
  {
#line 46 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 46 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__CastX_12 = (MR_Integer) check_hlds__simplify__simplify_info__HeadVar__2_2;
#line 46 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__CastY_13 = (MR_Integer) check_hlds__simplify__simplify_info__HeadVar__3_3;

#line 46 "simplify_info.m"
    check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__CastX_12 == check_hlds__simplify__simplify_info__CastY_13);
#line 46 "simplify_info.m"
    if (check_hlds__simplify__simplify_info__succeeded)
#line 1611 "check_hlds.simplify.simplify_info.c"
      *check_hlds__simplify__simplify_info__HeadVar__1_1 = (MR_Integer) 0;
#line 46 "simplify_info.m"
    else
#line 46 "simplify_info.m"
      {
#line 46 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 0)));
#line 46 "simplify_info.m"
        MR_Integer check_hlds__simplify__simplify_info__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 1)));
#line 46 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 2)));
#line 46 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__3_3, (MR_Integer) 0)));
#line 46 "simplify_info.m"
        MR_Integer check_hlds__simplify__simplify_info__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__3_3, (MR_Integer) 1)));
#line 46 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__3_3, (MR_Integer) 2)));
#line 46 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_10_10;
#line 46 "simplify_info.m"
        MR_Integer check_hlds__simplify__simplify_info__V_17_17 = (MR_Integer) check_hlds__simplify__simplify_info__V_4_4;
#line 46 "simplify_info.m"
        MR_Integer check_hlds__simplify__simplify_info__V_18_18 = (MR_Integer) check_hlds__simplify__simplify_info__V_7_7;

#line 46 "simplify_info.m"
        {
#line 46 "simplify_info.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__simplify__simplify_info__V_10_10, check_hlds__simplify__simplify_info__V_17_17, check_hlds__simplify__simplify_info__V_18_18);
        }
#line 1641 "check_hlds.simplify.simplify_info.c"
        check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_10_10 == (MR_Integer) 0);
#line 46 "simplify_info.m"
        check_hlds__simplify__simplify_info__succeeded = !(check_hlds__simplify__simplify_info__succeeded);
#line 46 "simplify_info.m"
        if (check_hlds__simplify__simplify_info__succeeded)
#line 46 "simplify_info.m"
          *check_hlds__simplify__simplify_info__HeadVar__1_1 = check_hlds__simplify__simplify_info__V_10_10;
#line 46 "simplify_info.m"
        else
#line 46 "simplify_info.m"
          {
#line 46 "simplify_info.m"
            MR_Word check_hlds__simplify__simplify_info__V_11_11;

#line 46 "simplify_info.m"
            {
#line 46 "simplify_info.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__simplify__simplify_info__V_11_11, check_hlds__simplify__simplify_info__V_5_5, check_hlds__simplify__simplify_info__V_8_8);
            }
#line 1661 "check_hlds.simplify.simplify_info.c"
            check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_11_11 == (MR_Integer) 0);
#line 46 "simplify_info.m"
            check_hlds__simplify__simplify_info__succeeded = !(check_hlds__simplify__simplify_info__succeeded);
#line 46 "simplify_info.m"
            if (check_hlds__simplify__simplify_info__succeeded)
#line 46 "simplify_info.m"
              *check_hlds__simplify__simplify_info__HeadVar__1_1 = check_hlds__simplify__simplify_info__V_11_11;
#line 46 "simplify_info.m"
            else
#line 46 "simplify_info.m"
              {
#line 46 "simplify_info.m"
                {
#line 46 "simplify_info.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__simplify_info_scalar_common_1[3], check_hlds__simplify__simplify_info__HeadVar__1_1, ((MR_Box) (check_hlds__simplify__simplify_info__V_6_6)), ((MR_Box) (check_hlds__simplify__simplify_info__V_9_9)));
#line 46 "simplify_info.m"
                  return;
                }
#line 46 "simplify_info.m"
              }
#line 46 "simplify_info.m"
          }
#line 46 "simplify_info.m"
      }
#line 46 "simplify_info.m"
  }
#line 46 "simplify_info.m"
}

#line 46 "simplify_info.m"
MR_bool MR_CALL 
check_hlds__simplify__simplify_info____Unify____simplify_nested_context_0_0(
#line 46 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__HeadVar__1_1,
#line 46 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__HeadVar__2_2)
#line 46 "simplify_info.m"
{
#line 46 "simplify_info.m"
  {
#line 46 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 46 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__CastX_9 = (MR_Integer) check_hlds__simplify__simplify_info__HeadVar__1_1;
#line 46 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__CastY_10 = (MR_Integer) check_hlds__simplify__simplify_info__HeadVar__2_2;

#line 46 "simplify_info.m"
    check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__CastX_9 == check_hlds__simplify__simplify_info__CastY_10);
#line 46 "simplify_info.m"
    if (check_hlds__simplify__simplify_info__succeeded)
#line 46 "simplify_info.m"
      check_hlds__simplify__simplify_info__succeeded = MR_TRUE;
#line 46 "simplify_info.m"
    else
#line 46 "simplify_info.m"
      {
#line 46 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__TypeInfo_11_11;
#line 46 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__1_1, (MR_Integer) 0)));
#line 46 "simplify_info.m"
        MR_Integer check_hlds__simplify__simplify_info__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__1_1, (MR_Integer) 1)));
#line 46 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__1_1, (MR_Integer) 2)));
#line 46 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 0)));
#line 46 "simplify_info.m"
        MR_Integer check_hlds__simplify__simplify_info__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 1)));
#line 46 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 2)));

#line 1734 "check_hlds.simplify.simplify_info.c"
        check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_3_3 == check_hlds__simplify__simplify_info__V_6_6);
#line 46 "simplify_info.m"
        if (check_hlds__simplify__simplify_info__succeeded)
#line 46 "simplify_info.m"
          {
#line 1740 "check_hlds.simplify.simplify_info.c"
            check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_4_4 == check_hlds__simplify__simplify_info__V_7_7);
#line 46 "simplify_info.m"
            if (check_hlds__simplify__simplify_info__succeeded)
#line 46 "simplify_info.m"
              {
#line 1746 "check_hlds.simplify.simplify_info.c"
                check_hlds__simplify__simplify_info__TypeInfo_11_11 = (MR_Word) &check_hlds__simplify__simplify_info_scalar_common_1[3];
#line 1748 "check_hlds.simplify.simplify_info.c"
                {
#line 1750 "check_hlds.simplify.simplify_info.c"
                  return check_hlds__simplify__simplify_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__simplify_info__TypeInfo_11_11, ((MR_Box) (check_hlds__simplify__simplify_info__V_5_5)), ((MR_Box) (check_hlds__simplify__simplify_info__V_8_8)));
                }
#line 46 "simplify_info.m"
              }
#line 46 "simplify_info.m"
          }
#line 46 "simplify_info.m"
      }
#line 46 "simplify_info.m"
    return check_hlds__simplify__simplify_info__succeeded;
#line 46 "simplify_info.m"
  }
#line 46 "simplify_info.m"
}

#line 202 "simplify_info.m"
void MR_CALL 
check_hlds__simplify__simplify_info____Compare____simplify_info_0_0(
#line 202 "simplify_info.m"
  MR_Word * check_hlds__simplify__simplify_info__HeadVar__1_1,
#line 202 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__HeadVar__2_2,
#line 202 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__HeadVar__3_3)
#line 202 "simplify_info.m"
{
#line 202 "simplify_info.m"
  {
#line 202 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 202 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__CastX_24 = (MR_Integer) check_hlds__simplify__simplify_info__HeadVar__2_2;
#line 202 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__CastY_25 = (MR_Integer) check_hlds__simplify__simplify_info__HeadVar__3_3;

#line 202 "simplify_info.m"
    check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__CastX_24 == check_hlds__simplify__simplify_info__CastY_25);
#line 202 "simplify_info.m"
    if (check_hlds__simplify__simplify_info__succeeded)
#line 1790 "check_hlds.simplify.simplify_info.c"
      *check_hlds__simplify__simplify_info__HeadVar__1_1 = (MR_Integer) 0;
#line 202 "simplify_info.m"
    else
#line 202 "simplify_info.m"
      {
#line 202 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 0)));
#line 202 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 1)));
#line 202 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 2)));
#line 202 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 3)));
#line 202 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 4)));
#line 202 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 5)));
#line 202 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 6)));
#line 202 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__3_3, (MR_Integer) 0)));
#line 202 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__3_3, (MR_Integer) 1)));
#line 202 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__3_3, (MR_Integer) 2)));
#line 202 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__3_3, (MR_Integer) 3)));
#line 202 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__3_3, (MR_Integer) 4)));
#line 202 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__3_3, (MR_Integer) 5)));
#line 202 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__3_3, (MR_Integer) 6)));
#line 202 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_18_18;

#line 202 "simplify_info.m"
        {
#line 202 "simplify_info.m"
          check_hlds__simplify__simplify_tasks____Compare____simplify_tasks_0_0(&check_hlds__simplify__simplify_info__V_18_18, check_hlds__simplify__simplify_info__V_4_4, check_hlds__simplify__simplify_info__V_11_11);
        }
#line 1832 "check_hlds.simplify.simplify_info.c"
        check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_18_18 == (MR_Integer) 0);
#line 202 "simplify_info.m"
        check_hlds__simplify__simplify_info__succeeded = !(check_hlds__simplify__simplify_info__succeeded);
#line 202 "simplify_info.m"
        if (check_hlds__simplify__simplify_info__succeeded)
#line 202 "simplify_info.m"
          *check_hlds__simplify__simplify_info__HeadVar__1_1 = check_hlds__simplify__simplify_info__V_18_18;
#line 202 "simplify_info.m"
        else
#line 202 "simplify_info.m"
          {
#line 202 "simplify_info.m"
            MR_Word check_hlds__simplify__simplify_info__V_19_19;

#line 202 "simplify_info.m"
            {
#line 202 "simplify_info.m"
              hlds__hlds_module____Compare____module_info_0_0(&check_hlds__simplify__simplify_info__V_19_19, check_hlds__simplify__simplify_info__V_5_5, check_hlds__simplify__simplify_info__V_12_12);
            }
#line 1852 "check_hlds.simplify.simplify_info.c"
            check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_19_19 == (MR_Integer) 0);
#line 202 "simplify_info.m"
            check_hlds__simplify__simplify_info__succeeded = !(check_hlds__simplify__simplify_info__succeeded);
#line 202 "simplify_info.m"
            if (check_hlds__simplify__simplify_info__succeeded)
#line 202 "simplify_info.m"
              *check_hlds__simplify__simplify_info__HeadVar__1_1 = check_hlds__simplify__simplify_info__V_19_19;
#line 202 "simplify_info.m"
            else
#line 202 "simplify_info.m"
              {
#line 202 "simplify_info.m"
                MR_Word check_hlds__simplify__simplify_info__V_20_20;

#line 202 "simplify_info.m"
                {
#line 202 "simplify_info.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__simplify_info_scalar_common_1[2], &check_hlds__simplify__simplify_info__V_20_20, ((MR_Box) (check_hlds__simplify__simplify_info__V_6_6)), ((MR_Box) (check_hlds__simplify__simplify_info__V_13_13)));
                }
#line 1872 "check_hlds.simplify.simplify_info.c"
                check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_20_20 == (MR_Integer) 0);
#line 202 "simplify_info.m"
                check_hlds__simplify__simplify_info__succeeded = !(check_hlds__simplify__simplify_info__succeeded);
#line 202 "simplify_info.m"
                if (check_hlds__simplify__simplify_info__succeeded)
#line 202 "simplify_info.m"
                  *check_hlds__simplify__simplify_info__HeadVar__1_1 = check_hlds__simplify__simplify_info__V_20_20;
#line 202 "simplify_info.m"
                else
#line 202 "simplify_info.m"
                  {
#line 202 "simplify_info.m"
                    MR_Word check_hlds__simplify__simplify_info__V_21_21;

#line 202 "simplify_info.m"
                    {
#line 202 "simplify_info.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__simplify_info_scalar_common_2[0], &check_hlds__simplify__simplify_info__V_21_21, ((MR_Box) (check_hlds__simplify__simplify_info__V_7_7)), ((MR_Box) (check_hlds__simplify__simplify_info__V_14_14)));
                    }
#line 1892 "check_hlds.simplify.simplify_info.c"
                    check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_21_21 == (MR_Integer) 0);
#line 202 "simplify_info.m"
                    check_hlds__simplify__simplify_info__succeeded = !(check_hlds__simplify__simplify_info__succeeded);
#line 202 "simplify_info.m"
                    if (check_hlds__simplify__simplify_info__succeeded)
#line 202 "simplify_info.m"
                      *check_hlds__simplify__simplify_info__HeadVar__1_1 = check_hlds__simplify__simplify_info__V_21_21;
#line 202 "simplify_info.m"
                    else
#line 202 "simplify_info.m"
                      {
#line 202 "simplify_info.m"
                        MR_Word check_hlds__simplify__simplify_info__V_22_22;

#line 202 "simplify_info.m"
                        {
#line 202 "simplify_info.m"
                          hlds__hlds_rtti____Compare____rtti_varmaps_0_0(&check_hlds__simplify__simplify_info__V_22_22, check_hlds__simplify__simplify_info__V_8_8, check_hlds__simplify__simplify_info__V_15_15);
                        }
#line 1912 "check_hlds.simplify.simplify_info.c"
                        check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_22_22 == (MR_Integer) 0);
#line 202 "simplify_info.m"
                        check_hlds__simplify__simplify_info__succeeded = !(check_hlds__simplify__simplify_info__succeeded);
#line 202 "simplify_info.m"
                        if (check_hlds__simplify__simplify_info__succeeded)
#line 202 "simplify_info.m"
                          *check_hlds__simplify__simplify_info__HeadVar__1_1 = check_hlds__simplify__simplify_info__V_22_22;
#line 202 "simplify_info.m"
                        else
#line 202 "simplify_info.m"
                          {
#line 202 "simplify_info.m"
                            MR_Word check_hlds__simplify__simplify_info__V_23_23;
#line 202 "simplify_info.m"
                            MR_Integer check_hlds__simplify__simplify_info__V_33_33 = (MR_Integer) check_hlds__simplify__simplify_info__V_9_9;
#line 202 "simplify_info.m"
                            MR_Integer check_hlds__simplify__simplify_info__V_34_34 = (MR_Integer) check_hlds__simplify__simplify_info__V_16_16;

#line 202 "simplify_info.m"
                            {
#line 202 "simplify_info.m"
                              mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__simplify__simplify_info__V_23_23, check_hlds__simplify__simplify_info__V_33_33, check_hlds__simplify__simplify_info__V_34_34);
                            }
#line 1936 "check_hlds.simplify.simplify_info.c"
                            check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_23_23 == (MR_Integer) 0);
#line 202 "simplify_info.m"
                            check_hlds__simplify__simplify_info__succeeded = !(check_hlds__simplify__simplify_info__succeeded);
#line 202 "simplify_info.m"
                            if (check_hlds__simplify__simplify_info__succeeded)
#line 202 "simplify_info.m"
                              *check_hlds__simplify__simplify_info__HeadVar__1_1 = check_hlds__simplify__simplify_info__V_23_23;
#line 202 "simplify_info.m"
                            else
#line 229 "simplify_info.m"
                              {
#line 229 "simplify_info.m"
                                MR_Integer check_hlds__simplify__simplify_info__CastX_67 = (MR_Integer) check_hlds__simplify__simplify_info__V_10_10;
#line 229 "simplify_info.m"
                                MR_Integer check_hlds__simplify__simplify_info__CastY_68 = (MR_Integer) check_hlds__simplify__simplify_info__V_17_17;

#line 229 "simplify_info.m"
                                check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__CastX_67 == check_hlds__simplify__simplify_info__CastY_68);
#line 229 "simplify_info.m"
                                if (check_hlds__simplify__simplify_info__succeeded)
#line 1957 "check_hlds.simplify.simplify_info.c"
                                  *check_hlds__simplify__simplify_info__HeadVar__1_1 = (MR_Integer) 0;
#line 229 "simplify_info.m"
                                else
#line 229 "simplify_info.m"
                                  {
#line 229 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, (MR_Integer) 0)));
#line 229 "simplify_info.m"
                                    MR_Integer check_hlds__simplify__simplify_info__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, (MR_Integer) 1)));
#line 229 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, (MR_Integer) 2)));
#line 229 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, (MR_Integer) 3)));
#line 229 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, (MR_Integer) 4)));
#line 229 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__V_40_40 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, (MR_Integer) 5)))) & (MR_Integer) 1);
#line 229 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 229 "simplify_info.m"
                                    MR_Integer check_hlds__simplify__simplify_info__V_42_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, (MR_Integer) 6)));
#line 229 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__V_43_43 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 229 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__V_44_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 229 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__V_45_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 229 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_17_17, (MR_Integer) 0)));
#line 229 "simplify_info.m"
                                    MR_Integer check_hlds__simplify__simplify_info__V_47_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_17_17, (MR_Integer) 1)));
#line 229 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_17_17, (MR_Integer) 2)));
#line 229 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_17_17, (MR_Integer) 3)));
#line 229 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_17_17, (MR_Integer) 4)));
#line 229 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__V_51_51 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_17_17, (MR_Integer) 5)))) & (MR_Integer) 1);
#line 229 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__V_52_52 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_17_17, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 229 "simplify_info.m"
                                    MR_Integer check_hlds__simplify__simplify_info__V_53_53 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_17_17, (MR_Integer) 6)));
#line 229 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__V_54_54 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_17_17, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 229 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__V_55_55 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_17_17, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 229 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__V_56_56 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_17_17, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 229 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__V_57_57;

#line 229 "simplify_info.m"
                                    {
#line 229 "simplify_info.m"
                                      hlds__hlds_pred____Compare____pred_id_0_0(&check_hlds__simplify__simplify_info__V_57_57, check_hlds__simplify__simplify_info__V_35_35, check_hlds__simplify__simplify_info__V_46_46);
                                    }
#line 2015 "check_hlds.simplify.simplify_info.c"
                                    check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_57_57 == (MR_Integer) 0);
#line 229 "simplify_info.m"
                                    check_hlds__simplify__simplify_info__succeeded = !(check_hlds__simplify__simplify_info__succeeded);
#line 229 "simplify_info.m"
                                    if (check_hlds__simplify__simplify_info__succeeded)
#line 229 "simplify_info.m"
                                      *check_hlds__simplify__simplify_info__HeadVar__1_1 = check_hlds__simplify__simplify_info__V_57_57;
#line 229 "simplify_info.m"
                                    else
#line 229 "simplify_info.m"
                                      {
#line 229 "simplify_info.m"
                                        MR_Word check_hlds__simplify__simplify_info__V_58_58;

#line 229 "simplify_info.m"
                                        {
#line 229 "simplify_info.m"
                                          mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__simplify__simplify_info__V_58_58, check_hlds__simplify__simplify_info__V_36_36, check_hlds__simplify__simplify_info__V_47_47);
                                        }
#line 2035 "check_hlds.simplify.simplify_info.c"
                                        check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_58_58 == (MR_Integer) 0);
#line 229 "simplify_info.m"
                                        check_hlds__simplify__simplify_info__succeeded = !(check_hlds__simplify__simplify_info__succeeded);
#line 229 "simplify_info.m"
                                        if (check_hlds__simplify__simplify_info__succeeded)
#line 229 "simplify_info.m"
                                          *check_hlds__simplify__simplify_info__HeadVar__1_1 = check_hlds__simplify__simplify_info__V_58_58;
#line 229 "simplify_info.m"
                                        else
#line 229 "simplify_info.m"
                                          {
#line 229 "simplify_info.m"
                                            MR_Word check_hlds__simplify__simplify_info__V_59_59;

#line 229 "simplify_info.m"
                                            {
#line 229 "simplify_info.m"
                                              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__simplify_info_scalar_common_1[4], &check_hlds__simplify__simplify_info__V_59_59, ((MR_Box) (check_hlds__simplify__simplify_info__V_37_37)), ((MR_Box) (check_hlds__simplify__simplify_info__V_48_48)));
                                            }
#line 2055 "check_hlds.simplify.simplify_info.c"
                                            check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_59_59 == (MR_Integer) 0);
#line 229 "simplify_info.m"
                                            check_hlds__simplify__simplify_info__succeeded = !(check_hlds__simplify__simplify_info__succeeded);
#line 229 "simplify_info.m"
                                            if (check_hlds__simplify__simplify_info__succeeded)
#line 229 "simplify_info.m"
                                              *check_hlds__simplify__simplify_info__HeadVar__1_1 = check_hlds__simplify__simplify_info__V_59_59;
#line 229 "simplify_info.m"
                                            else
#line 229 "simplify_info.m"
                                              {
#line 229 "simplify_info.m"
                                                MR_Word check_hlds__simplify__simplify_info__V_60_60;

#line 229 "simplify_info.m"
                                                {
#line 229 "simplify_info.m"
                                                  mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__simplify_info_scalar_common_1[6], &check_hlds__simplify__simplify_info__V_60_60, ((MR_Box) (check_hlds__simplify__simplify_info__V_38_38)), ((MR_Box) (check_hlds__simplify__simplify_info__V_49_49)));
                                                }
#line 2075 "check_hlds.simplify.simplify_info.c"
                                                check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_60_60 == (MR_Integer) 0);
#line 229 "simplify_info.m"
                                                check_hlds__simplify__simplify_info__succeeded = !(check_hlds__simplify__simplify_info__succeeded);
#line 229 "simplify_info.m"
                                                if (check_hlds__simplify__simplify_info__succeeded)
#line 229 "simplify_info.m"
                                                  *check_hlds__simplify__simplify_info__HeadVar__1_1 = check_hlds__simplify__simplify_info__V_60_60;
#line 229 "simplify_info.m"
                                                else
#line 229 "simplify_info.m"
                                                  {
#line 229 "simplify_info.m"
                                                    MR_Word check_hlds__simplify__simplify_info__V_61_61;

#line 229 "simplify_info.m"
                                                    {
#line 229 "simplify_info.m"
                                                      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__simplify_info_scalar_common_1[7], &check_hlds__simplify__simplify_info__V_61_61, ((MR_Box) (check_hlds__simplify__simplify_info__V_39_39)), ((MR_Box) (check_hlds__simplify__simplify_info__V_50_50)));
                                                    }
#line 2095 "check_hlds.simplify.simplify_info.c"
                                                    check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_61_61 == (MR_Integer) 0);
#line 229 "simplify_info.m"
                                                    check_hlds__simplify__simplify_info__succeeded = !(check_hlds__simplify__simplify_info__succeeded);
#line 229 "simplify_info.m"
                                                    if (check_hlds__simplify__simplify_info__succeeded)
#line 229 "simplify_info.m"
                                                      *check_hlds__simplify__simplify_info__HeadVar__1_1 = check_hlds__simplify__simplify_info__V_61_61;
#line 229 "simplify_info.m"
                                                    else
#line 229 "simplify_info.m"
                                                      {
#line 229 "simplify_info.m"
                                                        MR_Word check_hlds__simplify__simplify_info__V_62_62;
#line 229 "simplify_info.m"
                                                        MR_Integer check_hlds__simplify__simplify_info__V_80_80 = (MR_Integer) check_hlds__simplify__simplify_info__V_40_40;
#line 229 "simplify_info.m"
                                                        MR_Integer check_hlds__simplify__simplify_info__V_81_81 = (MR_Integer) check_hlds__simplify__simplify_info__V_51_51;

#line 229 "simplify_info.m"
                                                        {
#line 229 "simplify_info.m"
                                                          mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__simplify__simplify_info__V_62_62, check_hlds__simplify__simplify_info__V_80_80, check_hlds__simplify__simplify_info__V_81_81);
                                                        }
#line 2119 "check_hlds.simplify.simplify_info.c"
                                                        check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_62_62 == (MR_Integer) 0);
#line 229 "simplify_info.m"
                                                        check_hlds__simplify__simplify_info__succeeded = !(check_hlds__simplify__simplify_info__succeeded);
#line 229 "simplify_info.m"
                                                        if (check_hlds__simplify__simplify_info__succeeded)
#line 229 "simplify_info.m"
                                                          *check_hlds__simplify__simplify_info__HeadVar__1_1 = check_hlds__simplify__simplify_info__V_62_62;
#line 229 "simplify_info.m"
                                                        else
#line 229 "simplify_info.m"
                                                          {
#line 229 "simplify_info.m"
                                                            MR_Word check_hlds__simplify__simplify_info__V_63_63;
#line 229 "simplify_info.m"
                                                            MR_Integer check_hlds__simplify__simplify_info__V_82_82 = (MR_Integer) check_hlds__simplify__simplify_info__V_41_41;
#line 229 "simplify_info.m"
                                                            MR_Integer check_hlds__simplify__simplify_info__V_83_83 = (MR_Integer) check_hlds__simplify__simplify_info__V_52_52;

#line 229 "simplify_info.m"
                                                            {
#line 229 "simplify_info.m"
                                                              mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__simplify__simplify_info__V_63_63, check_hlds__simplify__simplify_info__V_82_82, check_hlds__simplify__simplify_info__V_83_83);
                                                            }
#line 2143 "check_hlds.simplify.simplify_info.c"
                                                            check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_63_63 == (MR_Integer) 0);
#line 229 "simplify_info.m"
                                                            check_hlds__simplify__simplify_info__succeeded = !(check_hlds__simplify__simplify_info__succeeded);
#line 229 "simplify_info.m"
                                                            if (check_hlds__simplify__simplify_info__succeeded)
#line 229 "simplify_info.m"
                                                              *check_hlds__simplify__simplify_info__HeadVar__1_1 = check_hlds__simplify__simplify_info__V_63_63;
#line 229 "simplify_info.m"
                                                            else
#line 229 "simplify_info.m"
                                                              {
#line 229 "simplify_info.m"
                                                                MR_Word check_hlds__simplify__simplify_info__V_64_64;

#line 229 "simplify_info.m"
                                                                {
#line 229 "simplify_info.m"
                                                                  mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__simplify__simplify_info__V_64_64, check_hlds__simplify__simplify_info__V_42_42, check_hlds__simplify__simplify_info__V_53_53);
                                                                }
#line 2163 "check_hlds.simplify.simplify_info.c"
                                                                check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_64_64 == (MR_Integer) 0);
#line 229 "simplify_info.m"
                                                                check_hlds__simplify__simplify_info__succeeded = !(check_hlds__simplify__simplify_info__succeeded);
#line 229 "simplify_info.m"
                                                                if (check_hlds__simplify__simplify_info__succeeded)
#line 229 "simplify_info.m"
                                                                  *check_hlds__simplify__simplify_info__HeadVar__1_1 = check_hlds__simplify__simplify_info__V_64_64;
#line 229 "simplify_info.m"
                                                                else
#line 229 "simplify_info.m"
                                                                  {
#line 229 "simplify_info.m"
                                                                    MR_Word check_hlds__simplify__simplify_info__V_65_65;
#line 229 "simplify_info.m"
                                                                    MR_Integer check_hlds__simplify__simplify_info__V_84_84 = (MR_Integer) check_hlds__simplify__simplify_info__V_43_43;
#line 229 "simplify_info.m"
                                                                    MR_Integer check_hlds__simplify__simplify_info__V_85_85 = (MR_Integer) check_hlds__simplify__simplify_info__V_54_54;

#line 229 "simplify_info.m"
                                                                    {
#line 229 "simplify_info.m"
                                                                      mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__simplify__simplify_info__V_65_65, check_hlds__simplify__simplify_info__V_84_84, check_hlds__simplify__simplify_info__V_85_85);
                                                                    }
#line 2187 "check_hlds.simplify.simplify_info.c"
                                                                    check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_65_65 == (MR_Integer) 0);
#line 229 "simplify_info.m"
                                                                    check_hlds__simplify__simplify_info__succeeded = !(check_hlds__simplify__simplify_info__succeeded);
#line 229 "simplify_info.m"
                                                                    if (check_hlds__simplify__simplify_info__succeeded)
#line 229 "simplify_info.m"
                                                                      *check_hlds__simplify__simplify_info__HeadVar__1_1 = check_hlds__simplify__simplify_info__V_65_65;
#line 229 "simplify_info.m"
                                                                    else
#line 229 "simplify_info.m"
                                                                      {
#line 229 "simplify_info.m"
                                                                        MR_Word check_hlds__simplify__simplify_info__V_66_66;
#line 229 "simplify_info.m"
                                                                        MR_Integer check_hlds__simplify__simplify_info__V_86_86 = (MR_Integer) check_hlds__simplify__simplify_info__V_44_44;
#line 229 "simplify_info.m"
                                                                        MR_Integer check_hlds__simplify__simplify_info__V_87_87 = (MR_Integer) check_hlds__simplify__simplify_info__V_55_55;

#line 229 "simplify_info.m"
                                                                        {
#line 229 "simplify_info.m"
                                                                          mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__simplify__simplify_info__V_66_66, check_hlds__simplify__simplify_info__V_86_86, check_hlds__simplify__simplify_info__V_87_87);
                                                                        }
#line 2211 "check_hlds.simplify.simplify_info.c"
                                                                        check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_66_66 == (MR_Integer) 0);
#line 229 "simplify_info.m"
                                                                        check_hlds__simplify__simplify_info__succeeded = !(check_hlds__simplify__simplify_info__succeeded);
#line 229 "simplify_info.m"
                                                                        if (check_hlds__simplify__simplify_info__succeeded)
#line 229 "simplify_info.m"
                                                                          *check_hlds__simplify__simplify_info__HeadVar__1_1 = check_hlds__simplify__simplify_info__V_66_66;
#line 229 "simplify_info.m"
                                                                        else
#line 229 "simplify_info.m"
                                                                          {
#line 229 "simplify_info.m"
                                                                            MR_Integer check_hlds__simplify__simplify_info__V_88_88 = (MR_Integer) check_hlds__simplify__simplify_info__V_45_45;
#line 229 "simplify_info.m"
                                                                            MR_Integer check_hlds__simplify__simplify_info__V_89_89 = (MR_Integer) check_hlds__simplify__simplify_info__V_56_56;

#line 229 "simplify_info.m"
                                                                            {
#line 229 "simplify_info.m"
                                                                              mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__simplify__simplify_info__HeadVar__1_1, check_hlds__simplify__simplify_info__V_88_88, check_hlds__simplify__simplify_info__V_89_89);
#line 229 "simplify_info.m"
                                                                              return;
                                                                            }
#line 229 "simplify_info.m"
                                                                          }
#line 229 "simplify_info.m"
                                                                      }
#line 229 "simplify_info.m"
                                                                  }
#line 229 "simplify_info.m"
                                                              }
#line 229 "simplify_info.m"
                                                          }
#line 229 "simplify_info.m"
                                                      }
#line 229 "simplify_info.m"
                                                  }
#line 229 "simplify_info.m"
                                              }
#line 229 "simplify_info.m"
                                          }
#line 229 "simplify_info.m"
                                      }
#line 229 "simplify_info.m"
                                  }
#line 229 "simplify_info.m"
                              }
#line 202 "simplify_info.m"
                          }
#line 202 "simplify_info.m"
                      }
#line 202 "simplify_info.m"
                  }
#line 202 "simplify_info.m"
              }
#line 202 "simplify_info.m"
          }
#line 202 "simplify_info.m"
      }
#line 202 "simplify_info.m"
  }
#line 202 "simplify_info.m"
}

#line 202 "simplify_info.m"
MR_bool MR_CALL 
check_hlds__simplify__simplify_info____Unify____simplify_info_0_0(
#line 202 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__HeadVar__1_1,
#line 202 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__HeadVar__2_2)
#line 202 "simplify_info.m"
{
#line 202 "simplify_info.m"
  {
#line 202 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 202 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__CastX_17 = (MR_Integer) check_hlds__simplify__simplify_info__HeadVar__1_1;
#line 202 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__CastY_18 = (MR_Integer) check_hlds__simplify__simplify_info__HeadVar__2_2;

#line 202 "simplify_info.m"
    check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__CastX_17 == check_hlds__simplify__simplify_info__CastY_18);
#line 202 "simplify_info.m"
    if (check_hlds__simplify__simplify_info__succeeded)
#line 202 "simplify_info.m"
      check_hlds__simplify__simplify_info__succeeded = MR_TRUE;
#line 202 "simplify_info.m"
    else
#line 202 "simplify_info.m"
      {
#line 202 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__TypeInfo_21_21;
#line 202 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__TypeInfo_22_22;
#line 202 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__1_1, (MR_Integer) 0)));
#line 202 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__1_1, (MR_Integer) 1)));
#line 202 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__1_1, (MR_Integer) 2)));
#line 202 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__1_1, (MR_Integer) 3)));
#line 202 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__1_1, (MR_Integer) 4)));
#line 202 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__1_1, (MR_Integer) 5)));
#line 202 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__1_1, (MR_Integer) 6)));
#line 202 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 0)));
#line 202 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 1)));
#line 202 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 2)));
#line 202 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 3)));
#line 202 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 4)));
#line 202 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 5)));
#line 202 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 6)));
#line 229 "simplify_info.m"
        MR_Integer check_hlds__simplify__simplify_info__CastX_46;
#line 229 "simplify_info.m"
        MR_Integer check_hlds__simplify__simplify_info__CastY_47;

#line 2341 "check_hlds.simplify.simplify_info.c"
        {
#line 2343 "check_hlds.simplify.simplify_info.c"
          check_hlds__simplify__simplify_info__succeeded = check_hlds__simplify__simplify_tasks____Unify____simplify_tasks_0_0(check_hlds__simplify__simplify_info__V_3_3, check_hlds__simplify__simplify_info__V_10_10);
        }
#line 202 "simplify_info.m"
        if (check_hlds__simplify__simplify_info__succeeded)
#line 202 "simplify_info.m"
          {
#line 2350 "check_hlds.simplify.simplify_info.c"
            {
#line 2352 "check_hlds.simplify.simplify_info.c"
              check_hlds__simplify__simplify_info__succeeded = hlds__hlds_module____Unify____module_info_0_0(check_hlds__simplify__simplify_info__V_4_4, check_hlds__simplify__simplify_info__V_11_11);
            }
#line 202 "simplify_info.m"
            if (check_hlds__simplify__simplify_info__succeeded)
#line 202 "simplify_info.m"
              {
#line 2359 "check_hlds.simplify.simplify_info.c"
                check_hlds__simplify__simplify_info__TypeInfo_21_21 = (MR_Word) &check_hlds__simplify__simplify_info_scalar_common_1[2];
#line 2361 "check_hlds.simplify.simplify_info.c"
                {
#line 2363 "check_hlds.simplify.simplify_info.c"
                  check_hlds__simplify__simplify_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__simplify_info__TypeInfo_21_21, ((MR_Box) (check_hlds__simplify__simplify_info__V_5_5)), ((MR_Box) (check_hlds__simplify__simplify_info__V_12_12)));
                }
#line 202 "simplify_info.m"
                if (check_hlds__simplify__simplify_info__succeeded)
#line 202 "simplify_info.m"
                  {
#line 2370 "check_hlds.simplify.simplify_info.c"
                    check_hlds__simplify__simplify_info__TypeInfo_22_22 = (MR_Word) &check_hlds__simplify__simplify_info_scalar_common_2[0];
#line 2372 "check_hlds.simplify.simplify_info.c"
                    {
#line 2374 "check_hlds.simplify.simplify_info.c"
                      check_hlds__simplify__simplify_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__simplify_info__TypeInfo_22_22, ((MR_Box) (check_hlds__simplify__simplify_info__V_6_6)), ((MR_Box) (check_hlds__simplify__simplify_info__V_13_13)));
                    }
#line 202 "simplify_info.m"
                    if (check_hlds__simplify__simplify_info__succeeded)
#line 202 "simplify_info.m"
                      {
#line 2381 "check_hlds.simplify.simplify_info.c"
                        {
#line 2383 "check_hlds.simplify.simplify_info.c"
                          check_hlds__simplify__simplify_info__succeeded = hlds__hlds_rtti____Unify____rtti_varmaps_0_0(check_hlds__simplify__simplify_info__V_7_7, check_hlds__simplify__simplify_info__V_14_14);
                        }
#line 202 "simplify_info.m"
                        if (check_hlds__simplify__simplify_info__succeeded)
#line 202 "simplify_info.m"
                          {
#line 2390 "check_hlds.simplify.simplify_info.c"
                            check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_8_8 == check_hlds__simplify__simplify_info__V_15_15);
#line 202 "simplify_info.m"
                            if (check_hlds__simplify__simplify_info__succeeded)
#line 202 "simplify_info.m"
                              {
#line 229 "simplify_info.m"
                                check_hlds__simplify__simplify_info__CastX_46 = (MR_Integer) check_hlds__simplify__simplify_info__V_9_9;
#line 229 "simplify_info.m"
                                check_hlds__simplify__simplify_info__CastY_47 = (MR_Integer) check_hlds__simplify__simplify_info__V_16_16;
#line 229 "simplify_info.m"
                                check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__CastX_46 == check_hlds__simplify__simplify_info__CastY_47);
#line 229 "simplify_info.m"
                                if (check_hlds__simplify__simplify_info__succeeded)
#line 229 "simplify_info.m"
                                  check_hlds__simplify__simplify_info__succeeded = MR_TRUE;
#line 229 "simplify_info.m"
                                else
#line 229 "simplify_info.m"
                                  {
#line 229 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__TypeInfo_28_49;
#line 229 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__TypeInfo_29_50;
#line 229 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__TypeInfo_30_51;
#line 229 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 0)));
#line 229 "simplify_info.m"
                                    MR_Integer check_hlds__simplify__simplify_info__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 1)));
#line 229 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 2)));
#line 229 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 3)));
#line 229 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 4)));
#line 229 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__V_29_29 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 5)))) & (MR_Integer) 1);
#line 229 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 229 "simplify_info.m"
                                    MR_Integer check_hlds__simplify__simplify_info__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 6)));
#line 229 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__V_32_32 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 229 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 229 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 229 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_16_16, (MR_Integer) 0)));
#line 229 "simplify_info.m"
                                    MR_Integer check_hlds__simplify__simplify_info__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_16_16, (MR_Integer) 1)));
#line 229 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_16_16, (MR_Integer) 2)));
#line 229 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_16_16, (MR_Integer) 3)));
#line 229 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_16_16, (MR_Integer) 4)));
#line 229 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__V_40_40 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_16_16, (MR_Integer) 5)))) & (MR_Integer) 1);
#line 229 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_16_16, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 229 "simplify_info.m"
                                    MR_Integer check_hlds__simplify__simplify_info__V_42_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_16_16, (MR_Integer) 6)));
#line 229 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__V_43_43 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_16_16, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 229 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__V_44_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_16_16, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 229 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__V_45_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_16_16, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);

#line 2461 "check_hlds.simplify.simplify_info.c"
                                    {
#line 2463 "check_hlds.simplify.simplify_info.c"
                                      check_hlds__simplify__simplify_info__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(check_hlds__simplify__simplify_info__V_24_24, check_hlds__simplify__simplify_info__V_35_35);
                                    }
#line 229 "simplify_info.m"
                                    if (check_hlds__simplify__simplify_info__succeeded)
#line 229 "simplify_info.m"
                                      {
#line 2470 "check_hlds.simplify.simplify_info.c"
                                        check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_25_25 == check_hlds__simplify__simplify_info__V_36_36);
#line 229 "simplify_info.m"
                                        if (check_hlds__simplify__simplify_info__succeeded)
#line 229 "simplify_info.m"
                                          {
#line 2476 "check_hlds.simplify.simplify_info.c"
                                            check_hlds__simplify__simplify_info__TypeInfo_28_49 = (MR_Word) &check_hlds__simplify__simplify_info_scalar_common_1[4];
#line 2478 "check_hlds.simplify.simplify_info.c"
                                            {
#line 2480 "check_hlds.simplify.simplify_info.c"
                                              check_hlds__simplify__simplify_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__simplify_info__TypeInfo_28_49, ((MR_Box) (check_hlds__simplify__simplify_info__V_26_26)), ((MR_Box) (check_hlds__simplify__simplify_info__V_37_37)));
                                            }
#line 229 "simplify_info.m"
                                            if (check_hlds__simplify__simplify_info__succeeded)
#line 229 "simplify_info.m"
                                              {
#line 2487 "check_hlds.simplify.simplify_info.c"
                                                check_hlds__simplify__simplify_info__TypeInfo_29_50 = (MR_Word) &check_hlds__simplify__simplify_info_scalar_common_1[6];
#line 2489 "check_hlds.simplify.simplify_info.c"
                                                {
#line 2491 "check_hlds.simplify.simplify_info.c"
                                                  check_hlds__simplify__simplify_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__simplify_info__TypeInfo_29_50, ((MR_Box) (check_hlds__simplify__simplify_info__V_27_27)), ((MR_Box) (check_hlds__simplify__simplify_info__V_38_38)));
                                                }
#line 229 "simplify_info.m"
                                                if (check_hlds__simplify__simplify_info__succeeded)
#line 229 "simplify_info.m"
                                                  {
#line 2498 "check_hlds.simplify.simplify_info.c"
                                                    check_hlds__simplify__simplify_info__TypeInfo_30_51 = (MR_Word) &check_hlds__simplify__simplify_info_scalar_common_1[7];
#line 2500 "check_hlds.simplify.simplify_info.c"
                                                    {
#line 2502 "check_hlds.simplify.simplify_info.c"
                                                      check_hlds__simplify__simplify_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__simplify_info__TypeInfo_30_51, ((MR_Box) (check_hlds__simplify__simplify_info__V_28_28)), ((MR_Box) (check_hlds__simplify__simplify_info__V_39_39)));
                                                    }
#line 229 "simplify_info.m"
                                                    if (check_hlds__simplify__simplify_info__succeeded)
#line 229 "simplify_info.m"
                                                      {
#line 2509 "check_hlds.simplify.simplify_info.c"
                                                        check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_29_29 == check_hlds__simplify__simplify_info__V_40_40);
#line 229 "simplify_info.m"
                                                        if (check_hlds__simplify__simplify_info__succeeded)
#line 229 "simplify_info.m"
                                                          {
#line 2515 "check_hlds.simplify.simplify_info.c"
                                                            check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_30_30 == check_hlds__simplify__simplify_info__V_41_41);
#line 229 "simplify_info.m"
                                                            if (check_hlds__simplify__simplify_info__succeeded)
#line 229 "simplify_info.m"
                                                              {
#line 2521 "check_hlds.simplify.simplify_info.c"
                                                                check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_31_31 == check_hlds__simplify__simplify_info__V_42_42);
#line 229 "simplify_info.m"
                                                                if (check_hlds__simplify__simplify_info__succeeded)
#line 229 "simplify_info.m"
                                                                  {
#line 2527 "check_hlds.simplify.simplify_info.c"
                                                                    check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_32_32 == check_hlds__simplify__simplify_info__V_43_43);
#line 229 "simplify_info.m"
                                                                    if (check_hlds__simplify__simplify_info__succeeded)
#line 229 "simplify_info.m"
                                                                      {
#line 2533 "check_hlds.simplify.simplify_info.c"
                                                                        check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_33_33 == check_hlds__simplify__simplify_info__V_44_44);
#line 229 "simplify_info.m"
                                                                        if (check_hlds__simplify__simplify_info__succeeded)
#line 2537 "check_hlds.simplify.simplify_info.c"
                                                                          check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_34_34 == check_hlds__simplify__simplify_info__V_45_45);
#line 229 "simplify_info.m"
                                                                      }
#line 229 "simplify_info.m"
                                                                  }
#line 229 "simplify_info.m"
                                                              }
#line 229 "simplify_info.m"
                                                          }
#line 229 "simplify_info.m"
                                                      }
#line 229 "simplify_info.m"
                                                  }
#line 229 "simplify_info.m"
                                              }
#line 229 "simplify_info.m"
                                          }
#line 229 "simplify_info.m"
                                      }
#line 229 "simplify_info.m"
                                  }
#line 202 "simplify_info.m"
                              }
#line 202 "simplify_info.m"
                          }
#line 202 "simplify_info.m"
                      }
#line 202 "simplify_info.m"
                  }
#line 202 "simplify_info.m"
              }
#line 202 "simplify_info.m"
          }
#line 202 "simplify_info.m"
      }
#line 202 "simplify_info.m"
    return check_hlds__simplify__simplify_info__succeeded;
#line 202 "simplify_info.m"
  }
#line 202 "simplify_info.m"
}

#line 38 "simplify_info.m"
void MR_CALL 
check_hlds__simplify__simplify_info____Compare____innermost_proc_0_0(
#line 38 "simplify_info.m"
  MR_Word * check_hlds__simplify__simplify_info__HeadVar__1_1,
#line 38 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__HeadVar__2_2,
#line 38 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__HeadVar__3_3)
#line 38 "simplify_info.m"
{
#line 38 "simplify_info.m"
  {
#line 38 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 38 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__CastX_8 = (MR_Integer) check_hlds__simplify__simplify_info__HeadVar__2_2;
#line 38 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__CastY_9 = (MR_Integer) check_hlds__simplify__simplify_info__HeadVar__3_3;

#line 38 "simplify_info.m"
    check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__CastX_8 == check_hlds__simplify__simplify_info__CastY_9);
#line 38 "simplify_info.m"
    if (check_hlds__simplify__simplify_info__succeeded)
#line 2604 "check_hlds.simplify.simplify_info.c"
      *check_hlds__simplify__simplify_info__HeadVar__1_1 = (MR_Integer) 0;
#line 38 "simplify_info.m"
    else
#line 38 "simplify_info.m"
    if ((check_hlds__simplify__simplify_info__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 38 "simplify_info.m"
      if ((check_hlds__simplify__simplify_info__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 38 "simplify_info.m"
        *check_hlds__simplify__simplify_info__HeadVar__1_1 = (MR_Integer) 0;
#line 38 "simplify_info.m"
      else
#line 2616 "check_hlds.simplify.simplify_info.c"
        *check_hlds__simplify__simplify_info__HeadVar__1_1 = (MR_Integer) 1;
#line 38 "simplify_info.m"
    else
#line 38 "simplify_info.m"
      {
#line 38 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 0)));

#line 38 "simplify_info.m"
        if ((check_hlds__simplify__simplify_info__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2627 "check_hlds.simplify.simplify_info.c"
          *check_hlds__simplify__simplify_info__HeadVar__1_1 = (MR_Integer) 2;
#line 38 "simplify_info.m"
        else
#line 38 "simplify_info.m"
          {
#line 38 "simplify_info.m"
            MR_Word check_hlds__simplify__simplify_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_info__HeadVar__3_3, (MR_Integer) 0)));

#line 38 "simplify_info.m"
            {
#line 38 "simplify_info.m"
              mercury__term____Compare____context_0_0(check_hlds__simplify__simplify_info__HeadVar__1_1, check_hlds__simplify__simplify_info__V_11_11, check_hlds__simplify__simplify_info__V_7_7);
#line 38 "simplify_info.m"
              return;
            }
#line 38 "simplify_info.m"
          }
#line 38 "simplify_info.m"
      }
#line 38 "simplify_info.m"
  }
#line 38 "simplify_info.m"
}

#line 38 "simplify_info.m"
MR_bool MR_CALL 
check_hlds__simplify__simplify_info____Unify____innermost_proc_0_0(
#line 38 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__HeadVar__1_1,
#line 38 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__HeadVar__2_2)
#line 38 "simplify_info.m"
{
#line 38 "simplify_info.m"
  {
#line 38 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 38 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__CastX_7 = (MR_Integer) check_hlds__simplify__simplify_info__HeadVar__1_1;
#line 38 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__CastY_8 = (MR_Integer) check_hlds__simplify__simplify_info__HeadVar__2_2;

#line 38 "simplify_info.m"
    check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__CastX_7 == check_hlds__simplify__simplify_info__CastY_8);
#line 38 "simplify_info.m"
    if (check_hlds__simplify__simplify_info__succeeded)
#line 38 "simplify_info.m"
      check_hlds__simplify__simplify_info__succeeded = MR_TRUE;
#line 38 "simplify_info.m"
    else
#line 38 "simplify_info.m"
    if ((check_hlds__simplify__simplify_info__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 38 "simplify_info.m"
      {
#line 38 "simplify_info.m"
        MR_Integer check_hlds__simplify__simplify_info__CastX_3 = (MR_Integer) check_hlds__simplify__simplify_info__HeadVar__1_1;
#line 38 "simplify_info.m"
        MR_Integer check_hlds__simplify__simplify_info__CastY_4 = (MR_Integer) check_hlds__simplify__simplify_info__HeadVar__2_2;

#line 38 "simplify_info.m"
        check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__CastY_4 == check_hlds__simplify__simplify_info__CastX_3);
#line 38 "simplify_info.m"
      }
#line 38 "simplify_info.m"
    else
#line 38 "simplify_info.m"
      {
#line 38 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_info__HeadVar__1_1, (MR_Integer) 0)));
#line 38 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_6_6;

#line 38 "simplify_info.m"
        check_hlds__simplify__simplify_info__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 38 "simplify_info.m"
        if (check_hlds__simplify__simplify_info__succeeded)
#line 38 "simplify_info.m"
          {
#line 38 "simplify_info.m"
            check_hlds__simplify__simplify_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 0)));
#line 2708 "check_hlds.simplify.simplify_info.c"
            {
#line 2710 "check_hlds.simplify.simplify_info.c"
              return check_hlds__simplify__simplify_info__succeeded = mercury__term____Unify____context_0_0(check_hlds__simplify__simplify_info__V_5_5, check_hlds__simplify__simplify_info__V_6_6);
            }
#line 38 "simplify_info.m"
          }
#line 38 "simplify_info.m"
      }
#line 38 "simplify_info.m"
    return check_hlds__simplify__simplify_info__succeeded;
#line 38 "simplify_info.m"
  }
#line 38 "simplify_info.m"
}

#line 184 "simplify_info.m"
MR_bool MR_CALL 
check_hlds__simplify__simplify_info__simplify_do_warn_or_opt_duplicate_calls_2_p_0(
#line 184 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__Info_3,
#line 184 "simplify_info.m"
  MR_Word * check_hlds__simplify__simplify_info__OptDuplicateCalls_4)
#line 184 "simplify_info.m"
{
#line 441 "simplify_info.m"
  {
#line 441 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 441 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__SimplifyTasks_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 0)));
#line 441 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__WarnDuplicateCalls_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_5, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 336 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 1)));
#line 336 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 2)));
#line 336 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 3)));
#line 336 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 4)));
#line 336 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 5)));
#line 336 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 6)));
#line 443 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_7_7 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_5, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 443 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_5, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 443 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_5, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 443 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_5, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 443 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_5, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 443 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_5, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 443 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_5, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 443 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_15_15;
#line 443 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_16_16;
#line 443 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_17_17;
#line 443 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_18_18;

#line 443 "simplify_info.m"
    *check_hlds__simplify__simplify_info__OptDuplicateCalls_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_5, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 443 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_5, (MR_Integer) 0)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 443 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_5, (MR_Integer) 0)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 443 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_17_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_5, (MR_Integer) 0)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 443 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_5, (MR_Integer) 0)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 445 "simplify_info.m"
    check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__WarnDuplicateCalls_6 == (MR_Integer) 1);
#line 446 "simplify_info.m"
    if (!(check_hlds__simplify__simplify_info__succeeded))
#line 446 "simplify_info.m"
      check_hlds__simplify__simplify_info__succeeded = (*check_hlds__simplify__simplify_info__OptDuplicateCalls_4 == (MR_Integer) 1);
#line 441 "simplify_info.m"
    return check_hlds__simplify__simplify_info__succeeded;
#line 441 "simplify_info.m"
  }
#line 184 "simplify_info.m"
}

#line 179 "simplify_info.m"
MR_bool MR_CALL 
check_hlds__simplify__simplify_info__simplify_do_ignore_par_conjunctions_1_p_0(
#line 179 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__Info_2)
#line 179 "simplify_info.m"
{
#line 437 "simplify_info.m"
  {
#line 437 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 437 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__SimplifyTasks_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 0)));
#line 437 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_4_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 336 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 1)));
#line 336 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 2)));
#line 336 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 3)));
#line 336 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 4)));
#line 336 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 5)));
#line 336 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 6)));
#line 439 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_5_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 439 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 439 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 439 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 439 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 439 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 439 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 439 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 439 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 439 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 439 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 439 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 11)) & (MR_Integer) 1);

#line 439 "simplify_info.m"
    check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_4_4 == (MR_Integer) 1);
#line 437 "simplify_info.m"
    return check_hlds__simplify__simplify_info__succeeded;
#line 437 "simplify_info.m"
  }
#line 179 "simplify_info.m"
}

#line 178 "simplify_info.m"
MR_bool MR_CALL 
check_hlds__simplify__simplify_info__simplify_do_extra_common_struct_1_p_0(
#line 178 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__Info_2)
#line 178 "simplify_info.m"
{
#line 434 "simplify_info.m"
  {
#line 434 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 434 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__SimplifyTasks_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 0)));
#line 434 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_4_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 336 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 1)));
#line 336 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 2)));
#line 336 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 3)));
#line 336 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 4)));
#line 336 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 5)));
#line 336 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 6)));
#line 436 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_5_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 436 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 436 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 436 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 436 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 436 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 436 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 436 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 436 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 436 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 436 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 436 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 12)) & (MR_Integer) 1);

#line 436 "simplify_info.m"
    check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_4_4 == (MR_Integer) 1);
#line 434 "simplify_info.m"
    return check_hlds__simplify__simplify_info__succeeded;
#line 434 "simplify_info.m"
  }
#line 178 "simplify_info.m"
}

#line 177 "simplify_info.m"
MR_bool MR_CALL 
check_hlds__simplify__simplify_info__simplify_do_common_struct_1_p_0(
#line 177 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__Info_2)
#line 177 "simplify_info.m"
{
#line 431 "simplify_info.m"
  {
#line 431 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 431 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__SimplifyTasks_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 0)));
#line 431 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_4_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 336 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 1)));
#line 336 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 2)));
#line 336 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 3)));
#line 336 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 4)));
#line 336 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 5)));
#line 336 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 6)));
#line 433 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_5_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 433 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 433 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 433 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 433 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 433 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 433 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 433 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 433 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 433 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 433 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 433 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 12)) & (MR_Integer) 1);

#line 433 "simplify_info.m"
    check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_4_4 == (MR_Integer) 1);
#line 431 "simplify_info.m"
    return check_hlds__simplify__simplify_info__succeeded;
#line 431 "simplify_info.m"
  }
#line 177 "simplify_info.m"
}

#line 176 "simplify_info.m"
MR_bool MR_CALL 
check_hlds__simplify__simplify_info__simplify_do_const_prop_1_p_0(
#line 176 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__Info_2)
#line 176 "simplify_info.m"
{
#line 428 "simplify_info.m"
  {
#line 428 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 428 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__SimplifyTasks_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 0)));
#line 428 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_4_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 336 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 1)));
#line 336 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 2)));
#line 336 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 3)));
#line 336 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 4)));
#line 336 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 5)));
#line 336 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 6)));
#line 430 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_5_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 430 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 430 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 430 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 430 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 430 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 430 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 430 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 430 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 430 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 430 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 430 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 12)) & (MR_Integer) 1);

#line 430 "simplify_info.m"
    check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_4_4 == (MR_Integer) 1);
#line 428 "simplify_info.m"
    return check_hlds__simplify__simplify_info__succeeded;
#line 428 "simplify_info.m"
  }
#line 176 "simplify_info.m"
}

#line 175 "simplify_info.m"
MR_bool MR_CALL 
check_hlds__simplify__simplify_info__simplify_do_opt_duplicate_calls_1_p_0(
#line 175 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__Info_2)
#line 175 "simplify_info.m"
{
#line 425 "simplify_info.m"
  {
#line 425 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 425 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__SimplifyTasks_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 0)));
#line 425 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_4_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 336 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 1)));
#line 336 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 2)));
#line 336 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 3)));
#line 336 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 4)));
#line 336 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 5)));
#line 336 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 6)));
#line 427 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_5_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 427 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 427 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 427 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 427 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 427 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 427 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 427 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 427 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 427 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 427 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 427 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 12)) & (MR_Integer) 1);

#line 427 "simplify_info.m"
    check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_4_4 == (MR_Integer) 1);
#line 425 "simplify_info.m"
    return check_hlds__simplify__simplify_info__succeeded;
#line 425 "simplify_info.m"
  }
#line 175 "simplify_info.m"
}

#line 174 "simplify_info.m"
MR_bool MR_CALL 
check_hlds__simplify__simplify_info__simplify_do_elim_removable_scopes_1_p_0(
#line 174 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__Info_2)
#line 174 "simplify_info.m"
{
#line 422 "simplify_info.m"
  {
#line 422 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 422 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__SimplifyTasks_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 0)));
#line 422 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_4_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 336 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 1)));
#line 336 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 2)));
#line 336 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 3)));
#line 336 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 4)));
#line 336 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 5)));
#line 336 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 6)));
#line 424 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_5_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 424 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 424 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 424 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 424 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 424 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 424 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 424 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 424 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 424 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 424 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 424 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 12)) & (MR_Integer) 1);

#line 424 "simplify_info.m"
    check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_4_4 == (MR_Integer) 1);
#line 422 "simplify_info.m"
    return check_hlds__simplify__simplify_info__succeeded;
#line 422 "simplify_info.m"
  }
#line 174 "simplify_info.m"
}

#line 173 "simplify_info.m"
MR_bool MR_CALL 
check_hlds__simplify__simplify_info__simplify_do_excess_assign_1_p_0(
#line 173 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__Info_2)
#line 173 "simplify_info.m"
{
#line 419 "simplify_info.m"
  {
#line 419 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 419 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__SimplifyTasks_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 0)));
#line 419 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_4_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 336 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 1)));
#line 336 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 2)));
#line 336 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 3)));
#line 336 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 4)));
#line 336 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 5)));
#line 336 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 6)));
#line 421 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_5_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 421 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 421 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 421 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 421 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 421 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 421 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 421 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 421 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 421 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 421 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 421 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 12)) & (MR_Integer) 1);

#line 421 "simplify_info.m"
    check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_4_4 == (MR_Integer) 1);
#line 419 "simplify_info.m"
    return check_hlds__simplify__simplify_info__succeeded;
#line 419 "simplify_info.m"
  }
#line 173 "simplify_info.m"
}

#line 172 "simplify_info.m"
MR_bool MR_CALL 
check_hlds__simplify__simplify_info__simplify_do_after_front_end_1_p_0(
#line 172 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__Info_2)
#line 172 "simplify_info.m"
{
#line 416 "simplify_info.m"
  {
#line 416 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 416 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__SimplifyTasks_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 0)));
#line 416 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_4_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 336 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 1)));
#line 336 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 2)));
#line 336 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 3)));
#line 336 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 4)));
#line 336 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 5)));
#line 336 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 6)));
#line 418 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_5_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 418 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 418 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 418 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 418 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 418 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 418 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 418 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 418 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 418 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 418 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 418 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 12)) & (MR_Integer) 1);

#line 418 "simplify_info.m"
    check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_4_4 == (MR_Integer) 1);
#line 416 "simplify_info.m"
    return check_hlds__simplify__simplify_info__succeeded;
#line 416 "simplify_info.m"
  }
#line 172 "simplify_info.m"
}

#line 171 "simplify_info.m"
MR_bool MR_CALL 
check_hlds__simplify__simplify_info__simplify_do_mark_code_model_changes_1_p_0(
#line 171 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__Info_2)
#line 171 "simplify_info.m"
{
#line 413 "simplify_info.m"
  {
#line 413 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 413 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__SimplifyTasks_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 0)));
#line 413 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_4_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 336 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 1)));
#line 336 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 2)));
#line 336 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 3)));
#line 336 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 4)));
#line 336 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 5)));
#line 336 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 6)));
#line 415 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_5_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 415 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 415 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 415 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 415 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 415 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 415 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 415 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 415 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 415 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 415 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 415 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 12)) & (MR_Integer) 1);

#line 415 "simplify_info.m"
    check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_4_4 == (MR_Integer) 1);
#line 413 "simplify_info.m"
    return check_hlds__simplify__simplify_info__succeeded;
#line 413 "simplify_info.m"
  }
#line 171 "simplify_info.m"
}

#line 170 "simplify_info.m"
MR_bool MR_CALL 
check_hlds__simplify__simplify_info__simplify_do_warn_obsolete_1_p_0(
#line 170 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__Info_2)
#line 170 "simplify_info.m"
{
#line 410 "simplify_info.m"
  {
#line 410 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 410 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__SimplifyTasks_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 0)));
#line 410 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_4_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 336 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 1)));
#line 336 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 2)));
#line 336 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 3)));
#line 336 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 4)));
#line 336 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 5)));
#line 336 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 6)));
#line 412 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_5_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 412 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 412 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 412 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 412 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 412 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 412 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 412 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 412 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 412 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 412 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 412 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 12)) & (MR_Integer) 1);

#line 412 "simplify_info.m"
    check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_4_4 == (MR_Integer) 1);
#line 410 "simplify_info.m"
    return check_hlds__simplify__simplify_info__succeeded;
#line 410 "simplify_info.m"
  }
#line 170 "simplify_info.m"
}

#line 169 "simplify_info.m"
MR_bool MR_CALL 
check_hlds__simplify__simplify_info__simplify_do_format_calls_1_p_0(
#line 169 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__Info_2)
#line 169 "simplify_info.m"
{
#line 407 "simplify_info.m"
  {
#line 407 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 407 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__SimplifyTasks_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 0)));
#line 407 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_4_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 336 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 1)));
#line 336 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 2)));
#line 336 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 3)));
#line 336 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 4)));
#line 336 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 5)));
#line 336 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 6)));
#line 409 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_5_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 409 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 409 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 409 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 409 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 409 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 409 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 409 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 409 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 409 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 409 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 409 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 12)) & (MR_Integer) 1);

#line 409 "simplify_info.m"
    check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_4_4 == (MR_Integer) 1);
#line 407 "simplify_info.m"
    return check_hlds__simplify__simplify_info__succeeded;
#line 407 "simplify_info.m"
  }
#line 169 "simplify_info.m"
}

#line 168 "simplify_info.m"
MR_bool MR_CALL 
check_hlds__simplify__simplify_info__simplify_do_warn_duplicate_calls_1_p_0(
#line 168 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__Info_2)
#line 168 "simplify_info.m"
{
#line 404 "simplify_info.m"
  {
#line 404 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 404 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__SimplifyTasks_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 0)));
#line 404 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_4_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 336 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 1)));
#line 336 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 2)));
#line 336 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 3)));
#line 336 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 4)));
#line 336 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 5)));
#line 336 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 6)));
#line 406 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_5_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 406 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 406 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 406 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 406 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 406 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 406 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 406 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 406 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 406 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 406 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 406 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 12)) & (MR_Integer) 1);

#line 406 "simplify_info.m"
    check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_4_4 == (MR_Integer) 1);
#line 404 "simplify_info.m"
    return check_hlds__simplify__simplify_info__succeeded;
#line 404 "simplify_info.m"
  }
#line 168 "simplify_info.m"
}

#line 167 "simplify_info.m"
MR_bool MR_CALL 
check_hlds__simplify__simplify_info__simplify_do_warn_simple_code_1_p_0(
#line 167 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__Info_2)
#line 167 "simplify_info.m"
{
#line 401 "simplify_info.m"
  {
#line 401 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 401 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__SimplifyTasks_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 0)));
#line 401 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_4_4 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 336 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 1)));
#line 336 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 2)));
#line 336 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 3)));
#line 336 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 4)));
#line 336 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 5)));
#line 336 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 6)));
#line 403 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_5_5 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 403 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 403 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 403 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 403 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 403 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 403 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 403 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 403 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 403 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 403 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 403 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 12)) & (MR_Integer) 1);

#line 403 "simplify_info.m"
    check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_4_4 == (MR_Integer) 1);
#line 401 "simplify_info.m"
    return check_hlds__simplify__simplify_info__succeeded;
#line 401 "simplify_info.m"
  }
#line 167 "simplify_info.m"
}

#line 162 "simplify_info.m"
void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_set_has_user_event_3_p_0(
#line 162 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__HUE_4,
#line 162 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6,
#line 162 "simplify_info.m"
  MR_Word * check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_7)
#line 162 "simplify_info.m"
{
#line 396 "simplify_info.m"
  {
#line 396 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 396 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
#line 396 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_10_10;
#line 396 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
#line 396 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
#line 396 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
#line 396 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
#line 396 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
#line 396 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
#line 397 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 0)));
#line 397 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 1)));
#line 397 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 2)));
#line 397 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 3)));
#line 397 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 4)));
#line 397 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_22_22 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 5)))) & (MR_Integer) 1);
#line 397 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 397 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 6)));
#line 397 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_25_25 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 397 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 397 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);

#line 397 "simplify_info.m"
    {
#line 397 "simplify_info.m"
      check_hlds__simplify__simplify_info__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 397 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__V_17_17));
#line 397 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__V_18_18));
#line 397 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 2) = ((MR_Box) (check_hlds__simplify__simplify_info__V_19_19));
#line 397 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 3) = ((MR_Box) (check_hlds__simplify__simplify_info__V_20_20));
#line 397 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 4) = ((MR_Box) (check_hlds__simplify__simplify_info__V_21_21));
#line 397 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 5) = ((MR_Box) ((check_hlds__simplify__simplify_info__V_22_22 | ((check_hlds__simplify__simplify_info__V_23_23 << (MR_Integer) 1)))));
#line 397 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 6) = ((MR_Box) (check_hlds__simplify__simplify_info__V_24_24));
#line 397 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 7) = ((MR_Box) ((check_hlds__simplify__simplify_info__V_25_25 | ((((check_hlds__simplify__simplify_info__V_26_26 << (MR_Integer) 1)) | ((check_hlds__simplify__simplify_info__HUE_4 << (MR_Integer) 2)))))));
#line 397 "simplify_info.m"
    }
#line 397 "simplify_info.m"
    {
#line 397 "simplify_info.m"
      MR_Word base;
#line 397 "simplify_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 397 "simplify_info.m"
      *check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_7 = base;
#line 397 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__V_11_11));
#line 397 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__V_12_12));
#line 397 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__simplify__simplify_info__V_13_13));
#line 397 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__simplify__simplify_info__V_14_14));
#line 397 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__simplify__simplify_info__V_15_15));
#line 397 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__simplify__simplify_info__V_16_16));
#line 397 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__simplify__simplify_info__V_10_10));
#line 397 "simplify_info.m"
    }
#line 396 "simplify_info.m"
  }
#line 162 "simplify_info.m"
}

#line 160 "simplify_info.m"
void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_set_found_contains_trace_3_p_0(
#line 160 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__FCT_4,
#line 160 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6,
#line 160 "simplify_info.m"
  MR_Word * check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_7)
#line 160 "simplify_info.m"
{
#line 394 "simplify_info.m"
  {
#line 394 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 394 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
#line 394 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_10_10;
#line 394 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
#line 394 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
#line 394 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
#line 394 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
#line 394 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
#line 394 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
#line 395 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 0)));
#line 395 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 1)));
#line 395 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 2)));
#line 395 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 3)));
#line 395 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 4)));
#line 395 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_22_22 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 5)))) & (MR_Integer) 1);
#line 395 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 395 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 6)));
#line 395 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_25_25 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 395 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 395 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);

#line 395 "simplify_info.m"
    {
#line 395 "simplify_info.m"
      check_hlds__simplify__simplify_info__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 395 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__V_17_17));
#line 395 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__V_18_18));
#line 395 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 2) = ((MR_Box) (check_hlds__simplify__simplify_info__V_19_19));
#line 395 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 3) = ((MR_Box) (check_hlds__simplify__simplify_info__V_20_20));
#line 395 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 4) = ((MR_Box) (check_hlds__simplify__simplify_info__V_21_21));
#line 395 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 5) = ((MR_Box) ((check_hlds__simplify__simplify_info__V_22_22 | ((check_hlds__simplify__simplify_info__V_23_23 << (MR_Integer) 1)))));
#line 395 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 6) = ((MR_Box) (check_hlds__simplify__simplify_info__V_24_24));
#line 395 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 7) = ((MR_Box) ((check_hlds__simplify__simplify_info__V_25_25 | ((((check_hlds__simplify__simplify_info__FCT_4 << (MR_Integer) 1)) | ((check_hlds__simplify__simplify_info__V_27_27 << (MR_Integer) 2)))))));
#line 395 "simplify_info.m"
    }
#line 395 "simplify_info.m"
    {
#line 395 "simplify_info.m"
      MR_Word base;
#line 395 "simplify_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 395 "simplify_info.m"
      *check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_7 = base;
#line 395 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__V_11_11));
#line 395 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__V_12_12));
#line 395 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__simplify__simplify_info__V_13_13));
#line 395 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__simplify__simplify_info__V_14_14));
#line 395 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__simplify__simplify_info__V_15_15));
#line 395 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__simplify__simplify_info__V_16_16));
#line 395 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__simplify__simplify_info__V_10_10));
#line 395 "simplify_info.m"
    }
#line 394 "simplify_info.m"
  }
#line 160 "simplify_info.m"
}

#line 158 "simplify_info.m"
void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_set_has_parallel_conj_3_p_0(
#line 158 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__HPC_4,
#line 158 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6,
#line 158 "simplify_info.m"
  MR_Word * check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_7)
#line 158 "simplify_info.m"
{
#line 392 "simplify_info.m"
  {
#line 392 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 392 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
#line 392 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_10_10;
#line 392 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
#line 392 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
#line 392 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
#line 392 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
#line 392 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
#line 392 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
#line 393 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 0)));
#line 393 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 1)));
#line 393 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 2)));
#line 393 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 3)));
#line 393 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 4)));
#line 393 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_22_22 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 5)))) & (MR_Integer) 1);
#line 393 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 393 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 6)));
#line 393 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 393 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 393 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_25_25 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 7)))) & (MR_Integer) 1);

#line 393 "simplify_info.m"
    {
#line 393 "simplify_info.m"
      check_hlds__simplify__simplify_info__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 393 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__V_17_17));
#line 393 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__V_18_18));
#line 393 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 2) = ((MR_Box) (check_hlds__simplify__simplify_info__V_19_19));
#line 393 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 3) = ((MR_Box) (check_hlds__simplify__simplify_info__V_20_20));
#line 393 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 4) = ((MR_Box) (check_hlds__simplify__simplify_info__V_21_21));
#line 393 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 5) = ((MR_Box) ((check_hlds__simplify__simplify_info__V_22_22 | ((check_hlds__simplify__simplify_info__V_23_23 << (MR_Integer) 1)))));
#line 393 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 6) = ((MR_Box) (check_hlds__simplify__simplify_info__V_24_24));
#line 393 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 7) = ((MR_Box) ((check_hlds__simplify__simplify_info__HPC_4 | ((((check_hlds__simplify__simplify_info__V_26_26 << (MR_Integer) 1)) | ((check_hlds__simplify__simplify_info__V_27_27 << (MR_Integer) 2)))))));
#line 393 "simplify_info.m"
    }
#line 393 "simplify_info.m"
    {
#line 393 "simplify_info.m"
      MR_Word base;
#line 393 "simplify_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 393 "simplify_info.m"
      *check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_7 = base;
#line 393 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__V_11_11));
#line 393 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__V_12_12));
#line 393 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__simplify__simplify_info__V_13_13));
#line 393 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__simplify__simplify_info__V_14_14));
#line 393 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__simplify__simplify_info__V_15_15));
#line 393 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__simplify__simplify_info__V_16_16));
#line 393 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__simplify__simplify_info__V_10_10));
#line 393 "simplify_info.m"
    }
#line 392 "simplify_info.m"
  }
#line 158 "simplify_info.m"
}

#line 156 "simplify_info.m"
void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_set_cost_delta_3_p_0(
#line 156 "simplify_info.m"
  MR_Integer check_hlds__simplify__simplify_info__CD_4,
#line 156 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6,
#line 156 "simplify_info.m"
  MR_Word * check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_7)
#line 156 "simplify_info.m"
{
#line 390 "simplify_info.m"
  {
#line 390 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 390 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
#line 390 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_10_10;
#line 390 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
#line 390 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
#line 390 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
#line 390 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
#line 390 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
#line 390 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
#line 391 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 0)));
#line 391 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 1)));
#line 391 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 2)));
#line 391 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 3)));
#line 391 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 4)));
#line 391 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_22_22 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 5)))) & (MR_Integer) 1);
#line 391 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 391 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_25_25 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 391 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 391 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 391 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 6)));

#line 391 "simplify_info.m"
    {
#line 391 "simplify_info.m"
      check_hlds__simplify__simplify_info__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 391 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__V_17_17));
#line 391 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__V_18_18));
#line 391 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 2) = ((MR_Box) (check_hlds__simplify__simplify_info__V_19_19));
#line 391 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 3) = ((MR_Box) (check_hlds__simplify__simplify_info__V_20_20));
#line 391 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 4) = ((MR_Box) (check_hlds__simplify__simplify_info__V_21_21));
#line 391 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 5) = ((MR_Box) ((check_hlds__simplify__simplify_info__V_22_22 | ((check_hlds__simplify__simplify_info__V_23_23 << (MR_Integer) 1)))));
#line 391 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 6) = ((MR_Box) (check_hlds__simplify__simplify_info__CD_4));
#line 391 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 7) = ((MR_Box) ((check_hlds__simplify__simplify_info__V_25_25 | ((((check_hlds__simplify__simplify_info__V_26_26 << (MR_Integer) 1)) | ((check_hlds__simplify__simplify_info__V_27_27 << (MR_Integer) 2)))))));
#line 391 "simplify_info.m"
    }
#line 391 "simplify_info.m"
    {
#line 391 "simplify_info.m"
      MR_Word base;
#line 391 "simplify_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 391 "simplify_info.m"
      *check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_7 = base;
#line 391 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__V_11_11));
#line 391 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__V_12_12));
#line 391 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__simplify__simplify_info__V_13_13));
#line 391 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__simplify__simplify_info__V_14_14));
#line 391 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__simplify__simplify_info__V_15_15));
#line 391 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__simplify__simplify_info__V_16_16));
#line 391 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__simplify__simplify_info__V_10_10));
#line 391 "simplify_info.m"
    }
#line 390 "simplify_info.m"
  }
#line 156 "simplify_info.m"
}

#line 154 "simplify_info.m"
void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_set_should_rerun_det_2_p_0(
#line 154 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_4,
#line 154 "simplify_info.m"
  MR_Word * check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_5)
#line 154 "simplify_info.m"
{
#line 388 "simplify_info.m"
  {
#line 388 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 388 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_4, (MR_Integer) 6)));
#line 388 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_9_9;
#line 388 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_4, (MR_Integer) 0)));
#line 388 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_4, (MR_Integer) 1)));
#line 388 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_4, (MR_Integer) 2)));
#line 388 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_4, (MR_Integer) 3)));
#line 388 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_4, (MR_Integer) 4)));
#line 388 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_4, (MR_Integer) 5)));
#line 389 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_8_8, (MR_Integer) 0)));
#line 389 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_8_8, (MR_Integer) 1)));
#line 389 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_8_8, (MR_Integer) 2)));
#line 389 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_8_8, (MR_Integer) 3)));
#line 389 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_8_8, (MR_Integer) 4)));
#line 389 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_21_21 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_8_8, (MR_Integer) 5)))) & (MR_Integer) 1);
#line 389 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_8_8, (MR_Integer) 6)));
#line 389 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_24_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_8_8, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 389 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_8_8, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 389 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_8_8, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 389 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_8_8, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);

#line 389 "simplify_info.m"
    {
#line 389 "simplify_info.m"
      check_hlds__simplify__simplify_info__V_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 389 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__V_16_16));
#line 389 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__V_17_17));
#line 389 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, 2) = ((MR_Box) (check_hlds__simplify__simplify_info__V_18_18));
#line 389 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, 3) = ((MR_Box) (check_hlds__simplify__simplify_info__V_19_19));
#line 389 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, 4) = ((MR_Box) (check_hlds__simplify__simplify_info__V_20_20));
#line 389 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, 5) = ((MR_Box) ((check_hlds__simplify__simplify_info__V_21_21 | (((MR_Integer) 1 << (MR_Integer) 1)))));
#line 389 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, 6) = ((MR_Box) (check_hlds__simplify__simplify_info__V_23_23));
#line 389 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, 7) = ((MR_Box) ((check_hlds__simplify__simplify_info__V_24_24 | ((((check_hlds__simplify__simplify_info__V_25_25 << (MR_Integer) 1)) | ((check_hlds__simplify__simplify_info__V_26_26 << (MR_Integer) 2)))))));
#line 389 "simplify_info.m"
    }
#line 389 "simplify_info.m"
    {
#line 389 "simplify_info.m"
      MR_Word base;
#line 389 "simplify_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 389 "simplify_info.m"
      *check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_5 = base;
#line 389 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__V_10_10));
#line 389 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__V_11_11));
#line 389 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__simplify__simplify_info__V_12_12));
#line 389 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__simplify__simplify_info__V_13_13));
#line 389 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__simplify__simplify_info__V_14_14));
#line 389 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__simplify__simplify_info__V_15_15));
#line 389 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__simplify__simplify_info__V_9_9));
#line 389 "simplify_info.m"
    }
#line 388 "simplify_info.m"
  }
#line 154 "simplify_info.m"
}

#line 152 "simplify_info.m"
void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_set_should_requantify_2_p_0(
#line 152 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_4,
#line 152 "simplify_info.m"
  MR_Word * check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_5)
#line 152 "simplify_info.m"
{
#line 386 "simplify_info.m"
  {
#line 386 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 386 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_4, (MR_Integer) 6)));
#line 386 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_9_9;
#line 386 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_4, (MR_Integer) 0)));
#line 386 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_4, (MR_Integer) 1)));
#line 386 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_4, (MR_Integer) 2)));
#line 386 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_4, (MR_Integer) 3)));
#line 386 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_4, (MR_Integer) 4)));
#line 386 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_4, (MR_Integer) 5)));
#line 387 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_8_8, (MR_Integer) 0)));
#line 387 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_8_8, (MR_Integer) 1)));
#line 387 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_8_8, (MR_Integer) 2)));
#line 387 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_8_8, (MR_Integer) 3)));
#line 387 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_8_8, (MR_Integer) 4)));
#line 387 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_8_8, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 387 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_8_8, (MR_Integer) 6)));
#line 387 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_24_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_8_8, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 387 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_8_8, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 387 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_8_8, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 387 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_21_21 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_8_8, (MR_Integer) 5)))) & (MR_Integer) 1);

#line 387 "simplify_info.m"
    {
#line 387 "simplify_info.m"
      check_hlds__simplify__simplify_info__V_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 387 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__V_16_16));
#line 387 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__V_17_17));
#line 387 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, 2) = ((MR_Box) (check_hlds__simplify__simplify_info__V_18_18));
#line 387 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, 3) = ((MR_Box) (check_hlds__simplify__simplify_info__V_19_19));
#line 387 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, 4) = ((MR_Box) (check_hlds__simplify__simplify_info__V_20_20));
#line 387 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, 5) = ((MR_Box) (((MR_Integer) 1 | ((check_hlds__simplify__simplify_info__V_22_22 << (MR_Integer) 1)))));
#line 387 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, 6) = ((MR_Box) (check_hlds__simplify__simplify_info__V_23_23));
#line 387 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, 7) = ((MR_Box) ((check_hlds__simplify__simplify_info__V_24_24 | ((((check_hlds__simplify__simplify_info__V_25_25 << (MR_Integer) 1)) | ((check_hlds__simplify__simplify_info__V_26_26 << (MR_Integer) 2)))))));
#line 387 "simplify_info.m"
    }
#line 387 "simplify_info.m"
    {
#line 387 "simplify_info.m"
      MR_Word base;
#line 387 "simplify_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 387 "simplify_info.m"
      *check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_5 = base;
#line 387 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__V_10_10));
#line 387 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__V_11_11));
#line 387 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__simplify__simplify_info__V_12_12));
#line 387 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__simplify__simplify_info__V_13_13));
#line 387 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__simplify__simplify_info__V_14_14));
#line 387 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__simplify__simplify_info__V_15_15));
#line 387 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__simplify__simplify_info__V_9_9));
#line 387 "simplify_info.m"
    }
#line 386 "simplify_info.m"
  }
#line 152 "simplify_info.m"
}

#line 150 "simplify_info.m"
void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_set_error_specs_3_p_0(
#line 150 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__Specs_4,
#line 150 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6,
#line 150 "simplify_info.m"
  MR_Word * check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_7)
#line 150 "simplify_info.m"
{
#line 384 "simplify_info.m"
  {
#line 384 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 384 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
#line 384 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_10_10;
#line 384 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
#line 384 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
#line 384 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
#line 384 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
#line 384 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
#line 384 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
#line 385 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 0)));
#line 385 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 1)));
#line 385 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 2)));
#line 385 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 3)));
#line 385 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_22_22 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 5)))) & (MR_Integer) 1);
#line 385 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 385 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 6)));
#line 385 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_25_25 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 385 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 385 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 385 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 4)));

#line 385 "simplify_info.m"
    {
#line 385 "simplify_info.m"
      check_hlds__simplify__simplify_info__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 385 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__V_17_17));
#line 385 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__V_18_18));
#line 385 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 2) = ((MR_Box) (check_hlds__simplify__simplify_info__V_19_19));
#line 385 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 3) = ((MR_Box) (check_hlds__simplify__simplify_info__V_20_20));
#line 385 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 4) = ((MR_Box) (check_hlds__simplify__simplify_info__Specs_4));
#line 385 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 5) = ((MR_Box) ((check_hlds__simplify__simplify_info__V_22_22 | ((check_hlds__simplify__simplify_info__V_23_23 << (MR_Integer) 1)))));
#line 385 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 6) = ((MR_Box) (check_hlds__simplify__simplify_info__V_24_24));
#line 385 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 7) = ((MR_Box) ((check_hlds__simplify__simplify_info__V_25_25 | ((((check_hlds__simplify__simplify_info__V_26_26 << (MR_Integer) 1)) | ((check_hlds__simplify__simplify_info__V_27_27 << (MR_Integer) 2)))))));
#line 385 "simplify_info.m"
    }
#line 385 "simplify_info.m"
    {
#line 385 "simplify_info.m"
      MR_Word base;
#line 385 "simplify_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 385 "simplify_info.m"
      *check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_7 = base;
#line 385 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__V_11_11));
#line 385 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__V_12_12));
#line 385 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__simplify__simplify_info__V_13_13));
#line 385 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__simplify__simplify_info__V_14_14));
#line 385 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__simplify__simplify_info__V_15_15));
#line 385 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__simplify__simplify_info__V_16_16));
#line 385 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__simplify__simplify_info__V_10_10));
#line 385 "simplify_info.m"
    }
#line 384 "simplify_info.m"
  }
#line 150 "simplify_info.m"
}

#line 148 "simplify_info.m"
void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_set_elim_vars_3_p_0(
#line 148 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__EV_4,
#line 148 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6,
#line 148 "simplify_info.m"
  MR_Word * check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_7)
#line 148 "simplify_info.m"
{
#line 382 "simplify_info.m"
  {
#line 382 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 382 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
#line 382 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_10_10;
#line 382 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
#line 382 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
#line 382 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
#line 382 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
#line 382 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
#line 382 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
#line 383 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 0)));
#line 383 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 1)));
#line 383 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 2)));
#line 383 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 4)));
#line 383 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_22_22 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 5)))) & (MR_Integer) 1);
#line 383 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 383 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 6)));
#line 383 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_25_25 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 383 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 383 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 383 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 3)));

#line 383 "simplify_info.m"
    {
#line 383 "simplify_info.m"
      check_hlds__simplify__simplify_info__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 383 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__V_17_17));
#line 383 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__V_18_18));
#line 383 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 2) = ((MR_Box) (check_hlds__simplify__simplify_info__V_19_19));
#line 383 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 3) = ((MR_Box) (check_hlds__simplify__simplify_info__EV_4));
#line 383 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 4) = ((MR_Box) (check_hlds__simplify__simplify_info__V_21_21));
#line 383 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 5) = ((MR_Box) ((check_hlds__simplify__simplify_info__V_22_22 | ((check_hlds__simplify__simplify_info__V_23_23 << (MR_Integer) 1)))));
#line 383 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 6) = ((MR_Box) (check_hlds__simplify__simplify_info__V_24_24));
#line 383 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 7) = ((MR_Box) ((check_hlds__simplify__simplify_info__V_25_25 | ((((check_hlds__simplify__simplify_info__V_26_26 << (MR_Integer) 1)) | ((check_hlds__simplify__simplify_info__V_27_27 << (MR_Integer) 2)))))));
#line 383 "simplify_info.m"
    }
#line 383 "simplify_info.m"
    {
#line 383 "simplify_info.m"
      MR_Word base;
#line 383 "simplify_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 383 "simplify_info.m"
      *check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_7 = base;
#line 383 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__V_11_11));
#line 383 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__V_12_12));
#line 383 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__simplify__simplify_info__V_13_13));
#line 383 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__simplify__simplify_info__V_14_14));
#line 383 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__simplify__simplify_info__V_15_15));
#line 383 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__simplify__simplify_info__V_16_16));
#line 383 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__simplify__simplify_info__V_10_10));
#line 383 "simplify_info.m"
    }
#line 382 "simplify_info.m"
  }
#line 148 "simplify_info.m"
}

#line 145 "simplify_info.m"
void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_set_rtti_varmaps_3_p_0(
#line 145 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__RVM_4,
#line 145 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6,
#line 145 "simplify_info.m"
  MR_Word * check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_7)
#line 145 "simplify_info.m"
{
#line 380 "simplify_info.m"
  {
#line 380 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 380 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
#line 380 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
#line 380 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
#line 380 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
#line 380 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
#line 380 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
#line 380 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));

#line 380 "simplify_info.m"
    {
#line 380 "simplify_info.m"
      MR_Word base;
#line 380 "simplify_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 380 "simplify_info.m"
      *check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_7 = base;
#line 380 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__V_9_9));
#line 380 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__V_10_10));
#line 380 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__simplify__simplify_info__V_11_11));
#line 380 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__simplify__simplify_info__V_12_12));
#line 380 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__simplify__simplify_info__RVM_4));
#line 380 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__simplify__simplify_info__V_14_14));
#line 380 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__simplify__simplify_info__V_15_15));
#line 380 "simplify_info.m"
    }
#line 380 "simplify_info.m"
  }
#line 145 "simplify_info.m"
}

#line 143 "simplify_info.m"
void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_set_varset_3_p_0(
#line 143 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__VS_4,
#line 143 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6,
#line 143 "simplify_info.m"
  MR_Word * check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_7)
#line 143 "simplify_info.m"
{
#line 376 "simplify_info.m"
  {
#line 376 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 376 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
#line 376 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
#line 376 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
#line 376 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
#line 376 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
#line 376 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
#line 376 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));

#line 376 "simplify_info.m"
    {
#line 376 "simplify_info.m"
      MR_Word base;
#line 376 "simplify_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 376 "simplify_info.m"
      *check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_7 = base;
#line 376 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__V_9_9));
#line 376 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__V_10_10));
#line 376 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__simplify__simplify_info__VS_4));
#line 376 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__simplify__simplify_info__V_12_12));
#line 376 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__simplify__simplify_info__V_13_13));
#line 376 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__simplify__simplify_info__V_14_14));
#line 376 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__simplify__simplify_info__V_15_15));
#line 376 "simplify_info.m"
    }
#line 376 "simplify_info.m"
  }
#line 143 "simplify_info.m"
}

#line 141 "simplify_info.m"
void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_set_var_types_3_p_0(
#line 141 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__VT_4,
#line 141 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6,
#line 141 "simplify_info.m"
  MR_Word * check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_7)
#line 141 "simplify_info.m"
{
#line 378 "simplify_info.m"
  {
#line 378 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 378 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
#line 378 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
#line 378 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
#line 378 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
#line 378 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
#line 378 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
#line 378 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));

#line 378 "simplify_info.m"
    {
#line 378 "simplify_info.m"
      MR_Word base;
#line 378 "simplify_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 378 "simplify_info.m"
      *check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_7 = base;
#line 378 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__V_9_9));
#line 378 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__V_10_10));
#line 378 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__simplify__simplify_info__V_11_11));
#line 378 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__simplify__simplify_info__VT_4));
#line 378 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__simplify__simplify_info__V_13_13));
#line 378 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__simplify__simplify_info__V_14_14));
#line 378 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__simplify__simplify_info__V_15_15));
#line 378 "simplify_info.m"
    }
#line 378 "simplify_info.m"
  }
#line 141 "simplify_info.m"
}

#line 139 "simplify_info.m"
void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_set_module_info_3_p_0(
#line 139 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__MI_4,
#line 139 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6,
#line 139 "simplify_info.m"
  MR_Word * check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_7)
#line 139 "simplify_info.m"
{
#line 374 "simplify_info.m"
  {
#line 374 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 374 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
#line 374 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
#line 374 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
#line 374 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
#line 374 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
#line 374 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
#line 374 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));

#line 374 "simplify_info.m"
    {
#line 374 "simplify_info.m"
      MR_Word base;
#line 374 "simplify_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 374 "simplify_info.m"
      *check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_7 = base;
#line 374 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__V_9_9));
#line 374 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__MI_4));
#line 374 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__simplify__simplify_info__V_11_11));
#line 374 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__simplify__simplify_info__V_12_12));
#line 374 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__simplify__simplify_info__V_13_13));
#line 374 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__simplify__simplify_info__V_14_14));
#line 374 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__simplify__simplify_info__V_15_15));
#line 374 "simplify_info.m"
    }
#line 374 "simplify_info.m"
  }
#line 139 "simplify_info.m"
}

#line 137 "simplify_info.m"
void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_set_simplify_tasks_3_p_0(
#line 137 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__Tasks_4,
#line 137 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6,
#line 137 "simplify_info.m"
  MR_Word * check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_7)
#line 137 "simplify_info.m"
{
#line 372 "simplify_info.m"
  {
#line 372 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 372 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
#line 372 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
#line 372 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
#line 372 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
#line 372 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
#line 372 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
#line 372 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));

#line 372 "simplify_info.m"
    {
#line 372 "simplify_info.m"
      MR_Word base;
#line 372 "simplify_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 372 "simplify_info.m"
      *check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_7 = base;
#line 372 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__Tasks_4));
#line 372 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__V_10_10));
#line 372 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__simplify__simplify_info__V_11_11));
#line 372 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__simplify__simplify_info__V_12_12));
#line 372 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__simplify__simplify_info__V_13_13));
#line 372 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__simplify__simplify_info__V_14_14));
#line 372 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__simplify__simplify_info__V_15_15));
#line 372 "simplify_info.m"
    }
#line 372 "simplify_info.m"
  }
#line 137 "simplify_info.m"
}

#line 134 "simplify_info.m"
void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_get_has_user_event_2_p_0(
#line 134 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__Info_3,
#line 134 "simplify_info.m"
  MR_Word * check_hlds__simplify__simplify_info__HUE_4)
#line 134 "simplify_info.m"
{
#line 368 "simplify_info.m"
  {
#line 368 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 368 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 6)));
#line 369 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 0)));
#line 369 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 1)));
#line 369 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 2)));
#line 369 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 3)));
#line 369 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 4)));
#line 369 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 5)));
#line 369 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 0)));
#line 369 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 1)));
#line 369 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 2)));
#line 369 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 3)));
#line 369 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 4)));
#line 369 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_17_17 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 5)))) & (MR_Integer) 1);
#line 369 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 369 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 6)));
#line 369 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_20_20 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 369 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);

#line 369 "simplify_info.m"
    *check_hlds__simplify__simplify_info__HUE_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 368 "simplify_info.m"
  }
#line 134 "simplify_info.m"
}

#line 132 "simplify_info.m"
void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_get_found_contains_trace_2_p_0(
#line 132 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__Info_3,
#line 132 "simplify_info.m"
  MR_Word * check_hlds__simplify__simplify_info__FCT_4)
#line 132 "simplify_info.m"
{
#line 366 "simplify_info.m"
  {
#line 366 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 366 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 6)));
#line 367 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 0)));
#line 367 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 1)));
#line 367 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 2)));
#line 367 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 3)));
#line 367 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 4)));
#line 367 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 5)));
#line 367 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 0)));
#line 367 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 1)));
#line 367 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 2)));
#line 367 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 3)));
#line 367 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 4)));
#line 367 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_17_17 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 5)))) & (MR_Integer) 1);
#line 367 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 367 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 6)));
#line 367 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_20_20 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 367 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_21_21;

#line 367 "simplify_info.m"
    *check_hlds__simplify__simplify_info__FCT_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 367 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 366 "simplify_info.m"
  }
#line 132 "simplify_info.m"
}

#line 130 "simplify_info.m"
void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_get_has_parallel_conj_2_p_0(
#line 130 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__Info_3,
#line 130 "simplify_info.m"
  MR_Word * check_hlds__simplify__simplify_info__HPC_4)
#line 130 "simplify_info.m"
{
#line 364 "simplify_info.m"
  {
#line 364 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 364 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 6)));
#line 365 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 0)));
#line 365 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 1)));
#line 365 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 2)));
#line 365 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 3)));
#line 365 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 4)));
#line 365 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 5)));
#line 365 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 0)));
#line 365 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 1)));
#line 365 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 2)));
#line 365 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 3)));
#line 365 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 4)));
#line 365 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_17_17 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 5)))) & (MR_Integer) 1);
#line 365 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 365 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 6)));
#line 365 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_20_20;
#line 365 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_21_21;

#line 365 "simplify_info.m"
    *check_hlds__simplify__simplify_info__HPC_4 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 365 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 365 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 364 "simplify_info.m"
  }
#line 130 "simplify_info.m"
}

#line 129 "simplify_info.m"
void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_get_cost_delta_2_p_0(
#line 129 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__Info_3,
#line 129 "simplify_info.m"
  MR_Integer * check_hlds__simplify__simplify_info__CD_4)
#line 129 "simplify_info.m"
{
#line 362 "simplify_info.m"
  {
#line 362 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 362 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 6)));
#line 363 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 0)));
#line 363 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 1)));
#line 363 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 2)));
#line 363 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 3)));
#line 363 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 4)));
#line 363 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 5)));
#line 363 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 0)));
#line 363 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 1)));
#line 363 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 2)));
#line 363 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 3)));
#line 363 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 4)));
#line 363 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_17_17 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 5)))) & (MR_Integer) 1);
#line 363 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 363 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_19_19;
#line 363 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_20_20;
#line 363 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_21_21;

#line 363 "simplify_info.m"
    *check_hlds__simplify__simplify_info__CD_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 6)));
#line 363 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_19_19 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 363 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 363 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 362 "simplify_info.m"
  }
#line 129 "simplify_info.m"
}

#line 127 "simplify_info.m"
void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_get_should_rerun_det_2_p_0(
#line 127 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__Info_3,
#line 127 "simplify_info.m"
  MR_Word * check_hlds__simplify__simplify_info__RRD_4)
#line 127 "simplify_info.m"
{
#line 360 "simplify_info.m"
  {
#line 360 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 360 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 6)));
#line 361 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 0)));
#line 361 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 1)));
#line 361 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 2)));
#line 361 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 3)));
#line 361 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 4)));
#line 361 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 5)));
#line 361 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 0)));
#line 361 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 1)));
#line 361 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 2)));
#line 361 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 3)));
#line 361 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 4)));
#line 361 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_17_17 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 5)))) & (MR_Integer) 1);
#line 361 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__V_18_18;
#line 361 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_19_19;
#line 361 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_20_20;
#line 361 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_21_21;

#line 361 "simplify_info.m"
    *check_hlds__simplify__simplify_info__RRD_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 361 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 6)));
#line 361 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_19_19 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 361 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 361 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 360 "simplify_info.m"
  }
#line 127 "simplify_info.m"
}

#line 125 "simplify_info.m"
void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_get_should_requantify_2_p_0(
#line 125 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__Info_3,
#line 125 "simplify_info.m"
  MR_Word * check_hlds__simplify__simplify_info__RQ_4)
#line 125 "simplify_info.m"
{
#line 358 "simplify_info.m"
  {
#line 358 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 358 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 6)));
#line 359 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 0)));
#line 359 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 1)));
#line 359 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 2)));
#line 359 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 3)));
#line 359 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 4)));
#line 359 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 5)));
#line 359 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 0)));
#line 359 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 1)));
#line 359 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 2)));
#line 359 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 3)));
#line 359 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 4)));
#line 359 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_17_17;
#line 359 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__V_18_18;
#line 359 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_19_19;
#line 359 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_20_20;
#line 359 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_21_21;

#line 359 "simplify_info.m"
    *check_hlds__simplify__simplify_info__RQ_4 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 5)))) & (MR_Integer) 1);
#line 359 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_17_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 359 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 6)));
#line 359 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_19_19 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 359 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 359 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 358 "simplify_info.m"
  }
#line 125 "simplify_info.m"
}

#line 123 "simplify_info.m"
void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_get_error_specs_2_p_0(
#line 123 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__Info_3,
#line 123 "simplify_info.m"
  MR_Word * check_hlds__simplify__simplify_info__Specs_4)
#line 123 "simplify_info.m"
{
#line 356 "simplify_info.m"
  {
#line 356 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 356 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 6)));
#line 357 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 0)));
#line 357 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 1)));
#line 357 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 2)));
#line 357 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 3)));
#line 357 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 4)));
#line 357 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 5)));
#line 357 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 0)));
#line 357 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 1)));
#line 357 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 2)));
#line 357 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 3)));
#line 357 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_16_16;
#line 357 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_17_17;
#line 357 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__V_18_18;
#line 357 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_19_19;
#line 357 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_20_20;
#line 357 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_21_21;

#line 357 "simplify_info.m"
    *check_hlds__simplify__simplify_info__Specs_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 4)));
#line 357 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_16_16 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 5)))) & (MR_Integer) 1);
#line 357 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_17_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 357 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 6)));
#line 357 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_19_19 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 357 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 357 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 356 "simplify_info.m"
  }
#line 123 "simplify_info.m"
}

#line 121 "simplify_info.m"
void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_get_elim_vars_2_p_0(
#line 121 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__Info_3,
#line 121 "simplify_info.m"
  MR_Word * check_hlds__simplify__simplify_info__EV_4)
#line 121 "simplify_info.m"
{
#line 354 "simplify_info.m"
  {
#line 354 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 354 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 6)));
#line 355 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 0)));
#line 355 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 1)));
#line 355 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 2)));
#line 355 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 3)));
#line 355 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 4)));
#line 355 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 5)));
#line 355 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 0)));
#line 355 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 1)));
#line 355 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 2)));
#line 355 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_15_15;
#line 355 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_16_16;
#line 355 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_17_17;
#line 355 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__V_18_18;
#line 355 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_19_19;
#line 355 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_20_20;
#line 355 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_21_21;

#line 355 "simplify_info.m"
    *check_hlds__simplify__simplify_info__EV_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 3)));
#line 355 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 4)));
#line 355 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_16_16 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 5)))) & (MR_Integer) 1);
#line 355 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_17_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 355 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 6)));
#line 355 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_19_19 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 355 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 355 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 354 "simplify_info.m"
  }
#line 121 "simplify_info.m"
}

#line 119 "simplify_info.m"
void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_get_inst_varset_2_p_0(
#line 119 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__Info_3,
#line 119 "simplify_info.m"
  MR_Word * check_hlds__simplify__simplify_info__IVS_4)
#line 119 "simplify_info.m"
{
#line 352 "simplify_info.m"
  {
#line 352 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 352 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 6)));
#line 353 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 0)));
#line 353 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 1)));
#line 353 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 2)));
#line 353 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 3)));
#line 353 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 4)));
#line 353 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 5)));
#line 353 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 0)));
#line 353 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 1)));
#line 353 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_14_14;
#line 353 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_15_15;
#line 353 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_16_16;
#line 353 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_17_17;
#line 353 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__V_18_18;
#line 353 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_19_19;
#line 353 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_20_20;
#line 353 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_21_21;

#line 353 "simplify_info.m"
    *check_hlds__simplify__simplify_info__IVS_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 2)));
#line 353 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 3)));
#line 353 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 4)));
#line 353 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_16_16 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 5)))) & (MR_Integer) 1);
#line 353 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_17_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 353 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 6)));
#line 353 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_19_19 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 353 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 353 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 352 "simplify_info.m"
  }
#line 119 "simplify_info.m"
}

#line 117 "simplify_info.m"
void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_get_pred_proc_id_3_p_0(
#line 117 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__Info_4,
#line 117 "simplify_info.m"
  MR_Word * check_hlds__simplify__simplify_info__PredId_5,
#line 117 "simplify_info.m"
  MR_Integer * check_hlds__simplify__simplify_info__ProcId_6)
#line 117 "simplify_info.m"
{
#line 348 "simplify_info.m"
  {
#line 348 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 348 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__SubInfo_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_4, (MR_Integer) 6)));
#line 349 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_4, (MR_Integer) 0)));
#line 349 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_4, (MR_Integer) 1)));
#line 349 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_4, (MR_Integer) 2)));
#line 349 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_4, (MR_Integer) 3)));
#line 349 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_4, (MR_Integer) 4)));
#line 349 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_4, (MR_Integer) 5)));
#line 350 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_15_15;
#line 350 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_16_16;
#line 350 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_17_17;
#line 350 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_18_18;
#line 350 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_19_19;
#line 350 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__V_20_20;
#line 350 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_21_21;
#line 350 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_22_22;
#line 350 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_23_23;

#line 350 "simplify_info.m"
    *check_hlds__simplify__simplify_info__PredId_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SubInfo_7, (MR_Integer) 0)));
#line 350 "simplify_info.m"
    *check_hlds__simplify__simplify_info__ProcId_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SubInfo_7, (MR_Integer) 1)));
#line 350 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SubInfo_7, (MR_Integer) 2)));
#line 350 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SubInfo_7, (MR_Integer) 3)));
#line 350 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SubInfo_7, (MR_Integer) 4)));
#line 350 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_18_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SubInfo_7, (MR_Integer) 5)))) & (MR_Integer) 1);
#line 350 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SubInfo_7, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 350 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SubInfo_7, (MR_Integer) 6)));
#line 350 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_21_21 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SubInfo_7, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 350 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SubInfo_7, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 350 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SubInfo_7, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 348 "simplify_info.m"
  }
#line 117 "simplify_info.m"
}

#line 115 "simplify_info.m"
void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_get_fully_strict_2_p_0(
#line 115 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__Info_3,
#line 115 "simplify_info.m"
  MR_Word * check_hlds__simplify__simplify_info__FS_4)
#line 115 "simplify_info.m"
{
#line 346 "simplify_info.m"
  {
#line 346 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 346 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 0)));
#line 346 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 1)));
#line 346 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 2)));
#line 346 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 3)));
#line 346 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 4)));
#line 346 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_10_10;

#line 346 "simplify_info.m"
    *check_hlds__simplify__simplify_info__FS_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 5)));
#line 346 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 6)));
#line 346 "simplify_info.m"
  }
#line 115 "simplify_info.m"
}

#line 113 "simplify_info.m"
void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_get_rtti_varmaps_2_p_0(
#line 113 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__Info_3,
#line 113 "simplify_info.m"
  MR_Word * check_hlds__simplify__simplify_info__RVM_4)
#line 113 "simplify_info.m"
{
#line 344 "simplify_info.m"
  {
#line 344 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 344 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 0)));
#line 344 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 1)));
#line 344 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 2)));
#line 344 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 3)));
#line 344 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_9_9;
#line 344 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_10_10;

#line 344 "simplify_info.m"
    *check_hlds__simplify__simplify_info__RVM_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 4)));
#line 344 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 5)));
#line 344 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 6)));
#line 344 "simplify_info.m"
  }
#line 113 "simplify_info.m"
}

#line 112 "simplify_info.m"
void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_get_varset_2_p_0(
#line 112 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__Info_3,
#line 112 "simplify_info.m"
  MR_Word * check_hlds__simplify__simplify_info__VS_4)
#line 112 "simplify_info.m"
{
#line 340 "simplify_info.m"
  {
#line 340 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 340 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 0)));
#line 340 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 1)));
#line 340 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_7_7;
#line 340 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_8_8;
#line 340 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_9_9;
#line 340 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_10_10;

#line 340 "simplify_info.m"
    *check_hlds__simplify__simplify_info__VS_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 2)));
#line 340 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 3)));
#line 340 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 4)));
#line 340 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 5)));
#line 340 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 6)));
#line 340 "simplify_info.m"
  }
#line 112 "simplify_info.m"
}

#line 111 "simplify_info.m"
void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_get_var_types_2_p_0(
#line 111 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__Info_3,
#line 111 "simplify_info.m"
  MR_Word * check_hlds__simplify__simplify_info__VT_4)
#line 111 "simplify_info.m"
{
#line 342 "simplify_info.m"
  {
#line 342 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 342 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 0)));
#line 342 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 1)));
#line 342 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 2)));
#line 342 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_8_8;
#line 342 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_9_9;
#line 342 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_10_10;

#line 342 "simplify_info.m"
    *check_hlds__simplify__simplify_info__VT_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 3)));
#line 342 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 4)));
#line 342 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 5)));
#line 342 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 6)));
#line 342 "simplify_info.m"
  }
#line 111 "simplify_info.m"
}

#line 109 "simplify_info.m"
void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(
#line 109 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__Info_3,
#line 109 "simplify_info.m"
  MR_Word * check_hlds__simplify__simplify_info__MI_4)
#line 109 "simplify_info.m"
{
#line 338 "simplify_info.m"
  {
#line 338 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 338 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 0)));
#line 338 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_6_6;
#line 338 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_7_7;
#line 338 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_8_8;
#line 338 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_9_9;
#line 338 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_10_10;

#line 338 "simplify_info.m"
    *check_hlds__simplify__simplify_info__MI_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 1)));
#line 338 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 2)));
#line 338 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 3)));
#line 338 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 4)));
#line 338 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 5)));
#line 338 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 6)));
#line 338 "simplify_info.m"
  }
#line 109 "simplify_info.m"
}

#line 107 "simplify_info.m"
void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_get_simplify_tasks_2_p_0(
#line 107 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__Info_3,
#line 107 "simplify_info.m"
  MR_Word * check_hlds__simplify__simplify_info__Tasks_4)
#line 107 "simplify_info.m"
{
#line 336 "simplify_info.m"
  {
#line 336 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 336 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_5_5;
#line 336 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_6_6;
#line 336 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_7_7;
#line 336 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_8_8;
#line 336 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_9_9;
#line 336 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_10_10;

#line 336 "simplify_info.m"
    *check_hlds__simplify__simplify_info__Tasks_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 0)));
#line 336 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 1)));
#line 336 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 2)));
#line 336 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 3)));
#line 336 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 4)));
#line 336 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 5)));
#line 336 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 6)));
#line 336 "simplify_info.m"
  }
#line 107 "simplify_info.m"
}

#line 99 "simplify_info.m"
void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_apply_substitutions_and_duplicate_5_p_0(
#line 99 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__ToVar_6,
#line 99 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__FromVar_7,
#line 99 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__TSubst_8,
#line 99 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_16,
#line 99 "simplify_info.m"
  MR_Word * check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_17)
#line 99 "simplify_info.m"
{
#line 322 "simplify_info.m"
  {
#line 322 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 322 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__TypeInfo_21_21;
#line 322 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__TypeInfo_22_22;
#line 322 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__VarTypes0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_16, (MR_Integer) 3)));
#line 322 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__RttiVarMaps0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_16, (MR_Integer) 4)));
#line 322 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__VarTypes_12;
#line 322 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__Renaming_13;
#line 322 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__RttiVarMaps1_14;
#line 322 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__RttiVarMaps_15;
#line 322 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_18_18;
#line 322 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_44_44;
#line 322 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_45_45;
#line 322 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_46_46;
#line 322 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_49_49;
#line 322 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_50_50;
#line 342 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_16, (MR_Integer) 0)));
#line 342 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_16, (MR_Integer) 1)));
#line 342 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_16, (MR_Integer) 2)));
#line 342 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_16, (MR_Integer) 5)));
#line 342 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_16, (MR_Integer) 6)));
#line 378 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_47_47;
#line 378 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_48_48;

#line 325 "simplify_info.m"
    {
#line 325 "simplify_info.m"
      hlds__vartypes__apply_rec_subst_to_vartypes_3_p_0(check_hlds__simplify__simplify_info__TSubst_8, check_hlds__simplify__simplify_info__VarTypes0_10, &check_hlds__simplify__simplify_info__VarTypes_12);
    }
#line 5672 "check_hlds.simplify.simplify_info.c"
    check_hlds__simplify__simplify_info__TypeInfo_21_21 = (MR_Word) &check_hlds__simplify__simplify_info_scalar_common_1[0];
#line 326 "simplify_info.m"
    {
#line 326 "simplify_info.m"
      check_hlds__simplify__simplify_info__Renaming_13 = mercury__map__singleton_2_f_0(check_hlds__simplify__simplify_info__TypeInfo_21_21, check_hlds__simplify__simplify_info__TypeInfo_21_21, ((MR_Box) (check_hlds__simplify__simplify_info__ToVar_6)), ((MR_Box) (check_hlds__simplify__simplify_info__FromVar_7)));
    }
#line 5679 "check_hlds.simplify.simplify_info.c"
    check_hlds__simplify__simplify_info__TypeInfo_22_22 = (MR_Word) &check_hlds__simplify__simplify_info_scalar_common_1[1];
#line 327 "simplify_info.m"
    {
#line 327 "simplify_info.m"
      check_hlds__simplify__simplify_info__V_18_18 = mercury__map__init_0_f_0(check_hlds__simplify__simplify_info__TypeInfo_22_22, check_hlds__simplify__simplify_info__TypeInfo_22_22);
    }
#line 327 "simplify_info.m"
    {
#line 327 "simplify_info.m"
      hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_p_0(check_hlds__simplify__simplify_info__V_18_18, check_hlds__simplify__simplify_info__TSubst_8, check_hlds__simplify__simplify_info__Renaming_13, check_hlds__simplify__simplify_info__RttiVarMaps0_11, &check_hlds__simplify__simplify_info__RttiVarMaps1_14);
    }
#line 329 "simplify_info.m"
    {
#line 329 "simplify_info.m"
      hlds__hlds_rtti__rtti_var_info_duplicate_4_p_0(check_hlds__simplify__simplify_info__FromVar_7, check_hlds__simplify__simplify_info__ToVar_6, check_hlds__simplify__simplify_info__RttiVarMaps1_14, &check_hlds__simplify__simplify_info__RttiVarMaps_15);
    }
#line 378 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_16, (MR_Integer) 0)));
#line 378 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_16, (MR_Integer) 1)));
#line 378 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_16, (MR_Integer) 2)));
#line 378 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_16, (MR_Integer) 3)));
#line 378 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_16, (MR_Integer) 4)));
#line 378 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_16, (MR_Integer) 5)));
#line 378 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_16, (MR_Integer) 6)));
#line 380 "simplify_info.m"
    {
#line 380 "simplify_info.m"
      MR_Word base;
#line 380 "simplify_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 380 "simplify_info.m"
      *check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_17 = base;
#line 380 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__V_44_44));
#line 380 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__V_45_45));
#line 380 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__simplify__simplify_info__V_46_46));
#line 380 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__simplify__simplify_info__VarTypes_12));
#line 380 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__simplify__simplify_info__RttiVarMaps_15));
#line 380 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__simplify__simplify_info__V_49_49));
#line 380 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__simplify__simplify_info__V_50_50));
#line 380 "simplify_info.m"
    }
#line 322 "simplify_info.m"
  }
#line 99 "simplify_info.m"
}

#line 96 "simplify_info.m"
void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_incr_cost_delta_3_p_0(
#line 96 "simplify_info.m"
  MR_Integer check_hlds__simplify__simplify_info__Incr_4,
#line 96 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_8,
#line 96 "simplify_info.m"
  MR_Word * check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_9)
#line 96 "simplify_info.m"
{
#line 316 "simplify_info.m"
  {
#line 316 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 316 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__CostDelta0_6;
#line 316 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__CostDelta_7;
#line 316 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 6)));
#line 316 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
#line 316 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
#line 316 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
#line 316 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
#line 316 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 4)));
#line 316 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 5)));
#line 316 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_13_13, (MR_Integer) 0)));
#line 316 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_13_13, (MR_Integer) 1)));
#line 316 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_13_13, (MR_Integer) 2)));
#line 316 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_13_13, (MR_Integer) 3)));
#line 316 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_13_13, (MR_Integer) 4)));
#line 316 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_25_25 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_13_13, (MR_Integer) 5)))) & (MR_Integer) 1);
#line 316 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_13_13, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 316 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_27_27;
#line 316 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_28_28;
#line 316 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_29_29;
#line 316 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_36_36;

#line 363 "simplify_info.m"
    check_hlds__simplify__simplify_info__CostDelta0_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_13_13, (MR_Integer) 6)));
#line 363 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_27_27 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_13_13, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 363 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_13_13, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 363 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_13_13, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 318 "simplify_info.m"
    check_hlds__simplify__simplify_info__CostDelta_7 = (check_hlds__simplify__simplify_info__CostDelta0_6 + check_hlds__simplify__simplify_info__Incr_4);
#line 391 "simplify_info.m"
    {
#line 391 "simplify_info.m"
      check_hlds__simplify__simplify_info__V_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 391 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_36_36, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__V_20_20));
#line 391 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_36_36, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__V_21_21));
#line 391 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_36_36, 2) = ((MR_Box) (check_hlds__simplify__simplify_info__V_22_22));
#line 391 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_36_36, 3) = ((MR_Box) (check_hlds__simplify__simplify_info__V_23_23));
#line 391 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_36_36, 4) = ((MR_Box) (check_hlds__simplify__simplify_info__V_24_24));
#line 391 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_36_36, 5) = ((MR_Box) ((check_hlds__simplify__simplify_info__V_25_25 | ((check_hlds__simplify__simplify_info__V_26_26 << (MR_Integer) 1)))));
#line 391 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_36_36, 6) = ((MR_Box) (check_hlds__simplify__simplify_info__CostDelta_7));
#line 391 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_36_36, 7) = ((MR_Box) ((check_hlds__simplify__simplify_info__V_27_27 | ((((check_hlds__simplify__simplify_info__V_28_28 << (MR_Integer) 1)) | ((check_hlds__simplify__simplify_info__V_29_29 << (MR_Integer) 2)))))));
#line 391 "simplify_info.m"
    }
#line 391 "simplify_info.m"
    {
#line 391 "simplify_info.m"
      MR_Word base;
#line 391 "simplify_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 391 "simplify_info.m"
      *check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_9 = base;
#line 391 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__V_14_14));
#line 391 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__V_15_15));
#line 391 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__simplify__simplify_info__V_16_16));
#line 391 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__simplify__simplify_info__V_17_17));
#line 391 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__simplify__simplify_info__V_18_18));
#line 391 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__simplify__simplify_info__V_19_19));
#line 391 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__simplify__simplify_info__V_36_36));
#line 391 "simplify_info.m"
    }
#line 316 "simplify_info.m"
  }
#line 96 "simplify_info.m"
}

#line 93 "simplify_info.m"
void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_add_simple_code_spec_3_p_0(
#line 93 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__Spec_4,
#line 93 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6,
#line 93 "simplify_info.m"
  MR_Word * check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_7)
#line 93 "simplify_info.m"
{
#line 312 "simplify_info.m"
  {
#line 312 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 312 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__SimplifyTasks_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
#line 312 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
#line 312 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
#line 312 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
#line 312 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
#line 312 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
#line 312 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
#line 401 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_10, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 403 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_10, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 403 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_10, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 403 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_10, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 403 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_10, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 403 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_10, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 403 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_17_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_10, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 403 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_10, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 403 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_10, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 403 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_10, (MR_Integer) 0)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 403 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_10, (MR_Integer) 0)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 403 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_10, (MR_Integer) 0)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 403 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_10, (MR_Integer) 0)))) >> (MR_Integer) 12)) & (MR_Integer) 1);

#line 403 "simplify_info.m"
    check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_11_11 == (MR_Integer) 1);
#line 312 "simplify_info.m"
    if (check_hlds__simplify__simplify_info__succeeded)
#line 304 "simplify_info.m"
      {
#line 304 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__Specs0_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_31_31, (MR_Integer) 4)));
#line 304 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__Specs_37;
#line 304 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_31_31, (MR_Integer) 0)));
#line 304 "simplify_info.m"
        MR_Integer check_hlds__simplify__simplify_info__V_49_49 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_31_31, (MR_Integer) 1)));
#line 304 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_31_31, (MR_Integer) 2)));
#line 304 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_31_31, (MR_Integer) 3)));
#line 304 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_52_52 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_31_31, (MR_Integer) 5)))) & (MR_Integer) 1);
#line 304 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_53_53 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_31_31, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 304 "simplify_info.m"
        MR_Integer check_hlds__simplify__simplify_info__V_54_54 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_31_31, (MR_Integer) 6)));
#line 304 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_55_55 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_31_31, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 304 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_56_56 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_31_31, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 304 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_57_57 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_31_31, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 304 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_64_64;

#line 306 "simplify_info.m"
        {
#line 306 "simplify_info.m"
          check_hlds__simplify__simplify_info__Specs_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 306 "simplify_info.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_info__Specs_37, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__Spec_4));
#line 306 "simplify_info.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_info__Specs_37, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__Specs0_36));
#line 306 "simplify_info.m"
        }
#line 385 "simplify_info.m"
        {
#line 385 "simplify_info.m"
          check_hlds__simplify__simplify_info__V_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 385 "simplify_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_64_64, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__V_48_48));
#line 385 "simplify_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_64_64, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__V_49_49));
#line 385 "simplify_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_64_64, 2) = ((MR_Box) (check_hlds__simplify__simplify_info__V_50_50));
#line 385 "simplify_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_64_64, 3) = ((MR_Box) (check_hlds__simplify__simplify_info__V_51_51));
#line 385 "simplify_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_64_64, 4) = ((MR_Box) (check_hlds__simplify__simplify_info__Specs_37));
#line 385 "simplify_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_64_64, 5) = ((MR_Box) ((check_hlds__simplify__simplify_info__V_52_52 | ((check_hlds__simplify__simplify_info__V_53_53 << (MR_Integer) 1)))));
#line 385 "simplify_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_64_64, 6) = ((MR_Box) (check_hlds__simplify__simplify_info__V_54_54));
#line 385 "simplify_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_64_64, 7) = ((MR_Box) ((check_hlds__simplify__simplify_info__V_55_55 | ((((check_hlds__simplify__simplify_info__V_56_56 << (MR_Integer) 1)) | ((check_hlds__simplify__simplify_info__V_57_57 << (MR_Integer) 2)))))));
#line 385 "simplify_info.m"
        }
#line 385 "simplify_info.m"
        {
#line 385 "simplify_info.m"
          MR_Word base;
#line 385 "simplify_info.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 385 "simplify_info.m"
          *check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_7 = base;
#line 385 "simplify_info.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__SimplifyTasks_10));
#line 385 "simplify_info.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__V_26_26));
#line 385 "simplify_info.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__simplify__simplify_info__V_27_27));
#line 385 "simplify_info.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__simplify__simplify_info__V_28_28));
#line 385 "simplify_info.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__simplify__simplify_info__V_29_29));
#line 385 "simplify_info.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__simplify__simplify_info__V_30_30));
#line 385 "simplify_info.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__simplify__simplify_info__V_64_64));
#line 385 "simplify_info.m"
        }
#line 304 "simplify_info.m"
      }
#line 312 "simplify_info.m"
    else
#line 312 "simplify_info.m"
      *check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_7 = check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6;
#line 312 "simplify_info.m"
  }
#line 93 "simplify_info.m"
}

#line 90 "simplify_info.m"
void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_add_error_spec_3_p_0(
#line 90 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__Spec_4,
#line 90 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_8,
#line 90 "simplify_info.m"
  MR_Word * check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_9)
#line 90 "simplify_info.m"
{
#line 304 "simplify_info.m"
  {
#line 304 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 304 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__Specs0_6;
#line 304 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__Specs_7;
#line 304 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 6)));
#line 304 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
#line 304 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
#line 304 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
#line 304 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
#line 304 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 4)));
#line 304 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 5)));
#line 304 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_13_13, (MR_Integer) 0)));
#line 304 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_13_13, (MR_Integer) 1)));
#line 304 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_13_13, (MR_Integer) 2)));
#line 304 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_13_13, (MR_Integer) 3)));
#line 304 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_24_24;
#line 304 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_25_25;
#line 304 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__V_26_26;
#line 304 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_27_27;
#line 304 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_28_28;
#line 304 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_29_29;
#line 304 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_36_36;

#line 357 "simplify_info.m"
    check_hlds__simplify__simplify_info__Specs0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_13_13, (MR_Integer) 4)));
#line 357 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_24_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_13_13, (MR_Integer) 5)))) & (MR_Integer) 1);
#line 357 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_13_13, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 357 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_13_13, (MR_Integer) 6)));
#line 357 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_27_27 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_13_13, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 357 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_13_13, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 357 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_13_13, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 306 "simplify_info.m"
    {
#line 306 "simplify_info.m"
      check_hlds__simplify__simplify_info__Specs_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 306 "simplify_info.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_info__Specs_7, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__Spec_4));
#line 306 "simplify_info.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_info__Specs_7, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__Specs0_6));
#line 306 "simplify_info.m"
    }
#line 385 "simplify_info.m"
    {
#line 385 "simplify_info.m"
      check_hlds__simplify__simplify_info__V_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 385 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_36_36, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__V_20_20));
#line 385 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_36_36, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__V_21_21));
#line 385 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_36_36, 2) = ((MR_Box) (check_hlds__simplify__simplify_info__V_22_22));
#line 385 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_36_36, 3) = ((MR_Box) (check_hlds__simplify__simplify_info__V_23_23));
#line 385 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_36_36, 4) = ((MR_Box) (check_hlds__simplify__simplify_info__Specs_7));
#line 385 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_36_36, 5) = ((MR_Box) ((check_hlds__simplify__simplify_info__V_24_24 | ((check_hlds__simplify__simplify_info__V_25_25 << (MR_Integer) 1)))));
#line 385 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_36_36, 6) = ((MR_Box) (check_hlds__simplify__simplify_info__V_26_26));
#line 385 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_36_36, 7) = ((MR_Box) ((check_hlds__simplify__simplify_info__V_27_27 | ((((check_hlds__simplify__simplify_info__V_28_28 << (MR_Integer) 1)) | ((check_hlds__simplify__simplify_info__V_29_29 << (MR_Integer) 2)))))));
#line 385 "simplify_info.m"
    }
#line 385 "simplify_info.m"
    {
#line 385 "simplify_info.m"
      MR_Word base;
#line 385 "simplify_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 385 "simplify_info.m"
      *check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_9 = base;
#line 385 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__V_14_14));
#line 385 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__V_15_15));
#line 385 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__simplify__simplify_info__V_16_16));
#line 385 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__simplify__simplify_info__V_17_17));
#line 385 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__simplify__simplify_info__V_18_18));
#line 385 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__simplify__simplify_info__V_19_19));
#line 385 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__simplify__simplify_info__V_36_36));
#line 385 "simplify_info.m"
    }
#line 304 "simplify_info.m"
  }
#line 90 "simplify_info.m"
}

#line 87 "simplify_info.m"
void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_add_elim_vars_3_p_0(
#line 87 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__ElimVars_4,
#line 87 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_8,
#line 87 "simplify_info.m"
  MR_Word * check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_9)
#line 87 "simplify_info.m"
{
#line 299 "simplify_info.m"
  {
#line 299 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 299 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__ElimVarsLists0_6;
#line 299 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__ElimVarsLists_7;
#line 299 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 6)));
#line 299 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
#line 299 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
#line 299 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
#line 299 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
#line 299 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 4)));
#line 299 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 5)));
#line 299 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_13_13, (MR_Integer) 0)));
#line 299 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_13_13, (MR_Integer) 1)));
#line 299 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_13_13, (MR_Integer) 2)));
#line 299 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_23_23;
#line 299 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_24_24;
#line 299 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_25_25;
#line 299 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__V_26_26;
#line 299 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_27_27;
#line 299 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_28_28;
#line 299 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_29_29;
#line 299 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_36_36;

#line 355 "simplify_info.m"
    check_hlds__simplify__simplify_info__ElimVarsLists0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_13_13, (MR_Integer) 3)));
#line 355 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_13_13, (MR_Integer) 4)));
#line 355 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_24_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_13_13, (MR_Integer) 5)))) & (MR_Integer) 1);
#line 355 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_13_13, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 355 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_13_13, (MR_Integer) 6)));
#line 355 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_27_27 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_13_13, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 355 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_13_13, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 355 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_13_13, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 301 "simplify_info.m"
    {
#line 301 "simplify_info.m"
      check_hlds__simplify__simplify_info__ElimVarsLists_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 301 "simplify_info.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_info__ElimVarsLists_7, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__ElimVars_4));
#line 301 "simplify_info.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_info__ElimVarsLists_7, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__ElimVarsLists0_6));
#line 301 "simplify_info.m"
    }
#line 383 "simplify_info.m"
    {
#line 383 "simplify_info.m"
      check_hlds__simplify__simplify_info__V_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 383 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_36_36, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__V_20_20));
#line 383 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_36_36, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__V_21_21));
#line 383 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_36_36, 2) = ((MR_Box) (check_hlds__simplify__simplify_info__V_22_22));
#line 383 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_36_36, 3) = ((MR_Box) (check_hlds__simplify__simplify_info__ElimVarsLists_7));
#line 383 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_36_36, 4) = ((MR_Box) (check_hlds__simplify__simplify_info__V_23_23));
#line 383 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_36_36, 5) = ((MR_Box) ((check_hlds__simplify__simplify_info__V_24_24 | ((check_hlds__simplify__simplify_info__V_25_25 << (MR_Integer) 1)))));
#line 383 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_36_36, 6) = ((MR_Box) (check_hlds__simplify__simplify_info__V_26_26));
#line 383 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_36_36, 7) = ((MR_Box) ((check_hlds__simplify__simplify_info__V_27_27 | ((((check_hlds__simplify__simplify_info__V_28_28 << (MR_Integer) 1)) | ((check_hlds__simplify__simplify_info__V_29_29 << (MR_Integer) 2)))))));
#line 383 "simplify_info.m"
    }
#line 383 "simplify_info.m"
    {
#line 383 "simplify_info.m"
      MR_Word base;
#line 383 "simplify_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 383 "simplify_info.m"
      *check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_9 = base;
#line 383 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__V_14_14));
#line 383 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__V_15_15));
#line 383 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__simplify__simplify_info__V_16_16));
#line 383 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__simplify__simplify_info__V_17_17));
#line 383 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__simplify__simplify_info__V_18_18));
#line 383 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__simplify__simplify_info__V_19_19));
#line 383 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__simplify__simplify_info__V_36_36));
#line 383 "simplify_info.m"
    }
#line 299 "simplify_info.m"
  }
#line 87 "simplify_info.m"
}

#line 84 "simplify_info.m"
void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_get_pred_proc_info_3_p_0(
#line 84 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__Info_4,
#line 84 "simplify_info.m"
  MR_Word * check_hlds__simplify__simplify_info__PredInfo_5,
#line 84 "simplify_info.m"
  MR_Word * check_hlds__simplify__simplify_info__ProcInfo_6)
#line 84 "simplify_info.m"
{
#line 294 "simplify_info.m"
  {
#line 294 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 294 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__ModuleInfo_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_4, (MR_Integer) 1)));
#line 294 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__PredId_8;
#line 294 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__ProcId_9;
#line 294 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__SubInfo_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_4, (MR_Integer) 6)));
#line 338 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_4, (MR_Integer) 0)));
#line 338 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_4, (MR_Integer) 2)));
#line 338 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_4, (MR_Integer) 3)));
#line 338 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_4, (MR_Integer) 4)));
#line 338 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_4, (MR_Integer) 5)));
#line 350 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_29_29;
#line 350 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_30_30;
#line 350 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_31_31;
#line 350 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_32_32;
#line 350 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_33_33;
#line 350 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__V_34_34;
#line 350 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_35_35;
#line 350 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_36_36;
#line 350 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_37_37;

#line 350 "simplify_info.m"
    check_hlds__simplify__simplify_info__PredId_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SubInfo_21, (MR_Integer) 0)));
#line 350 "simplify_info.m"
    check_hlds__simplify__simplify_info__ProcId_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SubInfo_21, (MR_Integer) 1)));
#line 350 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SubInfo_21, (MR_Integer) 2)));
#line 350 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SubInfo_21, (MR_Integer) 3)));
#line 350 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SubInfo_21, (MR_Integer) 4)));
#line 350 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_32_32 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SubInfo_21, (MR_Integer) 5)))) & (MR_Integer) 1);
#line 350 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SubInfo_21, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 350 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_34_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SubInfo_21, (MR_Integer) 6)));
#line 350 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_35_35 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SubInfo_21, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 350 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SubInfo_21, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 350 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SubInfo_21, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 297 "simplify_info.m"
    {
#line 297 "simplify_info.m"
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(check_hlds__simplify__simplify_info__ModuleInfo_7, check_hlds__simplify__simplify_info__PredId_8, check_hlds__simplify__simplify_info__ProcId_9, check_hlds__simplify__simplify_info__PredInfo_5, check_hlds__simplify__simplify_info__ProcInfo_6);
#line 297 "simplify_info.m"
      return;
    }
#line 294 "simplify_info.m"
  }
#line 84 "simplify_info.m"
}

#line 76 "simplify_info.m"
void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_reinit_3_p_0(
#line 76 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__SimplifyTasks_4,
#line 76 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6,
#line 76 "simplify_info.m"
  MR_Word * check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_7)
#line 76 "simplify_info.m"
{
#line 285 "simplify_info.m"
  {
#line 285 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 285 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_24_24;
#line 285 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
#line 285 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
#line 285 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
#line 285 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
#line 285 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
#line 285 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
#line 285 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_31_31, (MR_Integer) 0)));
#line 285 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_31_31, (MR_Integer) 1)));
#line 285 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_31_31, (MR_Integer) 2)));
#line 285 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_31_31, (MR_Integer) 3)));
#line 285 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_31_31, (MR_Integer) 4)));
#line 285 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__V_45_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_31_31, (MR_Integer) 6)));
#line 285 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_47_47 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_31_31, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 285 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_49_49 = check_hlds__simplify__simplify_info__SimplifyTasks_4;
#line 285 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_50_50 = check_hlds__simplify__simplify_info__V_26_26;
#line 285 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_51_51 = check_hlds__simplify__simplify_info__V_27_27;
#line 285 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_52_52 = check_hlds__simplify__simplify_info__V_28_28;
#line 285 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_53_53 = check_hlds__simplify__simplify_info__V_29_29;
#line 285 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_54_54 = check_hlds__simplify__simplify_info__V_30_30;
#line 285 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_62_62 = check_hlds__simplify__simplify_info__V_38_38;
#line 285 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__V_63_63 = check_hlds__simplify__simplify_info__V_39_39;
#line 285 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_64_64 = check_hlds__simplify__simplify_info__V_40_40;
#line 285 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_65_65 = check_hlds__simplify__simplify_info__V_41_41;
#line 285 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_66_66 = check_hlds__simplify__simplify_info__V_42_42;
#line 285 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__V_69_69 = check_hlds__simplify__simplify_info__V_45_45;
#line 285 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_71_71 = check_hlds__simplify__simplify_info__V_47_47;
#line 285 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_73_73 = check_hlds__simplify__simplify_info__V_49_49;
#line 285 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_74_74 = check_hlds__simplify__simplify_info__V_50_50;
#line 285 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_75_75 = check_hlds__simplify__simplify_info__V_51_51;
#line 285 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_76_76 = check_hlds__simplify__simplify_info__V_52_52;
#line 285 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_77_77 = check_hlds__simplify__simplify_info__V_53_53;
#line 285 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_78_78 = check_hlds__simplify__simplify_info__V_54_54;
#line 285 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_86_86 = check_hlds__simplify__simplify_info__V_62_62;
#line 285 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__V_87_87 = check_hlds__simplify__simplify_info__V_63_63;
#line 285 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_88_88 = check_hlds__simplify__simplify_info__V_64_64;
#line 285 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_89_89 = check_hlds__simplify__simplify_info__V_65_65;
#line 285 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_90_90 = check_hlds__simplify__simplify_info__V_66_66;
#line 285 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__V_93_93 = check_hlds__simplify__simplify_info__V_69_69;
#line 285 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_95_95 = check_hlds__simplify__simplify_info__V_71_71;
#line 285 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_97_97 = check_hlds__simplify__simplify_info__V_73_73;
#line 285 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_98_98 = check_hlds__simplify__simplify_info__V_74_74;
#line 285 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_99_99 = check_hlds__simplify__simplify_info__V_75_75;
#line 285 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_100_100 = check_hlds__simplify__simplify_info__V_76_76;
#line 285 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_101_101 = check_hlds__simplify__simplify_info__V_77_77;
#line 285 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_102_102 = check_hlds__simplify__simplify_info__V_78_78;
#line 286 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
#line 287 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_43_43 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_31_31, (MR_Integer) 5)))) & (MR_Integer) 1);
#line 287 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_44_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_31_31, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 287 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_46_46 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_31_31, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 287 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_48_48 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_31_31, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);

#line 290 "simplify_info.m"
    {
#line 290 "simplify_info.m"
      check_hlds__simplify__simplify_info__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 290 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_24_24, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__V_86_86));
#line 290 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_24_24, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__V_87_87));
#line 290 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_24_24, 2) = ((MR_Box) (check_hlds__simplify__simplify_info__V_88_88));
#line 290 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_24_24, 3) = ((MR_Box) (check_hlds__simplify__simplify_info__V_89_89));
#line 290 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_24_24, 4) = ((MR_Box) (check_hlds__simplify__simplify_info__V_90_90));
#line 290 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_24_24, 5) = ((MR_Box) (((MR_Integer) 0 | (((MR_Integer) 0 << (MR_Integer) 1)))));
#line 290 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_24_24, 6) = ((MR_Box) (check_hlds__simplify__simplify_info__V_93_93));
#line 290 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_24_24, 7) = ((MR_Box) (((MR_Integer) 1 | ((((check_hlds__simplify__simplify_info__V_95_95 << (MR_Integer) 1)) | (((MR_Integer) 1 << (MR_Integer) 2)))))));
#line 290 "simplify_info.m"
    }
#line 290 "simplify_info.m"
    {
#line 290 "simplify_info.m"
      MR_Word base;
#line 290 "simplify_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 290 "simplify_info.m"
      *check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_7 = base;
#line 290 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__V_97_97));
#line 290 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__V_98_98));
#line 290 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__simplify__simplify_info__V_99_99));
#line 290 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__simplify__simplify_info__V_100_100));
#line 290 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__simplify__simplify_info__V_101_101));
#line 290 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__simplify__simplify_info__V_102_102));
#line 290 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__simplify__simplify_info__V_24_24));
#line 290 "simplify_info.m"
    }
#line 285 "simplify_info.m"
  }
#line 76 "simplify_info.m"
}

#line 71 "simplify_info.m"
void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_init_6_p_0(
#line 71 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__ModuleInfo_7,
#line 71 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__PredId_8,
#line 71 "simplify_info.m"
  MR_Integer check_hlds__simplify__simplify_info__ProcId_9,
#line 71 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__ProcInfo_10,
#line 71 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__SimplifyTasks_11,
#line 71 "simplify_info.m"
  MR_Word * check_hlds__simplify__simplify_info__Info_12)
#line 71 "simplify_info.m"
{
#line 265 "simplify_info.m"
  {
#line 265 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 265 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__Globals_13;
#line 265 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__FullyStrict_14;
#line 265 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__VarSet_15;
#line 265 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__VarTypes_16;
#line 265 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__InstVarSet_17;
#line 265 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__RttiVarMaps_18;
#line 265 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__SubInfo_26;

#line 266 "simplify_info.m"
    {
#line 266 "simplify_info.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__simplify__simplify_info__ModuleInfo_7, &check_hlds__simplify__simplify_info__Globals_13);
    }
#line 267 "simplify_info.m"
    {
#line 267 "simplify_info.m"
      libs__globals__lookup_bool_option_3_p_0(check_hlds__simplify__simplify_info__Globals_13, (MR_Integer) 167, &check_hlds__simplify__simplify_info__FullyStrict_14);
    }
#line 268 "simplify_info.m"
    {
#line 268 "simplify_info.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(check_hlds__simplify__simplify_info__ProcInfo_10, &check_hlds__simplify__simplify_info__VarSet_15);
    }
#line 269 "simplify_info.m"
    {
#line 269 "simplify_info.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(check_hlds__simplify__simplify_info__ProcInfo_10, &check_hlds__simplify__simplify_info__VarTypes_16);
    }
#line 270 "simplify_info.m"
    {
#line 270 "simplify_info.m"
      hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(check_hlds__simplify__simplify_info__ProcInfo_10, &check_hlds__simplify__simplify_info__InstVarSet_17);
    }
#line 271 "simplify_info.m"
    {
#line 271 "simplify_info.m"
      hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(check_hlds__simplify__simplify_info__ProcInfo_10, &check_hlds__simplify__simplify_info__RttiVarMaps_18);
    }
#line 279 "simplify_info.m"
    {
#line 279 "simplify_info.m"
      check_hlds__simplify__simplify_info__SubInfo_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 279 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SubInfo_26, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__PredId_8));
#line 279 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SubInfo_26, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__ProcId_9));
#line 279 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SubInfo_26, 2) = ((MR_Box) (check_hlds__simplify__simplify_info__InstVarSet_17));
#line 279 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SubInfo_26, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 279 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SubInfo_26, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 279 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SubInfo_26, 5) = ((MR_Box) (((MR_Integer) 0 | (((MR_Integer) 0 << (MR_Integer) 1)))));
#line 279 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SubInfo_26, 6) = ((MR_Box) ((MR_Integer) 0));
#line 279 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SubInfo_26, 7) = ((MR_Box) (((MR_Integer) 1 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((MR_Integer) 1 << (MR_Integer) 2)))))));
#line 279 "simplify_info.m"
    }
#line 282 "simplify_info.m"
    {
#line 282 "simplify_info.m"
      MR_Word base;
#line 282 "simplify_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 282 "simplify_info.m"
      *check_hlds__simplify__simplify_info__Info_12 = base;
#line 282 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__SimplifyTasks_11));
#line 282 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__ModuleInfo_7));
#line 282 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__simplify__simplify_info__VarSet_15));
#line 282 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__simplify__simplify_info__VarTypes_16));
#line 282 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__simplify__simplify_info__RttiVarMaps_18));
#line 282 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__simplify__simplify_info__FullyStrict_14));
#line 282 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__simplify__simplify_info__SubInfo_26));
#line 282 "simplify_info.m"
    }
#line 265 "simplify_info.m"
  }
#line 71 "simplify_info.m"
}

void mercury__check_hlds__simplify__simplify_info__init(void)
{
}

void mercury__check_hlds__simplify__simplify_info__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__type_ctor_info_innermost_proc_0);
	MR_register_type_ctor_info(&check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__type_ctor_info_simplify_info_0);
	MR_register_type_ctor_info(&check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__type_ctor_info_simplify_nested_context_0);
	MR_register_type_ctor_info(&check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__type_ctor_info_simplify_sub_info_0);
}

void mercury__check_hlds__simplify__simplify_info__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module check_hlds.simplify.simplify_info. */
