/*
** Automatically generated from `term_constr_main_types.m'
** by the Mercury compiler,
** version 2015-10-27
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
#include "libs.op_mode.mih"
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




#line 137 "transform_hlds.term_constr_main_types.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main_types__list__ti_list_1transform_hlds__term_constr_errors__type_ctor_info_term2_error_0;

#line 140 "transform_hlds.term_constr_main_types.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_constr_main_types__parse_tree__prog_data__ti_generic_termination_info_2transform_hlds__term_constr_main_types__type_ctor_info_term_reason_0list__ti_list_1transform_hlds__term_constr_errors__type_ctor_info_term2_error_0;

#line 143 "transform_hlds.term_constr_main_types.c"
static const MR_EnumFunctorDesc transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__enum_functor_desc_intermod_status_0_0;

#line 146 "transform_hlds.term_constr_main_types.c"
static const MR_EnumFunctorDesc transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__enum_functor_desc_intermod_status_0_1;

#line 149 "transform_hlds.term_constr_main_types.c"
static const MR_EnumFunctorDescPtr transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__enum_value_ordered_intermod_status_0[2];

#line 152 "transform_hlds.term_constr_main_types.c"
static const MR_EnumFunctorDescPtr transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__enum_name_ordered_intermod_status_0[2];

#line 155 "transform_hlds.term_constr_main_types.c"
static const MR_Integer transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__functor_number_map_intermod_status_0[2];

#line 158 "transform_hlds.term_constr_main_types.c"
static const MR_EnumFunctorDesc transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__enum_functor_desc_term_reason_0_0;

#line 161 "transform_hlds.term_constr_main_types.c"
static const MR_EnumFunctorDesc transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__enum_functor_desc_term_reason_0_1;

#line 164 "transform_hlds.term_constr_main_types.c"
static const MR_EnumFunctorDesc transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__enum_functor_desc_term_reason_0_2;

#line 167 "transform_hlds.term_constr_main_types.c"
static const MR_EnumFunctorDesc transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__enum_functor_desc_term_reason_0_3;

#line 170 "transform_hlds.term_constr_main_types.c"
static const MR_EnumFunctorDesc transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__enum_functor_desc_term_reason_0_4;

#line 173 "transform_hlds.term_constr_main_types.c"
static const MR_EnumFunctorDescPtr transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__enum_value_ordered_term_reason_0[5];

#line 176 "transform_hlds.term_constr_main_types.c"
static const MR_EnumFunctorDescPtr transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__enum_name_ordered_term_reason_0[5];

#line 179 "transform_hlds.term_constr_main_types.c"
static const MR_Integer transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__functor_number_map_term_reason_0[5];

#line 182 "transform_hlds.term_constr_main_types.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main_types__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 185 "transform_hlds.term_constr_main_types.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main_types__term__ti_var_1term__type_ctor_info_generic_0;

#line 188 "transform_hlds.term_constr_main_types.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_constr_main_types__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1term__type_ctor_info_generic_0;

#line 191 "transform_hlds.term_constr_main_types.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main_types__list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0;

#line 194 "transform_hlds.term_constr_main_types.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main_types__list__ti_list_1parse_tree__prog_data__type_ctor_info_arg_size_constr_0;

#line 197 "transform_hlds.term_constr_main_types.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main_types__maybe__ti_maybe_1list__ti_list_1parse_tree__prog_data__type_ctor_info_arg_size_constr_0;

#line 200 "transform_hlds.term_constr_main_types.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main_types__maybe__ti_maybe_1libs__polyhedron__type_ctor_info_polyhedron_0;

#line 203 "transform_hlds.term_constr_main_types.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main_types__maybe__ti_maybe_1parse_tree__prog_data__ti_generic_termination_info_2transform_hlds__term_constr_main_types__type_ctor_info_term_reason_0list__ti_list_1transform_hlds__term_constr_errors__type_ctor_info_term2_error_0;

#line 206 "transform_hlds.term_constr_main_types.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main_types__maybe__ti_maybe_1transform_hlds__term_constr_main_types__type_ctor_info_intermod_status_0;

#line 209 "transform_hlds.term_constr_main_types.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main_types__maybe__ti_maybe_1transform_hlds__term_constr_data__type_ctor_info_abstract_proc_0;

#line 212 "transform_hlds.term_constr_main_types.c"
static const MR_PseudoTypeInfo transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__field_types_termination2_info_0_0[9];

#line 215 "transform_hlds.term_constr_main_types.c"
static const MR_ConstString transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__field_names_termination2_info_0_0[9];

#line 218 "transform_hlds.term_constr_main_types.c"
static const MR_DuFunctorDesc transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__du_functor_desc_termination2_info_0_0;

#line 221 "transform_hlds.term_constr_main_types.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__du_stag_ordered_termination2_info_0_0[1];

#line 224 "transform_hlds.term_constr_main_types.c"
static const MR_DuPtagLayout transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__du_ptag_ordered_termination2_info_0[1];

#line 227 "transform_hlds.term_constr_main_types.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__du_name_ordered_termination2_info_0[1];

#line 230 "transform_hlds.term_constr_main_types.c"
static const MR_Integer transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__functor_number_map_termination2_info_0[1];

#line 233 "transform_hlds.term_constr_main_types.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_main_types____Unify____constr_arg_size_info_0_0_10001(
#line 236 "transform_hlds.term_constr_main_types.c"
  MR_Box transform_hlds__term_constr_main_types__wrapper_arg_1,
#line 238 "transform_hlds.term_constr_main_types.c"
  MR_Box transform_hlds__term_constr_main_types__wrapper_arg_2);

#line 241 "transform_hlds.term_constr_main_types.c"
static void MR_CALL 
transform_hlds__term_constr_main_types____Compare____constr_arg_size_info_0_0_10001(
#line 244 "transform_hlds.term_constr_main_types.c"
  MR_Box * transform_hlds__term_constr_main_types__wrapper_arg_1,
#line 246 "transform_hlds.term_constr_main_types.c"
  MR_Box transform_hlds__term_constr_main_types__wrapper_arg_2,
#line 248 "transform_hlds.term_constr_main_types.c"
  MR_Box transform_hlds__term_constr_main_types__wrapper_arg_3);

#line 251 "transform_hlds.term_constr_main_types.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_main_types____Unify____constr_termination_info_0_0_10001(
#line 254 "transform_hlds.term_constr_main_types.c"
  MR_Box transform_hlds__term_constr_main_types__wrapper_arg_1,
#line 256 "transform_hlds.term_constr_main_types.c"
  MR_Box transform_hlds__term_constr_main_types__wrapper_arg_2);

#line 259 "transform_hlds.term_constr_main_types.c"
static void MR_CALL 
transform_hlds__term_constr_main_types____Compare____constr_termination_info_0_0_10001(
#line 262 "transform_hlds.term_constr_main_types.c"
  MR_Box * transform_hlds__term_constr_main_types__wrapper_arg_1,
#line 264 "transform_hlds.term_constr_main_types.c"
  MR_Box transform_hlds__term_constr_main_types__wrapper_arg_2,
#line 266 "transform_hlds.term_constr_main_types.c"
  MR_Box transform_hlds__term_constr_main_types__wrapper_arg_3);

#line 269 "transform_hlds.term_constr_main_types.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_main_types____Unify____intermod_status_0_0_10001(
#line 272 "transform_hlds.term_constr_main_types.c"
  MR_Box transform_hlds__term_constr_main_types__wrapper_arg_1,
#line 274 "transform_hlds.term_constr_main_types.c"
  MR_Box transform_hlds__term_constr_main_types__wrapper_arg_2);

#line 277 "transform_hlds.term_constr_main_types.c"
static void MR_CALL 
transform_hlds__term_constr_main_types____Compare____intermod_status_0_0_10001(
#line 280 "transform_hlds.term_constr_main_types.c"
  MR_Box * transform_hlds__term_constr_main_types__wrapper_arg_1,
#line 282 "transform_hlds.term_constr_main_types.c"
  MR_Box transform_hlds__term_constr_main_types__wrapper_arg_2,
#line 284 "transform_hlds.term_constr_main_types.c"
  MR_Box transform_hlds__term_constr_main_types__wrapper_arg_3);

#line 287 "transform_hlds.term_constr_main_types.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_main_types____Unify____term_reason_0_0_10001(
#line 290 "transform_hlds.term_constr_main_types.c"
  MR_Box transform_hlds__term_constr_main_types__wrapper_arg_1,
#line 292 "transform_hlds.term_constr_main_types.c"
  MR_Box transform_hlds__term_constr_main_types__wrapper_arg_2);

#line 295 "transform_hlds.term_constr_main_types.c"
static void MR_CALL 
transform_hlds__term_constr_main_types____Compare____term_reason_0_0_10001(
#line 298 "transform_hlds.term_constr_main_types.c"
  MR_Box * transform_hlds__term_constr_main_types__wrapper_arg_1,
#line 300 "transform_hlds.term_constr_main_types.c"
  MR_Box transform_hlds__term_constr_main_types__wrapper_arg_2,
#line 302 "transform_hlds.term_constr_main_types.c"
  MR_Box transform_hlds__term_constr_main_types__wrapper_arg_3);

#line 305 "transform_hlds.term_constr_main_types.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_main_types____Unify____termination2_info_0_0_10001(
#line 308 "transform_hlds.term_constr_main_types.c"
  MR_Box transform_hlds__term_constr_main_types__wrapper_arg_1,
#line 310 "transform_hlds.term_constr_main_types.c"
  MR_Box transform_hlds__term_constr_main_types__wrapper_arg_2);

#line 313 "transform_hlds.term_constr_main_types.c"
static void MR_CALL 
transform_hlds__term_constr_main_types____Compare____termination2_info_0_0_10001(
#line 316 "transform_hlds.term_constr_main_types.c"
  MR_Box * transform_hlds__term_constr_main_types__wrapper_arg_1,
#line 318 "transform_hlds.term_constr_main_types.c"
  MR_Box transform_hlds__term_constr_main_types__wrapper_arg_2,
#line 320 "transform_hlds.term_constr_main_types.c"
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



#line 408 "transform_hlds.term_constr_main_types.c"
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

#line 425 "transform_hlds.term_constr_main_types.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main_types__list__ti_list_1transform_hlds__term_constr_errors__type_ctor_info_term2_error_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__type_ctor_info_term2_error_0
  }
};

#line 433 "transform_hlds.term_constr_main_types.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_constr_main_types__parse_tree__prog_data__ti_generic_termination_info_2transform_hlds__term_constr_main_types__type_ctor_info_term_reason_0list__ti_list_1transform_hlds__term_constr_errors__type_ctor_info_term2_error_0 = {
  &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_generic_termination_info_2,
  {
    (MR_TypeInfo) &transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__type_ctor_info_term_reason_0,
    (MR_TypeInfo) &transform_hlds__term_constr_main_types__list__ti_list_1transform_hlds__term_constr_errors__type_ctor_info_term2_error_0
  }
};

#line 442 "transform_hlds.term_constr_main_types.c"
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

#line 459 "transform_hlds.term_constr_main_types.c"
static const MR_EnumFunctorDesc transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__enum_functor_desc_intermod_status_0_0 = {
  (MR_String) "not_mutually_recursive",
  (MR_Integer) 0
};

#line 465 "transform_hlds.term_constr_main_types.c"
static const MR_EnumFunctorDesc transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__enum_functor_desc_intermod_status_0_1 = {
  (MR_String) "may_be_mutually_recursive",
  (MR_Integer) 1
};

#line 471 "transform_hlds.term_constr_main_types.c"
static const MR_EnumFunctorDescPtr transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__enum_value_ordered_intermod_status_0[2] = {
  &transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__enum_functor_desc_intermod_status_0_0,
  &transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__enum_functor_desc_intermod_status_0_1
};

#line 477 "transform_hlds.term_constr_main_types.c"
static const MR_EnumFunctorDescPtr transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__enum_name_ordered_intermod_status_0[2] = {
  &transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__enum_functor_desc_intermod_status_0_1,
  &transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__enum_functor_desc_intermod_status_0_0
};

#line 483 "transform_hlds.term_constr_main_types.c"
static const MR_Integer transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__functor_number_map_intermod_status_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 489 "transform_hlds.term_constr_main_types.c"
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

#line 506 "transform_hlds.term_constr_main_types.c"
static const MR_EnumFunctorDesc transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__enum_functor_desc_term_reason_0_0 = {
  (MR_String) "term_reason_builtin",
  (MR_Integer) 0
};

#line 512 "transform_hlds.term_constr_main_types.c"
static const MR_EnumFunctorDesc transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__enum_functor_desc_term_reason_0_1 = {
  (MR_String) "term_reason_pragma_supplied",
  (MR_Integer) 1
};

#line 518 "transform_hlds.term_constr_main_types.c"
static const MR_EnumFunctorDesc transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__enum_functor_desc_term_reason_0_2 = {
  (MR_String) "term_reason_foreign_supplied",
  (MR_Integer) 2
};

#line 524 "transform_hlds.term_constr_main_types.c"
static const MR_EnumFunctorDesc transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__enum_functor_desc_term_reason_0_3 = {
  (MR_String) "term_reason_import_supplied",
  (MR_Integer) 3
};

#line 530 "transform_hlds.term_constr_main_types.c"
static const MR_EnumFunctorDesc transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__enum_functor_desc_term_reason_0_4 = {
  (MR_String) "term_reason_analysis",
  (MR_Integer) 4
};

#line 536 "transform_hlds.term_constr_main_types.c"
static const MR_EnumFunctorDescPtr transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__enum_value_ordered_term_reason_0[5] = {
  &transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__enum_functor_desc_term_reason_0_0,
  &transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__enum_functor_desc_term_reason_0_1,
  &transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__enum_functor_desc_term_reason_0_2,
  &transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__enum_functor_desc_term_reason_0_3,
  &transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__enum_functor_desc_term_reason_0_4
};

#line 545 "transform_hlds.term_constr_main_types.c"
static const MR_EnumFunctorDescPtr transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__enum_name_ordered_term_reason_0[5] = {
  &transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__enum_functor_desc_term_reason_0_4,
  &transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__enum_functor_desc_term_reason_0_0,
  &transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__enum_functor_desc_term_reason_0_2,
  &transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__enum_functor_desc_term_reason_0_3,
  &transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__enum_functor_desc_term_reason_0_1
};

#line 554 "transform_hlds.term_constr_main_types.c"
static const MR_Integer transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__functor_number_map_term_reason_0[5] = {
  (MR_Integer) 1,
  (MR_Integer) 4,
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 0
};

#line 563 "transform_hlds.term_constr_main_types.c"
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

#line 580 "transform_hlds.term_constr_main_types.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main_types__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 588 "transform_hlds.term_constr_main_types.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main_types__term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 596 "transform_hlds.term_constr_main_types.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_constr_main_types__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__term_constr_main_types__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &transform_hlds__term_constr_main_types__term__ti_var_1term__type_ctor_info_generic_0
  }
};

#line 605 "transform_hlds.term_constr_main_types.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main_types__list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__term_constr_main_types__term__ti_var_1term__type_ctor_info_generic_0
  }
};

#line 613 "transform_hlds.term_constr_main_types.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main_types__list__ti_list_1parse_tree__prog_data__type_ctor_info_arg_size_constr_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_size_constr_0
  }
};

#line 621 "transform_hlds.term_constr_main_types.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main_types__maybe__ti_maybe_1list__ti_list_1parse_tree__prog_data__type_ctor_info_arg_size_constr_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &transform_hlds__term_constr_main_types__list__ti_list_1parse_tree__prog_data__type_ctor_info_arg_size_constr_0
  }
};

#line 629 "transform_hlds.term_constr_main_types.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main_types__maybe__ti_maybe_1libs__polyhedron__type_ctor_info_polyhedron_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &libs__polyhedron__libs__polyhedron__type_ctor_info_polyhedron_0
  }
};

#line 637 "transform_hlds.term_constr_main_types.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main_types__maybe__ti_maybe_1parse_tree__prog_data__ti_generic_termination_info_2transform_hlds__term_constr_main_types__type_ctor_info_term_reason_0list__ti_list_1transform_hlds__term_constr_errors__type_ctor_info_term2_error_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &transform_hlds__term_constr_main_types__parse_tree__prog_data__ti_generic_termination_info_2transform_hlds__term_constr_main_types__type_ctor_info_term_reason_0list__ti_list_1transform_hlds__term_constr_errors__type_ctor_info_term2_error_0
  }
};

#line 645 "transform_hlds.term_constr_main_types.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main_types__maybe__ti_maybe_1transform_hlds__term_constr_main_types__type_ctor_info_intermod_status_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__type_ctor_info_intermod_status_0
  }
};

#line 653 "transform_hlds.term_constr_main_types.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main_types__maybe__ti_maybe_1transform_hlds__term_constr_data__type_ctor_info_abstract_proc_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_proc_0
  }
};

#line 661 "transform_hlds.term_constr_main_types.c"
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

#line 674 "transform_hlds.term_constr_main_types.c"
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

#line 687 "transform_hlds.term_constr_main_types.c"
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

#line 702 "transform_hlds.term_constr_main_types.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__du_stag_ordered_termination2_info_0_0[1] = {
  &transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__du_functor_desc_termination2_info_0_0
};

#line 707 "transform_hlds.term_constr_main_types.c"
static const MR_DuPtagLayout transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__du_ptag_ordered_termination2_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__du_stag_ordered_termination2_info_0_0
  }
};

#line 716 "transform_hlds.term_constr_main_types.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__du_name_ordered_termination2_info_0[1] = {
  &transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__du_functor_desc_termination2_info_0_0
};

#line 721 "transform_hlds.term_constr_main_types.c"
static const MR_Integer transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__functor_number_map_termination2_info_0[1] = {
  (MR_Integer) 0
};

#line 726 "transform_hlds.term_constr_main_types.c"
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

#line 743 "transform_hlds.term_constr_main_types.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_main_types____Unify____constr_arg_size_info_0_0_10001(
#line 746 "transform_hlds.term_constr_main_types.c"
  MR_Box transform_hlds__term_constr_main_types__wrapper_arg_1,
#line 748 "transform_hlds.term_constr_main_types.c"
  MR_Box transform_hlds__term_constr_main_types__wrapper_arg_2)
#line 750 "transform_hlds.term_constr_main_types.c"
{
#line 752 "transform_hlds.term_constr_main_types.c"
  {
#line 754 "transform_hlds.term_constr_main_types.c"
    MR_bool transform_hlds__term_constr_main_types__succeeded;

#line 757 "transform_hlds.term_constr_main_types.c"
    {
#line 759 "transform_hlds.term_constr_main_types.c"
      transform_hlds__term_constr_main_types__succeeded = transform_hlds__term_constr_main_types____Unify____constr_arg_size_info_0_0(((MR_Word) transform_hlds__term_constr_main_types__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_main_types__wrapper_arg_2));
    }
#line 762 "transform_hlds.term_constr_main_types.c"
    return transform_hlds__term_constr_main_types__succeeded;
#line 764 "transform_hlds.term_constr_main_types.c"
  }
#line 766 "transform_hlds.term_constr_main_types.c"
}

#line 769 "transform_hlds.term_constr_main_types.c"
static void MR_CALL 
transform_hlds__term_constr_main_types____Compare____constr_arg_size_info_0_0_10001(
#line 772 "transform_hlds.term_constr_main_types.c"
  MR_Box * transform_hlds__term_constr_main_types__wrapper_arg_1,
#line 774 "transform_hlds.term_constr_main_types.c"
  MR_Box transform_hlds__term_constr_main_types__wrapper_arg_2,
#line 776 "transform_hlds.term_constr_main_types.c"
  MR_Box transform_hlds__term_constr_main_types__wrapper_arg_3)
#line 778 "transform_hlds.term_constr_main_types.c"
{
#line 780 "transform_hlds.term_constr_main_types.c"
  {
#line 782 "transform_hlds.term_constr_main_types.c"
    MR_Word transform_hlds__term_constr_main_types__conv0_HeadVar__1_1;

#line 785 "transform_hlds.term_constr_main_types.c"
    {
#line 787 "transform_hlds.term_constr_main_types.c"
      transform_hlds__term_constr_main_types____Compare____constr_arg_size_info_0_0(&transform_hlds__term_constr_main_types__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_constr_main_types__wrapper_arg_2), ((MR_Word) transform_hlds__term_constr_main_types__wrapper_arg_3));
    }
#line 790 "transform_hlds.term_constr_main_types.c"
    *transform_hlds__term_constr_main_types__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_constr_main_types__conv0_HeadVar__1_1));
#line 792 "transform_hlds.term_constr_main_types.c"
  }
#line 794 "transform_hlds.term_constr_main_types.c"
}

#line 797 "transform_hlds.term_constr_main_types.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_main_types____Unify____constr_termination_info_0_0_10001(
#line 800 "transform_hlds.term_constr_main_types.c"
  MR_Box transform_hlds__term_constr_main_types__wrapper_arg_1,
#line 802 "transform_hlds.term_constr_main_types.c"
  MR_Box transform_hlds__term_constr_main_types__wrapper_arg_2)
#line 804 "transform_hlds.term_constr_main_types.c"
{
#line 806 "transform_hlds.term_constr_main_types.c"
  {
#line 808 "transform_hlds.term_constr_main_types.c"
    MR_bool transform_hlds__term_constr_main_types__succeeded;

#line 811 "transform_hlds.term_constr_main_types.c"
    {
#line 813 "transform_hlds.term_constr_main_types.c"
      transform_hlds__term_constr_main_types__succeeded = transform_hlds__term_constr_main_types____Unify____constr_termination_info_0_0(((MR_Word) transform_hlds__term_constr_main_types__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_main_types__wrapper_arg_2));
    }
#line 816 "transform_hlds.term_constr_main_types.c"
    return transform_hlds__term_constr_main_types__succeeded;
#line 818 "transform_hlds.term_constr_main_types.c"
  }
#line 820 "transform_hlds.term_constr_main_types.c"
}

#line 823 "transform_hlds.term_constr_main_types.c"
static void MR_CALL 
transform_hlds__term_constr_main_types____Compare____constr_termination_info_0_0_10001(
#line 826 "transform_hlds.term_constr_main_types.c"
  MR_Box * transform_hlds__term_constr_main_types__wrapper_arg_1,
#line 828 "transform_hlds.term_constr_main_types.c"
  MR_Box transform_hlds__term_constr_main_types__wrapper_arg_2,
#line 830 "transform_hlds.term_constr_main_types.c"
  MR_Box transform_hlds__term_constr_main_types__wrapper_arg_3)
#line 832 "transform_hlds.term_constr_main_types.c"
{
#line 834 "transform_hlds.term_constr_main_types.c"
  {
#line 836 "transform_hlds.term_constr_main_types.c"
    MR_Word transform_hlds__term_constr_main_types__conv0_HeadVar__1_1;

#line 839 "transform_hlds.term_constr_main_types.c"
    {
#line 841 "transform_hlds.term_constr_main_types.c"
      transform_hlds__term_constr_main_types____Compare____constr_termination_info_0_0(&transform_hlds__term_constr_main_types__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_constr_main_types__wrapper_arg_2), ((MR_Word) transform_hlds__term_constr_main_types__wrapper_arg_3));
    }
#line 844 "transform_hlds.term_constr_main_types.c"
    *transform_hlds__term_constr_main_types__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_constr_main_types__conv0_HeadVar__1_1));
#line 846 "transform_hlds.term_constr_main_types.c"
  }
#line 848 "transform_hlds.term_constr_main_types.c"
}

#line 851 "transform_hlds.term_constr_main_types.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_main_types____Unify____intermod_status_0_0_10001(
#line 854 "transform_hlds.term_constr_main_types.c"
  MR_Box transform_hlds__term_constr_main_types__wrapper_arg_1,
#line 856 "transform_hlds.term_constr_main_types.c"
  MR_Box transform_hlds__term_constr_main_types__wrapper_arg_2)
#line 858 "transform_hlds.term_constr_main_types.c"
{
#line 860 "transform_hlds.term_constr_main_types.c"
  {
#line 862 "transform_hlds.term_constr_main_types.c"
    MR_bool transform_hlds__term_constr_main_types__succeeded;

#line 865 "transform_hlds.term_constr_main_types.c"
    {
#line 867 "transform_hlds.term_constr_main_types.c"
      transform_hlds__term_constr_main_types__succeeded = transform_hlds__term_constr_main_types____Unify____intermod_status_0_0(((MR_Word) transform_hlds__term_constr_main_types__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_main_types__wrapper_arg_2));
    }
#line 870 "transform_hlds.term_constr_main_types.c"
    return transform_hlds__term_constr_main_types__succeeded;
#line 872 "transform_hlds.term_constr_main_types.c"
  }
#line 874 "transform_hlds.term_constr_main_types.c"
}

#line 877 "transform_hlds.term_constr_main_types.c"
static void MR_CALL 
transform_hlds__term_constr_main_types____Compare____intermod_status_0_0_10001(
#line 880 "transform_hlds.term_constr_main_types.c"
  MR_Box * transform_hlds__term_constr_main_types__wrapper_arg_1,
#line 882 "transform_hlds.term_constr_main_types.c"
  MR_Box transform_hlds__term_constr_main_types__wrapper_arg_2,
#line 884 "transform_hlds.term_constr_main_types.c"
  MR_Box transform_hlds__term_constr_main_types__wrapper_arg_3)
#line 886 "transform_hlds.term_constr_main_types.c"
{
#line 888 "transform_hlds.term_constr_main_types.c"
  {
#line 890 "transform_hlds.term_constr_main_types.c"
    MR_Word transform_hlds__term_constr_main_types__conv0_HeadVar__1_1;

#line 893 "transform_hlds.term_constr_main_types.c"
    {
#line 895 "transform_hlds.term_constr_main_types.c"
      transform_hlds__term_constr_main_types____Compare____intermod_status_0_0(&transform_hlds__term_constr_main_types__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_constr_main_types__wrapper_arg_2), ((MR_Word) transform_hlds__term_constr_main_types__wrapper_arg_3));
    }
#line 898 "transform_hlds.term_constr_main_types.c"
    *transform_hlds__term_constr_main_types__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_constr_main_types__conv0_HeadVar__1_1));
#line 900 "transform_hlds.term_constr_main_types.c"
  }
#line 902 "transform_hlds.term_constr_main_types.c"
}

#line 905 "transform_hlds.term_constr_main_types.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_main_types____Unify____term_reason_0_0_10001(
#line 908 "transform_hlds.term_constr_main_types.c"
  MR_Box transform_hlds__term_constr_main_types__wrapper_arg_1,
#line 910 "transform_hlds.term_constr_main_types.c"
  MR_Box transform_hlds__term_constr_main_types__wrapper_arg_2)
#line 912 "transform_hlds.term_constr_main_types.c"
{
#line 914 "transform_hlds.term_constr_main_types.c"
  {
#line 916 "transform_hlds.term_constr_main_types.c"
    MR_bool transform_hlds__term_constr_main_types__succeeded;

#line 919 "transform_hlds.term_constr_main_types.c"
    {
#line 921 "transform_hlds.term_constr_main_types.c"
      transform_hlds__term_constr_main_types__succeeded = transform_hlds__term_constr_main_types____Unify____term_reason_0_0(((MR_Word) transform_hlds__term_constr_main_types__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_main_types__wrapper_arg_2));
    }
#line 924 "transform_hlds.term_constr_main_types.c"
    return transform_hlds__term_constr_main_types__succeeded;
#line 926 "transform_hlds.term_constr_main_types.c"
  }
#line 928 "transform_hlds.term_constr_main_types.c"
}

#line 931 "transform_hlds.term_constr_main_types.c"
static void MR_CALL 
transform_hlds__term_constr_main_types____Compare____term_reason_0_0_10001(
#line 934 "transform_hlds.term_constr_main_types.c"
  MR_Box * transform_hlds__term_constr_main_types__wrapper_arg_1,
#line 936 "transform_hlds.term_constr_main_types.c"
  MR_Box transform_hlds__term_constr_main_types__wrapper_arg_2,
#line 938 "transform_hlds.term_constr_main_types.c"
  MR_Box transform_hlds__term_constr_main_types__wrapper_arg_3)
#line 940 "transform_hlds.term_constr_main_types.c"
{
#line 942 "transform_hlds.term_constr_main_types.c"
  {
#line 944 "transform_hlds.term_constr_main_types.c"
    MR_Word transform_hlds__term_constr_main_types__conv0_HeadVar__1_1;

#line 947 "transform_hlds.term_constr_main_types.c"
    {
#line 949 "transform_hlds.term_constr_main_types.c"
      transform_hlds__term_constr_main_types____Compare____term_reason_0_0(&transform_hlds__term_constr_main_types__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_constr_main_types__wrapper_arg_2), ((MR_Word) transform_hlds__term_constr_main_types__wrapper_arg_3));
    }
#line 952 "transform_hlds.term_constr_main_types.c"
    *transform_hlds__term_constr_main_types__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_constr_main_types__conv0_HeadVar__1_1));
#line 954 "transform_hlds.term_constr_main_types.c"
  }
#line 956 "transform_hlds.term_constr_main_types.c"
}

#line 959 "transform_hlds.term_constr_main_types.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_main_types____Unify____termination2_info_0_0_10001(
#line 962 "transform_hlds.term_constr_main_types.c"
  MR_Box transform_hlds__term_constr_main_types__wrapper_arg_1,
#line 964 "transform_hlds.term_constr_main_types.c"
  MR_Box transform_hlds__term_constr_main_types__wrapper_arg_2)
#line 966 "transform_hlds.term_constr_main_types.c"
{
#line 968 "transform_hlds.term_constr_main_types.c"
  {
#line 970 "transform_hlds.term_constr_main_types.c"
    MR_bool transform_hlds__term_constr_main_types__succeeded;

#line 973 "transform_hlds.term_constr_main_types.c"
    {
#line 975 "transform_hlds.term_constr_main_types.c"
      transform_hlds__term_constr_main_types__succeeded = transform_hlds__term_constr_main_types____Unify____termination2_info_0_0(((MR_Word) transform_hlds__term_constr_main_types__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_main_types__wrapper_arg_2));
    }
#line 978 "transform_hlds.term_constr_main_types.c"
    return transform_hlds__term_constr_main_types__succeeded;
#line 980 "transform_hlds.term_constr_main_types.c"
  }
#line 982 "transform_hlds.term_constr_main_types.c"
}

#line 985 "transform_hlds.term_constr_main_types.c"
static void MR_CALL 
transform_hlds__term_constr_main_types____Compare____termination2_info_0_0_10001(
#line 988 "transform_hlds.term_constr_main_types.c"
  MR_Box * transform_hlds__term_constr_main_types__wrapper_arg_1,
#line 990 "transform_hlds.term_constr_main_types.c"
  MR_Box transform_hlds__term_constr_main_types__wrapper_arg_2,
#line 992 "transform_hlds.term_constr_main_types.c"
  MR_Box transform_hlds__term_constr_main_types__wrapper_arg_3)
#line 994 "transform_hlds.term_constr_main_types.c"
{
#line 996 "transform_hlds.term_constr_main_types.c"
  {
#line 998 "transform_hlds.term_constr_main_types.c"
    MR_Word transform_hlds__term_constr_main_types__conv0_HeadVar__1_1;

#line 1001 "transform_hlds.term_constr_main_types.c"
    {
#line 1003 "transform_hlds.term_constr_main_types.c"
      transform_hlds__term_constr_main_types____Compare____termination2_info_0_0(&transform_hlds__term_constr_main_types__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_constr_main_types__wrapper_arg_2), ((MR_Word) transform_hlds__term_constr_main_types__wrapper_arg_3));
    }
#line 1006 "transform_hlds.term_constr_main_types.c"
    *transform_hlds__term_constr_main_types__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_constr_main_types__conv0_HeadVar__1_1));
#line 1008 "transform_hlds.term_constr_main_types.c"
  }
#line 1010 "transform_hlds.term_constr_main_types.c"
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
#line 1037 "transform_hlds.term_constr_main_types.c"
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
#line 1087 "transform_hlds.term_constr_main_types.c"
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
#line 1107 "transform_hlds.term_constr_main_types.c"
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
#line 1127 "transform_hlds.term_constr_main_types.c"
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
#line 1147 "transform_hlds.term_constr_main_types.c"
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
#line 1167 "transform_hlds.term_constr_main_types.c"
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
#line 1187 "transform_hlds.term_constr_main_types.c"
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
#line 1207 "transform_hlds.term_constr_main_types.c"
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
#line 1227 "transform_hlds.term_constr_main_types.c"
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

#line 1350 "transform_hlds.term_constr_main_types.c"
        {
#line 1352 "transform_hlds.term_constr_main_types.c"
          transform_hlds__term_constr_main_types__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__term_constr_main_types_scalar_common_2[1], ((MR_Box) (transform_hlds__term_constr_main_types__V_3_3)), ((MR_Box) (transform_hlds__term_constr_main_types__V_12_12)));
        }
#line 142 "term_constr_main_types.m"
        if (transform_hlds__term_constr_main_types__succeeded)
#line 142 "term_constr_main_types.m"
          {
#line 1359 "transform_hlds.term_constr_main_types.c"
            transform_hlds__term_constr_main_types__TypeInfo_24_24 = (MR_Word) &transform_hlds__term_constr_main_types_scalar_common_1[3];
#line 1361 "transform_hlds.term_constr_main_types.c"
            {
#line 1363 "transform_hlds.term_constr_main_types.c"
              transform_hlds__term_constr_main_types__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_main_types__TypeInfo_24_24, ((MR_Box) (transform_hlds__term_constr_main_types__V_4_4)), ((MR_Box) (transform_hlds__term_constr_main_types__V_13_13)));
            }
#line 142 "term_constr_main_types.m"
            if (transform_hlds__term_constr_main_types__succeeded)
#line 142 "term_constr_main_types.m"
              {
#line 1370 "transform_hlds.term_constr_main_types.c"
                transform_hlds__term_constr_main_types__TypeInfo_25_25 = (MR_Word) &transform_hlds__term_constr_main_types_scalar_common_1[5];
#line 1372 "transform_hlds.term_constr_main_types.c"
                {
#line 1374 "transform_hlds.term_constr_main_types.c"
                  transform_hlds__term_constr_main_types__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_main_types__TypeInfo_25_25, ((MR_Box) (transform_hlds__term_constr_main_types__V_5_5)), ((MR_Box) (transform_hlds__term_constr_main_types__V_14_14)));
                }
#line 142 "term_constr_main_types.m"
                if (transform_hlds__term_constr_main_types__succeeded)
#line 142 "term_constr_main_types.m"
                  {
#line 1381 "transform_hlds.term_constr_main_types.c"
                    transform_hlds__term_constr_main_types__TypeInfo_26_26 = (MR_Word) &transform_hlds__term_constr_main_types_scalar_common_1[5];
#line 1383 "transform_hlds.term_constr_main_types.c"
                    {
#line 1385 "transform_hlds.term_constr_main_types.c"
                      transform_hlds__term_constr_main_types__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_main_types__TypeInfo_26_26, ((MR_Box) (transform_hlds__term_constr_main_types__V_6_6)), ((MR_Box) (transform_hlds__term_constr_main_types__V_15_15)));
                    }
#line 142 "term_constr_main_types.m"
                    if (transform_hlds__term_constr_main_types__succeeded)
#line 142 "term_constr_main_types.m"
                      {
#line 1392 "transform_hlds.term_constr_main_types.c"
                        transform_hlds__term_constr_main_types__TypeInfo_27_27 = (MR_Word) &transform_hlds__term_constr_main_types_scalar_common_1[6];
#line 1394 "transform_hlds.term_constr_main_types.c"
                        {
#line 1396 "transform_hlds.term_constr_main_types.c"
                          transform_hlds__term_constr_main_types__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_main_types__TypeInfo_27_27, ((MR_Box) (transform_hlds__term_constr_main_types__V_7_7)), ((MR_Box) (transform_hlds__term_constr_main_types__V_16_16)));
                        }
#line 142 "term_constr_main_types.m"
                        if (transform_hlds__term_constr_main_types__succeeded)
#line 142 "term_constr_main_types.m"
                          {
#line 1403 "transform_hlds.term_constr_main_types.c"
                            transform_hlds__term_constr_main_types__TypeInfo_28_28 = (MR_Word) &transform_hlds__term_constr_main_types_scalar_common_1[6];
#line 1405 "transform_hlds.term_constr_main_types.c"
                            {
#line 1407 "transform_hlds.term_constr_main_types.c"
                              transform_hlds__term_constr_main_types__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_main_types__TypeInfo_28_28, ((MR_Box) (transform_hlds__term_constr_main_types__V_8_8)), ((MR_Box) (transform_hlds__term_constr_main_types__V_17_17)));
                            }
#line 142 "term_constr_main_types.m"
                            if (transform_hlds__term_constr_main_types__succeeded)
#line 142 "term_constr_main_types.m"
                              {
#line 1414 "transform_hlds.term_constr_main_types.c"
                                transform_hlds__term_constr_main_types__TypeInfo_29_29 = (MR_Word) &transform_hlds__term_constr_main_types_scalar_common_1[7];
#line 1416 "transform_hlds.term_constr_main_types.c"
                                {
#line 1418 "transform_hlds.term_constr_main_types.c"
                                  transform_hlds__term_constr_main_types__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_main_types__TypeInfo_29_29, ((MR_Box) (transform_hlds__term_constr_main_types__V_9_9)), ((MR_Box) (transform_hlds__term_constr_main_types__V_18_18)));
                                }
#line 142 "term_constr_main_types.m"
                                if (transform_hlds__term_constr_main_types__succeeded)
#line 142 "term_constr_main_types.m"
                                  {
#line 1425 "transform_hlds.term_constr_main_types.c"
                                    transform_hlds__term_constr_main_types__TypeInfo_30_30 = (MR_Word) &transform_hlds__term_constr_main_types_scalar_common_1[8];
#line 1427 "transform_hlds.term_constr_main_types.c"
                                    {
#line 1429 "transform_hlds.term_constr_main_types.c"
                                      transform_hlds__term_constr_main_types__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_main_types__TypeInfo_30_30, ((MR_Box) (transform_hlds__term_constr_main_types__V_10_10)), ((MR_Box) (transform_hlds__term_constr_main_types__V_19_19)));
                                    }
#line 142 "term_constr_main_types.m"
                                    if (transform_hlds__term_constr_main_types__succeeded)
#line 142 "term_constr_main_types.m"
                                      {
#line 1436 "transform_hlds.term_constr_main_types.c"
                                        transform_hlds__term_constr_main_types__TypeInfo_31_31 = (MR_Word) &transform_hlds__term_constr_main_types_scalar_common_1[9];
#line 1438 "transform_hlds.term_constr_main_types.c"
                                        {
#line 1440 "transform_hlds.term_constr_main_types.c"
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
#line 1509 "transform_hlds.term_constr_main_types.c"
  {
#line 1511 "transform_hlds.term_constr_main_types.c"
    MR_bool transform_hlds__term_constr_main_types__succeeded = (transform_hlds__term_constr_main_types__HeadVar__2_1 == transform_hlds__term_constr_main_types__HeadVar__2_2);

#line 1514 "transform_hlds.term_constr_main_types.c"
    return transform_hlds__term_constr_main_types__succeeded;
#line 1516 "transform_hlds.term_constr_main_types.c"
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
#line 1562 "transform_hlds.term_constr_main_types.c"
  {
#line 1564 "transform_hlds.term_constr_main_types.c"
    MR_bool transform_hlds__term_constr_main_types__succeeded = (transform_hlds__term_constr_main_types__HeadVar__2_1 == transform_hlds__term_constr_main_types__HeadVar__2_2);

#line 1567 "transform_hlds.term_constr_main_types.c"
    return transform_hlds__term_constr_main_types__succeeded;
#line 1569 "transform_hlds.term_constr_main_types.c"
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
