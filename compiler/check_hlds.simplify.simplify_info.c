/*
** Automatically generated from `simplify_info.m'
** by the Mercury compiler,
** version rotd-2015-02-04
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




#line 137 "check_hlds.simplify.simplify_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__simplify_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 140 "check_hlds.simplify.simplify_info.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__simplify__simplify_info__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 143 "check_hlds.simplify.simplify_info.c"
static const MR_DuFunctorDesc check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_functor_desc_innermost_proc_0_0;

#line 146 "check_hlds.simplify.simplify_info.c"
static const MR_PseudoTypeInfo check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__field_types_innermost_proc_0_1[1];

#line 149 "check_hlds.simplify.simplify_info.c"
static const MR_DuFunctorDesc check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_functor_desc_innermost_proc_0_1;

#line 152 "check_hlds.simplify.simplify_info.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_stag_ordered_innermost_proc_0_0[1];

#line 155 "check_hlds.simplify.simplify_info.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_stag_ordered_innermost_proc_0_1[1];

#line 158 "check_hlds.simplify.simplify_info.c"
static const MR_DuPtagLayout check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_ptag_ordered_innermost_proc_0[2];

#line 161 "check_hlds.simplify.simplify_info.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_name_ordered_innermost_proc_0[2];

#line 164 "check_hlds.simplify.simplify_info.c"
static const MR_Integer check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__functor_number_map_innermost_proc_0[2];

#line 167 "check_hlds.simplify.simplify_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__simplify_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 170 "check_hlds.simplify.simplify_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__simplify_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 173 "check_hlds.simplify.simplify_info.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__simplify__simplify_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 176 "check_hlds.simplify.simplify_info.c"
static const MR_PseudoTypeInfo check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__field_types_simplify_info_0_0[7];

#line 179 "check_hlds.simplify.simplify_info.c"
static const MR_ConstString check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__field_names_simplify_info_0_0[7];

#line 182 "check_hlds.simplify.simplify_info.c"
static const MR_DuFunctorDesc check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_functor_desc_simplify_info_0_0;

#line 185 "check_hlds.simplify.simplify_info.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_stag_ordered_simplify_info_0_0[1];

#line 188 "check_hlds.simplify.simplify_info.c"
static const MR_DuPtagLayout check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_ptag_ordered_simplify_info_0[1];

#line 191 "check_hlds.simplify.simplify_info.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_name_ordered_simplify_info_0[1];

#line 194 "check_hlds.simplify.simplify_info.c"
static const MR_Integer check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__functor_number_map_simplify_info_0[1];

#line 197 "check_hlds.simplify.simplify_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__simplify_info__maybe__ti_maybe_1check_hlds__simplify__simplify_info__type_ctor_info_innermost_proc_0;

#line 200 "check_hlds.simplify.simplify_info.c"
static const MR_PseudoTypeInfo check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__field_types_simplify_nested_context_0_0[3];

#line 203 "check_hlds.simplify.simplify_info.c"
static const MR_ConstString check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__field_names_simplify_nested_context_0_0[3];

#line 206 "check_hlds.simplify.simplify_info.c"
static const MR_DuFunctorDesc check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_functor_desc_simplify_nested_context_0_0;

#line 209 "check_hlds.simplify.simplify_info.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_stag_ordered_simplify_nested_context_0_0[1];

#line 212 "check_hlds.simplify.simplify_info.c"
static const MR_DuPtagLayout check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_ptag_ordered_simplify_nested_context_0[1];

#line 215 "check_hlds.simplify.simplify_info.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_name_ordered_simplify_nested_context_0[1];

#line 218 "check_hlds.simplify.simplify_info.c"
static const MR_Integer check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__functor_number_map_simplify_nested_context_0[1];

#line 221 "check_hlds.simplify.simplify_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__simplify_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0;

#line 224 "check_hlds.simplify.simplify_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__simplify_info__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 227 "check_hlds.simplify.simplify_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__simplify_info__list__ti_list_1list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 230 "check_hlds.simplify.simplify_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__simplify_info__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0;

#line 233 "check_hlds.simplify.simplify_info.c"
static const MR_PseudoTypeInfo check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__field_types_simplify_sub_info_0_0[11];

#line 236 "check_hlds.simplify.simplify_info.c"
static const MR_ConstString check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__field_names_simplify_sub_info_0_0[11];

#line 239 "check_hlds.simplify.simplify_info.c"
static const MR_DuArgLocn check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__field_locns_simplify_sub_info_0_0[11];

#line 242 "check_hlds.simplify.simplify_info.c"
static const MR_DuFunctorDesc check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_functor_desc_simplify_sub_info_0_0;

#line 245 "check_hlds.simplify.simplify_info.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_stag_ordered_simplify_sub_info_0_0[1];

#line 248 "check_hlds.simplify.simplify_info.c"
static const MR_DuPtagLayout check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_ptag_ordered_simplify_sub_info_0[1];

#line 251 "check_hlds.simplify.simplify_info.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_name_ordered_simplify_sub_info_0[1];

#line 254 "check_hlds.simplify.simplify_info.c"
static const MR_Integer check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__functor_number_map_simplify_sub_info_0[1];

#line 257 "check_hlds.simplify.simplify_info.c"
static MR_bool MR_CALL 
check_hlds__simplify__simplify_info____Unify____innermost_proc_0_0_10001(
#line 260 "check_hlds.simplify.simplify_info.c"
  MR_Box check_hlds__simplify__simplify_info__wrapper_arg_1,
#line 262 "check_hlds.simplify.simplify_info.c"
  MR_Box check_hlds__simplify__simplify_info__wrapper_arg_2);

#line 265 "check_hlds.simplify.simplify_info.c"
static void MR_CALL 
check_hlds__simplify__simplify_info____Compare____innermost_proc_0_0_10001(
#line 268 "check_hlds.simplify.simplify_info.c"
  MR_Box * check_hlds__simplify__simplify_info__wrapper_arg_1,
#line 270 "check_hlds.simplify.simplify_info.c"
  MR_Box check_hlds__simplify__simplify_info__wrapper_arg_2,
#line 272 "check_hlds.simplify.simplify_info.c"
  MR_Box check_hlds__simplify__simplify_info__wrapper_arg_3);

#line 275 "check_hlds.simplify.simplify_info.c"
static MR_bool MR_CALL 
check_hlds__simplify__simplify_info____Unify____simplify_info_0_0_10001(
#line 278 "check_hlds.simplify.simplify_info.c"
  MR_Box check_hlds__simplify__simplify_info__wrapper_arg_1,
#line 280 "check_hlds.simplify.simplify_info.c"
  MR_Box check_hlds__simplify__simplify_info__wrapper_arg_2);

#line 283 "check_hlds.simplify.simplify_info.c"
static void MR_CALL 
check_hlds__simplify__simplify_info____Compare____simplify_info_0_0_10001(
#line 286 "check_hlds.simplify.simplify_info.c"
  MR_Box * check_hlds__simplify__simplify_info__wrapper_arg_1,
#line 288 "check_hlds.simplify.simplify_info.c"
  MR_Box check_hlds__simplify__simplify_info__wrapper_arg_2,
#line 290 "check_hlds.simplify.simplify_info.c"
  MR_Box check_hlds__simplify__simplify_info__wrapper_arg_3);

#line 293 "check_hlds.simplify.simplify_info.c"
static MR_bool MR_CALL 
check_hlds__simplify__simplify_info____Unify____simplify_nested_context_0_0_10001(
#line 296 "check_hlds.simplify.simplify_info.c"
  MR_Box check_hlds__simplify__simplify_info__wrapper_arg_1,
#line 298 "check_hlds.simplify.simplify_info.c"
  MR_Box check_hlds__simplify__simplify_info__wrapper_arg_2);

#line 301 "check_hlds.simplify.simplify_info.c"
static void MR_CALL 
check_hlds__simplify__simplify_info____Compare____simplify_nested_context_0_0_10001(
#line 304 "check_hlds.simplify.simplify_info.c"
  MR_Box * check_hlds__simplify__simplify_info__wrapper_arg_1,
#line 306 "check_hlds.simplify.simplify_info.c"
  MR_Box check_hlds__simplify__simplify_info__wrapper_arg_2,
#line 308 "check_hlds.simplify.simplify_info.c"
  MR_Box check_hlds__simplify__simplify_info__wrapper_arg_3);

#line 311 "check_hlds.simplify.simplify_info.c"
static MR_bool MR_CALL 
check_hlds__simplify__simplify_info____Unify____simplify_sub_info_0_0_10001(
#line 314 "check_hlds.simplify.simplify_info.c"
  MR_Box check_hlds__simplify__simplify_info__wrapper_arg_1,
#line 316 "check_hlds.simplify.simplify_info.c"
  MR_Box check_hlds__simplify__simplify_info__wrapper_arg_2);

#line 319 "check_hlds.simplify.simplify_info.c"
static void MR_CALL 
check_hlds__simplify__simplify_info____Compare____simplify_sub_info_0_0_10001(
#line 322 "check_hlds.simplify.simplify_info.c"
  MR_Box * check_hlds__simplify__simplify_info__wrapper_arg_1,
#line 324 "check_hlds.simplify.simplify_info.c"
  MR_Box check_hlds__simplify__simplify_info__wrapper_arg_2,
#line 326 "check_hlds.simplify.simplify_info.c"
  MR_Box check_hlds__simplify__simplify_info__wrapper_arg_3);

#line 230 "simplify_info.m"
static void MR_CALL 
check_hlds__simplify__simplify_info____Compare____simplify_sub_info_0_0(
#line 230 "simplify_info.m"
  MR_Word * check_hlds__simplify__simplify_info__HeadVar__1_1,
#line 230 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__HeadVar__2_2,
#line 230 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__HeadVar__3_3);

#line 230 "simplify_info.m"
static MR_bool MR_CALL 
check_hlds__simplify__simplify_info____Unify____simplify_sub_info_0_0(
#line 230 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__HeadVar__1_1,
#line 230 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__HeadVar__2_2);

#line 326 "simplify_info.m"
static void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_apply_substitutions_and_duplicate_5_p_0_1(
#line 326 "simplify_info.m"
  MR_Box check_hlds__simplify__simplify_info__closure_arg,
#line 326 "simplify_info.m"
  MR_Box check_hlds__simplify__simplify_info__wrapper_arg_1,
#line 326 "simplify_info.m"
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



#line 437 "check_hlds.simplify.simplify_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__simplify_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 445 "check_hlds.simplify.simplify_info.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__simplify__simplify_info__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &check_hlds__simplify__simplify_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 454 "check_hlds.simplify.simplify_info.c"
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

#line 469 "check_hlds.simplify.simplify_info.c"
static const MR_PseudoTypeInfo check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__field_types_innermost_proc_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0
};

#line 474 "check_hlds.simplify.simplify_info.c"
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

#line 489 "check_hlds.simplify.simplify_info.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_stag_ordered_innermost_proc_0_0[1] = {
  &check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_functor_desc_innermost_proc_0_0
};

#line 494 "check_hlds.simplify.simplify_info.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_stag_ordered_innermost_proc_0_1[1] = {
  &check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_functor_desc_innermost_proc_0_1
};

#line 499 "check_hlds.simplify.simplify_info.c"
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

#line 513 "check_hlds.simplify.simplify_info.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_name_ordered_innermost_proc_0[2] = {
  &check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_functor_desc_innermost_proc_0_1,
  &check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_functor_desc_innermost_proc_0_0
};

#line 519 "check_hlds.simplify.simplify_info.c"
static const MR_Integer check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__functor_number_map_innermost_proc_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 525 "check_hlds.simplify.simplify_info.c"
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

#line 546 "check_hlds.simplify.simplify_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__simplify_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 554 "check_hlds.simplify.simplify_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__simplify_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 562 "check_hlds.simplify.simplify_info.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__simplify__simplify_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &check_hlds__simplify__simplify_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 571 "check_hlds.simplify.simplify_info.c"
static const MR_PseudoTypeInfo check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__field_types_simplify_info_0_0[7] = {
  (MR_PseudoTypeInfo) &check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__type_ctor_info_simplify_tasks_0,
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__simplify_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__simplify_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__type_ctor_info_simplify_sub_info_0
};

#line 582 "check_hlds.simplify.simplify_info.c"
static const MR_ConstString check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__field_names_simplify_info_0_0[7] = {
  (MR_String) "simp_simplify_tasks",
  (MR_String) "simp_module_info",
  (MR_String) "simp_varset",
  (MR_String) "simp_vartypes",
  (MR_String) "simp_rtti_varmaps",
  (MR_String) "simp_fully_strict",
  (MR_String) "simp_sub_info"
};

#line 593 "check_hlds.simplify.simplify_info.c"
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

#line 608 "check_hlds.simplify.simplify_info.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_stag_ordered_simplify_info_0_0[1] = {
  &check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_functor_desc_simplify_info_0_0
};

#line 613 "check_hlds.simplify.simplify_info.c"
static const MR_DuPtagLayout check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_ptag_ordered_simplify_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_stag_ordered_simplify_info_0_0
  }
};

#line 622 "check_hlds.simplify.simplify_info.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_name_ordered_simplify_info_0[1] = {
  &check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_functor_desc_simplify_info_0_0
};

#line 627 "check_hlds.simplify.simplify_info.c"
static const MR_Integer check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__functor_number_map_simplify_info_0[1] = {
  (MR_Integer) 0
};

#line 632 "check_hlds.simplify.simplify_info.c"
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

#line 653 "check_hlds.simplify.simplify_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__simplify_info__maybe__ti_maybe_1check_hlds__simplify__simplify_info__type_ctor_info_innermost_proc_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__type_ctor_info_innermost_proc_0
  }
};

#line 661 "check_hlds.simplify.simplify_info.c"
static const MR_PseudoTypeInfo check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__field_types_simplify_nested_context_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__simplify_info__maybe__ti_maybe_1check_hlds__simplify__simplify_info__type_ctor_info_innermost_proc_0
};

#line 668 "check_hlds.simplify.simplify_info.c"
static const MR_ConstString check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__field_names_simplify_nested_context_0_0[3] = {
  (MR_String) "snc_inside_dupl_for_switch",
  (MR_String) "snc_num_enclosing_lambdas",
  (MR_String) "snc_proc_is_model_non"
};

#line 675 "check_hlds.simplify.simplify_info.c"
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

#line 690 "check_hlds.simplify.simplify_info.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_stag_ordered_simplify_nested_context_0_0[1] = {
  &check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_functor_desc_simplify_nested_context_0_0
};

#line 695 "check_hlds.simplify.simplify_info.c"
static const MR_DuPtagLayout check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_ptag_ordered_simplify_nested_context_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_stag_ordered_simplify_nested_context_0_0
  }
};

#line 704 "check_hlds.simplify.simplify_info.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_name_ordered_simplify_nested_context_0[1] = {
  &check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_functor_desc_simplify_nested_context_0_0
};

#line 709 "check_hlds.simplify.simplify_info.c"
static const MR_Integer check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__functor_number_map_simplify_nested_context_0[1] = {
  (MR_Integer) 0
};

#line 714 "check_hlds.simplify.simplify_info.c"
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

#line 735 "check_hlds.simplify.simplify_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__simplify_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

#line 743 "check_hlds.simplify.simplify_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__simplify_info__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__simplify__simplify_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 751 "check_hlds.simplify.simplify_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__simplify_info__list__ti_list_1list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__simplify__simplify_info__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 759 "check_hlds.simplify.simplify_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__simplify_info__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 767 "check_hlds.simplify.simplify_info.c"
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

#line 782 "check_hlds.simplify.simplify_info.c"
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

#line 797 "check_hlds.simplify.simplify_info.c"
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

#line 856 "check_hlds.simplify.simplify_info.c"
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

#line 871 "check_hlds.simplify.simplify_info.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_stag_ordered_simplify_sub_info_0_0[1] = {
  &check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_functor_desc_simplify_sub_info_0_0
};

#line 876 "check_hlds.simplify.simplify_info.c"
static const MR_DuPtagLayout check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_ptag_ordered_simplify_sub_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_stag_ordered_simplify_sub_info_0_0
  }
};

#line 885 "check_hlds.simplify.simplify_info.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_name_ordered_simplify_sub_info_0[1] = {
  &check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_functor_desc_simplify_sub_info_0_0
};

#line 890 "check_hlds.simplify.simplify_info.c"
static const MR_Integer check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__functor_number_map_simplify_sub_info_0[1] = {
  (MR_Integer) 0
};

#line 895 "check_hlds.simplify.simplify_info.c"
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

#line 916 "check_hlds.simplify.simplify_info.c"
static MR_bool MR_CALL 
check_hlds__simplify__simplify_info____Unify____innermost_proc_0_0_10001(
#line 919 "check_hlds.simplify.simplify_info.c"
  MR_Box check_hlds__simplify__simplify_info__wrapper_arg_1,
#line 921 "check_hlds.simplify.simplify_info.c"
  MR_Box check_hlds__simplify__simplify_info__wrapper_arg_2)
#line 923 "check_hlds.simplify.simplify_info.c"
{
#line 925 "check_hlds.simplify.simplify_info.c"
  {
#line 927 "check_hlds.simplify.simplify_info.c"
    MR_bool check_hlds__simplify__simplify_info__succeeded;

#line 930 "check_hlds.simplify.simplify_info.c"
    {
#line 932 "check_hlds.simplify.simplify_info.c"
      check_hlds__simplify__simplify_info__succeeded = check_hlds__simplify__simplify_info____Unify____innermost_proc_0_0(((MR_Word) check_hlds__simplify__simplify_info__wrapper_arg_1), ((MR_Word) check_hlds__simplify__simplify_info__wrapper_arg_2));
    }
#line 935 "check_hlds.simplify.simplify_info.c"
    return check_hlds__simplify__simplify_info__succeeded;
#line 937 "check_hlds.simplify.simplify_info.c"
  }
#line 939 "check_hlds.simplify.simplify_info.c"
}

#line 942 "check_hlds.simplify.simplify_info.c"
static void MR_CALL 
check_hlds__simplify__simplify_info____Compare____innermost_proc_0_0_10001(
#line 945 "check_hlds.simplify.simplify_info.c"
  MR_Box * check_hlds__simplify__simplify_info__wrapper_arg_1,
#line 947 "check_hlds.simplify.simplify_info.c"
  MR_Box check_hlds__simplify__simplify_info__wrapper_arg_2,
#line 949 "check_hlds.simplify.simplify_info.c"
  MR_Box check_hlds__simplify__simplify_info__wrapper_arg_3)
#line 951 "check_hlds.simplify.simplify_info.c"
{
#line 953 "check_hlds.simplify.simplify_info.c"
  {
#line 955 "check_hlds.simplify.simplify_info.c"
    MR_Word check_hlds__simplify__simplify_info__conv0_HeadVar__1_1;

#line 958 "check_hlds.simplify.simplify_info.c"
    {
#line 960 "check_hlds.simplify.simplify_info.c"
      check_hlds__simplify__simplify_info____Compare____innermost_proc_0_0(&check_hlds__simplify__simplify_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__simplify__simplify_info__wrapper_arg_2), ((MR_Word) check_hlds__simplify__simplify_info__wrapper_arg_3));
    }
#line 963 "check_hlds.simplify.simplify_info.c"
    *check_hlds__simplify__simplify_info__wrapper_arg_1 = ((MR_Box) (check_hlds__simplify__simplify_info__conv0_HeadVar__1_1));
#line 965 "check_hlds.simplify.simplify_info.c"
  }
#line 967 "check_hlds.simplify.simplify_info.c"
}

#line 970 "check_hlds.simplify.simplify_info.c"
static MR_bool MR_CALL 
check_hlds__simplify__simplify_info____Unify____simplify_info_0_0_10001(
#line 973 "check_hlds.simplify.simplify_info.c"
  MR_Box check_hlds__simplify__simplify_info__wrapper_arg_1,
#line 975 "check_hlds.simplify.simplify_info.c"
  MR_Box check_hlds__simplify__simplify_info__wrapper_arg_2)
#line 977 "check_hlds.simplify.simplify_info.c"
{
#line 979 "check_hlds.simplify.simplify_info.c"
  {
#line 981 "check_hlds.simplify.simplify_info.c"
    MR_bool check_hlds__simplify__simplify_info__succeeded;

#line 984 "check_hlds.simplify.simplify_info.c"
    {
#line 986 "check_hlds.simplify.simplify_info.c"
      check_hlds__simplify__simplify_info__succeeded = check_hlds__simplify__simplify_info____Unify____simplify_info_0_0(((MR_Word) check_hlds__simplify__simplify_info__wrapper_arg_1), ((MR_Word) check_hlds__simplify__simplify_info__wrapper_arg_2));
    }
#line 989 "check_hlds.simplify.simplify_info.c"
    return check_hlds__simplify__simplify_info__succeeded;
#line 991 "check_hlds.simplify.simplify_info.c"
  }
#line 993 "check_hlds.simplify.simplify_info.c"
}

#line 996 "check_hlds.simplify.simplify_info.c"
static void MR_CALL 
check_hlds__simplify__simplify_info____Compare____simplify_info_0_0_10001(
#line 999 "check_hlds.simplify.simplify_info.c"
  MR_Box * check_hlds__simplify__simplify_info__wrapper_arg_1,
#line 1001 "check_hlds.simplify.simplify_info.c"
  MR_Box check_hlds__simplify__simplify_info__wrapper_arg_2,
#line 1003 "check_hlds.simplify.simplify_info.c"
  MR_Box check_hlds__simplify__simplify_info__wrapper_arg_3)
#line 1005 "check_hlds.simplify.simplify_info.c"
{
#line 1007 "check_hlds.simplify.simplify_info.c"
  {
#line 1009 "check_hlds.simplify.simplify_info.c"
    MR_Word check_hlds__simplify__simplify_info__conv0_HeadVar__1_1;

#line 1012 "check_hlds.simplify.simplify_info.c"
    {
#line 1014 "check_hlds.simplify.simplify_info.c"
      check_hlds__simplify__simplify_info____Compare____simplify_info_0_0(&check_hlds__simplify__simplify_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__simplify__simplify_info__wrapper_arg_2), ((MR_Word) check_hlds__simplify__simplify_info__wrapper_arg_3));
    }
#line 1017 "check_hlds.simplify.simplify_info.c"
    *check_hlds__simplify__simplify_info__wrapper_arg_1 = ((MR_Box) (check_hlds__simplify__simplify_info__conv0_HeadVar__1_1));
#line 1019 "check_hlds.simplify.simplify_info.c"
  }
#line 1021 "check_hlds.simplify.simplify_info.c"
}

#line 1024 "check_hlds.simplify.simplify_info.c"
static MR_bool MR_CALL 
check_hlds__simplify__simplify_info____Unify____simplify_nested_context_0_0_10001(
#line 1027 "check_hlds.simplify.simplify_info.c"
  MR_Box check_hlds__simplify__simplify_info__wrapper_arg_1,
#line 1029 "check_hlds.simplify.simplify_info.c"
  MR_Box check_hlds__simplify__simplify_info__wrapper_arg_2)
#line 1031 "check_hlds.simplify.simplify_info.c"
{
#line 1033 "check_hlds.simplify.simplify_info.c"
  {
#line 1035 "check_hlds.simplify.simplify_info.c"
    MR_bool check_hlds__simplify__simplify_info__succeeded;

#line 1038 "check_hlds.simplify.simplify_info.c"
    {
#line 1040 "check_hlds.simplify.simplify_info.c"
      check_hlds__simplify__simplify_info__succeeded = check_hlds__simplify__simplify_info____Unify____simplify_nested_context_0_0(((MR_Word) check_hlds__simplify__simplify_info__wrapper_arg_1), ((MR_Word) check_hlds__simplify__simplify_info__wrapper_arg_2));
    }
#line 1043 "check_hlds.simplify.simplify_info.c"
    return check_hlds__simplify__simplify_info__succeeded;
#line 1045 "check_hlds.simplify.simplify_info.c"
  }
#line 1047 "check_hlds.simplify.simplify_info.c"
}

#line 1050 "check_hlds.simplify.simplify_info.c"
static void MR_CALL 
check_hlds__simplify__simplify_info____Compare____simplify_nested_context_0_0_10001(
#line 1053 "check_hlds.simplify.simplify_info.c"
  MR_Box * check_hlds__simplify__simplify_info__wrapper_arg_1,
#line 1055 "check_hlds.simplify.simplify_info.c"
  MR_Box check_hlds__simplify__simplify_info__wrapper_arg_2,
#line 1057 "check_hlds.simplify.simplify_info.c"
  MR_Box check_hlds__simplify__simplify_info__wrapper_arg_3)
#line 1059 "check_hlds.simplify.simplify_info.c"
{
#line 1061 "check_hlds.simplify.simplify_info.c"
  {
#line 1063 "check_hlds.simplify.simplify_info.c"
    MR_Word check_hlds__simplify__simplify_info__conv0_HeadVar__1_1;

#line 1066 "check_hlds.simplify.simplify_info.c"
    {
#line 1068 "check_hlds.simplify.simplify_info.c"
      check_hlds__simplify__simplify_info____Compare____simplify_nested_context_0_0(&check_hlds__simplify__simplify_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__simplify__simplify_info__wrapper_arg_2), ((MR_Word) check_hlds__simplify__simplify_info__wrapper_arg_3));
    }
#line 1071 "check_hlds.simplify.simplify_info.c"
    *check_hlds__simplify__simplify_info__wrapper_arg_1 = ((MR_Box) (check_hlds__simplify__simplify_info__conv0_HeadVar__1_1));
#line 1073 "check_hlds.simplify.simplify_info.c"
  }
#line 1075 "check_hlds.simplify.simplify_info.c"
}

#line 1078 "check_hlds.simplify.simplify_info.c"
static MR_bool MR_CALL 
check_hlds__simplify__simplify_info____Unify____simplify_sub_info_0_0_10001(
#line 1081 "check_hlds.simplify.simplify_info.c"
  MR_Box check_hlds__simplify__simplify_info__wrapper_arg_1,
#line 1083 "check_hlds.simplify.simplify_info.c"
  MR_Box check_hlds__simplify__simplify_info__wrapper_arg_2)
#line 1085 "check_hlds.simplify.simplify_info.c"
{
#line 1087 "check_hlds.simplify.simplify_info.c"
  {
#line 1089 "check_hlds.simplify.simplify_info.c"
    MR_bool check_hlds__simplify__simplify_info__succeeded;

#line 1092 "check_hlds.simplify.simplify_info.c"
    {
#line 1094 "check_hlds.simplify.simplify_info.c"
      check_hlds__simplify__simplify_info__succeeded = check_hlds__simplify__simplify_info____Unify____simplify_sub_info_0_0(((MR_Word) check_hlds__simplify__simplify_info__wrapper_arg_1), ((MR_Word) check_hlds__simplify__simplify_info__wrapper_arg_2));
    }
#line 1097 "check_hlds.simplify.simplify_info.c"
    return check_hlds__simplify__simplify_info__succeeded;
#line 1099 "check_hlds.simplify.simplify_info.c"
  }
#line 1101 "check_hlds.simplify.simplify_info.c"
}

#line 1104 "check_hlds.simplify.simplify_info.c"
static void MR_CALL 
check_hlds__simplify__simplify_info____Compare____simplify_sub_info_0_0_10001(
#line 1107 "check_hlds.simplify.simplify_info.c"
  MR_Box * check_hlds__simplify__simplify_info__wrapper_arg_1,
#line 1109 "check_hlds.simplify.simplify_info.c"
  MR_Box check_hlds__simplify__simplify_info__wrapper_arg_2,
#line 1111 "check_hlds.simplify.simplify_info.c"
  MR_Box check_hlds__simplify__simplify_info__wrapper_arg_3)
#line 1113 "check_hlds.simplify.simplify_info.c"
{
#line 1115 "check_hlds.simplify.simplify_info.c"
  {
#line 1117 "check_hlds.simplify.simplify_info.c"
    MR_Word check_hlds__simplify__simplify_info__conv0_HeadVar__1_1;

#line 1120 "check_hlds.simplify.simplify_info.c"
    {
#line 1122 "check_hlds.simplify.simplify_info.c"
      check_hlds__simplify__simplify_info____Compare____simplify_sub_info_0_0(&check_hlds__simplify__simplify_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__simplify__simplify_info__wrapper_arg_2), ((MR_Word) check_hlds__simplify__simplify_info__wrapper_arg_3));
    }
#line 1125 "check_hlds.simplify.simplify_info.c"
    *check_hlds__simplify__simplify_info__wrapper_arg_1 = ((MR_Box) (check_hlds__simplify__simplify_info__conv0_HeadVar__1_1));
#line 1127 "check_hlds.simplify.simplify_info.c"
  }
#line 1129 "check_hlds.simplify.simplify_info.c"
}

#line 230 "simplify_info.m"
static void MR_CALL 
check_hlds__simplify__simplify_info____Compare____simplify_sub_info_0_0(
#line 230 "simplify_info.m"
  MR_Word * check_hlds__simplify__simplify_info__HeadVar__1_1,
#line 230 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__HeadVar__2_2,
#line 230 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__HeadVar__3_3)
#line 230 "simplify_info.m"
{
#line 230 "simplify_info.m"
  {
#line 230 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 230 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__CastX_36 = (MR_Integer) check_hlds__simplify__simplify_info__HeadVar__2_2;
#line 230 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__CastY_37 = (MR_Integer) check_hlds__simplify__simplify_info__HeadVar__3_3;

#line 230 "simplify_info.m"
    check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__CastX_36 == check_hlds__simplify__simplify_info__CastY_37);
#line 230 "simplify_info.m"
    if (check_hlds__simplify__simplify_info__succeeded)
#line 1156 "check_hlds.simplify.simplify_info.c"
      *check_hlds__simplify__simplify_info__HeadVar__1_1 = (MR_Integer) 0;
#line 230 "simplify_info.m"
    else
#line 230 "simplify_info.m"
      {
#line 230 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 0)));
#line 230 "simplify_info.m"
        MR_Integer check_hlds__simplify__simplify_info__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 1)));
#line 230 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 2)));
#line 230 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 3)));
#line 230 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 4)));
#line 230 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 5)))) & (MR_Integer) 1);
#line 230 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 230 "simplify_info.m"
        MR_Integer check_hlds__simplify__simplify_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 6)));
#line 230 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 230 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 230 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 230 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__3_3, (MR_Integer) 0)));
#line 230 "simplify_info.m"
        MR_Integer check_hlds__simplify__simplify_info__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__3_3, (MR_Integer) 1)));
#line 230 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__3_3, (MR_Integer) 2)));
#line 230 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__3_3, (MR_Integer) 3)));
#line 230 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__3_3, (MR_Integer) 4)));
#line 230 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_20_20 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__3_3, (MR_Integer) 5)))) & (MR_Integer) 1);
#line 230 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__3_3, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 230 "simplify_info.m"
        MR_Integer check_hlds__simplify__simplify_info__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__3_3, (MR_Integer) 6)));
#line 230 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_23_23 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__3_3, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 230 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__3_3, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 230 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__3_3, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 230 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_26_26;

#line 230 "simplify_info.m"
        {
#line 230 "simplify_info.m"
          hlds__hlds_pred____Compare____pred_id_0_0(&check_hlds__simplify__simplify_info__V_26_26, check_hlds__simplify__simplify_info__V_4_4, check_hlds__simplify__simplify_info__V_15_15);
        }
#line 1214 "check_hlds.simplify.simplify_info.c"
        check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_26_26 == (MR_Integer) 0);
#line 230 "simplify_info.m"
        check_hlds__simplify__simplify_info__succeeded = !(check_hlds__simplify__simplify_info__succeeded);
#line 230 "simplify_info.m"
        if (check_hlds__simplify__simplify_info__succeeded)
#line 230 "simplify_info.m"
          *check_hlds__simplify__simplify_info__HeadVar__1_1 = check_hlds__simplify__simplify_info__V_26_26;
#line 230 "simplify_info.m"
        else
#line 230 "simplify_info.m"
          {
#line 230 "simplify_info.m"
            MR_Word check_hlds__simplify__simplify_info__V_27_27;

#line 230 "simplify_info.m"
            {
#line 230 "simplify_info.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__simplify__simplify_info__V_27_27, check_hlds__simplify__simplify_info__V_5_5, check_hlds__simplify__simplify_info__V_16_16);
            }
#line 1234 "check_hlds.simplify.simplify_info.c"
            check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_27_27 == (MR_Integer) 0);
#line 230 "simplify_info.m"
            check_hlds__simplify__simplify_info__succeeded = !(check_hlds__simplify__simplify_info__succeeded);
#line 230 "simplify_info.m"
            if (check_hlds__simplify__simplify_info__succeeded)
#line 230 "simplify_info.m"
              *check_hlds__simplify__simplify_info__HeadVar__1_1 = check_hlds__simplify__simplify_info__V_27_27;
#line 230 "simplify_info.m"
            else
#line 230 "simplify_info.m"
              {
#line 230 "simplify_info.m"
                MR_Word check_hlds__simplify__simplify_info__V_28_28;

#line 230 "simplify_info.m"
                {
#line 230 "simplify_info.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__simplify_info_scalar_common_1[4], &check_hlds__simplify__simplify_info__V_28_28, ((MR_Box) (check_hlds__simplify__simplify_info__V_6_6)), ((MR_Box) (check_hlds__simplify__simplify_info__V_17_17)));
                }
#line 1254 "check_hlds.simplify.simplify_info.c"
                check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_28_28 == (MR_Integer) 0);
#line 230 "simplify_info.m"
                check_hlds__simplify__simplify_info__succeeded = !(check_hlds__simplify__simplify_info__succeeded);
#line 230 "simplify_info.m"
                if (check_hlds__simplify__simplify_info__succeeded)
#line 230 "simplify_info.m"
                  *check_hlds__simplify__simplify_info__HeadVar__1_1 = check_hlds__simplify__simplify_info__V_28_28;
#line 230 "simplify_info.m"
                else
#line 230 "simplify_info.m"
                  {
#line 230 "simplify_info.m"
                    MR_Word check_hlds__simplify__simplify_info__V_29_29;

#line 230 "simplify_info.m"
                    {
#line 230 "simplify_info.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__simplify_info_scalar_common_1[6], &check_hlds__simplify__simplify_info__V_29_29, ((MR_Box) (check_hlds__simplify__simplify_info__V_7_7)), ((MR_Box) (check_hlds__simplify__simplify_info__V_18_18)));
                    }
#line 1274 "check_hlds.simplify.simplify_info.c"
                    check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_29_29 == (MR_Integer) 0);
#line 230 "simplify_info.m"
                    check_hlds__simplify__simplify_info__succeeded = !(check_hlds__simplify__simplify_info__succeeded);
#line 230 "simplify_info.m"
                    if (check_hlds__simplify__simplify_info__succeeded)
#line 230 "simplify_info.m"
                      *check_hlds__simplify__simplify_info__HeadVar__1_1 = check_hlds__simplify__simplify_info__V_29_29;
#line 230 "simplify_info.m"
                    else
#line 230 "simplify_info.m"
                      {
#line 230 "simplify_info.m"
                        MR_Word check_hlds__simplify__simplify_info__V_30_30;

#line 230 "simplify_info.m"
                        {
#line 230 "simplify_info.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__simplify_info_scalar_common_1[7], &check_hlds__simplify__simplify_info__V_30_30, ((MR_Box) (check_hlds__simplify__simplify_info__V_8_8)), ((MR_Box) (check_hlds__simplify__simplify_info__V_19_19)));
                        }
#line 1294 "check_hlds.simplify.simplify_info.c"
                        check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_30_30 == (MR_Integer) 0);
#line 230 "simplify_info.m"
                        check_hlds__simplify__simplify_info__succeeded = !(check_hlds__simplify__simplify_info__succeeded);
#line 230 "simplify_info.m"
                        if (check_hlds__simplify__simplify_info__succeeded)
#line 230 "simplify_info.m"
                          *check_hlds__simplify__simplify_info__HeadVar__1_1 = check_hlds__simplify__simplify_info__V_30_30;
#line 230 "simplify_info.m"
                        else
#line 230 "simplify_info.m"
                          {
#line 230 "simplify_info.m"
                            MR_Word check_hlds__simplify__simplify_info__V_31_31;
#line 230 "simplify_info.m"
                            MR_Integer check_hlds__simplify__simplify_info__V_49_49 = (MR_Integer) check_hlds__simplify__simplify_info__V_9_9;
#line 230 "simplify_info.m"
                            MR_Integer check_hlds__simplify__simplify_info__V_50_50 = (MR_Integer) check_hlds__simplify__simplify_info__V_20_20;

#line 230 "simplify_info.m"
                            {
#line 230 "simplify_info.m"
                              mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__simplify__simplify_info__V_31_31, check_hlds__simplify__simplify_info__V_49_49, check_hlds__simplify__simplify_info__V_50_50);
                            }
#line 1318 "check_hlds.simplify.simplify_info.c"
                            check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_31_31 == (MR_Integer) 0);
#line 230 "simplify_info.m"
                            check_hlds__simplify__simplify_info__succeeded = !(check_hlds__simplify__simplify_info__succeeded);
#line 230 "simplify_info.m"
                            if (check_hlds__simplify__simplify_info__succeeded)
#line 230 "simplify_info.m"
                              *check_hlds__simplify__simplify_info__HeadVar__1_1 = check_hlds__simplify__simplify_info__V_31_31;
#line 230 "simplify_info.m"
                            else
#line 230 "simplify_info.m"
                              {
#line 230 "simplify_info.m"
                                MR_Word check_hlds__simplify__simplify_info__V_32_32;
#line 230 "simplify_info.m"
                                MR_Integer check_hlds__simplify__simplify_info__V_51_51 = (MR_Integer) check_hlds__simplify__simplify_info__V_10_10;
#line 230 "simplify_info.m"
                                MR_Integer check_hlds__simplify__simplify_info__V_52_52 = (MR_Integer) check_hlds__simplify__simplify_info__V_21_21;

#line 230 "simplify_info.m"
                                {
#line 230 "simplify_info.m"
                                  mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__simplify__simplify_info__V_32_32, check_hlds__simplify__simplify_info__V_51_51, check_hlds__simplify__simplify_info__V_52_52);
                                }
#line 1342 "check_hlds.simplify.simplify_info.c"
                                check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_32_32 == (MR_Integer) 0);
#line 230 "simplify_info.m"
                                check_hlds__simplify__simplify_info__succeeded = !(check_hlds__simplify__simplify_info__succeeded);
#line 230 "simplify_info.m"
                                if (check_hlds__simplify__simplify_info__succeeded)
#line 230 "simplify_info.m"
                                  *check_hlds__simplify__simplify_info__HeadVar__1_1 = check_hlds__simplify__simplify_info__V_32_32;
#line 230 "simplify_info.m"
                                else
#line 230 "simplify_info.m"
                                  {
#line 230 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__V_33_33;

#line 230 "simplify_info.m"
                                    {
#line 230 "simplify_info.m"
                                      mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__simplify__simplify_info__V_33_33, check_hlds__simplify__simplify_info__V_11_11, check_hlds__simplify__simplify_info__V_22_22);
                                    }
#line 1362 "check_hlds.simplify.simplify_info.c"
                                    check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_33_33 == (MR_Integer) 0);
#line 230 "simplify_info.m"
                                    check_hlds__simplify__simplify_info__succeeded = !(check_hlds__simplify__simplify_info__succeeded);
#line 230 "simplify_info.m"
                                    if (check_hlds__simplify__simplify_info__succeeded)
#line 230 "simplify_info.m"
                                      *check_hlds__simplify__simplify_info__HeadVar__1_1 = check_hlds__simplify__simplify_info__V_33_33;
#line 230 "simplify_info.m"
                                    else
#line 230 "simplify_info.m"
                                      {
#line 230 "simplify_info.m"
                                        MR_Word check_hlds__simplify__simplify_info__V_34_34;
#line 230 "simplify_info.m"
                                        MR_Integer check_hlds__simplify__simplify_info__V_53_53 = (MR_Integer) check_hlds__simplify__simplify_info__V_12_12;
#line 230 "simplify_info.m"
                                        MR_Integer check_hlds__simplify__simplify_info__V_54_54 = (MR_Integer) check_hlds__simplify__simplify_info__V_23_23;

#line 230 "simplify_info.m"
                                        {
#line 230 "simplify_info.m"
                                          mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__simplify__simplify_info__V_34_34, check_hlds__simplify__simplify_info__V_53_53, check_hlds__simplify__simplify_info__V_54_54);
                                        }
#line 1386 "check_hlds.simplify.simplify_info.c"
                                        check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_34_34 == (MR_Integer) 0);
#line 230 "simplify_info.m"
                                        check_hlds__simplify__simplify_info__succeeded = !(check_hlds__simplify__simplify_info__succeeded);
#line 230 "simplify_info.m"
                                        if (check_hlds__simplify__simplify_info__succeeded)
#line 230 "simplify_info.m"
                                          *check_hlds__simplify__simplify_info__HeadVar__1_1 = check_hlds__simplify__simplify_info__V_34_34;
#line 230 "simplify_info.m"
                                        else
#line 230 "simplify_info.m"
                                          {
#line 230 "simplify_info.m"
                                            MR_Word check_hlds__simplify__simplify_info__V_35_35;
#line 230 "simplify_info.m"
                                            MR_Integer check_hlds__simplify__simplify_info__V_55_55 = (MR_Integer) check_hlds__simplify__simplify_info__V_13_13;
#line 230 "simplify_info.m"
                                            MR_Integer check_hlds__simplify__simplify_info__V_56_56 = (MR_Integer) check_hlds__simplify__simplify_info__V_24_24;

#line 230 "simplify_info.m"
                                            {
#line 230 "simplify_info.m"
                                              mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__simplify__simplify_info__V_35_35, check_hlds__simplify__simplify_info__V_55_55, check_hlds__simplify__simplify_info__V_56_56);
                                            }
#line 1410 "check_hlds.simplify.simplify_info.c"
                                            check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_35_35 == (MR_Integer) 0);
#line 230 "simplify_info.m"
                                            check_hlds__simplify__simplify_info__succeeded = !(check_hlds__simplify__simplify_info__succeeded);
#line 230 "simplify_info.m"
                                            if (check_hlds__simplify__simplify_info__succeeded)
#line 230 "simplify_info.m"
                                              *check_hlds__simplify__simplify_info__HeadVar__1_1 = check_hlds__simplify__simplify_info__V_35_35;
#line 230 "simplify_info.m"
                                            else
#line 230 "simplify_info.m"
                                              {
#line 230 "simplify_info.m"
                                                MR_Integer check_hlds__simplify__simplify_info__V_57_57 = (MR_Integer) check_hlds__simplify__simplify_info__V_14_14;
#line 230 "simplify_info.m"
                                                MR_Integer check_hlds__simplify__simplify_info__V_58_58 = (MR_Integer) check_hlds__simplify__simplify_info__V_25_25;

#line 230 "simplify_info.m"
                                                {
#line 230 "simplify_info.m"
                                                  mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__simplify__simplify_info__HeadVar__1_1, check_hlds__simplify__simplify_info__V_57_57, check_hlds__simplify__simplify_info__V_58_58);
#line 230 "simplify_info.m"
                                                  return;
                                                }
#line 230 "simplify_info.m"
                                              }
#line 230 "simplify_info.m"
                                          }
#line 230 "simplify_info.m"
                                      }
#line 230 "simplify_info.m"
                                  }
#line 230 "simplify_info.m"
                              }
#line 230 "simplify_info.m"
                          }
#line 230 "simplify_info.m"
                      }
#line 230 "simplify_info.m"
                  }
#line 230 "simplify_info.m"
              }
#line 230 "simplify_info.m"
          }
#line 230 "simplify_info.m"
      }
#line 230 "simplify_info.m"
  }
#line 230 "simplify_info.m"
}

#line 230 "simplify_info.m"
static MR_bool MR_CALL 
check_hlds__simplify__simplify_info____Unify____simplify_sub_info_0_0(
#line 230 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__HeadVar__1_1,
#line 230 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__HeadVar__2_2)
#line 230 "simplify_info.m"
{
#line 230 "simplify_info.m"
  {
#line 230 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 230 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__CastX_25 = (MR_Integer) check_hlds__simplify__simplify_info__HeadVar__1_1;
#line 230 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__CastY_26 = (MR_Integer) check_hlds__simplify__simplify_info__HeadVar__2_2;

#line 230 "simplify_info.m"
    check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__CastX_25 == check_hlds__simplify__simplify_info__CastY_26);
#line 230 "simplify_info.m"
    if (check_hlds__simplify__simplify_info__succeeded)
#line 230 "simplify_info.m"
      check_hlds__simplify__simplify_info__succeeded = MR_TRUE;
#line 230 "simplify_info.m"
    else
#line 230 "simplify_info.m"
      {
#line 230 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__TypeInfo_29_29;
#line 230 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__TypeInfo_30_30;
#line 230 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__TypeInfo_31_31;
#line 230 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__1_1, (MR_Integer) 0)));
#line 230 "simplify_info.m"
        MR_Integer check_hlds__simplify__simplify_info__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__1_1, (MR_Integer) 1)));
#line 230 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__1_1, (MR_Integer) 2)));
#line 230 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__1_1, (MR_Integer) 3)));
#line 230 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__1_1, (MR_Integer) 4)));
#line 230 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_8_8 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__1_1, (MR_Integer) 5)))) & (MR_Integer) 1);
#line 230 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__1_1, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 230 "simplify_info.m"
        MR_Integer check_hlds__simplify__simplify_info__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__1_1, (MR_Integer) 6)));
#line 230 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__1_1, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 230 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__1_1, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 230 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__1_1, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 230 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 0)));
#line 230 "simplify_info.m"
        MR_Integer check_hlds__simplify__simplify_info__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 1)));
#line 230 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 2)));
#line 230 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 3)));
#line 230 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 4)));
#line 230 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_19_19 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 5)))) & (MR_Integer) 1);
#line 230 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 230 "simplify_info.m"
        MR_Integer check_hlds__simplify__simplify_info__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 6)));
#line 230 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_22_22 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 230 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 230 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);

#line 1540 "check_hlds.simplify.simplify_info.c"
        {
#line 1542 "check_hlds.simplify.simplify_info.c"
          check_hlds__simplify__simplify_info__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(check_hlds__simplify__simplify_info__V_3_3, check_hlds__simplify__simplify_info__V_14_14);
        }
#line 230 "simplify_info.m"
        if (check_hlds__simplify__simplify_info__succeeded)
#line 230 "simplify_info.m"
          {
#line 1549 "check_hlds.simplify.simplify_info.c"
            check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_4_4 == check_hlds__simplify__simplify_info__V_15_15);
#line 230 "simplify_info.m"
            if (check_hlds__simplify__simplify_info__succeeded)
#line 230 "simplify_info.m"
              {
#line 1555 "check_hlds.simplify.simplify_info.c"
                check_hlds__simplify__simplify_info__TypeInfo_29_29 = (MR_Word) &check_hlds__simplify__simplify_info_scalar_common_1[4];
#line 1557 "check_hlds.simplify.simplify_info.c"
                {
#line 1559 "check_hlds.simplify.simplify_info.c"
                  check_hlds__simplify__simplify_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__simplify_info__TypeInfo_29_29, ((MR_Box) (check_hlds__simplify__simplify_info__V_5_5)), ((MR_Box) (check_hlds__simplify__simplify_info__V_16_16)));
                }
#line 230 "simplify_info.m"
                if (check_hlds__simplify__simplify_info__succeeded)
#line 230 "simplify_info.m"
                  {
#line 1566 "check_hlds.simplify.simplify_info.c"
                    check_hlds__simplify__simplify_info__TypeInfo_30_30 = (MR_Word) &check_hlds__simplify__simplify_info_scalar_common_1[6];
#line 1568 "check_hlds.simplify.simplify_info.c"
                    {
#line 1570 "check_hlds.simplify.simplify_info.c"
                      check_hlds__simplify__simplify_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__simplify_info__TypeInfo_30_30, ((MR_Box) (check_hlds__simplify__simplify_info__V_6_6)), ((MR_Box) (check_hlds__simplify__simplify_info__V_17_17)));
                    }
#line 230 "simplify_info.m"
                    if (check_hlds__simplify__simplify_info__succeeded)
#line 230 "simplify_info.m"
                      {
#line 1577 "check_hlds.simplify.simplify_info.c"
                        check_hlds__simplify__simplify_info__TypeInfo_31_31 = (MR_Word) &check_hlds__simplify__simplify_info_scalar_common_1[7];
#line 1579 "check_hlds.simplify.simplify_info.c"
                        {
#line 1581 "check_hlds.simplify.simplify_info.c"
                          check_hlds__simplify__simplify_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__simplify_info__TypeInfo_31_31, ((MR_Box) (check_hlds__simplify__simplify_info__V_7_7)), ((MR_Box) (check_hlds__simplify__simplify_info__V_18_18)));
                        }
#line 230 "simplify_info.m"
                        if (check_hlds__simplify__simplify_info__succeeded)
#line 230 "simplify_info.m"
                          {
#line 1588 "check_hlds.simplify.simplify_info.c"
                            check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_8_8 == check_hlds__simplify__simplify_info__V_19_19);
#line 230 "simplify_info.m"
                            if (check_hlds__simplify__simplify_info__succeeded)
#line 230 "simplify_info.m"
                              {
#line 1594 "check_hlds.simplify.simplify_info.c"
                                check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_9_9 == check_hlds__simplify__simplify_info__V_20_20);
#line 230 "simplify_info.m"
                                if (check_hlds__simplify__simplify_info__succeeded)
#line 230 "simplify_info.m"
                                  {
#line 1600 "check_hlds.simplify.simplify_info.c"
                                    check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_10_10 == check_hlds__simplify__simplify_info__V_21_21);
#line 230 "simplify_info.m"
                                    if (check_hlds__simplify__simplify_info__succeeded)
#line 230 "simplify_info.m"
                                      {
#line 1606 "check_hlds.simplify.simplify_info.c"
                                        check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_11_11 == check_hlds__simplify__simplify_info__V_22_22);
#line 230 "simplify_info.m"
                                        if (check_hlds__simplify__simplify_info__succeeded)
#line 230 "simplify_info.m"
                                          {
#line 1612 "check_hlds.simplify.simplify_info.c"
                                            check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_12_12 == check_hlds__simplify__simplify_info__V_23_23);
#line 230 "simplify_info.m"
                                            if (check_hlds__simplify__simplify_info__succeeded)
#line 1616 "check_hlds.simplify.simplify_info.c"
                                              check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_13_13 == check_hlds__simplify__simplify_info__V_24_24);
#line 230 "simplify_info.m"
                                          }
#line 230 "simplify_info.m"
                                      }
#line 230 "simplify_info.m"
                                  }
#line 230 "simplify_info.m"
                              }
#line 230 "simplify_info.m"
                          }
#line 230 "simplify_info.m"
                      }
#line 230 "simplify_info.m"
                  }
#line 230 "simplify_info.m"
              }
#line 230 "simplify_info.m"
          }
#line 230 "simplify_info.m"
      }
#line 230 "simplify_info.m"
    return check_hlds__simplify__simplify_info__succeeded;
#line 230 "simplify_info.m"
  }
#line 230 "simplify_info.m"
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
#line 1669 "check_hlds.simplify.simplify_info.c"
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
#line 1699 "check_hlds.simplify.simplify_info.c"
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
#line 1719 "check_hlds.simplify.simplify_info.c"
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

#line 1792 "check_hlds.simplify.simplify_info.c"
        check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_3_3 == check_hlds__simplify__simplify_info__V_6_6);
#line 45 "simplify_info.m"
        if (check_hlds__simplify__simplify_info__succeeded)
#line 45 "simplify_info.m"
          {
#line 1798 "check_hlds.simplify.simplify_info.c"
            check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_4_4 == check_hlds__simplify__simplify_info__V_7_7);
#line 45 "simplify_info.m"
            if (check_hlds__simplify__simplify_info__succeeded)
#line 45 "simplify_info.m"
              {
#line 1804 "check_hlds.simplify.simplify_info.c"
                check_hlds__simplify__simplify_info__TypeInfo_11_11 = (MR_Word) &check_hlds__simplify__simplify_info_scalar_common_1[3];
#line 1806 "check_hlds.simplify.simplify_info.c"
                {
#line 1808 "check_hlds.simplify.simplify_info.c"
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

#line 203 "simplify_info.m"
void MR_CALL 
check_hlds__simplify__simplify_info____Compare____simplify_info_0_0(
#line 203 "simplify_info.m"
  MR_Word * check_hlds__simplify__simplify_info__HeadVar__1_1,
#line 203 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__HeadVar__2_2,
#line 203 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__HeadVar__3_3)
#line 203 "simplify_info.m"
{
#line 203 "simplify_info.m"
  {
#line 203 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 203 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__CastX_24 = (MR_Integer) check_hlds__simplify__simplify_info__HeadVar__2_2;
#line 203 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__CastY_25 = (MR_Integer) check_hlds__simplify__simplify_info__HeadVar__3_3;

#line 203 "simplify_info.m"
    check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__CastX_24 == check_hlds__simplify__simplify_info__CastY_25);
#line 203 "simplify_info.m"
    if (check_hlds__simplify__simplify_info__succeeded)
#line 1848 "check_hlds.simplify.simplify_info.c"
      *check_hlds__simplify__simplify_info__HeadVar__1_1 = (MR_Integer) 0;
#line 203 "simplify_info.m"
    else
#line 203 "simplify_info.m"
      {
#line 203 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 0)));
#line 203 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 1)));
#line 203 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 2)));
#line 203 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 3)));
#line 203 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 4)));
#line 203 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 5)));
#line 203 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 6)));
#line 203 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__3_3, (MR_Integer) 0)));
#line 203 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__3_3, (MR_Integer) 1)));
#line 203 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__3_3, (MR_Integer) 2)));
#line 203 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__3_3, (MR_Integer) 3)));
#line 203 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__3_3, (MR_Integer) 4)));
#line 203 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__3_3, (MR_Integer) 5)));
#line 203 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__3_3, (MR_Integer) 6)));
#line 203 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_18_18;

#line 203 "simplify_info.m"
        {
#line 203 "simplify_info.m"
          check_hlds__simplify__simplify_tasks____Compare____simplify_tasks_0_0(&check_hlds__simplify__simplify_info__V_18_18, check_hlds__simplify__simplify_info__V_4_4, check_hlds__simplify__simplify_info__V_11_11);
        }
#line 1890 "check_hlds.simplify.simplify_info.c"
        check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_18_18 == (MR_Integer) 0);
#line 203 "simplify_info.m"
        check_hlds__simplify__simplify_info__succeeded = !(check_hlds__simplify__simplify_info__succeeded);
#line 203 "simplify_info.m"
        if (check_hlds__simplify__simplify_info__succeeded)
#line 203 "simplify_info.m"
          *check_hlds__simplify__simplify_info__HeadVar__1_1 = check_hlds__simplify__simplify_info__V_18_18;
#line 203 "simplify_info.m"
        else
#line 203 "simplify_info.m"
          {
#line 203 "simplify_info.m"
            MR_Word check_hlds__simplify__simplify_info__V_19_19;

#line 203 "simplify_info.m"
            {
#line 203 "simplify_info.m"
              hlds__hlds_module____Compare____module_info_0_0(&check_hlds__simplify__simplify_info__V_19_19, check_hlds__simplify__simplify_info__V_5_5, check_hlds__simplify__simplify_info__V_12_12);
            }
#line 1910 "check_hlds.simplify.simplify_info.c"
            check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_19_19 == (MR_Integer) 0);
#line 203 "simplify_info.m"
            check_hlds__simplify__simplify_info__succeeded = !(check_hlds__simplify__simplify_info__succeeded);
#line 203 "simplify_info.m"
            if (check_hlds__simplify__simplify_info__succeeded)
#line 203 "simplify_info.m"
              *check_hlds__simplify__simplify_info__HeadVar__1_1 = check_hlds__simplify__simplify_info__V_19_19;
#line 203 "simplify_info.m"
            else
#line 203 "simplify_info.m"
              {
#line 203 "simplify_info.m"
                MR_Word check_hlds__simplify__simplify_info__V_20_20;

#line 203 "simplify_info.m"
                {
#line 203 "simplify_info.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__simplify_info_scalar_common_1[2], &check_hlds__simplify__simplify_info__V_20_20, ((MR_Box) (check_hlds__simplify__simplify_info__V_6_6)), ((MR_Box) (check_hlds__simplify__simplify_info__V_13_13)));
                }
#line 1930 "check_hlds.simplify.simplify_info.c"
                check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_20_20 == (MR_Integer) 0);
#line 203 "simplify_info.m"
                check_hlds__simplify__simplify_info__succeeded = !(check_hlds__simplify__simplify_info__succeeded);
#line 203 "simplify_info.m"
                if (check_hlds__simplify__simplify_info__succeeded)
#line 203 "simplify_info.m"
                  *check_hlds__simplify__simplify_info__HeadVar__1_1 = check_hlds__simplify__simplify_info__V_20_20;
#line 203 "simplify_info.m"
                else
#line 203 "simplify_info.m"
                  {
#line 203 "simplify_info.m"
                    MR_Word check_hlds__simplify__simplify_info__V_21_21;

#line 203 "simplify_info.m"
                    {
#line 203 "simplify_info.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_vartypes_0, &check_hlds__simplify__simplify_info__V_21_21, ((MR_Box) (check_hlds__simplify__simplify_info__V_7_7)), ((MR_Box) (check_hlds__simplify__simplify_info__V_14_14)));
                    }
#line 1950 "check_hlds.simplify.simplify_info.c"
                    check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_21_21 == (MR_Integer) 0);
#line 203 "simplify_info.m"
                    check_hlds__simplify__simplify_info__succeeded = !(check_hlds__simplify__simplify_info__succeeded);
#line 203 "simplify_info.m"
                    if (check_hlds__simplify__simplify_info__succeeded)
#line 203 "simplify_info.m"
                      *check_hlds__simplify__simplify_info__HeadVar__1_1 = check_hlds__simplify__simplify_info__V_21_21;
#line 203 "simplify_info.m"
                    else
#line 203 "simplify_info.m"
                      {
#line 203 "simplify_info.m"
                        MR_Word check_hlds__simplify__simplify_info__V_22_22;

#line 203 "simplify_info.m"
                        {
#line 203 "simplify_info.m"
                          hlds__hlds_rtti____Compare____rtti_varmaps_0_0(&check_hlds__simplify__simplify_info__V_22_22, check_hlds__simplify__simplify_info__V_8_8, check_hlds__simplify__simplify_info__V_15_15);
                        }
#line 1970 "check_hlds.simplify.simplify_info.c"
                        check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_22_22 == (MR_Integer) 0);
#line 203 "simplify_info.m"
                        check_hlds__simplify__simplify_info__succeeded = !(check_hlds__simplify__simplify_info__succeeded);
#line 203 "simplify_info.m"
                        if (check_hlds__simplify__simplify_info__succeeded)
#line 203 "simplify_info.m"
                          *check_hlds__simplify__simplify_info__HeadVar__1_1 = check_hlds__simplify__simplify_info__V_22_22;
#line 203 "simplify_info.m"
                        else
#line 203 "simplify_info.m"
                          {
#line 203 "simplify_info.m"
                            MR_Word check_hlds__simplify__simplify_info__V_23_23;
#line 203 "simplify_info.m"
                            MR_Integer check_hlds__simplify__simplify_info__V_33_33 = (MR_Integer) check_hlds__simplify__simplify_info__V_9_9;
#line 203 "simplify_info.m"
                            MR_Integer check_hlds__simplify__simplify_info__V_34_34 = (MR_Integer) check_hlds__simplify__simplify_info__V_16_16;

#line 203 "simplify_info.m"
                            {
#line 203 "simplify_info.m"
                              mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__simplify__simplify_info__V_23_23, check_hlds__simplify__simplify_info__V_33_33, check_hlds__simplify__simplify_info__V_34_34);
                            }
#line 1994 "check_hlds.simplify.simplify_info.c"
                            check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_23_23 == (MR_Integer) 0);
#line 203 "simplify_info.m"
                            check_hlds__simplify__simplify_info__succeeded = !(check_hlds__simplify__simplify_info__succeeded);
#line 203 "simplify_info.m"
                            if (check_hlds__simplify__simplify_info__succeeded)
#line 203 "simplify_info.m"
                              *check_hlds__simplify__simplify_info__HeadVar__1_1 = check_hlds__simplify__simplify_info__V_23_23;
#line 203 "simplify_info.m"
                            else
#line 230 "simplify_info.m"
                              {
#line 230 "simplify_info.m"
                                MR_Integer check_hlds__simplify__simplify_info__CastX_67 = (MR_Integer) check_hlds__simplify__simplify_info__V_10_10;
#line 230 "simplify_info.m"
                                MR_Integer check_hlds__simplify__simplify_info__CastY_68 = (MR_Integer) check_hlds__simplify__simplify_info__V_17_17;

#line 230 "simplify_info.m"
                                check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__CastX_67 == check_hlds__simplify__simplify_info__CastY_68);
#line 230 "simplify_info.m"
                                if (check_hlds__simplify__simplify_info__succeeded)
#line 2015 "check_hlds.simplify.simplify_info.c"
                                  *check_hlds__simplify__simplify_info__HeadVar__1_1 = (MR_Integer) 0;
#line 230 "simplify_info.m"
                                else
#line 230 "simplify_info.m"
                                  {
#line 230 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, (MR_Integer) 0)));
#line 230 "simplify_info.m"
                                    MR_Integer check_hlds__simplify__simplify_info__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, (MR_Integer) 1)));
#line 230 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, (MR_Integer) 2)));
#line 230 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, (MR_Integer) 3)));
#line 230 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, (MR_Integer) 4)));
#line 230 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__V_40_40 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, (MR_Integer) 5)))) & (MR_Integer) 1);
#line 230 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 230 "simplify_info.m"
                                    MR_Integer check_hlds__simplify__simplify_info__V_42_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, (MR_Integer) 6)));
#line 230 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__V_43_43 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 230 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__V_44_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 230 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__V_45_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 230 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_17_17, (MR_Integer) 0)));
#line 230 "simplify_info.m"
                                    MR_Integer check_hlds__simplify__simplify_info__V_47_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_17_17, (MR_Integer) 1)));
#line 230 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_17_17, (MR_Integer) 2)));
#line 230 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_17_17, (MR_Integer) 3)));
#line 230 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_17_17, (MR_Integer) 4)));
#line 230 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__V_51_51 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_17_17, (MR_Integer) 5)))) & (MR_Integer) 1);
#line 230 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__V_52_52 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_17_17, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 230 "simplify_info.m"
                                    MR_Integer check_hlds__simplify__simplify_info__V_53_53 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_17_17, (MR_Integer) 6)));
#line 230 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__V_54_54 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_17_17, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 230 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__V_55_55 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_17_17, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 230 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__V_56_56 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_17_17, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 230 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__V_57_57;

#line 230 "simplify_info.m"
                                    {
#line 230 "simplify_info.m"
                                      hlds__hlds_pred____Compare____pred_id_0_0(&check_hlds__simplify__simplify_info__V_57_57, check_hlds__simplify__simplify_info__V_35_35, check_hlds__simplify__simplify_info__V_46_46);
                                    }
#line 2073 "check_hlds.simplify.simplify_info.c"
                                    check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_57_57 == (MR_Integer) 0);
#line 230 "simplify_info.m"
                                    check_hlds__simplify__simplify_info__succeeded = !(check_hlds__simplify__simplify_info__succeeded);
#line 230 "simplify_info.m"
                                    if (check_hlds__simplify__simplify_info__succeeded)
#line 230 "simplify_info.m"
                                      *check_hlds__simplify__simplify_info__HeadVar__1_1 = check_hlds__simplify__simplify_info__V_57_57;
#line 230 "simplify_info.m"
                                    else
#line 230 "simplify_info.m"
                                      {
#line 230 "simplify_info.m"
                                        MR_Word check_hlds__simplify__simplify_info__V_58_58;

#line 230 "simplify_info.m"
                                        {
#line 230 "simplify_info.m"
                                          mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__simplify__simplify_info__V_58_58, check_hlds__simplify__simplify_info__V_36_36, check_hlds__simplify__simplify_info__V_47_47);
                                        }
#line 2093 "check_hlds.simplify.simplify_info.c"
                                        check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_58_58 == (MR_Integer) 0);
#line 230 "simplify_info.m"
                                        check_hlds__simplify__simplify_info__succeeded = !(check_hlds__simplify__simplify_info__succeeded);
#line 230 "simplify_info.m"
                                        if (check_hlds__simplify__simplify_info__succeeded)
#line 230 "simplify_info.m"
                                          *check_hlds__simplify__simplify_info__HeadVar__1_1 = check_hlds__simplify__simplify_info__V_58_58;
#line 230 "simplify_info.m"
                                        else
#line 230 "simplify_info.m"
                                          {
#line 230 "simplify_info.m"
                                            MR_Word check_hlds__simplify__simplify_info__V_59_59;

#line 230 "simplify_info.m"
                                            {
#line 230 "simplify_info.m"
                                              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__simplify_info_scalar_common_1[4], &check_hlds__simplify__simplify_info__V_59_59, ((MR_Box) (check_hlds__simplify__simplify_info__V_37_37)), ((MR_Box) (check_hlds__simplify__simplify_info__V_48_48)));
                                            }
#line 2113 "check_hlds.simplify.simplify_info.c"
                                            check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_59_59 == (MR_Integer) 0);
#line 230 "simplify_info.m"
                                            check_hlds__simplify__simplify_info__succeeded = !(check_hlds__simplify__simplify_info__succeeded);
#line 230 "simplify_info.m"
                                            if (check_hlds__simplify__simplify_info__succeeded)
#line 230 "simplify_info.m"
                                              *check_hlds__simplify__simplify_info__HeadVar__1_1 = check_hlds__simplify__simplify_info__V_59_59;
#line 230 "simplify_info.m"
                                            else
#line 230 "simplify_info.m"
                                              {
#line 230 "simplify_info.m"
                                                MR_Word check_hlds__simplify__simplify_info__V_60_60;

#line 230 "simplify_info.m"
                                                {
#line 230 "simplify_info.m"
                                                  mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__simplify_info_scalar_common_1[6], &check_hlds__simplify__simplify_info__V_60_60, ((MR_Box) (check_hlds__simplify__simplify_info__V_38_38)), ((MR_Box) (check_hlds__simplify__simplify_info__V_49_49)));
                                                }
#line 2133 "check_hlds.simplify.simplify_info.c"
                                                check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_60_60 == (MR_Integer) 0);
#line 230 "simplify_info.m"
                                                check_hlds__simplify__simplify_info__succeeded = !(check_hlds__simplify__simplify_info__succeeded);
#line 230 "simplify_info.m"
                                                if (check_hlds__simplify__simplify_info__succeeded)
#line 230 "simplify_info.m"
                                                  *check_hlds__simplify__simplify_info__HeadVar__1_1 = check_hlds__simplify__simplify_info__V_60_60;
#line 230 "simplify_info.m"
                                                else
#line 230 "simplify_info.m"
                                                  {
#line 230 "simplify_info.m"
                                                    MR_Word check_hlds__simplify__simplify_info__V_61_61;

#line 230 "simplify_info.m"
                                                    {
#line 230 "simplify_info.m"
                                                      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__simplify_info_scalar_common_1[7], &check_hlds__simplify__simplify_info__V_61_61, ((MR_Box) (check_hlds__simplify__simplify_info__V_39_39)), ((MR_Box) (check_hlds__simplify__simplify_info__V_50_50)));
                                                    }
#line 2153 "check_hlds.simplify.simplify_info.c"
                                                    check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_61_61 == (MR_Integer) 0);
#line 230 "simplify_info.m"
                                                    check_hlds__simplify__simplify_info__succeeded = !(check_hlds__simplify__simplify_info__succeeded);
#line 230 "simplify_info.m"
                                                    if (check_hlds__simplify__simplify_info__succeeded)
#line 230 "simplify_info.m"
                                                      *check_hlds__simplify__simplify_info__HeadVar__1_1 = check_hlds__simplify__simplify_info__V_61_61;
#line 230 "simplify_info.m"
                                                    else
#line 230 "simplify_info.m"
                                                      {
#line 230 "simplify_info.m"
                                                        MR_Word check_hlds__simplify__simplify_info__V_62_62;
#line 230 "simplify_info.m"
                                                        MR_Integer check_hlds__simplify__simplify_info__V_80_80 = (MR_Integer) check_hlds__simplify__simplify_info__V_40_40;
#line 230 "simplify_info.m"
                                                        MR_Integer check_hlds__simplify__simplify_info__V_81_81 = (MR_Integer) check_hlds__simplify__simplify_info__V_51_51;

#line 230 "simplify_info.m"
                                                        {
#line 230 "simplify_info.m"
                                                          mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__simplify__simplify_info__V_62_62, check_hlds__simplify__simplify_info__V_80_80, check_hlds__simplify__simplify_info__V_81_81);
                                                        }
#line 2177 "check_hlds.simplify.simplify_info.c"
                                                        check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_62_62 == (MR_Integer) 0);
#line 230 "simplify_info.m"
                                                        check_hlds__simplify__simplify_info__succeeded = !(check_hlds__simplify__simplify_info__succeeded);
#line 230 "simplify_info.m"
                                                        if (check_hlds__simplify__simplify_info__succeeded)
#line 230 "simplify_info.m"
                                                          *check_hlds__simplify__simplify_info__HeadVar__1_1 = check_hlds__simplify__simplify_info__V_62_62;
#line 230 "simplify_info.m"
                                                        else
#line 230 "simplify_info.m"
                                                          {
#line 230 "simplify_info.m"
                                                            MR_Word check_hlds__simplify__simplify_info__V_63_63;
#line 230 "simplify_info.m"
                                                            MR_Integer check_hlds__simplify__simplify_info__V_82_82 = (MR_Integer) check_hlds__simplify__simplify_info__V_41_41;
#line 230 "simplify_info.m"
                                                            MR_Integer check_hlds__simplify__simplify_info__V_83_83 = (MR_Integer) check_hlds__simplify__simplify_info__V_52_52;

#line 230 "simplify_info.m"
                                                            {
#line 230 "simplify_info.m"
                                                              mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__simplify__simplify_info__V_63_63, check_hlds__simplify__simplify_info__V_82_82, check_hlds__simplify__simplify_info__V_83_83);
                                                            }
#line 2201 "check_hlds.simplify.simplify_info.c"
                                                            check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_63_63 == (MR_Integer) 0);
#line 230 "simplify_info.m"
                                                            check_hlds__simplify__simplify_info__succeeded = !(check_hlds__simplify__simplify_info__succeeded);
#line 230 "simplify_info.m"
                                                            if (check_hlds__simplify__simplify_info__succeeded)
#line 230 "simplify_info.m"
                                                              *check_hlds__simplify__simplify_info__HeadVar__1_1 = check_hlds__simplify__simplify_info__V_63_63;
#line 230 "simplify_info.m"
                                                            else
#line 230 "simplify_info.m"
                                                              {
#line 230 "simplify_info.m"
                                                                MR_Word check_hlds__simplify__simplify_info__V_64_64;

#line 230 "simplify_info.m"
                                                                {
#line 230 "simplify_info.m"
                                                                  mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__simplify__simplify_info__V_64_64, check_hlds__simplify__simplify_info__V_42_42, check_hlds__simplify__simplify_info__V_53_53);
                                                                }
#line 2221 "check_hlds.simplify.simplify_info.c"
                                                                check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_64_64 == (MR_Integer) 0);
#line 230 "simplify_info.m"
                                                                check_hlds__simplify__simplify_info__succeeded = !(check_hlds__simplify__simplify_info__succeeded);
#line 230 "simplify_info.m"
                                                                if (check_hlds__simplify__simplify_info__succeeded)
#line 230 "simplify_info.m"
                                                                  *check_hlds__simplify__simplify_info__HeadVar__1_1 = check_hlds__simplify__simplify_info__V_64_64;
#line 230 "simplify_info.m"
                                                                else
#line 230 "simplify_info.m"
                                                                  {
#line 230 "simplify_info.m"
                                                                    MR_Word check_hlds__simplify__simplify_info__V_65_65;
#line 230 "simplify_info.m"
                                                                    MR_Integer check_hlds__simplify__simplify_info__V_84_84 = (MR_Integer) check_hlds__simplify__simplify_info__V_43_43;
#line 230 "simplify_info.m"
                                                                    MR_Integer check_hlds__simplify__simplify_info__V_85_85 = (MR_Integer) check_hlds__simplify__simplify_info__V_54_54;

#line 230 "simplify_info.m"
                                                                    {
#line 230 "simplify_info.m"
                                                                      mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__simplify__simplify_info__V_65_65, check_hlds__simplify__simplify_info__V_84_84, check_hlds__simplify__simplify_info__V_85_85);
                                                                    }
#line 2245 "check_hlds.simplify.simplify_info.c"
                                                                    check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_65_65 == (MR_Integer) 0);
#line 230 "simplify_info.m"
                                                                    check_hlds__simplify__simplify_info__succeeded = !(check_hlds__simplify__simplify_info__succeeded);
#line 230 "simplify_info.m"
                                                                    if (check_hlds__simplify__simplify_info__succeeded)
#line 230 "simplify_info.m"
                                                                      *check_hlds__simplify__simplify_info__HeadVar__1_1 = check_hlds__simplify__simplify_info__V_65_65;
#line 230 "simplify_info.m"
                                                                    else
#line 230 "simplify_info.m"
                                                                      {
#line 230 "simplify_info.m"
                                                                        MR_Word check_hlds__simplify__simplify_info__V_66_66;
#line 230 "simplify_info.m"
                                                                        MR_Integer check_hlds__simplify__simplify_info__V_86_86 = (MR_Integer) check_hlds__simplify__simplify_info__V_44_44;
#line 230 "simplify_info.m"
                                                                        MR_Integer check_hlds__simplify__simplify_info__V_87_87 = (MR_Integer) check_hlds__simplify__simplify_info__V_55_55;

#line 230 "simplify_info.m"
                                                                        {
#line 230 "simplify_info.m"
                                                                          mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__simplify__simplify_info__V_66_66, check_hlds__simplify__simplify_info__V_86_86, check_hlds__simplify__simplify_info__V_87_87);
                                                                        }
#line 2269 "check_hlds.simplify.simplify_info.c"
                                                                        check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_66_66 == (MR_Integer) 0);
#line 230 "simplify_info.m"
                                                                        check_hlds__simplify__simplify_info__succeeded = !(check_hlds__simplify__simplify_info__succeeded);
#line 230 "simplify_info.m"
                                                                        if (check_hlds__simplify__simplify_info__succeeded)
#line 230 "simplify_info.m"
                                                                          *check_hlds__simplify__simplify_info__HeadVar__1_1 = check_hlds__simplify__simplify_info__V_66_66;
#line 230 "simplify_info.m"
                                                                        else
#line 230 "simplify_info.m"
                                                                          {
#line 230 "simplify_info.m"
                                                                            MR_Integer check_hlds__simplify__simplify_info__V_88_88 = (MR_Integer) check_hlds__simplify__simplify_info__V_45_45;
#line 230 "simplify_info.m"
                                                                            MR_Integer check_hlds__simplify__simplify_info__V_89_89 = (MR_Integer) check_hlds__simplify__simplify_info__V_56_56;

#line 230 "simplify_info.m"
                                                                            {
#line 230 "simplify_info.m"
                                                                              mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__simplify__simplify_info__HeadVar__1_1, check_hlds__simplify__simplify_info__V_88_88, check_hlds__simplify__simplify_info__V_89_89);
#line 230 "simplify_info.m"
                                                                              return;
                                                                            }
#line 230 "simplify_info.m"
                                                                          }
#line 230 "simplify_info.m"
                                                                      }
#line 230 "simplify_info.m"
                                                                  }
#line 230 "simplify_info.m"
                                                              }
#line 230 "simplify_info.m"
                                                          }
#line 230 "simplify_info.m"
                                                      }
#line 230 "simplify_info.m"
                                                  }
#line 230 "simplify_info.m"
                                              }
#line 230 "simplify_info.m"
                                          }
#line 230 "simplify_info.m"
                                      }
#line 230 "simplify_info.m"
                                  }
#line 230 "simplify_info.m"
                              }
#line 203 "simplify_info.m"
                          }
#line 203 "simplify_info.m"
                      }
#line 203 "simplify_info.m"
                  }
#line 203 "simplify_info.m"
              }
#line 203 "simplify_info.m"
          }
#line 203 "simplify_info.m"
      }
#line 203 "simplify_info.m"
  }
#line 203 "simplify_info.m"
}

#line 203 "simplify_info.m"
MR_bool MR_CALL 
check_hlds__simplify__simplify_info____Unify____simplify_info_0_0(
#line 203 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__HeadVar__1_1,
#line 203 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__HeadVar__2_2)
#line 203 "simplify_info.m"
{
#line 203 "simplify_info.m"
  {
#line 203 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 203 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__CastX_17 = (MR_Integer) check_hlds__simplify__simplify_info__HeadVar__1_1;
#line 203 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__CastY_18 = (MR_Integer) check_hlds__simplify__simplify_info__HeadVar__2_2;

#line 203 "simplify_info.m"
    check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__CastX_17 == check_hlds__simplify__simplify_info__CastY_18);
#line 203 "simplify_info.m"
    if (check_hlds__simplify__simplify_info__succeeded)
#line 203 "simplify_info.m"
      check_hlds__simplify__simplify_info__succeeded = MR_TRUE;
#line 203 "simplify_info.m"
    else
#line 203 "simplify_info.m"
      {
#line 203 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__TypeInfo_21_21;
#line 203 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__TypeCtorInfo_22_22;
#line 203 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__1_1, (MR_Integer) 0)));
#line 203 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__1_1, (MR_Integer) 1)));
#line 203 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__1_1, (MR_Integer) 2)));
#line 203 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__1_1, (MR_Integer) 3)));
#line 203 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__1_1, (MR_Integer) 4)));
#line 203 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__1_1, (MR_Integer) 5)));
#line 203 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__1_1, (MR_Integer) 6)));
#line 203 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 0)));
#line 203 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 1)));
#line 203 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 2)));
#line 203 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 3)));
#line 203 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 4)));
#line 203 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 5)));
#line 203 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 6)));
#line 230 "simplify_info.m"
        MR_Integer check_hlds__simplify__simplify_info__CastX_46;
#line 230 "simplify_info.m"
        MR_Integer check_hlds__simplify__simplify_info__CastY_47;

#line 2399 "check_hlds.simplify.simplify_info.c"
        {
#line 2401 "check_hlds.simplify.simplify_info.c"
          check_hlds__simplify__simplify_info__succeeded = check_hlds__simplify__simplify_tasks____Unify____simplify_tasks_0_0(check_hlds__simplify__simplify_info__V_3_3, check_hlds__simplify__simplify_info__V_10_10);
        }
#line 203 "simplify_info.m"
        if (check_hlds__simplify__simplify_info__succeeded)
#line 203 "simplify_info.m"
          {
#line 2408 "check_hlds.simplify.simplify_info.c"
            {
#line 2410 "check_hlds.simplify.simplify_info.c"
              check_hlds__simplify__simplify_info__succeeded = hlds__hlds_module____Unify____module_info_0_0(check_hlds__simplify__simplify_info__V_4_4, check_hlds__simplify__simplify_info__V_11_11);
            }
#line 203 "simplify_info.m"
            if (check_hlds__simplify__simplify_info__succeeded)
#line 203 "simplify_info.m"
              {
#line 2417 "check_hlds.simplify.simplify_info.c"
                check_hlds__simplify__simplify_info__TypeInfo_21_21 = (MR_Word) &check_hlds__simplify__simplify_info_scalar_common_1[2];
#line 2419 "check_hlds.simplify.simplify_info.c"
                {
#line 2421 "check_hlds.simplify.simplify_info.c"
                  check_hlds__simplify__simplify_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__simplify_info__TypeInfo_21_21, ((MR_Box) (check_hlds__simplify__simplify_info__V_5_5)), ((MR_Box) (check_hlds__simplify__simplify_info__V_12_12)));
                }
#line 203 "simplify_info.m"
                if (check_hlds__simplify__simplify_info__succeeded)
#line 203 "simplify_info.m"
                  {
#line 2428 "check_hlds.simplify.simplify_info.c"
                    check_hlds__simplify__simplify_info__TypeCtorInfo_22_22 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_vartypes_0;
#line 2430 "check_hlds.simplify.simplify_info.c"
                    {
#line 2432 "check_hlds.simplify.simplify_info.c"
                      check_hlds__simplify__simplify_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__simplify_info__TypeCtorInfo_22_22, ((MR_Box) (check_hlds__simplify__simplify_info__V_6_6)), ((MR_Box) (check_hlds__simplify__simplify_info__V_13_13)));
                    }
#line 203 "simplify_info.m"
                    if (check_hlds__simplify__simplify_info__succeeded)
#line 203 "simplify_info.m"
                      {
#line 2439 "check_hlds.simplify.simplify_info.c"
                        {
#line 2441 "check_hlds.simplify.simplify_info.c"
                          check_hlds__simplify__simplify_info__succeeded = hlds__hlds_rtti____Unify____rtti_varmaps_0_0(check_hlds__simplify__simplify_info__V_7_7, check_hlds__simplify__simplify_info__V_14_14);
                        }
#line 203 "simplify_info.m"
                        if (check_hlds__simplify__simplify_info__succeeded)
#line 203 "simplify_info.m"
                          {
#line 2448 "check_hlds.simplify.simplify_info.c"
                            check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_8_8 == check_hlds__simplify__simplify_info__V_15_15);
#line 203 "simplify_info.m"
                            if (check_hlds__simplify__simplify_info__succeeded)
#line 203 "simplify_info.m"
                              {
#line 230 "simplify_info.m"
                                check_hlds__simplify__simplify_info__CastX_46 = (MR_Integer) check_hlds__simplify__simplify_info__V_9_9;
#line 230 "simplify_info.m"
                                check_hlds__simplify__simplify_info__CastY_47 = (MR_Integer) check_hlds__simplify__simplify_info__V_16_16;
#line 230 "simplify_info.m"
                                check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__CastX_46 == check_hlds__simplify__simplify_info__CastY_47);
#line 230 "simplify_info.m"
                                if (check_hlds__simplify__simplify_info__succeeded)
#line 230 "simplify_info.m"
                                  check_hlds__simplify__simplify_info__succeeded = MR_TRUE;
#line 230 "simplify_info.m"
                                else
#line 230 "simplify_info.m"
                                  {
#line 230 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__TypeInfo_29_50;
#line 230 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__TypeInfo_30_51;
#line 230 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__TypeInfo_31_52;
#line 230 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 0)));
#line 230 "simplify_info.m"
                                    MR_Integer check_hlds__simplify__simplify_info__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 1)));
#line 230 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 2)));
#line 230 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 3)));
#line 230 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 4)));
#line 230 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__V_29_29 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 5)))) & (MR_Integer) 1);
#line 230 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 230 "simplify_info.m"
                                    MR_Integer check_hlds__simplify__simplify_info__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 6)));
#line 230 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__V_32_32 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 230 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 230 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 230 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_16_16, (MR_Integer) 0)));
#line 230 "simplify_info.m"
                                    MR_Integer check_hlds__simplify__simplify_info__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_16_16, (MR_Integer) 1)));
#line 230 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_16_16, (MR_Integer) 2)));
#line 230 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_16_16, (MR_Integer) 3)));
#line 230 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_16_16, (MR_Integer) 4)));
#line 230 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__V_40_40 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_16_16, (MR_Integer) 5)))) & (MR_Integer) 1);
#line 230 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_16_16, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 230 "simplify_info.m"
                                    MR_Integer check_hlds__simplify__simplify_info__V_42_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_16_16, (MR_Integer) 6)));
#line 230 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__V_43_43 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_16_16, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 230 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__V_44_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_16_16, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 230 "simplify_info.m"
                                    MR_Word check_hlds__simplify__simplify_info__V_45_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_16_16, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);

#line 2519 "check_hlds.simplify.simplify_info.c"
                                    {
#line 2521 "check_hlds.simplify.simplify_info.c"
                                      check_hlds__simplify__simplify_info__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(check_hlds__simplify__simplify_info__V_24_24, check_hlds__simplify__simplify_info__V_35_35);
                                    }
#line 230 "simplify_info.m"
                                    if (check_hlds__simplify__simplify_info__succeeded)
#line 230 "simplify_info.m"
                                      {
#line 2528 "check_hlds.simplify.simplify_info.c"
                                        check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_25_25 == check_hlds__simplify__simplify_info__V_36_36);
#line 230 "simplify_info.m"
                                        if (check_hlds__simplify__simplify_info__succeeded)
#line 230 "simplify_info.m"
                                          {
#line 2534 "check_hlds.simplify.simplify_info.c"
                                            check_hlds__simplify__simplify_info__TypeInfo_29_50 = (MR_Word) &check_hlds__simplify__simplify_info_scalar_common_1[4];
#line 2536 "check_hlds.simplify.simplify_info.c"
                                            {
#line 2538 "check_hlds.simplify.simplify_info.c"
                                              check_hlds__simplify__simplify_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__simplify_info__TypeInfo_29_50, ((MR_Box) (check_hlds__simplify__simplify_info__V_26_26)), ((MR_Box) (check_hlds__simplify__simplify_info__V_37_37)));
                                            }
#line 230 "simplify_info.m"
                                            if (check_hlds__simplify__simplify_info__succeeded)
#line 230 "simplify_info.m"
                                              {
#line 2545 "check_hlds.simplify.simplify_info.c"
                                                check_hlds__simplify__simplify_info__TypeInfo_30_51 = (MR_Word) &check_hlds__simplify__simplify_info_scalar_common_1[6];
#line 2547 "check_hlds.simplify.simplify_info.c"
                                                {
#line 2549 "check_hlds.simplify.simplify_info.c"
                                                  check_hlds__simplify__simplify_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__simplify_info__TypeInfo_30_51, ((MR_Box) (check_hlds__simplify__simplify_info__V_27_27)), ((MR_Box) (check_hlds__simplify__simplify_info__V_38_38)));
                                                }
#line 230 "simplify_info.m"
                                                if (check_hlds__simplify__simplify_info__succeeded)
#line 230 "simplify_info.m"
                                                  {
#line 2556 "check_hlds.simplify.simplify_info.c"
                                                    check_hlds__simplify__simplify_info__TypeInfo_31_52 = (MR_Word) &check_hlds__simplify__simplify_info_scalar_common_1[7];
#line 2558 "check_hlds.simplify.simplify_info.c"
                                                    {
#line 2560 "check_hlds.simplify.simplify_info.c"
                                                      check_hlds__simplify__simplify_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__simplify_info__TypeInfo_31_52, ((MR_Box) (check_hlds__simplify__simplify_info__V_28_28)), ((MR_Box) (check_hlds__simplify__simplify_info__V_39_39)));
                                                    }
#line 230 "simplify_info.m"
                                                    if (check_hlds__simplify__simplify_info__succeeded)
#line 230 "simplify_info.m"
                                                      {
#line 2567 "check_hlds.simplify.simplify_info.c"
                                                        check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_29_29 == check_hlds__simplify__simplify_info__V_40_40);
#line 230 "simplify_info.m"
                                                        if (check_hlds__simplify__simplify_info__succeeded)
#line 230 "simplify_info.m"
                                                          {
#line 2573 "check_hlds.simplify.simplify_info.c"
                                                            check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_30_30 == check_hlds__simplify__simplify_info__V_41_41);
#line 230 "simplify_info.m"
                                                            if (check_hlds__simplify__simplify_info__succeeded)
#line 230 "simplify_info.m"
                                                              {
#line 2579 "check_hlds.simplify.simplify_info.c"
                                                                check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_31_31 == check_hlds__simplify__simplify_info__V_42_42);
#line 230 "simplify_info.m"
                                                                if (check_hlds__simplify__simplify_info__succeeded)
#line 230 "simplify_info.m"
                                                                  {
#line 2585 "check_hlds.simplify.simplify_info.c"
                                                                    check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_32_32 == check_hlds__simplify__simplify_info__V_43_43);
#line 230 "simplify_info.m"
                                                                    if (check_hlds__simplify__simplify_info__succeeded)
#line 230 "simplify_info.m"
                                                                      {
#line 2591 "check_hlds.simplify.simplify_info.c"
                                                                        check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_33_33 == check_hlds__simplify__simplify_info__V_44_44);
#line 230 "simplify_info.m"
                                                                        if (check_hlds__simplify__simplify_info__succeeded)
#line 2595 "check_hlds.simplify.simplify_info.c"
                                                                          check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_34_34 == check_hlds__simplify__simplify_info__V_45_45);
#line 230 "simplify_info.m"
                                                                      }
#line 230 "simplify_info.m"
                                                                  }
#line 230 "simplify_info.m"
                                                              }
#line 230 "simplify_info.m"
                                                          }
#line 230 "simplify_info.m"
                                                      }
#line 230 "simplify_info.m"
                                                  }
#line 230 "simplify_info.m"
                                              }
#line 230 "simplify_info.m"
                                          }
#line 230 "simplify_info.m"
                                      }
#line 230 "simplify_info.m"
                                  }
#line 203 "simplify_info.m"
                              }
#line 203 "simplify_info.m"
                          }
#line 203 "simplify_info.m"
                      }
#line 203 "simplify_info.m"
                  }
#line 203 "simplify_info.m"
              }
#line 203 "simplify_info.m"
          }
#line 203 "simplify_info.m"
      }
#line 203 "simplify_info.m"
    return check_hlds__simplify__simplify_info__succeeded;
#line 203 "simplify_info.m"
  }
#line 203 "simplify_info.m"
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
#line 2662 "check_hlds.simplify.simplify_info.c"
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
#line 2674 "check_hlds.simplify.simplify_info.c"
          *check_hlds__simplify__simplify_info__HeadVar__1_1 = (MR_Integer) 1;
#line 37 "simplify_info.m"
      else
#line 37 "simplify_info.m"
        {
#line 37 "simplify_info.m"
          MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 0)));

#line 37 "simplify_info.m"
          if ((check_hlds__simplify__simplify_info__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2685 "check_hlds.simplify.simplify_info.c"
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
#line 2766 "check_hlds.simplify.simplify_info.c"
              {
#line 2768 "check_hlds.simplify.simplify_info.c"
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

#line 183 "simplify_info.m"
MR_bool MR_CALL 
check_hlds__simplify__simplify_info__simplify_do_warn_or_opt_duplicate_calls_2_p_0(
#line 183 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__Info_3,
#line 183 "simplify_info.m"
  MR_Word * check_hlds__simplify__simplify_info__OptDuplicateCalls_4)
#line 183 "simplify_info.m"
{
#line 442 "simplify_info.m"
  {
#line 442 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 442 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__SimplifyTasks_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 0)));
#line 442 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__WarnDuplicateCalls_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_5, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 337 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 1)));
#line 337 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 2)));
#line 337 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 3)));
#line 337 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 4)));
#line 337 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 5)));
#line 337 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 6)));
#line 444 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_7_7 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_5, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 444 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_5, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 444 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_5, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 444 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_5, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 444 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_5, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 444 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_5, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 444 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_5, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 444 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_15_15;
#line 444 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_16_16;
#line 444 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_17_17;
#line 444 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_18_18;

#line 444 "simplify_info.m"
    *check_hlds__simplify__simplify_info__OptDuplicateCalls_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_5, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 444 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_5, (MR_Integer) 0)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 444 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_5, (MR_Integer) 0)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 444 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_17_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_5, (MR_Integer) 0)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 444 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_5, (MR_Integer) 0)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 446 "simplify_info.m"
    check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__WarnDuplicateCalls_6 == (MR_Integer) 1);
#line 447 "simplify_info.m"
    if (!(check_hlds__simplify__simplify_info__succeeded))
#line 447 "simplify_info.m"
      check_hlds__simplify__simplify_info__succeeded = (*check_hlds__simplify__simplify_info__OptDuplicateCalls_4 == (MR_Integer) 1);
#line 442 "simplify_info.m"
    return check_hlds__simplify__simplify_info__succeeded;
#line 442 "simplify_info.m"
  }
#line 183 "simplify_info.m"
}

#line 178 "simplify_info.m"
MR_bool MR_CALL 
check_hlds__simplify__simplify_info__simplify_do_ignore_par_conjunctions_1_p_0(
#line 178 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__Info_2)
#line 178 "simplify_info.m"
{
#line 438 "simplify_info.m"
  {
#line 438 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 438 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__SimplifyTasks_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 0)));
#line 438 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_4_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 337 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 1)));
#line 337 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 2)));
#line 337 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 3)));
#line 337 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 4)));
#line 337 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 5)));
#line 337 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 6)));
#line 440 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_5_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 440 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 440 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 440 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 440 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 440 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 440 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 440 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 440 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 440 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 440 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 440 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 11)) & (MR_Integer) 1);

#line 440 "simplify_info.m"
    check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_4_4 == (MR_Integer) 1);
#line 438 "simplify_info.m"
    return check_hlds__simplify__simplify_info__succeeded;
#line 438 "simplify_info.m"
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
#line 435 "simplify_info.m"
  {
#line 435 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 435 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__SimplifyTasks_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 0)));
#line 435 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_4_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 337 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 1)));
#line 337 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 2)));
#line 337 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 3)));
#line 337 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 4)));
#line 337 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 5)));
#line 337 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 6)));
#line 437 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_5_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 437 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 437 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 437 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 437 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 437 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 437 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 437 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 437 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 437 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 437 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 437 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 12)) & (MR_Integer) 1);

#line 437 "simplify_info.m"
    check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_4_4 == (MR_Integer) 1);
#line 435 "simplify_info.m"
    return check_hlds__simplify__simplify_info__succeeded;
#line 435 "simplify_info.m"
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
#line 432 "simplify_info.m"
  {
#line 432 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 432 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__SimplifyTasks_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 0)));
#line 432 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_4_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 337 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 1)));
#line 337 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 2)));
#line 337 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 3)));
#line 337 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 4)));
#line 337 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 5)));
#line 337 "simplify_info.m"
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
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 434 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 12)) & (MR_Integer) 1);

#line 434 "simplify_info.m"
    check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_4_4 == (MR_Integer) 1);
#line 432 "simplify_info.m"
    return check_hlds__simplify__simplify_info__succeeded;
#line 432 "simplify_info.m"
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
#line 429 "simplify_info.m"
  {
#line 429 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 429 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__SimplifyTasks_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 0)));
#line 429 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_4_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 337 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 1)));
#line 337 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 2)));
#line 337 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 3)));
#line 337 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 4)));
#line 337 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 5)));
#line 337 "simplify_info.m"
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
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 431 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 431 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 12)) & (MR_Integer) 1);

#line 431 "simplify_info.m"
    check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_4_4 == (MR_Integer) 1);
#line 429 "simplify_info.m"
    return check_hlds__simplify__simplify_info__succeeded;
#line 429 "simplify_info.m"
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
#line 426 "simplify_info.m"
  {
#line 426 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 426 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__SimplifyTasks_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 0)));
#line 426 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_4_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 337 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 1)));
#line 337 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 2)));
#line 337 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 3)));
#line 337 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 4)));
#line 337 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 5)));
#line 337 "simplify_info.m"
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
    MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 428 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
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
#line 174 "simplify_info.m"
}

#line 173 "simplify_info.m"
MR_bool MR_CALL 
check_hlds__simplify__simplify_info__simplify_do_elim_removable_scopes_1_p_0(
#line 173 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__Info_2)
#line 173 "simplify_info.m"
{
#line 423 "simplify_info.m"
  {
#line 423 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 423 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__SimplifyTasks_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 0)));
#line 423 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_4_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 337 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 1)));
#line 337 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 2)));
#line 337 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 3)));
#line 337 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 4)));
#line 337 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 5)));
#line 337 "simplify_info.m"
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
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 425 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
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
#line 173 "simplify_info.m"
}

#line 172 "simplify_info.m"
MR_bool MR_CALL 
check_hlds__simplify__simplify_info__simplify_do_excess_assign_1_p_0(
#line 172 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__Info_2)
#line 172 "simplify_info.m"
{
#line 420 "simplify_info.m"
  {
#line 420 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 420 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__SimplifyTasks_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 0)));
#line 420 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_4_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 337 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 1)));
#line 337 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 2)));
#line 337 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 3)));
#line 337 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 4)));
#line 337 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 5)));
#line 337 "simplify_info.m"
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
    MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 422 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
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
#line 172 "simplify_info.m"
}

#line 171 "simplify_info.m"
MR_bool MR_CALL 
check_hlds__simplify__simplify_info__simplify_do_after_front_end_1_p_0(
#line 171 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__Info_2)
#line 171 "simplify_info.m"
{
#line 417 "simplify_info.m"
  {
#line 417 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 417 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__SimplifyTasks_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 0)));
#line 417 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_4_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 337 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 1)));
#line 337 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 2)));
#line 337 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 3)));
#line 337 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 4)));
#line 337 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 5)));
#line 337 "simplify_info.m"
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
    MR_Word check_hlds__simplify__simplify_info__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 419 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
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
#line 171 "simplify_info.m"
}

#line 170 "simplify_info.m"
MR_bool MR_CALL 
check_hlds__simplify__simplify_info__simplify_do_mark_code_model_changes_1_p_0(
#line 170 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__Info_2)
#line 170 "simplify_info.m"
{
#line 414 "simplify_info.m"
  {
#line 414 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 414 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__SimplifyTasks_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 0)));
#line 414 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_4_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 337 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 1)));
#line 337 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 2)));
#line 337 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 3)));
#line 337 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 4)));
#line 337 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 5)));
#line 337 "simplify_info.m"
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
    MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 416 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
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
#line 170 "simplify_info.m"
}

#line 169 "simplify_info.m"
MR_bool MR_CALL 
check_hlds__simplify__simplify_info__simplify_do_warn_obsolete_1_p_0(
#line 169 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__Info_2)
#line 169 "simplify_info.m"
{
#line 411 "simplify_info.m"
  {
#line 411 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 411 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__SimplifyTasks_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 0)));
#line 411 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_4_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 337 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 1)));
#line 337 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 2)));
#line 337 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 3)));
#line 337 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 4)));
#line 337 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 5)));
#line 337 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 6)));
#line 413 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_5_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 413 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 413 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 413 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 413 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
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
#line 169 "simplify_info.m"
}

#line 168 "simplify_info.m"
MR_bool MR_CALL 
check_hlds__simplify__simplify_info__simplify_do_format_calls_1_p_0(
#line 168 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__Info_2)
#line 168 "simplify_info.m"
{
#line 408 "simplify_info.m"
  {
#line 408 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 408 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__SimplifyTasks_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 0)));
#line 408 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_4_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 337 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 1)));
#line 337 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 2)));
#line 337 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 3)));
#line 337 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 4)));
#line 337 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 5)));
#line 337 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 6)));
#line 410 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_5_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 410 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 410 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 410 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
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
#line 168 "simplify_info.m"
}

#line 167 "simplify_info.m"
MR_bool MR_CALL 
check_hlds__simplify__simplify_info__simplify_do_warn_duplicate_calls_1_p_0(
#line 167 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__Info_2)
#line 167 "simplify_info.m"
{
#line 405 "simplify_info.m"
  {
#line 405 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 405 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__SimplifyTasks_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 0)));
#line 405 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_4_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 337 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 1)));
#line 337 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 2)));
#line 337 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 3)));
#line 337 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 4)));
#line 337 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 5)));
#line 337 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 6)));
#line 407 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_5_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 407 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 407 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
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
#line 167 "simplify_info.m"
}

#line 166 "simplify_info.m"
MR_bool MR_CALL 
check_hlds__simplify__simplify_info__simplify_do_warn_simple_code_1_p_0(
#line 166 "simplify_info.m"
  MR_Word check_hlds__simplify__simplify_info__Info_2)
#line 166 "simplify_info.m"
{
#line 402 "simplify_info.m"
  {
#line 402 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 402 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__SimplifyTasks_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 0)));
#line 402 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_4_4 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 337 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 1)));
#line 337 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 2)));
#line 337 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 3)));
#line 337 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 4)));
#line 337 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 5)));
#line 337 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 6)));
#line 404 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_5_5 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 404 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
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
#line 397 "simplify_info.m"
  {
#line 397 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 397 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
#line 397 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_10_10;
#line 397 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
#line 397 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
#line 397 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
#line 397 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
#line 397 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
#line 397 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
#line 398 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 0)));
#line 398 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 1)));
#line 398 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 2)));
#line 398 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 3)));
#line 398 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 4)));
#line 398 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_22_22 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 5)))) & (MR_Integer) 1);
#line 398 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 398 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 6)));
#line 398 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_25_25 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 398 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 398 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);

#line 398 "simplify_info.m"
    {
#line 398 "simplify_info.m"
      check_hlds__simplify__simplify_info__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 398 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__V_17_17));
#line 398 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__V_18_18));
#line 398 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 2) = ((MR_Box) (check_hlds__simplify__simplify_info__V_19_19));
#line 398 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 3) = ((MR_Box) (check_hlds__simplify__simplify_info__V_20_20));
#line 398 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 4) = ((MR_Box) (check_hlds__simplify__simplify_info__V_21_21));
#line 398 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 5) = ((MR_Box) ((check_hlds__simplify__simplify_info__V_22_22 | ((check_hlds__simplify__simplify_info__V_23_23 << (MR_Integer) 1)))));
#line 398 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 6) = ((MR_Box) (check_hlds__simplify__simplify_info__V_24_24));
#line 398 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 7) = ((MR_Box) ((check_hlds__simplify__simplify_info__V_25_25 | ((((check_hlds__simplify__simplify_info__V_26_26 << (MR_Integer) 1)) | ((check_hlds__simplify__simplify_info__HUE_4 << (MR_Integer) 2)))))));
#line 398 "simplify_info.m"
    }
#line 398 "simplify_info.m"
    {
#line 398 "simplify_info.m"
      MR_Word base;
#line 398 "simplify_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 398 "simplify_info.m"
      *check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_7 = base;
#line 398 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__V_11_11));
#line 398 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__V_12_12));
#line 398 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__simplify__simplify_info__V_13_13));
#line 398 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__simplify__simplify_info__V_14_14));
#line 398 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__simplify__simplify_info__V_15_15));
#line 398 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__simplify__simplify_info__V_16_16));
#line 398 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__simplify__simplify_info__V_10_10));
#line 398 "simplify_info.m"
    }
#line 397 "simplify_info.m"
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
#line 395 "simplify_info.m"
  {
#line 395 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 395 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
#line 395 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_10_10;
#line 395 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
#line 395 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
#line 395 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
#line 395 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
#line 395 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
#line 395 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
#line 396 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 0)));
#line 396 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 1)));
#line 396 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 2)));
#line 396 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 3)));
#line 396 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 4)));
#line 396 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_22_22 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 5)))) & (MR_Integer) 1);
#line 396 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 396 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 6)));
#line 396 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_25_25 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 396 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 396 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);

#line 396 "simplify_info.m"
    {
#line 396 "simplify_info.m"
      check_hlds__simplify__simplify_info__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 396 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__V_17_17));
#line 396 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__V_18_18));
#line 396 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 2) = ((MR_Box) (check_hlds__simplify__simplify_info__V_19_19));
#line 396 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 3) = ((MR_Box) (check_hlds__simplify__simplify_info__V_20_20));
#line 396 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 4) = ((MR_Box) (check_hlds__simplify__simplify_info__V_21_21));
#line 396 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 5) = ((MR_Box) ((check_hlds__simplify__simplify_info__V_22_22 | ((check_hlds__simplify__simplify_info__V_23_23 << (MR_Integer) 1)))));
#line 396 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 6) = ((MR_Box) (check_hlds__simplify__simplify_info__V_24_24));
#line 396 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 7) = ((MR_Box) ((check_hlds__simplify__simplify_info__V_25_25 | ((((check_hlds__simplify__simplify_info__FCT_4 << (MR_Integer) 1)) | ((check_hlds__simplify__simplify_info__V_27_27 << (MR_Integer) 2)))))));
#line 396 "simplify_info.m"
    }
#line 396 "simplify_info.m"
    {
#line 396 "simplify_info.m"
      MR_Word base;
#line 396 "simplify_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 396 "simplify_info.m"
      *check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_7 = base;
#line 396 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__V_11_11));
#line 396 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__V_12_12));
#line 396 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__simplify__simplify_info__V_13_13));
#line 396 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__simplify__simplify_info__V_14_14));
#line 396 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__simplify__simplify_info__V_15_15));
#line 396 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__simplify__simplify_info__V_16_16));
#line 396 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__simplify__simplify_info__V_10_10));
#line 396 "simplify_info.m"
    }
#line 395 "simplify_info.m"
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
#line 393 "simplify_info.m"
  {
#line 393 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 393 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
#line 393 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_10_10;
#line 393 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
#line 393 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
#line 393 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
#line 393 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
#line 393 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
#line 393 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
#line 394 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 0)));
#line 394 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 1)));
#line 394 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 2)));
#line 394 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 3)));
#line 394 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 4)));
#line 394 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_22_22 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 5)))) & (MR_Integer) 1);
#line 394 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 394 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 6)));
#line 394 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 394 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 394 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_25_25 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 7)))) & (MR_Integer) 1);

#line 394 "simplify_info.m"
    {
#line 394 "simplify_info.m"
      check_hlds__simplify__simplify_info__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 394 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__V_17_17));
#line 394 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__V_18_18));
#line 394 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 2) = ((MR_Box) (check_hlds__simplify__simplify_info__V_19_19));
#line 394 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 3) = ((MR_Box) (check_hlds__simplify__simplify_info__V_20_20));
#line 394 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 4) = ((MR_Box) (check_hlds__simplify__simplify_info__V_21_21));
#line 394 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 5) = ((MR_Box) ((check_hlds__simplify__simplify_info__V_22_22 | ((check_hlds__simplify__simplify_info__V_23_23 << (MR_Integer) 1)))));
#line 394 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 6) = ((MR_Box) (check_hlds__simplify__simplify_info__V_24_24));
#line 394 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 7) = ((MR_Box) ((check_hlds__simplify__simplify_info__HPC_4 | ((((check_hlds__simplify__simplify_info__V_26_26 << (MR_Integer) 1)) | ((check_hlds__simplify__simplify_info__V_27_27 << (MR_Integer) 2)))))));
#line 394 "simplify_info.m"
    }
#line 394 "simplify_info.m"
    {
#line 394 "simplify_info.m"
      MR_Word base;
#line 394 "simplify_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 394 "simplify_info.m"
      *check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_7 = base;
#line 394 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__V_11_11));
#line 394 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__V_12_12));
#line 394 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__simplify__simplify_info__V_13_13));
#line 394 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__simplify__simplify_info__V_14_14));
#line 394 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__simplify__simplify_info__V_15_15));
#line 394 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__simplify__simplify_info__V_16_16));
#line 394 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__simplify__simplify_info__V_10_10));
#line 394 "simplify_info.m"
    }
#line 393 "simplify_info.m"
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
    MR_Word check_hlds__simplify__simplify_info__V_25_25 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 392 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 392 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 392 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 6)));

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
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 6) = ((MR_Box) (check_hlds__simplify__simplify_info__CD_4));
#line 392 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 7) = ((MR_Box) ((check_hlds__simplify__simplify_info__V_25_25 | ((((check_hlds__simplify__simplify_info__V_26_26 << (MR_Integer) 1)) | ((check_hlds__simplify__simplify_info__V_27_27 << (MR_Integer) 2)))))));
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
#line 389 "simplify_info.m"
  {
#line 389 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 389 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_4, (MR_Integer) 6)));
#line 389 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_9_9;
#line 389 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_4, (MR_Integer) 0)));
#line 389 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_4, (MR_Integer) 1)));
#line 389 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_4, (MR_Integer) 2)));
#line 389 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_4, (MR_Integer) 3)));
#line 389 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_4, (MR_Integer) 4)));
#line 389 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_4, (MR_Integer) 5)));
#line 390 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_8_8, (MR_Integer) 0)));
#line 390 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_8_8, (MR_Integer) 1)));
#line 390 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_8_8, (MR_Integer) 2)));
#line 390 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_8_8, (MR_Integer) 3)));
#line 390 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_8_8, (MR_Integer) 4)));
#line 390 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_21_21 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_8_8, (MR_Integer) 5)))) & (MR_Integer) 1);
#line 390 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_8_8, (MR_Integer) 6)));
#line 390 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_24_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_8_8, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 390 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_8_8, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 390 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_8_8, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 390 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_8_8, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);

#line 390 "simplify_info.m"
    {
#line 390 "simplify_info.m"
      check_hlds__simplify__simplify_info__V_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 390 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__V_16_16));
#line 390 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__V_17_17));
#line 390 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, 2) = ((MR_Box) (check_hlds__simplify__simplify_info__V_18_18));
#line 390 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, 3) = ((MR_Box) (check_hlds__simplify__simplify_info__V_19_19));
#line 390 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, 4) = ((MR_Box) (check_hlds__simplify__simplify_info__V_20_20));
#line 390 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, 5) = ((MR_Box) ((check_hlds__simplify__simplify_info__V_21_21 | (((MR_Integer) 1 << (MR_Integer) 1)))));
#line 390 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, 6) = ((MR_Box) (check_hlds__simplify__simplify_info__V_23_23));
#line 390 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, 7) = ((MR_Box) ((check_hlds__simplify__simplify_info__V_24_24 | ((((check_hlds__simplify__simplify_info__V_25_25 << (MR_Integer) 1)) | ((check_hlds__simplify__simplify_info__V_26_26 << (MR_Integer) 2)))))));
#line 390 "simplify_info.m"
    }
#line 390 "simplify_info.m"
    {
#line 390 "simplify_info.m"
      MR_Word base;
#line 390 "simplify_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 390 "simplify_info.m"
      *check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_5 = base;
#line 390 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__V_10_10));
#line 390 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__V_11_11));
#line 390 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__simplify__simplify_info__V_12_12));
#line 390 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__simplify__simplify_info__V_13_13));
#line 390 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__simplify__simplify_info__V_14_14));
#line 390 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__simplify__simplify_info__V_15_15));
#line 390 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__simplify__simplify_info__V_9_9));
#line 390 "simplify_info.m"
    }
#line 389 "simplify_info.m"
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
#line 387 "simplify_info.m"
  {
#line 387 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 387 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_4, (MR_Integer) 6)));
#line 387 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_9_9;
#line 387 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_4, (MR_Integer) 0)));
#line 387 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_4, (MR_Integer) 1)));
#line 387 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_4, (MR_Integer) 2)));
#line 387 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_4, (MR_Integer) 3)));
#line 387 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_4, (MR_Integer) 4)));
#line 387 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_4, (MR_Integer) 5)));
#line 388 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_8_8, (MR_Integer) 0)));
#line 388 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_8_8, (MR_Integer) 1)));
#line 388 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_8_8, (MR_Integer) 2)));
#line 388 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_8_8, (MR_Integer) 3)));
#line 388 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_8_8, (MR_Integer) 4)));
#line 388 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_8_8, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 388 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_8_8, (MR_Integer) 6)));
#line 388 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_24_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_8_8, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 388 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_8_8, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 388 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_8_8, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 388 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_21_21 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_8_8, (MR_Integer) 5)))) & (MR_Integer) 1);

#line 388 "simplify_info.m"
    {
#line 388 "simplify_info.m"
      check_hlds__simplify__simplify_info__V_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 388 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__V_16_16));
#line 388 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__V_17_17));
#line 388 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, 2) = ((MR_Box) (check_hlds__simplify__simplify_info__V_18_18));
#line 388 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, 3) = ((MR_Box) (check_hlds__simplify__simplify_info__V_19_19));
#line 388 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, 4) = ((MR_Box) (check_hlds__simplify__simplify_info__V_20_20));
#line 388 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, 5) = ((MR_Box) (((MR_Integer) 1 | ((check_hlds__simplify__simplify_info__V_22_22 << (MR_Integer) 1)))));
#line 388 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, 6) = ((MR_Box) (check_hlds__simplify__simplify_info__V_23_23));
#line 388 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, 7) = ((MR_Box) ((check_hlds__simplify__simplify_info__V_24_24 | ((((check_hlds__simplify__simplify_info__V_25_25 << (MR_Integer) 1)) | ((check_hlds__simplify__simplify_info__V_26_26 << (MR_Integer) 2)))))));
#line 388 "simplify_info.m"
    }
#line 388 "simplify_info.m"
    {
#line 388 "simplify_info.m"
      MR_Word base;
#line 388 "simplify_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 388 "simplify_info.m"
      *check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_5 = base;
#line 388 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__V_10_10));
#line 388 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__V_11_11));
#line 388 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__simplify__simplify_info__V_12_12));
#line 388 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__simplify__simplify_info__V_13_13));
#line 388 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__simplify__simplify_info__V_14_14));
#line 388 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__simplify__simplify_info__V_15_15));
#line 388 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__simplify__simplify_info__V_9_9));
#line 388 "simplify_info.m"
    }
#line 387 "simplify_info.m"
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
    MR_Word check_hlds__simplify__simplify_info__V_22_22 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 5)))) & (MR_Integer) 1);
#line 386 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 386 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 6)));
#line 386 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_25_25 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 386 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 386 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 386 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 4)));

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
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 4) = ((MR_Box) (check_hlds__simplify__simplify_info__Specs_4));
#line 386 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 5) = ((MR_Box) ((check_hlds__simplify__simplify_info__V_22_22 | ((check_hlds__simplify__simplify_info__V_23_23 << (MR_Integer) 1)))));
#line 386 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 6) = ((MR_Box) (check_hlds__simplify__simplify_info__V_24_24));
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
#line 383 "simplify_info.m"
  {
#line 383 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 383 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
#line 383 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_10_10;
#line 383 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
#line 383 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
#line 383 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
#line 383 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
#line 383 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
#line 383 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
#line 384 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 0)));
#line 384 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 1)));
#line 384 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 2)));
#line 384 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 4)));
#line 384 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_22_22 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 5)))) & (MR_Integer) 1);
#line 384 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 384 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 6)));
#line 384 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_25_25 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 384 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 384 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 384 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 3)));

#line 384 "simplify_info.m"
    {
#line 384 "simplify_info.m"
      check_hlds__simplify__simplify_info__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 384 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__V_17_17));
#line 384 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__V_18_18));
#line 384 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 2) = ((MR_Box) (check_hlds__simplify__simplify_info__V_19_19));
#line 384 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 3) = ((MR_Box) (check_hlds__simplify__simplify_info__EV_4));
#line 384 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 4) = ((MR_Box) (check_hlds__simplify__simplify_info__V_21_21));
#line 384 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 5) = ((MR_Box) ((check_hlds__simplify__simplify_info__V_22_22 | ((check_hlds__simplify__simplify_info__V_23_23 << (MR_Integer) 1)))));
#line 384 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 6) = ((MR_Box) (check_hlds__simplify__simplify_info__V_24_24));
#line 384 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 7) = ((MR_Box) ((check_hlds__simplify__simplify_info__V_25_25 | ((((check_hlds__simplify__simplify_info__V_26_26 << (MR_Integer) 1)) | ((check_hlds__simplify__simplify_info__V_27_27 << (MR_Integer) 2)))))));
#line 384 "simplify_info.m"
    }
#line 384 "simplify_info.m"
    {
#line 384 "simplify_info.m"
      MR_Word base;
#line 384 "simplify_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 384 "simplify_info.m"
      *check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_7 = base;
#line 384 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__V_11_11));
#line 384 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__V_12_12));
#line 384 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__simplify__simplify_info__V_13_13));
#line 384 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__simplify__simplify_info__V_14_14));
#line 384 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__simplify__simplify_info__V_15_15));
#line 384 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__simplify__simplify_info__V_16_16));
#line 384 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__simplify__simplify_info__V_10_10));
#line 384 "simplify_info.m"
    }
#line 383 "simplify_info.m"
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
#line 381 "simplify_info.m"
  {
#line 381 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 381 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
#line 381 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
#line 381 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
#line 381 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
#line 381 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
#line 381 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
#line 381 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));

#line 381 "simplify_info.m"
    {
#line 381 "simplify_info.m"
      MR_Word base;
#line 381 "simplify_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 381 "simplify_info.m"
      *check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_7 = base;
#line 381 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__V_9_9));
#line 381 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__V_10_10));
#line 381 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__simplify__simplify_info__V_11_11));
#line 381 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__simplify__simplify_info__V_12_12));
#line 381 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__simplify__simplify_info__RVM_4));
#line 381 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__simplify__simplify_info__V_14_14));
#line 381 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__simplify__simplify_info__V_15_15));
#line 381 "simplify_info.m"
    }
#line 381 "simplify_info.m"
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
#line 377 "simplify_info.m"
  {
#line 377 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 377 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
#line 377 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
#line 377 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
#line 377 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
#line 377 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
#line 377 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
#line 377 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));

#line 377 "simplify_info.m"
    {
#line 377 "simplify_info.m"
      MR_Word base;
#line 377 "simplify_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 377 "simplify_info.m"
      *check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_7 = base;
#line 377 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__V_9_9));
#line 377 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__V_10_10));
#line 377 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__simplify__simplify_info__VS_4));
#line 377 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__simplify__simplify_info__V_12_12));
#line 377 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__simplify__simplify_info__V_13_13));
#line 377 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__simplify__simplify_info__V_14_14));
#line 377 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__simplify__simplify_info__V_15_15));
#line 377 "simplify_info.m"
    }
#line 377 "simplify_info.m"
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
#line 379 "simplify_info.m"
  {
#line 379 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 379 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
#line 379 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
#line 379 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
#line 379 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
#line 379 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
#line 379 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
#line 379 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));

#line 379 "simplify_info.m"
    {
#line 379 "simplify_info.m"
      MR_Word base;
#line 379 "simplify_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 379 "simplify_info.m"
      *check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_7 = base;
#line 379 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__V_9_9));
#line 379 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__V_10_10));
#line 379 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__simplify__simplify_info__V_11_11));
#line 379 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__simplify__simplify_info__VT_4));
#line 379 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__simplify__simplify_info__V_13_13));
#line 379 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__simplify__simplify_info__V_14_14));
#line 379 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__simplify__simplify_info__V_15_15));
#line 379 "simplify_info.m"
    }
#line 379 "simplify_info.m"
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
#line 375 "simplify_info.m"
  {
#line 375 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 375 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
#line 375 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
#line 375 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
#line 375 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
#line 375 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
#line 375 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
#line 375 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));

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
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__MI_4));
#line 375 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__simplify__simplify_info__V_11_11));
#line 375 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__simplify__simplify_info__V_12_12));
#line 375 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__simplify__simplify_info__V_13_13));
#line 375 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__simplify__simplify_info__V_14_14));
#line 375 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__simplify__simplify_info__V_15_15));
#line 375 "simplify_info.m"
    }
#line 375 "simplify_info.m"
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
#line 373 "simplify_info.m"
  {
#line 373 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 373 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
#line 373 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
#line 373 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
#line 373 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
#line 373 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
#line 373 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
#line 373 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));

#line 373 "simplify_info.m"
    {
#line 373 "simplify_info.m"
      MR_Word base;
#line 373 "simplify_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 373 "simplify_info.m"
      *check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_7 = base;
#line 373 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__Tasks_4));
#line 373 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__V_10_10));
#line 373 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__simplify__simplify_info__V_11_11));
#line 373 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__simplify__simplify_info__V_12_12));
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
#line 369 "simplify_info.m"
  {
#line 369 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 369 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 6)));
#line 370 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 0)));
#line 370 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 1)));
#line 370 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 2)));
#line 370 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 3)));
#line 370 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 4)));
#line 370 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 5)));
#line 370 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 0)));
#line 370 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 1)));
#line 370 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 2)));
#line 370 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 3)));
#line 370 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 4)));
#line 370 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_17_17 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 5)))) & (MR_Integer) 1);
#line 370 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 370 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 6)));
#line 370 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_20_20 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 370 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);

#line 370 "simplify_info.m"
    *check_hlds__simplify__simplify_info__HUE_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 369 "simplify_info.m"
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
#line 367 "simplify_info.m"
  {
#line 367 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 367 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 6)));
#line 368 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 0)));
#line 368 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 1)));
#line 368 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 2)));
#line 368 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 3)));
#line 368 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 4)));
#line 368 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 5)));
#line 368 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 0)));
#line 368 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 1)));
#line 368 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 2)));
#line 368 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 3)));
#line 368 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 4)));
#line 368 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_17_17 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 5)))) & (MR_Integer) 1);
#line 368 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 368 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 6)));
#line 368 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_20_20 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 368 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_21_21;

#line 368 "simplify_info.m"
    *check_hlds__simplify__simplify_info__FCT_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 368 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 367 "simplify_info.m"
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
#line 365 "simplify_info.m"
  {
#line 365 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 365 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 6)));
#line 366 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 0)));
#line 366 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 1)));
#line 366 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 2)));
#line 366 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 3)));
#line 366 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 4)));
#line 366 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 5)));
#line 366 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 0)));
#line 366 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 1)));
#line 366 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 2)));
#line 366 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 3)));
#line 366 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 4)));
#line 366 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_17_17 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 5)))) & (MR_Integer) 1);
#line 366 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 366 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 6)));
#line 366 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_20_20;
#line 366 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_21_21;

#line 366 "simplify_info.m"
    *check_hlds__simplify__simplify_info__HPC_4 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 366 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 366 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 365 "simplify_info.m"
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
    MR_Word check_hlds__simplify__simplify_info__V_19_19;
#line 364 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_20_20;
#line 364 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_21_21;

#line 364 "simplify_info.m"
    *check_hlds__simplify__simplify_info__CD_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 6)));
#line 364 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_19_19 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 364 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 364 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 363 "simplify_info.m"
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
    MR_Integer check_hlds__simplify__simplify_info__V_18_18;
#line 362 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_19_19;
#line 362 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_20_20;
#line 362 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_21_21;

#line 362 "simplify_info.m"
    *check_hlds__simplify__simplify_info__RRD_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 362 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 6)));
#line 362 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_19_19 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 362 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 362 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 361 "simplify_info.m"
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
    MR_Word check_hlds__simplify__simplify_info__V_17_17;
#line 360 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__V_18_18;
#line 360 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_19_19;
#line 360 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_20_20;
#line 360 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_21_21;

#line 360 "simplify_info.m"
    *check_hlds__simplify__simplify_info__RQ_4 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 5)))) & (MR_Integer) 1);
#line 360 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_17_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 360 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 6)));
#line 360 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_19_19 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 360 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 360 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 359 "simplify_info.m"
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
    MR_Word check_hlds__simplify__simplify_info__V_16_16;
#line 358 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_17_17;
#line 358 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__V_18_18;
#line 358 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_19_19;
#line 358 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_20_20;
#line 358 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_21_21;

#line 358 "simplify_info.m"
    *check_hlds__simplify__simplify_info__Specs_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 4)));
#line 358 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_16_16 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 5)))) & (MR_Integer) 1);
#line 358 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_17_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 358 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 6)));
#line 358 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_19_19 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 358 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 358 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 357 "simplify_info.m"
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
    MR_Word check_hlds__simplify__simplify_info__V_15_15;
#line 356 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_16_16;
#line 356 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_17_17;
#line 356 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__V_18_18;
#line 356 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_19_19;
#line 356 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_20_20;
#line 356 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_21_21;

#line 356 "simplify_info.m"
    *check_hlds__simplify__simplify_info__EV_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 3)));
#line 356 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 4)));
#line 356 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_16_16 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 5)))) & (MR_Integer) 1);
#line 356 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_17_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
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
    MR_Word check_hlds__simplify__simplify_info__V_14_14;
#line 354 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_15_15;
#line 354 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_16_16;
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
    *check_hlds__simplify__simplify_info__IVS_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 2)));
#line 354 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 3)));
#line 354 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 4)));
#line 354 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_16_16 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 5)))) & (MR_Integer) 1);
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
#line 349 "simplify_info.m"
  {
#line 349 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 349 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__SubInfo_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_4, (MR_Integer) 6)));
#line 350 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_4, (MR_Integer) 0)));
#line 350 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_4, (MR_Integer) 1)));
#line 350 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_4, (MR_Integer) 2)));
#line 350 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_4, (MR_Integer) 3)));
#line 350 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_4, (MR_Integer) 4)));
#line 350 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_4, (MR_Integer) 5)));
#line 351 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_15_15;
#line 351 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_16_16;
#line 351 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_17_17;
#line 351 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_18_18;
#line 351 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_19_19;
#line 351 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__V_20_20;
#line 351 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_21_21;
#line 351 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_22_22;
#line 351 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_23_23;

#line 351 "simplify_info.m"
    *check_hlds__simplify__simplify_info__PredId_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SubInfo_7, (MR_Integer) 0)));
#line 351 "simplify_info.m"
    *check_hlds__simplify__simplify_info__ProcId_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SubInfo_7, (MR_Integer) 1)));
#line 351 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SubInfo_7, (MR_Integer) 2)));
#line 351 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SubInfo_7, (MR_Integer) 3)));
#line 351 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SubInfo_7, (MR_Integer) 4)));
#line 351 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_18_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SubInfo_7, (MR_Integer) 5)))) & (MR_Integer) 1);
#line 351 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SubInfo_7, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 351 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SubInfo_7, (MR_Integer) 6)));
#line 351 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_21_21 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SubInfo_7, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 351 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SubInfo_7, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 351 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SubInfo_7, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 349 "simplify_info.m"
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
#line 347 "simplify_info.m"
  {
#line 347 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 347 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 0)));
#line 347 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 1)));
#line 347 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 2)));
#line 347 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 3)));
#line 347 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 4)));
#line 347 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_10_10;

#line 347 "simplify_info.m"
    *check_hlds__simplify__simplify_info__FS_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 5)));
#line 347 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 6)));
#line 347 "simplify_info.m"
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
#line 345 "simplify_info.m"
  {
#line 345 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 345 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 0)));
#line 345 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 1)));
#line 345 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 2)));
#line 345 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 3)));
#line 345 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_9_9;
#line 345 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_10_10;

#line 345 "simplify_info.m"
    *check_hlds__simplify__simplify_info__RVM_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 4)));
#line 345 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 5)));
#line 345 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 6)));
#line 345 "simplify_info.m"
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
#line 341 "simplify_info.m"
  {
#line 341 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 341 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 0)));
#line 341 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 1)));
#line 341 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_7_7;
#line 341 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_8_8;
#line 341 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_9_9;
#line 341 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_10_10;

#line 341 "simplify_info.m"
    *check_hlds__simplify__simplify_info__VS_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 2)));
#line 341 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 3)));
#line 341 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 4)));
#line 341 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 5)));
#line 341 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 6)));
#line 341 "simplify_info.m"
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
#line 343 "simplify_info.m"
  {
#line 343 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 343 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 0)));
#line 343 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 1)));
#line 343 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 2)));
#line 343 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_8_8;
#line 343 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_9_9;
#line 343 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_10_10;

#line 343 "simplify_info.m"
    *check_hlds__simplify__simplify_info__VT_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 3)));
#line 343 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 4)));
#line 343 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 5)));
#line 343 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 6)));
#line 343 "simplify_info.m"
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
#line 339 "simplify_info.m"
  {
#line 339 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 339 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 0)));
#line 339 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_6_6;
#line 339 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_7_7;
#line 339 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_8_8;
#line 339 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_9_9;
#line 339 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_10_10;

#line 339 "simplify_info.m"
    *check_hlds__simplify__simplify_info__MI_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 1)));
#line 339 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 2)));
#line 339 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 3)));
#line 339 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 4)));
#line 339 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 5)));
#line 339 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 6)));
#line 339 "simplify_info.m"
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
#line 337 "simplify_info.m"
  {
#line 337 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 337 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_5_5;
#line 337 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_6_6;
#line 337 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_7_7;
#line 337 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_8_8;
#line 337 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_9_9;
#line 337 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_10_10;

#line 337 "simplify_info.m"
    *check_hlds__simplify__simplify_info__Tasks_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 0)));
#line 337 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 1)));
#line 337 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 2)));
#line 337 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 3)));
#line 337 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 4)));
#line 337 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 5)));
#line 337 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 6)));
#line 337 "simplify_info.m"
  }
#line 106 "simplify_info.m"
}

#line 326 "simplify_info.m"
static void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_apply_substitutions_and_duplicate_5_p_0_1(
#line 326 "simplify_info.m"
  MR_Box check_hlds__simplify__simplify_info__closure_arg,
#line 326 "simplify_info.m"
  MR_Box check_hlds__simplify__simplify_info__wrapper_arg_1,
#line 326 "simplify_info.m"
  MR_Box * check_hlds__simplify__simplify_info__wrapper_arg_2)
#line 326 "simplify_info.m"
{
#line 326 "simplify_info.m"
  {
#line 326 "simplify_info.m"
    MR_Box check_hlds__simplify__simplify_info__closure = check_hlds__simplify__simplify_info__closure_arg;
#line 326 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__conv0_HeadVar__3_3;

#line 326 "simplify_info.m"
    {
#line 326 "simplify_info.m"
      parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__simplify__simplify_info__wrapper_arg_1), &check_hlds__simplify__simplify_info__conv0_HeadVar__3_3);
    }
#line 326 "simplify_info.m"
    *check_hlds__simplify__simplify_info__wrapper_arg_2 = ((MR_Box) (check_hlds__simplify__simplify_info__conv0_HeadVar__3_3));
#line 326 "simplify_info.m"
  }
#line 326 "simplify_info.m"
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
#line 323 "simplify_info.m"
  {
#line 323 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 323 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__TypeInfo_24_24;
#line 323 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__TypeInfo_25_25;
#line 323 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__VarTypes0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_16, (MR_Integer) 3)));
#line 323 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__RttiVarMaps0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_16, (MR_Integer) 4)));
#line 323 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__VarTypes_12;
#line 323 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__Renaming_13;
#line 323 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__RttiVarMaps1_14;
#line 323 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__RttiVarMaps_15;
#line 323 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_18_18;
#line 323 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_19_19;
#line 323 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_47_47;
#line 323 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_48_48;
#line 323 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_49_49;
#line 323 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_52_52;
#line 323 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_53_53;
#line 343 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_16, (MR_Integer) 0)));
#line 343 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_16, (MR_Integer) 1)));
#line 343 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_16, (MR_Integer) 2)));
#line 343 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_16, (MR_Integer) 5)));
#line 343 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_16, (MR_Integer) 6)));
#line 379 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_50_50;
#line 379 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_51_51;

#line 326 "simplify_info.m"
    {
#line 326 "simplify_info.m"
      check_hlds__simplify__simplify_info__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 326 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_18_18, 0) = ((MR_Box) (&check_hlds__simplify__simplify_info_scalar_common_2[0]));
#line 326 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_18_18, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__simplify_info_apply_substitutions_and_duplicate_5_p_0_1));
#line 326 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_18_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 326 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_18_18, 3) = ((MR_Box) (check_hlds__simplify__simplify_info__TSubst_8));
#line 326 "simplify_info.m"
    }
#line 326 "simplify_info.m"
    {
#line 326 "simplify_info.m"
      parse_tree__prog_data__transform_var_types_3_p_0(check_hlds__simplify__simplify_info__V_18_18, check_hlds__simplify__simplify_info__VarTypes0_10, &check_hlds__simplify__simplify_info__VarTypes_12);
    }
#line 5776 "check_hlds.simplify.simplify_info.c"
    check_hlds__simplify__simplify_info__TypeInfo_24_24 = (MR_Word) &check_hlds__simplify__simplify_info_scalar_common_1[0];
#line 327 "simplify_info.m"
    {
#line 327 "simplify_info.m"
      check_hlds__simplify__simplify_info__Renaming_13 = mercury__map__singleton_2_f_0(check_hlds__simplify__simplify_info__TypeInfo_24_24, check_hlds__simplify__simplify_info__TypeInfo_24_24, ((MR_Box) (check_hlds__simplify__simplify_info__ToVar_6)), ((MR_Box) (check_hlds__simplify__simplify_info__FromVar_7)));
    }
#line 5783 "check_hlds.simplify.simplify_info.c"
    check_hlds__simplify__simplify_info__TypeInfo_25_25 = (MR_Word) &check_hlds__simplify__simplify_info_scalar_common_1[1];
#line 328 "simplify_info.m"
    {
#line 328 "simplify_info.m"
      check_hlds__simplify__simplify_info__V_19_19 = mercury__map__init_0_f_0(check_hlds__simplify__simplify_info__TypeInfo_25_25, check_hlds__simplify__simplify_info__TypeInfo_25_25);
    }
#line 328 "simplify_info.m"
    {
#line 328 "simplify_info.m"
      hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_p_0(check_hlds__simplify__simplify_info__V_19_19, check_hlds__simplify__simplify_info__TSubst_8, check_hlds__simplify__simplify_info__Renaming_13, check_hlds__simplify__simplify_info__RttiVarMaps0_11, &check_hlds__simplify__simplify_info__RttiVarMaps1_14);
    }
#line 330 "simplify_info.m"
    {
#line 330 "simplify_info.m"
      hlds__hlds_rtti__rtti_var_info_duplicate_4_p_0(check_hlds__simplify__simplify_info__FromVar_7, check_hlds__simplify__simplify_info__ToVar_6, check_hlds__simplify__simplify_info__RttiVarMaps1_14, &check_hlds__simplify__simplify_info__RttiVarMaps_15);
    }
#line 379 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_16, (MR_Integer) 0)));
#line 379 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_16, (MR_Integer) 1)));
#line 379 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_16, (MR_Integer) 2)));
#line 379 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_16, (MR_Integer) 3)));
#line 379 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_16, (MR_Integer) 4)));
#line 379 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_16, (MR_Integer) 5)));
#line 379 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_16, (MR_Integer) 6)));
#line 381 "simplify_info.m"
    {
#line 381 "simplify_info.m"
      MR_Word base;
#line 381 "simplify_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 381 "simplify_info.m"
      *check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_17 = base;
#line 381 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__V_47_47));
#line 381 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__V_48_48));
#line 381 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__simplify__simplify_info__V_49_49));
#line 381 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__simplify__simplify_info__VarTypes_12));
#line 381 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__simplify__simplify_info__RttiVarMaps_15));
#line 381 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__simplify__simplify_info__V_52_52));
#line 381 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__simplify__simplify_info__V_53_53));
#line 381 "simplify_info.m"
    }
#line 323 "simplify_info.m"
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
#line 317 "simplify_info.m"
  {
#line 317 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 317 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__CostDelta0_6;
#line 317 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__CostDelta_7;
#line 317 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 6)));
#line 317 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
#line 317 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
#line 317 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
#line 317 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
#line 317 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 4)));
#line 317 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 5)));
#line 317 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_13_13, (MR_Integer) 0)));
#line 317 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_13_13, (MR_Integer) 1)));
#line 317 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_13_13, (MR_Integer) 2)));
#line 317 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_13_13, (MR_Integer) 3)));
#line 317 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_13_13, (MR_Integer) 4)));
#line 317 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_25_25 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_13_13, (MR_Integer) 5)))) & (MR_Integer) 1);
#line 317 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_13_13, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 317 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_27_27;
#line 317 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_28_28;
#line 317 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_29_29;
#line 317 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_36_36;

#line 364 "simplify_info.m"
    check_hlds__simplify__simplify_info__CostDelta0_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_13_13, (MR_Integer) 6)));
#line 364 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_27_27 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_13_13, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 364 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_13_13, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 364 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_13_13, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 319 "simplify_info.m"
    check_hlds__simplify__simplify_info__CostDelta_7 = (check_hlds__simplify__simplify_info__CostDelta0_6 + check_hlds__simplify__simplify_info__Incr_4);
#line 392 "simplify_info.m"
    {
#line 392 "simplify_info.m"
      check_hlds__simplify__simplify_info__V_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 392 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_36_36, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__V_20_20));
#line 392 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_36_36, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__V_21_21));
#line 392 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_36_36, 2) = ((MR_Box) (check_hlds__simplify__simplify_info__V_22_22));
#line 392 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_36_36, 3) = ((MR_Box) (check_hlds__simplify__simplify_info__V_23_23));
#line 392 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_36_36, 4) = ((MR_Box) (check_hlds__simplify__simplify_info__V_24_24));
#line 392 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_36_36, 5) = ((MR_Box) ((check_hlds__simplify__simplify_info__V_25_25 | ((check_hlds__simplify__simplify_info__V_26_26 << (MR_Integer) 1)))));
#line 392 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_36_36, 6) = ((MR_Box) (check_hlds__simplify__simplify_info__CostDelta_7));
#line 392 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_36_36, 7) = ((MR_Box) ((check_hlds__simplify__simplify_info__V_27_27 | ((((check_hlds__simplify__simplify_info__V_28_28 << (MR_Integer) 1)) | ((check_hlds__simplify__simplify_info__V_29_29 << (MR_Integer) 2)))))));
#line 392 "simplify_info.m"
    }
#line 392 "simplify_info.m"
    {
#line 392 "simplify_info.m"
      MR_Word base;
#line 392 "simplify_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 392 "simplify_info.m"
      *check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_9 = base;
#line 392 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__V_14_14));
#line 392 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__V_15_15));
#line 392 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__simplify__simplify_info__V_16_16));
#line 392 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__simplify__simplify_info__V_17_17));
#line 392 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__simplify__simplify_info__V_18_18));
#line 392 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__simplify__simplify_info__V_19_19));
#line 392 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__simplify__simplify_info__V_36_36));
#line 392 "simplify_info.m"
    }
#line 317 "simplify_info.m"
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
#line 313 "simplify_info.m"
  {
#line 313 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 313 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__SimplifyTasks_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
#line 313 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
#line 313 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
#line 313 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
#line 313 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
#line 313 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
#line 313 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
#line 402 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_10, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 404 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_10, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 404 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_10, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 404 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_10, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 404 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_10, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 404 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_10, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 404 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_17_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_10, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 404 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_10, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 404 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_10, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 404 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_10, (MR_Integer) 0)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 404 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_10, (MR_Integer) 0)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 404 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_10, (MR_Integer) 0)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 404 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_10, (MR_Integer) 0)))) >> (MR_Integer) 12)) & (MR_Integer) 1);

#line 404 "simplify_info.m"
    check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_11_11 == (MR_Integer) 1);
#line 313 "simplify_info.m"
    if (check_hlds__simplify__simplify_info__succeeded)
#line 305 "simplify_info.m"
      {
#line 305 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__Specs0_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_31_31, (MR_Integer) 4)));
#line 305 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__Specs_37;
#line 305 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_31_31, (MR_Integer) 0)));
#line 305 "simplify_info.m"
        MR_Integer check_hlds__simplify__simplify_info__V_49_49 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_31_31, (MR_Integer) 1)));
#line 305 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_31_31, (MR_Integer) 2)));
#line 305 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_31_31, (MR_Integer) 3)));
#line 305 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_52_52 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_31_31, (MR_Integer) 5)))) & (MR_Integer) 1);
#line 305 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_53_53 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_31_31, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 305 "simplify_info.m"
        MR_Integer check_hlds__simplify__simplify_info__V_54_54 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_31_31, (MR_Integer) 6)));
#line 305 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_55_55 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_31_31, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 305 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_56_56 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_31_31, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 305 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_57_57 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_31_31, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 305 "simplify_info.m"
        MR_Word check_hlds__simplify__simplify_info__V_64_64;

#line 307 "simplify_info.m"
        {
#line 307 "simplify_info.m"
          check_hlds__simplify__simplify_info__Specs_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 307 "simplify_info.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_info__Specs_37, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__Spec_4));
#line 307 "simplify_info.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_info__Specs_37, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__Specs0_36));
#line 307 "simplify_info.m"
        }
#line 386 "simplify_info.m"
        {
#line 386 "simplify_info.m"
          check_hlds__simplify__simplify_info__V_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 386 "simplify_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_64_64, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__V_48_48));
#line 386 "simplify_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_64_64, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__V_49_49));
#line 386 "simplify_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_64_64, 2) = ((MR_Box) (check_hlds__simplify__simplify_info__V_50_50));
#line 386 "simplify_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_64_64, 3) = ((MR_Box) (check_hlds__simplify__simplify_info__V_51_51));
#line 386 "simplify_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_64_64, 4) = ((MR_Box) (check_hlds__simplify__simplify_info__Specs_37));
#line 386 "simplify_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_64_64, 5) = ((MR_Box) ((check_hlds__simplify__simplify_info__V_52_52 | ((check_hlds__simplify__simplify_info__V_53_53 << (MR_Integer) 1)))));
#line 386 "simplify_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_64_64, 6) = ((MR_Box) (check_hlds__simplify__simplify_info__V_54_54));
#line 386 "simplify_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_64_64, 7) = ((MR_Box) ((check_hlds__simplify__simplify_info__V_55_55 | ((((check_hlds__simplify__simplify_info__V_56_56 << (MR_Integer) 1)) | ((check_hlds__simplify__simplify_info__V_57_57 << (MR_Integer) 2)))))));
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
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__SimplifyTasks_10));
#line 386 "simplify_info.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__V_26_26));
#line 386 "simplify_info.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__simplify__simplify_info__V_27_27));
#line 386 "simplify_info.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__simplify__simplify_info__V_28_28));
#line 386 "simplify_info.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__simplify__simplify_info__V_29_29));
#line 386 "simplify_info.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__simplify__simplify_info__V_30_30));
#line 386 "simplify_info.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__simplify__simplify_info__V_64_64));
#line 386 "simplify_info.m"
        }
#line 305 "simplify_info.m"
      }
#line 313 "simplify_info.m"
    else
#line 313 "simplify_info.m"
      *check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_7 = check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6;
#line 313 "simplify_info.m"
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
#line 305 "simplify_info.m"
  {
#line 305 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 305 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__Specs0_6;
#line 305 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__Specs_7;
#line 305 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 6)));
#line 305 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
#line 305 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
#line 305 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
#line 305 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
#line 305 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 4)));
#line 305 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 5)));
#line 305 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_13_13, (MR_Integer) 0)));
#line 305 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_13_13, (MR_Integer) 1)));
#line 305 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_13_13, (MR_Integer) 2)));
#line 305 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_13_13, (MR_Integer) 3)));
#line 305 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_24_24;
#line 305 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_25_25;
#line 305 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__V_26_26;
#line 305 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_27_27;
#line 305 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_28_28;
#line 305 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_29_29;
#line 305 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_36_36;

#line 358 "simplify_info.m"
    check_hlds__simplify__simplify_info__Specs0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_13_13, (MR_Integer) 4)));
#line 358 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_24_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_13_13, (MR_Integer) 5)))) & (MR_Integer) 1);
#line 358 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_13_13, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 358 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_13_13, (MR_Integer) 6)));
#line 358 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_27_27 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_13_13, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 358 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_13_13, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 358 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_13_13, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 307 "simplify_info.m"
    {
#line 307 "simplify_info.m"
      check_hlds__simplify__simplify_info__Specs_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 307 "simplify_info.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_info__Specs_7, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__Spec_4));
#line 307 "simplify_info.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_info__Specs_7, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__Specs0_6));
#line 307 "simplify_info.m"
    }
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
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_36_36, 4) = ((MR_Box) (check_hlds__simplify__simplify_info__Specs_7));
#line 386 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_36_36, 5) = ((MR_Box) ((check_hlds__simplify__simplify_info__V_24_24 | ((check_hlds__simplify__simplify_info__V_25_25 << (MR_Integer) 1)))));
#line 386 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_36_36, 6) = ((MR_Box) (check_hlds__simplify__simplify_info__V_26_26));
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
#line 305 "simplify_info.m"
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
#line 300 "simplify_info.m"
  {
#line 300 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 300 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__ElimVarsLists0_6;
#line 300 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__ElimVarsLists_7;
#line 300 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 6)));
#line 300 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
#line 300 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
#line 300 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
#line 300 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
#line 300 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 4)));
#line 300 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 5)));
#line 300 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_13_13, (MR_Integer) 0)));
#line 300 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_13_13, (MR_Integer) 1)));
#line 300 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_13_13, (MR_Integer) 2)));
#line 300 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_23_23;
#line 300 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_24_24;
#line 300 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_25_25;
#line 300 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__V_26_26;
#line 300 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_27_27;
#line 300 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_28_28;
#line 300 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_29_29;
#line 300 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_36_36;

#line 356 "simplify_info.m"
    check_hlds__simplify__simplify_info__ElimVarsLists0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_13_13, (MR_Integer) 3)));
#line 356 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_13_13, (MR_Integer) 4)));
#line 356 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_24_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_13_13, (MR_Integer) 5)))) & (MR_Integer) 1);
#line 356 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_13_13, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 356 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_13_13, (MR_Integer) 6)));
#line 356 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_27_27 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_13_13, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 356 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_13_13, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 356 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_13_13, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 302 "simplify_info.m"
    {
#line 302 "simplify_info.m"
      check_hlds__simplify__simplify_info__ElimVarsLists_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 302 "simplify_info.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_info__ElimVarsLists_7, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__ElimVars_4));
#line 302 "simplify_info.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_info__ElimVarsLists_7, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__ElimVarsLists0_6));
#line 302 "simplify_info.m"
    }
#line 384 "simplify_info.m"
    {
#line 384 "simplify_info.m"
      check_hlds__simplify__simplify_info__V_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 384 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_36_36, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__V_20_20));
#line 384 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_36_36, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__V_21_21));
#line 384 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_36_36, 2) = ((MR_Box) (check_hlds__simplify__simplify_info__V_22_22));
#line 384 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_36_36, 3) = ((MR_Box) (check_hlds__simplify__simplify_info__ElimVarsLists_7));
#line 384 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_36_36, 4) = ((MR_Box) (check_hlds__simplify__simplify_info__V_23_23));
#line 384 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_36_36, 5) = ((MR_Box) ((check_hlds__simplify__simplify_info__V_24_24 | ((check_hlds__simplify__simplify_info__V_25_25 << (MR_Integer) 1)))));
#line 384 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_36_36, 6) = ((MR_Box) (check_hlds__simplify__simplify_info__V_26_26));
#line 384 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_36_36, 7) = ((MR_Box) ((check_hlds__simplify__simplify_info__V_27_27 | ((((check_hlds__simplify__simplify_info__V_28_28 << (MR_Integer) 1)) | ((check_hlds__simplify__simplify_info__V_29_29 << (MR_Integer) 2)))))));
#line 384 "simplify_info.m"
    }
#line 384 "simplify_info.m"
    {
#line 384 "simplify_info.m"
      MR_Word base;
#line 384 "simplify_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 384 "simplify_info.m"
      *check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_9 = base;
#line 384 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__V_14_14));
#line 384 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__V_15_15));
#line 384 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__simplify__simplify_info__V_16_16));
#line 384 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__simplify__simplify_info__V_17_17));
#line 384 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__simplify__simplify_info__V_18_18));
#line 384 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__simplify__simplify_info__V_19_19));
#line 384 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__simplify__simplify_info__V_36_36));
#line 384 "simplify_info.m"
    }
#line 300 "simplify_info.m"
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
#line 295 "simplify_info.m"
  {
#line 295 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 295 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__ModuleInfo_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_4, (MR_Integer) 1)));
#line 295 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__PredId_8;
#line 295 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__ProcId_9;
#line 295 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__SubInfo_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_4, (MR_Integer) 6)));
#line 339 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_4, (MR_Integer) 0)));
#line 339 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_4, (MR_Integer) 2)));
#line 339 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_4, (MR_Integer) 3)));
#line 339 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_4, (MR_Integer) 4)));
#line 339 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_4, (MR_Integer) 5)));
#line 351 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_29_29;
#line 351 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_30_30;
#line 351 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_31_31;
#line 351 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_32_32;
#line 351 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_33_33;
#line 351 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__V_34_34;
#line 351 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_35_35;
#line 351 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_36_36;
#line 351 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_37_37;

#line 351 "simplify_info.m"
    check_hlds__simplify__simplify_info__PredId_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SubInfo_21, (MR_Integer) 0)));
#line 351 "simplify_info.m"
    check_hlds__simplify__simplify_info__ProcId_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SubInfo_21, (MR_Integer) 1)));
#line 351 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SubInfo_21, (MR_Integer) 2)));
#line 351 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SubInfo_21, (MR_Integer) 3)));
#line 351 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SubInfo_21, (MR_Integer) 4)));
#line 351 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_32_32 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SubInfo_21, (MR_Integer) 5)))) & (MR_Integer) 1);
#line 351 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SubInfo_21, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 351 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_34_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SubInfo_21, (MR_Integer) 6)));
#line 351 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_35_35 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SubInfo_21, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 351 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SubInfo_21, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 351 "simplify_info.m"
    check_hlds__simplify__simplify_info__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SubInfo_21, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 298 "simplify_info.m"
    {
#line 298 "simplify_info.m"
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(check_hlds__simplify__simplify_info__ModuleInfo_7, check_hlds__simplify__simplify_info__PredId_8, check_hlds__simplify__simplify_info__ProcId_9, check_hlds__simplify__simplify_info__PredInfo_5, check_hlds__simplify__simplify_info__ProcInfo_6);
#line 298 "simplify_info.m"
      return;
    }
#line 295 "simplify_info.m"
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
#line 286 "simplify_info.m"
  {
#line 286 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 286 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_24_24;
#line 286 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
#line 286 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
#line 286 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
#line 286 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
#line 286 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
#line 286 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
#line 286 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_31_31, (MR_Integer) 0)));
#line 286 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_31_31, (MR_Integer) 1)));
#line 286 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_31_31, (MR_Integer) 2)));
#line 286 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_31_31, (MR_Integer) 3)));
#line 286 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_31_31, (MR_Integer) 4)));
#line 286 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__V_45_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_31_31, (MR_Integer) 6)));
#line 286 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_47_47 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_31_31, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 286 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_49_49 = check_hlds__simplify__simplify_info__SimplifyTasks_4;
#line 286 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_50_50 = check_hlds__simplify__simplify_info__V_26_26;
#line 286 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_51_51 = check_hlds__simplify__simplify_info__V_27_27;
#line 286 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_52_52 = check_hlds__simplify__simplify_info__V_28_28;
#line 286 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_53_53 = check_hlds__simplify__simplify_info__V_29_29;
#line 286 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_54_54 = check_hlds__simplify__simplify_info__V_30_30;
#line 286 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_62_62 = check_hlds__simplify__simplify_info__V_38_38;
#line 286 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__V_63_63 = check_hlds__simplify__simplify_info__V_39_39;
#line 286 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_64_64 = check_hlds__simplify__simplify_info__V_40_40;
#line 286 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_65_65 = check_hlds__simplify__simplify_info__V_41_41;
#line 286 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_66_66 = check_hlds__simplify__simplify_info__V_42_42;
#line 286 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__V_69_69 = check_hlds__simplify__simplify_info__V_45_45;
#line 286 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_71_71 = check_hlds__simplify__simplify_info__V_47_47;
#line 286 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_73_73 = check_hlds__simplify__simplify_info__V_49_49;
#line 286 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_74_74 = check_hlds__simplify__simplify_info__V_50_50;
#line 286 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_75_75 = check_hlds__simplify__simplify_info__V_51_51;
#line 286 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_76_76 = check_hlds__simplify__simplify_info__V_52_52;
#line 286 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_77_77 = check_hlds__simplify__simplify_info__V_53_53;
#line 286 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_78_78 = check_hlds__simplify__simplify_info__V_54_54;
#line 286 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_86_86 = check_hlds__simplify__simplify_info__V_62_62;
#line 286 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__V_87_87 = check_hlds__simplify__simplify_info__V_63_63;
#line 286 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_88_88 = check_hlds__simplify__simplify_info__V_64_64;
#line 286 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_89_89 = check_hlds__simplify__simplify_info__V_65_65;
#line 286 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_90_90 = check_hlds__simplify__simplify_info__V_66_66;
#line 286 "simplify_info.m"
    MR_Integer check_hlds__simplify__simplify_info__V_93_93 = check_hlds__simplify__simplify_info__V_69_69;
#line 286 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_95_95 = check_hlds__simplify__simplify_info__V_71_71;
#line 286 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_97_97 = check_hlds__simplify__simplify_info__V_73_73;
#line 286 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_98_98 = check_hlds__simplify__simplify_info__V_74_74;
#line 286 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_99_99 = check_hlds__simplify__simplify_info__V_75_75;
#line 286 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_100_100 = check_hlds__simplify__simplify_info__V_76_76;
#line 286 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_101_101 = check_hlds__simplify__simplify_info__V_77_77;
#line 286 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_102_102 = check_hlds__simplify__simplify_info__V_78_78;
#line 287 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
#line 288 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_43_43 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_31_31, (MR_Integer) 5)))) & (MR_Integer) 1);
#line 288 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_44_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_31_31, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 288 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_46_46 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_31_31, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 288 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__V_48_48 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_31_31, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);

#line 291 "simplify_info.m"
    {
#line 291 "simplify_info.m"
      check_hlds__simplify__simplify_info__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 291 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_24_24, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__V_86_86));
#line 291 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_24_24, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__V_87_87));
#line 291 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_24_24, 2) = ((MR_Box) (check_hlds__simplify__simplify_info__V_88_88));
#line 291 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_24_24, 3) = ((MR_Box) (check_hlds__simplify__simplify_info__V_89_89));
#line 291 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_24_24, 4) = ((MR_Box) (check_hlds__simplify__simplify_info__V_90_90));
#line 291 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_24_24, 5) = ((MR_Box) (((MR_Integer) 0 | (((MR_Integer) 0 << (MR_Integer) 1)))));
#line 291 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_24_24, 6) = ((MR_Box) (check_hlds__simplify__simplify_info__V_93_93));
#line 291 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_24_24, 7) = ((MR_Box) (((MR_Integer) 1 | ((((check_hlds__simplify__simplify_info__V_95_95 << (MR_Integer) 1)) | (((MR_Integer) 1 << (MR_Integer) 2)))))));
#line 291 "simplify_info.m"
    }
#line 291 "simplify_info.m"
    {
#line 291 "simplify_info.m"
      MR_Word base;
#line 291 "simplify_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 291 "simplify_info.m"
      *check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_7 = base;
#line 291 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__V_97_97));
#line 291 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__V_98_98));
#line 291 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__simplify__simplify_info__V_99_99));
#line 291 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__simplify__simplify_info__V_100_100));
#line 291 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__simplify__simplify_info__V_101_101));
#line 291 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__simplify__simplify_info__V_102_102));
#line 291 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__simplify__simplify_info__V_24_24));
#line 291 "simplify_info.m"
    }
#line 286 "simplify_info.m"
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
#line 266 "simplify_info.m"
  {
#line 266 "simplify_info.m"
    MR_bool check_hlds__simplify__simplify_info__succeeded;
#line 266 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__Globals_13;
#line 266 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__FullyStrict_14;
#line 266 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__VarSet_15;
#line 266 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__VarTypes_16;
#line 266 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__InstVarSet_17;
#line 266 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__RttiVarMaps_18;
#line 266 "simplify_info.m"
    MR_Word check_hlds__simplify__simplify_info__SubInfo_26;

#line 267 "simplify_info.m"
    {
#line 267 "simplify_info.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__simplify__simplify_info__ModuleInfo_7, &check_hlds__simplify__simplify_info__Globals_13);
    }
#line 268 "simplify_info.m"
    {
#line 268 "simplify_info.m"
      libs__globals__lookup_bool_option_3_p_0(check_hlds__simplify__simplify_info__Globals_13, (MR_Integer) 165, &check_hlds__simplify__simplify_info__FullyStrict_14);
    }
#line 269 "simplify_info.m"
    {
#line 269 "simplify_info.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(check_hlds__simplify__simplify_info__ProcInfo_10, &check_hlds__simplify__simplify_info__VarSet_15);
    }
#line 270 "simplify_info.m"
    {
#line 270 "simplify_info.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(check_hlds__simplify__simplify_info__ProcInfo_10, &check_hlds__simplify__simplify_info__VarTypes_16);
    }
#line 271 "simplify_info.m"
    {
#line 271 "simplify_info.m"
      hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(check_hlds__simplify__simplify_info__ProcInfo_10, &check_hlds__simplify__simplify_info__InstVarSet_17);
    }
#line 272 "simplify_info.m"
    {
#line 272 "simplify_info.m"
      hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(check_hlds__simplify__simplify_info__ProcInfo_10, &check_hlds__simplify__simplify_info__RttiVarMaps_18);
    }
#line 280 "simplify_info.m"
    {
#line 280 "simplify_info.m"
      check_hlds__simplify__simplify_info__SubInfo_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 280 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SubInfo_26, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__PredId_8));
#line 280 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SubInfo_26, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__ProcId_9));
#line 280 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SubInfo_26, 2) = ((MR_Box) (check_hlds__simplify__simplify_info__InstVarSet_17));
#line 280 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SubInfo_26, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 280 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SubInfo_26, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 280 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SubInfo_26, 5) = ((MR_Box) (((MR_Integer) 0 | (((MR_Integer) 0 << (MR_Integer) 1)))));
#line 280 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SubInfo_26, 6) = ((MR_Box) ((MR_Integer) 0));
#line 280 "simplify_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SubInfo_26, 7) = ((MR_Box) (((MR_Integer) 1 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((MR_Integer) 1 << (MR_Integer) 2)))))));
#line 280 "simplify_info.m"
    }
#line 283 "simplify_info.m"
    {
#line 283 "simplify_info.m"
      MR_Word base;
#line 283 "simplify_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 283 "simplify_info.m"
      *check_hlds__simplify__simplify_info__Info_12 = base;
#line 283 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__SimplifyTasks_11));
#line 283 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__ModuleInfo_7));
#line 283 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__simplify__simplify_info__VarSet_15));
#line 283 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__simplify__simplify_info__VarTypes_16));
#line 283 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__simplify__simplify_info__RttiVarMaps_18));
#line 283 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__simplify__simplify_info__FullyStrict_14));
#line 283 "simplify_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__simplify__simplify_info__SubInfo_26));
#line 283 "simplify_info.m"
    }
#line 266 "simplify_info.m"
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
