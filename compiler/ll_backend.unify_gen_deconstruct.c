/*
** Automatically generated from `unify_gen_deconstruct.m'
** by the Mercury compiler,
** version rotd-2018-07-10
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


// :- module ll_backend.unify_gen_deconstruct.
// :- implementation.

/*
INIT mercury__ll_backend__unify_gen_deconstruct__init
ENDINIT
*/

#include "ll_backend.unify_gen_deconstruct.mih"


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
#include "hlds.hlds_code_util.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
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
#include "ll_backend.code_info.mih"
#include "ll_backend.code_loc_dep.mih"
#include "ll_backend.continuation_info.mih"
#include "ll_backend.global_data.mih"
#include "ll_backend.layout.mih"
#include "ll_backend.llds.mih"
#include "ll_backend.trace_gen.mih"
#include "ll_backend.unify_gen_test.mih"
#include "ll_backend.unify_gen_util.mih"
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
#include "int.mih"
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
#include "uint.mih"
#include "uint8.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
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
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_FA_TypeInfo_Struct1 ll_backend__unify_gen_deconstruct__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_PseudoTypeInfo ll_backend__unify_gen_deconstruct__ll_backend__unify_gen_deconstruct__field_types_field_and_arg_var_0_0[3];

static const MR_DuFunctorDesc ll_backend__unify_gen_deconstruct__ll_backend__unify_gen_deconstruct__du_functor_desc_field_and_arg_var_0_0;

static const MR_DuFunctorDescPtr ll_backend__unify_gen_deconstruct__ll_backend__unify_gen_deconstruct__du_stag_ordered_field_and_arg_var_0_0[1];

static const MR_DuPtagLayout ll_backend__unify_gen_deconstruct__ll_backend__unify_gen_deconstruct__du_ptag_ordered_field_and_arg_var_0[1];

static const MR_DuFunctorDescPtr ll_backend__unify_gen_deconstruct__ll_backend__unify_gen_deconstruct__du_name_ordered_field_and_arg_var_0[1];

static const MR_Integer ll_backend__unify_gen_deconstruct__ll_backend__unify_gen_deconstruct__functor_number_map_field_and_arg_var_0[1];

static const MR_PseudoTypeInfo ll_backend__unify_gen_deconstruct__ll_backend__unify_gen_deconstruct__field_types_uni_field_0_0[4];

static const MR_DuFunctorDesc ll_backend__unify_gen_deconstruct__ll_backend__unify_gen_deconstruct__du_functor_desc_uni_field_0_0;

static const MR_DuFunctorDescPtr ll_backend__unify_gen_deconstruct__ll_backend__unify_gen_deconstruct__du_stag_ordered_uni_field_0_0[1];

static const MR_DuPtagLayout ll_backend__unify_gen_deconstruct__ll_backend__unify_gen_deconstruct__du_ptag_ordered_uni_field_0[1];

static const MR_DuFunctorDescPtr ll_backend__unify_gen_deconstruct__ll_backend__unify_gen_deconstruct__du_name_ordered_uni_field_0[1];

static const MR_Integer ll_backend__unify_gen_deconstruct__ll_backend__unify_gen_deconstruct__functor_number_map_uni_field_0[1];

static const MR_PseudoTypeInfo ll_backend__unify_gen_deconstruct__ll_backend__unify_gen_deconstruct__field_types_uni_val_0_0[1];

static const MR_DuFunctorDesc ll_backend__unify_gen_deconstruct__ll_backend__unify_gen_deconstruct__du_functor_desc_uni_val_0_0;

static const MR_PseudoTypeInfo ll_backend__unify_gen_deconstruct__ll_backend__unify_gen_deconstruct__field_types_uni_val_0_1[1];

static const MR_DuFunctorDesc ll_backend__unify_gen_deconstruct__ll_backend__unify_gen_deconstruct__du_functor_desc_uni_val_0_1;

static const MR_DuFunctorDescPtr ll_backend__unify_gen_deconstruct__ll_backend__unify_gen_deconstruct__du_stag_ordered_uni_val_0_0[1];

static const MR_DuFunctorDescPtr ll_backend__unify_gen_deconstruct__ll_backend__unify_gen_deconstruct__du_stag_ordered_uni_val_0_1[1];

static const MR_DuPtagLayout ll_backend__unify_gen_deconstruct__ll_backend__unify_gen_deconstruct__du_ptag_ordered_uni_val_0[2];

static const MR_DuFunctorDescPtr ll_backend__unify_gen_deconstruct__ll_backend__unify_gen_deconstruct__du_name_ordered_uni_val_0[2];

static const MR_Integer ll_backend__unify_gen_deconstruct__ll_backend__unify_gen_deconstruct__functor_number_map_uni_val_0[2];

static MR_bool MR_CALL 
ll_backend__unify_gen_deconstruct__IntroducedFrom__pred__generate_det_deconstruction__222__1_2_p_0(
  MR_Word AddedBy_54,
  MR_Word HeadVar__2_76);

static MR_bool MR_CALL 
ll_backend__unify_gen_deconstruct__generate_det_deconstruction_8_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ll_backend__unify_gen_deconstruct__make_fields_and_arg_vars_5_p_0(
  MR_Word VarTypes_1,
  MR_Word Rval_2,
  MR_Word Ptag_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5);

static void MR_CALL 
ll_backend__unify_gen_deconstruct__generate_direct_arg_deconstruct_8_p_0(
  MR_Word Var_9,
  MR_Word ArgVar_10,
  MR_Word Ptag_11,
  MR_Word ArgMode_12,
  MR_Word * Code_13,
  MR_Word CI_14,
  MR_Word STATE_VARIABLE_CLD_0_21,
  MR_Word * STATE_VARIABLE_CLD_22);

static void MR_CALL 
ll_backend__unify_gen_deconstruct__generate_deconstruct_tagword_unify_args_11_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_ToOrRvals_0_4,
  MR_Word * STATE_VARIABLE_ToOrRvals_5,
  MR_Unsigned STATE_VARIABLE_ToOrMask_0_6,
  MR_Unsigned * STATE_VARIABLE_ToOrMask_7,
  MR_Word * HeadVar__8_8,
  MR_Word HeadVar__9_9,
  MR_Word STATE_VARIABLE_CLD_0_10,
  MR_Word * STATE_VARIABLE_CLD_11);

static void MR_CALL 
ll_backend__unify_gen_deconstruct__generate_deconstruct_tagword_unify_arg_12_p_0(
  MR_Word LeftVar_13,
  MR_Word LeftWidth_14,
  MR_Word RightVar_15,
  MR_Word ArgMode_16,
  MR_Word STATE_VARIABLE_ToOrRvals_0_26,
  MR_Word * STATE_VARIABLE_ToOrRvals_27,
  MR_Unsigned STATE_VARIABLE_ToOrMask_0_28,
  MR_Unsigned * STATE_VARIABLE_ToOrMask_29,
  MR_Word * Code_19,
  MR_Word CI_20,
  MR_Word STATE_VARIABLE_CLD_0_30,
  MR_Word * STATE_VARIABLE_CLD_31);

static void MR_CALL 
ll_backend__unify_gen_deconstruct__generate_deconstruct_tagword_assign_right_6_p_0(
  MR_Word LeftVar_7,
  MR_Word LeftWidth_8,
  MR_Word RightVar_9,
  MR_Word * Code_10,
  MR_Word STATE_VARIABLE_CLD_0_34,
  MR_Word * STATE_VARIABLE_CLD_35);

static void MR_CALL 
ll_backend__unify_gen_deconstruct__generate_deconstruct_unify_args_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_CLD_0_5,
  MR_Word * STATE_VARIABLE_CLD_6);

static void MR_CALL 
ll_backend__unify_gen_deconstruct__generate_deconstruct_assign_left_6_p_0(
  MR_Word LeftField_7,
  MR_Word RightVar_8,
  MR_Word * Code_9,
  MR_Word CI_10,
  MR_Word STATE_VARIABLE_CLD_0_49,
  MR_Word * STATE_VARIABLE_CLD_50);

static void MR_CALL 
ll_backend__unify_gen_deconstruct__generate_deconstruct_assign_right_6_p_0(
  MR_Word RightField_7,
  MR_Word LeftVar_8,
  MR_Word * Code_9,
  MR_Word CI_10,
  MR_Word STATE_VARIABLE_CLD_0_40,
  MR_Word * STATE_VARIABLE_CLD_41);

static MR_bool MR_CALL 
ll_backend__unify_gen_deconstruct____Unify____field_and_arg_var_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__unify_gen_deconstruct____Compare____field_and_arg_var_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__unify_gen_deconstruct____Unify____uni_field_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__unify_gen_deconstruct____Compare____uni_field_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__unify_gen_deconstruct____Unify____uni_val_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__unify_gen_deconstruct____Compare____uni_val_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box ll_backend__unify_gen_deconstruct_scalar_common_1[3][2];

static /* final */ const MR_Box ll_backend__unify_gen_deconstruct_scalar_common_2[1][1];

static /* final */ const MR_Box ll_backend__unify_gen_deconstruct_scalar_common_3[1][5];




static /* final */ const MR_Box ll_backend__unify_gen_deconstruct_scalar_common_1[3][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__unify_gen_deconstruct_scalar_common_2[0])))
  },
};

static /* final */ const MR_Box ll_backend__unify_gen_deconstruct_scalar_common_2[1][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ll_backend__unify_gen_deconstruct_scalar_common_3[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_sectag_added_by_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_sectag_added_by_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_TypeInfo_Struct1 ll_backend__unify_gen_deconstruct__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_PseudoTypeInfo ll_backend__unify_gen_deconstruct__ll_backend__unify_gen_deconstruct__field_types_field_and_arg_var_0_0[3] = {
  (MR_PseudoTypeInfo) (&ll_backend__unify_gen_deconstruct__ll_backend__unify_gen_deconstruct__type_ctor_info_uni_val_0),
  (MR_PseudoTypeInfo) (&ll_backend__unify_gen_deconstruct__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
};

static const MR_DuFunctorDesc ll_backend__unify_gen_deconstruct__ll_backend__unify_gen_deconstruct__du_functor_desc_field_and_arg_var_0_0 = {
  (MR_String) "field_and_arg_var",
  (MR_Integer) 3,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__unify_gen_deconstruct__ll_backend__unify_gen_deconstruct__field_types_field_and_arg_var_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ll_backend__unify_gen_deconstruct__ll_backend__unify_gen_deconstruct__du_stag_ordered_field_and_arg_var_0_0[1] = {
  &ll_backend__unify_gen_deconstruct__ll_backend__unify_gen_deconstruct__du_functor_desc_field_and_arg_var_0_0
};

static const MR_DuPtagLayout ll_backend__unify_gen_deconstruct__ll_backend__unify_gen_deconstruct__du_ptag_ordered_field_and_arg_var_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    ll_backend__unify_gen_deconstruct__ll_backend__unify_gen_deconstruct__du_stag_ordered_field_and_arg_var_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr ll_backend__unify_gen_deconstruct__ll_backend__unify_gen_deconstruct__du_name_ordered_field_and_arg_var_0[1] = {
  &ll_backend__unify_gen_deconstruct__ll_backend__unify_gen_deconstruct__du_functor_desc_field_and_arg_var_0_0
};

static const MR_Integer ll_backend__unify_gen_deconstruct__ll_backend__unify_gen_deconstruct__functor_number_map_field_and_arg_var_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ll_backend__unify_gen_deconstruct__ll_backend__unify_gen_deconstruct__type_ctor_info_field_and_arg_var_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__unify_gen_deconstruct____Unify____field_and_arg_var_0_0_10001)),
  ((MR_Box) (ll_backend__unify_gen_deconstruct____Compare____field_and_arg_var_0_0_10001)),
  (MR_String) "ll_backend.unify_gen_deconstruct",
  (MR_String) "field_and_arg_var",
  {     ll_backend__unify_gen_deconstruct__ll_backend__unify_gen_deconstruct__du_name_ordered_field_and_arg_var_0 },
  {     ll_backend__unify_gen_deconstruct__ll_backend__unify_gen_deconstruct__du_ptag_ordered_field_and_arg_var_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__unify_gen_deconstruct__ll_backend__unify_gen_deconstruct__functor_number_map_field_and_arg_var_0
};

static const MR_PseudoTypeInfo ll_backend__unify_gen_deconstruct__ll_backend__unify_gen_deconstruct__field_types_uni_field_0_0[4] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_ptag_0),
  (MR_PseudoTypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_pos_width_0)
};

static const MR_DuFunctorDesc ll_backend__unify_gen_deconstruct__ll_backend__unify_gen_deconstruct__du_functor_desc_uni_field_0_0 = {
  (MR_String) "uni_field",
  (MR_Integer) 4,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__unify_gen_deconstruct__ll_backend__unify_gen_deconstruct__field_types_uni_field_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ll_backend__unify_gen_deconstruct__ll_backend__unify_gen_deconstruct__du_stag_ordered_uni_field_0_0[1] = {
  &ll_backend__unify_gen_deconstruct__ll_backend__unify_gen_deconstruct__du_functor_desc_uni_field_0_0
};

static const MR_DuPtagLayout ll_backend__unify_gen_deconstruct__ll_backend__unify_gen_deconstruct__du_ptag_ordered_uni_field_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    ll_backend__unify_gen_deconstruct__ll_backend__unify_gen_deconstruct__du_stag_ordered_uni_field_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr ll_backend__unify_gen_deconstruct__ll_backend__unify_gen_deconstruct__du_name_ordered_uni_field_0[1] = {
  &ll_backend__unify_gen_deconstruct__ll_backend__unify_gen_deconstruct__du_functor_desc_uni_field_0_0
};

static const MR_Integer ll_backend__unify_gen_deconstruct__ll_backend__unify_gen_deconstruct__functor_number_map_uni_field_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ll_backend__unify_gen_deconstruct__ll_backend__unify_gen_deconstruct__type_ctor_info_uni_field_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__unify_gen_deconstruct____Unify____uni_field_0_0_10001)),
  ((MR_Box) (ll_backend__unify_gen_deconstruct____Compare____uni_field_0_0_10001)),
  (MR_String) "ll_backend.unify_gen_deconstruct",
  (MR_String) "uni_field",
  {     ll_backend__unify_gen_deconstruct__ll_backend__unify_gen_deconstruct__du_name_ordered_uni_field_0 },
  {     ll_backend__unify_gen_deconstruct__ll_backend__unify_gen_deconstruct__du_ptag_ordered_uni_field_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__unify_gen_deconstruct__ll_backend__unify_gen_deconstruct__functor_number_map_uni_field_0
};

static const MR_PseudoTypeInfo ll_backend__unify_gen_deconstruct__ll_backend__unify_gen_deconstruct__field_types_uni_val_0_0[1] = {
  (MR_PseudoTypeInfo) (&ll_backend__unify_gen_deconstruct__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
};

static const MR_DuFunctorDesc ll_backend__unify_gen_deconstruct__ll_backend__unify_gen_deconstruct__du_functor_desc_uni_val_0_0 = {
  (MR_String) "uv_var",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__unify_gen_deconstruct__ll_backend__unify_gen_deconstruct__field_types_uni_val_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo ll_backend__unify_gen_deconstruct__ll_backend__unify_gen_deconstruct__field_types_uni_val_0_1[1] = {
  (MR_PseudoTypeInfo) (&ll_backend__unify_gen_deconstruct__ll_backend__unify_gen_deconstruct__type_ctor_info_uni_field_0)
};

static const MR_DuFunctorDesc ll_backend__unify_gen_deconstruct__ll_backend__unify_gen_deconstruct__du_functor_desc_uni_val_0_1 = {
  (MR_String) "uv_field",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE_DIRECT_ARG,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 1,
  ll_backend__unify_gen_deconstruct__ll_backend__unify_gen_deconstruct__field_types_uni_val_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ll_backend__unify_gen_deconstruct__ll_backend__unify_gen_deconstruct__du_stag_ordered_uni_val_0_0[1] = {
  &ll_backend__unify_gen_deconstruct__ll_backend__unify_gen_deconstruct__du_functor_desc_uni_val_0_1
};

static const MR_DuFunctorDescPtr ll_backend__unify_gen_deconstruct__ll_backend__unify_gen_deconstruct__du_stag_ordered_uni_val_0_1[1] = {
  &ll_backend__unify_gen_deconstruct__ll_backend__unify_gen_deconstruct__du_functor_desc_uni_val_0_0
};

static const MR_DuPtagLayout ll_backend__unify_gen_deconstruct__ll_backend__unify_gen_deconstruct__du_ptag_ordered_uni_val_0[2] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE_DIRECT_ARG,
    ll_backend__unify_gen_deconstruct__ll_backend__unify_gen_deconstruct__du_stag_ordered_uni_val_0_0,
    INT8_C(-1)
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    ll_backend__unify_gen_deconstruct__ll_backend__unify_gen_deconstruct__du_stag_ordered_uni_val_0_1,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr ll_backend__unify_gen_deconstruct__ll_backend__unify_gen_deconstruct__du_name_ordered_uni_val_0[2] = {
  &ll_backend__unify_gen_deconstruct__ll_backend__unify_gen_deconstruct__du_functor_desc_uni_val_0_1,
  &ll_backend__unify_gen_deconstruct__ll_backend__unify_gen_deconstruct__du_functor_desc_uni_val_0_0
};

static const MR_Integer ll_backend__unify_gen_deconstruct__ll_backend__unify_gen_deconstruct__functor_number_map_uni_val_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ll_backend__unify_gen_deconstruct__ll_backend__unify_gen_deconstruct__type_ctor_info_uni_val_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 2,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__unify_gen_deconstruct____Unify____uni_val_0_0_10001)),
  ((MR_Box) (ll_backend__unify_gen_deconstruct____Compare____uni_val_0_0_10001)),
  (MR_String) "ll_backend.unify_gen_deconstruct",
  (MR_String) "uni_val",
  {     ll_backend__unify_gen_deconstruct__ll_backend__unify_gen_deconstruct__du_name_ordered_uni_val_0 },
  {     ll_backend__unify_gen_deconstruct__ll_backend__unify_gen_deconstruct__du_ptag_ordered_uni_val_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  ll_backend__unify_gen_deconstruct__ll_backend__unify_gen_deconstruct__functor_number_map_uni_val_0
};

static MR_bool MR_CALL 
ll_backend__unify_gen_deconstruct__IntroducedFrom__pred__generate_det_deconstruction__222__1_2_p_0(
  MR_Word AddedBy_54,
  MR_Word HeadVar__2_76)
{
  {
    MR_bool succeeded = (AddedBy_54 == HeadVar__2_76);

    return succeeded;
  }
}

void MR_CALL 
ll_backend__unify_gen_deconstruct____Compare____field_and_arg_var_0_0(
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
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY3_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word Var_10;

      ll_backend__unify_gen_deconstruct____Compare____uni_val_0_0(&Var_10, ArgX1_4, ArgY1_5);
      succeeded = (Var_10 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_10;
      else
      {
        MR_Word Var_11;

        mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__unify_gen_deconstruct_scalar_common_1[0]), &Var_11, ((MR_Box) (ArgX2_6)), ((MR_Box) (ArgY2_7)));
        succeeded = (Var_11 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_11;
        else
          parse_tree__prog_data____Compare____mer_type_0_0(HeadVar__1_1, ArgX3_8, ArgY3_9);
      }
    }
  }
}

void MR_CALL 
ll_backend__unify_gen_deconstruct____Compare____uni_val_0_0(
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
    if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0))
    {
      MR_Word Var_16 = (MR_Word) (MR_body((MR_Word) (HeadVar__2_2), (MR_Integer) 0));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
      {
        MR_Word ArgY1_11 = (MR_Word) (MR_body((MR_Word) (HeadVar__3_3), (MR_Integer) 0));

        ll_backend__unify_gen_deconstruct____Compare____uni_field_0_0(HeadVar__1_1, Var_16, ArgY1_11);
      }
      else
        *HeadVar__1_1 = (MR_Integer) 2;
    }
    else
    {
      MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

        mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__unify_gen_deconstruct_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (Var_17)), ((MR_Box) (ArgY1_5)));
      }
    }
  }
}

void MR_CALL 
ll_backend__unify_gen_deconstruct____Compare____uni_field_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_15 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_16 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_15 == CastY_16);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Integer ArgX3_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Integer ArgY3_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word ArgX4_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgY4_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
      MR_Word Var_12;
      uint8_t Var_21 = (uint8_t) (ArgX1_4);
      uint8_t Var_22 = (uint8_t) (ArgY1_5);

      mercury__private_builtin__builtin_compare_uint8_3_p_0(&Var_12, Var_21, Var_22);
      succeeded = (Var_12 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_12;
      else
      {
        MR_Word Var_13;

        ll_backend__llds____Compare____rval_0_0(&Var_13, ArgX2_6, ArgY2_7);
        succeeded = (Var_13 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_13;
        else
        {
          MR_Word Var_14;

          mercury__private_builtin__builtin_compare_int_3_p_0(&Var_14, ArgX3_8, ArgY3_9);
          succeeded = (Var_14 == (MR_Integer) 0);
          succeeded = !(succeeded);
          if (succeeded)
            *HeadVar__1_1 = Var_14;
          else
            parse_tree__prog_data____Compare____arg_pos_width_0_0(HeadVar__1_1, ArgX4_10, ArgY4_11);
        }
      }
    }
  }
}

MR_bool MR_CALL 
ll_backend__unify_gen_deconstruct____Unify____field_and_arg_var_0_0(
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
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));

      succeeded = ll_backend__unify_gen_deconstruct____Unify____uni_val_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        TypeInfo_11_11 = (MR_Word) (&ll_backend__unify_gen_deconstruct_scalar_common_1[0]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_11_11, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        if (succeeded)
          succeeded = parse_tree__prog_data____Unify____mer_type_0_0(ArgX3_7, ArgY3_8);
      }
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
ll_backend__unify_gen_deconstruct____Unify____uni_val_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_7 == CastY_8);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0))
    {
      MR_Word ArgX1_5 = (MR_Word) (MR_body((MR_Word) (HeadVar__1_1), (MR_Integer) 0));
      MR_Word ArgY1_6;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
      if (succeeded)
      {
        ArgY1_6 = (MR_Word) (MR_body((MR_Word) (HeadVar__2_2), (MR_Integer) 0));
        succeeded = ll_backend__unify_gen_deconstruct____Unify____uni_field_0_0(ArgX1_5, ArgY1_6);
      }
    }
    else
    {
      MR_Word TypeInfo_9_9;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
      if (succeeded)
      {
        ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        TypeInfo_9_9 = (MR_Word) (&ll_backend__unify_gen_deconstruct_scalar_common_1[0]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_9_9, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      }
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
ll_backend__unify_gen_deconstruct____Unify____uni_field_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_11 == CastY_12);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Integer ArgX3_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Integer ArgY3_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
      MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      uint8_t Var_16 = (uint8_t) (ArgX1_3);
      uint8_t Var_17 = (uint8_t) (ArgY1_4);

      succeeded = (Var_16 == Var_17);
      if (succeeded)
      {
        succeeded = ll_backend__llds____Unify____rval_0_0(ArgX2_5, ArgY2_6);
        if (succeeded)
        {
          succeeded = (ArgX3_7 == ArgY3_8);
          if (succeeded)
            succeeded = parse_tree__prog_data____Unify____arg_pos_width_0_0(ArgX4_9, ArgY4_10);
        }
      }
    }
    return succeeded;
  }
}

void MR_CALL 
ll_backend__unify_gen_deconstruct__generate_semi_deconstruction_9_p_0(
  MR_Word Var_10,
  MR_Word Tag_11,
  MR_Word ArgVarsWidths_12,
  MR_Word Modes_13,
  MR_Word * Code_14,
  MR_Word STATE_VARIABLE_CI_0_25,
  MR_Word * STATE_VARIABLE_CI_26,
  MR_Word STATE_VARIABLE_CLD_0_27,
  MR_Word * STATE_VARIABLE_CLD_28)
{
  {
    MR_Word VarType_17;
    MR_Word CheaperTagTest_18;
    MR_Word SuccLabel_19;
    MR_Word TagTestCode_20;
    MR_Word AfterUnify_21;
    MR_Word FailCode_22;
    MR_Word DeconsCode_23;
    MR_Word SuccessLabelCode_24;
    MR_Word STATE_VARIABLE_CI_30_30;
    MR_Word STATE_VARIABLE_CLD_31_31;
    MR_Word STATE_VARIABLE_CLD_33_33;
    MR_Word Var_35;
    MR_Word Var_36;
    MR_Word Var_38;
    MR_Word Var_39;

    VarType_17 = ll_backend__code_info__variable_type_2_f_0(STATE_VARIABLE_CI_0_25, Var_10);
    CheaperTagTest_18 = ll_backend__code_info__lookup_cheaper_tag_test_2_f_0(STATE_VARIABLE_CI_0_25, VarType_17);
    ll_backend__unify_gen_test__generate_tag_test_10_p_0(Var_10, Tag_11, CheaperTagTest_18, (MR_Integer) 0, &SuccLabel_19, &TagTestCode_20, STATE_VARIABLE_CI_0_25, &STATE_VARIABLE_CI_30_30, STATE_VARIABLE_CLD_0_27, &STATE_VARIABLE_CLD_31_31);
    ll_backend__code_loc_dep__remember_position_2_p_0(STATE_VARIABLE_CLD_31_31, &AfterUnify_21);
    ll_backend__code_loc_dep__generate_failure_4_p_0(&FailCode_22, STATE_VARIABLE_CI_30_30, STATE_VARIABLE_CI_26, STATE_VARIABLE_CLD_31_31);
    ll_backend__code_loc_dep__reset_to_position_3_p_0(AfterUnify_21, *STATE_VARIABLE_CI_26, &STATE_VARIABLE_CLD_33_33);
    ll_backend__unify_gen_deconstruct__generate_det_deconstruction_8_p_0(Var_10, Tag_11, ArgVarsWidths_12, Modes_13, &DeconsCode_23, *STATE_VARIABLE_CI_26, STATE_VARIABLE_CLD_33_33, STATE_VARIABLE_CLD_28);
    {
      Var_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), Var_36, 1) = ((MR_Box) (SuccLabel_19));
    }
    {
      Var_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_35, 0) = ((MR_Box) (Var_36));
      MR_hl_field(MR_mktag(0), Var_35, 1) = ((MR_Box) ((MR_String) ""));
    }
    SuccessLabelCode_24 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_35)));
    Var_39 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), SuccessLabelCode_24, DeconsCode_23);
    Var_38 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), FailCode_22, Var_39);
    *Code_14 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), TagTestCode_20, Var_38);
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen_deconstruct__generate_det_deconstruction_8_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__unify_gen_deconstruct__IntroducedFrom__pred__generate_det_deconstruction__222__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

void MR_CALL 
ll_backend__unify_gen_deconstruct__generate_det_deconstruction_8_p_0(
  MR_Word Var_9,
  MR_Word ConsId_10,
  MR_Word ArgVarsWidths_11,
  MR_Word ArgModes_12,
  MR_Word * Code_13,
  MR_Word CI_14,
  MR_Word STATE_VARIABLE_CLD_0_67,
  MR_Word * STATE_VARIABLE_CLD_68)
{
  {
    MR_bool succeeded;
    MR_Word ModuleInfo_16;
    MR_Word ConsTag_17;

    ll_backend__code_info__get_module_info_2_p_0(CI_14, &ModuleInfo_16);
    ConsTag_17 = hlds__hlds_code_util__cons_id_to_tag_2_f_0(ModuleInfo_16, ConsId_10);
    switch (MR_tag((MR_Word) ConsTag_17)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(ConsTag_17)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Rval_112;
              MR_Word VarTypes_113;
              MR_Word FieldsAndArgVars_114;

              {
                Rval_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Rval_112, 0) = ((MR_Box) (Var_9));
              }
              ll_backend__code_info__get_vartypes_2_p_0(CI_14, &VarTypes_113);
              ll_backend__unify_gen_deconstruct__make_fields_and_arg_vars_5_p_0(VarTypes_113, Rval_112, (MR_Word) (((MR_Box) (MR_Word) (UINT8_C(0)))), ArgVarsWidths_11, &FieldsAndArgVars_114);
              ll_backend__unify_gen_deconstruct__generate_deconstruct_unify_args_6_p_0(FieldsAndArgVars_114, ArgModes_12, Code_13, CI_14, STATE_VARIABLE_CLD_0_67, STATE_VARIABLE_CLD_68);
            }
            break;
          case (MR_Integer) 1:
            {
              *Code_13 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
              *STATE_VARIABLE_CLD_68 = STATE_VARIABLE_CLD_0_67;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ArgVar_45;
              MR_Word ArgMode_47;
              MR_Word Var_85;
              MR_Word Var_86;
              MR_Word Var_87;

              succeeded = ((MR_tag((MR_Word) ArgVarsWidths_11)) == (MR_Integer) 1);
              if (succeeded)
              {
                Var_85 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgVarsWidths_11, (MR_Integer) 0))));
                Var_86 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgVarsWidths_11, (MR_Integer) 1))));
                succeeded = (Var_86 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  ArgVar_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_85, (MR_Integer) 0))));
                  succeeded = ((MR_tag((MR_Word) ArgModes_12)) == (MR_Integer) 1);
                  if (succeeded)
                  {
                    ArgMode_47 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgModes_12, (MR_Integer) 0))));
                    Var_87 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgModes_12, (MR_Integer) 1))));
                    succeeded = (Var_87 == (MR_Word) ((MR_Unsigned) 0U));
                  }
                }
              }
              if (succeeded)
              {
                MR_Word VarType_48;
                MR_Word IsDummy_49;

                VarType_48 = ll_backend__code_info__variable_type_2_f_0(CI_14, Var_9);
                IsDummy_49 = check_hlds__type_util__is_type_a_dummy_2_f_0(ModuleInfo_16, VarType_48);
                switch (IsDummy_49) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      succeeded = ll_backend__code_loc_dep__variable_is_forward_live_2_p_0(STATE_VARIABLE_CLD_0_67, ArgVar_45);
                      if (succeeded)
                      {
                        ll_backend__code_loc_dep__assign_const_to_var_5_p_0(ArgVar_45, (MR_Word) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_deconstruct_scalar_common_1[2])), CI_14, STATE_VARIABLE_CLD_0_67, STATE_VARIABLE_CLD_68);
                      }
                      else
                        *STATE_VARIABLE_CLD_68 = STATE_VARIABLE_CLD_0_67;
                      *Code_13 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word ArgType_50;
                      MR_Word FieldAndArgVar_51;
                      MR_Word Var_88;

                      ArgType_50 = ll_backend__code_info__variable_type_2_f_0(CI_14, ArgVar_45);
                      {
                        Var_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_88, 0) = ((MR_Box) (Var_9));
                      }
                      {
                        FieldAndArgVar_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), FieldAndArgVar_51, 0) = ((MR_Box) (Var_88));
                        MR_hl_field(MR_mktag(0), FieldAndArgVar_51, 1) = ((MR_Box) (ArgVar_45));
                        MR_hl_field(MR_mktag(0), FieldAndArgVar_51, 2) = ((MR_Box) (ArgType_50));
                      }
                      ll_backend__unify_gen_deconstruct__generate_deconstruct_unify_arg_6_p_0(FieldAndArgVar_51, ArgMode_47, Code_13, CI_14, STATE_VARIABLE_CLD_0_67, STATE_VARIABLE_CLD_68);
                    }
                    break;
                }
              }
              else
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_deconstruct.generate_det_deconstruction\'/8", (MR_String) "no_tag: arity != 1");
                  return;
                }
              }
            }
            break;
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          *Code_13 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
          *STATE_VARIABLE_CLD_68 = STATE_VARIABLE_CLD_0_67;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_17, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
          case (MR_Integer) 2:
          case (MR_Integer) 3:
          case (MR_Integer) 4:
          case (MR_Integer) 8:
          case (MR_Integer) 9:
          case (MR_Integer) 13:
            {
              *Code_13 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
              *STATE_VARIABLE_CLD_68 = STATE_VARIABLE_CLD_0_67;
            }
            break;
          case (MR_Integer) 5:
          case (MR_Integer) 6:
          case (MR_Integer) 7:
          case (MR_Integer) 10:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_deconstruct.generate_det_deconstruction\'/8", (MR_String) "unexpected tag");
                return;
              }
            }
            break;
          case (MR_Integer) 11:
            {
              MR_Word Rval_116;
              MR_Word VarTypes_117;
              MR_Word FieldsAndArgVars_118;
              MR_Word Ptag_119 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_17, (MR_Integer) 1))));

              {
                Rval_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Rval_116, 0) = ((MR_Box) (Var_9));
              }
              ll_backend__code_info__get_vartypes_2_p_0(CI_14, &VarTypes_117);
              ll_backend__unify_gen_deconstruct__make_fields_and_arg_vars_5_p_0(VarTypes_117, Rval_116, Ptag_119, ArgVarsWidths_11, &FieldsAndArgVars_118);
              ll_backend__unify_gen_deconstruct__generate_deconstruct_unify_args_6_p_0(FieldsAndArgVars_118, ArgModes_12, Code_13, CI_14, STATE_VARIABLE_CLD_0_67, STATE_VARIABLE_CLD_68);
            }
            break;
          case (MR_Integer) 12:
            {
              MR_Word Ptag_52 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_17, (MR_Integer) 1))));
              MR_Word ArgVar_100;
              MR_Word ArgMode_102;
              MR_Word Var_79;
              MR_Word Var_80;
              MR_Word Var_81;

              succeeded = ((MR_tag((MR_Word) ArgVarsWidths_11)) == (MR_Integer) 1);
              if (succeeded)
              {
                Var_79 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgVarsWidths_11, (MR_Integer) 0))));
                Var_80 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgVarsWidths_11, (MR_Integer) 1))));
                succeeded = (Var_80 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  ArgVar_100 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_79, (MR_Integer) 0))));
                  succeeded = ((MR_tag((MR_Word) ArgModes_12)) == (MR_Integer) 1);
                  if (succeeded)
                  {
                    ArgMode_102 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgModes_12, (MR_Integer) 0))));
                    Var_81 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgModes_12, (MR_Integer) 1))));
                    succeeded = (Var_81 == (MR_Word) ((MR_Unsigned) 0U));
                  }
                }
              }
              if (succeeded)
                ll_backend__unify_gen_deconstruct__generate_direct_arg_deconstruct_8_p_0(Var_9, ArgVar_100, Ptag_52, ArgMode_102, Code_13, CI_14, STATE_VARIABLE_CLD_0_67, STATE_VARIABLE_CLD_68);
              else
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_deconstruct.generate_det_deconstruction\'/8", (MR_String) "direct_arg_tag: arity != 1");
                  return;
                }
              }
            }
            break;
          case (MR_Integer) 14:
            {
              MR_Word ToOrRvals_60;
              MR_Unsigned ToOrMask_61;
              MR_Word AssignRightCode_62;
              MR_Word STATE_VARIABLE_CLD_71_71;

              ll_backend__unify_gen_deconstruct__generate_deconstruct_tagword_unify_args_11_p_0(Var_9, ArgVarsWidths_11, ArgModes_12, (MR_Word) ((MR_Unsigned) 0U), &ToOrRvals_60, (MR_Unsigned) 0U, &ToOrMask_61, &AssignRightCode_62, CI_14, STATE_VARIABLE_CLD_0_67, &STATE_VARIABLE_CLD_71_71);
              if ((ToOrRvals_60 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                *Code_13 = AssignRightCode_62;
                *STATE_VARIABLE_CLD_68 = STATE_VARIABLE_CLD_71_71;
              }
              else
              {
                MR_Word ToOrRval_65;
                MR_Word AssignLeftCode_66;

                ll_backend__unify_gen_util__or_packed_rvals_2_p_0(ToOrRvals_60, &ToOrRval_65);
                ll_backend__code_loc_dep__reassign_tagword_var_7_p_0(Var_9, ToOrMask_61, ToOrRval_65, &AssignLeftCode_66, CI_14, STATE_VARIABLE_CLD_71_71, STATE_VARIABLE_CLD_68);
                *Code_13 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), AssignRightCode_62, AssignLeftCode_66);
              }
            }
            break;
          case (MR_Integer) 15:
            {
              MR_Word RemoteSectag_53 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_17, (MR_Integer) 2))));
              MR_Word AddedBy_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RemoteSectag_53, (MR_Integer) 1))));
              MR_Word Rval_55;
              MR_Word VarTypes_56;
              MR_Word FieldsAndArgVars_57;
              MR_Word Var_73;
              MR_Word Ptag_106 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_17, (MR_Integer) 1))));

              {
                Var_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_73, 0) = ((MR_Box) (&ll_backend__unify_gen_deconstruct_scalar_common_3[0]));
                MR_hl_field(MR_mktag(0), Var_73, 1) = ((MR_Box) (ll_backend__unify_gen_deconstruct__generate_det_deconstruction_8_p_0_1));
                MR_hl_field(MR_mktag(0), Var_73, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_73, 3) = ((MR_Box) (AddedBy_54));
                MR_hl_field(MR_mktag(0), Var_73, 4) = ((MR_Box) ((MR_Integer) 0));
              }
              mercury__require__expect_3_p_0(Var_73, (MR_String) "predicate \140ll_backend.unify_gen_deconstruct.generate_det_deconstruction\'/8", (MR_String) "AddedBy != sectag_added_by_unify");
              {
                Rval_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Rval_55, 0) = ((MR_Box) (Var_9));
              }
              ll_backend__code_info__get_vartypes_2_p_0(CI_14, &VarTypes_56);
              ll_backend__unify_gen_deconstruct__make_fields_and_arg_vars_5_p_0(VarTypes_56, Rval_55, Ptag_106, ArgVarsWidths_11, &FieldsAndArgVars_57);
              ll_backend__unify_gen_deconstruct__generate_deconstruct_unify_args_6_p_0(FieldsAndArgVars_57, ArgModes_12, Code_13, CI_14, STATE_VARIABLE_CLD_0_67, STATE_VARIABLE_CLD_68);
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
ll_backend__unify_gen_deconstruct__make_fields_and_arg_vars_5_p_0(
  MR_Word VarTypes_1,
  MR_Word Rval_2,
  MR_Word Ptag_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5)
{
  if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word VarPosWidth_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
    MR_Word VarsPosWidths_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
    MR_Word FieldAndArgVar_14;
    MR_Word FieldsAndArgVars_15;
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), VarPosWidth_12, (MR_Integer) 0))));
    MR_Word PosWidth_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), VarPosWidth_12, (MR_Integer) 1))));
    MR_Integer CellOffsetInt_32;
    MR_Word Field_33;
    MR_Word Type_34;
    MR_Word Var_35;

    switch (MR_tag((MR_Word) PosWidth_17)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        CellOffsetInt_32 = (MR_Integer) -1;
        break;
      case (MR_Integer) 1:
        {
          MR_Word CellOffset_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PosWidth_17, (MR_Integer) 1))));

          CellOffsetInt_32 = (MR_Integer) (CellOffset_36);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word CellOffset_19 = ((MR_Word) ((MR_hl_field(MR_mktag(2), PosWidth_17, (MR_Integer) 1))));

          CellOffsetInt_32 = (MR_Integer) (CellOffset_19);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), PosWidth_17, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word CellOffset_38 = ((MR_Word) ((MR_hl_field(MR_mktag(3), PosWidth_17, (MR_Integer) 2))));

              CellOffsetInt_32 = (MR_Integer) (CellOffset_38);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word CellOffset_39 = ((MR_Word) ((MR_hl_field(MR_mktag(3), PosWidth_17, (MR_Integer) 2))));

              CellOffsetInt_32 = (MR_Integer) (CellOffset_39);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word CellOffset_37 = ((MR_Word) ((MR_hl_field(MR_mktag(3), PosWidth_17, (MR_Integer) 2))));

              CellOffsetInt_32 = (MR_Integer) (CellOffset_37);
            }
            break;
        }
        break;
    }
    {
      Var_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_35, 0) = ((MR_Box) (Ptag_3));
      MR_hl_field(MR_mktag(0), Var_35, 1) = ((MR_Box) (Rval_2));
      MR_hl_field(MR_mktag(0), Var_35, 2) = ((MR_Box) (CellOffsetInt_32));
      MR_hl_field(MR_mktag(0), Var_35, 3) = ((MR_Box) (PosWidth_17));
    }
    Field_33 = (MR_Word) (MR_mkword(MR_mktag(0), (MR_Word) (Var_35)));
    hlds__vartypes__lookup_var_type_3_p_0(VarTypes_1, Var_16, &Type_34);
    {
      FieldAndArgVar_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), FieldAndArgVar_14, 0) = ((MR_Box) (Field_33));
      MR_hl_field(MR_mktag(0), FieldAndArgVar_14, 1) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(0), FieldAndArgVar_14, 2) = ((MR_Box) (Type_34));
    }
    ll_backend__unify_gen_deconstruct__make_fields_and_arg_vars_5_p_0(VarTypes_1, Rval_2, Ptag_3, VarsPosWidths_13, &FieldsAndArgVars_15);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__5_5 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (FieldAndArgVar_14));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (FieldsAndArgVars_15));
    }
  }
}

static void MR_CALL 
ll_backend__unify_gen_deconstruct__generate_direct_arg_deconstruct_8_p_0(
  MR_Word Var_9,
  MR_Word ArgVar_10,
  MR_Word Ptag_11,
  MR_Word ArgMode_12,
  MR_Word * Code_13,
  MR_Word CI_14,
  MR_Word STATE_VARIABLE_CLD_0_21,
  MR_Word * STATE_VARIABLE_CLD_22)
{
  {
    MR_bool succeeded;
    MR_Word ModuleInfo_16;
    MR_Word Type_17;
    MR_Word Dir_18;

    ll_backend__code_info__get_module_info_2_p_0(CI_14, &ModuleInfo_16);
    Type_17 = ll_backend__code_info__variable_type_2_f_0(CI_14, ArgVar_10);
    ll_backend__unify_gen_util__compute_assign_direction_4_p_0(ModuleInfo_16, ArgMode_12, Type_17, &Dir_18);
    switch (Dir_18) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Var_23;

          {
            Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_23, 0) = ((MR_Box) (ArgVar_10));
          }
          ll_backend__code_loc_dep__reassign_mkword_hole_var_6_p_0(Var_9, Ptag_11, Var_23, Code_13, STATE_VARIABLE_CLD_0_21, STATE_VARIABLE_CLD_22);
        }
        break;
      case (MR_Integer) 1:
        {
          succeeded = ll_backend__code_loc_dep__variable_is_forward_live_2_p_0(STATE_VARIABLE_CLD_0_21, ArgVar_10);
          if (succeeded)
          {
            uint8_t PtagUint8_19 = (uint8_t) (Ptag_11);
            MR_Word BodyRval_20;
            MR_Word Var_26;
            MR_Word Var_27;
            MR_Word Var_28;
            MR_Integer Var_29;

            {
              Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) (Var_9));
            }
            Var_29 = mercury__uint8__cast_to_int_1_f_0(PtagUint8_19);
            {
              Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (Var_29));
            }
            {
              Var_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(3), Var_27, 1) = ((MR_Box) (Var_28));
            }
            {
              BodyRval_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), BodyRval_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
              MR_hl_field(MR_mktag(3), BodyRval_20, 1) = ((MR_Box) ((MR_Unsigned) 8U));
              MR_hl_field(MR_mktag(3), BodyRval_20, 2) = ((MR_Box) (Var_26));
              MR_hl_field(MR_mktag(3), BodyRval_20, 3) = ((MR_Box) (Var_27));
            }
            ll_backend__code_loc_dep__assign_expr_to_var_5_p_0(ArgVar_10, BodyRval_20, Code_13, STATE_VARIABLE_CLD_0_21, STATE_VARIABLE_CLD_22);
          }
          else
          {
            *Code_13 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
            *STATE_VARIABLE_CLD_22 = STATE_VARIABLE_CLD_0_21;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          *Code_13 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
          *STATE_VARIABLE_CLD_22 = STATE_VARIABLE_CLD_0_21;
        }
        break;
    }
  }
}

static void MR_CALL 
ll_backend__unify_gen_deconstruct__generate_deconstruct_tagword_unify_args_11_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_ToOrRvals_0_4,
  MR_Word * STATE_VARIABLE_ToOrRvals_5,
  MR_Unsigned STATE_VARIABLE_ToOrMask_0_6,
  MR_Unsigned * STATE_VARIABLE_ToOrMask_7,
  MR_Word * HeadVar__8_8,
  MR_Word HeadVar__9_9,
  MR_Word STATE_VARIABLE_CLD_0_10,
  MR_Word * STATE_VARIABLE_CLD_11)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__8_8 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
      *STATE_VARIABLE_CLD_11 = STATE_VARIABLE_CLD_0_10;
      *STATE_VARIABLE_ToOrMask_7 = STATE_VARIABLE_ToOrMask_0_6;
      *STATE_VARIABLE_ToOrRvals_5 = STATE_VARIABLE_ToOrRvals_0_4;
    }
    else
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_deconstruct.generate_deconstruct_tagword_unify_args\'/11", (MR_String) "length mismatch");
        return;
      }
    }
  else
  {
    MR_Word Var_83 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Var_84 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_deconstruct.generate_deconstruct_tagword_unify_args\'/11", (MR_String) "length mismatch");
        return;
      }
    }
    else
    {
      MR_Word ArgMode_58 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgModes_59 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word RightVar_65 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_84, (MR_Integer) 0))));
      MR_Word LeftWidth_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_84, (MR_Integer) 1))));
      MR_Word CodeA_67;
      MR_Word CodeB_68;
      MR_Word STATE_VARIABLE_ToOrRvals_75_75;
      MR_Unsigned STATE_VARIABLE_ToOrMask_76_76;
      MR_Word STATE_VARIABLE_CLD_77_77;

      ll_backend__unify_gen_deconstruct__generate_deconstruct_tagword_unify_arg_12_p_0(HeadVar__1_1, LeftWidth_66, RightVar_65, ArgMode_58, STATE_VARIABLE_ToOrRvals_0_4, &STATE_VARIABLE_ToOrRvals_75_75, STATE_VARIABLE_ToOrMask_0_6, &STATE_VARIABLE_ToOrMask_76_76, &CodeA_67, HeadVar__9_9, STATE_VARIABLE_CLD_0_10, &STATE_VARIABLE_CLD_77_77);
      ll_backend__unify_gen_deconstruct__generate_deconstruct_tagword_unify_args_11_p_0(HeadVar__1_1, Var_83, ArgModes_59, STATE_VARIABLE_ToOrRvals_75_75, STATE_VARIABLE_ToOrRvals_5, STATE_VARIABLE_ToOrMask_76_76, STATE_VARIABLE_ToOrMask_7, &CodeB_68, HeadVar__9_9, STATE_VARIABLE_CLD_77_77, STATE_VARIABLE_CLD_11);
      *HeadVar__8_8 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), CodeA_67, CodeB_68);
    }
  }
}

static void MR_CALL 
ll_backend__unify_gen_deconstruct__generate_deconstruct_tagword_unify_arg_12_p_0(
  MR_Word LeftVar_13,
  MR_Word LeftWidth_14,
  MR_Word RightVar_15,
  MR_Word ArgMode_16,
  MR_Word STATE_VARIABLE_ToOrRvals_0_26,
  MR_Word * STATE_VARIABLE_ToOrRvals_27,
  MR_Unsigned STATE_VARIABLE_ToOrMask_0_28,
  MR_Unsigned * STATE_VARIABLE_ToOrMask_29,
  MR_Word * Code_19,
  MR_Word CI_20,
  MR_Word STATE_VARIABLE_CLD_0_30,
  MR_Word * STATE_VARIABLE_CLD_31)
{
  {
    MR_bool succeeded;
    MR_Word ModuleInfo_22;
    MR_Word VarTypes_23;
    MR_Word Type_24;
    MR_Word Dir_25;

    ll_backend__code_info__get_module_info_2_p_0(CI_20, &ModuleInfo_22);
    ll_backend__code_info__get_vartypes_2_p_0(CI_20, &VarTypes_23);
    hlds__vartypes__lookup_var_type_3_p_0(VarTypes_23, RightVar_15, &Type_24);
    ll_backend__unify_gen_util__compute_assign_direction_4_p_0(ModuleInfo_22, ArgMode_16, Type_24, &Dir_25);
    switch (Dir_25) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          switch (MR_tag((MR_Word) LeftWidth_14)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_deconstruct.generate_deconstruct_tagword_assign_left\'/6", (MR_String) "LeftWidth is not a packed arg_pos_width");
                  return;
                }
              }
              break;
            case (MR_Integer) 1:
            case (MR_Integer) 2:
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_deconstruct.generate_deconstruct_tagword_assign_left\'/6", (MR_String) "LeftWidth is not a packed arg_pos_width");
                  return;
                }
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), LeftWidth_14, (MR_Integer) 0)))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_deconstruct.generate_deconstruct_tagword_assign_left\'/6", (MR_String) "LeftWidth is not a packed arg_pos_width");
                      return;
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Shift_48 = ((MR_Word) ((MR_hl_field(MR_mktag(3), LeftWidth_14, (MR_Integer) 3))));
                    MR_Word Mask_50 = ((MR_Word) ((MR_hl_field(MR_mktag(3), LeftWidth_14, (MR_Integer) 5))));
                    MR_Word Fill_51 = ((MR_Word) ((MR_hl_field(MR_mktag(3), LeftWidth_14, (MR_Integer) 6))));
                    MR_Integer ShiftInt_52 = (MR_Integer) (Shift_48);
                    MR_Integer MaskInt_53 = (MR_Integer) (Mask_50);
                    MR_Word LeftShiftedRightRval_54;
                    MR_Word Var_69;
                    MR_Unsigned Var_72;
                    MR_Unsigned Var_73;

                    {
                      Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) (RightVar_15));
                    }
                    LeftShiftedRightRval_54 = ll_backend__unify_gen_util__left_shift_rval_3_f_0(Var_69, Shift_48, Fill_51);
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *STATE_VARIABLE_ToOrRvals_27 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (LeftShiftedRightRval_54));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_ToOrRvals_0_26));
                    }
                    Var_73 = mercury__uint__cast_from_int_1_f_0(MaskInt_53);
                    Var_72 = mercury__uint__f_60_60_2_f_0(Var_73, ShiftInt_52);
                    *STATE_VARIABLE_ToOrMask_29 = (Var_72 | STATE_VARIABLE_ToOrMask_0_28);
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    *STATE_VARIABLE_ToOrRvals_27 = STATE_VARIABLE_ToOrRvals_0_26;
                    *STATE_VARIABLE_ToOrMask_29 = STATE_VARIABLE_ToOrMask_0_28;
                  }
                  break;
              }
              break;
          }
          *Code_19 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
          *STATE_VARIABLE_CLD_31 = STATE_VARIABLE_CLD_0_30;
        }
        break;
      case (MR_Integer) 1:
        {
          succeeded = ll_backend__code_loc_dep__variable_is_forward_live_2_p_0(STATE_VARIABLE_CLD_0_30, RightVar_15);
          if (succeeded)
            ll_backend__unify_gen_deconstruct__generate_deconstruct_tagword_assign_right_6_p_0(LeftVar_13, LeftWidth_14, RightVar_15, Code_19, STATE_VARIABLE_CLD_0_30, STATE_VARIABLE_CLD_31);
          else
          {
            *Code_19 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
            *STATE_VARIABLE_CLD_31 = STATE_VARIABLE_CLD_0_30;
          }
          *STATE_VARIABLE_ToOrRvals_27 = STATE_VARIABLE_ToOrRvals_0_26;
          *STATE_VARIABLE_ToOrMask_29 = STATE_VARIABLE_ToOrMask_0_28;
        }
        break;
      case (MR_Integer) 2:
        {
          *Code_19 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
          *STATE_VARIABLE_ToOrRvals_27 = STATE_VARIABLE_ToOrRvals_0_26;
          *STATE_VARIABLE_ToOrMask_29 = STATE_VARIABLE_ToOrMask_0_28;
          *STATE_VARIABLE_CLD_31 = STATE_VARIABLE_CLD_0_30;
        }
        break;
    }
  }
}

static void MR_CALL 
ll_backend__unify_gen_deconstruct__generate_deconstruct_tagword_assign_right_6_p_0(
  MR_Word LeftVar_7,
  MR_Word LeftWidth_8,
  MR_Word RightVar_9,
  MR_Word * Code_10,
  MR_Word STATE_VARIABLE_CLD_0_34,
  MR_Word * STATE_VARIABLE_CLD_35)
{
  switch (MR_tag((MR_Word) LeftWidth_8)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_deconstruct.generate_deconstruct_tagword_assign_right\'/6", (MR_String) "LeftWidth does not belong in tagword");
          return;
        }
      }
      break;
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_deconstruct.generate_deconstruct_tagword_assign_right\'/6", (MR_String) "LeftWidth does not belong in tagword");
          return;
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), LeftWidth_8, (MR_Integer) 0)))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_deconstruct.generate_deconstruct_tagword_assign_right\'/6", (MR_String) "LeftWidth does not belong in tagword");
              return;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Shift_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), LeftWidth_8, (MR_Integer) 3))));
            MR_Word Mask_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), LeftWidth_8, (MR_Integer) 5))));
            MR_Word Fill_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), LeftWidth_8, (MR_Integer) 6))));
            MR_Word LeftRval0_18;
            MR_Integer MaskInt_19;
            MR_Word MaskedLeftRval0_20;
            MR_Word MaskedLeftRval_21;
            MR_Word Var_38;
            MR_Word Var_41;
            MR_Word Var_42;

            {
              Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (LeftVar_7));
            }
            LeftRval0_18 = ll_backend__unify_gen_util__right_shift_rval_2_f_0(Var_38, Shift_14);
            MaskInt_19 = (MR_Integer) (Mask_16);
            {
              Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (MaskInt_19));
            }
            {
              Var_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_41, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(3), Var_41, 1) = ((MR_Box) (Var_42));
            }
            {
              MaskedLeftRval0_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), MaskedLeftRval0_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
              MR_hl_field(MR_mktag(3), MaskedLeftRval0_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_deconstruct_scalar_common_1[1])));
              MR_hl_field(MR_mktag(3), MaskedLeftRval0_20, 2) = ((MR_Box) (LeftRval0_18));
              MR_hl_field(MR_mktag(3), MaskedLeftRval0_20, 3) = ((MR_Box) (Var_41));
            }
            ll_backend__unify_gen_util__maybe_cast_masked_off_rval_3_p_0(Fill_17, MaskedLeftRval0_20, &MaskedLeftRval_21);
            ll_backend__code_loc_dep__assign_expr_to_var_5_p_0(RightVar_9, MaskedLeftRval_21, Code_10, STATE_VARIABLE_CLD_0_34, STATE_VARIABLE_CLD_35);
          }
          break;
        case (MR_Integer) 2:
          {
            *Code_10 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
            *STATE_VARIABLE_CLD_35 = STATE_VARIABLE_CLD_0_34;
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
ll_backend__unify_gen_deconstruct__generate_deconstruct_unify_args_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_CLD_0_5,
  MR_Word * STATE_VARIABLE_CLD_6)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__3_3 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
      *STATE_VARIABLE_CLD_6 = STATE_VARIABLE_CLD_0_5;
    }
    else
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_deconstruct.generate_deconstruct_unify_args\'/6", (MR_String) "length mismatch");
        return;
      }
    }
  else
  {
    MR_Word Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_deconstruct.generate_deconstruct_unify_args\'/6", (MR_String) "length mismatch");
        return;
      }
    }
    else
    {
      MR_Word Mode_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Modes_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word CodeA_36;
      MR_Word CodeB_37;
      MR_Word STATE_VARIABLE_CLD_40_40;

      ll_backend__unify_gen_deconstruct__generate_deconstruct_unify_arg_6_p_1(Var_45, Mode_31, &CodeA_36, HeadVar__4_4, STATE_VARIABLE_CLD_0_5, &STATE_VARIABLE_CLD_40_40);
      ll_backend__unify_gen_deconstruct__generate_deconstruct_unify_args_6_p_0(Var_44, Modes_32, &CodeB_37, HeadVar__4_4, STATE_VARIABLE_CLD_40_40, STATE_VARIABLE_CLD_6);
      *HeadVar__3_3 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), CodeA_36, CodeB_37);
    }
  }
}

void MR_CALL 
ll_backend__unify_gen_deconstruct__generate_deconstruct_unify_arg_6_p_1(
  MR_Word FieldAndArgVar_7,
  MR_Word ArgMode_8,
  MR_Word * Code_9,
  MR_Word CI_10,
  MR_Word STATE_VARIABLE_CLD_0_19,
  MR_Word * STATE_VARIABLE_CLD_20)
{
  {
    MR_bool succeeded;
    MR_Word LeftUniVal_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldAndArgVar_7, (MR_Integer) 0))));
    MR_Word RightVar_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldAndArgVar_7, (MR_Integer) 1))));
    MR_Word Type_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldAndArgVar_7, (MR_Integer) 2))));
    MR_Word ModuleInfo_15;
    MR_Word Dir_16;

    ll_backend__code_info__get_module_info_2_p_0(CI_10, &ModuleInfo_15);
    ll_backend__unify_gen_util__compute_assign_direction_4_p_0(ModuleInfo_15, ArgMode_8, Type_14, &Dir_16);
    switch (Dir_16) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word LeftField_26 = (MR_Word) (MR_body((MR_Word) (LeftUniVal_12), (MR_Integer) 0));

          ll_backend__unify_gen_deconstruct__generate_deconstruct_assign_left_6_p_0(LeftField_26, RightVar_13, Code_9, CI_10, STATE_VARIABLE_CLD_0_19, STATE_VARIABLE_CLD_20);
        }
        break;
      case (MR_Integer) 1:
        {
          succeeded = ll_backend__code_loc_dep__variable_is_forward_live_2_p_0(STATE_VARIABLE_CLD_0_19, RightVar_13);
          if (succeeded)
          {
            MR_Word LeftField_18 = (MR_Word) (MR_body((MR_Word) (LeftUniVal_12), (MR_Integer) 0));

            ll_backend__unify_gen_deconstruct__generate_deconstruct_assign_right_6_p_0(LeftField_18, RightVar_13, Code_9, CI_10, STATE_VARIABLE_CLD_0_19, STATE_VARIABLE_CLD_20);
          }
          else
          {
            *Code_9 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
            *STATE_VARIABLE_CLD_20 = STATE_VARIABLE_CLD_0_19;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          *Code_9 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
          *STATE_VARIABLE_CLD_20 = STATE_VARIABLE_CLD_0_19;
        }
        break;
    }
  }
}

static void MR_CALL 
ll_backend__unify_gen_deconstruct__generate_deconstruct_assign_left_6_p_0(
  MR_Word LeftField_7,
  MR_Word RightVar_8,
  MR_Word * Code_9,
  MR_Word CI_10,
  MR_Word STATE_VARIABLE_CLD_0_49,
  MR_Word * STATE_VARIABLE_CLD_50)
{
  {
    MR_Word LeftPtag_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LeftField_7, (MR_Integer) 0))));
    MR_Word LeftBaseRval0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LeftField_7, (MR_Integer) 1))));
    MR_Integer LeftOffset_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), LeftField_7, (MR_Integer) 2))));
    MR_Word LeftWidth_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LeftField_7, (MR_Integer) 3))));
    MR_Word ProduceRightVarCode_16;
    MR_Word RightRval_17;
    MR_Word LeftBaseRval_18;
    MR_Word MaterializeLeftBaseCode_19;
    MR_Word AssignCode_23;
    MR_Word STATE_VARIABLE_CLD_51_51;
    MR_Word Var_89;

    ll_backend__code_loc_dep__produce_variable_6_p_0(RightVar_8, &ProduceRightVarCode_16, &RightRval_17, CI_10, STATE_VARIABLE_CLD_0_49, &STATE_VARIABLE_CLD_51_51);
    ll_backend__code_loc_dep__materialize_vars_in_rval_6_p_0(LeftBaseRval0_13, &LeftBaseRval_18, &MaterializeLeftBaseCode_19, CI_10, STATE_VARIABLE_CLD_51_51, STATE_VARIABLE_CLD_50);
    switch (MR_tag((MR_Word) LeftWidth_15)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          AssignCode_23 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word LeftLval_22;
          MR_Word Var_83;
          MR_Word Var_84;
          MR_Word Var_85;
          MR_Word Var_86;
          MR_Word Var_87;

          {
            Var_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_83, 0) = ((MR_Box) (LeftPtag_12));
          }
          {
            Var_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_85, 0) = ((MR_Box) (LeftOffset_14));
          }
          {
            Var_84 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_84, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), Var_84, 1) = ((MR_Box) (Var_85));
          }
          {
            LeftLval_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), LeftLval_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
            MR_hl_field(MR_mktag(3), LeftLval_22, 1) = ((MR_Box) (Var_83));
            MR_hl_field(MR_mktag(3), LeftLval_22, 2) = ((MR_Box) (LeftBaseRval_18));
            MR_hl_field(MR_mktag(3), LeftLval_22, 3) = ((MR_Box) (Var_84));
          }
          {
            Var_87 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_87, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), Var_87, 1) = ((MR_Box) (LeftLval_22));
            MR_hl_field(MR_mktag(3), Var_87, 2) = ((MR_Box) (RightRval_17));
          }
          {
            Var_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_86, 0) = ((MR_Box) (Var_87));
            MR_hl_field(MR_mktag(0), Var_86, 1) = ((MR_Box) ((MR_String) "Copy value"));
          }
          AssignCode_23 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_86)));
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word LeftLvalA_27;
          MR_Word LeftLvalB_28;
          MR_Word SrcA_29;
          MR_Word SrcB_30;
          MR_Word Var_66;
          MR_Word Var_67;
          MR_Word Var_68;
          MR_Word Var_70;
          MR_Word Var_71;
          MR_Integer Var_72;
          MR_Word Var_76;
          MR_Word Var_77;
          MR_Word Var_78;
          MR_Word Var_79;
          MR_Word Var_80;
          MR_Word Var_81;

          {
            Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_66, 0) = ((MR_Box) (LeftPtag_12));
          }
          {
            Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_68, 0) = ((MR_Box) (LeftOffset_14));
          }
          {
            Var_67 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_67, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), Var_67, 1) = ((MR_Box) (Var_68));
          }
          {
            LeftLvalA_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), LeftLvalA_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
            MR_hl_field(MR_mktag(3), LeftLvalA_27, 1) = ((MR_Box) (Var_66));
            MR_hl_field(MR_mktag(3), LeftLvalA_27, 2) = ((MR_Box) (LeftBaseRval_18));
            MR_hl_field(MR_mktag(3), LeftLvalA_27, 3) = ((MR_Box) (Var_67));
          }
          Var_72 = (MR_Integer) ((MR_Unsigned) LeftOffset_14 + (MR_Unsigned) (MR_Integer) 1);
          {
            Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_71, 0) = ((MR_Box) (Var_72));
          }
          {
            Var_70 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_70, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), Var_70, 1) = ((MR_Box) (Var_71));
          }
          {
            LeftLvalB_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), LeftLvalB_28, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
            MR_hl_field(MR_mktag(3), LeftLvalB_28, 1) = ((MR_Box) (Var_66));
            MR_hl_field(MR_mktag(3), LeftLvalB_28, 2) = ((MR_Box) (LeftBaseRval_18));
            MR_hl_field(MR_mktag(3), LeftLvalB_28, 3) = ((MR_Box) (Var_70));
          }
          {
            SrcA_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), SrcA_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(3), SrcA_29, 1) = ((MR_Box) ((MR_Unsigned) 44U));
            MR_hl_field(MR_mktag(3), SrcA_29, 2) = ((MR_Box) (RightRval_17));
          }
          {
            SrcB_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), SrcB_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(3), SrcB_30, 1) = ((MR_Box) ((MR_Unsigned) 48U));
            MR_hl_field(MR_mktag(3), SrcB_30, 2) = ((MR_Box) (RightRval_17));
          }
          {
            Var_78 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_78, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), Var_78, 1) = ((MR_Box) (LeftLvalA_27));
            MR_hl_field(MR_mktag(3), Var_78, 2) = ((MR_Box) (SrcA_29));
          }
          {
            Var_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_77, 0) = ((MR_Box) (Var_78));
            MR_hl_field(MR_mktag(0), Var_77, 1) = ((MR_Box) ((MR_String) "Update double word"));
          }
          {
            Var_81 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_81, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), Var_81, 1) = ((MR_Box) (LeftLvalB_28));
            MR_hl_field(MR_mktag(3), Var_81, 2) = ((MR_Box) (SrcB_30));
          }
          {
            Var_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_80, 0) = ((MR_Box) (Var_81));
            MR_hl_field(MR_mktag(0), Var_80, 1) = ((MR_Box) ((MR_String) "Update double word"));
          }
          {
            Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_79, 0) = ((MR_Box) (Var_80));
            MR_hl_field(MR_mktag(1), Var_79, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_76, 0) = ((MR_Box) (Var_77));
            MR_hl_field(MR_mktag(1), Var_76, 1) = ((MR_Box) (Var_79));
          }
          AssignCode_23 = mercury__cord__from_list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_76);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), LeftWidth_15, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Mask_35 = ((MR_Word) ((MR_hl_field(MR_mktag(3), LeftWidth_15, (MR_Integer) 4))));
              MR_Word Fill_36 = ((MR_Word) ((MR_hl_field(MR_mktag(3), LeftWidth_15, (MR_Integer) 5))));
              MR_Integer MaskInt_42 = (MR_Integer) (Mask_35);
              MR_Word ComplementMask_43;
              MR_Word MaskOld_44;
              MR_Word ShiftedRightRval_45;
              MR_Word CombinedRval_46;
              MR_Word Var_54;
              MR_Word Var_55;
              MR_Word Var_56;
              MR_Word Var_57;
              MR_Integer Var_58;
              MR_Integer Var_59;
              MR_Word Var_62;
              MR_Word Var_63;
              MR_Word Var_64;
              MR_Word LeftLval_90;

              {
                Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (LeftPtag_12));
              }
              {
                Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (LeftOffset_14));
              }
              {
                Var_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_55, 1) = ((MR_Box) (Var_56));
              }
              {
                LeftLval_90 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), LeftLval_90, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
                MR_hl_field(MR_mktag(3), LeftLval_90, 1) = ((MR_Box) (Var_54));
                MR_hl_field(MR_mktag(3), LeftLval_90, 2) = ((MR_Box) (LeftBaseRval_18));
                MR_hl_field(MR_mktag(3), LeftLval_90, 3) = ((MR_Box) (Var_55));
              }
              Var_59 = mercury__int__f_60_60_2_f_0(MaskInt_42, (MR_Integer) 0);
              Var_58 = ~(Var_59);
              {
                Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) (Var_58));
              }
              {
                ComplementMask_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ComplementMask_43, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), ComplementMask_43, 1) = ((MR_Box) (Var_57));
              }
              {
                Var_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_62, 0) = ((MR_Box) (LeftLval_90));
              }
              {
                MaskOld_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), MaskOld_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), MaskOld_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_deconstruct_scalar_common_1[1])));
                MR_hl_field(MR_mktag(3), MaskOld_44, 2) = ((MR_Box) (Var_62));
                MR_hl_field(MR_mktag(3), MaskOld_44, 3) = ((MR_Box) (ComplementMask_43));
              }
              ShiftedRightRval_45 = ll_backend__unify_gen_util__left_shift_rval_3_f_0(RightRval_17, (MR_Word) (((MR_Box) ((MR_Integer) 0))), Fill_36);
              CombinedRval_46 = ll_backend__unify_gen_util__or_two_rvals_2_f_0(MaskOld_44, ShiftedRightRval_45);
              {
                Var_64 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_64, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_64, 1) = ((MR_Box) (LeftLval_90));
                MR_hl_field(MR_mktag(3), Var_64, 2) = ((MR_Box) (CombinedRval_46));
              }
              {
                Var_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_63, 0) = ((MR_Box) (Var_64));
                MR_hl_field(MR_mktag(0), Var_63, 1) = ((MR_Box) ((MR_String) "Update part of word"));
              }
              AssignCode_23 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_63)));
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Mask_96 = ((MR_Word) ((MR_hl_field(MR_mktag(3), LeftWidth_15, (MR_Integer) 5))));
              MR_Word Fill_97 = ((MR_Word) ((MR_hl_field(MR_mktag(3), LeftWidth_15, (MR_Integer) 6))));
              MR_Word Shift_98 = ((MR_Word) ((MR_hl_field(MR_mktag(3), LeftWidth_15, (MR_Integer) 3))));
              MR_Integer ShiftInt_99 = (MR_Integer) (Shift_98);
              MR_Integer MaskInt_100 = (MR_Integer) (Mask_96);
              MR_Word ComplementMask_101;
              MR_Word MaskOld_102;
              MR_Word ShiftedRightRval_103;
              MR_Word CombinedRval_104;
              MR_Word Var_105;
              MR_Word Var_106;
              MR_Word Var_107;
              MR_Word Var_108;
              MR_Integer Var_109;
              MR_Integer Var_110;
              MR_Word Var_113;
              MR_Word Var_114;
              MR_Word Var_115;
              MR_Word LeftLval_117;

              {
                Var_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_105, 0) = ((MR_Box) (LeftPtag_12));
              }
              {
                Var_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_107, 0) = ((MR_Box) (LeftOffset_14));
              }
              {
                Var_106 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_106, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_106, 1) = ((MR_Box) (Var_107));
              }
              {
                LeftLval_117 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), LeftLval_117, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
                MR_hl_field(MR_mktag(3), LeftLval_117, 1) = ((MR_Box) (Var_105));
                MR_hl_field(MR_mktag(3), LeftLval_117, 2) = ((MR_Box) (LeftBaseRval_18));
                MR_hl_field(MR_mktag(3), LeftLval_117, 3) = ((MR_Box) (Var_106));
              }
              Var_110 = mercury__int__f_60_60_2_f_0(MaskInt_100, ShiftInt_99);
              Var_109 = ~(Var_110);
              {
                Var_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_108, 0) = ((MR_Box) (Var_109));
              }
              {
                ComplementMask_101 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ComplementMask_101, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), ComplementMask_101, 1) = ((MR_Box) (Var_108));
              }
              {
                Var_113 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_113, 0) = ((MR_Box) (LeftLval_117));
              }
              {
                MaskOld_102 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), MaskOld_102, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), MaskOld_102, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_deconstruct_scalar_common_1[1])));
                MR_hl_field(MR_mktag(3), MaskOld_102, 2) = ((MR_Box) (Var_113));
                MR_hl_field(MR_mktag(3), MaskOld_102, 3) = ((MR_Box) (ComplementMask_101));
              }
              ShiftedRightRval_103 = ll_backend__unify_gen_util__left_shift_rval_3_f_0(RightRval_17, Shift_98, Fill_97);
              CombinedRval_104 = ll_backend__unify_gen_util__or_two_rvals_2_f_0(MaskOld_102, ShiftedRightRval_103);
              {
                Var_115 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_115, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_115, 1) = ((MR_Box) (LeftLval_117));
                MR_hl_field(MR_mktag(3), Var_115, 2) = ((MR_Box) (CombinedRval_104));
              }
              {
                Var_114 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_114, 0) = ((MR_Box) (Var_115));
                MR_hl_field(MR_mktag(0), Var_114, 1) = ((MR_Box) ((MR_String) "Update part of word"));
              }
              AssignCode_23 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_114)));
            }
            break;
          case (MR_Integer) 2:
            {
              AssignCode_23 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
            }
            break;
        }
        break;
    }
    Var_89 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), MaterializeLeftBaseCode_19, AssignCode_23);
    *Code_9 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ProduceRightVarCode_16, Var_89);
  }
}

static void MR_CALL 
ll_backend__unify_gen_deconstruct__generate_deconstruct_assign_right_6_p_0(
  MR_Word RightField_7,
  MR_Word LeftVar_8,
  MR_Word * Code_9,
  MR_Word CI_10,
  MR_Word STATE_VARIABLE_CLD_0_40,
  MR_Word * STATE_VARIABLE_CLD_41)
{
  {
    MR_Word RightPtag_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RightField_7, (MR_Integer) 0))));
    MR_Word RightBaseRval_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RightField_7, (MR_Integer) 1))));
    MR_Integer RightOffset_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), RightField_7, (MR_Integer) 2))));
    MR_Word RightWidth_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RightField_7, (MR_Integer) 3))));

    switch (MR_tag((MR_Word) RightWidth_15)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *Code_9 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
          *STATE_VARIABLE_CLD_41 = STATE_VARIABLE_CLD_0_40;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word RightLval_18;
          MR_Word Var_71;
          MR_Word Var_72;
          MR_Word Var_73;

          {
            Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_71, 0) = ((MR_Box) (RightPtag_12));
          }
          {
            Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_73, 0) = ((MR_Box) (RightOffset_14));
          }
          {
            Var_72 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_72, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), Var_72, 1) = ((MR_Box) (Var_73));
          }
          {
            RightLval_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), RightLval_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
            MR_hl_field(MR_mktag(3), RightLval_18, 1) = ((MR_Box) (Var_71));
            MR_hl_field(MR_mktag(3), RightLval_18, 2) = ((MR_Box) (RightBaseRval_13));
            MR_hl_field(MR_mktag(3), RightLval_18, 3) = ((MR_Box) (Var_72));
          }
          ll_backend__code_loc_dep__assign_lval_to_var_6_p_0(LeftVar_8, RightLval_18, Code_9, CI_10, STATE_VARIABLE_CLD_0_40, STATE_VARIABLE_CLD_41);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word RightLvalA_22;
          MR_Word RightLvalB_23;
          MR_Word RightRval_24;
          MR_Word Var_56;
          MR_Word Var_57;
          MR_Word Var_58;
          MR_Word Var_60;
          MR_Word Var_61;
          MR_Integer Var_62;
          MR_Word Var_65;
          MR_Word Var_66;
          MR_Word Var_67;
          MR_Word Var_69;

          {
            Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (RightPtag_12));
          }
          {
            Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (RightOffset_14));
          }
          {
            Var_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_57, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), Var_57, 1) = ((MR_Box) (Var_58));
          }
          {
            RightLvalA_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), RightLvalA_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
            MR_hl_field(MR_mktag(3), RightLvalA_22, 1) = ((MR_Box) (Var_56));
            MR_hl_field(MR_mktag(3), RightLvalA_22, 2) = ((MR_Box) (RightBaseRval_13));
            MR_hl_field(MR_mktag(3), RightLvalA_22, 3) = ((MR_Box) (Var_57));
          }
          Var_62 = (MR_Integer) ((MR_Unsigned) RightOffset_14 + (MR_Unsigned) (MR_Integer) 1);
          {
            Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_61, 0) = ((MR_Box) (Var_62));
          }
          {
            Var_60 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_60, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), Var_60, 1) = ((MR_Box) (Var_61));
          }
          {
            RightLvalB_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), RightLvalB_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
            MR_hl_field(MR_mktag(3), RightLvalB_23, 1) = ((MR_Box) (Var_56));
            MR_hl_field(MR_mktag(3), RightLvalB_23, 2) = ((MR_Box) (RightBaseRval_13));
            MR_hl_field(MR_mktag(3), RightLvalB_23, 3) = ((MR_Box) (Var_60));
          }
          {
            Var_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_65, 0) = ((MR_Box) (RightLvalA_22));
          }
          {
            Var_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_66, 0) = ((MR_Box) (RightLvalB_23));
          }
          {
            RightRval_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), RightRval_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
            MR_hl_field(MR_mktag(3), RightRval_24, 1) = ((MR_Box) ((MR_Unsigned) 88U));
            MR_hl_field(MR_mktag(3), RightRval_24, 2) = ((MR_Box) (Var_65));
            MR_hl_field(MR_mktag(3), RightRval_24, 3) = ((MR_Box) (Var_66));
          }
          {
            Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) (RightLvalB_23));
            MR_hl_field(MR_mktag(1), Var_69, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) (RightLvalA_22));
            MR_hl_field(MR_mktag(1), Var_67, 1) = ((MR_Box) (Var_69));
          }
          ll_backend__code_loc_dep__assign_field_lval_expr_to_var_6_p_0(LeftVar_8, Var_67, RightRval_24, Code_9, STATE_VARIABLE_CLD_0_40, STATE_VARIABLE_CLD_41);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), RightWidth_15, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Mask_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), RightWidth_15, (MR_Integer) 4))));
              MR_Word Fill_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), RightWidth_15, (MR_Integer) 5))));
              MR_Word RightRval0_30;
              MR_Integer MaskInt_35;
              MR_Word MaskedRightRval0_36;
              MR_Word MaskedRightRval_37;
              MR_Word Var_46;
              MR_Word Var_47;
              MR_Word Var_48;
              MR_Word Var_51;
              MR_Word Var_52;
              MR_Word Var_53;
              MR_Word RightLval_75;

              {
                Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (RightPtag_12));
              }
              {
                Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) (RightOffset_14));
              }
              {
                Var_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_47, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_47, 1) = ((MR_Box) (Var_48));
              }
              {
                RightLval_75 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), RightLval_75, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
                MR_hl_field(MR_mktag(3), RightLval_75, 1) = ((MR_Box) (Var_46));
                MR_hl_field(MR_mktag(3), RightLval_75, 2) = ((MR_Box) (RightBaseRval_13));
                MR_hl_field(MR_mktag(3), RightLval_75, 3) = ((MR_Box) (Var_47));
              }
              {
                RightRval0_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), RightRval0_30, 0) = ((MR_Box) (RightLval_75));
              }
              MaskInt_35 = (MR_Integer) (Mask_28);
              {
                Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (MaskInt_35));
              }
              {
                Var_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_51, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_51, 1) = ((MR_Box) (Var_52));
              }
              {
                MaskedRightRval0_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), MaskedRightRval0_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), MaskedRightRval0_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_deconstruct_scalar_common_1[1])));
                MR_hl_field(MR_mktag(3), MaskedRightRval0_36, 2) = ((MR_Box) (RightRval0_30));
                MR_hl_field(MR_mktag(3), MaskedRightRval0_36, 3) = ((MR_Box) (Var_51));
              }
              ll_backend__unify_gen_util__maybe_cast_masked_off_rval_3_p_0(Fill_29, MaskedRightRval0_36, &MaskedRightRval_37);
              {
                Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (RightLval_75));
                MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              ll_backend__code_loc_dep__assign_field_lval_expr_to_var_6_p_0(LeftVar_8, Var_53, MaskedRightRval_37, Code_9, STATE_VARIABLE_CLD_0_40, STATE_VARIABLE_CLD_41);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Shift_33 = ((MR_Word) ((MR_hl_field(MR_mktag(3), RightWidth_15, (MR_Integer) 3))));
              MR_Word Var_42;
              MR_Word Var_43;
              MR_Word Var_44;
              MR_Word Var_45;
              MR_Word Mask_77 = ((MR_Word) ((MR_hl_field(MR_mktag(3), RightWidth_15, (MR_Integer) 5))));
              MR_Word Fill_78 = ((MR_Word) ((MR_hl_field(MR_mktag(3), RightWidth_15, (MR_Integer) 6))));
              MR_Word RightRval0_79;
              MR_Integer MaskInt_80;
              MR_Word MaskedRightRval0_81;
              MR_Word MaskedRightRval_82;
              MR_Word Var_85;
              MR_Word Var_86;
              MR_Word Var_87;
              MR_Word RightLval_89;

              {
                Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (RightPtag_12));
              }
              {
                Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (RightOffset_14));
              }
              {
                Var_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_43, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_43, 1) = ((MR_Box) (Var_44));
              }
              {
                RightLval_89 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), RightLval_89, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
                MR_hl_field(MR_mktag(3), RightLval_89, 1) = ((MR_Box) (Var_42));
                MR_hl_field(MR_mktag(3), RightLval_89, 2) = ((MR_Box) (RightBaseRval_13));
                MR_hl_field(MR_mktag(3), RightLval_89, 3) = ((MR_Box) (Var_43));
              }
              {
                Var_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_45, 0) = ((MR_Box) (RightLval_89));
              }
              RightRval0_79 = ll_backend__unify_gen_util__right_shift_rval_2_f_0(Var_45, Shift_33);
              MaskInt_80 = (MR_Integer) (Mask_77);
              {
                Var_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_86, 0) = ((MR_Box) (MaskInt_80));
              }
              {
                Var_85 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_85, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_85, 1) = ((MR_Box) (Var_86));
              }
              {
                MaskedRightRval0_81 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), MaskedRightRval0_81, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), MaskedRightRval0_81, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_deconstruct_scalar_common_1[1])));
                MR_hl_field(MR_mktag(3), MaskedRightRval0_81, 2) = ((MR_Box) (RightRval0_79));
                MR_hl_field(MR_mktag(3), MaskedRightRval0_81, 3) = ((MR_Box) (Var_85));
              }
              ll_backend__unify_gen_util__maybe_cast_masked_off_rval_3_p_0(Fill_78, MaskedRightRval0_81, &MaskedRightRval_82);
              {
                Var_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_87, 0) = ((MR_Box) (RightLval_89));
                MR_hl_field(MR_mktag(1), Var_87, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              ll_backend__code_loc_dep__assign_field_lval_expr_to_var_6_p_0(LeftVar_8, Var_87, MaskedRightRval_82, Code_9, STATE_VARIABLE_CLD_0_40, STATE_VARIABLE_CLD_41);
            }
            break;
          case (MR_Integer) 2:
            {
              *Code_9 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
              *STATE_VARIABLE_CLD_41 = STATE_VARIABLE_CLD_0_40;
            }
            break;
        }
        break;
    }
  }
}

void MR_CALL 
ll_backend__unify_gen_deconstruct__generate_deconstruct_unify_arg_6_p_0(
  MR_Word FieldAndArgVar_7,
  MR_Word ArgMode_8,
  MR_Word * Code_9,
  MR_Word CI_10,
  MR_Word STATE_VARIABLE_CLD_0_19,
  MR_Word * STATE_VARIABLE_CLD_20)
{
  {
    MR_bool succeeded;
    MR_Word LeftUniVal_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldAndArgVar_7, (MR_Integer) 0))));
    MR_Word RightVar_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldAndArgVar_7, (MR_Integer) 1))));
    MR_Word Type_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldAndArgVar_7, (MR_Integer) 2))));
    MR_Word ModuleInfo_15;
    MR_Word Dir_16;

    ll_backend__code_info__get_module_info_2_p_0(CI_10, &ModuleInfo_15);
    ll_backend__unify_gen_util__compute_assign_direction_4_p_0(ModuleInfo_15, ArgMode_8, Type_14, &Dir_16);
    switch (Dir_16) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word LeftVar_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LeftUniVal_12, (MR_Integer) 0))));

          succeeded = ll_backend__code_loc_dep__variable_is_forward_live_2_p_0(STATE_VARIABLE_CLD_0_19, LeftVar_25);
          if (succeeded)
            ll_backend__code_loc_dep__assign_var_to_var_4_p_0(LeftVar_25, RightVar_13, STATE_VARIABLE_CLD_0_19, STATE_VARIABLE_CLD_20);
          else
            *STATE_VARIABLE_CLD_20 = STATE_VARIABLE_CLD_0_19;
          *Code_9 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
        }
        break;
      case (MR_Integer) 1:
        {
          succeeded = ll_backend__code_loc_dep__variable_is_forward_live_2_p_0(STATE_VARIABLE_CLD_0_19, RightVar_13);
          if (succeeded)
          {
            MR_Word LeftVar_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LeftUniVal_12, (MR_Integer) 0))));

            ll_backend__code_loc_dep__assign_var_to_var_4_p_0(RightVar_13, LeftVar_17, STATE_VARIABLE_CLD_0_19, STATE_VARIABLE_CLD_20);
            *Code_9 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
          }
          else
          {
            *Code_9 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
            *STATE_VARIABLE_CLD_20 = STATE_VARIABLE_CLD_0_19;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          *Code_9 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
          *STATE_VARIABLE_CLD_20 = STATE_VARIABLE_CLD_0_19;
        }
        break;
    }
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen_deconstruct____Unify____field_and_arg_var_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ll_backend__unify_gen_deconstruct____Unify____field_and_arg_var_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__unify_gen_deconstruct____Compare____field_and_arg_var_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ll_backend__unify_gen_deconstruct____Compare____field_and_arg_var_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen_deconstruct____Unify____uni_field_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ll_backend__unify_gen_deconstruct____Unify____uni_field_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__unify_gen_deconstruct____Compare____uni_field_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ll_backend__unify_gen_deconstruct____Compare____uni_field_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen_deconstruct____Unify____uni_val_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ll_backend__unify_gen_deconstruct____Unify____uni_val_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__unify_gen_deconstruct____Compare____uni_val_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ll_backend__unify_gen_deconstruct____Compare____uni_val_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__ll_backend__unify_gen_deconstruct__init(void)
{
}

void mercury__ll_backend__unify_gen_deconstruct__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&ll_backend__unify_gen_deconstruct__ll_backend__unify_gen_deconstruct__type_ctor_info_field_and_arg_var_0);
	MR_register_type_ctor_info(&ll_backend__unify_gen_deconstruct__ll_backend__unify_gen_deconstruct__type_ctor_info_uni_field_0);
	MR_register_type_ctor_info(&ll_backend__unify_gen_deconstruct__ll_backend__unify_gen_deconstruct__type_ctor_info_uni_val_0);
}

void mercury__ll_backend__unify_gen_deconstruct__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ll_backend__unify_gen_deconstruct__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module ll_backend.unify_gen_deconstruct.
