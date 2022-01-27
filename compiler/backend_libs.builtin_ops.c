/*
** Automatically generated from `builtin_ops.m'
** by the Mercury compiler,
** version rotd-2017-01-16
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

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_45;

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_46;

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_47;

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_48;

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_49;

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_50;

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_51;

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_52;

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_53;

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_54;

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_55;

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_56;

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_57;

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_58;

static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_binary_op_0_0[57];

static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_binary_op_0_1[1];

static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_binary_op_0_2[1];

static const MR_DuPtagLayout backend_libs__builtin_ops__backend_libs__builtin_ops__du_ptag_ordered_binary_op_0[3];

static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_name_ordered_binary_op_0[59];

static const MR_Integer backend_libs__builtin_ops__backend_libs__builtin_ops__functor_number_map_binary_op_0[59];

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

static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_expr_1_3[1];

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_expr_1_3;

static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_expr_1_4[2];

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_expr_1_4;

static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_expr_1_5[3];

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_expr_1_5;

static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_simple_expr_1_0[1];

static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_simple_expr_1_1[1];

static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_simple_expr_1_2[1];

static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_simple_expr_1_3[3];

static const MR_DuPtagLayout backend_libs__builtin_ops__backend_libs__builtin_ops__du_ptag_ordered_simple_expr_1[4];

static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_name_ordered_simple_expr_1[6];

static const MR_Integer backend_libs__builtin_ops__backend_libs__builtin_ops__functor_number_map_simple_expr_1[6];

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

static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_14;

static const MR_EnumFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__enum_value_ordered_unary_op_0[15];

static const MR_EnumFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__enum_name_ordered_unary_op_0[15];

static const MR_Integer backend_libs__builtin_ops__backend_libs__builtin_ops__functor_number_map_unary_op_0[15];

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


static /* final */ const MR_Box backend_libs__builtin_ops_scalar_common_1[2][2];

static /* final */ const MR_Box backend_libs__builtin_ops_scalar_common_4[3][1];

static /* final */ const MR_Float backend_libs__builtin_ops_scalar_common_5[1];


/* sealed */ struct backend_libs__builtin_ops__vector_common_type_2_0_s {
  const MR_String backend_libs__builtin_ops__vector_common_type_2_0__vct_2_f_0;
  const MR_Integer backend_libs__builtin_ops__vector_common_type_2_0__vct_2_f_1;
};

static /* final */ const struct backend_libs__builtin_ops__vector_common_type_2_0_s backend_libs__builtin_ops_vector_common_2[78];

/* sealed */ struct backend_libs__builtin_ops__vector_common_type_3_0_s {
  const MR_String backend_libs__builtin_ops__vector_common_type_3_0__vct_3_f_0;
};

static /* final */ const struct backend_libs__builtin_ops__vector_common_type_3_0_s backend_libs__builtin_ops_vector_common_3[160];



static /* final */ const MR_Box backend_libs__builtin_ops_scalar_common_1[2][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&backend_libs__builtin_ops__backend_libs__builtin_ops__type_ctor_info_scalar_array_elem_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    (MR_Box) &backend_libs__builtin_ops_scalar_common_5[0]
  },
};

static /* final */ const MR_Box backend_libs__builtin_ops_scalar_common_4[3][1] = {
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
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
};

static /* final */ const MR_Float backend_libs__builtin_ops_scalar_common_5[1] = {
  /* row 0 */
  (MR_Float) 0.0000000000000000,
};


static /* final */ const struct backend_libs__builtin_ops__vector_common_type_2_0_s backend_libs__builtin_ops_vector_common_2[78] = {
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
    (MR_String) "uint",
    (MR_Integer) 6
  },
  /* row 39 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 40 */
  {
    (MR_String) "pointer_equal",
    (MR_Integer) -1
  },
  /* row 41 */
  {
    (MR_String) "unsafe_type_cast",
    (MR_Integer) -1
  },
  /* row 42 */
  {
    (MR_String) "trace_get_io_state",
    (MR_Integer) -1
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
    NULL,
    (MR_Integer) -2
  },
  /* row 48 */
  {
    (MR_String) "builtin_int_gt",
    (MR_Integer) 2
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
    NULL,
    (MR_Integer) -2
  },
  /* row 53 */
  {
    (MR_String) "builtin_int_lt",
    (MR_Integer) -1
  },
  /* row 54 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 55 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 56 */
  {
    (MR_String) "store_at_ref",
    (MR_Integer) -1
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
    NULL,
    (MR_Integer) -2
  },
  /* row 60 */
  {
    (MR_String) "store_at_ref_impure",
    (MR_Integer) -1
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
    NULL,
    (MR_Integer) -2
  },
  /* row 66 */
  {
    (MR_String) "builtin_compound_eq",
    (MR_Integer) -1
  },
  /* row 67 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 68 */
  {
    (MR_String) "builtin_compound_lt",
    (MR_Integer) -1
  },
  /* row 69 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 70 */
  {
    (MR_String) "trace_set_io_state",
    (MR_Integer) -1
  },
  /* row 71 */
  {
    (MR_String) "builtin",
    (MR_Integer) 0
  },
  /* row 72 */
  {
    (MR_String) "float",
    (MR_Integer) 1
  },
  /* row 73 */
  {
    (MR_String) "int",
    (MR_Integer) 2
  },
  /* row 74 */
  {
    (MR_String) "io",
    (MR_Integer) 3
  },
  /* row 75 */
  {
    (MR_String) "private_builtin",
    (MR_Integer) 4
  },
  /* row 76 */
  {
    (MR_String) "term_size_prof_builtin",
    (MR_Integer) 5
  },
  /* row 77 */
  {
    (MR_String) "uint",
    (MR_Integer) 6
  },
};

static /* final */ const struct backend_libs__builtin_ops__vector_common_type_3_0_s backend_libs__builtin_ops_vector_common_3[160] = {
  /* row 0 */   {     NULL },
  /* row 1 */   {     (MR_String) ">=" },
  /* row 2 */   {     NULL },
  /* row 3 */   {     NULL },
  /* row 4 */   {     NULL },
  /* row 5 */   {     NULL },
  /* row 6 */   {     (MR_String) "xor" },
  /* row 7 */   {     NULL },
  /* row 8 */   {     NULL },
  /* row 9 */   {     NULL },
  /* row 10 */   {     NULL },
  /* row 11 */   {     NULL },
  /* row 12 */   {     NULL },
  /* row 13 */   {     NULL },
  /* row 14 */   {     NULL },
  /* row 15 */   {     NULL },
  /* row 16 */   {     NULL },
  /* row 17 */   {     (MR_String) "/\\" },
  /* row 18 */   {     NULL },
  /* row 19 */   {     NULL },
  /* row 20 */   {     (MR_String) "unchecked_rem" },
  /* row 21 */   {     NULL },
  /* row 22 */   {     NULL },
  /* row 23 */   {     NULL },
  /* row 24 */   {     (MR_String) "unchecked_quotient" },
  /* row 25 */   {     NULL },
  /* row 26 */   {     NULL },
  /* row 27 */   {     NULL },
  /* row 28 */   {     NULL },
  /* row 29 */   {     (MR_String) "\\" },
  /* row 30 */   {     NULL },
  /* row 31 */   {     NULL },
  /* row 32 */   {     NULL },
  /* row 33 */   {     NULL },
  /* row 34 */   {     NULL },
  /* row 35 */   {     (MR_String) "=<" },
  /* row 36 */   {     NULL },
  /* row 37 */   {     NULL },
  /* row 38 */   {     NULL },
  /* row 39 */   {     NULL },
  /* row 40 */   {     NULL },
  /* row 41 */   {     NULL },
  /* row 42 */   {     (MR_String) "+" },
  /* row 43 */   {     (MR_String) "*" },
  /* row 44 */   {     (MR_String) "-" },
  /* row 45 */   {     NULL },
  /* row 46 */   {     NULL },
  /* row 47 */   {     NULL },
  /* row 48 */   {     NULL },
  /* row 49 */   {     (MR_String) "\\/" },
  /* row 50 */   {     NULL },
  /* row 51 */   {     NULL },
  /* row 52 */   {     NULL },
  /* row 53 */   {     NULL },
  /* row 54 */   {     NULL },
  /* row 55 */   {     NULL },
  /* row 56 */   {     NULL },
  /* row 57 */   {     NULL },
  /* row 58 */   {     NULL },
  /* row 59 */   {     NULL },
  /* row 60 */   {     NULL },
  /* row 61 */   {     (MR_String) "<" },
  /* row 62 */   {     NULL },
  /* row 63 */   {     (MR_String) ">" },
  /* row 64 */   {     NULL },
  /* row 65 */   {     (MR_String) ">=" },
  /* row 66 */   {     NULL },
  /* row 67 */   {     (MR_String) "=<" },
  /* row 68 */   {     NULL },
  /* row 69 */   {     NULL },
  /* row 70 */   {     NULL },
  /* row 71 */   {     NULL },
  /* row 72 */   {     (MR_String) "unchecked_quotient" },
  /* row 73 */   {     NULL },
  /* row 74 */   {     (MR_String) "+" },
  /* row 75 */   {     (MR_String) "*" },
  /* row 76 */   {     (MR_String) "-" },
  /* row 77 */   {     (MR_String) "<" },
  /* row 78 */   {     NULL },
  /* row 79 */   {     (MR_String) ">" },
  /* row 80 */   {     NULL },
  /* row 81 */   {     (MR_String) ">=" },
  /* row 82 */   {     NULL },
  /* row 83 */   {     NULL },
  /* row 84 */   {     NULL },
  /* row 85 */   {     NULL },
  /* row 86 */   {     (MR_String) "xor" },
  /* row 87 */   {     NULL },
  /* row 88 */   {     NULL },
  /* row 89 */   {     NULL },
  /* row 90 */   {     NULL },
  /* row 91 */   {     NULL },
  /* row 92 */   {     NULL },
  /* row 93 */   {     NULL },
  /* row 94 */   {     NULL },
  /* row 95 */   {     NULL },
  /* row 96 */   {     NULL },
  /* row 97 */   {     (MR_String) "/\\" },
  /* row 98 */   {     NULL },
  /* row 99 */   {     NULL },
  /* row 100 */   {     (MR_String) "unchecked_rem" },
  /* row 101 */   {     NULL },
  /* row 102 */   {     NULL },
  /* row 103 */   {     NULL },
  /* row 104 */   {     (MR_String) "unchecked_quotient" },
  /* row 105 */   {     NULL },
  /* row 106 */   {     NULL },
  /* row 107 */   {     NULL },
  /* row 108 */   {     NULL },
  /* row 109 */   {     (MR_String) "\\" },
  /* row 110 */   {     NULL },
  /* row 111 */   {     NULL },
  /* row 112 */   {     NULL },
  /* row 113 */   {     NULL },
  /* row 114 */   {     NULL },
  /* row 115 */   {     (MR_String) "=<" },
  /* row 116 */   {     NULL },
  /* row 117 */   {     NULL },
  /* row 118 */   {     NULL },
  /* row 119 */   {     NULL },
  /* row 120 */   {     NULL },
  /* row 121 */   {     NULL },
  /* row 122 */   {     (MR_String) "+" },
  /* row 123 */   {     (MR_String) "*" },
  /* row 124 */   {     (MR_String) "-" },
  /* row 125 */   {     NULL },
  /* row 126 */   {     NULL },
  /* row 127 */   {     NULL },
  /* row 128 */   {     NULL },
  /* row 129 */   {     (MR_String) "\\/" },
  /* row 130 */   {     NULL },
  /* row 131 */   {     NULL },
  /* row 132 */   {     NULL },
  /* row 133 */   {     NULL },
  /* row 134 */   {     NULL },
  /* row 135 */   {     NULL },
  /* row 136 */   {     NULL },
  /* row 137 */   {     NULL },
  /* row 138 */   {     NULL },
  /* row 139 */   {     NULL },
  /* row 140 */   {     NULL },
  /* row 141 */   {     (MR_String) "<" },
  /* row 142 */   {     NULL },
  /* row 143 */   {     (MR_String) ">" },
  /* row 144 */   {     NULL },
  /* row 145 */   {     (MR_String) ">=" },
  /* row 146 */   {     NULL },
  /* row 147 */   {     (MR_String) "=<" },
  /* row 148 */   {     NULL },
  /* row 149 */   {     NULL },
  /* row 150 */   {     NULL },
  /* row 151 */   {     NULL },
  /* row 152 */   {     (MR_String) "unchecked_quotient" },
  /* row 153 */   {     NULL },
  /* row 154 */   {     (MR_String) "+" },
  /* row 155 */   {     (MR_String) "*" },
  /* row 156 */   {     (MR_String) "-" },
  /* row 157 */   {     (MR_String) "<" },
  /* row 158 */   {     NULL },
  /* row 159 */   {     (MR_String) ">" },
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
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
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
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
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
  (MR_Integer) 17,
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
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
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
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
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
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
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
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
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
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
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
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
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
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
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
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
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
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
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
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
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
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
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
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
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
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
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
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
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
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
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
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
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
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
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
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
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
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
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
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
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
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
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
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
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
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
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
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
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
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
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
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
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
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
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
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
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
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
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
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_30 = {
  (MR_String) "uint_eq",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 28,
  (MR_Integer) 30,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_31 = {
  (MR_String) "uint_ne",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 29,
  (MR_Integer) 31,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_32 = {
  (MR_String) "uint_lt",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 30,
  (MR_Integer) 32,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_33 = {
  (MR_String) "uint_gt",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 31,
  (MR_Integer) 33,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_34 = {
  (MR_String) "uint_le",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 32,
  (MR_Integer) 34,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_35 = {
  (MR_String) "uint_ge",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 33,
  (MR_Integer) 35,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_36 = {
  (MR_String) "uint_add",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 34,
  (MR_Integer) 36,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_37 = {
  (MR_String) "uint_sub",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 35,
  (MR_Integer) 37,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_38 = {
  (MR_String) "uint_mul",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 36,
  (MR_Integer) 38,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_39 = {
  (MR_String) "uint_div",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 37,
  (MR_Integer) 39,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_40 = {
  (MR_String) "uint_mod",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 38,
  (MR_Integer) 40,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_41 = {
  (MR_String) "uint_bitwise_and",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 39,
  (MR_Integer) 41,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_42 = {
  (MR_String) "uint_bitwise_or",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 40,
  (MR_Integer) 42,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_43 = {
  (MR_String) "uint_bitwise_xor",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 41,
  (MR_Integer) 43,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_44 = {
  (MR_String) "float_plus",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 42,
  (MR_Integer) 44,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_45 = {
  (MR_String) "float_minus",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 43,
  (MR_Integer) 45,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_46 = {
  (MR_String) "float_times",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 44,
  (MR_Integer) 46,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_47 = {
  (MR_String) "float_divide",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 45,
  (MR_Integer) 47,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_48 = {
  (MR_String) "float_eq",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 46,
  (MR_Integer) 48,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_49 = {
  (MR_String) "float_ne",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 47,
  (MR_Integer) 49,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_50 = {
  (MR_String) "float_lt",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 48,
  (MR_Integer) 50,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_51 = {
  (MR_String) "float_gt",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 49,
  (MR_Integer) 51,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_52 = {
  (MR_String) "float_le",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 50,
  (MR_Integer) 52,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_53 = {
  (MR_String) "float_ge",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 51,
  (MR_Integer) 53,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_54 = {
  (MR_String) "float_word_bits",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 52,
  (MR_Integer) 54,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_55 = {
  (MR_String) "float_from_dword",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 53,
  (MR_Integer) 55,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_56 = {
  (MR_String) "pointer_equal_conservative",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 54,
  (MR_Integer) 56,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_57 = {
  (MR_String) "compound_eq",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 55,
  (MR_Integer) 57,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_58 = {
  (MR_String) "compound_lt",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 56,
  (MR_Integer) 58,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_binary_op_0_0[57] = {
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
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_44,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_45,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_46,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_47,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_48,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_49,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_50,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_51,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_52,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_53,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_54,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_55,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_56,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_57,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_58
};

static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_binary_op_0_1[1] = {
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_15
};

static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_binary_op_0_2[1] = {
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_24
};

static const MR_DuPtagLayout backend_libs__builtin_ops__backend_libs__builtin_ops__du_ptag_ordered_binary_op_0[3] = {
  {
    (MR_Integer) 57,
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

static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_name_ordered_binary_op_0[59] = {
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_15,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_7,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_8,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_9,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_14,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_57,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_58,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_12,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_47,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_48,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_55,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_53,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_51,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_52,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_50,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_45,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_49,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_44,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_46,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_54,
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
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_56,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_23,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_17,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_22,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_20,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_21,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_19,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_18,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_16,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_36,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_41,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_42,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_43,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_39,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_30,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_35,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_33,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_34,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_32,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_40,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_38,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_31,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_37,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_5,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_6,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_29
};

static const MR_Integer backend_libs__builtin_ops__backend_libs__builtin_ops__functor_number_map_binary_op_0[59] = {
  (MR_Integer) 20,
  (MR_Integer) 28,
  (MR_Integer) 27,
  (MR_Integer) 21,
  (MR_Integer) 26,
  (MR_Integer) 56,
  (MR_Integer) 57,
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
  (MR_Integer) 58,
  (MR_Integer) 47,
  (MR_Integer) 54,
  (MR_Integer) 51,
  (MR_Integer) 49,
  (MR_Integer) 50,
  (MR_Integer) 48,
  (MR_Integer) 42,
  (MR_Integer) 55,
  (MR_Integer) 53,
  (MR_Integer) 46,
  (MR_Integer) 52,
  (MR_Integer) 43,
  (MR_Integer) 44,
  (MR_Integer) 45,
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
  (MR_Integer) 17,
  (MR_Integer) 3,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (backend_libs__builtin_ops____Unify____binary_op_0_0_10001)),
  ((MR_Box) (backend_libs__builtin_ops____Compare____binary_op_0_0_10001)),
  (MR_String) "backend_libs.builtin_ops",
  (MR_String) "binary_op",
  {     backend_libs__builtin_ops__backend_libs__builtin_ops__du_name_ordered_binary_op_0 },
  {     backend_libs__builtin_ops__backend_libs__builtin_ops__du_ptag_ordered_binary_op_0 },
  (MR_Integer) 59,
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
  (MR_Integer) 17,
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
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
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
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
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
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
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
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
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
  (MR_Integer) 17,
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
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
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
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_expr_1_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_uint_0
};

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_expr_1_2 = {
  (MR_String) "uint_const",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_expr_1_2,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_expr_1_3[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0
};

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_expr_1_3 = {
  (MR_String) "float_const",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 3,
  backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_expr_1_3,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_expr_1_4[2] = {
  (MR_PseudoTypeInfo) &backend_libs__builtin_ops__backend_libs__builtin_ops__type_ctor_info_unary_op_0,
  (MR_PseudoTypeInfo) &backend_libs__builtin_ops__backend_libs__builtin_ops__pti_simple_expr_1__pseudo_1
};

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_expr_1_4 = {
  (MR_String) "unary",
  (MR_Integer) 2,
  (MR_Integer) 2,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 4,
  backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_expr_1_4,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_expr_1_5[3] = {
  (MR_PseudoTypeInfo) &backend_libs__builtin_ops__backend_libs__builtin_ops__type_ctor_info_binary_op_0,
  (MR_PseudoTypeInfo) &backend_libs__builtin_ops__backend_libs__builtin_ops__pti_simple_expr_1__pseudo_1,
  (MR_PseudoTypeInfo) &backend_libs__builtin_ops__backend_libs__builtin_ops__pti_simple_expr_1__pseudo_1
};

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_expr_1_5 = {
  (MR_String) "binary",
  (MR_Integer) 3,
  (MR_Integer) 6,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 5,
  backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_expr_1_5,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
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

static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_simple_expr_1_3[3] = {
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_expr_1_3,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_expr_1_4,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_expr_1_5
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
    (MR_Integer) 3,
    mercury__private_builtin__MR_SECTAG_REMOTE,
    backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_simple_expr_1_3
  }
};

static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_name_ordered_simple_expr_1[6] = {
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_expr_1_5,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_expr_1_3,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_expr_1_1,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_expr_1_0,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_expr_1_2,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_expr_1_4
};

static const MR_Integer backend_libs__builtin_ops__backend_libs__builtin_ops__functor_number_map_simple_expr_1[6] = {
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 4,
  (MR_Integer) 1,
  (MR_Integer) 5,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct backend_libs__builtin_ops__backend_libs__builtin_ops__type_ctor_info_simple_expr_1 = {
  (MR_Integer) 1,
  (MR_Integer) 17,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (backend_libs__builtin_ops____Unify____simple_expr_1_0_10001)),
  ((MR_Box) (backend_libs__builtin_ops____Compare____simple_expr_1_0_10001)),
  (MR_String) "backend_libs.builtin_ops",
  (MR_String) "simple_expr",
  {     backend_libs__builtin_ops__backend_libs__builtin_ops__du_name_ordered_simple_expr_1 },
  {     backend_libs__builtin_ops__backend_libs__builtin_ops__du_ptag_ordered_simple_expr_1 },
  (MR_Integer) 6,
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
  (MR_String) "uint_bitwise_complement",
  (MR_Integer) 8
};

static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_9 = {
  (MR_String) "hash_string",
  (MR_Integer) 9
};

static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_10 = {
  (MR_String) "hash_string2",
  (MR_Integer) 10
};

static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_11 = {
  (MR_String) "hash_string3",
  (MR_Integer) 11
};

static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_12 = {
  (MR_String) "hash_string4",
  (MR_Integer) 12
};

static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_13 = {
  (MR_String) "hash_string5",
  (MR_Integer) 13
};

static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_14 = {
  (MR_String) "hash_string6",
  (MR_Integer) 14
};

static const MR_EnumFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__enum_value_ordered_unary_op_0[15] = {
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
  &backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_13,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_14
};

static const MR_EnumFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__enum_name_ordered_unary_op_0[15] = {
  &backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_6,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_9,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_10,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_11,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_12,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_13,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_14,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_7,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_4,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_0,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_3,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_1,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_8,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_5,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_2
};

static const MR_Integer backend_libs__builtin_ops__backend_libs__builtin_ops__functor_number_map_unary_op_0[15] = {
  (MR_Integer) 9,
  (MR_Integer) 11,
  (MR_Integer) 14,
  (MR_Integer) 10,
  (MR_Integer) 8,
  (MR_Integer) 13,
  (MR_Integer) 0,
  (MR_Integer) 7,
  (MR_Integer) 12,
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 4,
  (MR_Integer) 5,
  (MR_Integer) 6
};

const MR_TypeCtorInfo_Struct backend_libs__builtin_ops__backend_libs__builtin_ops__type_ctor_info_unary_op_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (backend_libs__builtin_ops____Unify____unary_op_0_0_10001)),
  ((MR_Box) (backend_libs__builtin_ops____Compare____unary_op_0_0_10001)),
  (MR_String) "backend_libs.builtin_ops",
  (MR_String) "unary_op",
  {     backend_libs__builtin_ops__backend_libs__builtin_ops__enum_name_ordered_unary_op_0 },
  {     backend_libs__builtin_ops__backend_libs__builtin_ops__enum_value_ordered_unary_op_0 },
  (MR_Integer) 15,
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
  MR_Word backend_libs__builtin_ops__TypeInfo_for_T_117,
  MR_Word * backend_libs__builtin_ops__HeadVar__1_1,
  MR_Word backend_libs__builtin_ops__HeadVar__2_2,
  MR_Word backend_libs__builtin_ops__HeadVar__3_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool backend_libs__builtin_ops__succeeded;
        MR_Integer backend_libs__builtin_ops__CastX_115 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;
        MR_Integer backend_libs__builtin_ops__CastY_116 = (MR_Integer) backend_libs__builtin_ops__HeadVar__3_3;

        backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastX_115 == backend_libs__builtin_ops__CastY_116);
        if (backend_libs__builtin_ops__succeeded)
          *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 0;
        else
          switch (MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__2_2)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Box backend_libs__builtin_ops__V_134_134 = (MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 0));

                switch (MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Box backend_libs__builtin_ops__V_5_5 = (MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__HeadVar__3_3, (MR_Integer) 0));

                      {
                        mercury__builtin__compare_3_p_0(backend_libs__builtin_ops__TypeInfo_for_T_117, backend_libs__builtin_ops__HeadVar__1_1, backend_libs__builtin_ops__V_134_134, backend_libs__builtin_ops__V_5_5);
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
                      case (MR_Integer) 2:
                        *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer backend_libs__builtin_ops__V_133_133 = ((MR_Integer) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 0)));

                switch (MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Integer backend_libs__builtin_ops__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__HeadVar__3_3, (MR_Integer) 0)));

                      {
                        mercury__private_builtin__builtin_compare_int_3_p_0(backend_libs__builtin_ops__HeadVar__1_1, backend_libs__builtin_ops__V_133_133, backend_libs__builtin_ops__V_22_22);
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
                      case (MR_Integer) 2:
                        *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Unsigned backend_libs__builtin_ops__V_135_135 = ((MR_Unsigned) (MR_hl_field(MR_mktag(2), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 0)));

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
                      MR_Unsigned backend_libs__builtin_ops__V_39_39 = ((MR_Unsigned) (MR_hl_field(MR_mktag(2), backend_libs__builtin_ops__HeadVar__3_3, (MR_Integer) 0)));

                      {
                        mercury__private_builtin__builtin_compare_uint_3_p_0(backend_libs__builtin_ops__HeadVar__1_1, backend_libs__builtin_ops__V_135_135, backend_libs__builtin_ops__V_39_39);
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
                      case (MR_Integer) 2:
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
                    MR_Float backend_libs__builtin_ops__V_132_132 = MR_unbox_float((MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 1)));

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
                              MR_Float backend_libs__builtin_ops__V_56_56 = MR_unbox_float((MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__3_3, (MR_Integer) 1)));

                              {
                                mercury__private_builtin__builtin_compare_float_3_p_0(backend_libs__builtin_ops__HeadVar__1_1, backend_libs__builtin_ops__V_132_132, backend_libs__builtin_ops__V_56_56);
                              }
                            }
                            break;
                          case (MR_Integer) 1:
                            *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 1;
                            break;
                          case (MR_Integer) 2:
                            *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 1;
                            break;
                        }
                        break;
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word backend_libs__builtin_ops__V_136_136 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 2)));
                    MR_Word backend_libs__builtin_ops__V_137_137 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 1)));

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
                              MR_Word backend_libs__builtin_ops__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__3_3, (MR_Integer) 1)));
                              MR_Word backend_libs__builtin_ops__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__3_3, (MR_Integer) 2)));
                              MR_Word backend_libs__builtin_ops__V_80_80;
                              MR_Integer backend_libs__builtin_ops__V_138_138 = (MR_Integer) backend_libs__builtin_ops__V_137_137;
                              MR_Integer backend_libs__builtin_ops__V_139_139 = (MR_Integer) backend_libs__builtin_ops__V_78_78;

                              {
                                mercury__private_builtin__builtin_compare_int_3_p_0(&backend_libs__builtin_ops__V_80_80, backend_libs__builtin_ops__V_138_138, backend_libs__builtin_ops__V_139_139);
                              }
                              backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_80_80 == (MR_Integer) 0);
                              backend_libs__builtin_ops__succeeded = !(backend_libs__builtin_ops__succeeded);
                              if (backend_libs__builtin_ops__succeeded)
                                *backend_libs__builtin_ops__HeadVar__1_1 = backend_libs__builtin_ops__V_80_80;
                              else
                                {
                                  /* direct tailcall eliminated */
                                  {
                                    MR_Word backend_libs__builtin_ops__HeadVar__2__tmp_copy_2 = backend_libs__builtin_ops__V_136_136;
                                    MR_Word backend_libs__builtin_ops__HeadVar__3__tmp_copy_3 = backend_libs__builtin_ops__V_79_79;

                                    backend_libs__builtin_ops__HeadVar__3_3 = backend_libs__builtin_ops__HeadVar__3__tmp_copy_3;
                                    backend_libs__builtin_ops__HeadVar__2_2 = backend_libs__builtin_ops__HeadVar__2__tmp_copy_2;
                                  }
                                  continue;
                                }
                            }
                            break;
                          case (MR_Integer) 2:
                            *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 1;
                            break;
                        }
                        break;
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word backend_libs__builtin_ops__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 3)));
                    MR_Word backend_libs__builtin_ops__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 2)));
                    MR_Word backend_libs__builtin_ops__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 1)));

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
                            *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 2;
                            break;
                          case (MR_Integer) 2:
                            {
                              MR_Word backend_libs__builtin_ops__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__3_3, (MR_Integer) 1)));
                              MR_Word backend_libs__builtin_ops__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__3_3, (MR_Integer) 2)));
                              MR_Word backend_libs__builtin_ops__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__3_3, (MR_Integer) 3)));
                              MR_Word backend_libs__builtin_ops__V_113_113;

                              {
                                backend_libs__builtin_ops____Compare____binary_op_0_0(&backend_libs__builtin_ops__V_113_113, backend_libs__builtin_ops__V_131_131, backend_libs__builtin_ops__V_110_110);
                              }
                              backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_113_113 == (MR_Integer) 0);
                              backend_libs__builtin_ops__succeeded = !(backend_libs__builtin_ops__succeeded);
                              if (backend_libs__builtin_ops__succeeded)
                                *backend_libs__builtin_ops__HeadVar__1_1 = backend_libs__builtin_ops__V_113_113;
                              else
                                {
                                  MR_Word backend_libs__builtin_ops__V_114_114;

                                  {
                                    backend_libs__builtin_ops____Compare____simple_expr_1_0(backend_libs__builtin_ops__TypeInfo_for_T_117, &backend_libs__builtin_ops__V_114_114, backend_libs__builtin_ops__V_130_130, backend_libs__builtin_ops__V_111_111);
                                  }
                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_114_114 == (MR_Integer) 0);
                                  backend_libs__builtin_ops__succeeded = !(backend_libs__builtin_ops__succeeded);
                                  if (backend_libs__builtin_ops__succeeded)
                                    *backend_libs__builtin_ops__HeadVar__1_1 = backend_libs__builtin_ops__V_114_114;
                                  else
                                    {
                                      /* direct tailcall eliminated */
                                      {
                                        MR_Word backend_libs__builtin_ops__HeadVar__2__tmp_copy_2 = backend_libs__builtin_ops__V_129_129;
                                        MR_Word backend_libs__builtin_ops__HeadVar__3__tmp_copy_3 = backend_libs__builtin_ops__V_112_112;

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
  MR_Word backend_libs__builtin_ops__TypeInfo_for_T_23,
  MR_Word backend_libs__builtin_ops__HeadVar__1_1,
  MR_Word backend_libs__builtin_ops__HeadVar__2_2)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool backend_libs__builtin_ops__succeeded;
        MR_Integer backend_libs__builtin_ops__CastX_21 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
        MR_Integer backend_libs__builtin_ops__CastY_22 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

        backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastX_21 == backend_libs__builtin_ops__CastY_22);
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
                      backend_libs__builtin_ops__succeeded = mercury__builtin__unify_2_p_0(backend_libs__builtin_ops__TypeInfo_for_T_23, backend_libs__builtin_ops__V_3_3, backend_libs__builtin_ops__V_4_4);
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
                MR_Unsigned backend_libs__builtin_ops__V_7_7 = ((MR_Unsigned) (MR_hl_field(MR_mktag(2), backend_libs__builtin_ops__HeadVar__1_1, (MR_Integer) 0)));
                MR_Unsigned backend_libs__builtin_ops__V_8_8;

                backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
                if (backend_libs__builtin_ops__succeeded)
                  {
                    backend_libs__builtin_ops__V_8_8 = ((MR_Unsigned) (MR_hl_field(MR_mktag(2), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 0)));
                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_7_7 == backend_libs__builtin_ops__V_8_8);
                  }
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__1_1, (MR_Integer) 0)))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Float backend_libs__builtin_ops__V_9_9 = MR_unbox_float((MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__1_1, (MR_Integer) 1)));
                    MR_Float backend_libs__builtin_ops__V_10_10;

                    backend_libs__builtin_ops__succeeded = ((((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
                    if (backend_libs__builtin_ops__succeeded)
                      {
                        backend_libs__builtin_ops__V_10_10 = MR_unbox_float((MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 1)));
                        backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_9_9 == backend_libs__builtin_ops__V_10_10);
                      }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word backend_libs__builtin_ops__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__1_1, (MR_Integer) 1)));
                    MR_Word backend_libs__builtin_ops__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__1_1, (MR_Integer) 2)));
                    MR_Word backend_libs__builtin_ops__V_13_13;
                    MR_Word backend_libs__builtin_ops__V_14_14;

                    backend_libs__builtin_ops__succeeded = ((((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
                    if (backend_libs__builtin_ops__succeeded)
                      {
                        backend_libs__builtin_ops__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 1)));
                        backend_libs__builtin_ops__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 2)));
                        backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_11_11 == backend_libs__builtin_ops__V_13_13);
                        if (backend_libs__builtin_ops__succeeded)
                          {
                            /* direct tailcall eliminated */
                            {
                              MR_Word backend_libs__builtin_ops__HeadVar__1__tmp_copy_1 = backend_libs__builtin_ops__V_12_12;
                              MR_Word backend_libs__builtin_ops__HeadVar__2__tmp_copy_2 = backend_libs__builtin_ops__V_14_14;

                              backend_libs__builtin_ops__HeadVar__2_2 = backend_libs__builtin_ops__HeadVar__2__tmp_copy_2;
                              backend_libs__builtin_ops__HeadVar__1_1 = backend_libs__builtin_ops__HeadVar__1__tmp_copy_1;
                            }
                            continue;
                          }
                      }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word backend_libs__builtin_ops__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__1_1, (MR_Integer) 1)));
                    MR_Word backend_libs__builtin_ops__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__1_1, (MR_Integer) 2)));
                    MR_Word backend_libs__builtin_ops__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__1_1, (MR_Integer) 3)));
                    MR_Word backend_libs__builtin_ops__V_18_18;
                    MR_Word backend_libs__builtin_ops__V_19_19;
                    MR_Word backend_libs__builtin_ops__V_20_20;

                    backend_libs__builtin_ops__succeeded = ((((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
                    if (backend_libs__builtin_ops__succeeded)
                      {
                        backend_libs__builtin_ops__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 1)));
                        backend_libs__builtin_ops__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 2)));
                        backend_libs__builtin_ops__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 3)));
                        {
                          backend_libs__builtin_ops__succeeded = backend_libs__builtin_ops____Unify____binary_op_0_0(backend_libs__builtin_ops__V_15_15, backend_libs__builtin_ops__V_18_18);
                        }
                        if (backend_libs__builtin_ops__succeeded)
                          {
                            {
                              backend_libs__builtin_ops__succeeded = backend_libs__builtin_ops____Unify____simple_expr_1_0(backend_libs__builtin_ops__TypeInfo_for_T_23, backend_libs__builtin_ops__V_16_16, backend_libs__builtin_ops__V_19_19);
                            }
                            if (backend_libs__builtin_ops__succeeded)
                              {
                                /* direct tailcall eliminated */
                                {
                                  MR_Word backend_libs__builtin_ops__HeadVar__1__tmp_copy_1 = backend_libs__builtin_ops__V_17_17;
                                  MR_Word backend_libs__builtin_ops__HeadVar__2__tmp_copy_2 = backend_libs__builtin_ops__V_20_20;

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
                      case (MR_Integer) 43:
                        {
                          backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 44:
                        {
                          backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 45:
                        {
                          backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 46:
                        {
                          backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 47:
                        {
                          backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 48:
                        {
                          backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 49:
                        {
                          backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 50:
                        {
                          backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 51:
                        {
                          backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 52:
                        {
                          backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 53:
                        {
                          backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 54:
                        {
                          backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 55:
                        {
                          backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 56:
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
          case (MR_Integer) 43:
            *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 45;
            break;
          case (MR_Integer) 44:
            *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 46;
            break;
          case (MR_Integer) 45:
            *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 47;
            break;
          case (MR_Integer) 46:
            *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 48;
            break;
          case (MR_Integer) 47:
            *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 49;
            break;
          case (MR_Integer) 48:
            *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 50;
            break;
          case (MR_Integer) 49:
            *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 51;
            break;
          case (MR_Integer) 50:
            *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 52;
            break;
          case (MR_Integer) 51:
            *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 53;
            break;
          case (MR_Integer) 52:
            *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 54;
            break;
          case (MR_Integer) 53:
            *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 55;
            break;
          case (MR_Integer) 54:
            *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 56;
            break;
          case (MR_Integer) 55:
            *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 57;
            break;
          case (MR_Integer) 56:
            *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 58;
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
    MR_Integer backend_libs__builtin_ops__CastX_121 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
    MR_Integer backend_libs__builtin_ops__CastY_122 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastX_121 == backend_libs__builtin_ops__CastY_122);
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
            case (MR_Integer) 43:
              {
                MR_Integer backend_libs__builtin_ops__CastX_93 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
                MR_Integer backend_libs__builtin_ops__CastY_94 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastY_94 == backend_libs__builtin_ops__CastX_93);
              }
              break;
            case (MR_Integer) 44:
              {
                MR_Integer backend_libs__builtin_ops__CastX_95 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
                MR_Integer backend_libs__builtin_ops__CastY_96 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastY_96 == backend_libs__builtin_ops__CastX_95);
              }
              break;
            case (MR_Integer) 45:
              {
                MR_Integer backend_libs__builtin_ops__CastX_97 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
                MR_Integer backend_libs__builtin_ops__CastY_98 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastY_98 == backend_libs__builtin_ops__CastX_97);
              }
              break;
            case (MR_Integer) 46:
              {
                MR_Integer backend_libs__builtin_ops__CastX_99 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
                MR_Integer backend_libs__builtin_ops__CastY_100 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastY_100 == backend_libs__builtin_ops__CastX_99);
              }
              break;
            case (MR_Integer) 47:
              {
                MR_Integer backend_libs__builtin_ops__CastX_101 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
                MR_Integer backend_libs__builtin_ops__CastY_102 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastY_102 == backend_libs__builtin_ops__CastX_101);
              }
              break;
            case (MR_Integer) 48:
              {
                MR_Integer backend_libs__builtin_ops__CastX_103 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
                MR_Integer backend_libs__builtin_ops__CastY_104 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastY_104 == backend_libs__builtin_ops__CastX_103);
              }
              break;
            case (MR_Integer) 49:
              {
                MR_Integer backend_libs__builtin_ops__CastX_105 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
                MR_Integer backend_libs__builtin_ops__CastY_106 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastY_106 == backend_libs__builtin_ops__CastX_105);
              }
              break;
            case (MR_Integer) 50:
              {
                MR_Integer backend_libs__builtin_ops__CastX_107 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
                MR_Integer backend_libs__builtin_ops__CastY_108 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastY_108 == backend_libs__builtin_ops__CastX_107);
              }
              break;
            case (MR_Integer) 51:
              {
                MR_Integer backend_libs__builtin_ops__CastX_109 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
                MR_Integer backend_libs__builtin_ops__CastY_110 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastY_110 == backend_libs__builtin_ops__CastX_109);
              }
              break;
            case (MR_Integer) 52:
              {
                MR_Integer backend_libs__builtin_ops__CastX_111 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
                MR_Integer backend_libs__builtin_ops__CastY_112 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastY_112 == backend_libs__builtin_ops__CastX_111);
              }
              break;
            case (MR_Integer) 53:
              {
                MR_Integer backend_libs__builtin_ops__CastX_113 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
                MR_Integer backend_libs__builtin_ops__CastY_114 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastY_114 == backend_libs__builtin_ops__CastX_113);
              }
              break;
            case (MR_Integer) 54:
              {
                MR_Integer backend_libs__builtin_ops__CastX_115 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
                MR_Integer backend_libs__builtin_ops__CastY_116 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastY_116 == backend_libs__builtin_ops__CastX_115);
              }
              break;
            case (MR_Integer) 55:
              {
                MR_Integer backend_libs__builtin_ops__CastX_117 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
                MR_Integer backend_libs__builtin_ops__CastY_118 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastY_118 == backend_libs__builtin_ops__CastX_117);
              }
              break;
            case (MR_Integer) 56:
              {
                MR_Integer backend_libs__builtin_ops__CastX_119 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
                MR_Integer backend_libs__builtin_ops__CastY_120 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastY_120 == backend_libs__builtin_ops__CastX_119);
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
    MR_Word backend_libs__builtin_ops__V_652_652;
    MR_Box backend_libs__builtin_ops__V_653_653;
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
            backend_libs__builtin_ops__V_653_653 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Args_9, (MR_Integer) 0));
            backend_libs__builtin_ops__V_652_652 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Args_9, (MR_Integer) 1)));
            /* binary string jump switch */
            backend_libs__builtin_ops__lo_0 = (MR_Integer) 0;
            backend_libs__builtin_ops__hi_1 = (MR_Integer) 6;
            do
              {
                backend_libs__builtin_ops__mid_2 = (((backend_libs__builtin_ops__lo_0 + backend_libs__builtin_ops__hi_1)) / (MR_Integer) 2);
                backend_libs__builtin_ops__result_3 = MR_strcmp(backend_libs__builtin_ops__ModuleName_11, ((&backend_libs__builtin_ops_vector_common_2[71 + backend_libs__builtin_ops__mid_2]))->backend_libs__builtin_ops__vector_common_type_2_0__vct_2_f_0);
                if ((backend_libs__builtin_ops__result_3 == (MR_Integer) 0))
                  {
                    switch (((&backend_libs__builtin_ops_vector_common_2[71 + backend_libs__builtin_ops__mid_2]))->backend_libs__builtin_ops__vector_common_type_2_0__vct_2_f_1) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          /* case "builtin" */
                          {
                            MR_Box backend_libs__builtin_ops__Y_42;
                            MR_Word backend_libs__builtin_ops__V_212_212;
                            MR_Word backend_libs__builtin_ops__V_213_213;

                            backend_libs__builtin_ops__succeeded = (strcmp(backend_libs__builtin_ops__PredName_7, (MR_String) "unsafe_promise_unique") == 0);
                            if (backend_libs__builtin_ops__succeeded)
                              {
                                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_12 == (MR_Integer) 0);
                                if (backend_libs__builtin_ops__succeeded)
                                  {
                                    backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_652_652)) == (MR_mktag((MR_Integer) 1)));
                                    if (backend_libs__builtin_ops__succeeded)
                                      {
                                        backend_libs__builtin_ops__Y_42 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_652_652, (MR_Integer) 0));
                                        backend_libs__builtin_ops__V_212_212 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_652_652, (MR_Integer) 1)));
                                        backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_212_212 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                        if (backend_libs__builtin_ops__succeeded)
                                          {
                                            {
                                              backend_libs__builtin_ops__V_213_213 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                              MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_213_213, 0) = backend_libs__builtin_ops__V_653_653;
                                            }
                                            {
                                              backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                              MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Y_42;
                                              MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_213_213));
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
                            MR_Word backend_libs__builtin_ops__V_662_662;
                            MR_Box backend_libs__builtin_ops__V_663_663;
                            MR_Integer backend_libs__builtin_ops__slot_9;
                            MR_String backend_libs__builtin_ops__str_10;

                            backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_12 == (MR_Integer) 0);
                            if (backend_libs__builtin_ops__succeeded)
                              {
                                backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_652_652)) == (MR_mktag((MR_Integer) 1)));
                                if (backend_libs__builtin_ops__succeeded)
                                  {
                                    backend_libs__builtin_ops__V_663_663 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_652_652, (MR_Integer) 0));
                                    backend_libs__builtin_ops__V_662_662 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_652_652, (MR_Integer) 1)));
                                    /* hashed string jump switch */
                                    /* compute the hash value of the input string */
                                    backend_libs__builtin_ops__slot_9 = ((MR_hash_string4(backend_libs__builtin_ops__PredName_7)) & (MR_Integer) 15);
                                    /* no collisions; no hash chain loop */
                                    /* lookup the string for this hash slot */
                                    backend_libs__builtin_ops__str_10 = ((&backend_libs__builtin_ops_vector_common_3[144 + backend_libs__builtin_ops__slot_9]))->backend_libs__builtin_ops__vector_common_type_3_0__vct_3_f_0;
                                    /* did we find a match? */
                                    if ((((backend_libs__builtin_ops__str_10 != NULL)) && ((strcmp(backend_libs__builtin_ops__str_10, backend_libs__builtin_ops__PredName_7) == 0))))
                                      {
                                        /* we found a match; dispatch to the corresponding code */
                                        switch (backend_libs__builtin_ops__slot_9) {
                                          default: /*NOTREACHED*/ MR_assert(0);
                                          case (MR_Integer) 1:
                                            {
                                              /* case ">=" */
                                              {
                                                MR_Word backend_libs__builtin_ops__V_356_356;
                                                MR_Word backend_libs__builtin_ops__V_357_357;
                                                MR_Word backend_libs__builtin_ops__V_358_358;
                                                MR_Word backend_libs__builtin_ops__CompareOp_361;

                                                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_662_662 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  {
                                                    backend_libs__builtin_ops__CompareOp_361 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 51));
                                                    {
                                                      backend_libs__builtin_ops__V_357_357 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_357_357, 0) = backend_libs__builtin_ops__V_653_653;
                                                    }
                                                    {
                                                      backend_libs__builtin_ops__V_358_358 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_358_358, 0) = backend_libs__builtin_ops__V_663_663;
                                                    }
                                                    {
                                                      backend_libs__builtin_ops__V_356_356 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_356_356, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_356_356, 1) = ((MR_Box) (backend_libs__builtin_ops__CompareOp_361));
                                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_356_356, 2) = ((MR_Box) (backend_libs__builtin_ops__V_357_357));
                                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_356_356, 3) = ((MR_Box) (backend_libs__builtin_ops__V_358_358));
                                                    }
                                                    {
                                                      backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                                      MR_hl_field(MR_mktag(2), backend_libs__builtin_ops__CodePrime_13, 0) = ((MR_Box) (backend_libs__builtin_ops__V_356_356));
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
                                                MR_Word backend_libs__builtin_ops__V_340_340;
                                                MR_Word backend_libs__builtin_ops__V_341_341;
                                                MR_Word backend_libs__builtin_ops__V_342_342;
                                                MR_Word backend_libs__builtin_ops__CompareOp_345;

                                                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_662_662 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  {
                                                    backend_libs__builtin_ops__CompareOp_345 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 50));
                                                    {
                                                      backend_libs__builtin_ops__V_341_341 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_341_341, 0) = backend_libs__builtin_ops__V_653_653;
                                                    }
                                                    {
                                                      backend_libs__builtin_ops__V_342_342 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_342_342, 0) = backend_libs__builtin_ops__V_663_663;
                                                    }
                                                    {
                                                      backend_libs__builtin_ops__V_340_340 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_340_340, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_340_340, 1) = ((MR_Box) (backend_libs__builtin_ops__CompareOp_345));
                                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_340_340, 2) = ((MR_Box) (backend_libs__builtin_ops__V_341_341));
                                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_340_340, 3) = ((MR_Box) (backend_libs__builtin_ops__V_342_342));
                                                    }
                                                    {
                                                      backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                                      MR_hl_field(MR_mktag(2), backend_libs__builtin_ops__CodePrime_13, 0) = ((MR_Box) (backend_libs__builtin_ops__V_340_340));
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
                                                MR_Word backend_libs__builtin_ops__V_364_364;
                                                MR_Word backend_libs__builtin_ops__V_365_365;
                                                MR_Word backend_libs__builtin_ops__V_366_366;
                                                MR_Word backend_libs__builtin_ops__V_367_367;
                                                MR_Box backend_libs__builtin_ops__Z_370;

                                                backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_662_662)) == (MR_mktag((MR_Integer) 1)));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  {
                                                    backend_libs__builtin_ops__Z_370 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_662_662, (MR_Integer) 0));
                                                    backend_libs__builtin_ops__V_364_364 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_662_662, (MR_Integer) 1)));
                                                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_364_364 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                    if (backend_libs__builtin_ops__succeeded)
                                                      {
                                                        {
                                                          backend_libs__builtin_ops__V_366_366 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_366_366, 0) = backend_libs__builtin_ops__V_653_653;
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__V_367_367 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_367_367, 0) = backend_libs__builtin_ops__V_663_663;
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__V_365_365 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_365_365, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_365_365, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 45))));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_365_365, 2) = ((MR_Box) (backend_libs__builtin_ops__V_366_366));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_365_365, 3) = ((MR_Box) (backend_libs__builtin_ops__V_367_367));
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Z_370;
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_365_365));
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
                                              if ((backend_libs__builtin_ops__V_662_662 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                                                {
                                                  MR_Word backend_libs__builtin_ops__V_82_82;

                                                  {
                                                    backend_libs__builtin_ops__V_82_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                    MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_82_82, 0) = backend_libs__builtin_ops__V_653_653;
                                                  }
                                                  {
                                                    backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                    MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__V_663_663;
                                                    MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_82_82));
                                                  }
                                                  backend_libs__builtin_ops__succeeded = MR_TRUE;
                                                }
                                              else
                                                {
                                                  MR_Word backend_libs__builtin_ops__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_662_662, (MR_Integer) 1)));
                                                  MR_Word backend_libs__builtin_ops__V_76_76;
                                                  MR_Word backend_libs__builtin_ops__V_77_77;
                                                  MR_Word backend_libs__builtin_ops__V_78_78;
                                                  MR_Word backend_libs__builtin_ops__V_79_79;
                                                  MR_Box backend_libs__builtin_ops__Z_303 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_662_662, (MR_Integer) 0));

                                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_75_75 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                  if (backend_libs__builtin_ops__succeeded)
                                                    {
                                                      backend_libs__builtin_ops__V_77_77 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 42));
                                                      {
                                                        backend_libs__builtin_ops__V_78_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_78_78, 0) = backend_libs__builtin_ops__V_653_653;
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__V_79_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_79_79, 0) = backend_libs__builtin_ops__V_663_663;
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__V_76_76 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_76_76, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_76_76, 1) = ((MR_Box) (backend_libs__builtin_ops__V_77_77));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_76_76, 2) = ((MR_Box) (backend_libs__builtin_ops__V_78_78));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_76_76, 3) = ((MR_Box) (backend_libs__builtin_ops__V_79_79));
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Z_303;
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_76_76));
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
                                                MR_Word backend_libs__builtin_ops__V_55_55;
                                                MR_Word backend_libs__builtin_ops__V_56_56;
                                                MR_Word backend_libs__builtin_ops__V_57_57;
                                                MR_Word backend_libs__builtin_ops__V_58_58;
                                                MR_Box backend_libs__builtin_ops__Z_323;

                                                backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_662_662)) == (MR_mktag((MR_Integer) 1)));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  {
                                                    backend_libs__builtin_ops__Z_323 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_662_662, (MR_Integer) 0));
                                                    backend_libs__builtin_ops__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_662_662, (MR_Integer) 1)));
                                                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_55_55 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                    if (backend_libs__builtin_ops__succeeded)
                                                      {
                                                        {
                                                          backend_libs__builtin_ops__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_57_57, 0) = backend_libs__builtin_ops__V_653_653;
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__V_58_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_58_58, 0) = backend_libs__builtin_ops__V_663_663;
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__V_56_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_56_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_56_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 44))));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_56_56, 2) = ((MR_Box) (backend_libs__builtin_ops__V_57_57));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_56_56, 3) = ((MR_Box) (backend_libs__builtin_ops__V_58_58));
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Z_323;
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_56_56));
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
                                              if ((backend_libs__builtin_ops__V_662_662 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                                                {
                                                  MR_Word backend_libs__builtin_ops__V_68_68;
                                                  MR_Word backend_libs__builtin_ops__V_72_72;

                                                  {
                                                    backend_libs__builtin_ops__V_72_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                    MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_72_72, 0) = backend_libs__builtin_ops__V_653_653;
                                                  }
                                                  {
                                                    backend_libs__builtin_ops__V_68_68 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_68_68, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_68_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 43))));
                                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_68_68, 2) = ((MR_Box) (MR_mkword(MR_mktag(3), &backend_libs__builtin_ops_scalar_common_1[1])));
                                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_68_68, 3) = ((MR_Box) (backend_libs__builtin_ops__V_72_72));
                                                  }
                                                  {
                                                    backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                    MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__V_663_663;
                                                    MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_68_68));
                                                  }
                                                  backend_libs__builtin_ops__succeeded = MR_TRUE;
                                                }
                                              else
                                                {
                                                  MR_Word backend_libs__builtin_ops__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_662_662, (MR_Integer) 1)));
                                                  MR_Word backend_libs__builtin_ops__V_62_62;
                                                  MR_Word backend_libs__builtin_ops__V_63_63;
                                                  MR_Word backend_libs__builtin_ops__V_64_64;
                                                  MR_Word backend_libs__builtin_ops__V_65_65;
                                                  MR_Box backend_libs__builtin_ops__Z_314 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_662_662, (MR_Integer) 0));

                                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_61_61 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                  if (backend_libs__builtin_ops__succeeded)
                                                    {
                                                      backend_libs__builtin_ops__V_63_63 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 43));
                                                      {
                                                        backend_libs__builtin_ops__V_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_64_64, 0) = backend_libs__builtin_ops__V_653_653;
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__V_65_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_65_65, 0) = backend_libs__builtin_ops__V_663_663;
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__V_62_62 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_62_62, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_62_62, 1) = ((MR_Box) (backend_libs__builtin_ops__V_63_63));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_62_62, 2) = ((MR_Box) (backend_libs__builtin_ops__V_64_64));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_62_62, 3) = ((MR_Box) (backend_libs__builtin_ops__V_65_65));
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Z_314;
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_62_62));
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
                                                MR_Word backend_libs__builtin_ops__V_50_50;
                                                MR_Word backend_libs__builtin_ops__V_51_51;
                                                MR_Word backend_libs__builtin_ops__V_52_52;
                                                MR_Word backend_libs__builtin_ops__CompareOp_327;

                                                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_662_662 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  {
                                                    backend_libs__builtin_ops__CompareOp_327 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 48));
                                                    {
                                                      backend_libs__builtin_ops__V_51_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_51_51, 0) = backend_libs__builtin_ops__V_653_653;
                                                    }
                                                    {
                                                      backend_libs__builtin_ops__V_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_52_52, 0) = backend_libs__builtin_ops__V_663_663;
                                                    }
                                                    {
                                                      backend_libs__builtin_ops__V_50_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_50_50, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_50_50, 1) = ((MR_Box) (backend_libs__builtin_ops__CompareOp_327));
                                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_50_50, 2) = ((MR_Box) (backend_libs__builtin_ops__V_51_51));
                                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_50_50, 3) = ((MR_Box) (backend_libs__builtin_ops__V_52_52));
                                                    }
                                                    {
                                                      backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                                      MR_hl_field(MR_mktag(2), backend_libs__builtin_ops__CodePrime_13, 0) = ((MR_Box) (backend_libs__builtin_ops__V_50_50));
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
                                                MR_Word backend_libs__builtin_ops__V_348_348;
                                                MR_Word backend_libs__builtin_ops__V_349_349;
                                                MR_Word backend_libs__builtin_ops__V_350_350;
                                                MR_Word backend_libs__builtin_ops__CompareOp_353;

                                                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_662_662 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  {
                                                    backend_libs__builtin_ops__CompareOp_353 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 49));
                                                    {
                                                      backend_libs__builtin_ops__V_349_349 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_349_349, 0) = backend_libs__builtin_ops__V_653_653;
                                                    }
                                                    {
                                                      backend_libs__builtin_ops__V_350_350 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_350_350, 0) = backend_libs__builtin_ops__V_663_663;
                                                    }
                                                    {
                                                      backend_libs__builtin_ops__V_348_348 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_348_348, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_348_348, 1) = ((MR_Box) (backend_libs__builtin_ops__CompareOp_353));
                                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_348_348, 2) = ((MR_Box) (backend_libs__builtin_ops__V_349_349));
                                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_348_348, 3) = ((MR_Box) (backend_libs__builtin_ops__V_350_350));
                                                    }
                                                    {
                                                      backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                                      MR_hl_field(MR_mktag(2), backend_libs__builtin_ops__CodePrime_13, 0) = ((MR_Box) (backend_libs__builtin_ops__V_348_348));
                                                    }
                                                    backend_libs__builtin_ops__succeeded = MR_TRUE;
                                                  }
                                              }
                                            }
                                            break;
                                        }
                                        /* jump out of search loop */
                                        goto label_2;
                                      }
                                    backend_libs__builtin_ops__succeeded = MR_FALSE;
                                  label_2:;
                                  }
                              }
                          }
                        }
                        break;
                      case (MR_Integer) 2:
                        {
                          /* case "int" */
                          {
                            MR_Word backend_libs__builtin_ops__V_664_664;
                            MR_Box backend_libs__builtin_ops__V_665_665;

                            backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_652_652)) == (MR_mktag((MR_Integer) 1)));
                            if (backend_libs__builtin_ops__succeeded)
                              {
                                backend_libs__builtin_ops__V_665_665 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_652_652, (MR_Integer) 0));
                                backend_libs__builtin_ops__V_664_664 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_652_652, (MR_Integer) 1)));
                                {
                                  MR_Integer backend_libs__builtin_ops__case_num_8 = (MR_Integer) -1;

                                  switch (MR_nth_code_unit(backend_libs__builtin_ops__PredName_7, 0)) {
                                    case (MR_Integer) 42:
                                      if (MR_offset_streq(1, backend_libs__builtin_ops__PredName_7, (MR_String) "*"))
                                        backend_libs__builtin_ops__case_num_8 = (MR_Integer) 0;
                                      break;
                                    case (MR_Integer) 43:
                                      if (MR_offset_streq(1, backend_libs__builtin_ops__PredName_7, (MR_String) "+"))
                                        backend_libs__builtin_ops__case_num_8 = (MR_Integer) 1;
                                      break;
                                    case (MR_Integer) 45:
                                      if (MR_offset_streq(1, backend_libs__builtin_ops__PredName_7, (MR_String) "-"))
                                        backend_libs__builtin_ops__case_num_8 = (MR_Integer) 2;
                                      break;
                                    case (MR_Integer) 47:
                                      if (MR_offset_streq(1, backend_libs__builtin_ops__PredName_7, (MR_String) "/\\"))
                                        backend_libs__builtin_ops__case_num_8 = (MR_Integer) 3;
                                      break;
                                    case (MR_Integer) 60:
                                      if (MR_offset_streq(1, backend_libs__builtin_ops__PredName_7, (MR_String) "<"))
                                        backend_libs__builtin_ops__case_num_8 = (MR_Integer) 4;
                                      break;
                                    case (MR_Integer) 61:
                                      if (MR_offset_streq(1, backend_libs__builtin_ops__PredName_7, (MR_String) "=<"))
                                        backend_libs__builtin_ops__case_num_8 = (MR_Integer) 5;
                                      break;
                                    case (MR_Integer) 62:
                                      switch (MR_nth_code_unit(backend_libs__builtin_ops__PredName_7, 1)) {
                                        case (MR_Integer) 0:
                                          backend_libs__builtin_ops__case_num_8 = (MR_Integer) 6;
                                          break;
                                        case (MR_Integer) 61:
                                          if (MR_offset_streq(2, backend_libs__builtin_ops__PredName_7, (MR_String) ">="))
                                            backend_libs__builtin_ops__case_num_8 = (MR_Integer) 7;
                                          break;
                                      }
                                      break;
                                    case (MR_Integer) 92:
                                      switch (MR_nth_code_unit(backend_libs__builtin_ops__PredName_7, 1)) {
                                        case (MR_Integer) 0:
                                          backend_libs__builtin_ops__case_num_8 = (MR_Integer) 8;
                                          break;
                                        case (MR_Integer) 47:
                                          if (MR_offset_streq(2, backend_libs__builtin_ops__PredName_7, (MR_String) "\\/"))
                                            backend_libs__builtin_ops__case_num_8 = (MR_Integer) 9;
                                          break;
                                      }
                                      break;
                                    case (MR_Integer) 109:
                                      if (MR_offset_streq(1, backend_libs__builtin_ops__PredName_7, (MR_String) "minus"))
                                        backend_libs__builtin_ops__case_num_8 = (MR_Integer) 10;
                                      break;
                                    case (MR_Integer) 112:
                                      if (MR_offset_streq(1, backend_libs__builtin_ops__PredName_7, (MR_String) "plus"))
                                        backend_libs__builtin_ops__case_num_8 = (MR_Integer) 11;
                                      break;
                                    case (MR_Integer) 116:
                                      if (MR_offset_streq(1, backend_libs__builtin_ops__PredName_7, (MR_String) "times"))
                                        backend_libs__builtin_ops__case_num_8 = (MR_Integer) 12;
                                      break;
                                    case (MR_Integer) 117:
                                      if (((((((((((((((((((MR_nth_code_unit(backend_libs__builtin_ops__PredName_7, 1)) == (MR_Integer) 110)) && (((MR_nth_code_unit(backend_libs__builtin_ops__PredName_7, 2)) == (MR_Integer) 99)))) && (((MR_nth_code_unit(backend_libs__builtin_ops__PredName_7, 3)) == (MR_Integer) 104)))) && (((MR_nth_code_unit(backend_libs__builtin_ops__PredName_7, 4)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(backend_libs__builtin_ops__PredName_7, 5)) == (MR_Integer) 99)))) && (((MR_nth_code_unit(backend_libs__builtin_ops__PredName_7, 6)) == (MR_Integer) 107)))) && (((MR_nth_code_unit(backend_libs__builtin_ops__PredName_7, 7)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(backend_libs__builtin_ops__PredName_7, 8)) == (MR_Integer) 100)))) && (((MR_nth_code_unit(backend_libs__builtin_ops__PredName_7, 9)) == (MR_Integer) 95))))
                                        switch (MR_nth_code_unit(backend_libs__builtin_ops__PredName_7, 10)) {
                                          case (MR_Integer) 108:
                                            if (MR_offset_streq(11, backend_libs__builtin_ops__PredName_7, (MR_String) "unchecked_left_shift"))
                                              backend_libs__builtin_ops__case_num_8 = (MR_Integer) 13;
                                            break;
                                          case (MR_Integer) 113:
                                            if (MR_offset_streq(11, backend_libs__builtin_ops__PredName_7, (MR_String) "unchecked_quotient"))
                                              backend_libs__builtin_ops__case_num_8 = (MR_Integer) 14;
                                            break;
                                          case (MR_Integer) 114:
                                            switch (MR_nth_code_unit(backend_libs__builtin_ops__PredName_7, 11)) {
                                              case (MR_Integer) 101:
                                                if (MR_offset_streq(12, backend_libs__builtin_ops__PredName_7, (MR_String) "unchecked_rem"))
                                                  backend_libs__builtin_ops__case_num_8 = (MR_Integer) 15;
                                                break;
                                              case (MR_Integer) 105:
                                                if (MR_offset_streq(12, backend_libs__builtin_ops__PredName_7, (MR_String) "unchecked_right_shift"))
                                                  backend_libs__builtin_ops__case_num_8 = (MR_Integer) 16;
                                                break;
                                            }
                                            break;
                                        }
                                      break;
                                    case (MR_Integer) 120:
                                      if (MR_offset_streq(1, backend_libs__builtin_ops__PredName_7, (MR_String) "xor"))
                                        backend_libs__builtin_ops__case_num_8 = (MR_Integer) 17;
                                      break;
                                  }
                                  switch (backend_libs__builtin_ops__case_num_8) {
                                    default:
                                      backend_libs__builtin_ops__succeeded = MR_FALSE;
                                      break;
                                    case (MR_Integer) 0:
                                      {
                                        /* case "*" */
                                        {
                                          MR_Word backend_libs__builtin_ops__ArithOp_47;
                                          MR_Word backend_libs__builtin_ops__V_111_111;
                                          MR_Word backend_libs__builtin_ops__V_112_112;
                                          MR_Word backend_libs__builtin_ops__V_113_113;
                                          MR_Word backend_libs__builtin_ops__V_114_114;
                                          MR_Box backend_libs__builtin_ops__Z_266;

                                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_12 == (MR_Integer) 0);
                                          if (backend_libs__builtin_ops__succeeded)
                                            {
                                              backend_libs__builtin_ops__ArithOp_47 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
                                              backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_664_664)) == (MR_mktag((MR_Integer) 1)));
                                              if (backend_libs__builtin_ops__succeeded)
                                                {
                                                  backend_libs__builtin_ops__Z_266 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_664_664, (MR_Integer) 0));
                                                  backend_libs__builtin_ops__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_664_664, (MR_Integer) 1)));
                                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_111_111 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                  if (backend_libs__builtin_ops__succeeded)
                                                    {
                                                      {
                                                        backend_libs__builtin_ops__V_113_113 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_113_113, 0) = backend_libs__builtin_ops__V_653_653;
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__V_114_114 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_114_114, 0) = backend_libs__builtin_ops__V_665_665;
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__V_112_112 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_112_112, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_112_112, 1) = ((MR_Box) (backend_libs__builtin_ops__ArithOp_47));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_112_112, 2) = ((MR_Box) (backend_libs__builtin_ops__V_113_113));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_112_112, 3) = ((MR_Box) (backend_libs__builtin_ops__V_114_114));
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Z_266;
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_112_112));
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
                                            if ((backend_libs__builtin_ops__V_664_664 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                                              {
                                                MR_Word backend_libs__builtin_ops__V_154_154;

                                                {
                                                  backend_libs__builtin_ops__V_154_154 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                  MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_154_154, 0) = backend_libs__builtin_ops__V_653_653;
                                                }
                                                {
                                                  backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                  MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__V_665_665;
                                                  MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_154_154));
                                                }
                                                backend_libs__builtin_ops__succeeded = MR_TRUE;
                                              }
                                            else
                                              {
                                                MR_Word backend_libs__builtin_ops__V_157_157 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_664_664, (MR_Integer) 1)));
                                                MR_Word backend_libs__builtin_ops__V_166_166;
                                                MR_Word backend_libs__builtin_ops__V_167_167;
                                                MR_Word backend_libs__builtin_ops__V_168_168;
                                                MR_Word backend_libs__builtin_ops__V_169_169;
                                                MR_Box backend_libs__builtin_ops__Z_241 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_664_664, (MR_Integer) 0));

                                                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_157_157 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  {
                                                    backend_libs__builtin_ops__V_167_167 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                                                    {
                                                      backend_libs__builtin_ops__V_168_168 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_168_168, 0) = backend_libs__builtin_ops__V_653_653;
                                                    }
                                                    {
                                                      backend_libs__builtin_ops__V_169_169 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_169_169, 0) = backend_libs__builtin_ops__V_665_665;
                                                    }
                                                    {
                                                      backend_libs__builtin_ops__V_166_166 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_166_166, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_166_166, 1) = ((MR_Box) (backend_libs__builtin_ops__V_167_167));
                                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_166_166, 2) = ((MR_Box) (backend_libs__builtin_ops__V_168_168));
                                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_166_166, 3) = ((MR_Box) (backend_libs__builtin_ops__V_169_169));
                                                    }
                                                    {
                                                      backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Z_241;
                                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_166_166));
                                                    }
                                                    backend_libs__builtin_ops__succeeded = MR_TRUE;
                                                  }
                                              }
                                            break;
                                          case (MR_Integer) 1:
                                            {
                                              MR_Word backend_libs__builtin_ops__V_162_162;
                                              MR_Word backend_libs__builtin_ops__V_163_163;
                                              MR_Word backend_libs__builtin_ops__V_164_164;
                                              MR_Word backend_libs__builtin_ops__V_165_165;
                                              MR_Word backend_libs__builtin_ops__V_374_374;
                                              MR_Box backend_libs__builtin_ops__Z_377;

                                              backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_664_664)) == (MR_mktag((MR_Integer) 1)));
                                              if (backend_libs__builtin_ops__succeeded)
                                                {
                                                  backend_libs__builtin_ops__Z_377 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_664_664, (MR_Integer) 0));
                                                  backend_libs__builtin_ops__V_374_374 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_664_664, (MR_Integer) 1)));
                                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_374_374 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                  if (backend_libs__builtin_ops__succeeded)
                                                    {
                                                      backend_libs__builtin_ops__V_163_163 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
                                                      {
                                                        backend_libs__builtin_ops__V_164_164 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_164_164, 0) = backend_libs__builtin_ops__Z_377;
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__V_165_165 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_165_165, 0) = backend_libs__builtin_ops__V_665_665;
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__V_162_162 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_162_162, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_162_162, 1) = ((MR_Box) (backend_libs__builtin_ops__V_163_163));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_162_162, 2) = ((MR_Box) (backend_libs__builtin_ops__V_164_164));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_162_162, 3) = ((MR_Box) (backend_libs__builtin_ops__V_165_165));
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__V_653_653;
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_162_162));
                                                      }
                                                      backend_libs__builtin_ops__succeeded = MR_TRUE;
                                                    }
                                                }
                                            }
                                            break;
                                          case (MR_Integer) 2:
                                            {
                                              MR_Word backend_libs__builtin_ops__V_158_158;
                                              MR_Word backend_libs__builtin_ops__V_159_159;
                                              MR_Word backend_libs__builtin_ops__V_160_160;
                                              MR_Word backend_libs__builtin_ops__V_161_161;
                                              MR_Word backend_libs__builtin_ops__V_380_380;
                                              MR_Box backend_libs__builtin_ops__Z_383;

                                              backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_664_664)) == (MR_mktag((MR_Integer) 1)));
                                              if (backend_libs__builtin_ops__succeeded)
                                                {
                                                  backend_libs__builtin_ops__Z_383 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_664_664, (MR_Integer) 0));
                                                  backend_libs__builtin_ops__V_380_380 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_664_664, (MR_Integer) 1)));
                                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_380_380 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                  if (backend_libs__builtin_ops__succeeded)
                                                    {
                                                      backend_libs__builtin_ops__V_159_159 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
                                                      {
                                                        backend_libs__builtin_ops__V_160_160 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_160_160, 0) = backend_libs__builtin_ops__Z_383;
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__V_161_161 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_161_161, 0) = backend_libs__builtin_ops__V_653_653;
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__V_158_158 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_158_158, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_158_158, 1) = ((MR_Box) (backend_libs__builtin_ops__V_159_159));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_158_158, 2) = ((MR_Box) (backend_libs__builtin_ops__V_160_160));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_158_158, 3) = ((MR_Box) (backend_libs__builtin_ops__V_161_161));
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__V_665_665;
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_158_158));
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
                                            if ((backend_libs__builtin_ops__V_664_664 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                                              {
                                                MR_Word backend_libs__builtin_ops__V_132_132;
                                                MR_Word backend_libs__builtin_ops__V_136_136;

                                                {
                                                  backend_libs__builtin_ops__V_136_136 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                  MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_136_136, 0) = backend_libs__builtin_ops__V_653_653;
                                                }
                                                {
                                                  backend_libs__builtin_ops__V_132_132 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                  MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_132_132, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                  MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_132_132, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
                                                  MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_132_132, 2) = ((MR_Box) (MR_mkword(MR_mktag(1), &backend_libs__builtin_ops_scalar_common_4[1])));
                                                  MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_132_132, 3) = ((MR_Box) (backend_libs__builtin_ops__V_136_136));
                                                }
                                                {
                                                  backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                  MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__V_665_665;
                                                  MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_132_132));
                                                }
                                                backend_libs__builtin_ops__succeeded = MR_TRUE;
                                              }
                                            else
                                              {
                                                MR_Word backend_libs__builtin_ops__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_664_664, (MR_Integer) 1)));
                                                MR_Word backend_libs__builtin_ops__V_148_148;
                                                MR_Word backend_libs__builtin_ops__V_149_149;
                                                MR_Word backend_libs__builtin_ops__V_150_150;
                                                MR_Word backend_libs__builtin_ops__V_151_151;
                                                MR_Box backend_libs__builtin_ops__Z_252 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_664_664, (MR_Integer) 0));

                                                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_139_139 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  {
                                                    backend_libs__builtin_ops__V_149_149 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
                                                    {
                                                      backend_libs__builtin_ops__V_150_150 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_150_150, 0) = backend_libs__builtin_ops__V_653_653;
                                                    }
                                                    {
                                                      backend_libs__builtin_ops__V_151_151 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_151_151, 0) = backend_libs__builtin_ops__V_665_665;
                                                    }
                                                    {
                                                      backend_libs__builtin_ops__V_148_148 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_148_148, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_148_148, 1) = ((MR_Box) (backend_libs__builtin_ops__V_149_149));
                                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_148_148, 2) = ((MR_Box) (backend_libs__builtin_ops__V_150_150));
                                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_148_148, 3) = ((MR_Box) (backend_libs__builtin_ops__V_151_151));
                                                    }
                                                    {
                                                      backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Z_252;
                                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_148_148));
                                                    }
                                                    backend_libs__builtin_ops__succeeded = MR_TRUE;
                                                  }
                                              }
                                            break;
                                          case (MR_Integer) 1:
                                            {
                                              MR_Word backend_libs__builtin_ops__V_144_144;
                                              MR_Word backend_libs__builtin_ops__V_145_145;
                                              MR_Word backend_libs__builtin_ops__V_146_146;
                                              MR_Word backend_libs__builtin_ops__V_147_147;
                                              MR_Word backend_libs__builtin_ops__V_386_386;
                                              MR_Box backend_libs__builtin_ops__Z_389;

                                              backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_664_664)) == (MR_mktag((MR_Integer) 1)));
                                              if (backend_libs__builtin_ops__succeeded)
                                                {
                                                  backend_libs__builtin_ops__Z_389 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_664_664, (MR_Integer) 0));
                                                  backend_libs__builtin_ops__V_386_386 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_664_664, (MR_Integer) 1)));
                                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_386_386 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                  if (backend_libs__builtin_ops__succeeded)
                                                    {
                                                      backend_libs__builtin_ops__V_145_145 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                                                      {
                                                        backend_libs__builtin_ops__V_146_146 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_146_146, 0) = backend_libs__builtin_ops__V_665_665;
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__V_147_147 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_147_147, 0) = backend_libs__builtin_ops__Z_389;
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__V_144_144 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_144_144, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_144_144, 1) = ((MR_Box) (backend_libs__builtin_ops__V_145_145));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_144_144, 2) = ((MR_Box) (backend_libs__builtin_ops__V_146_146));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_144_144, 3) = ((MR_Box) (backend_libs__builtin_ops__V_147_147));
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__V_653_653;
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_144_144));
                                                      }
                                                      backend_libs__builtin_ops__succeeded = MR_TRUE;
                                                    }
                                                }
                                            }
                                            break;
                                          case (MR_Integer) 2:
                                            {
                                              MR_Word backend_libs__builtin_ops__V_140_140;
                                              MR_Word backend_libs__builtin_ops__V_141_141;
                                              MR_Word backend_libs__builtin_ops__V_142_142;
                                              MR_Word backend_libs__builtin_ops__V_143_143;
                                              MR_Word backend_libs__builtin_ops__V_392_392;
                                              MR_Box backend_libs__builtin_ops__Z_395;

                                              backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_664_664)) == (MR_mktag((MR_Integer) 1)));
                                              if (backend_libs__builtin_ops__succeeded)
                                                {
                                                  backend_libs__builtin_ops__Z_395 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_664_664, (MR_Integer) 0));
                                                  backend_libs__builtin_ops__V_392_392 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_664_664, (MR_Integer) 1)));
                                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_392_392 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                  if (backend_libs__builtin_ops__succeeded)
                                                    {
                                                      backend_libs__builtin_ops__V_141_141 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
                                                      {
                                                        backend_libs__builtin_ops__V_142_142 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_142_142, 0) = backend_libs__builtin_ops__V_653_653;
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__V_143_143 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_143_143, 0) = backend_libs__builtin_ops__Z_395;
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__V_140_140 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_140_140, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_140_140, 1) = ((MR_Box) (backend_libs__builtin_ops__V_141_141));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_140_140, 2) = ((MR_Box) (backend_libs__builtin_ops__V_142_142));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_140_140, 3) = ((MR_Box) (backend_libs__builtin_ops__V_143_143));
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__V_665_665;
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_140_140));
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
                                          MR_Word backend_libs__builtin_ops__ArithOp_396;
                                          MR_Word backend_libs__builtin_ops__V_399_399;
                                          MR_Word backend_libs__builtin_ops__V_400_400;
                                          MR_Word backend_libs__builtin_ops__V_401_401;
                                          MR_Word backend_libs__builtin_ops__V_402_402;
                                          MR_Box backend_libs__builtin_ops__Z_405;

                                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_12 == (MR_Integer) 0);
                                          if (backend_libs__builtin_ops__succeeded)
                                            {
                                              backend_libs__builtin_ops__ArithOp_396 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7));
                                              backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_664_664)) == (MR_mktag((MR_Integer) 1)));
                                              if (backend_libs__builtin_ops__succeeded)
                                                {
                                                  backend_libs__builtin_ops__Z_405 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_664_664, (MR_Integer) 0));
                                                  backend_libs__builtin_ops__V_399_399 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_664_664, (MR_Integer) 1)));
                                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_399_399 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                  if (backend_libs__builtin_ops__succeeded)
                                                    {
                                                      {
                                                        backend_libs__builtin_ops__V_401_401 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_401_401, 0) = backend_libs__builtin_ops__V_653_653;
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__V_402_402 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_402_402, 0) = backend_libs__builtin_ops__V_665_665;
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__V_400_400 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_400_400, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_400_400, 1) = ((MR_Box) (backend_libs__builtin_ops__ArithOp_396));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_400_400, 2) = ((MR_Box) (backend_libs__builtin_ops__V_401_401));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_400_400, 3) = ((MR_Box) (backend_libs__builtin_ops__V_402_402));
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Z_405;
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_400_400));
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
                                          MR_Word backend_libs__builtin_ops__V_101_101;
                                          MR_Word backend_libs__builtin_ops__V_102_102;
                                          MR_Word backend_libs__builtin_ops__V_103_103;
                                          MR_Word backend_libs__builtin_ops__CompareOp_271;

                                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_12 == (MR_Integer) 0);
                                          if (backend_libs__builtin_ops__succeeded)
                                            {
                                              backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_664_664 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                              if (backend_libs__builtin_ops__succeeded)
                                                {
                                                  backend_libs__builtin_ops__CompareOp_271 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 23));
                                                  {
                                                    backend_libs__builtin_ops__V_102_102 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                    MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_102_102, 0) = backend_libs__builtin_ops__V_653_653;
                                                  }
                                                  {
                                                    backend_libs__builtin_ops__V_103_103 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                    MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_103_103, 0) = backend_libs__builtin_ops__V_665_665;
                                                  }
                                                  {
                                                    backend_libs__builtin_ops__V_101_101 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_101_101, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_101_101, 1) = ((MR_Box) (backend_libs__builtin_ops__CompareOp_271));
                                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_101_101, 2) = ((MR_Box) (backend_libs__builtin_ops__V_102_102));
                                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_101_101, 3) = ((MR_Box) (backend_libs__builtin_ops__V_103_103));
                                                  }
                                                  {
                                                    backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                                    MR_hl_field(MR_mktag(2), backend_libs__builtin_ops__CodePrime_13, 0) = ((MR_Box) (backend_libs__builtin_ops__V_101_101));
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
                                          MR_Word backend_libs__builtin_ops__V_408_408;
                                          MR_Word backend_libs__builtin_ops__V_409_409;
                                          MR_Word backend_libs__builtin_ops__V_410_410;
                                          MR_Word backend_libs__builtin_ops__CompareOp_413;

                                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_12 == (MR_Integer) 0);
                                          if (backend_libs__builtin_ops__succeeded)
                                            {
                                              backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_664_664 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                              if (backend_libs__builtin_ops__succeeded)
                                                {
                                                  backend_libs__builtin_ops__CompareOp_413 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 25));
                                                  {
                                                    backend_libs__builtin_ops__V_409_409 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                    MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_409_409, 0) = backend_libs__builtin_ops__V_653_653;
                                                  }
                                                  {
                                                    backend_libs__builtin_ops__V_410_410 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                    MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_410_410, 0) = backend_libs__builtin_ops__V_665_665;
                                                  }
                                                  {
                                                    backend_libs__builtin_ops__V_408_408 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_408_408, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_408_408, 1) = ((MR_Box) (backend_libs__builtin_ops__CompareOp_413));
                                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_408_408, 2) = ((MR_Box) (backend_libs__builtin_ops__V_409_409));
                                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_408_408, 3) = ((MR_Box) (backend_libs__builtin_ops__V_410_410));
                                                  }
                                                  {
                                                    backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                                    MR_hl_field(MR_mktag(2), backend_libs__builtin_ops__CodePrime_13, 0) = ((MR_Box) (backend_libs__builtin_ops__V_408_408));
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
                                          MR_Word backend_libs__builtin_ops__V_416_416;
                                          MR_Word backend_libs__builtin_ops__V_417_417;
                                          MR_Word backend_libs__builtin_ops__V_418_418;
                                          MR_Word backend_libs__builtin_ops__CompareOp_421;

                                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_12 == (MR_Integer) 0);
                                          if (backend_libs__builtin_ops__succeeded)
                                            {
                                              backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_664_664 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                              if (backend_libs__builtin_ops__succeeded)
                                                {
                                                  backend_libs__builtin_ops__CompareOp_421 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 24));
                                                  {
                                                    backend_libs__builtin_ops__V_417_417 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                    MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_417_417, 0) = backend_libs__builtin_ops__V_653_653;
                                                  }
                                                  {
                                                    backend_libs__builtin_ops__V_418_418 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                    MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_418_418, 0) = backend_libs__builtin_ops__V_665_665;
                                                  }
                                                  {
                                                    backend_libs__builtin_ops__V_416_416 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_416_416, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_416_416, 1) = ((MR_Box) (backend_libs__builtin_ops__CompareOp_421));
                                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_416_416, 2) = ((MR_Box) (backend_libs__builtin_ops__V_417_417));
                                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_416_416, 3) = ((MR_Box) (backend_libs__builtin_ops__V_418_418));
                                                  }
                                                  {
                                                    backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                                    MR_hl_field(MR_mktag(2), backend_libs__builtin_ops__CodePrime_13, 0) = ((MR_Box) (backend_libs__builtin_ops__V_416_416));
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
                                          MR_Word backend_libs__builtin_ops__V_424_424;
                                          MR_Word backend_libs__builtin_ops__V_425_425;
                                          MR_Word backend_libs__builtin_ops__V_426_426;
                                          MR_Word backend_libs__builtin_ops__CompareOp_429;

                                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_12 == (MR_Integer) 0);
                                          if (backend_libs__builtin_ops__succeeded)
                                            {
                                              backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_664_664 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                              if (backend_libs__builtin_ops__succeeded)
                                                {
                                                  backend_libs__builtin_ops__CompareOp_429 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 26));
                                                  {
                                                    backend_libs__builtin_ops__V_425_425 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                    MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_425_425, 0) = backend_libs__builtin_ops__V_653_653;
                                                  }
                                                  {
                                                    backend_libs__builtin_ops__V_426_426 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                    MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_426_426, 0) = backend_libs__builtin_ops__V_665_665;
                                                  }
                                                  {
                                                    backend_libs__builtin_ops__V_424_424 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_424_424, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_424_424, 1) = ((MR_Box) (backend_libs__builtin_ops__CompareOp_429));
                                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_424_424, 2) = ((MR_Box) (backend_libs__builtin_ops__V_425_425));
                                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_424_424, 3) = ((MR_Box) (backend_libs__builtin_ops__V_426_426));
                                                  }
                                                  {
                                                    backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                                    MR_hl_field(MR_mktag(2), backend_libs__builtin_ops__CodePrime_13, 0) = ((MR_Box) (backend_libs__builtin_ops__V_424_424));
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
                                          MR_Word backend_libs__builtin_ops__V_106_106;
                                          MR_Word backend_libs__builtin_ops__V_107_107;
                                          MR_Word backend_libs__builtin_ops__V_108_108;

                                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_12 == (MR_Integer) 0);
                                          if (backend_libs__builtin_ops__succeeded)
                                            {
                                              backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_664_664 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                              if (backend_libs__builtin_ops__succeeded)
                                                {
                                                  backend_libs__builtin_ops__V_107_107 = (MR_Integer) 6;
                                                  {
                                                    backend_libs__builtin_ops__V_108_108 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                    MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_108_108, 0) = backend_libs__builtin_ops__V_653_653;
                                                  }
                                                  {
                                                    backend_libs__builtin_ops__V_106_106 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_106_106, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_106_106, 1) = ((MR_Box) (backend_libs__builtin_ops__V_107_107));
                                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_106_106, 2) = ((MR_Box) (backend_libs__builtin_ops__V_108_108));
                                                  }
                                                  {
                                                    backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                    MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__V_665_665;
                                                    MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_106_106));
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
                                          MR_Word backend_libs__builtin_ops__ArithOp_430;
                                          MR_Word backend_libs__builtin_ops__V_433_433;
                                          MR_Word backend_libs__builtin_ops__V_434_434;
                                          MR_Word backend_libs__builtin_ops__V_435_435;
                                          MR_Word backend_libs__builtin_ops__V_436_436;
                                          MR_Box backend_libs__builtin_ops__Z_439;

                                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_12 == (MR_Integer) 0);
                                          if (backend_libs__builtin_ops__succeeded)
                                            {
                                              backend_libs__builtin_ops__ArithOp_430 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8));
                                              backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_664_664)) == (MR_mktag((MR_Integer) 1)));
                                              if (backend_libs__builtin_ops__succeeded)
                                                {
                                                  backend_libs__builtin_ops__Z_439 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_664_664, (MR_Integer) 0));
                                                  backend_libs__builtin_ops__V_433_433 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_664_664, (MR_Integer) 1)));
                                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_433_433 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                  if (backend_libs__builtin_ops__succeeded)
                                                    {
                                                      {
                                                        backend_libs__builtin_ops__V_435_435 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_435_435, 0) = backend_libs__builtin_ops__V_653_653;
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__V_436_436 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_436_436, 0) = backend_libs__builtin_ops__V_665_665;
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__V_434_434 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_434_434, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_434_434, 1) = ((MR_Box) (backend_libs__builtin_ops__ArithOp_430));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_434_434, 2) = ((MR_Box) (backend_libs__builtin_ops__V_435_435));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_434_434, 3) = ((MR_Box) (backend_libs__builtin_ops__V_436_436));
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Z_439;
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_434_434));
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
                                          MR_Word backend_libs__builtin_ops__ArithOp_440;
                                          MR_Word backend_libs__builtin_ops__V_443_443;
                                          MR_Word backend_libs__builtin_ops__V_444_444;
                                          MR_Word backend_libs__builtin_ops__V_445_445;
                                          MR_Word backend_libs__builtin_ops__V_446_446;
                                          MR_Box backend_libs__builtin_ops__Z_449;

                                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_12 == (MR_Integer) 0);
                                          if (backend_libs__builtin_ops__succeeded)
                                            {
                                              backend_libs__builtin_ops__ArithOp_440 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
                                              backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_664_664)) == (MR_mktag((MR_Integer) 1)));
                                              if (backend_libs__builtin_ops__succeeded)
                                                {
                                                  backend_libs__builtin_ops__Z_449 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_664_664, (MR_Integer) 0));
                                                  backend_libs__builtin_ops__V_443_443 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_664_664, (MR_Integer) 1)));
                                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_443_443 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                  if (backend_libs__builtin_ops__succeeded)
                                                    {
                                                      {
                                                        backend_libs__builtin_ops__V_445_445 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_445_445, 0) = backend_libs__builtin_ops__V_653_653;
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__V_446_446 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_446_446, 0) = backend_libs__builtin_ops__V_665_665;
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__V_444_444 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_444_444, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_444_444, 1) = ((MR_Box) (backend_libs__builtin_ops__ArithOp_440));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_444_444, 2) = ((MR_Box) (backend_libs__builtin_ops__V_445_445));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_444_444, 3) = ((MR_Box) (backend_libs__builtin_ops__V_446_446));
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Z_449;
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_444_444));
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
                                          MR_Word backend_libs__builtin_ops__ArithOp_450;
                                          MR_Word backend_libs__builtin_ops__V_453_453;
                                          MR_Word backend_libs__builtin_ops__V_454_454;
                                          MR_Word backend_libs__builtin_ops__V_455_455;
                                          MR_Word backend_libs__builtin_ops__V_456_456;
                                          MR_Box backend_libs__builtin_ops__Z_459;

                                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_12 == (MR_Integer) 0);
                                          if (backend_libs__builtin_ops__succeeded)
                                            {
                                              backend_libs__builtin_ops__ArithOp_450 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                                              backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_664_664)) == (MR_mktag((MR_Integer) 1)));
                                              if (backend_libs__builtin_ops__succeeded)
                                                {
                                                  backend_libs__builtin_ops__Z_459 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_664_664, (MR_Integer) 0));
                                                  backend_libs__builtin_ops__V_453_453 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_664_664, (MR_Integer) 1)));
                                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_453_453 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                  if (backend_libs__builtin_ops__succeeded)
                                                    {
                                                      {
                                                        backend_libs__builtin_ops__V_455_455 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_455_455, 0) = backend_libs__builtin_ops__V_653_653;
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__V_456_456 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_456_456, 0) = backend_libs__builtin_ops__V_665_665;
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__V_454_454 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_454_454, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_454_454, 1) = ((MR_Box) (backend_libs__builtin_ops__ArithOp_450));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_454_454, 2) = ((MR_Box) (backend_libs__builtin_ops__V_455_455));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_454_454, 3) = ((MR_Box) (backend_libs__builtin_ops__V_456_456));
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Z_459;
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_454_454));
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
                                          MR_Word backend_libs__builtin_ops__ArithOp_460;
                                          MR_Word backend_libs__builtin_ops__V_463_463;
                                          MR_Word backend_libs__builtin_ops__V_464_464;
                                          MR_Word backend_libs__builtin_ops__V_465_465;
                                          MR_Word backend_libs__builtin_ops__V_466_466;
                                          MR_Box backend_libs__builtin_ops__Z_469;

                                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_12 == (MR_Integer) 0);
                                          if (backend_libs__builtin_ops__succeeded)
                                            {
                                              backend_libs__builtin_ops__ArithOp_460 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
                                              backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_664_664)) == (MR_mktag((MR_Integer) 1)));
                                              if (backend_libs__builtin_ops__succeeded)
                                                {
                                                  backend_libs__builtin_ops__Z_469 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_664_664, (MR_Integer) 0));
                                                  backend_libs__builtin_ops__V_463_463 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_664_664, (MR_Integer) 1)));
                                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_463_463 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                  if (backend_libs__builtin_ops__succeeded)
                                                    {
                                                      {
                                                        backend_libs__builtin_ops__V_465_465 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_465_465, 0) = backend_libs__builtin_ops__V_653_653;
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__V_466_466 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_466_466, 0) = backend_libs__builtin_ops__V_665_665;
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__V_464_464 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_464_464, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_464_464, 1) = ((MR_Box) (backend_libs__builtin_ops__ArithOp_460));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_464_464, 2) = ((MR_Box) (backend_libs__builtin_ops__V_465_465));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_464_464, 3) = ((MR_Box) (backend_libs__builtin_ops__V_466_466));
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Z_469;
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_464_464));
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
                                          MR_Word backend_libs__builtin_ops__ArithOp_470;
                                          MR_Word backend_libs__builtin_ops__V_473_473;
                                          MR_Word backend_libs__builtin_ops__V_474_474;
                                          MR_Word backend_libs__builtin_ops__V_475_475;
                                          MR_Word backend_libs__builtin_ops__V_476_476;
                                          MR_Box backend_libs__builtin_ops__Z_479;

                                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_12 == (MR_Integer) 0);
                                          if (backend_libs__builtin_ops__succeeded)
                                            {
                                              backend_libs__builtin_ops__ArithOp_470 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
                                              backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_664_664)) == (MR_mktag((MR_Integer) 1)));
                                              if (backend_libs__builtin_ops__succeeded)
                                                {
                                                  backend_libs__builtin_ops__Z_479 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_664_664, (MR_Integer) 0));
                                                  backend_libs__builtin_ops__V_473_473 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_664_664, (MR_Integer) 1)));
                                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_473_473 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                  if (backend_libs__builtin_ops__succeeded)
                                                    {
                                                      {
                                                        backend_libs__builtin_ops__V_475_475 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_475_475, 0) = backend_libs__builtin_ops__V_653_653;
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__V_476_476 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_476_476, 0) = backend_libs__builtin_ops__V_665_665;
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__V_474_474 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_474_474, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_474_474, 1) = ((MR_Box) (backend_libs__builtin_ops__ArithOp_470));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_474_474, 2) = ((MR_Box) (backend_libs__builtin_ops__V_475_475));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_474_474, 3) = ((MR_Box) (backend_libs__builtin_ops__V_476_476));
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Z_479;
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_474_474));
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
                                          MR_Word backend_libs__builtin_ops__ArithOp_480;
                                          MR_Word backend_libs__builtin_ops__V_483_483;
                                          MR_Word backend_libs__builtin_ops__V_484_484;
                                          MR_Word backend_libs__builtin_ops__V_485_485;
                                          MR_Word backend_libs__builtin_ops__V_486_486;
                                          MR_Box backend_libs__builtin_ops__Z_489;

                                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_12 == (MR_Integer) 0);
                                          if (backend_libs__builtin_ops__succeeded)
                                            {
                                              backend_libs__builtin_ops__ArithOp_480 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
                                              backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_664_664)) == (MR_mktag((MR_Integer) 1)));
                                              if (backend_libs__builtin_ops__succeeded)
                                                {
                                                  backend_libs__builtin_ops__Z_489 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_664_664, (MR_Integer) 0));
                                                  backend_libs__builtin_ops__V_483_483 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_664_664, (MR_Integer) 1)));
                                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_483_483 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                  if (backend_libs__builtin_ops__succeeded)
                                                    {
                                                      {
                                                        backend_libs__builtin_ops__V_485_485 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_485_485, 0) = backend_libs__builtin_ops__V_653_653;
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__V_486_486 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_486_486, 0) = backend_libs__builtin_ops__V_665_665;
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__V_484_484 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_484_484, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_484_484, 1) = ((MR_Box) (backend_libs__builtin_ops__ArithOp_480));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_484_484, 2) = ((MR_Box) (backend_libs__builtin_ops__V_485_485));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_484_484, 3) = ((MR_Box) (backend_libs__builtin_ops__V_486_486));
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Z_489;
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_484_484));
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
                                          MR_Word backend_libs__builtin_ops__ArithOp_490;
                                          MR_Word backend_libs__builtin_ops__V_493_493;
                                          MR_Word backend_libs__builtin_ops__V_494_494;
                                          MR_Word backend_libs__builtin_ops__V_495_495;
                                          MR_Word backend_libs__builtin_ops__V_496_496;
                                          MR_Box backend_libs__builtin_ops__Z_499;

                                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_12 == (MR_Integer) 0);
                                          if (backend_libs__builtin_ops__succeeded)
                                            {
                                              backend_libs__builtin_ops__ArithOp_490 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4));
                                              backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_664_664)) == (MR_mktag((MR_Integer) 1)));
                                              if (backend_libs__builtin_ops__succeeded)
                                                {
                                                  backend_libs__builtin_ops__Z_499 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_664_664, (MR_Integer) 0));
                                                  backend_libs__builtin_ops__V_493_493 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_664_664, (MR_Integer) 1)));
                                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_493_493 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                  if (backend_libs__builtin_ops__succeeded)
                                                    {
                                                      {
                                                        backend_libs__builtin_ops__V_495_495 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_495_495, 0) = backend_libs__builtin_ops__V_653_653;
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__V_496_496 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_496_496, 0) = backend_libs__builtin_ops__V_665_665;
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__V_494_494 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_494_494, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_494_494, 1) = ((MR_Box) (backend_libs__builtin_ops__ArithOp_490));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_494_494, 2) = ((MR_Box) (backend_libs__builtin_ops__V_495_495));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_494_494, 3) = ((MR_Box) (backend_libs__builtin_ops__V_496_496));
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Z_499;
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_494_494));
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
                                          MR_Word backend_libs__builtin_ops__ArithOp_500;
                                          MR_Word backend_libs__builtin_ops__V_503_503;
                                          MR_Word backend_libs__builtin_ops__V_504_504;
                                          MR_Word backend_libs__builtin_ops__V_505_505;
                                          MR_Word backend_libs__builtin_ops__V_506_506;
                                          MR_Box backend_libs__builtin_ops__Z_509;

                                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_12 == (MR_Integer) 0);
                                          if (backend_libs__builtin_ops__succeeded)
                                            {
                                              backend_libs__builtin_ops__ArithOp_500 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6));
                                              backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_664_664)) == (MR_mktag((MR_Integer) 1)));
                                              if (backend_libs__builtin_ops__succeeded)
                                                {
                                                  backend_libs__builtin_ops__Z_509 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_664_664, (MR_Integer) 0));
                                                  backend_libs__builtin_ops__V_503_503 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_664_664, (MR_Integer) 1)));
                                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_503_503 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                  if (backend_libs__builtin_ops__succeeded)
                                                    {
                                                      {
                                                        backend_libs__builtin_ops__V_505_505 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_505_505, 0) = backend_libs__builtin_ops__V_653_653;
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__V_506_506 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_506_506, 0) = backend_libs__builtin_ops__V_665_665;
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__V_504_504 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_504_504, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_504_504, 1) = ((MR_Box) (backend_libs__builtin_ops__ArithOp_500));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_504_504, 2) = ((MR_Box) (backend_libs__builtin_ops__V_505_505));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_504_504, 3) = ((MR_Box) (backend_libs__builtin_ops__V_506_506));
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Z_509;
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_504_504));
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
                                          MR_Word backend_libs__builtin_ops__V_117_117;
                                          MR_Box backend_libs__builtin_ops__Z_263;

                                          backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_664_664)) == (MR_mktag((MR_Integer) 1)));
                                          if (backend_libs__builtin_ops__succeeded)
                                            {
                                              backend_libs__builtin_ops__Z_263 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_664_664, (MR_Integer) 0));
                                              backend_libs__builtin_ops__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_664_664, (MR_Integer) 1)));
                                              backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_117_117 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                              if (backend_libs__builtin_ops__succeeded)
                                                switch (backend_libs__builtin_ops__ProcNum_12) {
                                                  default:
                                                    backend_libs__builtin_ops__succeeded = MR_FALSE;
                                                    break;
                                                  case (MR_Integer) 0:
                                                    {
                                                      MR_Word backend_libs__builtin_ops__V_126_126;
                                                      MR_Word backend_libs__builtin_ops__V_128_128;
                                                      MR_Word backend_libs__builtin_ops__V_129_129;

                                                      {
                                                        backend_libs__builtin_ops__V_128_128 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_128_128, 0) = backend_libs__builtin_ops__V_653_653;
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__V_129_129 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_129_129, 0) = backend_libs__builtin_ops__V_665_665;
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__V_126_126 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_126_126, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_126_126, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9))));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_126_126, 2) = ((MR_Box) (backend_libs__builtin_ops__V_128_128));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_126_126, 3) = ((MR_Box) (backend_libs__builtin_ops__V_129_129));
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Z_263;
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_126_126));
                                                      }
                                                      backend_libs__builtin_ops__succeeded = MR_TRUE;
                                                    }
                                                    break;
                                                  case (MR_Integer) 1:
                                                    {
                                                      MR_Word backend_libs__builtin_ops__V_122_122;
                                                      MR_Word backend_libs__builtin_ops__V_124_124;
                                                      MR_Word backend_libs__builtin_ops__V_125_125;

                                                      {
                                                        backend_libs__builtin_ops__V_124_124 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_124_124, 0) = backend_libs__builtin_ops__V_653_653;
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__V_125_125 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_125_125, 0) = backend_libs__builtin_ops__Z_263;
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__V_122_122 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_122_122, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_122_122, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9))));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_122_122, 2) = ((MR_Box) (backend_libs__builtin_ops__V_124_124));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_122_122, 3) = ((MR_Box) (backend_libs__builtin_ops__V_125_125));
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__V_665_665;
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_122_122));
                                                      }
                                                      backend_libs__builtin_ops__succeeded = MR_TRUE;
                                                    }
                                                    break;
                                                  case (MR_Integer) 2:
                                                    {
                                                      MR_Word backend_libs__builtin_ops__V_118_118;
                                                      MR_Word backend_libs__builtin_ops__V_120_120;
                                                      MR_Word backend_libs__builtin_ops__V_121_121;

                                                      {
                                                        backend_libs__builtin_ops__V_120_120 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_120_120, 0) = backend_libs__builtin_ops__V_665_665;
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__V_121_121 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_121_121, 0) = backend_libs__builtin_ops__Z_263;
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__V_118_118 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_118_118, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_118_118, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9))));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_118_118, 2) = ((MR_Box) (backend_libs__builtin_ops__V_120_120));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_118_118, 3) = ((MR_Box) (backend_libs__builtin_ops__V_121_121));
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__V_653_653;
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_118_118));
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
                              backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_652_652 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
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
                            MR_Integer backend_libs__builtin_ops__slot_6;
                            MR_String backend_libs__builtin_ops__str_7;

                            backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_12 == (MR_Integer) 0);
                            if (backend_libs__builtin_ops__succeeded)
                              {
                                /* hashed string jump switch */
                                /* compute the hash value of the input string */
                                backend_libs__builtin_ops__slot_6 = ((MR_hash_string5(backend_libs__builtin_ops__PredName_7)) & (MR_Integer) 31);
                                /* hash chain loop */
                                do
                                  {
                                    /* lookup the string for this hash slot */
                                    backend_libs__builtin_ops__str_7 = ((&backend_libs__builtin_ops_vector_common_2[39 + backend_libs__builtin_ops__slot_6]))->backend_libs__builtin_ops__vector_common_type_2_0__vct_2_f_0;
                                    /* did we find a match? */
                                    if ((((backend_libs__builtin_ops__str_7 != NULL)) && ((strcmp(backend_libs__builtin_ops__str_7, backend_libs__builtin_ops__PredName_7) == 0))))
                                      {
                                        /* we found a match; dispatch to the corresponding code */
                                        switch (backend_libs__builtin_ops__slot_6) {
                                          default: /*NOTREACHED*/ MR_assert(0);
                                          case (MR_Integer) 1:
                                            {
                                              /* case "pointer_equal" */
                                              {
                                                MR_Word backend_libs__builtin_ops__V_182_182;
                                                MR_Word backend_libs__builtin_ops__V_183_183;
                                                MR_Word backend_libs__builtin_ops__V_184_184;
                                                MR_Word backend_libs__builtin_ops__V_185_185;
                                                MR_Box backend_libs__builtin_ops__X_229;
                                                MR_Box backend_libs__builtin_ops__Y_230;
                                                MR_Word backend_libs__builtin_ops__V_650_650;
                                                MR_Box backend_libs__builtin_ops__V_651_651;

                                                backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_652_652)) == (MR_mktag((MR_Integer) 1)));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  {
                                                    backend_libs__builtin_ops__V_651_651 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_652_652, (MR_Integer) 0));
                                                    backend_libs__builtin_ops__V_650_650 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_652_652, (MR_Integer) 1)));
                                                    if ((backend_libs__builtin_ops__V_650_650 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                                                      {
                                                        backend_libs__builtin_ops__X_229 = backend_libs__builtin_ops__V_653_653;
                                                        backend_libs__builtin_ops__Y_230 = backend_libs__builtin_ops__V_651_651;
                                                        backend_libs__builtin_ops__succeeded = MR_TRUE;
                                                      }
                                                    else
                                                      {
                                                        MR_Word backend_libs__builtin_ops__V_179_179;

                                                        backend_libs__builtin_ops__X_229 = backend_libs__builtin_ops__V_651_651;
                                                        backend_libs__builtin_ops__Y_230 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_650_650, (MR_Integer) 0));
                                                        backend_libs__builtin_ops__V_179_179 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_650_650, (MR_Integer) 1)));
                                                        backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_179_179 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                      }
                                                    if (backend_libs__builtin_ops__succeeded)
                                                      {
                                                        backend_libs__builtin_ops__V_183_183 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 54));
                                                        {
                                                          backend_libs__builtin_ops__V_184_184 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_184_184, 0) = backend_libs__builtin_ops__X_229;
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__V_185_185 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_185_185, 0) = backend_libs__builtin_ops__Y_230;
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__V_182_182 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_182_182, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_182_182, 1) = ((MR_Box) (backend_libs__builtin_ops__V_183_183));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_182_182, 2) = ((MR_Box) (backend_libs__builtin_ops__V_184_184));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_182_182, 3) = ((MR_Box) (backend_libs__builtin_ops__V_185_185));
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                                          MR_hl_field(MR_mktag(2), backend_libs__builtin_ops__CodePrime_13, 0) = ((MR_Box) (backend_libs__builtin_ops__V_182_182));
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
                                                MR_Word backend_libs__builtin_ops__V_197_197;
                                                MR_Word backend_libs__builtin_ops__V_198_198;
                                                MR_Box backend_libs__builtin_ops__Y_223;

                                                backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_652_652)) == (MR_mktag((MR_Integer) 1)));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  {
                                                    backend_libs__builtin_ops__Y_223 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_652_652, (MR_Integer) 0));
                                                    backend_libs__builtin_ops__V_197_197 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_652_652, (MR_Integer) 1)));
                                                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_197_197 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                    if (backend_libs__builtin_ops__succeeded)
                                                      {
                                                        {
                                                          backend_libs__builtin_ops__V_198_198 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_198_198, 0) = backend_libs__builtin_ops__V_653_653;
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Y_223;
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_198_198));
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
                                              backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_652_652 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
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
                                                MR_Word backend_libs__builtin_ops__V_192_192;
                                                MR_Word backend_libs__builtin_ops__V_193_193;
                                                MR_Word backend_libs__builtin_ops__V_194_194;
                                                MR_Word backend_libs__builtin_ops__V_195_195;
                                                MR_Box backend_libs__builtin_ops__Y_225;

                                                backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_652_652)) == (MR_mktag((MR_Integer) 1)));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  {
                                                    backend_libs__builtin_ops__Y_225 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_652_652, (MR_Integer) 0));
                                                    backend_libs__builtin_ops__V_192_192 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_652_652, (MR_Integer) 1)));
                                                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_192_192 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                    if (backend_libs__builtin_ops__succeeded)
                                                      {
                                                        {
                                                          backend_libs__builtin_ops__V_194_194 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_194_194, 0) = backend_libs__builtin_ops__V_653_653;
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__V_195_195 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_195_195, 0) = backend_libs__builtin_ops__Y_225;
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__V_193_193 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_193_193, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_193_193, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 24))));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_193_193, 2) = ((MR_Box) (backend_libs__builtin_ops__V_194_194));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_193_193, 3) = ((MR_Box) (backend_libs__builtin_ops__V_195_195));
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                                          MR_hl_field(MR_mktag(2), backend_libs__builtin_ops__CodePrime_13, 0) = ((MR_Box) (backend_libs__builtin_ops__V_193_193));
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
                                                MR_Word backend_libs__builtin_ops__V_520_520;
                                                MR_Word backend_libs__builtin_ops__V_521_521;
                                                MR_Word backend_libs__builtin_ops__V_522_522;
                                                MR_Word backend_libs__builtin_ops__V_523_523;
                                                MR_Box backend_libs__builtin_ops__Y_525;

                                                backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_652_652)) == (MR_mktag((MR_Integer) 1)));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  {
                                                    backend_libs__builtin_ops__Y_525 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_652_652, (MR_Integer) 0));
                                                    backend_libs__builtin_ops__V_520_520 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_652_652, (MR_Integer) 1)));
                                                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_520_520 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                    if (backend_libs__builtin_ops__succeeded)
                                                      {
                                                        {
                                                          backend_libs__builtin_ops__V_522_522 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_522_522, 0) = backend_libs__builtin_ops__V_653_653;
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__V_523_523 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_523_523, 0) = backend_libs__builtin_ops__Y_525;
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__V_521_521 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_521_521, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_521_521, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 23))));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_521_521, 2) = ((MR_Box) (backend_libs__builtin_ops__V_522_522));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_521_521, 3) = ((MR_Box) (backend_libs__builtin_ops__V_523_523));
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                                          MR_hl_field(MR_mktag(2), backend_libs__builtin_ops__CodePrime_13, 0) = ((MR_Box) (backend_libs__builtin_ops__V_521_521));
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
                                                MR_Word backend_libs__builtin_ops__V_200_200;
                                                MR_Box backend_libs__builtin_ops__Y_221;

                                                backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_652_652)) == (MR_mktag((MR_Integer) 1)));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  {
                                                    backend_libs__builtin_ops__Y_221 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_652_652, (MR_Integer) 0));
                                                    backend_libs__builtin_ops__V_200_200 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_652_652, (MR_Integer) 1)));
                                                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_200_200 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                    if (backend_libs__builtin_ops__succeeded)
                                                      {
                                                        {
                                                          backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                                          MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__V_653_653;
                                                          MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__CodePrime_13, 1) = backend_libs__builtin_ops__Y_221;
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
                                                MR_Word backend_libs__builtin_ops__V_187_187;
                                                MR_Word backend_libs__builtin_ops__V_188_188;
                                                MR_Word backend_libs__builtin_ops__V_189_189;
                                                MR_Word backend_libs__builtin_ops__V_190_190;
                                                MR_Box backend_libs__builtin_ops__Y_227;

                                                backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_652_652)) == (MR_mktag((MR_Integer) 1)));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  {
                                                    backend_libs__builtin_ops__Y_227 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_652_652, (MR_Integer) 0));
                                                    backend_libs__builtin_ops__V_187_187 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_652_652, (MR_Integer) 1)));
                                                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_187_187 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                    if (backend_libs__builtin_ops__succeeded)
                                                      {
                                                        {
                                                          backend_libs__builtin_ops__V_189_189 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_189_189, 0) = backend_libs__builtin_ops__V_653_653;
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__V_190_190 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_190_190, 0) = backend_libs__builtin_ops__Y_227;
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__V_188_188 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_188_188, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_188_188, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 55))));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_188_188, 2) = ((MR_Box) (backend_libs__builtin_ops__V_189_189));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_188_188, 3) = ((MR_Box) (backend_libs__builtin_ops__V_190_190));
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                                          MR_hl_field(MR_mktag(2), backend_libs__builtin_ops__CodePrime_13, 0) = ((MR_Box) (backend_libs__builtin_ops__V_188_188));
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
                                                MR_Word backend_libs__builtin_ops__V_511_511;
                                                MR_Word backend_libs__builtin_ops__V_512_512;
                                                MR_Word backend_libs__builtin_ops__V_513_513;
                                                MR_Word backend_libs__builtin_ops__V_514_514;
                                                MR_Box backend_libs__builtin_ops__Y_516;

                                                backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_652_652)) == (MR_mktag((MR_Integer) 1)));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  {
                                                    backend_libs__builtin_ops__Y_516 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_652_652, (MR_Integer) 0));
                                                    backend_libs__builtin_ops__V_511_511 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_652_652, (MR_Integer) 1)));
                                                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_511_511 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                    if (backend_libs__builtin_ops__succeeded)
                                                      {
                                                        {
                                                          backend_libs__builtin_ops__V_513_513 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_513_513, 0) = backend_libs__builtin_ops__V_653_653;
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__V_514_514 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_514_514, 0) = backend_libs__builtin_ops__Y_516;
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__V_512_512 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_512_512, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_512_512, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 56))));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_512_512, 2) = ((MR_Box) (backend_libs__builtin_ops__V_513_513));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_512_512, 3) = ((MR_Box) (backend_libs__builtin_ops__V_514_514));
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                                          MR_hl_field(MR_mktag(2), backend_libs__builtin_ops__CodePrime_13, 0) = ((MR_Box) (backend_libs__builtin_ops__V_512_512));
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
                                                MR_Word backend_libs__builtin_ops__V_202_202;

                                                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_652_652 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  {
                                                    backend_libs__builtin_ops__V_202_202 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                                                    backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_mkword(MR_mktag(3), &backend_libs__builtin_ops_scalar_common_4[0]);
                                                    backend_libs__builtin_ops__succeeded = MR_TRUE;
                                                  }
                                              }
                                            }
                                            break;
                                        }
                                        /* jump out of search loop */
                                        goto label_1;
                                      }
                                    else
                                      {
                                        /* no match yet, so get next slot in hash chain */
                                        backend_libs__builtin_ops__slot_6 = ((&backend_libs__builtin_ops_vector_common_2[39 + backend_libs__builtin_ops__slot_6]))->backend_libs__builtin_ops__vector_common_type_2_0__vct_2_f_1;
                                      }
                                  }
                                while ((backend_libs__builtin_ops__slot_6 >= (MR_Integer) 0));
                                backend_libs__builtin_ops__succeeded = MR_FALSE;
                              label_1:;
                              }
                          }
                        }
                        break;
                      case (MR_Integer) 5:
                        {
                          /* case "term_size_prof_builtin" */
                          {
                            MR_Box backend_libs__builtin_ops__Z_46;
                            MR_Word backend_libs__builtin_ops__V_171_171;
                            MR_Word backend_libs__builtin_ops__V_172_172;
                            MR_Word backend_libs__builtin_ops__V_173_173;
                            MR_Word backend_libs__builtin_ops__V_174_174;
                            MR_Word backend_libs__builtin_ops__V_175_175;
                            MR_Word backend_libs__builtin_ops__V_176_176;
                            MR_Box backend_libs__builtin_ops__Y_238;

                            backend_libs__builtin_ops__succeeded = (strcmp(backend_libs__builtin_ops__PredName_7, (MR_String) "term_size_plus") == 0);
                            if (backend_libs__builtin_ops__succeeded)
                              {
                                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_12 == (MR_Integer) 0);
                                if (backend_libs__builtin_ops__succeeded)
                                  {
                                    backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_652_652)) == (MR_mktag((MR_Integer) 1)));
                                    if (backend_libs__builtin_ops__succeeded)
                                      {
                                        backend_libs__builtin_ops__Y_238 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_652_652, (MR_Integer) 0));
                                        backend_libs__builtin_ops__V_171_171 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_652_652, (MR_Integer) 1)));
                                        backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_171_171)) == (MR_mktag((MR_Integer) 1)));
                                        if (backend_libs__builtin_ops__succeeded)
                                          {
                                            backend_libs__builtin_ops__Z_46 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_171_171, (MR_Integer) 0));
                                            backend_libs__builtin_ops__V_172_172 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_171_171, (MR_Integer) 1)));
                                            backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_172_172 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                            if (backend_libs__builtin_ops__succeeded)
                                              {
                                                backend_libs__builtin_ops__V_174_174 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                                                {
                                                  backend_libs__builtin_ops__V_175_175 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                  MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_175_175, 0) = backend_libs__builtin_ops__V_653_653;
                                                }
                                                {
                                                  backend_libs__builtin_ops__V_176_176 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                  MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_176_176, 0) = backend_libs__builtin_ops__Y_238;
                                                }
                                                {
                                                  backend_libs__builtin_ops__V_173_173 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                  MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_173_173, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                  MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_173_173, 1) = ((MR_Box) (backend_libs__builtin_ops__V_174_174));
                                                  MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_173_173, 2) = ((MR_Box) (backend_libs__builtin_ops__V_175_175));
                                                  MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_173_173, 3) = ((MR_Box) (backend_libs__builtin_ops__V_176_176));
                                                }
                                                {
                                                  backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                  MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Z_46;
                                                  MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_173_173));
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
                      case (MR_Integer) 6:
                        {
                          /* case "uint" */
                          {
                            MR_Word backend_libs__builtin_ops__V_642_642;
                            MR_Box backend_libs__builtin_ops__V_643_643;
                            MR_Integer backend_libs__builtin_ops__slot_4;
                            MR_String backend_libs__builtin_ops__str_5;

                            backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_12 == (MR_Integer) 0);
                            if (backend_libs__builtin_ops__succeeded)
                              {
                                backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_652_652)) == (MR_mktag((MR_Integer) 1)));
                                if (backend_libs__builtin_ops__succeeded)
                                  {
                                    backend_libs__builtin_ops__V_643_643 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_652_652, (MR_Integer) 0));
                                    backend_libs__builtin_ops__V_642_642 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_652_652, (MR_Integer) 1)));
                                    /* hashed string jump switch */
                                    /* compute the hash value of the input string */
                                    backend_libs__builtin_ops__slot_4 = ((MR_hash_string4(backend_libs__builtin_ops__PredName_7)) & (MR_Integer) 63);
                                    /* no collisions; no hash chain loop */
                                    /* lookup the string for this hash slot */
                                    backend_libs__builtin_ops__str_5 = ((&backend_libs__builtin_ops_vector_common_3[80 + backend_libs__builtin_ops__slot_4]))->backend_libs__builtin_ops__vector_common_type_3_0__vct_3_f_0;
                                    /* did we find a match? */
                                    if ((((backend_libs__builtin_ops__str_5 != NULL)) && ((strcmp(backend_libs__builtin_ops__str_5, backend_libs__builtin_ops__PredName_7) == 0))))
                                      {
                                        /* we found a match; dispatch to the corresponding code */
                                        switch (backend_libs__builtin_ops__slot_4) {
                                          default: /*NOTREACHED*/ MR_assert(0);
                                          case (MR_Integer) 1:
                                            {
                                              /* case ">=" */
                                              {
                                                MR_Word backend_libs__builtin_ops__V_574_574;
                                                MR_Word backend_libs__builtin_ops__V_575_575;
                                                MR_Word backend_libs__builtin_ops__V_576_576;
                                                MR_Word backend_libs__builtin_ops__CompareOp_579;

                                                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_642_642 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  {
                                                    backend_libs__builtin_ops__CompareOp_579 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 33));
                                                    {
                                                      backend_libs__builtin_ops__V_575_575 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_575_575, 0) = backend_libs__builtin_ops__V_653_653;
                                                    }
                                                    {
                                                      backend_libs__builtin_ops__V_576_576 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_576_576, 0) = backend_libs__builtin_ops__V_643_643;
                                                    }
                                                    {
                                                      backend_libs__builtin_ops__V_574_574 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_574_574, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_574_574, 1) = ((MR_Box) (backend_libs__builtin_ops__CompareOp_579));
                                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_574_574, 2) = ((MR_Box) (backend_libs__builtin_ops__V_575_575));
                                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_574_574, 3) = ((MR_Box) (backend_libs__builtin_ops__V_576_576));
                                                    }
                                                    {
                                                      backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                                      MR_hl_field(MR_mktag(2), backend_libs__builtin_ops__CodePrime_13, 0) = ((MR_Box) (backend_libs__builtin_ops__V_574_574));
                                                    }
                                                    backend_libs__builtin_ops__succeeded = MR_TRUE;
                                                  }
                                              }
                                            }
                                            break;
                                          case (MR_Integer) 6:
                                            {
                                              /* case "xor" */
                                              {
                                                MR_Word backend_libs__builtin_ops__V_612_612;
                                                MR_Word backend_libs__builtin_ops__V_613_613;
                                                MR_Word backend_libs__builtin_ops__V_614_614;
                                                MR_Word backend_libs__builtin_ops__V_615_615;
                                                MR_Box backend_libs__builtin_ops__Z_618;

                                                backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_642_642)) == (MR_mktag((MR_Integer) 1)));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  {
                                                    backend_libs__builtin_ops__Z_618 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_642_642, (MR_Integer) 0));
                                                    backend_libs__builtin_ops__V_612_612 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_642_642, (MR_Integer) 1)));
                                                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_612_612 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                    if (backend_libs__builtin_ops__succeeded)
                                                      {
                                                        {
                                                          backend_libs__builtin_ops__V_614_614 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_614_614, 0) = backend_libs__builtin_ops__V_653_653;
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__V_615_615 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_615_615, 0) = backend_libs__builtin_ops__V_643_643;
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__V_613_613 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_613_613, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_613_613, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 41))));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_613_613, 2) = ((MR_Box) (backend_libs__builtin_ops__V_614_614));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_613_613, 3) = ((MR_Box) (backend_libs__builtin_ops__V_615_615));
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Z_618;
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_613_613));
                                                        }
                                                        backend_libs__builtin_ops__succeeded = MR_TRUE;
                                                      }
                                                  }
                                              }
                                            }
                                            break;
                                          case (MR_Integer) 17:
                                            {
                                              /* case "/\" */
                                              {
                                                MR_Word backend_libs__builtin_ops__V_548_548;
                                                MR_Word backend_libs__builtin_ops__V_549_549;
                                                MR_Word backend_libs__builtin_ops__V_550_550;
                                                MR_Word backend_libs__builtin_ops__V_551_551;
                                                MR_Box backend_libs__builtin_ops__Z_554;

                                                backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_642_642)) == (MR_mktag((MR_Integer) 1)));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  {
                                                    backend_libs__builtin_ops__Z_554 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_642_642, (MR_Integer) 0));
                                                    backend_libs__builtin_ops__V_548_548 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_642_642, (MR_Integer) 1)));
                                                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_548_548 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                    if (backend_libs__builtin_ops__succeeded)
                                                      {
                                                        {
                                                          backend_libs__builtin_ops__V_550_550 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_550_550, 0) = backend_libs__builtin_ops__V_653_653;
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__V_551_551 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_551_551, 0) = backend_libs__builtin_ops__V_643_643;
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__V_549_549 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_549_549, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_549_549, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 39))));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_549_549, 2) = ((MR_Box) (backend_libs__builtin_ops__V_550_550));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_549_549, 3) = ((MR_Box) (backend_libs__builtin_ops__V_551_551));
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Z_554;
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_549_549));
                                                        }
                                                        backend_libs__builtin_ops__succeeded = MR_TRUE;
                                                      }
                                                  }
                                              }
                                            }
                                            break;
                                          case (MR_Integer) 20:
                                            {
                                              /* case "unchecked_rem" */
                                              {
                                                MR_Word backend_libs__builtin_ops__V_602_602;
                                                MR_Word backend_libs__builtin_ops__V_603_603;
                                                MR_Word backend_libs__builtin_ops__V_604_604;
                                                MR_Word backend_libs__builtin_ops__V_605_605;
                                                MR_Box backend_libs__builtin_ops__Z_608;

                                                backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_642_642)) == (MR_mktag((MR_Integer) 1)));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  {
                                                    backend_libs__builtin_ops__Z_608 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_642_642, (MR_Integer) 0));
                                                    backend_libs__builtin_ops__V_602_602 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_642_642, (MR_Integer) 1)));
                                                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_602_602 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                    if (backend_libs__builtin_ops__succeeded)
                                                      {
                                                        {
                                                          backend_libs__builtin_ops__V_604_604 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_604_604, 0) = backend_libs__builtin_ops__V_653_653;
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__V_605_605 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_605_605, 0) = backend_libs__builtin_ops__V_643_643;
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__V_603_603 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_603_603, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_603_603, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 38))));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_603_603, 2) = ((MR_Box) (backend_libs__builtin_ops__V_604_604));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_603_603, 3) = ((MR_Box) (backend_libs__builtin_ops__V_605_605));
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Z_608;
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_603_603));
                                                        }
                                                        backend_libs__builtin_ops__succeeded = MR_TRUE;
                                                      }
                                                  }
                                              }
                                            }
                                            break;
                                          case (MR_Integer) 24:
                                            {
                                              /* case "unchecked_quotient" */
                                              {
                                                MR_Word backend_libs__builtin_ops__V_592_592;
                                                MR_Word backend_libs__builtin_ops__V_593_593;
                                                MR_Word backend_libs__builtin_ops__V_594_594;
                                                MR_Word backend_libs__builtin_ops__V_595_595;
                                                MR_Box backend_libs__builtin_ops__Z_598;

                                                backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_642_642)) == (MR_mktag((MR_Integer) 1)));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  {
                                                    backend_libs__builtin_ops__Z_598 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_642_642, (MR_Integer) 0));
                                                    backend_libs__builtin_ops__V_592_592 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_642_642, (MR_Integer) 1)));
                                                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_592_592 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                    if (backend_libs__builtin_ops__succeeded)
                                                      {
                                                        {
                                                          backend_libs__builtin_ops__V_594_594 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_594_594, 0) = backend_libs__builtin_ops__V_653_653;
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__V_595_595 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_595_595, 0) = backend_libs__builtin_ops__V_643_643;
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__V_593_593 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_593_593, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_593_593, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 37))));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_593_593, 2) = ((MR_Box) (backend_libs__builtin_ops__V_594_594));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_593_593, 3) = ((MR_Box) (backend_libs__builtin_ops__V_595_595));
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Z_598;
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_593_593));
                                                        }
                                                        backend_libs__builtin_ops__succeeded = MR_TRUE;
                                                      }
                                                  }
                                              }
                                            }
                                            break;
                                          case (MR_Integer) 29:
                                            {
                                              /* case "\" */
                                              {
                                                MR_Word backend_libs__builtin_ops__V_96_96;
                                                MR_Word backend_libs__builtin_ops__V_97_97;
                                                MR_Word backend_libs__builtin_ops__V_98_98;

                                                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_642_642 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  {
                                                    backend_libs__builtin_ops__V_97_97 = (MR_Integer) 8;
                                                    {
                                                      backend_libs__builtin_ops__V_98_98 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_98_98, 0) = backend_libs__builtin_ops__V_653_653;
                                                    }
                                                    {
                                                      backend_libs__builtin_ops__V_96_96 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_96_96, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_96_96, 1) = ((MR_Box) (backend_libs__builtin_ops__V_97_97));
                                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_96_96, 2) = ((MR_Box) (backend_libs__builtin_ops__V_98_98));
                                                    }
                                                    {
                                                      backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__V_643_643;
                                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_96_96));
                                                    }
                                                    backend_libs__builtin_ops__succeeded = MR_TRUE;
                                                  }
                                              }
                                            }
                                            break;
                                          case (MR_Integer) 35:
                                            {
                                              /* case "=<" */
                                              {
                                                MR_Word backend_libs__builtin_ops__V_558_558;
                                                MR_Word backend_libs__builtin_ops__V_559_559;
                                                MR_Word backend_libs__builtin_ops__V_560_560;
                                                MR_Word backend_libs__builtin_ops__CompareOp_563;

                                                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_642_642 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  {
                                                    backend_libs__builtin_ops__CompareOp_563 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 32));
                                                    {
                                                      backend_libs__builtin_ops__V_559_559 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_559_559, 0) = backend_libs__builtin_ops__V_653_653;
                                                    }
                                                    {
                                                      backend_libs__builtin_ops__V_560_560 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_560_560, 0) = backend_libs__builtin_ops__V_643_643;
                                                    }
                                                    {
                                                      backend_libs__builtin_ops__V_558_558 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_558_558, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_558_558, 1) = ((MR_Box) (backend_libs__builtin_ops__CompareOp_563));
                                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_558_558, 2) = ((MR_Box) (backend_libs__builtin_ops__V_559_559));
                                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_558_558, 3) = ((MR_Box) (backend_libs__builtin_ops__V_560_560));
                                                    }
                                                    {
                                                      backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                                      MR_hl_field(MR_mktag(2), backend_libs__builtin_ops__CodePrime_13, 0) = ((MR_Box) (backend_libs__builtin_ops__V_558_558));
                                                    }
                                                    backend_libs__builtin_ops__succeeded = MR_TRUE;
                                                  }
                                              }
                                            }
                                            break;
                                          case (MR_Integer) 42:
                                            {
                                              /* case "+" */
                                              {
                                                MR_Word backend_libs__builtin_ops__V_528_528;
                                                MR_Word backend_libs__builtin_ops__V_529_529;
                                                MR_Word backend_libs__builtin_ops__V_530_530;
                                                MR_Word backend_libs__builtin_ops__V_531_531;
                                                MR_Box backend_libs__builtin_ops__Z_534;

                                                backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_642_642)) == (MR_mktag((MR_Integer) 1)));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  {
                                                    backend_libs__builtin_ops__Z_534 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_642_642, (MR_Integer) 0));
                                                    backend_libs__builtin_ops__V_528_528 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_642_642, (MR_Integer) 1)));
                                                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_528_528 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                    if (backend_libs__builtin_ops__succeeded)
                                                      {
                                                        {
                                                          backend_libs__builtin_ops__V_530_530 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_530_530, 0) = backend_libs__builtin_ops__V_653_653;
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__V_531_531 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_531_531, 0) = backend_libs__builtin_ops__V_643_643;
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__V_529_529 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_529_529, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_529_529, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 34))));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_529_529, 2) = ((MR_Box) (backend_libs__builtin_ops__V_530_530));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_529_529, 3) = ((MR_Box) (backend_libs__builtin_ops__V_531_531));
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Z_534;
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_529_529));
                                                        }
                                                        backend_libs__builtin_ops__succeeded = MR_TRUE;
                                                      }
                                                  }
                                              }
                                            }
                                            break;
                                          case (MR_Integer) 43:
                                            {
                                              /* case "*" */
                                              {
                                                MR_Word backend_libs__builtin_ops__V_90_90;
                                                MR_Word backend_libs__builtin_ops__V_91_91;
                                                MR_Word backend_libs__builtin_ops__V_92_92;
                                                MR_Word backend_libs__builtin_ops__V_93_93;
                                                MR_Box backend_libs__builtin_ops__Z_284;

                                                backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_642_642)) == (MR_mktag((MR_Integer) 1)));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  {
                                                    backend_libs__builtin_ops__Z_284 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_642_642, (MR_Integer) 0));
                                                    backend_libs__builtin_ops__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_642_642, (MR_Integer) 1)));
                                                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_90_90 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                    if (backend_libs__builtin_ops__succeeded)
                                                      {
                                                        {
                                                          backend_libs__builtin_ops__V_92_92 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_92_92, 0) = backend_libs__builtin_ops__V_653_653;
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__V_93_93 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_93_93, 0) = backend_libs__builtin_ops__V_643_643;
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__V_91_91 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_91_91, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_91_91, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 36))));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_91_91, 2) = ((MR_Box) (backend_libs__builtin_ops__V_92_92));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_91_91, 3) = ((MR_Box) (backend_libs__builtin_ops__V_93_93));
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Z_284;
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_91_91));
                                                        }
                                                        backend_libs__builtin_ops__succeeded = MR_TRUE;
                                                      }
                                                  }
                                              }
                                            }
                                            break;
                                          case (MR_Integer) 44:
                                            {
                                              /* case "-" */
                                              {
                                                MR_Word backend_libs__builtin_ops__V_538_538;
                                                MR_Word backend_libs__builtin_ops__V_539_539;
                                                MR_Word backend_libs__builtin_ops__V_540_540;
                                                MR_Word backend_libs__builtin_ops__V_541_541;
                                                MR_Box backend_libs__builtin_ops__Z_544;

                                                backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_642_642)) == (MR_mktag((MR_Integer) 1)));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  {
                                                    backend_libs__builtin_ops__Z_544 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_642_642, (MR_Integer) 0));
                                                    backend_libs__builtin_ops__V_538_538 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_642_642, (MR_Integer) 1)));
                                                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_538_538 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                    if (backend_libs__builtin_ops__succeeded)
                                                      {
                                                        {
                                                          backend_libs__builtin_ops__V_540_540 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_540_540, 0) = backend_libs__builtin_ops__V_653_653;
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__V_541_541 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_541_541, 0) = backend_libs__builtin_ops__V_643_643;
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__V_539_539 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_539_539, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_539_539, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 35))));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_539_539, 2) = ((MR_Box) (backend_libs__builtin_ops__V_540_540));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_539_539, 3) = ((MR_Box) (backend_libs__builtin_ops__V_541_541));
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Z_544;
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_539_539));
                                                        }
                                                        backend_libs__builtin_ops__succeeded = MR_TRUE;
                                                      }
                                                  }
                                              }
                                            }
                                            break;
                                          case (MR_Integer) 49:
                                            {
                                              /* case "\/" */
                                              {
                                                MR_Word backend_libs__builtin_ops__V_582_582;
                                                MR_Word backend_libs__builtin_ops__V_583_583;
                                                MR_Word backend_libs__builtin_ops__V_584_584;
                                                MR_Word backend_libs__builtin_ops__V_585_585;
                                                MR_Box backend_libs__builtin_ops__Z_588;

                                                backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_642_642)) == (MR_mktag((MR_Integer) 1)));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  {
                                                    backend_libs__builtin_ops__Z_588 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_642_642, (MR_Integer) 0));
                                                    backend_libs__builtin_ops__V_582_582 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_642_642, (MR_Integer) 1)));
                                                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_582_582 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                    if (backend_libs__builtin_ops__succeeded)
                                                      {
                                                        {
                                                          backend_libs__builtin_ops__V_584_584 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_584_584, 0) = backend_libs__builtin_ops__V_653_653;
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__V_585_585 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_585_585, 0) = backend_libs__builtin_ops__V_643_643;
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__V_583_583 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_583_583, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_583_583, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 40))));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_583_583, 2) = ((MR_Box) (backend_libs__builtin_ops__V_584_584));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_583_583, 3) = ((MR_Box) (backend_libs__builtin_ops__V_585_585));
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Z_588;
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_583_583));
                                                        }
                                                        backend_libs__builtin_ops__succeeded = MR_TRUE;
                                                      }
                                                  }
                                              }
                                            }
                                            break;
                                          case (MR_Integer) 61:
                                            {
                                              /* case "<" */
                                              {
                                                MR_Word backend_libs__builtin_ops__V_85_85;
                                                MR_Word backend_libs__builtin_ops__V_86_86;
                                                MR_Word backend_libs__builtin_ops__V_87_87;
                                                MR_Word backend_libs__builtin_ops__CompareOp_288;

                                                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_642_642 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  {
                                                    backend_libs__builtin_ops__CompareOp_288 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 30));
                                                    {
                                                      backend_libs__builtin_ops__V_86_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_86_86, 0) = backend_libs__builtin_ops__V_653_653;
                                                    }
                                                    {
                                                      backend_libs__builtin_ops__V_87_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_87_87, 0) = backend_libs__builtin_ops__V_643_643;
                                                    }
                                                    {
                                                      backend_libs__builtin_ops__V_85_85 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_85_85, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_85_85, 1) = ((MR_Box) (backend_libs__builtin_ops__CompareOp_288));
                                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_85_85, 2) = ((MR_Box) (backend_libs__builtin_ops__V_86_86));
                                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_85_85, 3) = ((MR_Box) (backend_libs__builtin_ops__V_87_87));
                                                    }
                                                    {
                                                      backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                                      MR_hl_field(MR_mktag(2), backend_libs__builtin_ops__CodePrime_13, 0) = ((MR_Box) (backend_libs__builtin_ops__V_85_85));
                                                    }
                                                    backend_libs__builtin_ops__succeeded = MR_TRUE;
                                                  }
                                              }
                                            }
                                            break;
                                          case (MR_Integer) 63:
                                            {
                                              /* case ">" */
                                              {
                                                MR_Word backend_libs__builtin_ops__V_566_566;
                                                MR_Word backend_libs__builtin_ops__V_567_567;
                                                MR_Word backend_libs__builtin_ops__V_568_568;
                                                MR_Word backend_libs__builtin_ops__CompareOp_571;

                                                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_642_642 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  {
                                                    backend_libs__builtin_ops__CompareOp_571 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 31));
                                                    {
                                                      backend_libs__builtin_ops__V_567_567 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_567_567, 0) = backend_libs__builtin_ops__V_653_653;
                                                    }
                                                    {
                                                      backend_libs__builtin_ops__V_568_568 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_568_568, 0) = backend_libs__builtin_ops__V_643_643;
                                                    }
                                                    {
                                                      backend_libs__builtin_ops__V_566_566 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_566_566, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_566_566, 1) = ((MR_Box) (backend_libs__builtin_ops__CompareOp_571));
                                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_566_566, 2) = ((MR_Box) (backend_libs__builtin_ops__V_567_567));
                                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_566_566, 3) = ((MR_Box) (backend_libs__builtin_ops__V_568_568));
                                                    }
                                                    {
                                                      backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                                      MR_hl_field(MR_mktag(2), backend_libs__builtin_ops__CodePrime_13, 0) = ((MR_Box) (backend_libs__builtin_ops__V_566_566));
                                                    }
                                                    backend_libs__builtin_ops__succeeded = MR_TRUE;
                                                  }
                                              }
                                            }
                                            break;
                                        }
                                        /* jump out of search loop */
                                        goto label_0;
                                      }
                                    backend_libs__builtin_ops__succeeded = MR_FALSE;
                                  label_0:;
                                  }
                              }
                          }
                        }
                        break;
                    }
                    /* jump out of search loop */
                    goto label_3;
                  }
                else
                if ((backend_libs__builtin_ops__result_3 < (MR_Integer) 0))
                  backend_libs__builtin_ops__hi_1 = (backend_libs__builtin_ops__mid_2 - (MR_Integer) 1);
                else
                  backend_libs__builtin_ops__lo_0 = (backend_libs__builtin_ops__mid_2 + (MR_Integer) 1);
              }
            while ((backend_libs__builtin_ops__lo_0 <= backend_libs__builtin_ops__hi_1));
            backend_libs__builtin_ops__succeeded = MR_FALSE;
          label_3:;
          }
      }
    if (backend_libs__builtin_ops__succeeded)
      *backend_libs__builtin_ops__Code_10 = backend_libs__builtin_ops__CodePrime_13;
    else
      {
        MR_Integer backend_libs__builtin_ops__Arity_14;
        MR_String backend_libs__builtin_ops__Msg_15;
        MR_String backend_libs__builtin_ops__V_25_25;
        MR_String backend_libs__builtin_ops__V_33_33;
        MR_String backend_libs__builtin_ops__V_34_34;

        {
          mercury__list__length_2_p_0(backend_libs__builtin_ops__TypeInfo_for_T_24, backend_libs__builtin_ops__Args_9, &backend_libs__builtin_ops__Arity_14);
        }
        {
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &backend_libs__builtin_ops_scalar_common_4[2], backend_libs__builtin_ops__Arity_14, &backend_libs__builtin_ops__V_25_25);
        }
        {
          backend_libs__builtin_ops__V_33_33 = mercury__string__f_43_43_2_f_0((MR_String) "/", backend_libs__builtin_ops__V_25_25);
        }
        {
          backend_libs__builtin_ops__V_34_34 = mercury__string__f_43_43_2_f_0(backend_libs__builtin_ops__PredName_7, backend_libs__builtin_ops__V_33_33);
        }
        {
          backend_libs__builtin_ops__Msg_15 = mercury__string__f_43_43_2_f_0((MR_String) "unknown builtin ", backend_libs__builtin_ops__V_34_34);
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
    MR_Word backend_libs__builtin_ops__V_629_629;
    MR_Box backend_libs__builtin_ops__V_630_630;
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
            backend_libs__builtin_ops__V_630_630 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Args_8, (MR_Integer) 0));
            backend_libs__builtin_ops__V_629_629 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Args_8, (MR_Integer) 1)));
            /* binary string jump switch */
            backend_libs__builtin_ops__lo_0 = (MR_Integer) 0;
            backend_libs__builtin_ops__hi_1 = (MR_Integer) 6;
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
                            MR_Word backend_libs__builtin_ops__V_189_189;
                            MR_Box backend_libs__builtin_ops__Y_19;

                            backend_libs__builtin_ops__succeeded = (strcmp(backend_libs__builtin_ops__PredName_6, (MR_String) "unsafe_promise_unique") == 0);
                            if (backend_libs__builtin_ops__succeeded)
                              {
                                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_10 == (MR_Integer) 0);
                                if (backend_libs__builtin_ops__succeeded)
                                  {
                                    backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_629_629)) == (MR_mktag((MR_Integer) 1)));
                                    if (backend_libs__builtin_ops__succeeded)
                                      {
                                        backend_libs__builtin_ops__Y_19 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_629_629, (MR_Integer) 0));
                                        backend_libs__builtin_ops__V_189_189 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_629_629, (MR_Integer) 1)));
                                        backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_189_189 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
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
                            MR_Word backend_libs__builtin_ops__V_639_639;
                            MR_Box backend_libs__builtin_ops__V_640_640;
                            MR_Integer backend_libs__builtin_ops__slot_9;
                            MR_String backend_libs__builtin_ops__str_10;

                            backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_10 == (MR_Integer) 0);
                            if (backend_libs__builtin_ops__succeeded)
                              {
                                backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_629_629)) == (MR_mktag((MR_Integer) 1)));
                                if (backend_libs__builtin_ops__succeeded)
                                  {
                                    backend_libs__builtin_ops__V_640_640 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_629_629, (MR_Integer) 0));
                                    backend_libs__builtin_ops__V_639_639 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_629_629, (MR_Integer) 1)));
                                    /* hashed string jump switch */
                                    /* compute the hash value of the input string */
                                    backend_libs__builtin_ops__slot_9 = ((MR_hash_string4(backend_libs__builtin_ops__PredName_6)) & (MR_Integer) 15);
                                    /* no collisions; no hash chain loop */
                                    /* lookup the string for this hash slot */
                                    backend_libs__builtin_ops__str_10 = ((&backend_libs__builtin_ops_vector_common_3[64 + backend_libs__builtin_ops__slot_9]))->backend_libs__builtin_ops__vector_common_type_3_0__vct_3_f_0;
                                    /* did we find a match? */
                                    if ((((backend_libs__builtin_ops__str_10 != NULL)) && ((strcmp(backend_libs__builtin_ops__str_10, backend_libs__builtin_ops__PredName_6) == 0))))
                                      {
                                        /* we found a match; dispatch to the corresponding code */
                                        switch (backend_libs__builtin_ops__slot_9) {
                                          default: /*NOTREACHED*/ MR_assert(0);
                                          case (MR_Integer) 1:
                                            {
                                              /* case ">=" */
                                              backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_639_639 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                            }
                                            break;
                                          case (MR_Integer) 3:
                                            {
                                              /* case "=<" */
                                              backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_639_639 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                            }
                                            break;
                                          case (MR_Integer) 8:
                                            {
                                              /* case "unchecked_quotient" */
                                              {
                                                MR_Word backend_libs__builtin_ops__V_341_341;
                                                MR_Box backend_libs__builtin_ops__Z_347;

                                                backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_639_639)) == (MR_mktag((MR_Integer) 1)));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  {
                                                    backend_libs__builtin_ops__Z_347 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_639_639, (MR_Integer) 0));
                                                    backend_libs__builtin_ops__V_341_341 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_639_639, (MR_Integer) 1)));
                                                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_341_341 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                  }
                                              }
                                            }
                                            break;
                                          case (MR_Integer) 10:
                                            {
                                              /* case "+" */
                                              if ((backend_libs__builtin_ops__V_639_639 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                                                backend_libs__builtin_ops__succeeded = MR_TRUE;
                                              else
                                                {
                                                  MR_Word backend_libs__builtin_ops__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_639_639, (MR_Integer) 1)));
                                                  MR_Box backend_libs__builtin_ops__Z_280 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_639_639, (MR_Integer) 0));

                                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_52_52 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                }
                                            }
                                            break;
                                          case (MR_Integer) 11:
                                            {
                                              /* case "*" */
                                              {
                                                MR_Word backend_libs__builtin_ops__V_32_32;
                                                MR_Box backend_libs__builtin_ops__Z_300;

                                                backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_639_639)) == (MR_mktag((MR_Integer) 1)));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  {
                                                    backend_libs__builtin_ops__Z_300 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_639_639, (MR_Integer) 0));
                                                    backend_libs__builtin_ops__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_639_639, (MR_Integer) 1)));
                                                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_32_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                  }
                                              }
                                            }
                                            break;
                                          case (MR_Integer) 12:
                                            {
                                              /* case "-" */
                                              if ((backend_libs__builtin_ops__V_639_639 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                                                backend_libs__builtin_ops__succeeded = MR_TRUE;
                                              else
                                                {
                                                  MR_Word backend_libs__builtin_ops__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_639_639, (MR_Integer) 1)));
                                                  MR_Box backend_libs__builtin_ops__Z_291 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_639_639, (MR_Integer) 0));

                                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_38_38 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                }
                                            }
                                            break;
                                          case (MR_Integer) 13:
                                            {
                                              /* case "<" */
                                              backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_639_639 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                            }
                                            break;
                                          case (MR_Integer) 15:
                                            {
                                              /* case ">" */
                                              backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_639_639 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                            }
                                            break;
                                        }
                                        /* jump out of search loop */
                                        goto label_2;
                                      }
                                    backend_libs__builtin_ops__succeeded = MR_FALSE;
                                  label_2:;
                                  }
                              }
                          }
                        }
                        break;
                      case (MR_Integer) 2:
                        {
                          /* case "int" */
                          {
                            MR_Word backend_libs__builtin_ops__V_641_641;
                            MR_Box backend_libs__builtin_ops__V_642_642;

                            backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_629_629)) == (MR_mktag((MR_Integer) 1)));
                            if (backend_libs__builtin_ops__succeeded)
                              {
                                backend_libs__builtin_ops__V_642_642 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_629_629, (MR_Integer) 0));
                                backend_libs__builtin_ops__V_641_641 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_629_629, (MR_Integer) 1)));
                                {
                                  MR_Integer backend_libs__builtin_ops__case_num_8 = (MR_Integer) -1;

                                  switch (MR_nth_code_unit(backend_libs__builtin_ops__PredName_6, 0)) {
                                    case (MR_Integer) 42:
                                      if (MR_offset_streq(1, backend_libs__builtin_ops__PredName_6, (MR_String) "*"))
                                        backend_libs__builtin_ops__case_num_8 = (MR_Integer) 0;
                                      break;
                                    case (MR_Integer) 43:
                                      if (MR_offset_streq(1, backend_libs__builtin_ops__PredName_6, (MR_String) "+"))
                                        backend_libs__builtin_ops__case_num_8 = (MR_Integer) 1;
                                      break;
                                    case (MR_Integer) 45:
                                      if (MR_offset_streq(1, backend_libs__builtin_ops__PredName_6, (MR_String) "-"))
                                        backend_libs__builtin_ops__case_num_8 = (MR_Integer) 2;
                                      break;
                                    case (MR_Integer) 47:
                                      if (MR_offset_streq(1, backend_libs__builtin_ops__PredName_6, (MR_String) "/\\"))
                                        backend_libs__builtin_ops__case_num_8 = (MR_Integer) 3;
                                      break;
                                    case (MR_Integer) 60:
                                      if (MR_offset_streq(1, backend_libs__builtin_ops__PredName_6, (MR_String) "<"))
                                        backend_libs__builtin_ops__case_num_8 = (MR_Integer) 4;
                                      break;
                                    case (MR_Integer) 61:
                                      if (MR_offset_streq(1, backend_libs__builtin_ops__PredName_6, (MR_String) "=<"))
                                        backend_libs__builtin_ops__case_num_8 = (MR_Integer) 5;
                                      break;
                                    case (MR_Integer) 62:
                                      switch (MR_nth_code_unit(backend_libs__builtin_ops__PredName_6, 1)) {
                                        case (MR_Integer) 0:
                                          backend_libs__builtin_ops__case_num_8 = (MR_Integer) 6;
                                          break;
                                        case (MR_Integer) 61:
                                          if (MR_offset_streq(2, backend_libs__builtin_ops__PredName_6, (MR_String) ">="))
                                            backend_libs__builtin_ops__case_num_8 = (MR_Integer) 7;
                                          break;
                                      }
                                      break;
                                    case (MR_Integer) 92:
                                      switch (MR_nth_code_unit(backend_libs__builtin_ops__PredName_6, 1)) {
                                        case (MR_Integer) 0:
                                          backend_libs__builtin_ops__case_num_8 = (MR_Integer) 8;
                                          break;
                                        case (MR_Integer) 47:
                                          if (MR_offset_streq(2, backend_libs__builtin_ops__PredName_6, (MR_String) "\\/"))
                                            backend_libs__builtin_ops__case_num_8 = (MR_Integer) 9;
                                          break;
                                      }
                                      break;
                                    case (MR_Integer) 109:
                                      if (MR_offset_streq(1, backend_libs__builtin_ops__PredName_6, (MR_String) "minus"))
                                        backend_libs__builtin_ops__case_num_8 = (MR_Integer) 10;
                                      break;
                                    case (MR_Integer) 112:
                                      if (MR_offset_streq(1, backend_libs__builtin_ops__PredName_6, (MR_String) "plus"))
                                        backend_libs__builtin_ops__case_num_8 = (MR_Integer) 11;
                                      break;
                                    case (MR_Integer) 116:
                                      if (MR_offset_streq(1, backend_libs__builtin_ops__PredName_6, (MR_String) "times"))
                                        backend_libs__builtin_ops__case_num_8 = (MR_Integer) 12;
                                      break;
                                    case (MR_Integer) 117:
                                      if (((((((((((((((((((MR_nth_code_unit(backend_libs__builtin_ops__PredName_6, 1)) == (MR_Integer) 110)) && (((MR_nth_code_unit(backend_libs__builtin_ops__PredName_6, 2)) == (MR_Integer) 99)))) && (((MR_nth_code_unit(backend_libs__builtin_ops__PredName_6, 3)) == (MR_Integer) 104)))) && (((MR_nth_code_unit(backend_libs__builtin_ops__PredName_6, 4)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(backend_libs__builtin_ops__PredName_6, 5)) == (MR_Integer) 99)))) && (((MR_nth_code_unit(backend_libs__builtin_ops__PredName_6, 6)) == (MR_Integer) 107)))) && (((MR_nth_code_unit(backend_libs__builtin_ops__PredName_6, 7)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(backend_libs__builtin_ops__PredName_6, 8)) == (MR_Integer) 100)))) && (((MR_nth_code_unit(backend_libs__builtin_ops__PredName_6, 9)) == (MR_Integer) 95))))
                                        switch (MR_nth_code_unit(backend_libs__builtin_ops__PredName_6, 10)) {
                                          case (MR_Integer) 108:
                                            if (MR_offset_streq(11, backend_libs__builtin_ops__PredName_6, (MR_String) "unchecked_left_shift"))
                                              backend_libs__builtin_ops__case_num_8 = (MR_Integer) 13;
                                            break;
                                          case (MR_Integer) 113:
                                            if (MR_offset_streq(11, backend_libs__builtin_ops__PredName_6, (MR_String) "unchecked_quotient"))
                                              backend_libs__builtin_ops__case_num_8 = (MR_Integer) 14;
                                            break;
                                          case (MR_Integer) 114:
                                            switch (MR_nth_code_unit(backend_libs__builtin_ops__PredName_6, 11)) {
                                              case (MR_Integer) 101:
                                                if (MR_offset_streq(12, backend_libs__builtin_ops__PredName_6, (MR_String) "unchecked_rem"))
                                                  backend_libs__builtin_ops__case_num_8 = (MR_Integer) 15;
                                                break;
                                              case (MR_Integer) 105:
                                                if (MR_offset_streq(12, backend_libs__builtin_ops__PredName_6, (MR_String) "unchecked_right_shift"))
                                                  backend_libs__builtin_ops__case_num_8 = (MR_Integer) 16;
                                                break;
                                            }
                                            break;
                                        }
                                      break;
                                    case (MR_Integer) 120:
                                      if (MR_offset_streq(1, backend_libs__builtin_ops__PredName_6, (MR_String) "xor"))
                                        backend_libs__builtin_ops__case_num_8 = (MR_Integer) 17;
                                      break;
                                  }
                                  switch (backend_libs__builtin_ops__case_num_8) {
                                    default:
                                      backend_libs__builtin_ops__succeeded = MR_FALSE;
                                      break;
                                    case (MR_Integer) 0:
                                      {
                                        /* case "*" */
                                        {
                                          MR_Word backend_libs__builtin_ops__V_88_88;
                                          MR_Box backend_libs__builtin_ops__Z_243;

                                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_10 == (MR_Integer) 0);
                                          if (backend_libs__builtin_ops__succeeded)
                                            {
                                              backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_641_641)) == (MR_mktag((MR_Integer) 1)));
                                              if (backend_libs__builtin_ops__succeeded)
                                                {
                                                  backend_libs__builtin_ops__Z_243 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_641_641, (MR_Integer) 0));
                                                  backend_libs__builtin_ops__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_641_641, (MR_Integer) 1)));
                                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_88_88 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
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
                                            if ((backend_libs__builtin_ops__V_641_641 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                                              backend_libs__builtin_ops__succeeded = MR_TRUE;
                                            else
                                              {
                                                MR_Word backend_libs__builtin_ops__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_641_641, (MR_Integer) 1)));
                                                MR_Box backend_libs__builtin_ops__Z_218 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_641_641, (MR_Integer) 0));

                                                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_134_134 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                              }
                                            break;
                                          case (MR_Integer) 1:
                                            {
                                              MR_Word backend_libs__builtin_ops__V_351_351;
                                              MR_Box backend_libs__builtin_ops__Z_354;

                                              backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_641_641)) == (MR_mktag((MR_Integer) 1)));
                                              if (backend_libs__builtin_ops__succeeded)
                                                {
                                                  backend_libs__builtin_ops__Z_354 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_641_641, (MR_Integer) 0));
                                                  backend_libs__builtin_ops__V_351_351 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_641_641, (MR_Integer) 1)));
                                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_351_351 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                }
                                            }
                                            break;
                                          case (MR_Integer) 2:
                                            {
                                              MR_Word backend_libs__builtin_ops__V_357_357;
                                              MR_Box backend_libs__builtin_ops__Z_360;

                                              backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_641_641)) == (MR_mktag((MR_Integer) 1)));
                                              if (backend_libs__builtin_ops__succeeded)
                                                {
                                                  backend_libs__builtin_ops__Z_360 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_641_641, (MR_Integer) 0));
                                                  backend_libs__builtin_ops__V_357_357 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_641_641, (MR_Integer) 1)));
                                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_357_357 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
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
                                            if ((backend_libs__builtin_ops__V_641_641 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                                              backend_libs__builtin_ops__succeeded = MR_TRUE;
                                            else
                                              {
                                                MR_Word backend_libs__builtin_ops__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_641_641, (MR_Integer) 1)));
                                                MR_Box backend_libs__builtin_ops__Z_229 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_641_641, (MR_Integer) 0));

                                                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_116_116 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                              }
                                            break;
                                          case (MR_Integer) 1:
                                            {
                                              MR_Word backend_libs__builtin_ops__V_363_363;
                                              MR_Box backend_libs__builtin_ops__Z_366;

                                              backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_641_641)) == (MR_mktag((MR_Integer) 1)));
                                              if (backend_libs__builtin_ops__succeeded)
                                                {
                                                  backend_libs__builtin_ops__Z_366 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_641_641, (MR_Integer) 0));
                                                  backend_libs__builtin_ops__V_363_363 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_641_641, (MR_Integer) 1)));
                                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_363_363 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                }
                                            }
                                            break;
                                          case (MR_Integer) 2:
                                            {
                                              MR_Word backend_libs__builtin_ops__V_369_369;
                                              MR_Box backend_libs__builtin_ops__Z_372;

                                              backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_641_641)) == (MR_mktag((MR_Integer) 1)));
                                              if (backend_libs__builtin_ops__succeeded)
                                                {
                                                  backend_libs__builtin_ops__Z_372 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_641_641, (MR_Integer) 0));
                                                  backend_libs__builtin_ops__V_369_369 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_641_641, (MR_Integer) 1)));
                                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_369_369 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
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
                                          MR_Word backend_libs__builtin_ops__V_376_376;
                                          MR_Box backend_libs__builtin_ops__Z_382;

                                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_10 == (MR_Integer) 0);
                                          if (backend_libs__builtin_ops__succeeded)
                                            {
                                              backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_641_641)) == (MR_mktag((MR_Integer) 1)));
                                              if (backend_libs__builtin_ops__succeeded)
                                                {
                                                  backend_libs__builtin_ops__Z_382 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_641_641, (MR_Integer) 0));
                                                  backend_libs__builtin_ops__V_376_376 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_641_641, (MR_Integer) 1)));
                                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_376_376 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
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
                                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_641_641 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                      }
                                      break;
                                    case (MR_Integer) 5:
                                      {
                                        /* case "=<" */
                                        backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_10 == (MR_Integer) 0);
                                        if (backend_libs__builtin_ops__succeeded)
                                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_641_641 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                      }
                                      break;
                                    case (MR_Integer) 6:
                                      {
                                        /* case ">" */
                                        backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_10 == (MR_Integer) 0);
                                        if (backend_libs__builtin_ops__succeeded)
                                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_641_641 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                      }
                                      break;
                                    case (MR_Integer) 7:
                                      {
                                        /* case ">=" */
                                        backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_10 == (MR_Integer) 0);
                                        if (backend_libs__builtin_ops__succeeded)
                                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_641_641 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                      }
                                      break;
                                    case (MR_Integer) 8:
                                      {
                                        /* case "\" */
                                        backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_10 == (MR_Integer) 0);
                                        if (backend_libs__builtin_ops__succeeded)
                                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_641_641 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                      }
                                      break;
                                    case (MR_Integer) 9:
                                      {
                                        /* case "\/" */
                                        {
                                          MR_Word backend_libs__builtin_ops__V_410_410;
                                          MR_Box backend_libs__builtin_ops__Z_416;

                                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_10 == (MR_Integer) 0);
                                          if (backend_libs__builtin_ops__succeeded)
                                            {
                                              backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_641_641)) == (MR_mktag((MR_Integer) 1)));
                                              if (backend_libs__builtin_ops__succeeded)
                                                {
                                                  backend_libs__builtin_ops__Z_416 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_641_641, (MR_Integer) 0));
                                                  backend_libs__builtin_ops__V_410_410 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_641_641, (MR_Integer) 1)));
                                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_410_410 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                }
                                            }
                                        }
                                      }
                                      break;
                                    case (MR_Integer) 10:
                                      {
                                        /* case "minus" */
                                        {
                                          MR_Word backend_libs__builtin_ops__V_420_420;
                                          MR_Box backend_libs__builtin_ops__Z_426;

                                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_10 == (MR_Integer) 0);
                                          if (backend_libs__builtin_ops__succeeded)
                                            {
                                              backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_641_641)) == (MR_mktag((MR_Integer) 1)));
                                              if (backend_libs__builtin_ops__succeeded)
                                                {
                                                  backend_libs__builtin_ops__Z_426 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_641_641, (MR_Integer) 0));
                                                  backend_libs__builtin_ops__V_420_420 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_641_641, (MR_Integer) 1)));
                                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_420_420 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                }
                                            }
                                        }
                                      }
                                      break;
                                    case (MR_Integer) 11:
                                      {
                                        /* case "plus" */
                                        {
                                          MR_Word backend_libs__builtin_ops__V_430_430;
                                          MR_Box backend_libs__builtin_ops__Z_436;

                                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_10 == (MR_Integer) 0);
                                          if (backend_libs__builtin_ops__succeeded)
                                            {
                                              backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_641_641)) == (MR_mktag((MR_Integer) 1)));
                                              if (backend_libs__builtin_ops__succeeded)
                                                {
                                                  backend_libs__builtin_ops__Z_436 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_641_641, (MR_Integer) 0));
                                                  backend_libs__builtin_ops__V_430_430 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_641_641, (MR_Integer) 1)));
                                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_430_430 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                }
                                            }
                                        }
                                      }
                                      break;
                                    case (MR_Integer) 12:
                                      {
                                        /* case "times" */
                                        {
                                          MR_Word backend_libs__builtin_ops__V_440_440;
                                          MR_Box backend_libs__builtin_ops__Z_446;

                                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_10 == (MR_Integer) 0);
                                          if (backend_libs__builtin_ops__succeeded)
                                            {
                                              backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_641_641)) == (MR_mktag((MR_Integer) 1)));
                                              if (backend_libs__builtin_ops__succeeded)
                                                {
                                                  backend_libs__builtin_ops__Z_446 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_641_641, (MR_Integer) 0));
                                                  backend_libs__builtin_ops__V_440_440 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_641_641, (MR_Integer) 1)));
                                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_440_440 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                }
                                            }
                                        }
                                      }
                                      break;
                                    case (MR_Integer) 13:
                                      {
                                        /* case "unchecked_left_shift" */
                                        {
                                          MR_Word backend_libs__builtin_ops__V_450_450;
                                          MR_Box backend_libs__builtin_ops__Z_456;

                                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_10 == (MR_Integer) 0);
                                          if (backend_libs__builtin_ops__succeeded)
                                            {
                                              backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_641_641)) == (MR_mktag((MR_Integer) 1)));
                                              if (backend_libs__builtin_ops__succeeded)
                                                {
                                                  backend_libs__builtin_ops__Z_456 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_641_641, (MR_Integer) 0));
                                                  backend_libs__builtin_ops__V_450_450 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_641_641, (MR_Integer) 1)));
                                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_450_450 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                }
                                            }
                                        }
                                      }
                                      break;
                                    case (MR_Integer) 14:
                                      {
                                        /* case "unchecked_quotient" */
                                        {
                                          MR_Word backend_libs__builtin_ops__V_460_460;
                                          MR_Box backend_libs__builtin_ops__Z_466;

                                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_10 == (MR_Integer) 0);
                                          if (backend_libs__builtin_ops__succeeded)
                                            {
                                              backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_641_641)) == (MR_mktag((MR_Integer) 1)));
                                              if (backend_libs__builtin_ops__succeeded)
                                                {
                                                  backend_libs__builtin_ops__Z_466 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_641_641, (MR_Integer) 0));
                                                  backend_libs__builtin_ops__V_460_460 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_641_641, (MR_Integer) 1)));
                                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_460_460 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                }
                                            }
                                        }
                                      }
                                      break;
                                    case (MR_Integer) 15:
                                      {
                                        /* case "unchecked_rem" */
                                        {
                                          MR_Word backend_libs__builtin_ops__V_470_470;
                                          MR_Box backend_libs__builtin_ops__Z_476;

                                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_10 == (MR_Integer) 0);
                                          if (backend_libs__builtin_ops__succeeded)
                                            {
                                              backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_641_641)) == (MR_mktag((MR_Integer) 1)));
                                              if (backend_libs__builtin_ops__succeeded)
                                                {
                                                  backend_libs__builtin_ops__Z_476 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_641_641, (MR_Integer) 0));
                                                  backend_libs__builtin_ops__V_470_470 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_641_641, (MR_Integer) 1)));
                                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_470_470 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                }
                                            }
                                        }
                                      }
                                      break;
                                    case (MR_Integer) 16:
                                      {
                                        /* case "unchecked_right_shift" */
                                        {
                                          MR_Word backend_libs__builtin_ops__V_480_480;
                                          MR_Box backend_libs__builtin_ops__Z_486;

                                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_10 == (MR_Integer) 0);
                                          if (backend_libs__builtin_ops__succeeded)
                                            {
                                              backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_641_641)) == (MR_mktag((MR_Integer) 1)));
                                              if (backend_libs__builtin_ops__succeeded)
                                                {
                                                  backend_libs__builtin_ops__Z_486 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_641_641, (MR_Integer) 0));
                                                  backend_libs__builtin_ops__V_480_480 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_641_641, (MR_Integer) 1)));
                                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_480_480 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                }
                                            }
                                        }
                                      }
                                      break;
                                    case (MR_Integer) 17:
                                      {
                                        /* case "xor" */
                                        {
                                          MR_Word backend_libs__builtin_ops__V_94_94;
                                          MR_Box backend_libs__builtin_ops__Z_240;

                                          backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_641_641)) == (MR_mktag((MR_Integer) 1)));
                                          if (backend_libs__builtin_ops__succeeded)
                                            {
                                              backend_libs__builtin_ops__Z_240 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_641_641, (MR_Integer) 0));
                                              backend_libs__builtin_ops__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_641_641, (MR_Integer) 1)));
                                              backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_94_94 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
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
                              backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_629_629 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
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
                            MR_Integer backend_libs__builtin_ops__slot_6;
                            MR_String backend_libs__builtin_ops__str_7;

                            backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_10 == (MR_Integer) 0);
                            if (backend_libs__builtin_ops__succeeded)
                              {
                                /* hashed string jump switch */
                                /* compute the hash value of the input string */
                                backend_libs__builtin_ops__slot_6 = ((MR_hash_string5(backend_libs__builtin_ops__PredName_6)) & (MR_Integer) 31);
                                /* hash chain loop */
                                do
                                  {
                                    /* lookup the string for this hash slot */
                                    backend_libs__builtin_ops__str_7 = ((&backend_libs__builtin_ops_vector_common_2[0 + backend_libs__builtin_ops__slot_6]))->backend_libs__builtin_ops__vector_common_type_2_0__vct_2_f_0;
                                    /* did we find a match? */
                                    if ((((backend_libs__builtin_ops__str_7 != NULL)) && ((strcmp(backend_libs__builtin_ops__str_7, backend_libs__builtin_ops__PredName_6) == 0))))
                                      {
                                        /* we found a match; dispatch to the corresponding code */
                                        switch (backend_libs__builtin_ops__slot_6) {
                                          default: /*NOTREACHED*/ MR_assert(0);
                                          case (MR_Integer) 1:
                                            {
                                              /* case "pointer_equal" */
                                              {
                                                MR_Word backend_libs__builtin_ops__V_627_627;
                                                MR_Box backend_libs__builtin_ops__V_628_628;

                                                backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_629_629)) == (MR_mktag((MR_Integer) 1)));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  {
                                                    backend_libs__builtin_ops__V_628_628 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_629_629, (MR_Integer) 0));
                                                    backend_libs__builtin_ops__V_627_627 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_629_629, (MR_Integer) 1)));
                                                    if ((backend_libs__builtin_ops__V_627_627 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                                                      backend_libs__builtin_ops__succeeded = MR_TRUE;
                                                    else
                                                      {
                                                        MR_Word backend_libs__builtin_ops__V_156_156 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_627_627, (MR_Integer) 1)));
                                                        MR_Box backend_libs__builtin_ops__Y_207 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_627_627, (MR_Integer) 0));

                                                        backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_156_156 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                      }
                                                  }
                                              }
                                            }
                                            break;
                                          case (MR_Integer) 2:
                                            {
                                              /* case "unsafe_type_cast" */
                                              {
                                                MR_Word backend_libs__builtin_ops__V_174_174;
                                                MR_Box backend_libs__builtin_ops__Y_200;

                                                backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_629_629)) == (MR_mktag((MR_Integer) 1)));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  {
                                                    backend_libs__builtin_ops__Y_200 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_629_629, (MR_Integer) 0));
                                                    backend_libs__builtin_ops__V_174_174 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_629_629, (MR_Integer) 1)));
                                                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_174_174 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                  }
                                              }
                                            }
                                            break;
                                          case (MR_Integer) 3:
                                            {
                                              /* case "trace_get_io_state" */
                                              backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_629_629 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                            }
                                            break;
                                          case (MR_Integer) 9:
                                            {
                                              /* case "builtin_int_gt" */
                                              {
                                                MR_Word backend_libs__builtin_ops__V_169_169;
                                                MR_Box backend_libs__builtin_ops__Y_202;

                                                backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_629_629)) == (MR_mktag((MR_Integer) 1)));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  {
                                                    backend_libs__builtin_ops__Y_202 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_629_629, (MR_Integer) 0));
                                                    backend_libs__builtin_ops__V_169_169 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_629_629, (MR_Integer) 1)));
                                                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_169_169 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                  }
                                              }
                                            }
                                            break;
                                          case (MR_Integer) 14:
                                            {
                                              /* case "builtin_int_lt" */
                                              {
                                                MR_Word backend_libs__builtin_ops__V_497_497;
                                                MR_Box backend_libs__builtin_ops__Y_502;

                                                backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_629_629)) == (MR_mktag((MR_Integer) 1)));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  {
                                                    backend_libs__builtin_ops__Y_502 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_629_629, (MR_Integer) 0));
                                                    backend_libs__builtin_ops__V_497_497 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_629_629, (MR_Integer) 1)));
                                                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_497_497 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                  }
                                              }
                                            }
                                            break;
                                          case (MR_Integer) 17:
                                          case (MR_Integer) 21:
                                            {
                                              /* case "store_at_ref", "store_at_ref_impure" */
                                              {
                                                MR_Word backend_libs__builtin_ops__V_177_177;
                                                MR_Box backend_libs__builtin_ops__Y_198;

                                                backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_629_629)) == (MR_mktag((MR_Integer) 1)));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  {
                                                    backend_libs__builtin_ops__Y_198 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_629_629, (MR_Integer) 0));
                                                    backend_libs__builtin_ops__V_177_177 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_629_629, (MR_Integer) 1)));
                                                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_177_177 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                  }
                                              }
                                            }
                                            break;
                                          case (MR_Integer) 27:
                                            {
                                              /* case "builtin_compound_eq" */
                                              {
                                                MR_Word backend_libs__builtin_ops__V_164_164;
                                                MR_Box backend_libs__builtin_ops__Y_204;

                                                backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_629_629)) == (MR_mktag((MR_Integer) 1)));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  {
                                                    backend_libs__builtin_ops__Y_204 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_629_629, (MR_Integer) 0));
                                                    backend_libs__builtin_ops__V_164_164 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_629_629, (MR_Integer) 1)));
                                                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_164_164 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                  }
                                              }
                                            }
                                            break;
                                          case (MR_Integer) 29:
                                            {
                                              /* case "builtin_compound_lt" */
                                              {
                                                MR_Word backend_libs__builtin_ops__V_488_488;
                                                MR_Box backend_libs__builtin_ops__Y_493;

                                                backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_629_629)) == (MR_mktag((MR_Integer) 1)));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  {
                                                    backend_libs__builtin_ops__Y_493 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_629_629, (MR_Integer) 0));
                                                    backend_libs__builtin_ops__V_488_488 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_629_629, (MR_Integer) 1)));
                                                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_488_488 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                  }
                                              }
                                            }
                                            break;
                                          case (MR_Integer) 31:
                                            {
                                              /* case "trace_set_io_state" */
                                              backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_629_629 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                            }
                                            break;
                                        }
                                        /* jump out of search loop */
                                        goto label_1;
                                      }
                                    else
                                      {
                                        /* no match yet, so get next slot in hash chain */
                                        backend_libs__builtin_ops__slot_6 = ((&backend_libs__builtin_ops_vector_common_2[0 + backend_libs__builtin_ops__slot_6]))->backend_libs__builtin_ops__vector_common_type_2_0__vct_2_f_1;
                                      }
                                  }
                                while ((backend_libs__builtin_ops__slot_6 >= (MR_Integer) 0));
                                backend_libs__builtin_ops__succeeded = MR_FALSE;
                              label_1:;
                              }
                          }
                        }
                        break;
                      case (MR_Integer) 5:
                        {
                          /* case "term_size_prof_builtin" */
                          {
                            MR_Word backend_libs__builtin_ops__V_148_148;
                            MR_Word backend_libs__builtin_ops__V_149_149;
                            MR_Box backend_libs__builtin_ops__Y_215;
                            MR_Box backend_libs__builtin_ops__Z_23;

                            backend_libs__builtin_ops__succeeded = (strcmp(backend_libs__builtin_ops__PredName_6, (MR_String) "term_size_plus") == 0);
                            if (backend_libs__builtin_ops__succeeded)
                              {
                                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_10 == (MR_Integer) 0);
                                if (backend_libs__builtin_ops__succeeded)
                                  {
                                    backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_629_629)) == (MR_mktag((MR_Integer) 1)));
                                    if (backend_libs__builtin_ops__succeeded)
                                      {
                                        backend_libs__builtin_ops__Y_215 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_629_629, (MR_Integer) 0));
                                        backend_libs__builtin_ops__V_148_148 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_629_629, (MR_Integer) 1)));
                                        backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_148_148)) == (MR_mktag((MR_Integer) 1)));
                                        if (backend_libs__builtin_ops__succeeded)
                                          {
                                            backend_libs__builtin_ops__Z_23 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_148_148, (MR_Integer) 0));
                                            backend_libs__builtin_ops__V_149_149 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_148_148, (MR_Integer) 1)));
                                            backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_149_149 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                          }
                                      }
                                  }
                              }
                          }
                        }
                        break;
                      case (MR_Integer) 6:
                        {
                          /* case "uint" */
                          {
                            MR_Word backend_libs__builtin_ops__V_619_619;
                            MR_Box backend_libs__builtin_ops__V_620_620;
                            MR_Integer backend_libs__builtin_ops__slot_4;
                            MR_String backend_libs__builtin_ops__str_5;

                            backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_10 == (MR_Integer) 0);
                            if (backend_libs__builtin_ops__succeeded)
                              {
                                backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_629_629)) == (MR_mktag((MR_Integer) 1)));
                                if (backend_libs__builtin_ops__succeeded)
                                  {
                                    backend_libs__builtin_ops__V_620_620 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_629_629, (MR_Integer) 0));
                                    backend_libs__builtin_ops__V_619_619 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_629_629, (MR_Integer) 1)));
                                    /* hashed string jump switch */
                                    /* compute the hash value of the input string */
                                    backend_libs__builtin_ops__slot_4 = ((MR_hash_string4(backend_libs__builtin_ops__PredName_6)) & (MR_Integer) 63);
                                    /* no collisions; no hash chain loop */
                                    /* lookup the string for this hash slot */
                                    backend_libs__builtin_ops__str_5 = ((&backend_libs__builtin_ops_vector_common_3[0 + backend_libs__builtin_ops__slot_4]))->backend_libs__builtin_ops__vector_common_type_3_0__vct_3_f_0;
                                    /* did we find a match? */
                                    if ((((backend_libs__builtin_ops__str_5 != NULL)) && ((strcmp(backend_libs__builtin_ops__str_5, backend_libs__builtin_ops__PredName_6) == 0))))
                                      {
                                        /* we found a match; dispatch to the corresponding code */
                                        switch (backend_libs__builtin_ops__slot_4) {
                                          default: /*NOTREACHED*/ MR_assert(0);
                                          case (MR_Integer) 1:
                                            {
                                              /* case ">=" */
                                              backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_619_619 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                            }
                                            break;
                                          case (MR_Integer) 6:
                                            {
                                              /* case "xor" */
                                              {
                                                MR_Word backend_libs__builtin_ops__V_589_589;
                                                MR_Box backend_libs__builtin_ops__Z_595;

                                                backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_619_619)) == (MR_mktag((MR_Integer) 1)));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  {
                                                    backend_libs__builtin_ops__Z_595 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_619_619, (MR_Integer) 0));
                                                    backend_libs__builtin_ops__V_589_589 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_619_619, (MR_Integer) 1)));
                                                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_589_589 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                  }
                                              }
                                            }
                                            break;
                                          case (MR_Integer) 17:
                                            {
                                              /* case "/\" */
                                              {
                                                MR_Word backend_libs__builtin_ops__V_525_525;
                                                MR_Box backend_libs__builtin_ops__Z_531;

                                                backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_619_619)) == (MR_mktag((MR_Integer) 1)));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  {
                                                    backend_libs__builtin_ops__Z_531 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_619_619, (MR_Integer) 0));
                                                    backend_libs__builtin_ops__V_525_525 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_619_619, (MR_Integer) 1)));
                                                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_525_525 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                  }
                                              }
                                            }
                                            break;
                                          case (MR_Integer) 20:
                                            {
                                              /* case "unchecked_rem" */
                                              {
                                                MR_Word backend_libs__builtin_ops__V_579_579;
                                                MR_Box backend_libs__builtin_ops__Z_585;

                                                backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_619_619)) == (MR_mktag((MR_Integer) 1)));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  {
                                                    backend_libs__builtin_ops__Z_585 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_619_619, (MR_Integer) 0));
                                                    backend_libs__builtin_ops__V_579_579 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_619_619, (MR_Integer) 1)));
                                                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_579_579 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                  }
                                              }
                                            }
                                            break;
                                          case (MR_Integer) 24:
                                            {
                                              /* case "unchecked_quotient" */
                                              {
                                                MR_Word backend_libs__builtin_ops__V_569_569;
                                                MR_Box backend_libs__builtin_ops__Z_575;

                                                backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_619_619)) == (MR_mktag((MR_Integer) 1)));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  {
                                                    backend_libs__builtin_ops__Z_575 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_619_619, (MR_Integer) 0));
                                                    backend_libs__builtin_ops__V_569_569 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_619_619, (MR_Integer) 1)));
                                                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_569_569 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                  }
                                              }
                                            }
                                            break;
                                          case (MR_Integer) 29:
                                            {
                                              /* case "\" */
                                              backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_619_619 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                            }
                                            break;
                                          case (MR_Integer) 35:
                                            {
                                              /* case "=<" */
                                              backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_619_619 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                            }
                                            break;
                                          case (MR_Integer) 42:
                                            {
                                              /* case "+" */
                                              {
                                                MR_Word backend_libs__builtin_ops__V_505_505;
                                                MR_Box backend_libs__builtin_ops__Z_511;

                                                backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_619_619)) == (MR_mktag((MR_Integer) 1)));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  {
                                                    backend_libs__builtin_ops__Z_511 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_619_619, (MR_Integer) 0));
                                                    backend_libs__builtin_ops__V_505_505 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_619_619, (MR_Integer) 1)));
                                                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_505_505 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                  }
                                              }
                                            }
                                            break;
                                          case (MR_Integer) 43:
                                            {
                                              /* case "*" */
                                              {
                                                MR_Word backend_libs__builtin_ops__V_67_67;
                                                MR_Box backend_libs__builtin_ops__Z_261;

                                                backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_619_619)) == (MR_mktag((MR_Integer) 1)));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  {
                                                    backend_libs__builtin_ops__Z_261 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_619_619, (MR_Integer) 0));
                                                    backend_libs__builtin_ops__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_619_619, (MR_Integer) 1)));
                                                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_67_67 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                  }
                                              }
                                            }
                                            break;
                                          case (MR_Integer) 44:
                                            {
                                              /* case "-" */
                                              {
                                                MR_Word backend_libs__builtin_ops__V_515_515;
                                                MR_Box backend_libs__builtin_ops__Z_521;

                                                backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_619_619)) == (MR_mktag((MR_Integer) 1)));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  {
                                                    backend_libs__builtin_ops__Z_521 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_619_619, (MR_Integer) 0));
                                                    backend_libs__builtin_ops__V_515_515 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_619_619, (MR_Integer) 1)));
                                                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_515_515 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                  }
                                              }
                                            }
                                            break;
                                          case (MR_Integer) 49:
                                            {
                                              /* case "\/" */
                                              {
                                                MR_Word backend_libs__builtin_ops__V_559_559;
                                                MR_Box backend_libs__builtin_ops__Z_565;

                                                backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_619_619)) == (MR_mktag((MR_Integer) 1)));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  {
                                                    backend_libs__builtin_ops__Z_565 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_619_619, (MR_Integer) 0));
                                                    backend_libs__builtin_ops__V_559_559 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_619_619, (MR_Integer) 1)));
                                                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_559_559 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                  }
                                              }
                                            }
                                            break;
                                          case (MR_Integer) 61:
                                            {
                                              /* case "<" */
                                              backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_619_619 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                            }
                                            break;
                                          case (MR_Integer) 63:
                                            {
                                              /* case ">" */
                                              backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_619_619 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                            }
                                            break;
                                        }
                                        /* jump out of search loop */
                                        goto label_0;
                                      }
                                    backend_libs__builtin_ops__succeeded = MR_FALSE;
                                  label_0:;
                                  }
                              }
                          }
                        }
                        break;
                    }
                    /* jump out of search loop */
                    goto label_3;
                  }
                else
                if ((backend_libs__builtin_ops__result_3 < (MR_Integer) 0))
                  backend_libs__builtin_ops__hi_1 = (backend_libs__builtin_ops__mid_2 - (MR_Integer) 1);
                else
                  backend_libs__builtin_ops__lo_0 = (backend_libs__builtin_ops__mid_2 + (MR_Integer) 1);
              }
            while ((backend_libs__builtin_ops__lo_0 <= backend_libs__builtin_ops__hi_1));
            backend_libs__builtin_ops__succeeded = MR_FALSE;
          label_3:;
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

// Ensure everything is compiled with the same grade.
const char *mercury__backend_libs__builtin_ops__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module backend_libs.builtin_ops. */
