/*
** Automatically generated from `switch_case.m'
** by the Mercury compiler,
** version rotd-2018-09-10
** configured for x86_64-pc-linux-gnu.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=2
** UNBOXED_FLOAT=no
** UNBOXED_INT64S=no
** PREGENERATED_DIST=yes
** HIGHLEVEL_CODE=yes
**
** END_OF_C_GRADE_INFO
*/


// :- module ll_backend.switch_case.
// :- implementation.

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
#include "hlds.goal_mode.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_out.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
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

static const MR_DuArgLocn ll_backend__switch_case__ll_backend__switch_case__field_locns_case_label_info_0_0[3];

static const MR_DuFunctorDesc ll_backend__switch_case__ll_backend__switch_case__du_functor_desc_case_label_info_0_0;

static const MR_DuFunctorDescPtr ll_backend__switch_case__ll_backend__switch_case__du_stag_ordered_case_label_info_0_0[1];

static const MR_DuPtagLayout ll_backend__switch_case__ll_backend__switch_case__du_ptag_ordered_case_label_info_0[1];

static const MR_DuFunctorDescPtr ll_backend__switch_case__ll_backend__switch_case__du_name_ordered_case_label_info_0[1];

static const MR_Integer ll_backend__switch_case__ll_backend__switch_case__functor_number_map_case_label_info_0[1];

static const MR_FA_TypeInfo_Struct2 ll_backend__switch_case__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0ll_backend__switch_case__type_ctor_info_case_label_info_0;

static const MR_PseudoTypeInfo ll_backend__switch_case__ll_backend__switch_case__field_types_represent_params_0_0[5];

static const MR_ConstString ll_backend__switch_case__ll_backend__switch_case__field_names_represent_params_0_0[5];

static const MR_DuArgLocn ll_backend__switch_case__ll_backend__switch_case__field_locns_represent_params_0_0[5];

static const MR_DuFunctorDesc ll_backend__switch_case__ll_backend__switch_case__du_functor_desc_represent_params_0_0;

static const MR_DuFunctorDescPtr ll_backend__switch_case__ll_backend__switch_case__du_stag_ordered_represent_params_0_0[1];

static const MR_DuPtagLayout ll_backend__switch_case__ll_backend__switch_case__du_ptag_ordered_represent_params_0[1];

static const MR_DuFunctorDescPtr ll_backend__switch_case__ll_backend__switch_case__du_name_ordered_represent_params_0[1];

static const MR_Integer ll_backend__switch_case__ll_backend__switch_case__functor_number_map_represent_params_0[1];

static void MR_CALL 
ll_backend__switch_case__represent_tagged_case_for_llds_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__switch_case____Unify____case_code_included_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__switch_case____Compare____case_code_included_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__switch_case____Unify____case_label_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__switch_case____Compare____case_label_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__switch_case____Unify____case_label_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__switch_case____Compare____case_label_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__switch_case____Unify____represent_params_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__switch_case____Compare____represent_params_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


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
    (MR_TypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0)
  }
};

static const MR_PseudoTypeInfo ll_backend__switch_case__ll_backend__switch_case__field_types_case_label_info_0_0[3] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&ll_backend__switch_case__cord__ti_cord_1ll_backend__llds__type_ctor_info_instruction_0),
  (MR_PseudoTypeInfo) (&ll_backend__switch_case__ll_backend__switch_case__type_ctor_info_case_code_included_0)
};

static const MR_ConstString ll_backend__switch_case__ll_backend__switch_case__field_names_case_label_info_0_0[3] = {
  (MR_String) "case_description",
  (MR_String) "case_code",
  (MR_String) "case_code_included"
};

static const MR_DuArgLocn ll_backend__switch_case__ll_backend__switch_case__field_locns_case_label_info_0_0[3] = {
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
    (MR_Integer) 1
  }
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
  ll_backend__switch_case__ll_backend__switch_case__field_locns_case_label_info_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ll_backend__switch_case__ll_backend__switch_case__du_stag_ordered_case_label_info_0_0[1] = {
  &ll_backend__switch_case__ll_backend__switch_case__du_functor_desc_case_label_info_0_0
};

static const MR_DuPtagLayout ll_backend__switch_case__ll_backend__switch_case__du_ptag_ordered_case_label_info_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    ll_backend__switch_case__ll_backend__switch_case__du_stag_ordered_case_label_info_0_0,
    INT8_C(-1)
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
    (MR_TypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0),
    (MR_TypeInfo) (&ll_backend__switch_case__ll_backend__switch_case__type_ctor_info_case_label_info_0)
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
  {     (MR_PseudoTypeInfo) (&ll_backend__switch_case__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0ll_backend__switch_case__type_ctor_info_case_label_info_0) },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_PseudoTypeInfo ll_backend__switch_case__ll_backend__switch_case__field_types_represent_params_0_0[5] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_info_0),
  (MR_PseudoTypeInfo) (&hlds__code_model__hlds__code_model__type_ctor_info_code_model_0),
  (MR_PseudoTypeInfo) (&ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_position_info_0),
  (MR_PseudoTypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0)
};

static const MR_ConstString ll_backend__switch_case__ll_backend__switch_case__field_names_represent_params_0_0[5] = {
  (MR_String) "switch_var_name",
  (MR_String) "switch_goal_info",
  (MR_String) "switch_code_model",
  (MR_String) "starting_position",
  (MR_String) "switch_end_label"
};

static const MR_DuArgLocn ll_backend__switch_case__ll_backend__switch_case__field_locns_represent_params_0_0[5] = {
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
    (MR_Integer) 2
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
  }
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
  ll_backend__switch_case__ll_backend__switch_case__field_locns_represent_params_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ll_backend__switch_case__ll_backend__switch_case__du_stag_ordered_represent_params_0_0[1] = {
  &ll_backend__switch_case__ll_backend__switch_case__du_functor_desc_represent_params_0_0
};

static const MR_DuPtagLayout ll_backend__switch_case__ll_backend__switch_case__du_ptag_ordered_represent_params_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    ll_backend__switch_case__ll_backend__switch_case__du_stag_ordered_represent_params_0_0,
    INT8_C(-1)
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
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_18 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_19 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_18 == CastY_19);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_String ArgX1_4 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) & (MR_Integer) 3);
      MR_Word ArgY3_9 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))) & (MR_Integer) 3);
      MR_Word ArgX4_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgY4_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
      MR_Word ArgX5_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_Word ArgY5_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4))));
      MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2)));
      MR_Word Var_14;

      mercury__private_builtin__builtin_compare_string_3_p_0(&Var_14, ArgX1_4, ArgY1_5);
      succeeded = (Var_14 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_14;
      else
      {
        MR_Word Var_15;

        hlds__hlds_goal____Compare____hlds_goal_info_0_0(&Var_15, ArgX2_6, ArgY2_7);
        succeeded = (Var_15 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_15;
        else
        {
          MR_Word Var_16;
          MR_Integer Var_25 = (MR_Integer) (ArgX3_8);
          MR_Integer Var_26 = (MR_Integer) (ArgY3_9);

          mercury__private_builtin__builtin_compare_int_3_p_0(&Var_16, Var_25, Var_26);
          succeeded = (Var_16 == (MR_Integer) 0);
          succeeded = !(succeeded);
          if (succeeded)
            *HeadVar__1_1 = Var_16;
          else
          {
            MR_Word Var_17;

            ll_backend__code_loc_dep____Compare____position_info_0_0(&Var_17, ArgX4_10, ArgY4_11);
            succeeded = (Var_17 == (MR_Integer) 0);
            succeeded = !(succeeded);
            if (succeeded)
              *HeadVar__1_1 = Var_17;
            else
              ll_backend__llds____Compare____label_0_0(HeadVar__1_1, ArgX5_12, ArgY5_13);
          }
        }
      }
    }
  }
}

MR_bool MR_CALL 
ll_backend__switch_case____Unify____represent_params_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_13 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_14 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_13 == CastY_14);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_String ArgY1_4 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))) & (MR_Integer) 3);
      MR_Word ArgY3_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) & (MR_Integer) 3);
      MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
      MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4))));
      MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)));
      MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));

      succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
      if (succeeded)
      {
        succeeded = hlds__hlds_goal____Unify____hlds_goal_info_0_0(ArgX2_5, ArgY2_6);
        if (succeeded)
        {
          succeeded = (ArgX3_7 == ArgY3_8);
          if (succeeded)
          {
            succeeded = ll_backend__code_loc_dep____Unify____position_info_0_0(ArgX4_9, ArgY4_10);
            if (succeeded)
              succeeded = ll_backend__llds____Unify____label_0_0(ArgX5_11, ArgY5_12);
          }
        }
      }
    }
    return succeeded;
  }
}

void MR_CALL 
ll_backend__switch_case____Compare____case_label_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__switch_case_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
ll_backend__switch_case____Unify____case_label_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__switch_case_scalar_common_2[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
ll_backend__switch_case____Compare____case_label_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_12 == CastY_13);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_String ArgX1_4 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) & (MR_Integer) 1);
      MR_Word ArgY3_9 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))) & (MR_Integer) 1);
      MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2)));
      MR_Word Var_10;

      mercury__private_builtin__builtin_compare_string_3_p_0(&Var_10, ArgX1_4, ArgY1_5);
      succeeded = (Var_10 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_10;
      else
      {
        MR_Word Var_11;

        mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__switch_case_scalar_common_1[0]), &Var_11, ((MR_Box) (ArgX2_6)), ((MR_Box) (ArgY2_7)));
        succeeded = (Var_11 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_11;
        else
        {
          MR_Integer Var_17 = (MR_Integer) (ArgX3_8);
          MR_Integer Var_18 = (MR_Integer) (ArgY3_9);

          mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Var_17, Var_18);
        }
      }
    }
  }
}

MR_bool MR_CALL 
ll_backend__switch_case____Unify____case_label_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_11_11;
      MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_String ArgY1_4 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))) & (MR_Integer) 1);
      MR_Word ArgY3_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) & (MR_Integer) 1);
      MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)));
      MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));

      succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
      if (succeeded)
      {
        TypeInfo_11_11 = (MR_Word) (&ll_backend__switch_case_scalar_common_1[0]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_11_11, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        if (succeeded)
          succeeded = (ArgX3_7 == ArgY3_8);
      }
    }
    return succeeded;
  }
}

void MR_CALL 
ll_backend__switch_case____Compare____case_code_included_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
ll_backend__switch_case____Unify____case_code_included_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
ll_backend__switch_case__add_remaining_case_4_p_0(
  MR_Word _Label_5,
  MR_Word CaseInfo_6,
  MR_Word STATE_VARIABLE_Code_0_11,
  MR_Word * STATE_VARIABLE_Code_12)
{
  ll_backend__switch_case__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_114_101_109_97_105_110_105_110_103_95_99_97_115_101_95_95_91_49_93_95_48_4_p_0(CaseInfo_6, STATE_VARIABLE_Code_0_11, STATE_VARIABLE_Code_12);
}

void MR_CALL 
ll_backend__switch_case__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_114_101_109_97_105_110_105_110_103_95_99_97_115_101_95_95_91_49_93_95_48_4_p_0(
  MR_Word CaseInfo_6,
  MR_Word STATE_VARIABLE_Code_0_11,
  MR_Word * STATE_VARIABLE_Code_12)
{
  {
    MR_Word CaseCode_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CaseInfo_6, (MR_Integer) 1))));
    MR_Word CaseIncluded_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), CaseInfo_6, (MR_Integer) 2))) & (MR_Integer) 1);
    MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), CaseInfo_6, (MR_Integer) 2)));

    switch (CaseIncluded_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        *STATE_VARIABLE_Code_12 = STATE_VARIABLE_Code_0_11;
        break;
      case (MR_Integer) 0:
        {
          *STATE_VARIABLE_Code_12 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), STATE_VARIABLE_Code_0_11, CaseCode_9);
        }
        break;
    }
  }
}

void MR_CALL 
ll_backend__switch_case__generate_case_code_or_jump_4_p_0(
  MR_Word CaseLabel_5,
  MR_Word * Code_6,
  MR_Word STATE_VARIABLE_CaseLabelMap_0_13,
  MR_Word * STATE_VARIABLE_CaseLabelMap_14)
{
  {
    MR_Word CaseInfo0_8;
    MR_String Comment_9;
    MR_Word CaseCode_10;
    MR_Word CaseIncluded_11;
    MR_Box conv0_CaseInfo0_8;
    MR_Unsigned packed_word_0;

    mercury__map__lookup_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__switch_case__ll_backend__switch_case__type_ctor_info_case_label_info_0), STATE_VARIABLE_CaseLabelMap_0_13, ((MR_Box) (CaseLabel_5)), &conv0_CaseInfo0_8);
    CaseInfo0_8 = ((MR_Word) (conv0_CaseInfo0_8));
    Comment_9 = ((MR_String) ((MR_hl_field(MR_mktag(0), CaseInfo0_8, (MR_Integer) 0))));
    CaseCode_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CaseInfo0_8, (MR_Integer) 1))));
    packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), CaseInfo0_8, (MR_Integer) 2)));
    CaseIncluded_11 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), CaseInfo0_8, (MR_Integer) 2))) & (MR_Integer) 1);
    switch (CaseIncluded_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word Var_15;
          MR_Word Var_16;
          MR_Word Var_17;
          MR_String Var_18;

          {
            Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_17, 0) = ((MR_Box) (CaseLabel_5));
          }
          {
            Var_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_16, 0) = ((MR_Box) ((MR_Unsigned) 6U));
            MR_hl_field(MR_mktag(3), Var_16, 1) = ((MR_Box) (Var_17));
          }
          Var_18 = mercury__string__f_43_43_2_f_0((MR_String) "goto ", Comment_9);
          {
            Var_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_15, 0) = ((MR_Box) (Var_16));
            MR_hl_field(MR_mktag(0), Var_15, 1) = ((MR_Box) (Var_18));
          }
          *Code_6 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_15)));
          *STATE_VARIABLE_CaseLabelMap_14 = STATE_VARIABLE_CaseLabelMap_0_13;
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word CaseInfo_12;

          *Code_6 = CaseCode_10;
          {
            CaseInfo_12 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), CaseInfo_12, 0) = ((MR_Box) (Comment_9));
            MR_hl_field(MR_mktag(0), CaseInfo_12, 1) = ((MR_Box) (CaseCode_10));
            MR_hl_field(MR_mktag(0), CaseInfo_12, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
          }
          mercury__map__det_update_4_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__switch_case__ll_backend__switch_case__type_ctor_info_case_label_info_0), ((MR_Box) (CaseLabel_5)), ((MR_Box) (CaseInfo_12)), STATE_VARIABLE_CaseLabelMap_0_13, STATE_VARIABLE_CaseLabelMap_14);
        }
        break;
    }
  }
}

static void MR_CALL 
ll_backend__switch_case__represent_tagged_case_for_llds_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_String conv1_HeadVar__2_2;
    MR_Word conv0_HeadVar__3_3;

    hlds__hlds_out__hlds_out_goal__project_cons_name_and_tag_3_p_0(((MR_Word) (wrapper_arg_1)), &conv1_HeadVar__2_2, &conv0_HeadVar__3_3);
    *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  }
}

void MR_CALL 
ll_backend__switch_case__represent_tagged_case_for_llds_9_p_0(
  MR_Word Params_10,
  MR_Word TaggedCase_11,
  MR_Word * Label_12,
  MR_Word STATE_VARIABLE_CaseLabelMap_0_39,
  MR_Word * STATE_VARIABLE_CaseLabelMap_40,
  MR_Word STATE_VARIABLE_MaybeEnd_0_41,
  MR_Word * STATE_VARIABLE_MaybeEnd_42,
  MR_Word STATE_VARIABLE_CI_0_43,
  MR_Word * STATE_VARIABLE_CI_44)
{
  {
    MR_String SwitchVarName_17 = ((MR_String) ((MR_hl_field(MR_mktag(0), Params_10, (MR_Integer) 0))));
    MR_Word SwitchGoalInfo_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Params_10, (MR_Integer) 1))));
    MR_Word CodeModel_19 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Params_10, (MR_Integer) 2))) & (MR_Integer) 3);
    MR_Word BranchStart_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Params_10, (MR_Integer) 3))));
    MR_Word EndLabel_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Params_10, (MR_Integer) 4))));
    MR_Word MainTaggedConsId_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TaggedCase_11, (MR_Integer) 0))));
    MR_Word OtherTaggedConsIds_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TaggedCase_11, (MR_Integer) 1))));
    MR_Word Goal_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TaggedCase_11, (MR_Integer) 3))));
    MR_String MainConsName_26;
    MR_Word OtherConsNames_28;
    MR_String Comment_30;
    MR_Word LabelCode_31;
    MR_Word TraceCode_32;
    MR_Word GoalCode_33;
    MR_Word StoreMap_34;
    MR_Word SaveCode_35;
    MR_Word GotoEndCode_36;
    MR_Word Code_37;
    MR_Word CaseInfo_38;
    MR_Word STATE_VARIABLE_CLD_46_46;
    MR_Word STATE_VARIABLE_CI_47_47;
    MR_Word Var_48;
    MR_Word Var_49;
    MR_Word STATE_VARIABLE_CI_50_50;
    MR_Word STATE_VARIABLE_CLD_51_51;
    MR_Word STATE_VARIABLE_CLD_53_53;
    MR_Word Var_55;
    MR_Word Var_56;
    MR_Word Var_57;
    MR_String Var_58;
    MR_Word Var_60;
    MR_Word Var_61;
    MR_Word Var_62;
    MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Params_10, (MR_Integer) 2)));
    MR_Word Var_27;
    MR_Word Var_29;

    hlds__hlds_out__hlds_out_goal__project_cons_name_and_tag_3_p_0(MainTaggedConsId_22, &MainConsName_26, &Var_27);
    mercury__list__map2_4_p_0((MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0), (MR_Word) (&ll_backend__switch_case_scalar_common_2[1]), OtherTaggedConsIds_23, &OtherConsNames_28, &Var_29);
    Comment_30 = hlds__hlds_out__hlds_out_goal__case_comment_3_f_0(SwitchVarName_17, MainConsName_26, OtherConsNames_28);
    ll_backend__code_loc_dep__reset_to_position_3_p_0(BranchStart_20, STATE_VARIABLE_CI_0_43, &STATE_VARIABLE_CLD_46_46);
    ll_backend__code_info__get_next_label_3_p_0(Label_12, STATE_VARIABLE_CI_0_43, &STATE_VARIABLE_CI_47_47);
    {
      Var_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_49, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), Var_49, 1) = ((MR_Box) (*Label_12));
    }
    {
      Var_48 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_48, 0) = ((MR_Box) (Var_49));
      MR_hl_field(MR_mktag(0), Var_48, 1) = ((MR_Box) (Comment_30));
    }
    LabelCode_31 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_48)));
    ll_backend__trace_gen__maybe_generate_internal_event_code_7_p_0(Goal_25, SwitchGoalInfo_18, &TraceCode_32, STATE_VARIABLE_CI_47_47, &STATE_VARIABLE_CI_50_50, STATE_VARIABLE_CLD_46_46, &STATE_VARIABLE_CLD_51_51);
    ll_backend__code_gen__generate_goal_7_p_0(CodeModel_19, Goal_25, &GoalCode_33, STATE_VARIABLE_CI_50_50, STATE_VARIABLE_CI_44, STATE_VARIABLE_CLD_51_51, &STATE_VARIABLE_CLD_53_53);
    hlds__hlds_llds__goal_info_get_store_map_2_p_0(SwitchGoalInfo_18, &StoreMap_34);
    ll_backend__code_loc_dep__generate_branch_end_6_p_0(StoreMap_34, STATE_VARIABLE_MaybeEnd_0_41, STATE_VARIABLE_MaybeEnd_42, &SaveCode_35, *STATE_VARIABLE_CI_44, STATE_VARIABLE_CLD_53_53);
    {
      Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) (EndLabel_21));
    }
    {
      Var_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_56, 0) = ((MR_Box) ((MR_Unsigned) 6U));
      MR_hl_field(MR_mktag(3), Var_56, 1) = ((MR_Box) (Var_57));
    }
    Var_58 = mercury__string__f_43_43_2_f_0((MR_String) "goto end of switch on ", SwitchVarName_17);
    {
      Var_55 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_55, 0) = ((MR_Box) (Var_56));
      MR_hl_field(MR_mktag(0), Var_55, 1) = ((MR_Box) (Var_58));
    }
    GotoEndCode_36 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_55)));
    Var_62 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), SaveCode_35, GotoEndCode_36);
    Var_61 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), GoalCode_33, Var_62);
    Var_60 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), TraceCode_32, Var_61);
    Code_37 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), LabelCode_31, Var_60);
    {
      CaseInfo_38 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), CaseInfo_38, 0) = ((MR_Box) (Comment_30));
      MR_hl_field(MR_mktag(0), CaseInfo_38, 1) = ((MR_Box) (Code_37));
      MR_hl_field(MR_mktag(0), CaseInfo_38, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    }
    mercury__map__det_insert_4_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__switch_case__ll_backend__switch_case__type_ctor_info_case_label_info_0), ((MR_Box) (*Label_12)), ((MR_Box) (CaseInfo_38)), STATE_VARIABLE_CaseLabelMap_0_39, STATE_VARIABLE_CaseLabelMap_40);
  }
}

static MR_bool MR_CALL 
ll_backend__switch_case____Unify____case_code_included_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ll_backend__switch_case____Unify____case_code_included_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__switch_case____Compare____case_code_included_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ll_backend__switch_case____Compare____case_code_included_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__switch_case____Unify____case_label_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ll_backend__switch_case____Unify____case_label_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__switch_case____Compare____case_label_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ll_backend__switch_case____Compare____case_label_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__switch_case____Unify____case_label_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ll_backend__switch_case____Unify____case_label_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__switch_case____Compare____case_label_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ll_backend__switch_case____Compare____case_label_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__switch_case____Unify____represent_params_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ll_backend__switch_case____Unify____represent_params_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__switch_case____Compare____represent_params_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ll_backend__switch_case____Compare____represent_params_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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

// :- end_module ll_backend.switch_case.
