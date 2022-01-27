/*
** Automatically generated from `term_constr_main_types.m'
** by the Mercury compiler,
** version rotd-2015-09-15
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


/* :- module transform_hlds.term_constr_main_types. */
/* :- implementation. */

/*
INIT mercury__transform_hlds__term_constr_main_types__init
ENDINIT
*/

#include "transform_hlds.term_constr_main_types.mih"


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
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
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
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 136 "transform_hlds.term_constr_main_types.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_constr_main_types__pair__ti_pair_2term__type_ctor_info_context_0transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0;

#line 139 "transform_hlds.term_constr_main_types.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main_types__list__ti_list_1pair__ti_pair_2term__type_ctor_info_context_0transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0;

#line 142 "transform_hlds.term_constr_main_types.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_constr_main_types__parse_tree__prog_data__ti_generic_termination_info_2transform_hlds__term_constr_main_types__type_ctor_info_term_reason_0list__ti_list_1pair__ti_pair_2term__type_ctor_info_context_0transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0;

#line 145 "transform_hlds.term_constr_main_types.c"
static const MR_EnumFunctorDesc transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__enum_functor_desc_intermod_status_0_0;

#line 148 "transform_hlds.term_constr_main_types.c"
static const MR_EnumFunctorDesc transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__enum_functor_desc_intermod_status_0_1;

#line 151 "transform_hlds.term_constr_main_types.c"
static const MR_EnumFunctorDescPtr transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__enum_value_ordered_intermod_status_0[2];

#line 154 "transform_hlds.term_constr_main_types.c"
static const MR_EnumFunctorDescPtr transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__enum_name_ordered_intermod_status_0[2];

#line 157 "transform_hlds.term_constr_main_types.c"
static const MR_Integer transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__functor_number_map_intermod_status_0[2];

#line 160 "transform_hlds.term_constr_main_types.c"
static const MR_EnumFunctorDesc transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__enum_functor_desc_term_reason_0_0;

#line 163 "transform_hlds.term_constr_main_types.c"
static const MR_EnumFunctorDesc transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__enum_functor_desc_term_reason_0_1;

#line 166 "transform_hlds.term_constr_main_types.c"
static const MR_EnumFunctorDesc transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__enum_functor_desc_term_reason_0_2;

#line 169 "transform_hlds.term_constr_main_types.c"
static const MR_EnumFunctorDesc transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__enum_functor_desc_term_reason_0_3;

#line 172 "transform_hlds.term_constr_main_types.c"
static const MR_EnumFunctorDesc transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__enum_functor_desc_term_reason_0_4;

#line 175 "transform_hlds.term_constr_main_types.c"
static const MR_EnumFunctorDescPtr transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__enum_value_ordered_term_reason_0[5];

#line 178 "transform_hlds.term_constr_main_types.c"
static const MR_EnumFunctorDescPtr transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__enum_name_ordered_term_reason_0[5];

#line 181 "transform_hlds.term_constr_main_types.c"
static const MR_Integer transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__functor_number_map_term_reason_0[5];

#line 184 "transform_hlds.term_constr_main_types.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main_types__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 187 "transform_hlds.term_constr_main_types.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main_types__term__ti_var_1term__type_ctor_info_generic_0;

#line 190 "transform_hlds.term_constr_main_types.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_constr_main_types__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1term__type_ctor_info_generic_0;

#line 193 "transform_hlds.term_constr_main_types.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main_types__list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0;

#line 196 "transform_hlds.term_constr_main_types.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main_types__list__ti_list_1parse_tree__prog_data__type_ctor_info_arg_size_constr_0;

#line 199 "transform_hlds.term_constr_main_types.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main_types__maybe__ti_maybe_1list__ti_list_1parse_tree__prog_data__type_ctor_info_arg_size_constr_0;

#line 202 "transform_hlds.term_constr_main_types.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main_types__maybe__ti_maybe_1libs__polyhedron__type_ctor_info_polyhedron_0;

#line 205 "transform_hlds.term_constr_main_types.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main_types__maybe__ti_maybe_1parse_tree__prog_data__ti_generic_termination_info_2transform_hlds__term_constr_main_types__type_ctor_info_term_reason_0list__ti_list_1pair__ti_pair_2term__type_ctor_info_context_0transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0;

#line 208 "transform_hlds.term_constr_main_types.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main_types__maybe__ti_maybe_1transform_hlds__term_constr_main_types__type_ctor_info_intermod_status_0;

#line 211 "transform_hlds.term_constr_main_types.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main_types__maybe__ti_maybe_1transform_hlds__term_constr_data__type_ctor_info_abstract_proc_0;

#line 214 "transform_hlds.term_constr_main_types.c"
static const MR_PseudoTypeInfo transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__field_types_termination2_info_0_0[9];

#line 217 "transform_hlds.term_constr_main_types.c"
static const MR_ConstString transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__field_names_termination2_info_0_0[9];

#line 220 "transform_hlds.term_constr_main_types.c"
static const MR_DuFunctorDesc transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__du_functor_desc_termination2_info_0_0;

#line 223 "transform_hlds.term_constr_main_types.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__du_stag_ordered_termination2_info_0_0[1];

#line 226 "transform_hlds.term_constr_main_types.c"
static const MR_DuPtagLayout transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__du_ptag_ordered_termination2_info_0[1];

#line 229 "transform_hlds.term_constr_main_types.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__du_name_ordered_termination2_info_0[1];

#line 232 "transform_hlds.term_constr_main_types.c"
static const MR_Integer transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__functor_number_map_termination2_info_0[1];

#line 235 "transform_hlds.term_constr_main_types.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_main_types____Unify____constr_arg_size_info_0_0_10001(
#line 238 "transform_hlds.term_constr_main_types.c"
  MR_Box transform_hlds__term_constr_main_types__wrapper_arg_1,
#line 240 "transform_hlds.term_constr_main_types.c"
  MR_Box transform_hlds__term_constr_main_types__wrapper_arg_2);

#line 243 "transform_hlds.term_constr_main_types.c"
static void MR_CALL 
transform_hlds__term_constr_main_types____Compare____constr_arg_size_info_0_0_10001(
#line 246 "transform_hlds.term_constr_main_types.c"
  MR_Box * transform_hlds__term_constr_main_types__wrapper_arg_1,
#line 248 "transform_hlds.term_constr_main_types.c"
  MR_Box transform_hlds__term_constr_main_types__wrapper_arg_2,
#line 250 "transform_hlds.term_constr_main_types.c"
  MR_Box transform_hlds__term_constr_main_types__wrapper_arg_3);

#line 253 "transform_hlds.term_constr_main_types.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_main_types____Unify____constr_termination_info_0_0_10001(
#line 256 "transform_hlds.term_constr_main_types.c"
  MR_Box transform_hlds__term_constr_main_types__wrapper_arg_1,
#line 258 "transform_hlds.term_constr_main_types.c"
  MR_Box transform_hlds__term_constr_main_types__wrapper_arg_2);

#line 261 "transform_hlds.term_constr_main_types.c"
static void MR_CALL 
transform_hlds__term_constr_main_types____Compare____constr_termination_info_0_0_10001(
#line 264 "transform_hlds.term_constr_main_types.c"
  MR_Box * transform_hlds__term_constr_main_types__wrapper_arg_1,
#line 266 "transform_hlds.term_constr_main_types.c"
  MR_Box transform_hlds__term_constr_main_types__wrapper_arg_2,
#line 268 "transform_hlds.term_constr_main_types.c"
  MR_Box transform_hlds__term_constr_main_types__wrapper_arg_3);

#line 271 "transform_hlds.term_constr_main_types.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_main_types____Unify____intermod_status_0_0_10001(
#line 274 "transform_hlds.term_constr_main_types.c"
  MR_Box transform_hlds__term_constr_main_types__wrapper_arg_1,
#line 276 "transform_hlds.term_constr_main_types.c"
  MR_Box transform_hlds__term_constr_main_types__wrapper_arg_2);

#line 279 "transform_hlds.term_constr_main_types.c"
static void MR_CALL 
transform_hlds__term_constr_main_types____Compare____intermod_status_0_0_10001(
#line 282 "transform_hlds.term_constr_main_types.c"
  MR_Box * transform_hlds__term_constr_main_types__wrapper_arg_1,
#line 284 "transform_hlds.term_constr_main_types.c"
  MR_Box transform_hlds__term_constr_main_types__wrapper_arg_2,
#line 286 "transform_hlds.term_constr_main_types.c"
  MR_Box transform_hlds__term_constr_main_types__wrapper_arg_3);

#line 289 "transform_hlds.term_constr_main_types.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_main_types____Unify____term_reason_0_0_10001(
#line 292 "transform_hlds.term_constr_main_types.c"
  MR_Box transform_hlds__term_constr_main_types__wrapper_arg_1,
#line 294 "transform_hlds.term_constr_main_types.c"
  MR_Box transform_hlds__term_constr_main_types__wrapper_arg_2);

#line 297 "transform_hlds.term_constr_main_types.c"
static void MR_CALL 
transform_hlds__term_constr_main_types____Compare____term_reason_0_0_10001(
#line 300 "transform_hlds.term_constr_main_types.c"
  MR_Box * transform_hlds__term_constr_main_types__wrapper_arg_1,
#line 302 "transform_hlds.term_constr_main_types.c"
  MR_Box transform_hlds__term_constr_main_types__wrapper_arg_2,
#line 304 "transform_hlds.term_constr_main_types.c"
  MR_Box transform_hlds__term_constr_main_types__wrapper_arg_3);

#line 307 "transform_hlds.term_constr_main_types.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_main_types____Unify____termination2_info_0_0_10001(
#line 310 "transform_hlds.term_constr_main_types.c"
  MR_Box transform_hlds__term_constr_main_types__wrapper_arg_1,
#line 312 "transform_hlds.term_constr_main_types.c"
  MR_Box transform_hlds__term_constr_main_types__wrapper_arg_2);

#line 315 "transform_hlds.term_constr_main_types.c"
static void MR_CALL 
transform_hlds__term_constr_main_types____Compare____termination2_info_0_0_10001(
#line 318 "transform_hlds.term_constr_main_types.c"
  MR_Box * transform_hlds__term_constr_main_types__wrapper_arg_1,
#line 320 "transform_hlds.term_constr_main_types.c"
  MR_Box transform_hlds__term_constr_main_types__wrapper_arg_2,
#line 322 "transform_hlds.term_constr_main_types.c"
  MR_Box transform_hlds__term_constr_main_types__wrapper_arg_3);


static /* final */ const MR_Box transform_hlds__term_constr_main_types_scalar_common_1[10][2];

static /* final */ const MR_Box transform_hlds__term_constr_main_types_scalar_common_2[3][3];




static /* final */ const MR_Box transform_hlds__term_constr_main_types_scalar_common_1[10][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__term_constr_main_types_scalar_common_2[0]))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__term_constr_main_types_scalar_common_1[1]))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_size_constr_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&transform_hlds__term_constr_main_types_scalar_common_1[4]))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&libs__polyhedron__libs__polyhedron__type_ctor_info_polyhedron_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&transform_hlds__term_constr_main_types_scalar_common_2[1]))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__type_ctor_info_intermod_status_0))
  },
  /* row 9 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_proc_0))
  },
};

static /* final */ const MR_Box transform_hlds__term_constr_main_types_scalar_common_2[3][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_generic_termination_info_2)),
    ((MR_Box) (&transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__type_ctor_info_term_reason_0)),
    ((MR_Box) (&transform_hlds__term_constr_main_types_scalar_common_1[2]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__term_constr_main_types_scalar_common_1[0])),
    ((MR_Box) (&transform_hlds__term_constr_main_types_scalar_common_1[1]))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 416 "transform_hlds.term_constr_main_types.c"
const MR_TypeCtorInfo_Struct transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__type_ctor_info_constr_arg_size_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__term_constr_main_types____Unify____constr_arg_size_info_0_0_10001)),
  ((MR_Box) (transform_hlds__term_constr_main_types____Compare____constr_arg_size_info_0_0_10001)),
  (MR_String) "transform_hlds.term_constr_main_types",
  (MR_String) "constr_arg_size_info",
  {     NULL },
  {     (MR_PseudoTypeInfo) &libs__polyhedron__libs__polyhedron__type_ctor_info_polyhedron_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 433 "transform_hlds.term_constr_main_types.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_constr_main_types__pair__ti_pair_2term__type_ctor_info_context_0transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_context_0,
    (MR_TypeInfo) &transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0
  }
};

#line 442 "transform_hlds.term_constr_main_types.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main_types__list__ti_list_1pair__ti_pair_2term__type_ctor_info_context_0transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__term_constr_main_types__pair__ti_pair_2term__type_ctor_info_context_0transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0
  }
};

#line 450 "transform_hlds.term_constr_main_types.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_constr_main_types__parse_tree__prog_data__ti_generic_termination_info_2transform_hlds__term_constr_main_types__type_ctor_info_term_reason_0list__ti_list_1pair__ti_pair_2term__type_ctor_info_context_0transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0 = {
  &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_generic_termination_info_2,
  {
    (MR_TypeInfo) &transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__type_ctor_info_term_reason_0,
    (MR_TypeInfo) &transform_hlds__term_constr_main_types__list__ti_list_1pair__ti_pair_2term__type_ctor_info_context_0transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0
  }
};

#line 459 "transform_hlds.term_constr_main_types.c"
const MR_TypeCtorInfo_Struct transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__type_ctor_info_constr_termination_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__term_constr_main_types____Unify____constr_termination_info_0_0_10001)),
  ((MR_Box) (transform_hlds__term_constr_main_types____Compare____constr_termination_info_0_0_10001)),
  (MR_String) "transform_hlds.term_constr_main_types",
  (MR_String) "constr_termination_info",
  {     NULL },
  {     (MR_PseudoTypeInfo) &transform_hlds__term_constr_main_types__parse_tree__prog_data__ti_generic_termination_info_2transform_hlds__term_constr_main_types__type_ctor_info_term_reason_0list__ti_list_1pair__ti_pair_2term__type_ctor_info_context_0transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 476 "transform_hlds.term_constr_main_types.c"
static const MR_EnumFunctorDesc transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__enum_functor_desc_intermod_status_0_0 = {
  (MR_String) "not_mutually_recursive",
  (MR_Integer) 0
};

#line 482 "transform_hlds.term_constr_main_types.c"
static const MR_EnumFunctorDesc transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__enum_functor_desc_intermod_status_0_1 = {
  (MR_String) "may_be_mutually_recursive",
  (MR_Integer) 1
};

#line 488 "transform_hlds.term_constr_main_types.c"
static const MR_EnumFunctorDescPtr transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__enum_value_ordered_intermod_status_0[2] = {
  &transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__enum_functor_desc_intermod_status_0_0,
  &transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__enum_functor_desc_intermod_status_0_1
};

#line 494 "transform_hlds.term_constr_main_types.c"
static const MR_EnumFunctorDescPtr transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__enum_name_ordered_intermod_status_0[2] = {
  &transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__enum_functor_desc_intermod_status_0_1,
  &transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__enum_functor_desc_intermod_status_0_0
};

#line 500 "transform_hlds.term_constr_main_types.c"
static const MR_Integer transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__functor_number_map_intermod_status_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 506 "transform_hlds.term_constr_main_types.c"
const MR_TypeCtorInfo_Struct transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__type_ctor_info_intermod_status_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (transform_hlds__term_constr_main_types____Unify____intermod_status_0_0_10001)),
  ((MR_Box) (transform_hlds__term_constr_main_types____Compare____intermod_status_0_0_10001)),
  (MR_String) "transform_hlds.term_constr_main_types",
  (MR_String) "intermod_status",
  {     transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__enum_name_ordered_intermod_status_0 },
  {     transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__enum_value_ordered_intermod_status_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__functor_number_map_intermod_status_0
};

#line 523 "transform_hlds.term_constr_main_types.c"
static const MR_EnumFunctorDesc transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__enum_functor_desc_term_reason_0_0 = {
  (MR_String) "term_reason_builtin",
  (MR_Integer) 0
};

#line 529 "transform_hlds.term_constr_main_types.c"
static const MR_EnumFunctorDesc transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__enum_functor_desc_term_reason_0_1 = {
  (MR_String) "term_reason_pragma_supplied",
  (MR_Integer) 1
};

#line 535 "transform_hlds.term_constr_main_types.c"
static const MR_EnumFunctorDesc transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__enum_functor_desc_term_reason_0_2 = {
  (MR_String) "term_reason_foreign_supplied",
  (MR_Integer) 2
};

#line 541 "transform_hlds.term_constr_main_types.c"
static const MR_EnumFunctorDesc transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__enum_functor_desc_term_reason_0_3 = {
  (MR_String) "term_reason_import_supplied",
  (MR_Integer) 3
};

#line 547 "transform_hlds.term_constr_main_types.c"
static const MR_EnumFunctorDesc transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__enum_functor_desc_term_reason_0_4 = {
  (MR_String) "term_reason_analysis",
  (MR_Integer) 4
};

#line 553 "transform_hlds.term_constr_main_types.c"
static const MR_EnumFunctorDescPtr transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__enum_value_ordered_term_reason_0[5] = {
  &transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__enum_functor_desc_term_reason_0_0,
  &transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__enum_functor_desc_term_reason_0_1,
  &transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__enum_functor_desc_term_reason_0_2,
  &transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__enum_functor_desc_term_reason_0_3,
  &transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__enum_functor_desc_term_reason_0_4
};

#line 562 "transform_hlds.term_constr_main_types.c"
static const MR_EnumFunctorDescPtr transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__enum_name_ordered_term_reason_0[5] = {
  &transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__enum_functor_desc_term_reason_0_4,
  &transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__enum_functor_desc_term_reason_0_0,
  &transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__enum_functor_desc_term_reason_0_2,
  &transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__enum_functor_desc_term_reason_0_3,
  &transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__enum_functor_desc_term_reason_0_1
};

#line 571 "transform_hlds.term_constr_main_types.c"
static const MR_Integer transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__functor_number_map_term_reason_0[5] = {
  (MR_Integer) 1,
  (MR_Integer) 4,
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 0
};

#line 580 "transform_hlds.term_constr_main_types.c"
const MR_TypeCtorInfo_Struct transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__type_ctor_info_term_reason_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (transform_hlds__term_constr_main_types____Unify____term_reason_0_0_10001)),
  ((MR_Box) (transform_hlds__term_constr_main_types____Compare____term_reason_0_0_10001)),
  (MR_String) "transform_hlds.term_constr_main_types",
  (MR_String) "term_reason",
  {     transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__enum_name_ordered_term_reason_0 },
  {     transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__enum_value_ordered_term_reason_0 },
  (MR_Integer) 5,
  (MR_Integer) 4,
  transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__functor_number_map_term_reason_0
};

#line 597 "transform_hlds.term_constr_main_types.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main_types__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 605 "transform_hlds.term_constr_main_types.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main_types__term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 613 "transform_hlds.term_constr_main_types.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_constr_main_types__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__term_constr_main_types__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &transform_hlds__term_constr_main_types__term__ti_var_1term__type_ctor_info_generic_0
  }
};

#line 622 "transform_hlds.term_constr_main_types.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main_types__list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__term_constr_main_types__term__ti_var_1term__type_ctor_info_generic_0
  }
};

#line 630 "transform_hlds.term_constr_main_types.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main_types__list__ti_list_1parse_tree__prog_data__type_ctor_info_arg_size_constr_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_size_constr_0
  }
};

#line 638 "transform_hlds.term_constr_main_types.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main_types__maybe__ti_maybe_1list__ti_list_1parse_tree__prog_data__type_ctor_info_arg_size_constr_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &transform_hlds__term_constr_main_types__list__ti_list_1parse_tree__prog_data__type_ctor_info_arg_size_constr_0
  }
};

#line 646 "transform_hlds.term_constr_main_types.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main_types__maybe__ti_maybe_1libs__polyhedron__type_ctor_info_polyhedron_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &libs__polyhedron__libs__polyhedron__type_ctor_info_polyhedron_0
  }
};

#line 654 "transform_hlds.term_constr_main_types.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main_types__maybe__ti_maybe_1parse_tree__prog_data__ti_generic_termination_info_2transform_hlds__term_constr_main_types__type_ctor_info_term_reason_0list__ti_list_1pair__ti_pair_2term__type_ctor_info_context_0transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &transform_hlds__term_constr_main_types__parse_tree__prog_data__ti_generic_termination_info_2transform_hlds__term_constr_main_types__type_ctor_info_term_reason_0list__ti_list_1pair__ti_pair_2term__type_ctor_info_context_0transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0
  }
};

#line 662 "transform_hlds.term_constr_main_types.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main_types__maybe__ti_maybe_1transform_hlds__term_constr_main_types__type_ctor_info_intermod_status_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__type_ctor_info_intermod_status_0
  }
};

#line 670 "transform_hlds.term_constr_main_types.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main_types__maybe__ti_maybe_1transform_hlds__term_constr_data__type_ctor_info_abstract_proc_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_proc_0
  }
};

#line 678 "transform_hlds.term_constr_main_types.c"
static const MR_PseudoTypeInfo transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__field_types_termination2_info_0_0[9] = {
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_main_types__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1term__type_ctor_info_generic_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_main_types__list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_main_types__maybe__ti_maybe_1list__ti_list_1parse_tree__prog_data__type_ctor_info_arg_size_constr_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_main_types__maybe__ti_maybe_1list__ti_list_1parse_tree__prog_data__type_ctor_info_arg_size_constr_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_main_types__maybe__ti_maybe_1libs__polyhedron__type_ctor_info_polyhedron_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_main_types__maybe__ti_maybe_1libs__polyhedron__type_ctor_info_polyhedron_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_main_types__maybe__ti_maybe_1parse_tree__prog_data__ti_generic_termination_info_2transform_hlds__term_constr_main_types__type_ctor_info_term_reason_0list__ti_list_1pair__ti_pair_2term__type_ctor_info_context_0transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_main_types__maybe__ti_maybe_1transform_hlds__term_constr_main_types__type_ctor_info_intermod_status_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_main_types__maybe__ti_maybe_1transform_hlds__term_constr_data__type_ctor_info_abstract_proc_0
};

#line 691 "transform_hlds.term_constr_main_types.c"
static const MR_ConstString transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__field_names_termination2_info_0_0[9] = {
  (MR_String) "size_var_map",
  (MR_String) "head_vars",
  (MR_String) "import_success",
  (MR_String) "import_failure",
  (MR_String) "success_constrs",
  (MR_String) "failure_constrs",
  (MR_String) "term_status",
  (MR_String) "intermod_status",
  (MR_String) "abstract_rep"
};

#line 704 "transform_hlds.term_constr_main_types.c"
static const MR_DuFunctorDesc transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__du_functor_desc_termination2_info_0_0 = {
  (MR_String) "term2_info",
  (MR_Integer) 9,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__field_types_termination2_info_0_0,
  transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__field_names_termination2_info_0_0,
  NULL,
  NULL
};

#line 719 "transform_hlds.term_constr_main_types.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__du_stag_ordered_termination2_info_0_0[1] = {
  &transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__du_functor_desc_termination2_info_0_0
};

#line 724 "transform_hlds.term_constr_main_types.c"
static const MR_DuPtagLayout transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__du_ptag_ordered_termination2_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__du_stag_ordered_termination2_info_0_0
  }
};

#line 733 "transform_hlds.term_constr_main_types.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__du_name_ordered_termination2_info_0[1] = {
  &transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__du_functor_desc_termination2_info_0_0
};

#line 738 "transform_hlds.term_constr_main_types.c"
static const MR_Integer transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__functor_number_map_termination2_info_0[1] = {
  (MR_Integer) 0
};

#line 743 "transform_hlds.term_constr_main_types.c"
const MR_TypeCtorInfo_Struct transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__type_ctor_info_termination2_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__term_constr_main_types____Unify____termination2_info_0_0_10001)),
  ((MR_Box) (transform_hlds__term_constr_main_types____Compare____termination2_info_0_0_10001)),
  (MR_String) "transform_hlds.term_constr_main_types",
  (MR_String) "termination2_info",
  {     transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__du_name_ordered_termination2_info_0 },
  {     transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__du_ptag_ordered_termination2_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__functor_number_map_termination2_info_0
};

#line 760 "transform_hlds.term_constr_main_types.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_main_types____Unify____constr_arg_size_info_0_0_10001(
#line 763 "transform_hlds.term_constr_main_types.c"
  MR_Box transform_hlds__term_constr_main_types__wrapper_arg_1,
#line 765 "transform_hlds.term_constr_main_types.c"
  MR_Box transform_hlds__term_constr_main_types__wrapper_arg_2)
#line 767 "transform_hlds.term_constr_main_types.c"
{
#line 769 "transform_hlds.term_constr_main_types.c"
  {
#line 771 "transform_hlds.term_constr_main_types.c"
    MR_bool transform_hlds__term_constr_main_types__succeeded;

#line 774 "transform_hlds.term_constr_main_types.c"
    {
#line 776 "transform_hlds.term_constr_main_types.c"
      transform_hlds__term_constr_main_types__succeeded = transform_hlds__term_constr_main_types____Unify____constr_arg_size_info_0_0(((MR_Word) transform_hlds__term_constr_main_types__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_main_types__wrapper_arg_2));
    }
#line 779 "transform_hlds.term_constr_main_types.c"
    return transform_hlds__term_constr_main_types__succeeded;
#line 781 "transform_hlds.term_constr_main_types.c"
  }
#line 783 "transform_hlds.term_constr_main_types.c"
}

#line 786 "transform_hlds.term_constr_main_types.c"
static void MR_CALL 
transform_hlds__term_constr_main_types____Compare____constr_arg_size_info_0_0_10001(
#line 789 "transform_hlds.term_constr_main_types.c"
  MR_Box * transform_hlds__term_constr_main_types__wrapper_arg_1,
#line 791 "transform_hlds.term_constr_main_types.c"
  MR_Box transform_hlds__term_constr_main_types__wrapper_arg_2,
#line 793 "transform_hlds.term_constr_main_types.c"
  MR_Box transform_hlds__term_constr_main_types__wrapper_arg_3)
#line 795 "transform_hlds.term_constr_main_types.c"
{
#line 797 "transform_hlds.term_constr_main_types.c"
  {
#line 799 "transform_hlds.term_constr_main_types.c"
    MR_Word transform_hlds__term_constr_main_types__conv0_HeadVar__1_1;

#line 802 "transform_hlds.term_constr_main_types.c"
    {
#line 804 "transform_hlds.term_constr_main_types.c"
      transform_hlds__term_constr_main_types____Compare____constr_arg_size_info_0_0(&transform_hlds__term_constr_main_types__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_constr_main_types__wrapper_arg_2), ((MR_Word) transform_hlds__term_constr_main_types__wrapper_arg_3));
    }
#line 807 "transform_hlds.term_constr_main_types.c"
    *transform_hlds__term_constr_main_types__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_constr_main_types__conv0_HeadVar__1_1));
#line 809 "transform_hlds.term_constr_main_types.c"
  }
#line 811 "transform_hlds.term_constr_main_types.c"
}

#line 814 "transform_hlds.term_constr_main_types.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_main_types____Unify____constr_termination_info_0_0_10001(
#line 817 "transform_hlds.term_constr_main_types.c"
  MR_Box transform_hlds__term_constr_main_types__wrapper_arg_1,
#line 819 "transform_hlds.term_constr_main_types.c"
  MR_Box transform_hlds__term_constr_main_types__wrapper_arg_2)
#line 821 "transform_hlds.term_constr_main_types.c"
{
#line 823 "transform_hlds.term_constr_main_types.c"
  {
#line 825 "transform_hlds.term_constr_main_types.c"
    MR_bool transform_hlds__term_constr_main_types__succeeded;

#line 828 "transform_hlds.term_constr_main_types.c"
    {
#line 830 "transform_hlds.term_constr_main_types.c"
      transform_hlds__term_constr_main_types__succeeded = transform_hlds__term_constr_main_types____Unify____constr_termination_info_0_0(((MR_Word) transform_hlds__term_constr_main_types__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_main_types__wrapper_arg_2));
    }
#line 833 "transform_hlds.term_constr_main_types.c"
    return transform_hlds__term_constr_main_types__succeeded;
#line 835 "transform_hlds.term_constr_main_types.c"
  }
#line 837 "transform_hlds.term_constr_main_types.c"
}

#line 840 "transform_hlds.term_constr_main_types.c"
static void MR_CALL 
transform_hlds__term_constr_main_types____Compare____constr_termination_info_0_0_10001(
#line 843 "transform_hlds.term_constr_main_types.c"
  MR_Box * transform_hlds__term_constr_main_types__wrapper_arg_1,
#line 845 "transform_hlds.term_constr_main_types.c"
  MR_Box transform_hlds__term_constr_main_types__wrapper_arg_2,
#line 847 "transform_hlds.term_constr_main_types.c"
  MR_Box transform_hlds__term_constr_main_types__wrapper_arg_3)
#line 849 "transform_hlds.term_constr_main_types.c"
{
#line 851 "transform_hlds.term_constr_main_types.c"
  {
#line 853 "transform_hlds.term_constr_main_types.c"
    MR_Word transform_hlds__term_constr_main_types__conv0_HeadVar__1_1;

#line 856 "transform_hlds.term_constr_main_types.c"
    {
#line 858 "transform_hlds.term_constr_main_types.c"
      transform_hlds__term_constr_main_types____Compare____constr_termination_info_0_0(&transform_hlds__term_constr_main_types__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_constr_main_types__wrapper_arg_2), ((MR_Word) transform_hlds__term_constr_main_types__wrapper_arg_3));
    }
#line 861 "transform_hlds.term_constr_main_types.c"
    *transform_hlds__term_constr_main_types__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_constr_main_types__conv0_HeadVar__1_1));
#line 863 "transform_hlds.term_constr_main_types.c"
  }
#line 865 "transform_hlds.term_constr_main_types.c"
}

#line 868 "transform_hlds.term_constr_main_types.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_main_types____Unify____intermod_status_0_0_10001(
#line 871 "transform_hlds.term_constr_main_types.c"
  MR_Box transform_hlds__term_constr_main_types__wrapper_arg_1,
#line 873 "transform_hlds.term_constr_main_types.c"
  MR_Box transform_hlds__term_constr_main_types__wrapper_arg_2)
#line 875 "transform_hlds.term_constr_main_types.c"
{
#line 877 "transform_hlds.term_constr_main_types.c"
  {
#line 879 "transform_hlds.term_constr_main_types.c"
    MR_bool transform_hlds__term_constr_main_types__succeeded;

#line 882 "transform_hlds.term_constr_main_types.c"
    {
#line 884 "transform_hlds.term_constr_main_types.c"
      transform_hlds__term_constr_main_types__succeeded = transform_hlds__term_constr_main_types____Unify____intermod_status_0_0(((MR_Word) transform_hlds__term_constr_main_types__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_main_types__wrapper_arg_2));
    }
#line 887 "transform_hlds.term_constr_main_types.c"
    return transform_hlds__term_constr_main_types__succeeded;
#line 889 "transform_hlds.term_constr_main_types.c"
  }
#line 891 "transform_hlds.term_constr_main_types.c"
}

#line 894 "transform_hlds.term_constr_main_types.c"
static void MR_CALL 
transform_hlds__term_constr_main_types____Compare____intermod_status_0_0_10001(
#line 897 "transform_hlds.term_constr_main_types.c"
  MR_Box * transform_hlds__term_constr_main_types__wrapper_arg_1,
#line 899 "transform_hlds.term_constr_main_types.c"
  MR_Box transform_hlds__term_constr_main_types__wrapper_arg_2,
#line 901 "transform_hlds.term_constr_main_types.c"
  MR_Box transform_hlds__term_constr_main_types__wrapper_arg_3)
#line 903 "transform_hlds.term_constr_main_types.c"
{
#line 905 "transform_hlds.term_constr_main_types.c"
  {
#line 907 "transform_hlds.term_constr_main_types.c"
    MR_Word transform_hlds__term_constr_main_types__conv0_HeadVar__1_1;

#line 910 "transform_hlds.term_constr_main_types.c"
    {
#line 912 "transform_hlds.term_constr_main_types.c"
      transform_hlds__term_constr_main_types____Compare____intermod_status_0_0(&transform_hlds__term_constr_main_types__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_constr_main_types__wrapper_arg_2), ((MR_Word) transform_hlds__term_constr_main_types__wrapper_arg_3));
    }
#line 915 "transform_hlds.term_constr_main_types.c"
    *transform_hlds__term_constr_main_types__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_constr_main_types__conv0_HeadVar__1_1));
#line 917 "transform_hlds.term_constr_main_types.c"
  }
#line 919 "transform_hlds.term_constr_main_types.c"
}

#line 922 "transform_hlds.term_constr_main_types.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_main_types____Unify____term_reason_0_0_10001(
#line 925 "transform_hlds.term_constr_main_types.c"
  MR_Box transform_hlds__term_constr_main_types__wrapper_arg_1,
#line 927 "transform_hlds.term_constr_main_types.c"
  MR_Box transform_hlds__term_constr_main_types__wrapper_arg_2)
#line 929 "transform_hlds.term_constr_main_types.c"
{
#line 931 "transform_hlds.term_constr_main_types.c"
  {
#line 933 "transform_hlds.term_constr_main_types.c"
    MR_bool transform_hlds__term_constr_main_types__succeeded;

#line 936 "transform_hlds.term_constr_main_types.c"
    {
#line 938 "transform_hlds.term_constr_main_types.c"
      transform_hlds__term_constr_main_types__succeeded = transform_hlds__term_constr_main_types____Unify____term_reason_0_0(((MR_Word) transform_hlds__term_constr_main_types__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_main_types__wrapper_arg_2));
    }
#line 941 "transform_hlds.term_constr_main_types.c"
    return transform_hlds__term_constr_main_types__succeeded;
#line 943 "transform_hlds.term_constr_main_types.c"
  }
#line 945 "transform_hlds.term_constr_main_types.c"
}

#line 948 "transform_hlds.term_constr_main_types.c"
static void MR_CALL 
transform_hlds__term_constr_main_types____Compare____term_reason_0_0_10001(
#line 951 "transform_hlds.term_constr_main_types.c"
  MR_Box * transform_hlds__term_constr_main_types__wrapper_arg_1,
#line 953 "transform_hlds.term_constr_main_types.c"
  MR_Box transform_hlds__term_constr_main_types__wrapper_arg_2,
#line 955 "transform_hlds.term_constr_main_types.c"
  MR_Box transform_hlds__term_constr_main_types__wrapper_arg_3)
#line 957 "transform_hlds.term_constr_main_types.c"
{
#line 959 "transform_hlds.term_constr_main_types.c"
  {
#line 961 "transform_hlds.term_constr_main_types.c"
    MR_Word transform_hlds__term_constr_main_types__conv0_HeadVar__1_1;

#line 964 "transform_hlds.term_constr_main_types.c"
    {
#line 966 "transform_hlds.term_constr_main_types.c"
      transform_hlds__term_constr_main_types____Compare____term_reason_0_0(&transform_hlds__term_constr_main_types__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_constr_main_types__wrapper_arg_2), ((MR_Word) transform_hlds__term_constr_main_types__wrapper_arg_3));
    }
#line 969 "transform_hlds.term_constr_main_types.c"
    *transform_hlds__term_constr_main_types__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_constr_main_types__conv0_HeadVar__1_1));
#line 971 "transform_hlds.term_constr_main_types.c"
  }
#line 973 "transform_hlds.term_constr_main_types.c"
}

#line 976 "transform_hlds.term_constr_main_types.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_main_types____Unify____termination2_info_0_0_10001(
#line 979 "transform_hlds.term_constr_main_types.c"
  MR_Box transform_hlds__term_constr_main_types__wrapper_arg_1,
#line 981 "transform_hlds.term_constr_main_types.c"
  MR_Box transform_hlds__term_constr_main_types__wrapper_arg_2)
#line 983 "transform_hlds.term_constr_main_types.c"
{
#line 985 "transform_hlds.term_constr_main_types.c"
  {
#line 987 "transform_hlds.term_constr_main_types.c"
    MR_bool transform_hlds__term_constr_main_types__succeeded;

#line 990 "transform_hlds.term_constr_main_types.c"
    {
#line 992 "transform_hlds.term_constr_main_types.c"
      transform_hlds__term_constr_main_types__succeeded = transform_hlds__term_constr_main_types____Unify____termination2_info_0_0(((MR_Word) transform_hlds__term_constr_main_types__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_main_types__wrapper_arg_2));
    }
#line 995 "transform_hlds.term_constr_main_types.c"
    return transform_hlds__term_constr_main_types__succeeded;
#line 997 "transform_hlds.term_constr_main_types.c"
  }
#line 999 "transform_hlds.term_constr_main_types.c"
}

#line 1002 "transform_hlds.term_constr_main_types.c"
static void MR_CALL 
transform_hlds__term_constr_main_types____Compare____termination2_info_0_0_10001(
#line 1005 "transform_hlds.term_constr_main_types.c"
  MR_Box * transform_hlds__term_constr_main_types__wrapper_arg_1,
#line 1007 "transform_hlds.term_constr_main_types.c"
  MR_Box transform_hlds__term_constr_main_types__wrapper_arg_2,
#line 1009 "transform_hlds.term_constr_main_types.c"
  MR_Box transform_hlds__term_constr_main_types__wrapper_arg_3)
#line 1011 "transform_hlds.term_constr_main_types.c"
{
#line 1013 "transform_hlds.term_constr_main_types.c"
  {
#line 1015 "transform_hlds.term_constr_main_types.c"
    MR_Word transform_hlds__term_constr_main_types__conv0_HeadVar__1_1;

#line 1018 "transform_hlds.term_constr_main_types.c"
    {
#line 1020 "transform_hlds.term_constr_main_types.c"
      transform_hlds__term_constr_main_types____Compare____termination2_info_0_0(&transform_hlds__term_constr_main_types__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_constr_main_types__wrapper_arg_2), ((MR_Word) transform_hlds__term_constr_main_types__wrapper_arg_3));
    }
#line 1023 "transform_hlds.term_constr_main_types.c"
    *transform_hlds__term_constr_main_types__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_constr_main_types__conv0_HeadVar__1_1));
#line 1025 "transform_hlds.term_constr_main_types.c"
  }
#line 1027 "transform_hlds.term_constr_main_types.c"
}

#line 134 "term_constr_main_types.m"
void MR_CALL 
transform_hlds__term_constr_main_types____Compare____termination2_info_0_0(
#line 134 "term_constr_main_types.m"
  MR_Word * transform_hlds__term_constr_main_types__HeadVar__1_1,
#line 134 "term_constr_main_types.m"
  MR_Word transform_hlds__term_constr_main_types__HeadVar__2_2,
#line 134 "term_constr_main_types.m"
  MR_Word transform_hlds__term_constr_main_types__HeadVar__3_3)
#line 134 "term_constr_main_types.m"
{
#line 134 "term_constr_main_types.m"
  {
#line 134 "term_constr_main_types.m"
    MR_bool transform_hlds__term_constr_main_types__succeeded;
#line 134 "term_constr_main_types.m"
    MR_Integer transform_hlds__term_constr_main_types__CastX_30 = (MR_Integer) transform_hlds__term_constr_main_types__HeadVar__2_2;
#line 134 "term_constr_main_types.m"
    MR_Integer transform_hlds__term_constr_main_types__CastY_31 = (MR_Integer) transform_hlds__term_constr_main_types__HeadVar__3_3;

#line 134 "term_constr_main_types.m"
    transform_hlds__term_constr_main_types__succeeded = (transform_hlds__term_constr_main_types__CastX_30 == transform_hlds__term_constr_main_types__CastY_31);
#line 134 "term_constr_main_types.m"
    if (transform_hlds__term_constr_main_types__succeeded)
#line 1054 "transform_hlds.term_constr_main_types.c"
      *transform_hlds__term_constr_main_types__HeadVar__1_1 = (MR_Integer) 0;
#line 134 "term_constr_main_types.m"
    else
#line 134 "term_constr_main_types.m"
      {
#line 134 "term_constr_main_types.m"
        MR_Word transform_hlds__term_constr_main_types__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__2_2, (MR_Integer) 0)));
#line 134 "term_constr_main_types.m"
        MR_Word transform_hlds__term_constr_main_types__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__2_2, (MR_Integer) 1)));
#line 134 "term_constr_main_types.m"
        MR_Word transform_hlds__term_constr_main_types__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__2_2, (MR_Integer) 2)));
#line 134 "term_constr_main_types.m"
        MR_Word transform_hlds__term_constr_main_types__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__2_2, (MR_Integer) 3)));
#line 134 "term_constr_main_types.m"
        MR_Word transform_hlds__term_constr_main_types__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__2_2, (MR_Integer) 4)));
#line 134 "term_constr_main_types.m"
        MR_Word transform_hlds__term_constr_main_types__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__2_2, (MR_Integer) 5)));
#line 134 "term_constr_main_types.m"
        MR_Word transform_hlds__term_constr_main_types__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__2_2, (MR_Integer) 6)));
#line 134 "term_constr_main_types.m"
        MR_Word transform_hlds__term_constr_main_types__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__2_2, (MR_Integer) 7)));
#line 134 "term_constr_main_types.m"
        MR_Word transform_hlds__term_constr_main_types__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__2_2, (MR_Integer) 8)));
#line 134 "term_constr_main_types.m"
        MR_Word transform_hlds__term_constr_main_types__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__3_3, (MR_Integer) 0)));
#line 134 "term_constr_main_types.m"
        MR_Word transform_hlds__term_constr_main_types__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__3_3, (MR_Integer) 1)));
#line 134 "term_constr_main_types.m"
        MR_Word transform_hlds__term_constr_main_types__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__3_3, (MR_Integer) 2)));
#line 134 "term_constr_main_types.m"
        MR_Word transform_hlds__term_constr_main_types__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__3_3, (MR_Integer) 3)));
#line 134 "term_constr_main_types.m"
        MR_Word transform_hlds__term_constr_main_types__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__3_3, (MR_Integer) 4)));
#line 134 "term_constr_main_types.m"
        MR_Word transform_hlds__term_constr_main_types__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__3_3, (MR_Integer) 5)));
#line 134 "term_constr_main_types.m"
        MR_Word transform_hlds__term_constr_main_types__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__3_3, (MR_Integer) 6)));
#line 134 "term_constr_main_types.m"
        MR_Word transform_hlds__term_constr_main_types__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__3_3, (MR_Integer) 7)));
#line 134 "term_constr_main_types.m"
        MR_Word transform_hlds__term_constr_main_types__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__3_3, (MR_Integer) 8)));
#line 134 "term_constr_main_types.m"
        MR_Word transform_hlds__term_constr_main_types__V_22_22;

#line 134 "term_constr_main_types.m"
        {
#line 134 "term_constr_main_types.m"
          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_main_types_scalar_common_2[2], &transform_hlds__term_constr_main_types__V_22_22, ((MR_Box) (transform_hlds__term_constr_main_types__V_4_4)), ((MR_Box) (transform_hlds__term_constr_main_types__V_13_13)));
        }
#line 1104 "transform_hlds.term_constr_main_types.c"
        transform_hlds__term_constr_main_types__succeeded = (transform_hlds__term_constr_main_types__V_22_22 == (MR_Integer) 0);
#line 134 "term_constr_main_types.m"
        transform_hlds__term_constr_main_types__succeeded = !(transform_hlds__term_constr_main_types__succeeded);
#line 134 "term_constr_main_types.m"
        if (transform_hlds__term_constr_main_types__succeeded)
#line 134 "term_constr_main_types.m"
          *transform_hlds__term_constr_main_types__HeadVar__1_1 = transform_hlds__term_constr_main_types__V_22_22;
#line 134 "term_constr_main_types.m"
        else
#line 134 "term_constr_main_types.m"
          {
#line 134 "term_constr_main_types.m"
            MR_Word transform_hlds__term_constr_main_types__V_23_23;

#line 134 "term_constr_main_types.m"
            {
#line 134 "term_constr_main_types.m"
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_main_types_scalar_common_1[3], &transform_hlds__term_constr_main_types__V_23_23, ((MR_Box) (transform_hlds__term_constr_main_types__V_5_5)), ((MR_Box) (transform_hlds__term_constr_main_types__V_14_14)));
            }
#line 1124 "transform_hlds.term_constr_main_types.c"
            transform_hlds__term_constr_main_types__succeeded = (transform_hlds__term_constr_main_types__V_23_23 == (MR_Integer) 0);
#line 134 "term_constr_main_types.m"
            transform_hlds__term_constr_main_types__succeeded = !(transform_hlds__term_constr_main_types__succeeded);
#line 134 "term_constr_main_types.m"
            if (transform_hlds__term_constr_main_types__succeeded)
#line 134 "term_constr_main_types.m"
              *transform_hlds__term_constr_main_types__HeadVar__1_1 = transform_hlds__term_constr_main_types__V_23_23;
#line 134 "term_constr_main_types.m"
            else
#line 134 "term_constr_main_types.m"
              {
#line 134 "term_constr_main_types.m"
                MR_Word transform_hlds__term_constr_main_types__V_24_24;

#line 134 "term_constr_main_types.m"
                {
#line 134 "term_constr_main_types.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_main_types_scalar_common_1[5], &transform_hlds__term_constr_main_types__V_24_24, ((MR_Box) (transform_hlds__term_constr_main_types__V_6_6)), ((MR_Box) (transform_hlds__term_constr_main_types__V_15_15)));
                }
#line 1144 "transform_hlds.term_constr_main_types.c"
                transform_hlds__term_constr_main_types__succeeded = (transform_hlds__term_constr_main_types__V_24_24 == (MR_Integer) 0);
#line 134 "term_constr_main_types.m"
                transform_hlds__term_constr_main_types__succeeded = !(transform_hlds__term_constr_main_types__succeeded);
#line 134 "term_constr_main_types.m"
                if (transform_hlds__term_constr_main_types__succeeded)
#line 134 "term_constr_main_types.m"
                  *transform_hlds__term_constr_main_types__HeadVar__1_1 = transform_hlds__term_constr_main_types__V_24_24;
#line 134 "term_constr_main_types.m"
                else
#line 134 "term_constr_main_types.m"
                  {
#line 134 "term_constr_main_types.m"
                    MR_Word transform_hlds__term_constr_main_types__V_25_25;

#line 134 "term_constr_main_types.m"
                    {
#line 134 "term_constr_main_types.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_main_types_scalar_common_1[5], &transform_hlds__term_constr_main_types__V_25_25, ((MR_Box) (transform_hlds__term_constr_main_types__V_7_7)), ((MR_Box) (transform_hlds__term_constr_main_types__V_16_16)));
                    }
#line 1164 "transform_hlds.term_constr_main_types.c"
                    transform_hlds__term_constr_main_types__succeeded = (transform_hlds__term_constr_main_types__V_25_25 == (MR_Integer) 0);
#line 134 "term_constr_main_types.m"
                    transform_hlds__term_constr_main_types__succeeded = !(transform_hlds__term_constr_main_types__succeeded);
#line 134 "term_constr_main_types.m"
                    if (transform_hlds__term_constr_main_types__succeeded)
#line 134 "term_constr_main_types.m"
                      *transform_hlds__term_constr_main_types__HeadVar__1_1 = transform_hlds__term_constr_main_types__V_25_25;
#line 134 "term_constr_main_types.m"
                    else
#line 134 "term_constr_main_types.m"
                      {
#line 134 "term_constr_main_types.m"
                        MR_Word transform_hlds__term_constr_main_types__V_26_26;

#line 134 "term_constr_main_types.m"
                        {
#line 134 "term_constr_main_types.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_main_types_scalar_common_1[6], &transform_hlds__term_constr_main_types__V_26_26, ((MR_Box) (transform_hlds__term_constr_main_types__V_8_8)), ((MR_Box) (transform_hlds__term_constr_main_types__V_17_17)));
                        }
#line 1184 "transform_hlds.term_constr_main_types.c"
                        transform_hlds__term_constr_main_types__succeeded = (transform_hlds__term_constr_main_types__V_26_26 == (MR_Integer) 0);
#line 134 "term_constr_main_types.m"
                        transform_hlds__term_constr_main_types__succeeded = !(transform_hlds__term_constr_main_types__succeeded);
#line 134 "term_constr_main_types.m"
                        if (transform_hlds__term_constr_main_types__succeeded)
#line 134 "term_constr_main_types.m"
                          *transform_hlds__term_constr_main_types__HeadVar__1_1 = transform_hlds__term_constr_main_types__V_26_26;
#line 134 "term_constr_main_types.m"
                        else
#line 134 "term_constr_main_types.m"
                          {
#line 134 "term_constr_main_types.m"
                            MR_Word transform_hlds__term_constr_main_types__V_27_27;

#line 134 "term_constr_main_types.m"
                            {
#line 134 "term_constr_main_types.m"
                              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_main_types_scalar_common_1[6], &transform_hlds__term_constr_main_types__V_27_27, ((MR_Box) (transform_hlds__term_constr_main_types__V_9_9)), ((MR_Box) (transform_hlds__term_constr_main_types__V_18_18)));
                            }
#line 1204 "transform_hlds.term_constr_main_types.c"
                            transform_hlds__term_constr_main_types__succeeded = (transform_hlds__term_constr_main_types__V_27_27 == (MR_Integer) 0);
#line 134 "term_constr_main_types.m"
                            transform_hlds__term_constr_main_types__succeeded = !(transform_hlds__term_constr_main_types__succeeded);
#line 134 "term_constr_main_types.m"
                            if (transform_hlds__term_constr_main_types__succeeded)
#line 134 "term_constr_main_types.m"
                              *transform_hlds__term_constr_main_types__HeadVar__1_1 = transform_hlds__term_constr_main_types__V_27_27;
#line 134 "term_constr_main_types.m"
                            else
#line 134 "term_constr_main_types.m"
                              {
#line 134 "term_constr_main_types.m"
                                MR_Word transform_hlds__term_constr_main_types__V_28_28;

#line 134 "term_constr_main_types.m"
                                {
#line 134 "term_constr_main_types.m"
                                  mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_main_types_scalar_common_1[7], &transform_hlds__term_constr_main_types__V_28_28, ((MR_Box) (transform_hlds__term_constr_main_types__V_10_10)), ((MR_Box) (transform_hlds__term_constr_main_types__V_19_19)));
                                }
#line 1224 "transform_hlds.term_constr_main_types.c"
                                transform_hlds__term_constr_main_types__succeeded = (transform_hlds__term_constr_main_types__V_28_28 == (MR_Integer) 0);
#line 134 "term_constr_main_types.m"
                                transform_hlds__term_constr_main_types__succeeded = !(transform_hlds__term_constr_main_types__succeeded);
#line 134 "term_constr_main_types.m"
                                if (transform_hlds__term_constr_main_types__succeeded)
#line 134 "term_constr_main_types.m"
                                  *transform_hlds__term_constr_main_types__HeadVar__1_1 = transform_hlds__term_constr_main_types__V_28_28;
#line 134 "term_constr_main_types.m"
                                else
#line 134 "term_constr_main_types.m"
                                  {
#line 134 "term_constr_main_types.m"
                                    MR_Word transform_hlds__term_constr_main_types__V_29_29;

#line 134 "term_constr_main_types.m"
                                    {
#line 134 "term_constr_main_types.m"
                                      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_main_types_scalar_common_1[8], &transform_hlds__term_constr_main_types__V_29_29, ((MR_Box) (transform_hlds__term_constr_main_types__V_11_11)), ((MR_Box) (transform_hlds__term_constr_main_types__V_20_20)));
                                    }
#line 1244 "transform_hlds.term_constr_main_types.c"
                                    transform_hlds__term_constr_main_types__succeeded = (transform_hlds__term_constr_main_types__V_29_29 == (MR_Integer) 0);
#line 134 "term_constr_main_types.m"
                                    transform_hlds__term_constr_main_types__succeeded = !(transform_hlds__term_constr_main_types__succeeded);
#line 134 "term_constr_main_types.m"
                                    if (transform_hlds__term_constr_main_types__succeeded)
#line 134 "term_constr_main_types.m"
                                      *transform_hlds__term_constr_main_types__HeadVar__1_1 = transform_hlds__term_constr_main_types__V_29_29;
#line 134 "term_constr_main_types.m"
                                    else
#line 134 "term_constr_main_types.m"
                                      {
#line 134 "term_constr_main_types.m"
                                        {
#line 134 "term_constr_main_types.m"
                                          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_main_types_scalar_common_1[9], transform_hlds__term_constr_main_types__HeadVar__1_1, ((MR_Box) (transform_hlds__term_constr_main_types__V_12_12)), ((MR_Box) (transform_hlds__term_constr_main_types__V_21_21)));
#line 134 "term_constr_main_types.m"
                                          return;
                                        }
#line 134 "term_constr_main_types.m"
                                      }
#line 134 "term_constr_main_types.m"
                                  }
#line 134 "term_constr_main_types.m"
                              }
#line 134 "term_constr_main_types.m"
                          }
#line 134 "term_constr_main_types.m"
                      }
#line 134 "term_constr_main_types.m"
                  }
#line 134 "term_constr_main_types.m"
              }
#line 134 "term_constr_main_types.m"
          }
#line 134 "term_constr_main_types.m"
      }
#line 134 "term_constr_main_types.m"
  }
#line 134 "term_constr_main_types.m"
}

#line 134 "term_constr_main_types.m"
MR_bool MR_CALL 
transform_hlds__term_constr_main_types____Unify____termination2_info_0_0(
#line 134 "term_constr_main_types.m"
  MR_Word transform_hlds__term_constr_main_types__HeadVar__1_1,
#line 134 "term_constr_main_types.m"
  MR_Word transform_hlds__term_constr_main_types__HeadVar__2_2)
#line 134 "term_constr_main_types.m"
{
#line 134 "term_constr_main_types.m"
  {
#line 134 "term_constr_main_types.m"
    MR_bool transform_hlds__term_constr_main_types__succeeded;
#line 134 "term_constr_main_types.m"
    MR_Integer transform_hlds__term_constr_main_types__CastX_21 = (MR_Integer) transform_hlds__term_constr_main_types__HeadVar__1_1;
#line 134 "term_constr_main_types.m"
    MR_Integer transform_hlds__term_constr_main_types__CastY_22 = (MR_Integer) transform_hlds__term_constr_main_types__HeadVar__2_2;

#line 134 "term_constr_main_types.m"
    transform_hlds__term_constr_main_types__succeeded = (transform_hlds__term_constr_main_types__CastX_21 == transform_hlds__term_constr_main_types__CastY_22);
#line 134 "term_constr_main_types.m"
    if (transform_hlds__term_constr_main_types__succeeded)
#line 134 "term_constr_main_types.m"
      transform_hlds__term_constr_main_types__succeeded = MR_TRUE;
#line 134 "term_constr_main_types.m"
    else
#line 134 "term_constr_main_types.m"
      {
#line 134 "term_constr_main_types.m"
        MR_Word transform_hlds__term_constr_main_types__TypeInfo_24_24;
#line 134 "term_constr_main_types.m"
        MR_Word transform_hlds__term_constr_main_types__TypeInfo_25_25;
#line 134 "term_constr_main_types.m"
        MR_Word transform_hlds__term_constr_main_types__TypeInfo_26_26;
#line 134 "term_constr_main_types.m"
        MR_Word transform_hlds__term_constr_main_types__TypeInfo_27_27;
#line 134 "term_constr_main_types.m"
        MR_Word transform_hlds__term_constr_main_types__TypeInfo_28_28;
#line 134 "term_constr_main_types.m"
        MR_Word transform_hlds__term_constr_main_types__TypeInfo_29_29;
#line 134 "term_constr_main_types.m"
        MR_Word transform_hlds__term_constr_main_types__TypeInfo_30_30;
#line 134 "term_constr_main_types.m"
        MR_Word transform_hlds__term_constr_main_types__TypeInfo_31_31;
#line 134 "term_constr_main_types.m"
        MR_Word transform_hlds__term_constr_main_types__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 0)));
#line 134 "term_constr_main_types.m"
        MR_Word transform_hlds__term_constr_main_types__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 1)));
#line 134 "term_constr_main_types.m"
        MR_Word transform_hlds__term_constr_main_types__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 2)));
#line 134 "term_constr_main_types.m"
        MR_Word transform_hlds__term_constr_main_types__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 3)));
#line 134 "term_constr_main_types.m"
        MR_Word transform_hlds__term_constr_main_types__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 4)));
#line 134 "term_constr_main_types.m"
        MR_Word transform_hlds__term_constr_main_types__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 5)));
#line 134 "term_constr_main_types.m"
        MR_Word transform_hlds__term_constr_main_types__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 6)));
#line 134 "term_constr_main_types.m"
        MR_Word transform_hlds__term_constr_main_types__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 7)));
#line 134 "term_constr_main_types.m"
        MR_Word transform_hlds__term_constr_main_types__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 8)));
#line 134 "term_constr_main_types.m"
        MR_Word transform_hlds__term_constr_main_types__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__2_2, (MR_Integer) 0)));
#line 134 "term_constr_main_types.m"
        MR_Word transform_hlds__term_constr_main_types__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__2_2, (MR_Integer) 1)));
#line 134 "term_constr_main_types.m"
        MR_Word transform_hlds__term_constr_main_types__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__2_2, (MR_Integer) 2)));
#line 134 "term_constr_main_types.m"
        MR_Word transform_hlds__term_constr_main_types__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__2_2, (MR_Integer) 3)));
#line 134 "term_constr_main_types.m"
        MR_Word transform_hlds__term_constr_main_types__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__2_2, (MR_Integer) 4)));
#line 134 "term_constr_main_types.m"
        MR_Word transform_hlds__term_constr_main_types__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__2_2, (MR_Integer) 5)));
#line 134 "term_constr_main_types.m"
        MR_Word transform_hlds__term_constr_main_types__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__2_2, (MR_Integer) 6)));
#line 134 "term_constr_main_types.m"
        MR_Word transform_hlds__term_constr_main_types__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__2_2, (MR_Integer) 7)));
#line 134 "term_constr_main_types.m"
        MR_Word transform_hlds__term_constr_main_types__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__2_2, (MR_Integer) 8)));

#line 1367 "transform_hlds.term_constr_main_types.c"
        {
#line 1369 "transform_hlds.term_constr_main_types.c"
          transform_hlds__term_constr_main_types__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__term_constr_main_types_scalar_common_2[2], ((MR_Box) (transform_hlds__term_constr_main_types__V_3_3)), ((MR_Box) (transform_hlds__term_constr_main_types__V_12_12)));
        }
#line 134 "term_constr_main_types.m"
        if (transform_hlds__term_constr_main_types__succeeded)
#line 134 "term_constr_main_types.m"
          {
#line 1376 "transform_hlds.term_constr_main_types.c"
            transform_hlds__term_constr_main_types__TypeInfo_24_24 = (MR_Word) &transform_hlds__term_constr_main_types_scalar_common_1[3];
#line 1378 "transform_hlds.term_constr_main_types.c"
            {
#line 1380 "transform_hlds.term_constr_main_types.c"
              transform_hlds__term_constr_main_types__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_main_types__TypeInfo_24_24, ((MR_Box) (transform_hlds__term_constr_main_types__V_4_4)), ((MR_Box) (transform_hlds__term_constr_main_types__V_13_13)));
            }
#line 134 "term_constr_main_types.m"
            if (transform_hlds__term_constr_main_types__succeeded)
#line 134 "term_constr_main_types.m"
              {
#line 1387 "transform_hlds.term_constr_main_types.c"
                transform_hlds__term_constr_main_types__TypeInfo_25_25 = (MR_Word) &transform_hlds__term_constr_main_types_scalar_common_1[5];
#line 1389 "transform_hlds.term_constr_main_types.c"
                {
#line 1391 "transform_hlds.term_constr_main_types.c"
                  transform_hlds__term_constr_main_types__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_main_types__TypeInfo_25_25, ((MR_Box) (transform_hlds__term_constr_main_types__V_5_5)), ((MR_Box) (transform_hlds__term_constr_main_types__V_14_14)));
                }
#line 134 "term_constr_main_types.m"
                if (transform_hlds__term_constr_main_types__succeeded)
#line 134 "term_constr_main_types.m"
                  {
#line 1398 "transform_hlds.term_constr_main_types.c"
                    transform_hlds__term_constr_main_types__TypeInfo_26_26 = (MR_Word) &transform_hlds__term_constr_main_types_scalar_common_1[5];
#line 1400 "transform_hlds.term_constr_main_types.c"
                    {
#line 1402 "transform_hlds.term_constr_main_types.c"
                      transform_hlds__term_constr_main_types__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_main_types__TypeInfo_26_26, ((MR_Box) (transform_hlds__term_constr_main_types__V_6_6)), ((MR_Box) (transform_hlds__term_constr_main_types__V_15_15)));
                    }
#line 134 "term_constr_main_types.m"
                    if (transform_hlds__term_constr_main_types__succeeded)
#line 134 "term_constr_main_types.m"
                      {
#line 1409 "transform_hlds.term_constr_main_types.c"
                        transform_hlds__term_constr_main_types__TypeInfo_27_27 = (MR_Word) &transform_hlds__term_constr_main_types_scalar_common_1[6];
#line 1411 "transform_hlds.term_constr_main_types.c"
                        {
#line 1413 "transform_hlds.term_constr_main_types.c"
                          transform_hlds__term_constr_main_types__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_main_types__TypeInfo_27_27, ((MR_Box) (transform_hlds__term_constr_main_types__V_7_7)), ((MR_Box) (transform_hlds__term_constr_main_types__V_16_16)));
                        }
#line 134 "term_constr_main_types.m"
                        if (transform_hlds__term_constr_main_types__succeeded)
#line 134 "term_constr_main_types.m"
                          {
#line 1420 "transform_hlds.term_constr_main_types.c"
                            transform_hlds__term_constr_main_types__TypeInfo_28_28 = (MR_Word) &transform_hlds__term_constr_main_types_scalar_common_1[6];
#line 1422 "transform_hlds.term_constr_main_types.c"
                            {
#line 1424 "transform_hlds.term_constr_main_types.c"
                              transform_hlds__term_constr_main_types__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_main_types__TypeInfo_28_28, ((MR_Box) (transform_hlds__term_constr_main_types__V_8_8)), ((MR_Box) (transform_hlds__term_constr_main_types__V_17_17)));
                            }
#line 134 "term_constr_main_types.m"
                            if (transform_hlds__term_constr_main_types__succeeded)
#line 134 "term_constr_main_types.m"
                              {
#line 1431 "transform_hlds.term_constr_main_types.c"
                                transform_hlds__term_constr_main_types__TypeInfo_29_29 = (MR_Word) &transform_hlds__term_constr_main_types_scalar_common_1[7];
#line 1433 "transform_hlds.term_constr_main_types.c"
                                {
#line 1435 "transform_hlds.term_constr_main_types.c"
                                  transform_hlds__term_constr_main_types__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_main_types__TypeInfo_29_29, ((MR_Box) (transform_hlds__term_constr_main_types__V_9_9)), ((MR_Box) (transform_hlds__term_constr_main_types__V_18_18)));
                                }
#line 134 "term_constr_main_types.m"
                                if (transform_hlds__term_constr_main_types__succeeded)
#line 134 "term_constr_main_types.m"
                                  {
#line 1442 "transform_hlds.term_constr_main_types.c"
                                    transform_hlds__term_constr_main_types__TypeInfo_30_30 = (MR_Word) &transform_hlds__term_constr_main_types_scalar_common_1[8];
#line 1444 "transform_hlds.term_constr_main_types.c"
                                    {
#line 1446 "transform_hlds.term_constr_main_types.c"
                                      transform_hlds__term_constr_main_types__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_main_types__TypeInfo_30_30, ((MR_Box) (transform_hlds__term_constr_main_types__V_10_10)), ((MR_Box) (transform_hlds__term_constr_main_types__V_19_19)));
                                    }
#line 134 "term_constr_main_types.m"
                                    if (transform_hlds__term_constr_main_types__succeeded)
#line 134 "term_constr_main_types.m"
                                      {
#line 1453 "transform_hlds.term_constr_main_types.c"
                                        transform_hlds__term_constr_main_types__TypeInfo_31_31 = (MR_Word) &transform_hlds__term_constr_main_types_scalar_common_1[9];
#line 1455 "transform_hlds.term_constr_main_types.c"
                                        {
#line 1457 "transform_hlds.term_constr_main_types.c"
                                          return transform_hlds__term_constr_main_types__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_main_types__TypeInfo_31_31, ((MR_Box) (transform_hlds__term_constr_main_types__V_11_11)), ((MR_Box) (transform_hlds__term_constr_main_types__V_20_20)));
                                        }
#line 134 "term_constr_main_types.m"
                                      }
#line 134 "term_constr_main_types.m"
                                  }
#line 134 "term_constr_main_types.m"
                              }
#line 134 "term_constr_main_types.m"
                          }
#line 134 "term_constr_main_types.m"
                      }
#line 134 "term_constr_main_types.m"
                  }
#line 134 "term_constr_main_types.m"
              }
#line 134 "term_constr_main_types.m"
          }
#line 134 "term_constr_main_types.m"
      }
#line 134 "term_constr_main_types.m"
    return transform_hlds__term_constr_main_types__succeeded;
#line 134 "term_constr_main_types.m"
  }
#line 134 "term_constr_main_types.m"
}

#line 47 "term_constr_main_types.m"
void MR_CALL 
transform_hlds__term_constr_main_types____Compare____term_reason_0_0(
#line 47 "term_constr_main_types.m"
  MR_Word * transform_hlds__term_constr_main_types__HeadVar__1_1,
#line 47 "term_constr_main_types.m"
  MR_Word transform_hlds__term_constr_main_types__HeadVar__2_2,
#line 47 "term_constr_main_types.m"
  MR_Word transform_hlds__term_constr_main_types__HeadVar__3_3)
#line 47 "term_constr_main_types.m"
{
#line 47 "term_constr_main_types.m"
  {
#line 47 "term_constr_main_types.m"
    MR_bool transform_hlds__term_constr_main_types__succeeded;
#line 47 "term_constr_main_types.m"
    MR_Integer transform_hlds__term_constr_main_types__Cast_HeadVar1_4 = (MR_Integer) transform_hlds__term_constr_main_types__HeadVar__2_2;
#line 47 "term_constr_main_types.m"
    MR_Integer transform_hlds__term_constr_main_types__Cast_HeadVar2_5 = (MR_Integer) transform_hlds__term_constr_main_types__HeadVar__3_3;

#line 47 "term_constr_main_types.m"
    {
#line 47 "term_constr_main_types.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__term_constr_main_types__HeadVar__1_1, transform_hlds__term_constr_main_types__Cast_HeadVar1_4, transform_hlds__term_constr_main_types__Cast_HeadVar2_5);
#line 47 "term_constr_main_types.m"
      return;
    }
#line 47 "term_constr_main_types.m"
  }
#line 47 "term_constr_main_types.m"
}

#line 47 "term_constr_main_types.m"
MR_bool MR_CALL 
transform_hlds__term_constr_main_types____Unify____term_reason_0_0(
#line 47 "term_constr_main_types.m"
  MR_Word transform_hlds__term_constr_main_types__HeadVar__2_1,
#line 47 "term_constr_main_types.m"
  MR_Word transform_hlds__term_constr_main_types__HeadVar__2_2)
#line 47 "term_constr_main_types.m"
{
#line 1526 "transform_hlds.term_constr_main_types.c"
  {
#line 1528 "transform_hlds.term_constr_main_types.c"
    MR_bool transform_hlds__term_constr_main_types__succeeded = (transform_hlds__term_constr_main_types__HeadVar__2_1 == transform_hlds__term_constr_main_types__HeadVar__2_2);

#line 1531 "transform_hlds.term_constr_main_types.c"
    return transform_hlds__term_constr_main_types__succeeded;
#line 1533 "transform_hlds.term_constr_main_types.c"
  }
#line 47 "term_constr_main_types.m"
}

#line 70 "term_constr_main_types.m"
void MR_CALL 
transform_hlds__term_constr_main_types____Compare____intermod_status_0_0(
#line 70 "term_constr_main_types.m"
  MR_Word * transform_hlds__term_constr_main_types__HeadVar__1_1,
#line 70 "term_constr_main_types.m"
  MR_Word transform_hlds__term_constr_main_types__HeadVar__2_2,
#line 70 "term_constr_main_types.m"
  MR_Word transform_hlds__term_constr_main_types__HeadVar__3_3)
#line 70 "term_constr_main_types.m"
{
#line 70 "term_constr_main_types.m"
  {
#line 70 "term_constr_main_types.m"
    MR_bool transform_hlds__term_constr_main_types__succeeded;
#line 70 "term_constr_main_types.m"
    MR_Integer transform_hlds__term_constr_main_types__Cast_HeadVar1_4 = (MR_Integer) transform_hlds__term_constr_main_types__HeadVar__2_2;
#line 70 "term_constr_main_types.m"
    MR_Integer transform_hlds__term_constr_main_types__Cast_HeadVar2_5 = (MR_Integer) transform_hlds__term_constr_main_types__HeadVar__3_3;

#line 70 "term_constr_main_types.m"
    {
#line 70 "term_constr_main_types.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__term_constr_main_types__HeadVar__1_1, transform_hlds__term_constr_main_types__Cast_HeadVar1_4, transform_hlds__term_constr_main_types__Cast_HeadVar2_5);
#line 70 "term_constr_main_types.m"
      return;
    }
#line 70 "term_constr_main_types.m"
  }
#line 70 "term_constr_main_types.m"
}

#line 70 "term_constr_main_types.m"
MR_bool MR_CALL 
transform_hlds__term_constr_main_types____Unify____intermod_status_0_0(
#line 70 "term_constr_main_types.m"
  MR_Word transform_hlds__term_constr_main_types__HeadVar__2_1,
#line 70 "term_constr_main_types.m"
  MR_Word transform_hlds__term_constr_main_types__HeadVar__2_2)
#line 70 "term_constr_main_types.m"
{
#line 1579 "transform_hlds.term_constr_main_types.c"
  {
#line 1581 "transform_hlds.term_constr_main_types.c"
    MR_bool transform_hlds__term_constr_main_types__succeeded = (transform_hlds__term_constr_main_types__HeadVar__2_1 == transform_hlds__term_constr_main_types__HeadVar__2_2);

#line 1584 "transform_hlds.term_constr_main_types.c"
    return transform_hlds__term_constr_main_types__succeeded;
#line 1586 "transform_hlds.term_constr_main_types.c"
  }
#line 70 "term_constr_main_types.m"
}

#line 41 "term_constr_main_types.m"
void MR_CALL 
transform_hlds__term_constr_main_types____Compare____constr_termination_info_0_0(
#line 41 "term_constr_main_types.m"
  MR_Word * transform_hlds__term_constr_main_types__HeadVar__1_1,
#line 41 "term_constr_main_types.m"
  MR_Word transform_hlds__term_constr_main_types__HeadVar__2_2,
#line 41 "term_constr_main_types.m"
  MR_Word transform_hlds__term_constr_main_types__HeadVar__3_3)
#line 41 "term_constr_main_types.m"
{
#line 41 "term_constr_main_types.m"
  {
#line 41 "term_constr_main_types.m"
    MR_bool transform_hlds__term_constr_main_types__succeeded;
#line 41 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__Cast_HeadVar1_4 = transform_hlds__term_constr_main_types__HeadVar__2_2;
#line 41 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__Cast_HeadVar2_5 = transform_hlds__term_constr_main_types__HeadVar__3_3;

#line 41 "term_constr_main_types.m"
    {
#line 41 "term_constr_main_types.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_main_types_scalar_common_2[1], transform_hlds__term_constr_main_types__HeadVar__1_1, ((MR_Box) (transform_hlds__term_constr_main_types__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__term_constr_main_types__Cast_HeadVar2_5)));
#line 41 "term_constr_main_types.m"
      return;
    }
#line 41 "term_constr_main_types.m"
  }
#line 41 "term_constr_main_types.m"
}

#line 41 "term_constr_main_types.m"
MR_bool MR_CALL 
transform_hlds__term_constr_main_types____Unify____constr_termination_info_0_0(
#line 41 "term_constr_main_types.m"
  MR_Word transform_hlds__term_constr_main_types__HeadVar__1_1,
#line 41 "term_constr_main_types.m"
  MR_Word transform_hlds__term_constr_main_types__HeadVar__2_2)
#line 41 "term_constr_main_types.m"
{
#line 41 "term_constr_main_types.m"
  {
#line 41 "term_constr_main_types.m"
    MR_bool transform_hlds__term_constr_main_types__succeeded;
#line 41 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__Cast_HeadVar1_3 = transform_hlds__term_constr_main_types__HeadVar__1_1;
#line 41 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__Cast_HeadVar2_4 = transform_hlds__term_constr_main_types__HeadVar__2_2;

#line 41 "term_constr_main_types.m"
    {
#line 41 "term_constr_main_types.m"
      return transform_hlds__term_constr_main_types__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__term_constr_main_types_scalar_common_2[1], ((MR_Box) (transform_hlds__term_constr_main_types__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__term_constr_main_types__Cast_HeadVar2_4)));
    }
#line 41 "term_constr_main_types.m"
    return transform_hlds__term_constr_main_types__succeeded;
#line 41 "term_constr_main_types.m"
  }
#line 41 "term_constr_main_types.m"
}

#line 36 "term_constr_main_types.m"
void MR_CALL 
transform_hlds__term_constr_main_types____Compare____constr_arg_size_info_0_0(
#line 36 "term_constr_main_types.m"
  MR_Word * transform_hlds__term_constr_main_types__HeadVar__1_1,
#line 36 "term_constr_main_types.m"
  MR_Word transform_hlds__term_constr_main_types__HeadVar__2_2,
#line 36 "term_constr_main_types.m"
  MR_Word transform_hlds__term_constr_main_types__HeadVar__3_3)
#line 36 "term_constr_main_types.m"
{
#line 36 "term_constr_main_types.m"
  {
#line 36 "term_constr_main_types.m"
    MR_bool transform_hlds__term_constr_main_types__succeeded;
#line 36 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__Cast_HeadVar1_4 = transform_hlds__term_constr_main_types__HeadVar__2_2;
#line 36 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__Cast_HeadVar2_5 = transform_hlds__term_constr_main_types__HeadVar__3_3;

#line 36 "term_constr_main_types.m"
    {
#line 36 "term_constr_main_types.m"
      libs__polyhedron____Compare____polyhedron_0_0(transform_hlds__term_constr_main_types__HeadVar__1_1, transform_hlds__term_constr_main_types__Cast_HeadVar1_4, transform_hlds__term_constr_main_types__Cast_HeadVar2_5);
#line 36 "term_constr_main_types.m"
      return;
    }
#line 36 "term_constr_main_types.m"
  }
#line 36 "term_constr_main_types.m"
}

#line 36 "term_constr_main_types.m"
MR_bool MR_CALL 
transform_hlds__term_constr_main_types____Unify____constr_arg_size_info_0_0(
#line 36 "term_constr_main_types.m"
  MR_Word transform_hlds__term_constr_main_types__HeadVar__1_1,
#line 36 "term_constr_main_types.m"
  MR_Word transform_hlds__term_constr_main_types__HeadVar__2_2)
#line 36 "term_constr_main_types.m"
{
#line 36 "term_constr_main_types.m"
  {
#line 36 "term_constr_main_types.m"
    MR_bool transform_hlds__term_constr_main_types__succeeded;
#line 36 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__Cast_HeadVar1_3 = transform_hlds__term_constr_main_types__HeadVar__1_1;
#line 36 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__Cast_HeadVar2_4 = transform_hlds__term_constr_main_types__HeadVar__2_2;

#line 36 "term_constr_main_types.m"
    {
#line 36 "term_constr_main_types.m"
      return transform_hlds__term_constr_main_types__succeeded = libs__polyhedron____Unify____polyhedron_0_0(transform_hlds__term_constr_main_types__Cast_HeadVar1_3, transform_hlds__term_constr_main_types__Cast_HeadVar2_4);
    }
#line 36 "term_constr_main_types.m"
    return transform_hlds__term_constr_main_types__succeeded;
#line 36 "term_constr_main_types.m"
  }
#line 36 "term_constr_main_types.m"
}

#line 114 "term_constr_main_types.m"
MR_Word MR_CALL 
transform_hlds__term_constr_main_types__f_104_101_97_100_95_118_97_114_115_32_58_61_2_f_0(
#line 114 "term_constr_main_types.m"
  MR_Word transform_hlds__term_constr_main_types__HeadVar__1_1,
#line 114 "term_constr_main_types.m"
  MR_Word transform_hlds__term_constr_main_types__HeadVar__2_2)
#line 114 "term_constr_main_types.m"
{
#line 114 "term_constr_main_types.m"
  {
#line 114 "term_constr_main_types.m"
    MR_bool transform_hlds__term_constr_main_types__succeeded;
#line 114 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__HeadVar__3_3;
#line 114 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 0)));
#line 114 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 2)));
#line 114 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 3)));
#line 114 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 4)));
#line 114 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 5)));
#line 114 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 6)));
#line 114 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 7)));
#line 114 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 8)));
#line 114 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 1)));

#line 114 "term_constr_main_types.m"
    {
#line 114 "term_constr_main_types.m"
      transform_hlds__term_constr_main_types__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 114 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__3_3, 0) = ((MR_Box) (transform_hlds__term_constr_main_types__V_4_4));
#line 114 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__3_3, 1) = ((MR_Box) (transform_hlds__term_constr_main_types__HeadVar__2_2));
#line 114 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__3_3, 2) = ((MR_Box) (transform_hlds__term_constr_main_types__V_6_6));
#line 114 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__3_3, 3) = ((MR_Box) (transform_hlds__term_constr_main_types__V_7_7));
#line 114 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__3_3, 4) = ((MR_Box) (transform_hlds__term_constr_main_types__V_8_8));
#line 114 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__3_3, 5) = ((MR_Box) (transform_hlds__term_constr_main_types__V_9_9));
#line 114 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__3_3, 6) = ((MR_Box) (transform_hlds__term_constr_main_types__V_10_10));
#line 114 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__3_3, 7) = ((MR_Box) (transform_hlds__term_constr_main_types__V_11_11));
#line 114 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__3_3, 8) = ((MR_Box) (transform_hlds__term_constr_main_types__V_12_12));
#line 114 "term_constr_main_types.m"
    }
#line 114 "term_constr_main_types.m"
    return transform_hlds__term_constr_main_types__HeadVar__3_3;
#line 114 "term_constr_main_types.m"
  }
#line 114 "term_constr_main_types.m"
}

#line 112 "term_constr_main_types.m"
MR_Word MR_CALL 
transform_hlds__term_constr_main_types__f_97_98_115_116_114_97_99_116_95_114_101_112_32_58_61_2_f_0(
#line 112 "term_constr_main_types.m"
  MR_Word transform_hlds__term_constr_main_types__HeadVar__1_1,
#line 112 "term_constr_main_types.m"
  MR_Word transform_hlds__term_constr_main_types__HeadVar__2_2)
#line 112 "term_constr_main_types.m"
{
#line 112 "term_constr_main_types.m"
  {
#line 112 "term_constr_main_types.m"
    MR_bool transform_hlds__term_constr_main_types__succeeded;
#line 112 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__HeadVar__3_3;
#line 112 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 0)));
#line 112 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 1)));
#line 112 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 2)));
#line 112 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 3)));
#line 112 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 4)));
#line 112 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 5)));
#line 112 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 6)));
#line 112 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 7)));
#line 112 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 8)));

#line 112 "term_constr_main_types.m"
    {
#line 112 "term_constr_main_types.m"
      transform_hlds__term_constr_main_types__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 112 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__3_3, 0) = ((MR_Box) (transform_hlds__term_constr_main_types__V_4_4));
#line 112 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__3_3, 1) = ((MR_Box) (transform_hlds__term_constr_main_types__V_5_5));
#line 112 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__3_3, 2) = ((MR_Box) (transform_hlds__term_constr_main_types__V_6_6));
#line 112 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__3_3, 3) = ((MR_Box) (transform_hlds__term_constr_main_types__V_7_7));
#line 112 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__3_3, 4) = ((MR_Box) (transform_hlds__term_constr_main_types__V_8_8));
#line 112 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__3_3, 5) = ((MR_Box) (transform_hlds__term_constr_main_types__V_9_9));
#line 112 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__3_3, 6) = ((MR_Box) (transform_hlds__term_constr_main_types__V_10_10));
#line 112 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__3_3, 7) = ((MR_Box) (transform_hlds__term_constr_main_types__V_11_11));
#line 112 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__3_3, 8) = ((MR_Box) (transform_hlds__term_constr_main_types__HeadVar__2_2));
#line 112 "term_constr_main_types.m"
    }
#line 112 "term_constr_main_types.m"
    return transform_hlds__term_constr_main_types__HeadVar__3_3;
#line 112 "term_constr_main_types.m"
  }
#line 112 "term_constr_main_types.m"
}

#line 110 "term_constr_main_types.m"
MR_Word MR_CALL 
transform_hlds__term_constr_main_types__f_105_110_116_101_114_109_111_100_95_115_116_97_116_117_115_32_58_61_2_f_0(
#line 110 "term_constr_main_types.m"
  MR_Word transform_hlds__term_constr_main_types__HeadVar__1_1,
#line 110 "term_constr_main_types.m"
  MR_Word transform_hlds__term_constr_main_types__HeadVar__2_2)
#line 110 "term_constr_main_types.m"
{
#line 110 "term_constr_main_types.m"
  {
#line 110 "term_constr_main_types.m"
    MR_bool transform_hlds__term_constr_main_types__succeeded;
#line 110 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__HeadVar__3_3;
#line 110 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 0)));
#line 110 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 1)));
#line 110 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 2)));
#line 110 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 3)));
#line 110 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 4)));
#line 110 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 5)));
#line 110 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 6)));
#line 110 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 8)));
#line 110 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 7)));

#line 110 "term_constr_main_types.m"
    {
#line 110 "term_constr_main_types.m"
      transform_hlds__term_constr_main_types__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 110 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__3_3, 0) = ((MR_Box) (transform_hlds__term_constr_main_types__V_4_4));
#line 110 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__3_3, 1) = ((MR_Box) (transform_hlds__term_constr_main_types__V_5_5));
#line 110 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__3_3, 2) = ((MR_Box) (transform_hlds__term_constr_main_types__V_6_6));
#line 110 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__3_3, 3) = ((MR_Box) (transform_hlds__term_constr_main_types__V_7_7));
#line 110 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__3_3, 4) = ((MR_Box) (transform_hlds__term_constr_main_types__V_8_8));
#line 110 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__3_3, 5) = ((MR_Box) (transform_hlds__term_constr_main_types__V_9_9));
#line 110 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__3_3, 6) = ((MR_Box) (transform_hlds__term_constr_main_types__V_10_10));
#line 110 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__3_3, 7) = ((MR_Box) (transform_hlds__term_constr_main_types__HeadVar__2_2));
#line 110 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__3_3, 8) = ((MR_Box) (transform_hlds__term_constr_main_types__V_12_12));
#line 110 "term_constr_main_types.m"
    }
#line 110 "term_constr_main_types.m"
    return transform_hlds__term_constr_main_types__HeadVar__3_3;
#line 110 "term_constr_main_types.m"
  }
#line 110 "term_constr_main_types.m"
}

#line 108 "term_constr_main_types.m"
MR_Word MR_CALL 
transform_hlds__term_constr_main_types__f_116_101_114_109_95_115_116_97_116_117_115_32_58_61_2_f_0(
#line 108 "term_constr_main_types.m"
  MR_Word transform_hlds__term_constr_main_types__HeadVar__1_1,
#line 108 "term_constr_main_types.m"
  MR_Word transform_hlds__term_constr_main_types__HeadVar__2_2)
#line 108 "term_constr_main_types.m"
{
#line 108 "term_constr_main_types.m"
  {
#line 108 "term_constr_main_types.m"
    MR_bool transform_hlds__term_constr_main_types__succeeded;
#line 108 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__HeadVar__3_3;
#line 108 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 0)));
#line 108 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 1)));
#line 108 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 2)));
#line 108 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 3)));
#line 108 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 4)));
#line 108 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 5)));
#line 108 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 7)));
#line 108 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 8)));
#line 108 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 6)));

#line 108 "term_constr_main_types.m"
    {
#line 108 "term_constr_main_types.m"
      transform_hlds__term_constr_main_types__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 108 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__3_3, 0) = ((MR_Box) (transform_hlds__term_constr_main_types__V_4_4));
#line 108 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__3_3, 1) = ((MR_Box) (transform_hlds__term_constr_main_types__V_5_5));
#line 108 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__3_3, 2) = ((MR_Box) (transform_hlds__term_constr_main_types__V_6_6));
#line 108 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__3_3, 3) = ((MR_Box) (transform_hlds__term_constr_main_types__V_7_7));
#line 108 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__3_3, 4) = ((MR_Box) (transform_hlds__term_constr_main_types__V_8_8));
#line 108 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__3_3, 5) = ((MR_Box) (transform_hlds__term_constr_main_types__V_9_9));
#line 108 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__3_3, 6) = ((MR_Box) (transform_hlds__term_constr_main_types__HeadVar__2_2));
#line 108 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__3_3, 7) = ((MR_Box) (transform_hlds__term_constr_main_types__V_11_11));
#line 108 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__3_3, 8) = ((MR_Box) (transform_hlds__term_constr_main_types__V_12_12));
#line 108 "term_constr_main_types.m"
    }
#line 108 "term_constr_main_types.m"
    return transform_hlds__term_constr_main_types__HeadVar__3_3;
#line 108 "term_constr_main_types.m"
  }
#line 108 "term_constr_main_types.m"
}

#line 106 "term_constr_main_types.m"
MR_Word MR_CALL 
transform_hlds__term_constr_main_types__f_102_97_105_108_117_114_101_95_99_111_110_115_116_114_115_32_58_61_2_f_0(
#line 106 "term_constr_main_types.m"
  MR_Word transform_hlds__term_constr_main_types__HeadVar__1_1,
#line 106 "term_constr_main_types.m"
  MR_Word transform_hlds__term_constr_main_types__HeadVar__2_2)
#line 106 "term_constr_main_types.m"
{
#line 106 "term_constr_main_types.m"
  {
#line 106 "term_constr_main_types.m"
    MR_bool transform_hlds__term_constr_main_types__succeeded;
#line 106 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__HeadVar__3_3;
#line 106 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 0)));
#line 106 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 1)));
#line 106 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 2)));
#line 106 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 3)));
#line 106 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 4)));
#line 106 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 6)));
#line 106 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 7)));
#line 106 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 8)));
#line 106 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 5)));

#line 106 "term_constr_main_types.m"
    {
#line 106 "term_constr_main_types.m"
      transform_hlds__term_constr_main_types__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 106 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__3_3, 0) = ((MR_Box) (transform_hlds__term_constr_main_types__V_4_4));
#line 106 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__3_3, 1) = ((MR_Box) (transform_hlds__term_constr_main_types__V_5_5));
#line 106 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__3_3, 2) = ((MR_Box) (transform_hlds__term_constr_main_types__V_6_6));
#line 106 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__3_3, 3) = ((MR_Box) (transform_hlds__term_constr_main_types__V_7_7));
#line 106 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__3_3, 4) = ((MR_Box) (transform_hlds__term_constr_main_types__V_8_8));
#line 106 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__3_3, 5) = ((MR_Box) (transform_hlds__term_constr_main_types__HeadVar__2_2));
#line 106 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__3_3, 6) = ((MR_Box) (transform_hlds__term_constr_main_types__V_10_10));
#line 106 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__3_3, 7) = ((MR_Box) (transform_hlds__term_constr_main_types__V_11_11));
#line 106 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__3_3, 8) = ((MR_Box) (transform_hlds__term_constr_main_types__V_12_12));
#line 106 "term_constr_main_types.m"
    }
#line 106 "term_constr_main_types.m"
    return transform_hlds__term_constr_main_types__HeadVar__3_3;
#line 106 "term_constr_main_types.m"
  }
#line 106 "term_constr_main_types.m"
}

#line 104 "term_constr_main_types.m"
MR_Word MR_CALL 
transform_hlds__term_constr_main_types__f_115_117_99_99_101_115_115_95_99_111_110_115_116_114_115_32_58_61_2_f_0(
#line 104 "term_constr_main_types.m"
  MR_Word transform_hlds__term_constr_main_types__HeadVar__1_1,
#line 104 "term_constr_main_types.m"
  MR_Word transform_hlds__term_constr_main_types__HeadVar__2_2)
#line 104 "term_constr_main_types.m"
{
#line 104 "term_constr_main_types.m"
  {
#line 104 "term_constr_main_types.m"
    MR_bool transform_hlds__term_constr_main_types__succeeded;
#line 104 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__HeadVar__3_3;
#line 104 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 0)));
#line 104 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 1)));
#line 104 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 2)));
#line 104 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 3)));
#line 104 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 5)));
#line 104 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 6)));
#line 104 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 7)));
#line 104 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 8)));
#line 104 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 4)));

#line 104 "term_constr_main_types.m"
    {
#line 104 "term_constr_main_types.m"
      transform_hlds__term_constr_main_types__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 104 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__3_3, 0) = ((MR_Box) (transform_hlds__term_constr_main_types__V_4_4));
#line 104 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__3_3, 1) = ((MR_Box) (transform_hlds__term_constr_main_types__V_5_5));
#line 104 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__3_3, 2) = ((MR_Box) (transform_hlds__term_constr_main_types__V_6_6));
#line 104 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__3_3, 3) = ((MR_Box) (transform_hlds__term_constr_main_types__V_7_7));
#line 104 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__3_3, 4) = ((MR_Box) (transform_hlds__term_constr_main_types__HeadVar__2_2));
#line 104 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__3_3, 5) = ((MR_Box) (transform_hlds__term_constr_main_types__V_9_9));
#line 104 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__3_3, 6) = ((MR_Box) (transform_hlds__term_constr_main_types__V_10_10));
#line 104 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__3_3, 7) = ((MR_Box) (transform_hlds__term_constr_main_types__V_11_11));
#line 104 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__3_3, 8) = ((MR_Box) (transform_hlds__term_constr_main_types__V_12_12));
#line 104 "term_constr_main_types.m"
    }
#line 104 "term_constr_main_types.m"
    return transform_hlds__term_constr_main_types__HeadVar__3_3;
#line 104 "term_constr_main_types.m"
  }
#line 104 "term_constr_main_types.m"
}

#line 102 "term_constr_main_types.m"
MR_Word MR_CALL 
transform_hlds__term_constr_main_types__f_105_109_112_111_114_116_95_102_97_105_108_117_114_101_32_58_61_2_f_0(
#line 102 "term_constr_main_types.m"
  MR_Word transform_hlds__term_constr_main_types__HeadVar__1_1,
#line 102 "term_constr_main_types.m"
  MR_Word transform_hlds__term_constr_main_types__HeadVar__2_2)
#line 102 "term_constr_main_types.m"
{
#line 102 "term_constr_main_types.m"
  {
#line 102 "term_constr_main_types.m"
    MR_bool transform_hlds__term_constr_main_types__succeeded;
#line 102 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__HeadVar__3_3;
#line 102 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 0)));
#line 102 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 1)));
#line 102 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 2)));
#line 102 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 4)));
#line 102 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 5)));
#line 102 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 6)));
#line 102 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 7)));
#line 102 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 8)));
#line 102 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 3)));

#line 102 "term_constr_main_types.m"
    {
#line 102 "term_constr_main_types.m"
      transform_hlds__term_constr_main_types__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 102 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__3_3, 0) = ((MR_Box) (transform_hlds__term_constr_main_types__V_4_4));
#line 102 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__3_3, 1) = ((MR_Box) (transform_hlds__term_constr_main_types__V_5_5));
#line 102 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__3_3, 2) = ((MR_Box) (transform_hlds__term_constr_main_types__V_6_6));
#line 102 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__3_3, 3) = ((MR_Box) (transform_hlds__term_constr_main_types__HeadVar__2_2));
#line 102 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__3_3, 4) = ((MR_Box) (transform_hlds__term_constr_main_types__V_8_8));
#line 102 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__3_3, 5) = ((MR_Box) (transform_hlds__term_constr_main_types__V_9_9));
#line 102 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__3_3, 6) = ((MR_Box) (transform_hlds__term_constr_main_types__V_10_10));
#line 102 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__3_3, 7) = ((MR_Box) (transform_hlds__term_constr_main_types__V_11_11));
#line 102 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__3_3, 8) = ((MR_Box) (transform_hlds__term_constr_main_types__V_12_12));
#line 102 "term_constr_main_types.m"
    }
#line 102 "term_constr_main_types.m"
    return transform_hlds__term_constr_main_types__HeadVar__3_3;
#line 102 "term_constr_main_types.m"
  }
#line 102 "term_constr_main_types.m"
}

#line 100 "term_constr_main_types.m"
MR_Word MR_CALL 
transform_hlds__term_constr_main_types__f_105_109_112_111_114_116_95_115_117_99_99_101_115_115_32_58_61_2_f_0(
#line 100 "term_constr_main_types.m"
  MR_Word transform_hlds__term_constr_main_types__HeadVar__1_1,
#line 100 "term_constr_main_types.m"
  MR_Word transform_hlds__term_constr_main_types__HeadVar__2_2)
#line 100 "term_constr_main_types.m"
{
#line 100 "term_constr_main_types.m"
  {
#line 100 "term_constr_main_types.m"
    MR_bool transform_hlds__term_constr_main_types__succeeded;
#line 100 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__HeadVar__3_3;
#line 100 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 0)));
#line 100 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 1)));
#line 100 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 3)));
#line 100 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 4)));
#line 100 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 5)));
#line 100 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 6)));
#line 100 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 7)));
#line 100 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 8)));
#line 100 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 2)));

#line 100 "term_constr_main_types.m"
    {
#line 100 "term_constr_main_types.m"
      transform_hlds__term_constr_main_types__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 100 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__3_3, 0) = ((MR_Box) (transform_hlds__term_constr_main_types__V_4_4));
#line 100 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__3_3, 1) = ((MR_Box) (transform_hlds__term_constr_main_types__V_5_5));
#line 100 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__3_3, 2) = ((MR_Box) (transform_hlds__term_constr_main_types__HeadVar__2_2));
#line 100 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__3_3, 3) = ((MR_Box) (transform_hlds__term_constr_main_types__V_7_7));
#line 100 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__3_3, 4) = ((MR_Box) (transform_hlds__term_constr_main_types__V_8_8));
#line 100 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__3_3, 5) = ((MR_Box) (transform_hlds__term_constr_main_types__V_9_9));
#line 100 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__3_3, 6) = ((MR_Box) (transform_hlds__term_constr_main_types__V_10_10));
#line 100 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__3_3, 7) = ((MR_Box) (transform_hlds__term_constr_main_types__V_11_11));
#line 100 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__3_3, 8) = ((MR_Box) (transform_hlds__term_constr_main_types__V_12_12));
#line 100 "term_constr_main_types.m"
    }
#line 100 "term_constr_main_types.m"
    return transform_hlds__term_constr_main_types__HeadVar__3_3;
#line 100 "term_constr_main_types.m"
  }
#line 100 "term_constr_main_types.m"
}

#line 99 "term_constr_main_types.m"
MR_Word MR_CALL 
transform_hlds__term_constr_main_types__f_115_105_122_101_95_118_97_114_95_109_97_112_32_58_61_2_f_0(
#line 99 "term_constr_main_types.m"
  MR_Word transform_hlds__term_constr_main_types__HeadVar__1_1,
#line 99 "term_constr_main_types.m"
  MR_Word transform_hlds__term_constr_main_types__HeadVar__2_2)
#line 99 "term_constr_main_types.m"
{
#line 99 "term_constr_main_types.m"
  {
#line 99 "term_constr_main_types.m"
    MR_bool transform_hlds__term_constr_main_types__succeeded;
#line 99 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__HeadVar__3_3;
#line 99 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 1)));
#line 99 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 2)));
#line 99 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 3)));
#line 99 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 4)));
#line 99 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 5)));
#line 99 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 6)));
#line 99 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 7)));
#line 99 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 8)));
#line 99 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 0)));

#line 99 "term_constr_main_types.m"
    {
#line 99 "term_constr_main_types.m"
      transform_hlds__term_constr_main_types__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 99 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__3_3, 0) = ((MR_Box) (transform_hlds__term_constr_main_types__HeadVar__2_2));
#line 99 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__3_3, 1) = ((MR_Box) (transform_hlds__term_constr_main_types__V_5_5));
#line 99 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__3_3, 2) = ((MR_Box) (transform_hlds__term_constr_main_types__V_6_6));
#line 99 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__3_3, 3) = ((MR_Box) (transform_hlds__term_constr_main_types__V_7_7));
#line 99 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__3_3, 4) = ((MR_Box) (transform_hlds__term_constr_main_types__V_8_8));
#line 99 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__3_3, 5) = ((MR_Box) (transform_hlds__term_constr_main_types__V_9_9));
#line 99 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__3_3, 6) = ((MR_Box) (transform_hlds__term_constr_main_types__V_10_10));
#line 99 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__3_3, 7) = ((MR_Box) (transform_hlds__term_constr_main_types__V_11_11));
#line 99 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__3_3, 8) = ((MR_Box) (transform_hlds__term_constr_main_types__V_12_12));
#line 99 "term_constr_main_types.m"
    }
#line 99 "term_constr_main_types.m"
    return transform_hlds__term_constr_main_types__HeadVar__3_3;
#line 99 "term_constr_main_types.m"
  }
#line 99 "term_constr_main_types.m"
}

#line 97 "term_constr_main_types.m"
MR_Word MR_CALL 
transform_hlds__term_constr_main_types__head_vars_1_f_0(
#line 97 "term_constr_main_types.m"
  MR_Word transform_hlds__term_constr_main_types__HeadVar__1_1)
#line 97 "term_constr_main_types.m"
{
#line 97 "term_constr_main_types.m"
  {
#line 97 "term_constr_main_types.m"
    MR_bool transform_hlds__term_constr_main_types__succeeded;
#line 97 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 1)));
#line 97 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 0)));
#line 97 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 2)));
#line 97 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 3)));
#line 97 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 4)));
#line 97 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 5)));
#line 97 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 6)));
#line 97 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 7)));
#line 97 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 8)));

#line 97 "term_constr_main_types.m"
    return transform_hlds__term_constr_main_types__HeadVar__2_2;
#line 97 "term_constr_main_types.m"
  }
#line 97 "term_constr_main_types.m"
}

#line 96 "term_constr_main_types.m"
MR_Word MR_CALL 
transform_hlds__term_constr_main_types__intermod_status_1_f_0(
#line 96 "term_constr_main_types.m"
  MR_Word transform_hlds__term_constr_main_types__HeadVar__1_1)
#line 96 "term_constr_main_types.m"
{
#line 96 "term_constr_main_types.m"
  {
#line 96 "term_constr_main_types.m"
    MR_bool transform_hlds__term_constr_main_types__succeeded;
#line 96 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 7)));
#line 96 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 0)));
#line 96 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 1)));
#line 96 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 2)));
#line 96 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 3)));
#line 96 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 4)));
#line 96 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 5)));
#line 96 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 6)));
#line 96 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 8)));

#line 96 "term_constr_main_types.m"
    return transform_hlds__term_constr_main_types__HeadVar__2_2;
#line 96 "term_constr_main_types.m"
  }
#line 96 "term_constr_main_types.m"
}

#line 95 "term_constr_main_types.m"
MR_Word MR_CALL 
transform_hlds__term_constr_main_types__abstract_rep_1_f_0(
#line 95 "term_constr_main_types.m"
  MR_Word transform_hlds__term_constr_main_types__HeadVar__1_1)
#line 95 "term_constr_main_types.m"
{
#line 95 "term_constr_main_types.m"
  {
#line 95 "term_constr_main_types.m"
    MR_bool transform_hlds__term_constr_main_types__succeeded;
#line 95 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 8)));
#line 95 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 0)));
#line 95 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 1)));
#line 95 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 2)));
#line 95 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 3)));
#line 95 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 4)));
#line 95 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 5)));
#line 95 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 6)));
#line 95 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 7)));

#line 95 "term_constr_main_types.m"
    return transform_hlds__term_constr_main_types__HeadVar__2_2;
#line 95 "term_constr_main_types.m"
  }
#line 95 "term_constr_main_types.m"
}

#line 94 "term_constr_main_types.m"
MR_Word MR_CALL 
transform_hlds__term_constr_main_types__term_status_1_f_0(
#line 94 "term_constr_main_types.m"
  MR_Word transform_hlds__term_constr_main_types__HeadVar__1_1)
#line 94 "term_constr_main_types.m"
{
#line 94 "term_constr_main_types.m"
  {
#line 94 "term_constr_main_types.m"
    MR_bool transform_hlds__term_constr_main_types__succeeded;
#line 94 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 6)));
#line 94 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 0)));
#line 94 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 1)));
#line 94 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 2)));
#line 94 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 3)));
#line 94 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 4)));
#line 94 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 5)));
#line 94 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 7)));
#line 94 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 8)));

#line 94 "term_constr_main_types.m"
    return transform_hlds__term_constr_main_types__HeadVar__2_2;
#line 94 "term_constr_main_types.m"
  }
#line 94 "term_constr_main_types.m"
}

#line 93 "term_constr_main_types.m"
MR_Word MR_CALL 
transform_hlds__term_constr_main_types__failure_constrs_1_f_0(
#line 93 "term_constr_main_types.m"
  MR_Word transform_hlds__term_constr_main_types__HeadVar__1_1)
#line 93 "term_constr_main_types.m"
{
#line 93 "term_constr_main_types.m"
  {
#line 93 "term_constr_main_types.m"
    MR_bool transform_hlds__term_constr_main_types__succeeded;
#line 93 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 5)));
#line 93 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 0)));
#line 93 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 1)));
#line 93 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 2)));
#line 93 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 3)));
#line 93 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 4)));
#line 93 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 6)));
#line 93 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 7)));
#line 93 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 8)));

#line 93 "term_constr_main_types.m"
    return transform_hlds__term_constr_main_types__HeadVar__2_2;
#line 93 "term_constr_main_types.m"
  }
#line 93 "term_constr_main_types.m"
}

#line 92 "term_constr_main_types.m"
MR_Word MR_CALL 
transform_hlds__term_constr_main_types__success_constrs_1_f_0(
#line 92 "term_constr_main_types.m"
  MR_Word transform_hlds__term_constr_main_types__HeadVar__1_1)
#line 92 "term_constr_main_types.m"
{
#line 92 "term_constr_main_types.m"
  {
#line 92 "term_constr_main_types.m"
    MR_bool transform_hlds__term_constr_main_types__succeeded;
#line 92 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 4)));
#line 92 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 0)));
#line 92 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 1)));
#line 92 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 2)));
#line 92 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 3)));
#line 92 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 5)));
#line 92 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 6)));
#line 92 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 7)));
#line 92 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 8)));

#line 92 "term_constr_main_types.m"
    return transform_hlds__term_constr_main_types__HeadVar__2_2;
#line 92 "term_constr_main_types.m"
  }
#line 92 "term_constr_main_types.m"
}

#line 90 "term_constr_main_types.m"
MR_Word MR_CALL 
transform_hlds__term_constr_main_types__import_failure_1_f_0(
#line 90 "term_constr_main_types.m"
  MR_Word transform_hlds__term_constr_main_types__HeadVar__1_1)
#line 90 "term_constr_main_types.m"
{
#line 90 "term_constr_main_types.m"
  {
#line 90 "term_constr_main_types.m"
    MR_bool transform_hlds__term_constr_main_types__succeeded;
#line 90 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 3)));
#line 90 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 0)));
#line 90 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 1)));
#line 90 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 2)));
#line 90 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 4)));
#line 90 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 5)));
#line 90 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 6)));
#line 90 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 7)));
#line 90 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 8)));

#line 90 "term_constr_main_types.m"
    return transform_hlds__term_constr_main_types__HeadVar__2_2;
#line 90 "term_constr_main_types.m"
  }
#line 90 "term_constr_main_types.m"
}

#line 88 "term_constr_main_types.m"
MR_Word MR_CALL 
transform_hlds__term_constr_main_types__import_success_1_f_0(
#line 88 "term_constr_main_types.m"
  MR_Word transform_hlds__term_constr_main_types__HeadVar__1_1)
#line 88 "term_constr_main_types.m"
{
#line 88 "term_constr_main_types.m"
  {
#line 88 "term_constr_main_types.m"
    MR_bool transform_hlds__term_constr_main_types__succeeded;
#line 88 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 2)));
#line 88 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 0)));
#line 88 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 1)));
#line 88 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 3)));
#line 88 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 4)));
#line 88 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 5)));
#line 88 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 6)));
#line 88 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 7)));
#line 88 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 8)));

#line 88 "term_constr_main_types.m"
    return transform_hlds__term_constr_main_types__HeadVar__2_2;
#line 88 "term_constr_main_types.m"
  }
#line 88 "term_constr_main_types.m"
}

#line 87 "term_constr_main_types.m"
MR_Word MR_CALL 
transform_hlds__term_constr_main_types__size_var_map_1_f_0(
#line 87 "term_constr_main_types.m"
  MR_Word transform_hlds__term_constr_main_types__HeadVar__1_1)
#line 87 "term_constr_main_types.m"
{
#line 87 "term_constr_main_types.m"
  {
#line 87 "term_constr_main_types.m"
    MR_bool transform_hlds__term_constr_main_types__succeeded;
#line 87 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 0)));
#line 87 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 1)));
#line 87 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 2)));
#line 87 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 3)));
#line 87 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 4)));
#line 87 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 5)));
#line 87 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 6)));
#line 87 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 7)));
#line 87 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 8)));

#line 87 "term_constr_main_types.m"
    return transform_hlds__term_constr_main_types__HeadVar__2_2;
#line 87 "term_constr_main_types.m"
  }
#line 87 "term_constr_main_types.m"
}

#line 85 "term_constr_main_types.m"
MR_Word MR_CALL 
transform_hlds__term_constr_main_types__term2_info_init_0_f_0(void)
#line 85 "term_constr_main_types.m"
{
#line 175 "term_constr_main_types.m"
  {
#line 175 "term_constr_main_types.m"
    MR_bool transform_hlds__term_constr_main_types__succeeded;
#line 175 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__HeadVar__1_1;
#line 175 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_2_2;

#line 175 "term_constr_main_types.m"
    {
#line 175 "term_constr_main_types.m"
      transform_hlds__term_constr_main_types__V_2_2 = mercury__map__init_0_f_0((MR_Word) &transform_hlds__term_constr_main_types_scalar_common_1[0], (MR_Word) &transform_hlds__term_constr_main_types_scalar_common_1[1]);
    }
#line 175 "term_constr_main_types.m"
    {
#line 175 "term_constr_main_types.m"
      transform_hlds__term_constr_main_types__HeadVar__1_1 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 175 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, 0) = ((MR_Box) (transform_hlds__term_constr_main_types__V_2_2));
#line 175 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 175 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 175 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 175 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 175 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 175 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 175 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, 7) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 175 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, 8) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 175 "term_constr_main_types.m"
    }
#line 175 "term_constr_main_types.m"
    return transform_hlds__term_constr_main_types__HeadVar__1_1;
#line 175 "term_constr_main_types.m"
  }
#line 85 "term_constr_main_types.m"
}

void mercury__transform_hlds__term_constr_main_types__init(void)
{
}

void mercury__transform_hlds__term_constr_main_types__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__type_ctor_info_constr_arg_size_info_0);
	MR_register_type_ctor_info(&transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__type_ctor_info_constr_termination_info_0);
	MR_register_type_ctor_info(&transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__type_ctor_info_intermod_status_0);
	MR_register_type_ctor_info(&transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__type_ctor_info_term_reason_0);
	MR_register_type_ctor_info(&transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__type_ctor_info_termination2_info_0);
}

void mercury__transform_hlds__term_constr_main_types__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module transform_hlds.term_constr_main_types. */
