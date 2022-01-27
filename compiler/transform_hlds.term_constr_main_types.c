/*
** Automatically generated from `term_constr_main_types.m'
** by the Mercury compiler,
** version rotd-2015-10-06
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
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
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
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 136 "transform_hlds.term_constr_main_types.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main_types__list__ti_list_1transform_hlds__term_constr_errors__type_ctor_info_term2_error_0;

#line 139 "transform_hlds.term_constr_main_types.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_constr_main_types__parse_tree__prog_data__ti_generic_termination_info_2transform_hlds__term_constr_main_types__type_ctor_info_term_reason_0list__ti_list_1transform_hlds__term_constr_errors__type_ctor_info_term2_error_0;

#line 142 "transform_hlds.term_constr_main_types.c"
static const MR_EnumFunctorDesc transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__enum_functor_desc_intermod_status_0_0;

#line 145 "transform_hlds.term_constr_main_types.c"
static const MR_EnumFunctorDesc transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__enum_functor_desc_intermod_status_0_1;

#line 148 "transform_hlds.term_constr_main_types.c"
static const MR_EnumFunctorDescPtr transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__enum_value_ordered_intermod_status_0[2];

#line 151 "transform_hlds.term_constr_main_types.c"
static const MR_EnumFunctorDescPtr transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__enum_name_ordered_intermod_status_0[2];

#line 154 "transform_hlds.term_constr_main_types.c"
static const MR_Integer transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__functor_number_map_intermod_status_0[2];

#line 157 "transform_hlds.term_constr_main_types.c"
static const MR_EnumFunctorDesc transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__enum_functor_desc_term_reason_0_0;

#line 160 "transform_hlds.term_constr_main_types.c"
static const MR_EnumFunctorDesc transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__enum_functor_desc_term_reason_0_1;

#line 163 "transform_hlds.term_constr_main_types.c"
static const MR_EnumFunctorDesc transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__enum_functor_desc_term_reason_0_2;

#line 166 "transform_hlds.term_constr_main_types.c"
static const MR_EnumFunctorDesc transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__enum_functor_desc_term_reason_0_3;

#line 169 "transform_hlds.term_constr_main_types.c"
static const MR_EnumFunctorDesc transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__enum_functor_desc_term_reason_0_4;

#line 172 "transform_hlds.term_constr_main_types.c"
static const MR_EnumFunctorDescPtr transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__enum_value_ordered_term_reason_0[5];

#line 175 "transform_hlds.term_constr_main_types.c"
static const MR_EnumFunctorDescPtr transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__enum_name_ordered_term_reason_0[5];

#line 178 "transform_hlds.term_constr_main_types.c"
static const MR_Integer transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__functor_number_map_term_reason_0[5];

#line 181 "transform_hlds.term_constr_main_types.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main_types__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 184 "transform_hlds.term_constr_main_types.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main_types__term__ti_var_1term__type_ctor_info_generic_0;

#line 187 "transform_hlds.term_constr_main_types.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_constr_main_types__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1term__type_ctor_info_generic_0;

#line 190 "transform_hlds.term_constr_main_types.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main_types__list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0;

#line 193 "transform_hlds.term_constr_main_types.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main_types__list__ti_list_1parse_tree__prog_data__type_ctor_info_arg_size_constr_0;

#line 196 "transform_hlds.term_constr_main_types.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main_types__maybe__ti_maybe_1list__ti_list_1parse_tree__prog_data__type_ctor_info_arg_size_constr_0;

#line 199 "transform_hlds.term_constr_main_types.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main_types__maybe__ti_maybe_1libs__polyhedron__type_ctor_info_polyhedron_0;

#line 202 "transform_hlds.term_constr_main_types.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main_types__maybe__ti_maybe_1parse_tree__prog_data__ti_generic_termination_info_2transform_hlds__term_constr_main_types__type_ctor_info_term_reason_0list__ti_list_1transform_hlds__term_constr_errors__type_ctor_info_term2_error_0;

#line 205 "transform_hlds.term_constr_main_types.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main_types__maybe__ti_maybe_1transform_hlds__term_constr_main_types__type_ctor_info_intermod_status_0;

#line 208 "transform_hlds.term_constr_main_types.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main_types__maybe__ti_maybe_1transform_hlds__term_constr_data__type_ctor_info_abstract_proc_0;

#line 211 "transform_hlds.term_constr_main_types.c"
static const MR_PseudoTypeInfo transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__field_types_termination2_info_0_0[9];

#line 214 "transform_hlds.term_constr_main_types.c"
static const MR_ConstString transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__field_names_termination2_info_0_0[9];

#line 217 "transform_hlds.term_constr_main_types.c"
static const MR_DuFunctorDesc transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__du_functor_desc_termination2_info_0_0;

#line 220 "transform_hlds.term_constr_main_types.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__du_stag_ordered_termination2_info_0_0[1];

#line 223 "transform_hlds.term_constr_main_types.c"
static const MR_DuPtagLayout transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__du_ptag_ordered_termination2_info_0[1];

#line 226 "transform_hlds.term_constr_main_types.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__du_name_ordered_termination2_info_0[1];

#line 229 "transform_hlds.term_constr_main_types.c"
static const MR_Integer transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__functor_number_map_termination2_info_0[1];

#line 232 "transform_hlds.term_constr_main_types.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_main_types____Unify____constr_arg_size_info_0_0_10001(
#line 235 "transform_hlds.term_constr_main_types.c"
  MR_Box transform_hlds__term_constr_main_types__wrapper_arg_1,
#line 237 "transform_hlds.term_constr_main_types.c"
  MR_Box transform_hlds__term_constr_main_types__wrapper_arg_2);

#line 240 "transform_hlds.term_constr_main_types.c"
static void MR_CALL 
transform_hlds__term_constr_main_types____Compare____constr_arg_size_info_0_0_10001(
#line 243 "transform_hlds.term_constr_main_types.c"
  MR_Box * transform_hlds__term_constr_main_types__wrapper_arg_1,
#line 245 "transform_hlds.term_constr_main_types.c"
  MR_Box transform_hlds__term_constr_main_types__wrapper_arg_2,
#line 247 "transform_hlds.term_constr_main_types.c"
  MR_Box transform_hlds__term_constr_main_types__wrapper_arg_3);

#line 250 "transform_hlds.term_constr_main_types.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_main_types____Unify____constr_termination_info_0_0_10001(
#line 253 "transform_hlds.term_constr_main_types.c"
  MR_Box transform_hlds__term_constr_main_types__wrapper_arg_1,
#line 255 "transform_hlds.term_constr_main_types.c"
  MR_Box transform_hlds__term_constr_main_types__wrapper_arg_2);

#line 258 "transform_hlds.term_constr_main_types.c"
static void MR_CALL 
transform_hlds__term_constr_main_types____Compare____constr_termination_info_0_0_10001(
#line 261 "transform_hlds.term_constr_main_types.c"
  MR_Box * transform_hlds__term_constr_main_types__wrapper_arg_1,
#line 263 "transform_hlds.term_constr_main_types.c"
  MR_Box transform_hlds__term_constr_main_types__wrapper_arg_2,
#line 265 "transform_hlds.term_constr_main_types.c"
  MR_Box transform_hlds__term_constr_main_types__wrapper_arg_3);

#line 268 "transform_hlds.term_constr_main_types.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_main_types____Unify____intermod_status_0_0_10001(
#line 271 "transform_hlds.term_constr_main_types.c"
  MR_Box transform_hlds__term_constr_main_types__wrapper_arg_1,
#line 273 "transform_hlds.term_constr_main_types.c"
  MR_Box transform_hlds__term_constr_main_types__wrapper_arg_2);

#line 276 "transform_hlds.term_constr_main_types.c"
static void MR_CALL 
transform_hlds__term_constr_main_types____Compare____intermod_status_0_0_10001(
#line 279 "transform_hlds.term_constr_main_types.c"
  MR_Box * transform_hlds__term_constr_main_types__wrapper_arg_1,
#line 281 "transform_hlds.term_constr_main_types.c"
  MR_Box transform_hlds__term_constr_main_types__wrapper_arg_2,
#line 283 "transform_hlds.term_constr_main_types.c"
  MR_Box transform_hlds__term_constr_main_types__wrapper_arg_3);

#line 286 "transform_hlds.term_constr_main_types.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_main_types____Unify____term_reason_0_0_10001(
#line 289 "transform_hlds.term_constr_main_types.c"
  MR_Box transform_hlds__term_constr_main_types__wrapper_arg_1,
#line 291 "transform_hlds.term_constr_main_types.c"
  MR_Box transform_hlds__term_constr_main_types__wrapper_arg_2);

#line 294 "transform_hlds.term_constr_main_types.c"
static void MR_CALL 
transform_hlds__term_constr_main_types____Compare____term_reason_0_0_10001(
#line 297 "transform_hlds.term_constr_main_types.c"
  MR_Box * transform_hlds__term_constr_main_types__wrapper_arg_1,
#line 299 "transform_hlds.term_constr_main_types.c"
  MR_Box transform_hlds__term_constr_main_types__wrapper_arg_2,
#line 301 "transform_hlds.term_constr_main_types.c"
  MR_Box transform_hlds__term_constr_main_types__wrapper_arg_3);

#line 304 "transform_hlds.term_constr_main_types.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_main_types____Unify____termination2_info_0_0_10001(
#line 307 "transform_hlds.term_constr_main_types.c"
  MR_Box transform_hlds__term_constr_main_types__wrapper_arg_1,
#line 309 "transform_hlds.term_constr_main_types.c"
  MR_Box transform_hlds__term_constr_main_types__wrapper_arg_2);

#line 312 "transform_hlds.term_constr_main_types.c"
static void MR_CALL 
transform_hlds__term_constr_main_types____Compare____termination2_info_0_0_10001(
#line 315 "transform_hlds.term_constr_main_types.c"
  MR_Box * transform_hlds__term_constr_main_types__wrapper_arg_1,
#line 317 "transform_hlds.term_constr_main_types.c"
  MR_Box transform_hlds__term_constr_main_types__wrapper_arg_2,
#line 319 "transform_hlds.term_constr_main_types.c"
  MR_Box transform_hlds__term_constr_main_types__wrapper_arg_3);


static /* final */ const MR_Box transform_hlds__term_constr_main_types_scalar_common_1[10][2];

static /* final */ const MR_Box transform_hlds__term_constr_main_types_scalar_common_2[2][3];




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
    ((MR_Box) (&transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__type_ctor_info_term2_error_0))
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
    ((MR_Box) (&transform_hlds__term_constr_main_types_scalar_common_2[0]))
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

static /* final */ const MR_Box transform_hlds__term_constr_main_types_scalar_common_2[2][3] = {
  /* row 0 */
  {
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_generic_termination_info_2)),
    ((MR_Box) (&transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__type_ctor_info_term_reason_0)),
    ((MR_Box) (&transform_hlds__term_constr_main_types_scalar_common_1[2]))
  },
  /* row 1 */
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



#line 407 "transform_hlds.term_constr_main_types.c"
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

#line 424 "transform_hlds.term_constr_main_types.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main_types__list__ti_list_1transform_hlds__term_constr_errors__type_ctor_info_term2_error_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__type_ctor_info_term2_error_0
  }
};

#line 432 "transform_hlds.term_constr_main_types.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_constr_main_types__parse_tree__prog_data__ti_generic_termination_info_2transform_hlds__term_constr_main_types__type_ctor_info_term_reason_0list__ti_list_1transform_hlds__term_constr_errors__type_ctor_info_term2_error_0 = {
  &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_generic_termination_info_2,
  {
    (MR_TypeInfo) &transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__type_ctor_info_term_reason_0,
    (MR_TypeInfo) &transform_hlds__term_constr_main_types__list__ti_list_1transform_hlds__term_constr_errors__type_ctor_info_term2_error_0
  }
};

#line 441 "transform_hlds.term_constr_main_types.c"
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
  {     (MR_PseudoTypeInfo) &transform_hlds__term_constr_main_types__parse_tree__prog_data__ti_generic_termination_info_2transform_hlds__term_constr_main_types__type_ctor_info_term_reason_0list__ti_list_1transform_hlds__term_constr_errors__type_ctor_info_term2_error_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 458 "transform_hlds.term_constr_main_types.c"
static const MR_EnumFunctorDesc transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__enum_functor_desc_intermod_status_0_0 = {
  (MR_String) "not_mutually_recursive",
  (MR_Integer) 0
};

#line 464 "transform_hlds.term_constr_main_types.c"
static const MR_EnumFunctorDesc transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__enum_functor_desc_intermod_status_0_1 = {
  (MR_String) "may_be_mutually_recursive",
  (MR_Integer) 1
};

#line 470 "transform_hlds.term_constr_main_types.c"
static const MR_EnumFunctorDescPtr transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__enum_value_ordered_intermod_status_0[2] = {
  &transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__enum_functor_desc_intermod_status_0_0,
  &transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__enum_functor_desc_intermod_status_0_1
};

#line 476 "transform_hlds.term_constr_main_types.c"
static const MR_EnumFunctorDescPtr transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__enum_name_ordered_intermod_status_0[2] = {
  &transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__enum_functor_desc_intermod_status_0_1,
  &transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__enum_functor_desc_intermod_status_0_0
};

#line 482 "transform_hlds.term_constr_main_types.c"
static const MR_Integer transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__functor_number_map_intermod_status_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 488 "transform_hlds.term_constr_main_types.c"
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

#line 505 "transform_hlds.term_constr_main_types.c"
static const MR_EnumFunctorDesc transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__enum_functor_desc_term_reason_0_0 = {
  (MR_String) "term_reason_builtin",
  (MR_Integer) 0
};

#line 511 "transform_hlds.term_constr_main_types.c"
static const MR_EnumFunctorDesc transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__enum_functor_desc_term_reason_0_1 = {
  (MR_String) "term_reason_pragma_supplied",
  (MR_Integer) 1
};

#line 517 "transform_hlds.term_constr_main_types.c"
static const MR_EnumFunctorDesc transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__enum_functor_desc_term_reason_0_2 = {
  (MR_String) "term_reason_foreign_supplied",
  (MR_Integer) 2
};

#line 523 "transform_hlds.term_constr_main_types.c"
static const MR_EnumFunctorDesc transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__enum_functor_desc_term_reason_0_3 = {
  (MR_String) "term_reason_import_supplied",
  (MR_Integer) 3
};

#line 529 "transform_hlds.term_constr_main_types.c"
static const MR_EnumFunctorDesc transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__enum_functor_desc_term_reason_0_4 = {
  (MR_String) "term_reason_analysis",
  (MR_Integer) 4
};

#line 535 "transform_hlds.term_constr_main_types.c"
static const MR_EnumFunctorDescPtr transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__enum_value_ordered_term_reason_0[5] = {
  &transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__enum_functor_desc_term_reason_0_0,
  &transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__enum_functor_desc_term_reason_0_1,
  &transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__enum_functor_desc_term_reason_0_2,
  &transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__enum_functor_desc_term_reason_0_3,
  &transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__enum_functor_desc_term_reason_0_4
};

#line 544 "transform_hlds.term_constr_main_types.c"
static const MR_EnumFunctorDescPtr transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__enum_name_ordered_term_reason_0[5] = {
  &transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__enum_functor_desc_term_reason_0_4,
  &transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__enum_functor_desc_term_reason_0_0,
  &transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__enum_functor_desc_term_reason_0_2,
  &transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__enum_functor_desc_term_reason_0_3,
  &transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__enum_functor_desc_term_reason_0_1
};

#line 553 "transform_hlds.term_constr_main_types.c"
static const MR_Integer transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__functor_number_map_term_reason_0[5] = {
  (MR_Integer) 1,
  (MR_Integer) 4,
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 0
};

#line 562 "transform_hlds.term_constr_main_types.c"
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

#line 579 "transform_hlds.term_constr_main_types.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main_types__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 587 "transform_hlds.term_constr_main_types.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main_types__term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 595 "transform_hlds.term_constr_main_types.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_constr_main_types__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__term_constr_main_types__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &transform_hlds__term_constr_main_types__term__ti_var_1term__type_ctor_info_generic_0
  }
};

#line 604 "transform_hlds.term_constr_main_types.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main_types__list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__term_constr_main_types__term__ti_var_1term__type_ctor_info_generic_0
  }
};

#line 612 "transform_hlds.term_constr_main_types.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main_types__list__ti_list_1parse_tree__prog_data__type_ctor_info_arg_size_constr_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_size_constr_0
  }
};

#line 620 "transform_hlds.term_constr_main_types.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main_types__maybe__ti_maybe_1list__ti_list_1parse_tree__prog_data__type_ctor_info_arg_size_constr_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &transform_hlds__term_constr_main_types__list__ti_list_1parse_tree__prog_data__type_ctor_info_arg_size_constr_0
  }
};

#line 628 "transform_hlds.term_constr_main_types.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main_types__maybe__ti_maybe_1libs__polyhedron__type_ctor_info_polyhedron_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &libs__polyhedron__libs__polyhedron__type_ctor_info_polyhedron_0
  }
};

#line 636 "transform_hlds.term_constr_main_types.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main_types__maybe__ti_maybe_1parse_tree__prog_data__ti_generic_termination_info_2transform_hlds__term_constr_main_types__type_ctor_info_term_reason_0list__ti_list_1transform_hlds__term_constr_errors__type_ctor_info_term2_error_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &transform_hlds__term_constr_main_types__parse_tree__prog_data__ti_generic_termination_info_2transform_hlds__term_constr_main_types__type_ctor_info_term_reason_0list__ti_list_1transform_hlds__term_constr_errors__type_ctor_info_term2_error_0
  }
};

#line 644 "transform_hlds.term_constr_main_types.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main_types__maybe__ti_maybe_1transform_hlds__term_constr_main_types__type_ctor_info_intermod_status_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__type_ctor_info_intermod_status_0
  }
};

#line 652 "transform_hlds.term_constr_main_types.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main_types__maybe__ti_maybe_1transform_hlds__term_constr_data__type_ctor_info_abstract_proc_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_proc_0
  }
};

#line 660 "transform_hlds.term_constr_main_types.c"
static const MR_PseudoTypeInfo transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__field_types_termination2_info_0_0[9] = {
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_main_types__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1term__type_ctor_info_generic_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_main_types__list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_main_types__maybe__ti_maybe_1list__ti_list_1parse_tree__prog_data__type_ctor_info_arg_size_constr_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_main_types__maybe__ti_maybe_1list__ti_list_1parse_tree__prog_data__type_ctor_info_arg_size_constr_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_main_types__maybe__ti_maybe_1libs__polyhedron__type_ctor_info_polyhedron_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_main_types__maybe__ti_maybe_1libs__polyhedron__type_ctor_info_polyhedron_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_main_types__maybe__ti_maybe_1parse_tree__prog_data__ti_generic_termination_info_2transform_hlds__term_constr_main_types__type_ctor_info_term_reason_0list__ti_list_1transform_hlds__term_constr_errors__type_ctor_info_term2_error_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_main_types__maybe__ti_maybe_1transform_hlds__term_constr_main_types__type_ctor_info_intermod_status_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_main_types__maybe__ti_maybe_1transform_hlds__term_constr_data__type_ctor_info_abstract_proc_0
};

#line 673 "transform_hlds.term_constr_main_types.c"
static const MR_ConstString transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__field_names_termination2_info_0_0[9] = {
  (MR_String) "t2i_size_var_map",
  (MR_String) "t2i_head_vars",
  (MR_String) "t2i_import_success",
  (MR_String) "t2i_import_failure",
  (MR_String) "t2i_success_constrs",
  (MR_String) "t2i_failure_constrs",
  (MR_String) "t2i_term_status",
  (MR_String) "t2i_intermod_status",
  (MR_String) "t2i_abstract_rep"
};

#line 686 "transform_hlds.term_constr_main_types.c"
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

#line 701 "transform_hlds.term_constr_main_types.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__du_stag_ordered_termination2_info_0_0[1] = {
  &transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__du_functor_desc_termination2_info_0_0
};

#line 706 "transform_hlds.term_constr_main_types.c"
static const MR_DuPtagLayout transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__du_ptag_ordered_termination2_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__du_stag_ordered_termination2_info_0_0
  }
};

#line 715 "transform_hlds.term_constr_main_types.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__du_name_ordered_termination2_info_0[1] = {
  &transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__du_functor_desc_termination2_info_0_0
};

#line 720 "transform_hlds.term_constr_main_types.c"
static const MR_Integer transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__functor_number_map_termination2_info_0[1] = {
  (MR_Integer) 0
};

#line 725 "transform_hlds.term_constr_main_types.c"
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

#line 742 "transform_hlds.term_constr_main_types.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_main_types____Unify____constr_arg_size_info_0_0_10001(
#line 745 "transform_hlds.term_constr_main_types.c"
  MR_Box transform_hlds__term_constr_main_types__wrapper_arg_1,
#line 747 "transform_hlds.term_constr_main_types.c"
  MR_Box transform_hlds__term_constr_main_types__wrapper_arg_2)
#line 749 "transform_hlds.term_constr_main_types.c"
{
#line 751 "transform_hlds.term_constr_main_types.c"
  {
#line 753 "transform_hlds.term_constr_main_types.c"
    MR_bool transform_hlds__term_constr_main_types__succeeded;

#line 756 "transform_hlds.term_constr_main_types.c"
    {
#line 758 "transform_hlds.term_constr_main_types.c"
      transform_hlds__term_constr_main_types__succeeded = transform_hlds__term_constr_main_types____Unify____constr_arg_size_info_0_0(((MR_Word) transform_hlds__term_constr_main_types__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_main_types__wrapper_arg_2));
    }
#line 761 "transform_hlds.term_constr_main_types.c"
    return transform_hlds__term_constr_main_types__succeeded;
#line 763 "transform_hlds.term_constr_main_types.c"
  }
#line 765 "transform_hlds.term_constr_main_types.c"
}

#line 768 "transform_hlds.term_constr_main_types.c"
static void MR_CALL 
transform_hlds__term_constr_main_types____Compare____constr_arg_size_info_0_0_10001(
#line 771 "transform_hlds.term_constr_main_types.c"
  MR_Box * transform_hlds__term_constr_main_types__wrapper_arg_1,
#line 773 "transform_hlds.term_constr_main_types.c"
  MR_Box transform_hlds__term_constr_main_types__wrapper_arg_2,
#line 775 "transform_hlds.term_constr_main_types.c"
  MR_Box transform_hlds__term_constr_main_types__wrapper_arg_3)
#line 777 "transform_hlds.term_constr_main_types.c"
{
#line 779 "transform_hlds.term_constr_main_types.c"
  {
#line 781 "transform_hlds.term_constr_main_types.c"
    MR_Word transform_hlds__term_constr_main_types__conv0_HeadVar__1_1;

#line 784 "transform_hlds.term_constr_main_types.c"
    {
#line 786 "transform_hlds.term_constr_main_types.c"
      transform_hlds__term_constr_main_types____Compare____constr_arg_size_info_0_0(&transform_hlds__term_constr_main_types__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_constr_main_types__wrapper_arg_2), ((MR_Word) transform_hlds__term_constr_main_types__wrapper_arg_3));
    }
#line 789 "transform_hlds.term_constr_main_types.c"
    *transform_hlds__term_constr_main_types__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_constr_main_types__conv0_HeadVar__1_1));
#line 791 "transform_hlds.term_constr_main_types.c"
  }
#line 793 "transform_hlds.term_constr_main_types.c"
}

#line 796 "transform_hlds.term_constr_main_types.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_main_types____Unify____constr_termination_info_0_0_10001(
#line 799 "transform_hlds.term_constr_main_types.c"
  MR_Box transform_hlds__term_constr_main_types__wrapper_arg_1,
#line 801 "transform_hlds.term_constr_main_types.c"
  MR_Box transform_hlds__term_constr_main_types__wrapper_arg_2)
#line 803 "transform_hlds.term_constr_main_types.c"
{
#line 805 "transform_hlds.term_constr_main_types.c"
  {
#line 807 "transform_hlds.term_constr_main_types.c"
    MR_bool transform_hlds__term_constr_main_types__succeeded;

#line 810 "transform_hlds.term_constr_main_types.c"
    {
#line 812 "transform_hlds.term_constr_main_types.c"
      transform_hlds__term_constr_main_types__succeeded = transform_hlds__term_constr_main_types____Unify____constr_termination_info_0_0(((MR_Word) transform_hlds__term_constr_main_types__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_main_types__wrapper_arg_2));
    }
#line 815 "transform_hlds.term_constr_main_types.c"
    return transform_hlds__term_constr_main_types__succeeded;
#line 817 "transform_hlds.term_constr_main_types.c"
  }
#line 819 "transform_hlds.term_constr_main_types.c"
}

#line 822 "transform_hlds.term_constr_main_types.c"
static void MR_CALL 
transform_hlds__term_constr_main_types____Compare____constr_termination_info_0_0_10001(
#line 825 "transform_hlds.term_constr_main_types.c"
  MR_Box * transform_hlds__term_constr_main_types__wrapper_arg_1,
#line 827 "transform_hlds.term_constr_main_types.c"
  MR_Box transform_hlds__term_constr_main_types__wrapper_arg_2,
#line 829 "transform_hlds.term_constr_main_types.c"
  MR_Box transform_hlds__term_constr_main_types__wrapper_arg_3)
#line 831 "transform_hlds.term_constr_main_types.c"
{
#line 833 "transform_hlds.term_constr_main_types.c"
  {
#line 835 "transform_hlds.term_constr_main_types.c"
    MR_Word transform_hlds__term_constr_main_types__conv0_HeadVar__1_1;

#line 838 "transform_hlds.term_constr_main_types.c"
    {
#line 840 "transform_hlds.term_constr_main_types.c"
      transform_hlds__term_constr_main_types____Compare____constr_termination_info_0_0(&transform_hlds__term_constr_main_types__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_constr_main_types__wrapper_arg_2), ((MR_Word) transform_hlds__term_constr_main_types__wrapper_arg_3));
    }
#line 843 "transform_hlds.term_constr_main_types.c"
    *transform_hlds__term_constr_main_types__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_constr_main_types__conv0_HeadVar__1_1));
#line 845 "transform_hlds.term_constr_main_types.c"
  }
#line 847 "transform_hlds.term_constr_main_types.c"
}

#line 850 "transform_hlds.term_constr_main_types.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_main_types____Unify____intermod_status_0_0_10001(
#line 853 "transform_hlds.term_constr_main_types.c"
  MR_Box transform_hlds__term_constr_main_types__wrapper_arg_1,
#line 855 "transform_hlds.term_constr_main_types.c"
  MR_Box transform_hlds__term_constr_main_types__wrapper_arg_2)
#line 857 "transform_hlds.term_constr_main_types.c"
{
#line 859 "transform_hlds.term_constr_main_types.c"
  {
#line 861 "transform_hlds.term_constr_main_types.c"
    MR_bool transform_hlds__term_constr_main_types__succeeded;

#line 864 "transform_hlds.term_constr_main_types.c"
    {
#line 866 "transform_hlds.term_constr_main_types.c"
      transform_hlds__term_constr_main_types__succeeded = transform_hlds__term_constr_main_types____Unify____intermod_status_0_0(((MR_Word) transform_hlds__term_constr_main_types__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_main_types__wrapper_arg_2));
    }
#line 869 "transform_hlds.term_constr_main_types.c"
    return transform_hlds__term_constr_main_types__succeeded;
#line 871 "transform_hlds.term_constr_main_types.c"
  }
#line 873 "transform_hlds.term_constr_main_types.c"
}

#line 876 "transform_hlds.term_constr_main_types.c"
static void MR_CALL 
transform_hlds__term_constr_main_types____Compare____intermod_status_0_0_10001(
#line 879 "transform_hlds.term_constr_main_types.c"
  MR_Box * transform_hlds__term_constr_main_types__wrapper_arg_1,
#line 881 "transform_hlds.term_constr_main_types.c"
  MR_Box transform_hlds__term_constr_main_types__wrapper_arg_2,
#line 883 "transform_hlds.term_constr_main_types.c"
  MR_Box transform_hlds__term_constr_main_types__wrapper_arg_3)
#line 885 "transform_hlds.term_constr_main_types.c"
{
#line 887 "transform_hlds.term_constr_main_types.c"
  {
#line 889 "transform_hlds.term_constr_main_types.c"
    MR_Word transform_hlds__term_constr_main_types__conv0_HeadVar__1_1;

#line 892 "transform_hlds.term_constr_main_types.c"
    {
#line 894 "transform_hlds.term_constr_main_types.c"
      transform_hlds__term_constr_main_types____Compare____intermod_status_0_0(&transform_hlds__term_constr_main_types__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_constr_main_types__wrapper_arg_2), ((MR_Word) transform_hlds__term_constr_main_types__wrapper_arg_3));
    }
#line 897 "transform_hlds.term_constr_main_types.c"
    *transform_hlds__term_constr_main_types__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_constr_main_types__conv0_HeadVar__1_1));
#line 899 "transform_hlds.term_constr_main_types.c"
  }
#line 901 "transform_hlds.term_constr_main_types.c"
}

#line 904 "transform_hlds.term_constr_main_types.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_main_types____Unify____term_reason_0_0_10001(
#line 907 "transform_hlds.term_constr_main_types.c"
  MR_Box transform_hlds__term_constr_main_types__wrapper_arg_1,
#line 909 "transform_hlds.term_constr_main_types.c"
  MR_Box transform_hlds__term_constr_main_types__wrapper_arg_2)
#line 911 "transform_hlds.term_constr_main_types.c"
{
#line 913 "transform_hlds.term_constr_main_types.c"
  {
#line 915 "transform_hlds.term_constr_main_types.c"
    MR_bool transform_hlds__term_constr_main_types__succeeded;

#line 918 "transform_hlds.term_constr_main_types.c"
    {
#line 920 "transform_hlds.term_constr_main_types.c"
      transform_hlds__term_constr_main_types__succeeded = transform_hlds__term_constr_main_types____Unify____term_reason_0_0(((MR_Word) transform_hlds__term_constr_main_types__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_main_types__wrapper_arg_2));
    }
#line 923 "transform_hlds.term_constr_main_types.c"
    return transform_hlds__term_constr_main_types__succeeded;
#line 925 "transform_hlds.term_constr_main_types.c"
  }
#line 927 "transform_hlds.term_constr_main_types.c"
}

#line 930 "transform_hlds.term_constr_main_types.c"
static void MR_CALL 
transform_hlds__term_constr_main_types____Compare____term_reason_0_0_10001(
#line 933 "transform_hlds.term_constr_main_types.c"
  MR_Box * transform_hlds__term_constr_main_types__wrapper_arg_1,
#line 935 "transform_hlds.term_constr_main_types.c"
  MR_Box transform_hlds__term_constr_main_types__wrapper_arg_2,
#line 937 "transform_hlds.term_constr_main_types.c"
  MR_Box transform_hlds__term_constr_main_types__wrapper_arg_3)
#line 939 "transform_hlds.term_constr_main_types.c"
{
#line 941 "transform_hlds.term_constr_main_types.c"
  {
#line 943 "transform_hlds.term_constr_main_types.c"
    MR_Word transform_hlds__term_constr_main_types__conv0_HeadVar__1_1;

#line 946 "transform_hlds.term_constr_main_types.c"
    {
#line 948 "transform_hlds.term_constr_main_types.c"
      transform_hlds__term_constr_main_types____Compare____term_reason_0_0(&transform_hlds__term_constr_main_types__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_constr_main_types__wrapper_arg_2), ((MR_Word) transform_hlds__term_constr_main_types__wrapper_arg_3));
    }
#line 951 "transform_hlds.term_constr_main_types.c"
    *transform_hlds__term_constr_main_types__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_constr_main_types__conv0_HeadVar__1_1));
#line 953 "transform_hlds.term_constr_main_types.c"
  }
#line 955 "transform_hlds.term_constr_main_types.c"
}

#line 958 "transform_hlds.term_constr_main_types.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_main_types____Unify____termination2_info_0_0_10001(
#line 961 "transform_hlds.term_constr_main_types.c"
  MR_Box transform_hlds__term_constr_main_types__wrapper_arg_1,
#line 963 "transform_hlds.term_constr_main_types.c"
  MR_Box transform_hlds__term_constr_main_types__wrapper_arg_2)
#line 965 "transform_hlds.term_constr_main_types.c"
{
#line 967 "transform_hlds.term_constr_main_types.c"
  {
#line 969 "transform_hlds.term_constr_main_types.c"
    MR_bool transform_hlds__term_constr_main_types__succeeded;

#line 972 "transform_hlds.term_constr_main_types.c"
    {
#line 974 "transform_hlds.term_constr_main_types.c"
      transform_hlds__term_constr_main_types__succeeded = transform_hlds__term_constr_main_types____Unify____termination2_info_0_0(((MR_Word) transform_hlds__term_constr_main_types__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_main_types__wrapper_arg_2));
    }
#line 977 "transform_hlds.term_constr_main_types.c"
    return transform_hlds__term_constr_main_types__succeeded;
#line 979 "transform_hlds.term_constr_main_types.c"
  }
#line 981 "transform_hlds.term_constr_main_types.c"
}

#line 984 "transform_hlds.term_constr_main_types.c"
static void MR_CALL 
transform_hlds__term_constr_main_types____Compare____termination2_info_0_0_10001(
#line 987 "transform_hlds.term_constr_main_types.c"
  MR_Box * transform_hlds__term_constr_main_types__wrapper_arg_1,
#line 989 "transform_hlds.term_constr_main_types.c"
  MR_Box transform_hlds__term_constr_main_types__wrapper_arg_2,
#line 991 "transform_hlds.term_constr_main_types.c"
  MR_Box transform_hlds__term_constr_main_types__wrapper_arg_3)
#line 993 "transform_hlds.term_constr_main_types.c"
{
#line 995 "transform_hlds.term_constr_main_types.c"
  {
#line 997 "transform_hlds.term_constr_main_types.c"
    MR_Word transform_hlds__term_constr_main_types__conv0_HeadVar__1_1;

#line 1000 "transform_hlds.term_constr_main_types.c"
    {
#line 1002 "transform_hlds.term_constr_main_types.c"
      transform_hlds__term_constr_main_types____Compare____termination2_info_0_0(&transform_hlds__term_constr_main_types__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_constr_main_types__wrapper_arg_2), ((MR_Word) transform_hlds__term_constr_main_types__wrapper_arg_3));
    }
#line 1005 "transform_hlds.term_constr_main_types.c"
    *transform_hlds__term_constr_main_types__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_constr_main_types__conv0_HeadVar__1_1));
#line 1007 "transform_hlds.term_constr_main_types.c"
  }
#line 1009 "transform_hlds.term_constr_main_types.c"
}

#line 142 "term_constr_main_types.m"
void MR_CALL 
transform_hlds__term_constr_main_types____Compare____termination2_info_0_0(
#line 142 "term_constr_main_types.m"
  MR_Word * transform_hlds__term_constr_main_types__HeadVar__1_1,
#line 142 "term_constr_main_types.m"
  MR_Word transform_hlds__term_constr_main_types__HeadVar__2_2,
#line 142 "term_constr_main_types.m"
  MR_Word transform_hlds__term_constr_main_types__HeadVar__3_3)
#line 142 "term_constr_main_types.m"
{
#line 142 "term_constr_main_types.m"
  {
#line 142 "term_constr_main_types.m"
    MR_bool transform_hlds__term_constr_main_types__succeeded;
#line 142 "term_constr_main_types.m"
    MR_Integer transform_hlds__term_constr_main_types__CastX_30 = (MR_Integer) transform_hlds__term_constr_main_types__HeadVar__2_2;
#line 142 "term_constr_main_types.m"
    MR_Integer transform_hlds__term_constr_main_types__CastY_31 = (MR_Integer) transform_hlds__term_constr_main_types__HeadVar__3_3;

#line 142 "term_constr_main_types.m"
    transform_hlds__term_constr_main_types__succeeded = (transform_hlds__term_constr_main_types__CastX_30 == transform_hlds__term_constr_main_types__CastY_31);
#line 142 "term_constr_main_types.m"
    if (transform_hlds__term_constr_main_types__succeeded)
#line 1036 "transform_hlds.term_constr_main_types.c"
      *transform_hlds__term_constr_main_types__HeadVar__1_1 = (MR_Integer) 0;
#line 142 "term_constr_main_types.m"
    else
#line 142 "term_constr_main_types.m"
      {
#line 142 "term_constr_main_types.m"
        MR_Word transform_hlds__term_constr_main_types__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__2_2, (MR_Integer) 0)));
#line 142 "term_constr_main_types.m"
        MR_Word transform_hlds__term_constr_main_types__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__2_2, (MR_Integer) 1)));
#line 142 "term_constr_main_types.m"
        MR_Word transform_hlds__term_constr_main_types__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__2_2, (MR_Integer) 2)));
#line 142 "term_constr_main_types.m"
        MR_Word transform_hlds__term_constr_main_types__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__2_2, (MR_Integer) 3)));
#line 142 "term_constr_main_types.m"
        MR_Word transform_hlds__term_constr_main_types__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__2_2, (MR_Integer) 4)));
#line 142 "term_constr_main_types.m"
        MR_Word transform_hlds__term_constr_main_types__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__2_2, (MR_Integer) 5)));
#line 142 "term_constr_main_types.m"
        MR_Word transform_hlds__term_constr_main_types__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__2_2, (MR_Integer) 6)));
#line 142 "term_constr_main_types.m"
        MR_Word transform_hlds__term_constr_main_types__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__2_2, (MR_Integer) 7)));
#line 142 "term_constr_main_types.m"
        MR_Word transform_hlds__term_constr_main_types__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__2_2, (MR_Integer) 8)));
#line 142 "term_constr_main_types.m"
        MR_Word transform_hlds__term_constr_main_types__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__3_3, (MR_Integer) 0)));
#line 142 "term_constr_main_types.m"
        MR_Word transform_hlds__term_constr_main_types__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__3_3, (MR_Integer) 1)));
#line 142 "term_constr_main_types.m"
        MR_Word transform_hlds__term_constr_main_types__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__3_3, (MR_Integer) 2)));
#line 142 "term_constr_main_types.m"
        MR_Word transform_hlds__term_constr_main_types__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__3_3, (MR_Integer) 3)));
#line 142 "term_constr_main_types.m"
        MR_Word transform_hlds__term_constr_main_types__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__3_3, (MR_Integer) 4)));
#line 142 "term_constr_main_types.m"
        MR_Word transform_hlds__term_constr_main_types__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__3_3, (MR_Integer) 5)));
#line 142 "term_constr_main_types.m"
        MR_Word transform_hlds__term_constr_main_types__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__3_3, (MR_Integer) 6)));
#line 142 "term_constr_main_types.m"
        MR_Word transform_hlds__term_constr_main_types__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__3_3, (MR_Integer) 7)));
#line 142 "term_constr_main_types.m"
        MR_Word transform_hlds__term_constr_main_types__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__3_3, (MR_Integer) 8)));
#line 142 "term_constr_main_types.m"
        MR_Word transform_hlds__term_constr_main_types__V_22_22;

#line 142 "term_constr_main_types.m"
        {
#line 142 "term_constr_main_types.m"
          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_main_types_scalar_common_2[1], &transform_hlds__term_constr_main_types__V_22_22, ((MR_Box) (transform_hlds__term_constr_main_types__V_4_4)), ((MR_Box) (transform_hlds__term_constr_main_types__V_13_13)));
        }
#line 1086 "transform_hlds.term_constr_main_types.c"
        transform_hlds__term_constr_main_types__succeeded = (transform_hlds__term_constr_main_types__V_22_22 == (MR_Integer) 0);
#line 142 "term_constr_main_types.m"
        transform_hlds__term_constr_main_types__succeeded = !(transform_hlds__term_constr_main_types__succeeded);
#line 142 "term_constr_main_types.m"
        if (transform_hlds__term_constr_main_types__succeeded)
#line 142 "term_constr_main_types.m"
          *transform_hlds__term_constr_main_types__HeadVar__1_1 = transform_hlds__term_constr_main_types__V_22_22;
#line 142 "term_constr_main_types.m"
        else
#line 142 "term_constr_main_types.m"
          {
#line 142 "term_constr_main_types.m"
            MR_Word transform_hlds__term_constr_main_types__V_23_23;

#line 142 "term_constr_main_types.m"
            {
#line 142 "term_constr_main_types.m"
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_main_types_scalar_common_1[3], &transform_hlds__term_constr_main_types__V_23_23, ((MR_Box) (transform_hlds__term_constr_main_types__V_5_5)), ((MR_Box) (transform_hlds__term_constr_main_types__V_14_14)));
            }
#line 1106 "transform_hlds.term_constr_main_types.c"
            transform_hlds__term_constr_main_types__succeeded = (transform_hlds__term_constr_main_types__V_23_23 == (MR_Integer) 0);
#line 142 "term_constr_main_types.m"
            transform_hlds__term_constr_main_types__succeeded = !(transform_hlds__term_constr_main_types__succeeded);
#line 142 "term_constr_main_types.m"
            if (transform_hlds__term_constr_main_types__succeeded)
#line 142 "term_constr_main_types.m"
              *transform_hlds__term_constr_main_types__HeadVar__1_1 = transform_hlds__term_constr_main_types__V_23_23;
#line 142 "term_constr_main_types.m"
            else
#line 142 "term_constr_main_types.m"
              {
#line 142 "term_constr_main_types.m"
                MR_Word transform_hlds__term_constr_main_types__V_24_24;

#line 142 "term_constr_main_types.m"
                {
#line 142 "term_constr_main_types.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_main_types_scalar_common_1[5], &transform_hlds__term_constr_main_types__V_24_24, ((MR_Box) (transform_hlds__term_constr_main_types__V_6_6)), ((MR_Box) (transform_hlds__term_constr_main_types__V_15_15)));
                }
#line 1126 "transform_hlds.term_constr_main_types.c"
                transform_hlds__term_constr_main_types__succeeded = (transform_hlds__term_constr_main_types__V_24_24 == (MR_Integer) 0);
#line 142 "term_constr_main_types.m"
                transform_hlds__term_constr_main_types__succeeded = !(transform_hlds__term_constr_main_types__succeeded);
#line 142 "term_constr_main_types.m"
                if (transform_hlds__term_constr_main_types__succeeded)
#line 142 "term_constr_main_types.m"
                  *transform_hlds__term_constr_main_types__HeadVar__1_1 = transform_hlds__term_constr_main_types__V_24_24;
#line 142 "term_constr_main_types.m"
                else
#line 142 "term_constr_main_types.m"
                  {
#line 142 "term_constr_main_types.m"
                    MR_Word transform_hlds__term_constr_main_types__V_25_25;

#line 142 "term_constr_main_types.m"
                    {
#line 142 "term_constr_main_types.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_main_types_scalar_common_1[5], &transform_hlds__term_constr_main_types__V_25_25, ((MR_Box) (transform_hlds__term_constr_main_types__V_7_7)), ((MR_Box) (transform_hlds__term_constr_main_types__V_16_16)));
                    }
#line 1146 "transform_hlds.term_constr_main_types.c"
                    transform_hlds__term_constr_main_types__succeeded = (transform_hlds__term_constr_main_types__V_25_25 == (MR_Integer) 0);
#line 142 "term_constr_main_types.m"
                    transform_hlds__term_constr_main_types__succeeded = !(transform_hlds__term_constr_main_types__succeeded);
#line 142 "term_constr_main_types.m"
                    if (transform_hlds__term_constr_main_types__succeeded)
#line 142 "term_constr_main_types.m"
                      *transform_hlds__term_constr_main_types__HeadVar__1_1 = transform_hlds__term_constr_main_types__V_25_25;
#line 142 "term_constr_main_types.m"
                    else
#line 142 "term_constr_main_types.m"
                      {
#line 142 "term_constr_main_types.m"
                        MR_Word transform_hlds__term_constr_main_types__V_26_26;

#line 142 "term_constr_main_types.m"
                        {
#line 142 "term_constr_main_types.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_main_types_scalar_common_1[6], &transform_hlds__term_constr_main_types__V_26_26, ((MR_Box) (transform_hlds__term_constr_main_types__V_8_8)), ((MR_Box) (transform_hlds__term_constr_main_types__V_17_17)));
                        }
#line 1166 "transform_hlds.term_constr_main_types.c"
                        transform_hlds__term_constr_main_types__succeeded = (transform_hlds__term_constr_main_types__V_26_26 == (MR_Integer) 0);
#line 142 "term_constr_main_types.m"
                        transform_hlds__term_constr_main_types__succeeded = !(transform_hlds__term_constr_main_types__succeeded);
#line 142 "term_constr_main_types.m"
                        if (transform_hlds__term_constr_main_types__succeeded)
#line 142 "term_constr_main_types.m"
                          *transform_hlds__term_constr_main_types__HeadVar__1_1 = transform_hlds__term_constr_main_types__V_26_26;
#line 142 "term_constr_main_types.m"
                        else
#line 142 "term_constr_main_types.m"
                          {
#line 142 "term_constr_main_types.m"
                            MR_Word transform_hlds__term_constr_main_types__V_27_27;

#line 142 "term_constr_main_types.m"
                            {
#line 142 "term_constr_main_types.m"
                              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_main_types_scalar_common_1[6], &transform_hlds__term_constr_main_types__V_27_27, ((MR_Box) (transform_hlds__term_constr_main_types__V_9_9)), ((MR_Box) (transform_hlds__term_constr_main_types__V_18_18)));
                            }
#line 1186 "transform_hlds.term_constr_main_types.c"
                            transform_hlds__term_constr_main_types__succeeded = (transform_hlds__term_constr_main_types__V_27_27 == (MR_Integer) 0);
#line 142 "term_constr_main_types.m"
                            transform_hlds__term_constr_main_types__succeeded = !(transform_hlds__term_constr_main_types__succeeded);
#line 142 "term_constr_main_types.m"
                            if (transform_hlds__term_constr_main_types__succeeded)
#line 142 "term_constr_main_types.m"
                              *transform_hlds__term_constr_main_types__HeadVar__1_1 = transform_hlds__term_constr_main_types__V_27_27;
#line 142 "term_constr_main_types.m"
                            else
#line 142 "term_constr_main_types.m"
                              {
#line 142 "term_constr_main_types.m"
                                MR_Word transform_hlds__term_constr_main_types__V_28_28;

#line 142 "term_constr_main_types.m"
                                {
#line 142 "term_constr_main_types.m"
                                  mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_main_types_scalar_common_1[7], &transform_hlds__term_constr_main_types__V_28_28, ((MR_Box) (transform_hlds__term_constr_main_types__V_10_10)), ((MR_Box) (transform_hlds__term_constr_main_types__V_19_19)));
                                }
#line 1206 "transform_hlds.term_constr_main_types.c"
                                transform_hlds__term_constr_main_types__succeeded = (transform_hlds__term_constr_main_types__V_28_28 == (MR_Integer) 0);
#line 142 "term_constr_main_types.m"
                                transform_hlds__term_constr_main_types__succeeded = !(transform_hlds__term_constr_main_types__succeeded);
#line 142 "term_constr_main_types.m"
                                if (transform_hlds__term_constr_main_types__succeeded)
#line 142 "term_constr_main_types.m"
                                  *transform_hlds__term_constr_main_types__HeadVar__1_1 = transform_hlds__term_constr_main_types__V_28_28;
#line 142 "term_constr_main_types.m"
                                else
#line 142 "term_constr_main_types.m"
                                  {
#line 142 "term_constr_main_types.m"
                                    MR_Word transform_hlds__term_constr_main_types__V_29_29;

#line 142 "term_constr_main_types.m"
                                    {
#line 142 "term_constr_main_types.m"
                                      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_main_types_scalar_common_1[8], &transform_hlds__term_constr_main_types__V_29_29, ((MR_Box) (transform_hlds__term_constr_main_types__V_11_11)), ((MR_Box) (transform_hlds__term_constr_main_types__V_20_20)));
                                    }
#line 1226 "transform_hlds.term_constr_main_types.c"
                                    transform_hlds__term_constr_main_types__succeeded = (transform_hlds__term_constr_main_types__V_29_29 == (MR_Integer) 0);
#line 142 "term_constr_main_types.m"
                                    transform_hlds__term_constr_main_types__succeeded = !(transform_hlds__term_constr_main_types__succeeded);
#line 142 "term_constr_main_types.m"
                                    if (transform_hlds__term_constr_main_types__succeeded)
#line 142 "term_constr_main_types.m"
                                      *transform_hlds__term_constr_main_types__HeadVar__1_1 = transform_hlds__term_constr_main_types__V_29_29;
#line 142 "term_constr_main_types.m"
                                    else
#line 142 "term_constr_main_types.m"
                                      {
#line 142 "term_constr_main_types.m"
                                        {
#line 142 "term_constr_main_types.m"
                                          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_main_types_scalar_common_1[9], transform_hlds__term_constr_main_types__HeadVar__1_1, ((MR_Box) (transform_hlds__term_constr_main_types__V_12_12)), ((MR_Box) (transform_hlds__term_constr_main_types__V_21_21)));
#line 142 "term_constr_main_types.m"
                                          return;
                                        }
#line 142 "term_constr_main_types.m"
                                      }
#line 142 "term_constr_main_types.m"
                                  }
#line 142 "term_constr_main_types.m"
                              }
#line 142 "term_constr_main_types.m"
                          }
#line 142 "term_constr_main_types.m"
                      }
#line 142 "term_constr_main_types.m"
                  }
#line 142 "term_constr_main_types.m"
              }
#line 142 "term_constr_main_types.m"
          }
#line 142 "term_constr_main_types.m"
      }
#line 142 "term_constr_main_types.m"
  }
#line 142 "term_constr_main_types.m"
}

#line 142 "term_constr_main_types.m"
MR_bool MR_CALL 
transform_hlds__term_constr_main_types____Unify____termination2_info_0_0(
#line 142 "term_constr_main_types.m"
  MR_Word transform_hlds__term_constr_main_types__HeadVar__1_1,
#line 142 "term_constr_main_types.m"
  MR_Word transform_hlds__term_constr_main_types__HeadVar__2_2)
#line 142 "term_constr_main_types.m"
{
#line 142 "term_constr_main_types.m"
  {
#line 142 "term_constr_main_types.m"
    MR_bool transform_hlds__term_constr_main_types__succeeded;
#line 142 "term_constr_main_types.m"
    MR_Integer transform_hlds__term_constr_main_types__CastX_21 = (MR_Integer) transform_hlds__term_constr_main_types__HeadVar__1_1;
#line 142 "term_constr_main_types.m"
    MR_Integer transform_hlds__term_constr_main_types__CastY_22 = (MR_Integer) transform_hlds__term_constr_main_types__HeadVar__2_2;

#line 142 "term_constr_main_types.m"
    transform_hlds__term_constr_main_types__succeeded = (transform_hlds__term_constr_main_types__CastX_21 == transform_hlds__term_constr_main_types__CastY_22);
#line 142 "term_constr_main_types.m"
    if (transform_hlds__term_constr_main_types__succeeded)
#line 142 "term_constr_main_types.m"
      transform_hlds__term_constr_main_types__succeeded = MR_TRUE;
#line 142 "term_constr_main_types.m"
    else
#line 142 "term_constr_main_types.m"
      {
#line 142 "term_constr_main_types.m"
        MR_Word transform_hlds__term_constr_main_types__TypeInfo_24_24;
#line 142 "term_constr_main_types.m"
        MR_Word transform_hlds__term_constr_main_types__TypeInfo_25_25;
#line 142 "term_constr_main_types.m"
        MR_Word transform_hlds__term_constr_main_types__TypeInfo_26_26;
#line 142 "term_constr_main_types.m"
        MR_Word transform_hlds__term_constr_main_types__TypeInfo_27_27;
#line 142 "term_constr_main_types.m"
        MR_Word transform_hlds__term_constr_main_types__TypeInfo_28_28;
#line 142 "term_constr_main_types.m"
        MR_Word transform_hlds__term_constr_main_types__TypeInfo_29_29;
#line 142 "term_constr_main_types.m"
        MR_Word transform_hlds__term_constr_main_types__TypeInfo_30_30;
#line 142 "term_constr_main_types.m"
        MR_Word transform_hlds__term_constr_main_types__TypeInfo_31_31;
#line 142 "term_constr_main_types.m"
        MR_Word transform_hlds__term_constr_main_types__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 0)));
#line 142 "term_constr_main_types.m"
        MR_Word transform_hlds__term_constr_main_types__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 1)));
#line 142 "term_constr_main_types.m"
        MR_Word transform_hlds__term_constr_main_types__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 2)));
#line 142 "term_constr_main_types.m"
        MR_Word transform_hlds__term_constr_main_types__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 3)));
#line 142 "term_constr_main_types.m"
        MR_Word transform_hlds__term_constr_main_types__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 4)));
#line 142 "term_constr_main_types.m"
        MR_Word transform_hlds__term_constr_main_types__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 5)));
#line 142 "term_constr_main_types.m"
        MR_Word transform_hlds__term_constr_main_types__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 6)));
#line 142 "term_constr_main_types.m"
        MR_Word transform_hlds__term_constr_main_types__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 7)));
#line 142 "term_constr_main_types.m"
        MR_Word transform_hlds__term_constr_main_types__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, (MR_Integer) 8)));
#line 142 "term_constr_main_types.m"
        MR_Word transform_hlds__term_constr_main_types__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__2_2, (MR_Integer) 0)));
#line 142 "term_constr_main_types.m"
        MR_Word transform_hlds__term_constr_main_types__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__2_2, (MR_Integer) 1)));
#line 142 "term_constr_main_types.m"
        MR_Word transform_hlds__term_constr_main_types__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__2_2, (MR_Integer) 2)));
#line 142 "term_constr_main_types.m"
        MR_Word transform_hlds__term_constr_main_types__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__2_2, (MR_Integer) 3)));
#line 142 "term_constr_main_types.m"
        MR_Word transform_hlds__term_constr_main_types__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__2_2, (MR_Integer) 4)));
#line 142 "term_constr_main_types.m"
        MR_Word transform_hlds__term_constr_main_types__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__2_2, (MR_Integer) 5)));
#line 142 "term_constr_main_types.m"
        MR_Word transform_hlds__term_constr_main_types__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__2_2, (MR_Integer) 6)));
#line 142 "term_constr_main_types.m"
        MR_Word transform_hlds__term_constr_main_types__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__2_2, (MR_Integer) 7)));
#line 142 "term_constr_main_types.m"
        MR_Word transform_hlds__term_constr_main_types__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__2_2, (MR_Integer) 8)));

#line 1349 "transform_hlds.term_constr_main_types.c"
        {
#line 1351 "transform_hlds.term_constr_main_types.c"
          transform_hlds__term_constr_main_types__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__term_constr_main_types_scalar_common_2[1], ((MR_Box) (transform_hlds__term_constr_main_types__V_3_3)), ((MR_Box) (transform_hlds__term_constr_main_types__V_12_12)));
        }
#line 142 "term_constr_main_types.m"
        if (transform_hlds__term_constr_main_types__succeeded)
#line 142 "term_constr_main_types.m"
          {
#line 1358 "transform_hlds.term_constr_main_types.c"
            transform_hlds__term_constr_main_types__TypeInfo_24_24 = (MR_Word) &transform_hlds__term_constr_main_types_scalar_common_1[3];
#line 1360 "transform_hlds.term_constr_main_types.c"
            {
#line 1362 "transform_hlds.term_constr_main_types.c"
              transform_hlds__term_constr_main_types__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_main_types__TypeInfo_24_24, ((MR_Box) (transform_hlds__term_constr_main_types__V_4_4)), ((MR_Box) (transform_hlds__term_constr_main_types__V_13_13)));
            }
#line 142 "term_constr_main_types.m"
            if (transform_hlds__term_constr_main_types__succeeded)
#line 142 "term_constr_main_types.m"
              {
#line 1369 "transform_hlds.term_constr_main_types.c"
                transform_hlds__term_constr_main_types__TypeInfo_25_25 = (MR_Word) &transform_hlds__term_constr_main_types_scalar_common_1[5];
#line 1371 "transform_hlds.term_constr_main_types.c"
                {
#line 1373 "transform_hlds.term_constr_main_types.c"
                  transform_hlds__term_constr_main_types__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_main_types__TypeInfo_25_25, ((MR_Box) (transform_hlds__term_constr_main_types__V_5_5)), ((MR_Box) (transform_hlds__term_constr_main_types__V_14_14)));
                }
#line 142 "term_constr_main_types.m"
                if (transform_hlds__term_constr_main_types__succeeded)
#line 142 "term_constr_main_types.m"
                  {
#line 1380 "transform_hlds.term_constr_main_types.c"
                    transform_hlds__term_constr_main_types__TypeInfo_26_26 = (MR_Word) &transform_hlds__term_constr_main_types_scalar_common_1[5];
#line 1382 "transform_hlds.term_constr_main_types.c"
                    {
#line 1384 "transform_hlds.term_constr_main_types.c"
                      transform_hlds__term_constr_main_types__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_main_types__TypeInfo_26_26, ((MR_Box) (transform_hlds__term_constr_main_types__V_6_6)), ((MR_Box) (transform_hlds__term_constr_main_types__V_15_15)));
                    }
#line 142 "term_constr_main_types.m"
                    if (transform_hlds__term_constr_main_types__succeeded)
#line 142 "term_constr_main_types.m"
                      {
#line 1391 "transform_hlds.term_constr_main_types.c"
                        transform_hlds__term_constr_main_types__TypeInfo_27_27 = (MR_Word) &transform_hlds__term_constr_main_types_scalar_common_1[6];
#line 1393 "transform_hlds.term_constr_main_types.c"
                        {
#line 1395 "transform_hlds.term_constr_main_types.c"
                          transform_hlds__term_constr_main_types__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_main_types__TypeInfo_27_27, ((MR_Box) (transform_hlds__term_constr_main_types__V_7_7)), ((MR_Box) (transform_hlds__term_constr_main_types__V_16_16)));
                        }
#line 142 "term_constr_main_types.m"
                        if (transform_hlds__term_constr_main_types__succeeded)
#line 142 "term_constr_main_types.m"
                          {
#line 1402 "transform_hlds.term_constr_main_types.c"
                            transform_hlds__term_constr_main_types__TypeInfo_28_28 = (MR_Word) &transform_hlds__term_constr_main_types_scalar_common_1[6];
#line 1404 "transform_hlds.term_constr_main_types.c"
                            {
#line 1406 "transform_hlds.term_constr_main_types.c"
                              transform_hlds__term_constr_main_types__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_main_types__TypeInfo_28_28, ((MR_Box) (transform_hlds__term_constr_main_types__V_8_8)), ((MR_Box) (transform_hlds__term_constr_main_types__V_17_17)));
                            }
#line 142 "term_constr_main_types.m"
                            if (transform_hlds__term_constr_main_types__succeeded)
#line 142 "term_constr_main_types.m"
                              {
#line 1413 "transform_hlds.term_constr_main_types.c"
                                transform_hlds__term_constr_main_types__TypeInfo_29_29 = (MR_Word) &transform_hlds__term_constr_main_types_scalar_common_1[7];
#line 1415 "transform_hlds.term_constr_main_types.c"
                                {
#line 1417 "transform_hlds.term_constr_main_types.c"
                                  transform_hlds__term_constr_main_types__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_main_types__TypeInfo_29_29, ((MR_Box) (transform_hlds__term_constr_main_types__V_9_9)), ((MR_Box) (transform_hlds__term_constr_main_types__V_18_18)));
                                }
#line 142 "term_constr_main_types.m"
                                if (transform_hlds__term_constr_main_types__succeeded)
#line 142 "term_constr_main_types.m"
                                  {
#line 1424 "transform_hlds.term_constr_main_types.c"
                                    transform_hlds__term_constr_main_types__TypeInfo_30_30 = (MR_Word) &transform_hlds__term_constr_main_types_scalar_common_1[8];
#line 1426 "transform_hlds.term_constr_main_types.c"
                                    {
#line 1428 "transform_hlds.term_constr_main_types.c"
                                      transform_hlds__term_constr_main_types__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_main_types__TypeInfo_30_30, ((MR_Box) (transform_hlds__term_constr_main_types__V_10_10)), ((MR_Box) (transform_hlds__term_constr_main_types__V_19_19)));
                                    }
#line 142 "term_constr_main_types.m"
                                    if (transform_hlds__term_constr_main_types__succeeded)
#line 142 "term_constr_main_types.m"
                                      {
#line 1435 "transform_hlds.term_constr_main_types.c"
                                        transform_hlds__term_constr_main_types__TypeInfo_31_31 = (MR_Word) &transform_hlds__term_constr_main_types_scalar_common_1[9];
#line 1437 "transform_hlds.term_constr_main_types.c"
                                        {
#line 1439 "transform_hlds.term_constr_main_types.c"
                                          return transform_hlds__term_constr_main_types__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_main_types__TypeInfo_31_31, ((MR_Box) (transform_hlds__term_constr_main_types__V_11_11)), ((MR_Box) (transform_hlds__term_constr_main_types__V_20_20)));
                                        }
#line 142 "term_constr_main_types.m"
                                      }
#line 142 "term_constr_main_types.m"
                                  }
#line 142 "term_constr_main_types.m"
                              }
#line 142 "term_constr_main_types.m"
                          }
#line 142 "term_constr_main_types.m"
                      }
#line 142 "term_constr_main_types.m"
                  }
#line 142 "term_constr_main_types.m"
              }
#line 142 "term_constr_main_types.m"
          }
#line 142 "term_constr_main_types.m"
      }
#line 142 "term_constr_main_types.m"
    return transform_hlds__term_constr_main_types__succeeded;
#line 142 "term_constr_main_types.m"
  }
#line 142 "term_constr_main_types.m"
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
#line 1508 "transform_hlds.term_constr_main_types.c"
  {
#line 1510 "transform_hlds.term_constr_main_types.c"
    MR_bool transform_hlds__term_constr_main_types__succeeded = (transform_hlds__term_constr_main_types__HeadVar__2_1 == transform_hlds__term_constr_main_types__HeadVar__2_2);

#line 1513 "transform_hlds.term_constr_main_types.c"
    return transform_hlds__term_constr_main_types__succeeded;
#line 1515 "transform_hlds.term_constr_main_types.c"
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
#line 1561 "transform_hlds.term_constr_main_types.c"
  {
#line 1563 "transform_hlds.term_constr_main_types.c"
    MR_bool transform_hlds__term_constr_main_types__succeeded = (transform_hlds__term_constr_main_types__HeadVar__2_1 == transform_hlds__term_constr_main_types__HeadVar__2_2);

#line 1566 "transform_hlds.term_constr_main_types.c"
    return transform_hlds__term_constr_main_types__succeeded;
#line 1568 "transform_hlds.term_constr_main_types.c"
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
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_main_types_scalar_common_2[0], transform_hlds__term_constr_main_types__HeadVar__1_1, ((MR_Box) (transform_hlds__term_constr_main_types__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__term_constr_main_types__Cast_HeadVar2_5)));
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
      return transform_hlds__term_constr_main_types__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__term_constr_main_types_scalar_common_2[0], ((MR_Box) (transform_hlds__term_constr_main_types__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__term_constr_main_types__Cast_HeadVar2_4)));
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

#line 122 "term_constr_main_types.m"
void MR_CALL 
transform_hlds__term_constr_main_types__term2_info_set_head_vars_3_p_0(
#line 122 "term_constr_main_types.m"
  MR_Word transform_hlds__term_constr_main_types__X_4,
#line 122 "term_constr_main_types.m"
  MR_Word transform_hlds__term_constr_main_types__STATE_VARIABLE_Term2Info_0_6,
#line 122 "term_constr_main_types.m"
  MR_Word * transform_hlds__term_constr_main_types__STATE_VARIABLE_Term2Info_7)
#line 122 "term_constr_main_types.m"
{
#line 221 "term_constr_main_types.m"
  {
#line 221 "term_constr_main_types.m"
    MR_bool transform_hlds__term_constr_main_types__succeeded;
#line 221 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__STATE_VARIABLE_Term2Info_0_6, (MR_Integer) 0)));
#line 221 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__STATE_VARIABLE_Term2Info_0_6, (MR_Integer) 2)));
#line 221 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__STATE_VARIABLE_Term2Info_0_6, (MR_Integer) 3)));
#line 221 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__STATE_VARIABLE_Term2Info_0_6, (MR_Integer) 4)));
#line 221 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__STATE_VARIABLE_Term2Info_0_6, (MR_Integer) 5)));
#line 221 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__STATE_VARIABLE_Term2Info_0_6, (MR_Integer) 6)));
#line 221 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__STATE_VARIABLE_Term2Info_0_6, (MR_Integer) 7)));
#line 221 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__STATE_VARIABLE_Term2Info_0_6, (MR_Integer) 8)));
#line 221 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__STATE_VARIABLE_Term2Info_0_6, (MR_Integer) 1)));

#line 221 "term_constr_main_types.m"
    {
#line 221 "term_constr_main_types.m"
      MR_Word base;
#line 221 "term_constr_main_types.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 221 "term_constr_main_types.m"
      *transform_hlds__term_constr_main_types__STATE_VARIABLE_Term2Info_7 = base;
#line 221 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__term_constr_main_types__V_9_9));
#line 221 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__term_constr_main_types__X_4));
#line 221 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__term_constr_main_types__V_11_11));
#line 221 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__term_constr_main_types__V_12_12));
#line 221 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__term_constr_main_types__V_13_13));
#line 221 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__term_constr_main_types__V_14_14));
#line 221 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__term_constr_main_types__V_15_15));
#line 221 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__term_constr_main_types__V_16_16));
#line 221 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__term_constr_main_types__V_17_17));
#line 221 "term_constr_main_types.m"
    }
#line 221 "term_constr_main_types.m"
  }
#line 122 "term_constr_main_types.m"
}

#line 120 "term_constr_main_types.m"
void MR_CALL 
transform_hlds__term_constr_main_types__term2_info_set_abstract_rep_3_p_0(
#line 120 "term_constr_main_types.m"
  MR_Word transform_hlds__term_constr_main_types__X_4,
#line 120 "term_constr_main_types.m"
  MR_Word transform_hlds__term_constr_main_types__STATE_VARIABLE_Term2Info_0_6,
#line 120 "term_constr_main_types.m"
  MR_Word * transform_hlds__term_constr_main_types__STATE_VARIABLE_Term2Info_7)
#line 120 "term_constr_main_types.m"
{
#line 219 "term_constr_main_types.m"
  {
#line 219 "term_constr_main_types.m"
    MR_bool transform_hlds__term_constr_main_types__succeeded;
#line 219 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__STATE_VARIABLE_Term2Info_0_6, (MR_Integer) 0)));
#line 219 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__STATE_VARIABLE_Term2Info_0_6, (MR_Integer) 1)));
#line 219 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__STATE_VARIABLE_Term2Info_0_6, (MR_Integer) 2)));
#line 219 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__STATE_VARIABLE_Term2Info_0_6, (MR_Integer) 3)));
#line 219 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__STATE_VARIABLE_Term2Info_0_6, (MR_Integer) 4)));
#line 219 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__STATE_VARIABLE_Term2Info_0_6, (MR_Integer) 5)));
#line 219 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__STATE_VARIABLE_Term2Info_0_6, (MR_Integer) 6)));
#line 219 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__STATE_VARIABLE_Term2Info_0_6, (MR_Integer) 7)));
#line 219 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__STATE_VARIABLE_Term2Info_0_6, (MR_Integer) 8)));

#line 219 "term_constr_main_types.m"
    {
#line 219 "term_constr_main_types.m"
      MR_Word base;
#line 219 "term_constr_main_types.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 219 "term_constr_main_types.m"
      *transform_hlds__term_constr_main_types__STATE_VARIABLE_Term2Info_7 = base;
#line 219 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__term_constr_main_types__V_9_9));
#line 219 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__term_constr_main_types__V_10_10));
#line 219 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__term_constr_main_types__V_11_11));
#line 219 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__term_constr_main_types__V_12_12));
#line 219 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__term_constr_main_types__V_13_13));
#line 219 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__term_constr_main_types__V_14_14));
#line 219 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__term_constr_main_types__V_15_15));
#line 219 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__term_constr_main_types__V_16_16));
#line 219 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__term_constr_main_types__X_4));
#line 219 "term_constr_main_types.m"
    }
#line 219 "term_constr_main_types.m"
  }
#line 120 "term_constr_main_types.m"
}

#line 118 "term_constr_main_types.m"
void MR_CALL 
transform_hlds__term_constr_main_types__term2_info_set_intermod_status_3_p_0(
#line 118 "term_constr_main_types.m"
  MR_Word transform_hlds__term_constr_main_types__X_4,
#line 118 "term_constr_main_types.m"
  MR_Word transform_hlds__term_constr_main_types__STATE_VARIABLE_Term2Info_0_6,
#line 118 "term_constr_main_types.m"
  MR_Word * transform_hlds__term_constr_main_types__STATE_VARIABLE_Term2Info_7)
#line 118 "term_constr_main_types.m"
{
#line 217 "term_constr_main_types.m"
  {
#line 217 "term_constr_main_types.m"
    MR_bool transform_hlds__term_constr_main_types__succeeded;
#line 217 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__STATE_VARIABLE_Term2Info_0_6, (MR_Integer) 0)));
#line 217 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__STATE_VARIABLE_Term2Info_0_6, (MR_Integer) 1)));
#line 217 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__STATE_VARIABLE_Term2Info_0_6, (MR_Integer) 2)));
#line 217 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__STATE_VARIABLE_Term2Info_0_6, (MR_Integer) 3)));
#line 217 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__STATE_VARIABLE_Term2Info_0_6, (MR_Integer) 4)));
#line 217 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__STATE_VARIABLE_Term2Info_0_6, (MR_Integer) 5)));
#line 217 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__STATE_VARIABLE_Term2Info_0_6, (MR_Integer) 6)));
#line 217 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__STATE_VARIABLE_Term2Info_0_6, (MR_Integer) 8)));
#line 217 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__STATE_VARIABLE_Term2Info_0_6, (MR_Integer) 7)));

#line 217 "term_constr_main_types.m"
    {
#line 217 "term_constr_main_types.m"
      MR_Word base;
#line 217 "term_constr_main_types.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 217 "term_constr_main_types.m"
      *transform_hlds__term_constr_main_types__STATE_VARIABLE_Term2Info_7 = base;
#line 217 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__term_constr_main_types__V_9_9));
#line 217 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__term_constr_main_types__V_10_10));
#line 217 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__term_constr_main_types__V_11_11));
#line 217 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__term_constr_main_types__V_12_12));
#line 217 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__term_constr_main_types__V_13_13));
#line 217 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__term_constr_main_types__V_14_14));
#line 217 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__term_constr_main_types__V_15_15));
#line 217 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__term_constr_main_types__X_4));
#line 217 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__term_constr_main_types__V_17_17));
#line 217 "term_constr_main_types.m"
    }
#line 217 "term_constr_main_types.m"
  }
#line 118 "term_constr_main_types.m"
}

#line 116 "term_constr_main_types.m"
void MR_CALL 
transform_hlds__term_constr_main_types__term2_info_set_term_status_3_p_0(
#line 116 "term_constr_main_types.m"
  MR_Word transform_hlds__term_constr_main_types__X_4,
#line 116 "term_constr_main_types.m"
  MR_Word transform_hlds__term_constr_main_types__STATE_VARIABLE_Term2Info_0_6,
#line 116 "term_constr_main_types.m"
  MR_Word * transform_hlds__term_constr_main_types__STATE_VARIABLE_Term2Info_7)
#line 116 "term_constr_main_types.m"
{
#line 215 "term_constr_main_types.m"
  {
#line 215 "term_constr_main_types.m"
    MR_bool transform_hlds__term_constr_main_types__succeeded;
#line 215 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__STATE_VARIABLE_Term2Info_0_6, (MR_Integer) 0)));
#line 215 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__STATE_VARIABLE_Term2Info_0_6, (MR_Integer) 1)));
#line 215 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__STATE_VARIABLE_Term2Info_0_6, (MR_Integer) 2)));
#line 215 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__STATE_VARIABLE_Term2Info_0_6, (MR_Integer) 3)));
#line 215 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__STATE_VARIABLE_Term2Info_0_6, (MR_Integer) 4)));
#line 215 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__STATE_VARIABLE_Term2Info_0_6, (MR_Integer) 5)));
#line 215 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__STATE_VARIABLE_Term2Info_0_6, (MR_Integer) 7)));
#line 215 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__STATE_VARIABLE_Term2Info_0_6, (MR_Integer) 8)));
#line 215 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__STATE_VARIABLE_Term2Info_0_6, (MR_Integer) 6)));

#line 215 "term_constr_main_types.m"
    {
#line 215 "term_constr_main_types.m"
      MR_Word base;
#line 215 "term_constr_main_types.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 215 "term_constr_main_types.m"
      *transform_hlds__term_constr_main_types__STATE_VARIABLE_Term2Info_7 = base;
#line 215 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__term_constr_main_types__V_9_9));
#line 215 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__term_constr_main_types__V_10_10));
#line 215 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__term_constr_main_types__V_11_11));
#line 215 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__term_constr_main_types__V_12_12));
#line 215 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__term_constr_main_types__V_13_13));
#line 215 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__term_constr_main_types__V_14_14));
#line 215 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__term_constr_main_types__X_4));
#line 215 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__term_constr_main_types__V_16_16));
#line 215 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__term_constr_main_types__V_17_17));
#line 215 "term_constr_main_types.m"
    }
#line 215 "term_constr_main_types.m"
  }
#line 116 "term_constr_main_types.m"
}

#line 114 "term_constr_main_types.m"
void MR_CALL 
transform_hlds__term_constr_main_types__term2_info_set_failure_constrs_3_p_0(
#line 114 "term_constr_main_types.m"
  MR_Word transform_hlds__term_constr_main_types__X_4,
#line 114 "term_constr_main_types.m"
  MR_Word transform_hlds__term_constr_main_types__STATE_VARIABLE_Term2Info_0_6,
#line 114 "term_constr_main_types.m"
  MR_Word * transform_hlds__term_constr_main_types__STATE_VARIABLE_Term2Info_7)
#line 114 "term_constr_main_types.m"
{
#line 213 "term_constr_main_types.m"
  {
#line 213 "term_constr_main_types.m"
    MR_bool transform_hlds__term_constr_main_types__succeeded;
#line 213 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__STATE_VARIABLE_Term2Info_0_6, (MR_Integer) 0)));
#line 213 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__STATE_VARIABLE_Term2Info_0_6, (MR_Integer) 1)));
#line 213 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__STATE_VARIABLE_Term2Info_0_6, (MR_Integer) 2)));
#line 213 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__STATE_VARIABLE_Term2Info_0_6, (MR_Integer) 3)));
#line 213 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__STATE_VARIABLE_Term2Info_0_6, (MR_Integer) 4)));
#line 213 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__STATE_VARIABLE_Term2Info_0_6, (MR_Integer) 6)));
#line 213 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__STATE_VARIABLE_Term2Info_0_6, (MR_Integer) 7)));
#line 213 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__STATE_VARIABLE_Term2Info_0_6, (MR_Integer) 8)));
#line 213 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__STATE_VARIABLE_Term2Info_0_6, (MR_Integer) 5)));

#line 213 "term_constr_main_types.m"
    {
#line 213 "term_constr_main_types.m"
      MR_Word base;
#line 213 "term_constr_main_types.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 213 "term_constr_main_types.m"
      *transform_hlds__term_constr_main_types__STATE_VARIABLE_Term2Info_7 = base;
#line 213 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__term_constr_main_types__V_9_9));
#line 213 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__term_constr_main_types__V_10_10));
#line 213 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__term_constr_main_types__V_11_11));
#line 213 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__term_constr_main_types__V_12_12));
#line 213 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__term_constr_main_types__V_13_13));
#line 213 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__term_constr_main_types__X_4));
#line 213 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__term_constr_main_types__V_15_15));
#line 213 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__term_constr_main_types__V_16_16));
#line 213 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__term_constr_main_types__V_17_17));
#line 213 "term_constr_main_types.m"
    }
#line 213 "term_constr_main_types.m"
  }
#line 114 "term_constr_main_types.m"
}

#line 112 "term_constr_main_types.m"
void MR_CALL 
transform_hlds__term_constr_main_types__term2_info_set_success_constrs_3_p_0(
#line 112 "term_constr_main_types.m"
  MR_Word transform_hlds__term_constr_main_types__X_4,
#line 112 "term_constr_main_types.m"
  MR_Word transform_hlds__term_constr_main_types__STATE_VARIABLE_Term2Info_0_6,
#line 112 "term_constr_main_types.m"
  MR_Word * transform_hlds__term_constr_main_types__STATE_VARIABLE_Term2Info_7)
#line 112 "term_constr_main_types.m"
{
#line 211 "term_constr_main_types.m"
  {
#line 211 "term_constr_main_types.m"
    MR_bool transform_hlds__term_constr_main_types__succeeded;
#line 211 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__STATE_VARIABLE_Term2Info_0_6, (MR_Integer) 0)));
#line 211 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__STATE_VARIABLE_Term2Info_0_6, (MR_Integer) 1)));
#line 211 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__STATE_VARIABLE_Term2Info_0_6, (MR_Integer) 2)));
#line 211 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__STATE_VARIABLE_Term2Info_0_6, (MR_Integer) 3)));
#line 211 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__STATE_VARIABLE_Term2Info_0_6, (MR_Integer) 5)));
#line 211 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__STATE_VARIABLE_Term2Info_0_6, (MR_Integer) 6)));
#line 211 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__STATE_VARIABLE_Term2Info_0_6, (MR_Integer) 7)));
#line 211 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__STATE_VARIABLE_Term2Info_0_6, (MR_Integer) 8)));
#line 211 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__STATE_VARIABLE_Term2Info_0_6, (MR_Integer) 4)));

#line 211 "term_constr_main_types.m"
    {
#line 211 "term_constr_main_types.m"
      MR_Word base;
#line 211 "term_constr_main_types.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 211 "term_constr_main_types.m"
      *transform_hlds__term_constr_main_types__STATE_VARIABLE_Term2Info_7 = base;
#line 211 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__term_constr_main_types__V_9_9));
#line 211 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__term_constr_main_types__V_10_10));
#line 211 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__term_constr_main_types__V_11_11));
#line 211 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__term_constr_main_types__V_12_12));
#line 211 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__term_constr_main_types__X_4));
#line 211 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__term_constr_main_types__V_14_14));
#line 211 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__term_constr_main_types__V_15_15));
#line 211 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__term_constr_main_types__V_16_16));
#line 211 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__term_constr_main_types__V_17_17));
#line 211 "term_constr_main_types.m"
    }
#line 211 "term_constr_main_types.m"
  }
#line 112 "term_constr_main_types.m"
}

#line 110 "term_constr_main_types.m"
void MR_CALL 
transform_hlds__term_constr_main_types__term2_info_set_import_failure_3_p_0(
#line 110 "term_constr_main_types.m"
  MR_Word transform_hlds__term_constr_main_types__X_4,
#line 110 "term_constr_main_types.m"
  MR_Word transform_hlds__term_constr_main_types__STATE_VARIABLE_Term2Info_0_6,
#line 110 "term_constr_main_types.m"
  MR_Word * transform_hlds__term_constr_main_types__STATE_VARIABLE_Term2Info_7)
#line 110 "term_constr_main_types.m"
{
#line 209 "term_constr_main_types.m"
  {
#line 209 "term_constr_main_types.m"
    MR_bool transform_hlds__term_constr_main_types__succeeded;
#line 209 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__STATE_VARIABLE_Term2Info_0_6, (MR_Integer) 0)));
#line 209 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__STATE_VARIABLE_Term2Info_0_6, (MR_Integer) 1)));
#line 209 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__STATE_VARIABLE_Term2Info_0_6, (MR_Integer) 2)));
#line 209 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__STATE_VARIABLE_Term2Info_0_6, (MR_Integer) 4)));
#line 209 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__STATE_VARIABLE_Term2Info_0_6, (MR_Integer) 5)));
#line 209 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__STATE_VARIABLE_Term2Info_0_6, (MR_Integer) 6)));
#line 209 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__STATE_VARIABLE_Term2Info_0_6, (MR_Integer) 7)));
#line 209 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__STATE_VARIABLE_Term2Info_0_6, (MR_Integer) 8)));
#line 209 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__STATE_VARIABLE_Term2Info_0_6, (MR_Integer) 3)));

#line 209 "term_constr_main_types.m"
    {
#line 209 "term_constr_main_types.m"
      MR_Word base;
#line 209 "term_constr_main_types.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 209 "term_constr_main_types.m"
      *transform_hlds__term_constr_main_types__STATE_VARIABLE_Term2Info_7 = base;
#line 209 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__term_constr_main_types__V_9_9));
#line 209 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__term_constr_main_types__V_10_10));
#line 209 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__term_constr_main_types__V_11_11));
#line 209 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__term_constr_main_types__X_4));
#line 209 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__term_constr_main_types__V_13_13));
#line 209 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__term_constr_main_types__V_14_14));
#line 209 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__term_constr_main_types__V_15_15));
#line 209 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__term_constr_main_types__V_16_16));
#line 209 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__term_constr_main_types__V_17_17));
#line 209 "term_constr_main_types.m"
    }
#line 209 "term_constr_main_types.m"
  }
#line 110 "term_constr_main_types.m"
}

#line 108 "term_constr_main_types.m"
void MR_CALL 
transform_hlds__term_constr_main_types__term2_info_set_import_success_3_p_0(
#line 108 "term_constr_main_types.m"
  MR_Word transform_hlds__term_constr_main_types__X_4,
#line 108 "term_constr_main_types.m"
  MR_Word transform_hlds__term_constr_main_types__STATE_VARIABLE_Term2Info_0_6,
#line 108 "term_constr_main_types.m"
  MR_Word * transform_hlds__term_constr_main_types__STATE_VARIABLE_Term2Info_7)
#line 108 "term_constr_main_types.m"
{
#line 207 "term_constr_main_types.m"
  {
#line 207 "term_constr_main_types.m"
    MR_bool transform_hlds__term_constr_main_types__succeeded;
#line 207 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__STATE_VARIABLE_Term2Info_0_6, (MR_Integer) 0)));
#line 207 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__STATE_VARIABLE_Term2Info_0_6, (MR_Integer) 1)));
#line 207 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__STATE_VARIABLE_Term2Info_0_6, (MR_Integer) 3)));
#line 207 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__STATE_VARIABLE_Term2Info_0_6, (MR_Integer) 4)));
#line 207 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__STATE_VARIABLE_Term2Info_0_6, (MR_Integer) 5)));
#line 207 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__STATE_VARIABLE_Term2Info_0_6, (MR_Integer) 6)));
#line 207 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__STATE_VARIABLE_Term2Info_0_6, (MR_Integer) 7)));
#line 207 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__STATE_VARIABLE_Term2Info_0_6, (MR_Integer) 8)));
#line 207 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__STATE_VARIABLE_Term2Info_0_6, (MR_Integer) 2)));

#line 207 "term_constr_main_types.m"
    {
#line 207 "term_constr_main_types.m"
      MR_Word base;
#line 207 "term_constr_main_types.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 207 "term_constr_main_types.m"
      *transform_hlds__term_constr_main_types__STATE_VARIABLE_Term2Info_7 = base;
#line 207 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__term_constr_main_types__V_9_9));
#line 207 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__term_constr_main_types__V_10_10));
#line 207 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__term_constr_main_types__X_4));
#line 207 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__term_constr_main_types__V_12_12));
#line 207 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__term_constr_main_types__V_13_13));
#line 207 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__term_constr_main_types__V_14_14));
#line 207 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__term_constr_main_types__V_15_15));
#line 207 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__term_constr_main_types__V_16_16));
#line 207 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__term_constr_main_types__V_17_17));
#line 207 "term_constr_main_types.m"
    }
#line 207 "term_constr_main_types.m"
  }
#line 108 "term_constr_main_types.m"
}

#line 106 "term_constr_main_types.m"
void MR_CALL 
transform_hlds__term_constr_main_types__term2_info_set_size_var_map_3_p_0(
#line 106 "term_constr_main_types.m"
  MR_Word transform_hlds__term_constr_main_types__X_4,
#line 106 "term_constr_main_types.m"
  MR_Word transform_hlds__term_constr_main_types__STATE_VARIABLE_Term2Info_0_6,
#line 106 "term_constr_main_types.m"
  MR_Word * transform_hlds__term_constr_main_types__STATE_VARIABLE_Term2Info_7)
#line 106 "term_constr_main_types.m"
{
#line 205 "term_constr_main_types.m"
  {
#line 205 "term_constr_main_types.m"
    MR_bool transform_hlds__term_constr_main_types__succeeded;
#line 205 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__STATE_VARIABLE_Term2Info_0_6, (MR_Integer) 1)));
#line 205 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__STATE_VARIABLE_Term2Info_0_6, (MR_Integer) 2)));
#line 205 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__STATE_VARIABLE_Term2Info_0_6, (MR_Integer) 3)));
#line 205 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__STATE_VARIABLE_Term2Info_0_6, (MR_Integer) 4)));
#line 205 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__STATE_VARIABLE_Term2Info_0_6, (MR_Integer) 5)));
#line 205 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__STATE_VARIABLE_Term2Info_0_6, (MR_Integer) 6)));
#line 205 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__STATE_VARIABLE_Term2Info_0_6, (MR_Integer) 7)));
#line 205 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__STATE_VARIABLE_Term2Info_0_6, (MR_Integer) 8)));
#line 205 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__STATE_VARIABLE_Term2Info_0_6, (MR_Integer) 0)));

#line 205 "term_constr_main_types.m"
    {
#line 205 "term_constr_main_types.m"
      MR_Word base;
#line 205 "term_constr_main_types.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 205 "term_constr_main_types.m"
      *transform_hlds__term_constr_main_types__STATE_VARIABLE_Term2Info_7 = base;
#line 205 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__term_constr_main_types__X_4));
#line 205 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__term_constr_main_types__V_10_10));
#line 205 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__term_constr_main_types__V_11_11));
#line 205 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__term_constr_main_types__V_12_12));
#line 205 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__term_constr_main_types__V_13_13));
#line 205 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__term_constr_main_types__V_14_14));
#line 205 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__term_constr_main_types__V_15_15));
#line 205 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__term_constr_main_types__V_16_16));
#line 205 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__term_constr_main_types__V_17_17));
#line 205 "term_constr_main_types.m"
    }
#line 205 "term_constr_main_types.m"
  }
#line 106 "term_constr_main_types.m"
}

#line 103 "term_constr_main_types.m"
MR_Word MR_CALL 
transform_hlds__term_constr_main_types__term2_info_get_head_vars_1_f_0(
#line 103 "term_constr_main_types.m"
  MR_Word transform_hlds__term_constr_main_types__Term2Info_3)
#line 103 "term_constr_main_types.m"
{
#line 202 "term_constr_main_types.m"
  {
#line 202 "term_constr_main_types.m"
    MR_bool transform_hlds__term_constr_main_types__succeeded;
#line 202 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__Term2Info_3, (MR_Integer) 1)));
#line 202 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__Term2Info_3, (MR_Integer) 0)));
#line 202 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__Term2Info_3, (MR_Integer) 2)));
#line 202 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__Term2Info_3, (MR_Integer) 3)));
#line 202 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__Term2Info_3, (MR_Integer) 4)));
#line 202 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__Term2Info_3, (MR_Integer) 5)));
#line 202 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__Term2Info_3, (MR_Integer) 6)));
#line 202 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__Term2Info_3, (MR_Integer) 7)));
#line 202 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__Term2Info_3, (MR_Integer) 8)));

#line 202 "term_constr_main_types.m"
    return transform_hlds__term_constr_main_types__X_4;
#line 202 "term_constr_main_types.m"
  }
#line 103 "term_constr_main_types.m"
}

#line 101 "term_constr_main_types.m"
MR_Word MR_CALL 
transform_hlds__term_constr_main_types__term2_info_get_intermod_status_1_f_0(
#line 101 "term_constr_main_types.m"
  MR_Word transform_hlds__term_constr_main_types__Term2Info_3)
#line 101 "term_constr_main_types.m"
{
#line 200 "term_constr_main_types.m"
  {
#line 200 "term_constr_main_types.m"
    MR_bool transform_hlds__term_constr_main_types__succeeded;
#line 200 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__Term2Info_3, (MR_Integer) 7)));
#line 200 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__Term2Info_3, (MR_Integer) 0)));
#line 200 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__Term2Info_3, (MR_Integer) 1)));
#line 200 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__Term2Info_3, (MR_Integer) 2)));
#line 200 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__Term2Info_3, (MR_Integer) 3)));
#line 200 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__Term2Info_3, (MR_Integer) 4)));
#line 200 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__Term2Info_3, (MR_Integer) 5)));
#line 200 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__Term2Info_3, (MR_Integer) 6)));
#line 200 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__Term2Info_3, (MR_Integer) 8)));

#line 200 "term_constr_main_types.m"
    return transform_hlds__term_constr_main_types__X_4;
#line 200 "term_constr_main_types.m"
  }
#line 101 "term_constr_main_types.m"
}

#line 99 "term_constr_main_types.m"
MR_Word MR_CALL 
transform_hlds__term_constr_main_types__term2_info_get_term_status_1_f_0(
#line 99 "term_constr_main_types.m"
  MR_Word transform_hlds__term_constr_main_types__Term2Info_3)
#line 99 "term_constr_main_types.m"
{
#line 198 "term_constr_main_types.m"
  {
#line 198 "term_constr_main_types.m"
    MR_bool transform_hlds__term_constr_main_types__succeeded;
#line 198 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__Term2Info_3, (MR_Integer) 6)));
#line 198 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__Term2Info_3, (MR_Integer) 0)));
#line 198 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__Term2Info_3, (MR_Integer) 1)));
#line 198 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__Term2Info_3, (MR_Integer) 2)));
#line 198 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__Term2Info_3, (MR_Integer) 3)));
#line 198 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__Term2Info_3, (MR_Integer) 4)));
#line 198 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__Term2Info_3, (MR_Integer) 5)));
#line 198 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__Term2Info_3, (MR_Integer) 7)));
#line 198 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__Term2Info_3, (MR_Integer) 8)));

#line 198 "term_constr_main_types.m"
    return transform_hlds__term_constr_main_types__X_4;
#line 198 "term_constr_main_types.m"
  }
#line 99 "term_constr_main_types.m"
}

#line 97 "term_constr_main_types.m"
MR_Word MR_CALL 
transform_hlds__term_constr_main_types__term2_info_get_abstract_rep_1_f_0(
#line 97 "term_constr_main_types.m"
  MR_Word transform_hlds__term_constr_main_types__Term2Info_3)
#line 97 "term_constr_main_types.m"
{
#line 196 "term_constr_main_types.m"
  {
#line 196 "term_constr_main_types.m"
    MR_bool transform_hlds__term_constr_main_types__succeeded;
#line 196 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__Term2Info_3, (MR_Integer) 8)));
#line 196 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__Term2Info_3, (MR_Integer) 0)));
#line 196 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__Term2Info_3, (MR_Integer) 1)));
#line 196 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__Term2Info_3, (MR_Integer) 2)));
#line 196 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__Term2Info_3, (MR_Integer) 3)));
#line 196 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__Term2Info_3, (MR_Integer) 4)));
#line 196 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__Term2Info_3, (MR_Integer) 5)));
#line 196 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__Term2Info_3, (MR_Integer) 6)));
#line 196 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__Term2Info_3, (MR_Integer) 7)));

#line 196 "term_constr_main_types.m"
    return transform_hlds__term_constr_main_types__X_4;
#line 196 "term_constr_main_types.m"
  }
#line 97 "term_constr_main_types.m"
}

#line 95 "term_constr_main_types.m"
MR_Word MR_CALL 
transform_hlds__term_constr_main_types__term2_info_get_failure_constrs_1_f_0(
#line 95 "term_constr_main_types.m"
  MR_Word transform_hlds__term_constr_main_types__Term2Info_3)
#line 95 "term_constr_main_types.m"
{
#line 194 "term_constr_main_types.m"
  {
#line 194 "term_constr_main_types.m"
    MR_bool transform_hlds__term_constr_main_types__succeeded;
#line 194 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__Term2Info_3, (MR_Integer) 5)));
#line 194 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__Term2Info_3, (MR_Integer) 0)));
#line 194 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__Term2Info_3, (MR_Integer) 1)));
#line 194 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__Term2Info_3, (MR_Integer) 2)));
#line 194 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__Term2Info_3, (MR_Integer) 3)));
#line 194 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__Term2Info_3, (MR_Integer) 4)));
#line 194 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__Term2Info_3, (MR_Integer) 6)));
#line 194 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__Term2Info_3, (MR_Integer) 7)));
#line 194 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__Term2Info_3, (MR_Integer) 8)));

#line 194 "term_constr_main_types.m"
    return transform_hlds__term_constr_main_types__X_4;
#line 194 "term_constr_main_types.m"
  }
#line 95 "term_constr_main_types.m"
}

#line 93 "term_constr_main_types.m"
MR_Word MR_CALL 
transform_hlds__term_constr_main_types__term2_info_get_success_constrs_1_f_0(
#line 93 "term_constr_main_types.m"
  MR_Word transform_hlds__term_constr_main_types__Term2Info_3)
#line 93 "term_constr_main_types.m"
{
#line 192 "term_constr_main_types.m"
  {
#line 192 "term_constr_main_types.m"
    MR_bool transform_hlds__term_constr_main_types__succeeded;
#line 192 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__Term2Info_3, (MR_Integer) 4)));
#line 192 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__Term2Info_3, (MR_Integer) 0)));
#line 192 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__Term2Info_3, (MR_Integer) 1)));
#line 192 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__Term2Info_3, (MR_Integer) 2)));
#line 192 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__Term2Info_3, (MR_Integer) 3)));
#line 192 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__Term2Info_3, (MR_Integer) 5)));
#line 192 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__Term2Info_3, (MR_Integer) 6)));
#line 192 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__Term2Info_3, (MR_Integer) 7)));
#line 192 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__Term2Info_3, (MR_Integer) 8)));

#line 192 "term_constr_main_types.m"
    return transform_hlds__term_constr_main_types__X_4;
#line 192 "term_constr_main_types.m"
  }
#line 93 "term_constr_main_types.m"
}

#line 91 "term_constr_main_types.m"
MR_Word MR_CALL 
transform_hlds__term_constr_main_types__term2_info_get_import_failure_1_f_0(
#line 91 "term_constr_main_types.m"
  MR_Word transform_hlds__term_constr_main_types__Term2Info_3)
#line 91 "term_constr_main_types.m"
{
#line 190 "term_constr_main_types.m"
  {
#line 190 "term_constr_main_types.m"
    MR_bool transform_hlds__term_constr_main_types__succeeded;
#line 190 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__Term2Info_3, (MR_Integer) 3)));
#line 190 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__Term2Info_3, (MR_Integer) 0)));
#line 190 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__Term2Info_3, (MR_Integer) 1)));
#line 190 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__Term2Info_3, (MR_Integer) 2)));
#line 190 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__Term2Info_3, (MR_Integer) 4)));
#line 190 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__Term2Info_3, (MR_Integer) 5)));
#line 190 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__Term2Info_3, (MR_Integer) 6)));
#line 190 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__Term2Info_3, (MR_Integer) 7)));
#line 190 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__Term2Info_3, (MR_Integer) 8)));

#line 190 "term_constr_main_types.m"
    return transform_hlds__term_constr_main_types__X_4;
#line 190 "term_constr_main_types.m"
  }
#line 91 "term_constr_main_types.m"
}

#line 89 "term_constr_main_types.m"
MR_Word MR_CALL 
transform_hlds__term_constr_main_types__term2_info_get_import_success_1_f_0(
#line 89 "term_constr_main_types.m"
  MR_Word transform_hlds__term_constr_main_types__Term2Info_3)
#line 89 "term_constr_main_types.m"
{
#line 188 "term_constr_main_types.m"
  {
#line 188 "term_constr_main_types.m"
    MR_bool transform_hlds__term_constr_main_types__succeeded;
#line 188 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__Term2Info_3, (MR_Integer) 2)));
#line 188 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__Term2Info_3, (MR_Integer) 0)));
#line 188 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__Term2Info_3, (MR_Integer) 1)));
#line 188 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__Term2Info_3, (MR_Integer) 3)));
#line 188 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__Term2Info_3, (MR_Integer) 4)));
#line 188 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__Term2Info_3, (MR_Integer) 5)));
#line 188 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__Term2Info_3, (MR_Integer) 6)));
#line 188 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__Term2Info_3, (MR_Integer) 7)));
#line 188 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__Term2Info_3, (MR_Integer) 8)));

#line 188 "term_constr_main_types.m"
    return transform_hlds__term_constr_main_types__X_4;
#line 188 "term_constr_main_types.m"
  }
#line 89 "term_constr_main_types.m"
}

#line 87 "term_constr_main_types.m"
MR_Word MR_CALL 
transform_hlds__term_constr_main_types__term2_info_get_size_var_map_1_f_0(
#line 87 "term_constr_main_types.m"
  MR_Word transform_hlds__term_constr_main_types__Term2Info_3)
#line 87 "term_constr_main_types.m"
{
#line 186 "term_constr_main_types.m"
  {
#line 186 "term_constr_main_types.m"
    MR_bool transform_hlds__term_constr_main_types__succeeded;
#line 186 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__Term2Info_3, (MR_Integer) 0)));
#line 186 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__Term2Info_3, (MR_Integer) 1)));
#line 186 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__Term2Info_3, (MR_Integer) 2)));
#line 186 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__Term2Info_3, (MR_Integer) 3)));
#line 186 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__Term2Info_3, (MR_Integer) 4)));
#line 186 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__Term2Info_3, (MR_Integer) 5)));
#line 186 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__Term2Info_3, (MR_Integer) 6)));
#line 186 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__Term2Info_3, (MR_Integer) 7)));
#line 186 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__Term2Info_3, (MR_Integer) 8)));

#line 186 "term_constr_main_types.m"
    return transform_hlds__term_constr_main_types__X_4;
#line 186 "term_constr_main_types.m"
  }
#line 87 "term_constr_main_types.m"
}

#line 85 "term_constr_main_types.m"
MR_Word MR_CALL 
transform_hlds__term_constr_main_types__term2_info_init_0_f_0(void)
#line 85 "term_constr_main_types.m"
{
#line 183 "term_constr_main_types.m"
  {
#line 183 "term_constr_main_types.m"
    MR_bool transform_hlds__term_constr_main_types__succeeded;
#line 183 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__HeadVar__1_1;
#line 183 "term_constr_main_types.m"
    MR_Word transform_hlds__term_constr_main_types__V_2_2;

#line 183 "term_constr_main_types.m"
    {
#line 183 "term_constr_main_types.m"
      transform_hlds__term_constr_main_types__V_2_2 = mercury__map__init_0_f_0((MR_Word) &transform_hlds__term_constr_main_types_scalar_common_1[0], (MR_Word) &transform_hlds__term_constr_main_types_scalar_common_1[1]);
    }
#line 183 "term_constr_main_types.m"
    {
#line 183 "term_constr_main_types.m"
      transform_hlds__term_constr_main_types__HeadVar__1_1 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 183 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, 0) = ((MR_Box) (transform_hlds__term_constr_main_types__V_2_2));
#line 183 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 183 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 183 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 183 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 183 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 183 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 183 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, 7) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 183 "term_constr_main_types.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_main_types__HeadVar__1_1, 8) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 183 "term_constr_main_types.m"
    }
#line 183 "term_constr_main_types.m"
    return transform_hlds__term_constr_main_types__HeadVar__1_1;
#line 183 "term_constr_main_types.m"
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
