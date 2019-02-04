/*
** Automatically generated from `parse_string_format.m'
** by the Mercury compiler,
** version rotd-2018-08-01
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


// :- module check_hlds.simplify.format_call.parse_string_format.
// :- implementation.

/*
INIT mercury__check_hlds__simplify__format_call__parse_string_format__init
ENDINIT
*/

#include "check_hlds.simplify.format_call.parse_string_format.mih"


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
#include "check_hlds.proc_requests.mih"
#include "check_hlds.simplify.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.goal_path.mih"
#include "hlds.goal_util.mih"
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
#include "hlds.make_goal.mih"
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
#include "mdbcomp.builtin_modules.mih"
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
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.builtin_lib_types.mih"
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
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "check_hlds.simplify.common.mih"
#include "check_hlds.simplify.format_call.mih"
#include "check_hlds.simplify.simplify_goal_call.mih"
#include "check_hlds.simplify.simplify_info.mih"
#include "check_hlds.simplify.simplify_tasks.mih"
#include "hlds.hlds_out.hlds_out_goal.mih"
#include "hlds.hlds_out.hlds_out_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "string.parse_util.mih"




static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__format_call__parse_string_format__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_PseudoTypeInfo check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__field_types_abstract_poly_type_0_0[2];

static const MR_DuFunctorDesc check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_abstract_poly_type_0_0;

static const MR_PseudoTypeInfo check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__field_types_abstract_poly_type_0_1[2];

static const MR_DuFunctorDesc check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_abstract_poly_type_0_1;

static const MR_PseudoTypeInfo check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__field_types_abstract_poly_type_0_2[2];

static const MR_DuFunctorDesc check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_abstract_poly_type_0_2;

static const MR_PseudoTypeInfo check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__field_types_abstract_poly_type_0_3[2];

static const MR_DuFunctorDesc check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_abstract_poly_type_0_3;

static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_stag_ordered_abstract_poly_type_0_0[1];

static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_stag_ordered_abstract_poly_type_0_1[1];

static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_stag_ordered_abstract_poly_type_0_2[1];

static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_stag_ordered_abstract_poly_type_0_3[1];

static const MR_DuPtagLayout check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_ptag_ordered_abstract_poly_type_0[4];

static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_name_ordered_abstract_poly_type_0[4];

static const MR_Integer check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__functor_number_map_abstract_poly_type_0[4];

static const MR_DuFunctorDesc check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_compiler_format_maybe_prec_0_0;

static const MR_PseudoTypeInfo check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__field_types_compiler_format_maybe_prec_0_1[1];

static const MR_DuFunctorDesc check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_compiler_format_maybe_prec_0_1;

static const MR_PseudoTypeInfo check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__field_types_compiler_format_maybe_prec_0_2[1];

static const MR_DuFunctorDesc check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_compiler_format_maybe_prec_0_2;

static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_stag_ordered_compiler_format_maybe_prec_0_0[1];

static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_stag_ordered_compiler_format_maybe_prec_0_1[1];

static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_stag_ordered_compiler_format_maybe_prec_0_2[1];

static const MR_DuPtagLayout check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_ptag_ordered_compiler_format_maybe_prec_0[3];

static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_name_ordered_compiler_format_maybe_prec_0[3];

static const MR_Integer check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__functor_number_map_compiler_format_maybe_prec_0[3];

static const MR_DuFunctorDesc check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_compiler_format_maybe_width_0_0;

static const MR_PseudoTypeInfo check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__field_types_compiler_format_maybe_width_0_1[1];

static const MR_DuFunctorDesc check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_compiler_format_maybe_width_0_1;

static const MR_PseudoTypeInfo check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__field_types_compiler_format_maybe_width_0_2[1];

static const MR_DuFunctorDesc check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_compiler_format_maybe_width_0_2;

static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_stag_ordered_compiler_format_maybe_width_0_0[1];

static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_stag_ordered_compiler_format_maybe_width_0_1[1];

static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_stag_ordered_compiler_format_maybe_width_0_2[1];

static const MR_DuPtagLayout check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_ptag_ordered_compiler_format_maybe_width_0[3];

static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_name_ordered_compiler_format_maybe_width_0[3];

static const MR_Integer check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__functor_number_map_compiler_format_maybe_width_0[3];

static const MR_PseudoTypeInfo check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__field_types_compiler_format_spec_0_0[2];

static const MR_DuFunctorDesc check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_compiler_format_spec_0_0;

static const MR_PseudoTypeInfo check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__field_types_compiler_format_spec_0_1[4];

static const MR_DuFunctorDesc check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_compiler_format_spec_0_1;

static const MR_PseudoTypeInfo check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__field_types_compiler_format_spec_0_2[5];

static const MR_DuFunctorDesc check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_compiler_format_spec_0_2;

static const MR_PseudoTypeInfo check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__field_types_compiler_format_spec_0_3[5];

static const MR_DuFunctorDesc check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_compiler_format_spec_0_3;

static const MR_PseudoTypeInfo check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__field_types_compiler_format_spec_0_4[6];

static const MR_DuFunctorDesc check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_compiler_format_spec_0_4;

static const MR_PseudoTypeInfo check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__field_types_compiler_format_spec_0_5[6];

static const MR_DuFunctorDesc check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_compiler_format_spec_0_5;

static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_stag_ordered_compiler_format_spec_0_0[1];

static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_stag_ordered_compiler_format_spec_0_1[1];

static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_stag_ordered_compiler_format_spec_0_2[1];

static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_stag_ordered_compiler_format_spec_0_3[3];

static const MR_DuPtagLayout check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_ptag_ordered_compiler_format_spec_0[4];

static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_name_ordered_compiler_format_spec_0[6];

static const MR_Integer check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__functor_number_map_compiler_format_spec_0[6];

static void MR_CALL 
check_hlds__simplify__format_call__parse_string_format__compiler_parse_format_string_6_p_0(
  MR_Word STATE_VARIABLE_Chars_0_29,
  MR_Word STATE_VARIABLE_PolyTypes_0_30,
  MR_Word Context_9,
  MR_Integer SpecNum_10,
  MR_Word * Specs_11,
  MR_Word * Errors_12);

static void MR_CALL 
check_hlds__simplify__format_call__parse_string_format__parse_conversion_specification_8_p_0(
  MR_Word STATE_VARIABLE_Chars_0_22,
  MR_Word * STATE_VARIABLE_Chars_23,
  MR_Word STATE_VARIABLE_PolyTypes_0_24,
  MR_Word * STATE_VARIABLE_PolyTypes_25,
  MR_Word Context_11,
  MR_Integer SpecNum_12,
  MR_Word * Spec_13,
  MR_Word * Errors_14);

static void MR_CALL 
check_hlds__simplify__format_call__parse_string_format__get_first_spec_11_p_0(
  MR_Word STATE_VARIABLE_Chars_0_1,
  MR_Word * STATE_VARIABLE_Chars_2,
  MR_Word STATE_VARIABLE_PolyTypes_0_3,
  MR_Word * STATE_VARIABLE_PolyTypes_4,
  MR_Word OverallContext_5,
  MR_Word HeadVar__6_6,
  MR_Word HeadVar__7_7,
  MR_Word HeadVar__8_8,
  MR_Integer SpecNum_9,
  MR_Word * Spec_10,
  MR_Word * Errors_11);

static MR_Word MR_CALL 
check_hlds__simplify__format_call__parse_string_format__abstract_poly_type_to_kind_1_f_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
check_hlds__simplify__format_call__parse_string_format__get_optional_prec_7_p_0(
  MR_Word STATE_VARIABLE_Chars_0_17,
  MR_Word * STATE_VARIABLE_Chars_18,
  MR_Word STATE_VARIABLE_PolyTypes_0_19,
  MR_Word * STATE_VARIABLE_PolyTypes_20,
  MR_Integer SpecNum_10,
  MR_Word * MaybePrec_11,
  MR_Word * Errors_12);

static void MR_CALL 
check_hlds__simplify__format_call__parse_string_format__merge_adjacent_const_strs_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static MR_bool MR_CALL 
check_hlds__simplify__format_call__parse_string_format____Unify____abstract_poly_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__simplify__format_call__parse_string_format____Compare____abstract_poly_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__simplify__format_call__parse_string_format____Unify____compiler_format_maybe_prec_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__simplify__format_call__parse_string_format____Compare____compiler_format_maybe_prec_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__simplify__format_call__parse_string_format____Unify____compiler_format_maybe_width_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__simplify__format_call__parse_string_format____Compare____compiler_format_maybe_width_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__simplify__format_call__parse_string_format____Unify____compiler_format_spec_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__simplify__format_call__parse_string_format____Compare____compiler_format_spec_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box check_hlds__simplify__format_call__parse_string_format_scalar_common_1[1][2];

static /* final */ const MR_Box check_hlds__simplify__format_call__parse_string_format_scalar_common_2[1][1];




static /* final */ const MR_Box check_hlds__simplify__format_call__parse_string_format_scalar_common_1[1][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box check_hlds__simplify__format_call__parse_string_format_scalar_common_2[1][1] = {
  /* row 0 */
  {
    (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << (MR_Integer) 4)) | (((((MR_Unsigned) ((MR_Integer) 0) << (MR_Integer) 3)) | (((((MR_Unsigned) ((MR_Integer) 0) << (MR_Integer) 2)) | (((((MR_Unsigned) ((MR_Integer) 0) << (MR_Integer) 1)) | (MR_Unsigned) ((MR_Integer) 0)))))))))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__format_call__parse_string_format__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_PseudoTypeInfo check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__field_types_abstract_poly_type_0_0[2] = {
  (MR_PseudoTypeInfo) (&check_hlds__simplify__format_call__parse_string_format__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_context_0)
};

static const MR_DuFunctorDesc check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_abstract_poly_type_0_0 = {
  (MR_String) "apt_f",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__field_types_abstract_poly_type_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__field_types_abstract_poly_type_0_1[2] = {
  (MR_PseudoTypeInfo) (&check_hlds__simplify__format_call__parse_string_format__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_context_0)
};

static const MR_DuFunctorDesc check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_abstract_poly_type_0_1 = {
  (MR_String) "apt_i",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__field_types_abstract_poly_type_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__field_types_abstract_poly_type_0_2[2] = {
  (MR_PseudoTypeInfo) (&check_hlds__simplify__format_call__parse_string_format__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_context_0)
};

static const MR_DuFunctorDesc check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_abstract_poly_type_0_2 = {
  (MR_String) "apt_s",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__field_types_abstract_poly_type_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__field_types_abstract_poly_type_0_3[2] = {
  (MR_PseudoTypeInfo) (&check_hlds__simplify__format_call__parse_string_format__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_context_0)
};

static const MR_DuFunctorDesc check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_abstract_poly_type_0_3 = {
  (MR_String) "apt_c",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 3,
  (MR_Integer) -1,
  (MR_Integer) 3,
  check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__field_types_abstract_poly_type_0_3,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_stag_ordered_abstract_poly_type_0_0[1] = {
  &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_abstract_poly_type_0_0
};

static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_stag_ordered_abstract_poly_type_0_1[1] = {
  &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_abstract_poly_type_0_1
};

static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_stag_ordered_abstract_poly_type_0_2[1] = {
  &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_abstract_poly_type_0_2
};

static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_stag_ordered_abstract_poly_type_0_3[1] = {
  &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_abstract_poly_type_0_3
};

static const MR_DuPtagLayout check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_ptag_ordered_abstract_poly_type_0[4] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_stag_ordered_abstract_poly_type_0_0,
    INT8_C(-1)
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_stag_ordered_abstract_poly_type_0_1,
    INT8_C(-1)
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_stag_ordered_abstract_poly_type_0_2,
    INT8_C(-1)
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_stag_ordered_abstract_poly_type_0_3,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_name_ordered_abstract_poly_type_0[4] = {
  &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_abstract_poly_type_0_3,
  &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_abstract_poly_type_0_0,
  &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_abstract_poly_type_0_1,
  &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_abstract_poly_type_0_2
};

static const MR_Integer check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__functor_number_map_abstract_poly_type_0[4] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__type_ctor_info_abstract_poly_type_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 4,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__simplify__format_call__parse_string_format____Unify____abstract_poly_type_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__format_call__parse_string_format____Compare____abstract_poly_type_0_0_10001)),
  (MR_String) "check_hlds.simplify.format_call.parse_string_format",
  (MR_String) "abstract_poly_type",
  {     check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_name_ordered_abstract_poly_type_0 },
  {     check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_ptag_ordered_abstract_poly_type_0 },
  (MR_Integer) 4,
  (MR_Integer) 4,
  check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__functor_number_map_abstract_poly_type_0
};

static const MR_DuFunctorDesc check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_compiler_format_maybe_prec_0_0 = {
  (MR_String) "compiler_no_specified_prec",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL_REST_OF_WORD,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__field_types_compiler_format_maybe_prec_0_1[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_compiler_format_maybe_prec_0_1 = {
  (MR_String) "compiler_manifest_prec",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__field_types_compiler_format_maybe_prec_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__field_types_compiler_format_maybe_prec_0_2[1] = {
  (MR_PseudoTypeInfo) (&check_hlds__simplify__format_call__parse_string_format__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
};

static const MR_DuFunctorDesc check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_compiler_format_maybe_prec_0_2 = {
  (MR_String) "compiler_var_prec",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__field_types_compiler_format_maybe_prec_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_stag_ordered_compiler_format_maybe_prec_0_0[1] = {
  &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_compiler_format_maybe_prec_0_0
};

static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_stag_ordered_compiler_format_maybe_prec_0_1[1] = {
  &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_compiler_format_maybe_prec_0_1
};

static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_stag_ordered_compiler_format_maybe_prec_0_2[1] = {
  &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_compiler_format_maybe_prec_0_2
};

static const MR_DuPtagLayout check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_ptag_ordered_compiler_format_maybe_prec_0[3] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_LOCAL_REST_OF_WORD,
    check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_stag_ordered_compiler_format_maybe_prec_0_0,
    INT8_C(-1)
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_stag_ordered_compiler_format_maybe_prec_0_1,
    INT8_C(-1)
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_stag_ordered_compiler_format_maybe_prec_0_2,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_name_ordered_compiler_format_maybe_prec_0[3] = {
  &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_compiler_format_maybe_prec_0_1,
  &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_compiler_format_maybe_prec_0_0,
  &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_compiler_format_maybe_prec_0_2
};

static const MR_Integer check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__functor_number_map_compiler_format_maybe_prec_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__type_ctor_info_compiler_format_maybe_prec_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 3,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__simplify__format_call__parse_string_format____Unify____compiler_format_maybe_prec_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__format_call__parse_string_format____Compare____compiler_format_maybe_prec_0_0_10001)),
  (MR_String) "check_hlds.simplify.format_call.parse_string_format",
  (MR_String) "compiler_format_maybe_prec",
  {     check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_name_ordered_compiler_format_maybe_prec_0 },
  {     check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_ptag_ordered_compiler_format_maybe_prec_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__functor_number_map_compiler_format_maybe_prec_0
};

static const MR_DuFunctorDesc check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_compiler_format_maybe_width_0_0 = {
  (MR_String) "compiler_no_specified_width",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL_REST_OF_WORD,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__field_types_compiler_format_maybe_width_0_1[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_compiler_format_maybe_width_0_1 = {
  (MR_String) "compiler_manifest_width",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__field_types_compiler_format_maybe_width_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__field_types_compiler_format_maybe_width_0_2[1] = {
  (MR_PseudoTypeInfo) (&check_hlds__simplify__format_call__parse_string_format__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
};

static const MR_DuFunctorDesc check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_compiler_format_maybe_width_0_2 = {
  (MR_String) "compiler_var_width",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__field_types_compiler_format_maybe_width_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_stag_ordered_compiler_format_maybe_width_0_0[1] = {
  &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_compiler_format_maybe_width_0_0
};

static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_stag_ordered_compiler_format_maybe_width_0_1[1] = {
  &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_compiler_format_maybe_width_0_1
};

static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_stag_ordered_compiler_format_maybe_width_0_2[1] = {
  &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_compiler_format_maybe_width_0_2
};

static const MR_DuPtagLayout check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_ptag_ordered_compiler_format_maybe_width_0[3] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_LOCAL_REST_OF_WORD,
    check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_stag_ordered_compiler_format_maybe_width_0_0,
    INT8_C(-1)
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_stag_ordered_compiler_format_maybe_width_0_1,
    INT8_C(-1)
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_stag_ordered_compiler_format_maybe_width_0_2,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_name_ordered_compiler_format_maybe_width_0[3] = {
  &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_compiler_format_maybe_width_0_1,
  &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_compiler_format_maybe_width_0_0,
  &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_compiler_format_maybe_width_0_2
};

static const MR_Integer check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__functor_number_map_compiler_format_maybe_width_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__type_ctor_info_compiler_format_maybe_width_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 3,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__simplify__format_call__parse_string_format____Unify____compiler_format_maybe_width_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__format_call__parse_string_format____Compare____compiler_format_maybe_width_0_0_10001)),
  (MR_String) "check_hlds.simplify.format_call.parse_string_format",
  (MR_String) "compiler_format_maybe_width",
  {     check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_name_ordered_compiler_format_maybe_width_0 },
  {     check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_ptag_ordered_compiler_format_maybe_width_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__functor_number_map_compiler_format_maybe_width_0
};

static const MR_PseudoTypeInfo check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__field_types_compiler_format_spec_0_0[2] = {
  (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_context_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_compiler_format_spec_0_0 = {
  (MR_String) "compiler_const_string",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__field_types_compiler_format_spec_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__field_types_compiler_format_spec_0_1[4] = {
  (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_context_0),
  (MR_PseudoTypeInfo) (&mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_flags_0),
  (MR_PseudoTypeInfo) (&check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__type_ctor_info_compiler_format_maybe_width_0),
  (MR_PseudoTypeInfo) (&check_hlds__simplify__format_call__parse_string_format__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
};

static const MR_DuFunctorDesc check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_compiler_format_spec_0_1 = {
  (MR_String) "compiler_spec_char",
  (MR_Integer) 4,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__field_types_compiler_format_spec_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__field_types_compiler_format_spec_0_2[5] = {
  (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_context_0),
  (MR_PseudoTypeInfo) (&mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_flags_0),
  (MR_PseudoTypeInfo) (&check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__type_ctor_info_compiler_format_maybe_width_0),
  (MR_PseudoTypeInfo) (&check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__type_ctor_info_compiler_format_maybe_prec_0),
  (MR_PseudoTypeInfo) (&check_hlds__simplify__format_call__parse_string_format__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
};

static const MR_DuFunctorDesc check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_compiler_format_spec_0_2 = {
  (MR_String) "compiler_spec_string",
  (MR_Integer) 5,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__field_types_compiler_format_spec_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__field_types_compiler_format_spec_0_3[5] = {
  (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_context_0),
  (MR_PseudoTypeInfo) (&mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_flags_0),
  (MR_PseudoTypeInfo) (&check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__type_ctor_info_compiler_format_maybe_width_0),
  (MR_PseudoTypeInfo) (&check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__type_ctor_info_compiler_format_maybe_prec_0),
  (MR_PseudoTypeInfo) (&check_hlds__simplify__format_call__parse_string_format__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
};

static const MR_DuFunctorDesc check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_compiler_format_spec_0_3 = {
  (MR_String) "compiler_spec_signed_int",
  (MR_Integer) 5,
  (MR_Integer) 0,
  MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 3,
  check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__field_types_compiler_format_spec_0_3,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__field_types_compiler_format_spec_0_4[6] = {
  (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_context_0),
  (MR_PseudoTypeInfo) (&mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_flags_0),
  (MR_PseudoTypeInfo) (&check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__type_ctor_info_compiler_format_maybe_width_0),
  (MR_PseudoTypeInfo) (&check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__type_ctor_info_compiler_format_maybe_prec_0),
  (MR_PseudoTypeInfo) (&mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_int_base_0),
  (MR_PseudoTypeInfo) (&check_hlds__simplify__format_call__parse_string_format__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
};

static const MR_DuFunctorDesc check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_compiler_format_spec_0_4 = {
  (MR_String) "compiler_spec_unsigned_int",
  (MR_Integer) 6,
  (MR_Integer) 0,
  MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__field_types_compiler_format_spec_0_4,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__field_types_compiler_format_spec_0_5[6] = {
  (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_context_0),
  (MR_PseudoTypeInfo) (&mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_flags_0),
  (MR_PseudoTypeInfo) (&check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__type_ctor_info_compiler_format_maybe_width_0),
  (MR_PseudoTypeInfo) (&check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__type_ctor_info_compiler_format_maybe_prec_0),
  (MR_PseudoTypeInfo) (&mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_float_kind_0),
  (MR_PseudoTypeInfo) (&check_hlds__simplify__format_call__parse_string_format__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
};

static const MR_DuFunctorDesc check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_compiler_format_spec_0_5 = {
  (MR_String) "compiler_spec_float",
  (MR_Integer) 6,
  (MR_Integer) 0,
  MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 5,
  check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__field_types_compiler_format_spec_0_5,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_stag_ordered_compiler_format_spec_0_0[1] = {
  &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_compiler_format_spec_0_0
};

static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_stag_ordered_compiler_format_spec_0_1[1] = {
  &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_compiler_format_spec_0_1
};

static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_stag_ordered_compiler_format_spec_0_2[1] = {
  &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_compiler_format_spec_0_2
};

static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_stag_ordered_compiler_format_spec_0_3[3] = {
  &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_compiler_format_spec_0_3,
  &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_compiler_format_spec_0_4,
  &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_compiler_format_spec_0_5
};

static const MR_DuPtagLayout check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_ptag_ordered_compiler_format_spec_0[4] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_stag_ordered_compiler_format_spec_0_0,
    INT8_C(-1)
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_stag_ordered_compiler_format_spec_0_1,
    INT8_C(-1)
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_stag_ordered_compiler_format_spec_0_2,
    INT8_C(-1)
  },
  {
    (MR_Integer) 3,
    MR_SECTAG_REMOTE,
    check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_stag_ordered_compiler_format_spec_0_3,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_name_ordered_compiler_format_spec_0[6] = {
  &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_compiler_format_spec_0_0,
  &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_compiler_format_spec_0_1,
  &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_compiler_format_spec_0_5,
  &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_compiler_format_spec_0_3,
  &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_compiler_format_spec_0_2,
  &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_compiler_format_spec_0_4
};

static const MR_Integer check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__functor_number_map_compiler_format_spec_0[6] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 4,
  (MR_Integer) 3,
  (MR_Integer) 5,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__type_ctor_info_compiler_format_spec_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 4,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__simplify__format_call__parse_string_format____Unify____compiler_format_spec_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__format_call__parse_string_format____Compare____compiler_format_spec_0_0_10001)),
  (MR_String) "check_hlds.simplify.format_call.parse_string_format",
  (MR_String) "compiler_format_spec",
  {     check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_name_ordered_compiler_format_spec_0 },
  {     check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_ptag_ordered_compiler_format_spec_0 },
  (MR_Integer) 6,
  (MR_Integer) 4,
  check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__functor_number_map_compiler_format_spec_0
};

void MR_CALL 
check_hlds__simplify__format_call__parse_string_format____Compare____compiler_format_spec_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_362 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_363 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_362 == CastY_363);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_String Var_392 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
            MR_Word Var_393 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
                  MR_String ArgY2_7 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
                  MR_Word Var_8;

                  mercury__term____Compare____context_0_0(&Var_8, Var_393, ArgY1_5);
                  succeeded = (Var_8 == (MR_Integer) 0);
                  succeeded = !(succeeded);
                  if (succeeded)
                    *HeadVar__1_1 = Var_8;
                  else
                    mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, Var_392, ArgY2_7);
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_394 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 3))));
            MR_Word Var_395 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
            MR_Word Var_396 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
            MR_Word Var_397 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ArgY1_52 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
                  MR_Word ArgY2_54 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
                  MR_Word ArgY3_56 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 2))));
                  MR_Word ArgY4_58 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 3))));
                  MR_Word Var_59;

                  mercury__term____Compare____context_0_0(&Var_59, Var_397, ArgY1_52);
                  succeeded = (Var_59 == (MR_Integer) 0);
                  succeeded = !(succeeded);
                  if (succeeded)
                    *HeadVar__1_1 = Var_59;
                  else
                  {
                    MR_Word Var_60;

                    mercury__string__parse_util____Compare____string_format_flags_0_0(&Var_60, Var_396, ArgY2_54);
                    succeeded = (Var_60 == (MR_Integer) 0);
                    succeeded = !(succeeded);
                    if (succeeded)
                      *HeadVar__1_1 = Var_60;
                    else
                    {
                      MR_Word Var_61;

                      check_hlds__simplify__format_call__parse_string_format____Compare____compiler_format_maybe_width_0_0(&Var_61, Var_395, ArgY3_56);
                      succeeded = (Var_61 == (MR_Integer) 0);
                      succeeded = !(succeeded);
                      if (succeeded)
                        *HeadVar__1_1 = Var_61;
                      else
                      {
                        mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__simplify__format_call__parse_string_format_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (Var_394)), ((MR_Box) (ArgY4_58)));
                      }
                    }
                  }
                }
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Var_409 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 4))));
            MR_Word Var_410 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 3))));
            MR_Word Var_411 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 2))));
            MR_Word Var_412 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
            MR_Word Var_413 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word ArgY1_117 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))));
                  MR_Word ArgY2_119 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 1))));
                  MR_Word ArgY3_121 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 2))));
                  MR_Word ArgY4_123 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 3))));
                  MR_Word ArgY5_125 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 4))));
                  MR_Word Var_126;

                  mercury__term____Compare____context_0_0(&Var_126, Var_413, ArgY1_117);
                  succeeded = (Var_126 == (MR_Integer) 0);
                  succeeded = !(succeeded);
                  if (succeeded)
                    *HeadVar__1_1 = Var_126;
                  else
                  {
                    MR_Word Var_127;

                    mercury__string__parse_util____Compare____string_format_flags_0_0(&Var_127, Var_412, ArgY2_119);
                    succeeded = (Var_127 == (MR_Integer) 0);
                    succeeded = !(succeeded);
                    if (succeeded)
                      *HeadVar__1_1 = Var_127;
                    else
                    {
                      MR_Word Var_128;

                      check_hlds__simplify__format_call__parse_string_format____Compare____compiler_format_maybe_width_0_0(&Var_128, Var_411, ArgY3_121);
                      succeeded = (Var_128 == (MR_Integer) 0);
                      succeeded = !(succeeded);
                      if (succeeded)
                        *HeadVar__1_1 = Var_128;
                      else
                      {
                        MR_Word Var_129;

                        check_hlds__simplify__format_call__parse_string_format____Compare____compiler_format_maybe_prec_0_0(&Var_129, Var_410, ArgY4_123);
                        succeeded = (Var_129 == (MR_Integer) 0);
                        succeeded = !(succeeded);
                        if (succeeded)
                          *HeadVar__1_1 = Var_129;
                        else
                        {
                          mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__simplify__format_call__parse_string_format_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (Var_409)), ((MR_Box) (ArgY5_125)));
                        }
                      }
                    }
                  }
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Var_404 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 5))));
                MR_Word Var_405 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 4))));
                MR_Word Var_406 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                MR_Word Var_407 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                MR_Word Var_408 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

                switch (MR_tag((MR_Word) HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_Word ArgY1_189 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                          MR_Word ArgY2_191 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                          MR_Word ArgY3_193 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 3))));
                          MR_Word ArgY4_195 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 4))));
                          MR_Word ArgY5_197 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 5))));
                          MR_Word Var_198;

                          mercury__term____Compare____context_0_0(&Var_198, Var_408, ArgY1_189);
                          succeeded = (Var_198 == (MR_Integer) 0);
                          succeeded = !(succeeded);
                          if (succeeded)
                            *HeadVar__1_1 = Var_198;
                          else
                          {
                            MR_Word Var_199;

                            mercury__string__parse_util____Compare____string_format_flags_0_0(&Var_199, Var_407, ArgY2_191);
                            succeeded = (Var_199 == (MR_Integer) 0);
                            succeeded = !(succeeded);
                            if (succeeded)
                              *HeadVar__1_1 = Var_199;
                            else
                            {
                              MR_Word Var_200;

                              check_hlds__simplify__format_call__parse_string_format____Compare____compiler_format_maybe_width_0_0(&Var_200, Var_406, ArgY3_193);
                              succeeded = (Var_200 == (MR_Integer) 0);
                              succeeded = !(succeeded);
                              if (succeeded)
                                *HeadVar__1_1 = Var_200;
                              else
                              {
                                MR_Word Var_201;

                                check_hlds__simplify__format_call__parse_string_format____Compare____compiler_format_maybe_prec_0_0(&Var_201, Var_405, ArgY4_195);
                                succeeded = (Var_201 == (MR_Integer) 0);
                                succeeded = !(succeeded);
                                if (succeeded)
                                  *HeadVar__1_1 = Var_201;
                                else
                                {
                                  mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__simplify__format_call__parse_string_format_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (Var_404)), ((MR_Box) (ArgY5_197)));
                                }
                              }
                            }
                          }
                        }
                        break;
                      case (MR_Integer) 1:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 2:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Var_414 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 6))));
                MR_Word Var_415 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 5))));
                MR_Word Var_416 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 4))));
                MR_Word Var_417 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                MR_Word Var_418 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                MR_Word Var_419 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

                switch (MR_tag((MR_Word) HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word ArgY1_265 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                          MR_Word ArgY2_267 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                          MR_Word ArgY3_269 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 3))));
                          MR_Word ArgY4_271 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 4))));
                          MR_Word ArgY5_273 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 5))));
                          MR_Word ArgY6_275 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 6))));
                          MR_Word Var_276;

                          mercury__term____Compare____context_0_0(&Var_276, Var_419, ArgY1_265);
                          succeeded = (Var_276 == (MR_Integer) 0);
                          succeeded = !(succeeded);
                          if (succeeded)
                            *HeadVar__1_1 = Var_276;
                          else
                          {
                            MR_Word Var_277;

                            mercury__string__parse_util____Compare____string_format_flags_0_0(&Var_277, Var_418, ArgY2_267);
                            succeeded = (Var_277 == (MR_Integer) 0);
                            succeeded = !(succeeded);
                            if (succeeded)
                              *HeadVar__1_1 = Var_277;
                            else
                            {
                              MR_Word Var_278;

                              check_hlds__simplify__format_call__parse_string_format____Compare____compiler_format_maybe_width_0_0(&Var_278, Var_417, ArgY3_269);
                              succeeded = (Var_278 == (MR_Integer) 0);
                              succeeded = !(succeeded);
                              if (succeeded)
                                *HeadVar__1_1 = Var_278;
                              else
                              {
                                MR_Word Var_279;

                                check_hlds__simplify__format_call__parse_string_format____Compare____compiler_format_maybe_prec_0_0(&Var_279, Var_416, ArgY4_271);
                                succeeded = (Var_279 == (MR_Integer) 0);
                                succeeded = !(succeeded);
                                if (succeeded)
                                  *HeadVar__1_1 = Var_279;
                                else
                                {
                                  MR_Word Var_280;
                                  MR_Integer Var_422 = (MR_Integer) (Var_415);
                                  MR_Integer Var_423 = (MR_Integer) (ArgY5_273);

                                  mercury__private_builtin__builtin_compare_int_3_p_0(&Var_280, Var_422, Var_423);
                                  succeeded = (Var_280 == (MR_Integer) 0);
                                  succeeded = !(succeeded);
                                  if (succeeded)
                                    *HeadVar__1_1 = Var_280;
                                  else
                                  {
                                    mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__simplify__format_call__parse_string_format_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (Var_414)), ((MR_Box) (ArgY6_275)));
                                  }
                                }
                              }
                            }
                          }
                        }
                        break;
                      case (MR_Integer) 2:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word Var_398 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 6))));
                MR_Word Var_399 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 5))));
                MR_Word Var_400 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 4))));
                MR_Word Var_401 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                MR_Word Var_402 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                MR_Word Var_403 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

                switch (MR_tag((MR_Word) HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 2:
                        {
                          MR_Word ArgY1_346 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                          MR_Word ArgY2_348 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                          MR_Word ArgY3_350 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 3))));
                          MR_Word ArgY4_352 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 4))));
                          MR_Word ArgY5_354 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 5))));
                          MR_Word ArgY6_356 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 6))));
                          MR_Word Var_357;

                          mercury__term____Compare____context_0_0(&Var_357, Var_403, ArgY1_346);
                          succeeded = (Var_357 == (MR_Integer) 0);
                          succeeded = !(succeeded);
                          if (succeeded)
                            *HeadVar__1_1 = Var_357;
                          else
                          {
                            MR_Word Var_358;

                            mercury__string__parse_util____Compare____string_format_flags_0_0(&Var_358, Var_402, ArgY2_348);
                            succeeded = (Var_358 == (MR_Integer) 0);
                            succeeded = !(succeeded);
                            if (succeeded)
                              *HeadVar__1_1 = Var_358;
                            else
                            {
                              MR_Word Var_359;

                              check_hlds__simplify__format_call__parse_string_format____Compare____compiler_format_maybe_width_0_0(&Var_359, Var_401, ArgY3_350);
                              succeeded = (Var_359 == (MR_Integer) 0);
                              succeeded = !(succeeded);
                              if (succeeded)
                                *HeadVar__1_1 = Var_359;
                              else
                              {
                                MR_Word Var_360;

                                check_hlds__simplify__format_call__parse_string_format____Compare____compiler_format_maybe_prec_0_0(&Var_360, Var_400, ArgY4_352);
                                succeeded = (Var_360 == (MR_Integer) 0);
                                succeeded = !(succeeded);
                                if (succeeded)
                                  *HeadVar__1_1 = Var_360;
                                else
                                {
                                  MR_Word Var_361;
                                  MR_Integer Var_420 = (MR_Integer) (Var_399);
                                  MR_Integer Var_421 = (MR_Integer) (ArgY5_354);

                                  mercury__private_builtin__builtin_compare_int_3_p_0(&Var_361, Var_420, Var_421);
                                  succeeded = (Var_361 == (MR_Integer) 0);
                                  succeeded = !(succeeded);
                                  if (succeeded)
                                    *HeadVar__1_1 = Var_361;
                                  else
                                  {
                                    mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__simplify__format_call__parse_string_format_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (Var_398)), ((MR_Box) (ArgY6_356)));
                                  }
                                }
                              }
                            }
                          }
                        }
                        break;
                    }
                    break;
                }
              }
              break;
          }
          break;
      }
  }
}

MR_bool MR_CALL 
check_hlds__simplify__format_call__parse_string_format____Unify____compiler_format_spec_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_59 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_60 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_59 == CastY_60);
    if (succeeded)
      succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_4;
            MR_String ArgX2_5 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
            MR_String ArgY2_6;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
            if (succeeded)
            {
              ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
              ArgY2_6 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
              succeeded = mercury__term____Unify____context_0_0(ArgX1_3, ArgY1_4);
              if (succeeded)
                succeeded = (strcmp(ArgX2_5, ArgY2_6) == 0);
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word TypeInfo_64_64;
            MR_Word ArgX1_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_8;
            MR_Word ArgX2_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
            MR_Word ArgY2_10;
            MR_Word ArgX3_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2))));
            MR_Word ArgY3_12;
            MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 3))));
            MR_Word ArgY4_14;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
              ArgY2_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
              ArgY3_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
              ArgY4_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 3))));
              succeeded = mercury__term____Unify____context_0_0(ArgX1_7, ArgY1_8);
              if (succeeded)
              {
                succeeded = mercury__string__parse_util____Unify____string_format_flags_0_0(ArgX2_9, ArgY2_10);
                if (succeeded)
                {
                  succeeded = check_hlds__simplify__format_call__parse_string_format____Unify____compiler_format_maybe_width_0_0(ArgX3_11, ArgY3_12);
                  if (succeeded)
                  {
                    TypeInfo_64_64 = (MR_Word) (&check_hlds__simplify__format_call__parse_string_format_scalar_common_1[0]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_64_64, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
                  }
                }
              }
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word TypeInfo_73_73;
            MR_Word ArgX1_15 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_16;
            MR_Word ArgX2_17 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 1))));
            MR_Word ArgY2_18;
            MR_Word ArgX3_19 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 2))));
            MR_Word ArgY3_20;
            MR_Word ArgX4_21 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 3))));
            MR_Word ArgY4_22;
            MR_Word ArgX5_23 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 4))));
            MR_Word ArgY5_24;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
            if (succeeded)
            {
              ArgY1_16 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
              ArgY2_18 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
              ArgY3_20 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 2))));
              ArgY4_22 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 3))));
              ArgY5_24 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 4))));
              succeeded = mercury__term____Unify____context_0_0(ArgX1_15, ArgY1_16);
              if (succeeded)
              {
                succeeded = mercury__string__parse_util____Unify____string_format_flags_0_0(ArgX2_17, ArgY2_18);
                if (succeeded)
                {
                  succeeded = check_hlds__simplify__format_call__parse_string_format____Unify____compiler_format_maybe_width_0_0(ArgX3_19, ArgY3_20);
                  if (succeeded)
                  {
                    succeeded = check_hlds__simplify__format_call__parse_string_format____Unify____compiler_format_maybe_prec_0_0(ArgX4_21, ArgY4_22);
                    if (succeeded)
                    {
                      TypeInfo_73_73 = (MR_Word) (&check_hlds__simplify__format_call__parse_string_format_scalar_common_1[0]);
                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_73_73, ((MR_Box) (ArgX5_23)), ((MR_Box) (ArgY5_24)));
                    }
                  }
                }
              }
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word TypeInfo_70_70;
                MR_Word ArgX1_25 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_Word ArgY1_26;
                MR_Word ArgX2_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
                MR_Word ArgY2_28;
                MR_Word ArgX3_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
                MR_Word ArgY3_30;
                MR_Word ArgX4_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 4))));
                MR_Word ArgY4_32;
                MR_Word ArgX5_33 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 5))));
                MR_Word ArgY5_34;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  ArgY1_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  ArgY2_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  ArgY3_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                  ArgY4_32 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 4))));
                  ArgY5_34 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 5))));
                  succeeded = mercury__term____Unify____context_0_0(ArgX1_25, ArgY1_26);
                  if (succeeded)
                  {
                    succeeded = mercury__string__parse_util____Unify____string_format_flags_0_0(ArgX2_27, ArgY2_28);
                    if (succeeded)
                    {
                      succeeded = check_hlds__simplify__format_call__parse_string_format____Unify____compiler_format_maybe_width_0_0(ArgX3_29, ArgY3_30);
                      if (succeeded)
                      {
                        succeeded = check_hlds__simplify__format_call__parse_string_format____Unify____compiler_format_maybe_prec_0_0(ArgX4_31, ArgY4_32);
                        if (succeeded)
                        {
                          TypeInfo_70_70 = (MR_Word) (&check_hlds__simplify__format_call__parse_string_format_scalar_common_1[0]);
                          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_70_70, ((MR_Box) (ArgX5_33)), ((MR_Box) (ArgY5_34)));
                        }
                      }
                    }
                  }
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word TypeInfo_76_76;
                MR_Word ArgX1_35 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_Word ArgY1_36;
                MR_Word ArgX2_37 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
                MR_Word ArgY2_38;
                MR_Word ArgX3_39 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
                MR_Word ArgY3_40;
                MR_Word ArgX4_41 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 4))));
                MR_Word ArgY4_42;
                MR_Word ArgX5_43 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 5))));
                MR_Word ArgY5_44;
                MR_Word ArgX6_45 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 6))));
                MR_Word ArgY6_46;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))) == (MR_Integer) 1)));
                if (succeeded)
                {
                  ArgY1_36 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  ArgY2_38 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  ArgY3_40 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                  ArgY4_42 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 4))));
                  ArgY5_44 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 5))));
                  ArgY6_46 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 6))));
                  succeeded = mercury__term____Unify____context_0_0(ArgX1_35, ArgY1_36);
                  if (succeeded)
                  {
                    succeeded = mercury__string__parse_util____Unify____string_format_flags_0_0(ArgX2_37, ArgY2_38);
                    if (succeeded)
                    {
                      succeeded = check_hlds__simplify__format_call__parse_string_format____Unify____compiler_format_maybe_width_0_0(ArgX3_39, ArgY3_40);
                      if (succeeded)
                      {
                        succeeded = check_hlds__simplify__format_call__parse_string_format____Unify____compiler_format_maybe_prec_0_0(ArgX4_41, ArgY4_42);
                        if (succeeded)
                        {
                          succeeded = (ArgX5_43 == ArgY5_44);
                          if (succeeded)
                          {
                            TypeInfo_76_76 = (MR_Word) (&check_hlds__simplify__format_call__parse_string_format_scalar_common_1[0]);
                            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_76_76, ((MR_Box) (ArgX6_45)), ((MR_Box) (ArgY6_46)));
                          }
                        }
                      }
                    }
                  }
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word TypeInfo_67_67;
                MR_Word ArgX1_47 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_Word ArgY1_48;
                MR_Word ArgX2_49 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
                MR_Word ArgY2_50;
                MR_Word ArgX3_51 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
                MR_Word ArgY3_52;
                MR_Word ArgX4_53 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 4))));
                MR_Word ArgY4_54;
                MR_Word ArgX5_55 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 5))));
                MR_Word ArgY5_56;
                MR_Word ArgX6_57 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 6))));
                MR_Word ArgY6_58;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))) == (MR_Integer) 2)));
                if (succeeded)
                {
                  ArgY1_48 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  ArgY2_50 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  ArgY3_52 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                  ArgY4_54 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 4))));
                  ArgY5_56 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 5))));
                  ArgY6_58 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 6))));
                  succeeded = mercury__term____Unify____context_0_0(ArgX1_47, ArgY1_48);
                  if (succeeded)
                  {
                    succeeded = mercury__string__parse_util____Unify____string_format_flags_0_0(ArgX2_49, ArgY2_50);
                    if (succeeded)
                    {
                      succeeded = check_hlds__simplify__format_call__parse_string_format____Unify____compiler_format_maybe_width_0_0(ArgX3_51, ArgY3_52);
                      if (succeeded)
                      {
                        succeeded = check_hlds__simplify__format_call__parse_string_format____Unify____compiler_format_maybe_prec_0_0(ArgX4_53, ArgY4_54);
                        if (succeeded)
                        {
                          succeeded = (ArgX5_55 == ArgY5_56);
                          if (succeeded)
                          {
                            TypeInfo_67_67 = (MR_Word) (&check_hlds__simplify__format_call__parse_string_format_scalar_common_1[0]);
                            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_67_67, ((MR_Box) (ArgX6_57)), ((MR_Box) (ArgY6_58)));
                          }
                        }
                      }
                    }
                  }
                }
              }
              break;
          }
          break;
      }
    return succeeded;
  }
}

void MR_CALL 
check_hlds__simplify__format_call__parse_string_format____Compare____compiler_format_maybe_width_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_16 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_17 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_16 == CastY_17);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *HeadVar__1_1 = (MR_Integer) 0;
              break;
            case (MR_Integer) 1:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
            case (MR_Integer) 2:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer Var_20 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Integer ArgY1_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

                  mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Var_20, ArgY1_8);
                }
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word ArgY1_15 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))));

                  mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__simplify__format_call__parse_string_format_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (Var_21)), ((MR_Box) (ArgY1_15)));
                }
                break;
            }
          }
          break;
      }
  }
}

MR_bool MR_CALL 
check_hlds__simplify__format_call__parse_string_format____Unify____compiler_format_maybe_width_0_0(
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
      switch (MR_tag((MR_Word) HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
            MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

            succeeded = (CastY_4 == CastX_3);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer ArgX1_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
            MR_Integer ArgY1_6;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
              succeeded = (ArgX1_5 == ArgY1_6);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word TypeInfo_11_11;
            MR_Word ArgX1_7 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_8;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
            if (succeeded)
            {
              ArgY1_8 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
              TypeInfo_11_11 = (MR_Word) (&check_hlds__simplify__format_call__parse_string_format_scalar_common_1[0]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_11_11, ((MR_Box) (ArgX1_7)), ((MR_Box) (ArgY1_8)));
            }
          }
          break;
      }
    return succeeded;
  }
}

void MR_CALL 
check_hlds__simplify__format_call__parse_string_format____Compare____compiler_format_maybe_prec_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_16 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_17 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_16 == CastY_17);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *HeadVar__1_1 = (MR_Integer) 0;
              break;
            case (MR_Integer) 1:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
            case (MR_Integer) 2:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer Var_20 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Integer ArgY1_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

                  mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Var_20, ArgY1_8);
                }
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word ArgY1_15 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))));

                  mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__simplify__format_call__parse_string_format_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (Var_21)), ((MR_Box) (ArgY1_15)));
                }
                break;
            }
          }
          break;
      }
  }
}

MR_bool MR_CALL 
check_hlds__simplify__format_call__parse_string_format____Unify____compiler_format_maybe_prec_0_0(
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
      switch (MR_tag((MR_Word) HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
            MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

            succeeded = (CastY_4 == CastX_3);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer ArgX1_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
            MR_Integer ArgY1_6;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
              succeeded = (ArgX1_5 == ArgY1_6);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word TypeInfo_11_11;
            MR_Word ArgX1_7 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_8;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
            if (succeeded)
            {
              ArgY1_8 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
              TypeInfo_11_11 = (MR_Word) (&check_hlds__simplify__format_call__parse_string_format_scalar_common_1[0]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_11_11, ((MR_Box) (ArgX1_7)), ((MR_Box) (ArgY1_8)));
            }
          }
          break;
      }
    return succeeded;
  }
}

void MR_CALL 
check_hlds__simplify__format_call__parse_string_format____Compare____abstract_poly_type_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_72 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_73 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_72 == CastY_73);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_84 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
            MR_Word Var_85 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
                  MR_Word ArgY2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
                  MR_Word Var_8;

                  mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__simplify__format_call__parse_string_format_scalar_common_1[0]), &Var_8, ((MR_Box) (Var_85)), ((MR_Box) (ArgY1_5)));
                  succeeded = (Var_8 == (MR_Integer) 0);
                  succeeded = !(succeeded);
                  if (succeeded)
                    *HeadVar__1_1 = Var_8;
                  else
                    mercury__term____Compare____context_0_0(HeadVar__1_1, Var_84, ArgY2_7);
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_86 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
            MR_Word Var_87 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ArgY1_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
                  MR_Word ArgY2_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
                  MR_Word Var_29;

                  mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__simplify__format_call__parse_string_format_scalar_common_1[0]), &Var_29, ((MR_Box) (Var_87)), ((MR_Box) (ArgY1_26)));
                  succeeded = (Var_29 == (MR_Integer) 0);
                  succeeded = !(succeeded);
                  if (succeeded)
                    *HeadVar__1_1 = Var_29;
                  else
                    mercury__term____Compare____context_0_0(HeadVar__1_1, Var_86, ArgY2_28);
                }
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Var_88 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
            MR_Word Var_89 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word ArgY1_47 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))));
                  MR_Word ArgY2_49 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 1))));
                  MR_Word Var_50;

                  mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__simplify__format_call__parse_string_format_scalar_common_1[0]), &Var_50, ((MR_Box) (Var_89)), ((MR_Box) (ArgY1_47)));
                  succeeded = (Var_50 == (MR_Integer) 0);
                  succeeded = !(succeeded);
                  if (succeeded)
                    *HeadVar__1_1 = Var_50;
                  else
                    mercury__term____Compare____context_0_0(HeadVar__1_1, Var_88, ArgY2_49);
                }
                break;
              case (MR_Integer) 3:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Var_82 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
            MR_Word Var_83 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                {
                  MR_Word ArgY1_68 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))));
                  MR_Word ArgY2_70 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                  MR_Word Var_71;

                  mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__simplify__format_call__parse_string_format_scalar_common_1[0]), &Var_71, ((MR_Box) (Var_83)), ((MR_Box) (ArgY1_68)));
                  succeeded = (Var_71 == (MR_Integer) 0);
                  succeeded = !(succeeded);
                  if (succeeded)
                    *HeadVar__1_1 = Var_71;
                  else
                    mercury__term____Compare____context_0_0(HeadVar__1_1, Var_82, ArgY2_70);
                }
                break;
            }
          }
          break;
      }
  }
}

MR_bool MR_CALL 
check_hlds__simplify__format_call__parse_string_format____Unify____abstract_poly_type_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_19 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_20 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_19 == CastY_20);
    if (succeeded)
      succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word TypeInfo_23_23;
            MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_4;
            MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
            MR_Word ArgY2_6;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
            if (succeeded)
            {
              ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
              ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
              TypeInfo_23_23 = (MR_Word) (&check_hlds__simplify__format_call__parse_string_format_scalar_common_1[0]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_23_23, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
              if (succeeded)
                succeeded = mercury__term____Unify____context_0_0(ArgX2_5, ArgY2_6);
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word TypeInfo_25_25;
            MR_Word ArgX1_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_8;
            MR_Word ArgX2_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
            MR_Word ArgY2_10;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
              ArgY2_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
              TypeInfo_25_25 = (MR_Word) (&check_hlds__simplify__format_call__parse_string_format_scalar_common_1[0]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_25_25, ((MR_Box) (ArgX1_7)), ((MR_Box) (ArgY1_8)));
              if (succeeded)
                succeeded = mercury__term____Unify____context_0_0(ArgX2_9, ArgY2_10);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word TypeInfo_27_27;
            MR_Word ArgX1_11 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_12;
            MR_Word ArgX2_13 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 1))));
            MR_Word ArgY2_14;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
            if (succeeded)
            {
              ArgY1_12 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
              ArgY2_14 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
              TypeInfo_27_27 = (MR_Word) (&check_hlds__simplify__format_call__parse_string_format_scalar_common_1[0]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_27_27, ((MR_Box) (ArgX1_11)), ((MR_Box) (ArgY1_12)));
              if (succeeded)
                succeeded = mercury__term____Unify____context_0_0(ArgX2_13, ArgY2_14);
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word TypeInfo_21_21;
            MR_Word ArgX1_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_16;
            MR_Word ArgX2_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
            MR_Word ArgY2_18;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3);
            if (succeeded)
            {
              ArgY1_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))));
              ArgY2_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
              TypeInfo_21_21 = (MR_Word) (&check_hlds__simplify__format_call__parse_string_format_scalar_common_1[0]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_21_21, ((MR_Box) (ArgX1_15)), ((MR_Box) (ArgY1_16)));
              if (succeeded)
                succeeded = mercury__term____Unify____context_0_0(ArgX2_17, ArgY2_18);
            }
          }
          break;
      }
    return succeeded;
  }
}

void MR_CALL 
check_hlds__simplify__format_call__parse_string_format__parse_and_optimize_format_string_4_p_0(
  MR_Word Chars_5,
  MR_Word PolyTypes_6,
  MR_Word Context_7,
  MR_Word * MaybeMergedSpecs_8)
{
  {
    MR_Word Specs_9;
    MR_Word Errors_10;

    check_hlds__simplify__format_call__parse_string_format__compiler_parse_format_string_6_p_0(Chars_5, PolyTypes_6, Context_7, (MR_Integer) 1, &Specs_9, &Errors_10);
    if ((Errors_10 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word FlatSpecs_13;

      check_hlds__simplify__format_call__parse_string_format__merge_adjacent_const_strs_2_p_0(Specs_9, &FlatSpecs_13);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeMergedSpecs_8 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (FlatSpecs_13));
      }
    }
    else
    {
      MR_Word HeadError_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Errors_10, (MR_Integer) 0))));
      MR_Word TailErrors_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Errors_10, (MR_Integer) 1))));

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *MaybeMergedSpecs_8 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadError_11));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailErrors_12));
      }
    }
  }
}

static void MR_CALL 
check_hlds__simplify__format_call__parse_string_format__compiler_parse_format_string_6_p_0(
  MR_Word STATE_VARIABLE_Chars_0_29,
  MR_Word STATE_VARIABLE_PolyTypes_0_30,
  MR_Word Context_9,
  MR_Integer SpecNum_10,
  MR_Word * Specs_11,
  MR_Word * Errors_12)
{
  {
    MR_Word NonConversionSpecChars_13;
    MR_Word GatherEndedBy_14;
    MR_Word Specs0_15;

    mercury__string__parse_util__gather_non_percent_chars_3_p_0(STATE_VARIABLE_Chars_0_29, &NonConversionSpecChars_13, &GatherEndedBy_14);
    if ((GatherEndedBy_14 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      Specs0_15 = (MR_Word) ((MR_Unsigned) 0U);
      if ((STATE_VARIABLE_PolyTypes_0_30 == (MR_Word) ((MR_Unsigned) 0U)))
        *Errors_12 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        MR_Word Error_18;
        MR_Integer Var_36;

        Var_36 = mercury__list__length_1_f_0((MR_Word) (&check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__type_ctor_info_abstract_poly_type_0), STATE_VARIABLE_PolyTypes_0_30);
        {
          Error_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Error_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
          MR_hl_field(MR_mktag(3), Error_18, 1) = ((MR_Box) (SpecNum_10));
          MR_hl_field(MR_mktag(3), Error_18, 2) = ((MR_Box) (Var_36));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *Errors_12 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Error_18));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
    }
    else
    {
      MR_Word HeadSpec_19;
      MR_Word HeadErrors_20;
      MR_Word TailSpecs_21;
      MR_Word TailErrors_22;
      MR_Word STATE_VARIABLE_Chars_31_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GatherEndedBy_14, (MR_Integer) 0))));
      MR_Word STATE_VARIABLE_Chars_32_32;
      MR_Word STATE_VARIABLE_PolyTypes_33_33;
      MR_Integer Var_34;

      check_hlds__simplify__format_call__parse_string_format__parse_conversion_specification_8_p_0(STATE_VARIABLE_Chars_31_31, &STATE_VARIABLE_Chars_32_32, STATE_VARIABLE_PolyTypes_0_30, &STATE_VARIABLE_PolyTypes_33_33, Context_9, SpecNum_10, &HeadSpec_19, &HeadErrors_20);
      Var_34 = (MR_Integer) ((MR_Unsigned) SpecNum_10 + (MR_Unsigned) (MR_Integer) 1);
      check_hlds__simplify__format_call__parse_string_format__compiler_parse_format_string_6_p_0(STATE_VARIABLE_Chars_32_32, STATE_VARIABLE_PolyTypes_33_33, Context_9, Var_34, &TailSpecs_21, &TailErrors_22);
      if ((HeadErrors_20 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        {
          Specs0_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Specs0_15, 0) = ((MR_Box) (HeadSpec_19));
          MR_hl_field(MR_mktag(1), Specs0_15, 1) = ((MR_Box) (TailSpecs_21));
        }
        *Errors_12 = TailErrors_22;
      }
      else
      {
        Specs0_15 = TailSpecs_21;
        *Errors_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_error_0), HeadErrors_20, TailErrors_22);
      }
    }
    if ((NonConversionSpecChars_13 == (MR_Word) ((MR_Unsigned) 0U)))
      *Specs_11 = Specs0_15;
    else
    {
      MR_String NonConversionSpecString_27;
      MR_Word StringConst_28;

      NonConversionSpecString_27 = mercury__string__from_char_list_1_f_0(NonConversionSpecChars_13);
      {
        StringConst_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), StringConst_28, 0) = ((MR_Box) (Context_9));
        MR_hl_field(MR_mktag(0), StringConst_28, 1) = ((MR_Box) (NonConversionSpecString_27));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *Specs_11 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (StringConst_28));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Specs0_15));
      }
    }
  }
}

static void MR_CALL 
check_hlds__simplify__format_call__parse_string_format__parse_conversion_specification_8_p_0(
  MR_Word STATE_VARIABLE_Chars_0_22,
  MR_Word * STATE_VARIABLE_Chars_23,
  MR_Word STATE_VARIABLE_PolyTypes_0_24,
  MR_Word * STATE_VARIABLE_PolyTypes_25,
  MR_Word Context_11,
  MR_Integer SpecNum_12,
  MR_Word * Spec_13,
  MR_Word * Errors_14)
{
  {
    MR_bool succeeded;
    MR_Word Flags_16;
    MR_Word MaybeWidth_17;
    MR_Word WidthErrors_18;
    MR_Word MaybePrec_19;
    MR_Word PrecErrors_20;
    MR_Word SpecErrors_21;
    MR_Word STATE_VARIABLE_Chars_31_31;
    MR_Word STATE_VARIABLE_Chars_32_32;
    MR_Word STATE_VARIABLE_PolyTypes_33_33;
    MR_Word STATE_VARIABLE_Chars_34_34;
    MR_Word STATE_VARIABLE_PolyTypes_35_35;
    MR_Word Var_38;
    MR_Word STATE_VARIABLE_Chars_21_53;
    MR_Char Var_54;

    mercury__string__parse_util__gather_flag_chars_4_p_0(STATE_VARIABLE_Chars_0_22, &STATE_VARIABLE_Chars_31_31, (MR_Word) (&check_hlds__simplify__format_call__parse_string_format_scalar_common_2[0]), &Flags_16);
    succeeded = ((MR_tag((MR_Word) STATE_VARIABLE_Chars_31_31)) == (MR_Integer) 1);
    if (succeeded)
    {
      Var_54 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_Chars_31_31, (MR_Integer) 0)));
      STATE_VARIABLE_Chars_21_53 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_Chars_31_31, (MR_Integer) 1))));
      succeeded = (Var_54 == (MR_Char) 42);
    }
    if (succeeded)
    {
      STATE_VARIABLE_Chars_32_32 = STATE_VARIABLE_Chars_21_53;
      if ((STATE_VARIABLE_PolyTypes_0_24 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_55;

        MaybeWidth_17 = (MR_Word) ((MR_Unsigned) 0U);
        {
          Var_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(3), Var_55, 1) = ((MR_Box) (SpecNum_12));
        }
        {
          WidthErrors_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), WidthErrors_18, 0) = ((MR_Box) (Var_55));
          MR_hl_field(MR_mktag(1), WidthErrors_18, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        STATE_VARIABLE_PolyTypes_33_33 = STATE_VARIABLE_PolyTypes_0_24;
      }
      else
      {
        MR_Word PolyType_49 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_24, (MR_Integer) 0))));
        MR_Word PolyWidthVar_50;

        STATE_VARIABLE_PolyTypes_33_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_24, (MR_Integer) 1))));
        succeeded = ((MR_tag((MR_Word) PolyType_49)) == (MR_Integer) 1);
        if (succeeded)
        {
          PolyWidthVar_50 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PolyType_49, (MR_Integer) 0))));
          {
            MaybeWidth_17 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), MaybeWidth_17, 0) = ((MR_Box) (PolyWidthVar_50));
          }
          WidthErrors_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        else
        {
          MR_Word Var_58;
          MR_Word Var_59;

          MaybeWidth_17 = (MR_Word) ((MR_Unsigned) 0U);
          switch (MR_tag((MR_Word) PolyType_49)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              Var_59 = (MR_Integer) 3;
              break;
            case (MR_Integer) 1:
              Var_59 = (MR_Integer) 2;
              break;
            case (MR_Integer) 2:
              Var_59 = (MR_Integer) 1;
              break;
            case (MR_Integer) 3:
              Var_59 = (MR_Integer) 0;
              break;
          }
          {
            Var_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_58, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), Var_58, 1) = ((MR_Box) (SpecNum_12));
            MR_hl_field(MR_mktag(3), Var_58, 2) = ((MR_Box) (Var_59));
          }
          {
            WidthErrors_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), WidthErrors_18, 0) = ((MR_Box) (Var_58));
            MR_hl_field(MR_mktag(1), WidthErrors_18, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
      }
    }
    else
    {
      MR_Integer Width_52;
      MR_Word STATE_VARIABLE_Chars_29_61;

      succeeded = mercury__string__parse_util__get_nonzero_number_prefix_3_p_0(STATE_VARIABLE_Chars_31_31, &STATE_VARIABLE_Chars_29_61, &Width_52);
      if (succeeded)
      {
        STATE_VARIABLE_Chars_32_32 = STATE_VARIABLE_Chars_29_61;
        {
          MaybeWidth_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeWidth_17, 0) = ((MR_Box) (Width_52));
        }
        WidthErrors_18 = (MR_Word) ((MR_Unsigned) 0U);
      }
      else
      {
        MaybeWidth_17 = (MR_Word) ((MR_Unsigned) 0U);
        WidthErrors_18 = (MR_Word) ((MR_Unsigned) 0U);
        STATE_VARIABLE_Chars_32_32 = STATE_VARIABLE_Chars_31_31;
      }
      STATE_VARIABLE_PolyTypes_33_33 = STATE_VARIABLE_PolyTypes_0_24;
    }
    check_hlds__simplify__format_call__parse_string_format__get_optional_prec_7_p_0(STATE_VARIABLE_Chars_32_32, &STATE_VARIABLE_Chars_34_34, STATE_VARIABLE_PolyTypes_33_33, &STATE_VARIABLE_PolyTypes_35_35, SpecNum_12, &MaybePrec_19, &PrecErrors_20);
    check_hlds__simplify__format_call__parse_string_format__get_first_spec_11_p_0(STATE_VARIABLE_Chars_34_34, STATE_VARIABLE_Chars_23, STATE_VARIABLE_PolyTypes_35_35, STATE_VARIABLE_PolyTypes_25, Context_11, Flags_16, MaybeWidth_17, MaybePrec_19, SpecNum_12, Spec_13, &SpecErrors_21);
    Var_38 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_error_0), PrecErrors_20, SpecErrors_21);
    *Errors_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_error_0), WidthErrors_18, Var_38);
  }
}

static void MR_CALL 
check_hlds__simplify__format_call__parse_string_format__get_first_spec_11_p_0(
  MR_Word STATE_VARIABLE_Chars_0_1,
  MR_Word * STATE_VARIABLE_Chars_2,
  MR_Word STATE_VARIABLE_PolyTypes_0_3,
  MR_Word * STATE_VARIABLE_PolyTypes_4,
  MR_Word OverallContext_5,
  MR_Word HeadVar__6_6,
  MR_Word HeadVar__7_7,
  MR_Word HeadVar__8_8,
  MR_Integer SpecNum_9,
  MR_Word * Spec_10,
  MR_Word * Errors_11)
{
  {
    MR_bool succeeded;

    if ((STATE_VARIABLE_Chars_0_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_26;
      MR_Integer Var_27;

      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        *Spec_10 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (OverallContext_5));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_String) ""));
      }
      Var_27 = mercury__list__length_1_f_0((MR_Word) (&check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__type_ctor_info_abstract_poly_type_0), STATE_VARIABLE_PolyTypes_0_3);
      {
        Var_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_26, 0) = ((MR_Box) (SpecNum_9));
        MR_hl_field(MR_mktag(0), Var_26, 1) = ((MR_Box) (Var_27));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *Errors_11 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_26));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      *STATE_VARIABLE_PolyTypes_4 = STATE_VARIABLE_PolyTypes_0_3;
      *STATE_VARIABLE_Chars_2 = STATE_VARIABLE_Chars_0_1;
    }
    else
    {
      MR_Char SpecChar_38 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_Chars_0_1, (MR_Integer) 0)));
      MR_Word SpecPrime_39;
      MR_Word ErrorsPrime_40;
      MR_Word STATE_VARIABLE_PolyTypes_84_84;

      *STATE_VARIABLE_Chars_2 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_Chars_0_1, (MR_Integer) 1))));
      switch (SpecChar_38) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Char) 37:
          {
            {
              SpecPrime_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), SpecPrime_39, 0) = ((MR_Box) (OverallContext_5));
              MR_hl_field(MR_mktag(0), SpecPrime_39, 1) = ((MR_Box) ((MR_String) "%"));
            }
            ErrorsPrime_40 = (MR_Word) ((MR_Unsigned) 0U);
            STATE_VARIABLE_PolyTypes_84_84 = STATE_VARIABLE_PolyTypes_0_3;
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Char) 69:
          {
            if ((STATE_VARIABLE_PolyTypes_0_3 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word Error_117;

              {
                Error_117 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Error_117, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), Error_117, 1) = ((MR_Box) (SpecNum_9));
                MR_hl_field(MR_mktag(3), Error_117, 2) = ((MR_Box) (MR_Word) (SpecChar_38));
              }
              {
                SpecPrime_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), SpecPrime_39, 0) = ((MR_Box) (OverallContext_5));
                MR_hl_field(MR_mktag(0), SpecPrime_39, 1) = ((MR_Box) ((MR_String) ""));
              }
              {
                ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ErrorsPrime_40, 0) = ((MR_Box) (Error_117));
                MR_hl_field(MR_mktag(1), ErrorsPrime_40, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              STATE_VARIABLE_PolyTypes_84_84 = STATE_VARIABLE_PolyTypes_0_3;
            }
            else
            {
              MR_Word SpecPolyType_114 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0))));
              MR_Word FloatVar_47;
              MR_Word PolyContext_112;

              STATE_VARIABLE_PolyTypes_84_84 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1))));
              succeeded = ((MR_tag((MR_Word) SpecPolyType_114)) == (MR_Integer) 0);
              if (succeeded)
              {
                FloatVar_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SpecPolyType_114, (MR_Integer) 0))));
                PolyContext_112 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SpecPolyType_114, (MR_Integer) 1))));
                {
                  SpecPrime_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 1) = ((MR_Box) (PolyContext_112));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 2) = ((MR_Box) (HeadVar__6_6));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 3) = ((MR_Box) (HeadVar__7_7));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 4) = ((MR_Box) (HeadVar__8_8));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 5) = ((MR_Box) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 6) = ((MR_Box) (FloatVar_47));
                }
                ErrorsPrime_40 = (MR_Word) ((MR_Unsigned) 0U);
              }
              else
              {
                MR_Word Var_71;
                MR_Word Error_111;

                Var_71 = check_hlds__simplify__format_call__parse_string_format__abstract_poly_type_to_kind_1_f_0(SpecPolyType_114);
                {
                  Error_111 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), Error_111, 0) = ((MR_Box) (SpecNum_9));
                  MR_hl_field(MR_mktag(2), Error_111, 1) = ((MR_Box) (MR_Word) (SpecChar_38));
                  MR_hl_field(MR_mktag(2), Error_111, 2) = ((MR_Box) (Var_71));
                }
                {
                  SpecPrime_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), SpecPrime_39, 0) = ((MR_Box) (OverallContext_5));
                  MR_hl_field(MR_mktag(0), SpecPrime_39, 1) = ((MR_Box) ((MR_String) ""));
                }
                {
                  ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ErrorsPrime_40, 0) = ((MR_Box) (Error_111));
                  MR_hl_field(MR_mktag(1), ErrorsPrime_40, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
              }
            }
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Char) 70:
          {
            if ((STATE_VARIABLE_PolyTypes_0_3 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word Error_159;

              {
                Error_159 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Error_159, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), Error_159, 1) = ((MR_Box) (SpecNum_9));
                MR_hl_field(MR_mktag(3), Error_159, 2) = ((MR_Box) (MR_Word) (SpecChar_38));
              }
              {
                SpecPrime_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), SpecPrime_39, 0) = ((MR_Box) (OverallContext_5));
                MR_hl_field(MR_mktag(0), SpecPrime_39, 1) = ((MR_Box) ((MR_String) ""));
              }
              {
                ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ErrorsPrime_40, 0) = ((MR_Box) (Error_159));
                MR_hl_field(MR_mktag(1), ErrorsPrime_40, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              STATE_VARIABLE_PolyTypes_84_84 = STATE_VARIABLE_PolyTypes_0_3;
            }
            else
            {
              MR_Word SpecPolyType_176 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0))));
              MR_Word FloatVar_164;
              MR_Word PolyContext_169;

              STATE_VARIABLE_PolyTypes_84_84 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1))));
              succeeded = ((MR_tag((MR_Word) SpecPolyType_176)) == (MR_Integer) 0);
              if (succeeded)
              {
                FloatVar_164 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SpecPolyType_176, (MR_Integer) 0))));
                PolyContext_169 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SpecPolyType_176, (MR_Integer) 1))));
                {
                  SpecPrime_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 1) = ((MR_Box) (PolyContext_169));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 2) = ((MR_Box) (HeadVar__6_6));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 3) = ((MR_Box) (HeadVar__7_7));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 4) = ((MR_Box) (HeadVar__8_8));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 5) = ((MR_Box) ((MR_Integer) 3));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 6) = ((MR_Box) (FloatVar_164));
                }
                ErrorsPrime_40 = (MR_Word) ((MR_Unsigned) 0U);
              }
              else
              {
                MR_Word Var_160;
                MR_Word Error_163;

                Var_160 = check_hlds__simplify__format_call__parse_string_format__abstract_poly_type_to_kind_1_f_0(SpecPolyType_176);
                {
                  Error_163 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), Error_163, 0) = ((MR_Box) (SpecNum_9));
                  MR_hl_field(MR_mktag(2), Error_163, 1) = ((MR_Box) (MR_Word) (SpecChar_38));
                  MR_hl_field(MR_mktag(2), Error_163, 2) = ((MR_Box) (Var_160));
                }
                {
                  SpecPrime_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), SpecPrime_39, 0) = ((MR_Box) (OverallContext_5));
                  MR_hl_field(MR_mktag(0), SpecPrime_39, 1) = ((MR_Box) ((MR_String) ""));
                }
                {
                  ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ErrorsPrime_40, 0) = ((MR_Box) (Error_163));
                  MR_hl_field(MR_mktag(1), ErrorsPrime_40, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
              }
            }
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Char) 71:
          {
            if ((STATE_VARIABLE_PolyTypes_0_3 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word Error_200;

              {
                Error_200 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Error_200, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), Error_200, 1) = ((MR_Box) (SpecNum_9));
                MR_hl_field(MR_mktag(3), Error_200, 2) = ((MR_Box) (MR_Word) (SpecChar_38));
              }
              {
                SpecPrime_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), SpecPrime_39, 0) = ((MR_Box) (OverallContext_5));
                MR_hl_field(MR_mktag(0), SpecPrime_39, 1) = ((MR_Box) ((MR_String) ""));
              }
              {
                ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ErrorsPrime_40, 0) = ((MR_Box) (Error_200));
                MR_hl_field(MR_mktag(1), ErrorsPrime_40, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              STATE_VARIABLE_PolyTypes_84_84 = STATE_VARIABLE_PolyTypes_0_3;
            }
            else
            {
              MR_Word SpecPolyType_217 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0))));
              MR_Word FloatVar_205;
              MR_Word PolyContext_210;

              STATE_VARIABLE_PolyTypes_84_84 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1))));
              succeeded = ((MR_tag((MR_Word) SpecPolyType_217)) == (MR_Integer) 0);
              if (succeeded)
              {
                FloatVar_205 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SpecPolyType_217, (MR_Integer) 0))));
                PolyContext_210 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SpecPolyType_217, (MR_Integer) 1))));
                {
                  SpecPrime_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 1) = ((MR_Box) (PolyContext_210));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 2) = ((MR_Box) (HeadVar__6_6));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 3) = ((MR_Box) (HeadVar__7_7));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 4) = ((MR_Box) (HeadVar__8_8));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 5) = ((MR_Box) ((MR_Integer) 5));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 6) = ((MR_Box) (FloatVar_205));
                }
                ErrorsPrime_40 = (MR_Word) ((MR_Unsigned) 0U);
              }
              else
              {
                MR_Word Var_201;
                MR_Word Error_204;

                Var_201 = check_hlds__simplify__format_call__parse_string_format__abstract_poly_type_to_kind_1_f_0(SpecPolyType_217);
                {
                  Error_204 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), Error_204, 0) = ((MR_Box) (SpecNum_9));
                  MR_hl_field(MR_mktag(2), Error_204, 1) = ((MR_Box) (MR_Word) (SpecChar_38));
                  MR_hl_field(MR_mktag(2), Error_204, 2) = ((MR_Box) (Var_201));
                }
                {
                  SpecPrime_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), SpecPrime_39, 0) = ((MR_Box) (OverallContext_5));
                  MR_hl_field(MR_mktag(0), SpecPrime_39, 1) = ((MR_Box) ((MR_String) ""));
                }
                {
                  ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ErrorsPrime_40, 0) = ((MR_Box) (Error_204));
                  MR_hl_field(MR_mktag(1), ErrorsPrime_40, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
              }
            }
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Char) 88:
          {
            if ((STATE_VARIABLE_PolyTypes_0_3 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word Error_102;

              {
                Error_102 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Error_102, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), Error_102, 1) = ((MR_Box) (SpecNum_9));
                MR_hl_field(MR_mktag(3), Error_102, 2) = ((MR_Box) (MR_Word) (SpecChar_38));
              }
              {
                SpecPrime_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), SpecPrime_39, 0) = ((MR_Box) (OverallContext_5));
                MR_hl_field(MR_mktag(0), SpecPrime_39, 1) = ((MR_Box) ((MR_String) ""));
              }
              {
                ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ErrorsPrime_40, 0) = ((MR_Box) (Error_102));
                MR_hl_field(MR_mktag(1), ErrorsPrime_40, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              STATE_VARIABLE_PolyTypes_84_84 = STATE_VARIABLE_PolyTypes_0_3;
            }
            else
            {
              MR_Word SpecPolyType_98 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0))));
              MR_Word IntVar_95;
              MR_Word PolyContext_96;

              STATE_VARIABLE_PolyTypes_84_84 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1))));
              succeeded = ((MR_tag((MR_Word) SpecPolyType_98)) == (MR_Integer) 1);
              if (succeeded)
              {
                IntVar_95 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SpecPolyType_98, (MR_Integer) 0))));
                PolyContext_96 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SpecPolyType_98, (MR_Integer) 1))));
                {
                  SpecPrime_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 1) = ((MR_Box) (PolyContext_96));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 2) = ((MR_Box) (HeadVar__6_6));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 3) = ((MR_Box) (HeadVar__7_7));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 4) = ((MR_Box) (HeadVar__8_8));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 5) = ((MR_Box) ((MR_Integer) 3));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 6) = ((MR_Box) (IntVar_95));
                }
                ErrorsPrime_40 = (MR_Word) ((MR_Unsigned) 0U);
              }
              else
              {
                MR_Word Var_79;
                MR_Word Error_94;

                Var_79 = check_hlds__simplify__format_call__parse_string_format__abstract_poly_type_to_kind_1_f_0(SpecPolyType_98);
                {
                  Error_94 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), Error_94, 0) = ((MR_Box) (SpecNum_9));
                  MR_hl_field(MR_mktag(2), Error_94, 1) = ((MR_Box) (MR_Word) (SpecChar_38));
                  MR_hl_field(MR_mktag(2), Error_94, 2) = ((MR_Box) (Var_79));
                }
                {
                  SpecPrime_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), SpecPrime_39, 0) = ((MR_Box) (OverallContext_5));
                  MR_hl_field(MR_mktag(0), SpecPrime_39, 1) = ((MR_Box) ((MR_String) ""));
                }
                {
                  ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ErrorsPrime_40, 0) = ((MR_Box) (Error_94));
                  MR_hl_field(MR_mktag(1), ErrorsPrime_40, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
              }
            }
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Char) 99:
          {
            if ((STATE_VARIABLE_PolyTypes_0_3 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word Error_130;

              {
                Error_130 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Error_130, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), Error_130, 1) = ((MR_Box) (SpecNum_9));
                MR_hl_field(MR_mktag(3), Error_130, 2) = ((MR_Box) (MR_Word) (SpecChar_38));
              }
              {
                SpecPrime_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), SpecPrime_39, 0) = ((MR_Box) (OverallContext_5));
                MR_hl_field(MR_mktag(0), SpecPrime_39, 1) = ((MR_Box) ((MR_String) ""));
              }
              {
                ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ErrorsPrime_40, 0) = ((MR_Box) (Error_130));
                MR_hl_field(MR_mktag(1), ErrorsPrime_40, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              STATE_VARIABLE_PolyTypes_84_84 = STATE_VARIABLE_PolyTypes_0_3;
            }
            else
            {
              MR_Word SpecPolyType_127 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0))));
              MR_Word CharVar_48;
              MR_Word PolyContext_125;

              STATE_VARIABLE_PolyTypes_84_84 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1))));
              succeeded = ((MR_tag((MR_Word) SpecPolyType_127)) == (MR_Integer) 3);
              if (succeeded)
              {
                CharVar_48 = ((MR_Word) ((MR_hl_field(MR_mktag(3), SpecPolyType_127, (MR_Integer) 0))));
                PolyContext_125 = ((MR_Word) ((MR_hl_field(MR_mktag(3), SpecPolyType_127, (MR_Integer) 1))));
                {
                  SpecPrime_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), SpecPrime_39, 0) = ((MR_Box) (PolyContext_125));
                  MR_hl_field(MR_mktag(1), SpecPrime_39, 1) = ((MR_Box) (HeadVar__6_6));
                  MR_hl_field(MR_mktag(1), SpecPrime_39, 2) = ((MR_Box) (HeadVar__7_7));
                  MR_hl_field(MR_mktag(1), SpecPrime_39, 3) = ((MR_Box) (CharVar_48));
                }
                ErrorsPrime_40 = (MR_Word) ((MR_Unsigned) 0U);
              }
              else
              {
                MR_Word Var_65;
                MR_Word Error_124;

                Var_65 = check_hlds__simplify__format_call__parse_string_format__abstract_poly_type_to_kind_1_f_0(SpecPolyType_127);
                {
                  Error_124 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), Error_124, 0) = ((MR_Box) (SpecNum_9));
                  MR_hl_field(MR_mktag(2), Error_124, 1) = ((MR_Box) (MR_Word) (SpecChar_38));
                  MR_hl_field(MR_mktag(2), Error_124, 2) = ((MR_Box) (Var_65));
                }
                {
                  SpecPrime_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), SpecPrime_39, 0) = ((MR_Box) (OverallContext_5));
                  MR_hl_field(MR_mktag(0), SpecPrime_39, 1) = ((MR_Box) ((MR_String) ""));
                }
                {
                  ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ErrorsPrime_40, 0) = ((MR_Box) (Error_124));
                  MR_hl_field(MR_mktag(1), ErrorsPrime_40, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
              }
            }
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Char) 100:
        case (MR_Char) 105:
          {
            if ((STATE_VARIABLE_PolyTypes_0_3 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word Error_93;

              {
                Error_93 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Error_93, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), Error_93, 1) = ((MR_Box) (SpecNum_9));
                MR_hl_field(MR_mktag(3), Error_93, 2) = ((MR_Box) (MR_Word) (SpecChar_38));
              }
              {
                SpecPrime_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), SpecPrime_39, 0) = ((MR_Box) (OverallContext_5));
                MR_hl_field(MR_mktag(0), SpecPrime_39, 1) = ((MR_Box) ((MR_String) ""));
              }
              {
                ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ErrorsPrime_40, 0) = ((MR_Box) (Error_93));
                MR_hl_field(MR_mktag(1), ErrorsPrime_40, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              STATE_VARIABLE_PolyTypes_84_84 = STATE_VARIABLE_PolyTypes_0_3;
            }
            else
            {
              MR_Word SpecPolyType_41 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0))));
              MR_Word IntVar_42;
              MR_Word PolyContext_43;

              STATE_VARIABLE_PolyTypes_84_84 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1))));
              succeeded = ((MR_tag((MR_Word) SpecPolyType_41)) == (MR_Integer) 1);
              if (succeeded)
              {
                IntVar_42 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SpecPolyType_41, (MR_Integer) 0))));
                PolyContext_43 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SpecPolyType_41, (MR_Integer) 1))));
                {
                  SpecPrime_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 1) = ((MR_Box) (PolyContext_43));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 2) = ((MR_Box) (HeadVar__6_6));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 3) = ((MR_Box) (HeadVar__7_7));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 4) = ((MR_Box) (HeadVar__8_8));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 5) = ((MR_Box) (IntVar_42));
                }
                ErrorsPrime_40 = (MR_Word) ((MR_Unsigned) 0U);
              }
              else
              {
                MR_Word Error_44;
                MR_Word Var_85;

                Var_85 = check_hlds__simplify__format_call__parse_string_format__abstract_poly_type_to_kind_1_f_0(SpecPolyType_41);
                {
                  Error_44 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), Error_44, 0) = ((MR_Box) (SpecNum_9));
                  MR_hl_field(MR_mktag(2), Error_44, 1) = ((MR_Box) (MR_Word) (SpecChar_38));
                  MR_hl_field(MR_mktag(2), Error_44, 2) = ((MR_Box) (Var_85));
                }
                {
                  SpecPrime_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), SpecPrime_39, 0) = ((MR_Box) (OverallContext_5));
                  MR_hl_field(MR_mktag(0), SpecPrime_39, 1) = ((MR_Box) ((MR_String) ""));
                }
                {
                  ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ErrorsPrime_40, 0) = ((MR_Box) (Error_44));
                  MR_hl_field(MR_mktag(1), ErrorsPrime_40, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
              }
            }
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Char) 101:
          {
            if ((STATE_VARIABLE_PolyTypes_0_3 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word Error_241;

              {
                Error_241 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Error_241, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), Error_241, 1) = ((MR_Box) (SpecNum_9));
                MR_hl_field(MR_mktag(3), Error_241, 2) = ((MR_Box) (MR_Word) (SpecChar_38));
              }
              {
                SpecPrime_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), SpecPrime_39, 0) = ((MR_Box) (OverallContext_5));
                MR_hl_field(MR_mktag(0), SpecPrime_39, 1) = ((MR_Box) ((MR_String) ""));
              }
              {
                ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ErrorsPrime_40, 0) = ((MR_Box) (Error_241));
                MR_hl_field(MR_mktag(1), ErrorsPrime_40, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              STATE_VARIABLE_PolyTypes_84_84 = STATE_VARIABLE_PolyTypes_0_3;
            }
            else
            {
              MR_Word SpecPolyType_258 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0))));
              MR_Word FloatVar_246;
              MR_Word PolyContext_251;

              STATE_VARIABLE_PolyTypes_84_84 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1))));
              succeeded = ((MR_tag((MR_Word) SpecPolyType_258)) == (MR_Integer) 0);
              if (succeeded)
              {
                FloatVar_246 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SpecPolyType_258, (MR_Integer) 0))));
                PolyContext_251 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SpecPolyType_258, (MR_Integer) 1))));
                {
                  SpecPrime_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 1) = ((MR_Box) (PolyContext_251));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 2) = ((MR_Box) (HeadVar__6_6));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 3) = ((MR_Box) (HeadVar__7_7));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 4) = ((MR_Box) (HeadVar__8_8));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 5) = ((MR_Box) ((MR_Integer) 0));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 6) = ((MR_Box) (FloatVar_246));
                }
                ErrorsPrime_40 = (MR_Word) ((MR_Unsigned) 0U);
              }
              else
              {
                MR_Word Var_242;
                MR_Word Error_245;

                Var_242 = check_hlds__simplify__format_call__parse_string_format__abstract_poly_type_to_kind_1_f_0(SpecPolyType_258);
                {
                  Error_245 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), Error_245, 0) = ((MR_Box) (SpecNum_9));
                  MR_hl_field(MR_mktag(2), Error_245, 1) = ((MR_Box) (MR_Word) (SpecChar_38));
                  MR_hl_field(MR_mktag(2), Error_245, 2) = ((MR_Box) (Var_242));
                }
                {
                  SpecPrime_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), SpecPrime_39, 0) = ((MR_Box) (OverallContext_5));
                  MR_hl_field(MR_mktag(0), SpecPrime_39, 1) = ((MR_Box) ((MR_String) ""));
                }
                {
                  ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ErrorsPrime_40, 0) = ((MR_Box) (Error_245));
                  MR_hl_field(MR_mktag(1), ErrorsPrime_40, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
              }
            }
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Char) 102:
          {
            if ((STATE_VARIABLE_PolyTypes_0_3 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word Error_282;

              {
                Error_282 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Error_282, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), Error_282, 1) = ((MR_Box) (SpecNum_9));
                MR_hl_field(MR_mktag(3), Error_282, 2) = ((MR_Box) (MR_Word) (SpecChar_38));
              }
              {
                SpecPrime_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), SpecPrime_39, 0) = ((MR_Box) (OverallContext_5));
                MR_hl_field(MR_mktag(0), SpecPrime_39, 1) = ((MR_Box) ((MR_String) ""));
              }
              {
                ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ErrorsPrime_40, 0) = ((MR_Box) (Error_282));
                MR_hl_field(MR_mktag(1), ErrorsPrime_40, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              STATE_VARIABLE_PolyTypes_84_84 = STATE_VARIABLE_PolyTypes_0_3;
            }
            else
            {
              MR_Word SpecPolyType_299 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0))));
              MR_Word FloatVar_287;
              MR_Word PolyContext_292;

              STATE_VARIABLE_PolyTypes_84_84 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1))));
              succeeded = ((MR_tag((MR_Word) SpecPolyType_299)) == (MR_Integer) 0);
              if (succeeded)
              {
                FloatVar_287 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SpecPolyType_299, (MR_Integer) 0))));
                PolyContext_292 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SpecPolyType_299, (MR_Integer) 1))));
                {
                  SpecPrime_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 1) = ((MR_Box) (PolyContext_292));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 2) = ((MR_Box) (HeadVar__6_6));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 3) = ((MR_Box) (HeadVar__7_7));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 4) = ((MR_Box) (HeadVar__8_8));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 5) = ((MR_Box) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 6) = ((MR_Box) (FloatVar_287));
                }
                ErrorsPrime_40 = (MR_Word) ((MR_Unsigned) 0U);
              }
              else
              {
                MR_Word Var_283;
                MR_Word Error_286;

                Var_283 = check_hlds__simplify__format_call__parse_string_format__abstract_poly_type_to_kind_1_f_0(SpecPolyType_299);
                {
                  Error_286 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), Error_286, 0) = ((MR_Box) (SpecNum_9));
                  MR_hl_field(MR_mktag(2), Error_286, 1) = ((MR_Box) (MR_Word) (SpecChar_38));
                  MR_hl_field(MR_mktag(2), Error_286, 2) = ((MR_Box) (Var_283));
                }
                {
                  SpecPrime_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), SpecPrime_39, 0) = ((MR_Box) (OverallContext_5));
                  MR_hl_field(MR_mktag(0), SpecPrime_39, 1) = ((MR_Box) ((MR_String) ""));
                }
                {
                  ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ErrorsPrime_40, 0) = ((MR_Box) (Error_286));
                  MR_hl_field(MR_mktag(1), ErrorsPrime_40, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
              }
            }
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Char) 103:
          {
            if ((STATE_VARIABLE_PolyTypes_0_3 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word Error_323;

              {
                Error_323 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Error_323, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), Error_323, 1) = ((MR_Box) (SpecNum_9));
                MR_hl_field(MR_mktag(3), Error_323, 2) = ((MR_Box) (MR_Word) (SpecChar_38));
              }
              {
                SpecPrime_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), SpecPrime_39, 0) = ((MR_Box) (OverallContext_5));
                MR_hl_field(MR_mktag(0), SpecPrime_39, 1) = ((MR_Box) ((MR_String) ""));
              }
              {
                ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ErrorsPrime_40, 0) = ((MR_Box) (Error_323));
                MR_hl_field(MR_mktag(1), ErrorsPrime_40, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              STATE_VARIABLE_PolyTypes_84_84 = STATE_VARIABLE_PolyTypes_0_3;
            }
            else
            {
              MR_Word SpecPolyType_340 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0))));
              MR_Word FloatVar_328;
              MR_Word PolyContext_333;

              STATE_VARIABLE_PolyTypes_84_84 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1))));
              succeeded = ((MR_tag((MR_Word) SpecPolyType_340)) == (MR_Integer) 0);
              if (succeeded)
              {
                FloatVar_328 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SpecPolyType_340, (MR_Integer) 0))));
                PolyContext_333 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SpecPolyType_340, (MR_Integer) 1))));
                {
                  SpecPrime_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 1) = ((MR_Box) (PolyContext_333));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 2) = ((MR_Box) (HeadVar__6_6));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 3) = ((MR_Box) (HeadVar__7_7));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 4) = ((MR_Box) (HeadVar__8_8));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 5) = ((MR_Box) ((MR_Integer) 4));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 6) = ((MR_Box) (FloatVar_328));
                }
                ErrorsPrime_40 = (MR_Word) ((MR_Unsigned) 0U);
              }
              else
              {
                MR_Word Var_324;
                MR_Word Error_327;

                Var_324 = check_hlds__simplify__format_call__parse_string_format__abstract_poly_type_to_kind_1_f_0(SpecPolyType_340);
                {
                  Error_327 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), Error_327, 0) = ((MR_Box) (SpecNum_9));
                  MR_hl_field(MR_mktag(2), Error_327, 1) = ((MR_Box) (MR_Word) (SpecChar_38));
                  MR_hl_field(MR_mktag(2), Error_327, 2) = ((MR_Box) (Var_324));
                }
                {
                  SpecPrime_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), SpecPrime_39, 0) = ((MR_Box) (OverallContext_5));
                  MR_hl_field(MR_mktag(0), SpecPrime_39, 1) = ((MR_Box) ((MR_String) ""));
                }
                {
                  ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ErrorsPrime_40, 0) = ((MR_Box) (Error_327));
                  MR_hl_field(MR_mktag(1), ErrorsPrime_40, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
              }
            }
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Char) 111:
          {
            if ((STATE_VARIABLE_PolyTypes_0_3 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word Error_364;

              {
                Error_364 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Error_364, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), Error_364, 1) = ((MR_Box) (SpecNum_9));
                MR_hl_field(MR_mktag(3), Error_364, 2) = ((MR_Box) (MR_Word) (SpecChar_38));
              }
              {
                SpecPrime_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), SpecPrime_39, 0) = ((MR_Box) (OverallContext_5));
                MR_hl_field(MR_mktag(0), SpecPrime_39, 1) = ((MR_Box) ((MR_String) ""));
              }
              {
                ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ErrorsPrime_40, 0) = ((MR_Box) (Error_364));
                MR_hl_field(MR_mktag(1), ErrorsPrime_40, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              STATE_VARIABLE_PolyTypes_84_84 = STATE_VARIABLE_PolyTypes_0_3;
            }
            else
            {
              MR_Word SpecPolyType_381 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0))));
              MR_Word IntVar_373;
              MR_Word PolyContext_374;

              STATE_VARIABLE_PolyTypes_84_84 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1))));
              succeeded = ((MR_tag((MR_Word) SpecPolyType_381)) == (MR_Integer) 1);
              if (succeeded)
              {
                IntVar_373 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SpecPolyType_381, (MR_Integer) 0))));
                PolyContext_374 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SpecPolyType_381, (MR_Integer) 1))));
                {
                  SpecPrime_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 1) = ((MR_Box) (PolyContext_374));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 2) = ((MR_Box) (HeadVar__6_6));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 3) = ((MR_Box) (HeadVar__7_7));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 4) = ((MR_Box) (HeadVar__8_8));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 5) = ((MR_Box) ((MR_Integer) 0));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 6) = ((MR_Box) (IntVar_373));
                }
                ErrorsPrime_40 = (MR_Word) ((MR_Unsigned) 0U);
              }
              else
              {
                MR_Word Var_365;
                MR_Word Error_368;

                Var_365 = check_hlds__simplify__format_call__parse_string_format__abstract_poly_type_to_kind_1_f_0(SpecPolyType_381);
                {
                  Error_368 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), Error_368, 0) = ((MR_Box) (SpecNum_9));
                  MR_hl_field(MR_mktag(2), Error_368, 1) = ((MR_Box) (MR_Word) (SpecChar_38));
                  MR_hl_field(MR_mktag(2), Error_368, 2) = ((MR_Box) (Var_365));
                }
                {
                  SpecPrime_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), SpecPrime_39, 0) = ((MR_Box) (OverallContext_5));
                  MR_hl_field(MR_mktag(0), SpecPrime_39, 1) = ((MR_Box) ((MR_String) ""));
                }
                {
                  ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ErrorsPrime_40, 0) = ((MR_Box) (Error_368));
                  MR_hl_field(MR_mktag(1), ErrorsPrime_40, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
              }
            }
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Char) 112:
          {
            MR_Word STATE_VARIABLE_Flags_74_435;
            MR_Word Var_152 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__6_6, (MR_Integer) 0))) >> (MR_Integer) 3)) & (MR_Integer) 1);
            MR_Word Var_153 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__6_6, (MR_Integer) 0))) >> (MR_Integer) 2)) & (MR_Integer) 1);
            MR_Word Var_154 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__6_6, (MR_Integer) 0))) >> (MR_Integer) 1)) & (MR_Integer) 1);
            MR_Word Var_155 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__6_6, (MR_Integer) 0))) & (MR_Integer) 1);
            MR_Unsigned packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__6_6, (MR_Integer) 0)));

            {
              STATE_VARIABLE_Flags_74_435 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Flags_74_435, 0) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << (MR_Integer) 4)) | (((((MR_Unsigned) (Var_152) << (MR_Integer) 3)) | (((((MR_Unsigned) (Var_153) << (MR_Integer) 2)) | (((((MR_Unsigned) (Var_154) << (MR_Integer) 1)) | (MR_Unsigned) (Var_155)))))))));
            }
            if ((STATE_VARIABLE_PolyTypes_0_3 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word Error_406;

              {
                Error_406 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Error_406, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), Error_406, 1) = ((MR_Box) (SpecNum_9));
                MR_hl_field(MR_mktag(3), Error_406, 2) = ((MR_Box) (MR_Word) (SpecChar_38));
              }
              {
                SpecPrime_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), SpecPrime_39, 0) = ((MR_Box) (OverallContext_5));
                MR_hl_field(MR_mktag(0), SpecPrime_39, 1) = ((MR_Box) ((MR_String) ""));
              }
              {
                ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ErrorsPrime_40, 0) = ((MR_Box) (Error_406));
                MR_hl_field(MR_mktag(1), ErrorsPrime_40, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              STATE_VARIABLE_PolyTypes_84_84 = STATE_VARIABLE_PolyTypes_0_3;
            }
            else
            {
              MR_Word SpecPolyType_423 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0))));
              MR_Word IntVar_415;
              MR_Word PolyContext_416;

              STATE_VARIABLE_PolyTypes_84_84 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1))));
              succeeded = ((MR_tag((MR_Word) SpecPolyType_423)) == (MR_Integer) 1);
              if (succeeded)
              {
                IntVar_415 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SpecPolyType_423, (MR_Integer) 0))));
                PolyContext_416 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SpecPolyType_423, (MR_Integer) 1))));
                {
                  SpecPrime_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 1) = ((MR_Box) (PolyContext_416));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 2) = ((MR_Box) (STATE_VARIABLE_Flags_74_435));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 3) = ((MR_Box) (HeadVar__7_7));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 4) = ((MR_Box) (HeadVar__8_8));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 5) = ((MR_Box) ((MR_Integer) 4));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 6) = ((MR_Box) (IntVar_415));
                }
                ErrorsPrime_40 = (MR_Word) ((MR_Unsigned) 0U);
              }
              else
              {
                MR_Word Var_407;
                MR_Word Error_410;

                Var_407 = check_hlds__simplify__format_call__parse_string_format__abstract_poly_type_to_kind_1_f_0(SpecPolyType_423);
                {
                  Error_410 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), Error_410, 0) = ((MR_Box) (SpecNum_9));
                  MR_hl_field(MR_mktag(2), Error_410, 1) = ((MR_Box) (MR_Word) (SpecChar_38));
                  MR_hl_field(MR_mktag(2), Error_410, 2) = ((MR_Box) (Var_407));
                }
                {
                  SpecPrime_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), SpecPrime_39, 0) = ((MR_Box) (OverallContext_5));
                  MR_hl_field(MR_mktag(0), SpecPrime_39, 1) = ((MR_Box) ((MR_String) ""));
                }
                {
                  ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ErrorsPrime_40, 0) = ((MR_Box) (Error_410));
                  MR_hl_field(MR_mktag(1), ErrorsPrime_40, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
              }
            }
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Char) 115:
          {
            if ((STATE_VARIABLE_PolyTypes_0_3 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word Error_143;

              {
                Error_143 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Error_143, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), Error_143, 1) = ((MR_Box) (SpecNum_9));
                MR_hl_field(MR_mktag(3), Error_143, 2) = ((MR_Box) (MR_Word) (SpecChar_38));
              }
              {
                SpecPrime_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), SpecPrime_39, 0) = ((MR_Box) (OverallContext_5));
                MR_hl_field(MR_mktag(0), SpecPrime_39, 1) = ((MR_Box) ((MR_String) ""));
              }
              {
                ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ErrorsPrime_40, 0) = ((MR_Box) (Error_143));
                MR_hl_field(MR_mktag(1), ErrorsPrime_40, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              STATE_VARIABLE_PolyTypes_84_84 = STATE_VARIABLE_PolyTypes_0_3;
            }
            else
            {
              MR_Word SpecPolyType_140 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0))));
              MR_Word StrVar_49;
              MR_Word PolyContext_138;

              STATE_VARIABLE_PolyTypes_84_84 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1))));
              succeeded = ((MR_tag((MR_Word) SpecPolyType_140)) == (MR_Integer) 2);
              if (succeeded)
              {
                StrVar_49 = ((MR_Word) ((MR_hl_field(MR_mktag(2), SpecPolyType_140, (MR_Integer) 0))));
                PolyContext_138 = ((MR_Word) ((MR_hl_field(MR_mktag(2), SpecPolyType_140, (MR_Integer) 1))));
                {
                  SpecPrime_39 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), SpecPrime_39, 0) = ((MR_Box) (PolyContext_138));
                  MR_hl_field(MR_mktag(2), SpecPrime_39, 1) = ((MR_Box) (HeadVar__6_6));
                  MR_hl_field(MR_mktag(2), SpecPrime_39, 2) = ((MR_Box) (HeadVar__7_7));
                  MR_hl_field(MR_mktag(2), SpecPrime_39, 3) = ((MR_Box) (HeadVar__8_8));
                  MR_hl_field(MR_mktag(2), SpecPrime_39, 4) = ((MR_Box) (StrVar_49));
                }
                ErrorsPrime_40 = (MR_Word) ((MR_Unsigned) 0U);
              }
              else
              {
                MR_Word Var_59;
                MR_Word Error_137;

                Var_59 = check_hlds__simplify__format_call__parse_string_format__abstract_poly_type_to_kind_1_f_0(SpecPolyType_140);
                {
                  Error_137 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), Error_137, 0) = ((MR_Box) (SpecNum_9));
                  MR_hl_field(MR_mktag(2), Error_137, 1) = ((MR_Box) (MR_Word) (SpecChar_38));
                  MR_hl_field(MR_mktag(2), Error_137, 2) = ((MR_Box) (Var_59));
                }
                {
                  SpecPrime_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), SpecPrime_39, 0) = ((MR_Box) (OverallContext_5));
                  MR_hl_field(MR_mktag(0), SpecPrime_39, 1) = ((MR_Box) ((MR_String) ""));
                }
                {
                  ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ErrorsPrime_40, 0) = ((MR_Box) (Error_137));
                  MR_hl_field(MR_mktag(1), ErrorsPrime_40, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
              }
            }
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Char) 117:
          {
            if ((STATE_VARIABLE_PolyTypes_0_3 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word Error_448;

              {
                Error_448 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Error_448, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), Error_448, 1) = ((MR_Box) (SpecNum_9));
                MR_hl_field(MR_mktag(3), Error_448, 2) = ((MR_Box) (MR_Word) (SpecChar_38));
              }
              {
                SpecPrime_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), SpecPrime_39, 0) = ((MR_Box) (OverallContext_5));
                MR_hl_field(MR_mktag(0), SpecPrime_39, 1) = ((MR_Box) ((MR_String) ""));
              }
              {
                ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ErrorsPrime_40, 0) = ((MR_Box) (Error_448));
                MR_hl_field(MR_mktag(1), ErrorsPrime_40, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              STATE_VARIABLE_PolyTypes_84_84 = STATE_VARIABLE_PolyTypes_0_3;
            }
            else
            {
              MR_Word SpecPolyType_465 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0))));
              MR_Word IntVar_457;
              MR_Word PolyContext_458;

              STATE_VARIABLE_PolyTypes_84_84 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1))));
              succeeded = ((MR_tag((MR_Word) SpecPolyType_465)) == (MR_Integer) 1);
              if (succeeded)
              {
                IntVar_457 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SpecPolyType_465, (MR_Integer) 0))));
                PolyContext_458 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SpecPolyType_465, (MR_Integer) 1))));
                {
                  SpecPrime_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 1) = ((MR_Box) (PolyContext_458));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 2) = ((MR_Box) (HeadVar__6_6));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 3) = ((MR_Box) (HeadVar__7_7));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 4) = ((MR_Box) (HeadVar__8_8));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 5) = ((MR_Box) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 6) = ((MR_Box) (IntVar_457));
                }
                ErrorsPrime_40 = (MR_Word) ((MR_Unsigned) 0U);
              }
              else
              {
                MR_Word Var_449;
                MR_Word Error_452;

                Var_449 = check_hlds__simplify__format_call__parse_string_format__abstract_poly_type_to_kind_1_f_0(SpecPolyType_465);
                {
                  Error_452 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), Error_452, 0) = ((MR_Box) (SpecNum_9));
                  MR_hl_field(MR_mktag(2), Error_452, 1) = ((MR_Box) (MR_Word) (SpecChar_38));
                  MR_hl_field(MR_mktag(2), Error_452, 2) = ((MR_Box) (Var_449));
                }
                {
                  SpecPrime_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), SpecPrime_39, 0) = ((MR_Box) (OverallContext_5));
                  MR_hl_field(MR_mktag(0), SpecPrime_39, 1) = ((MR_Box) ((MR_String) ""));
                }
                {
                  ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ErrorsPrime_40, 0) = ((MR_Box) (Error_452));
                  MR_hl_field(MR_mktag(1), ErrorsPrime_40, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
              }
            }
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Char) 120:
          {
            if ((STATE_VARIABLE_PolyTypes_0_3 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word Error_490;

              {
                Error_490 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Error_490, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), Error_490, 1) = ((MR_Box) (SpecNum_9));
                MR_hl_field(MR_mktag(3), Error_490, 2) = ((MR_Box) (MR_Word) (SpecChar_38));
              }
              {
                SpecPrime_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), SpecPrime_39, 0) = ((MR_Box) (OverallContext_5));
                MR_hl_field(MR_mktag(0), SpecPrime_39, 1) = ((MR_Box) ((MR_String) ""));
              }
              {
                ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ErrorsPrime_40, 0) = ((MR_Box) (Error_490));
                MR_hl_field(MR_mktag(1), ErrorsPrime_40, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              STATE_VARIABLE_PolyTypes_84_84 = STATE_VARIABLE_PolyTypes_0_3;
            }
            else
            {
              MR_Word SpecPolyType_507 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0))));
              MR_Word IntVar_499;
              MR_Word PolyContext_500;

              STATE_VARIABLE_PolyTypes_84_84 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1))));
              succeeded = ((MR_tag((MR_Word) SpecPolyType_507)) == (MR_Integer) 1);
              if (succeeded)
              {
                IntVar_499 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SpecPolyType_507, (MR_Integer) 0))));
                PolyContext_500 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SpecPolyType_507, (MR_Integer) 1))));
                {
                  SpecPrime_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 1) = ((MR_Box) (PolyContext_500));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 2) = ((MR_Box) (HeadVar__6_6));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 3) = ((MR_Box) (HeadVar__7_7));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 4) = ((MR_Box) (HeadVar__8_8));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 5) = ((MR_Box) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 6) = ((MR_Box) (IntVar_499));
                }
                ErrorsPrime_40 = (MR_Word) ((MR_Unsigned) 0U);
              }
              else
              {
                MR_Word Var_491;
                MR_Word Error_494;

                Var_491 = check_hlds__simplify__format_call__parse_string_format__abstract_poly_type_to_kind_1_f_0(SpecPolyType_507);
                {
                  Error_494 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), Error_494, 0) = ((MR_Box) (SpecNum_9));
                  MR_hl_field(MR_mktag(2), Error_494, 1) = ((MR_Box) (MR_Word) (SpecChar_38));
                  MR_hl_field(MR_mktag(2), Error_494, 2) = ((MR_Box) (Var_491));
                }
                {
                  SpecPrime_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), SpecPrime_39, 0) = ((MR_Box) (OverallContext_5));
                  MR_hl_field(MR_mktag(0), SpecPrime_39, 1) = ((MR_Box) ((MR_String) ""));
                }
                {
                  ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ErrorsPrime_40, 0) = ((MR_Box) (Error_494));
                  MR_hl_field(MR_mktag(1), ErrorsPrime_40, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
              }
            }
            succeeded = MR_TRUE;
          }
          break;
      }
      if (succeeded)
      {
        *STATE_VARIABLE_PolyTypes_4 = STATE_VARIABLE_PolyTypes_84_84;
        *Spec_10 = SpecPrime_39;
        *Errors_11 = ErrorsPrime_40;
      }
      else
      {
        MR_Word Error_150;

        {
          Error_150 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Error_150, 0) = ((MR_Box) (SpecNum_9));
          MR_hl_field(MR_mktag(1), Error_150, 1) = ((MR_Box) (MR_Word) (SpecChar_38));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          *Spec_10 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (OverallContext_5));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_String) ""));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *Errors_11 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Error_150));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        *STATE_VARIABLE_PolyTypes_4 = STATE_VARIABLE_PolyTypes_0_3;
      }
    }
  }
}

static MR_Word MR_CALL 
check_hlds__simplify__format_call__parse_string_format__abstract_poly_type_to_kind_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word HeadVar__2_2;

    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        HeadVar__2_2 = (MR_Integer) 3;
        break;
      case (MR_Integer) 1:
        HeadVar__2_2 = (MR_Integer) 2;
        break;
      case (MR_Integer) 2:
        HeadVar__2_2 = (MR_Integer) 1;
        break;
      case (MR_Integer) 3:
        HeadVar__2_2 = (MR_Integer) 0;
        break;
    }
    return HeadVar__2_2;
  }
}

static void MR_CALL 
check_hlds__simplify__format_call__parse_string_format__get_optional_prec_7_p_0(
  MR_Word STATE_VARIABLE_Chars_0_17,
  MR_Word * STATE_VARIABLE_Chars_18,
  MR_Word STATE_VARIABLE_PolyTypes_0_19,
  MR_Word * STATE_VARIABLE_PolyTypes_20,
  MR_Integer SpecNum_10,
  MR_Word * MaybePrec_11,
  MR_Word * Errors_12)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) STATE_VARIABLE_Chars_0_17)) == (MR_Integer) 1);
    MR_Word STATE_VARIABLE_Chars_21_21;
    MR_Char Var_22;

    if (succeeded)
    {
      Var_22 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_Chars_0_17, (MR_Integer) 0)));
      STATE_VARIABLE_Chars_21_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_Chars_0_17, (MR_Integer) 1))));
      succeeded = (Var_22 == (MR_Char) 46);
    }
    if (succeeded)
    {
      MR_Word STATE_VARIABLE_Chars_23_23;
      MR_Char Var_24;

      succeeded = ((MR_tag((MR_Word) STATE_VARIABLE_Chars_21_21)) == (MR_Integer) 1);
      if (succeeded)
      {
        Var_24 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_Chars_21_21, (MR_Integer) 0)));
        STATE_VARIABLE_Chars_23_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_Chars_21_21, (MR_Integer) 1))));
        succeeded = (Var_24 == (MR_Char) 42);
      }
      if (succeeded)
      {
        *STATE_VARIABLE_Chars_18 = STATE_VARIABLE_Chars_23_23;
        if ((STATE_VARIABLE_PolyTypes_0_19 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Var_25;

          *MaybePrec_11 = (MR_Word) ((MR_Unsigned) 0U);
          {
            Var_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
            MR_hl_field(MR_mktag(3), Var_25, 1) = ((MR_Box) (SpecNum_10));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *Errors_12 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_25));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          *STATE_VARIABLE_PolyTypes_20 = STATE_VARIABLE_PolyTypes_0_19;
        }
        else
        {
          MR_Word PolyType_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_19, (MR_Integer) 0))));
          MR_Word PolyPrecVar_14;

          *STATE_VARIABLE_PolyTypes_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_19, (MR_Integer) 1))));
          succeeded = ((MR_tag((MR_Word) PolyType_13)) == (MR_Integer) 1);
          if (succeeded)
          {
            PolyPrecVar_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PolyType_13, (MR_Integer) 0))));
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *MaybePrec_11 = base;
              MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (PolyPrecVar_14));
            }
            *Errors_12 = (MR_Word) ((MR_Unsigned) 0U);
          }
          else
          {
            MR_Word Var_28;
            MR_Word Var_29;

            *MaybePrec_11 = (MR_Word) ((MR_Unsigned) 0U);
            switch (MR_tag((MR_Word) PolyType_13)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                Var_29 = (MR_Integer) 3;
                break;
              case (MR_Integer) 1:
                Var_29 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                Var_29 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                Var_29 = (MR_Integer) 0;
                break;
            }
            {
              Var_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_28, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
              MR_hl_field(MR_mktag(3), Var_28, 1) = ((MR_Box) (SpecNum_10));
              MR_hl_field(MR_mktag(3), Var_28, 2) = ((MR_Box) (Var_29));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *Errors_12 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_28));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
          }
        }
      }
      else
      {
        MR_Integer Prec_16;

        mercury__string__parse_util__get_number_prefix_3_p_0(STATE_VARIABLE_Chars_21_21, STATE_VARIABLE_Chars_18, &Prec_16);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *MaybePrec_11 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Prec_16));
        }
        *Errors_12 = (MR_Word) ((MR_Unsigned) 0U);
        *STATE_VARIABLE_PolyTypes_20 = STATE_VARIABLE_PolyTypes_0_19;
      }
    }
    else
    {
      *MaybePrec_11 = (MR_Word) ((MR_Unsigned) 0U);
      *Errors_12 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_PolyTypes_20 = STATE_VARIABLE_PolyTypes_0_19;
      *STATE_VARIABLE_Chars_18 = STATE_VARIABLE_Chars_0_17;
    }
  }
}

static void MR_CALL 
check_hlds__simplify__format_call__parse_string_format__merge_adjacent_const_strs_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word HeadSpec_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word TailSpecs_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word TailMergedSpecs_6;

      check_hlds__simplify__format_call__parse_string_format__merge_adjacent_const_strs_2_p_0(TailSpecs_4, &TailMergedSpecs_6);
      switch (MR_tag((MR_Word) HeadSpec_3)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word HeadContext_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadSpec_3, (MR_Integer) 0))));
            MR_String HeadConstString_8 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadSpec_3, (MR_Integer) 1))));
            MR_Word LaterTailMergedSpecs_10;
            MR_String TailConstString_12;
            MR_Word FirstTailMergedSpec_9;

            succeeded = ((MR_tag((MR_Word) TailMergedSpecs_6)) == (MR_Integer) 1);
            if (succeeded)
            {
              FirstTailMergedSpec_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TailMergedSpecs_6, (MR_Integer) 0))));
              LaterTailMergedSpecs_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TailMergedSpecs_6, (MR_Integer) 1))));
              succeeded = ((MR_tag((MR_Word) FirstTailMergedSpec_9)) == (MR_Integer) 0);
              if (succeeded)
                TailConstString_12 = ((MR_String) ((MR_hl_field(MR_mktag(0), FirstTailMergedSpec_9, (MR_Integer) 1))));
            }
            if (succeeded)
            {
              MR_Word HeadMergedSpec_13;
              MR_String Var_40;

              Var_40 = mercury__string__f_43_43_2_f_0(HeadConstString_8, TailConstString_12);
              {
                HeadMergedSpec_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), HeadMergedSpec_13, 0) = ((MR_Box) (HeadContext_7));
                MR_hl_field(MR_mktag(0), HeadMergedSpec_13, 1) = ((MR_Box) (Var_40));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *HeadVar__2_2 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadMergedSpec_13));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (LaterTailMergedSpecs_10));
              }
            }
            else
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *HeadVar__2_2 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadSpec_3));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailMergedSpecs_6));
              }
          }
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__2_2 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadSpec_3));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailMergedSpecs_6));
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__2_2 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadSpec_3));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailMergedSpecs_6));
          }
          break;
      }
    }
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__format_call__parse_string_format____Unify____abstract_poly_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__simplify__format_call__parse_string_format____Unify____abstract_poly_type_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__simplify__format_call__parse_string_format____Compare____abstract_poly_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__simplify__format_call__parse_string_format____Compare____abstract_poly_type_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__format_call__parse_string_format____Unify____compiler_format_maybe_prec_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__simplify__format_call__parse_string_format____Unify____compiler_format_maybe_prec_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__simplify__format_call__parse_string_format____Compare____compiler_format_maybe_prec_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__simplify__format_call__parse_string_format____Compare____compiler_format_maybe_prec_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__format_call__parse_string_format____Unify____compiler_format_maybe_width_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__simplify__format_call__parse_string_format____Unify____compiler_format_maybe_width_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__simplify__format_call__parse_string_format____Compare____compiler_format_maybe_width_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__simplify__format_call__parse_string_format____Compare____compiler_format_maybe_width_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__format_call__parse_string_format____Unify____compiler_format_spec_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__simplify__format_call__parse_string_format____Unify____compiler_format_spec_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__simplify__format_call__parse_string_format____Compare____compiler_format_spec_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__simplify__format_call__parse_string_format____Compare____compiler_format_spec_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__check_hlds__simplify__format_call__parse_string_format__init(void)
{
}

void mercury__check_hlds__simplify__format_call__parse_string_format__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__type_ctor_info_abstract_poly_type_0);
	MR_register_type_ctor_info(&check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__type_ctor_info_compiler_format_maybe_prec_0);
	MR_register_type_ctor_info(&check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__type_ctor_info_compiler_format_maybe_width_0);
	MR_register_type_ctor_info(&check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__type_ctor_info_compiler_format_spec_0);
}

void mercury__check_hlds__simplify__format_call__parse_string_format__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__simplify__format_call__parse_string_format__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module check_hlds.simplify.format_call.parse_string_format.
