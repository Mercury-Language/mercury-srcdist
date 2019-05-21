/*
** Automatically generated from `switch_case.m'
** by the Mercury compiler,
** version rotd-2017-07-26
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
#include "transform_hlds.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_util.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_form.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
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
#include "libs.compiler_util.mih"
#include "libs.dependency_graph.mih"
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
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
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




static const MR_EnumFunctorDesc ll_backend__switch_case__ll_backend__switch_case__enum_functor_desc_case_code_included_0_0;

static const MR_EnumFunctorDesc ll_backend__switch_case__ll_backend__switch_case__enum_functor_desc_case_code_included_0_1;

static const MR_EnumFunctorDescPtr ll_backend__switch_case__ll_backend__switch_case__enum_value_ordered_case_code_included_0[2];

static const MR_EnumFunctorDescPtr ll_backend__switch_case__ll_backend__switch_case__enum_name_ordered_case_code_included_0[2];

static const MR_Integer ll_backend__switch_case__ll_backend__switch_case__functor_number_map_case_code_included_0[2];

static const MR_FA_TypeInfo_Struct1 ll_backend__switch_case__cord__ti_cord_1ll_backend__llds__type_ctor_info_instruction_0;

static const MR_PseudoTypeInfo ll_backend__switch_case__ll_backend__switch_case__field_types_case_label_info_0_0[3];

static const MR_ConstString ll_backend__switch_case__ll_backend__switch_case__field_names_case_label_info_0_0[3];

static const MR_DuFunctorDesc ll_backend__switch_case__ll_backend__switch_case__du_functor_desc_case_label_info_0_0;

static const MR_DuFunctorDescPtr ll_backend__switch_case__ll_backend__switch_case__du_stag_ordered_case_label_info_0_0[1];

static const MR_DuPtagLayout ll_backend__switch_case__ll_backend__switch_case__du_ptag_ordered_case_label_info_0[1];

static const MR_DuFunctorDescPtr ll_backend__switch_case__ll_backend__switch_case__du_name_ordered_case_label_info_0[1];

static const MR_Integer ll_backend__switch_case__ll_backend__switch_case__functor_number_map_case_label_info_0[1];

static const MR_FA_TypeInfo_Struct2 ll_backend__switch_case__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0ll_backend__switch_case__type_ctor_info_case_label_info_0;

static const MR_PseudoTypeInfo ll_backend__switch_case__ll_backend__switch_case__field_types_represent_params_0_0[5];

static const MR_ConstString ll_backend__switch_case__ll_backend__switch_case__field_names_represent_params_0_0[5];

static const MR_DuFunctorDesc ll_backend__switch_case__ll_backend__switch_case__du_functor_desc_represent_params_0_0;

static const MR_DuFunctorDescPtr ll_backend__switch_case__ll_backend__switch_case__du_stag_ordered_represent_params_0_0[1];

static const MR_DuPtagLayout ll_backend__switch_case__ll_backend__switch_case__du_ptag_ordered_represent_params_0[1];

static const MR_DuFunctorDescPtr ll_backend__switch_case__ll_backend__switch_case__du_name_ordered_represent_params_0[1];

static const MR_Integer ll_backend__switch_case__ll_backend__switch_case__functor_number_map_represent_params_0[1];

static void MR_CALL 
ll_backend__switch_case__represent_tagged_case_for_llds_9_p_0_1(
  MR_Box ll_backend__switch_case__closure_arg,
  MR_Box ll_backend__switch_case__wrapper_arg_1,
  MR_Box * ll_backend__switch_case__wrapper_arg_2,
  MR_Box * ll_backend__switch_case__wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__switch_case____Unify____case_code_included_0_0_10001(
  MR_Box ll_backend__switch_case__wrapper_arg_1,
  MR_Box ll_backend__switch_case__wrapper_arg_2);

static void MR_CALL 
ll_backend__switch_case____Compare____case_code_included_0_0_10001(
  MR_Box * ll_backend__switch_case__wrapper_arg_1,
  MR_Box ll_backend__switch_case__wrapper_arg_2,
  MR_Box ll_backend__switch_case__wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__switch_case____Unify____case_label_info_0_0_10001(
  MR_Box ll_backend__switch_case__wrapper_arg_1,
  MR_Box ll_backend__switch_case__wrapper_arg_2);

static void MR_CALL 
ll_backend__switch_case____Compare____case_label_info_0_0_10001(
  MR_Box * ll_backend__switch_case__wrapper_arg_1,
  MR_Box ll_backend__switch_case__wrapper_arg_2,
  MR_Box ll_backend__switch_case__wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__switch_case____Unify____case_label_map_0_0_10001(
  MR_Box ll_backend__switch_case__wrapper_arg_1,
  MR_Box ll_backend__switch_case__wrapper_arg_2);

static void MR_CALL 
ll_backend__switch_case____Compare____case_label_map_0_0_10001(
  MR_Box * ll_backend__switch_case__wrapper_arg_1,
  MR_Box ll_backend__switch_case__wrapper_arg_2,
  MR_Box ll_backend__switch_case__wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__switch_case____Unify____represent_params_0_0_10001(
  MR_Box ll_backend__switch_case__wrapper_arg_1,
  MR_Box ll_backend__switch_case__wrapper_arg_2);

static void MR_CALL 
ll_backend__switch_case____Compare____represent_params_0_0_10001(
  MR_Box * ll_backend__switch_case__wrapper_arg_1,
  MR_Box ll_backend__switch_case__wrapper_arg_2,
  MR_Box ll_backend__switch_case__wrapper_arg_3);


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



static const MR_EnumFunctorDesc ll_backend__switch_case__ll_backend__switch_case__enum_functor_desc_case_code_included_0_0 = {
  (MR_String) "case_code_not_yet_included",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc ll_backend__switch_case__ll_backend__switch_case__enum_functor_desc_case_code_included_0_1 = {
  (MR_String) "case_code_already_included",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr ll_backend__switch_case__ll_backend__switch_case__enum_value_ordered_case_code_included_0[2] = {
  &ll_backend__switch_case__ll_backend__switch_case__enum_functor_desc_case_code_included_0_0,
  &ll_backend__switch_case__ll_backend__switch_case__enum_functor_desc_case_code_included_0_1
};

static const MR_EnumFunctorDescPtr ll_backend__switch_case__ll_backend__switch_case__enum_name_ordered_case_code_included_0[2] = {
  &ll_backend__switch_case__ll_backend__switch_case__enum_functor_desc_case_code_included_0_1,
  &ll_backend__switch_case__ll_backend__switch_case__enum_functor_desc_case_code_included_0_0
};

static const MR_Integer ll_backend__switch_case__ll_backend__switch_case__functor_number_map_case_code_included_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ll_backend__switch_case__ll_backend__switch_case__type_ctor_info_case_code_included_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
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

static const MR_FA_TypeInfo_Struct1 ll_backend__switch_case__cord__ti_cord_1ll_backend__llds__type_ctor_info_instruction_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0
  }
};

static const MR_PseudoTypeInfo ll_backend__switch_case__ll_backend__switch_case__field_types_case_label_info_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &ll_backend__switch_case__cord__ti_cord_1ll_backend__llds__type_ctor_info_instruction_0,
  (MR_PseudoTypeInfo) &ll_backend__switch_case__ll_backend__switch_case__type_ctor_info_case_code_included_0
};

static const MR_ConstString ll_backend__switch_case__ll_backend__switch_case__field_names_case_label_info_0_0[3] = {
  (MR_String) "case_description",
  (MR_String) "case_code",
  (MR_String) "case_code_included"
};

static const MR_DuFunctorDesc ll_backend__switch_case__ll_backend__switch_case__du_functor_desc_case_label_info_0_0 = {
  (MR_String) "case_label_info",
  (MR_Integer) 3,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__switch_case__ll_backend__switch_case__field_types_case_label_info_0_0,
  ll_backend__switch_case__ll_backend__switch_case__field_names_case_label_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr ll_backend__switch_case__ll_backend__switch_case__du_stag_ordered_case_label_info_0_0[1] = {
  &ll_backend__switch_case__ll_backend__switch_case__du_functor_desc_case_label_info_0_0
};

static const MR_DuPtagLayout ll_backend__switch_case__ll_backend__switch_case__du_ptag_ordered_case_label_info_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    ll_backend__switch_case__ll_backend__switch_case__du_stag_ordered_case_label_info_0_0
  }
};

static const MR_DuFunctorDescPtr ll_backend__switch_case__ll_backend__switch_case__du_name_ordered_case_label_info_0[1] = {
  &ll_backend__switch_case__ll_backend__switch_case__du_functor_desc_case_label_info_0_0
};

static const MR_Integer ll_backend__switch_case__ll_backend__switch_case__functor_number_map_case_label_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ll_backend__switch_case__ll_backend__switch_case__type_ctor_info_case_label_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
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

static const MR_FA_TypeInfo_Struct2 ll_backend__switch_case__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0ll_backend__switch_case__type_ctor_info_case_label_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0,
    (MR_TypeInfo) &ll_backend__switch_case__ll_backend__switch_case__type_ctor_info_case_label_info_0
  }
};

const MR_TypeCtorInfo_Struct ll_backend__switch_case__ll_backend__switch_case__type_ctor_info_case_label_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
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

static const MR_PseudoTypeInfo ll_backend__switch_case__ll_backend__switch_case__field_types_represent_params_0_0[5] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_info_0,
  (MR_PseudoTypeInfo) &hlds__code_model__hlds__code_model__type_ctor_info_code_model_0,
  (MR_PseudoTypeInfo) &ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_position_info_0,
  (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0
};

static const MR_ConstString ll_backend__switch_case__ll_backend__switch_case__field_names_represent_params_0_0[5] = {
  (MR_String) "switch_var_name",
  (MR_String) "switch_goal_info",
  (MR_String) "switch_code_model",
  (MR_String) "starting_position",
  (MR_String) "switch_end_label"
};

static const MR_DuFunctorDesc ll_backend__switch_case__ll_backend__switch_case__du_functor_desc_represent_params_0_0 = {
  (MR_String) "represent_params",
  (MR_Integer) 5,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__switch_case__ll_backend__switch_case__field_types_represent_params_0_0,
  ll_backend__switch_case__ll_backend__switch_case__field_names_represent_params_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr ll_backend__switch_case__ll_backend__switch_case__du_stag_ordered_represent_params_0_0[1] = {
  &ll_backend__switch_case__ll_backend__switch_case__du_functor_desc_represent_params_0_0
};

static const MR_DuPtagLayout ll_backend__switch_case__ll_backend__switch_case__du_ptag_ordered_represent_params_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    ll_backend__switch_case__ll_backend__switch_case__du_stag_ordered_represent_params_0_0
  }
};

static const MR_DuFunctorDescPtr ll_backend__switch_case__ll_backend__switch_case__du_name_ordered_represent_params_0[1] = {
  &ll_backend__switch_case__ll_backend__switch_case__du_functor_desc_represent_params_0_0
};

static const MR_Integer ll_backend__switch_case__ll_backend__switch_case__functor_number_map_represent_params_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ll_backend__switch_case__ll_backend__switch_case__type_ctor_info_represent_params_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
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

void MR_CALL 
ll_backend__switch_case____Compare____represent_params_0_0(
  MR_Word * ll_backend__switch_case__HeadVar__1_1,
  MR_Word ll_backend__switch_case__HeadVar__2_2,
  MR_Word ll_backend__switch_case__HeadVar__3_3)
{
  {
    MR_bool ll_backend__switch_case__succeeded;
    MR_Integer ll_backend__switch_case__CastX_18 = (MR_Integer) ll_backend__switch_case__HeadVar__2_2;
    MR_Integer ll_backend__switch_case__CastY_19 = (MR_Integer) ll_backend__switch_case__HeadVar__3_3;

    ll_backend__switch_case__succeeded = (ll_backend__switch_case__CastX_18 == ll_backend__switch_case__CastY_19);
    if (ll_backend__switch_case__succeeded)
      *ll_backend__switch_case__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_String ll_backend__switch_case__ArgX1_4 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__switch_case__HeadVar__2_2, (MR_Integer) 0)));
        MR_String ll_backend__switch_case__ArgY1_5 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__switch_case__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word ll_backend__switch_case__ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_case__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word ll_backend__switch_case__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_case__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word ll_backend__switch_case__ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_case__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word ll_backend__switch_case__ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_case__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word ll_backend__switch_case__ArgX4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_case__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word ll_backend__switch_case__ArgY4_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_case__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word ll_backend__switch_case__ArgX5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_case__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word ll_backend__switch_case__ArgY5_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_case__HeadVar__3_3, (MR_Integer) 4)));
        MR_Word ll_backend__switch_case__Var_14;

        {
          mercury__private_builtin__builtin_compare_string_3_p_0(&ll_backend__switch_case__Var_14, ll_backend__switch_case__ArgX1_4, ll_backend__switch_case__ArgY1_5);
        }
        ll_backend__switch_case__succeeded = (ll_backend__switch_case__Var_14 == (MR_Integer) 0);
        ll_backend__switch_case__succeeded = !(ll_backend__switch_case__succeeded);
        if (ll_backend__switch_case__succeeded)
          *ll_backend__switch_case__HeadVar__1_1 = ll_backend__switch_case__Var_14;
        else
          {
            MR_Word ll_backend__switch_case__Var_15;

            {
              hlds__hlds_goal____Compare____hlds_goal_info_0_0(&ll_backend__switch_case__Var_15, ll_backend__switch_case__ArgX2_6, ll_backend__switch_case__ArgY2_7);
            }
            ll_backend__switch_case__succeeded = (ll_backend__switch_case__Var_15 == (MR_Integer) 0);
            ll_backend__switch_case__succeeded = !(ll_backend__switch_case__succeeded);
            if (ll_backend__switch_case__succeeded)
              *ll_backend__switch_case__HeadVar__1_1 = ll_backend__switch_case__Var_15;
            else
              {
                MR_Word ll_backend__switch_case__Var_16;
                MR_Integer ll_backend__switch_case__Var_25 = (MR_Integer) ll_backend__switch_case__ArgX3_8;
                MR_Integer ll_backend__switch_case__Var_26 = (MR_Integer) ll_backend__switch_case__ArgY3_9;

                {
                  mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__switch_case__Var_16, ll_backend__switch_case__Var_25, ll_backend__switch_case__Var_26);
                }
                ll_backend__switch_case__succeeded = (ll_backend__switch_case__Var_16 == (MR_Integer) 0);
                ll_backend__switch_case__succeeded = !(ll_backend__switch_case__succeeded);
                if (ll_backend__switch_case__succeeded)
                  *ll_backend__switch_case__HeadVar__1_1 = ll_backend__switch_case__Var_16;
                else
                  {
                    MR_Word ll_backend__switch_case__Var_17;

                    {
                      ll_backend__code_loc_dep____Compare____position_info_0_0(&ll_backend__switch_case__Var_17, ll_backend__switch_case__ArgX4_10, ll_backend__switch_case__ArgY4_11);
                    }
                    ll_backend__switch_case__succeeded = (ll_backend__switch_case__Var_17 == (MR_Integer) 0);
                    ll_backend__switch_case__succeeded = !(ll_backend__switch_case__succeeded);
                    if (ll_backend__switch_case__succeeded)
                      *ll_backend__switch_case__HeadVar__1_1 = ll_backend__switch_case__Var_17;
                    else
                      {
                        ll_backend__llds____Compare____label_0_0(ll_backend__switch_case__HeadVar__1_1, ll_backend__switch_case__ArgX5_12, ll_backend__switch_case__ArgY5_13);
                      }
                  }
              }
          }
      }
  }
}

MR_bool MR_CALL 
ll_backend__switch_case____Unify____represent_params_0_0(
  MR_Word ll_backend__switch_case__HeadVar__1_1,
  MR_Word ll_backend__switch_case__HeadVar__2_2)
{
  {
    MR_bool ll_backend__switch_case__succeeded;
    MR_Integer ll_backend__switch_case__CastX_13 = (MR_Integer) ll_backend__switch_case__HeadVar__1_1;
    MR_Integer ll_backend__switch_case__CastY_14 = (MR_Integer) ll_backend__switch_case__HeadVar__2_2;

    ll_backend__switch_case__succeeded = (ll_backend__switch_case__CastX_13 == ll_backend__switch_case__CastY_14);
    if (ll_backend__switch_case__succeeded)
      ll_backend__switch_case__succeeded = MR_TRUE;
    else
      {
        MR_String ll_backend__switch_case__ArgX1_3 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__switch_case__HeadVar__1_1, (MR_Integer) 0)));
        MR_String ll_backend__switch_case__ArgY1_4 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__switch_case__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word ll_backend__switch_case__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_case__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ll_backend__switch_case__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_case__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word ll_backend__switch_case__ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_case__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word ll_backend__switch_case__ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_case__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word ll_backend__switch_case__ArgX4_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_case__HeadVar__1_1, (MR_Integer) 3)));
        MR_Word ll_backend__switch_case__ArgY4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_case__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word ll_backend__switch_case__ArgX5_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_case__HeadVar__1_1, (MR_Integer) 4)));
        MR_Word ll_backend__switch_case__ArgY5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_case__HeadVar__2_2, (MR_Integer) 4)));

        ll_backend__switch_case__succeeded = (strcmp(ll_backend__switch_case__ArgX1_3, ll_backend__switch_case__ArgY1_4) == 0);
        if (ll_backend__switch_case__succeeded)
          {
            {
              ll_backend__switch_case__succeeded = hlds__hlds_goal____Unify____hlds_goal_info_0_0(ll_backend__switch_case__ArgX2_5, ll_backend__switch_case__ArgY2_6);
            }
            if (ll_backend__switch_case__succeeded)
              {
                ll_backend__switch_case__succeeded = (ll_backend__switch_case__ArgX3_7 == ll_backend__switch_case__ArgY3_8);
                if (ll_backend__switch_case__succeeded)
                  {
                    {
                      ll_backend__switch_case__succeeded = ll_backend__code_loc_dep____Unify____position_info_0_0(ll_backend__switch_case__ArgX4_9, ll_backend__switch_case__ArgY4_10);
                    }
                    if (ll_backend__switch_case__succeeded)
                      {
                        ll_backend__switch_case__succeeded = ll_backend__llds____Unify____label_0_0(ll_backend__switch_case__ArgX5_11, ll_backend__switch_case__ArgY5_12);
                      }
                  }
              }
          }
      }
    return ll_backend__switch_case__succeeded;
  }
}

void MR_CALL 
ll_backend__switch_case____Compare____case_label_map_0_0(
  MR_Word * ll_backend__switch_case__HeadVar__1_1,
  MR_Word ll_backend__switch_case__HeadVar__2_2,
  MR_Word ll_backend__switch_case__HeadVar__3_3)
{
  {
    MR_bool ll_backend__switch_case__succeeded;
    MR_Word ll_backend__switch_case__Cast_HeadVar1_4 = ll_backend__switch_case__HeadVar__2_2;
    MR_Word ll_backend__switch_case__Cast_HeadVar2_5 = ll_backend__switch_case__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__switch_case_scalar_common_2[0], ll_backend__switch_case__HeadVar__1_1, ((MR_Box) (ll_backend__switch_case__Cast_HeadVar1_4)), ((MR_Box) (ll_backend__switch_case__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
ll_backend__switch_case____Unify____case_label_map_0_0(
  MR_Word ll_backend__switch_case__HeadVar__1_1,
  MR_Word ll_backend__switch_case__HeadVar__2_2)
{
  {
    MR_bool ll_backend__switch_case__succeeded;
    MR_Word ll_backend__switch_case__Cast_HeadVar1_3 = ll_backend__switch_case__HeadVar__1_1;
    MR_Word ll_backend__switch_case__Cast_HeadVar2_4 = ll_backend__switch_case__HeadVar__2_2;

    {
      ll_backend__switch_case__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__switch_case_scalar_common_2[0], ((MR_Box) (ll_backend__switch_case__Cast_HeadVar1_3)), ((MR_Box) (ll_backend__switch_case__Cast_HeadVar2_4)));
    }
    return ll_backend__switch_case__succeeded;
  }
}

void MR_CALL 
ll_backend__switch_case____Compare____case_label_info_0_0(
  MR_Word * ll_backend__switch_case__HeadVar__1_1,
  MR_Word ll_backend__switch_case__HeadVar__2_2,
  MR_Word ll_backend__switch_case__HeadVar__3_3)
{
  {
    MR_bool ll_backend__switch_case__succeeded;
    MR_Integer ll_backend__switch_case__CastX_12 = (MR_Integer) ll_backend__switch_case__HeadVar__2_2;
    MR_Integer ll_backend__switch_case__CastY_13 = (MR_Integer) ll_backend__switch_case__HeadVar__3_3;

    ll_backend__switch_case__succeeded = (ll_backend__switch_case__CastX_12 == ll_backend__switch_case__CastY_13);
    if (ll_backend__switch_case__succeeded)
      *ll_backend__switch_case__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_String ll_backend__switch_case__ArgX1_4 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__switch_case__HeadVar__2_2, (MR_Integer) 0)));
        MR_String ll_backend__switch_case__ArgY1_5 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__switch_case__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word ll_backend__switch_case__ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_case__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word ll_backend__switch_case__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_case__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word ll_backend__switch_case__ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_case__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word ll_backend__switch_case__ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_case__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word ll_backend__switch_case__Var_10;

        {
          mercury__private_builtin__builtin_compare_string_3_p_0(&ll_backend__switch_case__Var_10, ll_backend__switch_case__ArgX1_4, ll_backend__switch_case__ArgY1_5);
        }
        ll_backend__switch_case__succeeded = (ll_backend__switch_case__Var_10 == (MR_Integer) 0);
        ll_backend__switch_case__succeeded = !(ll_backend__switch_case__succeeded);
        if (ll_backend__switch_case__succeeded)
          *ll_backend__switch_case__HeadVar__1_1 = ll_backend__switch_case__Var_10;
        else
          {
            MR_Word ll_backend__switch_case__Var_11;

            {
              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__switch_case_scalar_common_1[0], &ll_backend__switch_case__Var_11, ((MR_Box) (ll_backend__switch_case__ArgX2_6)), ((MR_Box) (ll_backend__switch_case__ArgY2_7)));
            }
            ll_backend__switch_case__succeeded = (ll_backend__switch_case__Var_11 == (MR_Integer) 0);
            ll_backend__switch_case__succeeded = !(ll_backend__switch_case__succeeded);
            if (ll_backend__switch_case__succeeded)
              *ll_backend__switch_case__HeadVar__1_1 = ll_backend__switch_case__Var_11;
            else
              {
                MR_Integer ll_backend__switch_case__Var_17 = (MR_Integer) ll_backend__switch_case__ArgX3_8;
                MR_Integer ll_backend__switch_case__Var_18 = (MR_Integer) ll_backend__switch_case__ArgY3_9;

                {
                  mercury__private_builtin__builtin_compare_int_3_p_0(ll_backend__switch_case__HeadVar__1_1, ll_backend__switch_case__Var_17, ll_backend__switch_case__Var_18);
                }
              }
          }
      }
  }
}

MR_bool MR_CALL 
ll_backend__switch_case____Unify____case_label_info_0_0(
  MR_Word ll_backend__switch_case__HeadVar__1_1,
  MR_Word ll_backend__switch_case__HeadVar__2_2)
{
  {
    MR_bool ll_backend__switch_case__succeeded;
    MR_Integer ll_backend__switch_case__CastX_9 = (MR_Integer) ll_backend__switch_case__HeadVar__1_1;
    MR_Integer ll_backend__switch_case__CastY_10 = (MR_Integer) ll_backend__switch_case__HeadVar__2_2;

    ll_backend__switch_case__succeeded = (ll_backend__switch_case__CastX_9 == ll_backend__switch_case__CastY_10);
    if (ll_backend__switch_case__succeeded)
      ll_backend__switch_case__succeeded = MR_TRUE;
    else
      {
        MR_Word ll_backend__switch_case__TypeInfo_11_11;
        MR_String ll_backend__switch_case__ArgX1_3 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__switch_case__HeadVar__1_1, (MR_Integer) 0)));
        MR_String ll_backend__switch_case__ArgY1_4 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__switch_case__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word ll_backend__switch_case__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_case__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ll_backend__switch_case__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_case__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word ll_backend__switch_case__ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_case__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word ll_backend__switch_case__ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_case__HeadVar__2_2, (MR_Integer) 2)));

        ll_backend__switch_case__succeeded = (strcmp(ll_backend__switch_case__ArgX1_3, ll_backend__switch_case__ArgY1_4) == 0);
        if (ll_backend__switch_case__succeeded)
          {
            ll_backend__switch_case__TypeInfo_11_11 = (MR_Word) &ll_backend__switch_case_scalar_common_1[0];
            {
              ll_backend__switch_case__succeeded = mercury__builtin__unify_2_p_0(ll_backend__switch_case__TypeInfo_11_11, ((MR_Box) (ll_backend__switch_case__ArgX2_5)), ((MR_Box) (ll_backend__switch_case__ArgY2_6)));
            }
            if (ll_backend__switch_case__succeeded)
              ll_backend__switch_case__succeeded = (ll_backend__switch_case__ArgX3_7 == ll_backend__switch_case__ArgY3_8);
          }
      }
    return ll_backend__switch_case__succeeded;
  }
}

void MR_CALL 
ll_backend__switch_case____Compare____case_code_included_0_0(
  MR_Word * ll_backend__switch_case__HeadVar__1_1,
  MR_Word ll_backend__switch_case__HeadVar__2_2,
  MR_Word ll_backend__switch_case__HeadVar__3_3)
{
  {
    MR_bool ll_backend__switch_case__succeeded;
    MR_Integer ll_backend__switch_case__Cast_HeadVar1_4 = (MR_Integer) ll_backend__switch_case__HeadVar__2_2;
    MR_Integer ll_backend__switch_case__Cast_HeadVar2_5 = (MR_Integer) ll_backend__switch_case__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(ll_backend__switch_case__HeadVar__1_1, ll_backend__switch_case__Cast_HeadVar1_4, ll_backend__switch_case__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
ll_backend__switch_case____Unify____case_code_included_0_0(
  MR_Word ll_backend__switch_case__HeadVar__2_1,
  MR_Word ll_backend__switch_case__HeadVar__2_2)
{
  {
    MR_bool ll_backend__switch_case__succeeded = (ll_backend__switch_case__HeadVar__2_1 == ll_backend__switch_case__HeadVar__2_2);

    return ll_backend__switch_case__succeeded;
  }
}

void MR_CALL 
ll_backend__switch_case__add_remaining_case_4_p_0(
  MR_Word ll_backend__switch_case___Label_5,
  MR_Word ll_backend__switch_case__CaseInfo_6,
  MR_Word ll_backend__switch_case__STATE_VARIABLE_Code_0_11,
  MR_Word * ll_backend__switch_case__STATE_VARIABLE_Code_12)
{
  {
    MR_bool ll_backend__switch_case__succeeded;

    {
      ll_backend__switch_case__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_114_101_109_97_105_110_105_110_103_95_99_97_115_101_95_95_91_49_93_95_48_4_p_0(ll_backend__switch_case__CaseInfo_6, ll_backend__switch_case__STATE_VARIABLE_Code_0_11, ll_backend__switch_case__STATE_VARIABLE_Code_12);
    }
  }
}

void MR_CALL 
ll_backend__switch_case__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_114_101_109_97_105_110_105_110_103_95_99_97_115_101_95_95_91_49_93_95_48_4_p_0(
  MR_Word ll_backend__switch_case__CaseInfo_6,
  MR_Word ll_backend__switch_case__STATE_VARIABLE_Code_0_11,
  MR_Word * ll_backend__switch_case__STATE_VARIABLE_Code_12)
{
  {
    MR_bool ll_backend__switch_case__succeeded;
    MR_Word ll_backend__switch_case__CaseCode_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_case__CaseInfo_6, (MR_Integer) 1)));
    MR_Word ll_backend__switch_case__CaseIncluded_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_case__CaseInfo_6, (MR_Integer) 2)));
    MR_String ll_backend__switch_case___Comment_8 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__switch_case__CaseInfo_6, (MR_Integer) 0)));

    switch (ll_backend__switch_case__CaseIncluded_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        *ll_backend__switch_case__STATE_VARIABLE_Code_12 = ll_backend__switch_case__STATE_VARIABLE_Code_0_11;
        break;
      case (MR_Integer) 0:
        {
          {
            *ll_backend__switch_case__STATE_VARIABLE_Code_12 = mercury__cord__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__switch_case__STATE_VARIABLE_Code_0_11, ll_backend__switch_case__CaseCode_9);
          }
        }
        break;
    }
  }
}

void MR_CALL 
ll_backend__switch_case__generate_case_code_or_jump_4_p_0(
  MR_Word ll_backend__switch_case__CaseLabel_5,
  MR_Word * ll_backend__switch_case__Code_6,
  MR_Word ll_backend__switch_case__STATE_VARIABLE_CaseLabelMap_0_13,
  MR_Word * ll_backend__switch_case__STATE_VARIABLE_CaseLabelMap_14)
{
  {
    MR_bool ll_backend__switch_case__succeeded;
    MR_Word ll_backend__switch_case__TypeCtorInfo_25_25 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0;
    MR_Word ll_backend__switch_case__TypeCtorInfo_26_26 = (MR_Word) &ll_backend__switch_case__ll_backend__switch_case__type_ctor_info_case_label_info_0;
    MR_Word ll_backend__switch_case__CaseInfo0_8;
    MR_String ll_backend__switch_case__Comment_9;
    MR_Word ll_backend__switch_case__CaseCode_10;
    MR_Word ll_backend__switch_case__CaseIncluded_11;
    MR_Box ll_backend__switch_case__conv0_CaseInfo0_8;

    {
      mercury__map__lookup_3_p_0(ll_backend__switch_case__TypeCtorInfo_25_25, ll_backend__switch_case__TypeCtorInfo_26_26, ll_backend__switch_case__STATE_VARIABLE_CaseLabelMap_0_13, ((MR_Box) (ll_backend__switch_case__CaseLabel_5)), &ll_backend__switch_case__conv0_CaseInfo0_8);
    }
    ll_backend__switch_case__CaseInfo0_8 = ((MR_Word) ll_backend__switch_case__conv0_CaseInfo0_8);
    ll_backend__switch_case__Comment_9 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__switch_case__CaseInfo0_8, (MR_Integer) 0)));
    ll_backend__switch_case__CaseCode_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_case__CaseInfo0_8, (MR_Integer) 1)));
    ll_backend__switch_case__CaseIncluded_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_case__CaseInfo0_8, (MR_Integer) 2)));
    switch (ll_backend__switch_case__CaseIncluded_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word ll_backend__switch_case__Var_15;
          MR_Word ll_backend__switch_case__Var_16;
          MR_Word ll_backend__switch_case__Var_17;
          MR_String ll_backend__switch_case__Var_18;

          {
            ll_backend__switch_case__Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__switch_case__Var_17, 0) = ((MR_Box) (ll_backend__switch_case__CaseLabel_5));
          }
          {
            ll_backend__switch_case__Var_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ll_backend__switch_case__Var_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
            MR_hl_field(MR_mktag(3), ll_backend__switch_case__Var_16, 1) = ((MR_Box) (ll_backend__switch_case__Var_17));
          }
          {
            ll_backend__switch_case__Var_18 = mercury__string__f_43_43_2_f_0((MR_String) "goto ", ll_backend__switch_case__Comment_9);
          }
          {
            ll_backend__switch_case__Var_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ll_backend__switch_case__Var_15, 0) = ((MR_Box) (ll_backend__switch_case__Var_16));
            MR_hl_field(MR_mktag(0), ll_backend__switch_case__Var_15, 1) = ((MR_Box) (ll_backend__switch_case__Var_18));
          }
          {
            *ll_backend__switch_case__Code_6 = mercury__cord__singleton_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ((MR_Box) (ll_backend__switch_case__Var_15)));
          }
          *ll_backend__switch_case__STATE_VARIABLE_CaseLabelMap_14 = ll_backend__switch_case__STATE_VARIABLE_CaseLabelMap_0_13;
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word ll_backend__switch_case__CaseInfo_12;

          *ll_backend__switch_case__Code_6 = ll_backend__switch_case__CaseCode_10;
          {
            ll_backend__switch_case__CaseInfo_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ll_backend__switch_case__CaseInfo_12, 0) = ((MR_Box) (ll_backend__switch_case__Comment_9));
            MR_hl_field(MR_mktag(0), ll_backend__switch_case__CaseInfo_12, 1) = ((MR_Box) (ll_backend__switch_case__CaseCode_10));
            MR_hl_field(MR_mktag(0), ll_backend__switch_case__CaseInfo_12, 2) = ((MR_Box) ((MR_Integer) 1));
          }
          {
            mercury__map__det_update_4_p_0(ll_backend__switch_case__TypeCtorInfo_25_25, ll_backend__switch_case__TypeCtorInfo_26_26, ((MR_Box) (ll_backend__switch_case__CaseLabel_5)), ((MR_Box) (ll_backend__switch_case__CaseInfo_12)), ll_backend__switch_case__STATE_VARIABLE_CaseLabelMap_0_13, ll_backend__switch_case__STATE_VARIABLE_CaseLabelMap_14);
          }
        }
        break;
    }
  }
}

static void MR_CALL 
ll_backend__switch_case__represent_tagged_case_for_llds_9_p_0_1(
  MR_Box ll_backend__switch_case__closure_arg,
  MR_Box ll_backend__switch_case__wrapper_arg_1,
  MR_Box * ll_backend__switch_case__wrapper_arg_2,
  MR_Box * ll_backend__switch_case__wrapper_arg_3)
{
  {
    MR_Box ll_backend__switch_case__closure = ll_backend__switch_case__closure_arg;
    MR_String ll_backend__switch_case__conv1_HeadVar__2_2;
    MR_Word ll_backend__switch_case__conv0_HeadVar__3_3;

    {
      hlds__hlds_out__hlds_out_goal__project_cons_name_and_tag_3_p_0(((MR_Word) ll_backend__switch_case__wrapper_arg_1), &ll_backend__switch_case__conv1_HeadVar__2_2, &ll_backend__switch_case__conv0_HeadVar__3_3);
    }
    *ll_backend__switch_case__wrapper_arg_2 = ((MR_Box) (ll_backend__switch_case__conv1_HeadVar__2_2));
    *ll_backend__switch_case__wrapper_arg_3 = ((MR_Box) (ll_backend__switch_case__conv0_HeadVar__3_3));
  }
}

void MR_CALL 
ll_backend__switch_case__represent_tagged_case_for_llds_9_p_0(
  MR_Word ll_backend__switch_case__Params_10,
  MR_Word ll_backend__switch_case__TaggedCase_11,
  MR_Word * ll_backend__switch_case__Label_12,
  MR_Word ll_backend__switch_case__STATE_VARIABLE_CaseLabelMap_0_39,
  MR_Word * ll_backend__switch_case__STATE_VARIABLE_CaseLabelMap_40,
  MR_Word ll_backend__switch_case__STATE_VARIABLE_MaybeEnd_0_41,
  MR_Word * ll_backend__switch_case__STATE_VARIABLE_MaybeEnd_42,
  MR_Word ll_backend__switch_case__STATE_VARIABLE_CI_0_43,
  MR_Word * ll_backend__switch_case__STATE_VARIABLE_CI_44)
{
  {
    MR_bool ll_backend__switch_case__succeeded;
    MR_Word ll_backend__switch_case__TypeCtorInfo_71_71;
    MR_String ll_backend__switch_case__SwitchVarName_17 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__switch_case__Params_10, (MR_Integer) 0)));
    MR_Word ll_backend__switch_case__SwitchGoalInfo_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_case__Params_10, (MR_Integer) 1)));
    MR_Word ll_backend__switch_case__CodeModel_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_case__Params_10, (MR_Integer) 2)));
    MR_Word ll_backend__switch_case__BranchStart_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_case__Params_10, (MR_Integer) 3)));
    MR_Word ll_backend__switch_case__EndLabel_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_case__Params_10, (MR_Integer) 4)));
    MR_Word ll_backend__switch_case__MainTaggedConsId_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_case__TaggedCase_11, (MR_Integer) 0)));
    MR_Word ll_backend__switch_case__OtherTaggedConsIds_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_case__TaggedCase_11, (MR_Integer) 1)));
    MR_Word ll_backend__switch_case__Goal_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_case__TaggedCase_11, (MR_Integer) 3)));
    MR_String ll_backend__switch_case__MainConsName_26;
    MR_Word ll_backend__switch_case__OtherConsNames_28;
    MR_String ll_backend__switch_case__Comment_30;
    MR_Word ll_backend__switch_case__LabelCode_31;
    MR_Word ll_backend__switch_case__TraceCode_32;
    MR_Word ll_backend__switch_case__GoalCode_33;
    MR_Word ll_backend__switch_case__StoreMap_34;
    MR_Word ll_backend__switch_case__SaveCode_35;
    MR_Word ll_backend__switch_case__GotoEndCode_36;
    MR_Word ll_backend__switch_case__Code_37;
    MR_Word ll_backend__switch_case__CaseInfo_38;
    MR_Word ll_backend__switch_case__STATE_VARIABLE_CLD_46_46;
    MR_Word ll_backend__switch_case__STATE_VARIABLE_CI_47_47;
    MR_Word ll_backend__switch_case__Var_48;
    MR_Word ll_backend__switch_case__Var_49;
    MR_Word ll_backend__switch_case__STATE_VARIABLE_CI_50_50;
    MR_Word ll_backend__switch_case__STATE_VARIABLE_CLD_51_51;
    MR_Word ll_backend__switch_case__STATE_VARIABLE_CLD_53_53;
    MR_Word ll_backend__switch_case__Var_55;
    MR_Word ll_backend__switch_case__Var_56;
    MR_Word ll_backend__switch_case__Var_57;
    MR_String ll_backend__switch_case__Var_58;
    MR_Word ll_backend__switch_case__Var_60;
    MR_Word ll_backend__switch_case__Var_61;
    MR_Word ll_backend__switch_case__Var_62;
    MR_Word ll_backend__switch_case__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__switch_case__TaggedCase_11, (MR_Integer) 2)));
    MR_Word ll_backend__switch_case__Var_27;
    MR_Word ll_backend__switch_case__Var_29;

    {
      hlds__hlds_out__hlds_out_goal__project_cons_name_and_tag_3_p_0(ll_backend__switch_case__MainTaggedConsId_22, &ll_backend__switch_case__MainConsName_26, &ll_backend__switch_case__Var_27);
    }
    {
      mercury__list__map2_4_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0, (MR_Word) &ll_backend__switch_case_scalar_common_2[1], ll_backend__switch_case__OtherTaggedConsIds_23, &ll_backend__switch_case__OtherConsNames_28, &ll_backend__switch_case__Var_29);
    }
    {
      ll_backend__switch_case__Comment_30 = hlds__hlds_out__hlds_out_goal__case_comment_3_f_0(ll_backend__switch_case__SwitchVarName_17, ll_backend__switch_case__MainConsName_26, ll_backend__switch_case__OtherConsNames_28);
    }
    {
      ll_backend__code_loc_dep__reset_to_position_3_p_0(ll_backend__switch_case__BranchStart_20, ll_backend__switch_case__STATE_VARIABLE_CI_0_43, &ll_backend__switch_case__STATE_VARIABLE_CLD_46_46);
    }
    {
      ll_backend__code_info__get_next_label_3_p_0(ll_backend__switch_case__Label_12, ll_backend__switch_case__STATE_VARIABLE_CI_0_43, &ll_backend__switch_case__STATE_VARIABLE_CI_47_47);
    }
    ll_backend__switch_case__TypeCtorInfo_71_71 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
    {
      ll_backend__switch_case__Var_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__switch_case__Var_49, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), ll_backend__switch_case__Var_49, 1) = ((MR_Box) (*ll_backend__switch_case__Label_12));
    }
    {
      ll_backend__switch_case__Var_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__switch_case__Var_48, 0) = ((MR_Box) (ll_backend__switch_case__Var_49));
      MR_hl_field(MR_mktag(0), ll_backend__switch_case__Var_48, 1) = ((MR_Box) (ll_backend__switch_case__Comment_30));
    }
    {
      ll_backend__switch_case__LabelCode_31 = mercury__cord__singleton_1_f_0(ll_backend__switch_case__TypeCtorInfo_71_71, ((MR_Box) (ll_backend__switch_case__Var_48)));
    }
    {
      ll_backend__trace_gen__maybe_generate_internal_event_code_7_p_0(ll_backend__switch_case__Goal_25, ll_backend__switch_case__SwitchGoalInfo_18, &ll_backend__switch_case__TraceCode_32, ll_backend__switch_case__STATE_VARIABLE_CI_47_47, &ll_backend__switch_case__STATE_VARIABLE_CI_50_50, ll_backend__switch_case__STATE_VARIABLE_CLD_46_46, &ll_backend__switch_case__STATE_VARIABLE_CLD_51_51);
    }
    {
      ll_backend__code_gen__generate_goal_7_p_0(ll_backend__switch_case__CodeModel_19, ll_backend__switch_case__Goal_25, &ll_backend__switch_case__GoalCode_33, ll_backend__switch_case__STATE_VARIABLE_CI_50_50, ll_backend__switch_case__STATE_VARIABLE_CI_44, ll_backend__switch_case__STATE_VARIABLE_CLD_51_51, &ll_backend__switch_case__STATE_VARIABLE_CLD_53_53);
    }
    {
      hlds__hlds_llds__goal_info_get_store_map_2_p_0(ll_backend__switch_case__SwitchGoalInfo_18, &ll_backend__switch_case__StoreMap_34);
    }
    {
      ll_backend__code_loc_dep__generate_branch_end_6_p_0(ll_backend__switch_case__StoreMap_34, ll_backend__switch_case__STATE_VARIABLE_MaybeEnd_0_41, ll_backend__switch_case__STATE_VARIABLE_MaybeEnd_42, &ll_backend__switch_case__SaveCode_35, *ll_backend__switch_case__STATE_VARIABLE_CI_44, ll_backend__switch_case__STATE_VARIABLE_CLD_53_53);
    }
    {
      ll_backend__switch_case__Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__switch_case__Var_57, 0) = ((MR_Box) (ll_backend__switch_case__EndLabel_21));
    }
    {
      ll_backend__switch_case__Var_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__switch_case__Var_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
      MR_hl_field(MR_mktag(3), ll_backend__switch_case__Var_56, 1) = ((MR_Box) (ll_backend__switch_case__Var_57));
    }
    {
      ll_backend__switch_case__Var_58 = mercury__string__f_43_43_2_f_0((MR_String) "goto end of switch on ", ll_backend__switch_case__SwitchVarName_17);
    }
    {
      ll_backend__switch_case__Var_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__switch_case__Var_55, 0) = ((MR_Box) (ll_backend__switch_case__Var_56));
      MR_hl_field(MR_mktag(0), ll_backend__switch_case__Var_55, 1) = ((MR_Box) (ll_backend__switch_case__Var_58));
    }
    {
      ll_backend__switch_case__GotoEndCode_36 = mercury__cord__singleton_1_f_0(ll_backend__switch_case__TypeCtorInfo_71_71, ((MR_Box) (ll_backend__switch_case__Var_55)));
    }
    {
      ll_backend__switch_case__Var_62 = mercury__cord__f_43_43_2_f_0(ll_backend__switch_case__TypeCtorInfo_71_71, ll_backend__switch_case__SaveCode_35, ll_backend__switch_case__GotoEndCode_36);
    }
    {
      ll_backend__switch_case__Var_61 = mercury__cord__f_43_43_2_f_0(ll_backend__switch_case__TypeCtorInfo_71_71, ll_backend__switch_case__GoalCode_33, ll_backend__switch_case__Var_62);
    }
    {
      ll_backend__switch_case__Var_60 = mercury__cord__f_43_43_2_f_0(ll_backend__switch_case__TypeCtorInfo_71_71, ll_backend__switch_case__TraceCode_32, ll_backend__switch_case__Var_61);
    }
    {
      ll_backend__switch_case__Code_37 = mercury__cord__f_43_43_2_f_0(ll_backend__switch_case__TypeCtorInfo_71_71, ll_backend__switch_case__LabelCode_31, ll_backend__switch_case__Var_60);
    }
    {
      ll_backend__switch_case__CaseInfo_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__switch_case__CaseInfo_38, 0) = ((MR_Box) (ll_backend__switch_case__Comment_30));
      MR_hl_field(MR_mktag(0), ll_backend__switch_case__CaseInfo_38, 1) = ((MR_Box) (ll_backend__switch_case__Code_37));
      MR_hl_field(MR_mktag(0), ll_backend__switch_case__CaseInfo_38, 2) = ((MR_Box) ((MR_Integer) 0));
    }
    {
      mercury__map__det_insert_4_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, (MR_Word) &ll_backend__switch_case__ll_backend__switch_case__type_ctor_info_case_label_info_0, ((MR_Box) (*ll_backend__switch_case__Label_12)), ((MR_Box) (ll_backend__switch_case__CaseInfo_38)), ll_backend__switch_case__STATE_VARIABLE_CaseLabelMap_0_39, ll_backend__switch_case__STATE_VARIABLE_CaseLabelMap_40);
    }
  }
}

static MR_bool MR_CALL 
ll_backend__switch_case____Unify____case_code_included_0_0_10001(
  MR_Box ll_backend__switch_case__wrapper_arg_1,
  MR_Box ll_backend__switch_case__wrapper_arg_2)
{
  {
    MR_bool ll_backend__switch_case__succeeded;

    {
      ll_backend__switch_case__succeeded = ll_backend__switch_case____Unify____case_code_included_0_0(((MR_Word) ll_backend__switch_case__wrapper_arg_1), ((MR_Word) ll_backend__switch_case__wrapper_arg_2));
    }
    return ll_backend__switch_case__succeeded;
  }
}

static void MR_CALL 
ll_backend__switch_case____Compare____case_code_included_0_0_10001(
  MR_Box * ll_backend__switch_case__wrapper_arg_1,
  MR_Box ll_backend__switch_case__wrapper_arg_2,
  MR_Box ll_backend__switch_case__wrapper_arg_3)
{
  {
    MR_Word ll_backend__switch_case__conv0_HeadVar__1_1;

    {
      ll_backend__switch_case____Compare____case_code_included_0_0(&ll_backend__switch_case__conv0_HeadVar__1_1, ((MR_Word) ll_backend__switch_case__wrapper_arg_2), ((MR_Word) ll_backend__switch_case__wrapper_arg_3));
    }
    *ll_backend__switch_case__wrapper_arg_1 = ((MR_Box) (ll_backend__switch_case__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__switch_case____Unify____case_label_info_0_0_10001(
  MR_Box ll_backend__switch_case__wrapper_arg_1,
  MR_Box ll_backend__switch_case__wrapper_arg_2)
{
  {
    MR_bool ll_backend__switch_case__succeeded;

    {
      ll_backend__switch_case__succeeded = ll_backend__switch_case____Unify____case_label_info_0_0(((MR_Word) ll_backend__switch_case__wrapper_arg_1), ((MR_Word) ll_backend__switch_case__wrapper_arg_2));
    }
    return ll_backend__switch_case__succeeded;
  }
}

static void MR_CALL 
ll_backend__switch_case____Compare____case_label_info_0_0_10001(
  MR_Box * ll_backend__switch_case__wrapper_arg_1,
  MR_Box ll_backend__switch_case__wrapper_arg_2,
  MR_Box ll_backend__switch_case__wrapper_arg_3)
{
  {
    MR_Word ll_backend__switch_case__conv0_HeadVar__1_1;

    {
      ll_backend__switch_case____Compare____case_label_info_0_0(&ll_backend__switch_case__conv0_HeadVar__1_1, ((MR_Word) ll_backend__switch_case__wrapper_arg_2), ((MR_Word) ll_backend__switch_case__wrapper_arg_3));
    }
    *ll_backend__switch_case__wrapper_arg_1 = ((MR_Box) (ll_backend__switch_case__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__switch_case____Unify____case_label_map_0_0_10001(
  MR_Box ll_backend__switch_case__wrapper_arg_1,
  MR_Box ll_backend__switch_case__wrapper_arg_2)
{
  {
    MR_bool ll_backend__switch_case__succeeded;

    {
      ll_backend__switch_case__succeeded = ll_backend__switch_case____Unify____case_label_map_0_0(((MR_Word) ll_backend__switch_case__wrapper_arg_1), ((MR_Word) ll_backend__switch_case__wrapper_arg_2));
    }
    return ll_backend__switch_case__succeeded;
  }
}

static void MR_CALL 
ll_backend__switch_case____Compare____case_label_map_0_0_10001(
  MR_Box * ll_backend__switch_case__wrapper_arg_1,
  MR_Box ll_backend__switch_case__wrapper_arg_2,
  MR_Box ll_backend__switch_case__wrapper_arg_3)
{
  {
    MR_Word ll_backend__switch_case__conv0_HeadVar__1_1;

    {
      ll_backend__switch_case____Compare____case_label_map_0_0(&ll_backend__switch_case__conv0_HeadVar__1_1, ((MR_Word) ll_backend__switch_case__wrapper_arg_2), ((MR_Word) ll_backend__switch_case__wrapper_arg_3));
    }
    *ll_backend__switch_case__wrapper_arg_1 = ((MR_Box) (ll_backend__switch_case__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__switch_case____Unify____represent_params_0_0_10001(
  MR_Box ll_backend__switch_case__wrapper_arg_1,
  MR_Box ll_backend__switch_case__wrapper_arg_2)
{
  {
    MR_bool ll_backend__switch_case__succeeded;

    {
      ll_backend__switch_case__succeeded = ll_backend__switch_case____Unify____represent_params_0_0(((MR_Word) ll_backend__switch_case__wrapper_arg_1), ((MR_Word) ll_backend__switch_case__wrapper_arg_2));
    }
    return ll_backend__switch_case__succeeded;
  }
}

static void MR_CALL 
ll_backend__switch_case____Compare____represent_params_0_0_10001(
  MR_Box * ll_backend__switch_case__wrapper_arg_1,
  MR_Box ll_backend__switch_case__wrapper_arg_2,
  MR_Box ll_backend__switch_case__wrapper_arg_3)
{
  {
    MR_Word ll_backend__switch_case__conv0_HeadVar__1_1;

    {
      ll_backend__switch_case____Compare____represent_params_0_0(&ll_backend__switch_case__conv0_HeadVar__1_1, ((MR_Word) ll_backend__switch_case__wrapper_arg_2), ((MR_Word) ll_backend__switch_case__wrapper_arg_3));
    }
    *ll_backend__switch_case__wrapper_arg_1 = ((MR_Box) (ll_backend__switch_case__conv0_HeadVar__1_1));
  }
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

// Ensure everything is compiled with the same grade.
const char *mercury__ll_backend__switch_case__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module ll_backend.switch_case. */
