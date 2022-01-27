/*
** Automatically generated from `simplify_info.m'
** by the Mercury compiler,
** version rotd-2014-11-20
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
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "hlds.mih"
#include "int.mih"
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
#include "parse_tree.prog_type_subst.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "check_hlds.simplify.simplify_tasks.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 135 "check_hlds.simplify.simplify_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__simplify_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 138 "check_hlds.simplify.simplify_info.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__simplify__simplify_info__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

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

#line 224 "simplify_info.m"
static void MR_CALL 
check_hlds__simplify__simplify_info____Compare____simplify_sub_info_0_0(
#line 224 "simplify_info.m"
  MR_Word * check_hlds__simplify__simplify_info__HeadVar__1_1,
#line 224 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__HeadVar__2_2,
#line 224 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__HeadVar__3_3);

#line 224 "simplify_info.m"
static MR_bool MR_CALL 
check_hlds__simplify__simplify_info____Unify____simplify_sub_info_0_0(
#line 224 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__HeadVar__1_1,
#line 224 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__HeadVar__2_2);

#line 320 "simplify_info.m"
static void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_apply_substitutions_and_duplicate_5_p_0_1(
#line 320 "simplify_info.m"
  MR_Box check_hlds__simplify__simplify_info__closure_arg,
#line 320 "simplify_info.m"
  MR_Box check_hlds__simplify__simplify_info__wrapper_arg_1,
#line 320 "simplify_info.m"
  MR_Box * check_hlds__simplify__simplify_info__wrapper_arg_2);


static /* final */ const MR_Box check_hlds__simplify__simplify_info_scalar_common_1[8][2];

static /* final */ const MR_Box check_hlds__simplify__simplify_info_scalar_common_2[1][6];




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

static /* final */ const MR_Box check_hlds__simplify__simplify_info_scalar_common_2[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__simplify__simplify_info__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
};



#include "array.mh"
#include "array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"



#line 435 "check_hlds.simplify.simplify_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__simplify_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 443 "check_hlds.simplify.simplify_info.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__simplify__simplify_info__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &check_hlds__simplify__simplify_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 452 "check_hlds.simplify.simplify_info.c"
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

#line 467 "check_hlds.simplify.simplify_info.c"
static const MR_PseudoTypeInfo check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__field_types_innermost_proc_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0
};

#line 472 "check_hlds.simplify.simplify_info.c"
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

#line 487 "check_hlds.simplify.simplify_info.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_stag_ordered_innermost_proc_0_0[1] = {
  &check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_functor_desc_innermost_proc_0_0
};

#line 492 "check_hlds.simplify.simplify_info.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_stag_ordered_innermost_proc_0_1[1] = {
  &check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_functor_desc_innermost_proc_0_1
};

#line 497 "check_hlds.simplify.simplify_info.c"
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

#line 511 "check_hlds.simplify.simplify_info.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_name_ordered_innermost_proc_0[2] = {
  &check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_functor_desc_innermost_proc_0_1,
  &check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_functor_desc_innermost_proc_0_0
};

#line 517 "check_hlds.simplify.simplify_info.c"
static const MR_Integer check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__functor_number_map_innermost_proc_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 523 "check_hlds.simplify.simplify_info.c"
const MR_TypeCtorInfo_Struct check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__type_ctor_info_innermost_proc_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__simplify__simplify_info____Unify____innermost_proc_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__simplify_info____Compare____innermost_proc_0_0_10001)),
  (MR_String) "check_hlds.simplify.simplify_info",
  (MR_String) "innermost_proc",
  {
    check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_name_ordered_innermost_proc_0
  },
  {
    check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_ptag_ordered_innermost_proc_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__functor_number_map_innermost_proc_0
};

#line 544 "check_hlds.simplify.simplify_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__simplify_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 552 "check_hlds.simplify.simplify_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__simplify_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 560 "check_hlds.simplify.simplify_info.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__simplify__simplify_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &check_hlds__simplify__simplify_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 569 "check_hlds.simplify.simplify_info.c"
static const MR_PseudoTypeInfo check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__field_types_simplify_info_0_0[7] = {
  (MR_PseudoTypeInfo) &check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__type_ctor_info_simplify_tasks_0,
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__simplify_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__simplify_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__type_ctor_info_simplify_sub_info_0
};

#line 580 "check_hlds.simplify.simplify_info.c"
static const MR_ConstString check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__field_names_simplify_info_0_0[7] = {
  (MR_String) "simp_simplify_tasks",
  (MR_String) "simp_module_info",
  (MR_String) "simp_varset",
  (MR_String) "simp_vartypes",
  (MR_String) "simp_rtti_varmaps",
  (MR_String) "simp_fully_strict",
  (MR_String) "simp_sub_info"
};

#line 591 "check_hlds.simplify.simplify_info.c"
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

#line 606 "check_hlds.simplify.simplify_info.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_stag_ordered_simplify_info_0_0[1] = {
  &check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_functor_desc_simplify_info_0_0
};

#line 611 "check_hlds.simplify.simplify_info.c"
static const MR_DuPtagLayout check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_ptag_ordered_simplify_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_stag_ordered_simplify_info_0_0
  }
};

#line 620 "check_hlds.simplify.simplify_info.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_name_ordered_simplify_info_0[1] = {
  &check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_functor_desc_simplify_info_0_0
};

#line 625 "check_hlds.simplify.simplify_info.c"
static const MR_Integer check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__functor_number_map_simplify_info_0[1] = {
  (MR_Integer) 0
};

#line 630 "check_hlds.simplify.simplify_info.c"
const MR_TypeCtorInfo_Struct check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__type_ctor_info_simplify_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__simplify__simplify_info____Unify____simplify_info_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__simplify_info____Compare____simplify_info_0_0_10001)),
  (MR_String) "check_hlds.simplify.simplify_info",
  (MR_String) "simplify_info",
  {
    check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_name_ordered_simplify_info_0
  },
  {
    check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_ptag_ordered_simplify_info_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__functor_number_map_simplify_info_0
};

#line 651 "check_hlds.simplify.simplify_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__simplify_info__maybe__ti_maybe_1check_hlds__simplify__simplify_info__type_ctor_info_innermost_proc_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__type_ctor_info_innermost_proc_0
  }
};

#line 659 "check_hlds.simplify.simplify_info.c"
static const MR_PseudoTypeInfo check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__field_types_simplify_nested_context_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__simplify_info__maybe__ti_maybe_1check_hlds__simplify__simplify_info__type_ctor_info_innermost_proc_0
};

#line 666 "check_hlds.simplify.simplify_info.c"
static const MR_ConstString check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__field_names_simplify_nested_context_0_0[3] = {
  (MR_String) "snc_inside_dupl_for_switch",
  (MR_String) "snc_num_enclosing_lambdas",
  (MR_String) "snc_proc_is_model_non"
};

#line 673 "check_hlds.simplify.simplify_info.c"
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

#line 688 "check_hlds.simplify.simplify_info.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_stag_ordered_simplify_nested_context_0_0[1] = {
  &check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_functor_desc_simplify_nested_context_0_0
};

#line 693 "check_hlds.simplify.simplify_info.c"
static const MR_DuPtagLayout check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_ptag_ordered_simplify_nested_context_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_stag_ordered_simplify_nested_context_0_0
  }
};

#line 702 "check_hlds.simplify.simplify_info.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_name_ordered_simplify_nested_context_0[1] = {
  &check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_functor_desc_simplify_nested_context_0_0
};

#line 707 "check_hlds.simplify.simplify_info.c"
static const MR_Integer check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__functor_number_map_simplify_nested_context_0[1] = {
  (MR_Integer) 0
};

#line 712 "check_hlds.simplify.simplify_info.c"
const MR_TypeCtorInfo_Struct check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__type_ctor_info_simplify_nested_context_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__simplify__simplify_info____Unify____simplify_nested_context_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__simplify_info____Compare____simplify_nested_context_0_0_10001)),
  (MR_String) "check_hlds.simplify.simplify_info",
  (MR_String) "simplify_nested_context",
  {
    check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_name_ordered_simplify_nested_context_0
  },
  {
    check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_ptag_ordered_simplify_nested_context_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__functor_number_map_simplify_nested_context_0
};

#line 733 "check_hlds.simplify.simplify_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__simplify_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

#line 741 "check_hlds.simplify.simplify_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__simplify_info__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__simplify__simplify_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 749 "check_hlds.simplify.simplify_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__simplify_info__list__ti_list_1list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__simplify__simplify_info__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 757 "check_hlds.simplify.simplify_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__simplify_info__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 765 "check_hlds.simplify.simplify_info.c"
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

#line 780 "check_hlds.simplify.simplify_info.c"
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

#line 795 "check_hlds.simplify.simplify_info.c"
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

#line 854 "check_hlds.simplify.simplify_info.c"
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

#line 869 "check_hlds.simplify.simplify_info.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_stag_ordered_simplify_sub_info_0_0[1] = {
  &check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_functor_desc_simplify_sub_info_0_0
};

#line 874 "check_hlds.simplify.simplify_info.c"
static const MR_DuPtagLayout check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_ptag_ordered_simplify_sub_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_stag_ordered_simplify_sub_info_0_0
  }
};

#line 883 "check_hlds.simplify.simplify_info.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_name_ordered_simplify_sub_info_0[1] = {
  &check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_functor_desc_simplify_sub_info_0_0
};

#line 888 "check_hlds.simplify.simplify_info.c"
static const MR_Integer check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__functor_number_map_simplify_sub_info_0[1] = {
  (MR_Integer) 0
};

#line 893 "check_hlds.simplify.simplify_info.c"
const MR_TypeCtorInfo_Struct check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__type_ctor_info_simplify_sub_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__simplify__simplify_info____Unify____simplify_sub_info_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__simplify_info____Compare____simplify_sub_info_0_0_10001)),
  (MR_String) "check_hlds.simplify.simplify_info",
  (MR_String) "simplify_sub_info",
  {
    check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_name_ordered_simplify_sub_info_0
  },
  {
    check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_ptag_ordered_simplify_sub_info_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__functor_number_map_simplify_sub_info_0
};

#line 914 "check_hlds.simplify.simplify_info.c"
static MR_bool MR_CALL 
check_hlds__simplify__simplify_info____Unify____innermost_proc_0_0_10001(
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
      check_hlds__simplify__simplify_info__succeeded = check_hlds__simplify__simplify_info____Unify____innermost_proc_0_0(((MR_Word) check_hlds__simplify__simplify_info__wrapper_arg_1), ((MR_Word) check_hlds__simplify__simplify_info__wrapper_arg_2));
    }
#line 933 "check_hlds.simplify.simplify_info.c"
    return check_hlds__simplify__simplify_info__succeeded;
#line 935 "check_hlds.simplify.simplify_info.c"
  }
#line 937 "check_hlds.simplify.simplify_info.c"
}

#line 940 "check_hlds.simplify.simplify_info.c"
static void MR_CALL 
check_hlds__simplify__simplify_info____Compare____innermost_proc_0_0_10001(
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
      check_hlds__simplify__simplify_info____Compare____innermost_proc_0_0(&check_hlds__simplify__simplify_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__simplify__simplify_info__wrapper_arg_2), ((MR_Word) check_hlds__simplify__simplify_info__wrapper_arg_3));
    }
#line 961 "check_hlds.simplify.simplify_info.c"
    *check_hlds__simplify__simplify_info__wrapper_arg_1 = ((MR_Box) (check_hlds__simplify__simplify_info__conv0_HeadVar__1_1));
#line 963 "check_hlds.simplify.simplify_info.c"
  }
#line 965 "check_hlds.simplify.simplify_info.c"
}

#line 968 "check_hlds.simplify.simplify_info.c"
static MR_bool MR_CALL 
check_hlds__simplify__simplify_info____Unify____simplify_info_0_0_10001(
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
      check_hlds__simplify__simplify_info__succeeded = check_hlds__simplify__simplify_info____Unify____simplify_info_0_0(((MR_Word) check_hlds__simplify__simplify_info__wrapper_arg_1), ((MR_Word) check_hlds__simplify__simplify_info__wrapper_arg_2));
    }
#line 987 "check_hlds.simplify.simplify_info.c"
    return check_hlds__simplify__simplify_info__succeeded;
#line 989 "check_hlds.simplify.simplify_info.c"
  }
#line 991 "check_hlds.simplify.simplify_info.c"
}

#line 994 "check_hlds.simplify.simplify_info.c"
static void MR_CALL 
check_hlds__simplify__simplify_info____Compare____simplify_info_0_0_10001(
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
      check_hlds__simplify__simplify_info____Compare____simplify_info_0_0(&check_hlds__simplify__simplify_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__simplify__simplify_info__wrapper_arg_2), ((MR_Word) check_hlds__simplify__simplify_info__wrapper_arg_3));
    }
#line 1015 "check_hlds.simplify.simplify_info.c"
    *check_hlds__simplify__simplify_info__wrapper_arg_1 = ((MR_Box) (check_hlds__simplify__simplify_info__conv0_HeadVar__1_1));
#line 1017 "check_hlds.simplify.simplify_info.c"
  }
#line 1019 "check_hlds.simplify.simplify_info.c"
}

#line 1022 "check_hlds.simplify.simplify_info.c"
static MR_bool MR_CALL 
check_hlds__simplify__simplify_info____Unify____simplify_nested_context_0_0_10001(
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
      check_hlds__simplify__simplify_info__succeeded = check_hlds__simplify__simplify_info____Unify____simplify_nested_context_0_0(((MR_Word) check_hlds__simplify__simplify_info__wrapper_arg_1), ((MR_Word) check_hlds__simplify__simplify_info__wrapper_arg_2));
    }
#line 1041 "check_hlds.simplify.simplify_info.c"
    return check_hlds__simplify__simplify_info__succeeded;
#line 1043 "check_hlds.simplify.simplify_info.c"
  }
#line 1045 "check_hlds.simplify.simplify_info.c"
}

#line 1048 "check_hlds.simplify.simplify_info.c"
static void MR_CALL 
check_hlds__simplify__simplify_info____Compare____simplify_nested_context_0_0_10001(
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
      check_hlds__simplify__simplify_info____Compare____simplify_nested_context_0_0(&check_hlds__simplify__simplify_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__simplify__simplify_info__wrapper_arg_2), ((MR_Word) check_hlds__simplify__simplify_info__wrapper_arg_3));
    }
#line 1069 "check_hlds.simplify.simplify_info.c"
    *check_hlds__simplify__simplify_info__wrapper_arg_1 = ((MR_Box) (check_hlds__simplify__simplify_info__conv0_HeadVar__1_1));
#line 1071 "check_hlds.simplify.simplify_info.c"
  }
#line 1073 "check_hlds.simplify.simplify_info.c"
}

#line 1076 "check_hlds.simplify.simplify_info.c"
static MR_bool MR_CALL 
check_hlds__simplify__simplify_info____Unify____simplify_sub_info_0_0_10001(
#line 1079 "check_hlds.simplify.simplify_info.c"
  MR_Box check_hlds__simplify__simplify_info__wrapper_arg_1,
#line 1081 "check_hlds.simplify.simplify_info.c"
  MR_Box check_hlds__simplify__simplify_info__wrapper_arg_2)
#line 1083 "check_hlds.simplify.simplify_info.c"
{
#line 1085 "check_hlds.simplify.simplify_info.c"
  {
#line 1087 "check_hlds.simplify.simplify_info.c"
    MR_bool check_hlds__simplify__simplify_info__succeeded;

#line 1090 "check_hlds.simplify.simplify_info.c"
    {
#line 1092 "check_hlds.simplify.simplify_info.c"
      check_hlds__simplify__simplify_info__succeeded = check_hlds__simplify__simplify_info____Unify____simplify_sub_info_0_0(((MR_Word) check_hlds__simplify__simplify_info__wrapper_arg_1), ((MR_Word) check_hlds__simplify__simplify_info__wrapper_arg_2));
    }
#line 1095 "check_hlds.simplify.simplify_info.c"
    return check_hlds__simplify__simplify_info__succeeded;
#line 1097 "check_hlds.simplify.simplify_info.c"
  }
#line 1099 "check_hlds.simplify.simplify_info.c"
}

#line 1102 "check_hlds.simplify.simplify_info.c"
static void MR_CALL 
check_hlds__simplify__simplify_info____Compare____simplify_sub_info_0_0_10001(
#line 1105 "check_hlds.simplify.simplify_info.c"
  MR_Box * check_hlds__simplify__simplify_info__wrapper_arg_1,
#line 1107 "check_hlds.simplify.simplify_info.c"
  MR_Box check_hlds__simplify__simplify_info__wrapper_arg_2,
#line 1109 "check_hlds.simplify.simplify_info.c"
  MR_Box check_hlds__simplify__simplify_info__wrapper_arg_3)
#line 1111 "check_hlds.simplify.simplify_info.c"
{
#line 1113 "check_hlds.simplify.simplify_info.c"
  {
#line 1115 "check_hlds.simplify.simplify_info.c"
    MR_Word check_hlds__simplify__simplify_info__conv0_HeadVar__1_1;

#line 1118 "check_hlds.simplify.simplify_info.c"
    {
#line 1120 "check_hlds.simplify.simplify_info.c"
      check_hlds__simplify__simplify_info____Compare____simplify_sub_info_0_0(&check_hlds__simplify__simplify_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__simplify__simplify_info__wrapper_arg_2), ((MR_Word) check_hlds__simplify__simplify_info__wrapper_arg_3));
    }
#line 1123 "check_hlds.simplify.simplify_info.c"
    *check_hlds__simplify__simplify_info__wrapper_arg_1 = ((MR_Box) (check_hlds__simplify__simplify_info__conv0_HeadVar__1_1));
#line 1125 "check_hlds.simplify.simplify_info.c"
  }
#line 1127 "check_hlds.simplify.simplify_info.c"
}

#line 224 "simplify_info.m"
static void MR_CALL 
check_hlds__simplify__simplify_info____Compare____simplify_sub_info_0_0(
#line 224 "simplify_info.m"
  MR_Word * check_hlds__simplify__simplify_info__HeadVar__1_1,
#line 224 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__HeadVar__2_2,
#line 224 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__HeadVar__3_3)
#line 224 "simplify_info.m"
{
#line 224 "simplify_info.m"
  {
#line 224 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 224 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__CastX_36 = (MR_Integer) check_hlds__simplify__simplify_info__HeadVar__2_2;
#line 224 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__CastY_37 = (MR_Integer) check_hlds__simplify__simplify_info__HeadVar__3_3;

#line 224 "simplify_info.m"
    check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__CastX_36 == check_hlds__simplify__simplify_info__CastY_37);
#line 224 "simplify_info.m"
    if (check_hlds__simplify__simplify_info__succeeded)
#line 1154 "check_hlds.simplify.simplify_info.c"
      *check_hlds__simplify__simplify_info__HeadVar__1_1 = (MR_Integer) 0;
#line 224 "simplify_info.m"
    else
#line 224 "simplify_info.m"
      {
#line 224 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 0)));
#line 224 "simplify_info.m"
        MR_Integer check_hlds__simplify__simplify_info__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 1)));
#line 224 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 2)));
#line 224 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 3)));
#line 224 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 4)));
#line 224 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 5)))) & (MR_Integer) 1);
#line 224 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 224 "simplify_info.m"
        MR_Integer check_hlds__simplify__simplify_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 6)));
#line 224 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 224 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 224 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 224 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__3_3, (MR_Integer) 0)));
#line 224 "simplify_info.m"
        MR_Integer check_hlds__simplify__simplify_info__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__3_3, (MR_Integer) 1)));
#line 224 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__3_3, (MR_Integer) 2)));
#line 224 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__3_3, (MR_Integer) 3)));
#line 224 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__3_3, (MR_Integer) 4)));
#line 224 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_20_20 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__3_3, (MR_Integer) 5)))) & (MR_Integer) 1);
#line 224 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__3_3, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 224 "simplify_info.m"
        MR_Integer check_hlds__simplify__simplify_info__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__3_3, (MR_Integer) 6)));
#line 224 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_23_23 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__3_3, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 224 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__3_3, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 224 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__3_3, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 224 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_26_26;

#line 224 "simplify_info.m"
        {
#line 224 "simplify_info.m"
          hlds__hlds_pred____Compare____pred_id_0_0(&check_hlds__simplify__simplify_info__V_26_26, check_hlds__simplify__simplify_info__V_4_4, check_hlds__simplify__simplify_info__V_15_15);
        }
#line 1212 "check_hlds.simplify.simplify_info.c"
        check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_26_26 == (MR_Integer) 0);
#line 224 "simplify_info.m"
        check_hlds__simplify__simplify_info__succeeded = !(check_hlds__simplify__simplify_info__succeeded);
#line 224 "simplify_info.m"
        if (check_hlds__simplify__simplify_info__succeeded)
#line 224 "simplify_info.m"
          *check_hlds__simplify__simplify_info__HeadVar__1_1 = check_hlds__simplify__simplify_info__V_26_26;
#line 224 "simplify_info.m"
        else
#line 224 "simplify_info.m"
          {
#line 224 "simplify_info.m"
            MR_Word check_hlds__simplify__simplify_info__V_27_27;

#line 224 "simplify_info.m"
            {
#line 224 "simplify_info.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__simplify__simplify_info__V_27_27, check_hlds__simplify__simplify_info__V_5_5, check_hlds__simplify__simplify_info__V_16_16);
            }
#line 1232 "check_hlds.simplify.simplify_info.c"
            check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_27_27 == (MR_Integer) 0);
#line 224 "simplify_info.m"
            check_hlds__simplify__simplify_info__succeeded = !(check_hlds__simplify__simplify_info__succeeded);
#line 224 "simplify_info.m"
            if (check_hlds__simplify__simplify_info__succeeded)
#line 224 "simplify_info.m"
              *check_hlds__simplify__simplify_info__HeadVar__1_1 = check_hlds__simplify__simplify_info__V_27_27;
#line 224 "simplify_info.m"
            else
#line 224 "simplify_info.m"
              {
#line 224 "simplify_info.m"
                MR_Word check_hlds__simplify__simplify_info__V_28_28;

#line 224 "simplify_info.m"
                {
#line 224 "simplify_info.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__simplify_info_scalar_common_1[4], &check_hlds__simplify__simplify_info__V_28_28, ((MR_Box) (check_hlds__simplify__simplify_info__V_6_6)), ((MR_Box) (check_hlds__simplify__simplify_info__V_17_17)));
                }
#line 1252 "check_hlds.simplify.simplify_info.c"
                check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_28_28 == (MR_Integer) 0);
#line 224 "simplify_info.m"
                check_hlds__simplify__simplify_info__succeeded = !(check_hlds__simplify__simplify_info__succeeded);
#line 224 "simplify_info.m"
                if (check_hlds__simplify__simplify_info__succeeded)
#line 224 "simplify_info.m"
                  *check_hlds__simplify__simplify_info__HeadVar__1_1 = check_hlds__simplify__simplify_info__V_28_28;
#line 224 "simplify_info.m"
                else
#line 224 "simplify_info.m"
                  {
#line 224 "simplify_info.m"
                    MR_Word check_hlds__simplify__simplify_info__V_29_29;

#line 224 "simplify_info.m"
                    {
#line 224 "simplify_info.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__simplify_info_scalar_common_1[6], &check_hlds__simplify__simplify_info__V_29_29, ((MR_Box) (check_hlds__simplify__simplify_info__V_7_7)), ((MR_Box) (check_hlds__simplify__simplify_info__V_18_18)));
                    }
#line 1272 "check_hlds.simplify.simplify_info.c"
                    check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_29_29 == (MR_Integer) 0);
#line 224 "simplify_info.m"
                    check_hlds__simplify__simplify_info__succeeded = !(check_hlds__simplify__simplify_info__succeeded);
#line 224 "simplify_info.m"
                    if (check_hlds__simplify__simplify_info__succeeded)
#line 224 "simplify_info.m"
                      *check_hlds__simplify__simplify_info__HeadVar__1_1 = check_hlds__simplify__simplify_info__V_29_29;
#line 224 "simplify_info.m"
                    else
#line 224 "simplify_info.m"
                      {
#line 224 "simplify_info.m"
                        MR_Word check_hlds__simplify__simplify_info__V_30_30;

#line 224 "simplify_info.m"
                        {
#line 224 "simplify_info.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__simplify_info_scalar_common_1[7], &check_hlds__simplify__simplify_info__V_30_30, ((MR_Box) (check_hlds__simplify__simplify_info__V_8_8)), ((MR_Box) (check_hlds__simplify__simplify_info__V_19_19)));
                        }
#line 1292 "check_hlds.simplify.simplify_info.c"
                        check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_30_30 == (MR_Integer) 0);
#line 224 "simplify_info.m"
                        check_hlds__simplify__simplify_info__succeeded = !(check_hlds__simplify__simplify_info__succeeded);
#line 224 "simplify_info.m"
                        if (check_hlds__simplify__simplify_info__succeeded)
#line 224 "simplify_info.m"
                          *check_hlds__simplify__simplify_info__HeadVar__1_1 = check_hlds__simplify__simplify_info__V_30_30;
#line 224 "simplify_info.m"
                        else
#line 224 "simplify_info.m"
                          {
#line 224 "simplify_info.m"
                            MR_Word check_hlds__simplify__simplify_info__V_31_31;
#line 224 "simplify_info.m"
                            MR_Integer check_hlds__simplify__simplify_info__V_49_49 = (MR_Integer) check_hlds__simplify__simplify_info__V_9_9;
#line 224 "simplify_info.m"
                            MR_Integer check_hlds__simplify__simplify_info__V_50_50 = (MR_Integer) check_hlds__simplify__simplify_info__V_20_20;

#line 224 "simplify_info.m"
                            {
#line 224 "simplify_info.m"
                              mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__simplify__simplify_info__V_31_31, check_hlds__simplify__simplify_info__V_49_49, check_hlds__simplify__simplify_info__V_50_50);
                            }
#line 1316 "check_hlds.simplify.simplify_info.c"
                            check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_31_31 == (MR_Integer) 0);
#line 224 "simplify_info.m"
                            check_hlds__simplify__simplify_info__succeeded = !(check_hlds__simplify__simplify_info__succeeded);
#line 224 "simplify_info.m"
                            if (check_hlds__simplify__simplify_info__succeeded)
#line 224 "simplify_info.m"
                              *check_hlds__simplify__simplify_info__HeadVar__1_1 = check_hlds__simplify__simplify_info__V_31_31;
#line 224 "simplify_info.m"
                            else
#line 224 "simplify_info.m"
                              {
#line 224 "simplify_info.m"
                                MR_Word check_hlds__simplify__simplify_info__V_32_32;
#line 224 "simplify_info.m"
                                MR_Integer check_hlds__simplify__simplify_info__V_51_51 = (MR_Integer) check_hlds__simplify__simplify_info__V_10_10;
#line 224 "simplify_info.m"
                                MR_Integer check_hlds__simplify__simplify_info__V_52_52 = (MR_Integer) check_hlds__simplify__simplify_info__V_21_21;

#line 224 "simplify_info.m"
                                {
#line 224 "simplify_info.m"
                                  mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__simplify__simplify_info__V_32_32, check_hlds__simplify__simplify_info__V_51_51, check_hlds__simplify__simplify_info__V_52_52);
                                }
#line 1340 "check_hlds.simplify.simplify_info.c"
                                check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_32_32 == (MR_Integer) 0);
#line 224 "simplify_info.m"
                                check_hlds__simplify__simplify_info__succeeded = !(check_hlds__simplify__simplify_info__succeeded);
#line 224 "simplify_info.m"
                                if (check_hlds__simplify__simplify_info__succeeded)
#line 224 "simplify_info.m"
                                  *check_hlds__simplify__simplify_info__HeadVar__1_1 = check_hlds__simplify__simplify_info__V_32_32;
#line 224 "simplify_info.m"
                                else
#line 224 "simplify_info.m"
                                  {
#line 224 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__V_33_33;

#line 224 "simplify_info.m"
                                    {
#line 224 "simplify_info.m"
                                      mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__simplify__simplify_info__V_33_33, check_hlds__simplify__simplify_info__V_11_11, check_hlds__simplify__simplify_info__V_22_22);
                                    }
#line 1360 "check_hlds.simplify.simplify_info.c"
                                    check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_33_33 == (MR_Integer) 0);
#line 224 "simplify_info.m"
                                    check_hlds__simplify__simplify_info__succeeded = !(check_hlds__simplify__simplify_info__succeeded);
#line 224 "simplify_info.m"
                                    if (check_hlds__simplify__simplify_info__succeeded)
#line 224 "simplify_info.m"
                                      *check_hlds__simplify__simplify_info__HeadVar__1_1 = check_hlds__simplify__simplify_info__V_33_33;
#line 224 "simplify_info.m"
                                    else
#line 224 "simplify_info.m"
                                      {
#line 224 "simplify_info.m"
                                        MR_Word check_hlds__simplify__simplify_info__V_34_34;
#line 224 "simplify_info.m"
                                        MR_Integer check_hlds__simplify__simplify_info__V_53_53 = (MR_Integer) check_hlds__simplify__simplify_info__V_12_12;
#line 224 "simplify_info.m"
                                        MR_Integer check_hlds__simplify__simplify_info__V_54_54 = (MR_Integer) check_hlds__simplify__simplify_info__V_23_23;

#line 224 "simplify_info.m"
                                        {
#line 224 "simplify_info.m"
                                          mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__simplify__simplify_info__V_34_34, check_hlds__simplify__simplify_info__V_53_53, check_hlds__simplify__simplify_info__V_54_54);
                                        }
#line 1384 "check_hlds.simplify.simplify_info.c"
                                        check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_34_34 == (MR_Integer) 0);
#line 224 "simplify_info.m"
                                        check_hlds__simplify__simplify_info__succeeded = !(check_hlds__simplify__simplify_info__succeeded);
#line 224 "simplify_info.m"
                                        if (check_hlds__simplify__simplify_info__succeeded)
#line 224 "simplify_info.m"
                                          *check_hlds__simplify__simplify_info__HeadVar__1_1 = check_hlds__simplify__simplify_info__V_34_34;
#line 224 "simplify_info.m"
                                        else
#line 224 "simplify_info.m"
                                          {
#line 224 "simplify_info.m"
                                            MR_Word check_hlds__simplify__simplify_info__V_35_35;
#line 224 "simplify_info.m"
                                            MR_Integer check_hlds__simplify__simplify_info__V_55_55 = (MR_Integer) check_hlds__simplify__simplify_info__V_13_13;
#line 224 "simplify_info.m"
                                            MR_Integer check_hlds__simplify__simplify_info__V_56_56 = (MR_Integer) check_hlds__simplify__simplify_info__V_24_24;

#line 224 "simplify_info.m"
                                            {
#line 224 "simplify_info.m"
                                              mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__simplify__simplify_info__V_35_35, check_hlds__simplify__simplify_info__V_55_55, check_hlds__simplify__simplify_info__V_56_56);
                                            }
#line 1408 "check_hlds.simplify.simplify_info.c"
                                            check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_35_35 == (MR_Integer) 0);
#line 224 "simplify_info.m"
                                            check_hlds__simplify__simplify_info__succeeded = !(check_hlds__simplify__simplify_info__succeeded);
#line 224 "simplify_info.m"
                                            if (check_hlds__simplify__simplify_info__succeeded)
#line 224 "simplify_info.m"
                                              *check_hlds__simplify__simplify_info__HeadVar__1_1 = check_hlds__simplify__simplify_info__V_35_35;
#line 224 "simplify_info.m"
                                            else
#line 224 "simplify_info.m"
                                              {
#line 224 "simplify_info.m"
                                                MR_Integer check_hlds__simplify__simplify_info__V_57_57 = (MR_Integer) check_hlds__simplify__simplify_info__V_14_14;
#line 224 "simplify_info.m"
                                                MR_Integer check_hlds__simplify__simplify_info__V_58_58 = (MR_Integer) check_hlds__simplify__simplify_info__V_25_25;

#line 224 "simplify_info.m"
                                                {
#line 224 "simplify_info.m"
                                                  mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__simplify__simplify_info__HeadVar__1_1, check_hlds__simplify__simplify_info__V_57_57, check_hlds__simplify__simplify_info__V_58_58);
#line 224 "simplify_info.m"
                                                  return;
                                                }
#line 224 "simplify_info.m"
                                              }
#line 224 "simplify_info.m"
                                          }
#line 224 "simplify_info.m"
                                      }
#line 224 "simplify_info.m"
                                  }
#line 224 "simplify_info.m"
                              }
#line 224 "simplify_info.m"
                          }
#line 224 "simplify_info.m"
                      }
#line 224 "simplify_info.m"
                  }
#line 224 "simplify_info.m"
              }
#line 224 "simplify_info.m"
          }
#line 224 "simplify_info.m"
      }
#line 224 "simplify_info.m"
  }
#line 224 "simplify_info.m"
}

#line 224 "simplify_info.m"
static MR_bool MR_CALL 
check_hlds__simplify__simplify_info____Unify____simplify_sub_info_0_0(
#line 224 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__HeadVar__1_1,
#line 224 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__HeadVar__2_2)
#line 224 "simplify_info.m"
{
#line 224 "simplify_info.m"
  {
#line 224 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 224 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__CastX_25 = (MR_Integer) check_hlds__simplify__simplify_info__HeadVar__1_1;
#line 224 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__CastY_26 = (MR_Integer) check_hlds__simplify__simplify_info__HeadVar__2_2;

#line 224 "simplify_info.m"
    check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__CastX_25 == check_hlds__simplify__simplify_info__CastY_26);
#line 224 "simplify_info.m"
    if (check_hlds__simplify__simplify_info__succeeded)
#line 224 "simplify_info.m"
      check_hlds__simplify__simplify_info__succeeded = MR_TRUE;
#line 224 "simplify_info.m"
    else
#line 224 "simplify_info.m"
      {
#line 224 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__TypeInfo_29_29;
#line 224 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__TypeInfo_30_30;
#line 224 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__TypeInfo_31_31;
#line 224 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__1_1, (MR_Integer) 0)));
#line 224 "simplify_info.m"
        MR_Integer check_hlds__simplify__simplify_info__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__1_1, (MR_Integer) 1)));
#line 224 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__1_1, (MR_Integer) 2)));
#line 224 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__1_1, (MR_Integer) 3)));
#line 224 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__1_1, (MR_Integer) 4)));
#line 224 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_8_8 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__1_1, (MR_Integer) 5)))) & (MR_Integer) 1);
#line 224 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__1_1, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 224 "simplify_info.m"
        MR_Integer check_hlds__simplify__simplify_info__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__1_1, (MR_Integer) 6)));
#line 224 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__1_1, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 224 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__1_1, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 224 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__1_1, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 224 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 0)));
#line 224 "simplify_info.m"
        MR_Integer check_hlds__simplify__simplify_info__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 1)));
#line 224 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 2)));
#line 224 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 3)));
#line 224 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 4)));
#line 224 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_19_19 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 5)))) & (MR_Integer) 1);
#line 224 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 224 "simplify_info.m"
        MR_Integer check_hlds__simplify__simplify_info__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 6)));
#line 224 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_22_22 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 224 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 224 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);

#line 1538 "check_hlds.simplify.simplify_info.c"
        {
#line 1540 "check_hlds.simplify.simplify_info.c"
          check_hlds__simplify__simplify_info__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(check_hlds__simplify__simplify_info__V_3_3, check_hlds__simplify__simplify_info__V_14_14);
        }
#line 224 "simplify_info.m"
        if (check_hlds__simplify__simplify_info__succeeded)
#line 224 "simplify_info.m"
          {
#line 1547 "check_hlds.simplify.simplify_info.c"
            check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_4_4 == check_hlds__simplify__simplify_info__V_15_15);
#line 224 "simplify_info.m"
            if (check_hlds__simplify__simplify_info__succeeded)
#line 224 "simplify_info.m"
              {
#line 1553 "check_hlds.simplify.simplify_info.c"
                check_hlds__simplify__simplify_info__TypeInfo_29_29 = (MR_Word) &check_hlds__simplify__simplify_info_scalar_common_1[4];
#line 1555 "check_hlds.simplify.simplify_info.c"
                {
#line 1557 "check_hlds.simplify.simplify_info.c"
                  check_hlds__simplify__simplify_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__simplify_info__TypeInfo_29_29, ((MR_Box) (check_hlds__simplify__simplify_info__V_5_5)), ((MR_Box) (check_hlds__simplify__simplify_info__V_16_16)));
                }
#line 224 "simplify_info.m"
                if (check_hlds__simplify__simplify_info__succeeded)
#line 224 "simplify_info.m"
                  {
#line 1564 "check_hlds.simplify.simplify_info.c"
                    check_hlds__simplify__simplify_info__TypeInfo_30_30 = (MR_Word) &check_hlds__simplify__simplify_info_scalar_common_1[6];
#line 1566 "check_hlds.simplify.simplify_info.c"
                    {
#line 1568 "check_hlds.simplify.simplify_info.c"
                      check_hlds__simplify__simplify_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__simplify_info__TypeInfo_30_30, ((MR_Box) (check_hlds__simplify__simplify_info__V_6_6)), ((MR_Box) (check_hlds__simplify__simplify_info__V_17_17)));
                    }
#line 224 "simplify_info.m"
                    if (check_hlds__simplify__simplify_info__succeeded)
#line 224 "simplify_info.m"
                      {
#line 1575 "check_hlds.simplify.simplify_info.c"
                        check_hlds__simplify__simplify_info__TypeInfo_31_31 = (MR_Word) &check_hlds__simplify__simplify_info_scalar_common_1[7];
#line 1577 "check_hlds.simplify.simplify_info.c"
                        {
#line 1579 "check_hlds.simplify.simplify_info.c"
                          check_hlds__simplify__simplify_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__simplify_info__TypeInfo_31_31, ((MR_Box) (check_hlds__simplify__simplify_info__V_7_7)), ((MR_Box) (check_hlds__simplify__simplify_info__V_18_18)));
                        }
#line 224 "simplify_info.m"
                        if (check_hlds__simplify__simplify_info__succeeded)
#line 224 "simplify_info.m"
                          {
#line 1586 "check_hlds.simplify.simplify_info.c"
                            check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_8_8 == check_hlds__simplify__simplify_info__V_19_19);
#line 224 "simplify_info.m"
                            if (check_hlds__simplify__simplify_info__succeeded)
#line 224 "simplify_info.m"
                              {
#line 1592 "check_hlds.simplify.simplify_info.c"
                                check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_9_9 == check_hlds__simplify__simplify_info__V_20_20);
#line 224 "simplify_info.m"
                                if (check_hlds__simplify__simplify_info__succeeded)
#line 224 "simplify_info.m"
                                  {
#line 1598 "check_hlds.simplify.simplify_info.c"
                                    check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_10_10 == check_hlds__simplify__simplify_info__V_21_21);
#line 224 "simplify_info.m"
                                    if (check_hlds__simplify__simplify_info__succeeded)
#line 224 "simplify_info.m"
                                      {
#line 1604 "check_hlds.simplify.simplify_info.c"
                                        check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_11_11 == check_hlds__simplify__simplify_info__V_22_22);
#line 224 "simplify_info.m"
                                        if (check_hlds__simplify__simplify_info__succeeded)
#line 224 "simplify_info.m"
                                          {
#line 1610 "check_hlds.simplify.simplify_info.c"
                                            check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_12_12 == check_hlds__simplify__simplify_info__V_23_23);
#line 224 "simplify_info.m"
                                            if (check_hlds__simplify__simplify_info__succeeded)
#line 1614 "check_hlds.simplify.simplify_info.c"
                                              check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_13_13 == check_hlds__simplify__simplify_info__V_24_24);
#line 224 "simplify_info.m"
                                          }
#line 224 "simplify_info.m"
                                      }
#line 224 "simplify_info.m"
                                  }
#line 224 "simplify_info.m"
                              }
#line 224 "simplify_info.m"
                          }
#line 224 "simplify_info.m"
                      }
#line 224 "simplify_info.m"
                  }
#line 224 "simplify_info.m"
              }
#line 224 "simplify_info.m"
          }
#line 224 "simplify_info.m"
      }
#line 224 "simplify_info.m"
    return check_hlds__simplify__simplify_info__succeeded;
#line 224 "simplify_info.m"
  }
#line 224 "simplify_info.m"
}

#line 45 "simplify_info.m"
void MR_CALL 
check_hlds__simplify__simplify_info____Compare____simplify_nested_context_0_0(
#line 45 "simplify_info.m"
  MR_Word * check_hlds__simplify__simplify_info__HeadVar__1_1,
#line 45 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__HeadVar__2_2,
#line 45 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__HeadVar__3_3)
#line 45 "simplify_info.m"
{
#line 45 "simplify_info.m"
  {
#line 45 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 45 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__CastX_12 = (MR_Integer) check_hlds__simplify__simplify_info__HeadVar__2_2;
#line 45 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__CastY_13 = (MR_Integer) check_hlds__simplify__simplify_info__HeadVar__3_3;

#line 45 "simplify_info.m"
    check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__CastX_12 == check_hlds__simplify__simplify_info__CastY_13);
#line 45 "simplify_info.m"
    if (check_hlds__simplify__simplify_info__succeeded)
#line 1667 "check_hlds.simplify.simplify_info.c"
      *check_hlds__simplify__simplify_info__HeadVar__1_1 = (MR_Integer) 0;
#line 45 "simplify_info.m"
    else
#line 45 "simplify_info.m"
      {
#line 45 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 0)));
#line 45 "simplify_info.m"
        MR_Integer check_hlds__simplify__simplify_info__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 1)));
#line 45 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 2)));
#line 45 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__3_3, (MR_Integer) 0)));
#line 45 "simplify_info.m"
        MR_Integer check_hlds__simplify__simplify_info__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__3_3, (MR_Integer) 1)));
#line 45 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__3_3, (MR_Integer) 2)));
#line 45 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_10_10;
#line 45 "simplify_info.m"
        MR_Integer check_hlds__simplify__simplify_info__V_17_17 = (MR_Integer) check_hlds__simplify__simplify_info__V_4_4;
#line 45 "simplify_info.m"
        MR_Integer check_hlds__simplify__simplify_info__V_18_18 = (MR_Integer) check_hlds__simplify__simplify_info__V_7_7;

#line 45 "simplify_info.m"
        {
#line 45 "simplify_info.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__simplify__simplify_info__V_10_10, check_hlds__simplify__simplify_info__V_17_17, check_hlds__simplify__simplify_info__V_18_18);
        }
#line 1697 "check_hlds.simplify.simplify_info.c"
        check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_10_10 == (MR_Integer) 0);
#line 45 "simplify_info.m"
        check_hlds__simplify__simplify_info__succeeded = !(check_hlds__simplify__simplify_info__succeeded);
#line 45 "simplify_info.m"
        if (check_hlds__simplify__simplify_info__succeeded)
#line 45 "simplify_info.m"
          *check_hlds__simplify__simplify_info__HeadVar__1_1 = check_hlds__simplify__simplify_info__V_10_10;
#line 45 "simplify_info.m"
        else
#line 45 "simplify_info.m"
          {
#line 45 "simplify_info.m"
            MR_Word check_hlds__simplify__simplify_info__V_11_11;

#line 45 "simplify_info.m"
            {
#line 45 "simplify_info.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__simplify__simplify_info__V_11_11, check_hlds__simplify__simplify_info__V_5_5, check_hlds__simplify__simplify_info__V_8_8);
            }
#line 1717 "check_hlds.simplify.simplify_info.c"
            check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_11_11 == (MR_Integer) 0);
#line 45 "simplify_info.m"
            check_hlds__simplify__simplify_info__succeeded = !(check_hlds__simplify__simplify_info__succeeded);
#line 45 "simplify_info.m"
            if (check_hlds__simplify__simplify_info__succeeded)
#line 45 "simplify_info.m"
              *check_hlds__simplify__simplify_info__HeadVar__1_1 = check_hlds__simplify__simplify_info__V_11_11;
#line 45 "simplify_info.m"
            else
#line 45 "simplify_info.m"
              {
#line 45 "simplify_info.m"
                {
#line 45 "simplify_info.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__simplify_info_scalar_common_1[3], check_hlds__simplify__simplify_info__HeadVar__1_1, ((MR_Box) (check_hlds__simplify__simplify_info__V_6_6)), ((MR_Box) (check_hlds__simplify__simplify_info__V_9_9)));
#line 45 "simplify_info.m"
                  return;
                }
#line 45 "simplify_info.m"
              }
#line 45 "simplify_info.m"
          }
#line 45 "simplify_info.m"
      }
#line 45 "simplify_info.m"
  }
#line 45 "simplify_info.m"
}

#line 45 "simplify_info.m"
MR_bool MR_CALL 
check_hlds__simplify__simplify_info____Unify____simplify_nested_context_0_0(
#line 45 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__HeadVar__1_1,
#line 45 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__HeadVar__2_2)
#line 45 "simplify_info.m"
{
#line 45 "simplify_info.m"
  {
#line 45 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 45 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__CastX_9 = (MR_Integer) check_hlds__simplify__simplify_info__HeadVar__1_1;
#line 45 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__CastY_10 = (MR_Integer) check_hlds__simplify__simplify_info__HeadVar__2_2;

#line 45 "simplify_info.m"
    check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__CastX_9 == check_hlds__simplify__simplify_info__CastY_10);
#line 45 "simplify_info.m"
    if (check_hlds__simplify__simplify_info__succeeded)
#line 45 "simplify_info.m"
      check_hlds__simplify__simplify_info__succeeded = MR_TRUE;
#line 45 "simplify_info.m"
    else
#line 45 "simplify_info.m"
      {
#line 45 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__TypeInfo_11_11;
#line 45 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__1_1, (MR_Integer) 0)));
#line 45 "simplify_info.m"
        MR_Integer check_hlds__simplify__simplify_info__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__1_1, (MR_Integer) 1)));
#line 45 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__1_1, (MR_Integer) 2)));
#line 45 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 0)));
#line 45 "simplify_info.m"
        MR_Integer check_hlds__simplify__simplify_info__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 1)));
#line 45 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 2)));

#line 1790 "check_hlds.simplify.simplify_info.c"
        check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_3_3 == check_hlds__simplify__simplify_info__V_6_6);
#line 45 "simplify_info.m"
        if (check_hlds__simplify__simplify_info__succeeded)
#line 45 "simplify_info.m"
          {
#line 1796 "check_hlds.simplify.simplify_info.c"
            check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_4_4 == check_hlds__simplify__simplify_info__V_7_7);
#line 45 "simplify_info.m"
            if (check_hlds__simplify__simplify_info__succeeded)
#line 45 "simplify_info.m"
              {
#line 1802 "check_hlds.simplify.simplify_info.c"
                check_hlds__simplify__simplify_info__TypeInfo_11_11 = (MR_Word) &check_hlds__simplify__simplify_info_scalar_common_1[3];
#line 1804 "check_hlds.simplify.simplify_info.c"
                {
#line 1806 "check_hlds.simplify.simplify_info.c"
                  return check_hlds__simplify__simplify_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__simplify_info__TypeInfo_11_11, ((MR_Box) (check_hlds__simplify__simplify_info__V_5_5)), ((MR_Box) (check_hlds__simplify__simplify_info__V_8_8)));
                }
#line 45 "simplify_info.m"
              }
#line 45 "simplify_info.m"
          }
#line 45 "simplify_info.m"
      }
#line 45 "simplify_info.m"
    return check_hlds__simplify__simplify_info__succeeded;
#line 45 "simplify_info.m"
  }
#line 45 "simplify_info.m"
}

#line 197 "simplify_info.m"
void MR_CALL 
check_hlds__simplify__simplify_info____Compare____simplify_info_0_0(
#line 197 "simplify_info.m"
  MR_Word * check_hlds__simplify__simplify_info__HeadVar__1_1,
#line 197 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__HeadVar__2_2,
#line 197 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__HeadVar__3_3)
#line 197 "simplify_info.m"
{
#line 197 "simplify_info.m"
  {
#line 197 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 197 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__CastX_24 = (MR_Integer) check_hlds__simplify__simplify_info__HeadVar__2_2;
#line 197 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__CastY_25 = (MR_Integer) check_hlds__simplify__simplify_info__HeadVar__3_3;

#line 197 "simplify_info.m"
    check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__CastX_24 == check_hlds__simplify__simplify_info__CastY_25);
#line 197 "simplify_info.m"
    if (check_hlds__simplify__simplify_info__succeeded)
#line 1846 "check_hlds.simplify.simplify_info.c"
      *check_hlds__simplify__simplify_info__HeadVar__1_1 = (MR_Integer) 0;
#line 197 "simplify_info.m"
    else
#line 197 "simplify_info.m"
      {
#line 197 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 0)));
#line 197 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 1)));
#line 197 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 2)));
#line 197 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 3)));
#line 197 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 4)));
#line 197 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 5)));
#line 197 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 6)));
#line 197 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__3_3, (MR_Integer) 0)));
#line 197 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__3_3, (MR_Integer) 1)));
#line 197 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__3_3, (MR_Integer) 2)));
#line 197 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__3_3, (MR_Integer) 3)));
#line 197 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__3_3, (MR_Integer) 4)));
#line 197 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__3_3, (MR_Integer) 5)));
#line 197 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__3_3, (MR_Integer) 6)));
#line 197 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_18_18;

#line 197 "simplify_info.m"
        {
#line 197 "simplify_info.m"
          check_hlds__simplify__simplify_tasks____Compare____simplify_tasks_0_0(&check_hlds__simplify__simplify_info__V_18_18, check_hlds__simplify__simplify_info__V_4_4, check_hlds__simplify__simplify_info__V_11_11);
        }
#line 1888 "check_hlds.simplify.simplify_info.c"
        check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_18_18 == (MR_Integer) 0);
#line 197 "simplify_info.m"
        check_hlds__simplify__simplify_info__succeeded = !(check_hlds__simplify__simplify_info__succeeded);
#line 197 "simplify_info.m"
        if (check_hlds__simplify__simplify_info__succeeded)
#line 197 "simplify_info.m"
          *check_hlds__simplify__simplify_info__HeadVar__1_1 = check_hlds__simplify__simplify_info__V_18_18;
#line 197 "simplify_info.m"
        else
#line 197 "simplify_info.m"
          {
#line 197 "simplify_info.m"
            MR_Word check_hlds__simplify__simplify_info__V_19_19;

#line 197 "simplify_info.m"
            {
#line 197 "simplify_info.m"
              hlds__hlds_module____Compare____module_info_0_0(&check_hlds__simplify__simplify_info__V_19_19, check_hlds__simplify__simplify_info__V_5_5, check_hlds__simplify__simplify_info__V_12_12);
            }
#line 1908 "check_hlds.simplify.simplify_info.c"
            check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_19_19 == (MR_Integer) 0);
#line 197 "simplify_info.m"
            check_hlds__simplify__simplify_info__succeeded = !(check_hlds__simplify__simplify_info__succeeded);
#line 197 "simplify_info.m"
            if (check_hlds__simplify__simplify_info__succeeded)
#line 197 "simplify_info.m"
              *check_hlds__simplify__simplify_info__HeadVar__1_1 = check_hlds__simplify__simplify_info__V_19_19;
#line 197 "simplify_info.m"
            else
#line 197 "simplify_info.m"
              {
#line 197 "simplify_info.m"
                MR_Word check_hlds__simplify__simplify_info__V_20_20;

#line 197 "simplify_info.m"
                {
#line 197 "simplify_info.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__simplify_info_scalar_common_1[2], &check_hlds__simplify__simplify_info__V_20_20, ((MR_Box) (check_hlds__simplify__simplify_info__V_6_6)), ((MR_Box) (check_hlds__simplify__simplify_info__V_13_13)));
                }
#line 1928 "check_hlds.simplify.simplify_info.c"
                check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_20_20 == (MR_Integer) 0);
#line 197 "simplify_info.m"
                check_hlds__simplify__simplify_info__succeeded = !(check_hlds__simplify__simplify_info__succeeded);
#line 197 "simplify_info.m"
                if (check_hlds__simplify__simplify_info__succeeded)
#line 197 "simplify_info.m"
                  *check_hlds__simplify__simplify_info__HeadVar__1_1 = check_hlds__simplify__simplify_info__V_20_20;
#line 197 "simplify_info.m"
                else
#line 197 "simplify_info.m"
                  {
#line 197 "simplify_info.m"
                    MR_Word check_hlds__simplify__simplify_info__V_21_21;

#line 197 "simplify_info.m"
                    {
#line 197 "simplify_info.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_vartypes_0, &check_hlds__simplify__simplify_info__V_21_21, ((MR_Box) (check_hlds__simplify__simplify_info__V_7_7)), ((MR_Box) (check_hlds__simplify__simplify_info__V_14_14)));
                    }
#line 1948 "check_hlds.simplify.simplify_info.c"
                    check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_21_21 == (MR_Integer) 0);
#line 197 "simplify_info.m"
                    check_hlds__simplify__simplify_info__succeeded = !(check_hlds__simplify__simplify_info__succeeded);
#line 197 "simplify_info.m"
                    if (check_hlds__simplify__simplify_info__succeeded)
#line 197 "simplify_info.m"
                      *check_hlds__simplify__simplify_info__HeadVar__1_1 = check_hlds__simplify__simplify_info__V_21_21;
#line 197 "simplify_info.m"
                    else
#line 197 "simplify_info.m"
                      {
#line 197 "simplify_info.m"
                        MR_Word check_hlds__simplify__simplify_info__V_22_22;

#line 197 "simplify_info.m"
                        {
#line 197 "simplify_info.m"
                          hlds__hlds_rtti____Compare____rtti_varmaps_0_0(&check_hlds__simplify__simplify_info__V_22_22, check_hlds__simplify__simplify_info__V_8_8, check_hlds__simplify__simplify_info__V_15_15);
                        }
#line 1968 "check_hlds.simplify.simplify_info.c"
                        check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_22_22 == (MR_Integer) 0);
#line 197 "simplify_info.m"
                        check_hlds__simplify__simplify_info__succeeded = !(check_hlds__simplify__simplify_info__succeeded);
#line 197 "simplify_info.m"
                        if (check_hlds__simplify__simplify_info__succeeded)
#line 197 "simplify_info.m"
                          *check_hlds__simplify__simplify_info__HeadVar__1_1 = check_hlds__simplify__simplify_info__V_22_22;
#line 197 "simplify_info.m"
                        else
#line 197 "simplify_info.m"
                          {
#line 197 "simplify_info.m"
                            MR_Word check_hlds__simplify__simplify_info__V_23_23;
#line 197 "simplify_info.m"
                            MR_Integer check_hlds__simplify__simplify_info__V_33_33 = (MR_Integer) check_hlds__simplify__simplify_info__V_9_9;
#line 197 "simplify_info.m"
                            MR_Integer check_hlds__simplify__simplify_info__V_34_34 = (MR_Integer) check_hlds__simplify__simplify_info__V_16_16;

#line 197 "simplify_info.m"
                            {
#line 197 "simplify_info.m"
                              mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__simplify__simplify_info__V_23_23, check_hlds__simplify__simplify_info__V_33_33, check_hlds__simplify__simplify_info__V_34_34);
                            }
#line 1992 "check_hlds.simplify.simplify_info.c"
                            check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_23_23 == (MR_Integer) 0);
#line 197 "simplify_info.m"
                            check_hlds__simplify__simplify_info__succeeded = !(check_hlds__simplify__simplify_info__succeeded);
#line 197 "simplify_info.m"
                            if (check_hlds__simplify__simplify_info__succeeded)
#line 197 "simplify_info.m"
                              *check_hlds__simplify__simplify_info__HeadVar__1_1 = check_hlds__simplify__simplify_info__V_23_23;
#line 197 "simplify_info.m"
                            else
#line 224 "simplify_info.m"
                              {
#line 224 "simplify_info.m"
                                MR_Integer check_hlds__simplify__simplify_info__CastX_67 = (MR_Integer) check_hlds__simplify__simplify_info__V_10_10;
#line 224 "simplify_info.m"
                                MR_Integer check_hlds__simplify__simplify_info__CastY_68 = (MR_Integer) check_hlds__simplify__simplify_info__V_17_17;

#line 224 "simplify_info.m"
                                check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__CastX_67 == check_hlds__simplify__simplify_info__CastY_68);
#line 224 "simplify_info.m"
                                if (check_hlds__simplify__simplify_info__succeeded)
#line 2013 "check_hlds.simplify.simplify_info.c"
                                  *check_hlds__simplify__simplify_info__HeadVar__1_1 = (MR_Integer) 0;
#line 224 "simplify_info.m"
                                else
#line 224 "simplify_info.m"
                                  {
#line 224 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, (MR_Integer) 0)));
#line 224 "simplify_info.m"
                                    MR_Integer check_hlds__simplify__simplify_info__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, (MR_Integer) 1)));
#line 224 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, (MR_Integer) 2)));
#line 224 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, (MR_Integer) 3)));
#line 224 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, (MR_Integer) 4)));
#line 224 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__V_40_40 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, (MR_Integer) 5)))) & (MR_Integer) 1);
#line 224 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 224 "simplify_info.m"
                                    MR_Integer check_hlds__simplify__simplify_info__V_42_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, (MR_Integer) 6)));
#line 224 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__V_43_43 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 224 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__V_44_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 224 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__V_45_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 224 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_17_17, (MR_Integer) 0)));
#line 224 "simplify_info.m"
                                    MR_Integer check_hlds__simplify__simplify_info__V_47_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_17_17, (MR_Integer) 1)));
#line 224 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_17_17, (MR_Integer) 2)));
#line 224 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_17_17, (MR_Integer) 3)));
#line 224 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_17_17, (MR_Integer) 4)));
#line 224 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__V_51_51 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_17_17, (MR_Integer) 5)))) & (MR_Integer) 1);
#line 224 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__V_52_52 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_17_17, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 224 "simplify_info.m"
                                    MR_Integer check_hlds__simplify__simplify_info__V_53_53 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_17_17, (MR_Integer) 6)));
#line 224 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__V_54_54 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_17_17, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 224 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__V_55_55 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_17_17, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 224 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__V_56_56 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_17_17, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 224 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__V_57_57;

#line 224 "simplify_info.m"
                                    {
#line 224 "simplify_info.m"
                                      hlds__hlds_pred____Compare____pred_id_0_0(&check_hlds__simplify__simplify_info__V_57_57, check_hlds__simplify__simplify_info__V_35_35, check_hlds__simplify__simplify_info__V_46_46);
                                    }
#line 2071 "check_hlds.simplify.simplify_info.c"
                                    check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_57_57 == (MR_Integer) 0);
#line 224 "simplify_info.m"
                                    check_hlds__simplify__simplify_info__succeeded = !(check_hlds__simplify__simplify_info__succeeded);
#line 224 "simplify_info.m"
                                    if (check_hlds__simplify__simplify_info__succeeded)
#line 224 "simplify_info.m"
                                      *check_hlds__simplify__simplify_info__HeadVar__1_1 = check_hlds__simplify__simplify_info__V_57_57;
#line 224 "simplify_info.m"
                                    else
#line 224 "simplify_info.m"
                                      {
#line 224 "simplify_info.m"
                                        MR_Word check_hlds__simplify__simplify_info__V_58_58;

#line 224 "simplify_info.m"
                                        {
#line 224 "simplify_info.m"
                                          mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__simplify__simplify_info__V_58_58, check_hlds__simplify__simplify_info__V_36_36, check_hlds__simplify__simplify_info__V_47_47);
                                        }
#line 2091 "check_hlds.simplify.simplify_info.c"
                                        check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_58_58 == (MR_Integer) 0);
#line 224 "simplify_info.m"
                                        check_hlds__simplify__simplify_info__succeeded = !(check_hlds__simplify__simplify_info__succeeded);
#line 224 "simplify_info.m"
                                        if (check_hlds__simplify__simplify_info__succeeded)
#line 224 "simplify_info.m"
                                          *check_hlds__simplify__simplify_info__HeadVar__1_1 = check_hlds__simplify__simplify_info__V_58_58;
#line 224 "simplify_info.m"
                                        else
#line 224 "simplify_info.m"
                                          {
#line 224 "simplify_info.m"
                                            MR_Word check_hlds__simplify__simplify_info__V_59_59;

#line 224 "simplify_info.m"
                                            {
#line 224 "simplify_info.m"
                                              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__simplify_info_scalar_common_1[4], &check_hlds__simplify__simplify_info__V_59_59, ((MR_Box) (check_hlds__simplify__simplify_info__V_37_37)), ((MR_Box) (check_hlds__simplify__simplify_info__V_48_48)));
                                            }
#line 2111 "check_hlds.simplify.simplify_info.c"
                                            check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_59_59 == (MR_Integer) 0);
#line 224 "simplify_info.m"
                                            check_hlds__simplify__simplify_info__succeeded = !(check_hlds__simplify__simplify_info__succeeded);
#line 224 "simplify_info.m"
                                            if (check_hlds__simplify__simplify_info__succeeded)
#line 224 "simplify_info.m"
                                              *check_hlds__simplify__simplify_info__HeadVar__1_1 = check_hlds__simplify__simplify_info__V_59_59;
#line 224 "simplify_info.m"
                                            else
#line 224 "simplify_info.m"
                                              {
#line 224 "simplify_info.m"
                                                MR_Word check_hlds__simplify__simplify_info__V_60_60;

#line 224 "simplify_info.m"
                                                {
#line 224 "simplify_info.m"
                                                  mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__simplify_info_scalar_common_1[6], &check_hlds__simplify__simplify_info__V_60_60, ((MR_Box) (check_hlds__simplify__simplify_info__V_38_38)), ((MR_Box) (check_hlds__simplify__simplify_info__V_49_49)));
                                                }
#line 2131 "check_hlds.simplify.simplify_info.c"
                                                check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_60_60 == (MR_Integer) 0);
#line 224 "simplify_info.m"
                                                check_hlds__simplify__simplify_info__succeeded = !(check_hlds__simplify__simplify_info__succeeded);
#line 224 "simplify_info.m"
                                                if (check_hlds__simplify__simplify_info__succeeded)
#line 224 "simplify_info.m"
                                                  *check_hlds__simplify__simplify_info__HeadVar__1_1 = check_hlds__simplify__simplify_info__V_60_60;
#line 224 "simplify_info.m"
                                                else
#line 224 "simplify_info.m"
                                                  {
#line 224 "simplify_info.m"
                                                    MR_Word check_hlds__simplify__simplify_info__V_61_61;

#line 224 "simplify_info.m"
                                                    {
#line 224 "simplify_info.m"
                                                      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__simplify_info_scalar_common_1[7], &check_hlds__simplify__simplify_info__V_61_61, ((MR_Box) (check_hlds__simplify__simplify_info__V_39_39)), ((MR_Box) (check_hlds__simplify__simplify_info__V_50_50)));
                                                    }
#line 2151 "check_hlds.simplify.simplify_info.c"
                                                    check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_61_61 == (MR_Integer) 0);
#line 224 "simplify_info.m"
                                                    check_hlds__simplify__simplify_info__succeeded = !(check_hlds__simplify__simplify_info__succeeded);
#line 224 "simplify_info.m"
                                                    if (check_hlds__simplify__simplify_info__succeeded)
#line 224 "simplify_info.m"
                                                      *check_hlds__simplify__simplify_info__HeadVar__1_1 = check_hlds__simplify__simplify_info__V_61_61;
#line 224 "simplify_info.m"
                                                    else
#line 224 "simplify_info.m"
                                                      {
#line 224 "simplify_info.m"
                                                        MR_Word check_hlds__simplify__simplify_info__V_62_62;
#line 224 "simplify_info.m"
                                                        MR_Integer check_hlds__simplify__simplify_info__V_80_80 = (MR_Integer) check_hlds__simplify__simplify_info__V_40_40;
#line 224 "simplify_info.m"
                                                        MR_Integer check_hlds__simplify__simplify_info__V_81_81 = (MR_Integer) check_hlds__simplify__simplify_info__V_51_51;

#line 224 "simplify_info.m"
                                                        {
#line 224 "simplify_info.m"
                                                          mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__simplify__simplify_info__V_62_62, check_hlds__simplify__simplify_info__V_80_80, check_hlds__simplify__simplify_info__V_81_81);
                                                        }
#line 2175 "check_hlds.simplify.simplify_info.c"
                                                        check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_62_62 == (MR_Integer) 0);
#line 224 "simplify_info.m"
                                                        check_hlds__simplify__simplify_info__succeeded = !(check_hlds__simplify__simplify_info__succeeded);
#line 224 "simplify_info.m"
                                                        if (check_hlds__simplify__simplify_info__succeeded)
#line 224 "simplify_info.m"
                                                          *check_hlds__simplify__simplify_info__HeadVar__1_1 = check_hlds__simplify__simplify_info__V_62_62;
#line 224 "simplify_info.m"
                                                        else
#line 224 "simplify_info.m"
                                                          {
#line 224 "simplify_info.m"
                                                            MR_Word check_hlds__simplify__simplify_info__V_63_63;
#line 224 "simplify_info.m"
                                                            MR_Integer check_hlds__simplify__simplify_info__V_82_82 = (MR_Integer) check_hlds__simplify__simplify_info__V_41_41;
#line 224 "simplify_info.m"
                                                            MR_Integer check_hlds__simplify__simplify_info__V_83_83 = (MR_Integer) check_hlds__simplify__simplify_info__V_52_52;

#line 224 "simplify_info.m"
                                                            {
#line 224 "simplify_info.m"
                                                              mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__simplify__simplify_info__V_63_63, check_hlds__simplify__simplify_info__V_82_82, check_hlds__simplify__simplify_info__V_83_83);
                                                            }
#line 2199 "check_hlds.simplify.simplify_info.c"
                                                            check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_63_63 == (MR_Integer) 0);
#line 224 "simplify_info.m"
                                                            check_hlds__simplify__simplify_info__succeeded = !(check_hlds__simplify__simplify_info__succeeded);
#line 224 "simplify_info.m"
                                                            if (check_hlds__simplify__simplify_info__succeeded)
#line 224 "simplify_info.m"
                                                              *check_hlds__simplify__simplify_info__HeadVar__1_1 = check_hlds__simplify__simplify_info__V_63_63;
#line 224 "simplify_info.m"
                                                            else
#line 224 "simplify_info.m"
                                                              {
#line 224 "simplify_info.m"
                                                                MR_Word check_hlds__simplify__simplify_info__V_64_64;

#line 224 "simplify_info.m"
                                                                {
#line 224 "simplify_info.m"
                                                                  mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__simplify__simplify_info__V_64_64, check_hlds__simplify__simplify_info__V_42_42, check_hlds__simplify__simplify_info__V_53_53);
                                                                }
#line 2219 "check_hlds.simplify.simplify_info.c"
                                                                check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_64_64 == (MR_Integer) 0);
#line 224 "simplify_info.m"
                                                                check_hlds__simplify__simplify_info__succeeded = !(check_hlds__simplify__simplify_info__succeeded);
#line 224 "simplify_info.m"
                                                                if (check_hlds__simplify__simplify_info__succeeded)
#line 224 "simplify_info.m"
                                                                  *check_hlds__simplify__simplify_info__HeadVar__1_1 = check_hlds__simplify__simplify_info__V_64_64;
#line 224 "simplify_info.m"
                                                                else
#line 224 "simplify_info.m"
                                                                  {
#line 224 "simplify_info.m"
                                                                    MR_Word check_hlds__simplify__simplify_info__V_65_65;
#line 224 "simplify_info.m"
                                                                    MR_Integer check_hlds__simplify__simplify_info__V_84_84 = (MR_Integer) check_hlds__simplify__simplify_info__V_43_43;
#line 224 "simplify_info.m"
                                                                    MR_Integer check_hlds__simplify__simplify_info__V_85_85 = (MR_Integer) check_hlds__simplify__simplify_info__V_54_54;

#line 224 "simplify_info.m"
                                                                    {
#line 224 "simplify_info.m"
                                                                      mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__simplify__simplify_info__V_65_65, check_hlds__simplify__simplify_info__V_84_84, check_hlds__simplify__simplify_info__V_85_85);
                                                                    }
#line 2243 "check_hlds.simplify.simplify_info.c"
                                                                    check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_65_65 == (MR_Integer) 0);
#line 224 "simplify_info.m"
                                                                    check_hlds__simplify__simplify_info__succeeded = !(check_hlds__simplify__simplify_info__succeeded);
#line 224 "simplify_info.m"
                                                                    if (check_hlds__simplify__simplify_info__succeeded)
#line 224 "simplify_info.m"
                                                                      *check_hlds__simplify__simplify_info__HeadVar__1_1 = check_hlds__simplify__simplify_info__V_65_65;
#line 224 "simplify_info.m"
                                                                    else
#line 224 "simplify_info.m"
                                                                      {
#line 224 "simplify_info.m"
                                                                        MR_Word check_hlds__simplify__simplify_info__V_66_66;
#line 224 "simplify_info.m"
                                                                        MR_Integer check_hlds__simplify__simplify_info__V_86_86 = (MR_Integer) check_hlds__simplify__simplify_info__V_44_44;
#line 224 "simplify_info.m"
                                                                        MR_Integer check_hlds__simplify__simplify_info__V_87_87 = (MR_Integer) check_hlds__simplify__simplify_info__V_55_55;

#line 224 "simplify_info.m"
                                                                        {
#line 224 "simplify_info.m"
                                                                          mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__simplify__simplify_info__V_66_66, check_hlds__simplify__simplify_info__V_86_86, check_hlds__simplify__simplify_info__V_87_87);
                                                                        }
#line 2267 "check_hlds.simplify.simplify_info.c"
                                                                        check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_66_66 == (MR_Integer) 0);
#line 224 "simplify_info.m"
                                                                        check_hlds__simplify__simplify_info__succeeded = !(check_hlds__simplify__simplify_info__succeeded);
#line 224 "simplify_info.m"
                                                                        if (check_hlds__simplify__simplify_info__succeeded)
#line 224 "simplify_info.m"
                                                                          *check_hlds__simplify__simplify_info__HeadVar__1_1 = check_hlds__simplify__simplify_info__V_66_66;
#line 224 "simplify_info.m"
                                                                        else
#line 224 "simplify_info.m"
                                                                          {
#line 224 "simplify_info.m"
                                                                            MR_Integer check_hlds__simplify__simplify_info__V_88_88 = (MR_Integer) check_hlds__simplify__simplify_info__V_45_45;
#line 224 "simplify_info.m"
                                                                            MR_Integer check_hlds__simplify__simplify_info__V_89_89 = (MR_Integer) check_hlds__simplify__simplify_info__V_56_56;

#line 224 "simplify_info.m"
                                                                            {
#line 224 "simplify_info.m"
                                                                              mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__simplify__simplify_info__HeadVar__1_1, check_hlds__simplify__simplify_info__V_88_88, check_hlds__simplify__simplify_info__V_89_89);
#line 224 "simplify_info.m"
                                                                              return;
                                                                            }
#line 224 "simplify_info.m"
                                                                          }
#line 224 "simplify_info.m"
                                                                      }
#line 224 "simplify_info.m"
                                                                  }
#line 224 "simplify_info.m"
                                                              }
#line 224 "simplify_info.m"
                                                          }
#line 224 "simplify_info.m"
                                                      }
#line 224 "simplify_info.m"
                                                  }
#line 224 "simplify_info.m"
                                              }
#line 224 "simplify_info.m"
                                          }
#line 224 "simplify_info.m"
                                      }
#line 224 "simplify_info.m"
                                  }
#line 224 "simplify_info.m"
                              }
#line 197 "simplify_info.m"
                          }
#line 197 "simplify_info.m"
                      }
#line 197 "simplify_info.m"
                  }
#line 197 "simplify_info.m"
              }
#line 197 "simplify_info.m"
          }
#line 197 "simplify_info.m"
      }
#line 197 "simplify_info.m"
  }
#line 197 "simplify_info.m"
}

#line 197 "simplify_info.m"
MR_bool MR_CALL 
check_hlds__simplify__simplify_info____Unify____simplify_info_0_0(
#line 197 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__HeadVar__1_1,
#line 197 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__HeadVar__2_2)
#line 197 "simplify_info.m"
{
#line 197 "simplify_info.m"
  {
#line 197 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 197 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__CastX_17 = (MR_Integer) check_hlds__simplify__simplify_info__HeadVar__1_1;
#line 197 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__CastY_18 = (MR_Integer) check_hlds__simplify__simplify_info__HeadVar__2_2;

#line 197 "simplify_info.m"
    check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__CastX_17 == check_hlds__simplify__simplify_info__CastY_18);
#line 197 "simplify_info.m"
    if (check_hlds__simplify__simplify_info__succeeded)
#line 197 "simplify_info.m"
      check_hlds__simplify__simplify_info__succeeded = MR_TRUE;
#line 197 "simplify_info.m"
    else
#line 197 "simplify_info.m"
      {
#line 197 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__TypeInfo_21_21;
#line 197 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__TypeCtorInfo_22_22;
#line 197 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__1_1, (MR_Integer) 0)));
#line 197 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__1_1, (MR_Integer) 1)));
#line 197 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__1_1, (MR_Integer) 2)));
#line 197 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__1_1, (MR_Integer) 3)));
#line 197 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__1_1, (MR_Integer) 4)));
#line 197 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__1_1, (MR_Integer) 5)));
#line 197 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__1_1, (MR_Integer) 6)));
#line 197 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 0)));
#line 197 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 1)));
#line 197 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 2)));
#line 197 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 3)));
#line 197 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 4)));
#line 197 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 5)));
#line 197 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 6)));
#line 224 "simplify_info.m"
        MR_Integer check_hlds__simplify__simplify_info__CastX_46;
#line 224 "simplify_info.m"
        MR_Integer check_hlds__simplify__simplify_info__CastY_47;

#line 2397 "check_hlds.simplify.simplify_info.c"
        {
#line 2399 "check_hlds.simplify.simplify_info.c"
          check_hlds__simplify__simplify_info__succeeded = check_hlds__simplify__simplify_tasks____Unify____simplify_tasks_0_0(check_hlds__simplify__simplify_info__V_3_3, check_hlds__simplify__simplify_info__V_10_10);
        }
#line 197 "simplify_info.m"
        if (check_hlds__simplify__simplify_info__succeeded)
#line 197 "simplify_info.m"
          {
#line 2406 "check_hlds.simplify.simplify_info.c"
            {
#line 2408 "check_hlds.simplify.simplify_info.c"
              check_hlds__simplify__simplify_info__succeeded = hlds__hlds_module____Unify____module_info_0_0(check_hlds__simplify__simplify_info__V_4_4, check_hlds__simplify__simplify_info__V_11_11);
            }
#line 197 "simplify_info.m"
            if (check_hlds__simplify__simplify_info__succeeded)
#line 197 "simplify_info.m"
              {
#line 2415 "check_hlds.simplify.simplify_info.c"
                check_hlds__simplify__simplify_info__TypeInfo_21_21 = (MR_Word) &check_hlds__simplify__simplify_info_scalar_common_1[2];
#line 2417 "check_hlds.simplify.simplify_info.c"
                {
#line 2419 "check_hlds.simplify.simplify_info.c"
                  check_hlds__simplify__simplify_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__simplify_info__TypeInfo_21_21, ((MR_Box) (check_hlds__simplify__simplify_info__V_5_5)), ((MR_Box) (check_hlds__simplify__simplify_info__V_12_12)));
                }
#line 197 "simplify_info.m"
                if (check_hlds__simplify__simplify_info__succeeded)
#line 197 "simplify_info.m"
                  {
#line 2426 "check_hlds.simplify.simplify_info.c"
                    check_hlds__simplify__simplify_info__TypeCtorInfo_22_22 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_vartypes_0;
#line 2428 "check_hlds.simplify.simplify_info.c"
                    {
#line 2430 "check_hlds.simplify.simplify_info.c"
                      check_hlds__simplify__simplify_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__simplify_info__TypeCtorInfo_22_22, ((MR_Box) (check_hlds__simplify__simplify_info__V_6_6)), ((MR_Box) (check_hlds__simplify__simplify_info__V_13_13)));
                    }
#line 197 "simplify_info.m"
                    if (check_hlds__simplify__simplify_info__succeeded)
#line 197 "simplify_info.m"
                      {
#line 2437 "check_hlds.simplify.simplify_info.c"
                        {
#line 2439 "check_hlds.simplify.simplify_info.c"
                          check_hlds__simplify__simplify_info__succeeded = hlds__hlds_rtti____Unify____rtti_varmaps_0_0(check_hlds__simplify__simplify_info__V_7_7, check_hlds__simplify__simplify_info__V_14_14);
                        }
#line 197 "simplify_info.m"
                        if (check_hlds__simplify__simplify_info__succeeded)
#line 197 "simplify_info.m"
                          {
#line 2446 "check_hlds.simplify.simplify_info.c"
                            check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_8_8 == check_hlds__simplify__simplify_info__V_15_15);
#line 197 "simplify_info.m"
                            if (check_hlds__simplify__simplify_info__succeeded)
#line 197 "simplify_info.m"
                              {
#line 224 "simplify_info.m"
                                check_hlds__simplify__simplify_info__CastX_46 = (MR_Integer) check_hlds__simplify__simplify_info__V_9_9;
#line 224 "simplify_info.m"
                                check_hlds__simplify__simplify_info__CastY_47 = (MR_Integer) check_hlds__simplify__simplify_info__V_16_16;
#line 224 "simplify_info.m"
                                check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__CastX_46 == check_hlds__simplify__simplify_info__CastY_47);
#line 224 "simplify_info.m"
                                if (check_hlds__simplify__simplify_info__succeeded)
#line 224 "simplify_info.m"
                                  check_hlds__simplify__simplify_info__succeeded = MR_TRUE;
#line 224 "simplify_info.m"
                                else
#line 224 "simplify_info.m"
                                  {
#line 224 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__TypeInfo_29_50;
#line 224 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__TypeInfo_30_51;
#line 224 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__TypeInfo_31_52;
#line 224 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 0)));
#line 224 "simplify_info.m"
                                    MR_Integer check_hlds__simplify__simplify_info__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 1)));
#line 224 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 2)));
#line 224 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 3)));
#line 224 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 4)));
#line 224 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__V_29_29 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 5)))) & (MR_Integer) 1);
#line 224 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 224 "simplify_info.m"
                                    MR_Integer check_hlds__simplify__simplify_info__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 6)));
#line 224 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__V_32_32 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 224 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 224 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 224 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_16_16, (MR_Integer) 0)));
#line 224 "simplify_info.m"
                                    MR_Integer check_hlds__simplify__simplify_info__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_16_16, (MR_Integer) 1)));
#line 224 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_16_16, (MR_Integer) 2)));
#line 224 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_16_16, (MR_Integer) 3)));
#line 224 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_16_16, (MR_Integer) 4)));
#line 224 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__V_40_40 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_16_16, (MR_Integer) 5)))) & (MR_Integer) 1);
#line 224 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_16_16, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 224 "simplify_info.m"
                                    MR_Integer check_hlds__simplify__simplify_info__V_42_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_16_16, (MR_Integer) 6)));
#line 224 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__V_43_43 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_16_16, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 224 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__V_44_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_16_16, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 224 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__V_45_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_16_16, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);

#line 2517 "check_hlds.simplify.simplify_info.c"
                                    {
#line 2519 "check_hlds.simplify.simplify_info.c"
                                      check_hlds__simplify__simplify_info__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(check_hlds__simplify__simplify_info__V_24_24, check_hlds__simplify__simplify_info__V_35_35);
                                    }
#line 224 "simplify_info.m"
                                    if (check_hlds__simplify__simplify_info__succeeded)
#line 224 "simplify_info.m"
                                      {
#line 2526 "check_hlds.simplify.simplify_info.c"
                                        check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_25_25 == check_hlds__simplify__simplify_info__V_36_36);
#line 224 "simplify_info.m"
                                        if (check_hlds__simplify__simplify_info__succeeded)
#line 224 "simplify_info.m"
                                          {
#line 2532 "check_hlds.simplify.simplify_info.c"
                                            check_hlds__simplify__simplify_info__TypeInfo_29_50 = (MR_Word) &check_hlds__simplify__simplify_info_scalar_common_1[4];
#line 2534 "check_hlds.simplify.simplify_info.c"
                                            {
#line 2536 "check_hlds.simplify.simplify_info.c"
                                              check_hlds__simplify__simplify_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__simplify_info__TypeInfo_29_50, ((MR_Box) (check_hlds__simplify__simplify_info__V_26_26)), ((MR_Box) (check_hlds__simplify__simplify_info__V_37_37)));
                                            }
#line 224 "simplify_info.m"
                                            if (check_hlds__simplify__simplify_info__succeeded)
#line 224 "simplify_info.m"
                                              {
#line 2543 "check_hlds.simplify.simplify_info.c"
                                                check_hlds__simplify__simplify_info__TypeInfo_30_51 = (MR_Word) &check_hlds__simplify__simplify_info_scalar_common_1[6];
#line 2545 "check_hlds.simplify.simplify_info.c"
                                                {
#line 2547 "check_hlds.simplify.simplify_info.c"
                                                  check_hlds__simplify__simplify_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__simplify_info__TypeInfo_30_51, ((MR_Box) (check_hlds__simplify__simplify_info__V_27_27)), ((MR_Box) (check_hlds__simplify__simplify_info__V_38_38)));
                                                }
#line 224 "simplify_info.m"
                                                if (check_hlds__simplify__simplify_info__succeeded)
#line 224 "simplify_info.m"
                                                  {
#line 2554 "check_hlds.simplify.simplify_info.c"
                                                    check_hlds__simplify__simplify_info__TypeInfo_31_52 = (MR_Word) &check_hlds__simplify__simplify_info_scalar_common_1[7];
#line 2556 "check_hlds.simplify.simplify_info.c"
                                                    {
#line 2558 "check_hlds.simplify.simplify_info.c"
                                                      check_hlds__simplify__simplify_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__simplify_info__TypeInfo_31_52, ((MR_Box) (check_hlds__simplify__simplify_info__V_28_28)), ((MR_Box) (check_hlds__simplify__simplify_info__V_39_39)));
                                                    }
#line 224 "simplify_info.m"
                                                    if (check_hlds__simplify__simplify_info__succeeded)
#line 224 "simplify_info.m"
                                                      {
#line 2565 "check_hlds.simplify.simplify_info.c"
                                                        check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_29_29 == check_hlds__simplify__simplify_info__V_40_40);
#line 224 "simplify_info.m"
                                                        if (check_hlds__simplify__simplify_info__succeeded)
#line 224 "simplify_info.m"
                                                          {
#line 2571 "check_hlds.simplify.simplify_info.c"
                                                            check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_30_30 == check_hlds__simplify__simplify_info__V_41_41);
#line 224 "simplify_info.m"
                                                            if (check_hlds__simplify__simplify_info__succeeded)
#line 224 "simplify_info.m"
                                                              {
#line 2577 "check_hlds.simplify.simplify_info.c"
                                                                check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_31_31 == check_hlds__simplify__simplify_info__V_42_42);
#line 224 "simplify_info.m"
                                                                if (check_hlds__simplify__simplify_info__succeeded)
#line 224 "simplify_info.m"
                                                                  {
#line 2583 "check_hlds.simplify.simplify_info.c"
                                                                    check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_32_32 == check_hlds__simplify__simplify_info__V_43_43);
#line 224 "simplify_info.m"
                                                                    if (check_hlds__simplify__simplify_info__succeeded)
#line 224 "simplify_info.m"
                                                                      {
#line 2589 "check_hlds.simplify.simplify_info.c"
                                                                        check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_33_33 == check_hlds__simplify__simplify_info__V_44_44);
#line 224 "simplify_info.m"
                                                                        if (check_hlds__simplify__simplify_info__succeeded)
#line 2593 "check_hlds.simplify.simplify_info.c"
                                                                          check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_34_34 == check_hlds__simplify__simplify_info__V_45_45);
#line 224 "simplify_info.m"
                                                                      }
#line 224 "simplify_info.m"
                                                                  }
#line 224 "simplify_info.m"
                                                              }
#line 224 "simplify_info.m"
                                                          }
#line 224 "simplify_info.m"
                                                      }
#line 224 "simplify_info.m"
                                                  }
#line 224 "simplify_info.m"
                                              }
#line 224 "simplify_info.m"
                                          }
#line 224 "simplify_info.m"
                                      }
#line 224 "simplify_info.m"
                                  }
#line 197 "simplify_info.m"
                              }
#line 197 "simplify_info.m"
                          }
#line 197 "simplify_info.m"
                      }
#line 197 "simplify_info.m"
                  }
#line 197 "simplify_info.m"
              }
#line 197 "simplify_info.m"
          }
#line 197 "simplify_info.m"
      }
#line 197 "simplify_info.m"
    return check_hlds__simplify__simplify_info__succeeded;
#line 197 "simplify_info.m"
  }
#line 197 "simplify_info.m"
}

#line 37 "simplify_info.m"
void MR_CALL 
check_hlds__simplify__simplify_info____Compare____innermost_proc_0_0(
#line 37 "simplify_info.m"
  MR_Word * check_hlds__simplify__simplify_info__HeadVar__1_1,
#line 37 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__HeadVar__2_2,
#line 37 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__HeadVar__3_3)
#line 37 "simplify_info.m"
{
#line 37 "simplify_info.m"
  {
#line 37 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 37 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__CastX_8 = (MR_Integer) check_hlds__simplify__simplify_info__HeadVar__2_2;
#line 37 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__CastY_9 = (MR_Integer) check_hlds__simplify__simplify_info__HeadVar__3_3;

#line 37 "simplify_info.m"
    check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__CastX_8 == check_hlds__simplify__simplify_info__CastY_9);
#line 37 "simplify_info.m"
    if (check_hlds__simplify__simplify_info__succeeded)
#line 2660 "check_hlds.simplify.simplify_info.c"
      *check_hlds__simplify__simplify_info__HeadVar__1_1 = (MR_Integer) 0;
#line 37 "simplify_info.m"
    else
#line 37 "simplify_info.m"
      if ((check_hlds__simplify__simplify_info__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 37 "simplify_info.m"
        if ((check_hlds__simplify__simplify_info__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 37 "simplify_info.m"
          *check_hlds__simplify__simplify_info__HeadVar__1_1 = (MR_Integer) 0;
#line 37 "simplify_info.m"
        else
#line 2672 "check_hlds.simplify.simplify_info.c"
          *check_hlds__simplify__simplify_info__HeadVar__1_1 = (MR_Integer) 1;
#line 37 "simplify_info.m"
      else
#line 37 "simplify_info.m"
        {
#line 37 "simplify_info.m"
          MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 0)));

#line 37 "simplify_info.m"
          if ((check_hlds__simplify__simplify_info__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2683 "check_hlds.simplify.simplify_info.c"
            *check_hlds__simplify__simplify_info__HeadVar__1_1 = (MR_Integer) 2;
#line 37 "simplify_info.m"
          else
#line 37 "simplify_info.m"
            {
#line 37 "simplify_info.m"
              MR_Word check_hlds__simplify__simplify_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_info__HeadVar__3_3, (MR_Integer) 0)));

#line 37 "simplify_info.m"
              {
#line 37 "simplify_info.m"
                mercury__term____Compare____context_0_0(check_hlds__simplify__simplify_info__HeadVar__1_1, check_hlds__simplify__simplify_info__V_11_11, check_hlds__simplify__simplify_info__V_7_7);
#line 37 "simplify_info.m"
                return;
              }
#line 37 "simplify_info.m"
            }
#line 37 "simplify_info.m"
        }
#line 37 "simplify_info.m"
  }
#line 37 "simplify_info.m"
}

#line 37 "simplify_info.m"
MR_bool MR_CALL 
check_hlds__simplify__simplify_info____Unify____innermost_proc_0_0(
#line 37 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__HeadVar__1_1,
#line 37 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__HeadVar__2_2)
#line 37 "simplify_info.m"
{
#line 37 "simplify_info.m"
  {
#line 37 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 37 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__CastX_7 = (MR_Integer) check_hlds__simplify__simplify_info__HeadVar__1_1;
#line 37 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__CastY_8 = (MR_Integer) check_hlds__simplify__simplify_info__HeadVar__2_2;

#line 37 "simplify_info.m"
    check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__CastX_7 == check_hlds__simplify__simplify_info__CastY_8);
#line 37 "simplify_info.m"
    if (check_hlds__simplify__simplify_info__succeeded)
#line 37 "simplify_info.m"
      check_hlds__simplify__simplify_info__succeeded = MR_TRUE;
#line 37 "simplify_info.m"
    else
#line 37 "simplify_info.m"
      if ((check_hlds__simplify__simplify_info__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 37 "simplify_info.m"
        {
#line 37 "simplify_info.m"
          MR_Integer check_hlds__simplify__simplify_info__CastX_3 = (MR_Integer) check_hlds__simplify__simplify_info__HeadVar__1_1;
#line 37 "simplify_info.m"
          MR_Integer check_hlds__simplify__simplify_info__CastY_4 = (MR_Integer) check_hlds__simplify__simplify_info__HeadVar__2_2;

#line 37 "simplify_info.m"
          check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__CastY_4 == check_hlds__simplify__simplify_info__CastX_3);
#line 37 "simplify_info.m"
        }
#line 37 "simplify_info.m"
      else
#line 37 "simplify_info.m"
        {
#line 37 "simplify_info.m"
          MR_Word check_hlds__simplify__simplify_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_info__HeadVar__1_1, (MR_Integer) 0)));
#line 37 "simplify_info.m"
          MR_Word check_hlds__simplify__simplify_info__V_6_6;

#line 37 "simplify_info.m"
          check_hlds__simplify__simplify_info__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 37 "simplify_info.m"
          if (check_hlds__simplify__simplify_info__succeeded)
#line 37 "simplify_info.m"
            {
#line 37 "simplify_info.m"
              check_hlds__simplify__simplify_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 0)));
#line 2764 "check_hlds.simplify.simplify_info.c"
              {
#line 2766 "check_hlds.simplify.simplify_info.c"
                return check_hlds__simplify__simplify_info__succeeded = mercury__term____Unify____context_0_0(check_hlds__simplify__simplify_info__V_5_5, check_hlds__simplify__simplify_info__V_6_6);
              }
#line 37 "simplify_info.m"
            }
#line 37 "simplify_info.m"
        }
#line 37 "simplify_info.m"
    return check_hlds__simplify__simplify_info__succeeded;
#line 37 "simplify_info.m"
  }
#line 37 "simplify_info.m"
}

#line 178 "simplify_info.m"
MR_bool MR_CALL 
check_hlds__simplify__simplify_info__simplify_do_ignore_par_conjunctions_1_p_0(
#line 178 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__Info_2)
#line 178 "simplify_info.m"
{
#line 432 "simplify_info.m"
  {
#line 432 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 432 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__SimplifyTasks_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 0)));
#line 432 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_4_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 331 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 1)));
#line 331 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 2)));
#line 331 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 3)));
#line 331 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 4)));
#line 331 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 5)));
#line 331 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 6)));
#line 434 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_5_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 434 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 434 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 434 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 434 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 434 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 434 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 434 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 434 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 434 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 434 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 434 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 11)) & (MR_Integer) 1);

#line 434 "simplify_info.m"
    check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_4_4 == (MR_Integer) 1);
#line 432 "simplify_info.m"
    return check_hlds__simplify__simplify_info__succeeded;
#line 432 "simplify_info.m"
  }
#line 178 "simplify_info.m"
}

#line 177 "simplify_info.m"
MR_bool MR_CALL 
check_hlds__simplify__simplify_info__simplify_do_extra_common_struct_1_p_0(
#line 177 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__Info_2)
#line 177 "simplify_info.m"
{
#line 429 "simplify_info.m"
  {
#line 429 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 429 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__SimplifyTasks_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 0)));
#line 429 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_4_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 331 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 1)));
#line 331 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 2)));
#line 331 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 3)));
#line 331 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 4)));
#line 331 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 5)));
#line 331 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 6)));
#line 431 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_5_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 431 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 431 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 431 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 431 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 431 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 431 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 431 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 431 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 431 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 431 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 431 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 12)) & (MR_Integer) 1);

#line 431 "simplify_info.m"
    check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_4_4 == (MR_Integer) 1);
#line 429 "simplify_info.m"
    return check_hlds__simplify__simplify_info__succeeded;
#line 429 "simplify_info.m"
  }
#line 177 "simplify_info.m"
}

#line 176 "simplify_info.m"
MR_bool MR_CALL 
check_hlds__simplify__simplify_info__simplify_do_common_struct_1_p_0(
#line 176 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__Info_2)
#line 176 "simplify_info.m"
{
#line 426 "simplify_info.m"
  {
#line 426 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 426 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__SimplifyTasks_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 0)));
#line 426 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_4_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 331 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 1)));
#line 331 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 2)));
#line 331 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 3)));
#line 331 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 4)));
#line 331 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 5)));
#line 331 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 6)));
#line 428 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_5_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 428 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 428 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 428 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 428 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 428 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 428 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 428 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 428 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 428 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 428 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 428 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 12)) & (MR_Integer) 1);

#line 428 "simplify_info.m"
    check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_4_4 == (MR_Integer) 1);
#line 426 "simplify_info.m"
    return check_hlds__simplify__simplify_info__succeeded;
#line 426 "simplify_info.m"
  }
#line 176 "simplify_info.m"
}

#line 175 "simplify_info.m"
MR_bool MR_CALL 
check_hlds__simplify__simplify_info__simplify_do_const_prop_1_p_0(
#line 175 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__Info_2)
#line 175 "simplify_info.m"
{
#line 423 "simplify_info.m"
  {
#line 423 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 423 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__SimplifyTasks_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 0)));
#line 423 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_4_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 331 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 1)));
#line 331 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 2)));
#line 331 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 3)));
#line 331 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 4)));
#line 331 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 5)));
#line 331 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 6)));
#line 425 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_5_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 425 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 425 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 425 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 425 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 425 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 425 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 425 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 425 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 425 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 425 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 425 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 12)) & (MR_Integer) 1);

#line 425 "simplify_info.m"
    check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_4_4 == (MR_Integer) 1);
#line 423 "simplify_info.m"
    return check_hlds__simplify__simplify_info__succeeded;
#line 423 "simplify_info.m"
  }
#line 175 "simplify_info.m"
}

#line 174 "simplify_info.m"
MR_bool MR_CALL 
check_hlds__simplify__simplify_info__simplify_do_opt_duplicate_calls_1_p_0(
#line 174 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__Info_2)
#line 174 "simplify_info.m"
{
#line 420 "simplify_info.m"
  {
#line 420 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 420 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__SimplifyTasks_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 0)));
#line 420 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_4_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 331 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 1)));
#line 331 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 2)));
#line 331 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 3)));
#line 331 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 4)));
#line 331 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 5)));
#line 331 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 6)));
#line 422 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_5_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 422 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 422 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 422 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 422 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 422 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 422 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 422 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 422 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 422 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 422 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 422 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 12)) & (MR_Integer) 1);

#line 422 "simplify_info.m"
    check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_4_4 == (MR_Integer) 1);
#line 420 "simplify_info.m"
    return check_hlds__simplify__simplify_info__succeeded;
#line 420 "simplify_info.m"
  }
#line 174 "simplify_info.m"
}

#line 173 "simplify_info.m"
MR_bool MR_CALL 
check_hlds__simplify__simplify_info__simplify_do_elim_removable_scopes_1_p_0(
#line 173 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__Info_2)
#line 173 "simplify_info.m"
{
#line 417 "simplify_info.m"
  {
#line 417 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 417 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__SimplifyTasks_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 0)));
#line 417 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_4_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 331 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 1)));
#line 331 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 2)));
#line 331 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 3)));
#line 331 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 4)));
#line 331 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 5)));
#line 331 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 6)));
#line 419 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_5_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 419 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 419 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 419 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 419 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 419 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 419 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 419 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 419 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 419 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 419 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 419 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 12)) & (MR_Integer) 1);

#line 419 "simplify_info.m"
    check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_4_4 == (MR_Integer) 1);
#line 417 "simplify_info.m"
    return check_hlds__simplify__simplify_info__succeeded;
#line 417 "simplify_info.m"
  }
#line 173 "simplify_info.m"
}

#line 172 "simplify_info.m"
MR_bool MR_CALL 
check_hlds__simplify__simplify_info__simplify_do_excess_assign_1_p_0(
#line 172 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__Info_2)
#line 172 "simplify_info.m"
{
#line 414 "simplify_info.m"
  {
#line 414 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 414 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__SimplifyTasks_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 0)));
#line 414 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_4_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 331 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 1)));
#line 331 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 2)));
#line 331 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 3)));
#line 331 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 4)));
#line 331 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 5)));
#line 331 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 6)));
#line 416 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_5_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 416 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 416 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 416 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 416 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 416 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 416 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 416 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 416 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 416 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 416 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 416 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 12)) & (MR_Integer) 1);

#line 416 "simplify_info.m"
    check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_4_4 == (MR_Integer) 1);
#line 414 "simplify_info.m"
    return check_hlds__simplify__simplify_info__succeeded;
#line 414 "simplify_info.m"
  }
#line 172 "simplify_info.m"
}

#line 171 "simplify_info.m"
MR_bool MR_CALL 
check_hlds__simplify__simplify_info__simplify_do_after_front_end_1_p_0(
#line 171 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__Info_2)
#line 171 "simplify_info.m"
{
#line 411 "simplify_info.m"
  {
#line 411 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 411 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__SimplifyTasks_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 0)));
#line 411 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_4_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 331 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 1)));
#line 331 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 2)));
#line 331 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 3)));
#line 331 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 4)));
#line 331 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 5)));
#line 331 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 6)));
#line 413 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_5_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 413 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 413 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 413 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 413 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 413 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 413 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 413 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 413 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 413 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 413 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 413 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 12)) & (MR_Integer) 1);

#line 413 "simplify_info.m"
    check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_4_4 == (MR_Integer) 1);
#line 411 "simplify_info.m"
    return check_hlds__simplify__simplify_info__succeeded;
#line 411 "simplify_info.m"
  }
#line 171 "simplify_info.m"
}

#line 170 "simplify_info.m"
MR_bool MR_CALL 
check_hlds__simplify__simplify_info__simplify_do_mark_code_model_changes_1_p_0(
#line 170 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__Info_2)
#line 170 "simplify_info.m"
{
#line 408 "simplify_info.m"
  {
#line 408 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 408 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__SimplifyTasks_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 0)));
#line 408 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_4_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 331 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 1)));
#line 331 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 2)));
#line 331 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 3)));
#line 331 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 4)));
#line 331 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 5)));
#line 331 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 6)));
#line 410 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_5_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 410 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 410 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 410 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 410 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 410 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 410 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 410 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 410 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 410 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 410 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 410 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 12)) & (MR_Integer) 1);

#line 410 "simplify_info.m"
    check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_4_4 == (MR_Integer) 1);
#line 408 "simplify_info.m"
    return check_hlds__simplify__simplify_info__succeeded;
#line 408 "simplify_info.m"
  }
#line 170 "simplify_info.m"
}

#line 169 "simplify_info.m"
MR_bool MR_CALL 
check_hlds__simplify__simplify_info__simplify_do_warn_obsolete_1_p_0(
#line 169 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__Info_2)
#line 169 "simplify_info.m"
{
#line 405 "simplify_info.m"
  {
#line 405 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 405 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__SimplifyTasks_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 0)));
#line 405 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_4_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 331 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 1)));
#line 331 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 2)));
#line 331 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 3)));
#line 331 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 4)));
#line 331 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 5)));
#line 331 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 6)));
#line 407 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_5_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 407 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 407 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 407 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 407 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 407 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 407 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 407 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 407 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 407 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 407 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 407 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 12)) & (MR_Integer) 1);

#line 407 "simplify_info.m"
    check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_4_4 == (MR_Integer) 1);
#line 405 "simplify_info.m"
    return check_hlds__simplify__simplify_info__succeeded;
#line 405 "simplify_info.m"
  }
#line 169 "simplify_info.m"
}

#line 168 "simplify_info.m"
MR_bool MR_CALL 
check_hlds__simplify__simplify_info__simplify_do_format_calls_1_p_0(
#line 168 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__Info_2)
#line 168 "simplify_info.m"
{
#line 402 "simplify_info.m"
  {
#line 402 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 402 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__SimplifyTasks_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 0)));
#line 402 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_4_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 331 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 1)));
#line 331 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 2)));
#line 331 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 3)));
#line 331 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 4)));
#line 331 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 5)));
#line 331 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 6)));
#line 404 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_5_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 404 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 404 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 404 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 404 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 404 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 404 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 404 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 404 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 404 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 404 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 404 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 12)) & (MR_Integer) 1);

#line 404 "simplify_info.m"
    check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_4_4 == (MR_Integer) 1);
#line 402 "simplify_info.m"
    return check_hlds__simplify__simplify_info__succeeded;
#line 402 "simplify_info.m"
  }
#line 168 "simplify_info.m"
}

#line 167 "simplify_info.m"
MR_bool MR_CALL 
check_hlds__simplify__simplify_info__simplify_do_warn_duplicate_calls_1_p_0(
#line 167 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__Info_2)
#line 167 "simplify_info.m"
{
#line 399 "simplify_info.m"
  {
#line 399 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 399 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__SimplifyTasks_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 0)));
#line 399 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_4_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 331 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 1)));
#line 331 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 2)));
#line 331 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 3)));
#line 331 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 4)));
#line 331 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 5)));
#line 331 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 6)));
#line 401 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_5_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 401 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 401 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 401 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 401 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 401 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 401 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 401 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 401 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 401 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 401 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 401 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 12)) & (MR_Integer) 1);

#line 401 "simplify_info.m"
    check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_4_4 == (MR_Integer) 1);
#line 399 "simplify_info.m"
    return check_hlds__simplify__simplify_info__succeeded;
#line 399 "simplify_info.m"
  }
#line 167 "simplify_info.m"
}

#line 166 "simplify_info.m"
MR_bool MR_CALL 
check_hlds__simplify__simplify_info__simplify_do_warn_simple_code_1_p_0(
#line 166 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__Info_2)
#line 166 "simplify_info.m"
{
#line 396 "simplify_info.m"
  {
#line 396 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 396 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__SimplifyTasks_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 0)));
#line 396 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_4_4 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 331 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 1)));
#line 331 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 2)));
#line 331 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 3)));
#line 331 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 4)));
#line 331 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 5)));
#line 331 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 6)));
#line 398 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_5_5 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 398 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 398 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 398 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 398 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 398 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 398 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 398 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 398 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 398 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 398 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 398 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 12)) & (MR_Integer) 1);

#line 398 "simplify_info.m"
    check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_4_4 == (MR_Integer) 1);
#line 396 "simplify_info.m"
    return check_hlds__simplify__simplify_info__succeeded;
#line 396 "simplify_info.m"
  }
#line 166 "simplify_info.m"
}

#line 161 "simplify_info.m"
void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_set_has_user_event_3_p_0(
#line 161 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__HUE_4,
#line 161 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6,
#line 161 "simplify_info.m"
  MR_Word * check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_7)
#line 161 "simplify_info.m"
{
#line 391 "simplify_info.m"
  {
#line 391 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 391 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
#line 391 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_10_10;
#line 391 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
#line 391 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
#line 391 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
#line 391 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
#line 391 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
#line 391 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
#line 392 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 0)));
#line 392 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 1)));
#line 392 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 2)));
#line 392 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 3)));
#line 392 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 4)));
#line 392 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_22_22 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 5)))) & (MR_Integer) 1);
#line 392 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 392 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 6)));
#line 392 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_25_25 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 392 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 392 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);

#line 392 "simplify_info.m"
    {
#line 392 "simplify_info.m"
      check_hlds__simplify__simplify_info__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 392 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__V_17_17));
#line 392 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__V_18_18));
#line 392 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 2) = ((MR_Box) (check_hlds__simplify__simplify_info__V_19_19));
#line 392 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 3) = ((MR_Box) (check_hlds__simplify__simplify_info__V_20_20));
#line 392 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 4) = ((MR_Box) (check_hlds__simplify__simplify_info__V_21_21));
#line 392 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 5) = ((MR_Box) ((check_hlds__simplify__simplify_info__V_22_22 | ((check_hlds__simplify__simplify_info__V_23_23 << (MR_Integer) 1)))));
#line 392 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 6) = ((MR_Box) (check_hlds__simplify__simplify_info__V_24_24));
#line 392 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 7) = ((MR_Box) ((check_hlds__simplify__simplify_info__V_25_25 | ((((check_hlds__simplify__simplify_info__V_26_26 << (MR_Integer) 1)) | ((check_hlds__simplify__simplify_info__HUE_4 << (MR_Integer) 2)))))));
#line 392 "simplify_info.m"
    }
#line 392 "simplify_info.m"
    {
#line 392 "simplify_info.m"
      MR_Word base;
#line 392 "simplify_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 392 "simplify_info.m"
      *check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_7 = base;
#line 392 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__V_11_11));
#line 392 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__V_12_12));
#line 392 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__simplify__simplify_info__V_13_13));
#line 392 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__simplify__simplify_info__V_14_14));
#line 392 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__simplify__simplify_info__V_15_15));
#line 392 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__simplify__simplify_info__V_16_16));
#line 392 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__simplify__simplify_info__V_10_10));
#line 392 "simplify_info.m"
    }
#line 391 "simplify_info.m"
  }
#line 161 "simplify_info.m"
}

#line 159 "simplify_info.m"
void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_set_found_contains_trace_3_p_0(
#line 159 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__FCT_4,
#line 159 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6,
#line 159 "simplify_info.m"
  MR_Word * check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_7)
#line 159 "simplify_info.m"
{
#line 389 "simplify_info.m"
  {
#line 389 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 389 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
#line 389 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_10_10;
#line 389 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
#line 389 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
#line 389 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
#line 389 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
#line 389 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
#line 389 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
#line 390 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 0)));
#line 390 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 1)));
#line 390 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 2)));
#line 390 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 3)));
#line 390 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 4)));
#line 390 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_22_22 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 5)))) & (MR_Integer) 1);
#line 390 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 390 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 6)));
#line 390 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_25_25 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 390 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 390 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);

#line 390 "simplify_info.m"
    {
#line 390 "simplify_info.m"
      check_hlds__simplify__simplify_info__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 390 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__V_17_17));
#line 390 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__V_18_18));
#line 390 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 2) = ((MR_Box) (check_hlds__simplify__simplify_info__V_19_19));
#line 390 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 3) = ((MR_Box) (check_hlds__simplify__simplify_info__V_20_20));
#line 390 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 4) = ((MR_Box) (check_hlds__simplify__simplify_info__V_21_21));
#line 390 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 5) = ((MR_Box) ((check_hlds__simplify__simplify_info__V_22_22 | ((check_hlds__simplify__simplify_info__V_23_23 << (MR_Integer) 1)))));
#line 390 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 6) = ((MR_Box) (check_hlds__simplify__simplify_info__V_24_24));
#line 390 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 7) = ((MR_Box) ((check_hlds__simplify__simplify_info__V_25_25 | ((((check_hlds__simplify__simplify_info__FCT_4 << (MR_Integer) 1)) | ((check_hlds__simplify__simplify_info__V_27_27 << (MR_Integer) 2)))))));
#line 390 "simplify_info.m"
    }
#line 390 "simplify_info.m"
    {
#line 390 "simplify_info.m"
      MR_Word base;
#line 390 "simplify_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 390 "simplify_info.m"
      *check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_7 = base;
#line 390 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__V_11_11));
#line 390 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__V_12_12));
#line 390 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__simplify__simplify_info__V_13_13));
#line 390 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__simplify__simplify_info__V_14_14));
#line 390 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__simplify__simplify_info__V_15_15));
#line 390 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__simplify__simplify_info__V_16_16));
#line 390 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__simplify__simplify_info__V_10_10));
#line 390 "simplify_info.m"
    }
#line 389 "simplify_info.m"
  }
#line 159 "simplify_info.m"
}

#line 157 "simplify_info.m"
void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_set_has_parallel_conj_3_p_0(
#line 157 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__HPC_4,
#line 157 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6,
#line 157 "simplify_info.m"
  MR_Word * check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_7)
#line 157 "simplify_info.m"
{
#line 387 "simplify_info.m"
  {
#line 387 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 387 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
#line 387 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_10_10;
#line 387 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
#line 387 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
#line 387 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
#line 387 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
#line 387 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
#line 387 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
#line 388 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 0)));
#line 388 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 1)));
#line 388 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 2)));
#line 388 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 3)));
#line 388 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 4)));
#line 388 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_22_22 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 5)))) & (MR_Integer) 1);
#line 388 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 388 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 6)));
#line 388 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 388 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 388 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_25_25 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 7)))) & (MR_Integer) 1);

#line 388 "simplify_info.m"
    {
#line 388 "simplify_info.m"
      check_hlds__simplify__simplify_info__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 388 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__V_17_17));
#line 388 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__V_18_18));
#line 388 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 2) = ((MR_Box) (check_hlds__simplify__simplify_info__V_19_19));
#line 388 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 3) = ((MR_Box) (check_hlds__simplify__simplify_info__V_20_20));
#line 388 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 4) = ((MR_Box) (check_hlds__simplify__simplify_info__V_21_21));
#line 388 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 5) = ((MR_Box) ((check_hlds__simplify__simplify_info__V_22_22 | ((check_hlds__simplify__simplify_info__V_23_23 << (MR_Integer) 1)))));
#line 388 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 6) = ((MR_Box) (check_hlds__simplify__simplify_info__V_24_24));
#line 388 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 7) = ((MR_Box) ((check_hlds__simplify__simplify_info__HPC_4 | ((((check_hlds__simplify__simplify_info__V_26_26 << (MR_Integer) 1)) | ((check_hlds__simplify__simplify_info__V_27_27 << (MR_Integer) 2)))))));
#line 388 "simplify_info.m"
    }
#line 388 "simplify_info.m"
    {
#line 388 "simplify_info.m"
      MR_Word base;
#line 388 "simplify_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 388 "simplify_info.m"
      *check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_7 = base;
#line 388 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__V_11_11));
#line 388 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__V_12_12));
#line 388 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__simplify__simplify_info__V_13_13));
#line 388 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__simplify__simplify_info__V_14_14));
#line 388 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__simplify__simplify_info__V_15_15));
#line 388 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__simplify__simplify_info__V_16_16));
#line 388 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__simplify__simplify_info__V_10_10));
#line 388 "simplify_info.m"
    }
#line 387 "simplify_info.m"
  }
#line 157 "simplify_info.m"
}

#line 155 "simplify_info.m"
void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_set_cost_delta_3_p_0(
#line 155 "simplify_info.m"
  MR_Integer check_hlds__simplify__simplify_info__CD_4,
#line 155 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6,
#line 155 "simplify_info.m"
  MR_Word * check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_7)
#line 155 "simplify_info.m"
{
#line 385 "simplify_info.m"
  {
#line 385 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 385 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
#line 385 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_10_10;
#line 385 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
#line 385 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
#line 385 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
#line 385 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
#line 385 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
#line 385 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
#line 386 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 0)));
#line 386 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 1)));
#line 386 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 2)));
#line 386 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 3)));
#line 386 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 4)));
#line 386 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_22_22 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 5)))) & (MR_Integer) 1);
#line 386 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 386 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_25_25 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 386 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 386 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 386 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 6)));

#line 386 "simplify_info.m"
    {
#line 386 "simplify_info.m"
      check_hlds__simplify__simplify_info__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 386 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__V_17_17));
#line 386 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__V_18_18));
#line 386 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 2) = ((MR_Box) (check_hlds__simplify__simplify_info__V_19_19));
#line 386 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 3) = ((MR_Box) (check_hlds__simplify__simplify_info__V_20_20));
#line 386 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 4) = ((MR_Box) (check_hlds__simplify__simplify_info__V_21_21));
#line 386 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 5) = ((MR_Box) ((check_hlds__simplify__simplify_info__V_22_22 | ((check_hlds__simplify__simplify_info__V_23_23 << (MR_Integer) 1)))));
#line 386 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 6) = ((MR_Box) (check_hlds__simplify__simplify_info__CD_4));
#line 386 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 7) = ((MR_Box) ((check_hlds__simplify__simplify_info__V_25_25 | ((((check_hlds__simplify__simplify_info__V_26_26 << (MR_Integer) 1)) | ((check_hlds__simplify__simplify_info__V_27_27 << (MR_Integer) 2)))))));
#line 386 "simplify_info.m"
    }
#line 386 "simplify_info.m"
    {
#line 386 "simplify_info.m"
      MR_Word base;
#line 386 "simplify_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 386 "simplify_info.m"
      *check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_7 = base;
#line 386 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__V_11_11));
#line 386 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__V_12_12));
#line 386 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__simplify__simplify_info__V_13_13));
#line 386 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__simplify__simplify_info__V_14_14));
#line 386 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__simplify__simplify_info__V_15_15));
#line 386 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__simplify__simplify_info__V_16_16));
#line 386 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__simplify__simplify_info__V_10_10));
#line 386 "simplify_info.m"
    }
#line 385 "simplify_info.m"
  }
#line 155 "simplify_info.m"
}

#line 153 "simplify_info.m"
void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_set_should_rerun_det_2_p_0(
#line 153 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_4,
#line 153 "simplify_info.m"
  MR_Word * check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_5)
#line 153 "simplify_info.m"
{
#line 383 "simplify_info.m"
  {
#line 383 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 383 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_4, (MR_Integer) 6)));
#line 383 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_9_9;
#line 383 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_4, (MR_Integer) 0)));
#line 383 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_4, (MR_Integer) 1)));
#line 383 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_4, (MR_Integer) 2)));
#line 383 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_4, (MR_Integer) 3)));
#line 383 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_4, (MR_Integer) 4)));
#line 383 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_4, (MR_Integer) 5)));
#line 384 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_8_8, (MR_Integer) 0)));
#line 384 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_8_8, (MR_Integer) 1)));
#line 384 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_8_8, (MR_Integer) 2)));
#line 384 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_8_8, (MR_Integer) 3)));
#line 384 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_8_8, (MR_Integer) 4)));
#line 384 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_21_21 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_8_8, (MR_Integer) 5)))) & (MR_Integer) 1);
#line 384 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_8_8, (MR_Integer) 6)));
#line 384 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_24_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_8_8, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 384 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_8_8, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 384 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_8_8, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 384 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_8_8, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);

#line 384 "simplify_info.m"
    {
#line 384 "simplify_info.m"
      check_hlds__simplify__simplify_info__V_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 384 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__V_16_16));
#line 384 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__V_17_17));
#line 384 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, 2) = ((MR_Box) (check_hlds__simplify__simplify_info__V_18_18));
#line 384 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, 3) = ((MR_Box) (check_hlds__simplify__simplify_info__V_19_19));
#line 384 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, 4) = ((MR_Box) (check_hlds__simplify__simplify_info__V_20_20));
#line 384 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, 5) = ((MR_Box) ((check_hlds__simplify__simplify_info__V_21_21 | (((MR_Integer) 1 << (MR_Integer) 1)))));
#line 384 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, 6) = ((MR_Box) (check_hlds__simplify__simplify_info__V_23_23));
#line 384 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, 7) = ((MR_Box) ((check_hlds__simplify__simplify_info__V_24_24 | ((((check_hlds__simplify__simplify_info__V_25_25 << (MR_Integer) 1)) | ((check_hlds__simplify__simplify_info__V_26_26 << (MR_Integer) 2)))))));
#line 384 "simplify_info.m"
    }
#line 384 "simplify_info.m"
    {
#line 384 "simplify_info.m"
      MR_Word base;
#line 384 "simplify_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 384 "simplify_info.m"
      *check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_5 = base;
#line 384 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__V_10_10));
#line 384 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__V_11_11));
#line 384 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__simplify__simplify_info__V_12_12));
#line 384 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__simplify__simplify_info__V_13_13));
#line 384 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__simplify__simplify_info__V_14_14));
#line 384 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__simplify__simplify_info__V_15_15));
#line 384 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__simplify__simplify_info__V_9_9));
#line 384 "simplify_info.m"
    }
#line 383 "simplify_info.m"
  }
#line 153 "simplify_info.m"
}

#line 151 "simplify_info.m"
void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_set_should_requantify_2_p_0(
#line 151 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_4,
#line 151 "simplify_info.m"
  MR_Word * check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_5)
#line 151 "simplify_info.m"
{
#line 381 "simplify_info.m"
  {
#line 381 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 381 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_4, (MR_Integer) 6)));
#line 381 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_9_9;
#line 381 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_4, (MR_Integer) 0)));
#line 381 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_4, (MR_Integer) 1)));
#line 381 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_4, (MR_Integer) 2)));
#line 381 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_4, (MR_Integer) 3)));
#line 381 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_4, (MR_Integer) 4)));
#line 381 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_4, (MR_Integer) 5)));
#line 382 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_8_8, (MR_Integer) 0)));
#line 382 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_8_8, (MR_Integer) 1)));
#line 382 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_8_8, (MR_Integer) 2)));
#line 382 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_8_8, (MR_Integer) 3)));
#line 382 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_8_8, (MR_Integer) 4)));
#line 382 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_8_8, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 382 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_8_8, (MR_Integer) 6)));
#line 382 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_24_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_8_8, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 382 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_8_8, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 382 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_8_8, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 382 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_21_21 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_8_8, (MR_Integer) 5)))) & (MR_Integer) 1);

#line 382 "simplify_info.m"
    {
#line 382 "simplify_info.m"
      check_hlds__simplify__simplify_info__V_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 382 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__V_16_16));
#line 382 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__V_17_17));
#line 382 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, 2) = ((MR_Box) (check_hlds__simplify__simplify_info__V_18_18));
#line 382 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, 3) = ((MR_Box) (check_hlds__simplify__simplify_info__V_19_19));
#line 382 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, 4) = ((MR_Box) (check_hlds__simplify__simplify_info__V_20_20));
#line 382 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, 5) = ((MR_Box) (((MR_Integer) 1 | ((check_hlds__simplify__simplify_info__V_22_22 << (MR_Integer) 1)))));
#line 382 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, 6) = ((MR_Box) (check_hlds__simplify__simplify_info__V_23_23));
#line 382 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, 7) = ((MR_Box) ((check_hlds__simplify__simplify_info__V_24_24 | ((((check_hlds__simplify__simplify_info__V_25_25 << (MR_Integer) 1)) | ((check_hlds__simplify__simplify_info__V_26_26 << (MR_Integer) 2)))))));
#line 382 "simplify_info.m"
    }
#line 382 "simplify_info.m"
    {
#line 382 "simplify_info.m"
      MR_Word base;
#line 382 "simplify_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 382 "simplify_info.m"
      *check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_5 = base;
#line 382 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__V_10_10));
#line 382 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__V_11_11));
#line 382 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__simplify__simplify_info__V_12_12));
#line 382 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__simplify__simplify_info__V_13_13));
#line 382 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__simplify__simplify_info__V_14_14));
#line 382 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__simplify__simplify_info__V_15_15));
#line 382 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__simplify__simplify_info__V_9_9));
#line 382 "simplify_info.m"
    }
#line 381 "simplify_info.m"
  }
#line 151 "simplify_info.m"
}

#line 149 "simplify_info.m"
void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_set_error_specs_3_p_0(
#line 149 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__Specs_4,
#line 149 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6,
#line 149 "simplify_info.m"
  MR_Word * check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_7)
#line 149 "simplify_info.m"
{
#line 379 "simplify_info.m"
  {
#line 379 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 379 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
#line 379 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_10_10;
#line 379 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
#line 379 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
#line 379 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
#line 379 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
#line 379 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
#line 379 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
#line 380 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 0)));
#line 380 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 1)));
#line 380 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 2)));
#line 380 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 3)));
#line 380 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_22_22 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 5)))) & (MR_Integer) 1);
#line 380 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 380 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 6)));
#line 380 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_25_25 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 380 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 380 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 380 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 4)));

#line 380 "simplify_info.m"
    {
#line 380 "simplify_info.m"
      check_hlds__simplify__simplify_info__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 380 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__V_17_17));
#line 380 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__V_18_18));
#line 380 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 2) = ((MR_Box) (check_hlds__simplify__simplify_info__V_19_19));
#line 380 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 3) = ((MR_Box) (check_hlds__simplify__simplify_info__V_20_20));
#line 380 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 4) = ((MR_Box) (check_hlds__simplify__simplify_info__Specs_4));
#line 380 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 5) = ((MR_Box) ((check_hlds__simplify__simplify_info__V_22_22 | ((check_hlds__simplify__simplify_info__V_23_23 << (MR_Integer) 1)))));
#line 380 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 6) = ((MR_Box) (check_hlds__simplify__simplify_info__V_24_24));
#line 380 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 7) = ((MR_Box) ((check_hlds__simplify__simplify_info__V_25_25 | ((((check_hlds__simplify__simplify_info__V_26_26 << (MR_Integer) 1)) | ((check_hlds__simplify__simplify_info__V_27_27 << (MR_Integer) 2)))))));
#line 380 "simplify_info.m"
    }
#line 380 "simplify_info.m"
    {
#line 380 "simplify_info.m"
      MR_Word base;
#line 380 "simplify_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 380 "simplify_info.m"
      *check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_7 = base;
#line 380 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__V_11_11));
#line 380 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__V_12_12));
#line 380 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__simplify__simplify_info__V_13_13));
#line 380 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__simplify__simplify_info__V_14_14));
#line 380 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__simplify__simplify_info__V_15_15));
#line 380 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__simplify__simplify_info__V_16_16));
#line 380 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__simplify__simplify_info__V_10_10));
#line 380 "simplify_info.m"
    }
#line 379 "simplify_info.m"
  }
#line 149 "simplify_info.m"
}

#line 147 "simplify_info.m"
void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_set_elim_vars_3_p_0(
#line 147 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__EV_4,
#line 147 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6,
#line 147 "simplify_info.m"
  MR_Word * check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_7)
#line 147 "simplify_info.m"
{
#line 377 "simplify_info.m"
  {
#line 377 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 377 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
#line 377 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_10_10;
#line 377 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
#line 377 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
#line 377 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
#line 377 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
#line 377 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
#line 377 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
#line 378 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 0)));
#line 378 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 1)));
#line 378 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 2)));
#line 378 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 4)));
#line 378 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_22_22 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 5)))) & (MR_Integer) 1);
#line 378 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 378 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 6)));
#line 378 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_25_25 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 378 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 378 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 378 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 3)));

#line 378 "simplify_info.m"
    {
#line 378 "simplify_info.m"
      check_hlds__simplify__simplify_info__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 378 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__V_17_17));
#line 378 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__V_18_18));
#line 378 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 2) = ((MR_Box) (check_hlds__simplify__simplify_info__V_19_19));
#line 378 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 3) = ((MR_Box) (check_hlds__simplify__simplify_info__EV_4));
#line 378 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 4) = ((MR_Box) (check_hlds__simplify__simplify_info__V_21_21));
#line 378 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 5) = ((MR_Box) ((check_hlds__simplify__simplify_info__V_22_22 | ((check_hlds__simplify__simplify_info__V_23_23 << (MR_Integer) 1)))));
#line 378 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 6) = ((MR_Box) (check_hlds__simplify__simplify_info__V_24_24));
#line 378 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 7) = ((MR_Box) ((check_hlds__simplify__simplify_info__V_25_25 | ((((check_hlds__simplify__simplify_info__V_26_26 << (MR_Integer) 1)) | ((check_hlds__simplify__simplify_info__V_27_27 << (MR_Integer) 2)))))));
#line 378 "simplify_info.m"
    }
#line 378 "simplify_info.m"
    {
#line 378 "simplify_info.m"
      MR_Word base;
#line 378 "simplify_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 378 "simplify_info.m"
      *check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_7 = base;
#line 378 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__V_11_11));
#line 378 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__V_12_12));
#line 378 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__simplify__simplify_info__V_13_13));
#line 378 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__simplify__simplify_info__V_14_14));
#line 378 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__simplify__simplify_info__V_15_15));
#line 378 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__simplify__simplify_info__V_16_16));
#line 378 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__simplify__simplify_info__V_10_10));
#line 378 "simplify_info.m"
    }
#line 377 "simplify_info.m"
  }
#line 147 "simplify_info.m"
}

#line 144 "simplify_info.m"
void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_set_rtti_varmaps_3_p_0(
#line 144 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__RVM_4,
#line 144 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6,
#line 144 "simplify_info.m"
  MR_Word * check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_7)
#line 144 "simplify_info.m"
{
#line 375 "simplify_info.m"
  {
#line 375 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 375 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
#line 375 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
#line 375 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
#line 375 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
#line 375 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
#line 375 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
#line 375 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));

#line 375 "simplify_info.m"
    {
#line 375 "simplify_info.m"
      MR_Word base;
#line 375 "simplify_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 375 "simplify_info.m"
      *check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_7 = base;
#line 375 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__V_9_9));
#line 375 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__V_10_10));
#line 375 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__simplify__simplify_info__V_11_11));
#line 375 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__simplify__simplify_info__V_12_12));
#line 375 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__simplify__simplify_info__RVM_4));
#line 375 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__simplify__simplify_info__V_14_14));
#line 375 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__simplify__simplify_info__V_15_15));
#line 375 "simplify_info.m"
    }
#line 375 "simplify_info.m"
  }
#line 144 "simplify_info.m"
}

#line 142 "simplify_info.m"
void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_set_varset_3_p_0(
#line 142 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__VS_4,
#line 142 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6,
#line 142 "simplify_info.m"
  MR_Word * check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_7)
#line 142 "simplify_info.m"
{
#line 371 "simplify_info.m"
  {
#line 371 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 371 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
#line 371 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
#line 371 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
#line 371 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
#line 371 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
#line 371 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
#line 371 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));

#line 371 "simplify_info.m"
    {
#line 371 "simplify_info.m"
      MR_Word base;
#line 371 "simplify_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 371 "simplify_info.m"
      *check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_7 = base;
#line 371 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__V_9_9));
#line 371 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__V_10_10));
#line 371 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__simplify__simplify_info__VS_4));
#line 371 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__simplify__simplify_info__V_12_12));
#line 371 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__simplify__simplify_info__V_13_13));
#line 371 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__simplify__simplify_info__V_14_14));
#line 371 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__simplify__simplify_info__V_15_15));
#line 371 "simplify_info.m"
    }
#line 371 "simplify_info.m"
  }
#line 142 "simplify_info.m"
}

#line 140 "simplify_info.m"
void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_set_var_types_3_p_0(
#line 140 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__VT_4,
#line 140 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6,
#line 140 "simplify_info.m"
  MR_Word * check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_7)
#line 140 "simplify_info.m"
{
#line 373 "simplify_info.m"
  {
#line 373 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 373 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
#line 373 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
#line 373 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
#line 373 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
#line 373 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
#line 373 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
#line 373 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));

#line 373 "simplify_info.m"
    {
#line 373 "simplify_info.m"
      MR_Word base;
#line 373 "simplify_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 373 "simplify_info.m"
      *check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_7 = base;
#line 373 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__V_9_9));
#line 373 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__V_10_10));
#line 373 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__simplify__simplify_info__V_11_11));
#line 373 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__simplify__simplify_info__VT_4));
#line 373 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__simplify__simplify_info__V_13_13));
#line 373 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__simplify__simplify_info__V_14_14));
#line 373 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__simplify__simplify_info__V_15_15));
#line 373 "simplify_info.m"
    }
#line 373 "simplify_info.m"
  }
#line 140 "simplify_info.m"
}

#line 138 "simplify_info.m"
void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_set_module_info_3_p_0(
#line 138 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__MI_4,
#line 138 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6,
#line 138 "simplify_info.m"
  MR_Word * check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_7)
#line 138 "simplify_info.m"
{
#line 369 "simplify_info.m"
  {
#line 369 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 369 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
#line 369 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
#line 369 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
#line 369 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
#line 369 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
#line 369 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
#line 369 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));

#line 369 "simplify_info.m"
    {
#line 369 "simplify_info.m"
      MR_Word base;
#line 369 "simplify_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 369 "simplify_info.m"
      *check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_7 = base;
#line 369 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__V_9_9));
#line 369 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__MI_4));
#line 369 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__simplify__simplify_info__V_11_11));
#line 369 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__simplify__simplify_info__V_12_12));
#line 369 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__simplify__simplify_info__V_13_13));
#line 369 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__simplify__simplify_info__V_14_14));
#line 369 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__simplify__simplify_info__V_15_15));
#line 369 "simplify_info.m"
    }
#line 369 "simplify_info.m"
  }
#line 138 "simplify_info.m"
}

#line 136 "simplify_info.m"
void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_set_simplify_tasks_3_p_0(
#line 136 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__Tasks_4,
#line 136 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6,
#line 136 "simplify_info.m"
  MR_Word * check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_7)
#line 136 "simplify_info.m"
{
#line 367 "simplify_info.m"
  {
#line 367 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 367 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
#line 367 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
#line 367 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
#line 367 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
#line 367 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
#line 367 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
#line 367 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));

#line 367 "simplify_info.m"
    {
#line 367 "simplify_info.m"
      MR_Word base;
#line 367 "simplify_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 367 "simplify_info.m"
      *check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_7 = base;
#line 367 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__Tasks_4));
#line 367 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__V_10_10));
#line 367 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__simplify__simplify_info__V_11_11));
#line 367 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__simplify__simplify_info__V_12_12));
#line 367 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__simplify__simplify_info__V_13_13));
#line 367 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__simplify__simplify_info__V_14_14));
#line 367 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__simplify__simplify_info__V_15_15));
#line 367 "simplify_info.m"
    }
#line 367 "simplify_info.m"
  }
#line 136 "simplify_info.m"
}

#line 133 "simplify_info.m"
void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_get_has_user_event_2_p_0(
#line 133 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__Info_3,
#line 133 "simplify_info.m"
  MR_Word * check_hlds__simplify__simplify_info__HUE_4)
#line 133 "simplify_info.m"
{
#line 363 "simplify_info.m"
  {
#line 363 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 363 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 6)));
#line 364 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 0)));
#line 364 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 1)));
#line 364 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 2)));
#line 364 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 3)));
#line 364 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 4)));
#line 364 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 5)));
#line 364 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 0)));
#line 364 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 1)));
#line 364 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 2)));
#line 364 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 3)));
#line 364 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 4)));
#line 364 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_17_17 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 5)))) & (MR_Integer) 1);
#line 364 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 364 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 6)));
#line 364 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_20_20 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 364 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);

#line 364 "simplify_info.m"
    *check_hlds__simplify__simplify_info__HUE_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 363 "simplify_info.m"
  }
#line 133 "simplify_info.m"
}

#line 131 "simplify_info.m"
void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_get_found_contains_trace_2_p_0(
#line 131 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__Info_3,
#line 131 "simplify_info.m"
  MR_Word * check_hlds__simplify__simplify_info__FCT_4)
#line 131 "simplify_info.m"
{
#line 361 "simplify_info.m"
  {
#line 361 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 361 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 6)));
#line 362 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 0)));
#line 362 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 1)));
#line 362 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 2)));
#line 362 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 3)));
#line 362 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 4)));
#line 362 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 5)));
#line 362 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 0)));
#line 362 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 1)));
#line 362 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 2)));
#line 362 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 3)));
#line 362 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 4)));
#line 362 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_17_17 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 5)))) & (MR_Integer) 1);
#line 362 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 362 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 6)));
#line 362 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_20_20 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 362 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_21_21;

#line 362 "simplify_info.m"
    *check_hlds__simplify__simplify_info__FCT_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 362 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 361 "simplify_info.m"
  }
#line 131 "simplify_info.m"
}

#line 129 "simplify_info.m"
void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_get_has_parallel_conj_2_p_0(
#line 129 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__Info_3,
#line 129 "simplify_info.m"
  MR_Word * check_hlds__simplify__simplify_info__HPC_4)
#line 129 "simplify_info.m"
{
#line 359 "simplify_info.m"
  {
#line 359 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 359 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 6)));
#line 360 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 0)));
#line 360 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 1)));
#line 360 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 2)));
#line 360 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 3)));
#line 360 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 4)));
#line 360 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 5)));
#line 360 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 0)));
#line 360 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 1)));
#line 360 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 2)));
#line 360 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 3)));
#line 360 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 4)));
#line 360 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_17_17 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 5)))) & (MR_Integer) 1);
#line 360 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 360 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 6)));
#line 360 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_20_20;
#line 360 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_21_21;

#line 360 "simplify_info.m"
    *check_hlds__simplify__simplify_info__HPC_4 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 360 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 360 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 359 "simplify_info.m"
  }
#line 129 "simplify_info.m"
}

#line 128 "simplify_info.m"
void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_get_cost_delta_2_p_0(
#line 128 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__Info_3,
#line 128 "simplify_info.m"
  MR_Integer * check_hlds__simplify__simplify_info__CD_4)
#line 128 "simplify_info.m"
{
#line 357 "simplify_info.m"
  {
#line 357 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 357 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 6)));
#line 358 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 0)));
#line 358 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 1)));
#line 358 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 2)));
#line 358 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 3)));
#line 358 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 4)));
#line 358 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 5)));
#line 358 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 0)));
#line 358 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 1)));
#line 358 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 2)));
#line 358 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 3)));
#line 358 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 4)));
#line 358 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_17_17 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 5)))) & (MR_Integer) 1);
#line 358 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 358 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_19_19;
#line 358 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_20_20;
#line 358 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_21_21;

#line 358 "simplify_info.m"
    *check_hlds__simplify__simplify_info__CD_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 6)));
#line 358 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_19_19 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 358 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 358 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 357 "simplify_info.m"
  }
#line 128 "simplify_info.m"
}

#line 126 "simplify_info.m"
void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_get_should_rerun_det_2_p_0(
#line 126 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__Info_3,
#line 126 "simplify_info.m"
  MR_Word * check_hlds__simplify__simplify_info__RRD_4)
#line 126 "simplify_info.m"
{
#line 355 "simplify_info.m"
  {
#line 355 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 355 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 6)));
#line 356 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 0)));
#line 356 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 1)));
#line 356 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 2)));
#line 356 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 3)));
#line 356 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 4)));
#line 356 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 5)));
#line 356 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 0)));
#line 356 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 1)));
#line 356 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 2)));
#line 356 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 3)));
#line 356 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 4)));
#line 356 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_17_17 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 5)))) & (MR_Integer) 1);
#line 356 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__V_18_18;
#line 356 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_19_19;
#line 356 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_20_20;
#line 356 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_21_21;

#line 356 "simplify_info.m"
    *check_hlds__simplify__simplify_info__RRD_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 356 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 6)));
#line 356 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_19_19 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 356 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 356 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 355 "simplify_info.m"
  }
#line 126 "simplify_info.m"
}

#line 124 "simplify_info.m"
void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_get_should_requantify_2_p_0(
#line 124 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__Info_3,
#line 124 "simplify_info.m"
  MR_Word * check_hlds__simplify__simplify_info__RQ_4)
#line 124 "simplify_info.m"
{
#line 353 "simplify_info.m"
  {
#line 353 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 353 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 6)));
#line 354 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 0)));
#line 354 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 1)));
#line 354 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 2)));
#line 354 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 3)));
#line 354 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 4)));
#line 354 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 5)));
#line 354 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 0)));
#line 354 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 1)));
#line 354 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 2)));
#line 354 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 3)));
#line 354 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 4)));
#line 354 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_17_17;
#line 354 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__V_18_18;
#line 354 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_19_19;
#line 354 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_20_20;
#line 354 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_21_21;

#line 354 "simplify_info.m"
    *check_hlds__simplify__simplify_info__RQ_4 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 5)))) & (MR_Integer) 1);
#line 354 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_17_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 354 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 6)));
#line 354 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_19_19 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 354 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 354 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 353 "simplify_info.m"
  }
#line 124 "simplify_info.m"
}

#line 122 "simplify_info.m"
void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_get_error_specs_2_p_0(
#line 122 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__Info_3,
#line 122 "simplify_info.m"
  MR_Word * check_hlds__simplify__simplify_info__Specs_4)
#line 122 "simplify_info.m"
{
#line 351 "simplify_info.m"
  {
#line 351 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 351 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 6)));
#line 352 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 0)));
#line 352 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 1)));
#line 352 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 2)));
#line 352 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 3)));
#line 352 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 4)));
#line 352 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 5)));
#line 352 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 0)));
#line 352 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 1)));
#line 352 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 2)));
#line 352 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 3)));
#line 352 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_16_16;
#line 352 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_17_17;
#line 352 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__V_18_18;
#line 352 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_19_19;
#line 352 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_20_20;
#line 352 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_21_21;

#line 352 "simplify_info.m"
    *check_hlds__simplify__simplify_info__Specs_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 4)));
#line 352 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_16_16 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 5)))) & (MR_Integer) 1);
#line 352 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_17_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 352 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 6)));
#line 352 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_19_19 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 352 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 352 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 351 "simplify_info.m"
  }
#line 122 "simplify_info.m"
}

#line 120 "simplify_info.m"
void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_get_elim_vars_2_p_0(
#line 120 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__Info_3,
#line 120 "simplify_info.m"
  MR_Word * check_hlds__simplify__simplify_info__EV_4)
#line 120 "simplify_info.m"
{
#line 349 "simplify_info.m"
  {
#line 349 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 349 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 6)));
#line 350 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 0)));
#line 350 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 1)));
#line 350 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 2)));
#line 350 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 3)));
#line 350 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 4)));
#line 350 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 5)));
#line 350 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 0)));
#line 350 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 1)));
#line 350 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 2)));
#line 350 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_15_15;
#line 350 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_16_16;
#line 350 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_17_17;
#line 350 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__V_18_18;
#line 350 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_19_19;
#line 350 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_20_20;
#line 350 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_21_21;

#line 350 "simplify_info.m"
    *check_hlds__simplify__simplify_info__EV_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 3)));
#line 350 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 4)));
#line 350 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_16_16 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 5)))) & (MR_Integer) 1);
#line 350 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_17_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 350 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 6)));
#line 350 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_19_19 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 350 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 350 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 349 "simplify_info.m"
  }
#line 120 "simplify_info.m"
}

#line 118 "simplify_info.m"
void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_get_inst_varset_2_p_0(
#line 118 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__Info_3,
#line 118 "simplify_info.m"
  MR_Word * check_hlds__simplify__simplify_info__IVS_4)
#line 118 "simplify_info.m"
{
#line 347 "simplify_info.m"
  {
#line 347 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 347 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 6)));
#line 348 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 0)));
#line 348 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 1)));
#line 348 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 2)));
#line 348 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 3)));
#line 348 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 4)));
#line 348 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 5)));
#line 348 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 0)));
#line 348 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 1)));
#line 348 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_14_14;
#line 348 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_15_15;
#line 348 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_16_16;
#line 348 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_17_17;
#line 348 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__V_18_18;
#line 348 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_19_19;
#line 348 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_20_20;
#line 348 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_21_21;

#line 348 "simplify_info.m"
    *check_hlds__simplify__simplify_info__IVS_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 2)));
#line 348 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 3)));
#line 348 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 4)));
#line 348 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_16_16 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 5)))) & (MR_Integer) 1);
#line 348 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_17_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 348 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 6)));
#line 348 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_19_19 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 348 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 348 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 347 "simplify_info.m"
  }
#line 118 "simplify_info.m"
}

#line 116 "simplify_info.m"
void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_get_pred_proc_id_3_p_0(
#line 116 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__Info_4,
#line 116 "simplify_info.m"
  MR_Word * check_hlds__simplify__simplify_info__PredId_5,
#line 116 "simplify_info.m"
  MR_Integer * check_hlds__simplify__simplify_info__ProcId_6)
#line 116 "simplify_info.m"
{
#line 343 "simplify_info.m"
  {
#line 343 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 343 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__SubInfo_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_4, (MR_Integer) 6)));
#line 344 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_4, (MR_Integer) 0)));
#line 344 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_4, (MR_Integer) 1)));
#line 344 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_4, (MR_Integer) 2)));
#line 344 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_4, (MR_Integer) 3)));
#line 344 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_4, (MR_Integer) 4)));
#line 344 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_4, (MR_Integer) 5)));
#line 345 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_15_15;
#line 345 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_16_16;
#line 345 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_17_17;
#line 345 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_18_18;
#line 345 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_19_19;
#line 345 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__V_20_20;
#line 345 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_21_21;
#line 345 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_22_22;
#line 345 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_23_23;

#line 345 "simplify_info.m"
    *check_hlds__simplify__simplify_info__PredId_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SubInfo_7, (MR_Integer) 0)));
#line 345 "simplify_info.m"
    *check_hlds__simplify__simplify_info__ProcId_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SubInfo_7, (MR_Integer) 1)));
#line 345 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SubInfo_7, (MR_Integer) 2)));
#line 345 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SubInfo_7, (MR_Integer) 3)));
#line 345 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SubInfo_7, (MR_Integer) 4)));
#line 345 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_18_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SubInfo_7, (MR_Integer) 5)))) & (MR_Integer) 1);
#line 345 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SubInfo_7, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 345 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SubInfo_7, (MR_Integer) 6)));
#line 345 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_21_21 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SubInfo_7, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 345 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SubInfo_7, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 345 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SubInfo_7, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 343 "simplify_info.m"
  }
#line 116 "simplify_info.m"
}

#line 114 "simplify_info.m"
void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_get_fully_strict_2_p_0(
#line 114 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__Info_3,
#line 114 "simplify_info.m"
  MR_Word * check_hlds__simplify__simplify_info__FS_4)
#line 114 "simplify_info.m"
{
#line 341 "simplify_info.m"
  {
#line 341 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 341 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 0)));
#line 341 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 1)));
#line 341 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 2)));
#line 341 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 3)));
#line 341 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 4)));
#line 341 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_10_10;

#line 341 "simplify_info.m"
    *check_hlds__simplify__simplify_info__FS_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 5)));
#line 341 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 6)));
#line 341 "simplify_info.m"
  }
#line 114 "simplify_info.m"
}

#line 112 "simplify_info.m"
void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_get_rtti_varmaps_2_p_0(
#line 112 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__Info_3,
#line 112 "simplify_info.m"
  MR_Word * check_hlds__simplify__simplify_info__RVM_4)
#line 112 "simplify_info.m"
{
#line 339 "simplify_info.m"
  {
#line 339 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 339 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 0)));
#line 339 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 1)));
#line 339 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 2)));
#line 339 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 3)));
#line 339 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_9_9;
#line 339 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_10_10;

#line 339 "simplify_info.m"
    *check_hlds__simplify__simplify_info__RVM_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 4)));
#line 339 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 5)));
#line 339 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 6)));
#line 339 "simplify_info.m"
  }
#line 112 "simplify_info.m"
}

#line 111 "simplify_info.m"
void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_get_varset_2_p_0(
#line 111 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__Info_3,
#line 111 "simplify_info.m"
  MR_Word * check_hlds__simplify__simplify_info__VS_4)
#line 111 "simplify_info.m"
{
#line 335 "simplify_info.m"
  {
#line 335 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 335 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 0)));
#line 335 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 1)));
#line 335 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_7_7;
#line 335 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_8_8;
#line 335 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_9_9;
#line 335 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_10_10;

#line 335 "simplify_info.m"
    *check_hlds__simplify__simplify_info__VS_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 2)));
#line 335 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 3)));
#line 335 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 4)));
#line 335 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 5)));
#line 335 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 6)));
#line 335 "simplify_info.m"
  }
#line 111 "simplify_info.m"
}

#line 110 "simplify_info.m"
void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_get_var_types_2_p_0(
#line 110 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__Info_3,
#line 110 "simplify_info.m"
  MR_Word * check_hlds__simplify__simplify_info__VT_4)
#line 110 "simplify_info.m"
{
#line 337 "simplify_info.m"
  {
#line 337 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 337 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 0)));
#line 337 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 1)));
#line 337 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 2)));
#line 337 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_8_8;
#line 337 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_9_9;
#line 337 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_10_10;

#line 337 "simplify_info.m"
    *check_hlds__simplify__simplify_info__VT_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 3)));
#line 337 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 4)));
#line 337 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 5)));
#line 337 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 6)));
#line 337 "simplify_info.m"
  }
#line 110 "simplify_info.m"
}

#line 108 "simplify_info.m"
void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(
#line 108 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__Info_3,
#line 108 "simplify_info.m"
  MR_Word * check_hlds__simplify__simplify_info__MI_4)
#line 108 "simplify_info.m"
{
#line 333 "simplify_info.m"
  {
#line 333 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 333 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 0)));
#line 333 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_6_6;
#line 333 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_7_7;
#line 333 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_8_8;
#line 333 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_9_9;
#line 333 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_10_10;

#line 333 "simplify_info.m"
    *check_hlds__simplify__simplify_info__MI_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 1)));
#line 333 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 2)));
#line 333 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 3)));
#line 333 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 4)));
#line 333 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 5)));
#line 333 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 6)));
#line 333 "simplify_info.m"
  }
#line 108 "simplify_info.m"
}

#line 106 "simplify_info.m"
void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_get_simplify_tasks_2_p_0(
#line 106 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__Info_3,
#line 106 "simplify_info.m"
  MR_Word * check_hlds__simplify__simplify_info__Tasks_4)
#line 106 "simplify_info.m"
{
#line 331 "simplify_info.m"
  {
#line 331 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 331 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_5_5;
#line 331 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_6_6;
#line 331 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_7_7;
#line 331 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_8_8;
#line 331 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_9_9;
#line 331 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_10_10;

#line 331 "simplify_info.m"
    *check_hlds__simplify__simplify_info__Tasks_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 0)));
#line 331 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 1)));
#line 331 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 2)));
#line 331 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 3)));
#line 331 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 4)));
#line 331 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 5)));
#line 331 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 6)));
#line 331 "simplify_info.m"
  }
#line 106 "simplify_info.m"
}

#line 320 "simplify_info.m"
static void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_apply_substitutions_and_duplicate_5_p_0_1(
#line 320 "simplify_info.m"
  MR_Box check_hlds__simplify__simplify_info__closure_arg,
#line 320 "simplify_info.m"
  MR_Box check_hlds__simplify__simplify_info__wrapper_arg_1,
#line 320 "simplify_info.m"
  MR_Box * check_hlds__simplify__simplify_info__wrapper_arg_2)
#line 320 "simplify_info.m"
{
#line 320 "simplify_info.m"
  {
#line 320 "simplify_info.m"
    MR_Box check_hlds__simplify__simplify_info__closure = check_hlds__simplify__simplify_info__closure_arg;
#line 320 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__conv0_HeadVar__3_3;

#line 320 "simplify_info.m"
    {
#line 320 "simplify_info.m"
      parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__simplify__simplify_info__wrapper_arg_1), &check_hlds__simplify__simplify_info__conv0_HeadVar__3_3);
    }
#line 320 "simplify_info.m"
    *check_hlds__simplify__simplify_info__wrapper_arg_2 = ((MR_Box) (check_hlds__simplify__simplify_info__conv0_HeadVar__3_3));
#line 320 "simplify_info.m"
  }
#line 320 "simplify_info.m"
}

#line 98 "simplify_info.m"
void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_apply_substitutions_and_duplicate_5_p_0(
#line 98 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__ToVar_6,
#line 98 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__FromVar_7,
#line 98 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__TSubst_8,
#line 98 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_16,
#line 98 "simplify_info.m"
  MR_Word * check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_17)
#line 98 "simplify_info.m"
{
#line 317 "simplify_info.m"
  {
#line 317 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 317 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__TypeInfo_24_24;
#line 317 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__TypeInfo_25_25;
#line 317 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__VarTypes0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_16, (MR_Integer) 3)));
#line 317 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__RttiVarMaps0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_16, (MR_Integer) 4)));
#line 317 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__VarTypes_12;
#line 317 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__Renaming_13;
#line 317 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__RttiVarMaps1_14;
#line 317 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__RttiVarMaps_15;
#line 317 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_18_18;
#line 317 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_19_19;
#line 317 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_47_47;
#line 317 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_48_48;
#line 317 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_49_49;
#line 317 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_52_52;
#line 317 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_53_53;
#line 337 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_16, (MR_Integer) 0)));
#line 337 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_16, (MR_Integer) 1)));
#line 337 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_16, (MR_Integer) 2)));
#line 337 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_16, (MR_Integer) 5)));
#line 337 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_16, (MR_Integer) 6)));
#line 373 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_50_50;
#line 373 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_51_51;

#line 320 "simplify_info.m"
    {
#line 320 "simplify_info.m"
      check_hlds__simplify__simplify_info__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 320 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_18_18, 0) = ((MR_Box) (&check_hlds__simplify__simplify_info_scalar_common_2[0]));
#line 320 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_18_18, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__simplify_info_apply_substitutions_and_duplicate_5_p_0_1));
#line 320 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_18_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 320 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_18_18, 3) = ((MR_Box) (check_hlds__simplify__simplify_info__TSubst_8));
#line 320 "simplify_info.m"
    }
#line 320 "simplify_info.m"
    {
#line 320 "simplify_info.m"
      parse_tree__prog_data__transform_var_types_3_p_0(check_hlds__simplify__simplify_info__V_18_18, check_hlds__simplify__simplify_info__VarTypes0_10, &check_hlds__simplify__simplify_info__VarTypes_12);
    }
#line 5699 "check_hlds.simplify.simplify_info.c"
    check_hlds__simplify__simplify_info__TypeInfo_24_24 = (MR_Word) &check_hlds__simplify__simplify_info_scalar_common_1[0];
#line 321 "simplify_info.m"
    {
#line 321 "simplify_info.m"
      check_hlds__simplify__simplify_info__Renaming_13 = mercury__map__singleton_2_f_0(check_hlds__simplify__simplify_info__TypeInfo_24_24, check_hlds__simplify__simplify_info__TypeInfo_24_24, ((MR_Box) (check_hlds__simplify__simplify_info__ToVar_6)), ((MR_Box) (check_hlds__simplify__simplify_info__FromVar_7)));
    }
#line 5706 "check_hlds.simplify.simplify_info.c"
    check_hlds__simplify__simplify_info__TypeInfo_25_25 = (MR_Word) &check_hlds__simplify__simplify_info_scalar_common_1[1];
#line 322 "simplify_info.m"
    {
#line 322 "simplify_info.m"
      check_hlds__simplify__simplify_info__V_19_19 = mercury__map__init_0_f_0(check_hlds__simplify__simplify_info__TypeInfo_25_25, check_hlds__simplify__simplify_info__TypeInfo_25_25);
    }
#line 322 "simplify_info.m"
    {
#line 322 "simplify_info.m"
      hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_p_0(check_hlds__simplify__simplify_info__V_19_19, check_hlds__simplify__simplify_info__TSubst_8, check_hlds__simplify__simplify_info__Renaming_13, check_hlds__simplify__simplify_info__RttiVarMaps0_11, &check_hlds__simplify__simplify_info__RttiVarMaps1_14);
    }
#line 324 "simplify_info.m"
    {
#line 324 "simplify_info.m"
      hlds__hlds_rtti__rtti_var_info_duplicate_4_p_0(check_hlds__simplify__simplify_info__FromVar_7, check_hlds__simplify__simplify_info__ToVar_6, check_hlds__simplify__simplify_info__RttiVarMaps1_14, &check_hlds__simplify__simplify_info__RttiVarMaps_15);
    }
#line 373 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_16, (MR_Integer) 0)));
#line 373 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_16, (MR_Integer) 1)));
#line 373 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_16, (MR_Integer) 2)));
#line 373 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_16, (MR_Integer) 3)));
#line 373 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_16, (MR_Integer) 4)));
#line 373 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_16, (MR_Integer) 5)));
#line 373 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_16, (MR_Integer) 6)));
#line 375 "simplify_info.m"
    {
#line 375 "simplify_info.m"
      MR_Word base;
#line 375 "simplify_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 375 "simplify_info.m"
      *check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_17 = base;
#line 375 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__V_47_47));
#line 375 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__V_48_48));
#line 375 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__simplify__simplify_info__V_49_49));
#line 375 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__simplify__simplify_info__VarTypes_12));
#line 375 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__simplify__simplify_info__RttiVarMaps_15));
#line 375 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__simplify__simplify_info__V_52_52));
#line 375 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__simplify__simplify_info__V_53_53));
#line 375 "simplify_info.m"
    }
#line 317 "simplify_info.m"
  }
#line 98 "simplify_info.m"
}

#line 95 "simplify_info.m"
void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_incr_cost_delta_3_p_0(
#line 95 "simplify_info.m"
  MR_Integer check_hlds__simplify__simplify_info__Incr_4,
#line 95 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_8,
#line 95 "simplify_info.m"
  MR_Word * check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_9)
#line 95 "simplify_info.m"
{
#line 311 "simplify_info.m"
  {
#line 311 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 311 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__CostDelta0_6;
#line 311 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__CostDelta_7;
#line 311 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 6)));
#line 311 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
#line 311 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
#line 311 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
#line 311 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
#line 311 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 4)));
#line 311 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 5)));
#line 311 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_13_13, (MR_Integer) 0)));
#line 311 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_13_13, (MR_Integer) 1)));
#line 311 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_13_13, (MR_Integer) 2)));
#line 311 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_13_13, (MR_Integer) 3)));
#line 311 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_13_13, (MR_Integer) 4)));
#line 311 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_25_25 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_13_13, (MR_Integer) 5)))) & (MR_Integer) 1);
#line 311 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_13_13, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 311 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_27_27;
#line 311 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_28_28;
#line 311 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_29_29;
#line 311 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_36_36;

#line 358 "simplify_info.m"
    check_hlds__simplify__simplify_info__CostDelta0_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_13_13, (MR_Integer) 6)));
#line 358 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_27_27 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_13_13, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 358 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_13_13, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 358 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_13_13, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 313 "simplify_info.m"
    check_hlds__simplify__simplify_info__CostDelta_7 = (check_hlds__simplify__simplify_info__CostDelta0_6 + check_hlds__simplify__simplify_info__Incr_4);
#line 386 "simplify_info.m"
    {
#line 386 "simplify_info.m"
      check_hlds__simplify__simplify_info__V_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 386 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_36_36, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__V_20_20));
#line 386 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_36_36, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__V_21_21));
#line 386 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_36_36, 2) = ((MR_Box) (check_hlds__simplify__simplify_info__V_22_22));
#line 386 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_36_36, 3) = ((MR_Box) (check_hlds__simplify__simplify_info__V_23_23));
#line 386 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_36_36, 4) = ((MR_Box) (check_hlds__simplify__simplify_info__V_24_24));
#line 386 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_36_36, 5) = ((MR_Box) ((check_hlds__simplify__simplify_info__V_25_25 | ((check_hlds__simplify__simplify_info__V_26_26 << (MR_Integer) 1)))));
#line 386 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_36_36, 6) = ((MR_Box) (check_hlds__simplify__simplify_info__CostDelta_7));
#line 386 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_36_36, 7) = ((MR_Box) ((check_hlds__simplify__simplify_info__V_27_27 | ((((check_hlds__simplify__simplify_info__V_28_28 << (MR_Integer) 1)) | ((check_hlds__simplify__simplify_info__V_29_29 << (MR_Integer) 2)))))));
#line 386 "simplify_info.m"
    }
#line 386 "simplify_info.m"
    {
#line 386 "simplify_info.m"
      MR_Word base;
#line 386 "simplify_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 386 "simplify_info.m"
      *check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_9 = base;
#line 386 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__V_14_14));
#line 386 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__V_15_15));
#line 386 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__simplify__simplify_info__V_16_16));
#line 386 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__simplify__simplify_info__V_17_17));
#line 386 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__simplify__simplify_info__V_18_18));
#line 386 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__simplify__simplify_info__V_19_19));
#line 386 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__simplify__simplify_info__V_36_36));
#line 386 "simplify_info.m"
    }
#line 311 "simplify_info.m"
  }
#line 95 "simplify_info.m"
}

#line 92 "simplify_info.m"
void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_add_simple_code_spec_3_p_0(
#line 92 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__Spec_4,
#line 92 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6,
#line 92 "simplify_info.m"
  MR_Word * check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_7)
#line 92 "simplify_info.m"
{
#line 307 "simplify_info.m"
  {
#line 307 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 307 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__SimplifyTasks_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
#line 307 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
#line 307 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
#line 307 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
#line 307 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
#line 307 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
#line 307 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
#line 396 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_10, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 398 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_10, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 398 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_10, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 398 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_10, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 398 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_10, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 398 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_10, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 398 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_17_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_10, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 398 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_10, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 398 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_10, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 398 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_10, (MR_Integer) 0)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 398 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_10, (MR_Integer) 0)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 398 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_10, (MR_Integer) 0)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 398 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_10, (MR_Integer) 0)))) >> (MR_Integer) 12)) & (MR_Integer) 1);

#line 398 "simplify_info.m"
    check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_11_11 == (MR_Integer) 1);
#line 307 "simplify_info.m"
    if (check_hlds__simplify__simplify_info__succeeded)
#line 299 "simplify_info.m"
      {
#line 299 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__Specs0_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_31_31, (MR_Integer) 4)));
#line 299 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__Specs_37;
#line 299 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_31_31, (MR_Integer) 0)));
#line 299 "simplify_info.m"
        MR_Integer check_hlds__simplify__simplify_info__V_49_49 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_31_31, (MR_Integer) 1)));
#line 299 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_31_31, (MR_Integer) 2)));
#line 299 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_31_31, (MR_Integer) 3)));
#line 299 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_52_52 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_31_31, (MR_Integer) 5)))) & (MR_Integer) 1);
#line 299 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_53_53 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_31_31, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 299 "simplify_info.m"
        MR_Integer check_hlds__simplify__simplify_info__V_54_54 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_31_31, (MR_Integer) 6)));
#line 299 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_55_55 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_31_31, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 299 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_56_56 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_31_31, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 299 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_57_57 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_31_31, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 299 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_64_64;

#line 301 "simplify_info.m"
        {
#line 301 "simplify_info.m"
          check_hlds__simplify__simplify_info__Specs_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 301 "simplify_info.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_info__Specs_37, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__Spec_4));
#line 301 "simplify_info.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_info__Specs_37, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__Specs0_36));
#line 301 "simplify_info.m"
        }
#line 380 "simplify_info.m"
        {
#line 380 "simplify_info.m"
          check_hlds__simplify__simplify_info__V_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 380 "simplify_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_64_64, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__V_48_48));
#line 380 "simplify_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_64_64, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__V_49_49));
#line 380 "simplify_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_64_64, 2) = ((MR_Box) (check_hlds__simplify__simplify_info__V_50_50));
#line 380 "simplify_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_64_64, 3) = ((MR_Box) (check_hlds__simplify__simplify_info__V_51_51));
#line 380 "simplify_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_64_64, 4) = ((MR_Box) (check_hlds__simplify__simplify_info__Specs_37));
#line 380 "simplify_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_64_64, 5) = ((MR_Box) ((check_hlds__simplify__simplify_info__V_52_52 | ((check_hlds__simplify__simplify_info__V_53_53 << (MR_Integer) 1)))));
#line 380 "simplify_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_64_64, 6) = ((MR_Box) (check_hlds__simplify__simplify_info__V_54_54));
#line 380 "simplify_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_64_64, 7) = ((MR_Box) ((check_hlds__simplify__simplify_info__V_55_55 | ((((check_hlds__simplify__simplify_info__V_56_56 << (MR_Integer) 1)) | ((check_hlds__simplify__simplify_info__V_57_57 << (MR_Integer) 2)))))));
#line 380 "simplify_info.m"
        }
#line 380 "simplify_info.m"
        {
#line 380 "simplify_info.m"
          MR_Word base;
#line 380 "simplify_info.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 380 "simplify_info.m"
          *check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_7 = base;
#line 380 "simplify_info.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__SimplifyTasks_10));
#line 380 "simplify_info.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__V_26_26));
#line 380 "simplify_info.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__simplify__simplify_info__V_27_27));
#line 380 "simplify_info.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__simplify__simplify_info__V_28_28));
#line 380 "simplify_info.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__simplify__simplify_info__V_29_29));
#line 380 "simplify_info.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__simplify__simplify_info__V_30_30));
#line 380 "simplify_info.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__simplify__simplify_info__V_64_64));
#line 380 "simplify_info.m"
        }
#line 299 "simplify_info.m"
      }
#line 307 "simplify_info.m"
    else
#line 306 "simplify_info.m"
      *check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_7 = check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6;
#line 307 "simplify_info.m"
  }
#line 92 "simplify_info.m"
}

#line 89 "simplify_info.m"
void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_add_error_spec_3_p_0(
#line 89 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__Spec_4,
#line 89 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_8,
#line 89 "simplify_info.m"
  MR_Word * check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_9)
#line 89 "simplify_info.m"
{
#line 299 "simplify_info.m"
  {
#line 299 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 299 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__Specs0_6;
#line 299 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__Specs_7;
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
    MR_Word check_hlds__simplify__simplify_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_13_13, (MR_Integer) 3)));
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

#line 352 "simplify_info.m"
    check_hlds__simplify__simplify_info__Specs0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_13_13, (MR_Integer) 4)));
#line 352 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_24_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_13_13, (MR_Integer) 5)))) & (MR_Integer) 1);
#line 352 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_13_13, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 352 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_13_13, (MR_Integer) 6)));
#line 352 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_27_27 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_13_13, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 352 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_13_13, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 352 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_13_13, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 301 "simplify_info.m"
    {
#line 301 "simplify_info.m"
      check_hlds__simplify__simplify_info__Specs_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 301 "simplify_info.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_info__Specs_7, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__Spec_4));
#line 301 "simplify_info.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_info__Specs_7, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__Specs0_6));
#line 301 "simplify_info.m"
    }
#line 380 "simplify_info.m"
    {
#line 380 "simplify_info.m"
      check_hlds__simplify__simplify_info__V_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 380 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_36_36, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__V_20_20));
#line 380 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_36_36, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__V_21_21));
#line 380 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_36_36, 2) = ((MR_Box) (check_hlds__simplify__simplify_info__V_22_22));
#line 380 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_36_36, 3) = ((MR_Box) (check_hlds__simplify__simplify_info__V_23_23));
#line 380 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_36_36, 4) = ((MR_Box) (check_hlds__simplify__simplify_info__Specs_7));
#line 380 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_36_36, 5) = ((MR_Box) ((check_hlds__simplify__simplify_info__V_24_24 | ((check_hlds__simplify__simplify_info__V_25_25 << (MR_Integer) 1)))));
#line 380 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_36_36, 6) = ((MR_Box) (check_hlds__simplify__simplify_info__V_26_26));
#line 380 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_36_36, 7) = ((MR_Box) ((check_hlds__simplify__simplify_info__V_27_27 | ((((check_hlds__simplify__simplify_info__V_28_28 << (MR_Integer) 1)) | ((check_hlds__simplify__simplify_info__V_29_29 << (MR_Integer) 2)))))));
#line 380 "simplify_info.m"
    }
#line 380 "simplify_info.m"
    {
#line 380 "simplify_info.m"
      MR_Word base;
#line 380 "simplify_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 380 "simplify_info.m"
      *check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_9 = base;
#line 380 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__V_14_14));
#line 380 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__V_15_15));
#line 380 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__simplify__simplify_info__V_16_16));
#line 380 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__simplify__simplify_info__V_17_17));
#line 380 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__simplify__simplify_info__V_18_18));
#line 380 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__simplify__simplify_info__V_19_19));
#line 380 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__simplify__simplify_info__V_36_36));
#line 380 "simplify_info.m"
    }
#line 299 "simplify_info.m"
  }
#line 89 "simplify_info.m"
}

#line 86 "simplify_info.m"
void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_add_elim_vars_3_p_0(
#line 86 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__ElimVars_4,
#line 86 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_8,
#line 86 "simplify_info.m"
  MR_Word * check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_9)
#line 86 "simplify_info.m"
{
#line 294 "simplify_info.m"
  {
#line 294 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 294 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__ElimVarsLists0_6;
#line 294 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__ElimVarsLists_7;
#line 294 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 6)));
#line 294 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
#line 294 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
#line 294 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
#line 294 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
#line 294 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 4)));
#line 294 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 5)));
#line 294 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_13_13, (MR_Integer) 0)));
#line 294 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_13_13, (MR_Integer) 1)));
#line 294 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_13_13, (MR_Integer) 2)));
#line 294 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_23_23;
#line 294 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_24_24;
#line 294 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_25_25;
#line 294 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__V_26_26;
#line 294 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_27_27;
#line 294 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_28_28;
#line 294 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_29_29;
#line 294 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_36_36;

#line 350 "simplify_info.m"
    check_hlds__simplify__simplify_info__ElimVarsLists0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_13_13, (MR_Integer) 3)));
#line 350 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_13_13, (MR_Integer) 4)));
#line 350 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_24_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_13_13, (MR_Integer) 5)))) & (MR_Integer) 1);
#line 350 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_13_13, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 350 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_13_13, (MR_Integer) 6)));
#line 350 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_27_27 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_13_13, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 350 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_13_13, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 350 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_13_13, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 296 "simplify_info.m"
    {
#line 296 "simplify_info.m"
      check_hlds__simplify__simplify_info__ElimVarsLists_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 296 "simplify_info.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_info__ElimVarsLists_7, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__ElimVars_4));
#line 296 "simplify_info.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_info__ElimVarsLists_7, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__ElimVarsLists0_6));
#line 296 "simplify_info.m"
    }
#line 378 "simplify_info.m"
    {
#line 378 "simplify_info.m"
      check_hlds__simplify__simplify_info__V_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 378 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_36_36, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__V_20_20));
#line 378 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_36_36, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__V_21_21));
#line 378 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_36_36, 2) = ((MR_Box) (check_hlds__simplify__simplify_info__V_22_22));
#line 378 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_36_36, 3) = ((MR_Box) (check_hlds__simplify__simplify_info__ElimVarsLists_7));
#line 378 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_36_36, 4) = ((MR_Box) (check_hlds__simplify__simplify_info__V_23_23));
#line 378 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_36_36, 5) = ((MR_Box) ((check_hlds__simplify__simplify_info__V_24_24 | ((check_hlds__simplify__simplify_info__V_25_25 << (MR_Integer) 1)))));
#line 378 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_36_36, 6) = ((MR_Box) (check_hlds__simplify__simplify_info__V_26_26));
#line 378 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_36_36, 7) = ((MR_Box) ((check_hlds__simplify__simplify_info__V_27_27 | ((((check_hlds__simplify__simplify_info__V_28_28 << (MR_Integer) 1)) | ((check_hlds__simplify__simplify_info__V_29_29 << (MR_Integer) 2)))))));
#line 378 "simplify_info.m"
    }
#line 378 "simplify_info.m"
    {
#line 378 "simplify_info.m"
      MR_Word base;
#line 378 "simplify_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 378 "simplify_info.m"
      *check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_9 = base;
#line 378 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__V_14_14));
#line 378 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__V_15_15));
#line 378 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__simplify__simplify_info__V_16_16));
#line 378 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__simplify__simplify_info__V_17_17));
#line 378 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__simplify__simplify_info__V_18_18));
#line 378 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__simplify__simplify_info__V_19_19));
#line 378 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__simplify__simplify_info__V_36_36));
#line 378 "simplify_info.m"
    }
#line 294 "simplify_info.m"
  }
#line 86 "simplify_info.m"
}

#line 83 "simplify_info.m"
void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_get_pred_proc_info_3_p_0(
#line 83 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__Info_4,
#line 83 "simplify_info.m"
  MR_Word * check_hlds__simplify__simplify_info__PredInfo_5,
#line 83 "simplify_info.m"
  MR_Word * check_hlds__simplify__simplify_info__ProcInfo_6)
#line 83 "simplify_info.m"
{
#line 289 "simplify_info.m"
  {
#line 289 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 289 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__ModuleInfo_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_4, (MR_Integer) 1)));
#line 289 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__PredId_8;
#line 289 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__ProcId_9;
#line 289 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__SubInfo_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_4, (MR_Integer) 6)));
#line 333 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_4, (MR_Integer) 0)));
#line 333 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_4, (MR_Integer) 2)));
#line 333 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_4, (MR_Integer) 3)));
#line 333 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_4, (MR_Integer) 4)));
#line 333 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_4, (MR_Integer) 5)));
#line 345 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_29_29;
#line 345 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_30_30;
#line 345 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_31_31;
#line 345 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_32_32;
#line 345 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_33_33;
#line 345 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__V_34_34;
#line 345 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_35_35;
#line 345 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_36_36;
#line 345 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_37_37;

#line 345 "simplify_info.m"
    check_hlds__simplify__simplify_info__PredId_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SubInfo_21, (MR_Integer) 0)));
#line 345 "simplify_info.m"
    check_hlds__simplify__simplify_info__ProcId_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SubInfo_21, (MR_Integer) 1)));
#line 345 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SubInfo_21, (MR_Integer) 2)));
#line 345 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SubInfo_21, (MR_Integer) 3)));
#line 345 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SubInfo_21, (MR_Integer) 4)));
#line 345 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_32_32 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SubInfo_21, (MR_Integer) 5)))) & (MR_Integer) 1);
#line 345 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SubInfo_21, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 345 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_34_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SubInfo_21, (MR_Integer) 6)));
#line 345 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_35_35 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SubInfo_21, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 345 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SubInfo_21, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 345 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SubInfo_21, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 292 "simplify_info.m"
    {
#line 292 "simplify_info.m"
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(check_hlds__simplify__simplify_info__ModuleInfo_7, check_hlds__simplify__simplify_info__PredId_8, check_hlds__simplify__simplify_info__ProcId_9, check_hlds__simplify__simplify_info__PredInfo_5, check_hlds__simplify__simplify_info__ProcInfo_6);
#line 292 "simplify_info.m"
      return;
    }
#line 289 "simplify_info.m"
  }
#line 83 "simplify_info.m"
}

#line 75 "simplify_info.m"
void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_reinit_3_p_0(
#line 75 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__SimplifyTasks_4,
#line 75 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6,
#line 75 "simplify_info.m"
  MR_Word * check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_7)
#line 75 "simplify_info.m"
{
#line 280 "simplify_info.m"
  {
#line 280 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 280 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_24_24;
#line 280 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
#line 280 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
#line 280 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
#line 280 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
#line 280 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
#line 280 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
#line 280 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_31_31, (MR_Integer) 0)));
#line 280 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_31_31, (MR_Integer) 1)));
#line 280 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_31_31, (MR_Integer) 2)));
#line 280 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_31_31, (MR_Integer) 3)));
#line 280 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_31_31, (MR_Integer) 4)));
#line 280 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__V_45_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_31_31, (MR_Integer) 6)));
#line 280 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_47_47 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_31_31, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 280 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_49_49 = check_hlds__simplify__simplify_info__SimplifyTasks_4;
#line 280 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_50_50 = check_hlds__simplify__simplify_info__V_26_26;
#line 280 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_51_51 = check_hlds__simplify__simplify_info__V_27_27;
#line 280 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_52_52 = check_hlds__simplify__simplify_info__V_28_28;
#line 280 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_53_53 = check_hlds__simplify__simplify_info__V_29_29;
#line 280 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_54_54 = check_hlds__simplify__simplify_info__V_30_30;
#line 280 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_62_62 = check_hlds__simplify__simplify_info__V_38_38;
#line 280 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__V_63_63 = check_hlds__simplify__simplify_info__V_39_39;
#line 280 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_64_64 = check_hlds__simplify__simplify_info__V_40_40;
#line 280 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_65_65 = check_hlds__simplify__simplify_info__V_41_41;
#line 280 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_66_66 = check_hlds__simplify__simplify_info__V_42_42;
#line 280 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__V_69_69 = check_hlds__simplify__simplify_info__V_45_45;
#line 280 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_71_71 = check_hlds__simplify__simplify_info__V_47_47;
#line 280 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_73_73 = check_hlds__simplify__simplify_info__V_49_49;
#line 280 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_74_74 = check_hlds__simplify__simplify_info__V_50_50;
#line 280 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_75_75 = check_hlds__simplify__simplify_info__V_51_51;
#line 280 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_76_76 = check_hlds__simplify__simplify_info__V_52_52;
#line 280 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_77_77 = check_hlds__simplify__simplify_info__V_53_53;
#line 280 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_78_78 = check_hlds__simplify__simplify_info__V_54_54;
#line 280 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_86_86 = check_hlds__simplify__simplify_info__V_62_62;
#line 280 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__V_87_87 = check_hlds__simplify__simplify_info__V_63_63;
#line 280 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_88_88 = check_hlds__simplify__simplify_info__V_64_64;
#line 280 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_89_89 = check_hlds__simplify__simplify_info__V_65_65;
#line 280 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_90_90 = check_hlds__simplify__simplify_info__V_66_66;
#line 280 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__V_93_93 = check_hlds__simplify__simplify_info__V_69_69;
#line 280 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_95_95 = check_hlds__simplify__simplify_info__V_71_71;
#line 280 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_97_97 = check_hlds__simplify__simplify_info__V_73_73;
#line 280 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_98_98 = check_hlds__simplify__simplify_info__V_74_74;
#line 280 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_99_99 = check_hlds__simplify__simplify_info__V_75_75;
#line 280 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_100_100 = check_hlds__simplify__simplify_info__V_76_76;
#line 280 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_101_101 = check_hlds__simplify__simplify_info__V_77_77;
#line 280 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_102_102 = check_hlds__simplify__simplify_info__V_78_78;
#line 281 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
#line 282 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_43_43 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_31_31, (MR_Integer) 5)))) & (MR_Integer) 1);
#line 282 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_44_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_31_31, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 282 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_46_46 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_31_31, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 282 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_48_48 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_31_31, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);

#line 285 "simplify_info.m"
    {
#line 285 "simplify_info.m"
      check_hlds__simplify__simplify_info__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 285 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_24_24, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__V_86_86));
#line 285 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_24_24, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__V_87_87));
#line 285 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_24_24, 2) = ((MR_Box) (check_hlds__simplify__simplify_info__V_88_88));
#line 285 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_24_24, 3) = ((MR_Box) (check_hlds__simplify__simplify_info__V_89_89));
#line 285 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_24_24, 4) = ((MR_Box) (check_hlds__simplify__simplify_info__V_90_90));
#line 285 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_24_24, 5) = ((MR_Box) (((MR_Integer) 0 | (((MR_Integer) 0 << (MR_Integer) 1)))));
#line 285 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_24_24, 6) = ((MR_Box) (check_hlds__simplify__simplify_info__V_93_93));
#line 285 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_24_24, 7) = ((MR_Box) (((MR_Integer) 1 | ((((check_hlds__simplify__simplify_info__V_95_95 << (MR_Integer) 1)) | (((MR_Integer) 1 << (MR_Integer) 2)))))));
#line 285 "simplify_info.m"
    }
#line 285 "simplify_info.m"
    {
#line 285 "simplify_info.m"
      MR_Word base;
#line 285 "simplify_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 285 "simplify_info.m"
      *check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_7 = base;
#line 285 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__V_97_97));
#line 285 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__V_98_98));
#line 285 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__simplify__simplify_info__V_99_99));
#line 285 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__simplify__simplify_info__V_100_100));
#line 285 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__simplify__simplify_info__V_101_101));
#line 285 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__simplify__simplify_info__V_102_102));
#line 285 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__simplify__simplify_info__V_24_24));
#line 285 "simplify_info.m"
    }
#line 280 "simplify_info.m"
  }
#line 75 "simplify_info.m"
}

#line 70 "simplify_info.m"
void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_init_6_p_0(
#line 70 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__ModuleInfo_7,
#line 70 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__PredId_8,
#line 70 "simplify_info.m"
  MR_Integer check_hlds__simplify__simplify_info__ProcId_9,
#line 70 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__ProcInfo_10,
#line 70 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__SimplifyTasks_11,
#line 70 "simplify_info.m"
  MR_Word * check_hlds__simplify__simplify_info__Info_12)
#line 70 "simplify_info.m"
{
#line 260 "simplify_info.m"
  {
#line 260 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 260 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__Globals_13;
#line 260 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__FullyStrict_14;
#line 260 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__VarSet_15;
#line 260 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__VarTypes_16;
#line 260 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__InstVarSet_17;
#line 260 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__RttiVarMaps_18;
#line 260 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__SubInfo_26;

#line 261 "simplify_info.m"
    {
#line 261 "simplify_info.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__simplify__simplify_info__ModuleInfo_7, &check_hlds__simplify__simplify_info__Globals_13);
    }
#line 262 "simplify_info.m"
    {
#line 262 "simplify_info.m"
      libs__globals__lookup_bool_option_3_p_0(check_hlds__simplify__simplify_info__Globals_13, (MR_Integer) 161, &check_hlds__simplify__simplify_info__FullyStrict_14);
    }
#line 263 "simplify_info.m"
    {
#line 263 "simplify_info.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(check_hlds__simplify__simplify_info__ProcInfo_10, &check_hlds__simplify__simplify_info__VarSet_15);
    }
#line 264 "simplify_info.m"
    {
#line 264 "simplify_info.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(check_hlds__simplify__simplify_info__ProcInfo_10, &check_hlds__simplify__simplify_info__VarTypes_16);
    }
#line 265 "simplify_info.m"
    {
#line 265 "simplify_info.m"
      hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(check_hlds__simplify__simplify_info__ProcInfo_10, &check_hlds__simplify__simplify_info__InstVarSet_17);
    }
#line 266 "simplify_info.m"
    {
#line 266 "simplify_info.m"
      hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(check_hlds__simplify__simplify_info__ProcInfo_10, &check_hlds__simplify__simplify_info__RttiVarMaps_18);
    }
#line 274 "simplify_info.m"
    {
#line 274 "simplify_info.m"
      check_hlds__simplify__simplify_info__SubInfo_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 274 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SubInfo_26, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__PredId_8));
#line 274 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SubInfo_26, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__ProcId_9));
#line 274 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SubInfo_26, 2) = ((MR_Box) (check_hlds__simplify__simplify_info__InstVarSet_17));
#line 274 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SubInfo_26, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 274 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SubInfo_26, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 274 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SubInfo_26, 5) = ((MR_Box) (((MR_Integer) 0 | (((MR_Integer) 0 << (MR_Integer) 1)))));
#line 274 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SubInfo_26, 6) = ((MR_Box) ((MR_Integer) 0));
#line 274 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SubInfo_26, 7) = ((MR_Box) (((MR_Integer) 1 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((MR_Integer) 1 << (MR_Integer) 2)))))));
#line 274 "simplify_info.m"
    }
#line 277 "simplify_info.m"
    {
#line 277 "simplify_info.m"
      MR_Word base;
#line 277 "simplify_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 277 "simplify_info.m"
      *check_hlds__simplify__simplify_info__Info_12 = base;
#line 277 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__SimplifyTasks_11));
#line 277 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__ModuleInfo_7));
#line 277 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__simplify__simplify_info__VarSet_15));
#line 277 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__simplify__simplify_info__VarTypes_16));
#line 277 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__simplify__simplify_info__RttiVarMaps_18));
#line 277 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__simplify__simplify_info__FullyStrict_14));
#line 277 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__simplify__simplify_info__SubInfo_26));
#line 277 "simplify_info.m"
    }
#line 260 "simplify_info.m"
  }
#line 70 "simplify_info.m"
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
