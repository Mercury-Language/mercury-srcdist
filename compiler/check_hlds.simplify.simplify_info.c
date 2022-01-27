/*
** Automatically generated from `simplify_info.m'
** by the Mercury compiler,
** version DEV
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
#include "getopt_io.mih"
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
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "random.mih"
#include "recompilation.mih"
#include "require.mih"
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
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type_subst.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.status.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "check_hlds.simplify.simplify_tasks.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 141 "check_hlds.simplify.simplify_info.c"
static const MR_DuFunctorDesc check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_functor_desc_innermost_proc_0_0;

#line 144 "check_hlds.simplify.simplify_info.c"
static const MR_PseudoTypeInfo check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__field_types_innermost_proc_0_1[1];

#line 147 "check_hlds.simplify.simplify_info.c"
static const MR_DuFunctorDesc check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_functor_desc_innermost_proc_0_1;

#line 150 "check_hlds.simplify.simplify_info.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_stag_ordered_innermost_proc_0_0[1];

#line 153 "check_hlds.simplify.simplify_info.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_stag_ordered_innermost_proc_0_1[1];

#line 156 "check_hlds.simplify.simplify_info.c"
static const MR_DuPtagLayout check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_ptag_ordered_innermost_proc_0[2];

#line 159 "check_hlds.simplify.simplify_info.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_name_ordered_innermost_proc_0[2];

#line 162 "check_hlds.simplify.simplify_info.c"
static const MR_Integer check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__functor_number_map_innermost_proc_0[2];

#line 165 "check_hlds.simplify.simplify_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__simplify_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 168 "check_hlds.simplify.simplify_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__simplify_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 171 "check_hlds.simplify.simplify_info.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__simplify__simplify_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 174 "check_hlds.simplify.simplify_info.c"
static const MR_PseudoTypeInfo check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__field_types_simplify_info_0_0[7];

#line 177 "check_hlds.simplify.simplify_info.c"
static const MR_ConstString check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__field_names_simplify_info_0_0[7];

#line 180 "check_hlds.simplify.simplify_info.c"
static const MR_DuFunctorDesc check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_functor_desc_simplify_info_0_0;

#line 183 "check_hlds.simplify.simplify_info.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_stag_ordered_simplify_info_0_0[1];

#line 186 "check_hlds.simplify.simplify_info.c"
static const MR_DuPtagLayout check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_ptag_ordered_simplify_info_0[1];

#line 189 "check_hlds.simplify.simplify_info.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_name_ordered_simplify_info_0[1];

#line 192 "check_hlds.simplify.simplify_info.c"
static const MR_Integer check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__functor_number_map_simplify_info_0[1];

#line 195 "check_hlds.simplify.simplify_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__simplify_info__maybe__ti_maybe_1check_hlds__simplify__simplify_info__type_ctor_info_innermost_proc_0;

#line 198 "check_hlds.simplify.simplify_info.c"
static const MR_PseudoTypeInfo check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__field_types_simplify_nested_context_0_0[3];

#line 201 "check_hlds.simplify.simplify_info.c"
static const MR_ConstString check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__field_names_simplify_nested_context_0_0[3];

#line 204 "check_hlds.simplify.simplify_info.c"
static const MR_DuFunctorDesc check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_functor_desc_simplify_nested_context_0_0;

#line 207 "check_hlds.simplify.simplify_info.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_stag_ordered_simplify_nested_context_0_0[1];

#line 210 "check_hlds.simplify.simplify_info.c"
static const MR_DuPtagLayout check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_ptag_ordered_simplify_nested_context_0[1];

#line 213 "check_hlds.simplify.simplify_info.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_name_ordered_simplify_nested_context_0[1];

#line 216 "check_hlds.simplify.simplify_info.c"
static const MR_Integer check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__functor_number_map_simplify_nested_context_0[1];

#line 219 "check_hlds.simplify.simplify_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__simplify_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0;

#line 222 "check_hlds.simplify.simplify_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__simplify_info__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 225 "check_hlds.simplify.simplify_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__simplify_info__list__ti_list_1list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 228 "check_hlds.simplify.simplify_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__simplify_info__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0;

#line 231 "check_hlds.simplify.simplify_info.c"
static const MR_PseudoTypeInfo check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__field_types_simplify_sub_info_0_0[11];

#line 234 "check_hlds.simplify.simplify_info.c"
static const MR_ConstString check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__field_names_simplify_sub_info_0_0[11];

#line 237 "check_hlds.simplify.simplify_info.c"
static const MR_DuArgLocn check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__field_locns_simplify_sub_info_0_0[11];

#line 240 "check_hlds.simplify.simplify_info.c"
static const MR_DuFunctorDesc check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_functor_desc_simplify_sub_info_0_0;

#line 243 "check_hlds.simplify.simplify_info.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_stag_ordered_simplify_sub_info_0_0[1];

#line 246 "check_hlds.simplify.simplify_info.c"
static const MR_DuPtagLayout check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_ptag_ordered_simplify_sub_info_0[1];

#line 249 "check_hlds.simplify.simplify_info.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_name_ordered_simplify_sub_info_0[1];

#line 252 "check_hlds.simplify.simplify_info.c"
static const MR_Integer check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__functor_number_map_simplify_sub_info_0[1];

#line 255 "check_hlds.simplify.simplify_info.c"
static MR_bool MR_CALL 
check_hlds__simplify__simplify_info____Unify____innermost_proc_0_0_10001(
#line 258 "check_hlds.simplify.simplify_info.c"
  MR_Box check_hlds__simplify__simplify_info__wrapper_arg_1,
#line 260 "check_hlds.simplify.simplify_info.c"
  MR_Box check_hlds__simplify__simplify_info__wrapper_arg_2);

#line 263 "check_hlds.simplify.simplify_info.c"
static void MR_CALL 
check_hlds__simplify__simplify_info____Compare____innermost_proc_0_0_10001(
#line 266 "check_hlds.simplify.simplify_info.c"
  MR_Box * check_hlds__simplify__simplify_info__wrapper_arg_1,
#line 268 "check_hlds.simplify.simplify_info.c"
  MR_Box check_hlds__simplify__simplify_info__wrapper_arg_2,
#line 270 "check_hlds.simplify.simplify_info.c"
  MR_Box check_hlds__simplify__simplify_info__wrapper_arg_3);

#line 273 "check_hlds.simplify.simplify_info.c"
static MR_bool MR_CALL 
check_hlds__simplify__simplify_info____Unify____simplify_info_0_0_10001(
#line 276 "check_hlds.simplify.simplify_info.c"
  MR_Box check_hlds__simplify__simplify_info__wrapper_arg_1,
#line 278 "check_hlds.simplify.simplify_info.c"
  MR_Box check_hlds__simplify__simplify_info__wrapper_arg_2);

#line 281 "check_hlds.simplify.simplify_info.c"
static void MR_CALL 
check_hlds__simplify__simplify_info____Compare____simplify_info_0_0_10001(
#line 284 "check_hlds.simplify.simplify_info.c"
  MR_Box * check_hlds__simplify__simplify_info__wrapper_arg_1,
#line 286 "check_hlds.simplify.simplify_info.c"
  MR_Box check_hlds__simplify__simplify_info__wrapper_arg_2,
#line 288 "check_hlds.simplify.simplify_info.c"
  MR_Box check_hlds__simplify__simplify_info__wrapper_arg_3);

#line 291 "check_hlds.simplify.simplify_info.c"
static MR_bool MR_CALL 
check_hlds__simplify__simplify_info____Unify____simplify_nested_context_0_0_10001(
#line 294 "check_hlds.simplify.simplify_info.c"
  MR_Box check_hlds__simplify__simplify_info__wrapper_arg_1,
#line 296 "check_hlds.simplify.simplify_info.c"
  MR_Box check_hlds__simplify__simplify_info__wrapper_arg_2);

#line 299 "check_hlds.simplify.simplify_info.c"
static void MR_CALL 
check_hlds__simplify__simplify_info____Compare____simplify_nested_context_0_0_10001(
#line 302 "check_hlds.simplify.simplify_info.c"
  MR_Box * check_hlds__simplify__simplify_info__wrapper_arg_1,
#line 304 "check_hlds.simplify.simplify_info.c"
  MR_Box check_hlds__simplify__simplify_info__wrapper_arg_2,
#line 306 "check_hlds.simplify.simplify_info.c"
  MR_Box check_hlds__simplify__simplify_info__wrapper_arg_3);

#line 309 "check_hlds.simplify.simplify_info.c"
static MR_bool MR_CALL 
check_hlds__simplify__simplify_info____Unify____simplify_sub_info_0_0_10001(
#line 312 "check_hlds.simplify.simplify_info.c"
  MR_Box check_hlds__simplify__simplify_info__wrapper_arg_1,
#line 314 "check_hlds.simplify.simplify_info.c"
  MR_Box check_hlds__simplify__simplify_info__wrapper_arg_2);

#line 317 "check_hlds.simplify.simplify_info.c"
static void MR_CALL 
check_hlds__simplify__simplify_info____Compare____simplify_sub_info_0_0_10001(
#line 320 "check_hlds.simplify.simplify_info.c"
  MR_Box * check_hlds__simplify__simplify_info__wrapper_arg_1,
#line 322 "check_hlds.simplify.simplify_info.c"
  MR_Box check_hlds__simplify__simplify_info__wrapper_arg_2,
#line 324 "check_hlds.simplify.simplify_info.c"
  MR_Box check_hlds__simplify__simplify_info__wrapper_arg_3);

#line 231 "simplify_info.m"
static void MR_CALL 
check_hlds__simplify__simplify_info____Compare____simplify_sub_info_0_0(
#line 231 "simplify_info.m"
  MR_Word * check_hlds__simplify__simplify_info__HeadVar__1_1,
#line 231 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__HeadVar__2_2,
#line 231 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__HeadVar__3_3);

#line 231 "simplify_info.m"
static MR_bool MR_CALL 
check_hlds__simplify__simplify_info____Unify____simplify_sub_info_0_0(
#line 231 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__HeadVar__1_1,
#line 231 "simplify_info.m"
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



#line 414 "check_hlds.simplify.simplify_info.c"
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

#line 429 "check_hlds.simplify.simplify_info.c"
static const MR_PseudoTypeInfo check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__field_types_innermost_proc_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0
};

#line 434 "check_hlds.simplify.simplify_info.c"
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

#line 449 "check_hlds.simplify.simplify_info.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_stag_ordered_innermost_proc_0_0[1] = {
  &check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_functor_desc_innermost_proc_0_0
};

#line 454 "check_hlds.simplify.simplify_info.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_stag_ordered_innermost_proc_0_1[1] = {
  &check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_functor_desc_innermost_proc_0_1
};

#line 459 "check_hlds.simplify.simplify_info.c"
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

#line 473 "check_hlds.simplify.simplify_info.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_name_ordered_innermost_proc_0[2] = {
  &check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_functor_desc_innermost_proc_0_1,
  &check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_functor_desc_innermost_proc_0_0
};

#line 479 "check_hlds.simplify.simplify_info.c"
static const MR_Integer check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__functor_number_map_innermost_proc_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 485 "check_hlds.simplify.simplify_info.c"
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

#line 502 "check_hlds.simplify.simplify_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__simplify_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 510 "check_hlds.simplify.simplify_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__simplify_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 518 "check_hlds.simplify.simplify_info.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__simplify__simplify_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &check_hlds__simplify__simplify_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 527 "check_hlds.simplify.simplify_info.c"
static const MR_PseudoTypeInfo check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__field_types_simplify_info_0_0[7] = {
  (MR_PseudoTypeInfo) &check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__type_ctor_info_simplify_tasks_0,
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__simplify_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__simplify_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__type_ctor_info_simplify_sub_info_0
};

#line 538 "check_hlds.simplify.simplify_info.c"
static const MR_ConstString check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__field_names_simplify_info_0_0[7] = {
  (MR_String) "simp_simplify_tasks",
  (MR_String) "simp_module_info",
  (MR_String) "simp_varset",
  (MR_String) "simp_vartypes",
  (MR_String) "simp_rtti_varmaps",
  (MR_String) "simp_fully_strict",
  (MR_String) "simp_sub_info"
};

#line 549 "check_hlds.simplify.simplify_info.c"
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

#line 564 "check_hlds.simplify.simplify_info.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_stag_ordered_simplify_info_0_0[1] = {
  &check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_functor_desc_simplify_info_0_0
};

#line 569 "check_hlds.simplify.simplify_info.c"
static const MR_DuPtagLayout check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_ptag_ordered_simplify_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_stag_ordered_simplify_info_0_0
  }
};

#line 578 "check_hlds.simplify.simplify_info.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_name_ordered_simplify_info_0[1] = {
  &check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_functor_desc_simplify_info_0_0
};

#line 583 "check_hlds.simplify.simplify_info.c"
static const MR_Integer check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__functor_number_map_simplify_info_0[1] = {
  (MR_Integer) 0
};

#line 588 "check_hlds.simplify.simplify_info.c"
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

#line 605 "check_hlds.simplify.simplify_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__simplify_info__maybe__ti_maybe_1check_hlds__simplify__simplify_info__type_ctor_info_innermost_proc_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__type_ctor_info_innermost_proc_0
  }
};

#line 613 "check_hlds.simplify.simplify_info.c"
static const MR_PseudoTypeInfo check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__field_types_simplify_nested_context_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__simplify_info__maybe__ti_maybe_1check_hlds__simplify__simplify_info__type_ctor_info_innermost_proc_0
};

#line 620 "check_hlds.simplify.simplify_info.c"
static const MR_ConstString check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__field_names_simplify_nested_context_0_0[3] = {
  (MR_String) "snc_inside_dupl_for_switch",
  (MR_String) "snc_num_enclosing_lambdas",
  (MR_String) "snc_proc_is_model_non"
};

#line 627 "check_hlds.simplify.simplify_info.c"
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

#line 642 "check_hlds.simplify.simplify_info.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_stag_ordered_simplify_nested_context_0_0[1] = {
  &check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_functor_desc_simplify_nested_context_0_0
};

#line 647 "check_hlds.simplify.simplify_info.c"
static const MR_DuPtagLayout check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_ptag_ordered_simplify_nested_context_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_stag_ordered_simplify_nested_context_0_0
  }
};

#line 656 "check_hlds.simplify.simplify_info.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_name_ordered_simplify_nested_context_0[1] = {
  &check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_functor_desc_simplify_nested_context_0_0
};

#line 661 "check_hlds.simplify.simplify_info.c"
static const MR_Integer check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__functor_number_map_simplify_nested_context_0[1] = {
  (MR_Integer) 0
};

#line 666 "check_hlds.simplify.simplify_info.c"
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

#line 683 "check_hlds.simplify.simplify_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__simplify_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

#line 691 "check_hlds.simplify.simplify_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__simplify_info__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__simplify__simplify_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 699 "check_hlds.simplify.simplify_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__simplify_info__list__ti_list_1list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__simplify__simplify_info__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 707 "check_hlds.simplify.simplify_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__simplify_info__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 715 "check_hlds.simplify.simplify_info.c"
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

#line 730 "check_hlds.simplify.simplify_info.c"
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

#line 745 "check_hlds.simplify.simplify_info.c"
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

#line 804 "check_hlds.simplify.simplify_info.c"
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

#line 819 "check_hlds.simplify.simplify_info.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_stag_ordered_simplify_sub_info_0_0[1] = {
  &check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_functor_desc_simplify_sub_info_0_0
};

#line 824 "check_hlds.simplify.simplify_info.c"
static const MR_DuPtagLayout check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_ptag_ordered_simplify_sub_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_stag_ordered_simplify_sub_info_0_0
  }
};

#line 833 "check_hlds.simplify.simplify_info.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_name_ordered_simplify_sub_info_0[1] = {
  &check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_functor_desc_simplify_sub_info_0_0
};

#line 838 "check_hlds.simplify.simplify_info.c"
static const MR_Integer check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__functor_number_map_simplify_sub_info_0[1] = {
  (MR_Integer) 0
};

#line 843 "check_hlds.simplify.simplify_info.c"
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

#line 860 "check_hlds.simplify.simplify_info.c"
static MR_bool MR_CALL 
check_hlds__simplify__simplify_info____Unify____innermost_proc_0_0_10001(
#line 863 "check_hlds.simplify.simplify_info.c"
  MR_Box check_hlds__simplify__simplify_info__wrapper_arg_1,
#line 865 "check_hlds.simplify.simplify_info.c"
  MR_Box check_hlds__simplify__simplify_info__wrapper_arg_2)
#line 867 "check_hlds.simplify.simplify_info.c"
{
#line 869 "check_hlds.simplify.simplify_info.c"
  {
#line 871 "check_hlds.simplify.simplify_info.c"
    MR_bool check_hlds__simplify__simplify_info__succeeded;

#line 874 "check_hlds.simplify.simplify_info.c"
    {
#line 876 "check_hlds.simplify.simplify_info.c"
      check_hlds__simplify__simplify_info__succeeded = check_hlds__simplify__simplify_info____Unify____innermost_proc_0_0(((MR_Word) check_hlds__simplify__simplify_info__wrapper_arg_1), ((MR_Word) check_hlds__simplify__simplify_info__wrapper_arg_2));
    }
#line 879 "check_hlds.simplify.simplify_info.c"
    return check_hlds__simplify__simplify_info__succeeded;
#line 881 "check_hlds.simplify.simplify_info.c"
  }
#line 883 "check_hlds.simplify.simplify_info.c"
}

#line 886 "check_hlds.simplify.simplify_info.c"
static void MR_CALL 
check_hlds__simplify__simplify_info____Compare____innermost_proc_0_0_10001(
#line 889 "check_hlds.simplify.simplify_info.c"
  MR_Box * check_hlds__simplify__simplify_info__wrapper_arg_1,
#line 891 "check_hlds.simplify.simplify_info.c"
  MR_Box check_hlds__simplify__simplify_info__wrapper_arg_2,
#line 893 "check_hlds.simplify.simplify_info.c"
  MR_Box check_hlds__simplify__simplify_info__wrapper_arg_3)
#line 895 "check_hlds.simplify.simplify_info.c"
{
#line 897 "check_hlds.simplify.simplify_info.c"
  {
#line 899 "check_hlds.simplify.simplify_info.c"
    MR_Word check_hlds__simplify__simplify_info__conv0_HeadVar__1_1;

#line 902 "check_hlds.simplify.simplify_info.c"
    {
#line 904 "check_hlds.simplify.simplify_info.c"
      check_hlds__simplify__simplify_info____Compare____innermost_proc_0_0(&check_hlds__simplify__simplify_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__simplify__simplify_info__wrapper_arg_2), ((MR_Word) check_hlds__simplify__simplify_info__wrapper_arg_3));
    }
#line 907 "check_hlds.simplify.simplify_info.c"
    *check_hlds__simplify__simplify_info__wrapper_arg_1 = ((MR_Box) (check_hlds__simplify__simplify_info__conv0_HeadVar__1_1));
#line 909 "check_hlds.simplify.simplify_info.c"
  }
#line 911 "check_hlds.simplify.simplify_info.c"
}

#line 914 "check_hlds.simplify.simplify_info.c"
static MR_bool MR_CALL 
check_hlds__simplify__simplify_info____Unify____simplify_info_0_0_10001(
#line 917 "check_hlds.simplify.simplify_info.c"
  MR_Box check_hlds__simplify__simplify_info__wrapper_arg_1,
#line 919 "check_hlds.simplify.simplify_info.c"
  MR_Box check_hlds__simplify__simplify_info__wrapper_arg_2)
#line 921 "check_hlds.simplify.simplify_info.c"
{
#line 923 "check_hlds.simplify.simplify_info.c"
  {
#line 925 "check_hlds.simplify.simplify_info.c"
    MR_bool check_hlds__simplify__simplify_info__succeeded;

#line 928 "check_hlds.simplify.simplify_info.c"
    {
#line 930 "check_hlds.simplify.simplify_info.c"
      check_hlds__simplify__simplify_info__succeeded = check_hlds__simplify__simplify_info____Unify____simplify_info_0_0(((MR_Word) check_hlds__simplify__simplify_info__wrapper_arg_1), ((MR_Word) check_hlds__simplify__simplify_info__wrapper_arg_2));
    }
#line 933 "check_hlds.simplify.simplify_info.c"
    return check_hlds__simplify__simplify_info__succeeded;
#line 935 "check_hlds.simplify.simplify_info.c"
  }
#line 937 "check_hlds.simplify.simplify_info.c"
}

#line 940 "check_hlds.simplify.simplify_info.c"
static void MR_CALL 
check_hlds__simplify__simplify_info____Compare____simplify_info_0_0_10001(
#line 943 "check_hlds.simplify.simplify_info.c"
  MR_Box * check_hlds__simplify__simplify_info__wrapper_arg_1,
#line 945 "check_hlds.simplify.simplify_info.c"
  MR_Box check_hlds__simplify__simplify_info__wrapper_arg_2,
#line 947 "check_hlds.simplify.simplify_info.c"
  MR_Box check_hlds__simplify__simplify_info__wrapper_arg_3)
#line 949 "check_hlds.simplify.simplify_info.c"
{
#line 951 "check_hlds.simplify.simplify_info.c"
  {
#line 953 "check_hlds.simplify.simplify_info.c"
    MR_Word check_hlds__simplify__simplify_info__conv0_HeadVar__1_1;

#line 956 "check_hlds.simplify.simplify_info.c"
    {
#line 958 "check_hlds.simplify.simplify_info.c"
      check_hlds__simplify__simplify_info____Compare____simplify_info_0_0(&check_hlds__simplify__simplify_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__simplify__simplify_info__wrapper_arg_2), ((MR_Word) check_hlds__simplify__simplify_info__wrapper_arg_3));
    }
#line 961 "check_hlds.simplify.simplify_info.c"
    *check_hlds__simplify__simplify_info__wrapper_arg_1 = ((MR_Box) (check_hlds__simplify__simplify_info__conv0_HeadVar__1_1));
#line 963 "check_hlds.simplify.simplify_info.c"
  }
#line 965 "check_hlds.simplify.simplify_info.c"
}

#line 968 "check_hlds.simplify.simplify_info.c"
static MR_bool MR_CALL 
check_hlds__simplify__simplify_info____Unify____simplify_nested_context_0_0_10001(
#line 971 "check_hlds.simplify.simplify_info.c"
  MR_Box check_hlds__simplify__simplify_info__wrapper_arg_1,
#line 973 "check_hlds.simplify.simplify_info.c"
  MR_Box check_hlds__simplify__simplify_info__wrapper_arg_2)
#line 975 "check_hlds.simplify.simplify_info.c"
{
#line 977 "check_hlds.simplify.simplify_info.c"
  {
#line 979 "check_hlds.simplify.simplify_info.c"
    MR_bool check_hlds__simplify__simplify_info__succeeded;

#line 982 "check_hlds.simplify.simplify_info.c"
    {
#line 984 "check_hlds.simplify.simplify_info.c"
      check_hlds__simplify__simplify_info__succeeded = check_hlds__simplify__simplify_info____Unify____simplify_nested_context_0_0(((MR_Word) check_hlds__simplify__simplify_info__wrapper_arg_1), ((MR_Word) check_hlds__simplify__simplify_info__wrapper_arg_2));
    }
#line 987 "check_hlds.simplify.simplify_info.c"
    return check_hlds__simplify__simplify_info__succeeded;
#line 989 "check_hlds.simplify.simplify_info.c"
  }
#line 991 "check_hlds.simplify.simplify_info.c"
}

#line 994 "check_hlds.simplify.simplify_info.c"
static void MR_CALL 
check_hlds__simplify__simplify_info____Compare____simplify_nested_context_0_0_10001(
#line 997 "check_hlds.simplify.simplify_info.c"
  MR_Box * check_hlds__simplify__simplify_info__wrapper_arg_1,
#line 999 "check_hlds.simplify.simplify_info.c"
  MR_Box check_hlds__simplify__simplify_info__wrapper_arg_2,
#line 1001 "check_hlds.simplify.simplify_info.c"
  MR_Box check_hlds__simplify__simplify_info__wrapper_arg_3)
#line 1003 "check_hlds.simplify.simplify_info.c"
{
#line 1005 "check_hlds.simplify.simplify_info.c"
  {
#line 1007 "check_hlds.simplify.simplify_info.c"
    MR_Word check_hlds__simplify__simplify_info__conv0_HeadVar__1_1;

#line 1010 "check_hlds.simplify.simplify_info.c"
    {
#line 1012 "check_hlds.simplify.simplify_info.c"
      check_hlds__simplify__simplify_info____Compare____simplify_nested_context_0_0(&check_hlds__simplify__simplify_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__simplify__simplify_info__wrapper_arg_2), ((MR_Word) check_hlds__simplify__simplify_info__wrapper_arg_3));
    }
#line 1015 "check_hlds.simplify.simplify_info.c"
    *check_hlds__simplify__simplify_info__wrapper_arg_1 = ((MR_Box) (check_hlds__simplify__simplify_info__conv0_HeadVar__1_1));
#line 1017 "check_hlds.simplify.simplify_info.c"
  }
#line 1019 "check_hlds.simplify.simplify_info.c"
}

#line 1022 "check_hlds.simplify.simplify_info.c"
static MR_bool MR_CALL 
check_hlds__simplify__simplify_info____Unify____simplify_sub_info_0_0_10001(
#line 1025 "check_hlds.simplify.simplify_info.c"
  MR_Box check_hlds__simplify__simplify_info__wrapper_arg_1,
#line 1027 "check_hlds.simplify.simplify_info.c"
  MR_Box check_hlds__simplify__simplify_info__wrapper_arg_2)
#line 1029 "check_hlds.simplify.simplify_info.c"
{
#line 1031 "check_hlds.simplify.simplify_info.c"
  {
#line 1033 "check_hlds.simplify.simplify_info.c"
    MR_bool check_hlds__simplify__simplify_info__succeeded;

#line 1036 "check_hlds.simplify.simplify_info.c"
    {
#line 1038 "check_hlds.simplify.simplify_info.c"
      check_hlds__simplify__simplify_info__succeeded = check_hlds__simplify__simplify_info____Unify____simplify_sub_info_0_0(((MR_Word) check_hlds__simplify__simplify_info__wrapper_arg_1), ((MR_Word) check_hlds__simplify__simplify_info__wrapper_arg_2));
    }
#line 1041 "check_hlds.simplify.simplify_info.c"
    return check_hlds__simplify__simplify_info__succeeded;
#line 1043 "check_hlds.simplify.simplify_info.c"
  }
#line 1045 "check_hlds.simplify.simplify_info.c"
}

#line 1048 "check_hlds.simplify.simplify_info.c"
static void MR_CALL 
check_hlds__simplify__simplify_info____Compare____simplify_sub_info_0_0_10001(
#line 1051 "check_hlds.simplify.simplify_info.c"
  MR_Box * check_hlds__simplify__simplify_info__wrapper_arg_1,
#line 1053 "check_hlds.simplify.simplify_info.c"
  MR_Box check_hlds__simplify__simplify_info__wrapper_arg_2,
#line 1055 "check_hlds.simplify.simplify_info.c"
  MR_Box check_hlds__simplify__simplify_info__wrapper_arg_3)
#line 1057 "check_hlds.simplify.simplify_info.c"
{
#line 1059 "check_hlds.simplify.simplify_info.c"
  {
#line 1061 "check_hlds.simplify.simplify_info.c"
    MR_Word check_hlds__simplify__simplify_info__conv0_HeadVar__1_1;

#line 1064 "check_hlds.simplify.simplify_info.c"
    {
#line 1066 "check_hlds.simplify.simplify_info.c"
      check_hlds__simplify__simplify_info____Compare____simplify_sub_info_0_0(&check_hlds__simplify__simplify_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__simplify__simplify_info__wrapper_arg_2), ((MR_Word) check_hlds__simplify__simplify_info__wrapper_arg_3));
    }
#line 1069 "check_hlds.simplify.simplify_info.c"
    *check_hlds__simplify__simplify_info__wrapper_arg_1 = ((MR_Box) (check_hlds__simplify__simplify_info__conv0_HeadVar__1_1));
#line 1071 "check_hlds.simplify.simplify_info.c"
  }
#line 1073 "check_hlds.simplify.simplify_info.c"
}

#line 231 "simplify_info.m"
static void MR_CALL 
check_hlds__simplify__simplify_info____Compare____simplify_sub_info_0_0(
#line 231 "simplify_info.m"
  MR_Word * check_hlds__simplify__simplify_info__HeadVar__1_1,
#line 231 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__HeadVar__2_2,
#line 231 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__HeadVar__3_3)
#line 231 "simplify_info.m"
{
#line 231 "simplify_info.m"
  {
#line 231 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 231 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__CastX_36 = (MR_Integer) check_hlds__simplify__simplify_info__HeadVar__2_2;
#line 231 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__CastY_37 = (MR_Integer) check_hlds__simplify__simplify_info__HeadVar__3_3;

#line 231 "simplify_info.m"
    check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__CastX_36 == check_hlds__simplify__simplify_info__CastY_37);
#line 231 "simplify_info.m"
    if (check_hlds__simplify__simplify_info__succeeded)
#line 1100 "check_hlds.simplify.simplify_info.c"
      *check_hlds__simplify__simplify_info__HeadVar__1_1 = (MR_Integer) 0;
#line 231 "simplify_info.m"
    else
#line 231 "simplify_info.m"
      {
#line 231 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 0)));
#line 231 "simplify_info.m"
        MR_Integer check_hlds__simplify__simplify_info__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 1)));
#line 231 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 2)));
#line 231 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 3)));
#line 231 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 4)));
#line 231 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 5)))) & (MR_Integer) 1);
#line 231 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 231 "simplify_info.m"
        MR_Integer check_hlds__simplify__simplify_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 6)));
#line 231 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 231 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 231 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 231 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__3_3, (MR_Integer) 0)));
#line 231 "simplify_info.m"
        MR_Integer check_hlds__simplify__simplify_info__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__3_3, (MR_Integer) 1)));
#line 231 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__3_3, (MR_Integer) 2)));
#line 231 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__3_3, (MR_Integer) 3)));
#line 231 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__3_3, (MR_Integer) 4)));
#line 231 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_20_20 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__3_3, (MR_Integer) 5)))) & (MR_Integer) 1);
#line 231 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__3_3, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 231 "simplify_info.m"
        MR_Integer check_hlds__simplify__simplify_info__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__3_3, (MR_Integer) 6)));
#line 231 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_23_23 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__3_3, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 231 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__3_3, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 231 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__3_3, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 231 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_26_26;

#line 231 "simplify_info.m"
        {
#line 231 "simplify_info.m"
          hlds__hlds_pred____Compare____pred_id_0_0(&check_hlds__simplify__simplify_info__V_26_26, check_hlds__simplify__simplify_info__V_4_4, check_hlds__simplify__simplify_info__V_15_15);
        }
#line 1158 "check_hlds.simplify.simplify_info.c"
        check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_26_26 == (MR_Integer) 0);
#line 231 "simplify_info.m"
        check_hlds__simplify__simplify_info__succeeded = !(check_hlds__simplify__simplify_info__succeeded);
#line 231 "simplify_info.m"
        if (check_hlds__simplify__simplify_info__succeeded)
#line 231 "simplify_info.m"
          *check_hlds__simplify__simplify_info__HeadVar__1_1 = check_hlds__simplify__simplify_info__V_26_26;
#line 231 "simplify_info.m"
        else
#line 231 "simplify_info.m"
          {
#line 231 "simplify_info.m"
            MR_Word check_hlds__simplify__simplify_info__V_27_27;

#line 231 "simplify_info.m"
            {
#line 231 "simplify_info.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__simplify__simplify_info__V_27_27, check_hlds__simplify__simplify_info__V_5_5, check_hlds__simplify__simplify_info__V_16_16);
            }
#line 1178 "check_hlds.simplify.simplify_info.c"
            check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_27_27 == (MR_Integer) 0);
#line 231 "simplify_info.m"
            check_hlds__simplify__simplify_info__succeeded = !(check_hlds__simplify__simplify_info__succeeded);
#line 231 "simplify_info.m"
            if (check_hlds__simplify__simplify_info__succeeded)
#line 231 "simplify_info.m"
              *check_hlds__simplify__simplify_info__HeadVar__1_1 = check_hlds__simplify__simplify_info__V_27_27;
#line 231 "simplify_info.m"
            else
#line 231 "simplify_info.m"
              {
#line 231 "simplify_info.m"
                MR_Word check_hlds__simplify__simplify_info__V_28_28;

#line 231 "simplify_info.m"
                {
#line 231 "simplify_info.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__simplify_info_scalar_common_1[4], &check_hlds__simplify__simplify_info__V_28_28, ((MR_Box) (check_hlds__simplify__simplify_info__V_6_6)), ((MR_Box) (check_hlds__simplify__simplify_info__V_17_17)));
                }
#line 1198 "check_hlds.simplify.simplify_info.c"
                check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_28_28 == (MR_Integer) 0);
#line 231 "simplify_info.m"
                check_hlds__simplify__simplify_info__succeeded = !(check_hlds__simplify__simplify_info__succeeded);
#line 231 "simplify_info.m"
                if (check_hlds__simplify__simplify_info__succeeded)
#line 231 "simplify_info.m"
                  *check_hlds__simplify__simplify_info__HeadVar__1_1 = check_hlds__simplify__simplify_info__V_28_28;
#line 231 "simplify_info.m"
                else
#line 231 "simplify_info.m"
                  {
#line 231 "simplify_info.m"
                    MR_Word check_hlds__simplify__simplify_info__V_29_29;

#line 231 "simplify_info.m"
                    {
#line 231 "simplify_info.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__simplify_info_scalar_common_1[6], &check_hlds__simplify__simplify_info__V_29_29, ((MR_Box) (check_hlds__simplify__simplify_info__V_7_7)), ((MR_Box) (check_hlds__simplify__simplify_info__V_18_18)));
                    }
#line 1218 "check_hlds.simplify.simplify_info.c"
                    check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_29_29 == (MR_Integer) 0);
#line 231 "simplify_info.m"
                    check_hlds__simplify__simplify_info__succeeded = !(check_hlds__simplify__simplify_info__succeeded);
#line 231 "simplify_info.m"
                    if (check_hlds__simplify__simplify_info__succeeded)
#line 231 "simplify_info.m"
                      *check_hlds__simplify__simplify_info__HeadVar__1_1 = check_hlds__simplify__simplify_info__V_29_29;
#line 231 "simplify_info.m"
                    else
#line 231 "simplify_info.m"
                      {
#line 231 "simplify_info.m"
                        MR_Word check_hlds__simplify__simplify_info__V_30_30;

#line 231 "simplify_info.m"
                        {
#line 231 "simplify_info.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__simplify_info_scalar_common_1[7], &check_hlds__simplify__simplify_info__V_30_30, ((MR_Box) (check_hlds__simplify__simplify_info__V_8_8)), ((MR_Box) (check_hlds__simplify__simplify_info__V_19_19)));
                        }
#line 1238 "check_hlds.simplify.simplify_info.c"
                        check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_30_30 == (MR_Integer) 0);
#line 231 "simplify_info.m"
                        check_hlds__simplify__simplify_info__succeeded = !(check_hlds__simplify__simplify_info__succeeded);
#line 231 "simplify_info.m"
                        if (check_hlds__simplify__simplify_info__succeeded)
#line 231 "simplify_info.m"
                          *check_hlds__simplify__simplify_info__HeadVar__1_1 = check_hlds__simplify__simplify_info__V_30_30;
#line 231 "simplify_info.m"
                        else
#line 231 "simplify_info.m"
                          {
#line 231 "simplify_info.m"
                            MR_Word check_hlds__simplify__simplify_info__V_31_31;
#line 231 "simplify_info.m"
                            MR_Integer check_hlds__simplify__simplify_info__V_49_49 = (MR_Integer) check_hlds__simplify__simplify_info__V_9_9;
#line 231 "simplify_info.m"
                            MR_Integer check_hlds__simplify__simplify_info__V_50_50 = (MR_Integer) check_hlds__simplify__simplify_info__V_20_20;

#line 231 "simplify_info.m"
                            {
#line 231 "simplify_info.m"
                              mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__simplify__simplify_info__V_31_31, check_hlds__simplify__simplify_info__V_49_49, check_hlds__simplify__simplify_info__V_50_50);
                            }
#line 1262 "check_hlds.simplify.simplify_info.c"
                            check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_31_31 == (MR_Integer) 0);
#line 231 "simplify_info.m"
                            check_hlds__simplify__simplify_info__succeeded = !(check_hlds__simplify__simplify_info__succeeded);
#line 231 "simplify_info.m"
                            if (check_hlds__simplify__simplify_info__succeeded)
#line 231 "simplify_info.m"
                              *check_hlds__simplify__simplify_info__HeadVar__1_1 = check_hlds__simplify__simplify_info__V_31_31;
#line 231 "simplify_info.m"
                            else
#line 231 "simplify_info.m"
                              {
#line 231 "simplify_info.m"
                                MR_Word check_hlds__simplify__simplify_info__V_32_32;
#line 231 "simplify_info.m"
                                MR_Integer check_hlds__simplify__simplify_info__V_51_51 = (MR_Integer) check_hlds__simplify__simplify_info__V_10_10;
#line 231 "simplify_info.m"
                                MR_Integer check_hlds__simplify__simplify_info__V_52_52 = (MR_Integer) check_hlds__simplify__simplify_info__V_21_21;

#line 231 "simplify_info.m"
                                {
#line 231 "simplify_info.m"
                                  mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__simplify__simplify_info__V_32_32, check_hlds__simplify__simplify_info__V_51_51, check_hlds__simplify__simplify_info__V_52_52);
                                }
#line 1286 "check_hlds.simplify.simplify_info.c"
                                check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_32_32 == (MR_Integer) 0);
#line 231 "simplify_info.m"
                                check_hlds__simplify__simplify_info__succeeded = !(check_hlds__simplify__simplify_info__succeeded);
#line 231 "simplify_info.m"
                                if (check_hlds__simplify__simplify_info__succeeded)
#line 231 "simplify_info.m"
                                  *check_hlds__simplify__simplify_info__HeadVar__1_1 = check_hlds__simplify__simplify_info__V_32_32;
#line 231 "simplify_info.m"
                                else
#line 231 "simplify_info.m"
                                  {
#line 231 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__V_33_33;

#line 231 "simplify_info.m"
                                    {
#line 231 "simplify_info.m"
                                      mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__simplify__simplify_info__V_33_33, check_hlds__simplify__simplify_info__V_11_11, check_hlds__simplify__simplify_info__V_22_22);
                                    }
#line 1306 "check_hlds.simplify.simplify_info.c"
                                    check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_33_33 == (MR_Integer) 0);
#line 231 "simplify_info.m"
                                    check_hlds__simplify__simplify_info__succeeded = !(check_hlds__simplify__simplify_info__succeeded);
#line 231 "simplify_info.m"
                                    if (check_hlds__simplify__simplify_info__succeeded)
#line 231 "simplify_info.m"
                                      *check_hlds__simplify__simplify_info__HeadVar__1_1 = check_hlds__simplify__simplify_info__V_33_33;
#line 231 "simplify_info.m"
                                    else
#line 231 "simplify_info.m"
                                      {
#line 231 "simplify_info.m"
                                        MR_Word check_hlds__simplify__simplify_info__V_34_34;
#line 231 "simplify_info.m"
                                        MR_Integer check_hlds__simplify__simplify_info__V_53_53 = (MR_Integer) check_hlds__simplify__simplify_info__V_12_12;
#line 231 "simplify_info.m"
                                        MR_Integer check_hlds__simplify__simplify_info__V_54_54 = (MR_Integer) check_hlds__simplify__simplify_info__V_23_23;

#line 231 "simplify_info.m"
                                        {
#line 231 "simplify_info.m"
                                          mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__simplify__simplify_info__V_34_34, check_hlds__simplify__simplify_info__V_53_53, check_hlds__simplify__simplify_info__V_54_54);
                                        }
#line 1330 "check_hlds.simplify.simplify_info.c"
                                        check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_34_34 == (MR_Integer) 0);
#line 231 "simplify_info.m"
                                        check_hlds__simplify__simplify_info__succeeded = !(check_hlds__simplify__simplify_info__succeeded);
#line 231 "simplify_info.m"
                                        if (check_hlds__simplify__simplify_info__succeeded)
#line 231 "simplify_info.m"
                                          *check_hlds__simplify__simplify_info__HeadVar__1_1 = check_hlds__simplify__simplify_info__V_34_34;
#line 231 "simplify_info.m"
                                        else
#line 231 "simplify_info.m"
                                          {
#line 231 "simplify_info.m"
                                            MR_Word check_hlds__simplify__simplify_info__V_35_35;
#line 231 "simplify_info.m"
                                            MR_Integer check_hlds__simplify__simplify_info__V_55_55 = (MR_Integer) check_hlds__simplify__simplify_info__V_13_13;
#line 231 "simplify_info.m"
                                            MR_Integer check_hlds__simplify__simplify_info__V_56_56 = (MR_Integer) check_hlds__simplify__simplify_info__V_24_24;

#line 231 "simplify_info.m"
                                            {
#line 231 "simplify_info.m"
                                              mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__simplify__simplify_info__V_35_35, check_hlds__simplify__simplify_info__V_55_55, check_hlds__simplify__simplify_info__V_56_56);
                                            }
#line 1354 "check_hlds.simplify.simplify_info.c"
                                            check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_35_35 == (MR_Integer) 0);
#line 231 "simplify_info.m"
                                            check_hlds__simplify__simplify_info__succeeded = !(check_hlds__simplify__simplify_info__succeeded);
#line 231 "simplify_info.m"
                                            if (check_hlds__simplify__simplify_info__succeeded)
#line 231 "simplify_info.m"
                                              *check_hlds__simplify__simplify_info__HeadVar__1_1 = check_hlds__simplify__simplify_info__V_35_35;
#line 231 "simplify_info.m"
                                            else
#line 231 "simplify_info.m"
                                              {
#line 231 "simplify_info.m"
                                                MR_Integer check_hlds__simplify__simplify_info__V_57_57 = (MR_Integer) check_hlds__simplify__simplify_info__V_14_14;
#line 231 "simplify_info.m"
                                                MR_Integer check_hlds__simplify__simplify_info__V_58_58 = (MR_Integer) check_hlds__simplify__simplify_info__V_25_25;

#line 231 "simplify_info.m"
                                                {
#line 231 "simplify_info.m"
                                                  mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__simplify__simplify_info__HeadVar__1_1, check_hlds__simplify__simplify_info__V_57_57, check_hlds__simplify__simplify_info__V_58_58);
#line 231 "simplify_info.m"
                                                  return;
                                                }
#line 231 "simplify_info.m"
                                              }
#line 231 "simplify_info.m"
                                          }
#line 231 "simplify_info.m"
                                      }
#line 231 "simplify_info.m"
                                  }
#line 231 "simplify_info.m"
                              }
#line 231 "simplify_info.m"
                          }
#line 231 "simplify_info.m"
                      }
#line 231 "simplify_info.m"
                  }
#line 231 "simplify_info.m"
              }
#line 231 "simplify_info.m"
          }
#line 231 "simplify_info.m"
      }
#line 231 "simplify_info.m"
  }
#line 231 "simplify_info.m"
}

#line 231 "simplify_info.m"
static MR_bool MR_CALL 
check_hlds__simplify__simplify_info____Unify____simplify_sub_info_0_0(
#line 231 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__HeadVar__1_1,
#line 231 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__HeadVar__2_2)
#line 231 "simplify_info.m"
{
#line 231 "simplify_info.m"
  {
#line 231 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 231 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__CastX_25 = (MR_Integer) check_hlds__simplify__simplify_info__HeadVar__1_1;
#line 231 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__CastY_26 = (MR_Integer) check_hlds__simplify__simplify_info__HeadVar__2_2;

#line 231 "simplify_info.m"
    check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__CastX_25 == check_hlds__simplify__simplify_info__CastY_26);
#line 231 "simplify_info.m"
    if (check_hlds__simplify__simplify_info__succeeded)
#line 231 "simplify_info.m"
      check_hlds__simplify__simplify_info__succeeded = MR_TRUE;
#line 231 "simplify_info.m"
    else
#line 231 "simplify_info.m"
      {
#line 231 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__TypeInfo_28_28;
#line 231 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__TypeInfo_29_29;
#line 231 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__TypeInfo_30_30;
#line 231 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__1_1, (MR_Integer) 0)));
#line 231 "simplify_info.m"
        MR_Integer check_hlds__simplify__simplify_info__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__1_1, (MR_Integer) 1)));
#line 231 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__1_1, (MR_Integer) 2)));
#line 231 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__1_1, (MR_Integer) 3)));
#line 231 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__1_1, (MR_Integer) 4)));
#line 231 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_8_8 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__1_1, (MR_Integer) 5)))) & (MR_Integer) 1);
#line 231 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__1_1, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 231 "simplify_info.m"
        MR_Integer check_hlds__simplify__simplify_info__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__1_1, (MR_Integer) 6)));
#line 231 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__1_1, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 231 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__1_1, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 231 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__1_1, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 231 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 0)));
#line 231 "simplify_info.m"
        MR_Integer check_hlds__simplify__simplify_info__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 1)));
#line 231 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 2)));
#line 231 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 3)));
#line 231 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 4)));
#line 231 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_19_19 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 5)))) & (MR_Integer) 1);
#line 231 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 231 "simplify_info.m"
        MR_Integer check_hlds__simplify__simplify_info__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 6)));
#line 231 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_22_22 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 231 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 231 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);

#line 1484 "check_hlds.simplify.simplify_info.c"
        {
#line 1486 "check_hlds.simplify.simplify_info.c"
          check_hlds__simplify__simplify_info__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(check_hlds__simplify__simplify_info__V_3_3, check_hlds__simplify__simplify_info__V_14_14);
        }
#line 231 "simplify_info.m"
        if (check_hlds__simplify__simplify_info__succeeded)
#line 231 "simplify_info.m"
          {
#line 1493 "check_hlds.simplify.simplify_info.c"
            check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_4_4 == check_hlds__simplify__simplify_info__V_15_15);
#line 231 "simplify_info.m"
            if (check_hlds__simplify__simplify_info__succeeded)
#line 231 "simplify_info.m"
              {
#line 1499 "check_hlds.simplify.simplify_info.c"
                check_hlds__simplify__simplify_info__TypeInfo_28_28 = (MR_Word) &check_hlds__simplify__simplify_info_scalar_common_1[4];
#line 1501 "check_hlds.simplify.simplify_info.c"
                {
#line 1503 "check_hlds.simplify.simplify_info.c"
                  check_hlds__simplify__simplify_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__simplify_info__TypeInfo_28_28, ((MR_Box) (check_hlds__simplify__simplify_info__V_5_5)), ((MR_Box) (check_hlds__simplify__simplify_info__V_16_16)));
                }
#line 231 "simplify_info.m"
                if (check_hlds__simplify__simplify_info__succeeded)
#line 231 "simplify_info.m"
                  {
#line 1510 "check_hlds.simplify.simplify_info.c"
                    check_hlds__simplify__simplify_info__TypeInfo_29_29 = (MR_Word) &check_hlds__simplify__simplify_info_scalar_common_1[6];
#line 1512 "check_hlds.simplify.simplify_info.c"
                    {
#line 1514 "check_hlds.simplify.simplify_info.c"
                      check_hlds__simplify__simplify_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__simplify_info__TypeInfo_29_29, ((MR_Box) (check_hlds__simplify__simplify_info__V_6_6)), ((MR_Box) (check_hlds__simplify__simplify_info__V_17_17)));
                    }
#line 231 "simplify_info.m"
                    if (check_hlds__simplify__simplify_info__succeeded)
#line 231 "simplify_info.m"
                      {
#line 1521 "check_hlds.simplify.simplify_info.c"
                        check_hlds__simplify__simplify_info__TypeInfo_30_30 = (MR_Word) &check_hlds__simplify__simplify_info_scalar_common_1[7];
#line 1523 "check_hlds.simplify.simplify_info.c"
                        {
#line 1525 "check_hlds.simplify.simplify_info.c"
                          check_hlds__simplify__simplify_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__simplify_info__TypeInfo_30_30, ((MR_Box) (check_hlds__simplify__simplify_info__V_7_7)), ((MR_Box) (check_hlds__simplify__simplify_info__V_18_18)));
                        }
#line 231 "simplify_info.m"
                        if (check_hlds__simplify__simplify_info__succeeded)
#line 231 "simplify_info.m"
                          {
#line 1532 "check_hlds.simplify.simplify_info.c"
                            check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_8_8 == check_hlds__simplify__simplify_info__V_19_19);
#line 231 "simplify_info.m"
                            if (check_hlds__simplify__simplify_info__succeeded)
#line 231 "simplify_info.m"
                              {
#line 1538 "check_hlds.simplify.simplify_info.c"
                                check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_9_9 == check_hlds__simplify__simplify_info__V_20_20);
#line 231 "simplify_info.m"
                                if (check_hlds__simplify__simplify_info__succeeded)
#line 231 "simplify_info.m"
                                  {
#line 1544 "check_hlds.simplify.simplify_info.c"
                                    check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_10_10 == check_hlds__simplify__simplify_info__V_21_21);
#line 231 "simplify_info.m"
                                    if (check_hlds__simplify__simplify_info__succeeded)
#line 231 "simplify_info.m"
                                      {
#line 1550 "check_hlds.simplify.simplify_info.c"
                                        check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_11_11 == check_hlds__simplify__simplify_info__V_22_22);
#line 231 "simplify_info.m"
                                        if (check_hlds__simplify__simplify_info__succeeded)
#line 231 "simplify_info.m"
                                          {
#line 1556 "check_hlds.simplify.simplify_info.c"
                                            check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_12_12 == check_hlds__simplify__simplify_info__V_23_23);
#line 231 "simplify_info.m"
                                            if (check_hlds__simplify__simplify_info__succeeded)
#line 1560 "check_hlds.simplify.simplify_info.c"
                                              check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_13_13 == check_hlds__simplify__simplify_info__V_24_24);
#line 231 "simplify_info.m"
                                          }
#line 231 "simplify_info.m"
                                      }
#line 231 "simplify_info.m"
                                  }
#line 231 "simplify_info.m"
                              }
#line 231 "simplify_info.m"
                          }
#line 231 "simplify_info.m"
                      }
#line 231 "simplify_info.m"
                  }
#line 231 "simplify_info.m"
              }
#line 231 "simplify_info.m"
          }
#line 231 "simplify_info.m"
      }
#line 231 "simplify_info.m"
    return check_hlds__simplify__simplify_info__succeeded;
#line 231 "simplify_info.m"
  }
#line 231 "simplify_info.m"
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
#line 1613 "check_hlds.simplify.simplify_info.c"
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
#line 1643 "check_hlds.simplify.simplify_info.c"
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
#line 1663 "check_hlds.simplify.simplify_info.c"
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

#line 1736 "check_hlds.simplify.simplify_info.c"
        check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_3_3 == check_hlds__simplify__simplify_info__V_6_6);
#line 46 "simplify_info.m"
        if (check_hlds__simplify__simplify_info__succeeded)
#line 46 "simplify_info.m"
          {
#line 1742 "check_hlds.simplify.simplify_info.c"
            check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_4_4 == check_hlds__simplify__simplify_info__V_7_7);
#line 46 "simplify_info.m"
            if (check_hlds__simplify__simplify_info__succeeded)
#line 46 "simplify_info.m"
              {
#line 1748 "check_hlds.simplify.simplify_info.c"
                check_hlds__simplify__simplify_info__TypeInfo_11_11 = (MR_Word) &check_hlds__simplify__simplify_info_scalar_common_1[3];
#line 1750 "check_hlds.simplify.simplify_info.c"
                {
#line 1752 "check_hlds.simplify.simplify_info.c"
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

#line 204 "simplify_info.m"
void MR_CALL 
check_hlds__simplify__simplify_info____Compare____simplify_info_0_0(
#line 204 "simplify_info.m"
  MR_Word * check_hlds__simplify__simplify_info__HeadVar__1_1,
#line 204 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__HeadVar__2_2,
#line 204 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__HeadVar__3_3)
#line 204 "simplify_info.m"
{
#line 204 "simplify_info.m"
  {
#line 204 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 204 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__CastX_24 = (MR_Integer) check_hlds__simplify__simplify_info__HeadVar__2_2;
#line 204 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__CastY_25 = (MR_Integer) check_hlds__simplify__simplify_info__HeadVar__3_3;

#line 204 "simplify_info.m"
    check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__CastX_24 == check_hlds__simplify__simplify_info__CastY_25);
#line 204 "simplify_info.m"
    if (check_hlds__simplify__simplify_info__succeeded)
#line 1792 "check_hlds.simplify.simplify_info.c"
      *check_hlds__simplify__simplify_info__HeadVar__1_1 = (MR_Integer) 0;
#line 204 "simplify_info.m"
    else
#line 204 "simplify_info.m"
      {
#line 204 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 0)));
#line 204 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 1)));
#line 204 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 2)));
#line 204 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 3)));
#line 204 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 4)));
#line 204 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 5)));
#line 204 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 6)));
#line 204 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__3_3, (MR_Integer) 0)));
#line 204 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__3_3, (MR_Integer) 1)));
#line 204 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__3_3, (MR_Integer) 2)));
#line 204 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__3_3, (MR_Integer) 3)));
#line 204 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__3_3, (MR_Integer) 4)));
#line 204 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__3_3, (MR_Integer) 5)));
#line 204 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__3_3, (MR_Integer) 6)));
#line 204 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_18_18;

#line 204 "simplify_info.m"
        {
#line 204 "simplify_info.m"
          check_hlds__simplify__simplify_tasks____Compare____simplify_tasks_0_0(&check_hlds__simplify__simplify_info__V_18_18, check_hlds__simplify__simplify_info__V_4_4, check_hlds__simplify__simplify_info__V_11_11);
        }
#line 1834 "check_hlds.simplify.simplify_info.c"
        check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_18_18 == (MR_Integer) 0);
#line 204 "simplify_info.m"
        check_hlds__simplify__simplify_info__succeeded = !(check_hlds__simplify__simplify_info__succeeded);
#line 204 "simplify_info.m"
        if (check_hlds__simplify__simplify_info__succeeded)
#line 204 "simplify_info.m"
          *check_hlds__simplify__simplify_info__HeadVar__1_1 = check_hlds__simplify__simplify_info__V_18_18;
#line 204 "simplify_info.m"
        else
#line 204 "simplify_info.m"
          {
#line 204 "simplify_info.m"
            MR_Word check_hlds__simplify__simplify_info__V_19_19;

#line 204 "simplify_info.m"
            {
#line 204 "simplify_info.m"
              hlds__hlds_module____Compare____module_info_0_0(&check_hlds__simplify__simplify_info__V_19_19, check_hlds__simplify__simplify_info__V_5_5, check_hlds__simplify__simplify_info__V_12_12);
            }
#line 1854 "check_hlds.simplify.simplify_info.c"
            check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_19_19 == (MR_Integer) 0);
#line 204 "simplify_info.m"
            check_hlds__simplify__simplify_info__succeeded = !(check_hlds__simplify__simplify_info__succeeded);
#line 204 "simplify_info.m"
            if (check_hlds__simplify__simplify_info__succeeded)
#line 204 "simplify_info.m"
              *check_hlds__simplify__simplify_info__HeadVar__1_1 = check_hlds__simplify__simplify_info__V_19_19;
#line 204 "simplify_info.m"
            else
#line 204 "simplify_info.m"
              {
#line 204 "simplify_info.m"
                MR_Word check_hlds__simplify__simplify_info__V_20_20;

#line 204 "simplify_info.m"
                {
#line 204 "simplify_info.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__simplify_info_scalar_common_1[2], &check_hlds__simplify__simplify_info__V_20_20, ((MR_Box) (check_hlds__simplify__simplify_info__V_6_6)), ((MR_Box) (check_hlds__simplify__simplify_info__V_13_13)));
                }
#line 1874 "check_hlds.simplify.simplify_info.c"
                check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_20_20 == (MR_Integer) 0);
#line 204 "simplify_info.m"
                check_hlds__simplify__simplify_info__succeeded = !(check_hlds__simplify__simplify_info__succeeded);
#line 204 "simplify_info.m"
                if (check_hlds__simplify__simplify_info__succeeded)
#line 204 "simplify_info.m"
                  *check_hlds__simplify__simplify_info__HeadVar__1_1 = check_hlds__simplify__simplify_info__V_20_20;
#line 204 "simplify_info.m"
                else
#line 204 "simplify_info.m"
                  {
#line 204 "simplify_info.m"
                    MR_Word check_hlds__simplify__simplify_info__V_21_21;

#line 204 "simplify_info.m"
                    {
#line 204 "simplify_info.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__simplify_info_scalar_common_2[0], &check_hlds__simplify__simplify_info__V_21_21, ((MR_Box) (check_hlds__simplify__simplify_info__V_7_7)), ((MR_Box) (check_hlds__simplify__simplify_info__V_14_14)));
                    }
#line 1894 "check_hlds.simplify.simplify_info.c"
                    check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_21_21 == (MR_Integer) 0);
#line 204 "simplify_info.m"
                    check_hlds__simplify__simplify_info__succeeded = !(check_hlds__simplify__simplify_info__succeeded);
#line 204 "simplify_info.m"
                    if (check_hlds__simplify__simplify_info__succeeded)
#line 204 "simplify_info.m"
                      *check_hlds__simplify__simplify_info__HeadVar__1_1 = check_hlds__simplify__simplify_info__V_21_21;
#line 204 "simplify_info.m"
                    else
#line 204 "simplify_info.m"
                      {
#line 204 "simplify_info.m"
                        MR_Word check_hlds__simplify__simplify_info__V_22_22;

#line 204 "simplify_info.m"
                        {
#line 204 "simplify_info.m"
                          hlds__hlds_rtti____Compare____rtti_varmaps_0_0(&check_hlds__simplify__simplify_info__V_22_22, check_hlds__simplify__simplify_info__V_8_8, check_hlds__simplify__simplify_info__V_15_15);
                        }
#line 1914 "check_hlds.simplify.simplify_info.c"
                        check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_22_22 == (MR_Integer) 0);
#line 204 "simplify_info.m"
                        check_hlds__simplify__simplify_info__succeeded = !(check_hlds__simplify__simplify_info__succeeded);
#line 204 "simplify_info.m"
                        if (check_hlds__simplify__simplify_info__succeeded)
#line 204 "simplify_info.m"
                          *check_hlds__simplify__simplify_info__HeadVar__1_1 = check_hlds__simplify__simplify_info__V_22_22;
#line 204 "simplify_info.m"
                        else
#line 204 "simplify_info.m"
                          {
#line 204 "simplify_info.m"
                            MR_Word check_hlds__simplify__simplify_info__V_23_23;
#line 204 "simplify_info.m"
                            MR_Integer check_hlds__simplify__simplify_info__V_33_33 = (MR_Integer) check_hlds__simplify__simplify_info__V_9_9;
#line 204 "simplify_info.m"
                            MR_Integer check_hlds__simplify__simplify_info__V_34_34 = (MR_Integer) check_hlds__simplify__simplify_info__V_16_16;

#line 204 "simplify_info.m"
                            {
#line 204 "simplify_info.m"
                              mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__simplify__simplify_info__V_23_23, check_hlds__simplify__simplify_info__V_33_33, check_hlds__simplify__simplify_info__V_34_34);
                            }
#line 1938 "check_hlds.simplify.simplify_info.c"
                            check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_23_23 == (MR_Integer) 0);
#line 204 "simplify_info.m"
                            check_hlds__simplify__simplify_info__succeeded = !(check_hlds__simplify__simplify_info__succeeded);
#line 204 "simplify_info.m"
                            if (check_hlds__simplify__simplify_info__succeeded)
#line 204 "simplify_info.m"
                              *check_hlds__simplify__simplify_info__HeadVar__1_1 = check_hlds__simplify__simplify_info__V_23_23;
#line 204 "simplify_info.m"
                            else
#line 231 "simplify_info.m"
                              {
#line 231 "simplify_info.m"
                                MR_Integer check_hlds__simplify__simplify_info__CastX_67 = (MR_Integer) check_hlds__simplify__simplify_info__V_10_10;
#line 231 "simplify_info.m"
                                MR_Integer check_hlds__simplify__simplify_info__CastY_68 = (MR_Integer) check_hlds__simplify__simplify_info__V_17_17;

#line 231 "simplify_info.m"
                                check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__CastX_67 == check_hlds__simplify__simplify_info__CastY_68);
#line 231 "simplify_info.m"
                                if (check_hlds__simplify__simplify_info__succeeded)
#line 1959 "check_hlds.simplify.simplify_info.c"
                                  *check_hlds__simplify__simplify_info__HeadVar__1_1 = (MR_Integer) 0;
#line 231 "simplify_info.m"
                                else
#line 231 "simplify_info.m"
                                  {
#line 231 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, (MR_Integer) 0)));
#line 231 "simplify_info.m"
                                    MR_Integer check_hlds__simplify__simplify_info__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, (MR_Integer) 1)));
#line 231 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, (MR_Integer) 2)));
#line 231 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, (MR_Integer) 3)));
#line 231 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, (MR_Integer) 4)));
#line 231 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__V_40_40 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, (MR_Integer) 5)))) & (MR_Integer) 1);
#line 231 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 231 "simplify_info.m"
                                    MR_Integer check_hlds__simplify__simplify_info__V_42_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, (MR_Integer) 6)));
#line 231 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__V_43_43 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 231 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__V_44_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 231 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__V_45_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 231 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_17_17, (MR_Integer) 0)));
#line 231 "simplify_info.m"
                                    MR_Integer check_hlds__simplify__simplify_info__V_47_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_17_17, (MR_Integer) 1)));
#line 231 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_17_17, (MR_Integer) 2)));
#line 231 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_17_17, (MR_Integer) 3)));
#line 231 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_17_17, (MR_Integer) 4)));
#line 231 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__V_51_51 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_17_17, (MR_Integer) 5)))) & (MR_Integer) 1);
#line 231 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__V_52_52 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_17_17, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 231 "simplify_info.m"
                                    MR_Integer check_hlds__simplify__simplify_info__V_53_53 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_17_17, (MR_Integer) 6)));
#line 231 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__V_54_54 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_17_17, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 231 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__V_55_55 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_17_17, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 231 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__V_56_56 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_17_17, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 231 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__V_57_57;

#line 231 "simplify_info.m"
                                    {
#line 231 "simplify_info.m"
                                      hlds__hlds_pred____Compare____pred_id_0_0(&check_hlds__simplify__simplify_info__V_57_57, check_hlds__simplify__simplify_info__V_35_35, check_hlds__simplify__simplify_info__V_46_46);
                                    }
#line 2017 "check_hlds.simplify.simplify_info.c"
                                    check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_57_57 == (MR_Integer) 0);
#line 231 "simplify_info.m"
                                    check_hlds__simplify__simplify_info__succeeded = !(check_hlds__simplify__simplify_info__succeeded);
#line 231 "simplify_info.m"
                                    if (check_hlds__simplify__simplify_info__succeeded)
#line 231 "simplify_info.m"
                                      *check_hlds__simplify__simplify_info__HeadVar__1_1 = check_hlds__simplify__simplify_info__V_57_57;
#line 231 "simplify_info.m"
                                    else
#line 231 "simplify_info.m"
                                      {
#line 231 "simplify_info.m"
                                        MR_Word check_hlds__simplify__simplify_info__V_58_58;

#line 231 "simplify_info.m"
                                        {
#line 231 "simplify_info.m"
                                          mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__simplify__simplify_info__V_58_58, check_hlds__simplify__simplify_info__V_36_36, check_hlds__simplify__simplify_info__V_47_47);
                                        }
#line 2037 "check_hlds.simplify.simplify_info.c"
                                        check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_58_58 == (MR_Integer) 0);
#line 231 "simplify_info.m"
                                        check_hlds__simplify__simplify_info__succeeded = !(check_hlds__simplify__simplify_info__succeeded);
#line 231 "simplify_info.m"
                                        if (check_hlds__simplify__simplify_info__succeeded)
#line 231 "simplify_info.m"
                                          *check_hlds__simplify__simplify_info__HeadVar__1_1 = check_hlds__simplify__simplify_info__V_58_58;
#line 231 "simplify_info.m"
                                        else
#line 231 "simplify_info.m"
                                          {
#line 231 "simplify_info.m"
                                            MR_Word check_hlds__simplify__simplify_info__V_59_59;

#line 231 "simplify_info.m"
                                            {
#line 231 "simplify_info.m"
                                              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__simplify_info_scalar_common_1[4], &check_hlds__simplify__simplify_info__V_59_59, ((MR_Box) (check_hlds__simplify__simplify_info__V_37_37)), ((MR_Box) (check_hlds__simplify__simplify_info__V_48_48)));
                                            }
#line 2057 "check_hlds.simplify.simplify_info.c"
                                            check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_59_59 == (MR_Integer) 0);
#line 231 "simplify_info.m"
                                            check_hlds__simplify__simplify_info__succeeded = !(check_hlds__simplify__simplify_info__succeeded);
#line 231 "simplify_info.m"
                                            if (check_hlds__simplify__simplify_info__succeeded)
#line 231 "simplify_info.m"
                                              *check_hlds__simplify__simplify_info__HeadVar__1_1 = check_hlds__simplify__simplify_info__V_59_59;
#line 231 "simplify_info.m"
                                            else
#line 231 "simplify_info.m"
                                              {
#line 231 "simplify_info.m"
                                                MR_Word check_hlds__simplify__simplify_info__V_60_60;

#line 231 "simplify_info.m"
                                                {
#line 231 "simplify_info.m"
                                                  mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__simplify_info_scalar_common_1[6], &check_hlds__simplify__simplify_info__V_60_60, ((MR_Box) (check_hlds__simplify__simplify_info__V_38_38)), ((MR_Box) (check_hlds__simplify__simplify_info__V_49_49)));
                                                }
#line 2077 "check_hlds.simplify.simplify_info.c"
                                                check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_60_60 == (MR_Integer) 0);
#line 231 "simplify_info.m"
                                                check_hlds__simplify__simplify_info__succeeded = !(check_hlds__simplify__simplify_info__succeeded);
#line 231 "simplify_info.m"
                                                if (check_hlds__simplify__simplify_info__succeeded)
#line 231 "simplify_info.m"
                                                  *check_hlds__simplify__simplify_info__HeadVar__1_1 = check_hlds__simplify__simplify_info__V_60_60;
#line 231 "simplify_info.m"
                                                else
#line 231 "simplify_info.m"
                                                  {
#line 231 "simplify_info.m"
                                                    MR_Word check_hlds__simplify__simplify_info__V_61_61;

#line 231 "simplify_info.m"
                                                    {
#line 231 "simplify_info.m"
                                                      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__simplify_info_scalar_common_1[7], &check_hlds__simplify__simplify_info__V_61_61, ((MR_Box) (check_hlds__simplify__simplify_info__V_39_39)), ((MR_Box) (check_hlds__simplify__simplify_info__V_50_50)));
                                                    }
#line 2097 "check_hlds.simplify.simplify_info.c"
                                                    check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_61_61 == (MR_Integer) 0);
#line 231 "simplify_info.m"
                                                    check_hlds__simplify__simplify_info__succeeded = !(check_hlds__simplify__simplify_info__succeeded);
#line 231 "simplify_info.m"
                                                    if (check_hlds__simplify__simplify_info__succeeded)
#line 231 "simplify_info.m"
                                                      *check_hlds__simplify__simplify_info__HeadVar__1_1 = check_hlds__simplify__simplify_info__V_61_61;
#line 231 "simplify_info.m"
                                                    else
#line 231 "simplify_info.m"
                                                      {
#line 231 "simplify_info.m"
                                                        MR_Word check_hlds__simplify__simplify_info__V_62_62;
#line 231 "simplify_info.m"
                                                        MR_Integer check_hlds__simplify__simplify_info__V_80_80 = (MR_Integer) check_hlds__simplify__simplify_info__V_40_40;
#line 231 "simplify_info.m"
                                                        MR_Integer check_hlds__simplify__simplify_info__V_81_81 = (MR_Integer) check_hlds__simplify__simplify_info__V_51_51;

#line 231 "simplify_info.m"
                                                        {
#line 231 "simplify_info.m"
                                                          mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__simplify__simplify_info__V_62_62, check_hlds__simplify__simplify_info__V_80_80, check_hlds__simplify__simplify_info__V_81_81);
                                                        }
#line 2121 "check_hlds.simplify.simplify_info.c"
                                                        check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_62_62 == (MR_Integer) 0);
#line 231 "simplify_info.m"
                                                        check_hlds__simplify__simplify_info__succeeded = !(check_hlds__simplify__simplify_info__succeeded);
#line 231 "simplify_info.m"
                                                        if (check_hlds__simplify__simplify_info__succeeded)
#line 231 "simplify_info.m"
                                                          *check_hlds__simplify__simplify_info__HeadVar__1_1 = check_hlds__simplify__simplify_info__V_62_62;
#line 231 "simplify_info.m"
                                                        else
#line 231 "simplify_info.m"
                                                          {
#line 231 "simplify_info.m"
                                                            MR_Word check_hlds__simplify__simplify_info__V_63_63;
#line 231 "simplify_info.m"
                                                            MR_Integer check_hlds__simplify__simplify_info__V_82_82 = (MR_Integer) check_hlds__simplify__simplify_info__V_41_41;
#line 231 "simplify_info.m"
                                                            MR_Integer check_hlds__simplify__simplify_info__V_83_83 = (MR_Integer) check_hlds__simplify__simplify_info__V_52_52;

#line 231 "simplify_info.m"
                                                            {
#line 231 "simplify_info.m"
                                                              mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__simplify__simplify_info__V_63_63, check_hlds__simplify__simplify_info__V_82_82, check_hlds__simplify__simplify_info__V_83_83);
                                                            }
#line 2145 "check_hlds.simplify.simplify_info.c"
                                                            check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_63_63 == (MR_Integer) 0);
#line 231 "simplify_info.m"
                                                            check_hlds__simplify__simplify_info__succeeded = !(check_hlds__simplify__simplify_info__succeeded);
#line 231 "simplify_info.m"
                                                            if (check_hlds__simplify__simplify_info__succeeded)
#line 231 "simplify_info.m"
                                                              *check_hlds__simplify__simplify_info__HeadVar__1_1 = check_hlds__simplify__simplify_info__V_63_63;
#line 231 "simplify_info.m"
                                                            else
#line 231 "simplify_info.m"
                                                              {
#line 231 "simplify_info.m"
                                                                MR_Word check_hlds__simplify__simplify_info__V_64_64;

#line 231 "simplify_info.m"
                                                                {
#line 231 "simplify_info.m"
                                                                  mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__simplify__simplify_info__V_64_64, check_hlds__simplify__simplify_info__V_42_42, check_hlds__simplify__simplify_info__V_53_53);
                                                                }
#line 2165 "check_hlds.simplify.simplify_info.c"
                                                                check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_64_64 == (MR_Integer) 0);
#line 231 "simplify_info.m"
                                                                check_hlds__simplify__simplify_info__succeeded = !(check_hlds__simplify__simplify_info__succeeded);
#line 231 "simplify_info.m"
                                                                if (check_hlds__simplify__simplify_info__succeeded)
#line 231 "simplify_info.m"
                                                                  *check_hlds__simplify__simplify_info__HeadVar__1_1 = check_hlds__simplify__simplify_info__V_64_64;
#line 231 "simplify_info.m"
                                                                else
#line 231 "simplify_info.m"
                                                                  {
#line 231 "simplify_info.m"
                                                                    MR_Word check_hlds__simplify__simplify_info__V_65_65;
#line 231 "simplify_info.m"
                                                                    MR_Integer check_hlds__simplify__simplify_info__V_84_84 = (MR_Integer) check_hlds__simplify__simplify_info__V_43_43;
#line 231 "simplify_info.m"
                                                                    MR_Integer check_hlds__simplify__simplify_info__V_85_85 = (MR_Integer) check_hlds__simplify__simplify_info__V_54_54;

#line 231 "simplify_info.m"
                                                                    {
#line 231 "simplify_info.m"
                                                                      mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__simplify__simplify_info__V_65_65, check_hlds__simplify__simplify_info__V_84_84, check_hlds__simplify__simplify_info__V_85_85);
                                                                    }
#line 2189 "check_hlds.simplify.simplify_info.c"
                                                                    check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_65_65 == (MR_Integer) 0);
#line 231 "simplify_info.m"
                                                                    check_hlds__simplify__simplify_info__succeeded = !(check_hlds__simplify__simplify_info__succeeded);
#line 231 "simplify_info.m"
                                                                    if (check_hlds__simplify__simplify_info__succeeded)
#line 231 "simplify_info.m"
                                                                      *check_hlds__simplify__simplify_info__HeadVar__1_1 = check_hlds__simplify__simplify_info__V_65_65;
#line 231 "simplify_info.m"
                                                                    else
#line 231 "simplify_info.m"
                                                                      {
#line 231 "simplify_info.m"
                                                                        MR_Word check_hlds__simplify__simplify_info__V_66_66;
#line 231 "simplify_info.m"
                                                                        MR_Integer check_hlds__simplify__simplify_info__V_86_86 = (MR_Integer) check_hlds__simplify__simplify_info__V_44_44;
#line 231 "simplify_info.m"
                                                                        MR_Integer check_hlds__simplify__simplify_info__V_87_87 = (MR_Integer) check_hlds__simplify__simplify_info__V_55_55;

#line 231 "simplify_info.m"
                                                                        {
#line 231 "simplify_info.m"
                                                                          mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__simplify__simplify_info__V_66_66, check_hlds__simplify__simplify_info__V_86_86, check_hlds__simplify__simplify_info__V_87_87);
                                                                        }
#line 2213 "check_hlds.simplify.simplify_info.c"
                                                                        check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_66_66 == (MR_Integer) 0);
#line 231 "simplify_info.m"
                                                                        check_hlds__simplify__simplify_info__succeeded = !(check_hlds__simplify__simplify_info__succeeded);
#line 231 "simplify_info.m"
                                                                        if (check_hlds__simplify__simplify_info__succeeded)
#line 231 "simplify_info.m"
                                                                          *check_hlds__simplify__simplify_info__HeadVar__1_1 = check_hlds__simplify__simplify_info__V_66_66;
#line 231 "simplify_info.m"
                                                                        else
#line 231 "simplify_info.m"
                                                                          {
#line 231 "simplify_info.m"
                                                                            MR_Integer check_hlds__simplify__simplify_info__V_88_88 = (MR_Integer) check_hlds__simplify__simplify_info__V_45_45;
#line 231 "simplify_info.m"
                                                                            MR_Integer check_hlds__simplify__simplify_info__V_89_89 = (MR_Integer) check_hlds__simplify__simplify_info__V_56_56;

#line 231 "simplify_info.m"
                                                                            {
#line 231 "simplify_info.m"
                                                                              mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__simplify__simplify_info__HeadVar__1_1, check_hlds__simplify__simplify_info__V_88_88, check_hlds__simplify__simplify_info__V_89_89);
#line 231 "simplify_info.m"
                                                                              return;
                                                                            }
#line 231 "simplify_info.m"
                                                                          }
#line 231 "simplify_info.m"
                                                                      }
#line 231 "simplify_info.m"
                                                                  }
#line 231 "simplify_info.m"
                                                              }
#line 231 "simplify_info.m"
                                                          }
#line 231 "simplify_info.m"
                                                      }
#line 231 "simplify_info.m"
                                                  }
#line 231 "simplify_info.m"
                                              }
#line 231 "simplify_info.m"
                                          }
#line 231 "simplify_info.m"
                                      }
#line 231 "simplify_info.m"
                                  }
#line 231 "simplify_info.m"
                              }
#line 204 "simplify_info.m"
                          }
#line 204 "simplify_info.m"
                      }
#line 204 "simplify_info.m"
                  }
#line 204 "simplify_info.m"
              }
#line 204 "simplify_info.m"
          }
#line 204 "simplify_info.m"
      }
#line 204 "simplify_info.m"
  }
#line 204 "simplify_info.m"
}

#line 204 "simplify_info.m"
MR_bool MR_CALL 
check_hlds__simplify__simplify_info____Unify____simplify_info_0_0(
#line 204 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__HeadVar__1_1,
#line 204 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__HeadVar__2_2)
#line 204 "simplify_info.m"
{
#line 204 "simplify_info.m"
  {
#line 204 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 204 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__CastX_17 = (MR_Integer) check_hlds__simplify__simplify_info__HeadVar__1_1;
#line 204 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__CastY_18 = (MR_Integer) check_hlds__simplify__simplify_info__HeadVar__2_2;

#line 204 "simplify_info.m"
    check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__CastX_17 == check_hlds__simplify__simplify_info__CastY_18);
#line 204 "simplify_info.m"
    if (check_hlds__simplify__simplify_info__succeeded)
#line 204 "simplify_info.m"
      check_hlds__simplify__simplify_info__succeeded = MR_TRUE;
#line 204 "simplify_info.m"
    else
#line 204 "simplify_info.m"
      {
#line 204 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__TypeInfo_21_21;
#line 204 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__TypeInfo_22_22;
#line 204 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__1_1, (MR_Integer) 0)));
#line 204 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__1_1, (MR_Integer) 1)));
#line 204 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__1_1, (MR_Integer) 2)));
#line 204 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__1_1, (MR_Integer) 3)));
#line 204 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__1_1, (MR_Integer) 4)));
#line 204 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__1_1, (MR_Integer) 5)));
#line 204 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__1_1, (MR_Integer) 6)));
#line 204 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 0)));
#line 204 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 1)));
#line 204 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 2)));
#line 204 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 3)));
#line 204 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 4)));
#line 204 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 5)));
#line 204 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 6)));
#line 231 "simplify_info.m"
        MR_Integer check_hlds__simplify__simplify_info__CastX_46;
#line 231 "simplify_info.m"
        MR_Integer check_hlds__simplify__simplify_info__CastY_47;

#line 2343 "check_hlds.simplify.simplify_info.c"
        {
#line 2345 "check_hlds.simplify.simplify_info.c"
          check_hlds__simplify__simplify_info__succeeded = check_hlds__simplify__simplify_tasks____Unify____simplify_tasks_0_0(check_hlds__simplify__simplify_info__V_3_3, check_hlds__simplify__simplify_info__V_10_10);
        }
#line 204 "simplify_info.m"
        if (check_hlds__simplify__simplify_info__succeeded)
#line 204 "simplify_info.m"
          {
#line 2352 "check_hlds.simplify.simplify_info.c"
            {
#line 2354 "check_hlds.simplify.simplify_info.c"
              check_hlds__simplify__simplify_info__succeeded = hlds__hlds_module____Unify____module_info_0_0(check_hlds__simplify__simplify_info__V_4_4, check_hlds__simplify__simplify_info__V_11_11);
            }
#line 204 "simplify_info.m"
            if (check_hlds__simplify__simplify_info__succeeded)
#line 204 "simplify_info.m"
              {
#line 2361 "check_hlds.simplify.simplify_info.c"
                check_hlds__simplify__simplify_info__TypeInfo_21_21 = (MR_Word) &check_hlds__simplify__simplify_info_scalar_common_1[2];
#line 2363 "check_hlds.simplify.simplify_info.c"
                {
#line 2365 "check_hlds.simplify.simplify_info.c"
                  check_hlds__simplify__simplify_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__simplify_info__TypeInfo_21_21, ((MR_Box) (check_hlds__simplify__simplify_info__V_5_5)), ((MR_Box) (check_hlds__simplify__simplify_info__V_12_12)));
                }
#line 204 "simplify_info.m"
                if (check_hlds__simplify__simplify_info__succeeded)
#line 204 "simplify_info.m"
                  {
#line 2372 "check_hlds.simplify.simplify_info.c"
                    check_hlds__simplify__simplify_info__TypeInfo_22_22 = (MR_Word) &check_hlds__simplify__simplify_info_scalar_common_2[0];
#line 2374 "check_hlds.simplify.simplify_info.c"
                    {
#line 2376 "check_hlds.simplify.simplify_info.c"
                      check_hlds__simplify__simplify_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__simplify_info__TypeInfo_22_22, ((MR_Box) (check_hlds__simplify__simplify_info__V_6_6)), ((MR_Box) (check_hlds__simplify__simplify_info__V_13_13)));
                    }
#line 204 "simplify_info.m"
                    if (check_hlds__simplify__simplify_info__succeeded)
#line 204 "simplify_info.m"
                      {
#line 2383 "check_hlds.simplify.simplify_info.c"
                        {
#line 2385 "check_hlds.simplify.simplify_info.c"
                          check_hlds__simplify__simplify_info__succeeded = hlds__hlds_rtti____Unify____rtti_varmaps_0_0(check_hlds__simplify__simplify_info__V_7_7, check_hlds__simplify__simplify_info__V_14_14);
                        }
#line 204 "simplify_info.m"
                        if (check_hlds__simplify__simplify_info__succeeded)
#line 204 "simplify_info.m"
                          {
#line 2392 "check_hlds.simplify.simplify_info.c"
                            check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_8_8 == check_hlds__simplify__simplify_info__V_15_15);
#line 204 "simplify_info.m"
                            if (check_hlds__simplify__simplify_info__succeeded)
#line 204 "simplify_info.m"
                              {
#line 231 "simplify_info.m"
                                check_hlds__simplify__simplify_info__CastX_46 = (MR_Integer) check_hlds__simplify__simplify_info__V_9_9;
#line 231 "simplify_info.m"
                                check_hlds__simplify__simplify_info__CastY_47 = (MR_Integer) check_hlds__simplify__simplify_info__V_16_16;
#line 231 "simplify_info.m"
                                check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__CastX_46 == check_hlds__simplify__simplify_info__CastY_47);
#line 231 "simplify_info.m"
                                if (check_hlds__simplify__simplify_info__succeeded)
#line 231 "simplify_info.m"
                                  check_hlds__simplify__simplify_info__succeeded = MR_TRUE;
#line 231 "simplify_info.m"
                                else
#line 231 "simplify_info.m"
                                  {
#line 231 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__TypeInfo_28_49;
#line 231 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__TypeInfo_29_50;
#line 231 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__TypeInfo_30_51;
#line 231 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 0)));
#line 231 "simplify_info.m"
                                    MR_Integer check_hlds__simplify__simplify_info__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 1)));
#line 231 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 2)));
#line 231 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 3)));
#line 231 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 4)));
#line 231 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__V_29_29 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 5)))) & (MR_Integer) 1);
#line 231 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 231 "simplify_info.m"
                                    MR_Integer check_hlds__simplify__simplify_info__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 6)));
#line 231 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__V_32_32 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 231 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 231 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 231 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_16_16, (MR_Integer) 0)));
#line 231 "simplify_info.m"
                                    MR_Integer check_hlds__simplify__simplify_info__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_16_16, (MR_Integer) 1)));
#line 231 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_16_16, (MR_Integer) 2)));
#line 231 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_16_16, (MR_Integer) 3)));
#line 231 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_16_16, (MR_Integer) 4)));
#line 231 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__V_40_40 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_16_16, (MR_Integer) 5)))) & (MR_Integer) 1);
#line 231 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_16_16, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 231 "simplify_info.m"
                                    MR_Integer check_hlds__simplify__simplify_info__V_42_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_16_16, (MR_Integer) 6)));
#line 231 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__V_43_43 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_16_16, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 231 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__V_44_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_16_16, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 231 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__V_45_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_16_16, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);

#line 2463 "check_hlds.simplify.simplify_info.c"
                                    {
#line 2465 "check_hlds.simplify.simplify_info.c"
                                      check_hlds__simplify__simplify_info__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(check_hlds__simplify__simplify_info__V_24_24, check_hlds__simplify__simplify_info__V_35_35);
                                    }
#line 231 "simplify_info.m"
                                    if (check_hlds__simplify__simplify_info__succeeded)
#line 231 "simplify_info.m"
                                      {
#line 2472 "check_hlds.simplify.simplify_info.c"
                                        check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_25_25 == check_hlds__simplify__simplify_info__V_36_36);
#line 231 "simplify_info.m"
                                        if (check_hlds__simplify__simplify_info__succeeded)
#line 231 "simplify_info.m"
                                          {
#line 2478 "check_hlds.simplify.simplify_info.c"
                                            check_hlds__simplify__simplify_info__TypeInfo_28_49 = (MR_Word) &check_hlds__simplify__simplify_info_scalar_common_1[4];
#line 2480 "check_hlds.simplify.simplify_info.c"
                                            {
#line 2482 "check_hlds.simplify.simplify_info.c"
                                              check_hlds__simplify__simplify_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__simplify_info__TypeInfo_28_49, ((MR_Box) (check_hlds__simplify__simplify_info__V_26_26)), ((MR_Box) (check_hlds__simplify__simplify_info__V_37_37)));
                                            }
#line 231 "simplify_info.m"
                                            if (check_hlds__simplify__simplify_info__succeeded)
#line 231 "simplify_info.m"
                                              {
#line 2489 "check_hlds.simplify.simplify_info.c"
                                                check_hlds__simplify__simplify_info__TypeInfo_29_50 = (MR_Word) &check_hlds__simplify__simplify_info_scalar_common_1[6];
#line 2491 "check_hlds.simplify.simplify_info.c"
                                                {
#line 2493 "check_hlds.simplify.simplify_info.c"
                                                  check_hlds__simplify__simplify_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__simplify_info__TypeInfo_29_50, ((MR_Box) (check_hlds__simplify__simplify_info__V_27_27)), ((MR_Box) (check_hlds__simplify__simplify_info__V_38_38)));
                                                }
#line 231 "simplify_info.m"
                                                if (check_hlds__simplify__simplify_info__succeeded)
#line 231 "simplify_info.m"
                                                  {
#line 2500 "check_hlds.simplify.simplify_info.c"
                                                    check_hlds__simplify__simplify_info__TypeInfo_30_51 = (MR_Word) &check_hlds__simplify__simplify_info_scalar_common_1[7];
#line 2502 "check_hlds.simplify.simplify_info.c"
                                                    {
#line 2504 "check_hlds.simplify.simplify_info.c"
                                                      check_hlds__simplify__simplify_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__simplify_info__TypeInfo_30_51, ((MR_Box) (check_hlds__simplify__simplify_info__V_28_28)), ((MR_Box) (check_hlds__simplify__simplify_info__V_39_39)));
                                                    }
#line 231 "simplify_info.m"
                                                    if (check_hlds__simplify__simplify_info__succeeded)
#line 231 "simplify_info.m"
                                                      {
#line 2511 "check_hlds.simplify.simplify_info.c"
                                                        check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_29_29 == check_hlds__simplify__simplify_info__V_40_40);
#line 231 "simplify_info.m"
                                                        if (check_hlds__simplify__simplify_info__succeeded)
#line 231 "simplify_info.m"
                                                          {
#line 2517 "check_hlds.simplify.simplify_info.c"
                                                            check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_30_30 == check_hlds__simplify__simplify_info__V_41_41);
#line 231 "simplify_info.m"
                                                            if (check_hlds__simplify__simplify_info__succeeded)
#line 231 "simplify_info.m"
                                                              {
#line 2523 "check_hlds.simplify.simplify_info.c"
                                                                check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_31_31 == check_hlds__simplify__simplify_info__V_42_42);
#line 231 "simplify_info.m"
                                                                if (check_hlds__simplify__simplify_info__succeeded)
#line 231 "simplify_info.m"
                                                                  {
#line 2529 "check_hlds.simplify.simplify_info.c"
                                                                    check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_32_32 == check_hlds__simplify__simplify_info__V_43_43);
#line 231 "simplify_info.m"
                                                                    if (check_hlds__simplify__simplify_info__succeeded)
#line 231 "simplify_info.m"
                                                                      {
#line 2535 "check_hlds.simplify.simplify_info.c"
                                                                        check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_33_33 == check_hlds__simplify__simplify_info__V_44_44);
#line 231 "simplify_info.m"
                                                                        if (check_hlds__simplify__simplify_info__succeeded)
#line 2539 "check_hlds.simplify.simplify_info.c"
                                                                          check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_34_34 == check_hlds__simplify__simplify_info__V_45_45);
#line 231 "simplify_info.m"
                                                                      }
#line 231 "simplify_info.m"
                                                                  }
#line 231 "simplify_info.m"
                                                              }
#line 231 "simplify_info.m"
                                                          }
#line 231 "simplify_info.m"
                                                      }
#line 231 "simplify_info.m"
                                                  }
#line 231 "simplify_info.m"
                                              }
#line 231 "simplify_info.m"
                                          }
#line 231 "simplify_info.m"
                                      }
#line 231 "simplify_info.m"
                                  }
#line 204 "simplify_info.m"
                              }
#line 204 "simplify_info.m"
                          }
#line 204 "simplify_info.m"
                      }
#line 204 "simplify_info.m"
                  }
#line 204 "simplify_info.m"
              }
#line 204 "simplify_info.m"
          }
#line 204 "simplify_info.m"
      }
#line 204 "simplify_info.m"
    return check_hlds__simplify__simplify_info__succeeded;
#line 204 "simplify_info.m"
  }
#line 204 "simplify_info.m"
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
#line 2606 "check_hlds.simplify.simplify_info.c"
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
#line 2618 "check_hlds.simplify.simplify_info.c"
        *check_hlds__simplify__simplify_info__HeadVar__1_1 = (MR_Integer) 1;
#line 38 "simplify_info.m"
    else
#line 38 "simplify_info.m"
      {
#line 38 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 0)));

#line 38 "simplify_info.m"
        if ((check_hlds__simplify__simplify_info__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2629 "check_hlds.simplify.simplify_info.c"
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
#line 2710 "check_hlds.simplify.simplify_info.c"
            {
#line 2712 "check_hlds.simplify.simplify_info.c"
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
#line 443 "simplify_info.m"
  {
#line 443 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 443 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__SimplifyTasks_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 0)));
#line 443 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__WarnDuplicateCalls_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_5, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 338 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 1)));
#line 338 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 2)));
#line 338 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 3)));
#line 338 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 4)));
#line 338 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 5)));
#line 338 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 6)));
#line 445 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_7_7 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_5, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 445 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_5, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 445 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_5, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 445 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_5, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 445 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_5, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 445 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_5, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 445 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_5, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 445 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_15_15;
#line 445 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_16_16;
#line 445 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_17_17;
#line 445 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_18_18;

#line 445 "simplify_info.m"
    *check_hlds__simplify__simplify_info__OptDuplicateCalls_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_5, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 445 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_5, (MR_Integer) 0)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 445 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_5, (MR_Integer) 0)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 445 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_17_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_5, (MR_Integer) 0)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 445 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_5, (MR_Integer) 0)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 447 "simplify_info.m"
    check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__WarnDuplicateCalls_6 == (MR_Integer) 1);
#line 448 "simplify_info.m"
    if (!(check_hlds__simplify__simplify_info__succeeded))
#line 448 "simplify_info.m"
      check_hlds__simplify__simplify_info__succeeded = (*check_hlds__simplify__simplify_info__OptDuplicateCalls_4 == (MR_Integer) 1);
#line 443 "simplify_info.m"
    return check_hlds__simplify__simplify_info__succeeded;
#line 443 "simplify_info.m"
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
#line 439 "simplify_info.m"
  {
#line 439 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 439 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__SimplifyTasks_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 0)));
#line 439 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_4_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 338 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 1)));
#line 338 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 2)));
#line 338 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 3)));
#line 338 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 4)));
#line 338 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 5)));
#line 338 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 6)));
#line 441 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_5_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 441 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 441 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 441 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 441 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 441 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 441 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 441 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 441 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 441 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 441 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 441 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 11)) & (MR_Integer) 1);

#line 441 "simplify_info.m"
    check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_4_4 == (MR_Integer) 1);
#line 439 "simplify_info.m"
    return check_hlds__simplify__simplify_info__succeeded;
#line 439 "simplify_info.m"
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
#line 436 "simplify_info.m"
  {
#line 436 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 436 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__SimplifyTasks_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 0)));
#line 436 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_4_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 338 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 1)));
#line 338 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 2)));
#line 338 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 3)));
#line 338 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 4)));
#line 338 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 5)));
#line 338 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 6)));
#line 438 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_5_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 438 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 438 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 438 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 438 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 438 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 438 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 438 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 438 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 438 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 438 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 438 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 12)) & (MR_Integer) 1);

#line 438 "simplify_info.m"
    check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_4_4 == (MR_Integer) 1);
#line 436 "simplify_info.m"
    return check_hlds__simplify__simplify_info__succeeded;
#line 436 "simplify_info.m"
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
#line 433 "simplify_info.m"
  {
#line 433 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 433 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__SimplifyTasks_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 0)));
#line 433 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_4_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 338 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 1)));
#line 338 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 2)));
#line 338 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 3)));
#line 338 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 4)));
#line 338 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 5)));
#line 338 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 6)));
#line 435 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_5_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 435 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 435 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 435 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 435 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 435 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 435 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 435 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 435 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 435 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 435 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 435 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 12)) & (MR_Integer) 1);

#line 435 "simplify_info.m"
    check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_4_4 == (MR_Integer) 1);
#line 433 "simplify_info.m"
    return check_hlds__simplify__simplify_info__succeeded;
#line 433 "simplify_info.m"
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
#line 430 "simplify_info.m"
  {
#line 430 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 430 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__SimplifyTasks_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 0)));
#line 430 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_4_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 338 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 1)));
#line 338 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 2)));
#line 338 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 3)));
#line 338 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 4)));
#line 338 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 5)));
#line 338 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 6)));
#line 432 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_5_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 432 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 432 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 432 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 432 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 432 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 432 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 432 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 432 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 432 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 432 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 432 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 12)) & (MR_Integer) 1);

#line 432 "simplify_info.m"
    check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_4_4 == (MR_Integer) 1);
#line 430 "simplify_info.m"
    return check_hlds__simplify__simplify_info__succeeded;
#line 430 "simplify_info.m"
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
#line 427 "simplify_info.m"
  {
#line 427 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 427 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__SimplifyTasks_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 0)));
#line 427 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_4_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 338 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 1)));
#line 338 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 2)));
#line 338 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 3)));
#line 338 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 4)));
#line 338 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 5)));
#line 338 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 6)));
#line 429 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_5_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 429 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 429 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 429 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 429 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 429 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 429 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 429 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 429 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 429 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 429 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 429 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 12)) & (MR_Integer) 1);

#line 429 "simplify_info.m"
    check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_4_4 == (MR_Integer) 1);
#line 427 "simplify_info.m"
    return check_hlds__simplify__simplify_info__succeeded;
#line 427 "simplify_info.m"
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
#line 424 "simplify_info.m"
  {
#line 424 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 424 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__SimplifyTasks_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 0)));
#line 424 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_4_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 338 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 1)));
#line 338 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 2)));
#line 338 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 3)));
#line 338 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 4)));
#line 338 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 5)));
#line 338 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 6)));
#line 426 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_5_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 426 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 426 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 426 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 426 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 426 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 426 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 426 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 426 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 426 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 426 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 426 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 12)) & (MR_Integer) 1);

#line 426 "simplify_info.m"
    check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_4_4 == (MR_Integer) 1);
#line 424 "simplify_info.m"
    return check_hlds__simplify__simplify_info__succeeded;
#line 424 "simplify_info.m"
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
#line 421 "simplify_info.m"
  {
#line 421 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 421 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__SimplifyTasks_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 0)));
#line 421 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_4_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 338 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 1)));
#line 338 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 2)));
#line 338 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 3)));
#line 338 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 4)));
#line 338 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 5)));
#line 338 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 6)));
#line 423 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_5_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 423 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 423 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 423 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 423 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 423 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 423 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 423 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 423 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 423 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 423 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 423 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 12)) & (MR_Integer) 1);

#line 423 "simplify_info.m"
    check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_4_4 == (MR_Integer) 1);
#line 421 "simplify_info.m"
    return check_hlds__simplify__simplify_info__succeeded;
#line 421 "simplify_info.m"
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
#line 418 "simplify_info.m"
  {
#line 418 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 418 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__SimplifyTasks_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 0)));
#line 418 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_4_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 338 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 1)));
#line 338 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 2)));
#line 338 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 3)));
#line 338 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 4)));
#line 338 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 5)));
#line 338 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 6)));
#line 420 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_5_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 420 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 420 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 420 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 420 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 420 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 420 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 420 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 420 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 420 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 420 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 420 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 12)) & (MR_Integer) 1);

#line 420 "simplify_info.m"
    check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_4_4 == (MR_Integer) 1);
#line 418 "simplify_info.m"
    return check_hlds__simplify__simplify_info__succeeded;
#line 418 "simplify_info.m"
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
#line 415 "simplify_info.m"
  {
#line 415 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 415 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__SimplifyTasks_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 0)));
#line 415 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_4_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 338 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 1)));
#line 338 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 2)));
#line 338 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 3)));
#line 338 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 4)));
#line 338 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 5)));
#line 338 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 6)));
#line 417 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_5_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 417 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 417 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 417 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 417 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 417 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 417 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 417 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 417 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 417 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 417 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 417 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 12)) & (MR_Integer) 1);

#line 417 "simplify_info.m"
    check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_4_4 == (MR_Integer) 1);
#line 415 "simplify_info.m"
    return check_hlds__simplify__simplify_info__succeeded;
#line 415 "simplify_info.m"
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
#line 412 "simplify_info.m"
  {
#line 412 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 412 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__SimplifyTasks_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 0)));
#line 412 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_4_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 338 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 1)));
#line 338 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 2)));
#line 338 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 3)));
#line 338 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 4)));
#line 338 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 5)));
#line 338 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 6)));
#line 414 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_5_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 414 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 414 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 414 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 414 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 414 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 414 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 414 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 414 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 414 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 414 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 414 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 12)) & (MR_Integer) 1);

#line 414 "simplify_info.m"
    check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_4_4 == (MR_Integer) 1);
#line 412 "simplify_info.m"
    return check_hlds__simplify__simplify_info__succeeded;
#line 412 "simplify_info.m"
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
#line 409 "simplify_info.m"
  {
#line 409 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 409 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__SimplifyTasks_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 0)));
#line 409 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_4_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 338 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 1)));
#line 338 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 2)));
#line 338 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 3)));
#line 338 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 4)));
#line 338 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 5)));
#line 338 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 6)));
#line 411 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_5_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 411 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 411 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 411 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 411 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 411 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 411 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 411 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 411 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 411 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 411 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 411 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 12)) & (MR_Integer) 1);

#line 411 "simplify_info.m"
    check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_4_4 == (MR_Integer) 1);
#line 409 "simplify_info.m"
    return check_hlds__simplify__simplify_info__succeeded;
#line 409 "simplify_info.m"
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
#line 406 "simplify_info.m"
  {
#line 406 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 406 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__SimplifyTasks_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 0)));
#line 406 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_4_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 338 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 1)));
#line 338 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 2)));
#line 338 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 3)));
#line 338 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 4)));
#line 338 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 5)));
#line 338 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 6)));
#line 408 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_5_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 408 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 408 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 408 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 408 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 408 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 408 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 408 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 408 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 408 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 408 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 408 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 12)) & (MR_Integer) 1);

#line 408 "simplify_info.m"
    check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_4_4 == (MR_Integer) 1);
#line 406 "simplify_info.m"
    return check_hlds__simplify__simplify_info__succeeded;
#line 406 "simplify_info.m"
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
#line 403 "simplify_info.m"
  {
#line 403 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 403 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__SimplifyTasks_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 0)));
#line 403 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_4_4 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 338 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 1)));
#line 338 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 2)));
#line 338 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 3)));
#line 338 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 4)));
#line 338 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 5)));
#line 338 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 6)));
#line 405 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_5_5 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 405 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 405 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 405 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 405 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 405 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 405 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 405 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 405 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 405 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 405 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 405 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 12)) & (MR_Integer) 1);

#line 405 "simplify_info.m"
    check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_4_4 == (MR_Integer) 1);
#line 403 "simplify_info.m"
    return check_hlds__simplify__simplify_info__succeeded;
#line 403 "simplify_info.m"
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
#line 398 "simplify_info.m"
  {
#line 398 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 398 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
#line 398 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_10_10;
#line 398 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
#line 398 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
#line 398 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
#line 398 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
#line 398 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
#line 398 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
#line 399 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 0)));
#line 399 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 1)));
#line 399 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 2)));
#line 399 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 3)));
#line 399 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 4)));
#line 399 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_22_22 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 5)))) & (MR_Integer) 1);
#line 399 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 399 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 6)));
#line 399 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_25_25 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 399 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 399 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);

#line 399 "simplify_info.m"
    {
#line 399 "simplify_info.m"
      check_hlds__simplify__simplify_info__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 399 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__V_17_17));
#line 399 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__V_18_18));
#line 399 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 2) = ((MR_Box) (check_hlds__simplify__simplify_info__V_19_19));
#line 399 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 3) = ((MR_Box) (check_hlds__simplify__simplify_info__V_20_20));
#line 399 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 4) = ((MR_Box) (check_hlds__simplify__simplify_info__V_21_21));
#line 399 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 5) = ((MR_Box) ((check_hlds__simplify__simplify_info__V_22_22 | ((check_hlds__simplify__simplify_info__V_23_23 << (MR_Integer) 1)))));
#line 399 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 6) = ((MR_Box) (check_hlds__simplify__simplify_info__V_24_24));
#line 399 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 7) = ((MR_Box) ((check_hlds__simplify__simplify_info__V_25_25 | ((((check_hlds__simplify__simplify_info__V_26_26 << (MR_Integer) 1)) | ((check_hlds__simplify__simplify_info__HUE_4 << (MR_Integer) 2)))))));
#line 399 "simplify_info.m"
    }
#line 399 "simplify_info.m"
    {
#line 399 "simplify_info.m"
      MR_Word base;
#line 399 "simplify_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 399 "simplify_info.m"
      *check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_7 = base;
#line 399 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__V_11_11));
#line 399 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__V_12_12));
#line 399 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__simplify__simplify_info__V_13_13));
#line 399 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__simplify__simplify_info__V_14_14));
#line 399 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__simplify__simplify_info__V_15_15));
#line 399 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__simplify__simplify_info__V_16_16));
#line 399 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__simplify__simplify_info__V_10_10));
#line 399 "simplify_info.m"
    }
#line 398 "simplify_info.m"
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
    MR_Word check_hlds__simplify__simplify_info__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 397 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);

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
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 7) = ((MR_Box) ((check_hlds__simplify__simplify_info__V_25_25 | ((((check_hlds__simplify__simplify_info__FCT_4 << (MR_Integer) 1)) | ((check_hlds__simplify__simplify_info__V_27_27 << (MR_Integer) 2)))))));
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
    MR_Word check_hlds__simplify__simplify_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 395 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 395 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_25_25 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 7)))) & (MR_Integer) 1);

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
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 7) = ((MR_Box) ((check_hlds__simplify__simplify_info__HPC_4 | ((((check_hlds__simplify__simplify_info__V_26_26 << (MR_Integer) 1)) | ((check_hlds__simplify__simplify_info__V_27_27 << (MR_Integer) 2)))))));
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
    MR_Word check_hlds__simplify__simplify_info__V_25_25 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 393 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 393 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 393 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 6)));

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
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 6) = ((MR_Box) (check_hlds__simplify__simplify_info__CD_4));
#line 393 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 7) = ((MR_Box) ((check_hlds__simplify__simplify_info__V_25_25 | ((((check_hlds__simplify__simplify_info__V_26_26 << (MR_Integer) 1)) | ((check_hlds__simplify__simplify_info__V_27_27 << (MR_Integer) 2)))))));
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
#line 390 "simplify_info.m"
  {
#line 390 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 390 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_4, (MR_Integer) 6)));
#line 390 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_9_9;
#line 390 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_4, (MR_Integer) 0)));
#line 390 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_4, (MR_Integer) 1)));
#line 390 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_4, (MR_Integer) 2)));
#line 390 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_4, (MR_Integer) 3)));
#line 390 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_4, (MR_Integer) 4)));
#line 390 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_4, (MR_Integer) 5)));
#line 391 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_8_8, (MR_Integer) 0)));
#line 391 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_8_8, (MR_Integer) 1)));
#line 391 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_8_8, (MR_Integer) 2)));
#line 391 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_8_8, (MR_Integer) 3)));
#line 391 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_8_8, (MR_Integer) 4)));
#line 391 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_21_21 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_8_8, (MR_Integer) 5)))) & (MR_Integer) 1);
#line 391 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_8_8, (MR_Integer) 6)));
#line 391 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_24_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_8_8, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 391 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_8_8, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 391 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_8_8, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 391 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_8_8, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);

#line 391 "simplify_info.m"
    {
#line 391 "simplify_info.m"
      check_hlds__simplify__simplify_info__V_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 391 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__V_16_16));
#line 391 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__V_17_17));
#line 391 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, 2) = ((MR_Box) (check_hlds__simplify__simplify_info__V_18_18));
#line 391 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, 3) = ((MR_Box) (check_hlds__simplify__simplify_info__V_19_19));
#line 391 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, 4) = ((MR_Box) (check_hlds__simplify__simplify_info__V_20_20));
#line 391 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, 5) = ((MR_Box) ((check_hlds__simplify__simplify_info__V_21_21 | (((MR_Integer) 1 << (MR_Integer) 1)))));
#line 391 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, 6) = ((MR_Box) (check_hlds__simplify__simplify_info__V_23_23));
#line 391 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, 7) = ((MR_Box) ((check_hlds__simplify__simplify_info__V_24_24 | ((((check_hlds__simplify__simplify_info__V_25_25 << (MR_Integer) 1)) | ((check_hlds__simplify__simplify_info__V_26_26 << (MR_Integer) 2)))))));
#line 391 "simplify_info.m"
    }
#line 391 "simplify_info.m"
    {
#line 391 "simplify_info.m"
      MR_Word base;
#line 391 "simplify_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 391 "simplify_info.m"
      *check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_5 = base;
#line 391 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__V_10_10));
#line 391 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__V_11_11));
#line 391 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__simplify__simplify_info__V_12_12));
#line 391 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__simplify__simplify_info__V_13_13));
#line 391 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__simplify__simplify_info__V_14_14));
#line 391 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__simplify__simplify_info__V_15_15));
#line 391 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__simplify__simplify_info__V_9_9));
#line 391 "simplify_info.m"
    }
#line 390 "simplify_info.m"
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
    MR_Word check_hlds__simplify__simplify_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_8_8, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 389 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_8_8, (MR_Integer) 6)));
#line 389 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_24_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_8_8, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 389 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_8_8, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 389 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_8_8, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 389 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_21_21 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_8_8, (MR_Integer) 5)))) & (MR_Integer) 1);

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
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, 5) = ((MR_Box) (((MR_Integer) 1 | ((check_hlds__simplify__simplify_info__V_22_22 << (MR_Integer) 1)))));
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
#line 386 "simplify_info.m"
  {
#line 386 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 386 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
#line 386 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_10_10;
#line 386 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
#line 386 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
#line 386 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
#line 386 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
#line 386 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
#line 386 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
#line 387 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 0)));
#line 387 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 1)));
#line 387 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 2)));
#line 387 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 3)));
#line 387 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_22_22 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 5)))) & (MR_Integer) 1);
#line 387 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 387 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 6)));
#line 387 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_25_25 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 387 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 387 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 387 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 4)));

#line 387 "simplify_info.m"
    {
#line 387 "simplify_info.m"
      check_hlds__simplify__simplify_info__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 387 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__V_17_17));
#line 387 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__V_18_18));
#line 387 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 2) = ((MR_Box) (check_hlds__simplify__simplify_info__V_19_19));
#line 387 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 3) = ((MR_Box) (check_hlds__simplify__simplify_info__V_20_20));
#line 387 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 4) = ((MR_Box) (check_hlds__simplify__simplify_info__Specs_4));
#line 387 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 5) = ((MR_Box) ((check_hlds__simplify__simplify_info__V_22_22 | ((check_hlds__simplify__simplify_info__V_23_23 << (MR_Integer) 1)))));
#line 387 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 6) = ((MR_Box) (check_hlds__simplify__simplify_info__V_24_24));
#line 387 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 7) = ((MR_Box) ((check_hlds__simplify__simplify_info__V_25_25 | ((((check_hlds__simplify__simplify_info__V_26_26 << (MR_Integer) 1)) | ((check_hlds__simplify__simplify_info__V_27_27 << (MR_Integer) 2)))))));
#line 387 "simplify_info.m"
    }
#line 387 "simplify_info.m"
    {
#line 387 "simplify_info.m"
      MR_Word base;
#line 387 "simplify_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 387 "simplify_info.m"
      *check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_7 = base;
#line 387 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__V_11_11));
#line 387 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__V_12_12));
#line 387 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__simplify__simplify_info__V_13_13));
#line 387 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__simplify__simplify_info__V_14_14));
#line 387 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__simplify__simplify_info__V_15_15));
#line 387 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__simplify__simplify_info__V_16_16));
#line 387 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__simplify__simplify_info__V_10_10));
#line 387 "simplify_info.m"
    }
#line 386 "simplify_info.m"
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
    MR_Word check_hlds__simplify__simplify_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 4)));
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
    MR_Word check_hlds__simplify__simplify_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 3)));

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
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 3) = ((MR_Box) (check_hlds__simplify__simplify_info__EV_4));
#line 385 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 4) = ((MR_Box) (check_hlds__simplify__simplify_info__V_21_21));
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
#line 382 "simplify_info.m"
  {
#line 382 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 382 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
#line 382 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
#line 382 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
#line 382 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
#line 382 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
#line 382 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
#line 382 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));

#line 382 "simplify_info.m"
    {
#line 382 "simplify_info.m"
      MR_Word base;
#line 382 "simplify_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 382 "simplify_info.m"
      *check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_7 = base;
#line 382 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__V_9_9));
#line 382 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__V_10_10));
#line 382 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__simplify__simplify_info__V_11_11));
#line 382 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__simplify__simplify_info__V_12_12));
#line 382 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__simplify__simplify_info__RVM_4));
#line 382 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__simplify__simplify_info__V_14_14));
#line 382 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__simplify__simplify_info__V_15_15));
#line 382 "simplify_info.m"
    }
#line 382 "simplify_info.m"
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
#line 378 "simplify_info.m"
  {
#line 378 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 378 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
#line 378 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
#line 378 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
#line 378 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
#line 378 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
#line 378 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
#line 378 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));

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
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__simplify__simplify_info__VS_4));
#line 378 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__simplify__simplify_info__V_12_12));
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
    MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
#line 380 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
#line 380 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
#line 380 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));

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
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__simplify__simplify_info__VT_4));
#line 380 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__simplify__simplify_info__V_13_13));
#line 380 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__simplify__simplify_info__V_14_14));
#line 380 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__simplify__simplify_info__V_15_15));
#line 380 "simplify_info.m"
    }
#line 380 "simplify_info.m"
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
#line 376 "simplify_info.m"
  {
#line 376 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 376 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
#line 376 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
#line 376 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
#line 376 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
#line 376 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
#line 376 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
#line 376 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));

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
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__MI_4));
#line 376 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__simplify__simplify_info__V_11_11));
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
#line 374 "simplify_info.m"
  {
#line 374 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 374 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
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
    MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));

#line 374 "simplify_info.m"
    {
#line 374 "simplify_info.m"
      MR_Word base;
#line 374 "simplify_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 374 "simplify_info.m"
      *check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_7 = base;
#line 374 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__Tasks_4));
#line 374 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__V_10_10));
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
#line 370 "simplify_info.m"
  {
#line 370 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 370 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 6)));
#line 371 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 0)));
#line 371 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 1)));
#line 371 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 2)));
#line 371 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 3)));
#line 371 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 4)));
#line 371 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 5)));
#line 371 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 0)));
#line 371 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 1)));
#line 371 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 2)));
#line 371 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 3)));
#line 371 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 4)));
#line 371 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_17_17 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 5)))) & (MR_Integer) 1);
#line 371 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 371 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 6)));
#line 371 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_20_20 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 371 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);

#line 371 "simplify_info.m"
    *check_hlds__simplify__simplify_info__HUE_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 370 "simplify_info.m"
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
    MR_Word check_hlds__simplify__simplify_info__V_21_21;

#line 369 "simplify_info.m"
    *check_hlds__simplify__simplify_info__FCT_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 369 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 368 "simplify_info.m"
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
    MR_Word check_hlds__simplify__simplify_info__V_20_20;
#line 367 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_21_21;

#line 367 "simplify_info.m"
    *check_hlds__simplify__simplify_info__HPC_4 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 367 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 367 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 366 "simplify_info.m"
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
    MR_Word check_hlds__simplify__simplify_info__V_19_19;
#line 365 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_20_20;
#line 365 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_21_21;

#line 365 "simplify_info.m"
    *check_hlds__simplify__simplify_info__CD_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 6)));
#line 365 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_19_19 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 365 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 365 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 364 "simplify_info.m"
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
    MR_Integer check_hlds__simplify__simplify_info__V_18_18;
#line 363 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_19_19;
#line 363 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_20_20;
#line 363 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_21_21;

#line 363 "simplify_info.m"
    *check_hlds__simplify__simplify_info__RRD_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 363 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 6)));
#line 363 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_19_19 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 363 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 363 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 362 "simplify_info.m"
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
    MR_Word check_hlds__simplify__simplify_info__V_17_17;
#line 361 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__V_18_18;
#line 361 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_19_19;
#line 361 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_20_20;
#line 361 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_21_21;

#line 361 "simplify_info.m"
    *check_hlds__simplify__simplify_info__RQ_4 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 5)))) & (MR_Integer) 1);
#line 361 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_17_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
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
    MR_Word check_hlds__simplify__simplify_info__V_16_16;
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
    *check_hlds__simplify__simplify_info__Specs_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 4)));
#line 359 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_16_16 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 5)))) & (MR_Integer) 1);
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
    MR_Word check_hlds__simplify__simplify_info__V_15_15;
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
    *check_hlds__simplify__simplify_info__EV_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 3)));
#line 357 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 4)));
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
    MR_Word check_hlds__simplify__simplify_info__V_14_14;
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
    *check_hlds__simplify__simplify_info__IVS_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 2)));
#line 355 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 3)));
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
#line 350 "simplify_info.m"
  {
#line 350 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 350 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__SubInfo_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_4, (MR_Integer) 6)));
#line 351 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_4, (MR_Integer) 0)));
#line 351 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_4, (MR_Integer) 1)));
#line 351 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_4, (MR_Integer) 2)));
#line 351 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_4, (MR_Integer) 3)));
#line 351 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_4, (MR_Integer) 4)));
#line 351 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_4, (MR_Integer) 5)));
#line 352 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_15_15;
#line 352 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_16_16;
#line 352 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_17_17;
#line 352 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_18_18;
#line 352 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_19_19;
#line 352 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__V_20_20;
#line 352 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_21_21;
#line 352 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_22_22;
#line 352 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_23_23;

#line 352 "simplify_info.m"
    *check_hlds__simplify__simplify_info__PredId_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SubInfo_7, (MR_Integer) 0)));
#line 352 "simplify_info.m"
    *check_hlds__simplify__simplify_info__ProcId_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SubInfo_7, (MR_Integer) 1)));
#line 352 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SubInfo_7, (MR_Integer) 2)));
#line 352 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SubInfo_7, (MR_Integer) 3)));
#line 352 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SubInfo_7, (MR_Integer) 4)));
#line 352 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_18_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SubInfo_7, (MR_Integer) 5)))) & (MR_Integer) 1);
#line 352 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SubInfo_7, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 352 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SubInfo_7, (MR_Integer) 6)));
#line 352 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_21_21 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SubInfo_7, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 352 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SubInfo_7, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 352 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SubInfo_7, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 350 "simplify_info.m"
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
#line 348 "simplify_info.m"
  {
#line 348 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 348 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 0)));
#line 348 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 1)));
#line 348 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 2)));
#line 348 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 3)));
#line 348 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 4)));
#line 348 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_10_10;

#line 348 "simplify_info.m"
    *check_hlds__simplify__simplify_info__FS_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 5)));
#line 348 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 6)));
#line 348 "simplify_info.m"
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
    MR_Word check_hlds__simplify__simplify_info__V_9_9;
#line 346 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_10_10;

#line 346 "simplify_info.m"
    *check_hlds__simplify__simplify_info__RVM_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 4)));
#line 346 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 5)));
#line 346 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 6)));
#line 346 "simplify_info.m"
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
#line 342 "simplify_info.m"
  {
#line 342 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 342 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 0)));
#line 342 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 1)));
#line 342 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_7_7;
#line 342 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_8_8;
#line 342 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_9_9;
#line 342 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_10_10;

#line 342 "simplify_info.m"
    *check_hlds__simplify__simplify_info__VS_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 2)));
#line 342 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 3)));
#line 342 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 4)));
#line 342 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 5)));
#line 342 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 6)));
#line 342 "simplify_info.m"
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
    MR_Word check_hlds__simplify__simplify_info__V_8_8;
#line 344 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_9_9;
#line 344 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_10_10;

#line 344 "simplify_info.m"
    *check_hlds__simplify__simplify_info__VT_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 3)));
#line 344 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 4)));
#line 344 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 5)));
#line 344 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 6)));
#line 344 "simplify_info.m"
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
#line 340 "simplify_info.m"
  {
#line 340 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 340 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 0)));
#line 340 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_6_6;
#line 340 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_7_7;
#line 340 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_8_8;
#line 340 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_9_9;
#line 340 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_10_10;

#line 340 "simplify_info.m"
    *check_hlds__simplify__simplify_info__MI_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 1)));
#line 340 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 2)));
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
#line 338 "simplify_info.m"
  {
#line 338 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 338 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_5_5;
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
    *check_hlds__simplify__simplify_info__Tasks_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 0)));
#line 338 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 1)));
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
#line 324 "simplify_info.m"
  {
#line 324 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 324 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__TypeInfo_21_21;
#line 324 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__TypeInfo_22_22;
#line 324 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__VarTypes0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_16, (MR_Integer) 3)));
#line 324 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__RttiVarMaps0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_16, (MR_Integer) 4)));
#line 324 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__VarTypes_12;
#line 324 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__Renaming_13;
#line 324 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__RttiVarMaps1_14;
#line 324 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__RttiVarMaps_15;
#line 324 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_18_18;
#line 324 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_44_44;
#line 324 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_45_45;
#line 324 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_46_46;
#line 324 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_49_49;
#line 324 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_50_50;
#line 344 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_16, (MR_Integer) 0)));
#line 344 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_16, (MR_Integer) 1)));
#line 344 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_16, (MR_Integer) 2)));
#line 344 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_16, (MR_Integer) 5)));
#line 344 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_16, (MR_Integer) 6)));
#line 380 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_47_47;
#line 380 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_48_48;

#line 327 "simplify_info.m"
    {
#line 327 "simplify_info.m"
      hlds__vartypes__apply_rec_subst_to_vartypes_3_p_0(check_hlds__simplify__simplify_info__TSubst_8, check_hlds__simplify__simplify_info__VarTypes0_10, &check_hlds__simplify__simplify_info__VarTypes_12);
    }
#line 5674 "check_hlds.simplify.simplify_info.c"
    check_hlds__simplify__simplify_info__TypeInfo_21_21 = (MR_Word) &check_hlds__simplify__simplify_info_scalar_common_1[0];
#line 328 "simplify_info.m"
    {
#line 328 "simplify_info.m"
      check_hlds__simplify__simplify_info__Renaming_13 = mercury__map__singleton_2_f_0(check_hlds__simplify__simplify_info__TypeInfo_21_21, check_hlds__simplify__simplify_info__TypeInfo_21_21, ((MR_Box) (check_hlds__simplify__simplify_info__ToVar_6)), ((MR_Box) (check_hlds__simplify__simplify_info__FromVar_7)));
    }
#line 5681 "check_hlds.simplify.simplify_info.c"
    check_hlds__simplify__simplify_info__TypeInfo_22_22 = (MR_Word) &check_hlds__simplify__simplify_info_scalar_common_1[1];
#line 329 "simplify_info.m"
    {
#line 329 "simplify_info.m"
      check_hlds__simplify__simplify_info__V_18_18 = mercury__map__init_0_f_0(check_hlds__simplify__simplify_info__TypeInfo_22_22, check_hlds__simplify__simplify_info__TypeInfo_22_22);
    }
#line 329 "simplify_info.m"
    {
#line 329 "simplify_info.m"
      hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_p_0(check_hlds__simplify__simplify_info__V_18_18, check_hlds__simplify__simplify_info__TSubst_8, check_hlds__simplify__simplify_info__Renaming_13, check_hlds__simplify__simplify_info__RttiVarMaps0_11, &check_hlds__simplify__simplify_info__RttiVarMaps1_14);
    }
#line 331 "simplify_info.m"
    {
#line 331 "simplify_info.m"
      hlds__hlds_rtti__rtti_var_info_duplicate_4_p_0(check_hlds__simplify__simplify_info__FromVar_7, check_hlds__simplify__simplify_info__ToVar_6, check_hlds__simplify__simplify_info__RttiVarMaps1_14, &check_hlds__simplify__simplify_info__RttiVarMaps_15);
    }
#line 380 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_16, (MR_Integer) 0)));
#line 380 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_16, (MR_Integer) 1)));
#line 380 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_16, (MR_Integer) 2)));
#line 380 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_16, (MR_Integer) 3)));
#line 380 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_16, (MR_Integer) 4)));
#line 380 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_16, (MR_Integer) 5)));
#line 380 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_16, (MR_Integer) 6)));
#line 382 "simplify_info.m"
    {
#line 382 "simplify_info.m"
      MR_Word base;
#line 382 "simplify_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 382 "simplify_info.m"
      *check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_17 = base;
#line 382 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__V_44_44));
#line 382 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__V_45_45));
#line 382 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__simplify__simplify_info__V_46_46));
#line 382 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__simplify__simplify_info__VarTypes_12));
#line 382 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__simplify__simplify_info__RttiVarMaps_15));
#line 382 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__simplify__simplify_info__V_49_49));
#line 382 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__simplify__simplify_info__V_50_50));
#line 382 "simplify_info.m"
    }
#line 324 "simplify_info.m"
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
#line 318 "simplify_info.m"
  {
#line 318 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 318 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__CostDelta0_6;
#line 318 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__CostDelta_7;
#line 318 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 6)));
#line 318 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
#line 318 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
#line 318 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
#line 318 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
#line 318 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 4)));
#line 318 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 5)));
#line 318 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_13_13, (MR_Integer) 0)));
#line 318 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_13_13, (MR_Integer) 1)));
#line 318 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_13_13, (MR_Integer) 2)));
#line 318 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_13_13, (MR_Integer) 3)));
#line 318 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_13_13, (MR_Integer) 4)));
#line 318 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_25_25 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_13_13, (MR_Integer) 5)))) & (MR_Integer) 1);
#line 318 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_13_13, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 318 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_27_27;
#line 318 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_28_28;
#line 318 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_29_29;
#line 318 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_36_36;

#line 365 "simplify_info.m"
    check_hlds__simplify__simplify_info__CostDelta0_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_13_13, (MR_Integer) 6)));
#line 365 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_27_27 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_13_13, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 365 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_13_13, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 365 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_13_13, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 320 "simplify_info.m"
    check_hlds__simplify__simplify_info__CostDelta_7 = (check_hlds__simplify__simplify_info__CostDelta0_6 + check_hlds__simplify__simplify_info__Incr_4);
#line 393 "simplify_info.m"
    {
#line 393 "simplify_info.m"
      check_hlds__simplify__simplify_info__V_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 393 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_36_36, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__V_20_20));
#line 393 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_36_36, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__V_21_21));
#line 393 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_36_36, 2) = ((MR_Box) (check_hlds__simplify__simplify_info__V_22_22));
#line 393 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_36_36, 3) = ((MR_Box) (check_hlds__simplify__simplify_info__V_23_23));
#line 393 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_36_36, 4) = ((MR_Box) (check_hlds__simplify__simplify_info__V_24_24));
#line 393 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_36_36, 5) = ((MR_Box) ((check_hlds__simplify__simplify_info__V_25_25 | ((check_hlds__simplify__simplify_info__V_26_26 << (MR_Integer) 1)))));
#line 393 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_36_36, 6) = ((MR_Box) (check_hlds__simplify__simplify_info__CostDelta_7));
#line 393 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_36_36, 7) = ((MR_Box) ((check_hlds__simplify__simplify_info__V_27_27 | ((((check_hlds__simplify__simplify_info__V_28_28 << (MR_Integer) 1)) | ((check_hlds__simplify__simplify_info__V_29_29 << (MR_Integer) 2)))))));
#line 393 "simplify_info.m"
    }
#line 393 "simplify_info.m"
    {
#line 393 "simplify_info.m"
      MR_Word base;
#line 393 "simplify_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 393 "simplify_info.m"
      *check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_9 = base;
#line 393 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__V_14_14));
#line 393 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__V_15_15));
#line 393 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__simplify__simplify_info__V_16_16));
#line 393 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__simplify__simplify_info__V_17_17));
#line 393 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__simplify__simplify_info__V_18_18));
#line 393 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__simplify__simplify_info__V_19_19));
#line 393 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__simplify__simplify_info__V_36_36));
#line 393 "simplify_info.m"
    }
#line 318 "simplify_info.m"
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
#line 314 "simplify_info.m"
  {
#line 314 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 314 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__SimplifyTasks_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
#line 314 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
#line 314 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
#line 314 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
#line 314 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
#line 314 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
#line 314 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
#line 403 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_10, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 405 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_10, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 405 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_10, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 405 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_10, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 405 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_10, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 405 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_10, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 405 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_17_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_10, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 405 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_10, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 405 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_10, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 405 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_10, (MR_Integer) 0)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 405 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_10, (MR_Integer) 0)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 405 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_10, (MR_Integer) 0)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 405 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_10, (MR_Integer) 0)))) >> (MR_Integer) 12)) & (MR_Integer) 1);

#line 405 "simplify_info.m"
    check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_11_11 == (MR_Integer) 1);
#line 314 "simplify_info.m"
    if (check_hlds__simplify__simplify_info__succeeded)
#line 306 "simplify_info.m"
      {
#line 306 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__Specs0_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_31_31, (MR_Integer) 4)));
#line 306 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__Specs_37;
#line 306 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_31_31, (MR_Integer) 0)));
#line 306 "simplify_info.m"
        MR_Integer check_hlds__simplify__simplify_info__V_49_49 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_31_31, (MR_Integer) 1)));
#line 306 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_31_31, (MR_Integer) 2)));
#line 306 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_31_31, (MR_Integer) 3)));
#line 306 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_52_52 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_31_31, (MR_Integer) 5)))) & (MR_Integer) 1);
#line 306 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_53_53 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_31_31, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 306 "simplify_info.m"
        MR_Integer check_hlds__simplify__simplify_info__V_54_54 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_31_31, (MR_Integer) 6)));
#line 306 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_55_55 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_31_31, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 306 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_56_56 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_31_31, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 306 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_57_57 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_31_31, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 306 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_64_64;

#line 308 "simplify_info.m"
        {
#line 308 "simplify_info.m"
          check_hlds__simplify__simplify_info__Specs_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 308 "simplify_info.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_info__Specs_37, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__Spec_4));
#line 308 "simplify_info.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_info__Specs_37, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__Specs0_36));
#line 308 "simplify_info.m"
        }
#line 387 "simplify_info.m"
        {
#line 387 "simplify_info.m"
          check_hlds__simplify__simplify_info__V_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 387 "simplify_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_64_64, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__V_48_48));
#line 387 "simplify_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_64_64, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__V_49_49));
#line 387 "simplify_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_64_64, 2) = ((MR_Box) (check_hlds__simplify__simplify_info__V_50_50));
#line 387 "simplify_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_64_64, 3) = ((MR_Box) (check_hlds__simplify__simplify_info__V_51_51));
#line 387 "simplify_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_64_64, 4) = ((MR_Box) (check_hlds__simplify__simplify_info__Specs_37));
#line 387 "simplify_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_64_64, 5) = ((MR_Box) ((check_hlds__simplify__simplify_info__V_52_52 | ((check_hlds__simplify__simplify_info__V_53_53 << (MR_Integer) 1)))));
#line 387 "simplify_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_64_64, 6) = ((MR_Box) (check_hlds__simplify__simplify_info__V_54_54));
#line 387 "simplify_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_64_64, 7) = ((MR_Box) ((check_hlds__simplify__simplify_info__V_55_55 | ((((check_hlds__simplify__simplify_info__V_56_56 << (MR_Integer) 1)) | ((check_hlds__simplify__simplify_info__V_57_57 << (MR_Integer) 2)))))));
#line 387 "simplify_info.m"
        }
#line 387 "simplify_info.m"
        {
#line 387 "simplify_info.m"
          MR_Word base;
#line 387 "simplify_info.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 387 "simplify_info.m"
          *check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_7 = base;
#line 387 "simplify_info.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__SimplifyTasks_10));
#line 387 "simplify_info.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__V_26_26));
#line 387 "simplify_info.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__simplify__simplify_info__V_27_27));
#line 387 "simplify_info.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__simplify__simplify_info__V_28_28));
#line 387 "simplify_info.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__simplify__simplify_info__V_29_29));
#line 387 "simplify_info.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__simplify__simplify_info__V_30_30));
#line 387 "simplify_info.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__simplify__simplify_info__V_64_64));
#line 387 "simplify_info.m"
        }
#line 306 "simplify_info.m"
      }
#line 314 "simplify_info.m"
    else
#line 314 "simplify_info.m"
      *check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_7 = check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6;
#line 314 "simplify_info.m"
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
#line 306 "simplify_info.m"
  {
#line 306 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 306 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__Specs0_6;
#line 306 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__Specs_7;
#line 306 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 6)));
#line 306 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
#line 306 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
#line 306 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
#line 306 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
#line 306 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 4)));
#line 306 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 5)));
#line 306 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_13_13, (MR_Integer) 0)));
#line 306 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_13_13, (MR_Integer) 1)));
#line 306 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_13_13, (MR_Integer) 2)));
#line 306 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_13_13, (MR_Integer) 3)));
#line 306 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_24_24;
#line 306 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_25_25;
#line 306 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__V_26_26;
#line 306 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_27_27;
#line 306 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_28_28;
#line 306 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_29_29;
#line 306 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_36_36;

#line 359 "simplify_info.m"
    check_hlds__simplify__simplify_info__Specs0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_13_13, (MR_Integer) 4)));
#line 359 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_24_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_13_13, (MR_Integer) 5)))) & (MR_Integer) 1);
#line 359 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_13_13, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 359 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_13_13, (MR_Integer) 6)));
#line 359 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_27_27 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_13_13, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 359 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_13_13, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 359 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_13_13, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 308 "simplify_info.m"
    {
#line 308 "simplify_info.m"
      check_hlds__simplify__simplify_info__Specs_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 308 "simplify_info.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_info__Specs_7, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__Spec_4));
#line 308 "simplify_info.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_info__Specs_7, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__Specs0_6));
#line 308 "simplify_info.m"
    }
#line 387 "simplify_info.m"
    {
#line 387 "simplify_info.m"
      check_hlds__simplify__simplify_info__V_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 387 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_36_36, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__V_20_20));
#line 387 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_36_36, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__V_21_21));
#line 387 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_36_36, 2) = ((MR_Box) (check_hlds__simplify__simplify_info__V_22_22));
#line 387 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_36_36, 3) = ((MR_Box) (check_hlds__simplify__simplify_info__V_23_23));
#line 387 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_36_36, 4) = ((MR_Box) (check_hlds__simplify__simplify_info__Specs_7));
#line 387 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_36_36, 5) = ((MR_Box) ((check_hlds__simplify__simplify_info__V_24_24 | ((check_hlds__simplify__simplify_info__V_25_25 << (MR_Integer) 1)))));
#line 387 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_36_36, 6) = ((MR_Box) (check_hlds__simplify__simplify_info__V_26_26));
#line 387 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_36_36, 7) = ((MR_Box) ((check_hlds__simplify__simplify_info__V_27_27 | ((((check_hlds__simplify__simplify_info__V_28_28 << (MR_Integer) 1)) | ((check_hlds__simplify__simplify_info__V_29_29 << (MR_Integer) 2)))))));
#line 387 "simplify_info.m"
    }
#line 387 "simplify_info.m"
    {
#line 387 "simplify_info.m"
      MR_Word base;
#line 387 "simplify_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 387 "simplify_info.m"
      *check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_9 = base;
#line 387 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__V_14_14));
#line 387 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__V_15_15));
#line 387 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__simplify__simplify_info__V_16_16));
#line 387 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__simplify__simplify_info__V_17_17));
#line 387 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__simplify__simplify_info__V_18_18));
#line 387 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__simplify__simplify_info__V_19_19));
#line 387 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__simplify__simplify_info__V_36_36));
#line 387 "simplify_info.m"
    }
#line 306 "simplify_info.m"
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
#line 301 "simplify_info.m"
  {
#line 301 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 301 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__ElimVarsLists0_6;
#line 301 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__ElimVarsLists_7;
#line 301 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 6)));
#line 301 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
#line 301 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
#line 301 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
#line 301 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
#line 301 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 4)));
#line 301 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 5)));
#line 301 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_13_13, (MR_Integer) 0)));
#line 301 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_13_13, (MR_Integer) 1)));
#line 301 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_13_13, (MR_Integer) 2)));
#line 301 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_23_23;
#line 301 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_24_24;
#line 301 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_25_25;
#line 301 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__V_26_26;
#line 301 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_27_27;
#line 301 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_28_28;
#line 301 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_29_29;
#line 301 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_36_36;

#line 357 "simplify_info.m"
    check_hlds__simplify__simplify_info__ElimVarsLists0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_13_13, (MR_Integer) 3)));
#line 357 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_13_13, (MR_Integer) 4)));
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
#line 303 "simplify_info.m"
    {
#line 303 "simplify_info.m"
      check_hlds__simplify__simplify_info__ElimVarsLists_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 303 "simplify_info.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_info__ElimVarsLists_7, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__ElimVars_4));
#line 303 "simplify_info.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_info__ElimVarsLists_7, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__ElimVarsLists0_6));
#line 303 "simplify_info.m"
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
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_36_36, 3) = ((MR_Box) (check_hlds__simplify__simplify_info__ElimVarsLists_7));
#line 385 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_36_36, 4) = ((MR_Box) (check_hlds__simplify__simplify_info__V_23_23));
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
#line 301 "simplify_info.m"
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
#line 296 "simplify_info.m"
  {
#line 296 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 296 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__ModuleInfo_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_4, (MR_Integer) 1)));
#line 296 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__PredId_8;
#line 296 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__ProcId_9;
#line 296 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__SubInfo_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_4, (MR_Integer) 6)));
#line 340 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_4, (MR_Integer) 0)));
#line 340 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_4, (MR_Integer) 2)));
#line 340 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_4, (MR_Integer) 3)));
#line 340 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_4, (MR_Integer) 4)));
#line 340 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_4, (MR_Integer) 5)));
#line 352 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_29_29;
#line 352 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_30_30;
#line 352 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_31_31;
#line 352 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_32_32;
#line 352 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_33_33;
#line 352 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__V_34_34;
#line 352 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_35_35;
#line 352 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_36_36;
#line 352 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_37_37;

#line 352 "simplify_info.m"
    check_hlds__simplify__simplify_info__PredId_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SubInfo_21, (MR_Integer) 0)));
#line 352 "simplify_info.m"
    check_hlds__simplify__simplify_info__ProcId_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SubInfo_21, (MR_Integer) 1)));
#line 352 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SubInfo_21, (MR_Integer) 2)));
#line 352 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SubInfo_21, (MR_Integer) 3)));
#line 352 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SubInfo_21, (MR_Integer) 4)));
#line 352 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_32_32 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SubInfo_21, (MR_Integer) 5)))) & (MR_Integer) 1);
#line 352 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SubInfo_21, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 352 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_34_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SubInfo_21, (MR_Integer) 6)));
#line 352 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_35_35 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SubInfo_21, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 352 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SubInfo_21, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 352 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SubInfo_21, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 299 "simplify_info.m"
    {
#line 299 "simplify_info.m"
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(check_hlds__simplify__simplify_info__ModuleInfo_7, check_hlds__simplify__simplify_info__PredId_8, check_hlds__simplify__simplify_info__ProcId_9, check_hlds__simplify__simplify_info__PredInfo_5, check_hlds__simplify__simplify_info__ProcInfo_6);
#line 299 "simplify_info.m"
      return;
    }
#line 296 "simplify_info.m"
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
#line 287 "simplify_info.m"
  {
#line 287 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 287 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_24_24;
#line 287 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
#line 287 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
#line 287 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
#line 287 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
#line 287 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
#line 287 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
#line 287 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_31_31, (MR_Integer) 0)));
#line 287 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_31_31, (MR_Integer) 1)));
#line 287 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_31_31, (MR_Integer) 2)));
#line 287 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_31_31, (MR_Integer) 3)));
#line 287 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_31_31, (MR_Integer) 4)));
#line 287 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__V_45_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_31_31, (MR_Integer) 6)));
#line 287 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_47_47 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_31_31, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 287 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_49_49 = check_hlds__simplify__simplify_info__SimplifyTasks_4;
#line 287 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_50_50 = check_hlds__simplify__simplify_info__V_26_26;
#line 287 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_51_51 = check_hlds__simplify__simplify_info__V_27_27;
#line 287 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_52_52 = check_hlds__simplify__simplify_info__V_28_28;
#line 287 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_53_53 = check_hlds__simplify__simplify_info__V_29_29;
#line 287 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_54_54 = check_hlds__simplify__simplify_info__V_30_30;
#line 287 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_62_62 = check_hlds__simplify__simplify_info__V_38_38;
#line 287 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__V_63_63 = check_hlds__simplify__simplify_info__V_39_39;
#line 287 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_64_64 = check_hlds__simplify__simplify_info__V_40_40;
#line 287 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_65_65 = check_hlds__simplify__simplify_info__V_41_41;
#line 287 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_66_66 = check_hlds__simplify__simplify_info__V_42_42;
#line 287 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__V_69_69 = check_hlds__simplify__simplify_info__V_45_45;
#line 287 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_71_71 = check_hlds__simplify__simplify_info__V_47_47;
#line 287 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_73_73 = check_hlds__simplify__simplify_info__V_49_49;
#line 287 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_74_74 = check_hlds__simplify__simplify_info__V_50_50;
#line 287 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_75_75 = check_hlds__simplify__simplify_info__V_51_51;
#line 287 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_76_76 = check_hlds__simplify__simplify_info__V_52_52;
#line 287 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_77_77 = check_hlds__simplify__simplify_info__V_53_53;
#line 287 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_78_78 = check_hlds__simplify__simplify_info__V_54_54;
#line 287 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_86_86 = check_hlds__simplify__simplify_info__V_62_62;
#line 287 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__V_87_87 = check_hlds__simplify__simplify_info__V_63_63;
#line 287 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_88_88 = check_hlds__simplify__simplify_info__V_64_64;
#line 287 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_89_89 = check_hlds__simplify__simplify_info__V_65_65;
#line 287 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_90_90 = check_hlds__simplify__simplify_info__V_66_66;
#line 287 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__V_93_93 = check_hlds__simplify__simplify_info__V_69_69;
#line 287 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_95_95 = check_hlds__simplify__simplify_info__V_71_71;
#line 287 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_97_97 = check_hlds__simplify__simplify_info__V_73_73;
#line 287 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_98_98 = check_hlds__simplify__simplify_info__V_74_74;
#line 287 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_99_99 = check_hlds__simplify__simplify_info__V_75_75;
#line 287 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_100_100 = check_hlds__simplify__simplify_info__V_76_76;
#line 287 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_101_101 = check_hlds__simplify__simplify_info__V_77_77;
#line 287 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_102_102 = check_hlds__simplify__simplify_info__V_78_78;
#line 288 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
#line 289 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_43_43 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_31_31, (MR_Integer) 5)))) & (MR_Integer) 1);
#line 289 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_44_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_31_31, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 289 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_46_46 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_31_31, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 289 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_48_48 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_31_31, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);

#line 292 "simplify_info.m"
    {
#line 292 "simplify_info.m"
      check_hlds__simplify__simplify_info__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 292 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_24_24, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__V_86_86));
#line 292 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_24_24, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__V_87_87));
#line 292 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_24_24, 2) = ((MR_Box) (check_hlds__simplify__simplify_info__V_88_88));
#line 292 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_24_24, 3) = ((MR_Box) (check_hlds__simplify__simplify_info__V_89_89));
#line 292 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_24_24, 4) = ((MR_Box) (check_hlds__simplify__simplify_info__V_90_90));
#line 292 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_24_24, 5) = ((MR_Box) (((MR_Integer) 0 | (((MR_Integer) 0 << (MR_Integer) 1)))));
#line 292 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_24_24, 6) = ((MR_Box) (check_hlds__simplify__simplify_info__V_93_93));
#line 292 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_24_24, 7) = ((MR_Box) (((MR_Integer) 1 | ((((check_hlds__simplify__simplify_info__V_95_95 << (MR_Integer) 1)) | (((MR_Integer) 1 << (MR_Integer) 2)))))));
#line 292 "simplify_info.m"
    }
#line 292 "simplify_info.m"
    {
#line 292 "simplify_info.m"
      MR_Word base;
#line 292 "simplify_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 292 "simplify_info.m"
      *check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_7 = base;
#line 292 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__V_97_97));
#line 292 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__V_98_98));
#line 292 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__simplify__simplify_info__V_99_99));
#line 292 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__simplify__simplify_info__V_100_100));
#line 292 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__simplify__simplify_info__V_101_101));
#line 292 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__simplify__simplify_info__V_102_102));
#line 292 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__simplify__simplify_info__V_24_24));
#line 292 "simplify_info.m"
    }
#line 287 "simplify_info.m"
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
#line 267 "simplify_info.m"
  {
#line 267 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 267 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__Globals_13;
#line 267 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__FullyStrict_14;
#line 267 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__VarSet_15;
#line 267 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__VarTypes_16;
#line 267 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__InstVarSet_17;
#line 267 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__RttiVarMaps_18;
#line 267 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__SubInfo_26;

#line 268 "simplify_info.m"
    {
#line 268 "simplify_info.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__simplify__simplify_info__ModuleInfo_7, &check_hlds__simplify__simplify_info__Globals_13);
    }
#line 269 "simplify_info.m"
    {
#line 269 "simplify_info.m"
      libs__globals__lookup_bool_option_3_p_0(check_hlds__simplify__simplify_info__Globals_13, (MR_Integer) 166, &check_hlds__simplify__simplify_info__FullyStrict_14);
    }
#line 270 "simplify_info.m"
    {
#line 270 "simplify_info.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(check_hlds__simplify__simplify_info__ProcInfo_10, &check_hlds__simplify__simplify_info__VarSet_15);
    }
#line 271 "simplify_info.m"
    {
#line 271 "simplify_info.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(check_hlds__simplify__simplify_info__ProcInfo_10, &check_hlds__simplify__simplify_info__VarTypes_16);
    }
#line 272 "simplify_info.m"
    {
#line 272 "simplify_info.m"
      hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(check_hlds__simplify__simplify_info__ProcInfo_10, &check_hlds__simplify__simplify_info__InstVarSet_17);
    }
#line 273 "simplify_info.m"
    {
#line 273 "simplify_info.m"
      hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(check_hlds__simplify__simplify_info__ProcInfo_10, &check_hlds__simplify__simplify_info__RttiVarMaps_18);
    }
#line 281 "simplify_info.m"
    {
#line 281 "simplify_info.m"
      check_hlds__simplify__simplify_info__SubInfo_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 281 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SubInfo_26, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__PredId_8));
#line 281 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SubInfo_26, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__ProcId_9));
#line 281 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SubInfo_26, 2) = ((MR_Box) (check_hlds__simplify__simplify_info__InstVarSet_17));
#line 281 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SubInfo_26, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 281 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SubInfo_26, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 281 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SubInfo_26, 5) = ((MR_Box) (((MR_Integer) 0 | (((MR_Integer) 0 << (MR_Integer) 1)))));
#line 281 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SubInfo_26, 6) = ((MR_Box) ((MR_Integer) 0));
#line 281 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SubInfo_26, 7) = ((MR_Box) (((MR_Integer) 1 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((MR_Integer) 1 << (MR_Integer) 2)))))));
#line 281 "simplify_info.m"
    }
#line 284 "simplify_info.m"
    {
#line 284 "simplify_info.m"
      MR_Word base;
#line 284 "simplify_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 284 "simplify_info.m"
      *check_hlds__simplify__simplify_info__Info_12 = base;
#line 284 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__SimplifyTasks_11));
#line 284 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__ModuleInfo_7));
#line 284 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__simplify__simplify_info__VarSet_15));
#line 284 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__simplify__simplify_info__VarTypes_16));
#line 284 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__simplify__simplify_info__RttiVarMaps_18));
#line 284 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__simplify__simplify_info__FullyStrict_14));
#line 284 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__simplify__simplify_info__SubInfo_26));
#line 284 "simplify_info.m"
    }
#line 267 "simplify_info.m"
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
