/*
** Automatically generated from `builtin_ops.m'
** by the Mercury compiler,
** version rotd-2016-01-15
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


/* :- module backend_libs.builtin_ops. */
/* :- implementation. */

/*
INIT mercury__backend_libs__builtin_ops__init
ENDINIT
*/

#include "backend_libs.builtin_ops.mih"


#include "analysis.mih"
#include "backend_libs.mih"
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
#include "libs.compiler_util.mih"
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
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
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
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_array_elem_type_0_0[1];

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_array_elem_type_0_0;

static const MR_FA_TypeInfo_Struct1 backend_libs__builtin_ops__list__ti_list_1backend_libs__builtin_ops__type_ctor_info_scalar_array_elem_type_0;

static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_array_elem_type_0_1[1];

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_array_elem_type_0_1;

static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_array_elem_type_0_0[1];

static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_array_elem_type_0_1[1];

static const MR_DuPtagLayout backend_libs__builtin_ops__backend_libs__builtin_ops__du_ptag_ordered_array_elem_type_0[2];

static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_name_ordered_array_elem_type_0[2];

static const MR_Integer backend_libs__builtin_ops__backend_libs__builtin_ops__functor_number_map_array_elem_type_0[2];

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_0;

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_1;

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_2;

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_3;

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_4;

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_5;

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_6;

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_7;

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_8;

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_9;

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_10;

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_11;

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_12;

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_13;

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_14;

static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_binary_op_0_15[1];

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_15;

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_16;

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_17;

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_18;

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_19;

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_20;

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_21;

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_22;

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_23;

static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_binary_op_0_24[1];

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_24;

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_25;

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_26;

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_27;

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_28;

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_29;

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_30;

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_31;

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_32;

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_33;

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_34;

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_35;

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_36;

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_37;

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_38;

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_39;

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_40;

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_41;

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_42;

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_43;

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_44;

static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_binary_op_0_0[43];

static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_binary_op_0_1[1];

static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_binary_op_0_2[1];

static const MR_DuPtagLayout backend_libs__builtin_ops__backend_libs__builtin_ops__du_ptag_ordered_binary_op_0[3];

static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_name_ordered_binary_op_0[45];

static const MR_Integer backend_libs__builtin_ops__backend_libs__builtin_ops__functor_number_map_binary_op_0[45];

static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_scalar_array_elem_type_0_0;

static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_scalar_array_elem_type_0_1;

static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_scalar_array_elem_type_0_2;

static const MR_EnumFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__enum_value_ordered_scalar_array_elem_type_0[3];

static const MR_EnumFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__enum_name_ordered_scalar_array_elem_type_0[3];

static const MR_Integer backend_libs__builtin_ops__backend_libs__builtin_ops__functor_number_map_scalar_array_elem_type_0[3];

static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__builtin_ops__backend_libs__builtin_ops__pti_simple_expr_1__pseudo_1;

static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_code_1_0[2];

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_code_1_0;

static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_code_1_1[2];

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_code_1_1;

static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_code_1_2[1];

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_code_1_2;

static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__builtin_ops__list__pti_list_1__pseudo_1;

static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_code_1_3[1];

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_code_1_3;

static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_simple_code_1_0[1];

static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_simple_code_1_1[1];

static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_simple_code_1_2[1];

static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_simple_code_1_3[1];

static const MR_DuPtagLayout backend_libs__builtin_ops__backend_libs__builtin_ops__du_ptag_ordered_simple_code_1[4];

static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_name_ordered_simple_code_1[4];

static const MR_Integer backend_libs__builtin_ops__backend_libs__builtin_ops__functor_number_map_simple_code_1[4];

static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_expr_1_0[1];

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_expr_1_0;

static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_expr_1_1[1];

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_expr_1_1;

static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_expr_1_2[1];

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_expr_1_2;

static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_expr_1_3[2];

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_expr_1_3;

static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_expr_1_4[3];

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_expr_1_4;

static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_simple_expr_1_0[1];

static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_simple_expr_1_1[1];

static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_simple_expr_1_2[1];

static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_simple_expr_1_3[2];

static const MR_DuPtagLayout backend_libs__builtin_ops__backend_libs__builtin_ops__du_ptag_ordered_simple_expr_1[4];

static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_name_ordered_simple_expr_1[5];

static const MR_Integer backend_libs__builtin_ops__backend_libs__builtin_ops__functor_number_map_simple_expr_1[5];

static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_0;

static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_1;

static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_2;

static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_3;

static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_4;

static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_5;

static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_6;

static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_7;

static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_8;

static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_9;

static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_10;

static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_11;

static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_12;

static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_13;

static const MR_EnumFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__enum_value_ordered_unary_op_0[14];

static const MR_EnumFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__enum_name_ordered_unary_op_0[14];

static const MR_Integer backend_libs__builtin_ops__backend_libs__builtin_ops__functor_number_map_unary_op_0[14];

static MR_bool MR_CALL 
backend_libs__builtin_ops____Unify____array_elem_type_0_0_10001(
  MR_Box backend_libs__builtin_ops__wrapper_arg_1,
  MR_Box backend_libs__builtin_ops__wrapper_arg_2);

static void MR_CALL 
backend_libs__builtin_ops____Compare____array_elem_type_0_0_10001(
  MR_Box * backend_libs__builtin_ops__wrapper_arg_1,
  MR_Box backend_libs__builtin_ops__wrapper_arg_2,
  MR_Box backend_libs__builtin_ops__wrapper_arg_3);

static MR_bool MR_CALL 
backend_libs__builtin_ops____Unify____binary_op_0_0_10001(
  MR_Box backend_libs__builtin_ops__wrapper_arg_1,
  MR_Box backend_libs__builtin_ops__wrapper_arg_2);

static void MR_CALL 
backend_libs__builtin_ops____Compare____binary_op_0_0_10001(
  MR_Box * backend_libs__builtin_ops__wrapper_arg_1,
  MR_Box backend_libs__builtin_ops__wrapper_arg_2,
  MR_Box backend_libs__builtin_ops__wrapper_arg_3);

static MR_bool MR_CALL 
backend_libs__builtin_ops____Unify____scalar_array_elem_type_0_0_10001(
  MR_Box backend_libs__builtin_ops__wrapper_arg_1,
  MR_Box backend_libs__builtin_ops__wrapper_arg_2);

static void MR_CALL 
backend_libs__builtin_ops____Compare____scalar_array_elem_type_0_0_10001(
  MR_Box * backend_libs__builtin_ops__wrapper_arg_1,
  MR_Box backend_libs__builtin_ops__wrapper_arg_2,
  MR_Box backend_libs__builtin_ops__wrapper_arg_3);

static MR_bool MR_CALL 
backend_libs__builtin_ops____Unify____simple_code_1_0_10001(
  MR_Box backend_libs__builtin_ops__wrapper_arg_1,
  MR_Box backend_libs__builtin_ops__wrapper_arg_2,
  MR_Box backend_libs__builtin_ops__wrapper_arg_3);

static void MR_CALL 
backend_libs__builtin_ops____Compare____simple_code_1_0_10001(
  MR_Box backend_libs__builtin_ops__wrapper_arg_1,
  MR_Box * backend_libs__builtin_ops__wrapper_arg_2,
  MR_Box backend_libs__builtin_ops__wrapper_arg_3,
  MR_Box backend_libs__builtin_ops__wrapper_arg_4);

static MR_bool MR_CALL 
backend_libs__builtin_ops____Unify____simple_expr_1_0_10001(
  MR_Box backend_libs__builtin_ops__wrapper_arg_1,
  MR_Box backend_libs__builtin_ops__wrapper_arg_2,
  MR_Box backend_libs__builtin_ops__wrapper_arg_3);

static void MR_CALL 
backend_libs__builtin_ops____Compare____simple_expr_1_0_10001(
  MR_Box backend_libs__builtin_ops__wrapper_arg_1,
  MR_Box * backend_libs__builtin_ops__wrapper_arg_2,
  MR_Box backend_libs__builtin_ops__wrapper_arg_3,
  MR_Box backend_libs__builtin_ops__wrapper_arg_4);

static MR_bool MR_CALL 
backend_libs__builtin_ops____Unify____unary_op_0_0_10001(
  MR_Box backend_libs__builtin_ops__wrapper_arg_1,
  MR_Box backend_libs__builtin_ops__wrapper_arg_2);

static void MR_CALL 
backend_libs__builtin_ops____Compare____unary_op_0_0_10001(
  MR_Box * backend_libs__builtin_ops__wrapper_arg_1,
  MR_Box backend_libs__builtin_ops__wrapper_arg_2,
  MR_Box backend_libs__builtin_ops__wrapper_arg_3);


static /* final */ const MR_Box backend_libs__builtin_ops_scalar_common_1[1][2];

static /* final */ const MR_Box backend_libs__builtin_ops_scalar_common_4[4][1];

static /* final */ const MR_Float backend_libs__builtin_ops_scalar_common_5[1];


/* sealed */ struct backend_libs__builtin_ops__vector_common_type_2_0_s {
  const MR_String backend_libs__builtin_ops__vector_common_type_2_0__vct_2_f_0;
  const MR_Integer backend_libs__builtin_ops__vector_common_type_2_0__vct_2_f_1;
};

static /* final */ const struct backend_libs__builtin_ops__vector_common_type_2_0_s backend_libs__builtin_ops_vector_common_2[76];

/* sealed */ struct backend_libs__builtin_ops__vector_common_type_3_0_s {
  const MR_String backend_libs__builtin_ops__vector_common_type_3_0__vct_3_f_0;
};

static /* final */ const struct backend_libs__builtin_ops__vector_common_type_3_0_s backend_libs__builtin_ops_vector_common_3[32];



static /* final */ const MR_Box backend_libs__builtin_ops_scalar_common_1[1][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&backend_libs__builtin_ops__backend_libs__builtin_ops__type_ctor_info_scalar_array_elem_type_0))
  },
};

static /* final */ const MR_Box backend_libs__builtin_ops_scalar_common_4[4][1] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    (MR_Box) &backend_libs__builtin_ops_scalar_common_5[0]
  },
  /* row 3 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
};

static /* final */ const MR_Float backend_libs__builtin_ops_scalar_common_5[1] = {
  /* row 0 */
  (MR_Float) 0.0000000000000000,
};


static /* final */ const struct backend_libs__builtin_ops__vector_common_type_2_0_s backend_libs__builtin_ops_vector_common_2[76] = {
  /* row 0 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 1 */
  {
    (MR_String) "pointer_equal",
    (MR_Integer) -1
  },
  /* row 2 */
  {
    (MR_String) "unsafe_type_cast",
    (MR_Integer) -1
  },
  /* row 3 */
  {
    (MR_String) "trace_get_io_state",
    (MR_Integer) -1
  },
  /* row 4 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 5 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 6 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 7 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 8 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 9 */
  {
    (MR_String) "builtin_int_gt",
    (MR_Integer) 2
  },
  /* row 10 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 11 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 12 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 13 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 14 */
  {
    (MR_String) "builtin_int_lt",
    (MR_Integer) -1
  },
  /* row 15 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 16 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 17 */
  {
    (MR_String) "store_at_ref",
    (MR_Integer) -1
  },
  /* row 18 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 19 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 20 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 21 */
  {
    (MR_String) "store_at_ref_impure",
    (MR_Integer) -1
  },
  /* row 22 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 23 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 24 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 25 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 26 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 27 */
  {
    (MR_String) "builtin_compound_eq",
    (MR_Integer) -1
  },
  /* row 28 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 29 */
  {
    (MR_String) "builtin_compound_lt",
    (MR_Integer) -1
  },
  /* row 30 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 31 */
  {
    (MR_String) "trace_set_io_state",
    (MR_Integer) -1
  },
  /* row 32 */
  {
    (MR_String) "builtin",
    (MR_Integer) 0
  },
  /* row 33 */
  {
    (MR_String) "float",
    (MR_Integer) 1
  },
  /* row 34 */
  {
    (MR_String) "int",
    (MR_Integer) 2
  },
  /* row 35 */
  {
    (MR_String) "io",
    (MR_Integer) 3
  },
  /* row 36 */
  {
    (MR_String) "private_builtin",
    (MR_Integer) 4
  },
  /* row 37 */
  {
    (MR_String) "term_size_prof_builtin",
    (MR_Integer) 5
  },
  /* row 38 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 39 */
  {
    (MR_String) "pointer_equal",
    (MR_Integer) -1
  },
  /* row 40 */
  {
    (MR_String) "unsafe_type_cast",
    (MR_Integer) -1
  },
  /* row 41 */
  {
    (MR_String) "trace_get_io_state",
    (MR_Integer) -1
  },
  /* row 42 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 43 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 44 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 45 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 46 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 47 */
  {
    (MR_String) "builtin_int_gt",
    (MR_Integer) 2
  },
  /* row 48 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 49 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 50 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 51 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 52 */
  {
    (MR_String) "builtin_int_lt",
    (MR_Integer) -1
  },
  /* row 53 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 54 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 55 */
  {
    (MR_String) "store_at_ref",
    (MR_Integer) -1
  },
  /* row 56 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 57 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 58 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 59 */
  {
    (MR_String) "store_at_ref_impure",
    (MR_Integer) -1
  },
  /* row 60 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 61 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 62 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 63 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 64 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 65 */
  {
    (MR_String) "builtin_compound_eq",
    (MR_Integer) -1
  },
  /* row 66 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 67 */
  {
    (MR_String) "builtin_compound_lt",
    (MR_Integer) -1
  },
  /* row 68 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 69 */
  {
    (MR_String) "trace_set_io_state",
    (MR_Integer) -1
  },
  /* row 70 */
  {
    (MR_String) "builtin",
    (MR_Integer) 0
  },
  /* row 71 */
  {
    (MR_String) "float",
    (MR_Integer) 1
  },
  /* row 72 */
  {
    (MR_String) "int",
    (MR_Integer) 2
  },
  /* row 73 */
  {
    (MR_String) "io",
    (MR_Integer) 3
  },
  /* row 74 */
  {
    (MR_String) "private_builtin",
    (MR_Integer) 4
  },
  /* row 75 */
  {
    (MR_String) "term_size_prof_builtin",
    (MR_Integer) 5
  },
};

static /* final */ const struct backend_libs__builtin_ops__vector_common_type_3_0_s backend_libs__builtin_ops_vector_common_3[32] = {
  /* row 0 */   {     NULL },
  /* row 1 */   {     (MR_String) ">=" },
  /* row 2 */   {     NULL },
  /* row 3 */   {     (MR_String) "=<" },
  /* row 4 */   {     NULL },
  /* row 5 */   {     NULL },
  /* row 6 */   {     NULL },
  /* row 7 */   {     NULL },
  /* row 8 */   {     (MR_String) "unchecked_quotient" },
  /* row 9 */   {     NULL },
  /* row 10 */   {     (MR_String) "+" },
  /* row 11 */   {     (MR_String) "*" },
  /* row 12 */   {     (MR_String) "-" },
  /* row 13 */   {     (MR_String) "<" },
  /* row 14 */   {     NULL },
  /* row 15 */   {     (MR_String) ">" },
  /* row 16 */   {     NULL },
  /* row 17 */   {     (MR_String) ">=" },
  /* row 18 */   {     NULL },
  /* row 19 */   {     (MR_String) "=<" },
  /* row 20 */   {     NULL },
  /* row 21 */   {     NULL },
  /* row 22 */   {     NULL },
  /* row 23 */   {     NULL },
  /* row 24 */   {     (MR_String) "unchecked_quotient" },
  /* row 25 */   {     NULL },
  /* row 26 */   {     (MR_String) "+" },
  /* row 27 */   {     (MR_String) "*" },
  /* row 28 */   {     (MR_String) "-" },
  /* row 29 */   {     (MR_String) "<" },
  /* row 30 */   {     NULL },
  /* row 31 */   {     (MR_String) ">" },
};


#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_array_elem_type_0_0[1] = {
  (MR_PseudoTypeInfo) &backend_libs__builtin_ops__backend_libs__builtin_ops__type_ctor_info_scalar_array_elem_type_0
};

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_array_elem_type_0_0 = {
  (MR_String) "array_elem_scalar",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_array_elem_type_0_0,
  NULL,
  NULL,
  NULL
};

static const MR_FA_TypeInfo_Struct1 backend_libs__builtin_ops__list__ti_list_1backend_libs__builtin_ops__type_ctor_info_scalar_array_elem_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &backend_libs__builtin_ops__backend_libs__builtin_ops__type_ctor_info_scalar_array_elem_type_0
  }
};

static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_array_elem_type_0_1[1] = {
  (MR_PseudoTypeInfo) &backend_libs__builtin_ops__list__ti_list_1backend_libs__builtin_ops__type_ctor_info_scalar_array_elem_type_0
};

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_array_elem_type_0_1 = {
  (MR_String) "array_elem_struct",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_array_elem_type_0_1,
  NULL,
  NULL,
  NULL
};

static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_array_elem_type_0_0[1] = {
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_array_elem_type_0_0
};

static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_array_elem_type_0_1[1] = {
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_array_elem_type_0_1
};

static const MR_DuPtagLayout backend_libs__builtin_ops__backend_libs__builtin_ops__du_ptag_ordered_array_elem_type_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_array_elem_type_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_array_elem_type_0_1
  }
};

static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_name_ordered_array_elem_type_0[2] = {
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_array_elem_type_0_0,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_array_elem_type_0_1
};

static const MR_Integer backend_libs__builtin_ops__backend_libs__builtin_ops__functor_number_map_array_elem_type_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct backend_libs__builtin_ops__backend_libs__builtin_ops__type_ctor_info_array_elem_type_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (backend_libs__builtin_ops____Unify____array_elem_type_0_0_10001)),
  ((MR_Box) (backend_libs__builtin_ops____Compare____array_elem_type_0_0_10001)),
  (MR_String) "backend_libs.builtin_ops",
  (MR_String) "array_elem_type",
  {     backend_libs__builtin_ops__backend_libs__builtin_ops__du_name_ordered_array_elem_type_0 },
  {     backend_libs__builtin_ops__backend_libs__builtin_ops__du_ptag_ordered_array_elem_type_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  backend_libs__builtin_ops__backend_libs__builtin_ops__functor_number_map_array_elem_type_0
};

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_0 = {
  (MR_String) "int_add",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL
};

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_1 = {
  (MR_String) "int_sub",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 1,
  NULL,
  NULL,
  NULL,
  NULL
};

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_2 = {
  (MR_String) "int_mul",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 2,
  NULL,
  NULL,
  NULL,
  NULL
};

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_3 = {
  (MR_String) "int_div",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 3,
  NULL,
  NULL,
  NULL,
  NULL
};

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_4 = {
  (MR_String) "int_mod",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 4,
  (MR_Integer) 4,
  NULL,
  NULL,
  NULL,
  NULL
};

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_5 = {
  (MR_String) "unchecked_left_shift",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 5,
  (MR_Integer) 5,
  NULL,
  NULL,
  NULL,
  NULL
};

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_6 = {
  (MR_String) "unchecked_right_shift",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 6,
  (MR_Integer) 6,
  NULL,
  NULL,
  NULL,
  NULL
};

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_7 = {
  (MR_String) "bitwise_and",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 7,
  (MR_Integer) 7,
  NULL,
  NULL,
  NULL,
  NULL
};

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_8 = {
  (MR_String) "bitwise_or",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 8,
  (MR_Integer) 8,
  NULL,
  NULL,
  NULL,
  NULL
};

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_9 = {
  (MR_String) "bitwise_xor",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 9,
  (MR_Integer) 9,
  NULL,
  NULL,
  NULL,
  NULL
};

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_10 = {
  (MR_String) "logical_and",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 10,
  (MR_Integer) 10,
  NULL,
  NULL,
  NULL,
  NULL
};

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_11 = {
  (MR_String) "logical_or",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 11,
  (MR_Integer) 11,
  NULL,
  NULL,
  NULL,
  NULL
};

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_12 = {
  (MR_String) "eq",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 12,
  (MR_Integer) 12,
  NULL,
  NULL,
  NULL,
  NULL
};

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_13 = {
  (MR_String) "ne",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 13,
  (MR_Integer) 13,
  NULL,
  NULL,
  NULL,
  NULL
};

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_14 = {
  (MR_String) "body",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 14,
  (MR_Integer) 14,
  NULL,
  NULL,
  NULL,
  NULL
};

static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_binary_op_0_15[1] = {
  (MR_PseudoTypeInfo) &backend_libs__builtin_ops__backend_libs__builtin_ops__type_ctor_info_array_elem_type_0
};

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_15 = {
  (MR_String) "array_index",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 15,
  backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_binary_op_0_15,
  NULL,
  NULL,
  NULL
};

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_16 = {
  (MR_String) "string_unsafe_index_code_unit",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 16,
  NULL,
  NULL,
  NULL,
  NULL
};

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_17 = {
  (MR_String) "str_eq",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) 17,
  NULL,
  NULL,
  NULL,
  NULL
};

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_18 = {
  (MR_String) "str_ne",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 18,
  NULL,
  NULL,
  NULL,
  NULL
};

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_19 = {
  (MR_String) "str_lt",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 18,
  (MR_Integer) 19,
  NULL,
  NULL,
  NULL,
  NULL
};

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_20 = {
  (MR_String) "str_gt",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 19,
  (MR_Integer) 20,
  NULL,
  NULL,
  NULL,
  NULL
};

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_21 = {
  (MR_String) "str_le",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 20,
  (MR_Integer) 21,
  NULL,
  NULL,
  NULL,
  NULL
};

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_22 = {
  (MR_String) "str_ge",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 21,
  (MR_Integer) 22,
  NULL,
  NULL,
  NULL,
  NULL
};

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_23 = {
  (MR_String) "str_cmp",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 22,
  (MR_Integer) 23,
  NULL,
  NULL,
  NULL,
  NULL
};

static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_binary_op_0_24[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_24 = {
  (MR_String) "offset_str_eq",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 24,
  backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_binary_op_0_24,
  NULL,
  NULL,
  NULL
};

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_25 = {
  (MR_String) "int_lt",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 23,
  (MR_Integer) 25,
  NULL,
  NULL,
  NULL,
  NULL
};

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_26 = {
  (MR_String) "int_gt",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 24,
  (MR_Integer) 26,
  NULL,
  NULL,
  NULL,
  NULL
};

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_27 = {
  (MR_String) "int_le",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 25,
  (MR_Integer) 27,
  NULL,
  NULL,
  NULL,
  NULL
};

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_28 = {
  (MR_String) "int_ge",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 26,
  (MR_Integer) 28,
  NULL,
  NULL,
  NULL,
  NULL
};

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_29 = {
  (MR_String) "unsigned_le",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 27,
  (MR_Integer) 29,
  NULL,
  NULL,
  NULL,
  NULL
};

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_30 = {
  (MR_String) "float_plus",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 28,
  (MR_Integer) 30,
  NULL,
  NULL,
  NULL,
  NULL
};

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_31 = {
  (MR_String) "float_minus",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 29,
  (MR_Integer) 31,
  NULL,
  NULL,
  NULL,
  NULL
};

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_32 = {
  (MR_String) "float_times",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 30,
  (MR_Integer) 32,
  NULL,
  NULL,
  NULL,
  NULL
};

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_33 = {
  (MR_String) "float_divide",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 31,
  (MR_Integer) 33,
  NULL,
  NULL,
  NULL,
  NULL
};

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_34 = {
  (MR_String) "float_eq",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 32,
  (MR_Integer) 34,
  NULL,
  NULL,
  NULL,
  NULL
};

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_35 = {
  (MR_String) "float_ne",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 33,
  (MR_Integer) 35,
  NULL,
  NULL,
  NULL,
  NULL
};

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_36 = {
  (MR_String) "float_lt",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 34,
  (MR_Integer) 36,
  NULL,
  NULL,
  NULL,
  NULL
};

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_37 = {
  (MR_String) "float_gt",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 35,
  (MR_Integer) 37,
  NULL,
  NULL,
  NULL,
  NULL
};

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_38 = {
  (MR_String) "float_le",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 36,
  (MR_Integer) 38,
  NULL,
  NULL,
  NULL,
  NULL
};

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_39 = {
  (MR_String) "float_ge",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 37,
  (MR_Integer) 39,
  NULL,
  NULL,
  NULL,
  NULL
};

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_40 = {
  (MR_String) "float_word_bits",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 38,
  (MR_Integer) 40,
  NULL,
  NULL,
  NULL,
  NULL
};

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_41 = {
  (MR_String) "float_from_dword",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 39,
  (MR_Integer) 41,
  NULL,
  NULL,
  NULL,
  NULL
};

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_42 = {
  (MR_String) "pointer_equal_conservative",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 40,
  (MR_Integer) 42,
  NULL,
  NULL,
  NULL,
  NULL
};

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_43 = {
  (MR_String) "compound_eq",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 41,
  (MR_Integer) 43,
  NULL,
  NULL,
  NULL,
  NULL
};

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_44 = {
  (MR_String) "compound_lt",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 42,
  (MR_Integer) 44,
  NULL,
  NULL,
  NULL,
  NULL
};

static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_binary_op_0_0[43] = {
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_0,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_1,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_2,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_3,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_4,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_5,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_6,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_7,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_8,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_9,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_10,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_11,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_12,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_13,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_14,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_16,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_17,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_18,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_19,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_20,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_21,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_22,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_23,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_25,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_26,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_27,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_28,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_29,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_30,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_31,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_32,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_33,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_34,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_35,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_36,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_37,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_38,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_39,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_40,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_41,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_42,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_43,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_44
};

static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_binary_op_0_1[1] = {
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_15
};

static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_binary_op_0_2[1] = {
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_24
};

static const MR_DuPtagLayout backend_libs__builtin_ops__backend_libs__builtin_ops__du_ptag_ordered_binary_op_0[3] = {
  {
    (MR_Integer) 43,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_binary_op_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_binary_op_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_binary_op_0_2
  }
};

static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_name_ordered_binary_op_0[45] = {
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_15,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_7,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_8,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_9,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_14,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_43,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_44,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_12,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_33,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_34,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_41,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_39,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_37,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_38,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_36,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_31,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_35,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_30,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_32,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_40,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_0,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_3,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_28,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_26,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_27,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_25,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_4,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_2,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_1,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_10,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_11,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_13,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_24,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_42,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_23,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_17,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_22,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_20,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_21,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_19,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_18,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_16,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_5,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_6,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_29
};

static const MR_Integer backend_libs__builtin_ops__backend_libs__builtin_ops__functor_number_map_binary_op_0[45] = {
  (MR_Integer) 20,
  (MR_Integer) 28,
  (MR_Integer) 27,
  (MR_Integer) 21,
  (MR_Integer) 26,
  (MR_Integer) 42,
  (MR_Integer) 43,
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 29,
  (MR_Integer) 30,
  (MR_Integer) 7,
  (MR_Integer) 31,
  (MR_Integer) 4,
  (MR_Integer) 0,
  (MR_Integer) 41,
  (MR_Integer) 35,
  (MR_Integer) 40,
  (MR_Integer) 39,
  (MR_Integer) 37,
  (MR_Integer) 38,
  (MR_Integer) 36,
  (MR_Integer) 34,
  (MR_Integer) 32,
  (MR_Integer) 25,
  (MR_Integer) 23,
  (MR_Integer) 24,
  (MR_Integer) 22,
  (MR_Integer) 44,
  (MR_Integer) 17,
  (MR_Integer) 15,
  (MR_Integer) 18,
  (MR_Integer) 8,
  (MR_Integer) 9,
  (MR_Integer) 16,
  (MR_Integer) 14,
  (MR_Integer) 12,
  (MR_Integer) 13,
  (MR_Integer) 11,
  (MR_Integer) 19,
  (MR_Integer) 10,
  (MR_Integer) 33,
  (MR_Integer) 5,
  (MR_Integer) 6
};

const MR_TypeCtorInfo_Struct backend_libs__builtin_ops__backend_libs__builtin_ops__type_ctor_info_binary_op_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 3,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (backend_libs__builtin_ops____Unify____binary_op_0_0_10001)),
  ((MR_Box) (backend_libs__builtin_ops____Compare____binary_op_0_0_10001)),
  (MR_String) "backend_libs.builtin_ops",
  (MR_String) "binary_op",
  {     backend_libs__builtin_ops__backend_libs__builtin_ops__du_name_ordered_binary_op_0 },
  {     backend_libs__builtin_ops__backend_libs__builtin_ops__du_ptag_ordered_binary_op_0 },
  (MR_Integer) 45,
  (MR_Integer) 4,
  backend_libs__builtin_ops__backend_libs__builtin_ops__functor_number_map_binary_op_0
};

static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_scalar_array_elem_type_0_0 = {
  (MR_String) "scalar_elem_string",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_scalar_array_elem_type_0_1 = {
  (MR_String) "scalar_elem_int",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_scalar_array_elem_type_0_2 = {
  (MR_String) "scalar_elem_generic",
  (MR_Integer) 2
};

static const MR_EnumFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__enum_value_ordered_scalar_array_elem_type_0[3] = {
  &backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_scalar_array_elem_type_0_0,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_scalar_array_elem_type_0_1,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_scalar_array_elem_type_0_2
};

static const MR_EnumFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__enum_name_ordered_scalar_array_elem_type_0[3] = {
  &backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_scalar_array_elem_type_0_2,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_scalar_array_elem_type_0_1,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_scalar_array_elem_type_0_0
};

static const MR_Integer backend_libs__builtin_ops__backend_libs__builtin_ops__functor_number_map_scalar_array_elem_type_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct backend_libs__builtin_ops__backend_libs__builtin_ops__type_ctor_info_scalar_array_elem_type_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (backend_libs__builtin_ops____Unify____scalar_array_elem_type_0_0_10001)),
  ((MR_Box) (backend_libs__builtin_ops____Compare____scalar_array_elem_type_0_0_10001)),
  (MR_String) "backend_libs.builtin_ops",
  (MR_String) "scalar_array_elem_type",
  {     backend_libs__builtin_ops__backend_libs__builtin_ops__enum_name_ordered_scalar_array_elem_type_0 },
  {     backend_libs__builtin_ops__backend_libs__builtin_ops__enum_value_ordered_scalar_array_elem_type_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  backend_libs__builtin_ops__backend_libs__builtin_ops__functor_number_map_scalar_array_elem_type_0
};

static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__builtin_ops__backend_libs__builtin_ops__pti_simple_expr_1__pseudo_1 = {
  &backend_libs__builtin_ops__backend_libs__builtin_ops__type_ctor_info_simple_expr_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_code_1_0[2] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) &backend_libs__builtin_ops__backend_libs__builtin_ops__pti_simple_expr_1__pseudo_1
};

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_code_1_0 = {
  (MR_String) "assign",
  (MR_Integer) 2,
  (MR_Integer) 3,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_code_1_0,
  NULL,
  NULL,
  NULL
};

static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_code_1_1[2] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_code_1_1 = {
  (MR_String) "ref_assign",
  (MR_Integer) 2,
  (MR_Integer) 3,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_code_1_1,
  NULL,
  NULL,
  NULL
};

static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_code_1_2[1] = {
  (MR_PseudoTypeInfo) &backend_libs__builtin_ops__backend_libs__builtin_ops__pti_simple_expr_1__pseudo_1
};

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_code_1_2 = {
  (MR_String) "test",
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_code_1_2,
  NULL,
  NULL,
  NULL
};

static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__builtin_ops__list__pti_list_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_code_1_3[1] = {
  (MR_PseudoTypeInfo) &backend_libs__builtin_ops__list__pti_list_1__pseudo_1
};

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_code_1_3 = {
  (MR_String) "noop",
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 3,
  (MR_Integer) -1,
  (MR_Integer) 3,
  backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_code_1_3,
  NULL,
  NULL,
  NULL
};

static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_simple_code_1_0[1] = {
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_code_1_0
};

static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_simple_code_1_1[1] = {
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_code_1_1
};

static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_simple_code_1_2[1] = {
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_code_1_2
};

static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_simple_code_1_3[1] = {
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_code_1_3
};

static const MR_DuPtagLayout backend_libs__builtin_ops__backend_libs__builtin_ops__du_ptag_ordered_simple_code_1[4] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_simple_code_1_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_simple_code_1_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_simple_code_1_2
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_simple_code_1_3
  }
};

static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_name_ordered_simple_code_1[4] = {
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_code_1_0,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_code_1_3,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_code_1_1,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_code_1_2
};

static const MR_Integer backend_libs__builtin_ops__backend_libs__builtin_ops__functor_number_map_simple_code_1[4] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct backend_libs__builtin_ops__backend_libs__builtin_ops__type_ctor_info_simple_code_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (backend_libs__builtin_ops____Unify____simple_code_1_0_10001)),
  ((MR_Box) (backend_libs__builtin_ops____Compare____simple_code_1_0_10001)),
  (MR_String) "backend_libs.builtin_ops",
  (MR_String) "simple_code",
  {     backend_libs__builtin_ops__backend_libs__builtin_ops__du_name_ordered_simple_code_1 },
  {     backend_libs__builtin_ops__backend_libs__builtin_ops__du_ptag_ordered_simple_code_1 },
  (MR_Integer) 4,
  (MR_Integer) 4,
  backend_libs__builtin_ops__backend_libs__builtin_ops__functor_number_map_simple_code_1
};

static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_expr_1_0[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_expr_1_0 = {
  (MR_String) "leaf",
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_expr_1_0,
  NULL,
  NULL,
  NULL
};

static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_expr_1_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_expr_1_1 = {
  (MR_String) "int_const",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_expr_1_1,
  NULL,
  NULL,
  NULL
};

static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_expr_1_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0
};

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_expr_1_2 = {
  (MR_String) "float_const",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_expr_1_2,
  NULL,
  NULL,
  NULL
};

static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_expr_1_3[2] = {
  (MR_PseudoTypeInfo) &backend_libs__builtin_ops__backend_libs__builtin_ops__type_ctor_info_unary_op_0,
  (MR_PseudoTypeInfo) &backend_libs__builtin_ops__backend_libs__builtin_ops__pti_simple_expr_1__pseudo_1
};

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_expr_1_3 = {
  (MR_String) "unary",
  (MR_Integer) 2,
  (MR_Integer) 2,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 3,
  backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_expr_1_3,
  NULL,
  NULL,
  NULL
};

static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_expr_1_4[3] = {
  (MR_PseudoTypeInfo) &backend_libs__builtin_ops__backend_libs__builtin_ops__type_ctor_info_binary_op_0,
  (MR_PseudoTypeInfo) &backend_libs__builtin_ops__backend_libs__builtin_ops__pti_simple_expr_1__pseudo_1,
  (MR_PseudoTypeInfo) &backend_libs__builtin_ops__backend_libs__builtin_ops__pti_simple_expr_1__pseudo_1
};

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_expr_1_4 = {
  (MR_String) "binary",
  (MR_Integer) 3,
  (MR_Integer) 6,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 4,
  backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_expr_1_4,
  NULL,
  NULL,
  NULL
};

static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_simple_expr_1_0[1] = {
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_expr_1_0
};

static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_simple_expr_1_1[1] = {
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_expr_1_1
};

static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_simple_expr_1_2[1] = {
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_expr_1_2
};

static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_simple_expr_1_3[2] = {
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_expr_1_3,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_expr_1_4
};

static const MR_DuPtagLayout backend_libs__builtin_ops__backend_libs__builtin_ops__du_ptag_ordered_simple_expr_1[4] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_simple_expr_1_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_simple_expr_1_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_simple_expr_1_2
  },
  {
    (MR_Integer) 2,
    mercury__private_builtin__MR_SECTAG_REMOTE,
    backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_simple_expr_1_3
  }
};

static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_name_ordered_simple_expr_1[5] = {
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_expr_1_4,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_expr_1_2,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_expr_1_1,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_expr_1_0,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_expr_1_3
};

static const MR_Integer backend_libs__builtin_ops__backend_libs__builtin_ops__functor_number_map_simple_expr_1[5] = {
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 4,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct backend_libs__builtin_ops__backend_libs__builtin_ops__type_ctor_info_simple_expr_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (backend_libs__builtin_ops____Unify____simple_expr_1_0_10001)),
  ((MR_Box) (backend_libs__builtin_ops____Compare____simple_expr_1_0_10001)),
  (MR_String) "backend_libs.builtin_ops",
  (MR_String) "simple_expr",
  {     backend_libs__builtin_ops__backend_libs__builtin_ops__du_name_ordered_simple_expr_1 },
  {     backend_libs__builtin_ops__backend_libs__builtin_ops__du_ptag_ordered_simple_expr_1 },
  (MR_Integer) 5,
  (MR_Integer) 4,
  backend_libs__builtin_ops__backend_libs__builtin_ops__functor_number_map_simple_expr_1
};

static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_0 = {
  (MR_String) "mktag",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_1 = {
  (MR_String) "tag",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_2 = {
  (MR_String) "unmktag",
  (MR_Integer) 2
};

static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_3 = {
  (MR_String) "strip_tag",
  (MR_Integer) 3
};

static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_4 = {
  (MR_String) "mkbody",
  (MR_Integer) 4
};

static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_5 = {
  (MR_String) "unmkbody",
  (MR_Integer) 5
};

static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_6 = {
  (MR_String) "bitwise_complement",
  (MR_Integer) 6
};

static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_7 = {
  (MR_String) "logical_not",
  (MR_Integer) 7
};

static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_8 = {
  (MR_String) "hash_string",
  (MR_Integer) 8
};

static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_9 = {
  (MR_String) "hash_string2",
  (MR_Integer) 9
};

static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_10 = {
  (MR_String) "hash_string3",
  (MR_Integer) 10
};

static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_11 = {
  (MR_String) "hash_string4",
  (MR_Integer) 11
};

static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_12 = {
  (MR_String) "hash_string5",
  (MR_Integer) 12
};

static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_13 = {
  (MR_String) "hash_string6",
  (MR_Integer) 13
};

static const MR_EnumFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__enum_value_ordered_unary_op_0[14] = {
  &backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_0,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_1,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_2,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_3,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_4,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_5,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_6,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_7,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_8,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_9,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_10,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_11,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_12,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_13
};

static const MR_EnumFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__enum_name_ordered_unary_op_0[14] = {
  &backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_6,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_8,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_9,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_10,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_11,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_12,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_13,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_7,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_4,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_0,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_3,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_1,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_5,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_2
};

static const MR_Integer backend_libs__builtin_ops__backend_libs__builtin_ops__functor_number_map_unary_op_0[14] = {
  (MR_Integer) 9,
  (MR_Integer) 11,
  (MR_Integer) 13,
  (MR_Integer) 10,
  (MR_Integer) 8,
  (MR_Integer) 12,
  (MR_Integer) 0,
  (MR_Integer) 7,
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 4,
  (MR_Integer) 5,
  (MR_Integer) 6
};

const MR_TypeCtorInfo_Struct backend_libs__builtin_ops__backend_libs__builtin_ops__type_ctor_info_unary_op_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (backend_libs__builtin_ops____Unify____unary_op_0_0_10001)),
  ((MR_Box) (backend_libs__builtin_ops____Compare____unary_op_0_0_10001)),
  (MR_String) "backend_libs.builtin_ops",
  (MR_String) "unary_op",
  {     backend_libs__builtin_ops__backend_libs__builtin_ops__enum_name_ordered_unary_op_0 },
  {     backend_libs__builtin_ops__backend_libs__builtin_ops__enum_value_ordered_unary_op_0 },
  (MR_Integer) 14,
  (MR_Integer) 4,
  backend_libs__builtin_ops__backend_libs__builtin_ops__functor_number_map_unary_op_0
};

static MR_bool MR_CALL 
backend_libs__builtin_ops____Unify____array_elem_type_0_0_10001(
  MR_Box backend_libs__builtin_ops__wrapper_arg_1,
  MR_Box backend_libs__builtin_ops__wrapper_arg_2)
{
  {
    MR_bool backend_libs__builtin_ops__succeeded;

    {
      backend_libs__builtin_ops__succeeded = backend_libs__builtin_ops____Unify____array_elem_type_0_0(((MR_Word) backend_libs__builtin_ops__wrapper_arg_1), ((MR_Word) backend_libs__builtin_ops__wrapper_arg_2));
    }
    return backend_libs__builtin_ops__succeeded;
  }
}

static void MR_CALL 
backend_libs__builtin_ops____Compare____array_elem_type_0_0_10001(
  MR_Box * backend_libs__builtin_ops__wrapper_arg_1,
  MR_Box backend_libs__builtin_ops__wrapper_arg_2,
  MR_Box backend_libs__builtin_ops__wrapper_arg_3)
{
  {
    MR_Word backend_libs__builtin_ops__conv0_HeadVar__1_1;

    {
      backend_libs__builtin_ops____Compare____array_elem_type_0_0(&backend_libs__builtin_ops__conv0_HeadVar__1_1, ((MR_Word) backend_libs__builtin_ops__wrapper_arg_2), ((MR_Word) backend_libs__builtin_ops__wrapper_arg_3));
    }
    *backend_libs__builtin_ops__wrapper_arg_1 = ((MR_Box) (backend_libs__builtin_ops__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
backend_libs__builtin_ops____Unify____binary_op_0_0_10001(
  MR_Box backend_libs__builtin_ops__wrapper_arg_1,
  MR_Box backend_libs__builtin_ops__wrapper_arg_2)
{
  {
    MR_bool backend_libs__builtin_ops__succeeded;

    {
      backend_libs__builtin_ops__succeeded = backend_libs__builtin_ops____Unify____binary_op_0_0(((MR_Word) backend_libs__builtin_ops__wrapper_arg_1), ((MR_Word) backend_libs__builtin_ops__wrapper_arg_2));
    }
    return backend_libs__builtin_ops__succeeded;
  }
}

static void MR_CALL 
backend_libs__builtin_ops____Compare____binary_op_0_0_10001(
  MR_Box * backend_libs__builtin_ops__wrapper_arg_1,
  MR_Box backend_libs__builtin_ops__wrapper_arg_2,
  MR_Box backend_libs__builtin_ops__wrapper_arg_3)
{
  {
    MR_Word backend_libs__builtin_ops__conv0_HeadVar__1_1;

    {
      backend_libs__builtin_ops____Compare____binary_op_0_0(&backend_libs__builtin_ops__conv0_HeadVar__1_1, ((MR_Word) backend_libs__builtin_ops__wrapper_arg_2), ((MR_Word) backend_libs__builtin_ops__wrapper_arg_3));
    }
    *backend_libs__builtin_ops__wrapper_arg_1 = ((MR_Box) (backend_libs__builtin_ops__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
backend_libs__builtin_ops____Unify____scalar_array_elem_type_0_0_10001(
  MR_Box backend_libs__builtin_ops__wrapper_arg_1,
  MR_Box backend_libs__builtin_ops__wrapper_arg_2)
{
  {
    MR_bool backend_libs__builtin_ops__succeeded;

    {
      backend_libs__builtin_ops__succeeded = backend_libs__builtin_ops____Unify____scalar_array_elem_type_0_0(((MR_Word) backend_libs__builtin_ops__wrapper_arg_1), ((MR_Word) backend_libs__builtin_ops__wrapper_arg_2));
    }
    return backend_libs__builtin_ops__succeeded;
  }
}

static void MR_CALL 
backend_libs__builtin_ops____Compare____scalar_array_elem_type_0_0_10001(
  MR_Box * backend_libs__builtin_ops__wrapper_arg_1,
  MR_Box backend_libs__builtin_ops__wrapper_arg_2,
  MR_Box backend_libs__builtin_ops__wrapper_arg_3)
{
  {
    MR_Word backend_libs__builtin_ops__conv0_HeadVar__1_1;

    {
      backend_libs__builtin_ops____Compare____scalar_array_elem_type_0_0(&backend_libs__builtin_ops__conv0_HeadVar__1_1, ((MR_Word) backend_libs__builtin_ops__wrapper_arg_2), ((MR_Word) backend_libs__builtin_ops__wrapper_arg_3));
    }
    *backend_libs__builtin_ops__wrapper_arg_1 = ((MR_Box) (backend_libs__builtin_ops__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
backend_libs__builtin_ops____Unify____simple_code_1_0_10001(
  MR_Box backend_libs__builtin_ops__wrapper_arg_1,
  MR_Box backend_libs__builtin_ops__wrapper_arg_2,
  MR_Box backend_libs__builtin_ops__wrapper_arg_3)
{
  {
    MR_bool backend_libs__builtin_ops__succeeded;

    {
      backend_libs__builtin_ops__succeeded = backend_libs__builtin_ops____Unify____simple_code_1_0(((MR_Word) backend_libs__builtin_ops__wrapper_arg_1), ((MR_Word) backend_libs__builtin_ops__wrapper_arg_2), ((MR_Word) backend_libs__builtin_ops__wrapper_arg_3));
    }
    return backend_libs__builtin_ops__succeeded;
  }
}

static void MR_CALL 
backend_libs__builtin_ops____Compare____simple_code_1_0_10001(
  MR_Box backend_libs__builtin_ops__wrapper_arg_1,
  MR_Box * backend_libs__builtin_ops__wrapper_arg_2,
  MR_Box backend_libs__builtin_ops__wrapper_arg_3,
  MR_Box backend_libs__builtin_ops__wrapper_arg_4)
{
  {
    MR_Word backend_libs__builtin_ops__conv0_HeadVar__1_1;

    {
      backend_libs__builtin_ops____Compare____simple_code_1_0(((MR_Word) backend_libs__builtin_ops__wrapper_arg_1), &backend_libs__builtin_ops__conv0_HeadVar__1_1, ((MR_Word) backend_libs__builtin_ops__wrapper_arg_3), ((MR_Word) backend_libs__builtin_ops__wrapper_arg_4));
    }
    *backend_libs__builtin_ops__wrapper_arg_2 = ((MR_Box) (backend_libs__builtin_ops__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
backend_libs__builtin_ops____Unify____simple_expr_1_0_10001(
  MR_Box backend_libs__builtin_ops__wrapper_arg_1,
  MR_Box backend_libs__builtin_ops__wrapper_arg_2,
  MR_Box backend_libs__builtin_ops__wrapper_arg_3)
{
  {
    MR_bool backend_libs__builtin_ops__succeeded;

    {
      backend_libs__builtin_ops__succeeded = backend_libs__builtin_ops____Unify____simple_expr_1_0(((MR_Word) backend_libs__builtin_ops__wrapper_arg_1), ((MR_Word) backend_libs__builtin_ops__wrapper_arg_2), ((MR_Word) backend_libs__builtin_ops__wrapper_arg_3));
    }
    return backend_libs__builtin_ops__succeeded;
  }
}

static void MR_CALL 
backend_libs__builtin_ops____Compare____simple_expr_1_0_10001(
  MR_Box backend_libs__builtin_ops__wrapper_arg_1,
  MR_Box * backend_libs__builtin_ops__wrapper_arg_2,
  MR_Box backend_libs__builtin_ops__wrapper_arg_3,
  MR_Box backend_libs__builtin_ops__wrapper_arg_4)
{
  {
    MR_Word backend_libs__builtin_ops__conv0_HeadVar__1_1;

    {
      backend_libs__builtin_ops____Compare____simple_expr_1_0(((MR_Word) backend_libs__builtin_ops__wrapper_arg_1), &backend_libs__builtin_ops__conv0_HeadVar__1_1, ((MR_Word) backend_libs__builtin_ops__wrapper_arg_3), ((MR_Word) backend_libs__builtin_ops__wrapper_arg_4));
    }
    *backend_libs__builtin_ops__wrapper_arg_2 = ((MR_Box) (backend_libs__builtin_ops__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
backend_libs__builtin_ops____Unify____unary_op_0_0_10001(
  MR_Box backend_libs__builtin_ops__wrapper_arg_1,
  MR_Box backend_libs__builtin_ops__wrapper_arg_2)
{
  {
    MR_bool backend_libs__builtin_ops__succeeded;

    {
      backend_libs__builtin_ops__succeeded = backend_libs__builtin_ops____Unify____unary_op_0_0(((MR_Word) backend_libs__builtin_ops__wrapper_arg_1), ((MR_Word) backend_libs__builtin_ops__wrapper_arg_2));
    }
    return backend_libs__builtin_ops__succeeded;
  }
}

static void MR_CALL 
backend_libs__builtin_ops____Compare____unary_op_0_0_10001(
  MR_Box * backend_libs__builtin_ops__wrapper_arg_1,
  MR_Box backend_libs__builtin_ops__wrapper_arg_2,
  MR_Box backend_libs__builtin_ops__wrapper_arg_3)
{
  {
    MR_Word backend_libs__builtin_ops__conv0_HeadVar__1_1;

    {
      backend_libs__builtin_ops____Compare____unary_op_0_0(&backend_libs__builtin_ops__conv0_HeadVar__1_1, ((MR_Word) backend_libs__builtin_ops__wrapper_arg_2), ((MR_Word) backend_libs__builtin_ops__wrapper_arg_3));
    }
    *backend_libs__builtin_ops__wrapper_arg_1 = ((MR_Box) (backend_libs__builtin_ops__conv0_HeadVar__1_1));
  }
}

void MR_CALL 
backend_libs__builtin_ops____Compare____unary_op_0_0(
  MR_Word * backend_libs__builtin_ops__HeadVar__1_1,
  MR_Word backend_libs__builtin_ops__HeadVar__2_2,
  MR_Word backend_libs__builtin_ops__HeadVar__3_3)
{
  {
    MR_bool backend_libs__builtin_ops__succeeded;
    MR_Integer backend_libs__builtin_ops__Cast_HeadVar1_4 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;
    MR_Integer backend_libs__builtin_ops__Cast_HeadVar2_5 = (MR_Integer) backend_libs__builtin_ops__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(backend_libs__builtin_ops__HeadVar__1_1, backend_libs__builtin_ops__Cast_HeadVar1_4, backend_libs__builtin_ops__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
backend_libs__builtin_ops____Unify____unary_op_0_0(
  MR_Word backend_libs__builtin_ops__HeadVar__2_1,
  MR_Word backend_libs__builtin_ops__HeadVar__2_2)
{
  {
    MR_bool backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__HeadVar__2_1 == backend_libs__builtin_ops__HeadVar__2_2);

    return backend_libs__builtin_ops__succeeded;
  }
}

void MR_CALL 
backend_libs__builtin_ops____Compare____simple_expr_1_0(
  MR_Word backend_libs__builtin_ops__TypeInfo_for_T_89,
  MR_Word * backend_libs__builtin_ops__HeadVar__1_1,
  MR_Word backend_libs__builtin_ops__HeadVar__2_2,
  MR_Word backend_libs__builtin_ops__HeadVar__3_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool backend_libs__builtin_ops__succeeded;
        MR_Integer backend_libs__builtin_ops__CastX_87 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;
        MR_Integer backend_libs__builtin_ops__CastY_88 = (MR_Integer) backend_libs__builtin_ops__HeadVar__3_3;

        backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastX_87 == backend_libs__builtin_ops__CastY_88);
        if (backend_libs__builtin_ops__succeeded)
          *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 0;
        else
          switch (MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__2_2)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Box backend_libs__builtin_ops__V_105_105 = (MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 0));

                switch (MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Box backend_libs__builtin_ops__V_5_5 = (MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__HeadVar__3_3, (MR_Integer) 0));

                      {
                        mercury__builtin__compare_3_p_0(backend_libs__builtin_ops__TypeInfo_for_T_89, backend_libs__builtin_ops__HeadVar__1_1, backend_libs__builtin_ops__V_105_105, backend_libs__builtin_ops__V_5_5);
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                    *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 1:
                        *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer backend_libs__builtin_ops__V_104_104 = ((MR_Integer) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 0)));

                switch (MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Integer backend_libs__builtin_ops__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__HeadVar__3_3, (MR_Integer) 0)));

                      {
                        mercury__private_builtin__builtin_compare_int_3_p_0(backend_libs__builtin_ops__HeadVar__1_1, backend_libs__builtin_ops__V_104_104, backend_libs__builtin_ops__V_20_20);
                      }
                    }
                    break;
                  case (MR_Integer) 2:
                    *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 1:
                        *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Float backend_libs__builtin_ops__V_103_103 = MR_unbox_float((MR_hl_field(MR_mktag(2), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 0)));

                switch (MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Float backend_libs__builtin_ops__V_35_35 = MR_unbox_float((MR_hl_field(MR_mktag(2), backend_libs__builtin_ops__HeadVar__3_3, (MR_Integer) 0)));

                      {
                        mercury__private_builtin__builtin_compare_float_3_p_0(backend_libs__builtin_ops__HeadVar__1_1, backend_libs__builtin_ops__V_103_103, backend_libs__builtin_ops__V_35_35);
                      }
                    }
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 1:
                        *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 0)))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word backend_libs__builtin_ops__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 2)));
                    MR_Word backend_libs__builtin_ops__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 1)));

                    switch (MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__3_3)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 2:
                        *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 3:
                        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__3_3, (MR_Integer) 0)))) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            {
                              MR_Word backend_libs__builtin_ops__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__3_3, (MR_Integer) 1)));
                              MR_Word backend_libs__builtin_ops__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__3_3, (MR_Integer) 2)));
                              MR_Word backend_libs__builtin_ops__V_56_56;
                              MR_Integer backend_libs__builtin_ops__V_108_108 = (MR_Integer) backend_libs__builtin_ops__V_107_107;
                              MR_Integer backend_libs__builtin_ops__V_109_109 = (MR_Integer) backend_libs__builtin_ops__V_54_54;

                              {
                                mercury__private_builtin__builtin_compare_int_3_p_0(&backend_libs__builtin_ops__V_56_56, backend_libs__builtin_ops__V_108_108, backend_libs__builtin_ops__V_109_109);
                              }
                              backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_56_56 == (MR_Integer) 0);
                              backend_libs__builtin_ops__succeeded = !(backend_libs__builtin_ops__succeeded);
                              if (backend_libs__builtin_ops__succeeded)
                                *backend_libs__builtin_ops__HeadVar__1_1 = backend_libs__builtin_ops__V_56_56;
                              else
                                {
                                  /* direct tailcall eliminated */
                                  {
                                    MR_Word backend_libs__builtin_ops__HeadVar__2__tmp_copy_2 = backend_libs__builtin_ops__V_106_106;
                                    MR_Word backend_libs__builtin_ops__HeadVar__3__tmp_copy_3 = backend_libs__builtin_ops__V_55_55;

                                    backend_libs__builtin_ops__HeadVar__3_3 = backend_libs__builtin_ops__HeadVar__3__tmp_copy_3;
                                    backend_libs__builtin_ops__HeadVar__2_2 = backend_libs__builtin_ops__HeadVar__2__tmp_copy_2;
                                  }
                                  continue;
                                }
                            }
                            break;
                          case (MR_Integer) 1:
                            *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 1;
                            break;
                        }
                        break;
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word backend_libs__builtin_ops__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 3)));
                    MR_Word backend_libs__builtin_ops__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 2)));
                    MR_Word backend_libs__builtin_ops__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 1)));

                    switch (MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__3_3)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 2:
                        *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 3:
                        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__3_3, (MR_Integer) 0)))) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 2;
                            break;
                          case (MR_Integer) 1:
                            {
                              MR_Word backend_libs__builtin_ops__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__3_3, (MR_Integer) 1)));
                              MR_Word backend_libs__builtin_ops__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__3_3, (MR_Integer) 2)));
                              MR_Word backend_libs__builtin_ops__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__3_3, (MR_Integer) 3)));
                              MR_Word backend_libs__builtin_ops__V_85_85;

                              {
                                backend_libs__builtin_ops____Compare____binary_op_0_0(&backend_libs__builtin_ops__V_85_85, backend_libs__builtin_ops__V_102_102, backend_libs__builtin_ops__V_82_82);
                              }
                              backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_85_85 == (MR_Integer) 0);
                              backend_libs__builtin_ops__succeeded = !(backend_libs__builtin_ops__succeeded);
                              if (backend_libs__builtin_ops__succeeded)
                                *backend_libs__builtin_ops__HeadVar__1_1 = backend_libs__builtin_ops__V_85_85;
                              else
                                {
                                  MR_Word backend_libs__builtin_ops__V_86_86;

                                  {
                                    backend_libs__builtin_ops____Compare____simple_expr_1_0(backend_libs__builtin_ops__TypeInfo_for_T_89, &backend_libs__builtin_ops__V_86_86, backend_libs__builtin_ops__V_101_101, backend_libs__builtin_ops__V_83_83);
                                  }
                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_86_86 == (MR_Integer) 0);
                                  backend_libs__builtin_ops__succeeded = !(backend_libs__builtin_ops__succeeded);
                                  if (backend_libs__builtin_ops__succeeded)
                                    *backend_libs__builtin_ops__HeadVar__1_1 = backend_libs__builtin_ops__V_86_86;
                                  else
                                    {
                                      /* direct tailcall eliminated */
                                      {
                                        MR_Word backend_libs__builtin_ops__HeadVar__2__tmp_copy_2 = backend_libs__builtin_ops__V_100_100;
                                        MR_Word backend_libs__builtin_ops__HeadVar__3__tmp_copy_3 = backend_libs__builtin_ops__V_84_84;

                                        backend_libs__builtin_ops__HeadVar__3_3 = backend_libs__builtin_ops__HeadVar__3__tmp_copy_3;
                                        backend_libs__builtin_ops__HeadVar__2_2 = backend_libs__builtin_ops__HeadVar__2__tmp_copy_2;
                                      }
                                      continue;
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
      break;
    }
}

MR_bool MR_CALL 
backend_libs__builtin_ops____Unify____simple_expr_1_0(
  MR_Word backend_libs__builtin_ops__TypeInfo_for_T_21,
  MR_Word backend_libs__builtin_ops__HeadVar__1_1,
  MR_Word backend_libs__builtin_ops__HeadVar__2_2)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool backend_libs__builtin_ops__succeeded;
        MR_Integer backend_libs__builtin_ops__CastX_19 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
        MR_Integer backend_libs__builtin_ops__CastY_20 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

        backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastX_19 == backend_libs__builtin_ops__CastY_20);
        if (backend_libs__builtin_ops__succeeded)
          backend_libs__builtin_ops__succeeded = MR_TRUE;
        else
          switch (MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__1_1)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Box backend_libs__builtin_ops__V_3_3 = (MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__HeadVar__1_1, (MR_Integer) 0));
                MR_Box backend_libs__builtin_ops__V_4_4;

                backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
                if (backend_libs__builtin_ops__succeeded)
                  {
                    backend_libs__builtin_ops__V_4_4 = (MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 0));
                    {
                      backend_libs__builtin_ops__succeeded = mercury__builtin__unify_2_p_0(backend_libs__builtin_ops__TypeInfo_for_T_21, backend_libs__builtin_ops__V_3_3, backend_libs__builtin_ops__V_4_4);
                    }
                  }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer backend_libs__builtin_ops__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__HeadVar__1_1, (MR_Integer) 0)));
                MR_Integer backend_libs__builtin_ops__V_6_6;

                backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
                if (backend_libs__builtin_ops__succeeded)
                  {
                    backend_libs__builtin_ops__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 0)));
                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_5_5 == backend_libs__builtin_ops__V_6_6);
                  }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Float backend_libs__builtin_ops__V_7_7 = MR_unbox_float((MR_hl_field(MR_mktag(2), backend_libs__builtin_ops__HeadVar__1_1, (MR_Integer) 0)));
                MR_Float backend_libs__builtin_ops__V_8_8;

                backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
                if (backend_libs__builtin_ops__succeeded)
                  {
                    backend_libs__builtin_ops__V_8_8 = MR_unbox_float((MR_hl_field(MR_mktag(2), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 0)));
                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_7_7 == backend_libs__builtin_ops__V_8_8);
                  }
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__1_1, (MR_Integer) 0)))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word backend_libs__builtin_ops__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__1_1, (MR_Integer) 1)));
                    MR_Word backend_libs__builtin_ops__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__1_1, (MR_Integer) 2)));
                    MR_Word backend_libs__builtin_ops__V_11_11;
                    MR_Word backend_libs__builtin_ops__V_12_12;

                    backend_libs__builtin_ops__succeeded = ((((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
                    if (backend_libs__builtin_ops__succeeded)
                      {
                        backend_libs__builtin_ops__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 1)));
                        backend_libs__builtin_ops__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 2)));
                        backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_9_9 == backend_libs__builtin_ops__V_11_11);
                        if (backend_libs__builtin_ops__succeeded)
                          {
                            /* direct tailcall eliminated */
                            {
                              MR_Word backend_libs__builtin_ops__HeadVar__1__tmp_copy_1 = backend_libs__builtin_ops__V_10_10;
                              MR_Word backend_libs__builtin_ops__HeadVar__2__tmp_copy_2 = backend_libs__builtin_ops__V_12_12;

                              backend_libs__builtin_ops__HeadVar__2_2 = backend_libs__builtin_ops__HeadVar__2__tmp_copy_2;
                              backend_libs__builtin_ops__HeadVar__1_1 = backend_libs__builtin_ops__HeadVar__1__tmp_copy_1;
                            }
                            continue;
                          }
                      }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word backend_libs__builtin_ops__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__1_1, (MR_Integer) 1)));
                    MR_Word backend_libs__builtin_ops__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__1_1, (MR_Integer) 2)));
                    MR_Word backend_libs__builtin_ops__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__1_1, (MR_Integer) 3)));
                    MR_Word backend_libs__builtin_ops__V_16_16;
                    MR_Word backend_libs__builtin_ops__V_17_17;
                    MR_Word backend_libs__builtin_ops__V_18_18;

                    backend_libs__builtin_ops__succeeded = ((((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
                    if (backend_libs__builtin_ops__succeeded)
                      {
                        backend_libs__builtin_ops__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 1)));
                        backend_libs__builtin_ops__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 2)));
                        backend_libs__builtin_ops__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 3)));
                        {
                          backend_libs__builtin_ops__succeeded = backend_libs__builtin_ops____Unify____binary_op_0_0(backend_libs__builtin_ops__V_13_13, backend_libs__builtin_ops__V_16_16);
                        }
                        if (backend_libs__builtin_ops__succeeded)
                          {
                            {
                              backend_libs__builtin_ops__succeeded = backend_libs__builtin_ops____Unify____simple_expr_1_0(backend_libs__builtin_ops__TypeInfo_for_T_21, backend_libs__builtin_ops__V_14_14, backend_libs__builtin_ops__V_17_17);
                            }
                            if (backend_libs__builtin_ops__succeeded)
                              {
                                /* direct tailcall eliminated */
                                {
                                  MR_Word backend_libs__builtin_ops__HeadVar__1__tmp_copy_1 = backend_libs__builtin_ops__V_15_15;
                                  MR_Word backend_libs__builtin_ops__HeadVar__2__tmp_copy_2 = backend_libs__builtin_ops__V_18_18;

                                  backend_libs__builtin_ops__HeadVar__2_2 = backend_libs__builtin_ops__HeadVar__2__tmp_copy_2;
                                  backend_libs__builtin_ops__HeadVar__1_1 = backend_libs__builtin_ops__HeadVar__1__tmp_copy_1;
                                }
                                continue;
                              }
                          }
                      }
                  }
                  break;
              }
              break;
          }
        return backend_libs__builtin_ops__succeeded;
      }
      break;
    }
}

void MR_CALL 
backend_libs__builtin_ops____Compare____simple_code_1_0(
  MR_Word backend_libs__builtin_ops__TypeInfo_for_T_56,
  MR_Word * backend_libs__builtin_ops__HeadVar__1_1,
  MR_Word backend_libs__builtin_ops__HeadVar__2_2,
  MR_Word backend_libs__builtin_ops__HeadVar__3_3)
{
  {
    MR_bool backend_libs__builtin_ops__succeeded;
    MR_Integer backend_libs__builtin_ops__CastX_54 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;
    MR_Integer backend_libs__builtin_ops__CastY_55 = (MR_Integer) backend_libs__builtin_ops__HeadVar__3_3;

    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastX_54 == backend_libs__builtin_ops__CastY_55);
    if (backend_libs__builtin_ops__succeeded)
      *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word backend_libs__builtin_ops__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 1)));
            MR_Box backend_libs__builtin_ops__V_64_64 = (MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 0));

            switch (MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Box backend_libs__builtin_ops__V_6_6 = (MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__HeadVar__3_3, (MR_Integer) 0));
                  MR_Word backend_libs__builtin_ops__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__HeadVar__3_3, (MR_Integer) 1)));
                  MR_Word backend_libs__builtin_ops__V_8_8;

                  {
                    mercury__builtin__compare_3_p_0(backend_libs__builtin_ops__TypeInfo_for_T_56, &backend_libs__builtin_ops__V_8_8, backend_libs__builtin_ops__V_64_64, backend_libs__builtin_ops__V_6_6);
                  }
                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_8_8 == (MR_Integer) 0);
                  backend_libs__builtin_ops__succeeded = !(backend_libs__builtin_ops__succeeded);
                  if (backend_libs__builtin_ops__succeeded)
                    *backend_libs__builtin_ops__HeadVar__1_1 = backend_libs__builtin_ops__V_8_8;
                  else
                    {
                      backend_libs__builtin_ops____Compare____simple_expr_1_0(backend_libs__builtin_ops__TypeInfo_for_T_56, backend_libs__builtin_ops__HeadVar__1_1, backend_libs__builtin_ops__V_63_63, backend_libs__builtin_ops__V_7_7);
                    }
                }
                break;
              case (MR_Integer) 1:
                *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 2:
                *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Box backend_libs__builtin_ops__V_66_66 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 1));
            MR_Box backend_libs__builtin_ops__V_67_67 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 0));

            switch (MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Box backend_libs__builtin_ops__V_25_25 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__HeadVar__3_3, (MR_Integer) 0));
                  MR_Box backend_libs__builtin_ops__V_26_26 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__HeadVar__3_3, (MR_Integer) 1));
                  MR_Word backend_libs__builtin_ops__V_27_27;

                  {
                    mercury__builtin__compare_3_p_0(backend_libs__builtin_ops__TypeInfo_for_T_56, &backend_libs__builtin_ops__V_27_27, backend_libs__builtin_ops__V_67_67, backend_libs__builtin_ops__V_25_25);
                  }
                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_27_27 == (MR_Integer) 0);
                  backend_libs__builtin_ops__succeeded = !(backend_libs__builtin_ops__succeeded);
                  if (backend_libs__builtin_ops__succeeded)
                    *backend_libs__builtin_ops__HeadVar__1_1 = backend_libs__builtin_ops__V_27_27;
                  else
                    {
                      mercury__builtin__compare_3_p_0(backend_libs__builtin_ops__TypeInfo_for_T_56, backend_libs__builtin_ops__HeadVar__1_1, backend_libs__builtin_ops__V_66_66, backend_libs__builtin_ops__V_26_26);
                    }
                }
                break;
              case (MR_Integer) 2:
                *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word backend_libs__builtin_ops__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(2), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word backend_libs__builtin_ops__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(2), backend_libs__builtin_ops__HeadVar__3_3, (MR_Integer) 0)));

                  {
                    backend_libs__builtin_ops____Compare____simple_expr_1_0(backend_libs__builtin_ops__TypeInfo_for_T_56, backend_libs__builtin_ops__HeadVar__1_1, backend_libs__builtin_ops__V_68_68, backend_libs__builtin_ops__V_41_41);
                  }
                }
                break;
              case (MR_Integer) 3:
                *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word backend_libs__builtin_ops__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                {
                  MR_Word backend_libs__builtin_ops__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__3_3, (MR_Integer) 0)));

                  {
                    mercury__list____Compare____list_1_0(backend_libs__builtin_ops__TypeInfo_for_T_56, backend_libs__builtin_ops__HeadVar__1_1, backend_libs__builtin_ops__V_65_65, backend_libs__builtin_ops__V_53_53);
                  }
                }
                break;
            }
          }
          break;
      }
  }
}

MR_bool MR_CALL 
backend_libs__builtin_ops____Unify____simple_code_1_0(
  MR_Word backend_libs__builtin_ops__TypeInfo_for_T_17,
  MR_Word backend_libs__builtin_ops__HeadVar__1_1,
  MR_Word backend_libs__builtin_ops__HeadVar__2_2)
{
  {
    MR_bool backend_libs__builtin_ops__succeeded;
    MR_Integer backend_libs__builtin_ops__CastX_15 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
    MR_Integer backend_libs__builtin_ops__CastY_16 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastX_15 == backend_libs__builtin_ops__CastY_16);
    if (backend_libs__builtin_ops__succeeded)
      backend_libs__builtin_ops__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Box backend_libs__builtin_ops__V_3_3 = (MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__HeadVar__1_1, (MR_Integer) 0));
            MR_Word backend_libs__builtin_ops__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__HeadVar__1_1, (MR_Integer) 1)));
            MR_Box backend_libs__builtin_ops__V_5_5;
            MR_Word backend_libs__builtin_ops__V_6_6;

            backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
            if (backend_libs__builtin_ops__succeeded)
              {
                backend_libs__builtin_ops__V_5_5 = (MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 0));
                backend_libs__builtin_ops__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 1)));
                {
                  backend_libs__builtin_ops__succeeded = mercury__builtin__unify_2_p_0(backend_libs__builtin_ops__TypeInfo_for_T_17, backend_libs__builtin_ops__V_3_3, backend_libs__builtin_ops__V_5_5);
                }
                if (backend_libs__builtin_ops__succeeded)
                  {
                    backend_libs__builtin_ops__succeeded = backend_libs__builtin_ops____Unify____simple_expr_1_0(backend_libs__builtin_ops__TypeInfo_for_T_17, backend_libs__builtin_ops__V_4_4, backend_libs__builtin_ops__V_6_6);
                  }
              }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Box backend_libs__builtin_ops__V_7_7 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__HeadVar__1_1, (MR_Integer) 0));
            MR_Box backend_libs__builtin_ops__V_8_8 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__HeadVar__1_1, (MR_Integer) 1));
            MR_Box backend_libs__builtin_ops__V_9_9;
            MR_Box backend_libs__builtin_ops__V_10_10;

            backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (backend_libs__builtin_ops__succeeded)
              {
                backend_libs__builtin_ops__V_9_9 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 0));
                backend_libs__builtin_ops__V_10_10 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 1));
                {
                  backend_libs__builtin_ops__succeeded = mercury__builtin__unify_2_p_0(backend_libs__builtin_ops__TypeInfo_for_T_17, backend_libs__builtin_ops__V_7_7, backend_libs__builtin_ops__V_9_9);
                }
                if (backend_libs__builtin_ops__succeeded)
                  {
                    backend_libs__builtin_ops__succeeded = mercury__builtin__unify_2_p_0(backend_libs__builtin_ops__TypeInfo_for_T_17, backend_libs__builtin_ops__V_8_8, backend_libs__builtin_ops__V_10_10);
                  }
              }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word backend_libs__builtin_ops__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), backend_libs__builtin_ops__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word backend_libs__builtin_ops__V_12_12;

            backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (backend_libs__builtin_ops__succeeded)
              {
                backend_libs__builtin_ops__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 0)));
                {
                  backend_libs__builtin_ops__succeeded = backend_libs__builtin_ops____Unify____simple_expr_1_0(backend_libs__builtin_ops__TypeInfo_for_T_17, backend_libs__builtin_ops__V_11_11, backend_libs__builtin_ops__V_12_12);
                }
              }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word backend_libs__builtin_ops__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word backend_libs__builtin_ops__V_14_14;

            backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)));
            if (backend_libs__builtin_ops__succeeded)
              {
                backend_libs__builtin_ops__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 0)));
                {
                  backend_libs__builtin_ops__succeeded = mercury__list____Unify____list_1_0(backend_libs__builtin_ops__TypeInfo_for_T_17, backend_libs__builtin_ops__V_13_13, backend_libs__builtin_ops__V_14_14);
                }
              }
          }
          break;
      }
    return backend_libs__builtin_ops__succeeded;
  }
}

void MR_CALL 
backend_libs__builtin_ops____Compare____scalar_array_elem_type_0_0(
  MR_Word * backend_libs__builtin_ops__HeadVar__1_1,
  MR_Word backend_libs__builtin_ops__HeadVar__2_2,
  MR_Word backend_libs__builtin_ops__HeadVar__3_3)
{
  {
    MR_bool backend_libs__builtin_ops__succeeded;
    MR_Integer backend_libs__builtin_ops__Cast_HeadVar1_4 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;
    MR_Integer backend_libs__builtin_ops__Cast_HeadVar2_5 = (MR_Integer) backend_libs__builtin_ops__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(backend_libs__builtin_ops__HeadVar__1_1, backend_libs__builtin_ops__Cast_HeadVar1_4, backend_libs__builtin_ops__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
backend_libs__builtin_ops____Unify____scalar_array_elem_type_0_0(
  MR_Word backend_libs__builtin_ops__HeadVar__2_1,
  MR_Word backend_libs__builtin_ops__HeadVar__2_2)
{
  {
    MR_bool backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__HeadVar__2_1 == backend_libs__builtin_ops__HeadVar__2_2);

    return backend_libs__builtin_ops__succeeded;
  }
}

void MR_CALL 
backend_libs__builtin_ops____Compare____binary_op_0_0(
  MR_Word * backend_libs__builtin_ops__HeadVar__1_1,
  MR_Word backend_libs__builtin_ops__HeadVar__2_2,
  MR_Word backend_libs__builtin_ops__HeadVar__3_3)
{
  {
    MR_bool backend_libs__builtin_ops__succeeded;
    MR_Integer backend_libs__builtin_ops__CastX_11 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;
    MR_Integer backend_libs__builtin_ops__CastY_12 = (MR_Integer) backend_libs__builtin_ops__HeadVar__3_3;

    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastX_11 == backend_libs__builtin_ops__CastY_12);
    if (backend_libs__builtin_ops__succeeded)
      *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Integer backend_libs__builtin_ops__V_4_4;
        MR_Integer backend_libs__builtin_ops__V_5_5;

        {
          backend_libs__builtin_ops____Index____binary_op_0_0(backend_libs__builtin_ops__HeadVar__2_2, &backend_libs__builtin_ops__V_4_4);
        }
        {
          backend_libs__builtin_ops____Index____binary_op_0_0(backend_libs__builtin_ops__HeadVar__3_3, &backend_libs__builtin_ops__V_5_5);
        }
        backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_4_4 < backend_libs__builtin_ops__V_5_5);
        if (backend_libs__builtin_ops__succeeded)
          *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 1;
        else
          {
            backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_4_4 > backend_libs__builtin_ops__V_5_5);
            if (backend_libs__builtin_ops__succeeded)
              *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 2;
            else
              {
                MR_Word backend_libs__builtin_ops__V_6_6;

                switch (MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__2_2)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    switch (MR_unmkbody(backend_libs__builtin_ops__HeadVar__2_2)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 2:
                        {
                          backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 3:
                        {
                          backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 4:
                        {
                          backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 5:
                        {
                          backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 6:
                        {
                          backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 7:
                        {
                          backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 8:
                        {
                          backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 9:
                        {
                          backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 10:
                        {
                          backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 11:
                        {
                          backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 12:
                        {
                          backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 13:
                        {
                          backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 14:
                        {
                          backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 15:
                        {
                          backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 16:
                        {
                          backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 17:
                        {
                          backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 18:
                        {
                          backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 19:
                        {
                          backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 20:
                        {
                          backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 21:
                        {
                          backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 22:
                        {
                          backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 23:
                        {
                          backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 24:
                        {
                          backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 25:
                        {
                          backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 26:
                        {
                          backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 27:
                        {
                          backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 28:
                        {
                          backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 29:
                        {
                          backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 30:
                        {
                          backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 31:
                        {
                          backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 32:
                        {
                          backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 33:
                        {
                          backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 34:
                        {
                          backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 35:
                        {
                          backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 36:
                        {
                          backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 37:
                        {
                          backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 38:
                        {
                          backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 39:
                        {
                          backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 40:
                        {
                          backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 41:
                        {
                          backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 42:
                        {
                          backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
                        }
                        break;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word backend_libs__builtin_ops__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 0)));
                      MR_Word backend_libs__builtin_ops__V_8_8;

                      backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
                      if (backend_libs__builtin_ops__succeeded)
                        {
                          backend_libs__builtin_ops__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__HeadVar__3_3, (MR_Integer) 0)));
                          {
                            backend_libs__builtin_ops____Compare____array_elem_type_0_0(&backend_libs__builtin_ops__V_6_6, backend_libs__builtin_ops__V_7_7, backend_libs__builtin_ops__V_8_8);
                          }
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
                        }
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Integer backend_libs__builtin_ops__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(2), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 0)));
                      MR_Integer backend_libs__builtin_ops__V_10_10;

                      backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2)));
                      if (backend_libs__builtin_ops__succeeded)
                        {
                          backend_libs__builtin_ops__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(2), backend_libs__builtin_ops__HeadVar__3_3, (MR_Integer) 0)));
                          {
                            mercury__private_builtin__builtin_compare_int_3_p_0(&backend_libs__builtin_ops__V_6_6, backend_libs__builtin_ops__V_9_9, backend_libs__builtin_ops__V_10_10);
                          }
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
                        }
                    }
                    break;
                }
                if (backend_libs__builtin_ops__succeeded)
                  *backend_libs__builtin_ops__HeadVar__1_1 = backend_libs__builtin_ops__V_6_6;
                else
                  {
                    mercury__private_builtin__compare_error_0_p_0();
                    return;
                  }
              }
          }
      }
  }
}

void MR_CALL 
backend_libs__builtin_ops____Index____binary_op_0_0(
  MR_Word backend_libs__builtin_ops__HeadVar__1_1,
  MR_Integer * backend_libs__builtin_ops__HeadVar__2_2)
{
  {
    MR_bool backend_libs__builtin_ops__succeeded;

    switch (MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(backend_libs__builtin_ops__HeadVar__1_1)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
            *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 2:
            *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 2;
            break;
          case (MR_Integer) 3:
            *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 3;
            break;
          case (MR_Integer) 4:
            *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 4;
            break;
          case (MR_Integer) 5:
            *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 5;
            break;
          case (MR_Integer) 6:
            *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 6;
            break;
          case (MR_Integer) 7:
            *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 7;
            break;
          case (MR_Integer) 8:
            *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 8;
            break;
          case (MR_Integer) 9:
            *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 9;
            break;
          case (MR_Integer) 10:
            *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 10;
            break;
          case (MR_Integer) 11:
            *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 11;
            break;
          case (MR_Integer) 12:
            *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 12;
            break;
          case (MR_Integer) 13:
            *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 13;
            break;
          case (MR_Integer) 14:
            *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 14;
            break;
          case (MR_Integer) 15:
            *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 16;
            break;
          case (MR_Integer) 16:
            *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 17;
            break;
          case (MR_Integer) 17:
            *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 18;
            break;
          case (MR_Integer) 18:
            *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 19;
            break;
          case (MR_Integer) 19:
            *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 20;
            break;
          case (MR_Integer) 20:
            *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 21;
            break;
          case (MR_Integer) 21:
            *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 22;
            break;
          case (MR_Integer) 22:
            *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 23;
            break;
          case (MR_Integer) 23:
            *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 25;
            break;
          case (MR_Integer) 24:
            *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 26;
            break;
          case (MR_Integer) 25:
            *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 27;
            break;
          case (MR_Integer) 26:
            *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 28;
            break;
          case (MR_Integer) 27:
            *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 29;
            break;
          case (MR_Integer) 28:
            *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 30;
            break;
          case (MR_Integer) 29:
            *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 31;
            break;
          case (MR_Integer) 30:
            *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 32;
            break;
          case (MR_Integer) 31:
            *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 33;
            break;
          case (MR_Integer) 32:
            *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 34;
            break;
          case (MR_Integer) 33:
            *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 35;
            break;
          case (MR_Integer) 34:
            *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 36;
            break;
          case (MR_Integer) 35:
            *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 37;
            break;
          case (MR_Integer) 36:
            *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 38;
            break;
          case (MR_Integer) 37:
            *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 39;
            break;
          case (MR_Integer) 38:
            *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 40;
            break;
          case (MR_Integer) 39:
            *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 41;
            break;
          case (MR_Integer) 40:
            *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 42;
            break;
          case (MR_Integer) 41:
            *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 43;
            break;
          case (MR_Integer) 42:
            *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 44;
            break;
        }
        break;
      case (MR_Integer) 1:
        *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 15;
        break;
      case (MR_Integer) 2:
        *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 24;
        break;
    }
  }
}

MR_bool MR_CALL 
backend_libs__builtin_ops____Unify____binary_op_0_0(
  MR_Word backend_libs__builtin_ops__HeadVar__1_1,
  MR_Word backend_libs__builtin_ops__HeadVar__2_2)
{
  {
    MR_bool backend_libs__builtin_ops__succeeded;
    MR_Integer backend_libs__builtin_ops__CastX_93 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
    MR_Integer backend_libs__builtin_ops__CastY_94 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastX_93 == backend_libs__builtin_ops__CastY_94);
    if (backend_libs__builtin_ops__succeeded)
      backend_libs__builtin_ops__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(backend_libs__builtin_ops__HeadVar__1_1)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer backend_libs__builtin_ops__CastX_3 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
                MR_Integer backend_libs__builtin_ops__CastY_4 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastY_4 == backend_libs__builtin_ops__CastX_3);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer backend_libs__builtin_ops__CastX_5 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
                MR_Integer backend_libs__builtin_ops__CastY_6 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastY_6 == backend_libs__builtin_ops__CastX_5);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Integer backend_libs__builtin_ops__CastX_7 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
                MR_Integer backend_libs__builtin_ops__CastY_8 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastY_8 == backend_libs__builtin_ops__CastX_7);
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Integer backend_libs__builtin_ops__CastX_9 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
                MR_Integer backend_libs__builtin_ops__CastY_10 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastY_10 == backend_libs__builtin_ops__CastX_9);
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Integer backend_libs__builtin_ops__CastX_11 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
                MR_Integer backend_libs__builtin_ops__CastY_12 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastY_12 == backend_libs__builtin_ops__CastX_11);
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Integer backend_libs__builtin_ops__CastX_13 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
                MR_Integer backend_libs__builtin_ops__CastY_14 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastY_14 == backend_libs__builtin_ops__CastX_13);
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Integer backend_libs__builtin_ops__CastX_15 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
                MR_Integer backend_libs__builtin_ops__CastY_16 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastY_16 == backend_libs__builtin_ops__CastX_15);
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Integer backend_libs__builtin_ops__CastX_17 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
                MR_Integer backend_libs__builtin_ops__CastY_18 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastY_18 == backend_libs__builtin_ops__CastX_17);
              }
              break;
            case (MR_Integer) 8:
              {
                MR_Integer backend_libs__builtin_ops__CastX_19 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
                MR_Integer backend_libs__builtin_ops__CastY_20 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastY_20 == backend_libs__builtin_ops__CastX_19);
              }
              break;
            case (MR_Integer) 9:
              {
                MR_Integer backend_libs__builtin_ops__CastX_21 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
                MR_Integer backend_libs__builtin_ops__CastY_22 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastY_22 == backend_libs__builtin_ops__CastX_21);
              }
              break;
            case (MR_Integer) 10:
              {
                MR_Integer backend_libs__builtin_ops__CastX_23 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
                MR_Integer backend_libs__builtin_ops__CastY_24 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastY_24 == backend_libs__builtin_ops__CastX_23);
              }
              break;
            case (MR_Integer) 11:
              {
                MR_Integer backend_libs__builtin_ops__CastX_25 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
                MR_Integer backend_libs__builtin_ops__CastY_26 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastY_26 == backend_libs__builtin_ops__CastX_25);
              }
              break;
            case (MR_Integer) 12:
              {
                MR_Integer backend_libs__builtin_ops__CastX_27 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
                MR_Integer backend_libs__builtin_ops__CastY_28 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastY_28 == backend_libs__builtin_ops__CastX_27);
              }
              break;
            case (MR_Integer) 13:
              {
                MR_Integer backend_libs__builtin_ops__CastX_29 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
                MR_Integer backend_libs__builtin_ops__CastY_30 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastY_30 == backend_libs__builtin_ops__CastX_29);
              }
              break;
            case (MR_Integer) 14:
              {
                MR_Integer backend_libs__builtin_ops__CastX_31 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
                MR_Integer backend_libs__builtin_ops__CastY_32 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastY_32 == backend_libs__builtin_ops__CastX_31);
              }
              break;
            case (MR_Integer) 15:
              {
                MR_Integer backend_libs__builtin_ops__CastX_35 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
                MR_Integer backend_libs__builtin_ops__CastY_36 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastY_36 == backend_libs__builtin_ops__CastX_35);
              }
              break;
            case (MR_Integer) 16:
              {
                MR_Integer backend_libs__builtin_ops__CastX_37 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
                MR_Integer backend_libs__builtin_ops__CastY_38 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastY_38 == backend_libs__builtin_ops__CastX_37);
              }
              break;
            case (MR_Integer) 17:
              {
                MR_Integer backend_libs__builtin_ops__CastX_39 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
                MR_Integer backend_libs__builtin_ops__CastY_40 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastY_40 == backend_libs__builtin_ops__CastX_39);
              }
              break;
            case (MR_Integer) 18:
              {
                MR_Integer backend_libs__builtin_ops__CastX_41 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
                MR_Integer backend_libs__builtin_ops__CastY_42 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastY_42 == backend_libs__builtin_ops__CastX_41);
              }
              break;
            case (MR_Integer) 19:
              {
                MR_Integer backend_libs__builtin_ops__CastX_43 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
                MR_Integer backend_libs__builtin_ops__CastY_44 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastY_44 == backend_libs__builtin_ops__CastX_43);
              }
              break;
            case (MR_Integer) 20:
              {
                MR_Integer backend_libs__builtin_ops__CastX_45 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
                MR_Integer backend_libs__builtin_ops__CastY_46 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastY_46 == backend_libs__builtin_ops__CastX_45);
              }
              break;
            case (MR_Integer) 21:
              {
                MR_Integer backend_libs__builtin_ops__CastX_47 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
                MR_Integer backend_libs__builtin_ops__CastY_48 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastY_48 == backend_libs__builtin_ops__CastX_47);
              }
              break;
            case (MR_Integer) 22:
              {
                MR_Integer backend_libs__builtin_ops__CastX_49 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
                MR_Integer backend_libs__builtin_ops__CastY_50 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastY_50 == backend_libs__builtin_ops__CastX_49);
              }
              break;
            case (MR_Integer) 23:
              {
                MR_Integer backend_libs__builtin_ops__CastX_53 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
                MR_Integer backend_libs__builtin_ops__CastY_54 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastY_54 == backend_libs__builtin_ops__CastX_53);
              }
              break;
            case (MR_Integer) 24:
              {
                MR_Integer backend_libs__builtin_ops__CastX_55 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
                MR_Integer backend_libs__builtin_ops__CastY_56 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastY_56 == backend_libs__builtin_ops__CastX_55);
              }
              break;
            case (MR_Integer) 25:
              {
                MR_Integer backend_libs__builtin_ops__CastX_57 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
                MR_Integer backend_libs__builtin_ops__CastY_58 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastY_58 == backend_libs__builtin_ops__CastX_57);
              }
              break;
            case (MR_Integer) 26:
              {
                MR_Integer backend_libs__builtin_ops__CastX_59 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
                MR_Integer backend_libs__builtin_ops__CastY_60 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastY_60 == backend_libs__builtin_ops__CastX_59);
              }
              break;
            case (MR_Integer) 27:
              {
                MR_Integer backend_libs__builtin_ops__CastX_61 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
                MR_Integer backend_libs__builtin_ops__CastY_62 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastY_62 == backend_libs__builtin_ops__CastX_61);
              }
              break;
            case (MR_Integer) 28:
              {
                MR_Integer backend_libs__builtin_ops__CastX_63 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
                MR_Integer backend_libs__builtin_ops__CastY_64 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastY_64 == backend_libs__builtin_ops__CastX_63);
              }
              break;
            case (MR_Integer) 29:
              {
                MR_Integer backend_libs__builtin_ops__CastX_65 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
                MR_Integer backend_libs__builtin_ops__CastY_66 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastY_66 == backend_libs__builtin_ops__CastX_65);
              }
              break;
            case (MR_Integer) 30:
              {
                MR_Integer backend_libs__builtin_ops__CastX_67 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
                MR_Integer backend_libs__builtin_ops__CastY_68 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastY_68 == backend_libs__builtin_ops__CastX_67);
              }
              break;
            case (MR_Integer) 31:
              {
                MR_Integer backend_libs__builtin_ops__CastX_69 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
                MR_Integer backend_libs__builtin_ops__CastY_70 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastY_70 == backend_libs__builtin_ops__CastX_69);
              }
              break;
            case (MR_Integer) 32:
              {
                MR_Integer backend_libs__builtin_ops__CastX_71 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
                MR_Integer backend_libs__builtin_ops__CastY_72 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastY_72 == backend_libs__builtin_ops__CastX_71);
              }
              break;
            case (MR_Integer) 33:
              {
                MR_Integer backend_libs__builtin_ops__CastX_73 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
                MR_Integer backend_libs__builtin_ops__CastY_74 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastY_74 == backend_libs__builtin_ops__CastX_73);
              }
              break;
            case (MR_Integer) 34:
              {
                MR_Integer backend_libs__builtin_ops__CastX_75 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
                MR_Integer backend_libs__builtin_ops__CastY_76 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastY_76 == backend_libs__builtin_ops__CastX_75);
              }
              break;
            case (MR_Integer) 35:
              {
                MR_Integer backend_libs__builtin_ops__CastX_77 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
                MR_Integer backend_libs__builtin_ops__CastY_78 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastY_78 == backend_libs__builtin_ops__CastX_77);
              }
              break;
            case (MR_Integer) 36:
              {
                MR_Integer backend_libs__builtin_ops__CastX_79 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
                MR_Integer backend_libs__builtin_ops__CastY_80 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastY_80 == backend_libs__builtin_ops__CastX_79);
              }
              break;
            case (MR_Integer) 37:
              {
                MR_Integer backend_libs__builtin_ops__CastX_81 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
                MR_Integer backend_libs__builtin_ops__CastY_82 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastY_82 == backend_libs__builtin_ops__CastX_81);
              }
              break;
            case (MR_Integer) 38:
              {
                MR_Integer backend_libs__builtin_ops__CastX_83 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
                MR_Integer backend_libs__builtin_ops__CastY_84 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastY_84 == backend_libs__builtin_ops__CastX_83);
              }
              break;
            case (MR_Integer) 39:
              {
                MR_Integer backend_libs__builtin_ops__CastX_85 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
                MR_Integer backend_libs__builtin_ops__CastY_86 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastY_86 == backend_libs__builtin_ops__CastX_85);
              }
              break;
            case (MR_Integer) 40:
              {
                MR_Integer backend_libs__builtin_ops__CastX_87 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
                MR_Integer backend_libs__builtin_ops__CastY_88 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastY_88 == backend_libs__builtin_ops__CastX_87);
              }
              break;
            case (MR_Integer) 41:
              {
                MR_Integer backend_libs__builtin_ops__CastX_89 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
                MR_Integer backend_libs__builtin_ops__CastY_90 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastY_90 == backend_libs__builtin_ops__CastX_89);
              }
              break;
            case (MR_Integer) 42:
              {
                MR_Integer backend_libs__builtin_ops__CastX_91 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
                MR_Integer backend_libs__builtin_ops__CastY_92 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastY_92 == backend_libs__builtin_ops__CastX_91);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word backend_libs__builtin_ops__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word backend_libs__builtin_ops__V_34_34;

            backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (backend_libs__builtin_ops__succeeded)
              {
                backend_libs__builtin_ops__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 0)));
                {
                  backend_libs__builtin_ops__succeeded = backend_libs__builtin_ops____Unify____array_elem_type_0_0(backend_libs__builtin_ops__V_33_33, backend_libs__builtin_ops__V_34_34);
                }
              }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Integer backend_libs__builtin_ops__V_51_51 = ((MR_Integer) (MR_hl_field(MR_mktag(2), backend_libs__builtin_ops__HeadVar__1_1, (MR_Integer) 0)));
            MR_Integer backend_libs__builtin_ops__V_52_52;

            backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (backend_libs__builtin_ops__succeeded)
              {
                backend_libs__builtin_ops__V_52_52 = ((MR_Integer) (MR_hl_field(MR_mktag(2), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 0)));
                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_51_51 == backend_libs__builtin_ops__V_52_52);
              }
          }
          break;
      }
    return backend_libs__builtin_ops__succeeded;
  }
}

void MR_CALL 
backend_libs__builtin_ops____Compare____array_elem_type_0_0(
  MR_Word * backend_libs__builtin_ops__HeadVar__1_1,
  MR_Word backend_libs__builtin_ops__HeadVar__2_2,
  MR_Word backend_libs__builtin_ops__HeadVar__3_3)
{
  {
    MR_bool backend_libs__builtin_ops__succeeded;
    MR_Integer backend_libs__builtin_ops__CastX_12 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;
    MR_Integer backend_libs__builtin_ops__CastY_13 = (MR_Integer) backend_libs__builtin_ops__HeadVar__3_3;

    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastX_12 == backend_libs__builtin_ops__CastY_13);
    if (backend_libs__builtin_ops__succeeded)
      *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word backend_libs__builtin_ops__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 0)));

        if (((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
          {
            MR_Word backend_libs__builtin_ops__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__HeadVar__3_3, (MR_Integer) 0)));
            MR_Integer backend_libs__builtin_ops__V_18_18 = (MR_Integer) backend_libs__builtin_ops__V_16_16;
            MR_Integer backend_libs__builtin_ops__V_19_19 = (MR_Integer) backend_libs__builtin_ops__V_5_5;

            {
              mercury__private_builtin__builtin_compare_int_3_p_0(backend_libs__builtin_ops__HeadVar__1_1, backend_libs__builtin_ops__V_18_18, backend_libs__builtin_ops__V_19_19);
            }
          }
        else
          *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 1;
      }
    else
      {
        MR_Word backend_libs__builtin_ops__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 0)));

        if (((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
          *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 2;
        else
          {
            MR_Word backend_libs__builtin_ops__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__HeadVar__3_3, (MR_Integer) 0)));

            {
              mercury__builtin__compare_3_p_0((MR_Word) &backend_libs__builtin_ops_scalar_common_1[0], backend_libs__builtin_ops__HeadVar__1_1, ((MR_Box) (backend_libs__builtin_ops__V_17_17)), ((MR_Box) (backend_libs__builtin_ops__V_11_11)));
            }
          }
      }
  }
}

MR_bool MR_CALL 
backend_libs__builtin_ops____Unify____array_elem_type_0_0(
  MR_Word backend_libs__builtin_ops__HeadVar__1_1,
  MR_Word backend_libs__builtin_ops__HeadVar__2_2)
{
  {
    MR_bool backend_libs__builtin_ops__succeeded;
    MR_Integer backend_libs__builtin_ops__CastX_7 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
    MR_Integer backend_libs__builtin_ops__CastY_8 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastX_7 == backend_libs__builtin_ops__CastY_8);
    if (backend_libs__builtin_ops__succeeded)
      backend_libs__builtin_ops__succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word backend_libs__builtin_ops__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word backend_libs__builtin_ops__V_4_4;

        backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
        if (backend_libs__builtin_ops__succeeded)
          {
            backend_libs__builtin_ops__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 0)));
            backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_3_3 == backend_libs__builtin_ops__V_4_4);
          }
      }
    else
      {
        MR_Word backend_libs__builtin_ops__TypeInfo_9_9;
        MR_Word backend_libs__builtin_ops__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word backend_libs__builtin_ops__V_6_6;

        backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
        if (backend_libs__builtin_ops__succeeded)
          {
            backend_libs__builtin_ops__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 0)));
            backend_libs__builtin_ops__TypeInfo_9_9 = (MR_Word) &backend_libs__builtin_ops_scalar_common_1[0];
            {
              backend_libs__builtin_ops__succeeded = mercury__builtin__unify_2_p_0(backend_libs__builtin_ops__TypeInfo_9_9, ((MR_Box) (backend_libs__builtin_ops__V_5_5)), ((MR_Box) (backend_libs__builtin_ops__V_6_6)));
            }
          }
      }
    return backend_libs__builtin_ops__succeeded;
  }
}

void MR_CALL 
backend_libs__builtin_ops__translate_builtin_5_p_0(
  MR_Word backend_libs__builtin_ops__TypeInfo_for_T_24,
  MR_Word backend_libs__builtin_ops__FullyQualifiedModule_6,
  MR_String backend_libs__builtin_ops__PredName_7,
  MR_Integer backend_libs__builtin_ops__ProcId_8,
  MR_Word backend_libs__builtin_ops__Args_9,
  MR_Word * backend_libs__builtin_ops__Code_10)
{
  {
    MR_bool backend_libs__builtin_ops__succeeded;
    MR_Word backend_libs__builtin_ops__CodePrime_13;
    MR_String backend_libs__builtin_ops__ModuleName_11;
    MR_Integer backend_libs__builtin_ops__ProcNum_12;
    MR_Word backend_libs__builtin_ops__V_526_526;
    MR_Box backend_libs__builtin_ops__V_527_527;
    MR_Integer backend_libs__builtin_ops__lo_0;
    MR_Integer backend_libs__builtin_ops__hi_1;
    MR_Integer backend_libs__builtin_ops__mid_2;
    MR_Integer backend_libs__builtin_ops__result_3;

    {
      backend_libs__builtin_ops__succeeded = mdbcomp__builtin_modules__is_std_lib_module_name_2_p_0(backend_libs__builtin_ops__FullyQualifiedModule_6, &backend_libs__builtin_ops__ModuleName_11);
    }
    if (backend_libs__builtin_ops__succeeded)
      {
        {
          hlds__hlds_pred__proc_id_to_int_2_p_0(backend_libs__builtin_ops__ProcId_8, &backend_libs__builtin_ops__ProcNum_12);
        }
        backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__Args_9)) == (MR_mktag((MR_Integer) 1)));
        if (backend_libs__builtin_ops__succeeded)
          {
            backend_libs__builtin_ops__V_527_527 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Args_9, (MR_Integer) 0));
            backend_libs__builtin_ops__V_526_526 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Args_9, (MR_Integer) 1)));
            /* binary string jump switch */
            backend_libs__builtin_ops__lo_0 = (MR_Integer) 0;
            backend_libs__builtin_ops__hi_1 = (MR_Integer) 5;
            do
              {
                backend_libs__builtin_ops__mid_2 = (((backend_libs__builtin_ops__lo_0 + backend_libs__builtin_ops__hi_1)) / (MR_Integer) 2);
                backend_libs__builtin_ops__result_3 = MR_strcmp(backend_libs__builtin_ops__ModuleName_11, ((&backend_libs__builtin_ops_vector_common_2[70 + backend_libs__builtin_ops__mid_2]))->backend_libs__builtin_ops__vector_common_type_2_0__vct_2_f_0);
                if ((backend_libs__builtin_ops__result_3 == (MR_Integer) 0))
                  {
                    switch (((&backend_libs__builtin_ops_vector_common_2[70 + backend_libs__builtin_ops__mid_2]))->backend_libs__builtin_ops__vector_common_type_2_0__vct_2_f_1) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          /* case "builtin" */
                          {
                            MR_Box backend_libs__builtin_ops__Y_49;
                            MR_Word backend_libs__builtin_ops__V_203_203;
                            MR_Word backend_libs__builtin_ops__V_204_204;

                            backend_libs__builtin_ops__succeeded = (strcmp(backend_libs__builtin_ops__PredName_7, (MR_String) "unsafe_promise_unique") == 0);
                            if (backend_libs__builtin_ops__succeeded)
                              {
                                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_12 == (MR_Integer) 0);
                                if (backend_libs__builtin_ops__succeeded)
                                  {
                                    backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_526_526)) == (MR_mktag((MR_Integer) 1)));
                                    if (backend_libs__builtin_ops__succeeded)
                                      {
                                        backend_libs__builtin_ops__Y_49 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_526_526, (MR_Integer) 0));
                                        backend_libs__builtin_ops__V_203_203 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_526_526, (MR_Integer) 1)));
                                        backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_203_203 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                        if (backend_libs__builtin_ops__succeeded)
                                          {
                                            {
                                              backend_libs__builtin_ops__V_204_204 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                              MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_204_204, 0) = backend_libs__builtin_ops__V_527_527;
                                            }
                                            {
                                              backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                              MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Y_49;
                                              MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_204_204));
                                            }
                                            backend_libs__builtin_ops__succeeded = MR_TRUE;
                                          }
                                      }
                                  }
                              }
                          }
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          /* case "float" */
                          {
                            MR_Word backend_libs__builtin_ops__V_536_536;
                            MR_Box backend_libs__builtin_ops__V_537_537;
                            MR_Integer backend_libs__builtin_ops__slot_7;
                            MR_String backend_libs__builtin_ops__str_8;

                            backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_12 == (MR_Integer) 0);
                            if (backend_libs__builtin_ops__succeeded)
                              {
                                backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_526_526)) == (MR_mktag((MR_Integer) 1)));
                                if (backend_libs__builtin_ops__succeeded)
                                  {
                                    backend_libs__builtin_ops__V_537_537 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_526_526, (MR_Integer) 0));
                                    backend_libs__builtin_ops__V_536_536 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_526_526, (MR_Integer) 1)));
                                    /* hashed string jump switch */
                                    /* compute the hash value of the input string */
                                    backend_libs__builtin_ops__slot_7 = ((MR_hash_string4(backend_libs__builtin_ops__PredName_7)) & (MR_Integer) 15);
                                    /* no collisions; no hash chain loop */
                                    /* lookup the string for this hash slot */
                                    backend_libs__builtin_ops__str_8 = ((&backend_libs__builtin_ops_vector_common_3[16 + backend_libs__builtin_ops__slot_7]))->backend_libs__builtin_ops__vector_common_type_3_0__vct_3_f_0;
                                    /* did we find a match? */
                                    if ((((backend_libs__builtin_ops__str_8 != NULL)) && ((strcmp(backend_libs__builtin_ops__str_8, backend_libs__builtin_ops__PredName_7) == 0))))
                                      {
                                        /* we found a match; dispatch to the corresponding code */
                                        switch (backend_libs__builtin_ops__slot_7) {
                                          default: /*NOTREACHED*/ MR_assert(0);
                                          case (MR_Integer) 1:
                                            {
                                              /* case ">=" */
                                              {
                                                MR_Word backend_libs__builtin_ops__V_328_328;
                                                MR_Word backend_libs__builtin_ops__V_329_329;
                                                MR_Word backend_libs__builtin_ops__V_330_330;
                                                MR_Word backend_libs__builtin_ops__CompareOp_333;

                                                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_536_536 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  {
                                                    backend_libs__builtin_ops__CompareOp_333 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 37));
                                                    {
                                                      backend_libs__builtin_ops__V_329_329 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_329_329, 0) = backend_libs__builtin_ops__V_527_527;
                                                    }
                                                    {
                                                      backend_libs__builtin_ops__V_330_330 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_330_330, 0) = backend_libs__builtin_ops__V_537_537;
                                                    }
                                                    {
                                                      backend_libs__builtin_ops__V_328_328 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_328_328, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_328_328, 1) = ((MR_Box) (backend_libs__builtin_ops__CompareOp_333));
                                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_328_328, 2) = ((MR_Box) (backend_libs__builtin_ops__V_329_329));
                                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_328_328, 3) = ((MR_Box) (backend_libs__builtin_ops__V_330_330));
                                                    }
                                                    {
                                                      backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                                      MR_hl_field(MR_mktag(2), backend_libs__builtin_ops__CodePrime_13, 0) = ((MR_Box) (backend_libs__builtin_ops__V_328_328));
                                                    }
                                                    backend_libs__builtin_ops__succeeded = MR_TRUE;
                                                  }
                                              }
                                            }
                                            break;
                                          case (MR_Integer) 3:
                                            {
                                              /* case "=<" */
                                              {
                                                MR_Word backend_libs__builtin_ops__V_312_312;
                                                MR_Word backend_libs__builtin_ops__V_313_313;
                                                MR_Word backend_libs__builtin_ops__V_314_314;
                                                MR_Word backend_libs__builtin_ops__CompareOp_317;

                                                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_536_536 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  {
                                                    backend_libs__builtin_ops__CompareOp_317 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 36));
                                                    {
                                                      backend_libs__builtin_ops__V_313_313 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_313_313, 0) = backend_libs__builtin_ops__V_527_527;
                                                    }
                                                    {
                                                      backend_libs__builtin_ops__V_314_314 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_314_314, 0) = backend_libs__builtin_ops__V_537_537;
                                                    }
                                                    {
                                                      backend_libs__builtin_ops__V_312_312 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_312_312, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_312_312, 1) = ((MR_Box) (backend_libs__builtin_ops__CompareOp_317));
                                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_312_312, 2) = ((MR_Box) (backend_libs__builtin_ops__V_313_313));
                                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_312_312, 3) = ((MR_Box) (backend_libs__builtin_ops__V_314_314));
                                                    }
                                                    {
                                                      backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                                      MR_hl_field(MR_mktag(2), backend_libs__builtin_ops__CodePrime_13, 0) = ((MR_Box) (backend_libs__builtin_ops__V_312_312));
                                                    }
                                                    backend_libs__builtin_ops__succeeded = MR_TRUE;
                                                  }
                                              }
                                            }
                                            break;
                                          case (MR_Integer) 8:
                                            {
                                              /* case "unchecked_quotient" */
                                              {
                                                MR_Word backend_libs__builtin_ops__V_336_336;
                                                MR_Word backend_libs__builtin_ops__V_337_337;
                                                MR_Word backend_libs__builtin_ops__V_338_338;
                                                MR_Word backend_libs__builtin_ops__V_339_339;
                                                MR_Box backend_libs__builtin_ops__Z_342;

                                                backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_536_536)) == (MR_mktag((MR_Integer) 1)));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  {
                                                    backend_libs__builtin_ops__Z_342 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_536_536, (MR_Integer) 0));
                                                    backend_libs__builtin_ops__V_336_336 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_536_536, (MR_Integer) 1)));
                                                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_336_336 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                    if (backend_libs__builtin_ops__succeeded)
                                                      {
                                                        {
                                                          backend_libs__builtin_ops__V_338_338 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_338_338, 0) = backend_libs__builtin_ops__V_527_527;
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__V_339_339 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_339_339, 0) = backend_libs__builtin_ops__V_537_537;
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__V_337_337 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_337_337, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_337_337, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 31))));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_337_337, 2) = ((MR_Box) (backend_libs__builtin_ops__V_338_338));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_337_337, 3) = ((MR_Box) (backend_libs__builtin_ops__V_339_339));
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Z_342;
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_337_337));
                                                        }
                                                        backend_libs__builtin_ops__succeeded = MR_TRUE;
                                                      }
                                                  }
                                              }
                                            }
                                            break;
                                          case (MR_Integer) 10:
                                            {
                                              /* case "+" */
                                              if ((backend_libs__builtin_ops__V_536_536 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                                                {
                                                  MR_Word backend_libs__builtin_ops__V_89_89;

                                                  {
                                                    backend_libs__builtin_ops__V_89_89 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                    MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_89_89, 0) = backend_libs__builtin_ops__V_527_527;
                                                  }
                                                  {
                                                    backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                    MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__V_537_537;
                                                    MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_89_89));
                                                  }
                                                  backend_libs__builtin_ops__succeeded = MR_TRUE;
                                                }
                                              else
                                                {
                                                  MR_Word backend_libs__builtin_ops__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_536_536, (MR_Integer) 1)));
                                                  MR_Word backend_libs__builtin_ops__V_83_83;
                                                  MR_Word backend_libs__builtin_ops__V_84_84;
                                                  MR_Word backend_libs__builtin_ops__V_85_85;
                                                  MR_Word backend_libs__builtin_ops__V_86_86;
                                                  MR_Box backend_libs__builtin_ops__Z_275 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_536_536, (MR_Integer) 0));

                                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_82_82 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                  if (backend_libs__builtin_ops__succeeded)
                                                    {
                                                      backend_libs__builtin_ops__V_84_84 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 28));
                                                      {
                                                        backend_libs__builtin_ops__V_85_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_85_85, 0) = backend_libs__builtin_ops__V_527_527;
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__V_86_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_86_86, 0) = backend_libs__builtin_ops__V_537_537;
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__V_83_83 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_83_83, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_83_83, 1) = ((MR_Box) (backend_libs__builtin_ops__V_84_84));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_83_83, 2) = ((MR_Box) (backend_libs__builtin_ops__V_85_85));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_83_83, 3) = ((MR_Box) (backend_libs__builtin_ops__V_86_86));
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Z_275;
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_83_83));
                                                      }
                                                      backend_libs__builtin_ops__succeeded = MR_TRUE;
                                                    }
                                                }
                                            }
                                            break;
                                          case (MR_Integer) 11:
                                            {
                                              /* case "*" */
                                              {
                                                MR_Word backend_libs__builtin_ops__V_62_62;
                                                MR_Word backend_libs__builtin_ops__V_63_63;
                                                MR_Word backend_libs__builtin_ops__V_64_64;
                                                MR_Word backend_libs__builtin_ops__V_65_65;
                                                MR_Box backend_libs__builtin_ops__Z_295;

                                                backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_536_536)) == (MR_mktag((MR_Integer) 1)));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  {
                                                    backend_libs__builtin_ops__Z_295 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_536_536, (MR_Integer) 0));
                                                    backend_libs__builtin_ops__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_536_536, (MR_Integer) 1)));
                                                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_62_62 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                    if (backend_libs__builtin_ops__succeeded)
                                                      {
                                                        {
                                                          backend_libs__builtin_ops__V_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_64_64, 0) = backend_libs__builtin_ops__V_527_527;
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__V_65_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_65_65, 0) = backend_libs__builtin_ops__V_537_537;
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__V_63_63 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_63_63, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_63_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 30))));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_63_63, 2) = ((MR_Box) (backend_libs__builtin_ops__V_64_64));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_63_63, 3) = ((MR_Box) (backend_libs__builtin_ops__V_65_65));
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Z_295;
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_63_63));
                                                        }
                                                        backend_libs__builtin_ops__succeeded = MR_TRUE;
                                                      }
                                                  }
                                              }
                                            }
                                            break;
                                          case (MR_Integer) 12:
                                            {
                                              /* case "-" */
                                              if ((backend_libs__builtin_ops__V_536_536 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                                                {
                                                  MR_Word backend_libs__builtin_ops__V_75_75;
                                                  MR_Word backend_libs__builtin_ops__V_79_79;

                                                  {
                                                    backend_libs__builtin_ops__V_79_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                    MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_79_79, 0) = backend_libs__builtin_ops__V_527_527;
                                                  }
                                                  {
                                                    backend_libs__builtin_ops__V_75_75 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_75_75, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_75_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 29))));
                                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_75_75, 2) = ((MR_Box) (MR_mkword(MR_mktag(2), &backend_libs__builtin_ops_scalar_common_4[2])));
                                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_75_75, 3) = ((MR_Box) (backend_libs__builtin_ops__V_79_79));
                                                  }
                                                  {
                                                    backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                    MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__V_537_537;
                                                    MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_75_75));
                                                  }
                                                  backend_libs__builtin_ops__succeeded = MR_TRUE;
                                                }
                                              else
                                                {
                                                  MR_Word backend_libs__builtin_ops__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_536_536, (MR_Integer) 1)));
                                                  MR_Word backend_libs__builtin_ops__V_69_69;
                                                  MR_Word backend_libs__builtin_ops__V_70_70;
                                                  MR_Word backend_libs__builtin_ops__V_71_71;
                                                  MR_Word backend_libs__builtin_ops__V_72_72;
                                                  MR_Box backend_libs__builtin_ops__Z_286 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_536_536, (MR_Integer) 0));

                                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_68_68 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                  if (backend_libs__builtin_ops__succeeded)
                                                    {
                                                      backend_libs__builtin_ops__V_70_70 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 29));
                                                      {
                                                        backend_libs__builtin_ops__V_71_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_71_71, 0) = backend_libs__builtin_ops__V_527_527;
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__V_72_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_72_72, 0) = backend_libs__builtin_ops__V_537_537;
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__V_69_69 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_69_69, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_69_69, 1) = ((MR_Box) (backend_libs__builtin_ops__V_70_70));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_69_69, 2) = ((MR_Box) (backend_libs__builtin_ops__V_71_71));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_69_69, 3) = ((MR_Box) (backend_libs__builtin_ops__V_72_72));
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Z_286;
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_69_69));
                                                      }
                                                      backend_libs__builtin_ops__succeeded = MR_TRUE;
                                                    }
                                                }
                                            }
                                            break;
                                          case (MR_Integer) 13:
                                            {
                                              /* case "<" */
                                              {
                                                MR_Word backend_libs__builtin_ops__V_57_57;
                                                MR_Word backend_libs__builtin_ops__V_58_58;
                                                MR_Word backend_libs__builtin_ops__V_59_59;
                                                MR_Word backend_libs__builtin_ops__CompareOp_299;

                                                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_536_536 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  {
                                                    backend_libs__builtin_ops__CompareOp_299 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 34));
                                                    {
                                                      backend_libs__builtin_ops__V_58_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_58_58, 0) = backend_libs__builtin_ops__V_527_527;
                                                    }
                                                    {
                                                      backend_libs__builtin_ops__V_59_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_59_59, 0) = backend_libs__builtin_ops__V_537_537;
                                                    }
                                                    {
                                                      backend_libs__builtin_ops__V_57_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_57_57, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_57_57, 1) = ((MR_Box) (backend_libs__builtin_ops__CompareOp_299));
                                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_57_57, 2) = ((MR_Box) (backend_libs__builtin_ops__V_58_58));
                                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_57_57, 3) = ((MR_Box) (backend_libs__builtin_ops__V_59_59));
                                                    }
                                                    {
                                                      backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                                      MR_hl_field(MR_mktag(2), backend_libs__builtin_ops__CodePrime_13, 0) = ((MR_Box) (backend_libs__builtin_ops__V_57_57));
                                                    }
                                                    backend_libs__builtin_ops__succeeded = MR_TRUE;
                                                  }
                                              }
                                            }
                                            break;
                                          case (MR_Integer) 15:
                                            {
                                              /* case ">" */
                                              {
                                                MR_Word backend_libs__builtin_ops__V_320_320;
                                                MR_Word backend_libs__builtin_ops__V_321_321;
                                                MR_Word backend_libs__builtin_ops__V_322_322;
                                                MR_Word backend_libs__builtin_ops__CompareOp_325;

                                                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_536_536 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  {
                                                    backend_libs__builtin_ops__CompareOp_325 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 35));
                                                    {
                                                      backend_libs__builtin_ops__V_321_321 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_321_321, 0) = backend_libs__builtin_ops__V_527_527;
                                                    }
                                                    {
                                                      backend_libs__builtin_ops__V_322_322 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_322_322, 0) = backend_libs__builtin_ops__V_537_537;
                                                    }
                                                    {
                                                      backend_libs__builtin_ops__V_320_320 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_320_320, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_320_320, 1) = ((MR_Box) (backend_libs__builtin_ops__CompareOp_325));
                                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_320_320, 2) = ((MR_Box) (backend_libs__builtin_ops__V_321_321));
                                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_320_320, 3) = ((MR_Box) (backend_libs__builtin_ops__V_322_322));
                                                    }
                                                    {
                                                      backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                                      MR_hl_field(MR_mktag(2), backend_libs__builtin_ops__CodePrime_13, 0) = ((MR_Box) (backend_libs__builtin_ops__V_320_320));
                                                    }
                                                    backend_libs__builtin_ops__succeeded = MR_TRUE;
                                                  }
                                              }
                                            }
                                            break;
                                        }
                                        /* jump out of search loop */
                                        goto label_1;
                                      }
                                    backend_libs__builtin_ops__succeeded = MR_FALSE;
                                  label_1:;
                                  }
                              }
                          }
                        }
                        break;
                      case (MR_Integer) 2:
                        {
                          /* case "int" */
                          {
                            MR_Word backend_libs__builtin_ops__V_538_538;
                            MR_Box backend_libs__builtin_ops__V_539_539;

                            backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_526_526)) == (MR_mktag((MR_Integer) 1)));
                            if (backend_libs__builtin_ops__succeeded)
                              {
                                backend_libs__builtin_ops__V_539_539 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_526_526, (MR_Integer) 0));
                                backend_libs__builtin_ops__V_538_538 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_526_526, (MR_Integer) 1)));
                                {
                                  MR_Integer backend_libs__builtin_ops__case_num_6 = (MR_Integer) -1;

                                  switch (MR_nth_code_unit(backend_libs__builtin_ops__PredName_7, 0)) {
                                    case (MR_Integer) 42:
                                      if (MR_offset_streq(1, backend_libs__builtin_ops__PredName_7, (MR_String) "*"))
                                        backend_libs__builtin_ops__case_num_6 = (MR_Integer) 0;
                                      break;
                                    case (MR_Integer) 43:
                                      if (MR_offset_streq(1, backend_libs__builtin_ops__PredName_7, (MR_String) "+"))
                                        backend_libs__builtin_ops__case_num_6 = (MR_Integer) 1;
                                      break;
                                    case (MR_Integer) 45:
                                      if (MR_offset_streq(1, backend_libs__builtin_ops__PredName_7, (MR_String) "-"))
                                        backend_libs__builtin_ops__case_num_6 = (MR_Integer) 2;
                                      break;
                                    case (MR_Integer) 47:
                                      if (MR_offset_streq(1, backend_libs__builtin_ops__PredName_7, (MR_String) "/\\"))
                                        backend_libs__builtin_ops__case_num_6 = (MR_Integer) 3;
                                      break;
                                    case (MR_Integer) 60:
                                      if (MR_offset_streq(1, backend_libs__builtin_ops__PredName_7, (MR_String) "<"))
                                        backend_libs__builtin_ops__case_num_6 = (MR_Integer) 4;
                                      break;
                                    case (MR_Integer) 61:
                                      if (MR_offset_streq(1, backend_libs__builtin_ops__PredName_7, (MR_String) "=<"))
                                        backend_libs__builtin_ops__case_num_6 = (MR_Integer) 5;
                                      break;
                                    case (MR_Integer) 62:
                                      switch (MR_nth_code_unit(backend_libs__builtin_ops__PredName_7, 1)) {
                                        case (MR_Integer) 0:
                                          backend_libs__builtin_ops__case_num_6 = (MR_Integer) 6;
                                          break;
                                        case (MR_Integer) 61:
                                          if (MR_offset_streq(2, backend_libs__builtin_ops__PredName_7, (MR_String) ">="))
                                            backend_libs__builtin_ops__case_num_6 = (MR_Integer) 7;
                                          break;
                                      }
                                      break;
                                    case (MR_Integer) 92:
                                      switch (MR_nth_code_unit(backend_libs__builtin_ops__PredName_7, 1)) {
                                        case (MR_Integer) 0:
                                          backend_libs__builtin_ops__case_num_6 = (MR_Integer) 8;
                                          break;
                                        case (MR_Integer) 47:
                                          if (MR_offset_streq(2, backend_libs__builtin_ops__PredName_7, (MR_String) "\\/"))
                                            backend_libs__builtin_ops__case_num_6 = (MR_Integer) 9;
                                          break;
                                      }
                                      break;
                                    case (MR_Integer) 109:
                                      if (MR_offset_streq(1, backend_libs__builtin_ops__PredName_7, (MR_String) "minus"))
                                        backend_libs__builtin_ops__case_num_6 = (MR_Integer) 10;
                                      break;
                                    case (MR_Integer) 112:
                                      if (MR_offset_streq(1, backend_libs__builtin_ops__PredName_7, (MR_String) "plus"))
                                        backend_libs__builtin_ops__case_num_6 = (MR_Integer) 11;
                                      break;
                                    case (MR_Integer) 116:
                                      if (MR_offset_streq(1, backend_libs__builtin_ops__PredName_7, (MR_String) "times"))
                                        backend_libs__builtin_ops__case_num_6 = (MR_Integer) 12;
                                      break;
                                    case (MR_Integer) 117:
                                      if (((((((((((((((((((MR_nth_code_unit(backend_libs__builtin_ops__PredName_7, 1)) == (MR_Integer) 110)) && (((MR_nth_code_unit(backend_libs__builtin_ops__PredName_7, 2)) == (MR_Integer) 99)))) && (((MR_nth_code_unit(backend_libs__builtin_ops__PredName_7, 3)) == (MR_Integer) 104)))) && (((MR_nth_code_unit(backend_libs__builtin_ops__PredName_7, 4)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(backend_libs__builtin_ops__PredName_7, 5)) == (MR_Integer) 99)))) && (((MR_nth_code_unit(backend_libs__builtin_ops__PredName_7, 6)) == (MR_Integer) 107)))) && (((MR_nth_code_unit(backend_libs__builtin_ops__PredName_7, 7)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(backend_libs__builtin_ops__PredName_7, 8)) == (MR_Integer) 100)))) && (((MR_nth_code_unit(backend_libs__builtin_ops__PredName_7, 9)) == (MR_Integer) 95))))
                                        switch (MR_nth_code_unit(backend_libs__builtin_ops__PredName_7, 10)) {
                                          case (MR_Integer) 108:
                                            if (MR_offset_streq(11, backend_libs__builtin_ops__PredName_7, (MR_String) "unchecked_left_shift"))
                                              backend_libs__builtin_ops__case_num_6 = (MR_Integer) 13;
                                            break;
                                          case (MR_Integer) 113:
                                            if (MR_offset_streq(11, backend_libs__builtin_ops__PredName_7, (MR_String) "unchecked_quotient"))
                                              backend_libs__builtin_ops__case_num_6 = (MR_Integer) 14;
                                            break;
                                          case (MR_Integer) 114:
                                            switch (MR_nth_code_unit(backend_libs__builtin_ops__PredName_7, 11)) {
                                              case (MR_Integer) 101:
                                                if (MR_offset_streq(12, backend_libs__builtin_ops__PredName_7, (MR_String) "unchecked_rem"))
                                                  backend_libs__builtin_ops__case_num_6 = (MR_Integer) 15;
                                                break;
                                              case (MR_Integer) 105:
                                                if (MR_offset_streq(12, backend_libs__builtin_ops__PredName_7, (MR_String) "unchecked_right_shift"))
                                                  backend_libs__builtin_ops__case_num_6 = (MR_Integer) 16;
                                                break;
                                            }
                                            break;
                                        }
                                      break;
                                    case (MR_Integer) 120:
                                      if (MR_offset_streq(1, backend_libs__builtin_ops__PredName_7, (MR_String) "xor"))
                                        backend_libs__builtin_ops__case_num_6 = (MR_Integer) 17;
                                      break;
                                  }
                                  switch (backend_libs__builtin_ops__case_num_6) {
                                    default:
                                      backend_libs__builtin_ops__succeeded = MR_FALSE;
                                      break;
                                    case (MR_Integer) 0:
                                      {
                                        /* case "*" */
                                        {
                                          MR_Word backend_libs__builtin_ops__ArithOp_54;
                                          MR_Word backend_libs__builtin_ops__V_102_102;
                                          MR_Word backend_libs__builtin_ops__V_103_103;
                                          MR_Word backend_libs__builtin_ops__V_104_104;
                                          MR_Word backend_libs__builtin_ops__V_105_105;
                                          MR_Box backend_libs__builtin_ops__Z_257;

                                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_12 == (MR_Integer) 0);
                                          if (backend_libs__builtin_ops__succeeded)
                                            {
                                              backend_libs__builtin_ops__ArithOp_54 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
                                              backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_538_538)) == (MR_mktag((MR_Integer) 1)));
                                              if (backend_libs__builtin_ops__succeeded)
                                                {
                                                  backend_libs__builtin_ops__Z_257 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_538_538, (MR_Integer) 0));
                                                  backend_libs__builtin_ops__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_538_538, (MR_Integer) 1)));
                                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_102_102 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                  if (backend_libs__builtin_ops__succeeded)
                                                    {
                                                      {
                                                        backend_libs__builtin_ops__V_104_104 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_104_104, 0) = backend_libs__builtin_ops__V_527_527;
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__V_105_105 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_105_105, 0) = backend_libs__builtin_ops__V_539_539;
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__V_103_103 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_103_103, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_103_103, 1) = ((MR_Box) (backend_libs__builtin_ops__ArithOp_54));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_103_103, 2) = ((MR_Box) (backend_libs__builtin_ops__V_104_104));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_103_103, 3) = ((MR_Box) (backend_libs__builtin_ops__V_105_105));
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Z_257;
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_103_103));
                                                      }
                                                      backend_libs__builtin_ops__succeeded = MR_TRUE;
                                                    }
                                                }
                                            }
                                        }
                                      }
                                      break;
                                    case (MR_Integer) 1:
                                      {
                                        /* case "+" */
                                        switch (backend_libs__builtin_ops__ProcNum_12) {
                                          default:
                                            backend_libs__builtin_ops__succeeded = MR_FALSE;
                                            break;
                                          case (MR_Integer) 0:
                                            if ((backend_libs__builtin_ops__V_538_538 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                                              {
                                                MR_Word backend_libs__builtin_ops__V_145_145;

                                                {
                                                  backend_libs__builtin_ops__V_145_145 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                  MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_145_145, 0) = backend_libs__builtin_ops__V_527_527;
                                                }
                                                {
                                                  backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                  MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__V_539_539;
                                                  MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_145_145));
                                                }
                                                backend_libs__builtin_ops__succeeded = MR_TRUE;
                                              }
                                            else
                                              {
                                                MR_Word backend_libs__builtin_ops__V_148_148 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_538_538, (MR_Integer) 1)));
                                                MR_Word backend_libs__builtin_ops__V_157_157;
                                                MR_Word backend_libs__builtin_ops__V_158_158;
                                                MR_Word backend_libs__builtin_ops__V_159_159;
                                                MR_Word backend_libs__builtin_ops__V_160_160;
                                                MR_Box backend_libs__builtin_ops__Z_232 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_538_538, (MR_Integer) 0));

                                                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_148_148 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  {
                                                    backend_libs__builtin_ops__V_158_158 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                                                    {
                                                      backend_libs__builtin_ops__V_159_159 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_159_159, 0) = backend_libs__builtin_ops__V_527_527;
                                                    }
                                                    {
                                                      backend_libs__builtin_ops__V_160_160 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_160_160, 0) = backend_libs__builtin_ops__V_539_539;
                                                    }
                                                    {
                                                      backend_libs__builtin_ops__V_157_157 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_157_157, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_157_157, 1) = ((MR_Box) (backend_libs__builtin_ops__V_158_158));
                                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_157_157, 2) = ((MR_Box) (backend_libs__builtin_ops__V_159_159));
                                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_157_157, 3) = ((MR_Box) (backend_libs__builtin_ops__V_160_160));
                                                    }
                                                    {
                                                      backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Z_232;
                                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_157_157));
                                                    }
                                                    backend_libs__builtin_ops__succeeded = MR_TRUE;
                                                  }
                                              }
                                            break;
                                          case (MR_Integer) 1:
                                            {
                                              MR_Word backend_libs__builtin_ops__V_153_153;
                                              MR_Word backend_libs__builtin_ops__V_154_154;
                                              MR_Word backend_libs__builtin_ops__V_155_155;
                                              MR_Word backend_libs__builtin_ops__V_156_156;
                                              MR_Word backend_libs__builtin_ops__V_346_346;
                                              MR_Box backend_libs__builtin_ops__Z_349;

                                              backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_538_538)) == (MR_mktag((MR_Integer) 1)));
                                              if (backend_libs__builtin_ops__succeeded)
                                                {
                                                  backend_libs__builtin_ops__Z_349 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_538_538, (MR_Integer) 0));
                                                  backend_libs__builtin_ops__V_346_346 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_538_538, (MR_Integer) 1)));
                                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_346_346 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                  if (backend_libs__builtin_ops__succeeded)
                                                    {
                                                      backend_libs__builtin_ops__V_154_154 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
                                                      {
                                                        backend_libs__builtin_ops__V_155_155 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_155_155, 0) = backend_libs__builtin_ops__Z_349;
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__V_156_156 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_156_156, 0) = backend_libs__builtin_ops__V_539_539;
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__V_153_153 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_153_153, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_153_153, 1) = ((MR_Box) (backend_libs__builtin_ops__V_154_154));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_153_153, 2) = ((MR_Box) (backend_libs__builtin_ops__V_155_155));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_153_153, 3) = ((MR_Box) (backend_libs__builtin_ops__V_156_156));
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__V_527_527;
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_153_153));
                                                      }
                                                      backend_libs__builtin_ops__succeeded = MR_TRUE;
                                                    }
                                                }
                                            }
                                            break;
                                          case (MR_Integer) 2:
                                            {
                                              MR_Word backend_libs__builtin_ops__V_149_149;
                                              MR_Word backend_libs__builtin_ops__V_150_150;
                                              MR_Word backend_libs__builtin_ops__V_151_151;
                                              MR_Word backend_libs__builtin_ops__V_152_152;
                                              MR_Word backend_libs__builtin_ops__V_352_352;
                                              MR_Box backend_libs__builtin_ops__Z_355;

                                              backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_538_538)) == (MR_mktag((MR_Integer) 1)));
                                              if (backend_libs__builtin_ops__succeeded)
                                                {
                                                  backend_libs__builtin_ops__Z_355 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_538_538, (MR_Integer) 0));
                                                  backend_libs__builtin_ops__V_352_352 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_538_538, (MR_Integer) 1)));
                                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_352_352 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                  if (backend_libs__builtin_ops__succeeded)
                                                    {
                                                      backend_libs__builtin_ops__V_150_150 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
                                                      {
                                                        backend_libs__builtin_ops__V_151_151 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_151_151, 0) = backend_libs__builtin_ops__Z_355;
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__V_152_152 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_152_152, 0) = backend_libs__builtin_ops__V_527_527;
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__V_149_149 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_149_149, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_149_149, 1) = ((MR_Box) (backend_libs__builtin_ops__V_150_150));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_149_149, 2) = ((MR_Box) (backend_libs__builtin_ops__V_151_151));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_149_149, 3) = ((MR_Box) (backend_libs__builtin_ops__V_152_152));
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__V_539_539;
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_149_149));
                                                      }
                                                      backend_libs__builtin_ops__succeeded = MR_TRUE;
                                                    }
                                                }
                                            }
                                            break;
                                        }
                                      }
                                      break;
                                    case (MR_Integer) 2:
                                      {
                                        /* case "-" */
                                        switch (backend_libs__builtin_ops__ProcNum_12) {
                                          default:
                                            backend_libs__builtin_ops__succeeded = MR_FALSE;
                                            break;
                                          case (MR_Integer) 0:
                                            if ((backend_libs__builtin_ops__V_538_538 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                                              {
                                                MR_Word backend_libs__builtin_ops__V_123_123;
                                                MR_Word backend_libs__builtin_ops__V_127_127;

                                                {
                                                  backend_libs__builtin_ops__V_127_127 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                  MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_127_127, 0) = backend_libs__builtin_ops__V_527_527;
                                                }
                                                {
                                                  backend_libs__builtin_ops__V_123_123 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                  MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_123_123, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                                                  MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_123_123, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
                                                  MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_123_123, 2) = ((MR_Box) (MR_mkword(MR_mktag(1), &backend_libs__builtin_ops_scalar_common_4[1])));
                                                  MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_123_123, 3) = ((MR_Box) (backend_libs__builtin_ops__V_127_127));
                                                }
                                                {
                                                  backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                  MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__V_539_539;
                                                  MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_123_123));
                                                }
                                                backend_libs__builtin_ops__succeeded = MR_TRUE;
                                              }
                                            else
                                              {
                                                MR_Word backend_libs__builtin_ops__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_538_538, (MR_Integer) 1)));
                                                MR_Word backend_libs__builtin_ops__V_139_139;
                                                MR_Word backend_libs__builtin_ops__V_140_140;
                                                MR_Word backend_libs__builtin_ops__V_141_141;
                                                MR_Word backend_libs__builtin_ops__V_142_142;
                                                MR_Box backend_libs__builtin_ops__Z_243 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_538_538, (MR_Integer) 0));

                                                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_130_130 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  {
                                                    backend_libs__builtin_ops__V_140_140 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
                                                    {
                                                      backend_libs__builtin_ops__V_141_141 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_141_141, 0) = backend_libs__builtin_ops__V_527_527;
                                                    }
                                                    {
                                                      backend_libs__builtin_ops__V_142_142 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_142_142, 0) = backend_libs__builtin_ops__V_539_539;
                                                    }
                                                    {
                                                      backend_libs__builtin_ops__V_139_139 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_139_139, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_139_139, 1) = ((MR_Box) (backend_libs__builtin_ops__V_140_140));
                                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_139_139, 2) = ((MR_Box) (backend_libs__builtin_ops__V_141_141));
                                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_139_139, 3) = ((MR_Box) (backend_libs__builtin_ops__V_142_142));
                                                    }
                                                    {
                                                      backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Z_243;
                                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_139_139));
                                                    }
                                                    backend_libs__builtin_ops__succeeded = MR_TRUE;
                                                  }
                                              }
                                            break;
                                          case (MR_Integer) 1:
                                            {
                                              MR_Word backend_libs__builtin_ops__V_135_135;
                                              MR_Word backend_libs__builtin_ops__V_136_136;
                                              MR_Word backend_libs__builtin_ops__V_137_137;
                                              MR_Word backend_libs__builtin_ops__V_138_138;
                                              MR_Word backend_libs__builtin_ops__V_358_358;
                                              MR_Box backend_libs__builtin_ops__Z_361;

                                              backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_538_538)) == (MR_mktag((MR_Integer) 1)));
                                              if (backend_libs__builtin_ops__succeeded)
                                                {
                                                  backend_libs__builtin_ops__Z_361 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_538_538, (MR_Integer) 0));
                                                  backend_libs__builtin_ops__V_358_358 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_538_538, (MR_Integer) 1)));
                                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_358_358 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                  if (backend_libs__builtin_ops__succeeded)
                                                    {
                                                      backend_libs__builtin_ops__V_136_136 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                                                      {
                                                        backend_libs__builtin_ops__V_137_137 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_137_137, 0) = backend_libs__builtin_ops__V_539_539;
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__V_138_138 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_138_138, 0) = backend_libs__builtin_ops__Z_361;
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__V_135_135 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_135_135, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_135_135, 1) = ((MR_Box) (backend_libs__builtin_ops__V_136_136));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_135_135, 2) = ((MR_Box) (backend_libs__builtin_ops__V_137_137));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_135_135, 3) = ((MR_Box) (backend_libs__builtin_ops__V_138_138));
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__V_527_527;
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_135_135));
                                                      }
                                                      backend_libs__builtin_ops__succeeded = MR_TRUE;
                                                    }
                                                }
                                            }
                                            break;
                                          case (MR_Integer) 2:
                                            {
                                              MR_Word backend_libs__builtin_ops__V_131_131;
                                              MR_Word backend_libs__builtin_ops__V_132_132;
                                              MR_Word backend_libs__builtin_ops__V_133_133;
                                              MR_Word backend_libs__builtin_ops__V_134_134;
                                              MR_Word backend_libs__builtin_ops__V_364_364;
                                              MR_Box backend_libs__builtin_ops__Z_367;

                                              backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_538_538)) == (MR_mktag((MR_Integer) 1)));
                                              if (backend_libs__builtin_ops__succeeded)
                                                {
                                                  backend_libs__builtin_ops__Z_367 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_538_538, (MR_Integer) 0));
                                                  backend_libs__builtin_ops__V_364_364 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_538_538, (MR_Integer) 1)));
                                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_364_364 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                  if (backend_libs__builtin_ops__succeeded)
                                                    {
                                                      backend_libs__builtin_ops__V_132_132 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
                                                      {
                                                        backend_libs__builtin_ops__V_133_133 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_133_133, 0) = backend_libs__builtin_ops__V_527_527;
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__V_134_134 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_134_134, 0) = backend_libs__builtin_ops__Z_367;
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__V_131_131 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_131_131, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_131_131, 1) = ((MR_Box) (backend_libs__builtin_ops__V_132_132));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_131_131, 2) = ((MR_Box) (backend_libs__builtin_ops__V_133_133));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_131_131, 3) = ((MR_Box) (backend_libs__builtin_ops__V_134_134));
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__V_539_539;
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_131_131));
                                                      }
                                                      backend_libs__builtin_ops__succeeded = MR_TRUE;
                                                    }
                                                }
                                            }
                                            break;
                                        }
                                      }
                                      break;
                                    case (MR_Integer) 3:
                                      {
                                        /* case "/\" */
                                        {
                                          MR_Word backend_libs__builtin_ops__ArithOp_368;
                                          MR_Word backend_libs__builtin_ops__V_371_371;
                                          MR_Word backend_libs__builtin_ops__V_372_372;
                                          MR_Word backend_libs__builtin_ops__V_373_373;
                                          MR_Word backend_libs__builtin_ops__V_374_374;
                                          MR_Box backend_libs__builtin_ops__Z_377;

                                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_12 == (MR_Integer) 0);
                                          if (backend_libs__builtin_ops__succeeded)
                                            {
                                              backend_libs__builtin_ops__ArithOp_368 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7));
                                              backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_538_538)) == (MR_mktag((MR_Integer) 1)));
                                              if (backend_libs__builtin_ops__succeeded)
                                                {
                                                  backend_libs__builtin_ops__Z_377 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_538_538, (MR_Integer) 0));
                                                  backend_libs__builtin_ops__V_371_371 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_538_538, (MR_Integer) 1)));
                                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_371_371 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                  if (backend_libs__builtin_ops__succeeded)
                                                    {
                                                      {
                                                        backend_libs__builtin_ops__V_373_373 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_373_373, 0) = backend_libs__builtin_ops__V_527_527;
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__V_374_374 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_374_374, 0) = backend_libs__builtin_ops__V_539_539;
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__V_372_372 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_372_372, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_372_372, 1) = ((MR_Box) (backend_libs__builtin_ops__ArithOp_368));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_372_372, 2) = ((MR_Box) (backend_libs__builtin_ops__V_373_373));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_372_372, 3) = ((MR_Box) (backend_libs__builtin_ops__V_374_374));
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Z_377;
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_372_372));
                                                      }
                                                      backend_libs__builtin_ops__succeeded = MR_TRUE;
                                                    }
                                                }
                                            }
                                        }
                                      }
                                      break;
                                    case (MR_Integer) 4:
                                      {
                                        /* case "<" */
                                        {
                                          MR_Word backend_libs__builtin_ops__V_92_92;
                                          MR_Word backend_libs__builtin_ops__V_93_93;
                                          MR_Word backend_libs__builtin_ops__V_94_94;
                                          MR_Word backend_libs__builtin_ops__CompareOp_262;

                                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_12 == (MR_Integer) 0);
                                          if (backend_libs__builtin_ops__succeeded)
                                            {
                                              backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_538_538 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                              if (backend_libs__builtin_ops__succeeded)
                                                {
                                                  backend_libs__builtin_ops__CompareOp_262 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 23));
                                                  {
                                                    backend_libs__builtin_ops__V_93_93 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                    MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_93_93, 0) = backend_libs__builtin_ops__V_527_527;
                                                  }
                                                  {
                                                    backend_libs__builtin_ops__V_94_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                    MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_94_94, 0) = backend_libs__builtin_ops__V_539_539;
                                                  }
                                                  {
                                                    backend_libs__builtin_ops__V_92_92 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_92_92, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_92_92, 1) = ((MR_Box) (backend_libs__builtin_ops__CompareOp_262));
                                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_92_92, 2) = ((MR_Box) (backend_libs__builtin_ops__V_93_93));
                                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_92_92, 3) = ((MR_Box) (backend_libs__builtin_ops__V_94_94));
                                                  }
                                                  {
                                                    backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                                    MR_hl_field(MR_mktag(2), backend_libs__builtin_ops__CodePrime_13, 0) = ((MR_Box) (backend_libs__builtin_ops__V_92_92));
                                                  }
                                                  backend_libs__builtin_ops__succeeded = MR_TRUE;
                                                }
                                            }
                                        }
                                      }
                                      break;
                                    case (MR_Integer) 5:
                                      {
                                        /* case "=<" */
                                        {
                                          MR_Word backend_libs__builtin_ops__V_380_380;
                                          MR_Word backend_libs__builtin_ops__V_381_381;
                                          MR_Word backend_libs__builtin_ops__V_382_382;
                                          MR_Word backend_libs__builtin_ops__CompareOp_385;

                                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_12 == (MR_Integer) 0);
                                          if (backend_libs__builtin_ops__succeeded)
                                            {
                                              backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_538_538 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                              if (backend_libs__builtin_ops__succeeded)
                                                {
                                                  backend_libs__builtin_ops__CompareOp_385 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 25));
                                                  {
                                                    backend_libs__builtin_ops__V_381_381 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                    MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_381_381, 0) = backend_libs__builtin_ops__V_527_527;
                                                  }
                                                  {
                                                    backend_libs__builtin_ops__V_382_382 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                    MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_382_382, 0) = backend_libs__builtin_ops__V_539_539;
                                                  }
                                                  {
                                                    backend_libs__builtin_ops__V_380_380 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_380_380, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_380_380, 1) = ((MR_Box) (backend_libs__builtin_ops__CompareOp_385));
                                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_380_380, 2) = ((MR_Box) (backend_libs__builtin_ops__V_381_381));
                                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_380_380, 3) = ((MR_Box) (backend_libs__builtin_ops__V_382_382));
                                                  }
                                                  {
                                                    backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                                    MR_hl_field(MR_mktag(2), backend_libs__builtin_ops__CodePrime_13, 0) = ((MR_Box) (backend_libs__builtin_ops__V_380_380));
                                                  }
                                                  backend_libs__builtin_ops__succeeded = MR_TRUE;
                                                }
                                            }
                                        }
                                      }
                                      break;
                                    case (MR_Integer) 6:
                                      {
                                        /* case ">" */
                                        {
                                          MR_Word backend_libs__builtin_ops__V_388_388;
                                          MR_Word backend_libs__builtin_ops__V_389_389;
                                          MR_Word backend_libs__builtin_ops__V_390_390;
                                          MR_Word backend_libs__builtin_ops__CompareOp_393;

                                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_12 == (MR_Integer) 0);
                                          if (backend_libs__builtin_ops__succeeded)
                                            {
                                              backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_538_538 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                              if (backend_libs__builtin_ops__succeeded)
                                                {
                                                  backend_libs__builtin_ops__CompareOp_393 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 24));
                                                  {
                                                    backend_libs__builtin_ops__V_389_389 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                    MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_389_389, 0) = backend_libs__builtin_ops__V_527_527;
                                                  }
                                                  {
                                                    backend_libs__builtin_ops__V_390_390 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                    MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_390_390, 0) = backend_libs__builtin_ops__V_539_539;
                                                  }
                                                  {
                                                    backend_libs__builtin_ops__V_388_388 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_388_388, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_388_388, 1) = ((MR_Box) (backend_libs__builtin_ops__CompareOp_393));
                                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_388_388, 2) = ((MR_Box) (backend_libs__builtin_ops__V_389_389));
                                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_388_388, 3) = ((MR_Box) (backend_libs__builtin_ops__V_390_390));
                                                  }
                                                  {
                                                    backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                                    MR_hl_field(MR_mktag(2), backend_libs__builtin_ops__CodePrime_13, 0) = ((MR_Box) (backend_libs__builtin_ops__V_388_388));
                                                  }
                                                  backend_libs__builtin_ops__succeeded = MR_TRUE;
                                                }
                                            }
                                        }
                                      }
                                      break;
                                    case (MR_Integer) 7:
                                      {
                                        /* case ">=" */
                                        {
                                          MR_Word backend_libs__builtin_ops__V_396_396;
                                          MR_Word backend_libs__builtin_ops__V_397_397;
                                          MR_Word backend_libs__builtin_ops__V_398_398;
                                          MR_Word backend_libs__builtin_ops__CompareOp_401;

                                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_12 == (MR_Integer) 0);
                                          if (backend_libs__builtin_ops__succeeded)
                                            {
                                              backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_538_538 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                              if (backend_libs__builtin_ops__succeeded)
                                                {
                                                  backend_libs__builtin_ops__CompareOp_401 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 26));
                                                  {
                                                    backend_libs__builtin_ops__V_397_397 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                    MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_397_397, 0) = backend_libs__builtin_ops__V_527_527;
                                                  }
                                                  {
                                                    backend_libs__builtin_ops__V_398_398 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                    MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_398_398, 0) = backend_libs__builtin_ops__V_539_539;
                                                  }
                                                  {
                                                    backend_libs__builtin_ops__V_396_396 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_396_396, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_396_396, 1) = ((MR_Box) (backend_libs__builtin_ops__CompareOp_401));
                                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_396_396, 2) = ((MR_Box) (backend_libs__builtin_ops__V_397_397));
                                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_396_396, 3) = ((MR_Box) (backend_libs__builtin_ops__V_398_398));
                                                  }
                                                  {
                                                    backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                                    MR_hl_field(MR_mktag(2), backend_libs__builtin_ops__CodePrime_13, 0) = ((MR_Box) (backend_libs__builtin_ops__V_396_396));
                                                  }
                                                  backend_libs__builtin_ops__succeeded = MR_TRUE;
                                                }
                                            }
                                        }
                                      }
                                      break;
                                    case (MR_Integer) 8:
                                      {
                                        /* case "\" */
                                        {
                                          MR_Word backend_libs__builtin_ops__V_97_97;
                                          MR_Word backend_libs__builtin_ops__V_98_98;
                                          MR_Word backend_libs__builtin_ops__V_99_99;

                                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_12 == (MR_Integer) 0);
                                          if (backend_libs__builtin_ops__succeeded)
                                            {
                                              backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_538_538 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                              if (backend_libs__builtin_ops__succeeded)
                                                {
                                                  backend_libs__builtin_ops__V_98_98 = (MR_Integer) 6;
                                                  {
                                                    backend_libs__builtin_ops__V_99_99 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                    MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_99_99, 0) = backend_libs__builtin_ops__V_527_527;
                                                  }
                                                  {
                                                    backend_libs__builtin_ops__V_97_97 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_97_97, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_97_97, 1) = ((MR_Box) (backend_libs__builtin_ops__V_98_98));
                                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_97_97, 2) = ((MR_Box) (backend_libs__builtin_ops__V_99_99));
                                                  }
                                                  {
                                                    backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                    MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__V_539_539;
                                                    MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_97_97));
                                                  }
                                                  backend_libs__builtin_ops__succeeded = MR_TRUE;
                                                }
                                            }
                                        }
                                      }
                                      break;
                                    case (MR_Integer) 9:
                                      {
                                        /* case "\/" */
                                        {
                                          MR_Word backend_libs__builtin_ops__ArithOp_402;
                                          MR_Word backend_libs__builtin_ops__V_405_405;
                                          MR_Word backend_libs__builtin_ops__V_406_406;
                                          MR_Word backend_libs__builtin_ops__V_407_407;
                                          MR_Word backend_libs__builtin_ops__V_408_408;
                                          MR_Box backend_libs__builtin_ops__Z_411;

                                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_12 == (MR_Integer) 0);
                                          if (backend_libs__builtin_ops__succeeded)
                                            {
                                              backend_libs__builtin_ops__ArithOp_402 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8));
                                              backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_538_538)) == (MR_mktag((MR_Integer) 1)));
                                              if (backend_libs__builtin_ops__succeeded)
                                                {
                                                  backend_libs__builtin_ops__Z_411 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_538_538, (MR_Integer) 0));
                                                  backend_libs__builtin_ops__V_405_405 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_538_538, (MR_Integer) 1)));
                                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_405_405 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                  if (backend_libs__builtin_ops__succeeded)
                                                    {
                                                      {
                                                        backend_libs__builtin_ops__V_407_407 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_407_407, 0) = backend_libs__builtin_ops__V_527_527;
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__V_408_408 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_408_408, 0) = backend_libs__builtin_ops__V_539_539;
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__V_406_406 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_406_406, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_406_406, 1) = ((MR_Box) (backend_libs__builtin_ops__ArithOp_402));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_406_406, 2) = ((MR_Box) (backend_libs__builtin_ops__V_407_407));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_406_406, 3) = ((MR_Box) (backend_libs__builtin_ops__V_408_408));
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Z_411;
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_406_406));
                                                      }
                                                      backend_libs__builtin_ops__succeeded = MR_TRUE;
                                                    }
                                                }
                                            }
                                        }
                                      }
                                      break;
                                    case (MR_Integer) 10:
                                      {
                                        /* case "minus" */
                                        {
                                          MR_Word backend_libs__builtin_ops__ArithOp_412;
                                          MR_Word backend_libs__builtin_ops__V_415_415;
                                          MR_Word backend_libs__builtin_ops__V_416_416;
                                          MR_Word backend_libs__builtin_ops__V_417_417;
                                          MR_Word backend_libs__builtin_ops__V_418_418;
                                          MR_Box backend_libs__builtin_ops__Z_421;

                                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_12 == (MR_Integer) 0);
                                          if (backend_libs__builtin_ops__succeeded)
                                            {
                                              backend_libs__builtin_ops__ArithOp_412 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
                                              backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_538_538)) == (MR_mktag((MR_Integer) 1)));
                                              if (backend_libs__builtin_ops__succeeded)
                                                {
                                                  backend_libs__builtin_ops__Z_421 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_538_538, (MR_Integer) 0));
                                                  backend_libs__builtin_ops__V_415_415 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_538_538, (MR_Integer) 1)));
                                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_415_415 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                  if (backend_libs__builtin_ops__succeeded)
                                                    {
                                                      {
                                                        backend_libs__builtin_ops__V_417_417 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_417_417, 0) = backend_libs__builtin_ops__V_527_527;
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__V_418_418 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_418_418, 0) = backend_libs__builtin_ops__V_539_539;
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__V_416_416 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_416_416, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_416_416, 1) = ((MR_Box) (backend_libs__builtin_ops__ArithOp_412));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_416_416, 2) = ((MR_Box) (backend_libs__builtin_ops__V_417_417));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_416_416, 3) = ((MR_Box) (backend_libs__builtin_ops__V_418_418));
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Z_421;
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_416_416));
                                                      }
                                                      backend_libs__builtin_ops__succeeded = MR_TRUE;
                                                    }
                                                }
                                            }
                                        }
                                      }
                                      break;
                                    case (MR_Integer) 11:
                                      {
                                        /* case "plus" */
                                        {
                                          MR_Word backend_libs__builtin_ops__ArithOp_422;
                                          MR_Word backend_libs__builtin_ops__V_425_425;
                                          MR_Word backend_libs__builtin_ops__V_426_426;
                                          MR_Word backend_libs__builtin_ops__V_427_427;
                                          MR_Word backend_libs__builtin_ops__V_428_428;
                                          MR_Box backend_libs__builtin_ops__Z_431;

                                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_12 == (MR_Integer) 0);
                                          if (backend_libs__builtin_ops__succeeded)
                                            {
                                              backend_libs__builtin_ops__ArithOp_422 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                                              backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_538_538)) == (MR_mktag((MR_Integer) 1)));
                                              if (backend_libs__builtin_ops__succeeded)
                                                {
                                                  backend_libs__builtin_ops__Z_431 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_538_538, (MR_Integer) 0));
                                                  backend_libs__builtin_ops__V_425_425 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_538_538, (MR_Integer) 1)));
                                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_425_425 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                  if (backend_libs__builtin_ops__succeeded)
                                                    {
                                                      {
                                                        backend_libs__builtin_ops__V_427_427 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_427_427, 0) = backend_libs__builtin_ops__V_527_527;
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__V_428_428 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_428_428, 0) = backend_libs__builtin_ops__V_539_539;
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__V_426_426 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_426_426, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_426_426, 1) = ((MR_Box) (backend_libs__builtin_ops__ArithOp_422));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_426_426, 2) = ((MR_Box) (backend_libs__builtin_ops__V_427_427));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_426_426, 3) = ((MR_Box) (backend_libs__builtin_ops__V_428_428));
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Z_431;
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_426_426));
                                                      }
                                                      backend_libs__builtin_ops__succeeded = MR_TRUE;
                                                    }
                                                }
                                            }
                                        }
                                      }
                                      break;
                                    case (MR_Integer) 12:
                                      {
                                        /* case "times" */
                                        {
                                          MR_Word backend_libs__builtin_ops__ArithOp_432;
                                          MR_Word backend_libs__builtin_ops__V_435_435;
                                          MR_Word backend_libs__builtin_ops__V_436_436;
                                          MR_Word backend_libs__builtin_ops__V_437_437;
                                          MR_Word backend_libs__builtin_ops__V_438_438;
                                          MR_Box backend_libs__builtin_ops__Z_441;

                                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_12 == (MR_Integer) 0);
                                          if (backend_libs__builtin_ops__succeeded)
                                            {
                                              backend_libs__builtin_ops__ArithOp_432 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
                                              backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_538_538)) == (MR_mktag((MR_Integer) 1)));
                                              if (backend_libs__builtin_ops__succeeded)
                                                {
                                                  backend_libs__builtin_ops__Z_441 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_538_538, (MR_Integer) 0));
                                                  backend_libs__builtin_ops__V_435_435 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_538_538, (MR_Integer) 1)));
                                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_435_435 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                  if (backend_libs__builtin_ops__succeeded)
                                                    {
                                                      {
                                                        backend_libs__builtin_ops__V_437_437 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_437_437, 0) = backend_libs__builtin_ops__V_527_527;
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__V_438_438 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_438_438, 0) = backend_libs__builtin_ops__V_539_539;
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__V_436_436 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_436_436, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_436_436, 1) = ((MR_Box) (backend_libs__builtin_ops__ArithOp_432));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_436_436, 2) = ((MR_Box) (backend_libs__builtin_ops__V_437_437));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_436_436, 3) = ((MR_Box) (backend_libs__builtin_ops__V_438_438));
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Z_441;
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_436_436));
                                                      }
                                                      backend_libs__builtin_ops__succeeded = MR_TRUE;
                                                    }
                                                }
                                            }
                                        }
                                      }
                                      break;
                                    case (MR_Integer) 13:
                                      {
                                        /* case "unchecked_left_shift" */
                                        {
                                          MR_Word backend_libs__builtin_ops__ArithOp_442;
                                          MR_Word backend_libs__builtin_ops__V_445_445;
                                          MR_Word backend_libs__builtin_ops__V_446_446;
                                          MR_Word backend_libs__builtin_ops__V_447_447;
                                          MR_Word backend_libs__builtin_ops__V_448_448;
                                          MR_Box backend_libs__builtin_ops__Z_451;

                                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_12 == (MR_Integer) 0);
                                          if (backend_libs__builtin_ops__succeeded)
                                            {
                                              backend_libs__builtin_ops__ArithOp_442 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
                                              backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_538_538)) == (MR_mktag((MR_Integer) 1)));
                                              if (backend_libs__builtin_ops__succeeded)
                                                {
                                                  backend_libs__builtin_ops__Z_451 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_538_538, (MR_Integer) 0));
                                                  backend_libs__builtin_ops__V_445_445 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_538_538, (MR_Integer) 1)));
                                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_445_445 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                  if (backend_libs__builtin_ops__succeeded)
                                                    {
                                                      {
                                                        backend_libs__builtin_ops__V_447_447 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_447_447, 0) = backend_libs__builtin_ops__V_527_527;
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__V_448_448 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_448_448, 0) = backend_libs__builtin_ops__V_539_539;
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__V_446_446 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_446_446, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_446_446, 1) = ((MR_Box) (backend_libs__builtin_ops__ArithOp_442));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_446_446, 2) = ((MR_Box) (backend_libs__builtin_ops__V_447_447));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_446_446, 3) = ((MR_Box) (backend_libs__builtin_ops__V_448_448));
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Z_451;
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_446_446));
                                                      }
                                                      backend_libs__builtin_ops__succeeded = MR_TRUE;
                                                    }
                                                }
                                            }
                                        }
                                      }
                                      break;
                                    case (MR_Integer) 14:
                                      {
                                        /* case "unchecked_quotient" */
                                        {
                                          MR_Word backend_libs__builtin_ops__ArithOp_452;
                                          MR_Word backend_libs__builtin_ops__V_455_455;
                                          MR_Word backend_libs__builtin_ops__V_456_456;
                                          MR_Word backend_libs__builtin_ops__V_457_457;
                                          MR_Word backend_libs__builtin_ops__V_458_458;
                                          MR_Box backend_libs__builtin_ops__Z_461;

                                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_12 == (MR_Integer) 0);
                                          if (backend_libs__builtin_ops__succeeded)
                                            {
                                              backend_libs__builtin_ops__ArithOp_452 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
                                              backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_538_538)) == (MR_mktag((MR_Integer) 1)));
                                              if (backend_libs__builtin_ops__succeeded)
                                                {
                                                  backend_libs__builtin_ops__Z_461 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_538_538, (MR_Integer) 0));
                                                  backend_libs__builtin_ops__V_455_455 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_538_538, (MR_Integer) 1)));
                                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_455_455 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                  if (backend_libs__builtin_ops__succeeded)
                                                    {
                                                      {
                                                        backend_libs__builtin_ops__V_457_457 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_457_457, 0) = backend_libs__builtin_ops__V_527_527;
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__V_458_458 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_458_458, 0) = backend_libs__builtin_ops__V_539_539;
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__V_456_456 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_456_456, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_456_456, 1) = ((MR_Box) (backend_libs__builtin_ops__ArithOp_452));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_456_456, 2) = ((MR_Box) (backend_libs__builtin_ops__V_457_457));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_456_456, 3) = ((MR_Box) (backend_libs__builtin_ops__V_458_458));
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Z_461;
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_456_456));
                                                      }
                                                      backend_libs__builtin_ops__succeeded = MR_TRUE;
                                                    }
                                                }
                                            }
                                        }
                                      }
                                      break;
                                    case (MR_Integer) 15:
                                      {
                                        /* case "unchecked_rem" */
                                        {
                                          MR_Word backend_libs__builtin_ops__ArithOp_462;
                                          MR_Word backend_libs__builtin_ops__V_465_465;
                                          MR_Word backend_libs__builtin_ops__V_466_466;
                                          MR_Word backend_libs__builtin_ops__V_467_467;
                                          MR_Word backend_libs__builtin_ops__V_468_468;
                                          MR_Box backend_libs__builtin_ops__Z_471;

                                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_12 == (MR_Integer) 0);
                                          if (backend_libs__builtin_ops__succeeded)
                                            {
                                              backend_libs__builtin_ops__ArithOp_462 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4));
                                              backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_538_538)) == (MR_mktag((MR_Integer) 1)));
                                              if (backend_libs__builtin_ops__succeeded)
                                                {
                                                  backend_libs__builtin_ops__Z_471 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_538_538, (MR_Integer) 0));
                                                  backend_libs__builtin_ops__V_465_465 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_538_538, (MR_Integer) 1)));
                                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_465_465 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                  if (backend_libs__builtin_ops__succeeded)
                                                    {
                                                      {
                                                        backend_libs__builtin_ops__V_467_467 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_467_467, 0) = backend_libs__builtin_ops__V_527_527;
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__V_468_468 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_468_468, 0) = backend_libs__builtin_ops__V_539_539;
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__V_466_466 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_466_466, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_466_466, 1) = ((MR_Box) (backend_libs__builtin_ops__ArithOp_462));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_466_466, 2) = ((MR_Box) (backend_libs__builtin_ops__V_467_467));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_466_466, 3) = ((MR_Box) (backend_libs__builtin_ops__V_468_468));
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Z_471;
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_466_466));
                                                      }
                                                      backend_libs__builtin_ops__succeeded = MR_TRUE;
                                                    }
                                                }
                                            }
                                        }
                                      }
                                      break;
                                    case (MR_Integer) 16:
                                      {
                                        /* case "unchecked_right_shift" */
                                        {
                                          MR_Word backend_libs__builtin_ops__ArithOp_472;
                                          MR_Word backend_libs__builtin_ops__V_475_475;
                                          MR_Word backend_libs__builtin_ops__V_476_476;
                                          MR_Word backend_libs__builtin_ops__V_477_477;
                                          MR_Word backend_libs__builtin_ops__V_478_478;
                                          MR_Box backend_libs__builtin_ops__Z_481;

                                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_12 == (MR_Integer) 0);
                                          if (backend_libs__builtin_ops__succeeded)
                                            {
                                              backend_libs__builtin_ops__ArithOp_472 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6));
                                              backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_538_538)) == (MR_mktag((MR_Integer) 1)));
                                              if (backend_libs__builtin_ops__succeeded)
                                                {
                                                  backend_libs__builtin_ops__Z_481 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_538_538, (MR_Integer) 0));
                                                  backend_libs__builtin_ops__V_475_475 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_538_538, (MR_Integer) 1)));
                                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_475_475 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                  if (backend_libs__builtin_ops__succeeded)
                                                    {
                                                      {
                                                        backend_libs__builtin_ops__V_477_477 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_477_477, 0) = backend_libs__builtin_ops__V_527_527;
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__V_478_478 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_478_478, 0) = backend_libs__builtin_ops__V_539_539;
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__V_476_476 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_476_476, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_476_476, 1) = ((MR_Box) (backend_libs__builtin_ops__ArithOp_472));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_476_476, 2) = ((MR_Box) (backend_libs__builtin_ops__V_477_477));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_476_476, 3) = ((MR_Box) (backend_libs__builtin_ops__V_478_478));
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Z_481;
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_476_476));
                                                      }
                                                      backend_libs__builtin_ops__succeeded = MR_TRUE;
                                                    }
                                                }
                                            }
                                        }
                                      }
                                      break;
                                    case (MR_Integer) 17:
                                      {
                                        /* case "xor" */
                                        {
                                          MR_Word backend_libs__builtin_ops__V_108_108;
                                          MR_Box backend_libs__builtin_ops__Z_254;

                                          backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_538_538)) == (MR_mktag((MR_Integer) 1)));
                                          if (backend_libs__builtin_ops__succeeded)
                                            {
                                              backend_libs__builtin_ops__Z_254 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_538_538, (MR_Integer) 0));
                                              backend_libs__builtin_ops__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_538_538, (MR_Integer) 1)));
                                              backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_108_108 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                              if (backend_libs__builtin_ops__succeeded)
                                                switch (backend_libs__builtin_ops__ProcNum_12) {
                                                  default:
                                                    backend_libs__builtin_ops__succeeded = MR_FALSE;
                                                    break;
                                                  case (MR_Integer) 0:
                                                    {
                                                      MR_Word backend_libs__builtin_ops__V_117_117;
                                                      MR_Word backend_libs__builtin_ops__V_119_119;
                                                      MR_Word backend_libs__builtin_ops__V_120_120;

                                                      {
                                                        backend_libs__builtin_ops__V_119_119 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_119_119, 0) = backend_libs__builtin_ops__V_527_527;
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__V_120_120 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_120_120, 0) = backend_libs__builtin_ops__V_539_539;
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__V_117_117 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_117_117, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_117_117, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9))));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_117_117, 2) = ((MR_Box) (backend_libs__builtin_ops__V_119_119));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_117_117, 3) = ((MR_Box) (backend_libs__builtin_ops__V_120_120));
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Z_254;
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_117_117));
                                                      }
                                                      backend_libs__builtin_ops__succeeded = MR_TRUE;
                                                    }
                                                    break;
                                                  case (MR_Integer) 1:
                                                    {
                                                      MR_Word backend_libs__builtin_ops__V_113_113;
                                                      MR_Word backend_libs__builtin_ops__V_115_115;
                                                      MR_Word backend_libs__builtin_ops__V_116_116;

                                                      {
                                                        backend_libs__builtin_ops__V_115_115 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_115_115, 0) = backend_libs__builtin_ops__V_527_527;
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__V_116_116 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_116_116, 0) = backend_libs__builtin_ops__Z_254;
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__V_113_113 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_113_113, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_113_113, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9))));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_113_113, 2) = ((MR_Box) (backend_libs__builtin_ops__V_115_115));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_113_113, 3) = ((MR_Box) (backend_libs__builtin_ops__V_116_116));
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__V_539_539;
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_113_113));
                                                      }
                                                      backend_libs__builtin_ops__succeeded = MR_TRUE;
                                                    }
                                                    break;
                                                  case (MR_Integer) 2:
                                                    {
                                                      MR_Word backend_libs__builtin_ops__V_109_109;
                                                      MR_Word backend_libs__builtin_ops__V_111_111;
                                                      MR_Word backend_libs__builtin_ops__V_112_112;

                                                      {
                                                        backend_libs__builtin_ops__V_111_111 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_111_111, 0) = backend_libs__builtin_ops__V_539_539;
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__V_112_112 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_112_112, 0) = backend_libs__builtin_ops__Z_254;
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__V_109_109 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_109_109, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_109_109, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9))));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_109_109, 2) = ((MR_Box) (backend_libs__builtin_ops__V_111_111));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_109_109, 3) = ((MR_Box) (backend_libs__builtin_ops__V_112_112));
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__V_527_527;
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_109_109));
                                                      }
                                                      backend_libs__builtin_ops__succeeded = MR_TRUE;
                                                    }
                                                    break;
                                                }
                                            }
                                        }
                                      }
                                      break;
                                  }
                                }
                              }
                          }
                        }
                        break;
                      case (MR_Integer) 3:
                        {
                          /* case "io" */
                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_12 == (MR_Integer) 0);
                          if (backend_libs__builtin_ops__succeeded)
                            {
                              backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_526_526 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              if (backend_libs__builtin_ops__succeeded)
                                {
                                  if ((strcmp(backend_libs__builtin_ops__PredName_7, (MR_String) "unsafe_get_io_state") == 0))
                                    {
                                      {
                                        backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__CodePrime_13, 0) = ((MR_Box) (backend_libs__builtin_ops__Args_9));
                                      }
                                      backend_libs__builtin_ops__succeeded = MR_TRUE;
                                    }
                                  else
                                  if ((strcmp(backend_libs__builtin_ops__PredName_7, (MR_String) "unsafe_set_io_state") == 0))
                                    {
                                      backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_mkword(MR_mktag(3), &backend_libs__builtin_ops_scalar_common_4[0]);
                                      backend_libs__builtin_ops__succeeded = MR_TRUE;
                                    }
                                  else
                                    backend_libs__builtin_ops__succeeded = MR_FALSE;
                                }
                            }
                        }
                        break;
                      case (MR_Integer) 4:
                        {
                          /* case "private_builtin" */
                          {
                            MR_Integer backend_libs__builtin_ops__slot_4;
                            MR_String backend_libs__builtin_ops__str_5;

                            backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_12 == (MR_Integer) 0);
                            if (backend_libs__builtin_ops__succeeded)
                              {
                                /* hashed string jump switch */
                                /* compute the hash value of the input string */
                                backend_libs__builtin_ops__slot_4 = ((MR_hash_string5(backend_libs__builtin_ops__PredName_7)) & (MR_Integer) 31);
                                /* hash chain loop */
                                do
                                  {
                                    /* lookup the string for this hash slot */
                                    backend_libs__builtin_ops__str_5 = ((&backend_libs__builtin_ops_vector_common_2[38 + backend_libs__builtin_ops__slot_4]))->backend_libs__builtin_ops__vector_common_type_2_0__vct_2_f_0;
                                    /* did we find a match? */
                                    if ((((backend_libs__builtin_ops__str_5 != NULL)) && ((strcmp(backend_libs__builtin_ops__str_5, backend_libs__builtin_ops__PredName_7) == 0))))
                                      {
                                        /* we found a match; dispatch to the corresponding code */
                                        switch (backend_libs__builtin_ops__slot_4) {
                                          default: /*NOTREACHED*/ MR_assert(0);
                                          case (MR_Integer) 1:
                                            {
                                              /* case "pointer_equal" */
                                              {
                                                MR_Word backend_libs__builtin_ops__V_173_173;
                                                MR_Word backend_libs__builtin_ops__V_174_174;
                                                MR_Word backend_libs__builtin_ops__V_175_175;
                                                MR_Word backend_libs__builtin_ops__V_176_176;
                                                MR_Box backend_libs__builtin_ops__X_220;
                                                MR_Box backend_libs__builtin_ops__Y_221;
                                                MR_Word backend_libs__builtin_ops__V_524_524;
                                                MR_Box backend_libs__builtin_ops__V_525_525;

                                                backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_526_526)) == (MR_mktag((MR_Integer) 1)));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  {
                                                    backend_libs__builtin_ops__V_525_525 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_526_526, (MR_Integer) 0));
                                                    backend_libs__builtin_ops__V_524_524 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_526_526, (MR_Integer) 1)));
                                                    if ((backend_libs__builtin_ops__V_524_524 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                                                      {
                                                        backend_libs__builtin_ops__X_220 = backend_libs__builtin_ops__V_527_527;
                                                        backend_libs__builtin_ops__Y_221 = backend_libs__builtin_ops__V_525_525;
                                                        backend_libs__builtin_ops__succeeded = MR_TRUE;
                                                      }
                                                    else
                                                      {
                                                        MR_Word backend_libs__builtin_ops__V_170_170;

                                                        backend_libs__builtin_ops__X_220 = backend_libs__builtin_ops__V_525_525;
                                                        backend_libs__builtin_ops__Y_221 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_524_524, (MR_Integer) 0));
                                                        backend_libs__builtin_ops__V_170_170 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_524_524, (MR_Integer) 1)));
                                                        backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_170_170 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                      }
                                                    if (backend_libs__builtin_ops__succeeded)
                                                      {
                                                        backend_libs__builtin_ops__V_174_174 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 40));
                                                        {
                                                          backend_libs__builtin_ops__V_175_175 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_175_175, 0) = backend_libs__builtin_ops__X_220;
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__V_176_176 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_176_176, 0) = backend_libs__builtin_ops__Y_221;
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__V_173_173 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_173_173, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_173_173, 1) = ((MR_Box) (backend_libs__builtin_ops__V_174_174));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_173_173, 2) = ((MR_Box) (backend_libs__builtin_ops__V_175_175));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_173_173, 3) = ((MR_Box) (backend_libs__builtin_ops__V_176_176));
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                                          MR_hl_field(MR_mktag(2), backend_libs__builtin_ops__CodePrime_13, 0) = ((MR_Box) (backend_libs__builtin_ops__V_173_173));
                                                        }
                                                        backend_libs__builtin_ops__succeeded = MR_TRUE;
                                                      }
                                                  }
                                              }
                                            }
                                            break;
                                          case (MR_Integer) 2:
                                            {
                                              /* case "unsafe_type_cast" */
                                              {
                                                MR_Word backend_libs__builtin_ops__V_188_188;
                                                MR_Word backend_libs__builtin_ops__V_189_189;
                                                MR_Box backend_libs__builtin_ops__Y_214;

                                                backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_526_526)) == (MR_mktag((MR_Integer) 1)));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  {
                                                    backend_libs__builtin_ops__Y_214 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_526_526, (MR_Integer) 0));
                                                    backend_libs__builtin_ops__V_188_188 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_526_526, (MR_Integer) 1)));
                                                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_188_188 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                    if (backend_libs__builtin_ops__succeeded)
                                                      {
                                                        {
                                                          backend_libs__builtin_ops__V_189_189 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_189_189, 0) = backend_libs__builtin_ops__V_527_527;
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Y_214;
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_189_189));
                                                        }
                                                        backend_libs__builtin_ops__succeeded = MR_TRUE;
                                                      }
                                                  }
                                              }
                                            }
                                            break;
                                          case (MR_Integer) 3:
                                            {
                                              /* case "trace_get_io_state" */
                                              backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_526_526 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                              if (backend_libs__builtin_ops__succeeded)
                                                {
                                                  {
                                                    backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__CodePrime_13, 0) = ((MR_Box) (backend_libs__builtin_ops__Args_9));
                                                  }
                                                  backend_libs__builtin_ops__succeeded = MR_TRUE;
                                                }
                                            }
                                            break;
                                          case (MR_Integer) 9:
                                            {
                                              /* case "builtin_int_gt" */
                                              {
                                                MR_Word backend_libs__builtin_ops__V_183_183;
                                                MR_Word backend_libs__builtin_ops__V_184_184;
                                                MR_Word backend_libs__builtin_ops__V_185_185;
                                                MR_Word backend_libs__builtin_ops__V_186_186;
                                                MR_Box backend_libs__builtin_ops__Y_216;

                                                backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_526_526)) == (MR_mktag((MR_Integer) 1)));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  {
                                                    backend_libs__builtin_ops__Y_216 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_526_526, (MR_Integer) 0));
                                                    backend_libs__builtin_ops__V_183_183 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_526_526, (MR_Integer) 1)));
                                                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_183_183 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                    if (backend_libs__builtin_ops__succeeded)
                                                      {
                                                        {
                                                          backend_libs__builtin_ops__V_185_185 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_185_185, 0) = backend_libs__builtin_ops__V_527_527;
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__V_186_186 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_186_186, 0) = backend_libs__builtin_ops__Y_216;
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__V_184_184 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_184_184, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_184_184, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 24))));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_184_184, 2) = ((MR_Box) (backend_libs__builtin_ops__V_185_185));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_184_184, 3) = ((MR_Box) (backend_libs__builtin_ops__V_186_186));
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                                          MR_hl_field(MR_mktag(2), backend_libs__builtin_ops__CodePrime_13, 0) = ((MR_Box) (backend_libs__builtin_ops__V_184_184));
                                                        }
                                                        backend_libs__builtin_ops__succeeded = MR_TRUE;
                                                      }
                                                  }
                                              }
                                            }
                                            break;
                                          case (MR_Integer) 14:
                                            {
                                              /* case "builtin_int_lt" */
                                              {
                                                MR_Word backend_libs__builtin_ops__V_492_492;
                                                MR_Word backend_libs__builtin_ops__V_493_493;
                                                MR_Word backend_libs__builtin_ops__V_494_494;
                                                MR_Word backend_libs__builtin_ops__V_495_495;
                                                MR_Box backend_libs__builtin_ops__Y_497;

                                                backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_526_526)) == (MR_mktag((MR_Integer) 1)));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  {
                                                    backend_libs__builtin_ops__Y_497 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_526_526, (MR_Integer) 0));
                                                    backend_libs__builtin_ops__V_492_492 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_526_526, (MR_Integer) 1)));
                                                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_492_492 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                    if (backend_libs__builtin_ops__succeeded)
                                                      {
                                                        {
                                                          backend_libs__builtin_ops__V_494_494 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_494_494, 0) = backend_libs__builtin_ops__V_527_527;
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__V_495_495 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_495_495, 0) = backend_libs__builtin_ops__Y_497;
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__V_493_493 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_493_493, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_493_493, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 23))));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_493_493, 2) = ((MR_Box) (backend_libs__builtin_ops__V_494_494));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_493_493, 3) = ((MR_Box) (backend_libs__builtin_ops__V_495_495));
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                                          MR_hl_field(MR_mktag(2), backend_libs__builtin_ops__CodePrime_13, 0) = ((MR_Box) (backend_libs__builtin_ops__V_493_493));
                                                        }
                                                        backend_libs__builtin_ops__succeeded = MR_TRUE;
                                                      }
                                                  }
                                              }
                                            }
                                            break;
                                          case (MR_Integer) 17:
                                          case (MR_Integer) 21:
                                            {
                                              /* case "store_at_ref", "store_at_ref_impure" */
                                              {
                                                MR_Word backend_libs__builtin_ops__V_191_191;
                                                MR_Box backend_libs__builtin_ops__Y_212;

                                                backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_526_526)) == (MR_mktag((MR_Integer) 1)));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  {
                                                    backend_libs__builtin_ops__Y_212 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_526_526, (MR_Integer) 0));
                                                    backend_libs__builtin_ops__V_191_191 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_526_526, (MR_Integer) 1)));
                                                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_191_191 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                    if (backend_libs__builtin_ops__succeeded)
                                                      {
                                                        {
                                                          backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                                          MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__V_527_527;
                                                          MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__CodePrime_13, 1) = backend_libs__builtin_ops__Y_212;
                                                        }
                                                        backend_libs__builtin_ops__succeeded = MR_TRUE;
                                                      }
                                                  }
                                              }
                                            }
                                            break;
                                          case (MR_Integer) 27:
                                            {
                                              /* case "builtin_compound_eq" */
                                              {
                                                MR_Word backend_libs__builtin_ops__V_178_178;
                                                MR_Word backend_libs__builtin_ops__V_179_179;
                                                MR_Word backend_libs__builtin_ops__V_180_180;
                                                MR_Word backend_libs__builtin_ops__V_181_181;
                                                MR_Box backend_libs__builtin_ops__Y_218;

                                                backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_526_526)) == (MR_mktag((MR_Integer) 1)));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  {
                                                    backend_libs__builtin_ops__Y_218 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_526_526, (MR_Integer) 0));
                                                    backend_libs__builtin_ops__V_178_178 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_526_526, (MR_Integer) 1)));
                                                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_178_178 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                    if (backend_libs__builtin_ops__succeeded)
                                                      {
                                                        {
                                                          backend_libs__builtin_ops__V_180_180 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_180_180, 0) = backend_libs__builtin_ops__V_527_527;
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__V_181_181 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_181_181, 0) = backend_libs__builtin_ops__Y_218;
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__V_179_179 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_179_179, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_179_179, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 41))));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_179_179, 2) = ((MR_Box) (backend_libs__builtin_ops__V_180_180));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_179_179, 3) = ((MR_Box) (backend_libs__builtin_ops__V_181_181));
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                                          MR_hl_field(MR_mktag(2), backend_libs__builtin_ops__CodePrime_13, 0) = ((MR_Box) (backend_libs__builtin_ops__V_179_179));
                                                        }
                                                        backend_libs__builtin_ops__succeeded = MR_TRUE;
                                                      }
                                                  }
                                              }
                                            }
                                            break;
                                          case (MR_Integer) 29:
                                            {
                                              /* case "builtin_compound_lt" */
                                              {
                                                MR_Word backend_libs__builtin_ops__V_483_483;
                                                MR_Word backend_libs__builtin_ops__V_484_484;
                                                MR_Word backend_libs__builtin_ops__V_485_485;
                                                MR_Word backend_libs__builtin_ops__V_486_486;
                                                MR_Box backend_libs__builtin_ops__Y_488;

                                                backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_526_526)) == (MR_mktag((MR_Integer) 1)));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  {
                                                    backend_libs__builtin_ops__Y_488 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_526_526, (MR_Integer) 0));
                                                    backend_libs__builtin_ops__V_483_483 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_526_526, (MR_Integer) 1)));
                                                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_483_483 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                    if (backend_libs__builtin_ops__succeeded)
                                                      {
                                                        {
                                                          backend_libs__builtin_ops__V_485_485 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_485_485, 0) = backend_libs__builtin_ops__V_527_527;
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__V_486_486 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_486_486, 0) = backend_libs__builtin_ops__Y_488;
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__V_484_484 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_484_484, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_484_484, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 42))));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_484_484, 2) = ((MR_Box) (backend_libs__builtin_ops__V_485_485));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_484_484, 3) = ((MR_Box) (backend_libs__builtin_ops__V_486_486));
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                                          MR_hl_field(MR_mktag(2), backend_libs__builtin_ops__CodePrime_13, 0) = ((MR_Box) (backend_libs__builtin_ops__V_484_484));
                                                        }
                                                        backend_libs__builtin_ops__succeeded = MR_TRUE;
                                                      }
                                                  }
                                              }
                                            }
                                            break;
                                          case (MR_Integer) 31:
                                            {
                                              /* case "trace_set_io_state" */
                                              {
                                                MR_Word backend_libs__builtin_ops__V_193_193;

                                                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_526_526 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  {
                                                    backend_libs__builtin_ops__V_193_193 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                                                    backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_mkword(MR_mktag(3), &backend_libs__builtin_ops_scalar_common_4[0]);
                                                    backend_libs__builtin_ops__succeeded = MR_TRUE;
                                                  }
                                              }
                                            }
                                            break;
                                        }
                                        /* jump out of search loop */
                                        goto label_0;
                                      }
                                    else
                                      {
                                        /* no match yet, so get next slot in hash chain */
                                        backend_libs__builtin_ops__slot_4 = ((&backend_libs__builtin_ops_vector_common_2[38 + backend_libs__builtin_ops__slot_4]))->backend_libs__builtin_ops__vector_common_type_2_0__vct_2_f_1;
                                      }
                                  }
                                while ((backend_libs__builtin_ops__slot_4 >= (MR_Integer) 0));
                                backend_libs__builtin_ops__succeeded = MR_FALSE;
                              label_0:;
                              }
                          }
                        }
                        break;
                      case (MR_Integer) 5:
                        {
                          /* case "term_size_prof_builtin" */
                          {
                            MR_Box backend_libs__builtin_ops__Z_53;
                            MR_Word backend_libs__builtin_ops__V_162_162;
                            MR_Word backend_libs__builtin_ops__V_163_163;
                            MR_Word backend_libs__builtin_ops__V_164_164;
                            MR_Word backend_libs__builtin_ops__V_165_165;
                            MR_Word backend_libs__builtin_ops__V_166_166;
                            MR_Word backend_libs__builtin_ops__V_167_167;
                            MR_Box backend_libs__builtin_ops__Y_229;

                            backend_libs__builtin_ops__succeeded = (strcmp(backend_libs__builtin_ops__PredName_7, (MR_String) "term_size_plus") == 0);
                            if (backend_libs__builtin_ops__succeeded)
                              {
                                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_12 == (MR_Integer) 0);
                                if (backend_libs__builtin_ops__succeeded)
                                  {
                                    backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_526_526)) == (MR_mktag((MR_Integer) 1)));
                                    if (backend_libs__builtin_ops__succeeded)
                                      {
                                        backend_libs__builtin_ops__Y_229 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_526_526, (MR_Integer) 0));
                                        backend_libs__builtin_ops__V_162_162 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_526_526, (MR_Integer) 1)));
                                        backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_162_162)) == (MR_mktag((MR_Integer) 1)));
                                        if (backend_libs__builtin_ops__succeeded)
                                          {
                                            backend_libs__builtin_ops__Z_53 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_162_162, (MR_Integer) 0));
                                            backend_libs__builtin_ops__V_163_163 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_162_162, (MR_Integer) 1)));
                                            backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_163_163 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                            if (backend_libs__builtin_ops__succeeded)
                                              {
                                                backend_libs__builtin_ops__V_165_165 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                                                {
                                                  backend_libs__builtin_ops__V_166_166 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                  MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_166_166, 0) = backend_libs__builtin_ops__V_527_527;
                                                }
                                                {
                                                  backend_libs__builtin_ops__V_167_167 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                  MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_167_167, 0) = backend_libs__builtin_ops__Y_229;
                                                }
                                                {
                                                  backend_libs__builtin_ops__V_164_164 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                  MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_164_164, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                                                  MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_164_164, 1) = ((MR_Box) (backend_libs__builtin_ops__V_165_165));
                                                  MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_164_164, 2) = ((MR_Box) (backend_libs__builtin_ops__V_166_166));
                                                  MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_164_164, 3) = ((MR_Box) (backend_libs__builtin_ops__V_167_167));
                                                }
                                                {
                                                  backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                  MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Z_53;
                                                  MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_164_164));
                                                }
                                                backend_libs__builtin_ops__succeeded = MR_TRUE;
                                              }
                                          }
                                      }
                                  }
                              }
                          }
                        }
                        break;
                    }
                    /* jump out of search loop */
                    goto label_2;
                  }
                else
                if ((backend_libs__builtin_ops__result_3 < (MR_Integer) 0))
                  backend_libs__builtin_ops__hi_1 = (backend_libs__builtin_ops__mid_2 - (MR_Integer) 1);
                else
                  backend_libs__builtin_ops__lo_0 = (backend_libs__builtin_ops__mid_2 + (MR_Integer) 1);
              }
            while ((backend_libs__builtin_ops__lo_0 <= backend_libs__builtin_ops__hi_1));
            backend_libs__builtin_ops__succeeded = MR_FALSE;
          label_2:;
          }
      }
    if (backend_libs__builtin_ops__succeeded)
      *backend_libs__builtin_ops__Code_10 = backend_libs__builtin_ops__CodePrime_13;
    else
      {
        MR_Integer backend_libs__builtin_ops__Arity_14;
        MR_String backend_libs__builtin_ops__Msg_15;
        MR_String backend_libs__builtin_ops__V_25_25;
        MR_Word backend_libs__builtin_ops__V_31_31;
        MR_String backend_libs__builtin_ops__V_33_33;
        MR_String backend_libs__builtin_ops__V_34_34;
        MR_String backend_libs__builtin_ops__V_41_41;

        {
          mercury__list__length_2_p_0(backend_libs__builtin_ops__TypeInfo_for_T_24, backend_libs__builtin_ops__Args_9, &backend_libs__builtin_ops__Arity_14);
        }
        backend_libs__builtin_ops__V_31_31 = (MR_Word) &backend_libs__builtin_ops_scalar_common_4[3];
        {
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(backend_libs__builtin_ops__V_31_31, backend_libs__builtin_ops__Arity_14, &backend_libs__builtin_ops__V_25_25);
        }
        {
          backend_libs__builtin_ops__V_33_33 = mercury__string__f_43_43_2_f_0((MR_String) "/", backend_libs__builtin_ops__V_25_25);
        }
        {
          mercury__string__format__format_string_component_nowidth_noprec_3_p_0(backend_libs__builtin_ops__V_31_31, backend_libs__builtin_ops__PredName_7, &backend_libs__builtin_ops__V_34_34);
        }
        {
          backend_libs__builtin_ops__V_41_41 = mercury__string__f_43_43_2_f_0(backend_libs__builtin_ops__V_34_34, backend_libs__builtin_ops__V_33_33);
        }
        {
          backend_libs__builtin_ops__Msg_15 = mercury__string__f_43_43_2_f_0((MR_String) "unknown builtin ", backend_libs__builtin_ops__V_41_41);
        }
        {
          mercury__require__unexpected_3_p_0((MR_String) "backend_libs.builtin_ops", (MR_String) "predicate \140backend_libs.builtin_ops.translate_builtin\'/5", backend_libs__builtin_ops__Msg_15);
          return;
        }
      }
  }
}

MR_bool MR_CALL 
backend_libs__builtin_ops__test_if_builtin_4_p_0(
  MR_Word backend_libs__builtin_ops__TypeInfo_for_T_12,
  MR_Word backend_libs__builtin_ops__FullyQualifiedModule_5,
  MR_String backend_libs__builtin_ops__PredName_6,
  MR_Integer backend_libs__builtin_ops__ProcId_7,
  MR_Word backend_libs__builtin_ops__Args_8)
{
  {
    MR_bool backend_libs__builtin_ops__succeeded;
    MR_String backend_libs__builtin_ops__ModuleName_9;
    MR_Integer backend_libs__builtin_ops__ProcNum_10;
    MR_Word backend_libs__builtin_ops__V_496_496;
    MR_Box backend_libs__builtin_ops__V_497_497;
    MR_Integer backend_libs__builtin_ops__lo_0;
    MR_Integer backend_libs__builtin_ops__hi_1;
    MR_Integer backend_libs__builtin_ops__mid_2;
    MR_Integer backend_libs__builtin_ops__result_3;

    {
      backend_libs__builtin_ops__succeeded = mdbcomp__builtin_modules__is_std_lib_module_name_2_p_0(backend_libs__builtin_ops__FullyQualifiedModule_5, &backend_libs__builtin_ops__ModuleName_9);
    }
    if (backend_libs__builtin_ops__succeeded)
      {
        {
          hlds__hlds_pred__proc_id_to_int_2_p_0(backend_libs__builtin_ops__ProcId_7, &backend_libs__builtin_ops__ProcNum_10);
        }
        backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__Args_8)) == (MR_mktag((MR_Integer) 1)));
        if (backend_libs__builtin_ops__succeeded)
          {
            backend_libs__builtin_ops__V_497_497 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Args_8, (MR_Integer) 0));
            backend_libs__builtin_ops__V_496_496 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Args_8, (MR_Integer) 1)));
            /* binary string jump switch */
            backend_libs__builtin_ops__lo_0 = (MR_Integer) 0;
            backend_libs__builtin_ops__hi_1 = (MR_Integer) 5;
            do
              {
                backend_libs__builtin_ops__mid_2 = (((backend_libs__builtin_ops__lo_0 + backend_libs__builtin_ops__hi_1)) / (MR_Integer) 2);
                backend_libs__builtin_ops__result_3 = MR_strcmp(backend_libs__builtin_ops__ModuleName_9, ((&backend_libs__builtin_ops_vector_common_2[32 + backend_libs__builtin_ops__mid_2]))->backend_libs__builtin_ops__vector_common_type_2_0__vct_2_f_0);
                if ((backend_libs__builtin_ops__result_3 == (MR_Integer) 0))
                  {
                    switch (((&backend_libs__builtin_ops_vector_common_2[32 + backend_libs__builtin_ops__mid_2]))->backend_libs__builtin_ops__vector_common_type_2_0__vct_2_f_1) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          /* case "builtin" */
                          {
                            MR_Word backend_libs__builtin_ops__V_173_173;
                            MR_Box backend_libs__builtin_ops__Y_19;

                            backend_libs__builtin_ops__succeeded = (strcmp(backend_libs__builtin_ops__PredName_6, (MR_String) "unsafe_promise_unique") == 0);
                            if (backend_libs__builtin_ops__succeeded)
                              {
                                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_10 == (MR_Integer) 0);
                                if (backend_libs__builtin_ops__succeeded)
                                  {
                                    backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_496_496)) == (MR_mktag((MR_Integer) 1)));
                                    if (backend_libs__builtin_ops__succeeded)
                                      {
                                        backend_libs__builtin_ops__Y_19 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_496_496, (MR_Integer) 0));
                                        backend_libs__builtin_ops__V_173_173 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_496_496, (MR_Integer) 1)));
                                        backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_173_173 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                      }
                                  }
                              }
                          }
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          /* case "float" */
                          {
                            MR_Word backend_libs__builtin_ops__V_506_506;
                            MR_Box backend_libs__builtin_ops__V_507_507;
                            MR_Integer backend_libs__builtin_ops__slot_7;
                            MR_String backend_libs__builtin_ops__str_8;

                            backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_10 == (MR_Integer) 0);
                            if (backend_libs__builtin_ops__succeeded)
                              {
                                backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_496_496)) == (MR_mktag((MR_Integer) 1)));
                                if (backend_libs__builtin_ops__succeeded)
                                  {
                                    backend_libs__builtin_ops__V_507_507 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_496_496, (MR_Integer) 0));
                                    backend_libs__builtin_ops__V_506_506 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_496_496, (MR_Integer) 1)));
                                    /* hashed string jump switch */
                                    /* compute the hash value of the input string */
                                    backend_libs__builtin_ops__slot_7 = ((MR_hash_string4(backend_libs__builtin_ops__PredName_6)) & (MR_Integer) 15);
                                    /* no collisions; no hash chain loop */
                                    /* lookup the string for this hash slot */
                                    backend_libs__builtin_ops__str_8 = ((&backend_libs__builtin_ops_vector_common_3[0 + backend_libs__builtin_ops__slot_7]))->backend_libs__builtin_ops__vector_common_type_3_0__vct_3_f_0;
                                    /* did we find a match? */
                                    if ((((backend_libs__builtin_ops__str_8 != NULL)) && ((strcmp(backend_libs__builtin_ops__str_8, backend_libs__builtin_ops__PredName_6) == 0))))
                                      {
                                        /* we found a match; dispatch to the corresponding code */
                                        switch (backend_libs__builtin_ops__slot_7) {
                                          default: /*NOTREACHED*/ MR_assert(0);
                                          case (MR_Integer) 1:
                                            {
                                              /* case ">=" */
                                              backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_506_506 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                            }
                                            break;
                                          case (MR_Integer) 3:
                                            {
                                              /* case "=<" */
                                              backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_506_506 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                            }
                                            break;
                                          case (MR_Integer) 8:
                                            {
                                              /* case "unchecked_quotient" */
                                              {
                                                MR_Word backend_libs__builtin_ops__V_306_306;
                                                MR_Box backend_libs__builtin_ops__Z_312;

                                                backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_506_506)) == (MR_mktag((MR_Integer) 1)));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  {
                                                    backend_libs__builtin_ops__Z_312 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_506_506, (MR_Integer) 0));
                                                    backend_libs__builtin_ops__V_306_306 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_506_506, (MR_Integer) 1)));
                                                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_306_306 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                  }
                                              }
                                            }
                                            break;
                                          case (MR_Integer) 10:
                                            {
                                              /* case "+" */
                                              if ((backend_libs__builtin_ops__V_506_506 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                                                backend_libs__builtin_ops__succeeded = MR_TRUE;
                                              else
                                                {
                                                  MR_Word backend_libs__builtin_ops__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_506_506, (MR_Integer) 1)));
                                                  MR_Box backend_libs__builtin_ops__Z_245 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_506_506, (MR_Integer) 0));

                                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_52_52 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                }
                                            }
                                            break;
                                          case (MR_Integer) 11:
                                            {
                                              /* case "*" */
                                              {
                                                MR_Word backend_libs__builtin_ops__V_32_32;
                                                MR_Box backend_libs__builtin_ops__Z_265;

                                                backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_506_506)) == (MR_mktag((MR_Integer) 1)));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  {
                                                    backend_libs__builtin_ops__Z_265 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_506_506, (MR_Integer) 0));
                                                    backend_libs__builtin_ops__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_506_506, (MR_Integer) 1)));
                                                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_32_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                  }
                                              }
                                            }
                                            break;
                                          case (MR_Integer) 12:
                                            {
                                              /* case "-" */
                                              if ((backend_libs__builtin_ops__V_506_506 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                                                backend_libs__builtin_ops__succeeded = MR_TRUE;
                                              else
                                                {
                                                  MR_Word backend_libs__builtin_ops__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_506_506, (MR_Integer) 1)));
                                                  MR_Box backend_libs__builtin_ops__Z_256 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_506_506, (MR_Integer) 0));

                                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_38_38 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                }
                                            }
                                            break;
                                          case (MR_Integer) 13:
                                            {
                                              /* case "<" */
                                              backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_506_506 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                            }
                                            break;
                                          case (MR_Integer) 15:
                                            {
                                              /* case ">" */
                                              backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_506_506 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                            }
                                            break;
                                        }
                                        /* jump out of search loop */
                                        goto label_1;
                                      }
                                    backend_libs__builtin_ops__succeeded = MR_FALSE;
                                  label_1:;
                                  }
                              }
                          }
                        }
                        break;
                      case (MR_Integer) 2:
                        {
                          /* case "int" */
                          {
                            MR_Word backend_libs__builtin_ops__V_508_508;
                            MR_Box backend_libs__builtin_ops__V_509_509;

                            backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_496_496)) == (MR_mktag((MR_Integer) 1)));
                            if (backend_libs__builtin_ops__succeeded)
                              {
                                backend_libs__builtin_ops__V_509_509 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_496_496, (MR_Integer) 0));
                                backend_libs__builtin_ops__V_508_508 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_496_496, (MR_Integer) 1)));
                                {
                                  MR_Integer backend_libs__builtin_ops__case_num_6 = (MR_Integer) -1;

                                  switch (MR_nth_code_unit(backend_libs__builtin_ops__PredName_6, 0)) {
                                    case (MR_Integer) 42:
                                      if (MR_offset_streq(1, backend_libs__builtin_ops__PredName_6, (MR_String) "*"))
                                        backend_libs__builtin_ops__case_num_6 = (MR_Integer) 0;
                                      break;
                                    case (MR_Integer) 43:
                                      if (MR_offset_streq(1, backend_libs__builtin_ops__PredName_6, (MR_String) "+"))
                                        backend_libs__builtin_ops__case_num_6 = (MR_Integer) 1;
                                      break;
                                    case (MR_Integer) 45:
                                      if (MR_offset_streq(1, backend_libs__builtin_ops__PredName_6, (MR_String) "-"))
                                        backend_libs__builtin_ops__case_num_6 = (MR_Integer) 2;
                                      break;
                                    case (MR_Integer) 47:
                                      if (MR_offset_streq(1, backend_libs__builtin_ops__PredName_6, (MR_String) "/\\"))
                                        backend_libs__builtin_ops__case_num_6 = (MR_Integer) 3;
                                      break;
                                    case (MR_Integer) 60:
                                      if (MR_offset_streq(1, backend_libs__builtin_ops__PredName_6, (MR_String) "<"))
                                        backend_libs__builtin_ops__case_num_6 = (MR_Integer) 4;
                                      break;
                                    case (MR_Integer) 61:
                                      if (MR_offset_streq(1, backend_libs__builtin_ops__PredName_6, (MR_String) "=<"))
                                        backend_libs__builtin_ops__case_num_6 = (MR_Integer) 5;
                                      break;
                                    case (MR_Integer) 62:
                                      switch (MR_nth_code_unit(backend_libs__builtin_ops__PredName_6, 1)) {
                                        case (MR_Integer) 0:
                                          backend_libs__builtin_ops__case_num_6 = (MR_Integer) 6;
                                          break;
                                        case (MR_Integer) 61:
                                          if (MR_offset_streq(2, backend_libs__builtin_ops__PredName_6, (MR_String) ">="))
                                            backend_libs__builtin_ops__case_num_6 = (MR_Integer) 7;
                                          break;
                                      }
                                      break;
                                    case (MR_Integer) 92:
                                      switch (MR_nth_code_unit(backend_libs__builtin_ops__PredName_6, 1)) {
                                        case (MR_Integer) 0:
                                          backend_libs__builtin_ops__case_num_6 = (MR_Integer) 8;
                                          break;
                                        case (MR_Integer) 47:
                                          if (MR_offset_streq(2, backend_libs__builtin_ops__PredName_6, (MR_String) "\\/"))
                                            backend_libs__builtin_ops__case_num_6 = (MR_Integer) 9;
                                          break;
                                      }
                                      break;
                                    case (MR_Integer) 109:
                                      if (MR_offset_streq(1, backend_libs__builtin_ops__PredName_6, (MR_String) "minus"))
                                        backend_libs__builtin_ops__case_num_6 = (MR_Integer) 10;
                                      break;
                                    case (MR_Integer) 112:
                                      if (MR_offset_streq(1, backend_libs__builtin_ops__PredName_6, (MR_String) "plus"))
                                        backend_libs__builtin_ops__case_num_6 = (MR_Integer) 11;
                                      break;
                                    case (MR_Integer) 116:
                                      if (MR_offset_streq(1, backend_libs__builtin_ops__PredName_6, (MR_String) "times"))
                                        backend_libs__builtin_ops__case_num_6 = (MR_Integer) 12;
                                      break;
                                    case (MR_Integer) 117:
                                      if (((((((((((((((((((MR_nth_code_unit(backend_libs__builtin_ops__PredName_6, 1)) == (MR_Integer) 110)) && (((MR_nth_code_unit(backend_libs__builtin_ops__PredName_6, 2)) == (MR_Integer) 99)))) && (((MR_nth_code_unit(backend_libs__builtin_ops__PredName_6, 3)) == (MR_Integer) 104)))) && (((MR_nth_code_unit(backend_libs__builtin_ops__PredName_6, 4)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(backend_libs__builtin_ops__PredName_6, 5)) == (MR_Integer) 99)))) && (((MR_nth_code_unit(backend_libs__builtin_ops__PredName_6, 6)) == (MR_Integer) 107)))) && (((MR_nth_code_unit(backend_libs__builtin_ops__PredName_6, 7)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(backend_libs__builtin_ops__PredName_6, 8)) == (MR_Integer) 100)))) && (((MR_nth_code_unit(backend_libs__builtin_ops__PredName_6, 9)) == (MR_Integer) 95))))
                                        switch (MR_nth_code_unit(backend_libs__builtin_ops__PredName_6, 10)) {
                                          case (MR_Integer) 108:
                                            if (MR_offset_streq(11, backend_libs__builtin_ops__PredName_6, (MR_String) "unchecked_left_shift"))
                                              backend_libs__builtin_ops__case_num_6 = (MR_Integer) 13;
                                            break;
                                          case (MR_Integer) 113:
                                            if (MR_offset_streq(11, backend_libs__builtin_ops__PredName_6, (MR_String) "unchecked_quotient"))
                                              backend_libs__builtin_ops__case_num_6 = (MR_Integer) 14;
                                            break;
                                          case (MR_Integer) 114:
                                            switch (MR_nth_code_unit(backend_libs__builtin_ops__PredName_6, 11)) {
                                              case (MR_Integer) 101:
                                                if (MR_offset_streq(12, backend_libs__builtin_ops__PredName_6, (MR_String) "unchecked_rem"))
                                                  backend_libs__builtin_ops__case_num_6 = (MR_Integer) 15;
                                                break;
                                              case (MR_Integer) 105:
                                                if (MR_offset_streq(12, backend_libs__builtin_ops__PredName_6, (MR_String) "unchecked_right_shift"))
                                                  backend_libs__builtin_ops__case_num_6 = (MR_Integer) 16;
                                                break;
                                            }
                                            break;
                                        }
                                      break;
                                    case (MR_Integer) 120:
                                      if (MR_offset_streq(1, backend_libs__builtin_ops__PredName_6, (MR_String) "xor"))
                                        backend_libs__builtin_ops__case_num_6 = (MR_Integer) 17;
                                      break;
                                  }
                                  switch (backend_libs__builtin_ops__case_num_6) {
                                    default:
                                      backend_libs__builtin_ops__succeeded = MR_FALSE;
                                      break;
                                    case (MR_Integer) 0:
                                      {
                                        /* case "*" */
                                        {
                                          MR_Word backend_libs__builtin_ops__V_72_72;
                                          MR_Box backend_libs__builtin_ops__Z_227;

                                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_10 == (MR_Integer) 0);
                                          if (backend_libs__builtin_ops__succeeded)
                                            {
                                              backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_508_508)) == (MR_mktag((MR_Integer) 1)));
                                              if (backend_libs__builtin_ops__succeeded)
                                                {
                                                  backend_libs__builtin_ops__Z_227 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_508_508, (MR_Integer) 0));
                                                  backend_libs__builtin_ops__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_508_508, (MR_Integer) 1)));
                                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_72_72 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                }
                                            }
                                        }
                                      }
                                      break;
                                    case (MR_Integer) 1:
                                      {
                                        /* case "+" */
                                        switch (backend_libs__builtin_ops__ProcNum_10) {
                                          default:
                                            backend_libs__builtin_ops__succeeded = MR_FALSE;
                                            break;
                                          case (MR_Integer) 0:
                                            if ((backend_libs__builtin_ops__V_508_508 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                                              backend_libs__builtin_ops__succeeded = MR_TRUE;
                                            else
                                              {
                                                MR_Word backend_libs__builtin_ops__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_508_508, (MR_Integer) 1)));
                                                MR_Box backend_libs__builtin_ops__Z_202 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_508_508, (MR_Integer) 0));

                                                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_118_118 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                              }
                                            break;
                                          case (MR_Integer) 1:
                                            {
                                              MR_Word backend_libs__builtin_ops__V_316_316;
                                              MR_Box backend_libs__builtin_ops__Z_319;

                                              backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_508_508)) == (MR_mktag((MR_Integer) 1)));
                                              if (backend_libs__builtin_ops__succeeded)
                                                {
                                                  backend_libs__builtin_ops__Z_319 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_508_508, (MR_Integer) 0));
                                                  backend_libs__builtin_ops__V_316_316 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_508_508, (MR_Integer) 1)));
                                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_316_316 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                }
                                            }
                                            break;
                                          case (MR_Integer) 2:
                                            {
                                              MR_Word backend_libs__builtin_ops__V_322_322;
                                              MR_Box backend_libs__builtin_ops__Z_325;

                                              backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_508_508)) == (MR_mktag((MR_Integer) 1)));
                                              if (backend_libs__builtin_ops__succeeded)
                                                {
                                                  backend_libs__builtin_ops__Z_325 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_508_508, (MR_Integer) 0));
                                                  backend_libs__builtin_ops__V_322_322 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_508_508, (MR_Integer) 1)));
                                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_322_322 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                }
                                            }
                                            break;
                                        }
                                      }
                                      break;
                                    case (MR_Integer) 2:
                                      {
                                        /* case "-" */
                                        switch (backend_libs__builtin_ops__ProcNum_10) {
                                          default:
                                            backend_libs__builtin_ops__succeeded = MR_FALSE;
                                            break;
                                          case (MR_Integer) 0:
                                            if ((backend_libs__builtin_ops__V_508_508 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                                              backend_libs__builtin_ops__succeeded = MR_TRUE;
                                            else
                                              {
                                                MR_Word backend_libs__builtin_ops__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_508_508, (MR_Integer) 1)));
                                                MR_Box backend_libs__builtin_ops__Z_213 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_508_508, (MR_Integer) 0));

                                                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_100_100 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                              }
                                            break;
                                          case (MR_Integer) 1:
                                            {
                                              MR_Word backend_libs__builtin_ops__V_328_328;
                                              MR_Box backend_libs__builtin_ops__Z_331;

                                              backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_508_508)) == (MR_mktag((MR_Integer) 1)));
                                              if (backend_libs__builtin_ops__succeeded)
                                                {
                                                  backend_libs__builtin_ops__Z_331 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_508_508, (MR_Integer) 0));
                                                  backend_libs__builtin_ops__V_328_328 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_508_508, (MR_Integer) 1)));
                                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_328_328 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                }
                                            }
                                            break;
                                          case (MR_Integer) 2:
                                            {
                                              MR_Word backend_libs__builtin_ops__V_334_334;
                                              MR_Box backend_libs__builtin_ops__Z_337;

                                              backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_508_508)) == (MR_mktag((MR_Integer) 1)));
                                              if (backend_libs__builtin_ops__succeeded)
                                                {
                                                  backend_libs__builtin_ops__Z_337 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_508_508, (MR_Integer) 0));
                                                  backend_libs__builtin_ops__V_334_334 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_508_508, (MR_Integer) 1)));
                                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_334_334 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                }
                                            }
                                            break;
                                        }
                                      }
                                      break;
                                    case (MR_Integer) 3:
                                      {
                                        /* case "/\" */
                                        {
                                          MR_Word backend_libs__builtin_ops__V_341_341;
                                          MR_Box backend_libs__builtin_ops__Z_347;

                                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_10 == (MR_Integer) 0);
                                          if (backend_libs__builtin_ops__succeeded)
                                            {
                                              backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_508_508)) == (MR_mktag((MR_Integer) 1)));
                                              if (backend_libs__builtin_ops__succeeded)
                                                {
                                                  backend_libs__builtin_ops__Z_347 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_508_508, (MR_Integer) 0));
                                                  backend_libs__builtin_ops__V_341_341 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_508_508, (MR_Integer) 1)));
                                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_341_341 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                }
                                            }
                                        }
                                      }
                                      break;
                                    case (MR_Integer) 4:
                                      {
                                        /* case "<" */
                                        backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_10 == (MR_Integer) 0);
                                        if (backend_libs__builtin_ops__succeeded)
                                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_508_508 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                      }
                                      break;
                                    case (MR_Integer) 5:
                                      {
                                        /* case "=<" */
                                        backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_10 == (MR_Integer) 0);
                                        if (backend_libs__builtin_ops__succeeded)
                                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_508_508 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                      }
                                      break;
                                    case (MR_Integer) 6:
                                      {
                                        /* case ">" */
                                        backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_10 == (MR_Integer) 0);
                                        if (backend_libs__builtin_ops__succeeded)
                                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_508_508 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                      }
                                      break;
                                    case (MR_Integer) 7:
                                      {
                                        /* case ">=" */
                                        backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_10 == (MR_Integer) 0);
                                        if (backend_libs__builtin_ops__succeeded)
                                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_508_508 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                      }
                                      break;
                                    case (MR_Integer) 8:
                                      {
                                        /* case "\" */
                                        backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_10 == (MR_Integer) 0);
                                        if (backend_libs__builtin_ops__succeeded)
                                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_508_508 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                      }
                                      break;
                                    case (MR_Integer) 9:
                                      {
                                        /* case "\/" */
                                        {
                                          MR_Word backend_libs__builtin_ops__V_375_375;
                                          MR_Box backend_libs__builtin_ops__Z_381;

                                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_10 == (MR_Integer) 0);
                                          if (backend_libs__builtin_ops__succeeded)
                                            {
                                              backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_508_508)) == (MR_mktag((MR_Integer) 1)));
                                              if (backend_libs__builtin_ops__succeeded)
                                                {
                                                  backend_libs__builtin_ops__Z_381 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_508_508, (MR_Integer) 0));
                                                  backend_libs__builtin_ops__V_375_375 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_508_508, (MR_Integer) 1)));
                                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_375_375 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                }
                                            }
                                        }
                                      }
                                      break;
                                    case (MR_Integer) 10:
                                      {
                                        /* case "minus" */
                                        {
                                          MR_Word backend_libs__builtin_ops__V_385_385;
                                          MR_Box backend_libs__builtin_ops__Z_391;

                                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_10 == (MR_Integer) 0);
                                          if (backend_libs__builtin_ops__succeeded)
                                            {
                                              backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_508_508)) == (MR_mktag((MR_Integer) 1)));
                                              if (backend_libs__builtin_ops__succeeded)
                                                {
                                                  backend_libs__builtin_ops__Z_391 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_508_508, (MR_Integer) 0));
                                                  backend_libs__builtin_ops__V_385_385 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_508_508, (MR_Integer) 1)));
                                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_385_385 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                }
                                            }
                                        }
                                      }
                                      break;
                                    case (MR_Integer) 11:
                                      {
                                        /* case "plus" */
                                        {
                                          MR_Word backend_libs__builtin_ops__V_395_395;
                                          MR_Box backend_libs__builtin_ops__Z_401;

                                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_10 == (MR_Integer) 0);
                                          if (backend_libs__builtin_ops__succeeded)
                                            {
                                              backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_508_508)) == (MR_mktag((MR_Integer) 1)));
                                              if (backend_libs__builtin_ops__succeeded)
                                                {
                                                  backend_libs__builtin_ops__Z_401 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_508_508, (MR_Integer) 0));
                                                  backend_libs__builtin_ops__V_395_395 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_508_508, (MR_Integer) 1)));
                                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_395_395 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                }
                                            }
                                        }
                                      }
                                      break;
                                    case (MR_Integer) 12:
                                      {
                                        /* case "times" */
                                        {
                                          MR_Word backend_libs__builtin_ops__V_405_405;
                                          MR_Box backend_libs__builtin_ops__Z_411;

                                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_10 == (MR_Integer) 0);
                                          if (backend_libs__builtin_ops__succeeded)
                                            {
                                              backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_508_508)) == (MR_mktag((MR_Integer) 1)));
                                              if (backend_libs__builtin_ops__succeeded)
                                                {
                                                  backend_libs__builtin_ops__Z_411 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_508_508, (MR_Integer) 0));
                                                  backend_libs__builtin_ops__V_405_405 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_508_508, (MR_Integer) 1)));
                                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_405_405 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                }
                                            }
                                        }
                                      }
                                      break;
                                    case (MR_Integer) 13:
                                      {
                                        /* case "unchecked_left_shift" */
                                        {
                                          MR_Word backend_libs__builtin_ops__V_415_415;
                                          MR_Box backend_libs__builtin_ops__Z_421;

                                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_10 == (MR_Integer) 0);
                                          if (backend_libs__builtin_ops__succeeded)
                                            {
                                              backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_508_508)) == (MR_mktag((MR_Integer) 1)));
                                              if (backend_libs__builtin_ops__succeeded)
                                                {
                                                  backend_libs__builtin_ops__Z_421 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_508_508, (MR_Integer) 0));
                                                  backend_libs__builtin_ops__V_415_415 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_508_508, (MR_Integer) 1)));
                                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_415_415 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                }
                                            }
                                        }
                                      }
                                      break;
                                    case (MR_Integer) 14:
                                      {
                                        /* case "unchecked_quotient" */
                                        {
                                          MR_Word backend_libs__builtin_ops__V_425_425;
                                          MR_Box backend_libs__builtin_ops__Z_431;

                                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_10 == (MR_Integer) 0);
                                          if (backend_libs__builtin_ops__succeeded)
                                            {
                                              backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_508_508)) == (MR_mktag((MR_Integer) 1)));
                                              if (backend_libs__builtin_ops__succeeded)
                                                {
                                                  backend_libs__builtin_ops__Z_431 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_508_508, (MR_Integer) 0));
                                                  backend_libs__builtin_ops__V_425_425 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_508_508, (MR_Integer) 1)));
                                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_425_425 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                }
                                            }
                                        }
                                      }
                                      break;
                                    case (MR_Integer) 15:
                                      {
                                        /* case "unchecked_rem" */
                                        {
                                          MR_Word backend_libs__builtin_ops__V_435_435;
                                          MR_Box backend_libs__builtin_ops__Z_441;

                                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_10 == (MR_Integer) 0);
                                          if (backend_libs__builtin_ops__succeeded)
                                            {
                                              backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_508_508)) == (MR_mktag((MR_Integer) 1)));
                                              if (backend_libs__builtin_ops__succeeded)
                                                {
                                                  backend_libs__builtin_ops__Z_441 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_508_508, (MR_Integer) 0));
                                                  backend_libs__builtin_ops__V_435_435 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_508_508, (MR_Integer) 1)));
                                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_435_435 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                }
                                            }
                                        }
                                      }
                                      break;
                                    case (MR_Integer) 16:
                                      {
                                        /* case "unchecked_right_shift" */
                                        {
                                          MR_Word backend_libs__builtin_ops__V_445_445;
                                          MR_Box backend_libs__builtin_ops__Z_451;

                                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_10 == (MR_Integer) 0);
                                          if (backend_libs__builtin_ops__succeeded)
                                            {
                                              backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_508_508)) == (MR_mktag((MR_Integer) 1)));
                                              if (backend_libs__builtin_ops__succeeded)
                                                {
                                                  backend_libs__builtin_ops__Z_451 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_508_508, (MR_Integer) 0));
                                                  backend_libs__builtin_ops__V_445_445 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_508_508, (MR_Integer) 1)));
                                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_445_445 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                }
                                            }
                                        }
                                      }
                                      break;
                                    case (MR_Integer) 17:
                                      {
                                        /* case "xor" */
                                        {
                                          MR_Word backend_libs__builtin_ops__V_78_78;
                                          MR_Box backend_libs__builtin_ops__Z_224;

                                          backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_508_508)) == (MR_mktag((MR_Integer) 1)));
                                          if (backend_libs__builtin_ops__succeeded)
                                            {
                                              backend_libs__builtin_ops__Z_224 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_508_508, (MR_Integer) 0));
                                              backend_libs__builtin_ops__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_508_508, (MR_Integer) 1)));
                                              backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_78_78 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                              if (backend_libs__builtin_ops__succeeded)
                                                switch (backend_libs__builtin_ops__ProcNum_10) {
                                                  default:
                                                    backend_libs__builtin_ops__succeeded = MR_FALSE;
                                                    break;
                                                  case (MR_Integer) 0:
                                                    backend_libs__builtin_ops__succeeded = MR_TRUE;
                                                    break;
                                                  case (MR_Integer) 1:
                                                    backend_libs__builtin_ops__succeeded = MR_TRUE;
                                                    break;
                                                  case (MR_Integer) 2:
                                                    backend_libs__builtin_ops__succeeded = MR_TRUE;
                                                    break;
                                                }
                                            }
                                        }
                                      }
                                      break;
                                  }
                                }
                              }
                          }
                        }
                        break;
                      case (MR_Integer) 3:
                        {
                          /* case "io" */
                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_10 == (MR_Integer) 0);
                          if (backend_libs__builtin_ops__succeeded)
                            {
                              backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_496_496 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              if (backend_libs__builtin_ops__succeeded)
                                {
                                  if ((strcmp(backend_libs__builtin_ops__PredName_6, (MR_String) "unsafe_get_io_state") == 0))
                                    backend_libs__builtin_ops__succeeded = MR_TRUE;
                                  else
                                  if ((strcmp(backend_libs__builtin_ops__PredName_6, (MR_String) "unsafe_set_io_state") == 0))
                                    backend_libs__builtin_ops__succeeded = MR_TRUE;
                                  else
                                    backend_libs__builtin_ops__succeeded = MR_FALSE;
                                }
                            }
                        }
                        break;
                      case (MR_Integer) 4:
                        {
                          /* case "private_builtin" */
                          {
                            MR_Integer backend_libs__builtin_ops__slot_4;
                            MR_String backend_libs__builtin_ops__str_5;

                            backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_10 == (MR_Integer) 0);
                            if (backend_libs__builtin_ops__succeeded)
                              {
                                /* hashed string jump switch */
                                /* compute the hash value of the input string */
                                backend_libs__builtin_ops__slot_4 = ((MR_hash_string5(backend_libs__builtin_ops__PredName_6)) & (MR_Integer) 31);
                                /* hash chain loop */
                                do
                                  {
                                    /* lookup the string for this hash slot */
                                    backend_libs__builtin_ops__str_5 = ((&backend_libs__builtin_ops_vector_common_2[0 + backend_libs__builtin_ops__slot_4]))->backend_libs__builtin_ops__vector_common_type_2_0__vct_2_f_0;
                                    /* did we find a match? */
                                    if ((((backend_libs__builtin_ops__str_5 != NULL)) && ((strcmp(backend_libs__builtin_ops__str_5, backend_libs__builtin_ops__PredName_6) == 0))))
                                      {
                                        /* we found a match; dispatch to the corresponding code */
                                        switch (backend_libs__builtin_ops__slot_4) {
                                          default: /*NOTREACHED*/ MR_assert(0);
                                          case (MR_Integer) 1:
                                            {
                                              /* case "pointer_equal" */
                                              {
                                                MR_Word backend_libs__builtin_ops__V_494_494;
                                                MR_Box backend_libs__builtin_ops__V_495_495;

                                                backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_496_496)) == (MR_mktag((MR_Integer) 1)));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  {
                                                    backend_libs__builtin_ops__V_495_495 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_496_496, (MR_Integer) 0));
                                                    backend_libs__builtin_ops__V_494_494 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_496_496, (MR_Integer) 1)));
                                                    if ((backend_libs__builtin_ops__V_494_494 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                                                      backend_libs__builtin_ops__succeeded = MR_TRUE;
                                                    else
                                                      {
                                                        MR_Word backend_libs__builtin_ops__V_140_140 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_494_494, (MR_Integer) 1)));
                                                        MR_Box backend_libs__builtin_ops__Y_191 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_494_494, (MR_Integer) 0));

                                                        backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_140_140 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                      }
                                                  }
                                              }
                                            }
                                            break;
                                          case (MR_Integer) 2:
                                            {
                                              /* case "unsafe_type_cast" */
                                              {
                                                MR_Word backend_libs__builtin_ops__V_158_158;
                                                MR_Box backend_libs__builtin_ops__Y_184;

                                                backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_496_496)) == (MR_mktag((MR_Integer) 1)));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  {
                                                    backend_libs__builtin_ops__Y_184 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_496_496, (MR_Integer) 0));
                                                    backend_libs__builtin_ops__V_158_158 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_496_496, (MR_Integer) 1)));
                                                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_158_158 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                  }
                                              }
                                            }
                                            break;
                                          case (MR_Integer) 3:
                                            {
                                              /* case "trace_get_io_state" */
                                              backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_496_496 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                            }
                                            break;
                                          case (MR_Integer) 9:
                                            {
                                              /* case "builtin_int_gt" */
                                              {
                                                MR_Word backend_libs__builtin_ops__V_153_153;
                                                MR_Box backend_libs__builtin_ops__Y_186;

                                                backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_496_496)) == (MR_mktag((MR_Integer) 1)));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  {
                                                    backend_libs__builtin_ops__Y_186 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_496_496, (MR_Integer) 0));
                                                    backend_libs__builtin_ops__V_153_153 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_496_496, (MR_Integer) 1)));
                                                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_153_153 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                  }
                                              }
                                            }
                                            break;
                                          case (MR_Integer) 14:
                                            {
                                              /* case "builtin_int_lt" */
                                              {
                                                MR_Word backend_libs__builtin_ops__V_462_462;
                                                MR_Box backend_libs__builtin_ops__Y_467;

                                                backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_496_496)) == (MR_mktag((MR_Integer) 1)));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  {
                                                    backend_libs__builtin_ops__Y_467 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_496_496, (MR_Integer) 0));
                                                    backend_libs__builtin_ops__V_462_462 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_496_496, (MR_Integer) 1)));
                                                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_462_462 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                  }
                                              }
                                            }
                                            break;
                                          case (MR_Integer) 17:
                                          case (MR_Integer) 21:
                                            {
                                              /* case "store_at_ref", "store_at_ref_impure" */
                                              {
                                                MR_Word backend_libs__builtin_ops__V_161_161;
                                                MR_Box backend_libs__builtin_ops__Y_182;

                                                backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_496_496)) == (MR_mktag((MR_Integer) 1)));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  {
                                                    backend_libs__builtin_ops__Y_182 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_496_496, (MR_Integer) 0));
                                                    backend_libs__builtin_ops__V_161_161 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_496_496, (MR_Integer) 1)));
                                                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_161_161 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                  }
                                              }
                                            }
                                            break;
                                          case (MR_Integer) 27:
                                            {
                                              /* case "builtin_compound_eq" */
                                              {
                                                MR_Word backend_libs__builtin_ops__V_148_148;
                                                MR_Box backend_libs__builtin_ops__Y_188;

                                                backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_496_496)) == (MR_mktag((MR_Integer) 1)));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  {
                                                    backend_libs__builtin_ops__Y_188 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_496_496, (MR_Integer) 0));
                                                    backend_libs__builtin_ops__V_148_148 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_496_496, (MR_Integer) 1)));
                                                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_148_148 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                  }
                                              }
                                            }
                                            break;
                                          case (MR_Integer) 29:
                                            {
                                              /* case "builtin_compound_lt" */
                                              {
                                                MR_Word backend_libs__builtin_ops__V_453_453;
                                                MR_Box backend_libs__builtin_ops__Y_458;

                                                backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_496_496)) == (MR_mktag((MR_Integer) 1)));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  {
                                                    backend_libs__builtin_ops__Y_458 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_496_496, (MR_Integer) 0));
                                                    backend_libs__builtin_ops__V_453_453 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_496_496, (MR_Integer) 1)));
                                                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_453_453 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                  }
                                              }
                                            }
                                            break;
                                          case (MR_Integer) 31:
                                            {
                                              /* case "trace_set_io_state" */
                                              backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_496_496 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                            }
                                            break;
                                        }
                                        /* jump out of search loop */
                                        goto label_0;
                                      }
                                    else
                                      {
                                        /* no match yet, so get next slot in hash chain */
                                        backend_libs__builtin_ops__slot_4 = ((&backend_libs__builtin_ops_vector_common_2[0 + backend_libs__builtin_ops__slot_4]))->backend_libs__builtin_ops__vector_common_type_2_0__vct_2_f_1;
                                      }
                                  }
                                while ((backend_libs__builtin_ops__slot_4 >= (MR_Integer) 0));
                                backend_libs__builtin_ops__succeeded = MR_FALSE;
                              label_0:;
                              }
                          }
                        }
                        break;
                      case (MR_Integer) 5:
                        {
                          /* case "term_size_prof_builtin" */
                          {
                            MR_Word backend_libs__builtin_ops__V_132_132;
                            MR_Word backend_libs__builtin_ops__V_133_133;
                            MR_Box backend_libs__builtin_ops__Y_199;
                            MR_Box backend_libs__builtin_ops__Z_23;

                            backend_libs__builtin_ops__succeeded = (strcmp(backend_libs__builtin_ops__PredName_6, (MR_String) "term_size_plus") == 0);
                            if (backend_libs__builtin_ops__succeeded)
                              {
                                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_10 == (MR_Integer) 0);
                                if (backend_libs__builtin_ops__succeeded)
                                  {
                                    backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_496_496)) == (MR_mktag((MR_Integer) 1)));
                                    if (backend_libs__builtin_ops__succeeded)
                                      {
                                        backend_libs__builtin_ops__Y_199 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_496_496, (MR_Integer) 0));
                                        backend_libs__builtin_ops__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_496_496, (MR_Integer) 1)));
                                        backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_132_132)) == (MR_mktag((MR_Integer) 1)));
                                        if (backend_libs__builtin_ops__succeeded)
                                          {
                                            backend_libs__builtin_ops__Z_23 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_132_132, (MR_Integer) 0));
                                            backend_libs__builtin_ops__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_132_132, (MR_Integer) 1)));
                                            backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_133_133 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                          }
                                      }
                                  }
                              }
                          }
                        }
                        break;
                    }
                    /* jump out of search loop */
                    goto label_2;
                  }
                else
                if ((backend_libs__builtin_ops__result_3 < (MR_Integer) 0))
                  backend_libs__builtin_ops__hi_1 = (backend_libs__builtin_ops__mid_2 - (MR_Integer) 1);
                else
                  backend_libs__builtin_ops__lo_0 = (backend_libs__builtin_ops__mid_2 + (MR_Integer) 1);
              }
            while ((backend_libs__builtin_ops__lo_0 <= backend_libs__builtin_ops__hi_1));
            backend_libs__builtin_ops__succeeded = MR_FALSE;
          label_2:;
          }
      }
    return backend_libs__builtin_ops__succeeded;
  }
}

void mercury__backend_libs__builtin_ops__init(void)
{
}

void mercury__backend_libs__builtin_ops__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&backend_libs__builtin_ops__backend_libs__builtin_ops__type_ctor_info_array_elem_type_0);
	MR_register_type_ctor_info(&backend_libs__builtin_ops__backend_libs__builtin_ops__type_ctor_info_binary_op_0);
	MR_register_type_ctor_info(&backend_libs__builtin_ops__backend_libs__builtin_ops__type_ctor_info_scalar_array_elem_type_0);
	MR_register_type_ctor_info(&backend_libs__builtin_ops__backend_libs__builtin_ops__type_ctor_info_simple_code_1);
	MR_register_type_ctor_info(&backend_libs__builtin_ops__backend_libs__builtin_ops__type_ctor_info_simple_expr_1);
	MR_register_type_ctor_info(&backend_libs__builtin_ops__backend_libs__builtin_ops__type_ctor_info_unary_op_0);
}

void mercury__backend_libs__builtin_ops__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module backend_libs.builtin_ops. */
