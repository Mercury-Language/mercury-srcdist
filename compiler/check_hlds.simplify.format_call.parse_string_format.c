/*
** Automatically generated from `parse_string_format.m'
** by the Mercury compiler,
** version rotd-2020-08-09
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
#include "array.mih"
#include "assoc_list.mih"
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
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "multi_map.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "recompilation.mih"
#include "require.mih"
#include "robdd.mih"
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
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.simplify.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.goal_path.mih"
#include "hlds.goal_util.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
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
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.builtin_modules.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.builtin_lib_types.mih"
#include "parse_tree.error_util.mih"
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
#include "string.parse_util.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "check_hlds.simplify.common.mih"
#include "check_hlds.simplify.format_call.mih"
#include "check_hlds.simplify.simplify_goal_call.mih"
#include "check_hlds.simplify.simplify_info.mih"
#include "hlds.hlds_out.hlds_out_goal.mih"
#include "hlds.hlds_out.hlds_out_util.mih"




static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__format_call__parse_string_format__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_PseudoTypeInfo check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__field_types_abstract_poly_type_0_0[2];

static const MR_DuFunctorDesc check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_abstract_poly_type_0_0;

static const MR_PseudoTypeInfo check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__field_types_abstract_poly_type_0_1[2];

static const MR_DuFunctorDesc check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_abstract_poly_type_0_1;

static const MR_PseudoTypeInfo check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__field_types_abstract_poly_type_0_2[2];

static const MR_DuFunctorDesc check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_abstract_poly_type_0_2;

static const MR_PseudoTypeInfo check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__field_types_abstract_poly_type_0_3[2];

static const MR_DuFunctorDesc check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_abstract_poly_type_0_3;

static const MR_PseudoTypeInfo check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__field_types_abstract_poly_type_0_4[2];

static const MR_DuFunctorDesc check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_abstract_poly_type_0_4;

static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_stag_ordered_abstract_poly_type_0_0[1];

static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_stag_ordered_abstract_poly_type_0_1[1];

static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_stag_ordered_abstract_poly_type_0_2[1];

static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_stag_ordered_abstract_poly_type_0_3[2];

static const MR_DuPtagLayout check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_ptag_ordered_abstract_poly_type_0[4];

static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_name_ordered_abstract_poly_type_0[5];

static const MR_Integer check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__functor_number_map_abstract_poly_type_0[5];

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

static const MR_DuArgLocn check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__field_locns_compiler_format_spec_0_4[6];

static const MR_DuFunctorDesc check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_compiler_format_spec_0_4;

static const MR_PseudoTypeInfo check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__field_types_compiler_format_spec_0_5[6];

static const MR_DuArgLocn check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__field_locns_compiler_format_spec_0_5[6];

static const MR_DuFunctorDesc check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_compiler_format_spec_0_5;

static const MR_PseudoTypeInfo check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__field_types_compiler_format_spec_0_6[6];

static const MR_DuArgLocn check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__field_locns_compiler_format_spec_0_6[6];

static const MR_DuFunctorDesc check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_compiler_format_spec_0_6;

static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_stag_ordered_compiler_format_spec_0_0[1];

static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_stag_ordered_compiler_format_spec_0_1[1];

static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_stag_ordered_compiler_format_spec_0_2[1];

static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_stag_ordered_compiler_format_spec_0_3[4];

static const MR_DuPtagLayout check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_ptag_ordered_compiler_format_spec_0[4];

static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_name_ordered_compiler_format_spec_0[7];

static const MR_Integer check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__functor_number_map_compiler_format_spec_0[7];

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
    (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1))))))))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



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
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
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
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
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
  (MR_String) "apt_u",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
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
  (MR_String) "apt_s",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 0,
  INT32_C(3),
  check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__field_types_abstract_poly_type_0_3,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__field_types_abstract_poly_type_0_4[2] = {
  (MR_PseudoTypeInfo) (&check_hlds__simplify__format_call__parse_string_format__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_context_0)
};

static const MR_DuFunctorDesc check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_abstract_poly_type_0_4 = {
  (MR_String) "apt_c",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 1,
  INT32_C(4),
  check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__field_types_abstract_poly_type_0_4,
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

static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_stag_ordered_abstract_poly_type_0_3[2] = {
  &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_abstract_poly_type_0_3,
  &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_abstract_poly_type_0_4
};

static const MR_DuPtagLayout check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_ptag_ordered_abstract_poly_type_0[4] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_stag_ordered_abstract_poly_type_0_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_stag_ordered_abstract_poly_type_0_1,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_stag_ordered_abstract_poly_type_0_2,
    INT8_C(-1)
  },
  {
    UINT32_C(2),
    MR_SECTAG_REMOTE_FULL_WORD,
    check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_stag_ordered_abstract_poly_type_0_3,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_name_ordered_abstract_poly_type_0[5] = {
  &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_abstract_poly_type_0_4,
  &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_abstract_poly_type_0_0,
  &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_abstract_poly_type_0_1,
  &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_abstract_poly_type_0_3,
  &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_abstract_poly_type_0_2
};

static const MR_Integer check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__functor_number_map_abstract_poly_type_0[5] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 4,
  (MR_Integer) 3,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__type_ctor_info_abstract_poly_type_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__simplify__format_call__parse_string_format____Unify____abstract_poly_type_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__format_call__parse_string_format____Compare____abstract_poly_type_0_0_10001)),
  (MR_String) "check_hlds.simplify.format_call.parse_string_format",
  (MR_String) "abstract_poly_type",
  {     check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_name_ordered_abstract_poly_type_0 },
  {     check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_ptag_ordered_abstract_poly_type_0 },
  (MR_Integer) 5,
  UINT16_C(4),
  check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__functor_number_map_abstract_poly_type_0
};

static const MR_DuFunctorDesc check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_compiler_format_maybe_prec_0_0 = {
  (MR_String) "compiler_no_specified_prec",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(0),
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
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
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
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
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
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_stag_ordered_compiler_format_maybe_prec_0_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_stag_ordered_compiler_format_maybe_prec_0_1,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
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
  UINT8_C(17),
  INT8_C(3),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__simplify__format_call__parse_string_format____Unify____compiler_format_maybe_prec_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__format_call__parse_string_format____Compare____compiler_format_maybe_prec_0_0_10001)),
  (MR_String) "check_hlds.simplify.format_call.parse_string_format",
  (MR_String) "compiler_format_maybe_prec",
  {     check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_name_ordered_compiler_format_maybe_prec_0 },
  {     check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_ptag_ordered_compiler_format_maybe_prec_0 },
  (MR_Integer) 3,
  UINT16_C(4),
  check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__functor_number_map_compiler_format_maybe_prec_0
};

static const MR_DuFunctorDesc check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_compiler_format_maybe_width_0_0 = {
  (MR_String) "compiler_no_specified_width",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(0),
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
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
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
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
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
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_stag_ordered_compiler_format_maybe_width_0_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_stag_ordered_compiler_format_maybe_width_0_1,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
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
  UINT8_C(17),
  INT8_C(3),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__simplify__format_call__parse_string_format____Unify____compiler_format_maybe_width_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__format_call__parse_string_format____Compare____compiler_format_maybe_width_0_0_10001)),
  (MR_String) "check_hlds.simplify.format_call.parse_string_format",
  (MR_String) "compiler_format_maybe_width",
  {     check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_name_ordered_compiler_format_maybe_width_0 },
  {     check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_ptag_ordered_compiler_format_maybe_width_0 },
  (MR_Integer) 3,
  UINT16_C(4),
  check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__functor_number_map_compiler_format_maybe_width_0
};

static const MR_PseudoTypeInfo check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__field_types_compiler_format_spec_0_0[2] = {
  (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_context_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_compiler_format_spec_0_0 = {
  (MR_String) "compiler_const_string",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
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
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
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
  INT16_C(5),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
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
  INT16_C(5),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 0,
  INT32_C(3),
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

static const MR_DuArgLocn check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__field_locns_compiler_format_spec_0_4[6] = {
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
    (MR_Integer) 3
  },
  {
    (MR_Integer) 5,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_compiler_format_spec_0_4 = {
  (MR_String) "compiler_spec_unsigned_int",
  INT16_C(6),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 1,
  INT32_C(4),
  check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__field_types_compiler_format_spec_0_4,
  NULL,
  check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__field_locns_compiler_format_spec_0_4,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__field_types_compiler_format_spec_0_5[6] = {
  (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_context_0),
  (MR_PseudoTypeInfo) (&mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_flags_0),
  (MR_PseudoTypeInfo) (&check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__type_ctor_info_compiler_format_maybe_width_0),
  (MR_PseudoTypeInfo) (&check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__type_ctor_info_compiler_format_maybe_prec_0),
  (MR_PseudoTypeInfo) (&mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_int_base_0),
  (MR_PseudoTypeInfo) (&check_hlds__simplify__format_call__parse_string_format__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
};

static const MR_DuArgLocn check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__field_locns_compiler_format_spec_0_5[6] = {
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
    (MR_Integer) 3
  },
  {
    (MR_Integer) 5,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_compiler_format_spec_0_5 = {
  (MR_String) "compiler_spec_uint",
  INT16_C(6),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 2,
  INT32_C(5),
  check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__field_types_compiler_format_spec_0_5,
  NULL,
  check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__field_locns_compiler_format_spec_0_5,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__field_types_compiler_format_spec_0_6[6] = {
  (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_context_0),
  (MR_PseudoTypeInfo) (&mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_flags_0),
  (MR_PseudoTypeInfo) (&check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__type_ctor_info_compiler_format_maybe_width_0),
  (MR_PseudoTypeInfo) (&check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__type_ctor_info_compiler_format_maybe_prec_0),
  (MR_PseudoTypeInfo) (&mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_float_kind_0),
  (MR_PseudoTypeInfo) (&check_hlds__simplify__format_call__parse_string_format__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
};

static const MR_DuArgLocn check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__field_locns_compiler_format_spec_0_6[6] = {
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
    (MR_Integer) 3
  },
  {
    (MR_Integer) 5,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_compiler_format_spec_0_6 = {
  (MR_String) "compiler_spec_float",
  INT16_C(6),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 3,
  INT32_C(6),
  check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__field_types_compiler_format_spec_0_6,
  NULL,
  check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__field_locns_compiler_format_spec_0_6,
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

static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_stag_ordered_compiler_format_spec_0_3[4] = {
  &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_compiler_format_spec_0_3,
  &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_compiler_format_spec_0_4,
  &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_compiler_format_spec_0_5,
  &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_compiler_format_spec_0_6
};

static const MR_DuPtagLayout check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_ptag_ordered_compiler_format_spec_0[4] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_stag_ordered_compiler_format_spec_0_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_stag_ordered_compiler_format_spec_0_1,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_stag_ordered_compiler_format_spec_0_2,
    INT8_C(-1)
  },
  {
    UINT32_C(4),
    MR_SECTAG_REMOTE_FULL_WORD,
    check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_stag_ordered_compiler_format_spec_0_3,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_name_ordered_compiler_format_spec_0[7] = {
  &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_compiler_format_spec_0_0,
  &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_compiler_format_spec_0_1,
  &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_compiler_format_spec_0_6,
  &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_compiler_format_spec_0_3,
  &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_compiler_format_spec_0_2,
  &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_compiler_format_spec_0_5,
  &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_functor_desc_compiler_format_spec_0_4
};

static const MR_Integer check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__functor_number_map_compiler_format_spec_0[7] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 4,
  (MR_Integer) 3,
  (MR_Integer) 6,
  (MR_Integer) 5,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__type_ctor_info_compiler_format_spec_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__simplify__format_call__parse_string_format____Unify____compiler_format_spec_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__format_call__parse_string_format____Compare____compiler_format_spec_0_0_10001)),
  (MR_String) "check_hlds.simplify.format_call.parse_string_format",
  (MR_String) "compiler_format_spec",
  {     check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_name_ordered_compiler_format_spec_0 },
  {     check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_ptag_ordered_compiler_format_spec_0 },
  (MR_Integer) 7,
  UINT16_C(4),
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
    MR_Integer CastX_507 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_508 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_507 == CastY_508);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_String Var_543 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
            MR_Word Var_544 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
                  MR_String ArgY2_8 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
                  MR_Word SubResult1_6;

                  mercury__term____Compare____context_0_0(&SubResult1_6, Var_544, ArgY1_5);
                  succeeded = (SubResult1_6 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult1_6;
                  else
                    mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, Var_543, ArgY2_8);
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
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
                  case (MR_Integer) 3:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_545 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 3))));
            MR_Word Var_546 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
            MR_Word Var_547 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
            MR_Word Var_548 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ArgY1_60 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
                  MR_Word ArgY2_63 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
                  MR_Word ArgY3_66 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 2))));
                  MR_Word ArgY4_69 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 3))));
                  MR_Word SubResult1_61;

                  mercury__term____Compare____context_0_0(&SubResult1_61, Var_548, ArgY1_60);
                  succeeded = (SubResult1_61 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult1_61;
                  else
                  {
                    MR_Word SubResult2_64;

                    mercury__string__parse_util____Compare____string_format_flags_0_0(&SubResult2_64, Var_547, ArgY2_63);
                    succeeded = (SubResult2_64 != (MR_Integer) 0);
                    if (succeeded)
                      *HeadVar__1_1 = SubResult2_64;
                    else
                    {
                      MR_Word SubResult3_67;

                      check_hlds__simplify__format_call__parse_string_format____Compare____compiler_format_maybe_width_0_0(&SubResult3_67, Var_546, ArgY3_66);
                      succeeded = (SubResult3_67 != (MR_Integer) 0);
                      if (succeeded)
                        *HeadVar__1_1 = SubResult3_67;
                      else
                        mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__simplify__format_call__parse_string_format_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (Var_545)), ((MR_Box) (ArgY4_69)));
                    }
                  }
                }
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
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
                  case (MR_Integer) 3:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Var_560 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 4))));
            MR_Word Var_561 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 3))));
            MR_Word Var_562 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 2))));
            MR_Word Var_563 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
            MR_Word Var_564 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));

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
                  MR_Word ArgY1_135 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))));
                  MR_Word ArgY2_138 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 1))));
                  MR_Word ArgY3_141 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 2))));
                  MR_Word ArgY4_144 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 3))));
                  MR_Word ArgY5_147 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 4))));
                  MR_Word SubResult1_136;

                  mercury__term____Compare____context_0_0(&SubResult1_136, Var_564, ArgY1_135);
                  succeeded = (SubResult1_136 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult1_136;
                  else
                  {
                    MR_Word SubResult2_139;

                    mercury__string__parse_util____Compare____string_format_flags_0_0(&SubResult2_139, Var_563, ArgY2_138);
                    succeeded = (SubResult2_139 != (MR_Integer) 0);
                    if (succeeded)
                      *HeadVar__1_1 = SubResult2_139;
                    else
                    {
                      MR_Word SubResult3_142;

                      check_hlds__simplify__format_call__parse_string_format____Compare____compiler_format_maybe_width_0_0(&SubResult3_142, Var_562, ArgY3_141);
                      succeeded = (SubResult3_142 != (MR_Integer) 0);
                      if (succeeded)
                        *HeadVar__1_1 = SubResult3_142;
                      else
                      {
                        MR_Word SubResult4_145;

                        check_hlds__simplify__format_call__parse_string_format____Compare____compiler_format_maybe_prec_0_0(&SubResult4_145, Var_561, ArgY4_144);
                        succeeded = (SubResult4_145 != (MR_Integer) 0);
                        if (succeeded)
                          *HeadVar__1_1 = SubResult4_145;
                        else
                          mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__simplify__format_call__parse_string_format_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (Var_560)), ((MR_Box) (ArgY5_147)));
                      }
                    }
                  }
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
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
                  case (MR_Integer) 3:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Var_555 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 5))));
                MR_Word Var_556 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 4))));
                MR_Word Var_557 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                MR_Word Var_558 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                MR_Word Var_559 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

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
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_Word ArgY1_218 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                          MR_Word ArgY2_221 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                          MR_Word ArgY3_224 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 3))));
                          MR_Word ArgY4_227 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 4))));
                          MR_Word ArgY5_230 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 5))));
                          MR_Word SubResult1_219;

                          mercury__term____Compare____context_0_0(&SubResult1_219, Var_559, ArgY1_218);
                          succeeded = (SubResult1_219 != (MR_Integer) 0);
                          if (succeeded)
                            *HeadVar__1_1 = SubResult1_219;
                          else
                          {
                            MR_Word SubResult2_222;

                            mercury__string__parse_util____Compare____string_format_flags_0_0(&SubResult2_222, Var_558, ArgY2_221);
                            succeeded = (SubResult2_222 != (MR_Integer) 0);
                            if (succeeded)
                              *HeadVar__1_1 = SubResult2_222;
                            else
                            {
                              MR_Word SubResult3_225;

                              check_hlds__simplify__format_call__parse_string_format____Compare____compiler_format_maybe_width_0_0(&SubResult3_225, Var_557, ArgY3_224);
                              succeeded = (SubResult3_225 != (MR_Integer) 0);
                              if (succeeded)
                                *HeadVar__1_1 = SubResult3_225;
                              else
                              {
                                MR_Word SubResult4_228;

                                check_hlds__simplify__format_call__parse_string_format____Compare____compiler_format_maybe_prec_0_0(&SubResult4_228, Var_556, ArgY4_227);
                                succeeded = (SubResult4_228 != (MR_Integer) 0);
                                if (succeeded)
                                  *HeadVar__1_1 = SubResult4_228;
                                else
                                  mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__simplify__format_call__parse_string_format_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (Var_555)), ((MR_Box) (ArgY5_230)));
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
                      case (MR_Integer) 3:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Var_571 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 6))));
                MR_Word Var_572 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 5))) & (MR_Integer) 7);
                MR_Word Var_573 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 4))));
                MR_Word Var_574 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                MR_Word Var_575 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                MR_Word Var_576 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

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
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word ArgY1_305 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                          MR_Word ArgY2_308 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                          MR_Word ArgY3_311 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 3))));
                          MR_Word ArgY4_314 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 4))));
                          MR_Word ArgY5_317 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 5))) & (MR_Integer) 7);
                          MR_Word ArgY6_320 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 6))));
                          MR_Word SubResult1_306;

                          mercury__term____Compare____context_0_0(&SubResult1_306, Var_576, ArgY1_305);
                          succeeded = (SubResult1_306 != (MR_Integer) 0);
                          if (succeeded)
                            *HeadVar__1_1 = SubResult1_306;
                          else
                          {
                            MR_Word SubResult2_309;

                            mercury__string__parse_util____Compare____string_format_flags_0_0(&SubResult2_309, Var_575, ArgY2_308);
                            succeeded = (SubResult2_309 != (MR_Integer) 0);
                            if (succeeded)
                              *HeadVar__1_1 = SubResult2_309;
                            else
                            {
                              MR_Word SubResult3_312;

                              check_hlds__simplify__format_call__parse_string_format____Compare____compiler_format_maybe_width_0_0(&SubResult3_312, Var_574, ArgY3_311);
                              succeeded = (SubResult3_312 != (MR_Integer) 0);
                              if (succeeded)
                                *HeadVar__1_1 = SubResult3_312;
                              else
                              {
                                MR_Word SubResult4_315;

                                check_hlds__simplify__format_call__parse_string_format____Compare____compiler_format_maybe_prec_0_0(&SubResult4_315, Var_573, ArgY4_314);
                                succeeded = (SubResult4_315 != (MR_Integer) 0);
                                if (succeeded)
                                  *HeadVar__1_1 = SubResult4_315;
                                else
                                {
                                  MR_Word SubResult5_318;
                                  MR_Integer Var_581 = (MR_Integer) (Var_572);
                                  MR_Integer Var_582 = (MR_Integer) (ArgY5_317);

                                  succeeded = (Var_581 < Var_582);
                                  if (succeeded)
                                  {
                                    SubResult5_318 = (MR_Integer) 1;
                                    succeeded = MR_TRUE;
                                  }
                                  else
                                  {
                                    succeeded = (Var_581 > Var_582);
                                    if (succeeded)
                                    {
                                      SubResult5_318 = (MR_Integer) 2;
                                      succeeded = MR_TRUE;
                                    }
                                    else
                                    {
                                      succeeded = MR_TRUE;
                                      succeeded = !(succeeded);
                                      if (succeeded)
                                      {
                                        SubResult5_318 = (MR_Integer) 0;
                                        succeeded = MR_TRUE;
                                      }
                                    }
                                  }
                                  if (succeeded)
                                    *HeadVar__1_1 = SubResult5_318;
                                  else
                                    mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__simplify__format_call__parse_string_format_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (Var_571)), ((MR_Box) (ArgY6_320)));
                                }
                              }
                            }
                          }
                        }
                        break;
                      case (MR_Integer) 2:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 3:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word Var_565 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 6))));
                MR_Word Var_566 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 5))) & (MR_Integer) 7);
                MR_Word Var_567 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 4))));
                MR_Word Var_568 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                MR_Word Var_569 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                MR_Word Var_570 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

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
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 2:
                        {
                          MR_Word ArgY1_398 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                          MR_Word ArgY2_401 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                          MR_Word ArgY3_404 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 3))));
                          MR_Word ArgY4_407 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 4))));
                          MR_Word ArgY5_410 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 5))) & (MR_Integer) 7);
                          MR_Word ArgY6_413 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 6))));
                          MR_Word SubResult1_399;

                          mercury__term____Compare____context_0_0(&SubResult1_399, Var_570, ArgY1_398);
                          succeeded = (SubResult1_399 != (MR_Integer) 0);
                          if (succeeded)
                            *HeadVar__1_1 = SubResult1_399;
                          else
                          {
                            MR_Word SubResult2_402;

                            mercury__string__parse_util____Compare____string_format_flags_0_0(&SubResult2_402, Var_569, ArgY2_401);
                            succeeded = (SubResult2_402 != (MR_Integer) 0);
                            if (succeeded)
                              *HeadVar__1_1 = SubResult2_402;
                            else
                            {
                              MR_Word SubResult3_405;

                              check_hlds__simplify__format_call__parse_string_format____Compare____compiler_format_maybe_width_0_0(&SubResult3_405, Var_568, ArgY3_404);
                              succeeded = (SubResult3_405 != (MR_Integer) 0);
                              if (succeeded)
                                *HeadVar__1_1 = SubResult3_405;
                              else
                              {
                                MR_Word SubResult4_408;

                                check_hlds__simplify__format_call__parse_string_format____Compare____compiler_format_maybe_prec_0_0(&SubResult4_408, Var_567, ArgY4_407);
                                succeeded = (SubResult4_408 != (MR_Integer) 0);
                                if (succeeded)
                                  *HeadVar__1_1 = SubResult4_408;
                                else
                                {
                                  MR_Word SubResult5_411;
                                  MR_Integer Var_579 = (MR_Integer) (Var_566);
                                  MR_Integer Var_580 = (MR_Integer) (ArgY5_410);

                                  succeeded = (Var_579 < Var_580);
                                  if (succeeded)
                                  {
                                    SubResult5_411 = (MR_Integer) 1;
                                    succeeded = MR_TRUE;
                                  }
                                  else
                                  {
                                    succeeded = (Var_579 > Var_580);
                                    if (succeeded)
                                    {
                                      SubResult5_411 = (MR_Integer) 2;
                                      succeeded = MR_TRUE;
                                    }
                                    else
                                    {
                                      succeeded = MR_TRUE;
                                      succeeded = !(succeeded);
                                      if (succeeded)
                                      {
                                        SubResult5_411 = (MR_Integer) 0;
                                        succeeded = MR_TRUE;
                                      }
                                    }
                                  }
                                  if (succeeded)
                                    *HeadVar__1_1 = SubResult5_411;
                                  else
                                    mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__simplify__format_call__parse_string_format_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (Var_565)), ((MR_Box) (ArgY6_413)));
                                }
                              }
                            }
                          }
                        }
                        break;
                      case (MR_Integer) 3:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word Var_549 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 6))));
                MR_Word Var_550 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 5))) & (MR_Integer) 7);
                MR_Word Var_551 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 4))));
                MR_Word Var_552 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                MR_Word Var_553 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                MR_Word Var_554 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

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
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
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
                          MR_Word ArgY1_491 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                          MR_Word ArgY2_494 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                          MR_Word ArgY3_497 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 3))));
                          MR_Word ArgY4_500 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 4))));
                          MR_Word ArgY5_503 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 5))) & (MR_Integer) 7);
                          MR_Word ArgY6_506 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 6))));
                          MR_Word SubResult1_492;

                          mercury__term____Compare____context_0_0(&SubResult1_492, Var_554, ArgY1_491);
                          succeeded = (SubResult1_492 != (MR_Integer) 0);
                          if (succeeded)
                            *HeadVar__1_1 = SubResult1_492;
                          else
                          {
                            MR_Word SubResult2_495;

                            mercury__string__parse_util____Compare____string_format_flags_0_0(&SubResult2_495, Var_553, ArgY2_494);
                            succeeded = (SubResult2_495 != (MR_Integer) 0);
                            if (succeeded)
                              *HeadVar__1_1 = SubResult2_495;
                            else
                            {
                              MR_Word SubResult3_498;

                              check_hlds__simplify__format_call__parse_string_format____Compare____compiler_format_maybe_width_0_0(&SubResult3_498, Var_552, ArgY3_497);
                              succeeded = (SubResult3_498 != (MR_Integer) 0);
                              if (succeeded)
                                *HeadVar__1_1 = SubResult3_498;
                              else
                              {
                                MR_Word SubResult4_501;

                                check_hlds__simplify__format_call__parse_string_format____Compare____compiler_format_maybe_prec_0_0(&SubResult4_501, Var_551, ArgY4_500);
                                succeeded = (SubResult4_501 != (MR_Integer) 0);
                                if (succeeded)
                                  *HeadVar__1_1 = SubResult4_501;
                                else
                                {
                                  MR_Word SubResult5_504;
                                  MR_Integer Var_577 = (MR_Integer) (Var_550);
                                  MR_Integer Var_578 = (MR_Integer) (ArgY5_503);

                                  succeeded = (Var_577 < Var_578);
                                  if (succeeded)
                                  {
                                    SubResult5_504 = (MR_Integer) 1;
                                    succeeded = MR_TRUE;
                                  }
                                  else
                                  {
                                    succeeded = (Var_577 > Var_578);
                                    if (succeeded)
                                    {
                                      SubResult5_504 = (MR_Integer) 2;
                                      succeeded = MR_TRUE;
                                    }
                                    else
                                    {
                                      succeeded = MR_TRUE;
                                      succeeded = !(succeeded);
                                      if (succeeded)
                                      {
                                        SubResult5_504 = (MR_Integer) 0;
                                        succeeded = MR_TRUE;
                                      }
                                    }
                                  }
                                  if (succeeded)
                                    *HeadVar__1_1 = SubResult5_504;
                                  else
                                    mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__simplify__format_call__parse_string_format_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (Var_549)), ((MR_Box) (ArgY6_506)));
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
    MR_Integer CastX_71 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_72 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_71 == CastY_72);
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
            MR_Word TypeInfo_76_76;
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
                    TypeInfo_76_76 = (MR_Word) (&check_hlds__simplify__format_call__parse_string_format_scalar_common_1[0]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_76_76, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
                  }
                }
              }
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word TypeInfo_85_85;
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
                      TypeInfo_85_85 = (MR_Word) (&check_hlds__simplify__format_call__parse_string_format_scalar_common_1[0]);
                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_85_85, ((MR_Box) (ArgX5_23)), ((MR_Box) (ArgY5_24)));
                    }
                  }
                }
              }
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word TypeInfo_82_82;
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

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
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
                          TypeInfo_82_82 = (MR_Word) (&check_hlds__simplify__format_call__parse_string_format_scalar_common_1[0]);
                          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_82_82, ((MR_Box) (ArgX5_33)), ((MR_Box) (ArgY5_34)));
                        }
                      }
                    }
                  }
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word TypeInfo_91_91;
                MR_Word ArgX1_35 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_Word ArgY1_36;
                MR_Word ArgX2_37 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
                MR_Word ArgY2_38;
                MR_Word ArgX3_39 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
                MR_Word ArgY3_40;
                MR_Word ArgX4_41 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 4))));
                MR_Word ArgY4_42;
                MR_Word ArgX5_43 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 5))) & (MR_Integer) 7);
                MR_Word ArgY5_44;
                MR_Word ArgX6_45 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 6))));
                MR_Word ArgY6_46;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (succeeded)
                {
                  ArgY1_36 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  ArgY2_38 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  ArgY3_40 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                  ArgY4_42 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 4))));
                  ArgY5_44 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 5))) & (MR_Integer) 7);
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
                            TypeInfo_91_91 = (MR_Word) (&check_hlds__simplify__format_call__parse_string_format_scalar_common_1[0]);
                            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_91_91, ((MR_Box) (ArgX6_45)), ((MR_Box) (ArgY6_46)));
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
                MR_Word TypeInfo_88_88;
                MR_Word ArgX1_47 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_Word ArgY1_48;
                MR_Word ArgX2_49 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
                MR_Word ArgY2_50;
                MR_Word ArgX3_51 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
                MR_Word ArgY3_52;
                MR_Word ArgX4_53 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 4))));
                MR_Word ArgY4_54;
                MR_Word ArgX5_55 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 5))) & (MR_Integer) 7);
                MR_Word ArgY5_56;
                MR_Word ArgX6_57 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 6))));
                MR_Word ArgY6_58;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
                if (succeeded)
                {
                  ArgY1_48 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  ArgY2_50 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  ArgY3_52 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                  ArgY4_54 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 4))));
                  ArgY5_56 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 5))) & (MR_Integer) 7);
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
                            TypeInfo_88_88 = (MR_Word) (&check_hlds__simplify__format_call__parse_string_format_scalar_common_1[0]);
                            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_88_88, ((MR_Box) (ArgX6_57)), ((MR_Box) (ArgY6_58)));
                          }
                        }
                      }
                    }
                  }
                }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word TypeInfo_79_79;
                MR_Word ArgX1_59 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_Word ArgY1_60;
                MR_Word ArgX2_61 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
                MR_Word ArgY2_62;
                MR_Word ArgX3_63 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
                MR_Word ArgY3_64;
                MR_Word ArgX4_65 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 4))));
                MR_Word ArgY4_66;
                MR_Word ArgX5_67 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 5))) & (MR_Integer) 7);
                MR_Word ArgY5_68;
                MR_Word ArgX6_69 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 6))));
                MR_Word ArgY6_70;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3)));
                if (succeeded)
                {
                  ArgY1_60 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  ArgY2_62 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  ArgY3_64 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                  ArgY4_66 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 4))));
                  ArgY5_68 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 5))) & (MR_Integer) 7);
                  ArgY6_70 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 6))));
                  succeeded = mercury__term____Unify____context_0_0(ArgX1_59, ArgY1_60);
                  if (succeeded)
                  {
                    succeeded = mercury__string__parse_util____Unify____string_format_flags_0_0(ArgX2_61, ArgY2_62);
                    if (succeeded)
                    {
                      succeeded = check_hlds__simplify__format_call__parse_string_format____Unify____compiler_format_maybe_width_0_0(ArgX3_63, ArgY3_64);
                      if (succeeded)
                      {
                        succeeded = check_hlds__simplify__format_call__parse_string_format____Unify____compiler_format_maybe_prec_0_0(ArgX4_65, ArgY4_66);
                        if (succeeded)
                        {
                          succeeded = (ArgX5_67 == ArgY5_68);
                          if (succeeded)
                          {
                            TypeInfo_79_79 = (MR_Word) (&check_hlds__simplify__format_call__parse_string_format_scalar_common_1[0]);
                            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_79_79, ((MR_Box) (ArgX6_69)), ((MR_Box) (ArgY6_70)));
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

                  succeeded = (Var_20 < ArgY1_8);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (Var_20 > ArgY1_8);
                    if (succeeded)
                      *HeadVar__1_1 = (MR_Integer) 2;
                    else
                      *HeadVar__1_1 = (MR_Integer) 0;
                  }
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

                  succeeded = (Var_20 < ArgY1_8);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (Var_20 > ArgY1_8);
                    if (succeeded)
                      *HeadVar__1_1 = (MR_Integer) 2;
                    else
                      *HeadVar__1_1 = (MR_Integer) 0;
                  }
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
    MR_Integer CastX_109 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_110 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_109 == CastY_110);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_123 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
            MR_Word Var_124 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
                  MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
                  MR_Word SubResult1_6;

                  mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__simplify__format_call__parse_string_format_scalar_common_1[0]), &SubResult1_6, ((MR_Box) (Var_124)), ((MR_Box) (ArgY1_5)));
                  succeeded = (SubResult1_6 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult1_6;
                  else
                    mercury__term____Compare____context_0_0(HeadVar__1_1, Var_123, ArgY2_8);
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_125 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
            MR_Word Var_126 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ArgY1_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
                  MR_Word ArgY2_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
                  MR_Word SubResult1_31;

                  mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__simplify__format_call__parse_string_format_scalar_common_1[0]), &SubResult1_31, ((MR_Box) (Var_126)), ((MR_Box) (ArgY1_30)));
                  succeeded = (SubResult1_31 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult1_31;
                  else
                    mercury__term____Compare____context_0_0(HeadVar__1_1, Var_125, ArgY2_33);
                }
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Var_129 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
            MR_Word Var_130 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));

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
                  MR_Word ArgY1_55 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))));
                  MR_Word ArgY2_58 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 1))));
                  MR_Word SubResult1_56;

                  mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__simplify__format_call__parse_string_format_scalar_common_1[0]), &SubResult1_56, ((MR_Box) (Var_130)), ((MR_Box) (ArgY1_55)));
                  succeeded = (SubResult1_56 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult1_56;
                  else
                    mercury__term____Compare____context_0_0(HeadVar__1_1, Var_129, ArgY2_58);
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Var_127 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                MR_Word Var_128 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

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
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_Word ArgY1_80 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                          MR_Word ArgY2_83 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                          MR_Word SubResult1_81;

                          mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__simplify__format_call__parse_string_format_scalar_common_1[0]), &SubResult1_81, ((MR_Box) (Var_128)), ((MR_Box) (ArgY1_80)));
                          succeeded = (SubResult1_81 != (MR_Integer) 0);
                          if (succeeded)
                            *HeadVar__1_1 = SubResult1_81;
                          else
                            mercury__term____Compare____context_0_0(HeadVar__1_1, Var_127, ArgY2_83);
                        }
                        break;
                      case (MR_Integer) 1:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Var_121 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                MR_Word Var_122 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

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
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word ArgY1_105 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                          MR_Word ArgY2_108 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                          MR_Word SubResult1_106;

                          mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__simplify__format_call__parse_string_format_scalar_common_1[0]), &SubResult1_106, ((MR_Box) (Var_122)), ((MR_Box) (ArgY1_105)));
                          succeeded = (SubResult1_106 != (MR_Integer) 0);
                          if (succeeded)
                            *HeadVar__1_1 = SubResult1_106;
                          else
                            mercury__term____Compare____context_0_0(HeadVar__1_1, Var_121, ArgY2_108);
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
check_hlds__simplify__format_call__parse_string_format____Unify____abstract_poly_type_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_23 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_24 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_23 == CastY_24);
    if (succeeded)
      succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word TypeInfo_27_27;
            MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_4;
            MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
            MR_Word ArgY2_6;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
            if (succeeded)
            {
              ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
              ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
              TypeInfo_27_27 = (MR_Word) (&check_hlds__simplify__format_call__parse_string_format_scalar_common_1[0]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_27_27, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
              if (succeeded)
                succeeded = mercury__term____Unify____context_0_0(ArgX2_5, ArgY2_6);
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word TypeInfo_29_29;
            MR_Word ArgX1_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_8;
            MR_Word ArgX2_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
            MR_Word ArgY2_10;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
              ArgY2_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
              TypeInfo_29_29 = (MR_Word) (&check_hlds__simplify__format_call__parse_string_format_scalar_common_1[0]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_29_29, ((MR_Box) (ArgX1_7)), ((MR_Box) (ArgY1_8)));
              if (succeeded)
                succeeded = mercury__term____Unify____context_0_0(ArgX2_9, ArgY2_10);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word TypeInfo_33_33;
            MR_Word ArgX1_11 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_12;
            MR_Word ArgX2_13 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 1))));
            MR_Word ArgY2_14;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
            if (succeeded)
            {
              ArgY1_12 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
              ArgY2_14 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
              TypeInfo_33_33 = (MR_Word) (&check_hlds__simplify__format_call__parse_string_format_scalar_common_1[0]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_33_33, ((MR_Box) (ArgX1_11)), ((MR_Box) (ArgY1_12)));
              if (succeeded)
                succeeded = mercury__term____Unify____context_0_0(ArgX2_13, ArgY2_14);
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word TypeInfo_31_31;
                MR_Word ArgX1_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_Word ArgY1_16;
                MR_Word ArgX2_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
                MR_Word ArgY2_18;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  ArgY1_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  ArgY2_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  TypeInfo_31_31 = (MR_Word) (&check_hlds__simplify__format_call__parse_string_format_scalar_common_1[0]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_31_31, ((MR_Box) (ArgX1_15)), ((MR_Box) (ArgY1_16)));
                  if (succeeded)
                    succeeded = mercury__term____Unify____context_0_0(ArgX2_17, ArgY2_18);
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word TypeInfo_25_25;
                MR_Word ArgX1_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_Word ArgY1_20;
                MR_Word ArgX2_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
                MR_Word ArgY2_22;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (succeeded)
                {
                  ArgY1_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  ArgY2_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  TypeInfo_25_25 = (MR_Word) (&check_hlds__simplify__format_call__parse_string_format_scalar_common_1[0]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_25_25, ((MR_Box) (ArgX1_19)), ((MR_Box) (ArgY1_20)));
                  if (succeeded)
                    succeeded = mercury__term____Unify____context_0_0(ArgX2_21, ArgY2_22);
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
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
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
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
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
          Error_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Error_18, 0) = ((MR_Box) ((MR_Unsigned) 5U));
          MR_hl_field(MR_mktag(3), Error_18, 1) = ((MR_Box) (SpecNum_10));
          MR_hl_field(MR_mktag(3), Error_18, 2) = ((MR_Box) (Var_36));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
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
      Var_34 = (MR_Integer) ((MR_Unsigned) SpecNum_10 + (MR_Unsigned) 1);
      check_hlds__simplify__format_call__parse_string_format__compiler_parse_format_string_6_p_0(STATE_VARIABLE_Chars_32_32, STATE_VARIABLE_PolyTypes_33_33, Context_9, Var_34, &TailSpecs_21, &TailErrors_22);
      if ((HeadErrors_20 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        {
          Specs0_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
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
        StringConst_28 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), StringConst_28, 0) = ((MR_Box) (Context_9));
        MR_hl_field(MR_mktag(0), StringConst_28, 1) = ((MR_Box) (NonConversionSpecString_27));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
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
    succeeded = (STATE_VARIABLE_Chars_31_31 != (MR_Word) ((MR_Unsigned) 0U));
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
          Var_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_55, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(MR_mktag(3), Var_55, 1) = ((MR_Box) (SpecNum_12));
        }
        {
          WidthErrors_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
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
            MaybeWidth_17 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
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
              Var_59 = (MR_Integer) 4;
              break;
            case (MR_Integer) 1:
              Var_59 = (MR_Integer) 2;
              break;
            case (MR_Integer) 2:
              Var_59 = (MR_Integer) 3;
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), PolyType_49, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  Var_59 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 1:
                  Var_59 = (MR_Integer) 0;
                  break;
              }
              break;
          }
          {
            Var_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_58, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(MR_mktag(3), Var_58, 1) = ((MR_Box) (SpecNum_12));
            MR_hl_field(MR_mktag(3), Var_58, 2) = (MR_Box) ((MR_Unsigned) (Var_59));
          }
          {
            WidthErrors_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
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
          MaybeWidth_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
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
        base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        *Spec_10 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (OverallContext_5));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_String) ""));
      }
      Var_27 = mercury__list__length_1_f_0((MR_Word) (&check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__type_ctor_info_abstract_poly_type_0), STATE_VARIABLE_PolyTypes_0_3);
      {
        Var_26 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_26, 0) = ((MR_Box) (SpecNum_9));
        MR_hl_field(MR_mktag(0), Var_26, 1) = ((MR_Box) (Var_27));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
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
      MR_Word STATE_VARIABLE_PolyTypes_85_85;

      *STATE_VARIABLE_Chars_2 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_Chars_0_1, (MR_Integer) 1))));
      switch (SpecChar_38) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Char) 37:
          {
            {
              SpecPrime_39 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), SpecPrime_39, 0) = ((MR_Box) (OverallContext_5));
              MR_hl_field(MR_mktag(0), SpecPrime_39, 1) = ((MR_Box) ((MR_String) "%"));
            }
            ErrorsPrime_40 = (MR_Word) ((MR_Unsigned) 0U);
            STATE_VARIABLE_PolyTypes_85_85 = STATE_VARIABLE_PolyTypes_0_3;
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Char) 69:
          {
            if ((STATE_VARIABLE_PolyTypes_0_3 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word Error_120;

              {
                Error_120 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Error_120, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), Error_120, 1) = ((MR_Box) (SpecNum_9));
                MR_hl_field(MR_mktag(3), Error_120, 2) = ((MR_Box) (MR_Word) (SpecChar_38));
              }
              {
                SpecPrime_39 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), SpecPrime_39, 0) = ((MR_Box) (OverallContext_5));
                MR_hl_field(MR_mktag(0), SpecPrime_39, 1) = ((MR_Box) ((MR_String) ""));
              }
              {
                ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ErrorsPrime_40, 0) = ((MR_Box) (Error_120));
                MR_hl_field(MR_mktag(1), ErrorsPrime_40, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              STATE_VARIABLE_PolyTypes_85_85 = STATE_VARIABLE_PolyTypes_0_3;
            }
            else
            {
              MR_Word SpecPolyType_117 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0))));
              MR_Word FloatVar_48;
              MR_Word PolyContext_115;

              STATE_VARIABLE_PolyTypes_85_85 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1))));
              succeeded = ((MR_tag((MR_Word) SpecPolyType_117)) == (MR_Integer) 0);
              if (succeeded)
              {
                FloatVar_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SpecPolyType_117, (MR_Integer) 0))));
                PolyContext_115 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SpecPolyType_117, (MR_Integer) 1))));
                {
                  SpecPrime_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 1) = ((MR_Box) (PolyContext_115));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 2) = ((MR_Box) (HeadVar__6_6));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 3) = ((MR_Box) (HeadVar__7_7));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 4) = ((MR_Box) (HeadVar__8_8));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 6) = ((MR_Box) (FloatVar_48));
                }
                ErrorsPrime_40 = (MR_Word) ((MR_Unsigned) 0U);
              }
              else
              {
                MR_Word Var_72;
                MR_Word Error_114;

                Var_72 = check_hlds__simplify__format_call__parse_string_format__abstract_poly_type_to_kind_1_f_0(SpecPolyType_117);
                {
                  Error_114 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), Error_114, 0) = ((MR_Box) (SpecNum_9));
                  MR_hl_field(MR_mktag(2), Error_114, 1) = ((MR_Box) (MR_Word) (SpecChar_38));
                  MR_hl_field(MR_mktag(2), Error_114, 2) = (MR_Box) ((MR_Unsigned) (Var_72));
                }
                {
                  SpecPrime_39 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), SpecPrime_39, 0) = ((MR_Box) (OverallContext_5));
                  MR_hl_field(MR_mktag(0), SpecPrime_39, 1) = ((MR_Box) ((MR_String) ""));
                }
                {
                  ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ErrorsPrime_40, 0) = ((MR_Box) (Error_114));
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
              MR_Word Error_162;

              {
                Error_162 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Error_162, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), Error_162, 1) = ((MR_Box) (SpecNum_9));
                MR_hl_field(MR_mktag(3), Error_162, 2) = ((MR_Box) (MR_Word) (SpecChar_38));
              }
              {
                SpecPrime_39 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), SpecPrime_39, 0) = ((MR_Box) (OverallContext_5));
                MR_hl_field(MR_mktag(0), SpecPrime_39, 1) = ((MR_Box) ((MR_String) ""));
              }
              {
                ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ErrorsPrime_40, 0) = ((MR_Box) (Error_162));
                MR_hl_field(MR_mktag(1), ErrorsPrime_40, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              STATE_VARIABLE_PolyTypes_85_85 = STATE_VARIABLE_PolyTypes_0_3;
            }
            else
            {
              MR_Word SpecPolyType_179 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0))));
              MR_Word FloatVar_167;
              MR_Word PolyContext_172;

              STATE_VARIABLE_PolyTypes_85_85 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1))));
              succeeded = ((MR_tag((MR_Word) SpecPolyType_179)) == (MR_Integer) 0);
              if (succeeded)
              {
                FloatVar_167 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SpecPolyType_179, (MR_Integer) 0))));
                PolyContext_172 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SpecPolyType_179, (MR_Integer) 1))));
                {
                  SpecPrime_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 1) = ((MR_Box) (PolyContext_172));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 2) = ((MR_Box) (HeadVar__6_6));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 3) = ((MR_Box) (HeadVar__7_7));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 4) = ((MR_Box) (HeadVar__8_8));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 3));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 6) = ((MR_Box) (FloatVar_167));
                }
                ErrorsPrime_40 = (MR_Word) ((MR_Unsigned) 0U);
              }
              else
              {
                MR_Word Var_163;
                MR_Word Error_166;

                Var_163 = check_hlds__simplify__format_call__parse_string_format__abstract_poly_type_to_kind_1_f_0(SpecPolyType_179);
                {
                  Error_166 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), Error_166, 0) = ((MR_Box) (SpecNum_9));
                  MR_hl_field(MR_mktag(2), Error_166, 1) = ((MR_Box) (MR_Word) (SpecChar_38));
                  MR_hl_field(MR_mktag(2), Error_166, 2) = (MR_Box) ((MR_Unsigned) (Var_163));
                }
                {
                  SpecPrime_39 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), SpecPrime_39, 0) = ((MR_Box) (OverallContext_5));
                  MR_hl_field(MR_mktag(0), SpecPrime_39, 1) = ((MR_Box) ((MR_String) ""));
                }
                {
                  ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ErrorsPrime_40, 0) = ((MR_Box) (Error_166));
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
              MR_Word Error_203;

              {
                Error_203 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Error_203, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), Error_203, 1) = ((MR_Box) (SpecNum_9));
                MR_hl_field(MR_mktag(3), Error_203, 2) = ((MR_Box) (MR_Word) (SpecChar_38));
              }
              {
                SpecPrime_39 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), SpecPrime_39, 0) = ((MR_Box) (OverallContext_5));
                MR_hl_field(MR_mktag(0), SpecPrime_39, 1) = ((MR_Box) ((MR_String) ""));
              }
              {
                ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ErrorsPrime_40, 0) = ((MR_Box) (Error_203));
                MR_hl_field(MR_mktag(1), ErrorsPrime_40, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              STATE_VARIABLE_PolyTypes_85_85 = STATE_VARIABLE_PolyTypes_0_3;
            }
            else
            {
              MR_Word SpecPolyType_220 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0))));
              MR_Word FloatVar_208;
              MR_Word PolyContext_213;

              STATE_VARIABLE_PolyTypes_85_85 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1))));
              succeeded = ((MR_tag((MR_Word) SpecPolyType_220)) == (MR_Integer) 0);
              if (succeeded)
              {
                FloatVar_208 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SpecPolyType_220, (MR_Integer) 0))));
                PolyContext_213 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SpecPolyType_220, (MR_Integer) 1))));
                {
                  SpecPrime_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 1) = ((MR_Box) (PolyContext_213));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 2) = ((MR_Box) (HeadVar__6_6));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 3) = ((MR_Box) (HeadVar__7_7));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 4) = ((MR_Box) (HeadVar__8_8));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 5));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 6) = ((MR_Box) (FloatVar_208));
                }
                ErrorsPrime_40 = (MR_Word) ((MR_Unsigned) 0U);
              }
              else
              {
                MR_Word Var_204;
                MR_Word Error_207;

                Var_204 = check_hlds__simplify__format_call__parse_string_format__abstract_poly_type_to_kind_1_f_0(SpecPolyType_220);
                {
                  Error_207 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), Error_207, 0) = ((MR_Box) (SpecNum_9));
                  MR_hl_field(MR_mktag(2), Error_207, 1) = ((MR_Box) (MR_Word) (SpecChar_38));
                  MR_hl_field(MR_mktag(2), Error_207, 2) = (MR_Box) ((MR_Unsigned) (Var_204));
                }
                {
                  SpecPrime_39 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), SpecPrime_39, 0) = ((MR_Box) (OverallContext_5));
                  MR_hl_field(MR_mktag(0), SpecPrime_39, 1) = ((MR_Box) ((MR_String) ""));
                }
                {
                  ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ErrorsPrime_40, 0) = ((MR_Box) (Error_207));
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
              MR_Word Error_105;

              {
                Error_105 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Error_105, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), Error_105, 1) = ((MR_Box) (SpecNum_9));
                MR_hl_field(MR_mktag(3), Error_105, 2) = ((MR_Box) (MR_Word) (SpecChar_38));
              }
              {
                SpecPrime_39 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), SpecPrime_39, 0) = ((MR_Box) (OverallContext_5));
                MR_hl_field(MR_mktag(0), SpecPrime_39, 1) = ((MR_Box) ((MR_String) ""));
              }
              {
                ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ErrorsPrime_40, 0) = ((MR_Box) (Error_105));
                MR_hl_field(MR_mktag(1), ErrorsPrime_40, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              STATE_VARIABLE_PolyTypes_85_85 = STATE_VARIABLE_PolyTypes_0_3;
            }
            else
            {
              MR_Word SpecPolyType_101 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0))));
              MR_Word IntVar_98;
              MR_Word PolyContext_99;

              STATE_VARIABLE_PolyTypes_85_85 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1))));
              succeeded = ((MR_tag((MR_Word) SpecPolyType_101)) == (MR_Integer) 1);
              if (succeeded)
              {
                IntVar_98 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SpecPolyType_101, (MR_Integer) 0))));
                PolyContext_99 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SpecPolyType_101, (MR_Integer) 1))));
                {
                  SpecPrime_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 1) = ((MR_Box) (PolyContext_99));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 2) = ((MR_Box) (HeadVar__6_6));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 3) = ((MR_Box) (HeadVar__7_7));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 4) = ((MR_Box) (HeadVar__8_8));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 3));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 6) = ((MR_Box) (IntVar_98));
                }
                ErrorsPrime_40 = (MR_Word) ((MR_Unsigned) 0U);
              }
              else
              {
                MR_Word UIntVar_46;
                MR_Word PolyContext_96;

                succeeded = ((MR_tag((MR_Word) SpecPolyType_101)) == (MR_Integer) 2);
                if (succeeded)
                {
                  UIntVar_46 = ((MR_Word) ((MR_hl_field(MR_mktag(2), SpecPolyType_101, (MR_Integer) 0))));
                  PolyContext_96 = ((MR_Word) ((MR_hl_field(MR_mktag(2), SpecPolyType_101, (MR_Integer) 1))));
                  {
                    SpecPrime_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), SpecPrime_39, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                    MR_hl_field(MR_mktag(3), SpecPrime_39, 1) = ((MR_Box) (PolyContext_96));
                    MR_hl_field(MR_mktag(3), SpecPrime_39, 2) = ((MR_Box) (HeadVar__6_6));
                    MR_hl_field(MR_mktag(3), SpecPrime_39, 3) = ((MR_Box) (HeadVar__7_7));
                    MR_hl_field(MR_mktag(3), SpecPrime_39, 4) = ((MR_Box) (HeadVar__8_8));
                    MR_hl_field(MR_mktag(3), SpecPrime_39, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 3));
                    MR_hl_field(MR_mktag(3), SpecPrime_39, 6) = ((MR_Box) (UIntVar_46));
                  }
                  ErrorsPrime_40 = (MR_Word) ((MR_Unsigned) 0U);
                }
                else
                {
                  MR_Word Var_80;
                  MR_Word Error_95;

                  Var_80 = check_hlds__simplify__format_call__parse_string_format__abstract_poly_type_to_kind_1_f_0(SpecPolyType_101);
                  {
                    Error_95 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), Error_95, 0) = ((MR_Box) (SpecNum_9));
                    MR_hl_field(MR_mktag(2), Error_95, 1) = ((MR_Box) (MR_Word) (SpecChar_38));
                    MR_hl_field(MR_mktag(2), Error_95, 2) = (MR_Box) ((MR_Unsigned) (Var_80));
                  }
                  {
                    SpecPrime_39 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), SpecPrime_39, 0) = ((MR_Box) (OverallContext_5));
                    MR_hl_field(MR_mktag(0), SpecPrime_39, 1) = ((MR_Box) ((MR_String) ""));
                  }
                  {
                    ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), ErrorsPrime_40, 0) = ((MR_Box) (Error_95));
                    MR_hl_field(MR_mktag(1), ErrorsPrime_40, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
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
              MR_Word Error_133;

              {
                Error_133 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Error_133, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), Error_133, 1) = ((MR_Box) (SpecNum_9));
                MR_hl_field(MR_mktag(3), Error_133, 2) = ((MR_Box) (MR_Word) (SpecChar_38));
              }
              {
                SpecPrime_39 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), SpecPrime_39, 0) = ((MR_Box) (OverallContext_5));
                MR_hl_field(MR_mktag(0), SpecPrime_39, 1) = ((MR_Box) ((MR_String) ""));
              }
              {
                ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ErrorsPrime_40, 0) = ((MR_Box) (Error_133));
                MR_hl_field(MR_mktag(1), ErrorsPrime_40, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              STATE_VARIABLE_PolyTypes_85_85 = STATE_VARIABLE_PolyTypes_0_3;
            }
            else
            {
              MR_Word SpecPolyType_130 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0))));
              MR_Word CharVar_49;
              MR_Word PolyContext_128;

              STATE_VARIABLE_PolyTypes_85_85 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1))));
              succeeded = ((((MR_tag((MR_Word) SpecPolyType_130)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), SpecPolyType_130, (MR_Integer) 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                CharVar_49 = ((MR_Word) ((MR_hl_field(MR_mktag(3), SpecPolyType_130, (MR_Integer) 1))));
                PolyContext_128 = ((MR_Word) ((MR_hl_field(MR_mktag(3), SpecPolyType_130, (MR_Integer) 2))));
                {
                  SpecPrime_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), SpecPrime_39, 0) = ((MR_Box) (PolyContext_128));
                  MR_hl_field(MR_mktag(1), SpecPrime_39, 1) = ((MR_Box) (HeadVar__6_6));
                  MR_hl_field(MR_mktag(1), SpecPrime_39, 2) = ((MR_Box) (HeadVar__7_7));
                  MR_hl_field(MR_mktag(1), SpecPrime_39, 3) = ((MR_Box) (CharVar_49));
                }
                ErrorsPrime_40 = (MR_Word) ((MR_Unsigned) 0U);
              }
              else
              {
                MR_Word Var_66;
                MR_Word Error_127;

                Var_66 = check_hlds__simplify__format_call__parse_string_format__abstract_poly_type_to_kind_1_f_0(SpecPolyType_130);
                {
                  Error_127 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), Error_127, 0) = ((MR_Box) (SpecNum_9));
                  MR_hl_field(MR_mktag(2), Error_127, 1) = ((MR_Box) (MR_Word) (SpecChar_38));
                  MR_hl_field(MR_mktag(2), Error_127, 2) = (MR_Box) ((MR_Unsigned) (Var_66));
                }
                {
                  SpecPrime_39 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), SpecPrime_39, 0) = ((MR_Box) (OverallContext_5));
                  MR_hl_field(MR_mktag(0), SpecPrime_39, 1) = ((MR_Box) ((MR_String) ""));
                }
                {
                  ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ErrorsPrime_40, 0) = ((MR_Box) (Error_127));
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
              MR_Word Error_94;

              {
                Error_94 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Error_94, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), Error_94, 1) = ((MR_Box) (SpecNum_9));
                MR_hl_field(MR_mktag(3), Error_94, 2) = ((MR_Box) (MR_Word) (SpecChar_38));
              }
              {
                SpecPrime_39 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), SpecPrime_39, 0) = ((MR_Box) (OverallContext_5));
                MR_hl_field(MR_mktag(0), SpecPrime_39, 1) = ((MR_Box) ((MR_String) ""));
              }
              {
                ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ErrorsPrime_40, 0) = ((MR_Box) (Error_94));
                MR_hl_field(MR_mktag(1), ErrorsPrime_40, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              STATE_VARIABLE_PolyTypes_85_85 = STATE_VARIABLE_PolyTypes_0_3;
            }
            else
            {
              MR_Word SpecPolyType_41 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0))));
              MR_Word IntVar_42;
              MR_Word PolyContext_43;

              STATE_VARIABLE_PolyTypes_85_85 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1))));
              succeeded = ((MR_tag((MR_Word) SpecPolyType_41)) == (MR_Integer) 1);
              if (succeeded)
              {
                IntVar_42 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SpecPolyType_41, (MR_Integer) 0))));
                PolyContext_43 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SpecPolyType_41, (MR_Integer) 1))));
                {
                  SpecPrime_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 0) = ((MR_Box) ((MR_Unsigned) 0U));
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
                MR_Word Var_86;

                Var_86 = check_hlds__simplify__format_call__parse_string_format__abstract_poly_type_to_kind_1_f_0(SpecPolyType_41);
                {
                  Error_44 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), Error_44, 0) = ((MR_Box) (SpecNum_9));
                  MR_hl_field(MR_mktag(2), Error_44, 1) = ((MR_Box) (MR_Word) (SpecChar_38));
                  MR_hl_field(MR_mktag(2), Error_44, 2) = (MR_Box) ((MR_Unsigned) (Var_86));
                }
                {
                  SpecPrime_39 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), SpecPrime_39, 0) = ((MR_Box) (OverallContext_5));
                  MR_hl_field(MR_mktag(0), SpecPrime_39, 1) = ((MR_Box) ((MR_String) ""));
                }
                {
                  ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
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
              MR_Word Error_244;

              {
                Error_244 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Error_244, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), Error_244, 1) = ((MR_Box) (SpecNum_9));
                MR_hl_field(MR_mktag(3), Error_244, 2) = ((MR_Box) (MR_Word) (SpecChar_38));
              }
              {
                SpecPrime_39 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), SpecPrime_39, 0) = ((MR_Box) (OverallContext_5));
                MR_hl_field(MR_mktag(0), SpecPrime_39, 1) = ((MR_Box) ((MR_String) ""));
              }
              {
                ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ErrorsPrime_40, 0) = ((MR_Box) (Error_244));
                MR_hl_field(MR_mktag(1), ErrorsPrime_40, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              STATE_VARIABLE_PolyTypes_85_85 = STATE_VARIABLE_PolyTypes_0_3;
            }
            else
            {
              MR_Word SpecPolyType_261 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0))));
              MR_Word FloatVar_249;
              MR_Word PolyContext_254;

              STATE_VARIABLE_PolyTypes_85_85 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1))));
              succeeded = ((MR_tag((MR_Word) SpecPolyType_261)) == (MR_Integer) 0);
              if (succeeded)
              {
                FloatVar_249 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SpecPolyType_261, (MR_Integer) 0))));
                PolyContext_254 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SpecPolyType_261, (MR_Integer) 1))));
                {
                  SpecPrime_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 1) = ((MR_Box) (PolyContext_254));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 2) = ((MR_Box) (HeadVar__6_6));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 3) = ((MR_Box) (HeadVar__7_7));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 4) = ((MR_Box) (HeadVar__8_8));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 6) = ((MR_Box) (FloatVar_249));
                }
                ErrorsPrime_40 = (MR_Word) ((MR_Unsigned) 0U);
              }
              else
              {
                MR_Word Var_245;
                MR_Word Error_248;

                Var_245 = check_hlds__simplify__format_call__parse_string_format__abstract_poly_type_to_kind_1_f_0(SpecPolyType_261);
                {
                  Error_248 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), Error_248, 0) = ((MR_Box) (SpecNum_9));
                  MR_hl_field(MR_mktag(2), Error_248, 1) = ((MR_Box) (MR_Word) (SpecChar_38));
                  MR_hl_field(MR_mktag(2), Error_248, 2) = (MR_Box) ((MR_Unsigned) (Var_245));
                }
                {
                  SpecPrime_39 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), SpecPrime_39, 0) = ((MR_Box) (OverallContext_5));
                  MR_hl_field(MR_mktag(0), SpecPrime_39, 1) = ((MR_Box) ((MR_String) ""));
                }
                {
                  ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ErrorsPrime_40, 0) = ((MR_Box) (Error_248));
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
              MR_Word Error_285;

              {
                Error_285 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Error_285, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), Error_285, 1) = ((MR_Box) (SpecNum_9));
                MR_hl_field(MR_mktag(3), Error_285, 2) = ((MR_Box) (MR_Word) (SpecChar_38));
              }
              {
                SpecPrime_39 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), SpecPrime_39, 0) = ((MR_Box) (OverallContext_5));
                MR_hl_field(MR_mktag(0), SpecPrime_39, 1) = ((MR_Box) ((MR_String) ""));
              }
              {
                ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ErrorsPrime_40, 0) = ((MR_Box) (Error_285));
                MR_hl_field(MR_mktag(1), ErrorsPrime_40, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              STATE_VARIABLE_PolyTypes_85_85 = STATE_VARIABLE_PolyTypes_0_3;
            }
            else
            {
              MR_Word SpecPolyType_302 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0))));
              MR_Word FloatVar_290;
              MR_Word PolyContext_295;

              STATE_VARIABLE_PolyTypes_85_85 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1))));
              succeeded = ((MR_tag((MR_Word) SpecPolyType_302)) == (MR_Integer) 0);
              if (succeeded)
              {
                FloatVar_290 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SpecPolyType_302, (MR_Integer) 0))));
                PolyContext_295 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SpecPolyType_302, (MR_Integer) 1))));
                {
                  SpecPrime_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 1) = ((MR_Box) (PolyContext_295));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 2) = ((MR_Box) (HeadVar__6_6));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 3) = ((MR_Box) (HeadVar__7_7));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 4) = ((MR_Box) (HeadVar__8_8));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 6) = ((MR_Box) (FloatVar_290));
                }
                ErrorsPrime_40 = (MR_Word) ((MR_Unsigned) 0U);
              }
              else
              {
                MR_Word Var_286;
                MR_Word Error_289;

                Var_286 = check_hlds__simplify__format_call__parse_string_format__abstract_poly_type_to_kind_1_f_0(SpecPolyType_302);
                {
                  Error_289 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), Error_289, 0) = ((MR_Box) (SpecNum_9));
                  MR_hl_field(MR_mktag(2), Error_289, 1) = ((MR_Box) (MR_Word) (SpecChar_38));
                  MR_hl_field(MR_mktag(2), Error_289, 2) = (MR_Box) ((MR_Unsigned) (Var_286));
                }
                {
                  SpecPrime_39 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), SpecPrime_39, 0) = ((MR_Box) (OverallContext_5));
                  MR_hl_field(MR_mktag(0), SpecPrime_39, 1) = ((MR_Box) ((MR_String) ""));
                }
                {
                  ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ErrorsPrime_40, 0) = ((MR_Box) (Error_289));
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
              MR_Word Error_326;

              {
                Error_326 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Error_326, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), Error_326, 1) = ((MR_Box) (SpecNum_9));
                MR_hl_field(MR_mktag(3), Error_326, 2) = ((MR_Box) (MR_Word) (SpecChar_38));
              }
              {
                SpecPrime_39 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), SpecPrime_39, 0) = ((MR_Box) (OverallContext_5));
                MR_hl_field(MR_mktag(0), SpecPrime_39, 1) = ((MR_Box) ((MR_String) ""));
              }
              {
                ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ErrorsPrime_40, 0) = ((MR_Box) (Error_326));
                MR_hl_field(MR_mktag(1), ErrorsPrime_40, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              STATE_VARIABLE_PolyTypes_85_85 = STATE_VARIABLE_PolyTypes_0_3;
            }
            else
            {
              MR_Word SpecPolyType_343 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0))));
              MR_Word FloatVar_331;
              MR_Word PolyContext_336;

              STATE_VARIABLE_PolyTypes_85_85 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1))));
              succeeded = ((MR_tag((MR_Word) SpecPolyType_343)) == (MR_Integer) 0);
              if (succeeded)
              {
                FloatVar_331 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SpecPolyType_343, (MR_Integer) 0))));
                PolyContext_336 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SpecPolyType_343, (MR_Integer) 1))));
                {
                  SpecPrime_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 1) = ((MR_Box) (PolyContext_336));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 2) = ((MR_Box) (HeadVar__6_6));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 3) = ((MR_Box) (HeadVar__7_7));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 4) = ((MR_Box) (HeadVar__8_8));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 4));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 6) = ((MR_Box) (FloatVar_331));
                }
                ErrorsPrime_40 = (MR_Word) ((MR_Unsigned) 0U);
              }
              else
              {
                MR_Word Var_327;
                MR_Word Error_330;

                Var_327 = check_hlds__simplify__format_call__parse_string_format__abstract_poly_type_to_kind_1_f_0(SpecPolyType_343);
                {
                  Error_330 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), Error_330, 0) = ((MR_Box) (SpecNum_9));
                  MR_hl_field(MR_mktag(2), Error_330, 1) = ((MR_Box) (MR_Word) (SpecChar_38));
                  MR_hl_field(MR_mktag(2), Error_330, 2) = (MR_Box) ((MR_Unsigned) (Var_327));
                }
                {
                  SpecPrime_39 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), SpecPrime_39, 0) = ((MR_Box) (OverallContext_5));
                  MR_hl_field(MR_mktag(0), SpecPrime_39, 1) = ((MR_Box) ((MR_String) ""));
                }
                {
                  ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ErrorsPrime_40, 0) = ((MR_Box) (Error_330));
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
              MR_Word Error_367;

              {
                Error_367 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Error_367, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), Error_367, 1) = ((MR_Box) (SpecNum_9));
                MR_hl_field(MR_mktag(3), Error_367, 2) = ((MR_Box) (MR_Word) (SpecChar_38));
              }
              {
                SpecPrime_39 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), SpecPrime_39, 0) = ((MR_Box) (OverallContext_5));
                MR_hl_field(MR_mktag(0), SpecPrime_39, 1) = ((MR_Box) ((MR_String) ""));
              }
              {
                ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ErrorsPrime_40, 0) = ((MR_Box) (Error_367));
                MR_hl_field(MR_mktag(1), ErrorsPrime_40, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              STATE_VARIABLE_PolyTypes_85_85 = STATE_VARIABLE_PolyTypes_0_3;
            }
            else
            {
              MR_Word SpecPolyType_394 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0))));
              MR_Word IntVar_384;
              MR_Word PolyContext_385;

              STATE_VARIABLE_PolyTypes_85_85 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1))));
              succeeded = ((MR_tag((MR_Word) SpecPolyType_394)) == (MR_Integer) 1);
              if (succeeded)
              {
                IntVar_384 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SpecPolyType_394, (MR_Integer) 0))));
                PolyContext_385 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SpecPolyType_394, (MR_Integer) 1))));
                {
                  SpecPrime_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 1) = ((MR_Box) (PolyContext_385));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 2) = ((MR_Box) (HeadVar__6_6));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 3) = ((MR_Box) (HeadVar__7_7));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 4) = ((MR_Box) (HeadVar__8_8));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 6) = ((MR_Box) (IntVar_384));
                }
                ErrorsPrime_40 = (MR_Word) ((MR_Unsigned) 0U);
              }
              else
              {
                MR_Word UIntVar_372;
                MR_Word PolyContext_377;

                succeeded = ((MR_tag((MR_Word) SpecPolyType_394)) == (MR_Integer) 2);
                if (succeeded)
                {
                  UIntVar_372 = ((MR_Word) ((MR_hl_field(MR_mktag(2), SpecPolyType_394, (MR_Integer) 0))));
                  PolyContext_377 = ((MR_Word) ((MR_hl_field(MR_mktag(2), SpecPolyType_394, (MR_Integer) 1))));
                  {
                    SpecPrime_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), SpecPrime_39, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                    MR_hl_field(MR_mktag(3), SpecPrime_39, 1) = ((MR_Box) (PolyContext_377));
                    MR_hl_field(MR_mktag(3), SpecPrime_39, 2) = ((MR_Box) (HeadVar__6_6));
                    MR_hl_field(MR_mktag(3), SpecPrime_39, 3) = ((MR_Box) (HeadVar__7_7));
                    MR_hl_field(MR_mktag(3), SpecPrime_39, 4) = ((MR_Box) (HeadVar__8_8));
                    MR_hl_field(MR_mktag(3), SpecPrime_39, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                    MR_hl_field(MR_mktag(3), SpecPrime_39, 6) = ((MR_Box) (UIntVar_372));
                  }
                  ErrorsPrime_40 = (MR_Word) ((MR_Unsigned) 0U);
                }
                else
                {
                  MR_Word Var_368;
                  MR_Word Error_371;

                  Var_368 = check_hlds__simplify__format_call__parse_string_format__abstract_poly_type_to_kind_1_f_0(SpecPolyType_394);
                  {
                    Error_371 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), Error_371, 0) = ((MR_Box) (SpecNum_9));
                    MR_hl_field(MR_mktag(2), Error_371, 1) = ((MR_Box) (MR_Word) (SpecChar_38));
                    MR_hl_field(MR_mktag(2), Error_371, 2) = (MR_Box) ((MR_Unsigned) (Var_368));
                  }
                  {
                    SpecPrime_39 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), SpecPrime_39, 0) = ((MR_Box) (OverallContext_5));
                    MR_hl_field(MR_mktag(0), SpecPrime_39, 1) = ((MR_Box) ((MR_String) ""));
                  }
                  {
                    ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), ErrorsPrime_40, 0) = ((MR_Box) (Error_371));
                    MR_hl_field(MR_mktag(1), ErrorsPrime_40, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                }
              }
            }
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Char) 112:
          {
            MR_Word STATE_VARIABLE_Flags_75_465;
            MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__6_6, (MR_Integer) 0)));

            {
              STATE_VARIABLE_Flags_75_465 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Flags_75_465, 0) = (MR_Box) ((((packed_word_0 & (~((MR_Unsigned) 16U)))) | (((MR_Unsigned) ((MR_Integer) 1) << 4))));
            }
            if ((STATE_VARIABLE_PolyTypes_0_3 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word Error_423;

              {
                Error_423 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Error_423, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), Error_423, 1) = ((MR_Box) (SpecNum_9));
                MR_hl_field(MR_mktag(3), Error_423, 2) = ((MR_Box) (MR_Word) (SpecChar_38));
              }
              {
                SpecPrime_39 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), SpecPrime_39, 0) = ((MR_Box) (OverallContext_5));
                MR_hl_field(MR_mktag(0), SpecPrime_39, 1) = ((MR_Box) ((MR_String) ""));
              }
              {
                ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ErrorsPrime_40, 0) = ((MR_Box) (Error_423));
                MR_hl_field(MR_mktag(1), ErrorsPrime_40, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              STATE_VARIABLE_PolyTypes_85_85 = STATE_VARIABLE_PolyTypes_0_3;
            }
            else
            {
              MR_Word SpecPolyType_450 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0))));
              MR_Word IntVar_440;
              MR_Word PolyContext_441;

              STATE_VARIABLE_PolyTypes_85_85 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1))));
              succeeded = ((MR_tag((MR_Word) SpecPolyType_450)) == (MR_Integer) 1);
              if (succeeded)
              {
                IntVar_440 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SpecPolyType_450, (MR_Integer) 0))));
                PolyContext_441 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SpecPolyType_450, (MR_Integer) 1))));
                {
                  SpecPrime_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 1) = ((MR_Box) (PolyContext_441));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 2) = ((MR_Box) (STATE_VARIABLE_Flags_75_465));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 3) = ((MR_Box) (HeadVar__7_7));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 4) = ((MR_Box) (HeadVar__8_8));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 4));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 6) = ((MR_Box) (IntVar_440));
                }
                ErrorsPrime_40 = (MR_Word) ((MR_Unsigned) 0U);
              }
              else
              {
                MR_Word UIntVar_428;
                MR_Word PolyContext_433;

                succeeded = ((MR_tag((MR_Word) SpecPolyType_450)) == (MR_Integer) 2);
                if (succeeded)
                {
                  UIntVar_428 = ((MR_Word) ((MR_hl_field(MR_mktag(2), SpecPolyType_450, (MR_Integer) 0))));
                  PolyContext_433 = ((MR_Word) ((MR_hl_field(MR_mktag(2), SpecPolyType_450, (MR_Integer) 1))));
                  {
                    SpecPrime_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), SpecPrime_39, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                    MR_hl_field(MR_mktag(3), SpecPrime_39, 1) = ((MR_Box) (PolyContext_433));
                    MR_hl_field(MR_mktag(3), SpecPrime_39, 2) = ((MR_Box) (STATE_VARIABLE_Flags_75_465));
                    MR_hl_field(MR_mktag(3), SpecPrime_39, 3) = ((MR_Box) (HeadVar__7_7));
                    MR_hl_field(MR_mktag(3), SpecPrime_39, 4) = ((MR_Box) (HeadVar__8_8));
                    MR_hl_field(MR_mktag(3), SpecPrime_39, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 4));
                    MR_hl_field(MR_mktag(3), SpecPrime_39, 6) = ((MR_Box) (UIntVar_428));
                  }
                  ErrorsPrime_40 = (MR_Word) ((MR_Unsigned) 0U);
                }
                else
                {
                  MR_Word Var_424;
                  MR_Word Error_427;

                  Var_424 = check_hlds__simplify__format_call__parse_string_format__abstract_poly_type_to_kind_1_f_0(SpecPolyType_450);
                  {
                    Error_427 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), Error_427, 0) = ((MR_Box) (SpecNum_9));
                    MR_hl_field(MR_mktag(2), Error_427, 1) = ((MR_Box) (MR_Word) (SpecChar_38));
                    MR_hl_field(MR_mktag(2), Error_427, 2) = (MR_Box) ((MR_Unsigned) (Var_424));
                  }
                  {
                    SpecPrime_39 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), SpecPrime_39, 0) = ((MR_Box) (OverallContext_5));
                    MR_hl_field(MR_mktag(0), SpecPrime_39, 1) = ((MR_Box) ((MR_String) ""));
                  }
                  {
                    ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), ErrorsPrime_40, 0) = ((MR_Box) (Error_427));
                    MR_hl_field(MR_mktag(1), ErrorsPrime_40, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
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
              MR_Word Error_146;

              {
                Error_146 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Error_146, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), Error_146, 1) = ((MR_Box) (SpecNum_9));
                MR_hl_field(MR_mktag(3), Error_146, 2) = ((MR_Box) (MR_Word) (SpecChar_38));
              }
              {
                SpecPrime_39 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), SpecPrime_39, 0) = ((MR_Box) (OverallContext_5));
                MR_hl_field(MR_mktag(0), SpecPrime_39, 1) = ((MR_Box) ((MR_String) ""));
              }
              {
                ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ErrorsPrime_40, 0) = ((MR_Box) (Error_146));
                MR_hl_field(MR_mktag(1), ErrorsPrime_40, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              STATE_VARIABLE_PolyTypes_85_85 = STATE_VARIABLE_PolyTypes_0_3;
            }
            else
            {
              MR_Word SpecPolyType_143 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0))));
              MR_Word StrVar_50;
              MR_Word PolyContext_141;

              STATE_VARIABLE_PolyTypes_85_85 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1))));
              succeeded = ((((MR_tag((MR_Word) SpecPolyType_143)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), SpecPolyType_143, (MR_Integer) 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                StrVar_50 = ((MR_Word) ((MR_hl_field(MR_mktag(3), SpecPolyType_143, (MR_Integer) 1))));
                PolyContext_141 = ((MR_Word) ((MR_hl_field(MR_mktag(3), SpecPolyType_143, (MR_Integer) 2))));
                {
                  SpecPrime_39 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), SpecPrime_39, 0) = ((MR_Box) (PolyContext_141));
                  MR_hl_field(MR_mktag(2), SpecPrime_39, 1) = ((MR_Box) (HeadVar__6_6));
                  MR_hl_field(MR_mktag(2), SpecPrime_39, 2) = ((MR_Box) (HeadVar__7_7));
                  MR_hl_field(MR_mktag(2), SpecPrime_39, 3) = ((MR_Box) (HeadVar__8_8));
                  MR_hl_field(MR_mktag(2), SpecPrime_39, 4) = ((MR_Box) (StrVar_50));
                }
                ErrorsPrime_40 = (MR_Word) ((MR_Unsigned) 0U);
              }
              else
              {
                MR_Word Var_60;
                MR_Word Error_140;

                Var_60 = check_hlds__simplify__format_call__parse_string_format__abstract_poly_type_to_kind_1_f_0(SpecPolyType_143);
                {
                  Error_140 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), Error_140, 0) = ((MR_Box) (SpecNum_9));
                  MR_hl_field(MR_mktag(2), Error_140, 1) = ((MR_Box) (MR_Word) (SpecChar_38));
                  MR_hl_field(MR_mktag(2), Error_140, 2) = (MR_Box) ((MR_Unsigned) (Var_60));
                }
                {
                  SpecPrime_39 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), SpecPrime_39, 0) = ((MR_Box) (OverallContext_5));
                  MR_hl_field(MR_mktag(0), SpecPrime_39, 1) = ((MR_Box) ((MR_String) ""));
                }
                {
                  ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ErrorsPrime_40, 0) = ((MR_Box) (Error_140));
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
              MR_Word Error_479;

              {
                Error_479 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Error_479, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), Error_479, 1) = ((MR_Box) (SpecNum_9));
                MR_hl_field(MR_mktag(3), Error_479, 2) = ((MR_Box) (MR_Word) (SpecChar_38));
              }
              {
                SpecPrime_39 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), SpecPrime_39, 0) = ((MR_Box) (OverallContext_5));
                MR_hl_field(MR_mktag(0), SpecPrime_39, 1) = ((MR_Box) ((MR_String) ""));
              }
              {
                ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ErrorsPrime_40, 0) = ((MR_Box) (Error_479));
                MR_hl_field(MR_mktag(1), ErrorsPrime_40, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              STATE_VARIABLE_PolyTypes_85_85 = STATE_VARIABLE_PolyTypes_0_3;
            }
            else
            {
              MR_Word SpecPolyType_506 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0))));
              MR_Word IntVar_496;
              MR_Word PolyContext_497;

              STATE_VARIABLE_PolyTypes_85_85 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1))));
              succeeded = ((MR_tag((MR_Word) SpecPolyType_506)) == (MR_Integer) 1);
              if (succeeded)
              {
                IntVar_496 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SpecPolyType_506, (MR_Integer) 0))));
                PolyContext_497 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SpecPolyType_506, (MR_Integer) 1))));
                {
                  SpecPrime_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 1) = ((MR_Box) (PolyContext_497));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 2) = ((MR_Box) (HeadVar__6_6));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 3) = ((MR_Box) (HeadVar__7_7));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 4) = ((MR_Box) (HeadVar__8_8));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 6) = ((MR_Box) (IntVar_496));
                }
                ErrorsPrime_40 = (MR_Word) ((MR_Unsigned) 0U);
              }
              else
              {
                MR_Word UIntVar_484;
                MR_Word PolyContext_489;

                succeeded = ((MR_tag((MR_Word) SpecPolyType_506)) == (MR_Integer) 2);
                if (succeeded)
                {
                  UIntVar_484 = ((MR_Word) ((MR_hl_field(MR_mktag(2), SpecPolyType_506, (MR_Integer) 0))));
                  PolyContext_489 = ((MR_Word) ((MR_hl_field(MR_mktag(2), SpecPolyType_506, (MR_Integer) 1))));
                  {
                    SpecPrime_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), SpecPrime_39, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                    MR_hl_field(MR_mktag(3), SpecPrime_39, 1) = ((MR_Box) (PolyContext_489));
                    MR_hl_field(MR_mktag(3), SpecPrime_39, 2) = ((MR_Box) (HeadVar__6_6));
                    MR_hl_field(MR_mktag(3), SpecPrime_39, 3) = ((MR_Box) (HeadVar__7_7));
                    MR_hl_field(MR_mktag(3), SpecPrime_39, 4) = ((MR_Box) (HeadVar__8_8));
                    MR_hl_field(MR_mktag(3), SpecPrime_39, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(3), SpecPrime_39, 6) = ((MR_Box) (UIntVar_484));
                  }
                  ErrorsPrime_40 = (MR_Word) ((MR_Unsigned) 0U);
                }
                else
                {
                  MR_Word Var_480;
                  MR_Word Error_483;

                  Var_480 = check_hlds__simplify__format_call__parse_string_format__abstract_poly_type_to_kind_1_f_0(SpecPolyType_506);
                  {
                    Error_483 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), Error_483, 0) = ((MR_Box) (SpecNum_9));
                    MR_hl_field(MR_mktag(2), Error_483, 1) = ((MR_Box) (MR_Word) (SpecChar_38));
                    MR_hl_field(MR_mktag(2), Error_483, 2) = (MR_Box) ((MR_Unsigned) (Var_480));
                  }
                  {
                    SpecPrime_39 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), SpecPrime_39, 0) = ((MR_Box) (OverallContext_5));
                    MR_hl_field(MR_mktag(0), SpecPrime_39, 1) = ((MR_Box) ((MR_String) ""));
                  }
                  {
                    ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), ErrorsPrime_40, 0) = ((MR_Box) (Error_483));
                    MR_hl_field(MR_mktag(1), ErrorsPrime_40, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
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
              MR_Word Error_535;

              {
                Error_535 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Error_535, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), Error_535, 1) = ((MR_Box) (SpecNum_9));
                MR_hl_field(MR_mktag(3), Error_535, 2) = ((MR_Box) (MR_Word) (SpecChar_38));
              }
              {
                SpecPrime_39 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), SpecPrime_39, 0) = ((MR_Box) (OverallContext_5));
                MR_hl_field(MR_mktag(0), SpecPrime_39, 1) = ((MR_Box) ((MR_String) ""));
              }
              {
                ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ErrorsPrime_40, 0) = ((MR_Box) (Error_535));
                MR_hl_field(MR_mktag(1), ErrorsPrime_40, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              STATE_VARIABLE_PolyTypes_85_85 = STATE_VARIABLE_PolyTypes_0_3;
            }
            else
            {
              MR_Word SpecPolyType_562 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0))));
              MR_Word IntVar_552;
              MR_Word PolyContext_553;

              STATE_VARIABLE_PolyTypes_85_85 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1))));
              succeeded = ((MR_tag((MR_Word) SpecPolyType_562)) == (MR_Integer) 1);
              if (succeeded)
              {
                IntVar_552 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SpecPolyType_562, (MR_Integer) 0))));
                PolyContext_553 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SpecPolyType_562, (MR_Integer) 1))));
                {
                  SpecPrime_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 1) = ((MR_Box) (PolyContext_553));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 2) = ((MR_Box) (HeadVar__6_6));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 3) = ((MR_Box) (HeadVar__7_7));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 4) = ((MR_Box) (HeadVar__8_8));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 6) = ((MR_Box) (IntVar_552));
                }
                ErrorsPrime_40 = (MR_Word) ((MR_Unsigned) 0U);
              }
              else
              {
                MR_Word UIntVar_540;
                MR_Word PolyContext_545;

                succeeded = ((MR_tag((MR_Word) SpecPolyType_562)) == (MR_Integer) 2);
                if (succeeded)
                {
                  UIntVar_540 = ((MR_Word) ((MR_hl_field(MR_mktag(2), SpecPolyType_562, (MR_Integer) 0))));
                  PolyContext_545 = ((MR_Word) ((MR_hl_field(MR_mktag(2), SpecPolyType_562, (MR_Integer) 1))));
                  {
                    SpecPrime_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), SpecPrime_39, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                    MR_hl_field(MR_mktag(3), SpecPrime_39, 1) = ((MR_Box) (PolyContext_545));
                    MR_hl_field(MR_mktag(3), SpecPrime_39, 2) = ((MR_Box) (HeadVar__6_6));
                    MR_hl_field(MR_mktag(3), SpecPrime_39, 3) = ((MR_Box) (HeadVar__7_7));
                    MR_hl_field(MR_mktag(3), SpecPrime_39, 4) = ((MR_Box) (HeadVar__8_8));
                    MR_hl_field(MR_mktag(3), SpecPrime_39, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(3), SpecPrime_39, 6) = ((MR_Box) (UIntVar_540));
                  }
                  ErrorsPrime_40 = (MR_Word) ((MR_Unsigned) 0U);
                }
                else
                {
                  MR_Word Var_536;
                  MR_Word Error_539;

                  Var_536 = check_hlds__simplify__format_call__parse_string_format__abstract_poly_type_to_kind_1_f_0(SpecPolyType_562);
                  {
                    Error_539 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), Error_539, 0) = ((MR_Box) (SpecNum_9));
                    MR_hl_field(MR_mktag(2), Error_539, 1) = ((MR_Box) (MR_Word) (SpecChar_38));
                    MR_hl_field(MR_mktag(2), Error_539, 2) = (MR_Box) ((MR_Unsigned) (Var_536));
                  }
                  {
                    SpecPrime_39 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), SpecPrime_39, 0) = ((MR_Box) (OverallContext_5));
                    MR_hl_field(MR_mktag(0), SpecPrime_39, 1) = ((MR_Box) ((MR_String) ""));
                  }
                  {
                    ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), ErrorsPrime_40, 0) = ((MR_Box) (Error_539));
                    MR_hl_field(MR_mktag(1), ErrorsPrime_40, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                }
              }
            }
            succeeded = MR_TRUE;
          }
          break;
      }
      if (succeeded)
      {
        *STATE_VARIABLE_PolyTypes_4 = STATE_VARIABLE_PolyTypes_85_85;
        *Spec_10 = SpecPrime_39;
        *Errors_11 = ErrorsPrime_40;
      }
      else
      {
        MR_Word Error_153;

        {
          Error_153 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Error_153, 0) = ((MR_Box) (SpecNum_9));
          MR_hl_field(MR_mktag(1), Error_153, 1) = ((MR_Box) (MR_Word) (SpecChar_38));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          *Spec_10 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (OverallContext_5));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_String) ""));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Errors_11 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Error_153));
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
        HeadVar__2_2 = (MR_Integer) 4;
        break;
      case (MR_Integer) 1:
        HeadVar__2_2 = (MR_Integer) 2;
        break;
      case (MR_Integer) 2:
        HeadVar__2_2 = (MR_Integer) 3;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 1:
            HeadVar__2_2 = (MR_Integer) 0;
            break;
        }
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
    MR_bool succeeded = (STATE_VARIABLE_Chars_0_17 != (MR_Word) ((MR_Unsigned) 0U));
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

      succeeded = (STATE_VARIABLE_Chars_21_21 != (MR_Word) ((MR_Unsigned) 0U));
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
            Var_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_25, 0) = ((MR_Box) ((MR_Unsigned) 4U));
            MR_hl_field(MR_mktag(3), Var_25, 1) = ((MR_Box) (SpecNum_10));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
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
              base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
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
                Var_29 = (MR_Integer) 4;
                break;
              case (MR_Integer) 1:
                Var_29 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                Var_29 = (MR_Integer) 3;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), PolyType_13, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    Var_29 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    Var_29 = (MR_Integer) 0;
                    break;
                }
                break;
            }
            {
              Var_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_28, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(MR_mktag(3), Var_28, 1) = ((MR_Box) (SpecNum_10));
              MR_hl_field(MR_mktag(3), Var_28, 2) = (MR_Box) ((MR_Unsigned) (Var_29));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
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
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
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

            succeeded = (TailMergedSpecs_6 != (MR_Word) ((MR_Unsigned) 0U));
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
              MR_String Var_46;

              Var_46 = mercury__string__f_43_43_2_f_0(HeadConstString_8, TailConstString_12);
              {
                HeadMergedSpec_13 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), HeadMergedSpec_13, 0) = ((MR_Box) (HeadContext_7));
                MR_hl_field(MR_mktag(0), HeadMergedSpec_13, 1) = ((MR_Box) (Var_46));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *HeadVar__2_2 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadMergedSpec_13));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (LaterTailMergedSpecs_10));
              }
            }
            else
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
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
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__2_2 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadSpec_3));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailMergedSpecs_6));
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
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
