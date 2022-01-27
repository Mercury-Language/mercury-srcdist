/*
** Automatically generated from `switch_case.m'
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


/* :- module ll_backend.switch_case. */
/* :- implementation. */

/*
INIT mercury__ll_backend__switch_case__init
ENDINIT
*/

#include "ll_backend.switch_case.mih"


#include "analysis.mih"
#include "backend_libs.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "ll_backend.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.type_util.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_form.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_out.mih"
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
#include "ll_backend.code_gen.mih"
#include "ll_backend.code_info.mih"
#include "ll_backend.code_loc_dep.mih"
#include "ll_backend.continuation_info.mih"
#include "ll_backend.global_data.mih"
#include "ll_backend.layout.mih"
#include "ll_backend.llds.mih"
#include "ll_backend.trace_gen.mih"
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
#include "counter.mih"
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
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.hlds_out.hlds_out_goal.mih"
#include "hlds.hlds_out.hlds_out_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 159 "ll_backend.switch_case.c"
static const MR_EnumFunctorDesc ll_backend__switch_case__ll_backend__switch_case__enum_functor_desc_case_code_included_0_0;

#line 162 "ll_backend.switch_case.c"
static const MR_EnumFunctorDesc ll_backend__switch_case__ll_backend__switch_case__enum_functor_desc_case_code_included_0_1;

#line 165 "ll_backend.switch_case.c"
static const MR_EnumFunctorDescPtr ll_backend__switch_case__ll_backend__switch_case__enum_value_ordered_case_code_included_0[2];

#line 168 "ll_backend.switch_case.c"
static const MR_EnumFunctorDescPtr ll_backend__switch_case__ll_backend__switch_case__enum_name_ordered_case_code_included_0[2];

#line 171 "ll_backend.switch_case.c"
static const MR_Integer ll_backend__switch_case__ll_backend__switch_case__functor_number_map_case_code_included_0[2];

#line 174 "ll_backend.switch_case.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__switch_case__cord__ti_cord_1ll_backend__llds__type_ctor_info_instruction_0;

#line 177 "ll_backend.switch_case.c"
static const MR_PseudoTypeInfo ll_backend__switch_case__ll_backend__switch_case__field_types_case_label_info_0_0[3];

#line 180 "ll_backend.switch_case.c"
static const MR_ConstString ll_backend__switch_case__ll_backend__switch_case__field_names_case_label_info_0_0[3];

#line 183 "ll_backend.switch_case.c"
static const MR_DuFunctorDesc ll_backend__switch_case__ll_backend__switch_case__du_functor_desc_case_label_info_0_0;

#line 186 "ll_backend.switch_case.c"
static const MR_DuFunctorDescPtr ll_backend__switch_case__ll_backend__switch_case__du_stag_ordered_case_label_info_0_0[1];

#line 189 "ll_backend.switch_case.c"
static const MR_DuPtagLayout ll_backend__switch_case__ll_backend__switch_case__du_ptag_ordered_case_label_info_0[1];

#line 192 "ll_backend.switch_case.c"
static const MR_DuFunctorDescPtr ll_backend__switch_case__ll_backend__switch_case__du_name_ordered_case_label_info_0[1];

#line 195 "ll_backend.switch_case.c"
static const MR_Integer ll_backend__switch_case__ll_backend__switch_case__functor_number_map_case_label_info_0[1];

#line 198 "ll_backend.switch_case.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__switch_case__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0ll_backend__switch_case__type_ctor_info_case_label_info_0;

#line 201 "ll_backend.switch_case.c"
static const MR_PseudoTypeInfo ll_backend__switch_case__ll_backend__switch_case__field_types_represent_params_0_0[5];

#line 204 "ll_backend.switch_case.c"
static const MR_ConstString ll_backend__switch_case__ll_backend__switch_case__field_names_represent_params_0_0[5];

#line 207 "ll_backend.switch_case.c"
static const MR_DuFunctorDesc ll_backend__switch_case__ll_backend__switch_case__du_functor_desc_represent_params_0_0;

#line 210 "ll_backend.switch_case.c"
static const MR_DuFunctorDescPtr ll_backend__switch_case__ll_backend__switch_case__du_stag_ordered_represent_params_0_0[1];

#line 213 "ll_backend.switch_case.c"
static const MR_DuPtagLayout ll_backend__switch_case__ll_backend__switch_case__du_ptag_ordered_represent_params_0[1];

#line 216 "ll_backend.switch_case.c"
static const MR_DuFunctorDescPtr ll_backend__switch_case__ll_backend__switch_case__du_name_ordered_represent_params_0[1];

#line 219 "ll_backend.switch_case.c"
static const MR_Integer ll_backend__switch_case__ll_backend__switch_case__functor_number_map_represent_params_0[1];

#line 222 "ll_backend.switch_case.c"
static MR_bool MR_CALL 
ll_backend__switch_case____Unify____case_code_included_0_0_10001(
#line 225 "ll_backend.switch_case.c"
  MR_Box ll_backend__switch_case__wrapper_arg_1,
#line 227 "ll_backend.switch_case.c"
  MR_Box ll_backend__switch_case__wrapper_arg_2);

#line 230 "ll_backend.switch_case.c"
static void MR_CALL 
ll_backend__switch_case____Compare____case_code_included_0_0_10001(
#line 233 "ll_backend.switch_case.c"
  MR_Box * ll_backend__switch_case__wrapper_arg_1,
#line 235 "ll_backend.switch_case.c"
  MR_Box ll_backend__switch_case__wrapper_arg_2,
#line 237 "ll_backend.switch_case.c"
  MR_Box ll_backend__switch_case__wrapper_arg_3);

#line 240 "ll_backend.switch_case.c"
static MR_bool MR_CALL 
ll_backend__switch_case____Unify____case_label_info_0_0_10001(
#line 243 "ll_backend.switch_case.c"
  MR_Box ll_backend__switch_case__wrapper_arg_1,
#line 245 "ll_backend.switch_case.c"
  MR_Box ll_backend__switch_case__wrapper_arg_2);

#line 248 "ll_backend.switch_case.c"
static void MR_CALL 
ll_backend__switch_case____Compare____case_label_info_0_0_10001(
#line 251 "ll_backend.switch_case.c"
  MR_Box * ll_backend__switch_case__wrapper_arg_1,
#line 253 "ll_backend.switch_case.c"
  MR_Box ll_backend__switch_case__wrapper_arg_2,
#line 255 "ll_backend.switch_case.c"
  MR_Box ll_backend__switch_case__wrapper_arg_3);

#line 258 "ll_backend.switch_case.c"
static MR_bool MR_CALL 
ll_backend__switch_case____Unify____case_label_map_0_0_10001(
#line 261 "ll_backend.switch_case.c"
  MR_Box ll_backend__switch_case__wrapper_arg_1,
#line 263 "ll_backend.switch_case.c"
  MR_Box ll_backend__switch_case__wrapper_arg_2);

#line 266 "ll_backend.switch_case.c"
static void MR_CALL 
ll_backend__switch_case____Compare____case_label_map_0_0_10001(
#line 269 "ll_backend.switch_case.c"
  MR_Box * ll_backend__switch_case__wrapper_arg_1,
#line 271 "ll_backend.switch_case.c"
  MR_Box ll_backend__switch_case__wrapper_arg_2,
#line 273 "ll_backend.switch_case.c"
  MR_Box ll_backend__switch_case__wrapper_arg_3);

#line 276 "ll_backend.switch_case.c"
static MR_bool MR_CALL 
ll_backend__switch_case____Unify____represent_params_0_0_10001(
#line 279 "ll_backend.switch_case.c"
  MR_Box ll_backend__switch_case__wrapper_arg_1,
#line 281 "ll_backend.switch_case.c"
  MR_Box ll_backend__switch_case__wrapper_arg_2);

#line 284 "ll_backend.switch_case.c"
static void MR_CALL 
ll_backend__switch_case____Compare____represent_params_0_0_10001(
#line 287 "ll_backend.switch_case.c"
  MR_Box * ll_backend__switch_case__wrapper_arg_1,
#line 289 "ll_backend.switch_case.c"
  MR_Box ll_backend__switch_case__wrapper_arg_2,
#line 291 "ll_backend.switch_case.c"
  MR_Box ll_backend__switch_case__wrapper_arg_3);

#line 96 "switch_case.m"
static void MR_CALL 
ll_backend__switch_case__represent_tagged_case_for_llds_9_p_0_1(
#line 96 "switch_case.m"
  MR_Box ll_backend__switch_case__closure_arg,
#line 96 "switch_case.m"
  MR_Box ll_backend__switch_case__wrapper_arg_1,
#line 96 "switch_case.m"
  MR_Box * ll_backend__switch_case__wrapper_arg_2,
#line 96 "switch_case.m"
  MR_Box * ll_backend__switch_case__wrapper_arg_3);


static /* final */ const MR_Box ll_backend__switch_case_scalar_common_1[1][2];

static /* final */ const MR_Box ll_backend__switch_case_scalar_common_2[2][3];

static /* final */ const MR_Box ll_backend__switch_case_scalar_common_3[1][6];




static /* final */ const MR_Box ll_backend__switch_case_scalar_common_1[1][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0))
  },
};

static /* final */ const MR_Box ll_backend__switch_case_scalar_common_2[2][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0)),
    ((MR_Box) (&ll_backend__switch_case__ll_backend__switch_case__type_ctor_info_case_label_info_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&ll_backend__switch_case_scalar_common_3[0])),
    ((MR_Box) (ll_backend__switch_case__represent_tagged_case_for_llds_9_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ll_backend__switch_case_scalar_common_3[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 360 "ll_backend.switch_case.c"
static const MR_EnumFunctorDesc ll_backend__switch_case__ll_backend__switch_case__enum_functor_desc_case_code_included_0_0 = {
  (MR_String) "case_code_not_yet_included",
  (MR_Integer) 0
};

#line 366 "ll_backend.switch_case.c"
static const MR_EnumFunctorDesc ll_backend__switch_case__ll_backend__switch_case__enum_functor_desc_case_code_included_0_1 = {
  (MR_String) "case_code_already_included",
  (MR_Integer) 1
};

#line 372 "ll_backend.switch_case.c"
static const MR_EnumFunctorDescPtr ll_backend__switch_case__ll_backend__switch_case__enum_value_ordered_case_code_included_0[2] = {
  &ll_backend__switch_case__ll_backend__switch_case__enum_functor_desc_case_code_included_0_0,
  &ll_backend__switch_case__ll_backend__switch_case__enum_functor_desc_case_code_included_0_1
};

#line 378 "ll_backend.switch_case.c"
static const MR_EnumFunctorDescPtr ll_backend__switch_case__ll_backend__switch_case__enum_name_ordered_case_code_included_0[2] = {
  &ll_backend__switch_case__ll_backend__switch_case__enum_functor_desc_case_code_included_0_1,
  &ll_backend__switch_case__ll_backend__switch_case__enum_functor_desc_case_code_included_0_0
};

#line 384 "ll_backend.switch_case.c"
static const MR_Integer ll_backend__switch_case__ll_backend__switch_case__functor_number_map_case_code_included_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 390 "ll_backend.switch_case.c"
const MR_TypeCtorInfo_Struct ll_backend__switch_case__ll_backend__switch_case__type_ctor_info_case_code_included_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ll_backend__switch_case____Unify____case_code_included_0_0_10001)),
  ((MR_Box) (ll_backend__switch_case____Compare____case_code_included_0_0_10001)),
  (MR_String) "ll_backend.switch_case",
  (MR_String) "case_code_included",
  {     ll_backend__switch_case__ll_backend__switch_case__enum_name_ordered_case_code_included_0 },
  {     ll_backend__switch_case__ll_backend__switch_case__enum_value_ordered_case_code_included_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  ll_backend__switch_case__ll_backend__switch_case__functor_number_map_case_code_included_0
};

#line 407 "ll_backend.switch_case.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__switch_case__cord__ti_cord_1ll_backend__llds__type_ctor_info_instruction_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0
  }
};

#line 415 "ll_backend.switch_case.c"
static const MR_PseudoTypeInfo ll_backend__switch_case__ll_backend__switch_case__field_types_case_label_info_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &ll_backend__switch_case__cord__ti_cord_1ll_backend__llds__type_ctor_info_instruction_0,
  (MR_PseudoTypeInfo) &ll_backend__switch_case__ll_backend__switch_case__type_ctor_info_case_code_included_0
};

#line 422 "ll_backend.switch_case.c"
static const MR_ConstString ll_backend__switch_case__ll_backend__switch_case__field_names_case_label_info_0_0[3] = {
  (MR_String) "case_description",
  (MR_String) "case_code",
  (MR_String) "case_code_included"
};

#line 429 "ll_backend.switch_case.c"
static const MR_DuFunctorDesc ll_backend__switch_case__ll_backend__switch_case__du_functor_desc_case_label_info_0_0 = {
  (MR_String) "case_label_info",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__switch_case__ll_backend__switch_case__field_types_case_label_info_0_0,
  ll_backend__switch_case__ll_backend__switch_case__field_names_case_label_info_0_0,
  NULL,
  NULL
};

#line 444 "ll_backend.switch_case.c"
static const MR_DuFunctorDescPtr ll_backend__switch_case__ll_backend__switch_case__du_stag_ordered_case_label_info_0_0[1] = {
  &ll_backend__switch_case__ll_backend__switch_case__du_functor_desc_case_label_info_0_0
};

#line 449 "ll_backend.switch_case.c"
static const MR_DuPtagLayout ll_backend__switch_case__ll_backend__switch_case__du_ptag_ordered_case_label_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__switch_case__ll_backend__switch_case__du_stag_ordered_case_label_info_0_0
  }
};

#line 458 "ll_backend.switch_case.c"
static const MR_DuFunctorDescPtr ll_backend__switch_case__ll_backend__switch_case__du_name_ordered_case_label_info_0[1] = {
  &ll_backend__switch_case__ll_backend__switch_case__du_functor_desc_case_label_info_0_0
};

#line 463 "ll_backend.switch_case.c"
static const MR_Integer ll_backend__switch_case__ll_backend__switch_case__functor_number_map_case_label_info_0[1] = {
  (MR_Integer) 0
};

#line 468 "ll_backend.switch_case.c"
const MR_TypeCtorInfo_Struct ll_backend__switch_case__ll_backend__switch_case__type_ctor_info_case_label_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__switch_case____Unify____case_label_info_0_0_10001)),
  ((MR_Box) (ll_backend__switch_case____Compare____case_label_info_0_0_10001)),
  (MR_String) "ll_backend.switch_case",
  (MR_String) "case_label_info",
  {     ll_backend__switch_case__ll_backend__switch_case__du_name_ordered_case_label_info_0 },
  {     ll_backend__switch_case__ll_backend__switch_case__du_ptag_ordered_case_label_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__switch_case__ll_backend__switch_case__functor_number_map_case_label_info_0
};

#line 485 "ll_backend.switch_case.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__switch_case__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0ll_backend__switch_case__type_ctor_info_case_label_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0,
    (MR_TypeInfo) &ll_backend__switch_case__ll_backend__switch_case__type_ctor_info_case_label_info_0
  }
};

#line 494 "ll_backend.switch_case.c"
const MR_TypeCtorInfo_Struct ll_backend__switch_case__ll_backend__switch_case__type_ctor_info_case_label_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ll_backend__switch_case____Unify____case_label_map_0_0_10001)),
  ((MR_Box) (ll_backend__switch_case____Compare____case_label_map_0_0_10001)),
  (MR_String) "ll_backend.switch_case",
  (MR_String) "case_label_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &ll_backend__switch_case__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0ll_backend__switch_case__type_ctor_info_case_label_info_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 511 "ll_backend.switch_case.c"
static const MR_PseudoTypeInfo ll_backend__switch_case__ll_backend__switch_case__field_types_represent_params_0_0[5] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_info_0,
  (MR_PseudoTypeInfo) &hlds__code_model__hlds__code_model__type_ctor_info_code_model_0,
  (MR_PseudoTypeInfo) &ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_position_info_0,
  (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0
};

#line 520 "ll_backend.switch_case.c"
static const MR_ConstString ll_backend__switch_case__ll_backend__switch_case__field_names_represent_params_0_0[5] = {
  (MR_String) "switch_var_name",
  (MR_String) "switch_goal_info",
  (MR_String) "switch_code_model",
  (MR_String) "starting_position",
  (MR_String) "switch_end_label"
};

#line 529 "ll_backend.switch_case.c"
static const MR_DuFunctorDesc ll_backend__switch_case__ll_backend__switch_case__du_functor_desc_represent_params_0_0 = {
  (MR_String) "represent_params",
  (MR_Integer) 5,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__switch_case__ll_backend__switch_case__field_types_represent_params_0_0,
  ll_backend__switch_case__ll_backend__switch_case__field_names_represent_params_0_0,
  NULL,
  NULL
};

#line 544 "ll_backend.switch_case.c"
static const MR_DuFunctorDescPtr ll_backend__switch_case__ll_backend__switch_case__du_stag_ordered_represent_params_0_0[1] = {
  &ll_backend__switch_case__ll_backend__switch_case__du_functor_desc_represent_params_0_0
};

#line 549 "ll_backend.switch_case.c"
static const MR_DuPtagLayout ll_backend__switch_case__ll_backend__switch_case__du_ptag_ordered_represent_params_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__switch_case__ll_backend__switch_case__du_stag_ordered_represent_params_0_0
  }
};

#line 558 "ll_backend.switch_case.c"
static const MR_DuFunctorDescPtr ll_backend__switch_case__ll_backend__switch_case__du_name_ordered_represent_params_0[1] = {
  &ll_backend__switch_case__ll_backend__switch_case__du_functor_desc_represent_params_0_0
};

#line 563 "ll_backend.switch_case.c"
static const MR_Integer ll_backend__switch_case__ll_backend__switch_case__functor_number_map_represent_params_0[1] = {
  (MR_Integer) 0
};

#line 568 "ll_backend.switch_case.c"
const MR_TypeCtorInfo_Struct ll_backend__switch_case__ll_backend__switch_case__type_ctor_info_represent_params_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__switch_case____Unify____represent_params_0_0_10001)),
  ((MR_Box) (ll_backend__switch_case____Compare____represent_params_0_0_10001)),
  (MR_String) "ll_backend.switch_case",
  (MR_String) "represent_params",
  {     ll_backend__switch_case__ll_backend__switch_case__du_name_ordered_represent_params_0 },
  {     ll_backend__switch_case__ll_backend__switch_case__du_ptag_ordered_represent_params_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__switch_case__ll_backend__switch_case__functor_number_map_represent_params_0
};

#line 585 "ll_backend.switch_case.c"
static MR_bool MR_CALL 
ll_backend__switch_case____Unify____case_code_included_0_0_10001(
#line 588 "ll_backend.switch_case.c"
  MR_Box ll_backend__switch_case__wrapper_arg_1,
#line 590 "ll_backend.switch_case.c"
  MR_Box ll_backend__switch_case__wrapper_arg_2)
#line 592 "ll_backend.switch_case.c"
{
#line 594 "ll_backend.switch_case.c"
  {
#line 596 "ll_backend.switch_case.c"
    MR_bool ll_backend__switch_case__succeeded;

#line 599 "ll_backend.switch_case.c"
    {
#line 601 "ll_backend.switch_case.c"
      ll_backend__switch_case__succeeded = ll_backend__switch_case____Unify____case_code_included_0_0(((MR_Word) ll_backend__switch_case__wrapper_arg_1), ((MR_Word) ll_backend__switch_case__wrapper_arg_2));
    }
#line 604 "ll_backend.switch_case.c"
    return ll_backend__switch_case__succeeded;
#line 606 "ll_backend.switch_case.c"
  }
#line 608 "ll_backend.switch_case.c"
}

#line 611 "ll_backend.switch_case.c"
static void MR_CALL 
ll_backend__switch_case____Compare____case_code_included_0_0_10001(
#line 614 "ll_backend.switch_case.c"
  MR_Box * ll_backend__switch_case__wrapper_arg_1,
#line 616 "ll_backend.switch_case.c"
  MR_Box ll_backend__switch_case__wrapper_arg_2,
#line 618 "ll_backend.switch_case.c"
  MR_Box ll_backend__switch_case__wrapper_arg_3)
#line 620 "ll_backend.switch_case.c"
{
#line 622 "ll_backend.switch_case.c"
  {
#line 624 "ll_backend.switch_case.c"
    MR_Word ll_backend__switch_case__conv0_HeadVar__1_1;

#line 627 "ll_backend.switch_case.c"
    {
#line 629 "ll_backend.switch_case.c"
      ll_backend__switch_case____Compare____case_code_included_0_0(&ll_backend__switch_case__conv0_HeadVar__1_1, ((MR_Word) ll_backend__switch_case__wrapper_arg_2), ((MR_Word) ll_backend__switch_case__wrapper_arg_3));
    }
#line 632 "ll_backend.switch_case.c"
    *ll_backend__switch_case__wrapper_arg_1 = ((MR_Box) (ll_backend__switch_case__conv0_HeadVar__1_1));
#line 634 "ll_backend.switch_case.c"
  }
#line 636 "ll_backend.switch_case.c"
}

#line 639 "ll_backend.switch_case.c"
static MR_bool MR_CALL 
ll_backend__switch_case____Unify____case_label_info_0_0_10001(
#line 642 "ll_backend.switch_case.c"
  MR_Box ll_backend__switch_case__wrapper_arg_1,
#line 644 "ll_backend.switch_case.c"
  MR_Box ll_backend__switch_case__wrapper_arg_2)
#line 646 "ll_backend.switch_case.c"
{
#line 648 "ll_backend.switch_case.c"
  {
#line 650 "ll_backend.switch_case.c"
    MR_bool ll_backend__switch_case__succeeded;

#line 653 "ll_backend.switch_case.c"
    {
#line 655 "ll_backend.switch_case.c"
      ll_backend__switch_case__succeeded = ll_backend__switch_case____Unify____case_label_info_0_0(((MR_Word) ll_backend__switch_case__wrapper_arg_1), ((MR_Word) ll_backend__switch_case__wrapper_arg_2));
    }
#line 658 "ll_backend.switch_case.c"
    return ll_backend__switch_case__succeeded;
#line 660 "ll_backend.switch_case.c"
  }
#line 662 "ll_backend.switch_case.c"
}

#line 665 "ll_backend.switch_case.c"
static void MR_CALL 
ll_backend__switch_case____Compare____case_label_info_0_0_10001(
#line 668 "ll_backend.switch_case.c"
  MR_Box * ll_backend__switch_case__wrapper_arg_1,
#line 670 "ll_backend.switch_case.c"
  MR_Box ll_backend__switch_case__wrapper_arg_2,
#line 672 "ll_backend.switch_case.c"
  MR_Box ll_backend__switch_case__wrapper_arg_3)
#line 674 "ll_backend.switch_case.c"
{
#line 676 "ll_backend.switch_case.c"
  {
#line 678 "ll_backend.switch_case.c"
    MR_Word ll_backend__switch_case__conv0_HeadVar__1_1;

#line 681 "ll_backend.switch_case.c"
    {
#line 683 "ll_backend.switch_case.c"
      ll_backend__switch_case____Compare____case_label_info_0_0(&ll_backend__switch_case__conv0_HeadVar__1_1, ((MR_Word) ll_backend__switch_case__wrapper_arg_2), ((MR_Word) ll_backend__switch_case__wrapper_arg_3));
    }
#line 686 "ll_backend.switch_case.c"
    *ll_backend__switch_case__wrapper_arg_1 = ((MR_Box) (ll_backend__switch_case__conv0_HeadVar__1_1));
#line 688 "ll_backend.switch_case.c"
  }
#line 690 "ll_backend.switch_case.c"
}

#line 693 "ll_backend.switch_case.c"
static MR_bool MR_CALL 
ll_backend__switch_case____Unify____case_label_map_0_0_10001(
#line 696 "ll_backend.switch_case.c"
  MR_Box ll_backend__switch_case__wrapper_arg_1,
#line 698 "ll_backend.switch_case.c"
  MR_Box ll_backend__switch_case__wrapper_arg_2)
#line 700 "ll_backend.switch_case.c"
{
#line 702 "ll_backend.switch_case.c"
  {
#line 704 "ll_backend.switch_case.c"
    MR_bool ll_backend__switch_case__succeeded;

#line 707 "ll_backend.switch_case.c"
    {
#line 709 "ll_backend.switch_case.c"
      ll_backend__switch_case__succeeded = ll_backend__switch_case____Unify____case_label_map_0_0(((MR_Word) ll_backend__switch_case__wrapper_arg_1), ((MR_Word) ll_backend__switch_case__wrapper_arg_2));
    }
#line 712 "ll_backend.switch_case.c"
    return ll_backend__switch_case__succeeded;
#line 714 "ll_backend.switch_case.c"
  }
#line 716 "ll_backend.switch_case.c"
}

#line 719 "ll_backend.switch_case.c"
static void MR_CALL 
ll_backend__switch_case____Compare____case_label_map_0_0_10001(
#line 722 "ll_backend.switch_case.c"
  MR_Box * ll_backend__switch_case__wrapper_arg_1,
#line 724 "ll_backend.switch_case.c"
  MR_Box ll_backend__switch_case__wrapper_arg_2,
#line 726 "ll_backend.switch_case.c"
  MR_Box ll_backend__switch_case__wrapper_arg_3)
#line 728 "ll_backend.switch_case.c"
{
#line 730 "ll_backend.switch_case.c"
  {
#line 732 "ll_backend.switch_case.c"
    MR_Word ll_backend__switch_case__conv0_HeadVar__1_1;

#line 735 "ll_backend.switch_case.c"
    {
#line 737 "ll_backend.switch_case.c"
      ll_backend__switch_case____Compare____case_label_map_0_0(&ll_backend__switch_case__conv0_HeadVar__1_1, ((MR_Word) ll_backend__switch_case__wrapper_arg_2), ((MR_Word) ll_backend__switch_case__wrapper_arg_3));
    }
#line 740 "ll_backend.switch_case.c"
    *ll_backend__switch_case__wrapper_arg_1 = ((MR_Box) (ll_backend__switch_case__conv0_HeadVar__1_1));
#line 742 "ll_backend.switch_case.c"
  }
#line 744 "ll_backend.switch_case.c"
}

#line 747 "ll_backend.switch_case.c"
static MR_bool MR_CALL 
ll_backend__switch_case____Unify____represent_params_0_0_10001(
#line 750 "ll_backend.switch_case.c"
  MR_Box ll_backend__switch_case__wrapper_arg_1,
#line 752 "ll_backend.switch_case.c"
  MR_Box ll_backend__switch_case__wrapper_arg_2)
#line 754 "ll_backend.switch_case.c"
{
#line 756 "ll_backend.switch_case.c"
  {
#line 758 "ll_backend.switch_case.c"
    MR_bool ll_backend__switch_case__succeeded;

#line 761 "ll_backend.switch_case.c"
    {
#line 763 "ll_backend.switch_case.c"
      ll_backend__switch_case__succeeded = ll_backend__switch_case____Unify____represent_params_0_0(((MR_Word) ll_backend__switch_case__wrapper_arg_1), ((MR_Word) ll_backend__switch_case__wrapper_arg_2));
    }
#line 766 "ll_backend.switch_case.c"
    return ll_backend__switch_case__succeeded;
#line 768 "ll_backend.switch_case.c"
  }
#line 770 "ll_backend.switch_case.c"
}

#line 773 "ll_backend.switch_case.c"
static void MR_CALL 
ll_backend__switch_case____Compare____represent_params_0_0_10001(
#line 776 "ll_backend.switch_case.c"
  MR_Box * ll_backend__switch_case__wrapper_arg_1,
#line 778 "ll_backend.switch_case.c"
  MR_Box ll_backend__switch_case__wrapper_arg_2,
#line 780 "ll_backend.switch_case.c"
  MR_Box ll_backend__switch_case__wrapper_arg_3)
#line 782 "ll_backend.switch_case.c"
{
#line 784 "ll_backend.switch_case.c"
  {
#line 786 "ll_backend.switch_case.c"
    MR_Word ll_backend__switch_case__conv0_HeadVar__1_1;

#line 789 "ll_backend.switch_case.c"
    {
#line 791 "ll_backend.switch_case.c"
      ll_backend__switch_case____Compare____represent_params_0_0(&ll_backend__switch_case__conv0_HeadVar__1_1, ((MR_Word) ll_backend__switch_case__wrapper_arg_2), ((MR_Word) ll_backend__switch_case__wrapper_arg_3));
    }
#line 794 "ll_backend.switch_case.c"
    *ll_backend__switch_case__wrapper_arg_1 = ((MR_Box) (ll_backend__switch_case__conv0_HeadVar__1_1));
#line 796 "ll_backend.switch_case.c"
  }
#line 798 "ll_backend.switch_case.c"
}

#line 72 "switch_case.m"
void MR_CALL 
ll_backend__switch_case__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_114_101_109_97_105_110_105_110_103_95_99_97_115_101_95_95_91_49_93_95_48_4_p_0(
#line 72 "switch_case.m"
  MR_Word ll_backend__switch_case__CaseInfo_6,
#line 72 "switch_case.m"
  MR_Word ll_backend__switch_case__STATE_VARIABLE_Code_0_11,
#line 72 "switch_case.m"
  MR_Word * ll_backend__switch_case__STATE_VARIABLE_Code_12)
#line 72 "switch_case.m"
{
#line 136 "switch_case.m"
  {
#line 136 "switch_case.m"
    MR_bool ll_backend__switch_case__succeeded;
#line 136 "switch_case.m"
    MR_Word ll_backend__switch_case__CaseCode_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_case__CaseInfo_6, (MR_Integer) 1)));
#line 136 "switch_case.m"
    MR_Word ll_backend__switch_case__CaseIncluded_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_case__CaseInfo_6, (MR_Integer) 2)));
#line 137 "switch_case.m"
    MR_String ll_backend__switch_case___Comment_8 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__switch_case__CaseInfo_6, (MR_Integer) 0)));

#line 141 "switch_case.m"
#line 141 "switch_case.m"
    switch (ll_backend__switch_case__CaseIncluded_10) {
#line 141 "switch_case.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 141 "switch_case.m"
      case (MR_Integer) 1:
#line 142 "switch_case.m"
        *ll_backend__switch_case__STATE_VARIABLE_Code_12 = ll_backend__switch_case__STATE_VARIABLE_Code_0_11;
#line 141 "switch_case.m"
        break;
#line 141 "switch_case.m"
      case (MR_Integer) 0:
#line 139 "switch_case.m"
        {
#line 140 "switch_case.m"
          {
#line 140 "switch_case.m"
            *ll_backend__switch_case__STATE_VARIABLE_Code_12 = mercury__cord__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__switch_case__STATE_VARIABLE_Code_0_11, ll_backend__switch_case__CaseCode_9);
          }
#line 139 "switch_case.m"
        }
#line 141 "switch_case.m"
        break;
#line 141 "switch_case.m"
    }
#line 136 "switch_case.m"
  }
#line 72 "switch_case.m"
}

#line 29 "switch_case.m"
void MR_CALL 
ll_backend__switch_case____Compare____represent_params_0_0(
#line 29 "switch_case.m"
  MR_Word * ll_backend__switch_case__HeadVar__1_1,
#line 29 "switch_case.m"
  MR_Word ll_backend__switch_case__HeadVar__2_2,
#line 29 "switch_case.m"
  MR_Word ll_backend__switch_case__HeadVar__3_3)
#line 29 "switch_case.m"
{
#line 29 "switch_case.m"
  {
#line 29 "switch_case.m"
    MR_bool ll_backend__switch_case__succeeded;
#line 29 "switch_case.m"
    MR_Integer ll_backend__switch_case__CastX_18 = (MR_Integer) ll_backend__switch_case__HeadVar__2_2;
#line 29 "switch_case.m"
    MR_Integer ll_backend__switch_case__CastY_19 = (MR_Integer) ll_backend__switch_case__HeadVar__3_3;

#line 29 "switch_case.m"
    ll_backend__switch_case__succeeded = (ll_backend__switch_case__CastX_18 == ll_backend__switch_case__CastY_19);
#line 29 "switch_case.m"
    if (ll_backend__switch_case__succeeded)
#line 878 "ll_backend.switch_case.c"
      *ll_backend__switch_case__HeadVar__1_1 = (MR_Integer) 0;
#line 29 "switch_case.m"
    else
#line 29 "switch_case.m"
      {
#line 29 "switch_case.m"
        MR_String ll_backend__switch_case__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__switch_case__HeadVar__2_2, (MR_Integer) 0)));
#line 29 "switch_case.m"
        MR_Word ll_backend__switch_case__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_case__HeadVar__2_2, (MR_Integer) 1)));
#line 29 "switch_case.m"
        MR_Word ll_backend__switch_case__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_case__HeadVar__2_2, (MR_Integer) 2)));
#line 29 "switch_case.m"
        MR_Word ll_backend__switch_case__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_case__HeadVar__2_2, (MR_Integer) 3)));
#line 29 "switch_case.m"
        MR_Word ll_backend__switch_case__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_case__HeadVar__2_2, (MR_Integer) 4)));
#line 29 "switch_case.m"
        MR_String ll_backend__switch_case__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__switch_case__HeadVar__3_3, (MR_Integer) 0)));
#line 29 "switch_case.m"
        MR_Word ll_backend__switch_case__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_case__HeadVar__3_3, (MR_Integer) 1)));
#line 29 "switch_case.m"
        MR_Word ll_backend__switch_case__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_case__HeadVar__3_3, (MR_Integer) 2)));
#line 29 "switch_case.m"
        MR_Word ll_backend__switch_case__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_case__HeadVar__3_3, (MR_Integer) 3)));
#line 29 "switch_case.m"
        MR_Word ll_backend__switch_case__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_case__HeadVar__3_3, (MR_Integer) 4)));
#line 29 "switch_case.m"
        MR_Word ll_backend__switch_case__V_14_14;

#line 29 "switch_case.m"
        {
#line 29 "switch_case.m"
          mercury__private_builtin__builtin_compare_string_3_p_0(&ll_backend__switch_case__V_14_14, ll_backend__switch_case__V_4_4, ll_backend__switch_case__V_9_9);
        }
#line 912 "ll_backend.switch_case.c"
        ll_backend__switch_case__succeeded = (ll_backend__switch_case__V_14_14 == (MR_Integer) 0);
#line 29 "switch_case.m"
        ll_backend__switch_case__succeeded = !(ll_backend__switch_case__succeeded);
#line 29 "switch_case.m"
        if (ll_backend__switch_case__succeeded)
#line 29 "switch_case.m"
          *ll_backend__switch_case__HeadVar__1_1 = ll_backend__switch_case__V_14_14;
#line 29 "switch_case.m"
        else
#line 29 "switch_case.m"
          {
#line 29 "switch_case.m"
            MR_Word ll_backend__switch_case__V_15_15;

#line 29 "switch_case.m"
            {
#line 29 "switch_case.m"
              hlds__hlds_goal____Compare____hlds_goal_info_0_0(&ll_backend__switch_case__V_15_15, ll_backend__switch_case__V_5_5, ll_backend__switch_case__V_10_10);
            }
#line 932 "ll_backend.switch_case.c"
            ll_backend__switch_case__succeeded = (ll_backend__switch_case__V_15_15 == (MR_Integer) 0);
#line 29 "switch_case.m"
            ll_backend__switch_case__succeeded = !(ll_backend__switch_case__succeeded);
#line 29 "switch_case.m"
            if (ll_backend__switch_case__succeeded)
#line 29 "switch_case.m"
              *ll_backend__switch_case__HeadVar__1_1 = ll_backend__switch_case__V_15_15;
#line 29 "switch_case.m"
            else
#line 29 "switch_case.m"
              {
#line 29 "switch_case.m"
                MR_Word ll_backend__switch_case__V_16_16;
#line 29 "switch_case.m"
                MR_Integer ll_backend__switch_case__V_25_25 = (MR_Integer) ll_backend__switch_case__V_6_6;
#line 29 "switch_case.m"
                MR_Integer ll_backend__switch_case__V_26_26 = (MR_Integer) ll_backend__switch_case__V_11_11;

#line 29 "switch_case.m"
                {
#line 29 "switch_case.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__switch_case__V_16_16, ll_backend__switch_case__V_25_25, ll_backend__switch_case__V_26_26);
                }
#line 956 "ll_backend.switch_case.c"
                ll_backend__switch_case__succeeded = (ll_backend__switch_case__V_16_16 == (MR_Integer) 0);
#line 29 "switch_case.m"
                ll_backend__switch_case__succeeded = !(ll_backend__switch_case__succeeded);
#line 29 "switch_case.m"
                if (ll_backend__switch_case__succeeded)
#line 29 "switch_case.m"
                  *ll_backend__switch_case__HeadVar__1_1 = ll_backend__switch_case__V_16_16;
#line 29 "switch_case.m"
                else
#line 29 "switch_case.m"
                  {
#line 29 "switch_case.m"
                    MR_Word ll_backend__switch_case__V_17_17;

#line 29 "switch_case.m"
                    {
#line 29 "switch_case.m"
                      ll_backend__code_loc_dep____Compare____position_info_0_0(&ll_backend__switch_case__V_17_17, ll_backend__switch_case__V_7_7, ll_backend__switch_case__V_12_12);
                    }
#line 976 "ll_backend.switch_case.c"
                    ll_backend__switch_case__succeeded = (ll_backend__switch_case__V_17_17 == (MR_Integer) 0);
#line 29 "switch_case.m"
                    ll_backend__switch_case__succeeded = !(ll_backend__switch_case__succeeded);
#line 29 "switch_case.m"
                    if (ll_backend__switch_case__succeeded)
#line 29 "switch_case.m"
                      *ll_backend__switch_case__HeadVar__1_1 = ll_backend__switch_case__V_17_17;
#line 29 "switch_case.m"
                    else
#line 29 "switch_case.m"
                      {
#line 29 "switch_case.m"
                        ll_backend__llds____Compare____label_0_0(ll_backend__switch_case__HeadVar__1_1, ll_backend__switch_case__V_8_8, ll_backend__switch_case__V_13_13);
#line 29 "switch_case.m"
                        return;
                      }
#line 29 "switch_case.m"
                  }
#line 29 "switch_case.m"
              }
#line 29 "switch_case.m"
          }
#line 29 "switch_case.m"
      }
#line 29 "switch_case.m"
  }
#line 29 "switch_case.m"
}

#line 29 "switch_case.m"
MR_bool MR_CALL 
ll_backend__switch_case____Unify____represent_params_0_0(
#line 29 "switch_case.m"
  MR_Word ll_backend__switch_case__HeadVar__1_1,
#line 29 "switch_case.m"
  MR_Word ll_backend__switch_case__HeadVar__2_2)
#line 29 "switch_case.m"
{
#line 29 "switch_case.m"
  {
#line 29 "switch_case.m"
    MR_bool ll_backend__switch_case__succeeded;
#line 29 "switch_case.m"
    MR_Integer ll_backend__switch_case__CastX_13 = (MR_Integer) ll_backend__switch_case__HeadVar__1_1;
#line 29 "switch_case.m"
    MR_Integer ll_backend__switch_case__CastY_14 = (MR_Integer) ll_backend__switch_case__HeadVar__2_2;

#line 29 "switch_case.m"
    ll_backend__switch_case__succeeded = (ll_backend__switch_case__CastX_13 == ll_backend__switch_case__CastY_14);
#line 29 "switch_case.m"
    if (ll_backend__switch_case__succeeded)
#line 29 "switch_case.m"
      ll_backend__switch_case__succeeded = MR_TRUE;
#line 29 "switch_case.m"
    else
#line 29 "switch_case.m"
      {
#line 29 "switch_case.m"
        MR_String ll_backend__switch_case__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__switch_case__HeadVar__1_1, (MR_Integer) 0)));
#line 29 "switch_case.m"
        MR_Word ll_backend__switch_case__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_case__HeadVar__1_1, (MR_Integer) 1)));
#line 29 "switch_case.m"
        MR_Word ll_backend__switch_case__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_case__HeadVar__1_1, (MR_Integer) 2)));
#line 29 "switch_case.m"
        MR_Word ll_backend__switch_case__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_case__HeadVar__1_1, (MR_Integer) 3)));
#line 29 "switch_case.m"
        MR_Word ll_backend__switch_case__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_case__HeadVar__1_1, (MR_Integer) 4)));
#line 29 "switch_case.m"
        MR_String ll_backend__switch_case__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__switch_case__HeadVar__2_2, (MR_Integer) 0)));
#line 29 "switch_case.m"
        MR_Word ll_backend__switch_case__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_case__HeadVar__2_2, (MR_Integer) 1)));
#line 29 "switch_case.m"
        MR_Word ll_backend__switch_case__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_case__HeadVar__2_2, (MR_Integer) 2)));
#line 29 "switch_case.m"
        MR_Word ll_backend__switch_case__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_case__HeadVar__2_2, (MR_Integer) 3)));
#line 29 "switch_case.m"
        MR_Word ll_backend__switch_case__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_case__HeadVar__2_2, (MR_Integer) 4)));

#line 1055 "ll_backend.switch_case.c"
        ll_backend__switch_case__succeeded = (strcmp(ll_backend__switch_case__V_3_3, ll_backend__switch_case__V_8_8) == 0);
#line 29 "switch_case.m"
        if (ll_backend__switch_case__succeeded)
#line 29 "switch_case.m"
          {
#line 1061 "ll_backend.switch_case.c"
            {
#line 1063 "ll_backend.switch_case.c"
              ll_backend__switch_case__succeeded = hlds__hlds_goal____Unify____hlds_goal_info_0_0(ll_backend__switch_case__V_4_4, ll_backend__switch_case__V_9_9);
            }
#line 29 "switch_case.m"
            if (ll_backend__switch_case__succeeded)
#line 29 "switch_case.m"
              {
#line 1070 "ll_backend.switch_case.c"
                ll_backend__switch_case__succeeded = (ll_backend__switch_case__V_5_5 == ll_backend__switch_case__V_10_10);
#line 29 "switch_case.m"
                if (ll_backend__switch_case__succeeded)
#line 29 "switch_case.m"
                  {
#line 1076 "ll_backend.switch_case.c"
                    {
#line 1078 "ll_backend.switch_case.c"
                      ll_backend__switch_case__succeeded = ll_backend__code_loc_dep____Unify____position_info_0_0(ll_backend__switch_case__V_6_6, ll_backend__switch_case__V_11_11);
                    }
#line 29 "switch_case.m"
                    if (ll_backend__switch_case__succeeded)
#line 1083 "ll_backend.switch_case.c"
                      {
#line 1085 "ll_backend.switch_case.c"
                        return ll_backend__switch_case__succeeded = ll_backend__llds____Unify____label_0_0(ll_backend__switch_case__V_7_7, ll_backend__switch_case__V_12_12);
                      }
#line 29 "switch_case.m"
                  }
#line 29 "switch_case.m"
              }
#line 29 "switch_case.m"
          }
#line 29 "switch_case.m"
      }
#line 29 "switch_case.m"
    return ll_backend__switch_case__succeeded;
#line 29 "switch_case.m"
  }
#line 29 "switch_case.m"
}

#line 49 "switch_case.m"
void MR_CALL 
ll_backend__switch_case____Compare____case_label_map_0_0(
#line 49 "switch_case.m"
  MR_Word * ll_backend__switch_case__HeadVar__1_1,
#line 49 "switch_case.m"
  MR_Word ll_backend__switch_case__HeadVar__2_2,
#line 49 "switch_case.m"
  MR_Word ll_backend__switch_case__HeadVar__3_3)
#line 49 "switch_case.m"
{
#line 49 "switch_case.m"
  {
#line 49 "switch_case.m"
    MR_bool ll_backend__switch_case__succeeded;
#line 49 "switch_case.m"
    MR_Word ll_backend__switch_case__Cast_HeadVar1_4 = ll_backend__switch_case__HeadVar__2_2;
#line 49 "switch_case.m"
    MR_Word ll_backend__switch_case__Cast_HeadVar2_5 = ll_backend__switch_case__HeadVar__3_3;

#line 49 "switch_case.m"
    {
#line 49 "switch_case.m"
      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__switch_case_scalar_common_2[0], ll_backend__switch_case__HeadVar__1_1, ((MR_Box) (ll_backend__switch_case__Cast_HeadVar1_4)), ((MR_Box) (ll_backend__switch_case__Cast_HeadVar2_5)));
#line 49 "switch_case.m"
      return;
    }
#line 49 "switch_case.m"
  }
#line 49 "switch_case.m"
}

#line 49 "switch_case.m"
MR_bool MR_CALL 
ll_backend__switch_case____Unify____case_label_map_0_0(
#line 49 "switch_case.m"
  MR_Word ll_backend__switch_case__HeadVar__1_1,
#line 49 "switch_case.m"
  MR_Word ll_backend__switch_case__HeadVar__2_2)
#line 49 "switch_case.m"
{
#line 49 "switch_case.m"
  {
#line 49 "switch_case.m"
    MR_bool ll_backend__switch_case__succeeded;
#line 49 "switch_case.m"
    MR_Word ll_backend__switch_case__Cast_HeadVar1_3 = ll_backend__switch_case__HeadVar__1_1;
#line 49 "switch_case.m"
    MR_Word ll_backend__switch_case__Cast_HeadVar2_4 = ll_backend__switch_case__HeadVar__2_2;

#line 49 "switch_case.m"
    {
#line 49 "switch_case.m"
      return ll_backend__switch_case__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__switch_case_scalar_common_2[0], ((MR_Box) (ll_backend__switch_case__Cast_HeadVar1_3)), ((MR_Box) (ll_backend__switch_case__Cast_HeadVar2_4)));
    }
#line 49 "switch_case.m"
    return ll_backend__switch_case__succeeded;
#line 49 "switch_case.m"
  }
#line 49 "switch_case.m"
}

#line 42 "switch_case.m"
void MR_CALL 
ll_backend__switch_case____Compare____case_label_info_0_0(
#line 42 "switch_case.m"
  MR_Word * ll_backend__switch_case__HeadVar__1_1,
#line 42 "switch_case.m"
  MR_Word ll_backend__switch_case__HeadVar__2_2,
#line 42 "switch_case.m"
  MR_Word ll_backend__switch_case__HeadVar__3_3)
#line 42 "switch_case.m"
{
#line 42 "switch_case.m"
  {
#line 42 "switch_case.m"
    MR_bool ll_backend__switch_case__succeeded;
#line 42 "switch_case.m"
    MR_Integer ll_backend__switch_case__CastX_12 = (MR_Integer) ll_backend__switch_case__HeadVar__2_2;
#line 42 "switch_case.m"
    MR_Integer ll_backend__switch_case__CastY_13 = (MR_Integer) ll_backend__switch_case__HeadVar__3_3;

#line 42 "switch_case.m"
    ll_backend__switch_case__succeeded = (ll_backend__switch_case__CastX_12 == ll_backend__switch_case__CastY_13);
#line 42 "switch_case.m"
    if (ll_backend__switch_case__succeeded)
#line 1189 "ll_backend.switch_case.c"
      *ll_backend__switch_case__HeadVar__1_1 = (MR_Integer) 0;
#line 42 "switch_case.m"
    else
#line 42 "switch_case.m"
      {
#line 42 "switch_case.m"
        MR_String ll_backend__switch_case__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__switch_case__HeadVar__2_2, (MR_Integer) 0)));
#line 42 "switch_case.m"
        MR_Word ll_backend__switch_case__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_case__HeadVar__2_2, (MR_Integer) 1)));
#line 42 "switch_case.m"
        MR_Word ll_backend__switch_case__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_case__HeadVar__2_2, (MR_Integer) 2)));
#line 42 "switch_case.m"
        MR_String ll_backend__switch_case__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__switch_case__HeadVar__3_3, (MR_Integer) 0)));
#line 42 "switch_case.m"
        MR_Word ll_backend__switch_case__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_case__HeadVar__3_3, (MR_Integer) 1)));
#line 42 "switch_case.m"
        MR_Word ll_backend__switch_case__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_case__HeadVar__3_3, (MR_Integer) 2)));
#line 42 "switch_case.m"
        MR_Word ll_backend__switch_case__V_10_10;

#line 42 "switch_case.m"
        {
#line 42 "switch_case.m"
          mercury__private_builtin__builtin_compare_string_3_p_0(&ll_backend__switch_case__V_10_10, ll_backend__switch_case__V_4_4, ll_backend__switch_case__V_7_7);
        }
#line 1215 "ll_backend.switch_case.c"
        ll_backend__switch_case__succeeded = (ll_backend__switch_case__V_10_10 == (MR_Integer) 0);
#line 42 "switch_case.m"
        ll_backend__switch_case__succeeded = !(ll_backend__switch_case__succeeded);
#line 42 "switch_case.m"
        if (ll_backend__switch_case__succeeded)
#line 42 "switch_case.m"
          *ll_backend__switch_case__HeadVar__1_1 = ll_backend__switch_case__V_10_10;
#line 42 "switch_case.m"
        else
#line 42 "switch_case.m"
          {
#line 42 "switch_case.m"
            MR_Word ll_backend__switch_case__V_11_11;

#line 42 "switch_case.m"
            {
#line 42 "switch_case.m"
              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__switch_case_scalar_common_1[0], &ll_backend__switch_case__V_11_11, ((MR_Box) (ll_backend__switch_case__V_5_5)), ((MR_Box) (ll_backend__switch_case__V_8_8)));
            }
#line 1235 "ll_backend.switch_case.c"
            ll_backend__switch_case__succeeded = (ll_backend__switch_case__V_11_11 == (MR_Integer) 0);
#line 42 "switch_case.m"
            ll_backend__switch_case__succeeded = !(ll_backend__switch_case__succeeded);
#line 42 "switch_case.m"
            if (ll_backend__switch_case__succeeded)
#line 42 "switch_case.m"
              *ll_backend__switch_case__HeadVar__1_1 = ll_backend__switch_case__V_11_11;
#line 42 "switch_case.m"
            else
#line 42 "switch_case.m"
              {
#line 42 "switch_case.m"
                MR_Integer ll_backend__switch_case__V_17_17 = (MR_Integer) ll_backend__switch_case__V_6_6;
#line 42 "switch_case.m"
                MR_Integer ll_backend__switch_case__V_18_18 = (MR_Integer) ll_backend__switch_case__V_9_9;

#line 42 "switch_case.m"
                {
#line 42 "switch_case.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(ll_backend__switch_case__HeadVar__1_1, ll_backend__switch_case__V_17_17, ll_backend__switch_case__V_18_18);
#line 42 "switch_case.m"
                  return;
                }
#line 42 "switch_case.m"
              }
#line 42 "switch_case.m"
          }
#line 42 "switch_case.m"
      }
#line 42 "switch_case.m"
  }
#line 42 "switch_case.m"
}

#line 42 "switch_case.m"
MR_bool MR_CALL 
ll_backend__switch_case____Unify____case_label_info_0_0(
#line 42 "switch_case.m"
  MR_Word ll_backend__switch_case__HeadVar__1_1,
#line 42 "switch_case.m"
  MR_Word ll_backend__switch_case__HeadVar__2_2)
#line 42 "switch_case.m"
{
#line 42 "switch_case.m"
  {
#line 42 "switch_case.m"
    MR_bool ll_backend__switch_case__succeeded;
#line 42 "switch_case.m"
    MR_Integer ll_backend__switch_case__CastX_9 = (MR_Integer) ll_backend__switch_case__HeadVar__1_1;
#line 42 "switch_case.m"
    MR_Integer ll_backend__switch_case__CastY_10 = (MR_Integer) ll_backend__switch_case__HeadVar__2_2;

#line 42 "switch_case.m"
    ll_backend__switch_case__succeeded = (ll_backend__switch_case__CastX_9 == ll_backend__switch_case__CastY_10);
#line 42 "switch_case.m"
    if (ll_backend__switch_case__succeeded)
#line 42 "switch_case.m"
      ll_backend__switch_case__succeeded = MR_TRUE;
#line 42 "switch_case.m"
    else
#line 42 "switch_case.m"
      {
#line 42 "switch_case.m"
        MR_Word ll_backend__switch_case__TypeInfo_11_11;
#line 42 "switch_case.m"
        MR_String ll_backend__switch_case__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__switch_case__HeadVar__1_1, (MR_Integer) 0)));
#line 42 "switch_case.m"
        MR_Word ll_backend__switch_case__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_case__HeadVar__1_1, (MR_Integer) 1)));
#line 42 "switch_case.m"
        MR_Word ll_backend__switch_case__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_case__HeadVar__1_1, (MR_Integer) 2)));
#line 42 "switch_case.m"
        MR_String ll_backend__switch_case__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__switch_case__HeadVar__2_2, (MR_Integer) 0)));
#line 42 "switch_case.m"
        MR_Word ll_backend__switch_case__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_case__HeadVar__2_2, (MR_Integer) 1)));
#line 42 "switch_case.m"
        MR_Word ll_backend__switch_case__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_case__HeadVar__2_2, (MR_Integer) 2)));

#line 1313 "ll_backend.switch_case.c"
        ll_backend__switch_case__succeeded = (strcmp(ll_backend__switch_case__V_3_3, ll_backend__switch_case__V_6_6) == 0);
#line 42 "switch_case.m"
        if (ll_backend__switch_case__succeeded)
#line 42 "switch_case.m"
          {
#line 1319 "ll_backend.switch_case.c"
            ll_backend__switch_case__TypeInfo_11_11 = (MR_Word) &ll_backend__switch_case_scalar_common_1[0];
#line 1321 "ll_backend.switch_case.c"
            {
#line 1323 "ll_backend.switch_case.c"
              ll_backend__switch_case__succeeded = mercury__builtin__unify_2_p_0(ll_backend__switch_case__TypeInfo_11_11, ((MR_Box) (ll_backend__switch_case__V_4_4)), ((MR_Box) (ll_backend__switch_case__V_7_7)));
            }
#line 42 "switch_case.m"
            if (ll_backend__switch_case__succeeded)
#line 1328 "ll_backend.switch_case.c"
              ll_backend__switch_case__succeeded = (ll_backend__switch_case__V_5_5 == ll_backend__switch_case__V_8_8);
#line 42 "switch_case.m"
          }
#line 42 "switch_case.m"
      }
#line 42 "switch_case.m"
    return ll_backend__switch_case__succeeded;
#line 42 "switch_case.m"
  }
#line 42 "switch_case.m"
}

#line 38 "switch_case.m"
void MR_CALL 
ll_backend__switch_case____Compare____case_code_included_0_0(
#line 38 "switch_case.m"
  MR_Word * ll_backend__switch_case__HeadVar__1_1,
#line 38 "switch_case.m"
  MR_Word ll_backend__switch_case__HeadVar__2_2,
#line 38 "switch_case.m"
  MR_Word ll_backend__switch_case__HeadVar__3_3)
#line 38 "switch_case.m"
{
#line 38 "switch_case.m"
  {
#line 38 "switch_case.m"
    MR_bool ll_backend__switch_case__succeeded;
#line 38 "switch_case.m"
    MR_Integer ll_backend__switch_case__Cast_HeadVar1_4 = (MR_Integer) ll_backend__switch_case__HeadVar__2_2;
#line 38 "switch_case.m"
    MR_Integer ll_backend__switch_case__Cast_HeadVar2_5 = (MR_Integer) ll_backend__switch_case__HeadVar__3_3;

#line 38 "switch_case.m"
    {
#line 38 "switch_case.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(ll_backend__switch_case__HeadVar__1_1, ll_backend__switch_case__Cast_HeadVar1_4, ll_backend__switch_case__Cast_HeadVar2_5);
#line 38 "switch_case.m"
      return;
    }
#line 38 "switch_case.m"
  }
#line 38 "switch_case.m"
}

#line 38 "switch_case.m"
MR_bool MR_CALL 
ll_backend__switch_case____Unify____case_code_included_0_0(
#line 38 "switch_case.m"
  MR_Word ll_backend__switch_case__HeadVar__2_1,
#line 38 "switch_case.m"
  MR_Word ll_backend__switch_case__HeadVar__2_2)
#line 38 "switch_case.m"
{
#line 1382 "ll_backend.switch_case.c"
  {
#line 1384 "ll_backend.switch_case.c"
    MR_bool ll_backend__switch_case__succeeded = (ll_backend__switch_case__HeadVar__2_1 == ll_backend__switch_case__HeadVar__2_2);

#line 1387 "ll_backend.switch_case.c"
    return ll_backend__switch_case__succeeded;
#line 1389 "ll_backend.switch_case.c"
  }
#line 38 "switch_case.m"
}

#line 72 "switch_case.m"
void MR_CALL 
ll_backend__switch_case__add_remaining_case_4_p_0(
#line 72 "switch_case.m"
  MR_Word ll_backend__switch_case___Label_5,
#line 72 "switch_case.m"
  MR_Word ll_backend__switch_case__CaseInfo_6,
#line 72 "switch_case.m"
  MR_Word ll_backend__switch_case__STATE_VARIABLE_Code_0_11,
#line 72 "switch_case.m"
  MR_Word * ll_backend__switch_case__STATE_VARIABLE_Code_12)
#line 72 "switch_case.m"
{
#line 136 "switch_case.m"
  {
#line 136 "switch_case.m"
    MR_bool ll_backend__switch_case__succeeded;

#line 136 "switch_case.m"
    {
#line 136 "switch_case.m"
      ll_backend__switch_case__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_114_101_109_97_105_110_105_110_103_95_99_97_115_101_95_95_91_49_93_95_48_4_p_0(ll_backend__switch_case__CaseInfo_6, ll_backend__switch_case__STATE_VARIABLE_Code_0_11, ll_backend__switch_case__STATE_VARIABLE_Code_12);
#line 136 "switch_case.m"
      return;
    }
#line 136 "switch_case.m"
  }
#line 72 "switch_case.m"
}

#line 69 "switch_case.m"
void MR_CALL 
ll_backend__switch_case__generate_case_code_or_jump_4_p_0(
#line 69 "switch_case.m"
  MR_Word ll_backend__switch_case__CaseLabel_5,
#line 69 "switch_case.m"
  MR_Word * ll_backend__switch_case__Code_6,
#line 69 "switch_case.m"
  MR_Word ll_backend__switch_case__STATE_VARIABLE_CaseLabelMap_0_13,
#line 69 "switch_case.m"
  MR_Word * ll_backend__switch_case__STATE_VARIABLE_CaseLabelMap_14)
#line 69 "switch_case.m"
{
#line 118 "switch_case.m"
  {
#line 118 "switch_case.m"
    MR_bool ll_backend__switch_case__succeeded;
#line 118 "switch_case.m"
    MR_Word ll_backend__switch_case__TypeCtorInfo_25_25 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0;
#line 118 "switch_case.m"
    MR_Word ll_backend__switch_case__TypeCtorInfo_26_26 = (MR_Word) &ll_backend__switch_case__ll_backend__switch_case__type_ctor_info_case_label_info_0;
#line 118 "switch_case.m"
    MR_Word ll_backend__switch_case__CaseInfo0_8;
#line 118 "switch_case.m"
    MR_String ll_backend__switch_case__Comment_9;
#line 118 "switch_case.m"
    MR_Word ll_backend__switch_case__CaseCode_10;
#line 118 "switch_case.m"
    MR_Word ll_backend__switch_case__CaseIncluded_11;
#line 119 "switch_case.m"
    MR_Box ll_backend__switch_case__conv0_CaseInfo0_8;

#line 119 "switch_case.m"
    {
#line 119 "switch_case.m"
      mercury__map__lookup_3_p_0(ll_backend__switch_case__TypeCtorInfo_25_25, ll_backend__switch_case__TypeCtorInfo_26_26, ll_backend__switch_case__STATE_VARIABLE_CaseLabelMap_0_13, ((MR_Box) (ll_backend__switch_case__CaseLabel_5)), &ll_backend__switch_case__conv0_CaseInfo0_8);
    }
#line 119 "switch_case.m"
    ll_backend__switch_case__CaseInfo0_8 = ((MR_Word) ll_backend__switch_case__conv0_CaseInfo0_8);
#line 120 "switch_case.m"
    ll_backend__switch_case__Comment_9 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__switch_case__CaseInfo0_8, (MR_Integer) 0)));
#line 120 "switch_case.m"
    ll_backend__switch_case__CaseCode_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_case__CaseInfo0_8, (MR_Integer) 1)));
#line 120 "switch_case.m"
    ll_backend__switch_case__CaseIncluded_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_case__CaseInfo0_8, (MR_Integer) 2)));
#line 127 "switch_case.m"
#line 127 "switch_case.m"
    switch (ll_backend__switch_case__CaseIncluded_11) {
#line 127 "switch_case.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 127 "switch_case.m"
      case (MR_Integer) 1:
#line 128 "switch_case.m"
        {
#line 128 "switch_case.m"
          MR_Word ll_backend__switch_case__V_15_15;
#line 128 "switch_case.m"
          MR_Word ll_backend__switch_case__V_16_16;
#line 128 "switch_case.m"
          MR_Word ll_backend__switch_case__V_17_17;
#line 128 "switch_case.m"
          MR_String ll_backend__switch_case__V_18_18;

#line 132 "switch_case.m"
          {
#line 132 "switch_case.m"
            ll_backend__switch_case__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 132 "switch_case.m"
            MR_hl_field(MR_mktag(1), ll_backend__switch_case__V_17_17, 0) = ((MR_Box) (ll_backend__switch_case__CaseLabel_5));
#line 132 "switch_case.m"
          }
#line 132 "switch_case.m"
          {
#line 132 "switch_case.m"
            ll_backend__switch_case__V_16_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 132 "switch_case.m"
            MR_hl_field(MR_mktag(3), ll_backend__switch_case__V_16_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 132 "switch_case.m"
            MR_hl_field(MR_mktag(3), ll_backend__switch_case__V_16_16, 1) = ((MR_Box) (ll_backend__switch_case__V_17_17));
#line 132 "switch_case.m"
          }
#line 132 "switch_case.m"
          {
#line 132 "switch_case.m"
            ll_backend__switch_case__V_18_18 = mercury__string__f_43_43_2_f_0((MR_String) "goto ", ll_backend__switch_case__Comment_9);
          }
#line 132 "switch_case.m"
          {
#line 132 "switch_case.m"
            ll_backend__switch_case__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 132 "switch_case.m"
            MR_hl_field(MR_mktag(0), ll_backend__switch_case__V_15_15, 0) = ((MR_Box) (ll_backend__switch_case__V_16_16));
#line 132 "switch_case.m"
            MR_hl_field(MR_mktag(0), ll_backend__switch_case__V_15_15, 1) = ((MR_Box) (ll_backend__switch_case__V_18_18));
#line 132 "switch_case.m"
          }
#line 131 "switch_case.m"
          {
#line 131 "switch_case.m"
            *ll_backend__switch_case__Code_6 = mercury__cord__singleton_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ((MR_Box) (ll_backend__switch_case__V_15_15)));
          }
#line 128 "switch_case.m"
          *ll_backend__switch_case__STATE_VARIABLE_CaseLabelMap_14 = ll_backend__switch_case__STATE_VARIABLE_CaseLabelMap_0_13;
#line 128 "switch_case.m"
        }
#line 127 "switch_case.m"
        break;
#line 127 "switch_case.m"
      case (MR_Integer) 0:
#line 122 "switch_case.m"
        {
#line 122 "switch_case.m"
          MR_Word ll_backend__switch_case__CaseInfo_12;

#line 123 "switch_case.m"
          *ll_backend__switch_case__Code_6 = ll_backend__switch_case__CaseCode_10;
#line 124 "switch_case.m"
          {
#line 124 "switch_case.m"
            ll_backend__switch_case__CaseInfo_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 124 "switch_case.m"
            MR_hl_field(MR_mktag(0), ll_backend__switch_case__CaseInfo_12, 0) = ((MR_Box) (ll_backend__switch_case__Comment_9));
#line 124 "switch_case.m"
            MR_hl_field(MR_mktag(0), ll_backend__switch_case__CaseInfo_12, 1) = ((MR_Box) (ll_backend__switch_case__CaseCode_10));
#line 124 "switch_case.m"
            MR_hl_field(MR_mktag(0), ll_backend__switch_case__CaseInfo_12, 2) = ((MR_Box) ((MR_Integer) 1));
#line 124 "switch_case.m"
          }
#line 126 "switch_case.m"
          {
#line 126 "switch_case.m"
            mercury__map__det_update_4_p_0(ll_backend__switch_case__TypeCtorInfo_25_25, ll_backend__switch_case__TypeCtorInfo_26_26, ((MR_Box) (ll_backend__switch_case__CaseLabel_5)), ((MR_Box) (ll_backend__switch_case__CaseInfo_12)), ll_backend__switch_case__STATE_VARIABLE_CaseLabelMap_0_13, ll_backend__switch_case__STATE_VARIABLE_CaseLabelMap_14);
#line 126 "switch_case.m"
            return;
          }
#line 122 "switch_case.m"
        }
#line 127 "switch_case.m"
        break;
#line 127 "switch_case.m"
    }
#line 118 "switch_case.m"
  }
#line 69 "switch_case.m"
}

#line 96 "switch_case.m"
static void MR_CALL 
ll_backend__switch_case__represent_tagged_case_for_llds_9_p_0_1(
#line 96 "switch_case.m"
  MR_Box ll_backend__switch_case__closure_arg,
#line 96 "switch_case.m"
  MR_Box ll_backend__switch_case__wrapper_arg_1,
#line 96 "switch_case.m"
  MR_Box * ll_backend__switch_case__wrapper_arg_2,
#line 96 "switch_case.m"
  MR_Box * ll_backend__switch_case__wrapper_arg_3)
#line 96 "switch_case.m"
{
#line 96 "switch_case.m"
  {
#line 96 "switch_case.m"
    MR_Box ll_backend__switch_case__closure = ll_backend__switch_case__closure_arg;
#line 96 "switch_case.m"
    MR_String ll_backend__switch_case__conv1_HeadVar__2_2;
#line 96 "switch_case.m"
    MR_Word ll_backend__switch_case__conv0_HeadVar__3_3;

#line 96 "switch_case.m"
    {
#line 96 "switch_case.m"
      hlds__hlds_out__hlds_out_goal__project_cons_name_and_tag_3_p_0(((MR_Word) ll_backend__switch_case__wrapper_arg_1), &ll_backend__switch_case__conv1_HeadVar__2_2, &ll_backend__switch_case__conv0_HeadVar__3_3);
    }
#line 96 "switch_case.m"
    *ll_backend__switch_case__wrapper_arg_2 = ((MR_Box) (ll_backend__switch_case__conv1_HeadVar__2_2));
#line 96 "switch_case.m"
    *ll_backend__switch_case__wrapper_arg_3 = ((MR_Box) (ll_backend__switch_case__conv0_HeadVar__3_3));
#line 96 "switch_case.m"
  }
#line 96 "switch_case.m"
}

#line 63 "switch_case.m"
void MR_CALL 
ll_backend__switch_case__represent_tagged_case_for_llds_9_p_0(
#line 63 "switch_case.m"
  MR_Word ll_backend__switch_case__Params_10,
#line 63 "switch_case.m"
  MR_Word ll_backend__switch_case__TaggedCase_11,
#line 63 "switch_case.m"
  MR_Word * ll_backend__switch_case__Label_12,
#line 63 "switch_case.m"
  MR_Word ll_backend__switch_case__STATE_VARIABLE_CaseLabelMap_0_39,
#line 63 "switch_case.m"
  MR_Word * ll_backend__switch_case__STATE_VARIABLE_CaseLabelMap_40,
#line 63 "switch_case.m"
  MR_Word ll_backend__switch_case__STATE_VARIABLE_MaybeEnd_0_41,
#line 63 "switch_case.m"
  MR_Word * ll_backend__switch_case__STATE_VARIABLE_MaybeEnd_42,
#line 63 "switch_case.m"
  MR_Word ll_backend__switch_case__STATE_VARIABLE_CI_0_43,
#line 63 "switch_case.m"
  MR_Word * ll_backend__switch_case__STATE_VARIABLE_CI_44)
#line 63 "switch_case.m"
{
#line 93 "switch_case.m"
  {
#line 93 "switch_case.m"
    MR_bool ll_backend__switch_case__succeeded;
#line 93 "switch_case.m"
    MR_Word ll_backend__switch_case__TypeCtorInfo_71_71;
#line 93 "switch_case.m"
    MR_String ll_backend__switch_case__SwitchVarName_17 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__switch_case__Params_10, (MR_Integer) 0)));
#line 93 "switch_case.m"
    MR_Word ll_backend__switch_case__SwitchGoalInfo_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_case__Params_10, (MR_Integer) 1)));
#line 93 "switch_case.m"
    MR_Word ll_backend__switch_case__CodeModel_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_case__Params_10, (MR_Integer) 2)));
#line 93 "switch_case.m"
    MR_Word ll_backend__switch_case__BranchStart_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_case__Params_10, (MR_Integer) 3)));
#line 93 "switch_case.m"
    MR_Word ll_backend__switch_case__EndLabel_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_case__Params_10, (MR_Integer) 4)));
#line 93 "switch_case.m"
    MR_Word ll_backend__switch_case__MainTaggedConsId_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_case__TaggedCase_11, (MR_Integer) 0)));
#line 93 "switch_case.m"
    MR_Word ll_backend__switch_case__OtherTaggedConsIds_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_case__TaggedCase_11, (MR_Integer) 1)));
#line 93 "switch_case.m"
    MR_Word ll_backend__switch_case__Goal_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_case__TaggedCase_11, (MR_Integer) 3)));
#line 93 "switch_case.m"
    MR_String ll_backend__switch_case__MainConsName_26;
#line 93 "switch_case.m"
    MR_Word ll_backend__switch_case__OtherConsNames_28;
#line 93 "switch_case.m"
    MR_String ll_backend__switch_case__Comment_30;
#line 93 "switch_case.m"
    MR_Word ll_backend__switch_case__LabelCode_31;
#line 93 "switch_case.m"
    MR_Word ll_backend__switch_case__TraceCode_32;
#line 93 "switch_case.m"
    MR_Word ll_backend__switch_case__GoalCode_33;
#line 93 "switch_case.m"
    MR_Word ll_backend__switch_case__StoreMap_34;
#line 93 "switch_case.m"
    MR_Word ll_backend__switch_case__SaveCode_35;
#line 93 "switch_case.m"
    MR_Word ll_backend__switch_case__GotoEndCode_36;
#line 93 "switch_case.m"
    MR_Word ll_backend__switch_case__Code_37;
#line 93 "switch_case.m"
    MR_Word ll_backend__switch_case__CaseInfo_38;
#line 93 "switch_case.m"
    MR_Word ll_backend__switch_case__STATE_VARIABLE_CLD_46_46;
#line 93 "switch_case.m"
    MR_Word ll_backend__switch_case__STATE_VARIABLE_CI_47_47;
#line 93 "switch_case.m"
    MR_Word ll_backend__switch_case__V_48_48;
#line 93 "switch_case.m"
    MR_Word ll_backend__switch_case__V_49_49;
#line 93 "switch_case.m"
    MR_Word ll_backend__switch_case__STATE_VARIABLE_CI_50_50;
#line 93 "switch_case.m"
    MR_Word ll_backend__switch_case__STATE_VARIABLE_CLD_51_51;
#line 93 "switch_case.m"
    MR_Word ll_backend__switch_case__STATE_VARIABLE_CLD_53_53;
#line 93 "switch_case.m"
    MR_Word ll_backend__switch_case__V_55_55;
#line 93 "switch_case.m"
    MR_Word ll_backend__switch_case__V_56_56;
#line 93 "switch_case.m"
    MR_Word ll_backend__switch_case__V_57_57;
#line 93 "switch_case.m"
    MR_String ll_backend__switch_case__V_58_58;
#line 93 "switch_case.m"
    MR_Word ll_backend__switch_case__V_60_60;
#line 93 "switch_case.m"
    MR_Word ll_backend__switch_case__V_61_61;
#line 93 "switch_case.m"
    MR_Word ll_backend__switch_case__V_62_62;
#line 94 "switch_case.m"
    MR_Word ll_backend__switch_case__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_case__TaggedCase_11, (MR_Integer) 2)));
#line 95 "switch_case.m"
    MR_Word ll_backend__switch_case__V_27_27;
#line 96 "switch_case.m"
    MR_Word ll_backend__switch_case__V_29_29;

#line 95 "switch_case.m"
    {
#line 95 "switch_case.m"
      hlds__hlds_out__hlds_out_goal__project_cons_name_and_tag_3_p_0(ll_backend__switch_case__MainTaggedConsId_22, &ll_backend__switch_case__MainConsName_26, &ll_backend__switch_case__V_27_27);
    }
#line 96 "switch_case.m"
    {
#line 96 "switch_case.m"
      mercury__list__map2_4_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0, (MR_Word) &ll_backend__switch_case_scalar_common_2[1], ll_backend__switch_case__OtherTaggedConsIds_23, &ll_backend__switch_case__OtherConsNames_28, &ll_backend__switch_case__V_29_29);
    }
#line 98 "switch_case.m"
    {
#line 98 "switch_case.m"
      ll_backend__switch_case__Comment_30 = hlds__hlds_out__hlds_out_goal__case_comment_3_f_0(ll_backend__switch_case__SwitchVarName_17, ll_backend__switch_case__MainConsName_26, ll_backend__switch_case__OtherConsNames_28);
    }
#line 99 "switch_case.m"
    {
#line 99 "switch_case.m"
      ll_backend__code_loc_dep__reset_to_position_3_p_0(ll_backend__switch_case__BranchStart_20, ll_backend__switch_case__STATE_VARIABLE_CI_0_43, &ll_backend__switch_case__STATE_VARIABLE_CLD_46_46);
    }
#line 100 "switch_case.m"
    {
#line 100 "switch_case.m"
      ll_backend__code_info__get_next_label_3_p_0(ll_backend__switch_case__Label_12, ll_backend__switch_case__STATE_VARIABLE_CI_0_43, &ll_backend__switch_case__STATE_VARIABLE_CI_47_47);
    }
#line 1733 "ll_backend.switch_case.c"
    ll_backend__switch_case__TypeCtorInfo_71_71 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 102 "switch_case.m"
    {
#line 102 "switch_case.m"
      ll_backend__switch_case__V_49_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 102 "switch_case.m"
      MR_hl_field(MR_mktag(3), ll_backend__switch_case__V_49_49, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 102 "switch_case.m"
      MR_hl_field(MR_mktag(3), ll_backend__switch_case__V_49_49, 1) = ((MR_Box) (*ll_backend__switch_case__Label_12));
#line 102 "switch_case.m"
    }
#line 102 "switch_case.m"
    {
#line 102 "switch_case.m"
      ll_backend__switch_case__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 102 "switch_case.m"
      MR_hl_field(MR_mktag(0), ll_backend__switch_case__V_48_48, 0) = ((MR_Box) (ll_backend__switch_case__V_49_49));
#line 102 "switch_case.m"
      MR_hl_field(MR_mktag(0), ll_backend__switch_case__V_48_48, 1) = ((MR_Box) (ll_backend__switch_case__Comment_30));
#line 102 "switch_case.m"
    }
#line 101 "switch_case.m"
    {
#line 101 "switch_case.m"
      ll_backend__switch_case__LabelCode_31 = mercury__cord__singleton_1_f_0(ll_backend__switch_case__TypeCtorInfo_71_71, ((MR_Box) (ll_backend__switch_case__V_48_48)));
    }
#line 104 "switch_case.m"
    {
#line 104 "switch_case.m"
      ll_backend__trace_gen__maybe_generate_internal_event_code_7_p_0(ll_backend__switch_case__Goal_25, ll_backend__switch_case__SwitchGoalInfo_18, &ll_backend__switch_case__TraceCode_32, ll_backend__switch_case__STATE_VARIABLE_CI_47_47, &ll_backend__switch_case__STATE_VARIABLE_CI_50_50, ll_backend__switch_case__STATE_VARIABLE_CLD_46_46, &ll_backend__switch_case__STATE_VARIABLE_CLD_51_51);
    }
#line 106 "switch_case.m"
    {
#line 106 "switch_case.m"
      ll_backend__code_gen__generate_goal_7_p_0(ll_backend__switch_case__CodeModel_19, ll_backend__switch_case__Goal_25, &ll_backend__switch_case__GoalCode_33, ll_backend__switch_case__STATE_VARIABLE_CI_50_50, ll_backend__switch_case__STATE_VARIABLE_CI_44, ll_backend__switch_case__STATE_VARIABLE_CLD_51_51, &ll_backend__switch_case__STATE_VARIABLE_CLD_53_53);
    }
#line 107 "switch_case.m"
    {
#line 107 "switch_case.m"
      hlds__hlds_llds__goal_info_get_store_map_2_p_0(ll_backend__switch_case__SwitchGoalInfo_18, &ll_backend__switch_case__StoreMap_34);
    }
#line 108 "switch_case.m"
    {
#line 108 "switch_case.m"
      ll_backend__code_loc_dep__generate_branch_end_6_p_0(ll_backend__switch_case__StoreMap_34, ll_backend__switch_case__STATE_VARIABLE_MaybeEnd_0_41, ll_backend__switch_case__STATE_VARIABLE_MaybeEnd_42, &ll_backend__switch_case__SaveCode_35, *ll_backend__switch_case__STATE_VARIABLE_CI_44, ll_backend__switch_case__STATE_VARIABLE_CLD_53_53);
    }
#line 110 "switch_case.m"
    {
#line 110 "switch_case.m"
      ll_backend__switch_case__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 110 "switch_case.m"
      MR_hl_field(MR_mktag(1), ll_backend__switch_case__V_57_57, 0) = ((MR_Box) (ll_backend__switch_case__EndLabel_21));
#line 110 "switch_case.m"
    }
#line 110 "switch_case.m"
    {
#line 110 "switch_case.m"
      ll_backend__switch_case__V_56_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 110 "switch_case.m"
      MR_hl_field(MR_mktag(3), ll_backend__switch_case__V_56_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 110 "switch_case.m"
      MR_hl_field(MR_mktag(3), ll_backend__switch_case__V_56_56, 1) = ((MR_Box) (ll_backend__switch_case__V_57_57));
#line 110 "switch_case.m"
    }
#line 111 "switch_case.m"
    {
#line 111 "switch_case.m"
      ll_backend__switch_case__V_58_58 = mercury__string__f_43_43_2_f_0((MR_String) "goto end of switch on ", ll_backend__switch_case__SwitchVarName_17);
    }
#line 110 "switch_case.m"
    {
#line 110 "switch_case.m"
      ll_backend__switch_case__V_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 110 "switch_case.m"
      MR_hl_field(MR_mktag(0), ll_backend__switch_case__V_55_55, 0) = ((MR_Box) (ll_backend__switch_case__V_56_56));
#line 110 "switch_case.m"
      MR_hl_field(MR_mktag(0), ll_backend__switch_case__V_55_55, 1) = ((MR_Box) (ll_backend__switch_case__V_58_58));
#line 110 "switch_case.m"
    }
#line 109 "switch_case.m"
    {
#line 109 "switch_case.m"
      ll_backend__switch_case__GotoEndCode_36 = mercury__cord__singleton_1_f_0(ll_backend__switch_case__TypeCtorInfo_71_71, ((MR_Box) (ll_backend__switch_case__V_55_55)));
    }
#line 113 "switch_case.m"
    {
#line 113 "switch_case.m"
      ll_backend__switch_case__V_62_62 = mercury__cord__f_43_43_2_f_0(ll_backend__switch_case__TypeCtorInfo_71_71, ll_backend__switch_case__SaveCode_35, ll_backend__switch_case__GotoEndCode_36);
    }
#line 113 "switch_case.m"
    {
#line 113 "switch_case.m"
      ll_backend__switch_case__V_61_61 = mercury__cord__f_43_43_2_f_0(ll_backend__switch_case__TypeCtorInfo_71_71, ll_backend__switch_case__GoalCode_33, ll_backend__switch_case__V_62_62);
    }
#line 113 "switch_case.m"
    {
#line 113 "switch_case.m"
      ll_backend__switch_case__V_60_60 = mercury__cord__f_43_43_2_f_0(ll_backend__switch_case__TypeCtorInfo_71_71, ll_backend__switch_case__TraceCode_32, ll_backend__switch_case__V_61_61);
    }
#line 113 "switch_case.m"
    {
#line 113 "switch_case.m"
      ll_backend__switch_case__Code_37 = mercury__cord__f_43_43_2_f_0(ll_backend__switch_case__TypeCtorInfo_71_71, ll_backend__switch_case__LabelCode_31, ll_backend__switch_case__V_60_60);
    }
#line 114 "switch_case.m"
    {
#line 114 "switch_case.m"
      ll_backend__switch_case__CaseInfo_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 114 "switch_case.m"
      MR_hl_field(MR_mktag(0), ll_backend__switch_case__CaseInfo_38, 0) = ((MR_Box) (ll_backend__switch_case__Comment_30));
#line 114 "switch_case.m"
      MR_hl_field(MR_mktag(0), ll_backend__switch_case__CaseInfo_38, 1) = ((MR_Box) (ll_backend__switch_case__Code_37));
#line 114 "switch_case.m"
      MR_hl_field(MR_mktag(0), ll_backend__switch_case__CaseInfo_38, 2) = ((MR_Box) ((MR_Integer) 0));
#line 114 "switch_case.m"
    }
#line 115 "switch_case.m"
    {
#line 115 "switch_case.m"
      mercury__map__det_insert_4_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, (MR_Word) &ll_backend__switch_case__ll_backend__switch_case__type_ctor_info_case_label_info_0, ((MR_Box) (*ll_backend__switch_case__Label_12)), ((MR_Box) (ll_backend__switch_case__CaseInfo_38)), ll_backend__switch_case__STATE_VARIABLE_CaseLabelMap_0_39, ll_backend__switch_case__STATE_VARIABLE_CaseLabelMap_40);
#line 115 "switch_case.m"
      return;
    }
#line 93 "switch_case.m"
  }
#line 63 "switch_case.m"
}

void mercury__ll_backend__switch_case__init(void)
{
}

void mercury__ll_backend__switch_case__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&ll_backend__switch_case__ll_backend__switch_case__type_ctor_info_case_code_included_0);
	MR_register_type_ctor_info(&ll_backend__switch_case__ll_backend__switch_case__type_ctor_info_case_label_info_0);
	MR_register_type_ctor_info(&ll_backend__switch_case__ll_backend__switch_case__type_ctor_info_case_label_map_0);
	MR_register_type_ctor_info(&ll_backend__switch_case__ll_backend__switch_case__type_ctor_info_represent_params_0);
}

void mercury__ll_backend__switch_case__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module ll_backend.switch_case. */
