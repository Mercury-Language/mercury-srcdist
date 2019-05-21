/*
** Automatically generated from `parse_string_format.m'
** by the Mercury compiler,
** version rotd-2018-01-23
** configured for x86_64-pc-linux-gnu.
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
#include "hlds.goal_path.mih"
#include "hlds.goal_util.mih"
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
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__format_call__parse_string_format__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_PseudoTypeInfo check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__field_types_abstract_poly_type_0_0[2] = {
  (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__parse_string_format__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0
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
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__field_types_abstract_poly_type_0_1[2] = {
  (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__parse_string_format__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0
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
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__field_types_abstract_poly_type_0_2[2] = {
  (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__parse_string_format__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0
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
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__field_types_abstract_poly_type_0_3[2] = {
  (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__parse_string_format__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0
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
  MR_FUNCTOR_SUBTYPE_NONE
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
    check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_stag_ordered_abstract_poly_type_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_stag_ordered_abstract_poly_type_0_1
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_stag_ordered_abstract_poly_type_0_2
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_stag_ordered_abstract_poly_type_0_3
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
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__field_types_compiler_format_maybe_prec_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
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
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__field_types_compiler_format_maybe_prec_0_2[1] = {
  (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__parse_string_format__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
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
  MR_FUNCTOR_SUBTYPE_NONE
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
    MR_SECTAG_LOCAL,
    check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_stag_ordered_compiler_format_maybe_prec_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_stag_ordered_compiler_format_maybe_prec_0_1
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_stag_ordered_compiler_format_maybe_prec_0_2
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
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__field_types_compiler_format_maybe_width_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
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
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__field_types_compiler_format_maybe_width_0_2[1] = {
  (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__parse_string_format__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
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
  MR_FUNCTOR_SUBTYPE_NONE
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
    MR_SECTAG_LOCAL,
    check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_stag_ordered_compiler_format_maybe_width_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_stag_ordered_compiler_format_maybe_width_0_1
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_stag_ordered_compiler_format_maybe_width_0_2
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
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
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
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__field_types_compiler_format_spec_0_1[4] = {
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_flags_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__type_ctor_info_compiler_format_maybe_width_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__parse_string_format__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
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
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__field_types_compiler_format_spec_0_2[5] = {
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_flags_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__type_ctor_info_compiler_format_maybe_width_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__type_ctor_info_compiler_format_maybe_prec_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__parse_string_format__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
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
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__field_types_compiler_format_spec_0_3[5] = {
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_flags_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__type_ctor_info_compiler_format_maybe_width_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__type_ctor_info_compiler_format_maybe_prec_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__parse_string_format__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
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
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__field_types_compiler_format_spec_0_4[6] = {
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_flags_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__type_ctor_info_compiler_format_maybe_width_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__type_ctor_info_compiler_format_maybe_prec_0,
  (MR_PseudoTypeInfo) &mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_int_base_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__parse_string_format__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
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
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__field_types_compiler_format_spec_0_5[6] = {
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_flags_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__type_ctor_info_compiler_format_maybe_width_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__type_ctor_info_compiler_format_maybe_prec_0,
  (MR_PseudoTypeInfo) &mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_float_kind_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__parse_string_format__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
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
  MR_FUNCTOR_SUBTYPE_NONE
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
    check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_stag_ordered_compiler_format_spec_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_stag_ordered_compiler_format_spec_0_1
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_stag_ordered_compiler_format_spec_0_2
  },
  {
    (MR_Integer) 3,
    MR_SECTAG_REMOTE,
    check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__du_stag_ordered_compiler_format_spec_0_3
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
    MR_Integer CastX_362 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_363 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_362 == CastY_363);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_String Var_392 = ((MR_String) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
            MR_Word Var_393 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
                  MR_String ArgY2_7 = ((MR_String) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
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
            MR_Word Var_394 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 3)));
            MR_Word Var_395 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2)));
            MR_Word Var_396 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
            MR_Word Var_397 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ArgY1_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
                  MR_Word ArgY2_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1)));
                  MR_Word ArgY3_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 2)));
                  MR_Word ArgY4_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 3)));
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
                        mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__format_call__parse_string_format_scalar_common_1[0], HeadVar__1_1, ((MR_Box) (Var_394)), ((MR_Box) (ArgY4_58)));
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
            MR_Word Var_409 = ((MR_Word) (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 4)));
            MR_Word Var_410 = ((MR_Word) (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 3)));
            MR_Word Var_411 = ((MR_Word) (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 2)));
            MR_Word Var_412 = ((MR_Word) (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1)));
            MR_Word Var_413 = ((MR_Word) (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0)));

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
                  MR_Word ArgY1_117 = ((MR_Word) (MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0)));
                  MR_Word ArgY2_119 = ((MR_Word) (MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 1)));
                  MR_Word ArgY3_121 = ((MR_Word) (MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 2)));
                  MR_Word ArgY4_123 = ((MR_Word) (MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 3)));
                  MR_Word ArgY5_125 = ((MR_Word) (MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 4)));
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
                          mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__format_call__parse_string_format_scalar_common_1[0], HeadVar__1_1, ((MR_Box) (Var_409)), ((MR_Box) (ArgY5_125)));
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
                MR_Word Var_404 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 5)));
                MR_Word Var_405 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 4)));
                MR_Word Var_406 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3)));
                MR_Word Var_407 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2)));
                MR_Word Var_408 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1)));

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
                          MR_Word ArgY1_189 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1)));
                          MR_Word ArgY2_191 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2)));
                          MR_Word ArgY3_193 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 3)));
                          MR_Word ArgY4_195 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 4)));
                          MR_Word ArgY5_197 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 5)));
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
                                  mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__format_call__parse_string_format_scalar_common_1[0], HeadVar__1_1, ((MR_Box) (Var_404)), ((MR_Box) (ArgY5_197)));
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
                MR_Word Var_414 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 6)));
                MR_Word Var_415 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 5)));
                MR_Word Var_416 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 4)));
                MR_Word Var_417 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3)));
                MR_Word Var_418 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2)));
                MR_Word Var_419 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1)));

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
                          MR_Word ArgY1_265 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1)));
                          MR_Word ArgY2_267 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2)));
                          MR_Word ArgY3_269 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 3)));
                          MR_Word ArgY4_271 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 4)));
                          MR_Word ArgY5_273 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 5)));
                          MR_Word ArgY6_275 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 6)));
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
                                  MR_Integer Var_422 = (MR_Integer) Var_415;
                                  MR_Integer Var_423 = (MR_Integer) ArgY5_273;

                                  mercury__private_builtin__builtin_compare_int_3_p_0(&Var_280, Var_422, Var_423);
                                  succeeded = (Var_280 == (MR_Integer) 0);
                                  succeeded = !(succeeded);
                                  if (succeeded)
                                    *HeadVar__1_1 = Var_280;
                                  else
                                  {
                                    mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__format_call__parse_string_format_scalar_common_1[0], HeadVar__1_1, ((MR_Box) (Var_414)), ((MR_Box) (ArgY6_275)));
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
                MR_Word Var_398 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 6)));
                MR_Word Var_399 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 5)));
                MR_Word Var_400 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 4)));
                MR_Word Var_401 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3)));
                MR_Word Var_402 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2)));
                MR_Word Var_403 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1)));

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
                          MR_Word ArgY1_346 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1)));
                          MR_Word ArgY2_348 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2)));
                          MR_Word ArgY3_350 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 3)));
                          MR_Word ArgY4_352 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 4)));
                          MR_Word ArgY5_354 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 5)));
                          MR_Word ArgY6_356 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 6)));
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
                                  MR_Integer Var_420 = (MR_Integer) Var_399;
                                  MR_Integer Var_421 = (MR_Integer) ArgY5_354;

                                  mercury__private_builtin__builtin_compare_int_3_p_0(&Var_361, Var_420, Var_421);
                                  succeeded = (Var_361 == (MR_Integer) 0);
                                  succeeded = !(succeeded);
                                  if (succeeded)
                                    *HeadVar__1_1 = Var_361;
                                  else
                                  {
                                    mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__format_call__parse_string_format_scalar_common_1[0], HeadVar__1_1, ((MR_Box) (Var_398)), ((MR_Box) (ArgY6_356)));
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
    MR_Integer CastX_59 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_60 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_59 == CastY_60);
    if (succeeded)
      succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ArgY1_4;
            MR_String ArgX2_5 = ((MR_String) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
            MR_String ArgY2_6;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
            if (succeeded)
            {
              ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
              ArgY2_6 = ((MR_String) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
              succeeded = mercury__term____Unify____context_0_0(ArgX1_3, ArgY1_4);
              if (succeeded)
                succeeded = (strcmp(ArgX2_5, ArgY2_6) == 0);
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word TypeInfo_64_64;
            MR_Word ArgX1_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ArgY1_8;
            MR_Word ArgX2_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
            MR_Word ArgY2_10;
            MR_Word ArgX3_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2)));
            MR_Word ArgY3_12;
            MR_Word ArgX4_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 3)));
            MR_Word ArgY4_14;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              ArgY1_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
              ArgY2_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
              ArgY3_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2)));
              ArgY4_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 3)));
              succeeded = mercury__term____Unify____context_0_0(ArgX1_7, ArgY1_8);
              if (succeeded)
              {
                succeeded = mercury__string__parse_util____Unify____string_format_flags_0_0(ArgX2_9, ArgY2_10);
                if (succeeded)
                {
                  succeeded = check_hlds__simplify__format_call__parse_string_format____Unify____compiler_format_maybe_width_0_0(ArgX3_11, ArgY3_12);
                  if (succeeded)
                  {
                    TypeInfo_64_64 = (MR_Word) &check_hlds__simplify__format_call__parse_string_format_scalar_common_1[0];
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
            MR_Word ArgX1_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ArgY1_16;
            MR_Word ArgX2_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 1)));
            MR_Word ArgY2_18;
            MR_Word ArgX3_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 2)));
            MR_Word ArgY3_20;
            MR_Word ArgX4_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 3)));
            MR_Word ArgY4_22;
            MR_Word ArgX5_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 4)));
            MR_Word ArgY5_24;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (succeeded)
            {
              ArgY1_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0)));
              ArgY2_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1)));
              ArgY3_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 2)));
              ArgY4_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 3)));
              ArgY5_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 4)));
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
                      TypeInfo_73_73 = (MR_Word) &check_hlds__simplify__format_call__parse_string_format_scalar_common_1[0];
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
                MR_Word ArgX1_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));
                MR_Word ArgY1_26;
                MR_Word ArgX2_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2)));
                MR_Word ArgY2_28;
                MR_Word ArgX3_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3)));
                MR_Word ArgY3_30;
                MR_Word ArgX4_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 4)));
                MR_Word ArgY4_32;
                MR_Word ArgX5_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 5)));
                MR_Word ArgY5_34;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  ArgY1_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1)));
                  ArgY2_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2)));
                  ArgY3_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3)));
                  ArgY4_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 4)));
                  ArgY5_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 5)));
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
                          TypeInfo_70_70 = (MR_Word) &check_hlds__simplify__format_call__parse_string_format_scalar_common_1[0];
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
                MR_Word ArgX1_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));
                MR_Word ArgY1_36;
                MR_Word ArgX2_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2)));
                MR_Word ArgY2_38;
                MR_Word ArgX3_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3)));
                MR_Word ArgY3_40;
                MR_Word ArgX4_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 4)));
                MR_Word ArgY4_42;
                MR_Word ArgX5_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 5)));
                MR_Word ArgY5_44;
                MR_Word ArgX6_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 6)));
                MR_Word ArgY6_46;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (succeeded)
                {
                  ArgY1_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1)));
                  ArgY2_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2)));
                  ArgY3_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3)));
                  ArgY4_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 4)));
                  ArgY5_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 5)));
                  ArgY6_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 6)));
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
                            TypeInfo_76_76 = (MR_Word) &check_hlds__simplify__format_call__parse_string_format_scalar_common_1[0];
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
                MR_Word ArgX1_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));
                MR_Word ArgY1_48;
                MR_Word ArgX2_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2)));
                MR_Word ArgY2_50;
                MR_Word ArgX3_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3)));
                MR_Word ArgY3_52;
                MR_Word ArgX4_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 4)));
                MR_Word ArgY4_54;
                MR_Word ArgX5_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 5)));
                MR_Word ArgY5_56;
                MR_Word ArgX6_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 6)));
                MR_Word ArgY6_58;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
                if (succeeded)
                {
                  ArgY1_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1)));
                  ArgY2_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2)));
                  ArgY3_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3)));
                  ArgY4_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 4)));
                  ArgY5_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 5)));
                  ArgY6_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 6)));
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
                            TypeInfo_67_67 = (MR_Word) &check_hlds__simplify__format_call__parse_string_format_scalar_common_1[0];
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
    MR_Integer CastX_16 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_17 = (MR_Integer) HeadVar__3_3;

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
            MR_Integer Var_20 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Integer ArgY1_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));

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
            MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0)));

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
                  MR_Word ArgY1_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0)));

                  mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__format_call__parse_string_format_scalar_common_1[0], HeadVar__1_1, ((MR_Box) (Var_21)), ((MR_Box) (ArgY1_15)));
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
    MR_Integer CastX_9 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_10 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer CastX_3 = (MR_Integer) HeadVar__1_1;
            MR_Integer CastY_4 = (MR_Integer) HeadVar__2_2;

            succeeded = (CastY_4 == CastX_3);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer ArgX1_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
            MR_Integer ArgY1_6;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              ArgY1_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
              succeeded = (ArgX1_5 == ArgY1_6);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word TypeInfo_11_11;
            MR_Word ArgX1_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ArgY1_8;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (succeeded)
            {
              ArgY1_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0)));
              TypeInfo_11_11 = (MR_Word) &check_hlds__simplify__format_call__parse_string_format_scalar_common_1[0];
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
    MR_Integer CastX_16 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_17 = (MR_Integer) HeadVar__3_3;

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
            MR_Integer Var_20 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Integer ArgY1_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));

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
            MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0)));

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
                  MR_Word ArgY1_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0)));

                  mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__format_call__parse_string_format_scalar_common_1[0], HeadVar__1_1, ((MR_Box) (Var_21)), ((MR_Box) (ArgY1_15)));
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
    MR_Integer CastX_9 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_10 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer CastX_3 = (MR_Integer) HeadVar__1_1;
            MR_Integer CastY_4 = (MR_Integer) HeadVar__2_2;

            succeeded = (CastY_4 == CastX_3);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer ArgX1_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
            MR_Integer ArgY1_6;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              ArgY1_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
              succeeded = (ArgX1_5 == ArgY1_6);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word TypeInfo_11_11;
            MR_Word ArgX1_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ArgY1_8;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (succeeded)
            {
              ArgY1_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0)));
              TypeInfo_11_11 = (MR_Word) &check_hlds__simplify__format_call__parse_string_format_scalar_common_1[0];
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
    MR_Integer CastX_72 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_73 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_72 == CastY_73);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
            MR_Word Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
                  MR_Word ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
                  MR_Word Var_8;

                  mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__format_call__parse_string_format_scalar_common_1[0], &Var_8, ((MR_Box) (Var_85)), ((MR_Box) (ArgY1_5)));
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
            MR_Word Var_86 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
            MR_Word Var_87 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ArgY1_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
                  MR_Word ArgY2_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1)));
                  MR_Word Var_29;

                  mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__format_call__parse_string_format_scalar_common_1[0], &Var_29, ((MR_Box) (Var_87)), ((MR_Box) (ArgY1_26)));
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
            MR_Word Var_88 = ((MR_Word) (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1)));
            MR_Word Var_89 = ((MR_Word) (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0)));

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
                  MR_Word ArgY1_47 = ((MR_Word) (MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0)));
                  MR_Word ArgY2_49 = ((MR_Word) (MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 1)));
                  MR_Word Var_50;

                  mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__format_call__parse_string_format_scalar_common_1[0], &Var_50, ((MR_Box) (Var_89)), ((MR_Box) (ArgY1_47)));
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
            MR_Word Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1)));
            MR_Word Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)));

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
                  MR_Word ArgY1_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)));
                  MR_Word ArgY2_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1)));
                  MR_Word Var_71;

                  mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__format_call__parse_string_format_scalar_common_1[0], &Var_71, ((MR_Box) (Var_83)), ((MR_Box) (ArgY1_68)));
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
    MR_Integer CastX_19 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_20 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_19 == CastY_20);
    if (succeeded)
      succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word TypeInfo_23_23;
            MR_Word ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ArgY1_4;
            MR_Word ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
            MR_Word ArgY2_6;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
            if (succeeded)
            {
              ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
              ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
              TypeInfo_23_23 = (MR_Word) &check_hlds__simplify__format_call__parse_string_format_scalar_common_1[0];
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_23_23, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
              if (succeeded)
                succeeded = mercury__term____Unify____context_0_0(ArgX2_5, ArgY2_6);
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word TypeInfo_25_25;
            MR_Word ArgX1_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ArgY1_8;
            MR_Word ArgX2_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
            MR_Word ArgY2_10;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              ArgY1_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
              ArgY2_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
              TypeInfo_25_25 = (MR_Word) &check_hlds__simplify__format_call__parse_string_format_scalar_common_1[0];
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_25_25, ((MR_Box) (ArgX1_7)), ((MR_Box) (ArgY1_8)));
              if (succeeded)
                succeeded = mercury__term____Unify____context_0_0(ArgX2_9, ArgY2_10);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word TypeInfo_27_27;
            MR_Word ArgX1_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ArgY1_12;
            MR_Word ArgX2_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 1)));
            MR_Word ArgY2_14;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (succeeded)
            {
              ArgY1_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0)));
              ArgY2_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1)));
              TypeInfo_27_27 = (MR_Word) &check_hlds__simplify__format_call__parse_string_format_scalar_common_1[0];
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_27_27, ((MR_Box) (ArgX1_11)), ((MR_Box) (ArgY1_12)));
              if (succeeded)
                succeeded = mercury__term____Unify____context_0_0(ArgX2_13, ArgY2_14);
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word TypeInfo_21_21;
            MR_Word ArgX1_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ArgY1_16;
            MR_Word ArgX2_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));
            MR_Word ArgY2_18;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)));
            if (succeeded)
            {
              ArgY1_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)));
              ArgY2_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1)));
              TypeInfo_21_21 = (MR_Word) &check_hlds__simplify__format_call__parse_string_format_scalar_common_1[0];
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
    if ((Errors_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
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
      MR_Word HeadError_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), Errors_10, (MR_Integer) 0)));
      MR_Word TailErrors_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), Errors_10, (MR_Integer) 1)));

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
    if ((GatherEndedBy_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      Specs0_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      if ((STATE_VARIABLE_PolyTypes_0_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *Errors_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      else
      {
        MR_Word Error_18;
        MR_Integer Var_36;

        Var_36 = mercury__list__length_1_f_0((MR_Word) &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__type_ctor_info_abstract_poly_type_0, STATE_VARIABLE_PolyTypes_0_30);
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
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
      }
    }
    else
    {
      MR_Word HeadSpec_19;
      MR_Word HeadErrors_20;
      MR_Word TailSpecs_21;
      MR_Word TailErrors_22;
      MR_Word STATE_VARIABLE_Chars_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), GatherEndedBy_14, (MR_Integer) 0)));
      MR_Integer Var_34;
      MR_Word STATE_VARIABLE_Chars_32_38;
      MR_Word STATE_VARIABLE_PolyTypes_33_39;

      check_hlds__simplify__format_call__parse_string_format__parse_conversion_specification_8_p_0(STATE_VARIABLE_Chars_31_31, &STATE_VARIABLE_Chars_32_38, STATE_VARIABLE_PolyTypes_0_30, &STATE_VARIABLE_PolyTypes_33_39, Context_9, SpecNum_10, &HeadSpec_19, &HeadErrors_20);
      Var_34 = (SpecNum_10 + (MR_Integer) 1);
      check_hlds__simplify__format_call__parse_string_format__compiler_parse_format_string_6_p_0(STATE_VARIABLE_Chars_32_38, STATE_VARIABLE_PolyTypes_33_39, Context_9, Var_34, &TailSpecs_21, &TailErrors_22);
      if ((HeadErrors_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
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
        *Errors_12 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_error_0, HeadErrors_20, TailErrors_22);
      }
    }
    if ((NonConversionSpecChars_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
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
    MR_Word TypeCtorInfo_39_39;
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

    mercury__string__parse_util__gather_flag_chars_4_p_0(STATE_VARIABLE_Chars_0_22, &STATE_VARIABLE_Chars_31_31, (MR_Word) &check_hlds__simplify__format_call__parse_string_format_scalar_common_2[0], &Flags_16);
    succeeded = ((MR_tag((MR_Word) STATE_VARIABLE_Chars_31_31)) == (MR_mktag((MR_Integer) 1)));
    if (succeeded)
    {
      Var_54 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_Chars_31_31, (MR_Integer) 0)));
      STATE_VARIABLE_Chars_21_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_Chars_31_31, (MR_Integer) 1)));
      succeeded = (Var_54 == (MR_Char) 42);
    }
    if (succeeded)
    {
      STATE_VARIABLE_Chars_32_32 = STATE_VARIABLE_Chars_21_53;
      if ((STATE_VARIABLE_PolyTypes_0_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word Var_55;

        MaybeWidth_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        {
          Var_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(3), Var_55, 1) = ((MR_Box) (SpecNum_12));
        }
        {
          WidthErrors_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), WidthErrors_18, 0) = ((MR_Box) (Var_55));
          MR_hl_field(MR_mktag(1), WidthErrors_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        STATE_VARIABLE_PolyTypes_33_33 = STATE_VARIABLE_PolyTypes_0_24;
      }
      else
      {
        MR_Word PolyType_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_24, (MR_Integer) 0)));
        MR_Word PolyWidthVar_50;
        MR_Word _Context_51;

        STATE_VARIABLE_PolyTypes_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_24, (MR_Integer) 1)));
        succeeded = ((MR_tag((MR_Word) PolyType_49)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          PolyWidthVar_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), PolyType_49, (MR_Integer) 0)));
          _Context_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), PolyType_49, (MR_Integer) 1)));
          {
            MaybeWidth_17 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), MaybeWidth_17, 0) = ((MR_Box) (PolyWidthVar_50));
          }
          WidthErrors_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        }
        else
        {
          MR_Word Var_58;
          MR_Word Var_59;

          MaybeWidth_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
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
            MR_hl_field(MR_mktag(1), WidthErrors_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
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
        WidthErrors_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
      else
      {
        MaybeWidth_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        WidthErrors_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        STATE_VARIABLE_Chars_32_32 = STATE_VARIABLE_Chars_31_31;
      }
      STATE_VARIABLE_PolyTypes_33_33 = STATE_VARIABLE_PolyTypes_0_24;
    }
    check_hlds__simplify__format_call__parse_string_format__get_optional_prec_7_p_0(STATE_VARIABLE_Chars_32_32, &STATE_VARIABLE_Chars_34_34, STATE_VARIABLE_PolyTypes_33_33, &STATE_VARIABLE_PolyTypes_35_35, SpecNum_12, &MaybePrec_19, &PrecErrors_20);
    check_hlds__simplify__format_call__parse_string_format__get_first_spec_11_p_0(STATE_VARIABLE_Chars_34_34, STATE_VARIABLE_Chars_23, STATE_VARIABLE_PolyTypes_35_35, STATE_VARIABLE_PolyTypes_25, Context_11, Flags_16, MaybeWidth_17, MaybePrec_19, SpecNum_12, Spec_13, &SpecErrors_21);
    TypeCtorInfo_39_39 = (MR_Word) &mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_error_0;
    Var_38 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_39_39, PrecErrors_20, SpecErrors_21);
    *Errors_14 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_39_39, WidthErrors_18, Var_38);
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

    if ((STATE_VARIABLE_Chars_0_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
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
      Var_27 = mercury__list__length_1_f_0((MR_Word) &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__type_ctor_info_abstract_poly_type_0, STATE_VARIABLE_PolyTypes_0_3);
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
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
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

      *STATE_VARIABLE_Chars_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_Chars_0_1, (MR_Integer) 1)));
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
            ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            STATE_VARIABLE_PolyTypes_84_84 = STATE_VARIABLE_PolyTypes_0_3;
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Char) 69:
          {
            if ((STATE_VARIABLE_PolyTypes_0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
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
                MR_hl_field(MR_mktag(1), ErrorsPrime_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              STATE_VARIABLE_PolyTypes_84_84 = STATE_VARIABLE_PolyTypes_0_3;
            }
            else
            {
              MR_Word SpecPolyType_114 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0)));
              MR_Word FloatVar_47;
              MR_Word PolyContext_112;

              STATE_VARIABLE_PolyTypes_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1)));
              succeeded = ((MR_tag((MR_Word) SpecPolyType_114)) == (MR_mktag((MR_Integer) 0)));
              if (succeeded)
              {
                FloatVar_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), SpecPolyType_114, (MR_Integer) 0)));
                PolyContext_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), SpecPolyType_114, (MR_Integer) 1)));
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
                ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
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
                  MR_hl_field(MR_mktag(1), ErrorsPrime_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
              }
            }
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Char) 70:
          {
            if ((STATE_VARIABLE_PolyTypes_0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              MR_Word Error_170;

              {
                Error_170 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Error_170, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), Error_170, 1) = ((MR_Box) (SpecNum_9));
                MR_hl_field(MR_mktag(3), Error_170, 2) = ((MR_Box) (MR_Word) (SpecChar_38));
              }
              {
                SpecPrime_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), SpecPrime_39, 0) = ((MR_Box) (OverallContext_5));
                MR_hl_field(MR_mktag(0), SpecPrime_39, 1) = ((MR_Box) ((MR_String) ""));
              }
              {
                ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ErrorsPrime_40, 0) = ((MR_Box) (Error_170));
                MR_hl_field(MR_mktag(1), ErrorsPrime_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              STATE_VARIABLE_PolyTypes_84_84 = STATE_VARIABLE_PolyTypes_0_3;
            }
            else
            {
              MR_Word SpecPolyType_187 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0)));
              MR_Word FloatVar_175;
              MR_Word PolyContext_180;

              STATE_VARIABLE_PolyTypes_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1)));
              succeeded = ((MR_tag((MR_Word) SpecPolyType_187)) == (MR_mktag((MR_Integer) 0)));
              if (succeeded)
              {
                FloatVar_175 = ((MR_Word) (MR_hl_field(MR_mktag(0), SpecPolyType_187, (MR_Integer) 0)));
                PolyContext_180 = ((MR_Word) (MR_hl_field(MR_mktag(0), SpecPolyType_187, (MR_Integer) 1)));
                {
                  SpecPrime_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 1) = ((MR_Box) (PolyContext_180));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 2) = ((MR_Box) (HeadVar__6_6));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 3) = ((MR_Box) (HeadVar__7_7));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 4) = ((MR_Box) (HeadVar__8_8));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 5) = ((MR_Box) ((MR_Integer) 3));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 6) = ((MR_Box) (FloatVar_175));
                }
                ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              }
              else
              {
                MR_Word Var_171;
                MR_Word Error_174;

                Var_171 = check_hlds__simplify__format_call__parse_string_format__abstract_poly_type_to_kind_1_f_0(SpecPolyType_187);
                {
                  Error_174 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), Error_174, 0) = ((MR_Box) (SpecNum_9));
                  MR_hl_field(MR_mktag(2), Error_174, 1) = ((MR_Box) (MR_Word) (SpecChar_38));
                  MR_hl_field(MR_mktag(2), Error_174, 2) = ((MR_Box) (Var_171));
                }
                {
                  SpecPrime_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), SpecPrime_39, 0) = ((MR_Box) (OverallContext_5));
                  MR_hl_field(MR_mktag(0), SpecPrime_39, 1) = ((MR_Box) ((MR_String) ""));
                }
                {
                  ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ErrorsPrime_40, 0) = ((MR_Box) (Error_174));
                  MR_hl_field(MR_mktag(1), ErrorsPrime_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
              }
            }
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Char) 71:
          {
            if ((STATE_VARIABLE_PolyTypes_0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              MR_Word Error_213;

              {
                Error_213 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Error_213, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), Error_213, 1) = ((MR_Box) (SpecNum_9));
                MR_hl_field(MR_mktag(3), Error_213, 2) = ((MR_Box) (MR_Word) (SpecChar_38));
              }
              {
                SpecPrime_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), SpecPrime_39, 0) = ((MR_Box) (OverallContext_5));
                MR_hl_field(MR_mktag(0), SpecPrime_39, 1) = ((MR_Box) ((MR_String) ""));
              }
              {
                ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ErrorsPrime_40, 0) = ((MR_Box) (Error_213));
                MR_hl_field(MR_mktag(1), ErrorsPrime_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              STATE_VARIABLE_PolyTypes_84_84 = STATE_VARIABLE_PolyTypes_0_3;
            }
            else
            {
              MR_Word SpecPolyType_230 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0)));
              MR_Word FloatVar_218;
              MR_Word PolyContext_223;

              STATE_VARIABLE_PolyTypes_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1)));
              succeeded = ((MR_tag((MR_Word) SpecPolyType_230)) == (MR_mktag((MR_Integer) 0)));
              if (succeeded)
              {
                FloatVar_218 = ((MR_Word) (MR_hl_field(MR_mktag(0), SpecPolyType_230, (MR_Integer) 0)));
                PolyContext_223 = ((MR_Word) (MR_hl_field(MR_mktag(0), SpecPolyType_230, (MR_Integer) 1)));
                {
                  SpecPrime_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 1) = ((MR_Box) (PolyContext_223));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 2) = ((MR_Box) (HeadVar__6_6));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 3) = ((MR_Box) (HeadVar__7_7));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 4) = ((MR_Box) (HeadVar__8_8));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 5) = ((MR_Box) ((MR_Integer) 5));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 6) = ((MR_Box) (FloatVar_218));
                }
                ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              }
              else
              {
                MR_Word Var_214;
                MR_Word Error_217;

                Var_214 = check_hlds__simplify__format_call__parse_string_format__abstract_poly_type_to_kind_1_f_0(SpecPolyType_230);
                {
                  Error_217 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), Error_217, 0) = ((MR_Box) (SpecNum_9));
                  MR_hl_field(MR_mktag(2), Error_217, 1) = ((MR_Box) (MR_Word) (SpecChar_38));
                  MR_hl_field(MR_mktag(2), Error_217, 2) = ((MR_Box) (Var_214));
                }
                {
                  SpecPrime_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), SpecPrime_39, 0) = ((MR_Box) (OverallContext_5));
                  MR_hl_field(MR_mktag(0), SpecPrime_39, 1) = ((MR_Box) ((MR_String) ""));
                }
                {
                  ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ErrorsPrime_40, 0) = ((MR_Box) (Error_217));
                  MR_hl_field(MR_mktag(1), ErrorsPrime_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
              }
            }
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Char) 88:
          {
            if ((STATE_VARIABLE_PolyTypes_0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
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
                MR_hl_field(MR_mktag(1), ErrorsPrime_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              STATE_VARIABLE_PolyTypes_84_84 = STATE_VARIABLE_PolyTypes_0_3;
            }
            else
            {
              MR_Word SpecPolyType_98 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0)));
              MR_Word IntVar_95;
              MR_Word PolyContext_96;

              STATE_VARIABLE_PolyTypes_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1)));
              succeeded = ((MR_tag((MR_Word) SpecPolyType_98)) == (MR_mktag((MR_Integer) 1)));
              if (succeeded)
              {
                IntVar_95 = ((MR_Word) (MR_hl_field(MR_mktag(1), SpecPolyType_98, (MR_Integer) 0)));
                PolyContext_96 = ((MR_Word) (MR_hl_field(MR_mktag(1), SpecPolyType_98, (MR_Integer) 1)));
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
                ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
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
                  MR_hl_field(MR_mktag(1), ErrorsPrime_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
              }
            }
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Char) 99:
          {
            if ((STATE_VARIABLE_PolyTypes_0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
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
                MR_hl_field(MR_mktag(1), ErrorsPrime_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              STATE_VARIABLE_PolyTypes_84_84 = STATE_VARIABLE_PolyTypes_0_3;
            }
            else
            {
              MR_Word SpecPolyType_127 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0)));
              MR_Word CharVar_48;
              MR_Word PolyContext_125;

              STATE_VARIABLE_PolyTypes_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1)));
              succeeded = ((MR_tag((MR_Word) SpecPolyType_127)) == (MR_mktag((MR_Integer) 3)));
              if (succeeded)
              {
                CharVar_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), SpecPolyType_127, (MR_Integer) 0)));
                PolyContext_125 = ((MR_Word) (MR_hl_field(MR_mktag(3), SpecPolyType_127, (MR_Integer) 1)));
                {
                  SpecPrime_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), SpecPrime_39, 0) = ((MR_Box) (PolyContext_125));
                  MR_hl_field(MR_mktag(1), SpecPrime_39, 1) = ((MR_Box) (HeadVar__6_6));
                  MR_hl_field(MR_mktag(1), SpecPrime_39, 2) = ((MR_Box) (HeadVar__7_7));
                  MR_hl_field(MR_mktag(1), SpecPrime_39, 3) = ((MR_Box) (CharVar_48));
                }
                ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
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
                  MR_hl_field(MR_mktag(1), ErrorsPrime_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
              }
            }
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Char) 100:
        case (MR_Char) 105:
          {
            if ((STATE_VARIABLE_PolyTypes_0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
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
                MR_hl_field(MR_mktag(1), ErrorsPrime_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              STATE_VARIABLE_PolyTypes_84_84 = STATE_VARIABLE_PolyTypes_0_3;
            }
            else
            {
              MR_Word SpecPolyType_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0)));
              MR_Word IntVar_42;
              MR_Word PolyContext_43;

              STATE_VARIABLE_PolyTypes_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1)));
              succeeded = ((MR_tag((MR_Word) SpecPolyType_41)) == (MR_mktag((MR_Integer) 1)));
              if (succeeded)
              {
                IntVar_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), SpecPolyType_41, (MR_Integer) 0)));
                PolyContext_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), SpecPolyType_41, (MR_Integer) 1)));
                {
                  SpecPrime_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 1) = ((MR_Box) (PolyContext_43));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 2) = ((MR_Box) (HeadVar__6_6));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 3) = ((MR_Box) (HeadVar__7_7));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 4) = ((MR_Box) (HeadVar__8_8));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 5) = ((MR_Box) (IntVar_42));
                }
                ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
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
                  MR_hl_field(MR_mktag(1), ErrorsPrime_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
              }
            }
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Char) 101:
          {
            if ((STATE_VARIABLE_PolyTypes_0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              MR_Word Error_256;

              {
                Error_256 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Error_256, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), Error_256, 1) = ((MR_Box) (SpecNum_9));
                MR_hl_field(MR_mktag(3), Error_256, 2) = ((MR_Box) (MR_Word) (SpecChar_38));
              }
              {
                SpecPrime_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), SpecPrime_39, 0) = ((MR_Box) (OverallContext_5));
                MR_hl_field(MR_mktag(0), SpecPrime_39, 1) = ((MR_Box) ((MR_String) ""));
              }
              {
                ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ErrorsPrime_40, 0) = ((MR_Box) (Error_256));
                MR_hl_field(MR_mktag(1), ErrorsPrime_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              STATE_VARIABLE_PolyTypes_84_84 = STATE_VARIABLE_PolyTypes_0_3;
            }
            else
            {
              MR_Word SpecPolyType_273 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0)));
              MR_Word FloatVar_261;
              MR_Word PolyContext_266;

              STATE_VARIABLE_PolyTypes_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1)));
              succeeded = ((MR_tag((MR_Word) SpecPolyType_273)) == (MR_mktag((MR_Integer) 0)));
              if (succeeded)
              {
                FloatVar_261 = ((MR_Word) (MR_hl_field(MR_mktag(0), SpecPolyType_273, (MR_Integer) 0)));
                PolyContext_266 = ((MR_Word) (MR_hl_field(MR_mktag(0), SpecPolyType_273, (MR_Integer) 1)));
                {
                  SpecPrime_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 1) = ((MR_Box) (PolyContext_266));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 2) = ((MR_Box) (HeadVar__6_6));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 3) = ((MR_Box) (HeadVar__7_7));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 4) = ((MR_Box) (HeadVar__8_8));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 5) = ((MR_Box) ((MR_Integer) 0));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 6) = ((MR_Box) (FloatVar_261));
                }
                ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              }
              else
              {
                MR_Word Var_257;
                MR_Word Error_260;

                Var_257 = check_hlds__simplify__format_call__parse_string_format__abstract_poly_type_to_kind_1_f_0(SpecPolyType_273);
                {
                  Error_260 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), Error_260, 0) = ((MR_Box) (SpecNum_9));
                  MR_hl_field(MR_mktag(2), Error_260, 1) = ((MR_Box) (MR_Word) (SpecChar_38));
                  MR_hl_field(MR_mktag(2), Error_260, 2) = ((MR_Box) (Var_257));
                }
                {
                  SpecPrime_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), SpecPrime_39, 0) = ((MR_Box) (OverallContext_5));
                  MR_hl_field(MR_mktag(0), SpecPrime_39, 1) = ((MR_Box) ((MR_String) ""));
                }
                {
                  ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ErrorsPrime_40, 0) = ((MR_Box) (Error_260));
                  MR_hl_field(MR_mktag(1), ErrorsPrime_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
              }
            }
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Char) 102:
          {
            if ((STATE_VARIABLE_PolyTypes_0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              MR_Word Error_299;

              {
                Error_299 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Error_299, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), Error_299, 1) = ((MR_Box) (SpecNum_9));
                MR_hl_field(MR_mktag(3), Error_299, 2) = ((MR_Box) (MR_Word) (SpecChar_38));
              }
              {
                SpecPrime_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), SpecPrime_39, 0) = ((MR_Box) (OverallContext_5));
                MR_hl_field(MR_mktag(0), SpecPrime_39, 1) = ((MR_Box) ((MR_String) ""));
              }
              {
                ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ErrorsPrime_40, 0) = ((MR_Box) (Error_299));
                MR_hl_field(MR_mktag(1), ErrorsPrime_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              STATE_VARIABLE_PolyTypes_84_84 = STATE_VARIABLE_PolyTypes_0_3;
            }
            else
            {
              MR_Word SpecPolyType_316 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0)));
              MR_Word FloatVar_304;
              MR_Word PolyContext_309;

              STATE_VARIABLE_PolyTypes_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1)));
              succeeded = ((MR_tag((MR_Word) SpecPolyType_316)) == (MR_mktag((MR_Integer) 0)));
              if (succeeded)
              {
                FloatVar_304 = ((MR_Word) (MR_hl_field(MR_mktag(0), SpecPolyType_316, (MR_Integer) 0)));
                PolyContext_309 = ((MR_Word) (MR_hl_field(MR_mktag(0), SpecPolyType_316, (MR_Integer) 1)));
                {
                  SpecPrime_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 1) = ((MR_Box) (PolyContext_309));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 2) = ((MR_Box) (HeadVar__6_6));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 3) = ((MR_Box) (HeadVar__7_7));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 4) = ((MR_Box) (HeadVar__8_8));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 5) = ((MR_Box) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 6) = ((MR_Box) (FloatVar_304));
                }
                ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              }
              else
              {
                MR_Word Var_300;
                MR_Word Error_303;

                Var_300 = check_hlds__simplify__format_call__parse_string_format__abstract_poly_type_to_kind_1_f_0(SpecPolyType_316);
                {
                  Error_303 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), Error_303, 0) = ((MR_Box) (SpecNum_9));
                  MR_hl_field(MR_mktag(2), Error_303, 1) = ((MR_Box) (MR_Word) (SpecChar_38));
                  MR_hl_field(MR_mktag(2), Error_303, 2) = ((MR_Box) (Var_300));
                }
                {
                  SpecPrime_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), SpecPrime_39, 0) = ((MR_Box) (OverallContext_5));
                  MR_hl_field(MR_mktag(0), SpecPrime_39, 1) = ((MR_Box) ((MR_String) ""));
                }
                {
                  ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ErrorsPrime_40, 0) = ((MR_Box) (Error_303));
                  MR_hl_field(MR_mktag(1), ErrorsPrime_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
              }
            }
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Char) 103:
          {
            if ((STATE_VARIABLE_PolyTypes_0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              MR_Word Error_342;

              {
                Error_342 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Error_342, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), Error_342, 1) = ((MR_Box) (SpecNum_9));
                MR_hl_field(MR_mktag(3), Error_342, 2) = ((MR_Box) (MR_Word) (SpecChar_38));
              }
              {
                SpecPrime_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), SpecPrime_39, 0) = ((MR_Box) (OverallContext_5));
                MR_hl_field(MR_mktag(0), SpecPrime_39, 1) = ((MR_Box) ((MR_String) ""));
              }
              {
                ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ErrorsPrime_40, 0) = ((MR_Box) (Error_342));
                MR_hl_field(MR_mktag(1), ErrorsPrime_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              STATE_VARIABLE_PolyTypes_84_84 = STATE_VARIABLE_PolyTypes_0_3;
            }
            else
            {
              MR_Word SpecPolyType_359 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0)));
              MR_Word FloatVar_347;
              MR_Word PolyContext_352;

              STATE_VARIABLE_PolyTypes_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1)));
              succeeded = ((MR_tag((MR_Word) SpecPolyType_359)) == (MR_mktag((MR_Integer) 0)));
              if (succeeded)
              {
                FloatVar_347 = ((MR_Word) (MR_hl_field(MR_mktag(0), SpecPolyType_359, (MR_Integer) 0)));
                PolyContext_352 = ((MR_Word) (MR_hl_field(MR_mktag(0), SpecPolyType_359, (MR_Integer) 1)));
                {
                  SpecPrime_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 1) = ((MR_Box) (PolyContext_352));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 2) = ((MR_Box) (HeadVar__6_6));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 3) = ((MR_Box) (HeadVar__7_7));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 4) = ((MR_Box) (HeadVar__8_8));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 5) = ((MR_Box) ((MR_Integer) 4));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 6) = ((MR_Box) (FloatVar_347));
                }
                ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              }
              else
              {
                MR_Word Var_343;
                MR_Word Error_346;

                Var_343 = check_hlds__simplify__format_call__parse_string_format__abstract_poly_type_to_kind_1_f_0(SpecPolyType_359);
                {
                  Error_346 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), Error_346, 0) = ((MR_Box) (SpecNum_9));
                  MR_hl_field(MR_mktag(2), Error_346, 1) = ((MR_Box) (MR_Word) (SpecChar_38));
                  MR_hl_field(MR_mktag(2), Error_346, 2) = ((MR_Box) (Var_343));
                }
                {
                  SpecPrime_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), SpecPrime_39, 0) = ((MR_Box) (OverallContext_5));
                  MR_hl_field(MR_mktag(0), SpecPrime_39, 1) = ((MR_Box) ((MR_String) ""));
                }
                {
                  ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ErrorsPrime_40, 0) = ((MR_Box) (Error_346));
                  MR_hl_field(MR_mktag(1), ErrorsPrime_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
              }
            }
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Char) 111:
          {
            if ((STATE_VARIABLE_PolyTypes_0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              MR_Word Error_385;

              {
                Error_385 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Error_385, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), Error_385, 1) = ((MR_Box) (SpecNum_9));
                MR_hl_field(MR_mktag(3), Error_385, 2) = ((MR_Box) (MR_Word) (SpecChar_38));
              }
              {
                SpecPrime_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), SpecPrime_39, 0) = ((MR_Box) (OverallContext_5));
                MR_hl_field(MR_mktag(0), SpecPrime_39, 1) = ((MR_Box) ((MR_String) ""));
              }
              {
                ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ErrorsPrime_40, 0) = ((MR_Box) (Error_385));
                MR_hl_field(MR_mktag(1), ErrorsPrime_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              STATE_VARIABLE_PolyTypes_84_84 = STATE_VARIABLE_PolyTypes_0_3;
            }
            else
            {
              MR_Word SpecPolyType_402 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0)));
              MR_Word IntVar_394;
              MR_Word PolyContext_395;

              STATE_VARIABLE_PolyTypes_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1)));
              succeeded = ((MR_tag((MR_Word) SpecPolyType_402)) == (MR_mktag((MR_Integer) 1)));
              if (succeeded)
              {
                IntVar_394 = ((MR_Word) (MR_hl_field(MR_mktag(1), SpecPolyType_402, (MR_Integer) 0)));
                PolyContext_395 = ((MR_Word) (MR_hl_field(MR_mktag(1), SpecPolyType_402, (MR_Integer) 1)));
                {
                  SpecPrime_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 1) = ((MR_Box) (PolyContext_395));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 2) = ((MR_Box) (HeadVar__6_6));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 3) = ((MR_Box) (HeadVar__7_7));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 4) = ((MR_Box) (HeadVar__8_8));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 5) = ((MR_Box) ((MR_Integer) 0));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 6) = ((MR_Box) (IntVar_394));
                }
                ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              }
              else
              {
                MR_Word Var_386;
                MR_Word Error_389;

                Var_386 = check_hlds__simplify__format_call__parse_string_format__abstract_poly_type_to_kind_1_f_0(SpecPolyType_402);
                {
                  Error_389 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), Error_389, 0) = ((MR_Box) (SpecNum_9));
                  MR_hl_field(MR_mktag(2), Error_389, 1) = ((MR_Box) (MR_Word) (SpecChar_38));
                  MR_hl_field(MR_mktag(2), Error_389, 2) = ((MR_Box) (Var_386));
                }
                {
                  SpecPrime_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), SpecPrime_39, 0) = ((MR_Box) (OverallContext_5));
                  MR_hl_field(MR_mktag(0), SpecPrime_39, 1) = ((MR_Box) ((MR_String) ""));
                }
                {
                  ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ErrorsPrime_40, 0) = ((MR_Box) (Error_389));
                  MR_hl_field(MR_mktag(1), ErrorsPrime_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
              }
            }
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Char) 112:
          {
            MR_Word STATE_VARIABLE_Flags_74_466;
            MR_Word Var_154 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__6_6, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
            MR_Word Var_155 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__6_6, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
            MR_Word Var_156 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__6_6, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
            MR_Word Var_157 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__6_6, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
            MR_Word Var_153 = ((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__6_6, (MR_Integer) 0)))) & (MR_Integer) 1);

            {
              STATE_VARIABLE_Flags_74_466 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Flags_74_466, 0) = ((MR_Box) (((MR_Integer) 1 | ((((Var_154 << (MR_Integer) 1)) | ((((Var_155 << (MR_Integer) 2)) | ((((Var_156 << (MR_Integer) 3)) | ((Var_157 << (MR_Integer) 4)))))))))));
            }
            if ((STATE_VARIABLE_PolyTypes_0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              MR_Word Error_427;

              {
                Error_427 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Error_427, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), Error_427, 1) = ((MR_Box) (SpecNum_9));
                MR_hl_field(MR_mktag(3), Error_427, 2) = ((MR_Box) (MR_Word) (SpecChar_38));
              }
              {
                SpecPrime_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), SpecPrime_39, 0) = ((MR_Box) (OverallContext_5));
                MR_hl_field(MR_mktag(0), SpecPrime_39, 1) = ((MR_Box) ((MR_String) ""));
              }
              {
                ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ErrorsPrime_40, 0) = ((MR_Box) (Error_427));
                MR_hl_field(MR_mktag(1), ErrorsPrime_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              STATE_VARIABLE_PolyTypes_84_84 = STATE_VARIABLE_PolyTypes_0_3;
            }
            else
            {
              MR_Word SpecPolyType_444 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0)));
              MR_Word IntVar_436;
              MR_Word PolyContext_437;

              STATE_VARIABLE_PolyTypes_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1)));
              succeeded = ((MR_tag((MR_Word) SpecPolyType_444)) == (MR_mktag((MR_Integer) 1)));
              if (succeeded)
              {
                IntVar_436 = ((MR_Word) (MR_hl_field(MR_mktag(1), SpecPolyType_444, (MR_Integer) 0)));
                PolyContext_437 = ((MR_Word) (MR_hl_field(MR_mktag(1), SpecPolyType_444, (MR_Integer) 1)));
                {
                  SpecPrime_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 1) = ((MR_Box) (PolyContext_437));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 2) = ((MR_Box) (STATE_VARIABLE_Flags_74_466));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 3) = ((MR_Box) (HeadVar__7_7));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 4) = ((MR_Box) (HeadVar__8_8));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 5) = ((MR_Box) ((MR_Integer) 4));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 6) = ((MR_Box) (IntVar_436));
                }
                ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              }
              else
              {
                MR_Word Var_428;
                MR_Word Error_431;

                Var_428 = check_hlds__simplify__format_call__parse_string_format__abstract_poly_type_to_kind_1_f_0(SpecPolyType_444);
                {
                  Error_431 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), Error_431, 0) = ((MR_Box) (SpecNum_9));
                  MR_hl_field(MR_mktag(2), Error_431, 1) = ((MR_Box) (MR_Word) (SpecChar_38));
                  MR_hl_field(MR_mktag(2), Error_431, 2) = ((MR_Box) (Var_428));
                }
                {
                  SpecPrime_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), SpecPrime_39, 0) = ((MR_Box) (OverallContext_5));
                  MR_hl_field(MR_mktag(0), SpecPrime_39, 1) = ((MR_Box) ((MR_String) ""));
                }
                {
                  ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ErrorsPrime_40, 0) = ((MR_Box) (Error_431));
                  MR_hl_field(MR_mktag(1), ErrorsPrime_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
              }
            }
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Char) 115:
          {
            if ((STATE_VARIABLE_PolyTypes_0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
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
                MR_hl_field(MR_mktag(1), ErrorsPrime_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              STATE_VARIABLE_PolyTypes_84_84 = STATE_VARIABLE_PolyTypes_0_3;
            }
            else
            {
              MR_Word SpecPolyType_140 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0)));
              MR_Word StrVar_49;
              MR_Word PolyContext_138;

              STATE_VARIABLE_PolyTypes_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1)));
              succeeded = ((MR_tag((MR_Word) SpecPolyType_140)) == (MR_mktag((MR_Integer) 2)));
              if (succeeded)
              {
                StrVar_49 = ((MR_Word) (MR_hl_field(MR_mktag(2), SpecPolyType_140, (MR_Integer) 0)));
                PolyContext_138 = ((MR_Word) (MR_hl_field(MR_mktag(2), SpecPolyType_140, (MR_Integer) 1)));
                {
                  SpecPrime_39 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), SpecPrime_39, 0) = ((MR_Box) (PolyContext_138));
                  MR_hl_field(MR_mktag(2), SpecPrime_39, 1) = ((MR_Box) (HeadVar__6_6));
                  MR_hl_field(MR_mktag(2), SpecPrime_39, 2) = ((MR_Box) (HeadVar__7_7));
                  MR_hl_field(MR_mktag(2), SpecPrime_39, 3) = ((MR_Box) (HeadVar__8_8));
                  MR_hl_field(MR_mktag(2), SpecPrime_39, 4) = ((MR_Box) (StrVar_49));
                }
                ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
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
                  MR_hl_field(MR_mktag(1), ErrorsPrime_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
              }
            }
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Char) 117:
          {
            if ((STATE_VARIABLE_PolyTypes_0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              MR_Word Error_469;

              {
                Error_469 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Error_469, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), Error_469, 1) = ((MR_Box) (SpecNum_9));
                MR_hl_field(MR_mktag(3), Error_469, 2) = ((MR_Box) (MR_Word) (SpecChar_38));
              }
              {
                SpecPrime_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), SpecPrime_39, 0) = ((MR_Box) (OverallContext_5));
                MR_hl_field(MR_mktag(0), SpecPrime_39, 1) = ((MR_Box) ((MR_String) ""));
              }
              {
                ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ErrorsPrime_40, 0) = ((MR_Box) (Error_469));
                MR_hl_field(MR_mktag(1), ErrorsPrime_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              STATE_VARIABLE_PolyTypes_84_84 = STATE_VARIABLE_PolyTypes_0_3;
            }
            else
            {
              MR_Word SpecPolyType_486 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0)));
              MR_Word IntVar_478;
              MR_Word PolyContext_479;

              STATE_VARIABLE_PolyTypes_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1)));
              succeeded = ((MR_tag((MR_Word) SpecPolyType_486)) == (MR_mktag((MR_Integer) 1)));
              if (succeeded)
              {
                IntVar_478 = ((MR_Word) (MR_hl_field(MR_mktag(1), SpecPolyType_486, (MR_Integer) 0)));
                PolyContext_479 = ((MR_Word) (MR_hl_field(MR_mktag(1), SpecPolyType_486, (MR_Integer) 1)));
                {
                  SpecPrime_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 1) = ((MR_Box) (PolyContext_479));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 2) = ((MR_Box) (HeadVar__6_6));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 3) = ((MR_Box) (HeadVar__7_7));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 4) = ((MR_Box) (HeadVar__8_8));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 5) = ((MR_Box) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 6) = ((MR_Box) (IntVar_478));
                }
                ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              }
              else
              {
                MR_Word Var_470;
                MR_Word Error_473;

                Var_470 = check_hlds__simplify__format_call__parse_string_format__abstract_poly_type_to_kind_1_f_0(SpecPolyType_486);
                {
                  Error_473 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), Error_473, 0) = ((MR_Box) (SpecNum_9));
                  MR_hl_field(MR_mktag(2), Error_473, 1) = ((MR_Box) (MR_Word) (SpecChar_38));
                  MR_hl_field(MR_mktag(2), Error_473, 2) = ((MR_Box) (Var_470));
                }
                {
                  SpecPrime_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), SpecPrime_39, 0) = ((MR_Box) (OverallContext_5));
                  MR_hl_field(MR_mktag(0), SpecPrime_39, 1) = ((MR_Box) ((MR_String) ""));
                }
                {
                  ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ErrorsPrime_40, 0) = ((MR_Box) (Error_473));
                  MR_hl_field(MR_mktag(1), ErrorsPrime_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
              }
            }
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Char) 120:
          {
            if ((STATE_VARIABLE_PolyTypes_0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              MR_Word Error_511;

              {
                Error_511 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Error_511, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), Error_511, 1) = ((MR_Box) (SpecNum_9));
                MR_hl_field(MR_mktag(3), Error_511, 2) = ((MR_Box) (MR_Word) (SpecChar_38));
              }
              {
                SpecPrime_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), SpecPrime_39, 0) = ((MR_Box) (OverallContext_5));
                MR_hl_field(MR_mktag(0), SpecPrime_39, 1) = ((MR_Box) ((MR_String) ""));
              }
              {
                ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ErrorsPrime_40, 0) = ((MR_Box) (Error_511));
                MR_hl_field(MR_mktag(1), ErrorsPrime_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              STATE_VARIABLE_PolyTypes_84_84 = STATE_VARIABLE_PolyTypes_0_3;
            }
            else
            {
              MR_Word SpecPolyType_528 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 0)));
              MR_Word IntVar_520;
              MR_Word PolyContext_521;

              STATE_VARIABLE_PolyTypes_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_3, (MR_Integer) 1)));
              succeeded = ((MR_tag((MR_Word) SpecPolyType_528)) == (MR_mktag((MR_Integer) 1)));
              if (succeeded)
              {
                IntVar_520 = ((MR_Word) (MR_hl_field(MR_mktag(1), SpecPolyType_528, (MR_Integer) 0)));
                PolyContext_521 = ((MR_Word) (MR_hl_field(MR_mktag(1), SpecPolyType_528, (MR_Integer) 1)));
                {
                  SpecPrime_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 1) = ((MR_Box) (PolyContext_521));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 2) = ((MR_Box) (HeadVar__6_6));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 3) = ((MR_Box) (HeadVar__7_7));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 4) = ((MR_Box) (HeadVar__8_8));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 5) = ((MR_Box) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(3), SpecPrime_39, 6) = ((MR_Box) (IntVar_520));
                }
                ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              }
              else
              {
                MR_Word Var_512;
                MR_Word Error_515;

                Var_512 = check_hlds__simplify__format_call__parse_string_format__abstract_poly_type_to_kind_1_f_0(SpecPolyType_528);
                {
                  Error_515 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), Error_515, 0) = ((MR_Box) (SpecNum_9));
                  MR_hl_field(MR_mktag(2), Error_515, 1) = ((MR_Box) (MR_Word) (SpecChar_38));
                  MR_hl_field(MR_mktag(2), Error_515, 2) = ((MR_Box) (Var_512));
                }
                {
                  SpecPrime_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), SpecPrime_39, 0) = ((MR_Box) (OverallContext_5));
                  MR_hl_field(MR_mktag(0), SpecPrime_39, 1) = ((MR_Box) ((MR_String) ""));
                }
                {
                  ErrorsPrime_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ErrorsPrime_40, 0) = ((MR_Box) (Error_515));
                  MR_hl_field(MR_mktag(1), ErrorsPrime_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
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
        MR_Word Error_151;

        {
          Error_151 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Error_151, 0) = ((MR_Box) (SpecNum_9));
          MR_hl_field(MR_mktag(1), Error_151, 1) = ((MR_Box) (MR_Word) (SpecChar_38));
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
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Error_151));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
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
    MR_bool succeeded = ((MR_tag((MR_Word) STATE_VARIABLE_Chars_0_17)) == (MR_mktag((MR_Integer) 1)));
    MR_Word STATE_VARIABLE_Chars_21_21;
    MR_Char Var_22;

    if (succeeded)
    {
      Var_22 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_Chars_0_17, (MR_Integer) 0)));
      STATE_VARIABLE_Chars_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_Chars_0_17, (MR_Integer) 1)));
      succeeded = (Var_22 == (MR_Char) 46);
    }
    if (succeeded)
    {
      MR_Word STATE_VARIABLE_Chars_23_23;
      MR_Char Var_24;

      succeeded = ((MR_tag((MR_Word) STATE_VARIABLE_Chars_21_21)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        Var_24 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_Chars_21_21, (MR_Integer) 0)));
        STATE_VARIABLE_Chars_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_Chars_21_21, (MR_Integer) 1)));
        succeeded = (Var_24 == (MR_Char) 42);
      }
      if (succeeded)
      {
        *STATE_VARIABLE_Chars_18 = STATE_VARIABLE_Chars_23_23;
        if ((STATE_VARIABLE_PolyTypes_0_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          MR_Word Var_25;

          *MaybePrec_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
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
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          *STATE_VARIABLE_PolyTypes_20 = STATE_VARIABLE_PolyTypes_0_19;
        }
        else
        {
          MR_Word PolyType_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_19, (MR_Integer) 0)));
          MR_Word PolyPrecVar_14;
          MR_Word _Context_15;

          *STATE_VARIABLE_PolyTypes_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_PolyTypes_0_19, (MR_Integer) 1)));
          succeeded = ((MR_tag((MR_Word) PolyType_13)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            PolyPrecVar_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), PolyType_13, (MR_Integer) 0)));
            _Context_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), PolyType_13, (MR_Integer) 1)));
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *MaybePrec_11 = base;
              MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (PolyPrecVar_14));
            }
            *Errors_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          }
          else
          {
            MR_Word Var_28;
            MR_Word Var_29;

            *MaybePrec_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
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
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
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
        *Errors_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *STATE_VARIABLE_PolyTypes_20 = STATE_VARIABLE_PolyTypes_0_19;
      }
    }
    else
    {
      *MaybePrec_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *Errors_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
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

    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Word HeadSpec_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word TailSpecs_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word TailMergedSpecs_6;

      check_hlds__simplify__format_call__parse_string_format__merge_adjacent_const_strs_2_p_0(TailSpecs_4, &TailMergedSpecs_6);
      switch (MR_tag((MR_Word) HeadSpec_3)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word HeadContext_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadSpec_3, (MR_Integer) 0)));
            MR_String HeadConstString_8 = ((MR_String) (MR_hl_field(MR_mktag(0), HeadSpec_3, (MR_Integer) 1)));
            MR_Word LaterTailMergedSpecs_10;
            MR_String TailConstString_12;
            MR_Word FirstTailMergedSpec_9;
            MR_Word _TailContext_11;

            succeeded = ((MR_tag((MR_Word) TailMergedSpecs_6)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              FirstTailMergedSpec_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), TailMergedSpecs_6, (MR_Integer) 0)));
              LaterTailMergedSpecs_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), TailMergedSpecs_6, (MR_Integer) 1)));
              succeeded = ((MR_tag((MR_Word) FirstTailMergedSpec_9)) == (MR_mktag((MR_Integer) 0)));
              if (succeeded)
              {
                _TailContext_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), FirstTailMergedSpec_9, (MR_Integer) 0)));
                TailConstString_12 = ((MR_String) (MR_hl_field(MR_mktag(0), FirstTailMergedSpec_9, (MR_Integer) 1)));
              }
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

    succeeded = check_hlds__simplify__format_call__parse_string_format____Unify____abstract_poly_type_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
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

    check_hlds__simplify__format_call__parse_string_format____Compare____abstract_poly_type_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
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

    succeeded = check_hlds__simplify__format_call__parse_string_format____Unify____compiler_format_maybe_prec_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
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

    check_hlds__simplify__format_call__parse_string_format____Compare____compiler_format_maybe_prec_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
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

    succeeded = check_hlds__simplify__format_call__parse_string_format____Unify____compiler_format_maybe_width_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
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

    check_hlds__simplify__format_call__parse_string_format____Compare____compiler_format_maybe_width_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
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

    succeeded = check_hlds__simplify__format_call__parse_string_format____Unify____compiler_format_spec_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
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

    check_hlds__simplify__format_call__parse_string_format____Compare____compiler_format_spec_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
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
