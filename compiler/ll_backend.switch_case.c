/*
** Automatically generated from `switch_case.m'
** by the Mercury compiler,
** version 14.01.2-beta-2015-02-18, configured for x86_64-apple-darwin13.4.0.
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
#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
#include "bag.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "construct.mih"
#include "cord.mih"
#include "counter.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "hlds.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "ll_backend.mih"
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
#include "tree234.mih"
#include "tree_bitset.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
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
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "ll_backend.code_gen.mih"
#include "ll_backend.code_info.mih"
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
#include "mdbcomp.trace_counts.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.mercury_to_mercury.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.hlds_out.hlds_out_goal.mih"
#include "hlds.hlds_out.hlds_out_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 149 "ll_backend.switch_case.c"
static const MR_EnumFunctorDesc ll_backend__switch_case__ll_backend__switch_case__enum_functor_desc_case_code_included_0_0;

#line 152 "ll_backend.switch_case.c"
static const MR_EnumFunctorDesc ll_backend__switch_case__ll_backend__switch_case__enum_functor_desc_case_code_included_0_1;

#line 155 "ll_backend.switch_case.c"
static const MR_EnumFunctorDescPtr ll_backend__switch_case__ll_backend__switch_case__enum_value_ordered_case_code_included_0[2];

#line 158 "ll_backend.switch_case.c"
static const MR_EnumFunctorDescPtr ll_backend__switch_case__ll_backend__switch_case__enum_name_ordered_case_code_included_0[2];

#line 161 "ll_backend.switch_case.c"
static const MR_Integer ll_backend__switch_case__ll_backend__switch_case__functor_number_map_case_code_included_0[2];

#line 164 "ll_backend.switch_case.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__switch_case__cord__ti_cord_1ll_backend__llds__type_ctor_info_instruction_0;

#line 167 "ll_backend.switch_case.c"
static const MR_PseudoTypeInfo ll_backend__switch_case__ll_backend__switch_case__field_types_case_label_info_0_0[3];

#line 170 "ll_backend.switch_case.c"
static const MR_ConstString ll_backend__switch_case__ll_backend__switch_case__field_names_case_label_info_0_0[3];

#line 173 "ll_backend.switch_case.c"
static const MR_DuFunctorDesc ll_backend__switch_case__ll_backend__switch_case__du_functor_desc_case_label_info_0_0;

#line 176 "ll_backend.switch_case.c"
static const MR_DuFunctorDescPtr ll_backend__switch_case__ll_backend__switch_case__du_stag_ordered_case_label_info_0_0[1];

#line 179 "ll_backend.switch_case.c"
static const MR_DuPtagLayout ll_backend__switch_case__ll_backend__switch_case__du_ptag_ordered_case_label_info_0[1];

#line 182 "ll_backend.switch_case.c"
static const MR_DuFunctorDescPtr ll_backend__switch_case__ll_backend__switch_case__du_name_ordered_case_label_info_0[1];

#line 185 "ll_backend.switch_case.c"
static const MR_Integer ll_backend__switch_case__ll_backend__switch_case__functor_number_map_case_label_info_0[1];

#line 188 "ll_backend.switch_case.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__switch_case__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0ll_backend__switch_case__type_ctor_info_case_label_info_0;

#line 191 "ll_backend.switch_case.c"
static const MR_PseudoTypeInfo ll_backend__switch_case__ll_backend__switch_case__field_types_represent_params_0_0[5];

#line 194 "ll_backend.switch_case.c"
static const MR_ConstString ll_backend__switch_case__ll_backend__switch_case__field_names_represent_params_0_0[5];

#line 197 "ll_backend.switch_case.c"
static const MR_DuFunctorDesc ll_backend__switch_case__ll_backend__switch_case__du_functor_desc_represent_params_0_0;

#line 200 "ll_backend.switch_case.c"
static const MR_DuFunctorDescPtr ll_backend__switch_case__ll_backend__switch_case__du_stag_ordered_represent_params_0_0[1];

#line 203 "ll_backend.switch_case.c"
static const MR_DuPtagLayout ll_backend__switch_case__ll_backend__switch_case__du_ptag_ordered_represent_params_0[1];

#line 206 "ll_backend.switch_case.c"
static const MR_DuFunctorDescPtr ll_backend__switch_case__ll_backend__switch_case__du_name_ordered_represent_params_0[1];

#line 209 "ll_backend.switch_case.c"
static const MR_Integer ll_backend__switch_case__ll_backend__switch_case__functor_number_map_represent_params_0[1];

#line 212 "ll_backend.switch_case.c"
static MR_bool MR_CALL 
ll_backend__switch_case____Unify____case_code_included_0_0_10001(
#line 215 "ll_backend.switch_case.c"
  MR_Box ll_backend__switch_case__wrapper_arg_1,
#line 217 "ll_backend.switch_case.c"
  MR_Box ll_backend__switch_case__wrapper_arg_2);

#line 220 "ll_backend.switch_case.c"
static void MR_CALL 
ll_backend__switch_case____Compare____case_code_included_0_0_10001(
#line 223 "ll_backend.switch_case.c"
  MR_Box * ll_backend__switch_case__wrapper_arg_1,
#line 225 "ll_backend.switch_case.c"
  MR_Box ll_backend__switch_case__wrapper_arg_2,
#line 227 "ll_backend.switch_case.c"
  MR_Box ll_backend__switch_case__wrapper_arg_3);

#line 230 "ll_backend.switch_case.c"
static MR_bool MR_CALL 
ll_backend__switch_case____Unify____case_label_info_0_0_10001(
#line 233 "ll_backend.switch_case.c"
  MR_Box ll_backend__switch_case__wrapper_arg_1,
#line 235 "ll_backend.switch_case.c"
  MR_Box ll_backend__switch_case__wrapper_arg_2);

#line 238 "ll_backend.switch_case.c"
static void MR_CALL 
ll_backend__switch_case____Compare____case_label_info_0_0_10001(
#line 241 "ll_backend.switch_case.c"
  MR_Box * ll_backend__switch_case__wrapper_arg_1,
#line 243 "ll_backend.switch_case.c"
  MR_Box ll_backend__switch_case__wrapper_arg_2,
#line 245 "ll_backend.switch_case.c"
  MR_Box ll_backend__switch_case__wrapper_arg_3);

#line 248 "ll_backend.switch_case.c"
static MR_bool MR_CALL 
ll_backend__switch_case____Unify____case_label_map_0_0_10001(
#line 251 "ll_backend.switch_case.c"
  MR_Box ll_backend__switch_case__wrapper_arg_1,
#line 253 "ll_backend.switch_case.c"
  MR_Box ll_backend__switch_case__wrapper_arg_2);

#line 256 "ll_backend.switch_case.c"
static void MR_CALL 
ll_backend__switch_case____Compare____case_label_map_0_0_10001(
#line 259 "ll_backend.switch_case.c"
  MR_Box * ll_backend__switch_case__wrapper_arg_1,
#line 261 "ll_backend.switch_case.c"
  MR_Box ll_backend__switch_case__wrapper_arg_2,
#line 263 "ll_backend.switch_case.c"
  MR_Box ll_backend__switch_case__wrapper_arg_3);

#line 266 "ll_backend.switch_case.c"
static MR_bool MR_CALL 
ll_backend__switch_case____Unify____represent_params_0_0_10001(
#line 269 "ll_backend.switch_case.c"
  MR_Box ll_backend__switch_case__wrapper_arg_1,
#line 271 "ll_backend.switch_case.c"
  MR_Box ll_backend__switch_case__wrapper_arg_2);

#line 274 "ll_backend.switch_case.c"
static void MR_CALL 
ll_backend__switch_case____Compare____represent_params_0_0_10001(
#line 277 "ll_backend.switch_case.c"
  MR_Box * ll_backend__switch_case__wrapper_arg_1,
#line 279 "ll_backend.switch_case.c"
  MR_Box ll_backend__switch_case__wrapper_arg_2,
#line 281 "ll_backend.switch_case.c"
  MR_Box ll_backend__switch_case__wrapper_arg_3);

#line 95 "switch_case.m"
static void MR_CALL 
ll_backend__switch_case__represent_tagged_case_for_llds_9_p_0_1(
#line 95 "switch_case.m"
  MR_Box ll_backend__switch_case__closure_arg,
#line 95 "switch_case.m"
  MR_Box ll_backend__switch_case__wrapper_arg_1,
#line 95 "switch_case.m"
  MR_Box * ll_backend__switch_case__wrapper_arg_2,
#line 95 "switch_case.m"
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
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "array.mh"
#include "array.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 358 "ll_backend.switch_case.c"
static const MR_EnumFunctorDesc ll_backend__switch_case__ll_backend__switch_case__enum_functor_desc_case_code_included_0_0 = {
  (MR_String) "case_code_not_yet_included",
  (MR_Integer) 0
};

#line 364 "ll_backend.switch_case.c"
static const MR_EnumFunctorDesc ll_backend__switch_case__ll_backend__switch_case__enum_functor_desc_case_code_included_0_1 = {
  (MR_String) "case_code_already_included",
  (MR_Integer) 1
};

#line 370 "ll_backend.switch_case.c"
static const MR_EnumFunctorDescPtr ll_backend__switch_case__ll_backend__switch_case__enum_value_ordered_case_code_included_0[2] = {
  &ll_backend__switch_case__ll_backend__switch_case__enum_functor_desc_case_code_included_0_0,
  &ll_backend__switch_case__ll_backend__switch_case__enum_functor_desc_case_code_included_0_1
};

#line 376 "ll_backend.switch_case.c"
static const MR_EnumFunctorDescPtr ll_backend__switch_case__ll_backend__switch_case__enum_name_ordered_case_code_included_0[2] = {
  &ll_backend__switch_case__ll_backend__switch_case__enum_functor_desc_case_code_included_0_1,
  &ll_backend__switch_case__ll_backend__switch_case__enum_functor_desc_case_code_included_0_0
};

#line 382 "ll_backend.switch_case.c"
static const MR_Integer ll_backend__switch_case__ll_backend__switch_case__functor_number_map_case_code_included_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 388 "ll_backend.switch_case.c"
const MR_TypeCtorInfo_Struct ll_backend__switch_case__ll_backend__switch_case__type_ctor_info_case_code_included_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ll_backend__switch_case____Unify____case_code_included_0_0_10001)),
  ((MR_Box) (ll_backend__switch_case____Compare____case_code_included_0_0_10001)),
  (MR_String) "ll_backend.switch_case",
  (MR_String) "case_code_included",
  {
    ll_backend__switch_case__ll_backend__switch_case__enum_name_ordered_case_code_included_0
  },
  {
    ll_backend__switch_case__ll_backend__switch_case__enum_value_ordered_case_code_included_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  ll_backend__switch_case__ll_backend__switch_case__functor_number_map_case_code_included_0
};

#line 409 "ll_backend.switch_case.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__switch_case__cord__ti_cord_1ll_backend__llds__type_ctor_info_instruction_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0
  }
};

#line 417 "ll_backend.switch_case.c"
static const MR_PseudoTypeInfo ll_backend__switch_case__ll_backend__switch_case__field_types_case_label_info_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &ll_backend__switch_case__cord__ti_cord_1ll_backend__llds__type_ctor_info_instruction_0,
  (MR_PseudoTypeInfo) &ll_backend__switch_case__ll_backend__switch_case__type_ctor_info_case_code_included_0
};

#line 424 "ll_backend.switch_case.c"
static const MR_ConstString ll_backend__switch_case__ll_backend__switch_case__field_names_case_label_info_0_0[3] = {
  (MR_String) "case_description",
  (MR_String) "case_code",
  (MR_String) "case_code_included"
};

#line 431 "ll_backend.switch_case.c"
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

#line 446 "ll_backend.switch_case.c"
static const MR_DuFunctorDescPtr ll_backend__switch_case__ll_backend__switch_case__du_stag_ordered_case_label_info_0_0[1] = {
  &ll_backend__switch_case__ll_backend__switch_case__du_functor_desc_case_label_info_0_0
};

#line 451 "ll_backend.switch_case.c"
static const MR_DuPtagLayout ll_backend__switch_case__ll_backend__switch_case__du_ptag_ordered_case_label_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__switch_case__ll_backend__switch_case__du_stag_ordered_case_label_info_0_0
  }
};

#line 460 "ll_backend.switch_case.c"
static const MR_DuFunctorDescPtr ll_backend__switch_case__ll_backend__switch_case__du_name_ordered_case_label_info_0[1] = {
  &ll_backend__switch_case__ll_backend__switch_case__du_functor_desc_case_label_info_0_0
};

#line 465 "ll_backend.switch_case.c"
static const MR_Integer ll_backend__switch_case__ll_backend__switch_case__functor_number_map_case_label_info_0[1] = {
  (MR_Integer) 0
};

#line 470 "ll_backend.switch_case.c"
const MR_TypeCtorInfo_Struct ll_backend__switch_case__ll_backend__switch_case__type_ctor_info_case_label_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__switch_case____Unify____case_label_info_0_0_10001)),
  ((MR_Box) (ll_backend__switch_case____Compare____case_label_info_0_0_10001)),
  (MR_String) "ll_backend.switch_case",
  (MR_String) "case_label_info",
  {
    ll_backend__switch_case__ll_backend__switch_case__du_name_ordered_case_label_info_0
  },
  {
    ll_backend__switch_case__ll_backend__switch_case__du_ptag_ordered_case_label_info_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__switch_case__ll_backend__switch_case__functor_number_map_case_label_info_0
};

#line 491 "ll_backend.switch_case.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__switch_case__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0ll_backend__switch_case__type_ctor_info_case_label_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0,
    (MR_TypeInfo) &ll_backend__switch_case__ll_backend__switch_case__type_ctor_info_case_label_info_0
  }
};

#line 500 "ll_backend.switch_case.c"
const MR_TypeCtorInfo_Struct ll_backend__switch_case__ll_backend__switch_case__type_ctor_info_case_label_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ll_backend__switch_case____Unify____case_label_map_0_0_10001)),
  ((MR_Box) (ll_backend__switch_case____Compare____case_label_map_0_0_10001)),
  (MR_String) "ll_backend.switch_case",
  (MR_String) "case_label_map",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &ll_backend__switch_case__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0ll_backend__switch_case__type_ctor_info_case_label_info_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 521 "ll_backend.switch_case.c"
static const MR_PseudoTypeInfo ll_backend__switch_case__ll_backend__switch_case__field_types_represent_params_0_0[5] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_info_0,
  (MR_PseudoTypeInfo) &hlds__code_model__hlds__code_model__type_ctor_info_code_model_0,
  (MR_PseudoTypeInfo) &ll_backend__code_info__ll_backend__code_info__type_ctor_info_position_info_0,
  (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0
};

#line 530 "ll_backend.switch_case.c"
static const MR_ConstString ll_backend__switch_case__ll_backend__switch_case__field_names_represent_params_0_0[5] = {
  (MR_String) "switch_var_name",
  (MR_String) "switch_goal_info",
  (MR_String) "switch_code_model",
  (MR_String) "starting_position",
  (MR_String) "switch_end_label"
};

#line 539 "ll_backend.switch_case.c"
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

#line 554 "ll_backend.switch_case.c"
static const MR_DuFunctorDescPtr ll_backend__switch_case__ll_backend__switch_case__du_stag_ordered_represent_params_0_0[1] = {
  &ll_backend__switch_case__ll_backend__switch_case__du_functor_desc_represent_params_0_0
};

#line 559 "ll_backend.switch_case.c"
static const MR_DuPtagLayout ll_backend__switch_case__ll_backend__switch_case__du_ptag_ordered_represent_params_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__switch_case__ll_backend__switch_case__du_stag_ordered_represent_params_0_0
  }
};

#line 568 "ll_backend.switch_case.c"
static const MR_DuFunctorDescPtr ll_backend__switch_case__ll_backend__switch_case__du_name_ordered_represent_params_0[1] = {
  &ll_backend__switch_case__ll_backend__switch_case__du_functor_desc_represent_params_0_0
};

#line 573 "ll_backend.switch_case.c"
static const MR_Integer ll_backend__switch_case__ll_backend__switch_case__functor_number_map_represent_params_0[1] = {
  (MR_Integer) 0
};

#line 578 "ll_backend.switch_case.c"
const MR_TypeCtorInfo_Struct ll_backend__switch_case__ll_backend__switch_case__type_ctor_info_represent_params_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__switch_case____Unify____represent_params_0_0_10001)),
  ((MR_Box) (ll_backend__switch_case____Compare____represent_params_0_0_10001)),
  (MR_String) "ll_backend.switch_case",
  (MR_String) "represent_params",
  {
    ll_backend__switch_case__ll_backend__switch_case__du_name_ordered_represent_params_0
  },
  {
    ll_backend__switch_case__ll_backend__switch_case__du_ptag_ordered_represent_params_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__switch_case__ll_backend__switch_case__functor_number_map_represent_params_0
};

#line 599 "ll_backend.switch_case.c"
static MR_bool MR_CALL 
ll_backend__switch_case____Unify____case_code_included_0_0_10001(
#line 602 "ll_backend.switch_case.c"
  MR_Box ll_backend__switch_case__wrapper_arg_1,
#line 604 "ll_backend.switch_case.c"
  MR_Box ll_backend__switch_case__wrapper_arg_2)
#line 606 "ll_backend.switch_case.c"
{
#line 608 "ll_backend.switch_case.c"
  {
#line 610 "ll_backend.switch_case.c"
    MR_bool ll_backend__switch_case__succeeded;

#line 613 "ll_backend.switch_case.c"
    {
#line 615 "ll_backend.switch_case.c"
      ll_backend__switch_case__succeeded = ll_backend__switch_case____Unify____case_code_included_0_0(((MR_Word) ll_backend__switch_case__wrapper_arg_1), ((MR_Word) ll_backend__switch_case__wrapper_arg_2));
    }
#line 618 "ll_backend.switch_case.c"
    return ll_backend__switch_case__succeeded;
#line 620 "ll_backend.switch_case.c"
  }
#line 622 "ll_backend.switch_case.c"
}

#line 625 "ll_backend.switch_case.c"
static void MR_CALL 
ll_backend__switch_case____Compare____case_code_included_0_0_10001(
#line 628 "ll_backend.switch_case.c"
  MR_Box * ll_backend__switch_case__wrapper_arg_1,
#line 630 "ll_backend.switch_case.c"
  MR_Box ll_backend__switch_case__wrapper_arg_2,
#line 632 "ll_backend.switch_case.c"
  MR_Box ll_backend__switch_case__wrapper_arg_3)
#line 634 "ll_backend.switch_case.c"
{
#line 636 "ll_backend.switch_case.c"
  {
#line 638 "ll_backend.switch_case.c"
    MR_Word ll_backend__switch_case__conv0_HeadVar__1_1;

#line 641 "ll_backend.switch_case.c"
    {
#line 643 "ll_backend.switch_case.c"
      ll_backend__switch_case____Compare____case_code_included_0_0(&ll_backend__switch_case__conv0_HeadVar__1_1, ((MR_Word) ll_backend__switch_case__wrapper_arg_2), ((MR_Word) ll_backend__switch_case__wrapper_arg_3));
    }
#line 646 "ll_backend.switch_case.c"
    *ll_backend__switch_case__wrapper_arg_1 = ((MR_Box) (ll_backend__switch_case__conv0_HeadVar__1_1));
#line 648 "ll_backend.switch_case.c"
  }
#line 650 "ll_backend.switch_case.c"
}

#line 653 "ll_backend.switch_case.c"
static MR_bool MR_CALL 
ll_backend__switch_case____Unify____case_label_info_0_0_10001(
#line 656 "ll_backend.switch_case.c"
  MR_Box ll_backend__switch_case__wrapper_arg_1,
#line 658 "ll_backend.switch_case.c"
  MR_Box ll_backend__switch_case__wrapper_arg_2)
#line 660 "ll_backend.switch_case.c"
{
#line 662 "ll_backend.switch_case.c"
  {
#line 664 "ll_backend.switch_case.c"
    MR_bool ll_backend__switch_case__succeeded;

#line 667 "ll_backend.switch_case.c"
    {
#line 669 "ll_backend.switch_case.c"
      ll_backend__switch_case__succeeded = ll_backend__switch_case____Unify____case_label_info_0_0(((MR_Word) ll_backend__switch_case__wrapper_arg_1), ((MR_Word) ll_backend__switch_case__wrapper_arg_2));
    }
#line 672 "ll_backend.switch_case.c"
    return ll_backend__switch_case__succeeded;
#line 674 "ll_backend.switch_case.c"
  }
#line 676 "ll_backend.switch_case.c"
}

#line 679 "ll_backend.switch_case.c"
static void MR_CALL 
ll_backend__switch_case____Compare____case_label_info_0_0_10001(
#line 682 "ll_backend.switch_case.c"
  MR_Box * ll_backend__switch_case__wrapper_arg_1,
#line 684 "ll_backend.switch_case.c"
  MR_Box ll_backend__switch_case__wrapper_arg_2,
#line 686 "ll_backend.switch_case.c"
  MR_Box ll_backend__switch_case__wrapper_arg_3)
#line 688 "ll_backend.switch_case.c"
{
#line 690 "ll_backend.switch_case.c"
  {
#line 692 "ll_backend.switch_case.c"
    MR_Word ll_backend__switch_case__conv0_HeadVar__1_1;

#line 695 "ll_backend.switch_case.c"
    {
#line 697 "ll_backend.switch_case.c"
      ll_backend__switch_case____Compare____case_label_info_0_0(&ll_backend__switch_case__conv0_HeadVar__1_1, ((MR_Word) ll_backend__switch_case__wrapper_arg_2), ((MR_Word) ll_backend__switch_case__wrapper_arg_3));
    }
#line 700 "ll_backend.switch_case.c"
    *ll_backend__switch_case__wrapper_arg_1 = ((MR_Box) (ll_backend__switch_case__conv0_HeadVar__1_1));
#line 702 "ll_backend.switch_case.c"
  }
#line 704 "ll_backend.switch_case.c"
}

#line 707 "ll_backend.switch_case.c"
static MR_bool MR_CALL 
ll_backend__switch_case____Unify____case_label_map_0_0_10001(
#line 710 "ll_backend.switch_case.c"
  MR_Box ll_backend__switch_case__wrapper_arg_1,
#line 712 "ll_backend.switch_case.c"
  MR_Box ll_backend__switch_case__wrapper_arg_2)
#line 714 "ll_backend.switch_case.c"
{
#line 716 "ll_backend.switch_case.c"
  {
#line 718 "ll_backend.switch_case.c"
    MR_bool ll_backend__switch_case__succeeded;

#line 721 "ll_backend.switch_case.c"
    {
#line 723 "ll_backend.switch_case.c"
      ll_backend__switch_case__succeeded = ll_backend__switch_case____Unify____case_label_map_0_0(((MR_Word) ll_backend__switch_case__wrapper_arg_1), ((MR_Word) ll_backend__switch_case__wrapper_arg_2));
    }
#line 726 "ll_backend.switch_case.c"
    return ll_backend__switch_case__succeeded;
#line 728 "ll_backend.switch_case.c"
  }
#line 730 "ll_backend.switch_case.c"
}

#line 733 "ll_backend.switch_case.c"
static void MR_CALL 
ll_backend__switch_case____Compare____case_label_map_0_0_10001(
#line 736 "ll_backend.switch_case.c"
  MR_Box * ll_backend__switch_case__wrapper_arg_1,
#line 738 "ll_backend.switch_case.c"
  MR_Box ll_backend__switch_case__wrapper_arg_2,
#line 740 "ll_backend.switch_case.c"
  MR_Box ll_backend__switch_case__wrapper_arg_3)
#line 742 "ll_backend.switch_case.c"
{
#line 744 "ll_backend.switch_case.c"
  {
#line 746 "ll_backend.switch_case.c"
    MR_Word ll_backend__switch_case__conv0_HeadVar__1_1;

#line 749 "ll_backend.switch_case.c"
    {
#line 751 "ll_backend.switch_case.c"
      ll_backend__switch_case____Compare____case_label_map_0_0(&ll_backend__switch_case__conv0_HeadVar__1_1, ((MR_Word) ll_backend__switch_case__wrapper_arg_2), ((MR_Word) ll_backend__switch_case__wrapper_arg_3));
    }
#line 754 "ll_backend.switch_case.c"
    *ll_backend__switch_case__wrapper_arg_1 = ((MR_Box) (ll_backend__switch_case__conv0_HeadVar__1_1));
#line 756 "ll_backend.switch_case.c"
  }
#line 758 "ll_backend.switch_case.c"
}

#line 761 "ll_backend.switch_case.c"
static MR_bool MR_CALL 
ll_backend__switch_case____Unify____represent_params_0_0_10001(
#line 764 "ll_backend.switch_case.c"
  MR_Box ll_backend__switch_case__wrapper_arg_1,
#line 766 "ll_backend.switch_case.c"
  MR_Box ll_backend__switch_case__wrapper_arg_2)
#line 768 "ll_backend.switch_case.c"
{
#line 770 "ll_backend.switch_case.c"
  {
#line 772 "ll_backend.switch_case.c"
    MR_bool ll_backend__switch_case__succeeded;

#line 775 "ll_backend.switch_case.c"
    {
#line 777 "ll_backend.switch_case.c"
      ll_backend__switch_case__succeeded = ll_backend__switch_case____Unify____represent_params_0_0(((MR_Word) ll_backend__switch_case__wrapper_arg_1), ((MR_Word) ll_backend__switch_case__wrapper_arg_2));
    }
#line 780 "ll_backend.switch_case.c"
    return ll_backend__switch_case__succeeded;
#line 782 "ll_backend.switch_case.c"
  }
#line 784 "ll_backend.switch_case.c"
}

#line 787 "ll_backend.switch_case.c"
static void MR_CALL 
ll_backend__switch_case____Compare____represent_params_0_0_10001(
#line 790 "ll_backend.switch_case.c"
  MR_Box * ll_backend__switch_case__wrapper_arg_1,
#line 792 "ll_backend.switch_case.c"
  MR_Box ll_backend__switch_case__wrapper_arg_2,
#line 794 "ll_backend.switch_case.c"
  MR_Box ll_backend__switch_case__wrapper_arg_3)
#line 796 "ll_backend.switch_case.c"
{
#line 798 "ll_backend.switch_case.c"
  {
#line 800 "ll_backend.switch_case.c"
    MR_Word ll_backend__switch_case__conv0_HeadVar__1_1;

#line 803 "ll_backend.switch_case.c"
    {
#line 805 "ll_backend.switch_case.c"
      ll_backend__switch_case____Compare____represent_params_0_0(&ll_backend__switch_case__conv0_HeadVar__1_1, ((MR_Word) ll_backend__switch_case__wrapper_arg_2), ((MR_Word) ll_backend__switch_case__wrapper_arg_3));
    }
#line 808 "ll_backend.switch_case.c"
    *ll_backend__switch_case__wrapper_arg_1 = ((MR_Box) (ll_backend__switch_case__conv0_HeadVar__1_1));
#line 810 "ll_backend.switch_case.c"
  }
#line 812 "ll_backend.switch_case.c"
}

#line 71 "switch_case.m"
void MR_CALL 
ll_backend__switch_case__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_114_101_109_97_105_110_105_110_103_95_99_97_115_101_95_95_91_49_93_95_48_4_p_0(
#line 71 "switch_case.m"
  MR_Word ll_backend__switch_case__CaseInfo_6,
#line 71 "switch_case.m"
  MR_Word ll_backend__switch_case__STATE_VARIABLE_Code_0_11,
#line 71 "switch_case.m"
  MR_Word * ll_backend__switch_case__STATE_VARIABLE_Code_12)
#line 71 "switch_case.m"
{
#line 133 "switch_case.m"
  {
#line 133 "switch_case.m"
    MR_bool ll_backend__switch_case__succeeded;
#line 133 "switch_case.m"
    MR_Word ll_backend__switch_case__CaseCode_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_case__CaseInfo_6, (MR_Integer) 1)));
#line 133 "switch_case.m"
    MR_Word ll_backend__switch_case__CaseIncluded_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_case__CaseInfo_6, (MR_Integer) 2)));
#line 134 "switch_case.m"
    MR_String ll_backend__switch_case___Comment_8 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__switch_case__CaseInfo_6, (MR_Integer) 0)));

#line 138 "switch_case.m"
    if ((ll_backend__switch_case__CaseIncluded_10 == (MR_Integer) 1))
#line 139 "switch_case.m"
      *ll_backend__switch_case__STATE_VARIABLE_Code_12 = ll_backend__switch_case__STATE_VARIABLE_Code_0_11;
#line 138 "switch_case.m"
    else
#line 136 "switch_case.m"
      {
#line 137 "switch_case.m"
        {
#line 137 "switch_case.m"
          *ll_backend__switch_case__STATE_VARIABLE_Code_12 = mercury__cord__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__switch_case__STATE_VARIABLE_Code_0_11, ll_backend__switch_case__CaseCode_9);
        }
#line 136 "switch_case.m"
      }
#line 133 "switch_case.m"
  }
#line 71 "switch_case.m"
}

#line 28 "switch_case.m"
void MR_CALL 
ll_backend__switch_case____Compare____represent_params_0_0(
#line 28 "switch_case.m"
  MR_Word * ll_backend__switch_case__HeadVar__1_1,
#line 28 "switch_case.m"
  MR_Word ll_backend__switch_case__HeadVar__2_2,
#line 28 "switch_case.m"
  MR_Word ll_backend__switch_case__HeadVar__3_3)
#line 28 "switch_case.m"
{
#line 28 "switch_case.m"
  {
#line 28 "switch_case.m"
    MR_bool ll_backend__switch_case__succeeded;
#line 28 "switch_case.m"
    MR_Integer ll_backend__switch_case__CastX_18 = (MR_Integer) ll_backend__switch_case__HeadVar__2_2;
#line 28 "switch_case.m"
    MR_Integer ll_backend__switch_case__CastY_19 = (MR_Integer) ll_backend__switch_case__HeadVar__3_3;

#line 28 "switch_case.m"
    ll_backend__switch_case__succeeded = (ll_backend__switch_case__CastX_18 == ll_backend__switch_case__CastY_19);
#line 28 "switch_case.m"
    if (ll_backend__switch_case__succeeded)
#line 881 "ll_backend.switch_case.c"
      *ll_backend__switch_case__HeadVar__1_1 = (MR_Integer) 0;
#line 28 "switch_case.m"
    else
#line 28 "switch_case.m"
      {
#line 28 "switch_case.m"
        MR_String ll_backend__switch_case__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__switch_case__HeadVar__2_2, (MR_Integer) 0)));
#line 28 "switch_case.m"
        MR_Word ll_backend__switch_case__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_case__HeadVar__2_2, (MR_Integer) 1)));
#line 28 "switch_case.m"
        MR_Word ll_backend__switch_case__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_case__HeadVar__2_2, (MR_Integer) 2)));
#line 28 "switch_case.m"
        MR_Word ll_backend__switch_case__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_case__HeadVar__2_2, (MR_Integer) 3)));
#line 28 "switch_case.m"
        MR_Word ll_backend__switch_case__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_case__HeadVar__2_2, (MR_Integer) 4)));
#line 28 "switch_case.m"
        MR_String ll_backend__switch_case__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__switch_case__HeadVar__3_3, (MR_Integer) 0)));
#line 28 "switch_case.m"
        MR_Word ll_backend__switch_case__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_case__HeadVar__3_3, (MR_Integer) 1)));
#line 28 "switch_case.m"
        MR_Word ll_backend__switch_case__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_case__HeadVar__3_3, (MR_Integer) 2)));
#line 28 "switch_case.m"
        MR_Word ll_backend__switch_case__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_case__HeadVar__3_3, (MR_Integer) 3)));
#line 28 "switch_case.m"
        MR_Word ll_backend__switch_case__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_case__HeadVar__3_3, (MR_Integer) 4)));
#line 28 "switch_case.m"
        MR_Word ll_backend__switch_case__V_14_14;

#line 28 "switch_case.m"
        {
#line 28 "switch_case.m"
          mercury__private_builtin__builtin_compare_string_3_p_0(&ll_backend__switch_case__V_14_14, ll_backend__switch_case__V_4_4, ll_backend__switch_case__V_9_9);
        }
#line 915 "ll_backend.switch_case.c"
        ll_backend__switch_case__succeeded = (ll_backend__switch_case__V_14_14 == (MR_Integer) 0);
#line 28 "switch_case.m"
        ll_backend__switch_case__succeeded = !(ll_backend__switch_case__succeeded);
#line 28 "switch_case.m"
        if (ll_backend__switch_case__succeeded)
#line 28 "switch_case.m"
          *ll_backend__switch_case__HeadVar__1_1 = ll_backend__switch_case__V_14_14;
#line 28 "switch_case.m"
        else
#line 28 "switch_case.m"
          {
#line 28 "switch_case.m"
            MR_Word ll_backend__switch_case__V_15_15;

#line 28 "switch_case.m"
            {
#line 28 "switch_case.m"
              hlds__hlds_goal____Compare____hlds_goal_info_0_0(&ll_backend__switch_case__V_15_15, ll_backend__switch_case__V_5_5, ll_backend__switch_case__V_10_10);
            }
#line 935 "ll_backend.switch_case.c"
            ll_backend__switch_case__succeeded = (ll_backend__switch_case__V_15_15 == (MR_Integer) 0);
#line 28 "switch_case.m"
            ll_backend__switch_case__succeeded = !(ll_backend__switch_case__succeeded);
#line 28 "switch_case.m"
            if (ll_backend__switch_case__succeeded)
#line 28 "switch_case.m"
              *ll_backend__switch_case__HeadVar__1_1 = ll_backend__switch_case__V_15_15;
#line 28 "switch_case.m"
            else
#line 28 "switch_case.m"
              {
#line 28 "switch_case.m"
                MR_Word ll_backend__switch_case__V_16_16;
#line 28 "switch_case.m"
                MR_Integer ll_backend__switch_case__V_25_25 = (MR_Integer) ll_backend__switch_case__V_6_6;
#line 28 "switch_case.m"
                MR_Integer ll_backend__switch_case__V_26_26 = (MR_Integer) ll_backend__switch_case__V_11_11;

#line 28 "switch_case.m"
                {
#line 28 "switch_case.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__switch_case__V_16_16, ll_backend__switch_case__V_25_25, ll_backend__switch_case__V_26_26);
                }
#line 959 "ll_backend.switch_case.c"
                ll_backend__switch_case__succeeded = (ll_backend__switch_case__V_16_16 == (MR_Integer) 0);
#line 28 "switch_case.m"
                ll_backend__switch_case__succeeded = !(ll_backend__switch_case__succeeded);
#line 28 "switch_case.m"
                if (ll_backend__switch_case__succeeded)
#line 28 "switch_case.m"
                  *ll_backend__switch_case__HeadVar__1_1 = ll_backend__switch_case__V_16_16;
#line 28 "switch_case.m"
                else
#line 28 "switch_case.m"
                  {
#line 28 "switch_case.m"
                    MR_Word ll_backend__switch_case__V_17_17;

#line 28 "switch_case.m"
                    {
#line 28 "switch_case.m"
                      ll_backend__code_info____Compare____position_info_0_0(&ll_backend__switch_case__V_17_17, ll_backend__switch_case__V_7_7, ll_backend__switch_case__V_12_12);
                    }
#line 979 "ll_backend.switch_case.c"
                    ll_backend__switch_case__succeeded = (ll_backend__switch_case__V_17_17 == (MR_Integer) 0);
#line 28 "switch_case.m"
                    ll_backend__switch_case__succeeded = !(ll_backend__switch_case__succeeded);
#line 28 "switch_case.m"
                    if (ll_backend__switch_case__succeeded)
#line 28 "switch_case.m"
                      *ll_backend__switch_case__HeadVar__1_1 = ll_backend__switch_case__V_17_17;
#line 28 "switch_case.m"
                    else
#line 28 "switch_case.m"
                      {
#line 28 "switch_case.m"
                        ll_backend__llds____Compare____label_0_0(ll_backend__switch_case__HeadVar__1_1, ll_backend__switch_case__V_8_8, ll_backend__switch_case__V_13_13);
#line 28 "switch_case.m"
                        return;
                      }
#line 28 "switch_case.m"
                  }
#line 28 "switch_case.m"
              }
#line 28 "switch_case.m"
          }
#line 28 "switch_case.m"
      }
#line 28 "switch_case.m"
  }
#line 28 "switch_case.m"
}

#line 28 "switch_case.m"
MR_bool MR_CALL 
ll_backend__switch_case____Unify____represent_params_0_0(
#line 28 "switch_case.m"
  MR_Word ll_backend__switch_case__HeadVar__1_1,
#line 28 "switch_case.m"
  MR_Word ll_backend__switch_case__HeadVar__2_2)
#line 28 "switch_case.m"
{
#line 28 "switch_case.m"
  {
#line 28 "switch_case.m"
    MR_bool ll_backend__switch_case__succeeded;
#line 28 "switch_case.m"
    MR_Integer ll_backend__switch_case__CastX_13 = (MR_Integer) ll_backend__switch_case__HeadVar__1_1;
#line 28 "switch_case.m"
    MR_Integer ll_backend__switch_case__CastY_14 = (MR_Integer) ll_backend__switch_case__HeadVar__2_2;

#line 28 "switch_case.m"
    ll_backend__switch_case__succeeded = (ll_backend__switch_case__CastX_13 == ll_backend__switch_case__CastY_14);
#line 28 "switch_case.m"
    if (ll_backend__switch_case__succeeded)
#line 28 "switch_case.m"
      ll_backend__switch_case__succeeded = MR_TRUE;
#line 28 "switch_case.m"
    else
#line 28 "switch_case.m"
      {
#line 28 "switch_case.m"
        MR_String ll_backend__switch_case__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__switch_case__HeadVar__1_1, (MR_Integer) 0)));
#line 28 "switch_case.m"
        MR_Word ll_backend__switch_case__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_case__HeadVar__1_1, (MR_Integer) 1)));
#line 28 "switch_case.m"
        MR_Word ll_backend__switch_case__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_case__HeadVar__1_1, (MR_Integer) 2)));
#line 28 "switch_case.m"
        MR_Word ll_backend__switch_case__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_case__HeadVar__1_1, (MR_Integer) 3)));
#line 28 "switch_case.m"
        MR_Word ll_backend__switch_case__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_case__HeadVar__1_1, (MR_Integer) 4)));
#line 28 "switch_case.m"
        MR_String ll_backend__switch_case__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__switch_case__HeadVar__2_2, (MR_Integer) 0)));
#line 28 "switch_case.m"
        MR_Word ll_backend__switch_case__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_case__HeadVar__2_2, (MR_Integer) 1)));
#line 28 "switch_case.m"
        MR_Word ll_backend__switch_case__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_case__HeadVar__2_2, (MR_Integer) 2)));
#line 28 "switch_case.m"
        MR_Word ll_backend__switch_case__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_case__HeadVar__2_2, (MR_Integer) 3)));
#line 28 "switch_case.m"
        MR_Word ll_backend__switch_case__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_case__HeadVar__2_2, (MR_Integer) 4)));

#line 1058 "ll_backend.switch_case.c"
        ll_backend__switch_case__succeeded = (strcmp(ll_backend__switch_case__V_3_3, ll_backend__switch_case__V_8_8) == 0);
#line 28 "switch_case.m"
        if (ll_backend__switch_case__succeeded)
#line 28 "switch_case.m"
          {
#line 1064 "ll_backend.switch_case.c"
            {
#line 1066 "ll_backend.switch_case.c"
              ll_backend__switch_case__succeeded = hlds__hlds_goal____Unify____hlds_goal_info_0_0(ll_backend__switch_case__V_4_4, ll_backend__switch_case__V_9_9);
            }
#line 28 "switch_case.m"
            if (ll_backend__switch_case__succeeded)
#line 28 "switch_case.m"
              {
#line 1073 "ll_backend.switch_case.c"
                ll_backend__switch_case__succeeded = (ll_backend__switch_case__V_5_5 == ll_backend__switch_case__V_10_10);
#line 28 "switch_case.m"
                if (ll_backend__switch_case__succeeded)
#line 28 "switch_case.m"
                  {
#line 1079 "ll_backend.switch_case.c"
                    {
#line 1081 "ll_backend.switch_case.c"
                      ll_backend__switch_case__succeeded = ll_backend__code_info____Unify____position_info_0_0(ll_backend__switch_case__V_6_6, ll_backend__switch_case__V_11_11);
                    }
#line 28 "switch_case.m"
                    if (ll_backend__switch_case__succeeded)
#line 1086 "ll_backend.switch_case.c"
                      {
#line 1088 "ll_backend.switch_case.c"
                        return ll_backend__switch_case__succeeded = ll_backend__llds____Unify____label_0_0(ll_backend__switch_case__V_7_7, ll_backend__switch_case__V_12_12);
                      }
#line 28 "switch_case.m"
                  }
#line 28 "switch_case.m"
              }
#line 28 "switch_case.m"
          }
#line 28 "switch_case.m"
      }
#line 28 "switch_case.m"
    return ll_backend__switch_case__succeeded;
#line 28 "switch_case.m"
  }
#line 28 "switch_case.m"
}

#line 48 "switch_case.m"
void MR_CALL 
ll_backend__switch_case____Compare____case_label_map_0_0(
#line 48 "switch_case.m"
  MR_Word * ll_backend__switch_case__HeadVar__1_1,
#line 48 "switch_case.m"
  MR_Word ll_backend__switch_case__HeadVar__2_2,
#line 48 "switch_case.m"
  MR_Word ll_backend__switch_case__HeadVar__3_3)
#line 48 "switch_case.m"
{
#line 48 "switch_case.m"
  {
#line 48 "switch_case.m"
    MR_bool ll_backend__switch_case__succeeded;
#line 48 "switch_case.m"
    MR_Word ll_backend__switch_case__Cast_HeadVar1_4 = ll_backend__switch_case__HeadVar__2_2;
#line 48 "switch_case.m"
    MR_Word ll_backend__switch_case__Cast_HeadVar2_5 = ll_backend__switch_case__HeadVar__3_3;

#line 48 "switch_case.m"
    {
#line 48 "switch_case.m"
      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__switch_case_scalar_common_2[0], ll_backend__switch_case__HeadVar__1_1, ((MR_Box) (ll_backend__switch_case__Cast_HeadVar1_4)), ((MR_Box) (ll_backend__switch_case__Cast_HeadVar2_5)));
#line 48 "switch_case.m"
      return;
    }
#line 48 "switch_case.m"
  }
#line 48 "switch_case.m"
}

#line 48 "switch_case.m"
MR_bool MR_CALL 
ll_backend__switch_case____Unify____case_label_map_0_0(
#line 48 "switch_case.m"
  MR_Word ll_backend__switch_case__HeadVar__1_1,
#line 48 "switch_case.m"
  MR_Word ll_backend__switch_case__HeadVar__2_2)
#line 48 "switch_case.m"
{
#line 48 "switch_case.m"
  {
#line 48 "switch_case.m"
    MR_bool ll_backend__switch_case__succeeded;
#line 48 "switch_case.m"
    MR_Word ll_backend__switch_case__Cast_HeadVar1_3 = ll_backend__switch_case__HeadVar__1_1;
#line 48 "switch_case.m"
    MR_Word ll_backend__switch_case__Cast_HeadVar2_4 = ll_backend__switch_case__HeadVar__2_2;

#line 48 "switch_case.m"
    {
#line 48 "switch_case.m"
      return ll_backend__switch_case__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__switch_case_scalar_common_2[0], ((MR_Box) (ll_backend__switch_case__Cast_HeadVar1_3)), ((MR_Box) (ll_backend__switch_case__Cast_HeadVar2_4)));
    }
#line 48 "switch_case.m"
    return ll_backend__switch_case__succeeded;
#line 48 "switch_case.m"
  }
#line 48 "switch_case.m"
}

#line 41 "switch_case.m"
void MR_CALL 
ll_backend__switch_case____Compare____case_label_info_0_0(
#line 41 "switch_case.m"
  MR_Word * ll_backend__switch_case__HeadVar__1_1,
#line 41 "switch_case.m"
  MR_Word ll_backend__switch_case__HeadVar__2_2,
#line 41 "switch_case.m"
  MR_Word ll_backend__switch_case__HeadVar__3_3)
#line 41 "switch_case.m"
{
#line 41 "switch_case.m"
  {
#line 41 "switch_case.m"
    MR_bool ll_backend__switch_case__succeeded;
#line 41 "switch_case.m"
    MR_Integer ll_backend__switch_case__CastX_12 = (MR_Integer) ll_backend__switch_case__HeadVar__2_2;
#line 41 "switch_case.m"
    MR_Integer ll_backend__switch_case__CastY_13 = (MR_Integer) ll_backend__switch_case__HeadVar__3_3;

#line 41 "switch_case.m"
    ll_backend__switch_case__succeeded = (ll_backend__switch_case__CastX_12 == ll_backend__switch_case__CastY_13);
#line 41 "switch_case.m"
    if (ll_backend__switch_case__succeeded)
#line 1192 "ll_backend.switch_case.c"
      *ll_backend__switch_case__HeadVar__1_1 = (MR_Integer) 0;
#line 41 "switch_case.m"
    else
#line 41 "switch_case.m"
      {
#line 41 "switch_case.m"
        MR_String ll_backend__switch_case__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__switch_case__HeadVar__2_2, (MR_Integer) 0)));
#line 41 "switch_case.m"
        MR_Word ll_backend__switch_case__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_case__HeadVar__2_2, (MR_Integer) 1)));
#line 41 "switch_case.m"
        MR_Word ll_backend__switch_case__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_case__HeadVar__2_2, (MR_Integer) 2)));
#line 41 "switch_case.m"
        MR_String ll_backend__switch_case__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__switch_case__HeadVar__3_3, (MR_Integer) 0)));
#line 41 "switch_case.m"
        MR_Word ll_backend__switch_case__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_case__HeadVar__3_3, (MR_Integer) 1)));
#line 41 "switch_case.m"
        MR_Word ll_backend__switch_case__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_case__HeadVar__3_3, (MR_Integer) 2)));
#line 41 "switch_case.m"
        MR_Word ll_backend__switch_case__V_10_10;

#line 41 "switch_case.m"
        {
#line 41 "switch_case.m"
          mercury__private_builtin__builtin_compare_string_3_p_0(&ll_backend__switch_case__V_10_10, ll_backend__switch_case__V_4_4, ll_backend__switch_case__V_7_7);
        }
#line 1218 "ll_backend.switch_case.c"
        ll_backend__switch_case__succeeded = (ll_backend__switch_case__V_10_10 == (MR_Integer) 0);
#line 41 "switch_case.m"
        ll_backend__switch_case__succeeded = !(ll_backend__switch_case__succeeded);
#line 41 "switch_case.m"
        if (ll_backend__switch_case__succeeded)
#line 41 "switch_case.m"
          *ll_backend__switch_case__HeadVar__1_1 = ll_backend__switch_case__V_10_10;
#line 41 "switch_case.m"
        else
#line 41 "switch_case.m"
          {
#line 41 "switch_case.m"
            MR_Word ll_backend__switch_case__V_11_11;

#line 41 "switch_case.m"
            {
#line 41 "switch_case.m"
              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__switch_case_scalar_common_1[0], &ll_backend__switch_case__V_11_11, ((MR_Box) (ll_backend__switch_case__V_5_5)), ((MR_Box) (ll_backend__switch_case__V_8_8)));
            }
#line 1238 "ll_backend.switch_case.c"
            ll_backend__switch_case__succeeded = (ll_backend__switch_case__V_11_11 == (MR_Integer) 0);
#line 41 "switch_case.m"
            ll_backend__switch_case__succeeded = !(ll_backend__switch_case__succeeded);
#line 41 "switch_case.m"
            if (ll_backend__switch_case__succeeded)
#line 41 "switch_case.m"
              *ll_backend__switch_case__HeadVar__1_1 = ll_backend__switch_case__V_11_11;
#line 41 "switch_case.m"
            else
#line 41 "switch_case.m"
              {
#line 41 "switch_case.m"
                MR_Integer ll_backend__switch_case__V_17_17 = (MR_Integer) ll_backend__switch_case__V_6_6;
#line 41 "switch_case.m"
                MR_Integer ll_backend__switch_case__V_18_18 = (MR_Integer) ll_backend__switch_case__V_9_9;

#line 41 "switch_case.m"
                {
#line 41 "switch_case.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(ll_backend__switch_case__HeadVar__1_1, ll_backend__switch_case__V_17_17, ll_backend__switch_case__V_18_18);
#line 41 "switch_case.m"
                  return;
                }
#line 41 "switch_case.m"
              }
#line 41 "switch_case.m"
          }
#line 41 "switch_case.m"
      }
#line 41 "switch_case.m"
  }
#line 41 "switch_case.m"
}

#line 41 "switch_case.m"
MR_bool MR_CALL 
ll_backend__switch_case____Unify____case_label_info_0_0(
#line 41 "switch_case.m"
  MR_Word ll_backend__switch_case__HeadVar__1_1,
#line 41 "switch_case.m"
  MR_Word ll_backend__switch_case__HeadVar__2_2)
#line 41 "switch_case.m"
{
#line 41 "switch_case.m"
  {
#line 41 "switch_case.m"
    MR_bool ll_backend__switch_case__succeeded;
#line 41 "switch_case.m"
    MR_Integer ll_backend__switch_case__CastX_9 = (MR_Integer) ll_backend__switch_case__HeadVar__1_1;
#line 41 "switch_case.m"
    MR_Integer ll_backend__switch_case__CastY_10 = (MR_Integer) ll_backend__switch_case__HeadVar__2_2;

#line 41 "switch_case.m"
    ll_backend__switch_case__succeeded = (ll_backend__switch_case__CastX_9 == ll_backend__switch_case__CastY_10);
#line 41 "switch_case.m"
    if (ll_backend__switch_case__succeeded)
#line 41 "switch_case.m"
      ll_backend__switch_case__succeeded = MR_TRUE;
#line 41 "switch_case.m"
    else
#line 41 "switch_case.m"
      {
#line 41 "switch_case.m"
        MR_Word ll_backend__switch_case__TypeInfo_11_11;
#line 41 "switch_case.m"
        MR_String ll_backend__switch_case__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__switch_case__HeadVar__1_1, (MR_Integer) 0)));
#line 41 "switch_case.m"
        MR_Word ll_backend__switch_case__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_case__HeadVar__1_1, (MR_Integer) 1)));
#line 41 "switch_case.m"
        MR_Word ll_backend__switch_case__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_case__HeadVar__1_1, (MR_Integer) 2)));
#line 41 "switch_case.m"
        MR_String ll_backend__switch_case__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__switch_case__HeadVar__2_2, (MR_Integer) 0)));
#line 41 "switch_case.m"
        MR_Word ll_backend__switch_case__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_case__HeadVar__2_2, (MR_Integer) 1)));
#line 41 "switch_case.m"
        MR_Word ll_backend__switch_case__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_case__HeadVar__2_2, (MR_Integer) 2)));

#line 1316 "ll_backend.switch_case.c"
        ll_backend__switch_case__succeeded = (strcmp(ll_backend__switch_case__V_3_3, ll_backend__switch_case__V_6_6) == 0);
#line 41 "switch_case.m"
        if (ll_backend__switch_case__succeeded)
#line 41 "switch_case.m"
          {
#line 1322 "ll_backend.switch_case.c"
            ll_backend__switch_case__TypeInfo_11_11 = (MR_Word) &ll_backend__switch_case_scalar_common_1[0];
#line 1324 "ll_backend.switch_case.c"
            {
#line 1326 "ll_backend.switch_case.c"
              ll_backend__switch_case__succeeded = mercury__builtin__unify_2_p_0(ll_backend__switch_case__TypeInfo_11_11, ((MR_Box) (ll_backend__switch_case__V_4_4)), ((MR_Box) (ll_backend__switch_case__V_7_7)));
            }
#line 41 "switch_case.m"
            if (ll_backend__switch_case__succeeded)
#line 1331 "ll_backend.switch_case.c"
              ll_backend__switch_case__succeeded = (ll_backend__switch_case__V_5_5 == ll_backend__switch_case__V_8_8);
#line 41 "switch_case.m"
          }
#line 41 "switch_case.m"
      }
#line 41 "switch_case.m"
    return ll_backend__switch_case__succeeded;
#line 41 "switch_case.m"
  }
#line 41 "switch_case.m"
}

#line 37 "switch_case.m"
void MR_CALL 
ll_backend__switch_case____Compare____case_code_included_0_0(
#line 37 "switch_case.m"
  MR_Word * ll_backend__switch_case__HeadVar__1_1,
#line 37 "switch_case.m"
  MR_Word ll_backend__switch_case__HeadVar__2_2,
#line 37 "switch_case.m"
  MR_Word ll_backend__switch_case__HeadVar__3_3)
#line 37 "switch_case.m"
{
#line 37 "switch_case.m"
  {
#line 37 "switch_case.m"
    MR_bool ll_backend__switch_case__succeeded;
#line 37 "switch_case.m"
    MR_Integer ll_backend__switch_case__Cast_HeadVar1_4 = (MR_Integer) ll_backend__switch_case__HeadVar__2_2;
#line 37 "switch_case.m"
    MR_Integer ll_backend__switch_case__Cast_HeadVar2_5 = (MR_Integer) ll_backend__switch_case__HeadVar__3_3;

#line 37 "switch_case.m"
    {
#line 37 "switch_case.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(ll_backend__switch_case__HeadVar__1_1, ll_backend__switch_case__Cast_HeadVar1_4, ll_backend__switch_case__Cast_HeadVar2_5);
#line 37 "switch_case.m"
      return;
    }
#line 37 "switch_case.m"
  }
#line 37 "switch_case.m"
}

#line 37 "switch_case.m"
MR_bool MR_CALL 
ll_backend__switch_case____Unify____case_code_included_0_0(
#line 37 "switch_case.m"
  MR_Word ll_backend__switch_case__HeadVar__2_1,
#line 37 "switch_case.m"
  MR_Word ll_backend__switch_case__HeadVar__2_2)
#line 37 "switch_case.m"
{
#line 1385 "ll_backend.switch_case.c"
  {
#line 1387 "ll_backend.switch_case.c"
    MR_bool ll_backend__switch_case__succeeded = (ll_backend__switch_case__HeadVar__2_1 == ll_backend__switch_case__HeadVar__2_2);

#line 1390 "ll_backend.switch_case.c"
    return ll_backend__switch_case__succeeded;
#line 1392 "ll_backend.switch_case.c"
  }
#line 37 "switch_case.m"
}

#line 71 "switch_case.m"
void MR_CALL 
ll_backend__switch_case__add_remaining_case_4_p_0(
#line 71 "switch_case.m"
  MR_Word ll_backend__switch_case___Label_5,
#line 71 "switch_case.m"
  MR_Word ll_backend__switch_case__CaseInfo_6,
#line 71 "switch_case.m"
  MR_Word ll_backend__switch_case__STATE_VARIABLE_Code_0_11,
#line 71 "switch_case.m"
  MR_Word * ll_backend__switch_case__STATE_VARIABLE_Code_12)
#line 71 "switch_case.m"
{
#line 133 "switch_case.m"
  {
#line 133 "switch_case.m"
    MR_bool ll_backend__switch_case__succeeded;

#line 133 "switch_case.m"
    {
#line 133 "switch_case.m"
      ll_backend__switch_case__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_114_101_109_97_105_110_105_110_103_95_99_97_115_101_95_95_91_49_93_95_48_4_p_0(ll_backend__switch_case__CaseInfo_6, ll_backend__switch_case__STATE_VARIABLE_Code_0_11, ll_backend__switch_case__STATE_VARIABLE_Code_12);
#line 133 "switch_case.m"
      return;
    }
#line 133 "switch_case.m"
  }
#line 71 "switch_case.m"
}

#line 68 "switch_case.m"
void MR_CALL 
ll_backend__switch_case__generate_case_code_or_jump_4_p_0(
#line 68 "switch_case.m"
  MR_Word ll_backend__switch_case__CaseLabel_5,
#line 68 "switch_case.m"
  MR_Word * ll_backend__switch_case__Code_6,
#line 68 "switch_case.m"
  MR_Word ll_backend__switch_case__STATE_VARIABLE_CaseLabelMap_0_13,
#line 68 "switch_case.m"
  MR_Word * ll_backend__switch_case__STATE_VARIABLE_CaseLabelMap_14)
#line 68 "switch_case.m"
{
#line 115 "switch_case.m"
  {
#line 115 "switch_case.m"
    MR_bool ll_backend__switch_case__succeeded;
#line 115 "switch_case.m"
    MR_Word ll_backend__switch_case__TypeCtorInfo_25_25 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0;
#line 115 "switch_case.m"
    MR_Word ll_backend__switch_case__TypeCtorInfo_26_26 = (MR_Word) &ll_backend__switch_case__ll_backend__switch_case__type_ctor_info_case_label_info_0;
#line 115 "switch_case.m"
    MR_Word ll_backend__switch_case__CaseInfo0_8;
#line 115 "switch_case.m"
    MR_String ll_backend__switch_case__Comment_9;
#line 115 "switch_case.m"
    MR_Word ll_backend__switch_case__CaseCode_10;
#line 115 "switch_case.m"
    MR_Word ll_backend__switch_case__CaseIncluded_11;
#line 116 "switch_case.m"
    MR_Box ll_backend__switch_case__conv0_CaseInfo0_8;

#line 116 "switch_case.m"
    {
#line 116 "switch_case.m"
      mercury__map__lookup_3_p_0(ll_backend__switch_case__TypeCtorInfo_25_25, ll_backend__switch_case__TypeCtorInfo_26_26, ll_backend__switch_case__STATE_VARIABLE_CaseLabelMap_0_13, ((MR_Box) (ll_backend__switch_case__CaseLabel_5)), &ll_backend__switch_case__conv0_CaseInfo0_8);
    }
#line 116 "switch_case.m"
    ll_backend__switch_case__CaseInfo0_8 = ((MR_Word) ll_backend__switch_case__conv0_CaseInfo0_8);
#line 117 "switch_case.m"
    ll_backend__switch_case__Comment_9 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__switch_case__CaseInfo0_8, (MR_Integer) 0)));
#line 117 "switch_case.m"
    ll_backend__switch_case__CaseCode_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_case__CaseInfo0_8, (MR_Integer) 1)));
#line 117 "switch_case.m"
    ll_backend__switch_case__CaseIncluded_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_case__CaseInfo0_8, (MR_Integer) 2)));
#line 124 "switch_case.m"
    if ((ll_backend__switch_case__CaseIncluded_11 == (MR_Integer) 1))
#line 125 "switch_case.m"
      {
#line 125 "switch_case.m"
        MR_Word ll_backend__switch_case__V_15_15;
#line 125 "switch_case.m"
        MR_Word ll_backend__switch_case__V_16_16;
#line 125 "switch_case.m"
        MR_Word ll_backend__switch_case__V_17_17;
#line 125 "switch_case.m"
        MR_String ll_backend__switch_case__V_18_18;

#line 129 "switch_case.m"
        {
#line 129 "switch_case.m"
          ll_backend__switch_case__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 129 "switch_case.m"
          MR_hl_field(MR_mktag(1), ll_backend__switch_case__V_17_17, 0) = ((MR_Box) (ll_backend__switch_case__CaseLabel_5));
#line 129 "switch_case.m"
        }
#line 129 "switch_case.m"
        {
#line 129 "switch_case.m"
          ll_backend__switch_case__V_16_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 129 "switch_case.m"
          MR_hl_field(MR_mktag(3), ll_backend__switch_case__V_16_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 129 "switch_case.m"
          MR_hl_field(MR_mktag(3), ll_backend__switch_case__V_16_16, 1) = ((MR_Box) (ll_backend__switch_case__V_17_17));
#line 129 "switch_case.m"
        }
#line 129 "switch_case.m"
        {
#line 129 "switch_case.m"
          ll_backend__switch_case__V_18_18 = mercury__string__f_43_43_2_f_0((MR_String) "goto ", ll_backend__switch_case__Comment_9);
        }
#line 128 "switch_case.m"
        {
#line 128 "switch_case.m"
          ll_backend__switch_case__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 128 "switch_case.m"
          MR_hl_field(MR_mktag(0), ll_backend__switch_case__V_15_15, 0) = ((MR_Box) (ll_backend__switch_case__V_16_16));
#line 128 "switch_case.m"
          MR_hl_field(MR_mktag(0), ll_backend__switch_case__V_15_15, 1) = ((MR_Box) (ll_backend__switch_case__V_18_18));
#line 128 "switch_case.m"
        }
#line 128 "switch_case.m"
        {
#line 128 "switch_case.m"
          *ll_backend__switch_case__Code_6 = mercury__cord__singleton_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ((MR_Box) (ll_backend__switch_case__V_15_15)));
        }
#line 129 "switch_case.m"
        *ll_backend__switch_case__STATE_VARIABLE_CaseLabelMap_14 = ll_backend__switch_case__STATE_VARIABLE_CaseLabelMap_0_13;
#line 125 "switch_case.m"
      }
#line 124 "switch_case.m"
    else
#line 119 "switch_case.m"
      {
#line 119 "switch_case.m"
        MR_Word ll_backend__switch_case__CaseInfo_12;

#line 120 "switch_case.m"
        *ll_backend__switch_case__Code_6 = ll_backend__switch_case__CaseCode_10;
#line 121 "switch_case.m"
        {
#line 121 "switch_case.m"
          ll_backend__switch_case__CaseInfo_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 121 "switch_case.m"
          MR_hl_field(MR_mktag(0), ll_backend__switch_case__CaseInfo_12, 0) = ((MR_Box) (ll_backend__switch_case__Comment_9));
#line 121 "switch_case.m"
          MR_hl_field(MR_mktag(0), ll_backend__switch_case__CaseInfo_12, 1) = ((MR_Box) (ll_backend__switch_case__CaseCode_10));
#line 121 "switch_case.m"
          MR_hl_field(MR_mktag(0), ll_backend__switch_case__CaseInfo_12, 2) = ((MR_Box) ((MR_Integer) 1));
#line 121 "switch_case.m"
        }
#line 123 "switch_case.m"
        {
#line 123 "switch_case.m"
          mercury__map__det_update_4_p_0(ll_backend__switch_case__TypeCtorInfo_25_25, ll_backend__switch_case__TypeCtorInfo_26_26, ((MR_Box) (ll_backend__switch_case__CaseLabel_5)), ((MR_Box) (ll_backend__switch_case__CaseInfo_12)), ll_backend__switch_case__STATE_VARIABLE_CaseLabelMap_0_13, ll_backend__switch_case__STATE_VARIABLE_CaseLabelMap_14);
#line 123 "switch_case.m"
          return;
        }
#line 119 "switch_case.m"
      }
#line 115 "switch_case.m"
  }
#line 68 "switch_case.m"
}

#line 95 "switch_case.m"
static void MR_CALL 
ll_backend__switch_case__represent_tagged_case_for_llds_9_p_0_1(
#line 95 "switch_case.m"
  MR_Box ll_backend__switch_case__closure_arg,
#line 95 "switch_case.m"
  MR_Box ll_backend__switch_case__wrapper_arg_1,
#line 95 "switch_case.m"
  MR_Box * ll_backend__switch_case__wrapper_arg_2,
#line 95 "switch_case.m"
  MR_Box * ll_backend__switch_case__wrapper_arg_3)
#line 95 "switch_case.m"
{
#line 95 "switch_case.m"
  {
#line 95 "switch_case.m"
    MR_Box ll_backend__switch_case__closure = ll_backend__switch_case__closure_arg;
#line 95 "switch_case.m"
    MR_String ll_backend__switch_case__conv1_HeadVar__2_2;
#line 95 "switch_case.m"
    MR_Word ll_backend__switch_case__conv0_HeadVar__3_3;

#line 95 "switch_case.m"
    {
#line 95 "switch_case.m"
      hlds__hlds_out__hlds_out_goal__project_cons_name_and_tag_3_p_0(((MR_Word) ll_backend__switch_case__wrapper_arg_1), &ll_backend__switch_case__conv1_HeadVar__2_2, &ll_backend__switch_case__conv0_HeadVar__3_3);
    }
#line 95 "switch_case.m"
    *ll_backend__switch_case__wrapper_arg_2 = ((MR_Box) (ll_backend__switch_case__conv1_HeadVar__2_2));
#line 95 "switch_case.m"
    *ll_backend__switch_case__wrapper_arg_3 = ((MR_Box) (ll_backend__switch_case__conv0_HeadVar__3_3));
#line 95 "switch_case.m"
  }
#line 95 "switch_case.m"
}

#line 62 "switch_case.m"
void MR_CALL 
ll_backend__switch_case__represent_tagged_case_for_llds_9_p_0(
#line 62 "switch_case.m"
  MR_Word ll_backend__switch_case__Params_10,
#line 62 "switch_case.m"
  MR_Word ll_backend__switch_case__TaggedCase_11,
#line 62 "switch_case.m"
  MR_Word * ll_backend__switch_case__Label_12,
#line 62 "switch_case.m"
  MR_Word ll_backend__switch_case__STATE_VARIABLE_CaseLabelMap_0_38,
#line 62 "switch_case.m"
  MR_Word * ll_backend__switch_case__STATE_VARIABLE_CaseLabelMap_39,
#line 62 "switch_case.m"
  MR_Word ll_backend__switch_case__STATE_VARIABLE_MaybeEnd_0_40,
#line 62 "switch_case.m"
  MR_Word * ll_backend__switch_case__STATE_VARIABLE_MaybeEnd_41,
#line 62 "switch_case.m"
  MR_Word ll_backend__switch_case__STATE_VARIABLE_CI_0_42,
#line 62 "switch_case.m"
  MR_Word * ll_backend__switch_case__STATE_VARIABLE_CI_43)
#line 62 "switch_case.m"
{
#line 90 "switch_case.m"
  {
#line 90 "switch_case.m"
    MR_bool ll_backend__switch_case__succeeded;
#line 90 "switch_case.m"
    MR_Word ll_backend__switch_case__TypeCtorInfo_69_69;
#line 90 "switch_case.m"
    MR_String ll_backend__switch_case__SwitchVarName_16 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__switch_case__Params_10, (MR_Integer) 0)));
#line 90 "switch_case.m"
    MR_Word ll_backend__switch_case__SwitchGoalInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_case__Params_10, (MR_Integer) 1)));
#line 90 "switch_case.m"
    MR_Word ll_backend__switch_case__CodeModel_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_case__Params_10, (MR_Integer) 2)));
#line 90 "switch_case.m"
    MR_Word ll_backend__switch_case__BranchStart_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_case__Params_10, (MR_Integer) 3)));
#line 90 "switch_case.m"
    MR_Word ll_backend__switch_case__EndLabel_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_case__Params_10, (MR_Integer) 4)));
#line 90 "switch_case.m"
    MR_Word ll_backend__switch_case__MainTaggedConsId_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_case__TaggedCase_11, (MR_Integer) 0)));
#line 90 "switch_case.m"
    MR_Word ll_backend__switch_case__OtherTaggedConsIds_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_case__TaggedCase_11, (MR_Integer) 1)));
#line 90 "switch_case.m"
    MR_Word ll_backend__switch_case__Goal_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_case__TaggedCase_11, (MR_Integer) 3)));
#line 90 "switch_case.m"
    MR_String ll_backend__switch_case__MainConsName_25;
#line 90 "switch_case.m"
    MR_Word ll_backend__switch_case__OtherConsNames_27;
#line 90 "switch_case.m"
    MR_String ll_backend__switch_case__Comment_29;
#line 90 "switch_case.m"
    MR_Word ll_backend__switch_case__LabelCode_30;
#line 90 "switch_case.m"
    MR_Word ll_backend__switch_case__TraceCode_31;
#line 90 "switch_case.m"
    MR_Word ll_backend__switch_case__GoalCode_32;
#line 90 "switch_case.m"
    MR_Word ll_backend__switch_case__StoreMap_33;
#line 90 "switch_case.m"
    MR_Word ll_backend__switch_case__SaveCode_34;
#line 90 "switch_case.m"
    MR_Word ll_backend__switch_case__GotoEndCode_35;
#line 90 "switch_case.m"
    MR_Word ll_backend__switch_case__Code_36;
#line 90 "switch_case.m"
    MR_Word ll_backend__switch_case__CaseInfo_37;
#line 90 "switch_case.m"
    MR_Word ll_backend__switch_case__STATE_VARIABLE_CI_45_45;
#line 90 "switch_case.m"
    MR_Word ll_backend__switch_case__STATE_VARIABLE_CI_46_46;
#line 90 "switch_case.m"
    MR_Word ll_backend__switch_case__V_47_47;
#line 90 "switch_case.m"
    MR_Word ll_backend__switch_case__V_48_48;
#line 90 "switch_case.m"
    MR_Word ll_backend__switch_case__STATE_VARIABLE_CI_49_49;
#line 90 "switch_case.m"
    MR_Word ll_backend__switch_case__STATE_VARIABLE_CI_50_50;
#line 90 "switch_case.m"
    MR_Word ll_backend__switch_case__V_53_53;
#line 90 "switch_case.m"
    MR_Word ll_backend__switch_case__V_54_54;
#line 90 "switch_case.m"
    MR_Word ll_backend__switch_case__V_55_55;
#line 90 "switch_case.m"
    MR_String ll_backend__switch_case__V_56_56;
#line 90 "switch_case.m"
    MR_Word ll_backend__switch_case__V_58_58;
#line 90 "switch_case.m"
    MR_Word ll_backend__switch_case__V_59_59;
#line 90 "switch_case.m"
    MR_Word ll_backend__switch_case__V_60_60;
#line 93 "switch_case.m"
    MR_Integer ll_backend__switch_case__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__switch_case__TaggedCase_11, (MR_Integer) 2)));
#line 94 "switch_case.m"
    MR_Word ll_backend__switch_case__V_26_26;
#line 95 "switch_case.m"
    MR_Word ll_backend__switch_case__V_28_28;

#line 94 "switch_case.m"
    {
#line 94 "switch_case.m"
      hlds__hlds_out__hlds_out_goal__project_cons_name_and_tag_3_p_0(ll_backend__switch_case__MainTaggedConsId_21, &ll_backend__switch_case__MainConsName_25, &ll_backend__switch_case__V_26_26);
    }
#line 95 "switch_case.m"
    {
#line 95 "switch_case.m"
      mercury__list__map2_4_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0, (MR_Word) &ll_backend__switch_case_scalar_common_2[1], ll_backend__switch_case__OtherTaggedConsIds_22, &ll_backend__switch_case__OtherConsNames_27, &ll_backend__switch_case__V_28_28);
    }
#line 97 "switch_case.m"
    {
#line 97 "switch_case.m"
      ll_backend__switch_case__Comment_29 = hlds__hlds_out__hlds_out_goal__case_comment_3_f_0(ll_backend__switch_case__SwitchVarName_16, ll_backend__switch_case__MainConsName_25, ll_backend__switch_case__OtherConsNames_27);
    }
#line 98 "switch_case.m"
    {
#line 98 "switch_case.m"
      ll_backend__code_info__reset_to_position_3_p_0(ll_backend__switch_case__BranchStart_19, ll_backend__switch_case__STATE_VARIABLE_CI_0_42, &ll_backend__switch_case__STATE_VARIABLE_CI_45_45);
    }
#line 99 "switch_case.m"
    {
#line 99 "switch_case.m"
      ll_backend__code_info__get_next_label_3_p_0(ll_backend__switch_case__Label_12, ll_backend__switch_case__STATE_VARIABLE_CI_45_45, &ll_backend__switch_case__STATE_VARIABLE_CI_46_46);
    }
#line 1723 "ll_backend.switch_case.c"
    ll_backend__switch_case__TypeCtorInfo_69_69 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 101 "switch_case.m"
    {
#line 101 "switch_case.m"
      ll_backend__switch_case__V_48_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 101 "switch_case.m"
      MR_hl_field(MR_mktag(3), ll_backend__switch_case__V_48_48, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 101 "switch_case.m"
      MR_hl_field(MR_mktag(3), ll_backend__switch_case__V_48_48, 1) = ((MR_Box) (*ll_backend__switch_case__Label_12));
#line 101 "switch_case.m"
    }
#line 100 "switch_case.m"
    {
#line 100 "switch_case.m"
      ll_backend__switch_case__V_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 100 "switch_case.m"
      MR_hl_field(MR_mktag(0), ll_backend__switch_case__V_47_47, 0) = ((MR_Box) (ll_backend__switch_case__V_48_48));
#line 100 "switch_case.m"
      MR_hl_field(MR_mktag(0), ll_backend__switch_case__V_47_47, 1) = ((MR_Box) (ll_backend__switch_case__Comment_29));
#line 100 "switch_case.m"
    }
#line 100 "switch_case.m"
    {
#line 100 "switch_case.m"
      ll_backend__switch_case__LabelCode_30 = mercury__cord__singleton_1_f_0(ll_backend__switch_case__TypeCtorInfo_69_69, ((MR_Box) (ll_backend__switch_case__V_47_47)));
    }
#line 103 "switch_case.m"
    {
#line 103 "switch_case.m"
      ll_backend__trace_gen__maybe_generate_internal_event_code_5_p_0(ll_backend__switch_case__Goal_24, ll_backend__switch_case__SwitchGoalInfo_17, &ll_backend__switch_case__TraceCode_31, ll_backend__switch_case__STATE_VARIABLE_CI_46_46, &ll_backend__switch_case__STATE_VARIABLE_CI_49_49);
    }
#line 104 "switch_case.m"
    {
#line 104 "switch_case.m"
      ll_backend__code_gen__generate_goal_5_p_0(ll_backend__switch_case__CodeModel_18, ll_backend__switch_case__Goal_24, &ll_backend__switch_case__GoalCode_32, ll_backend__switch_case__STATE_VARIABLE_CI_49_49, &ll_backend__switch_case__STATE_VARIABLE_CI_50_50);
    }
#line 105 "switch_case.m"
    {
#line 105 "switch_case.m"
      hlds__hlds_llds__goal_info_get_store_map_2_p_0(ll_backend__switch_case__SwitchGoalInfo_17, &ll_backend__switch_case__StoreMap_33);
    }
#line 106 "switch_case.m"
    {
#line 106 "switch_case.m"
      ll_backend__code_info__generate_branch_end_6_p_0(ll_backend__switch_case__StoreMap_33, ll_backend__switch_case__STATE_VARIABLE_MaybeEnd_0_40, ll_backend__switch_case__STATE_VARIABLE_MaybeEnd_41, &ll_backend__switch_case__SaveCode_34, ll_backend__switch_case__STATE_VARIABLE_CI_50_50, ll_backend__switch_case__STATE_VARIABLE_CI_43);
    }
#line 108 "switch_case.m"
    {
#line 108 "switch_case.m"
      ll_backend__switch_case__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 108 "switch_case.m"
      MR_hl_field(MR_mktag(1), ll_backend__switch_case__V_55_55, 0) = ((MR_Box) (ll_backend__switch_case__EndLabel_20));
#line 108 "switch_case.m"
    }
#line 108 "switch_case.m"
    {
#line 108 "switch_case.m"
      ll_backend__switch_case__V_54_54 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 108 "switch_case.m"
      MR_hl_field(MR_mktag(3), ll_backend__switch_case__V_54_54, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 108 "switch_case.m"
      MR_hl_field(MR_mktag(3), ll_backend__switch_case__V_54_54, 1) = ((MR_Box) (ll_backend__switch_case__V_55_55));
#line 108 "switch_case.m"
    }
#line 108 "switch_case.m"
    {
#line 108 "switch_case.m"
      ll_backend__switch_case__V_56_56 = mercury__string__f_43_43_2_f_0((MR_String) "goto end of switch on ", ll_backend__switch_case__SwitchVarName_16);
    }
#line 107 "switch_case.m"
    {
#line 107 "switch_case.m"
      ll_backend__switch_case__V_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 107 "switch_case.m"
      MR_hl_field(MR_mktag(0), ll_backend__switch_case__V_53_53, 0) = ((MR_Box) (ll_backend__switch_case__V_54_54));
#line 107 "switch_case.m"
      MR_hl_field(MR_mktag(0), ll_backend__switch_case__V_53_53, 1) = ((MR_Box) (ll_backend__switch_case__V_56_56));
#line 107 "switch_case.m"
    }
#line 107 "switch_case.m"
    {
#line 107 "switch_case.m"
      ll_backend__switch_case__GotoEndCode_35 = mercury__cord__singleton_1_f_0(ll_backend__switch_case__TypeCtorInfo_69_69, ((MR_Box) (ll_backend__switch_case__V_53_53)));
    }
#line 111 "switch_case.m"
    {
#line 111 "switch_case.m"
      ll_backend__switch_case__V_60_60 = mercury__cord__f_43_43_2_f_0(ll_backend__switch_case__TypeCtorInfo_69_69, ll_backend__switch_case__SaveCode_34, ll_backend__switch_case__GotoEndCode_35);
    }
#line 111 "switch_case.m"
    {
#line 111 "switch_case.m"
      ll_backend__switch_case__V_59_59 = mercury__cord__f_43_43_2_f_0(ll_backend__switch_case__TypeCtorInfo_69_69, ll_backend__switch_case__GoalCode_32, ll_backend__switch_case__V_60_60);
    }
#line 111 "switch_case.m"
    {
#line 111 "switch_case.m"
      ll_backend__switch_case__V_58_58 = mercury__cord__f_43_43_2_f_0(ll_backend__switch_case__TypeCtorInfo_69_69, ll_backend__switch_case__TraceCode_31, ll_backend__switch_case__V_59_59);
    }
#line 111 "switch_case.m"
    {
#line 111 "switch_case.m"
      ll_backend__switch_case__Code_36 = mercury__cord__f_43_43_2_f_0(ll_backend__switch_case__TypeCtorInfo_69_69, ll_backend__switch_case__LabelCode_30, ll_backend__switch_case__V_58_58);
    }
#line 112 "switch_case.m"
    {
#line 112 "switch_case.m"
      ll_backend__switch_case__CaseInfo_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 112 "switch_case.m"
      MR_hl_field(MR_mktag(0), ll_backend__switch_case__CaseInfo_37, 0) = ((MR_Box) (ll_backend__switch_case__Comment_29));
#line 112 "switch_case.m"
      MR_hl_field(MR_mktag(0), ll_backend__switch_case__CaseInfo_37, 1) = ((MR_Box) (ll_backend__switch_case__Code_36));
#line 112 "switch_case.m"
      MR_hl_field(MR_mktag(0), ll_backend__switch_case__CaseInfo_37, 2) = ((MR_Box) ((MR_Integer) 0));
#line 112 "switch_case.m"
    }
#line 113 "switch_case.m"
    {
#line 113 "switch_case.m"
      mercury__map__det_insert_4_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, (MR_Word) &ll_backend__switch_case__ll_backend__switch_case__type_ctor_info_case_label_info_0, ((MR_Box) (*ll_backend__switch_case__Label_12)), ((MR_Box) (ll_backend__switch_case__CaseInfo_37)), ll_backend__switch_case__STATE_VARIABLE_CaseLabelMap_0_38, ll_backend__switch_case__STATE_VARIABLE_CaseLabelMap_39);
#line 113 "switch_case.m"
      return;
    }
#line 90 "switch_case.m"
  }
#line 62 "switch_case.m"
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
