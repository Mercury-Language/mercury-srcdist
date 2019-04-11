/*
** Automatically generated from `builtin_ops.m'
** by the Mercury compiler,
** version rotd-2017-06-12
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
#include "hlds.hlds_dependency_graph.mih"
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

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_59;

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_60;

static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_binary_op_0_0[59];

static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_binary_op_0_1[1];

static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_binary_op_0_2[1];

static const MR_DuPtagLayout backend_libs__builtin_ops__backend_libs__builtin_ops__du_ptag_ordered_binary_op_0[3];

static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_name_ordered_binary_op_0[61];

static const MR_Integer backend_libs__builtin_ops__backend_libs__builtin_ops__functor_number_map_binary_op_0[61];

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
  /* row 9 */   {     (MR_String) "unchecked_right_shift" },
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
  /* row 51 */   {     (MR_String) "unchecked_left_shift" },
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
  /* row 89 */   {     (MR_String) "unchecked_right_shift" },
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
  /* row 131 */   {     (MR_String) "unchecked_left_shift" },
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
  (MR_String) "uint_unchecked_left_shift",
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
  (MR_String) "uint_unchecked_right_shift",
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
  (MR_String) "float_plus",
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
  (MR_String) "float_minus",
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
  (MR_String) "float_times",
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
  (MR_String) "float_divide",
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
  (MR_String) "float_eq",
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
  (MR_String) "float_ne",
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
  (MR_String) "float_lt",
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
  (MR_String) "float_gt",
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
  (MR_String) "float_le",
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
  (MR_String) "float_ge",
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
  (MR_String) "float_word_bits",
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
  (MR_String) "float_from_dword",
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
  (MR_String) "pointer_equal_conservative",
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

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_59 = {
  (MR_String) "compound_eq",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 57,
  (MR_Integer) 59,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_60 = {
  (MR_String) "compound_lt",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 58,
  (MR_Integer) 60,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_binary_op_0_0[59] = {
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
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_58,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_59,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_60
};

static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_binary_op_0_1[1] = {
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_15
};

static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_binary_op_0_2[1] = {
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_24
};

static const MR_DuPtagLayout backend_libs__builtin_ops__backend_libs__builtin_ops__du_ptag_ordered_binary_op_0[3] = {
  {
    (MR_Integer) 59,
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

static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_name_ordered_binary_op_0[61] = {
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_15,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_7,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_8,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_9,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_14,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_59,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_60,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_12,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_49,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_50,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_57,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_55,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_53,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_54,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_52,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_47,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_51,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_46,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_48,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_56,
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
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_58,
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
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_44,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_45,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_5,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_6,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_29
};

static const MR_Integer backend_libs__builtin_ops__backend_libs__builtin_ops__functor_number_map_binary_op_0[61] = {
  (MR_Integer) 20,
  (MR_Integer) 28,
  (MR_Integer) 27,
  (MR_Integer) 21,
  (MR_Integer) 26,
  (MR_Integer) 58,
  (MR_Integer) 59,
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
  (MR_Integer) 60,
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
  (MR_Integer) 56,
  (MR_Integer) 57,
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
  (MR_Integer) 61,
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
                MR_Box backend_libs__builtin_ops__Var_134 = (MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 0));

                switch (MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Box backend_libs__builtin_ops__Var_5 = (MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__HeadVar__3_3, (MR_Integer) 0));

                      {
                        mercury__builtin__compare_3_p_0(backend_libs__builtin_ops__TypeInfo_for_T_117, backend_libs__builtin_ops__HeadVar__1_1, backend_libs__builtin_ops__Var_134, backend_libs__builtin_ops__Var_5);
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
                MR_Integer backend_libs__builtin_ops__Var_133 = ((MR_Integer) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 0)));

                switch (MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Integer backend_libs__builtin_ops__Var_22 = ((MR_Integer) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__HeadVar__3_3, (MR_Integer) 0)));

                      {
                        mercury__private_builtin__builtin_compare_int_3_p_0(backend_libs__builtin_ops__HeadVar__1_1, backend_libs__builtin_ops__Var_133, backend_libs__builtin_ops__Var_22);
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
                MR_Unsigned backend_libs__builtin_ops__Var_135 = ((MR_Unsigned) (MR_hl_field(MR_mktag(2), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 0)));

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
                      MR_Unsigned backend_libs__builtin_ops__Var_39 = ((MR_Unsigned) (MR_hl_field(MR_mktag(2), backend_libs__builtin_ops__HeadVar__3_3, (MR_Integer) 0)));

                      {
                        mercury__private_builtin__builtin_compare_uint_3_p_0(backend_libs__builtin_ops__HeadVar__1_1, backend_libs__builtin_ops__Var_135, backend_libs__builtin_ops__Var_39);
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
                    MR_Float backend_libs__builtin_ops__Var_132 = MR_unbox_float((MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 1)));

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
                              MR_Float backend_libs__builtin_ops__Var_56 = MR_unbox_float((MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__3_3, (MR_Integer) 1)));

                              {
                                mercury__private_builtin__builtin_compare_float_3_p_0(backend_libs__builtin_ops__HeadVar__1_1, backend_libs__builtin_ops__Var_132, backend_libs__builtin_ops__Var_56);
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
                    MR_Word backend_libs__builtin_ops__Var_136 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 2)));
                    MR_Word backend_libs__builtin_ops__Var_137 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 1)));

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
                              MR_Word backend_libs__builtin_ops__Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__3_3, (MR_Integer) 1)));
                              MR_Word backend_libs__builtin_ops__Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__3_3, (MR_Integer) 2)));
                              MR_Word backend_libs__builtin_ops__Var_80;
                              MR_Integer backend_libs__builtin_ops__Var_138 = (MR_Integer) backend_libs__builtin_ops__Var_137;
                              MR_Integer backend_libs__builtin_ops__Var_139 = (MR_Integer) backend_libs__builtin_ops__Var_78;

                              {
                                mercury__private_builtin__builtin_compare_int_3_p_0(&backend_libs__builtin_ops__Var_80, backend_libs__builtin_ops__Var_138, backend_libs__builtin_ops__Var_139);
                              }
                              backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__Var_80 == (MR_Integer) 0);
                              backend_libs__builtin_ops__succeeded = !(backend_libs__builtin_ops__succeeded);
                              if (backend_libs__builtin_ops__succeeded)
                                *backend_libs__builtin_ops__HeadVar__1_1 = backend_libs__builtin_ops__Var_80;
                              else
                                {
                                  /* direct tailcall eliminated */
                                  {
                                    MR_Word backend_libs__builtin_ops__next_value_of_HeadVar__2_2 = backend_libs__builtin_ops__Var_136;
                                    MR_Word backend_libs__builtin_ops__next_value_of_HeadVar__3_3 = backend_libs__builtin_ops__Var_79;

                                    backend_libs__builtin_ops__HeadVar__3_3 = backend_libs__builtin_ops__next_value_of_HeadVar__3_3;
                                    backend_libs__builtin_ops__HeadVar__2_2 = backend_libs__builtin_ops__next_value_of_HeadVar__2_2;
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
                    MR_Word backend_libs__builtin_ops__Var_129 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 3)));
                    MR_Word backend_libs__builtin_ops__Var_130 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 2)));
                    MR_Word backend_libs__builtin_ops__Var_131 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 1)));

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
                              MR_Word backend_libs__builtin_ops__Var_110 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__3_3, (MR_Integer) 1)));
                              MR_Word backend_libs__builtin_ops__Var_111 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__3_3, (MR_Integer) 2)));
                              MR_Word backend_libs__builtin_ops__Var_112 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__3_3, (MR_Integer) 3)));
                              MR_Word backend_libs__builtin_ops__Var_113;

                              {
                                backend_libs__builtin_ops____Compare____binary_op_0_0(&backend_libs__builtin_ops__Var_113, backend_libs__builtin_ops__Var_131, backend_libs__builtin_ops__Var_110);
                              }
                              backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__Var_113 == (MR_Integer) 0);
                              backend_libs__builtin_ops__succeeded = !(backend_libs__builtin_ops__succeeded);
                              if (backend_libs__builtin_ops__succeeded)
                                *backend_libs__builtin_ops__HeadVar__1_1 = backend_libs__builtin_ops__Var_113;
                              else
                                {
                                  MR_Word backend_libs__builtin_ops__Var_114;

                                  {
                                    backend_libs__builtin_ops____Compare____simple_expr_1_0(backend_libs__builtin_ops__TypeInfo_for_T_117, &backend_libs__builtin_ops__Var_114, backend_libs__builtin_ops__Var_130, backend_libs__builtin_ops__Var_111);
                                  }
                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__Var_114 == (MR_Integer) 0);
                                  backend_libs__builtin_ops__succeeded = !(backend_libs__builtin_ops__succeeded);
                                  if (backend_libs__builtin_ops__succeeded)
                                    *backend_libs__builtin_ops__HeadVar__1_1 = backend_libs__builtin_ops__Var_114;
                                  else
                                    {
                                      /* direct tailcall eliminated */
                                      {
                                        MR_Word backend_libs__builtin_ops__next_value_of_HeadVar__2_2 = backend_libs__builtin_ops__Var_129;
                                        MR_Word backend_libs__builtin_ops__next_value_of_HeadVar__3_3 = backend_libs__builtin_ops__Var_112;

                                        backend_libs__builtin_ops__HeadVar__3_3 = backend_libs__builtin_ops__next_value_of_HeadVar__3_3;
                                        backend_libs__builtin_ops__HeadVar__2_2 = backend_libs__builtin_ops__next_value_of_HeadVar__2_2;
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
                MR_Box backend_libs__builtin_ops__Var_3 = (MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__HeadVar__1_1, (MR_Integer) 0));
                MR_Box backend_libs__builtin_ops__Var_4;

                backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
                if (backend_libs__builtin_ops__succeeded)
                  {
                    backend_libs__builtin_ops__Var_4 = (MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 0));
                    {
                      backend_libs__builtin_ops__succeeded = mercury__builtin__unify_2_p_0(backend_libs__builtin_ops__TypeInfo_for_T_23, backend_libs__builtin_ops__Var_3, backend_libs__builtin_ops__Var_4);
                    }
                  }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer backend_libs__builtin_ops__Var_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__HeadVar__1_1, (MR_Integer) 0)));
                MR_Integer backend_libs__builtin_ops__Var_6;

                backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
                if (backend_libs__builtin_ops__succeeded)
                  {
                    backend_libs__builtin_ops__Var_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 0)));
                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__Var_5 == backend_libs__builtin_ops__Var_6);
                  }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Unsigned backend_libs__builtin_ops__Var_7 = ((MR_Unsigned) (MR_hl_field(MR_mktag(2), backend_libs__builtin_ops__HeadVar__1_1, (MR_Integer) 0)));
                MR_Unsigned backend_libs__builtin_ops__Var_8;

                backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
                if (backend_libs__builtin_ops__succeeded)
                  {
                    backend_libs__builtin_ops__Var_8 = ((MR_Unsigned) (MR_hl_field(MR_mktag(2), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 0)));
                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__Var_7 == backend_libs__builtin_ops__Var_8);
                  }
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__1_1, (MR_Integer) 0)))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Float backend_libs__builtin_ops__Var_9 = MR_unbox_float((MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__1_1, (MR_Integer) 1)));
                    MR_Float backend_libs__builtin_ops__Var_10;

                    backend_libs__builtin_ops__succeeded = ((((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
                    if (backend_libs__builtin_ops__succeeded)
                      {
                        backend_libs__builtin_ops__Var_10 = MR_unbox_float((MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 1)));
                        backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__Var_9 == backend_libs__builtin_ops__Var_10);
                      }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word backend_libs__builtin_ops__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__1_1, (MR_Integer) 1)));
                    MR_Word backend_libs__builtin_ops__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__1_1, (MR_Integer) 2)));
                    MR_Word backend_libs__builtin_ops__Var_13;
                    MR_Word backend_libs__builtin_ops__Var_14;

                    backend_libs__builtin_ops__succeeded = ((((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
                    if (backend_libs__builtin_ops__succeeded)
                      {
                        backend_libs__builtin_ops__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 1)));
                        backend_libs__builtin_ops__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 2)));
                        backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__Var_11 == backend_libs__builtin_ops__Var_13);
                        if (backend_libs__builtin_ops__succeeded)
                          {
                            /* direct tailcall eliminated */
                            {
                              MR_Word backend_libs__builtin_ops__next_value_of_HeadVar__1_1 = backend_libs__builtin_ops__Var_12;
                              MR_Word backend_libs__builtin_ops__next_value_of_HeadVar__2_2 = backend_libs__builtin_ops__Var_14;

                              backend_libs__builtin_ops__HeadVar__2_2 = backend_libs__builtin_ops__next_value_of_HeadVar__2_2;
                              backend_libs__builtin_ops__HeadVar__1_1 = backend_libs__builtin_ops__next_value_of_HeadVar__1_1;
                            }
                            continue;
                          }
                      }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word backend_libs__builtin_ops__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__1_1, (MR_Integer) 1)));
                    MR_Word backend_libs__builtin_ops__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__1_1, (MR_Integer) 2)));
                    MR_Word backend_libs__builtin_ops__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__1_1, (MR_Integer) 3)));
                    MR_Word backend_libs__builtin_ops__Var_18;
                    MR_Word backend_libs__builtin_ops__Var_19;
                    MR_Word backend_libs__builtin_ops__Var_20;

                    backend_libs__builtin_ops__succeeded = ((((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
                    if (backend_libs__builtin_ops__succeeded)
                      {
                        backend_libs__builtin_ops__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 1)));
                        backend_libs__builtin_ops__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 2)));
                        backend_libs__builtin_ops__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 3)));
                        {
                          backend_libs__builtin_ops__succeeded = backend_libs__builtin_ops____Unify____binary_op_0_0(backend_libs__builtin_ops__Var_15, backend_libs__builtin_ops__Var_18);
                        }
                        if (backend_libs__builtin_ops__succeeded)
                          {
                            {
                              backend_libs__builtin_ops__succeeded = backend_libs__builtin_ops____Unify____simple_expr_1_0(backend_libs__builtin_ops__TypeInfo_for_T_23, backend_libs__builtin_ops__Var_16, backend_libs__builtin_ops__Var_19);
                            }
                            if (backend_libs__builtin_ops__succeeded)
                              {
                                /* direct tailcall eliminated */
                                {
                                  MR_Word backend_libs__builtin_ops__next_value_of_HeadVar__1_1 = backend_libs__builtin_ops__Var_17;
                                  MR_Word backend_libs__builtin_ops__next_value_of_HeadVar__2_2 = backend_libs__builtin_ops__Var_20;

                                  backend_libs__builtin_ops__HeadVar__2_2 = backend_libs__builtin_ops__next_value_of_HeadVar__2_2;
                                  backend_libs__builtin_ops__HeadVar__1_1 = backend_libs__builtin_ops__next_value_of_HeadVar__1_1;
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
            MR_Word backend_libs__builtin_ops__Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 1)));
            MR_Box backend_libs__builtin_ops__Var_64 = (MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 0));

            switch (MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Box backend_libs__builtin_ops__Var_6 = (MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__HeadVar__3_3, (MR_Integer) 0));
                  MR_Word backend_libs__builtin_ops__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__HeadVar__3_3, (MR_Integer) 1)));
                  MR_Word backend_libs__builtin_ops__Var_8;

                  {
                    mercury__builtin__compare_3_p_0(backend_libs__builtin_ops__TypeInfo_for_T_56, &backend_libs__builtin_ops__Var_8, backend_libs__builtin_ops__Var_64, backend_libs__builtin_ops__Var_6);
                  }
                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__Var_8 == (MR_Integer) 0);
                  backend_libs__builtin_ops__succeeded = !(backend_libs__builtin_ops__succeeded);
                  if (backend_libs__builtin_ops__succeeded)
                    *backend_libs__builtin_ops__HeadVar__1_1 = backend_libs__builtin_ops__Var_8;
                  else
                    {
                      backend_libs__builtin_ops____Compare____simple_expr_1_0(backend_libs__builtin_ops__TypeInfo_for_T_56, backend_libs__builtin_ops__HeadVar__1_1, backend_libs__builtin_ops__Var_63, backend_libs__builtin_ops__Var_7);
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
            MR_Box backend_libs__builtin_ops__Var_66 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 1));
            MR_Box backend_libs__builtin_ops__Var_67 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 0));

            switch (MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Box backend_libs__builtin_ops__Var_25 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__HeadVar__3_3, (MR_Integer) 0));
                  MR_Box backend_libs__builtin_ops__Var_26 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__HeadVar__3_3, (MR_Integer) 1));
                  MR_Word backend_libs__builtin_ops__Var_27;

                  {
                    mercury__builtin__compare_3_p_0(backend_libs__builtin_ops__TypeInfo_for_T_56, &backend_libs__builtin_ops__Var_27, backend_libs__builtin_ops__Var_67, backend_libs__builtin_ops__Var_25);
                  }
                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__Var_27 == (MR_Integer) 0);
                  backend_libs__builtin_ops__succeeded = !(backend_libs__builtin_ops__succeeded);
                  if (backend_libs__builtin_ops__succeeded)
                    *backend_libs__builtin_ops__HeadVar__1_1 = backend_libs__builtin_ops__Var_27;
                  else
                    {
                      mercury__builtin__compare_3_p_0(backend_libs__builtin_ops__TypeInfo_for_T_56, backend_libs__builtin_ops__HeadVar__1_1, backend_libs__builtin_ops__Var_66, backend_libs__builtin_ops__Var_26);
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
            MR_Word backend_libs__builtin_ops__Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(2), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 0)));

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
                  MR_Word backend_libs__builtin_ops__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(2), backend_libs__builtin_ops__HeadVar__3_3, (MR_Integer) 0)));

                  {
                    backend_libs__builtin_ops____Compare____simple_expr_1_0(backend_libs__builtin_ops__TypeInfo_for_T_56, backend_libs__builtin_ops__HeadVar__1_1, backend_libs__builtin_ops__Var_68, backend_libs__builtin_ops__Var_41);
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
            MR_Word backend_libs__builtin_ops__Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 0)));

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
                  MR_Word backend_libs__builtin_ops__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__3_3, (MR_Integer) 0)));

                  {
                    mercury__list____Compare____list_1_0(backend_libs__builtin_ops__TypeInfo_for_T_56, backend_libs__builtin_ops__HeadVar__1_1, backend_libs__builtin_ops__Var_65, backend_libs__builtin_ops__Var_53);
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
            MR_Box backend_libs__builtin_ops__Var_3 = (MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__HeadVar__1_1, (MR_Integer) 0));
            MR_Word backend_libs__builtin_ops__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__HeadVar__1_1, (MR_Integer) 1)));
            MR_Box backend_libs__builtin_ops__Var_5;
            MR_Word backend_libs__builtin_ops__Var_6;

            backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
            if (backend_libs__builtin_ops__succeeded)
              {
                backend_libs__builtin_ops__Var_5 = (MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 0));
                backend_libs__builtin_ops__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 1)));
                {
                  backend_libs__builtin_ops__succeeded = mercury__builtin__unify_2_p_0(backend_libs__builtin_ops__TypeInfo_for_T_17, backend_libs__builtin_ops__Var_3, backend_libs__builtin_ops__Var_5);
                }
                if (backend_libs__builtin_ops__succeeded)
                  {
                    backend_libs__builtin_ops__succeeded = backend_libs__builtin_ops____Unify____simple_expr_1_0(backend_libs__builtin_ops__TypeInfo_for_T_17, backend_libs__builtin_ops__Var_4, backend_libs__builtin_ops__Var_6);
                  }
              }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Box backend_libs__builtin_ops__Var_7 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__HeadVar__1_1, (MR_Integer) 0));
            MR_Box backend_libs__builtin_ops__Var_8 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__HeadVar__1_1, (MR_Integer) 1));
            MR_Box backend_libs__builtin_ops__Var_9;
            MR_Box backend_libs__builtin_ops__Var_10;

            backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (backend_libs__builtin_ops__succeeded)
              {
                backend_libs__builtin_ops__Var_9 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 0));
                backend_libs__builtin_ops__Var_10 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 1));
                {
                  backend_libs__builtin_ops__succeeded = mercury__builtin__unify_2_p_0(backend_libs__builtin_ops__TypeInfo_for_T_17, backend_libs__builtin_ops__Var_7, backend_libs__builtin_ops__Var_9);
                }
                if (backend_libs__builtin_ops__succeeded)
                  {
                    backend_libs__builtin_ops__succeeded = mercury__builtin__unify_2_p_0(backend_libs__builtin_ops__TypeInfo_for_T_17, backend_libs__builtin_ops__Var_8, backend_libs__builtin_ops__Var_10);
                  }
              }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word backend_libs__builtin_ops__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), backend_libs__builtin_ops__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word backend_libs__builtin_ops__Var_12;

            backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (backend_libs__builtin_ops__succeeded)
              {
                backend_libs__builtin_ops__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 0)));
                {
                  backend_libs__builtin_ops__succeeded = backend_libs__builtin_ops____Unify____simple_expr_1_0(backend_libs__builtin_ops__TypeInfo_for_T_17, backend_libs__builtin_ops__Var_11, backend_libs__builtin_ops__Var_12);
                }
              }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word backend_libs__builtin_ops__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word backend_libs__builtin_ops__Var_14;

            backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)));
            if (backend_libs__builtin_ops__succeeded)
              {
                backend_libs__builtin_ops__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 0)));
                {
                  backend_libs__builtin_ops__succeeded = mercury__list____Unify____list_1_0(backend_libs__builtin_ops__TypeInfo_for_T_17, backend_libs__builtin_ops__Var_13, backend_libs__builtin_ops__Var_14);
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
        MR_Integer backend_libs__builtin_ops__Var_4;
        MR_Integer backend_libs__builtin_ops__Var_5;

        {
          backend_libs__builtin_ops____Index____binary_op_0_0(backend_libs__builtin_ops__HeadVar__2_2, &backend_libs__builtin_ops__Var_4);
        }
        {
          backend_libs__builtin_ops____Index____binary_op_0_0(backend_libs__builtin_ops__HeadVar__3_3, &backend_libs__builtin_ops__Var_5);
        }
        backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__Var_4 < backend_libs__builtin_ops__Var_5);
        if (backend_libs__builtin_ops__succeeded)
          *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 1;
        else
          {
            backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__Var_4 > backend_libs__builtin_ops__Var_5);
            if (backend_libs__builtin_ops__succeeded)
              *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 2;
            else
              {
                MR_Word backend_libs__builtin_ops__Var_6;

                switch (MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__2_2)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    switch (MR_unmkbody(backend_libs__builtin_ops__HeadVar__2_2)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          backend_libs__builtin_ops__Var_6 = (MR_Integer) 0;
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          backend_libs__builtin_ops__Var_6 = (MR_Integer) 0;
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 2:
                        {
                          backend_libs__builtin_ops__Var_6 = (MR_Integer) 0;
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 3:
                        {
                          backend_libs__builtin_ops__Var_6 = (MR_Integer) 0;
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 4:
                        {
                          backend_libs__builtin_ops__Var_6 = (MR_Integer) 0;
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 5:
                        {
                          backend_libs__builtin_ops__Var_6 = (MR_Integer) 0;
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 6:
                        {
                          backend_libs__builtin_ops__Var_6 = (MR_Integer) 0;
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 7:
                        {
                          backend_libs__builtin_ops__Var_6 = (MR_Integer) 0;
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 8:
                        {
                          backend_libs__builtin_ops__Var_6 = (MR_Integer) 0;
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 9:
                        {
                          backend_libs__builtin_ops__Var_6 = (MR_Integer) 0;
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 10:
                        {
                          backend_libs__builtin_ops__Var_6 = (MR_Integer) 0;
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 11:
                        {
                          backend_libs__builtin_ops__Var_6 = (MR_Integer) 0;
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 12:
                        {
                          backend_libs__builtin_ops__Var_6 = (MR_Integer) 0;
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 13:
                        {
                          backend_libs__builtin_ops__Var_6 = (MR_Integer) 0;
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 14:
                        {
                          backend_libs__builtin_ops__Var_6 = (MR_Integer) 0;
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 15:
                        {
                          backend_libs__builtin_ops__Var_6 = (MR_Integer) 0;
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 16:
                        {
                          backend_libs__builtin_ops__Var_6 = (MR_Integer) 0;
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 17:
                        {
                          backend_libs__builtin_ops__Var_6 = (MR_Integer) 0;
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 18:
                        {
                          backend_libs__builtin_ops__Var_6 = (MR_Integer) 0;
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 19:
                        {
                          backend_libs__builtin_ops__Var_6 = (MR_Integer) 0;
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 20:
                        {
                          backend_libs__builtin_ops__Var_6 = (MR_Integer) 0;
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 21:
                        {
                          backend_libs__builtin_ops__Var_6 = (MR_Integer) 0;
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 22:
                        {
                          backend_libs__builtin_ops__Var_6 = (MR_Integer) 0;
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 23:
                        {
                          backend_libs__builtin_ops__Var_6 = (MR_Integer) 0;
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 24:
                        {
                          backend_libs__builtin_ops__Var_6 = (MR_Integer) 0;
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 25:
                        {
                          backend_libs__builtin_ops__Var_6 = (MR_Integer) 0;
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 26:
                        {
                          backend_libs__builtin_ops__Var_6 = (MR_Integer) 0;
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 27:
                        {
                          backend_libs__builtin_ops__Var_6 = (MR_Integer) 0;
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 28:
                        {
                          backend_libs__builtin_ops__Var_6 = (MR_Integer) 0;
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 29:
                        {
                          backend_libs__builtin_ops__Var_6 = (MR_Integer) 0;
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 30:
                        {
                          backend_libs__builtin_ops__Var_6 = (MR_Integer) 0;
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 31:
                        {
                          backend_libs__builtin_ops__Var_6 = (MR_Integer) 0;
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 32:
                        {
                          backend_libs__builtin_ops__Var_6 = (MR_Integer) 0;
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 33:
                        {
                          backend_libs__builtin_ops__Var_6 = (MR_Integer) 0;
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 34:
                        {
                          backend_libs__builtin_ops__Var_6 = (MR_Integer) 0;
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 35:
                        {
                          backend_libs__builtin_ops__Var_6 = (MR_Integer) 0;
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 36:
                        {
                          backend_libs__builtin_ops__Var_6 = (MR_Integer) 0;
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 37:
                        {
                          backend_libs__builtin_ops__Var_6 = (MR_Integer) 0;
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 38:
                        {
                          backend_libs__builtin_ops__Var_6 = (MR_Integer) 0;
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 39:
                        {
                          backend_libs__builtin_ops__Var_6 = (MR_Integer) 0;
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 40:
                        {
                          backend_libs__builtin_ops__Var_6 = (MR_Integer) 0;
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 41:
                        {
                          backend_libs__builtin_ops__Var_6 = (MR_Integer) 0;
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 42:
                        {
                          backend_libs__builtin_ops__Var_6 = (MR_Integer) 0;
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 43:
                        {
                          backend_libs__builtin_ops__Var_6 = (MR_Integer) 0;
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 44:
                        {
                          backend_libs__builtin_ops__Var_6 = (MR_Integer) 0;
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 45:
                        {
                          backend_libs__builtin_ops__Var_6 = (MR_Integer) 0;
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 46:
                        {
                          backend_libs__builtin_ops__Var_6 = (MR_Integer) 0;
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 47:
                        {
                          backend_libs__builtin_ops__Var_6 = (MR_Integer) 0;
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 48:
                        {
                          backend_libs__builtin_ops__Var_6 = (MR_Integer) 0;
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 49:
                        {
                          backend_libs__builtin_ops__Var_6 = (MR_Integer) 0;
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 50:
                        {
                          backend_libs__builtin_ops__Var_6 = (MR_Integer) 0;
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 51:
                        {
                          backend_libs__builtin_ops__Var_6 = (MR_Integer) 0;
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 52:
                        {
                          backend_libs__builtin_ops__Var_6 = (MR_Integer) 0;
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 53:
                        {
                          backend_libs__builtin_ops__Var_6 = (MR_Integer) 0;
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 54:
                        {
                          backend_libs__builtin_ops__Var_6 = (MR_Integer) 0;
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 55:
                        {
                          backend_libs__builtin_ops__Var_6 = (MR_Integer) 0;
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 56:
                        {
                          backend_libs__builtin_ops__Var_6 = (MR_Integer) 0;
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 57:
                        {
                          backend_libs__builtin_ops__Var_6 = (MR_Integer) 0;
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 58:
                        {
                          backend_libs__builtin_ops__Var_6 = (MR_Integer) 0;
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
                        }
                        break;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word backend_libs__builtin_ops__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 0)));
                      MR_Word backend_libs__builtin_ops__Var_8;

                      backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
                      if (backend_libs__builtin_ops__succeeded)
                        {
                          backend_libs__builtin_ops__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__HeadVar__3_3, (MR_Integer) 0)));
                          {
                            backend_libs__builtin_ops____Compare____array_elem_type_0_0(&backend_libs__builtin_ops__Var_6, backend_libs__builtin_ops__Var_7, backend_libs__builtin_ops__Var_8);
                          }
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
                        }
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Integer backend_libs__builtin_ops__Var_9 = ((MR_Integer) (MR_hl_field(MR_mktag(2), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 0)));
                      MR_Integer backend_libs__builtin_ops__Var_10;

                      backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2)));
                      if (backend_libs__builtin_ops__succeeded)
                        {
                          backend_libs__builtin_ops__Var_10 = ((MR_Integer) (MR_hl_field(MR_mktag(2), backend_libs__builtin_ops__HeadVar__3_3, (MR_Integer) 0)));
                          {
                            mercury__private_builtin__builtin_compare_int_3_p_0(&backend_libs__builtin_ops__Var_6, backend_libs__builtin_ops__Var_9, backend_libs__builtin_ops__Var_10);
                          }
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
                        }
                    }
                    break;
                }
                if (backend_libs__builtin_ops__succeeded)
                  *backend_libs__builtin_ops__HeadVar__1_1 = backend_libs__builtin_ops__Var_6;
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
          case (MR_Integer) 57:
            *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 59;
            break;
          case (MR_Integer) 58:
            *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 60;
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
    MR_Integer backend_libs__builtin_ops__CastX_125 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
    MR_Integer backend_libs__builtin_ops__CastY_126 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastX_125 == backend_libs__builtin_ops__CastY_126);
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
            case (MR_Integer) 57:
              {
                MR_Integer backend_libs__builtin_ops__CastX_121 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
                MR_Integer backend_libs__builtin_ops__CastY_122 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastY_122 == backend_libs__builtin_ops__CastX_121);
              }
              break;
            case (MR_Integer) 58:
              {
                MR_Integer backend_libs__builtin_ops__CastX_123 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
                MR_Integer backend_libs__builtin_ops__CastY_124 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastY_124 == backend_libs__builtin_ops__CastX_123);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word backend_libs__builtin_ops__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word backend_libs__builtin_ops__Var_34;

            backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (backend_libs__builtin_ops__succeeded)
              {
                backend_libs__builtin_ops__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 0)));
                {
                  backend_libs__builtin_ops__succeeded = backend_libs__builtin_ops____Unify____array_elem_type_0_0(backend_libs__builtin_ops__Var_33, backend_libs__builtin_ops__Var_34);
                }
              }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Integer backend_libs__builtin_ops__Var_51 = ((MR_Integer) (MR_hl_field(MR_mktag(2), backend_libs__builtin_ops__HeadVar__1_1, (MR_Integer) 0)));
            MR_Integer backend_libs__builtin_ops__Var_52;

            backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (backend_libs__builtin_ops__succeeded)
              {
                backend_libs__builtin_ops__Var_52 = ((MR_Integer) (MR_hl_field(MR_mktag(2), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 0)));
                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__Var_51 == backend_libs__builtin_ops__Var_52);
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
        MR_Word backend_libs__builtin_ops__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 0)));

        if (((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
          {
            MR_Word backend_libs__builtin_ops__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__HeadVar__3_3, (MR_Integer) 0)));
            MR_Integer backend_libs__builtin_ops__Var_18 = (MR_Integer) backend_libs__builtin_ops__Var_16;
            MR_Integer backend_libs__builtin_ops__Var_19 = (MR_Integer) backend_libs__builtin_ops__Var_5;

            {
              mercury__private_builtin__builtin_compare_int_3_p_0(backend_libs__builtin_ops__HeadVar__1_1, backend_libs__builtin_ops__Var_18, backend_libs__builtin_ops__Var_19);
            }
          }
        else
          *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 1;
      }
    else
      {
        MR_Word backend_libs__builtin_ops__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 0)));

        if (((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
          *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 2;
        else
          {
            MR_Word backend_libs__builtin_ops__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__HeadVar__3_3, (MR_Integer) 0)));

            {
              mercury__builtin__compare_3_p_0((MR_Word) &backend_libs__builtin_ops_scalar_common_1[0], backend_libs__builtin_ops__HeadVar__1_1, ((MR_Box) (backend_libs__builtin_ops__Var_17)), ((MR_Box) (backend_libs__builtin_ops__Var_11)));
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
        MR_Word backend_libs__builtin_ops__Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word backend_libs__builtin_ops__Var_4;

        backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
        if (backend_libs__builtin_ops__succeeded)
          {
            backend_libs__builtin_ops__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 0)));
            backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__Var_3 == backend_libs__builtin_ops__Var_4);
          }
      }
    else
      {
        MR_Word backend_libs__builtin_ops__TypeInfo_9_9;
        MR_Word backend_libs__builtin_ops__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word backend_libs__builtin_ops__Var_6;

        backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
        if (backend_libs__builtin_ops__succeeded)
          {
            backend_libs__builtin_ops__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 0)));
            backend_libs__builtin_ops__TypeInfo_9_9 = (MR_Word) &backend_libs__builtin_ops_scalar_common_1[0];
            {
              backend_libs__builtin_ops__succeeded = mercury__builtin__unify_2_p_0(backend_libs__builtin_ops__TypeInfo_9_9, ((MR_Box) (backend_libs__builtin_ops__Var_5)), ((MR_Box) (backend_libs__builtin_ops__Var_6)));
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
    MR_Word backend_libs__builtin_ops__Var_696;
    MR_Box backend_libs__builtin_ops__Var_697;
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
            backend_libs__builtin_ops__Var_697 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Args_9, (MR_Integer) 0));
            backend_libs__builtin_ops__Var_696 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Args_9, (MR_Integer) 1)));
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
                            MR_Word backend_libs__builtin_ops__Var_257;
                            MR_Word backend_libs__builtin_ops__Var_258;

                            backend_libs__builtin_ops__succeeded = (strcmp(backend_libs__builtin_ops__PredName_7, (MR_String) "unsafe_promise_unique") == 0);
                            if (backend_libs__builtin_ops__succeeded)
                              {
                                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_12 == (MR_Integer) 0);
                                if (backend_libs__builtin_ops__succeeded)
                                  {
                                    backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__Var_696)) == (MR_mktag((MR_Integer) 1)));
                                    if (backend_libs__builtin_ops__succeeded)
                                      {
                                        backend_libs__builtin_ops__Y_42 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_696, (MR_Integer) 0));
                                        backend_libs__builtin_ops__Var_257 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_696, (MR_Integer) 1)));
                                        backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__Var_257 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                        if (backend_libs__builtin_ops__succeeded)
                                          {
                                            {
                                              backend_libs__builtin_ops__Var_258 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                              MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__Var_258, 0) = backend_libs__builtin_ops__Var_697;
                                            }
                                            {
                                              backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                              MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Y_42;
                                              MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__Var_258));
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
                            MR_Word backend_libs__builtin_ops__Var_706;
                            MR_Box backend_libs__builtin_ops__Var_707;
                            MR_Integer backend_libs__builtin_ops__slot_9;
                            MR_String backend_libs__builtin_ops__str_10;

                            backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_12 == (MR_Integer) 0);
                            if (backend_libs__builtin_ops__succeeded)
                              {
                                backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__Var_696)) == (MR_mktag((MR_Integer) 1)));
                                if (backend_libs__builtin_ops__succeeded)
                                  {
                                    backend_libs__builtin_ops__Var_707 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_696, (MR_Integer) 0));
                                    backend_libs__builtin_ops__Var_706 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_696, (MR_Integer) 1)));
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
                                                MR_Word backend_libs__builtin_ops__Var_410;
                                                MR_Word backend_libs__builtin_ops__Var_411;
                                                MR_Word backend_libs__builtin_ops__Var_412;
                                                MR_Word backend_libs__builtin_ops__CompareOp_415;

                                                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__Var_706 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  {
                                                    backend_libs__builtin_ops__CompareOp_415 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 53));
                                                    {
                                                      backend_libs__builtin_ops__Var_411 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__Var_411, 0) = backend_libs__builtin_ops__Var_697;
                                                    }
                                                    {
                                                      backend_libs__builtin_ops__Var_412 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__Var_412, 0) = backend_libs__builtin_ops__Var_707;
                                                    }
                                                    {
                                                      backend_libs__builtin_ops__Var_410 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_410, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_410, 1) = ((MR_Box) (backend_libs__builtin_ops__CompareOp_415));
                                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_410, 2) = ((MR_Box) (backend_libs__builtin_ops__Var_411));
                                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_410, 3) = ((MR_Box) (backend_libs__builtin_ops__Var_412));
                                                    }
                                                    {
                                                      backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                                      MR_hl_field(MR_mktag(2), backend_libs__builtin_ops__CodePrime_13, 0) = ((MR_Box) (backend_libs__builtin_ops__Var_410));
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
                                                MR_Word backend_libs__builtin_ops__Var_394;
                                                MR_Word backend_libs__builtin_ops__Var_395;
                                                MR_Word backend_libs__builtin_ops__Var_396;
                                                MR_Word backend_libs__builtin_ops__CompareOp_399;

                                                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__Var_706 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  {
                                                    backend_libs__builtin_ops__CompareOp_399 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 52));
                                                    {
                                                      backend_libs__builtin_ops__Var_395 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__Var_395, 0) = backend_libs__builtin_ops__Var_697;
                                                    }
                                                    {
                                                      backend_libs__builtin_ops__Var_396 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__Var_396, 0) = backend_libs__builtin_ops__Var_707;
                                                    }
                                                    {
                                                      backend_libs__builtin_ops__Var_394 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_394, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_394, 1) = ((MR_Box) (backend_libs__builtin_ops__CompareOp_399));
                                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_394, 2) = ((MR_Box) (backend_libs__builtin_ops__Var_395));
                                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_394, 3) = ((MR_Box) (backend_libs__builtin_ops__Var_396));
                                                    }
                                                    {
                                                      backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                                      MR_hl_field(MR_mktag(2), backend_libs__builtin_ops__CodePrime_13, 0) = ((MR_Box) (backend_libs__builtin_ops__Var_394));
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
                                                MR_Word backend_libs__builtin_ops__Var_418;
                                                MR_Word backend_libs__builtin_ops__Var_419;
                                                MR_Word backend_libs__builtin_ops__Var_420;
                                                MR_Word backend_libs__builtin_ops__Var_421;
                                                MR_Box backend_libs__builtin_ops__Z_424;

                                                backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__Var_706)) == (MR_mktag((MR_Integer) 1)));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  {
                                                    backend_libs__builtin_ops__Z_424 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_706, (MR_Integer) 0));
                                                    backend_libs__builtin_ops__Var_418 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_706, (MR_Integer) 1)));
                                                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__Var_418 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                    if (backend_libs__builtin_ops__succeeded)
                                                      {
                                                        {
                                                          backend_libs__builtin_ops__Var_420 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__Var_420, 0) = backend_libs__builtin_ops__Var_697;
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__Var_421 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__Var_421, 0) = backend_libs__builtin_ops__Var_707;
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__Var_419 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_419, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_419, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 47))));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_419, 2) = ((MR_Box) (backend_libs__builtin_ops__Var_420));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_419, 3) = ((MR_Box) (backend_libs__builtin_ops__Var_421));
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Z_424;
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__Var_419));
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
                                              if ((backend_libs__builtin_ops__Var_706 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                                                {
                                                  MR_Word backend_libs__builtin_ops__Var_82;

                                                  {
                                                    backend_libs__builtin_ops__Var_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                    MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__Var_82, 0) = backend_libs__builtin_ops__Var_697;
                                                  }
                                                  {
                                                    backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                    MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Var_707;
                                                    MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__Var_82));
                                                  }
                                                  backend_libs__builtin_ops__succeeded = MR_TRUE;
                                                }
                                              else
                                                {
                                                  MR_Word backend_libs__builtin_ops__Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_706, (MR_Integer) 1)));
                                                  MR_Word backend_libs__builtin_ops__Var_76;
                                                  MR_Word backend_libs__builtin_ops__Var_77;
                                                  MR_Word backend_libs__builtin_ops__Var_78;
                                                  MR_Word backend_libs__builtin_ops__Var_79;
                                                  MR_Box backend_libs__builtin_ops__Z_357 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_706, (MR_Integer) 0));

                                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__Var_75 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                  if (backend_libs__builtin_ops__succeeded)
                                                    {
                                                      backend_libs__builtin_ops__Var_77 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 44));
                                                      {
                                                        backend_libs__builtin_ops__Var_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__Var_78, 0) = backend_libs__builtin_ops__Var_697;
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__Var_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__Var_79, 0) = backend_libs__builtin_ops__Var_707;
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__Var_76 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_76, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_76, 1) = ((MR_Box) (backend_libs__builtin_ops__Var_77));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_76, 2) = ((MR_Box) (backend_libs__builtin_ops__Var_78));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_76, 3) = ((MR_Box) (backend_libs__builtin_ops__Var_79));
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Z_357;
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__Var_76));
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
                                                MR_Word backend_libs__builtin_ops__Var_55;
                                                MR_Word backend_libs__builtin_ops__Var_56;
                                                MR_Word backend_libs__builtin_ops__Var_57;
                                                MR_Word backend_libs__builtin_ops__Var_58;
                                                MR_Box backend_libs__builtin_ops__Z_377;

                                                backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__Var_706)) == (MR_mktag((MR_Integer) 1)));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  {
                                                    backend_libs__builtin_ops__Z_377 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_706, (MR_Integer) 0));
                                                    backend_libs__builtin_ops__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_706, (MR_Integer) 1)));
                                                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__Var_55 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                    if (backend_libs__builtin_ops__succeeded)
                                                      {
                                                        {
                                                          backend_libs__builtin_ops__Var_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__Var_57, 0) = backend_libs__builtin_ops__Var_697;
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__Var_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__Var_58, 0) = backend_libs__builtin_ops__Var_707;
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__Var_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 46))));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_56, 2) = ((MR_Box) (backend_libs__builtin_ops__Var_57));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_56, 3) = ((MR_Box) (backend_libs__builtin_ops__Var_58));
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Z_377;
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__Var_56));
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
                                              if ((backend_libs__builtin_ops__Var_706 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                                                {
                                                  MR_Word backend_libs__builtin_ops__Var_68;
                                                  MR_Word backend_libs__builtin_ops__Var_72;

                                                  {
                                                    backend_libs__builtin_ops__Var_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                    MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__Var_72, 0) = backend_libs__builtin_ops__Var_697;
                                                  }
                                                  {
                                                    backend_libs__builtin_ops__Var_68 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_68, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 45))));
                                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_68, 2) = ((MR_Box) (MR_mkword(MR_mktag(3), &backend_libs__builtin_ops_scalar_common_1[1])));
                                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_68, 3) = ((MR_Box) (backend_libs__builtin_ops__Var_72));
                                                  }
                                                  {
                                                    backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                    MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Var_707;
                                                    MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__Var_68));
                                                  }
                                                  backend_libs__builtin_ops__succeeded = MR_TRUE;
                                                }
                                              else
                                                {
                                                  MR_Word backend_libs__builtin_ops__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_706, (MR_Integer) 1)));
                                                  MR_Word backend_libs__builtin_ops__Var_62;
                                                  MR_Word backend_libs__builtin_ops__Var_63;
                                                  MR_Word backend_libs__builtin_ops__Var_64;
                                                  MR_Word backend_libs__builtin_ops__Var_65;
                                                  MR_Box backend_libs__builtin_ops__Z_368 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_706, (MR_Integer) 0));

                                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__Var_61 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                  if (backend_libs__builtin_ops__succeeded)
                                                    {
                                                      backend_libs__builtin_ops__Var_63 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 45));
                                                      {
                                                        backend_libs__builtin_ops__Var_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__Var_64, 0) = backend_libs__builtin_ops__Var_697;
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__Var_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__Var_65, 0) = backend_libs__builtin_ops__Var_707;
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__Var_62 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_62, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_62, 1) = ((MR_Box) (backend_libs__builtin_ops__Var_63));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_62, 2) = ((MR_Box) (backend_libs__builtin_ops__Var_64));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_62, 3) = ((MR_Box) (backend_libs__builtin_ops__Var_65));
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Z_368;
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__Var_62));
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
                                                MR_Word backend_libs__builtin_ops__Var_50;
                                                MR_Word backend_libs__builtin_ops__Var_51;
                                                MR_Word backend_libs__builtin_ops__Var_52;
                                                MR_Word backend_libs__builtin_ops__CompareOp_381;

                                                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__Var_706 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  {
                                                    backend_libs__builtin_ops__CompareOp_381 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 50));
                                                    {
                                                      backend_libs__builtin_ops__Var_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__Var_51, 0) = backend_libs__builtin_ops__Var_697;
                                                    }
                                                    {
                                                      backend_libs__builtin_ops__Var_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__Var_52, 0) = backend_libs__builtin_ops__Var_707;
                                                    }
                                                    {
                                                      backend_libs__builtin_ops__Var_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_50, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_50, 1) = ((MR_Box) (backend_libs__builtin_ops__CompareOp_381));
                                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_50, 2) = ((MR_Box) (backend_libs__builtin_ops__Var_51));
                                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_50, 3) = ((MR_Box) (backend_libs__builtin_ops__Var_52));
                                                    }
                                                    {
                                                      backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                                      MR_hl_field(MR_mktag(2), backend_libs__builtin_ops__CodePrime_13, 0) = ((MR_Box) (backend_libs__builtin_ops__Var_50));
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
                                                MR_Word backend_libs__builtin_ops__Var_402;
                                                MR_Word backend_libs__builtin_ops__Var_403;
                                                MR_Word backend_libs__builtin_ops__Var_404;
                                                MR_Word backend_libs__builtin_ops__CompareOp_407;

                                                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__Var_706 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  {
                                                    backend_libs__builtin_ops__CompareOp_407 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 51));
                                                    {
                                                      backend_libs__builtin_ops__Var_403 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__Var_403, 0) = backend_libs__builtin_ops__Var_697;
                                                    }
                                                    {
                                                      backend_libs__builtin_ops__Var_404 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__Var_404, 0) = backend_libs__builtin_ops__Var_707;
                                                    }
                                                    {
                                                      backend_libs__builtin_ops__Var_402 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_402, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_402, 1) = ((MR_Box) (backend_libs__builtin_ops__CompareOp_407));
                                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_402, 2) = ((MR_Box) (backend_libs__builtin_ops__Var_403));
                                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_402, 3) = ((MR_Box) (backend_libs__builtin_ops__Var_404));
                                                    }
                                                    {
                                                      backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                                      MR_hl_field(MR_mktag(2), backend_libs__builtin_ops__CodePrime_13, 0) = ((MR_Box) (backend_libs__builtin_ops__Var_402));
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
                            MR_Word backend_libs__builtin_ops__Var_708;
                            MR_Box backend_libs__builtin_ops__Var_709;

                            backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__Var_696)) == (MR_mktag((MR_Integer) 1)));
                            if (backend_libs__builtin_ops__succeeded)
                              {
                                backend_libs__builtin_ops__Var_709 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_696, (MR_Integer) 0));
                                backend_libs__builtin_ops__Var_708 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_696, (MR_Integer) 1)));
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
                                          MR_Word backend_libs__builtin_ops__Var_156;
                                          MR_Word backend_libs__builtin_ops__Var_157;
                                          MR_Word backend_libs__builtin_ops__Var_158;
                                          MR_Word backend_libs__builtin_ops__Var_159;
                                          MR_Box backend_libs__builtin_ops__Z_311;

                                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_12 == (MR_Integer) 0);
                                          if (backend_libs__builtin_ops__succeeded)
                                            {
                                              backend_libs__builtin_ops__ArithOp_47 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
                                              backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__Var_708)) == (MR_mktag((MR_Integer) 1)));
                                              if (backend_libs__builtin_ops__succeeded)
                                                {
                                                  backend_libs__builtin_ops__Z_311 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_708, (MR_Integer) 0));
                                                  backend_libs__builtin_ops__Var_156 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_708, (MR_Integer) 1)));
                                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__Var_156 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                  if (backend_libs__builtin_ops__succeeded)
                                                    {
                                                      {
                                                        backend_libs__builtin_ops__Var_158 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__Var_158, 0) = backend_libs__builtin_ops__Var_697;
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__Var_159 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__Var_159, 0) = backend_libs__builtin_ops__Var_709;
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__Var_157 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_157, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_157, 1) = ((MR_Box) (backend_libs__builtin_ops__ArithOp_47));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_157, 2) = ((MR_Box) (backend_libs__builtin_ops__Var_158));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_157, 3) = ((MR_Box) (backend_libs__builtin_ops__Var_159));
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Z_311;
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__Var_157));
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
                                            if ((backend_libs__builtin_ops__Var_708 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                                              {
                                                MR_Word backend_libs__builtin_ops__Var_199;

                                                {
                                                  backend_libs__builtin_ops__Var_199 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                  MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__Var_199, 0) = backend_libs__builtin_ops__Var_697;
                                                }
                                                {
                                                  backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                  MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Var_709;
                                                  MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__Var_199));
                                                }
                                                backend_libs__builtin_ops__succeeded = MR_TRUE;
                                              }
                                            else
                                              {
                                                MR_Word backend_libs__builtin_ops__Var_202 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_708, (MR_Integer) 1)));
                                                MR_Word backend_libs__builtin_ops__Var_211;
                                                MR_Word backend_libs__builtin_ops__Var_212;
                                                MR_Word backend_libs__builtin_ops__Var_213;
                                                MR_Word backend_libs__builtin_ops__Var_214;
                                                MR_Box backend_libs__builtin_ops__Z_286 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_708, (MR_Integer) 0));

                                                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__Var_202 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  {
                                                    backend_libs__builtin_ops__Var_212 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                                                    {
                                                      backend_libs__builtin_ops__Var_213 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__Var_213, 0) = backend_libs__builtin_ops__Var_697;
                                                    }
                                                    {
                                                      backend_libs__builtin_ops__Var_214 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__Var_214, 0) = backend_libs__builtin_ops__Var_709;
                                                    }
                                                    {
                                                      backend_libs__builtin_ops__Var_211 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_211, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_211, 1) = ((MR_Box) (backend_libs__builtin_ops__Var_212));
                                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_211, 2) = ((MR_Box) (backend_libs__builtin_ops__Var_213));
                                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_211, 3) = ((MR_Box) (backend_libs__builtin_ops__Var_214));
                                                    }
                                                    {
                                                      backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Z_286;
                                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__Var_211));
                                                    }
                                                    backend_libs__builtin_ops__succeeded = MR_TRUE;
                                                  }
                                              }
                                            break;
                                          case (MR_Integer) 1:
                                            {
                                              MR_Word backend_libs__builtin_ops__Var_207;
                                              MR_Word backend_libs__builtin_ops__Var_208;
                                              MR_Word backend_libs__builtin_ops__Var_209;
                                              MR_Word backend_libs__builtin_ops__Var_210;
                                              MR_Word backend_libs__builtin_ops__Var_428;
                                              MR_Box backend_libs__builtin_ops__Z_431;

                                              backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__Var_708)) == (MR_mktag((MR_Integer) 1)));
                                              if (backend_libs__builtin_ops__succeeded)
                                                {
                                                  backend_libs__builtin_ops__Z_431 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_708, (MR_Integer) 0));
                                                  backend_libs__builtin_ops__Var_428 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_708, (MR_Integer) 1)));
                                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__Var_428 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                  if (backend_libs__builtin_ops__succeeded)
                                                    {
                                                      backend_libs__builtin_ops__Var_208 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
                                                      {
                                                        backend_libs__builtin_ops__Var_209 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__Var_209, 0) = backend_libs__builtin_ops__Z_431;
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__Var_210 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__Var_210, 0) = backend_libs__builtin_ops__Var_709;
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__Var_207 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_207, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_207, 1) = ((MR_Box) (backend_libs__builtin_ops__Var_208));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_207, 2) = ((MR_Box) (backend_libs__builtin_ops__Var_209));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_207, 3) = ((MR_Box) (backend_libs__builtin_ops__Var_210));
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Var_697;
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__Var_207));
                                                      }
                                                      backend_libs__builtin_ops__succeeded = MR_TRUE;
                                                    }
                                                }
                                            }
                                            break;
                                          case (MR_Integer) 2:
                                            {
                                              MR_Word backend_libs__builtin_ops__Var_203;
                                              MR_Word backend_libs__builtin_ops__Var_204;
                                              MR_Word backend_libs__builtin_ops__Var_205;
                                              MR_Word backend_libs__builtin_ops__Var_206;
                                              MR_Word backend_libs__builtin_ops__Var_434;
                                              MR_Box backend_libs__builtin_ops__Z_437;

                                              backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__Var_708)) == (MR_mktag((MR_Integer) 1)));
                                              if (backend_libs__builtin_ops__succeeded)
                                                {
                                                  backend_libs__builtin_ops__Z_437 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_708, (MR_Integer) 0));
                                                  backend_libs__builtin_ops__Var_434 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_708, (MR_Integer) 1)));
                                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__Var_434 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                  if (backend_libs__builtin_ops__succeeded)
                                                    {
                                                      backend_libs__builtin_ops__Var_204 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
                                                      {
                                                        backend_libs__builtin_ops__Var_205 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__Var_205, 0) = backend_libs__builtin_ops__Z_437;
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__Var_206 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__Var_206, 0) = backend_libs__builtin_ops__Var_697;
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__Var_203 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_203, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_203, 1) = ((MR_Box) (backend_libs__builtin_ops__Var_204));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_203, 2) = ((MR_Box) (backend_libs__builtin_ops__Var_205));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_203, 3) = ((MR_Box) (backend_libs__builtin_ops__Var_206));
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Var_709;
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__Var_203));
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
                                            if ((backend_libs__builtin_ops__Var_708 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                                              {
                                                MR_Word backend_libs__builtin_ops__Var_177;
                                                MR_Word backend_libs__builtin_ops__Var_181;

                                                {
                                                  backend_libs__builtin_ops__Var_181 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                  MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__Var_181, 0) = backend_libs__builtin_ops__Var_697;
                                                }
                                                {
                                                  backend_libs__builtin_ops__Var_177 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                  MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_177, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                  MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_177, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
                                                  MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_177, 2) = ((MR_Box) (MR_mkword(MR_mktag(1), &backend_libs__builtin_ops_scalar_common_4[1])));
                                                  MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_177, 3) = ((MR_Box) (backend_libs__builtin_ops__Var_181));
                                                }
                                                {
                                                  backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                  MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Var_709;
                                                  MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__Var_177));
                                                }
                                                backend_libs__builtin_ops__succeeded = MR_TRUE;
                                              }
                                            else
                                              {
                                                MR_Word backend_libs__builtin_ops__Var_184 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_708, (MR_Integer) 1)));
                                                MR_Word backend_libs__builtin_ops__Var_193;
                                                MR_Word backend_libs__builtin_ops__Var_194;
                                                MR_Word backend_libs__builtin_ops__Var_195;
                                                MR_Word backend_libs__builtin_ops__Var_196;
                                                MR_Box backend_libs__builtin_ops__Z_297 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_708, (MR_Integer) 0));

                                                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__Var_184 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  {
                                                    backend_libs__builtin_ops__Var_194 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
                                                    {
                                                      backend_libs__builtin_ops__Var_195 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__Var_195, 0) = backend_libs__builtin_ops__Var_697;
                                                    }
                                                    {
                                                      backend_libs__builtin_ops__Var_196 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__Var_196, 0) = backend_libs__builtin_ops__Var_709;
                                                    }
                                                    {
                                                      backend_libs__builtin_ops__Var_193 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_193, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_193, 1) = ((MR_Box) (backend_libs__builtin_ops__Var_194));
                                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_193, 2) = ((MR_Box) (backend_libs__builtin_ops__Var_195));
                                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_193, 3) = ((MR_Box) (backend_libs__builtin_ops__Var_196));
                                                    }
                                                    {
                                                      backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Z_297;
                                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__Var_193));
                                                    }
                                                    backend_libs__builtin_ops__succeeded = MR_TRUE;
                                                  }
                                              }
                                            break;
                                          case (MR_Integer) 1:
                                            {
                                              MR_Word backend_libs__builtin_ops__Var_189;
                                              MR_Word backend_libs__builtin_ops__Var_190;
                                              MR_Word backend_libs__builtin_ops__Var_191;
                                              MR_Word backend_libs__builtin_ops__Var_192;
                                              MR_Word backend_libs__builtin_ops__Var_440;
                                              MR_Box backend_libs__builtin_ops__Z_443;

                                              backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__Var_708)) == (MR_mktag((MR_Integer) 1)));
                                              if (backend_libs__builtin_ops__succeeded)
                                                {
                                                  backend_libs__builtin_ops__Z_443 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_708, (MR_Integer) 0));
                                                  backend_libs__builtin_ops__Var_440 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_708, (MR_Integer) 1)));
                                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__Var_440 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                  if (backend_libs__builtin_ops__succeeded)
                                                    {
                                                      backend_libs__builtin_ops__Var_190 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                                                      {
                                                        backend_libs__builtin_ops__Var_191 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__Var_191, 0) = backend_libs__builtin_ops__Var_709;
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__Var_192 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__Var_192, 0) = backend_libs__builtin_ops__Z_443;
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__Var_189 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_189, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_189, 1) = ((MR_Box) (backend_libs__builtin_ops__Var_190));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_189, 2) = ((MR_Box) (backend_libs__builtin_ops__Var_191));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_189, 3) = ((MR_Box) (backend_libs__builtin_ops__Var_192));
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Var_697;
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__Var_189));
                                                      }
                                                      backend_libs__builtin_ops__succeeded = MR_TRUE;
                                                    }
                                                }
                                            }
                                            break;
                                          case (MR_Integer) 2:
                                            {
                                              MR_Word backend_libs__builtin_ops__Var_185;
                                              MR_Word backend_libs__builtin_ops__Var_186;
                                              MR_Word backend_libs__builtin_ops__Var_187;
                                              MR_Word backend_libs__builtin_ops__Var_188;
                                              MR_Word backend_libs__builtin_ops__Var_446;
                                              MR_Box backend_libs__builtin_ops__Z_449;

                                              backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__Var_708)) == (MR_mktag((MR_Integer) 1)));
                                              if (backend_libs__builtin_ops__succeeded)
                                                {
                                                  backend_libs__builtin_ops__Z_449 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_708, (MR_Integer) 0));
                                                  backend_libs__builtin_ops__Var_446 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_708, (MR_Integer) 1)));
                                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__Var_446 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                  if (backend_libs__builtin_ops__succeeded)
                                                    {
                                                      backend_libs__builtin_ops__Var_186 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
                                                      {
                                                        backend_libs__builtin_ops__Var_187 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__Var_187, 0) = backend_libs__builtin_ops__Var_697;
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__Var_188 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__Var_188, 0) = backend_libs__builtin_ops__Z_449;
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__Var_185 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_185, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_185, 1) = ((MR_Box) (backend_libs__builtin_ops__Var_186));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_185, 2) = ((MR_Box) (backend_libs__builtin_ops__Var_187));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_185, 3) = ((MR_Box) (backend_libs__builtin_ops__Var_188));
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Var_709;
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__Var_185));
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
                                          MR_Word backend_libs__builtin_ops__ArithOp_450;
                                          MR_Word backend_libs__builtin_ops__Var_453;
                                          MR_Word backend_libs__builtin_ops__Var_454;
                                          MR_Word backend_libs__builtin_ops__Var_455;
                                          MR_Word backend_libs__builtin_ops__Var_456;
                                          MR_Box backend_libs__builtin_ops__Z_459;

                                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_12 == (MR_Integer) 0);
                                          if (backend_libs__builtin_ops__succeeded)
                                            {
                                              backend_libs__builtin_ops__ArithOp_450 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7));
                                              backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__Var_708)) == (MR_mktag((MR_Integer) 1)));
                                              if (backend_libs__builtin_ops__succeeded)
                                                {
                                                  backend_libs__builtin_ops__Z_459 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_708, (MR_Integer) 0));
                                                  backend_libs__builtin_ops__Var_453 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_708, (MR_Integer) 1)));
                                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__Var_453 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                  if (backend_libs__builtin_ops__succeeded)
                                                    {
                                                      {
                                                        backend_libs__builtin_ops__Var_455 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__Var_455, 0) = backend_libs__builtin_ops__Var_697;
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__Var_456 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__Var_456, 0) = backend_libs__builtin_ops__Var_709;
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__Var_454 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_454, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_454, 1) = ((MR_Box) (backend_libs__builtin_ops__ArithOp_450));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_454, 2) = ((MR_Box) (backend_libs__builtin_ops__Var_455));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_454, 3) = ((MR_Box) (backend_libs__builtin_ops__Var_456));
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Z_459;
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__Var_454));
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
                                          MR_Word backend_libs__builtin_ops__Var_146;
                                          MR_Word backend_libs__builtin_ops__Var_147;
                                          MR_Word backend_libs__builtin_ops__Var_148;
                                          MR_Word backend_libs__builtin_ops__CompareOp_316;

                                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_12 == (MR_Integer) 0);
                                          if (backend_libs__builtin_ops__succeeded)
                                            {
                                              backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__Var_708 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                              if (backend_libs__builtin_ops__succeeded)
                                                {
                                                  backend_libs__builtin_ops__CompareOp_316 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 23));
                                                  {
                                                    backend_libs__builtin_ops__Var_147 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                    MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__Var_147, 0) = backend_libs__builtin_ops__Var_697;
                                                  }
                                                  {
                                                    backend_libs__builtin_ops__Var_148 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                    MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__Var_148, 0) = backend_libs__builtin_ops__Var_709;
                                                  }
                                                  {
                                                    backend_libs__builtin_ops__Var_146 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_146, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_146, 1) = ((MR_Box) (backend_libs__builtin_ops__CompareOp_316));
                                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_146, 2) = ((MR_Box) (backend_libs__builtin_ops__Var_147));
                                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_146, 3) = ((MR_Box) (backend_libs__builtin_ops__Var_148));
                                                  }
                                                  {
                                                    backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                                    MR_hl_field(MR_mktag(2), backend_libs__builtin_ops__CodePrime_13, 0) = ((MR_Box) (backend_libs__builtin_ops__Var_146));
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
                                          MR_Word backend_libs__builtin_ops__Var_462;
                                          MR_Word backend_libs__builtin_ops__Var_463;
                                          MR_Word backend_libs__builtin_ops__Var_464;
                                          MR_Word backend_libs__builtin_ops__CompareOp_467;

                                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_12 == (MR_Integer) 0);
                                          if (backend_libs__builtin_ops__succeeded)
                                            {
                                              backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__Var_708 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                              if (backend_libs__builtin_ops__succeeded)
                                                {
                                                  backend_libs__builtin_ops__CompareOp_467 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 25));
                                                  {
                                                    backend_libs__builtin_ops__Var_463 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                    MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__Var_463, 0) = backend_libs__builtin_ops__Var_697;
                                                  }
                                                  {
                                                    backend_libs__builtin_ops__Var_464 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                    MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__Var_464, 0) = backend_libs__builtin_ops__Var_709;
                                                  }
                                                  {
                                                    backend_libs__builtin_ops__Var_462 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_462, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_462, 1) = ((MR_Box) (backend_libs__builtin_ops__CompareOp_467));
                                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_462, 2) = ((MR_Box) (backend_libs__builtin_ops__Var_463));
                                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_462, 3) = ((MR_Box) (backend_libs__builtin_ops__Var_464));
                                                  }
                                                  {
                                                    backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                                    MR_hl_field(MR_mktag(2), backend_libs__builtin_ops__CodePrime_13, 0) = ((MR_Box) (backend_libs__builtin_ops__Var_462));
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
                                          MR_Word backend_libs__builtin_ops__Var_470;
                                          MR_Word backend_libs__builtin_ops__Var_471;
                                          MR_Word backend_libs__builtin_ops__Var_472;
                                          MR_Word backend_libs__builtin_ops__CompareOp_475;

                                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_12 == (MR_Integer) 0);
                                          if (backend_libs__builtin_ops__succeeded)
                                            {
                                              backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__Var_708 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                              if (backend_libs__builtin_ops__succeeded)
                                                {
                                                  backend_libs__builtin_ops__CompareOp_475 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 24));
                                                  {
                                                    backend_libs__builtin_ops__Var_471 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                    MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__Var_471, 0) = backend_libs__builtin_ops__Var_697;
                                                  }
                                                  {
                                                    backend_libs__builtin_ops__Var_472 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                    MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__Var_472, 0) = backend_libs__builtin_ops__Var_709;
                                                  }
                                                  {
                                                    backend_libs__builtin_ops__Var_470 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_470, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_470, 1) = ((MR_Box) (backend_libs__builtin_ops__CompareOp_475));
                                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_470, 2) = ((MR_Box) (backend_libs__builtin_ops__Var_471));
                                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_470, 3) = ((MR_Box) (backend_libs__builtin_ops__Var_472));
                                                  }
                                                  {
                                                    backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                                    MR_hl_field(MR_mktag(2), backend_libs__builtin_ops__CodePrime_13, 0) = ((MR_Box) (backend_libs__builtin_ops__Var_470));
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
                                          MR_Word backend_libs__builtin_ops__Var_478;
                                          MR_Word backend_libs__builtin_ops__Var_479;
                                          MR_Word backend_libs__builtin_ops__Var_480;
                                          MR_Word backend_libs__builtin_ops__CompareOp_483;

                                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_12 == (MR_Integer) 0);
                                          if (backend_libs__builtin_ops__succeeded)
                                            {
                                              backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__Var_708 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                              if (backend_libs__builtin_ops__succeeded)
                                                {
                                                  backend_libs__builtin_ops__CompareOp_483 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 26));
                                                  {
                                                    backend_libs__builtin_ops__Var_479 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                    MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__Var_479, 0) = backend_libs__builtin_ops__Var_697;
                                                  }
                                                  {
                                                    backend_libs__builtin_ops__Var_480 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                    MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__Var_480, 0) = backend_libs__builtin_ops__Var_709;
                                                  }
                                                  {
                                                    backend_libs__builtin_ops__Var_478 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_478, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_478, 1) = ((MR_Box) (backend_libs__builtin_ops__CompareOp_483));
                                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_478, 2) = ((MR_Box) (backend_libs__builtin_ops__Var_479));
                                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_478, 3) = ((MR_Box) (backend_libs__builtin_ops__Var_480));
                                                  }
                                                  {
                                                    backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                                    MR_hl_field(MR_mktag(2), backend_libs__builtin_ops__CodePrime_13, 0) = ((MR_Box) (backend_libs__builtin_ops__Var_478));
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
                                          MR_Word backend_libs__builtin_ops__Var_151;
                                          MR_Word backend_libs__builtin_ops__Var_152;
                                          MR_Word backend_libs__builtin_ops__Var_153;

                                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_12 == (MR_Integer) 0);
                                          if (backend_libs__builtin_ops__succeeded)
                                            {
                                              backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__Var_708 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                              if (backend_libs__builtin_ops__succeeded)
                                                {
                                                  backend_libs__builtin_ops__Var_152 = (MR_Integer) 6;
                                                  {
                                                    backend_libs__builtin_ops__Var_153 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                    MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__Var_153, 0) = backend_libs__builtin_ops__Var_697;
                                                  }
                                                  {
                                                    backend_libs__builtin_ops__Var_151 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_151, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_151, 1) = ((MR_Box) (backend_libs__builtin_ops__Var_152));
                                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_151, 2) = ((MR_Box) (backend_libs__builtin_ops__Var_153));
                                                  }
                                                  {
                                                    backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                    MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Var_709;
                                                    MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__Var_151));
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
                                          MR_Word backend_libs__builtin_ops__ArithOp_484;
                                          MR_Word backend_libs__builtin_ops__Var_487;
                                          MR_Word backend_libs__builtin_ops__Var_488;
                                          MR_Word backend_libs__builtin_ops__Var_489;
                                          MR_Word backend_libs__builtin_ops__Var_490;
                                          MR_Box backend_libs__builtin_ops__Z_493;

                                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_12 == (MR_Integer) 0);
                                          if (backend_libs__builtin_ops__succeeded)
                                            {
                                              backend_libs__builtin_ops__ArithOp_484 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8));
                                              backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__Var_708)) == (MR_mktag((MR_Integer) 1)));
                                              if (backend_libs__builtin_ops__succeeded)
                                                {
                                                  backend_libs__builtin_ops__Z_493 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_708, (MR_Integer) 0));
                                                  backend_libs__builtin_ops__Var_487 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_708, (MR_Integer) 1)));
                                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__Var_487 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                  if (backend_libs__builtin_ops__succeeded)
                                                    {
                                                      {
                                                        backend_libs__builtin_ops__Var_489 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__Var_489, 0) = backend_libs__builtin_ops__Var_697;
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__Var_490 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__Var_490, 0) = backend_libs__builtin_ops__Var_709;
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__Var_488 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_488, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_488, 1) = ((MR_Box) (backend_libs__builtin_ops__ArithOp_484));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_488, 2) = ((MR_Box) (backend_libs__builtin_ops__Var_489));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_488, 3) = ((MR_Box) (backend_libs__builtin_ops__Var_490));
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Z_493;
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__Var_488));
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
                                          MR_Word backend_libs__builtin_ops__ArithOp_494;
                                          MR_Word backend_libs__builtin_ops__Var_497;
                                          MR_Word backend_libs__builtin_ops__Var_498;
                                          MR_Word backend_libs__builtin_ops__Var_499;
                                          MR_Word backend_libs__builtin_ops__Var_500;
                                          MR_Box backend_libs__builtin_ops__Z_503;

                                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_12 == (MR_Integer) 0);
                                          if (backend_libs__builtin_ops__succeeded)
                                            {
                                              backend_libs__builtin_ops__ArithOp_494 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
                                              backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__Var_708)) == (MR_mktag((MR_Integer) 1)));
                                              if (backend_libs__builtin_ops__succeeded)
                                                {
                                                  backend_libs__builtin_ops__Z_503 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_708, (MR_Integer) 0));
                                                  backend_libs__builtin_ops__Var_497 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_708, (MR_Integer) 1)));
                                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__Var_497 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                  if (backend_libs__builtin_ops__succeeded)
                                                    {
                                                      {
                                                        backend_libs__builtin_ops__Var_499 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__Var_499, 0) = backend_libs__builtin_ops__Var_697;
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__Var_500 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__Var_500, 0) = backend_libs__builtin_ops__Var_709;
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__Var_498 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_498, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_498, 1) = ((MR_Box) (backend_libs__builtin_ops__ArithOp_494));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_498, 2) = ((MR_Box) (backend_libs__builtin_ops__Var_499));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_498, 3) = ((MR_Box) (backend_libs__builtin_ops__Var_500));
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Z_503;
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__Var_498));
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
                                          MR_Word backend_libs__builtin_ops__ArithOp_504;
                                          MR_Word backend_libs__builtin_ops__Var_507;
                                          MR_Word backend_libs__builtin_ops__Var_508;
                                          MR_Word backend_libs__builtin_ops__Var_509;
                                          MR_Word backend_libs__builtin_ops__Var_510;
                                          MR_Box backend_libs__builtin_ops__Z_513;

                                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_12 == (MR_Integer) 0);
                                          if (backend_libs__builtin_ops__succeeded)
                                            {
                                              backend_libs__builtin_ops__ArithOp_504 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                                              backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__Var_708)) == (MR_mktag((MR_Integer) 1)));
                                              if (backend_libs__builtin_ops__succeeded)
                                                {
                                                  backend_libs__builtin_ops__Z_513 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_708, (MR_Integer) 0));
                                                  backend_libs__builtin_ops__Var_507 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_708, (MR_Integer) 1)));
                                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__Var_507 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                  if (backend_libs__builtin_ops__succeeded)
                                                    {
                                                      {
                                                        backend_libs__builtin_ops__Var_509 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__Var_509, 0) = backend_libs__builtin_ops__Var_697;
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__Var_510 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__Var_510, 0) = backend_libs__builtin_ops__Var_709;
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__Var_508 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_508, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_508, 1) = ((MR_Box) (backend_libs__builtin_ops__ArithOp_504));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_508, 2) = ((MR_Box) (backend_libs__builtin_ops__Var_509));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_508, 3) = ((MR_Box) (backend_libs__builtin_ops__Var_510));
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Z_513;
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__Var_508));
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
                                          MR_Word backend_libs__builtin_ops__ArithOp_514;
                                          MR_Word backend_libs__builtin_ops__Var_517;
                                          MR_Word backend_libs__builtin_ops__Var_518;
                                          MR_Word backend_libs__builtin_ops__Var_519;
                                          MR_Word backend_libs__builtin_ops__Var_520;
                                          MR_Box backend_libs__builtin_ops__Z_523;

                                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_12 == (MR_Integer) 0);
                                          if (backend_libs__builtin_ops__succeeded)
                                            {
                                              backend_libs__builtin_ops__ArithOp_514 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
                                              backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__Var_708)) == (MR_mktag((MR_Integer) 1)));
                                              if (backend_libs__builtin_ops__succeeded)
                                                {
                                                  backend_libs__builtin_ops__Z_523 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_708, (MR_Integer) 0));
                                                  backend_libs__builtin_ops__Var_517 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_708, (MR_Integer) 1)));
                                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__Var_517 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                  if (backend_libs__builtin_ops__succeeded)
                                                    {
                                                      {
                                                        backend_libs__builtin_ops__Var_519 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__Var_519, 0) = backend_libs__builtin_ops__Var_697;
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__Var_520 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__Var_520, 0) = backend_libs__builtin_ops__Var_709;
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__Var_518 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_518, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_518, 1) = ((MR_Box) (backend_libs__builtin_ops__ArithOp_514));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_518, 2) = ((MR_Box) (backend_libs__builtin_ops__Var_519));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_518, 3) = ((MR_Box) (backend_libs__builtin_ops__Var_520));
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Z_523;
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__Var_518));
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
                                          MR_Word backend_libs__builtin_ops__ArithOp_524;
                                          MR_Word backend_libs__builtin_ops__Var_527;
                                          MR_Word backend_libs__builtin_ops__Var_528;
                                          MR_Word backend_libs__builtin_ops__Var_529;
                                          MR_Word backend_libs__builtin_ops__Var_530;
                                          MR_Box backend_libs__builtin_ops__Z_533;

                                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_12 == (MR_Integer) 0);
                                          if (backend_libs__builtin_ops__succeeded)
                                            {
                                              backend_libs__builtin_ops__ArithOp_524 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
                                              backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__Var_708)) == (MR_mktag((MR_Integer) 1)));
                                              if (backend_libs__builtin_ops__succeeded)
                                                {
                                                  backend_libs__builtin_ops__Z_533 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_708, (MR_Integer) 0));
                                                  backend_libs__builtin_ops__Var_527 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_708, (MR_Integer) 1)));
                                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__Var_527 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                  if (backend_libs__builtin_ops__succeeded)
                                                    {
                                                      {
                                                        backend_libs__builtin_ops__Var_529 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__Var_529, 0) = backend_libs__builtin_ops__Var_697;
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__Var_530 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__Var_530, 0) = backend_libs__builtin_ops__Var_709;
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__Var_528 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_528, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_528, 1) = ((MR_Box) (backend_libs__builtin_ops__ArithOp_524));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_528, 2) = ((MR_Box) (backend_libs__builtin_ops__Var_529));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_528, 3) = ((MR_Box) (backend_libs__builtin_ops__Var_530));
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Z_533;
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__Var_528));
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
                                          MR_Word backend_libs__builtin_ops__ArithOp_534;
                                          MR_Word backend_libs__builtin_ops__Var_537;
                                          MR_Word backend_libs__builtin_ops__Var_538;
                                          MR_Word backend_libs__builtin_ops__Var_539;
                                          MR_Word backend_libs__builtin_ops__Var_540;
                                          MR_Box backend_libs__builtin_ops__Z_543;

                                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_12 == (MR_Integer) 0);
                                          if (backend_libs__builtin_ops__succeeded)
                                            {
                                              backend_libs__builtin_ops__ArithOp_534 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
                                              backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__Var_708)) == (MR_mktag((MR_Integer) 1)));
                                              if (backend_libs__builtin_ops__succeeded)
                                                {
                                                  backend_libs__builtin_ops__Z_543 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_708, (MR_Integer) 0));
                                                  backend_libs__builtin_ops__Var_537 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_708, (MR_Integer) 1)));
                                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__Var_537 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                  if (backend_libs__builtin_ops__succeeded)
                                                    {
                                                      {
                                                        backend_libs__builtin_ops__Var_539 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__Var_539, 0) = backend_libs__builtin_ops__Var_697;
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__Var_540 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__Var_540, 0) = backend_libs__builtin_ops__Var_709;
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__Var_538 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_538, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_538, 1) = ((MR_Box) (backend_libs__builtin_ops__ArithOp_534));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_538, 2) = ((MR_Box) (backend_libs__builtin_ops__Var_539));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_538, 3) = ((MR_Box) (backend_libs__builtin_ops__Var_540));
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Z_543;
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__Var_538));
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
                                          MR_Word backend_libs__builtin_ops__ArithOp_544;
                                          MR_Word backend_libs__builtin_ops__Var_547;
                                          MR_Word backend_libs__builtin_ops__Var_548;
                                          MR_Word backend_libs__builtin_ops__Var_549;
                                          MR_Word backend_libs__builtin_ops__Var_550;
                                          MR_Box backend_libs__builtin_ops__Z_553;

                                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_12 == (MR_Integer) 0);
                                          if (backend_libs__builtin_ops__succeeded)
                                            {
                                              backend_libs__builtin_ops__ArithOp_544 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4));
                                              backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__Var_708)) == (MR_mktag((MR_Integer) 1)));
                                              if (backend_libs__builtin_ops__succeeded)
                                                {
                                                  backend_libs__builtin_ops__Z_553 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_708, (MR_Integer) 0));
                                                  backend_libs__builtin_ops__Var_547 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_708, (MR_Integer) 1)));
                                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__Var_547 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                  if (backend_libs__builtin_ops__succeeded)
                                                    {
                                                      {
                                                        backend_libs__builtin_ops__Var_549 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__Var_549, 0) = backend_libs__builtin_ops__Var_697;
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__Var_550 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__Var_550, 0) = backend_libs__builtin_ops__Var_709;
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__Var_548 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_548, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_548, 1) = ((MR_Box) (backend_libs__builtin_ops__ArithOp_544));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_548, 2) = ((MR_Box) (backend_libs__builtin_ops__Var_549));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_548, 3) = ((MR_Box) (backend_libs__builtin_ops__Var_550));
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Z_553;
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__Var_548));
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
                                          MR_Word backend_libs__builtin_ops__ArithOp_554;
                                          MR_Word backend_libs__builtin_ops__Var_557;
                                          MR_Word backend_libs__builtin_ops__Var_558;
                                          MR_Word backend_libs__builtin_ops__Var_559;
                                          MR_Word backend_libs__builtin_ops__Var_560;
                                          MR_Box backend_libs__builtin_ops__Z_563;

                                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_12 == (MR_Integer) 0);
                                          if (backend_libs__builtin_ops__succeeded)
                                            {
                                              backend_libs__builtin_ops__ArithOp_554 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6));
                                              backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__Var_708)) == (MR_mktag((MR_Integer) 1)));
                                              if (backend_libs__builtin_ops__succeeded)
                                                {
                                                  backend_libs__builtin_ops__Z_563 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_708, (MR_Integer) 0));
                                                  backend_libs__builtin_ops__Var_557 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_708, (MR_Integer) 1)));
                                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__Var_557 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                  if (backend_libs__builtin_ops__succeeded)
                                                    {
                                                      {
                                                        backend_libs__builtin_ops__Var_559 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__Var_559, 0) = backend_libs__builtin_ops__Var_697;
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__Var_560 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__Var_560, 0) = backend_libs__builtin_ops__Var_709;
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__Var_558 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_558, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_558, 1) = ((MR_Box) (backend_libs__builtin_ops__ArithOp_554));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_558, 2) = ((MR_Box) (backend_libs__builtin_ops__Var_559));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_558, 3) = ((MR_Box) (backend_libs__builtin_ops__Var_560));
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Z_563;
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__Var_558));
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
                                          MR_Word backend_libs__builtin_ops__Var_162;
                                          MR_Box backend_libs__builtin_ops__Z_308;

                                          backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__Var_708)) == (MR_mktag((MR_Integer) 1)));
                                          if (backend_libs__builtin_ops__succeeded)
                                            {
                                              backend_libs__builtin_ops__Z_308 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_708, (MR_Integer) 0));
                                              backend_libs__builtin_ops__Var_162 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_708, (MR_Integer) 1)));
                                              backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__Var_162 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                              if (backend_libs__builtin_ops__succeeded)
                                                switch (backend_libs__builtin_ops__ProcNum_12) {
                                                  default:
                                                    backend_libs__builtin_ops__succeeded = MR_FALSE;
                                                    break;
                                                  case (MR_Integer) 0:
                                                    {
                                                      MR_Word backend_libs__builtin_ops__Var_171;
                                                      MR_Word backend_libs__builtin_ops__Var_173;
                                                      MR_Word backend_libs__builtin_ops__Var_174;

                                                      {
                                                        backend_libs__builtin_ops__Var_173 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__Var_173, 0) = backend_libs__builtin_ops__Var_697;
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__Var_174 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__Var_174, 0) = backend_libs__builtin_ops__Var_709;
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__Var_171 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_171, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_171, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9))));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_171, 2) = ((MR_Box) (backend_libs__builtin_ops__Var_173));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_171, 3) = ((MR_Box) (backend_libs__builtin_ops__Var_174));
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Z_308;
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__Var_171));
                                                      }
                                                      backend_libs__builtin_ops__succeeded = MR_TRUE;
                                                    }
                                                    break;
                                                  case (MR_Integer) 1:
                                                    {
                                                      MR_Word backend_libs__builtin_ops__Var_167;
                                                      MR_Word backend_libs__builtin_ops__Var_169;
                                                      MR_Word backend_libs__builtin_ops__Var_170;

                                                      {
                                                        backend_libs__builtin_ops__Var_169 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__Var_169, 0) = backend_libs__builtin_ops__Var_697;
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__Var_170 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__Var_170, 0) = backend_libs__builtin_ops__Z_308;
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__Var_167 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_167, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_167, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9))));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_167, 2) = ((MR_Box) (backend_libs__builtin_ops__Var_169));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_167, 3) = ((MR_Box) (backend_libs__builtin_ops__Var_170));
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Var_709;
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__Var_167));
                                                      }
                                                      backend_libs__builtin_ops__succeeded = MR_TRUE;
                                                    }
                                                    break;
                                                  case (MR_Integer) 2:
                                                    {
                                                      MR_Word backend_libs__builtin_ops__Var_163;
                                                      MR_Word backend_libs__builtin_ops__Var_165;
                                                      MR_Word backend_libs__builtin_ops__Var_166;

                                                      {
                                                        backend_libs__builtin_ops__Var_165 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__Var_165, 0) = backend_libs__builtin_ops__Var_709;
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__Var_166 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__Var_166, 0) = backend_libs__builtin_ops__Z_308;
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__Var_163 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_163, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_163, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9))));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_163, 2) = ((MR_Box) (backend_libs__builtin_ops__Var_165));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_163, 3) = ((MR_Box) (backend_libs__builtin_ops__Var_166));
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Var_697;
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__Var_163));
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
                              backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__Var_696 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
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
                                                MR_Word backend_libs__builtin_ops__Var_227;
                                                MR_Word backend_libs__builtin_ops__Var_228;
                                                MR_Word backend_libs__builtin_ops__Var_229;
                                                MR_Word backend_libs__builtin_ops__Var_230;
                                                MR_Box backend_libs__builtin_ops__X_274;
                                                MR_Box backend_libs__builtin_ops__Y_275;
                                                MR_Word backend_libs__builtin_ops__Var_694;
                                                MR_Box backend_libs__builtin_ops__Var_695;

                                                backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__Var_696)) == (MR_mktag((MR_Integer) 1)));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  {
                                                    backend_libs__builtin_ops__Var_695 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_696, (MR_Integer) 0));
                                                    backend_libs__builtin_ops__Var_694 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_696, (MR_Integer) 1)));
                                                    if ((backend_libs__builtin_ops__Var_694 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                                                      {
                                                        backend_libs__builtin_ops__X_274 = backend_libs__builtin_ops__Var_697;
                                                        backend_libs__builtin_ops__Y_275 = backend_libs__builtin_ops__Var_695;
                                                        backend_libs__builtin_ops__succeeded = MR_TRUE;
                                                      }
                                                    else
                                                      {
                                                        MR_Word backend_libs__builtin_ops__Var_224;

                                                        backend_libs__builtin_ops__X_274 = backend_libs__builtin_ops__Var_695;
                                                        backend_libs__builtin_ops__Y_275 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_694, (MR_Integer) 0));
                                                        backend_libs__builtin_ops__Var_224 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_694, (MR_Integer) 1)));
                                                        backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__Var_224 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                      }
                                                    if (backend_libs__builtin_ops__succeeded)
                                                      {
                                                        backend_libs__builtin_ops__Var_228 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 56));
                                                        {
                                                          backend_libs__builtin_ops__Var_229 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__Var_229, 0) = backend_libs__builtin_ops__X_274;
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__Var_230 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__Var_230, 0) = backend_libs__builtin_ops__Y_275;
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__Var_227 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_227, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_227, 1) = ((MR_Box) (backend_libs__builtin_ops__Var_228));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_227, 2) = ((MR_Box) (backend_libs__builtin_ops__Var_229));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_227, 3) = ((MR_Box) (backend_libs__builtin_ops__Var_230));
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                                          MR_hl_field(MR_mktag(2), backend_libs__builtin_ops__CodePrime_13, 0) = ((MR_Box) (backend_libs__builtin_ops__Var_227));
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
                                                MR_Word backend_libs__builtin_ops__Var_242;
                                                MR_Word backend_libs__builtin_ops__Var_243;
                                                MR_Box backend_libs__builtin_ops__Y_268;

                                                backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__Var_696)) == (MR_mktag((MR_Integer) 1)));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  {
                                                    backend_libs__builtin_ops__Y_268 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_696, (MR_Integer) 0));
                                                    backend_libs__builtin_ops__Var_242 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_696, (MR_Integer) 1)));
                                                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__Var_242 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                    if (backend_libs__builtin_ops__succeeded)
                                                      {
                                                        {
                                                          backend_libs__builtin_ops__Var_243 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__Var_243, 0) = backend_libs__builtin_ops__Var_697;
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Y_268;
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__Var_243));
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
                                              backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__Var_696 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
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
                                                MR_Word backend_libs__builtin_ops__Var_237;
                                                MR_Word backend_libs__builtin_ops__Var_238;
                                                MR_Word backend_libs__builtin_ops__Var_239;
                                                MR_Word backend_libs__builtin_ops__Var_240;
                                                MR_Box backend_libs__builtin_ops__Y_270;

                                                backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__Var_696)) == (MR_mktag((MR_Integer) 1)));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  {
                                                    backend_libs__builtin_ops__Y_270 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_696, (MR_Integer) 0));
                                                    backend_libs__builtin_ops__Var_237 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_696, (MR_Integer) 1)));
                                                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__Var_237 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                    if (backend_libs__builtin_ops__succeeded)
                                                      {
                                                        {
                                                          backend_libs__builtin_ops__Var_239 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__Var_239, 0) = backend_libs__builtin_ops__Var_697;
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__Var_240 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__Var_240, 0) = backend_libs__builtin_ops__Y_270;
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__Var_238 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_238, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_238, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 24))));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_238, 2) = ((MR_Box) (backend_libs__builtin_ops__Var_239));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_238, 3) = ((MR_Box) (backend_libs__builtin_ops__Var_240));
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                                          MR_hl_field(MR_mktag(2), backend_libs__builtin_ops__CodePrime_13, 0) = ((MR_Box) (backend_libs__builtin_ops__Var_238));
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
                                                MR_Word backend_libs__builtin_ops__Var_574;
                                                MR_Word backend_libs__builtin_ops__Var_575;
                                                MR_Word backend_libs__builtin_ops__Var_576;
                                                MR_Word backend_libs__builtin_ops__Var_577;
                                                MR_Box backend_libs__builtin_ops__Y_579;

                                                backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__Var_696)) == (MR_mktag((MR_Integer) 1)));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  {
                                                    backend_libs__builtin_ops__Y_579 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_696, (MR_Integer) 0));
                                                    backend_libs__builtin_ops__Var_574 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_696, (MR_Integer) 1)));
                                                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__Var_574 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                    if (backend_libs__builtin_ops__succeeded)
                                                      {
                                                        {
                                                          backend_libs__builtin_ops__Var_576 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__Var_576, 0) = backend_libs__builtin_ops__Var_697;
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__Var_577 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__Var_577, 0) = backend_libs__builtin_ops__Y_579;
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__Var_575 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_575, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_575, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 23))));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_575, 2) = ((MR_Box) (backend_libs__builtin_ops__Var_576));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_575, 3) = ((MR_Box) (backend_libs__builtin_ops__Var_577));
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                                          MR_hl_field(MR_mktag(2), backend_libs__builtin_ops__CodePrime_13, 0) = ((MR_Box) (backend_libs__builtin_ops__Var_575));
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
                                                MR_Word backend_libs__builtin_ops__Var_245;
                                                MR_Box backend_libs__builtin_ops__Y_266;

                                                backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__Var_696)) == (MR_mktag((MR_Integer) 1)));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  {
                                                    backend_libs__builtin_ops__Y_266 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_696, (MR_Integer) 0));
                                                    backend_libs__builtin_ops__Var_245 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_696, (MR_Integer) 1)));
                                                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__Var_245 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                    if (backend_libs__builtin_ops__succeeded)
                                                      {
                                                        {
                                                          backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                                          MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Var_697;
                                                          MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__CodePrime_13, 1) = backend_libs__builtin_ops__Y_266;
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
                                                MR_Word backend_libs__builtin_ops__Var_232;
                                                MR_Word backend_libs__builtin_ops__Var_233;
                                                MR_Word backend_libs__builtin_ops__Var_234;
                                                MR_Word backend_libs__builtin_ops__Var_235;
                                                MR_Box backend_libs__builtin_ops__Y_272;

                                                backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__Var_696)) == (MR_mktag((MR_Integer) 1)));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  {
                                                    backend_libs__builtin_ops__Y_272 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_696, (MR_Integer) 0));
                                                    backend_libs__builtin_ops__Var_232 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_696, (MR_Integer) 1)));
                                                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__Var_232 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                    if (backend_libs__builtin_ops__succeeded)
                                                      {
                                                        {
                                                          backend_libs__builtin_ops__Var_234 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__Var_234, 0) = backend_libs__builtin_ops__Var_697;
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__Var_235 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__Var_235, 0) = backend_libs__builtin_ops__Y_272;
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__Var_233 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_233, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_233, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 57))));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_233, 2) = ((MR_Box) (backend_libs__builtin_ops__Var_234));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_233, 3) = ((MR_Box) (backend_libs__builtin_ops__Var_235));
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                                          MR_hl_field(MR_mktag(2), backend_libs__builtin_ops__CodePrime_13, 0) = ((MR_Box) (backend_libs__builtin_ops__Var_233));
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
                                                MR_Word backend_libs__builtin_ops__Var_565;
                                                MR_Word backend_libs__builtin_ops__Var_566;
                                                MR_Word backend_libs__builtin_ops__Var_567;
                                                MR_Word backend_libs__builtin_ops__Var_568;
                                                MR_Box backend_libs__builtin_ops__Y_570;

                                                backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__Var_696)) == (MR_mktag((MR_Integer) 1)));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  {
                                                    backend_libs__builtin_ops__Y_570 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_696, (MR_Integer) 0));
                                                    backend_libs__builtin_ops__Var_565 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_696, (MR_Integer) 1)));
                                                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__Var_565 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                    if (backend_libs__builtin_ops__succeeded)
                                                      {
                                                        {
                                                          backend_libs__builtin_ops__Var_567 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__Var_567, 0) = backend_libs__builtin_ops__Var_697;
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__Var_568 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__Var_568, 0) = backend_libs__builtin_ops__Y_570;
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__Var_566 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_566, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_566, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 58))));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_566, 2) = ((MR_Box) (backend_libs__builtin_ops__Var_567));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_566, 3) = ((MR_Box) (backend_libs__builtin_ops__Var_568));
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                                          MR_hl_field(MR_mktag(2), backend_libs__builtin_ops__CodePrime_13, 0) = ((MR_Box) (backend_libs__builtin_ops__Var_566));
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
                                                MR_Word backend_libs__builtin_ops__Var_247;

                                                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__Var_696 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  {
                                                    backend_libs__builtin_ops__Var_247 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
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
                            MR_Word backend_libs__builtin_ops__Var_216;
                            MR_Word backend_libs__builtin_ops__Var_217;
                            MR_Word backend_libs__builtin_ops__Var_218;
                            MR_Word backend_libs__builtin_ops__Var_219;
                            MR_Word backend_libs__builtin_ops__Var_220;
                            MR_Word backend_libs__builtin_ops__Var_221;
                            MR_Box backend_libs__builtin_ops__Y_283;

                            backend_libs__builtin_ops__succeeded = (strcmp(backend_libs__builtin_ops__PredName_7, (MR_String) "term_size_plus") == 0);
                            if (backend_libs__builtin_ops__succeeded)
                              {
                                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_12 == (MR_Integer) 0);
                                if (backend_libs__builtin_ops__succeeded)
                                  {
                                    backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__Var_696)) == (MR_mktag((MR_Integer) 1)));
                                    if (backend_libs__builtin_ops__succeeded)
                                      {
                                        backend_libs__builtin_ops__Y_283 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_696, (MR_Integer) 0));
                                        backend_libs__builtin_ops__Var_216 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_696, (MR_Integer) 1)));
                                        backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__Var_216)) == (MR_mktag((MR_Integer) 1)));
                                        if (backend_libs__builtin_ops__succeeded)
                                          {
                                            backend_libs__builtin_ops__Z_46 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_216, (MR_Integer) 0));
                                            backend_libs__builtin_ops__Var_217 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_216, (MR_Integer) 1)));
                                            backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__Var_217 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                            if (backend_libs__builtin_ops__succeeded)
                                              {
                                                backend_libs__builtin_ops__Var_219 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                                                {
                                                  backend_libs__builtin_ops__Var_220 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                  MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__Var_220, 0) = backend_libs__builtin_ops__Var_697;
                                                }
                                                {
                                                  backend_libs__builtin_ops__Var_221 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                  MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__Var_221, 0) = backend_libs__builtin_ops__Y_283;
                                                }
                                                {
                                                  backend_libs__builtin_ops__Var_218 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                  MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_218, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                  MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_218, 1) = ((MR_Box) (backend_libs__builtin_ops__Var_219));
                                                  MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_218, 2) = ((MR_Box) (backend_libs__builtin_ops__Var_220));
                                                  MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_218, 3) = ((MR_Box) (backend_libs__builtin_ops__Var_221));
                                                }
                                                {
                                                  backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                  MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Z_46;
                                                  MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__Var_218));
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
                            MR_Word backend_libs__builtin_ops__Var_678;
                            MR_Box backend_libs__builtin_ops__Var_679;
                            MR_Integer backend_libs__builtin_ops__slot_4;
                            MR_String backend_libs__builtin_ops__str_5;

                            backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__Var_696)) == (MR_mktag((MR_Integer) 1)));
                            if (backend_libs__builtin_ops__succeeded)
                              {
                                backend_libs__builtin_ops__Var_679 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_696, (MR_Integer) 0));
                                backend_libs__builtin_ops__Var_678 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_696, (MR_Integer) 1)));
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
                                            MR_Word backend_libs__builtin_ops__Var_608;
                                            MR_Word backend_libs__builtin_ops__Var_609;
                                            MR_Word backend_libs__builtin_ops__Var_610;
                                            MR_Word backend_libs__builtin_ops__CompareOp_613;

                                            backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_12 == (MR_Integer) 0);
                                            if (backend_libs__builtin_ops__succeeded)
                                              {
                                                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__Var_678 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  {
                                                    backend_libs__builtin_ops__CompareOp_613 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 33));
                                                    {
                                                      backend_libs__builtin_ops__Var_609 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__Var_609, 0) = backend_libs__builtin_ops__Var_697;
                                                    }
                                                    {
                                                      backend_libs__builtin_ops__Var_610 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__Var_610, 0) = backend_libs__builtin_ops__Var_679;
                                                    }
                                                    {
                                                      backend_libs__builtin_ops__Var_608 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_608, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_608, 1) = ((MR_Box) (backend_libs__builtin_ops__CompareOp_613));
                                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_608, 2) = ((MR_Box) (backend_libs__builtin_ops__Var_609));
                                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_608, 3) = ((MR_Box) (backend_libs__builtin_ops__Var_610));
                                                    }
                                                    {
                                                      backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                                      MR_hl_field(MR_mktag(2), backend_libs__builtin_ops__CodePrime_13, 0) = ((MR_Box) (backend_libs__builtin_ops__Var_608));
                                                    }
                                                    backend_libs__builtin_ops__succeeded = MR_TRUE;
                                                  }
                                              }
                                          }
                                        }
                                        break;
                                      case (MR_Integer) 6:
                                        {
                                          /* case "xor" */
                                          {
                                            MR_Word backend_libs__builtin_ops__Var_90;
                                            MR_Box backend_libs__builtin_ops__Z_339;

                                            backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__Var_678)) == (MR_mktag((MR_Integer) 1)));
                                            if (backend_libs__builtin_ops__succeeded)
                                              {
                                                backend_libs__builtin_ops__Z_339 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_678, (MR_Integer) 0));
                                                backend_libs__builtin_ops__Var_90 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_678, (MR_Integer) 1)));
                                                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__Var_90 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  switch (backend_libs__builtin_ops__ProcNum_12) {
                                                    default:
                                                      backend_libs__builtin_ops__succeeded = MR_FALSE;
                                                      break;
                                                    case (MR_Integer) 0:
                                                      {
                                                        MR_Word backend_libs__builtin_ops__Var_99;
                                                        MR_Word backend_libs__builtin_ops__Var_101;
                                                        MR_Word backend_libs__builtin_ops__Var_102;

                                                        {
                                                          backend_libs__builtin_ops__Var_101 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__Var_101, 0) = backend_libs__builtin_ops__Var_697;
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__Var_102 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__Var_102, 0) = backend_libs__builtin_ops__Var_679;
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__Var_99 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_99, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_99, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 41))));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_99, 2) = ((MR_Box) (backend_libs__builtin_ops__Var_101));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_99, 3) = ((MR_Box) (backend_libs__builtin_ops__Var_102));
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Z_339;
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__Var_99));
                                                        }
                                                        backend_libs__builtin_ops__succeeded = MR_TRUE;
                                                      }
                                                      break;
                                                    case (MR_Integer) 1:
                                                      {
                                                        MR_Word backend_libs__builtin_ops__Var_95;
                                                        MR_Word backend_libs__builtin_ops__Var_97;
                                                        MR_Word backend_libs__builtin_ops__Var_98;

                                                        {
                                                          backend_libs__builtin_ops__Var_97 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__Var_97, 0) = backend_libs__builtin_ops__Var_697;
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__Var_98 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__Var_98, 0) = backend_libs__builtin_ops__Z_339;
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__Var_95 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_95, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_95, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 41))));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_95, 2) = ((MR_Box) (backend_libs__builtin_ops__Var_97));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_95, 3) = ((MR_Box) (backend_libs__builtin_ops__Var_98));
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Var_679;
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__Var_95));
                                                        }
                                                        backend_libs__builtin_ops__succeeded = MR_TRUE;
                                                      }
                                                      break;
                                                    case (MR_Integer) 2:
                                                      {
                                                        MR_Word backend_libs__builtin_ops__Var_91;
                                                        MR_Word backend_libs__builtin_ops__Var_93;
                                                        MR_Word backend_libs__builtin_ops__Var_94;

                                                        {
                                                          backend_libs__builtin_ops__Var_93 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__Var_93, 0) = backend_libs__builtin_ops__Var_679;
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__Var_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__Var_94, 0) = backend_libs__builtin_ops__Z_339;
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__Var_91 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_91, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_91, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 41))));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_91, 2) = ((MR_Box) (backend_libs__builtin_ops__Var_93));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_91, 3) = ((MR_Box) (backend_libs__builtin_ops__Var_94));
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Var_697;
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__Var_91));
                                                        }
                                                        backend_libs__builtin_ops__succeeded = MR_TRUE;
                                                      }
                                                      break;
                                                  }
                                              }
                                          }
                                        }
                                        break;
                                      case (MR_Integer) 9:
                                        {
                                          /* case "unchecked_right_shift" */
                                          {
                                            MR_Word backend_libs__builtin_ops__Var_656;
                                            MR_Word backend_libs__builtin_ops__Var_657;
                                            MR_Word backend_libs__builtin_ops__Var_658;
                                            MR_Word backend_libs__builtin_ops__Var_659;
                                            MR_Box backend_libs__builtin_ops__Z_662;
                                            MR_Word backend_libs__builtin_ops__ArithOp_663;

                                            backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_12 == (MR_Integer) 0);
                                            if (backend_libs__builtin_ops__succeeded)
                                              {
                                                backend_libs__builtin_ops__ArithOp_663 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 43));
                                                backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__Var_678)) == (MR_mktag((MR_Integer) 1)));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  {
                                                    backend_libs__builtin_ops__Z_662 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_678, (MR_Integer) 0));
                                                    backend_libs__builtin_ops__Var_656 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_678, (MR_Integer) 1)));
                                                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__Var_656 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                    if (backend_libs__builtin_ops__succeeded)
                                                      {
                                                        {
                                                          backend_libs__builtin_ops__Var_658 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__Var_658, 0) = backend_libs__builtin_ops__Var_697;
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__Var_659 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__Var_659, 0) = backend_libs__builtin_ops__Var_679;
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__Var_657 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_657, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_657, 1) = ((MR_Box) (backend_libs__builtin_ops__ArithOp_663));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_657, 2) = ((MR_Box) (backend_libs__builtin_ops__Var_658));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_657, 3) = ((MR_Box) (backend_libs__builtin_ops__Var_659));
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Z_662;
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__Var_657));
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
                                          /* case "/\" */
                                          {
                                            MR_Word backend_libs__builtin_ops__Var_582;
                                            MR_Word backend_libs__builtin_ops__Var_583;
                                            MR_Word backend_libs__builtin_ops__Var_584;
                                            MR_Word backend_libs__builtin_ops__Var_585;
                                            MR_Box backend_libs__builtin_ops__Z_588;
                                            MR_Word backend_libs__builtin_ops__ArithOp_589;

                                            backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_12 == (MR_Integer) 0);
                                            if (backend_libs__builtin_ops__succeeded)
                                              {
                                                backend_libs__builtin_ops__ArithOp_589 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 39));
                                                backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__Var_678)) == (MR_mktag((MR_Integer) 1)));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  {
                                                    backend_libs__builtin_ops__Z_588 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_678, (MR_Integer) 0));
                                                    backend_libs__builtin_ops__Var_582 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_678, (MR_Integer) 1)));
                                                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__Var_582 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                    if (backend_libs__builtin_ops__succeeded)
                                                      {
                                                        {
                                                          backend_libs__builtin_ops__Var_584 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__Var_584, 0) = backend_libs__builtin_ops__Var_697;
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__Var_585 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__Var_585, 0) = backend_libs__builtin_ops__Var_679;
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__Var_583 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_583, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_583, 1) = ((MR_Box) (backend_libs__builtin_ops__ArithOp_589));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_583, 2) = ((MR_Box) (backend_libs__builtin_ops__Var_584));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_583, 3) = ((MR_Box) (backend_libs__builtin_ops__Var_585));
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Z_588;
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__Var_583));
                                                        }
                                                        backend_libs__builtin_ops__succeeded = MR_TRUE;
                                                      }
                                                  }
                                              }
                                          }
                                        }
                                        break;
                                      case (MR_Integer) 20:
                                        {
                                          /* case "unchecked_rem" */
                                          {
                                            MR_Word backend_libs__builtin_ops__Var_646;
                                            MR_Word backend_libs__builtin_ops__Var_647;
                                            MR_Word backend_libs__builtin_ops__Var_648;
                                            MR_Word backend_libs__builtin_ops__Var_649;
                                            MR_Box backend_libs__builtin_ops__Z_652;
                                            MR_Word backend_libs__builtin_ops__ArithOp_653;

                                            backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_12 == (MR_Integer) 0);
                                            if (backend_libs__builtin_ops__succeeded)
                                              {
                                                backend_libs__builtin_ops__ArithOp_653 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 38));
                                                backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__Var_678)) == (MR_mktag((MR_Integer) 1)));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  {
                                                    backend_libs__builtin_ops__Z_652 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_678, (MR_Integer) 0));
                                                    backend_libs__builtin_ops__Var_646 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_678, (MR_Integer) 1)));
                                                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__Var_646 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                    if (backend_libs__builtin_ops__succeeded)
                                                      {
                                                        {
                                                          backend_libs__builtin_ops__Var_648 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__Var_648, 0) = backend_libs__builtin_ops__Var_697;
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__Var_649 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__Var_649, 0) = backend_libs__builtin_ops__Var_679;
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__Var_647 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_647, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_647, 1) = ((MR_Box) (backend_libs__builtin_ops__ArithOp_653));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_647, 2) = ((MR_Box) (backend_libs__builtin_ops__Var_648));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_647, 3) = ((MR_Box) (backend_libs__builtin_ops__Var_649));
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Z_652;
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__Var_647));
                                                        }
                                                        backend_libs__builtin_ops__succeeded = MR_TRUE;
                                                      }
                                                  }
                                              }
                                          }
                                        }
                                        break;
                                      case (MR_Integer) 24:
                                        {
                                          /* case "unchecked_quotient" */
                                          {
                                            MR_Word backend_libs__builtin_ops__Var_636;
                                            MR_Word backend_libs__builtin_ops__Var_637;
                                            MR_Word backend_libs__builtin_ops__Var_638;
                                            MR_Word backend_libs__builtin_ops__Var_639;
                                            MR_Box backend_libs__builtin_ops__Z_642;
                                            MR_Word backend_libs__builtin_ops__ArithOp_643;

                                            backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_12 == (MR_Integer) 0);
                                            if (backend_libs__builtin_ops__succeeded)
                                              {
                                                backend_libs__builtin_ops__ArithOp_643 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 37));
                                                backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__Var_678)) == (MR_mktag((MR_Integer) 1)));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  {
                                                    backend_libs__builtin_ops__Z_642 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_678, (MR_Integer) 0));
                                                    backend_libs__builtin_ops__Var_636 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_678, (MR_Integer) 1)));
                                                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__Var_636 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                    if (backend_libs__builtin_ops__succeeded)
                                                      {
                                                        {
                                                          backend_libs__builtin_ops__Var_638 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__Var_638, 0) = backend_libs__builtin_ops__Var_697;
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__Var_639 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__Var_639, 0) = backend_libs__builtin_ops__Var_679;
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__Var_637 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_637, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_637, 1) = ((MR_Box) (backend_libs__builtin_ops__ArithOp_643));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_637, 2) = ((MR_Box) (backend_libs__builtin_ops__Var_638));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_637, 3) = ((MR_Box) (backend_libs__builtin_ops__Var_639));
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Z_642;
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__Var_637));
                                                        }
                                                        backend_libs__builtin_ops__succeeded = MR_TRUE;
                                                      }
                                                  }
                                              }
                                          }
                                        }
                                        break;
                                      case (MR_Integer) 29:
                                        {
                                          /* case "\" */
                                          {
                                            MR_Word backend_libs__builtin_ops__Var_141;
                                            MR_Word backend_libs__builtin_ops__Var_142;
                                            MR_Word backend_libs__builtin_ops__Var_143;

                                            backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_12 == (MR_Integer) 0);
                                            if (backend_libs__builtin_ops__succeeded)
                                              {
                                                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__Var_678 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  {
                                                    backend_libs__builtin_ops__Var_142 = (MR_Integer) 8;
                                                    {
                                                      backend_libs__builtin_ops__Var_143 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__Var_143, 0) = backend_libs__builtin_ops__Var_697;
                                                    }
                                                    {
                                                      backend_libs__builtin_ops__Var_141 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_141, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_141, 1) = ((MR_Box) (backend_libs__builtin_ops__Var_142));
                                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_141, 2) = ((MR_Box) (backend_libs__builtin_ops__Var_143));
                                                    }
                                                    {
                                                      backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Var_679;
                                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__Var_141));
                                                    }
                                                    backend_libs__builtin_ops__succeeded = MR_TRUE;
                                                  }
                                              }
                                          }
                                        }
                                        break;
                                      case (MR_Integer) 35:
                                        {
                                          /* case "=<" */
                                          {
                                            MR_Word backend_libs__builtin_ops__Var_592;
                                            MR_Word backend_libs__builtin_ops__Var_593;
                                            MR_Word backend_libs__builtin_ops__Var_594;
                                            MR_Word backend_libs__builtin_ops__CompareOp_597;

                                            backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_12 == (MR_Integer) 0);
                                            if (backend_libs__builtin_ops__succeeded)
                                              {
                                                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__Var_678 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  {
                                                    backend_libs__builtin_ops__CompareOp_597 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 32));
                                                    {
                                                      backend_libs__builtin_ops__Var_593 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__Var_593, 0) = backend_libs__builtin_ops__Var_697;
                                                    }
                                                    {
                                                      backend_libs__builtin_ops__Var_594 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__Var_594, 0) = backend_libs__builtin_ops__Var_679;
                                                    }
                                                    {
                                                      backend_libs__builtin_ops__Var_592 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_592, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_592, 1) = ((MR_Box) (backend_libs__builtin_ops__CompareOp_597));
                                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_592, 2) = ((MR_Box) (backend_libs__builtin_ops__Var_593));
                                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_592, 3) = ((MR_Box) (backend_libs__builtin_ops__Var_594));
                                                    }
                                                    {
                                                      backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                                      MR_hl_field(MR_mktag(2), backend_libs__builtin_ops__CodePrime_13, 0) = ((MR_Box) (backend_libs__builtin_ops__Var_592));
                                                    }
                                                    backend_libs__builtin_ops__succeeded = MR_TRUE;
                                                  }
                                              }
                                          }
                                        }
                                        break;
                                      case (MR_Integer) 42:
                                        {
                                          /* case "+" */
                                          {
                                            MR_Word backend_libs__builtin_ops__Var_126;
                                            MR_Box backend_libs__builtin_ops__Z_329;

                                            backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__Var_678)) == (MR_mktag((MR_Integer) 1)));
                                            if (backend_libs__builtin_ops__succeeded)
                                              {
                                                backend_libs__builtin_ops__Z_329 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_678, (MR_Integer) 0));
                                                backend_libs__builtin_ops__Var_126 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_678, (MR_Integer) 1)));
                                                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__Var_126 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  switch (backend_libs__builtin_ops__ProcNum_12) {
                                                    default:
                                                      backend_libs__builtin_ops__succeeded = MR_FALSE;
                                                      break;
                                                    case (MR_Integer) 0:
                                                      {
                                                        MR_Word backend_libs__builtin_ops__Var_135;
                                                        MR_Word backend_libs__builtin_ops__Var_137;
                                                        MR_Word backend_libs__builtin_ops__Var_138;

                                                        {
                                                          backend_libs__builtin_ops__Var_137 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__Var_137, 0) = backend_libs__builtin_ops__Var_697;
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__Var_138 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__Var_138, 0) = backend_libs__builtin_ops__Var_679;
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__Var_135 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_135, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_135, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 34))));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_135, 2) = ((MR_Box) (backend_libs__builtin_ops__Var_137));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_135, 3) = ((MR_Box) (backend_libs__builtin_ops__Var_138));
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Z_329;
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__Var_135));
                                                        }
                                                        backend_libs__builtin_ops__succeeded = MR_TRUE;
                                                      }
                                                      break;
                                                    case (MR_Integer) 1:
                                                      {
                                                        MR_Word backend_libs__builtin_ops__Var_131;
                                                        MR_Word backend_libs__builtin_ops__Var_133;
                                                        MR_Word backend_libs__builtin_ops__Var_134;

                                                        {
                                                          backend_libs__builtin_ops__Var_133 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__Var_133, 0) = backend_libs__builtin_ops__Z_329;
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__Var_134 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__Var_134, 0) = backend_libs__builtin_ops__Var_679;
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__Var_131 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_131, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_131, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 35))));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_131, 2) = ((MR_Box) (backend_libs__builtin_ops__Var_133));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_131, 3) = ((MR_Box) (backend_libs__builtin_ops__Var_134));
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Var_697;
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__Var_131));
                                                        }
                                                        backend_libs__builtin_ops__succeeded = MR_TRUE;
                                                      }
                                                      break;
                                                    case (MR_Integer) 2:
                                                      {
                                                        MR_Word backend_libs__builtin_ops__Var_127;
                                                        MR_Word backend_libs__builtin_ops__Var_129;
                                                        MR_Word backend_libs__builtin_ops__Var_130;

                                                        {
                                                          backend_libs__builtin_ops__Var_129 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__Var_129, 0) = backend_libs__builtin_ops__Z_329;
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__Var_130 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__Var_130, 0) = backend_libs__builtin_ops__Var_697;
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__Var_127 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_127, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_127, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 35))));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_127, 2) = ((MR_Box) (backend_libs__builtin_ops__Var_129));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_127, 3) = ((MR_Box) (backend_libs__builtin_ops__Var_130));
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Var_679;
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__Var_127));
                                                        }
                                                        backend_libs__builtin_ops__succeeded = MR_TRUE;
                                                      }
                                                      break;
                                                  }
                                              }
                                          }
                                        }
                                        break;
                                      case (MR_Integer) 43:
                                        {
                                          /* case "*" */
                                          {
                                            MR_Word backend_libs__builtin_ops__Var_105;
                                            MR_Word backend_libs__builtin_ops__Var_106;
                                            MR_Word backend_libs__builtin_ops__Var_107;
                                            MR_Word backend_libs__builtin_ops__Var_108;
                                            MR_Box backend_libs__builtin_ops__Z_335;
                                            MR_Word backend_libs__builtin_ops__ArithOp_336;

                                            backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_12 == (MR_Integer) 0);
                                            if (backend_libs__builtin_ops__succeeded)
                                              {
                                                backend_libs__builtin_ops__ArithOp_336 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 36));
                                                backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__Var_678)) == (MR_mktag((MR_Integer) 1)));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  {
                                                    backend_libs__builtin_ops__Z_335 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_678, (MR_Integer) 0));
                                                    backend_libs__builtin_ops__Var_105 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_678, (MR_Integer) 1)));
                                                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__Var_105 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                    if (backend_libs__builtin_ops__succeeded)
                                                      {
                                                        {
                                                          backend_libs__builtin_ops__Var_107 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__Var_107, 0) = backend_libs__builtin_ops__Var_697;
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__Var_108 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__Var_108, 0) = backend_libs__builtin_ops__Var_679;
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__Var_106 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_106, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_106, 1) = ((MR_Box) (backend_libs__builtin_ops__ArithOp_336));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_106, 2) = ((MR_Box) (backend_libs__builtin_ops__Var_107));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_106, 3) = ((MR_Box) (backend_libs__builtin_ops__Var_108));
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Z_335;
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__Var_106));
                                                        }
                                                        backend_libs__builtin_ops__succeeded = MR_TRUE;
                                                      }
                                                  }
                                              }
                                          }
                                        }
                                        break;
                                      case (MR_Integer) 44:
                                        {
                                          /* case "-" */
                                          {
                                            MR_Word backend_libs__builtin_ops__Var_111;
                                            MR_Box backend_libs__builtin_ops__Z_332;

                                            backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__Var_678)) == (MR_mktag((MR_Integer) 1)));
                                            if (backend_libs__builtin_ops__succeeded)
                                              {
                                                backend_libs__builtin_ops__Z_332 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_678, (MR_Integer) 0));
                                                backend_libs__builtin_ops__Var_111 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_678, (MR_Integer) 1)));
                                                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__Var_111 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  switch (backend_libs__builtin_ops__ProcNum_12) {
                                                    default:
                                                      backend_libs__builtin_ops__succeeded = MR_FALSE;
                                                      break;
                                                    case (MR_Integer) 0:
                                                      {
                                                        MR_Word backend_libs__builtin_ops__Var_120;
                                                        MR_Word backend_libs__builtin_ops__Var_122;
                                                        MR_Word backend_libs__builtin_ops__Var_123;

                                                        {
                                                          backend_libs__builtin_ops__Var_122 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__Var_122, 0) = backend_libs__builtin_ops__Var_697;
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__Var_123 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__Var_123, 0) = backend_libs__builtin_ops__Var_679;
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__Var_120 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_120, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_120, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_120, 2) = ((MR_Box) (backend_libs__builtin_ops__Var_122));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_120, 3) = ((MR_Box) (backend_libs__builtin_ops__Var_123));
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Z_332;
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__Var_120));
                                                        }
                                                        backend_libs__builtin_ops__succeeded = MR_TRUE;
                                                      }
                                                      break;
                                                    case (MR_Integer) 1:
                                                      {
                                                        MR_Word backend_libs__builtin_ops__Var_116;
                                                        MR_Word backend_libs__builtin_ops__Var_118;
                                                        MR_Word backend_libs__builtin_ops__Var_119;

                                                        {
                                                          backend_libs__builtin_ops__Var_118 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__Var_118, 0) = backend_libs__builtin_ops__Var_679;
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__Var_119 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__Var_119, 0) = backend_libs__builtin_ops__Z_332;
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__Var_116 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_116, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_116, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 34))));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_116, 2) = ((MR_Box) (backend_libs__builtin_ops__Var_118));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_116, 3) = ((MR_Box) (backend_libs__builtin_ops__Var_119));
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Var_697;
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__Var_116));
                                                        }
                                                        backend_libs__builtin_ops__succeeded = MR_TRUE;
                                                      }
                                                      break;
                                                    case (MR_Integer) 2:
                                                      {
                                                        MR_Word backend_libs__builtin_ops__Var_112;
                                                        MR_Word backend_libs__builtin_ops__Var_114;
                                                        MR_Word backend_libs__builtin_ops__Var_115;

                                                        {
                                                          backend_libs__builtin_ops__Var_114 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__Var_114, 0) = backend_libs__builtin_ops__Var_697;
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__Var_115 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__Var_115, 0) = backend_libs__builtin_ops__Z_332;
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__Var_112 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_112, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_112, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 35))));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_112, 2) = ((MR_Box) (backend_libs__builtin_ops__Var_114));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_112, 3) = ((MR_Box) (backend_libs__builtin_ops__Var_115));
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Var_679;
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__Var_112));
                                                        }
                                                        backend_libs__builtin_ops__succeeded = MR_TRUE;
                                                      }
                                                      break;
                                                  }
                                              }
                                          }
                                        }
                                        break;
                                      case (MR_Integer) 49:
                                        {
                                          /* case "\/" */
                                          {
                                            MR_Word backend_libs__builtin_ops__Var_616;
                                            MR_Word backend_libs__builtin_ops__Var_617;
                                            MR_Word backend_libs__builtin_ops__Var_618;
                                            MR_Word backend_libs__builtin_ops__Var_619;
                                            MR_Box backend_libs__builtin_ops__Z_622;
                                            MR_Word backend_libs__builtin_ops__ArithOp_623;

                                            backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_12 == (MR_Integer) 0);
                                            if (backend_libs__builtin_ops__succeeded)
                                              {
                                                backend_libs__builtin_ops__ArithOp_623 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 40));
                                                backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__Var_678)) == (MR_mktag((MR_Integer) 1)));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  {
                                                    backend_libs__builtin_ops__Z_622 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_678, (MR_Integer) 0));
                                                    backend_libs__builtin_ops__Var_616 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_678, (MR_Integer) 1)));
                                                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__Var_616 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                    if (backend_libs__builtin_ops__succeeded)
                                                      {
                                                        {
                                                          backend_libs__builtin_ops__Var_618 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__Var_618, 0) = backend_libs__builtin_ops__Var_697;
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__Var_619 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__Var_619, 0) = backend_libs__builtin_ops__Var_679;
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__Var_617 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_617, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_617, 1) = ((MR_Box) (backend_libs__builtin_ops__ArithOp_623));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_617, 2) = ((MR_Box) (backend_libs__builtin_ops__Var_618));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_617, 3) = ((MR_Box) (backend_libs__builtin_ops__Var_619));
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Z_622;
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__Var_617));
                                                        }
                                                        backend_libs__builtin_ops__succeeded = MR_TRUE;
                                                      }
                                                  }
                                              }
                                          }
                                        }
                                        break;
                                      case (MR_Integer) 51:
                                        {
                                          /* case "unchecked_left_shift" */
                                          {
                                            MR_Word backend_libs__builtin_ops__Var_626;
                                            MR_Word backend_libs__builtin_ops__Var_627;
                                            MR_Word backend_libs__builtin_ops__Var_628;
                                            MR_Word backend_libs__builtin_ops__Var_629;
                                            MR_Box backend_libs__builtin_ops__Z_632;
                                            MR_Word backend_libs__builtin_ops__ArithOp_633;

                                            backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_12 == (MR_Integer) 0);
                                            if (backend_libs__builtin_ops__succeeded)
                                              {
                                                backend_libs__builtin_ops__ArithOp_633 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 42));
                                                backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__Var_678)) == (MR_mktag((MR_Integer) 1)));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  {
                                                    backend_libs__builtin_ops__Z_632 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_678, (MR_Integer) 0));
                                                    backend_libs__builtin_ops__Var_626 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_678, (MR_Integer) 1)));
                                                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__Var_626 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                    if (backend_libs__builtin_ops__succeeded)
                                                      {
                                                        {
                                                          backend_libs__builtin_ops__Var_628 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__Var_628, 0) = backend_libs__builtin_ops__Var_697;
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__Var_629 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__Var_629, 0) = backend_libs__builtin_ops__Var_679;
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__Var_627 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_627, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_627, 1) = ((MR_Box) (backend_libs__builtin_ops__ArithOp_633));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_627, 2) = ((MR_Box) (backend_libs__builtin_ops__Var_628));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_627, 3) = ((MR_Box) (backend_libs__builtin_ops__Var_629));
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Z_632;
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__Var_627));
                                                        }
                                                        backend_libs__builtin_ops__succeeded = MR_TRUE;
                                                      }
                                                  }
                                              }
                                          }
                                        }
                                        break;
                                      case (MR_Integer) 61:
                                        {
                                          /* case "<" */
                                          {
                                            MR_Word backend_libs__builtin_ops__Var_85;
                                            MR_Word backend_libs__builtin_ops__Var_86;
                                            MR_Word backend_libs__builtin_ops__Var_87;
                                            MR_Word backend_libs__builtin_ops__CompareOp_342;

                                            backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_12 == (MR_Integer) 0);
                                            if (backend_libs__builtin_ops__succeeded)
                                              {
                                                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__Var_678 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  {
                                                    backend_libs__builtin_ops__CompareOp_342 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 30));
                                                    {
                                                      backend_libs__builtin_ops__Var_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__Var_86, 0) = backend_libs__builtin_ops__Var_697;
                                                    }
                                                    {
                                                      backend_libs__builtin_ops__Var_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__Var_87, 0) = backend_libs__builtin_ops__Var_679;
                                                    }
                                                    {
                                                      backend_libs__builtin_ops__Var_85 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_85, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_85, 1) = ((MR_Box) (backend_libs__builtin_ops__CompareOp_342));
                                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_85, 2) = ((MR_Box) (backend_libs__builtin_ops__Var_86));
                                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_85, 3) = ((MR_Box) (backend_libs__builtin_ops__Var_87));
                                                    }
                                                    {
                                                      backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                                      MR_hl_field(MR_mktag(2), backend_libs__builtin_ops__CodePrime_13, 0) = ((MR_Box) (backend_libs__builtin_ops__Var_85));
                                                    }
                                                    backend_libs__builtin_ops__succeeded = MR_TRUE;
                                                  }
                                              }
                                          }
                                        }
                                        break;
                                      case (MR_Integer) 63:
                                        {
                                          /* case ">" */
                                          {
                                            MR_Word backend_libs__builtin_ops__Var_600;
                                            MR_Word backend_libs__builtin_ops__Var_601;
                                            MR_Word backend_libs__builtin_ops__Var_602;
                                            MR_Word backend_libs__builtin_ops__CompareOp_605;

                                            backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_12 == (MR_Integer) 0);
                                            if (backend_libs__builtin_ops__succeeded)
                                              {
                                                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__Var_678 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  {
                                                    backend_libs__builtin_ops__CompareOp_605 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 31));
                                                    {
                                                      backend_libs__builtin_ops__Var_601 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__Var_601, 0) = backend_libs__builtin_ops__Var_697;
                                                    }
                                                    {
                                                      backend_libs__builtin_ops__Var_602 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__Var_602, 0) = backend_libs__builtin_ops__Var_679;
                                                    }
                                                    {
                                                      backend_libs__builtin_ops__Var_600 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_600, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_600, 1) = ((MR_Box) (backend_libs__builtin_ops__CompareOp_605));
                                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_600, 2) = ((MR_Box) (backend_libs__builtin_ops__Var_601));
                                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__Var_600, 3) = ((MR_Box) (backend_libs__builtin_ops__Var_602));
                                                    }
                                                    {
                                                      backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                                      MR_hl_field(MR_mktag(2), backend_libs__builtin_ops__CodePrime_13, 0) = ((MR_Box) (backend_libs__builtin_ops__Var_600));
                                                    }
                                                    backend_libs__builtin_ops__succeeded = MR_TRUE;
                                                  }
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
        MR_String backend_libs__builtin_ops__Var_25;
        MR_String backend_libs__builtin_ops__Var_33;
        MR_String backend_libs__builtin_ops__Var_34;

        {
          mercury__list__length_2_p_0(backend_libs__builtin_ops__TypeInfo_for_T_24, backend_libs__builtin_ops__Args_9, &backend_libs__builtin_ops__Arity_14);
        }
        {
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &backend_libs__builtin_ops_scalar_common_4[2], backend_libs__builtin_ops__Arity_14, &backend_libs__builtin_ops__Var_25);
        }
        {
          backend_libs__builtin_ops__Var_33 = mercury__string__f_43_43_2_f_0((MR_String) "/", backend_libs__builtin_ops__Var_25);
        }
        {
          backend_libs__builtin_ops__Var_34 = mercury__string__f_43_43_2_f_0(backend_libs__builtin_ops__PredName_7, backend_libs__builtin_ops__Var_33);
        }
        {
          backend_libs__builtin_ops__Msg_15 = mercury__string__f_43_43_2_f_0((MR_String) "unknown builtin ", backend_libs__builtin_ops__Var_34);
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
    MR_Word backend_libs__builtin_ops__Var_673;
    MR_Box backend_libs__builtin_ops__Var_674;
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
            backend_libs__builtin_ops__Var_674 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Args_8, (MR_Integer) 0));
            backend_libs__builtin_ops__Var_673 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Args_8, (MR_Integer) 1)));
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
                            MR_Word backend_libs__builtin_ops__Var_234;
                            MR_Box backend_libs__builtin_ops__Y_19;

                            backend_libs__builtin_ops__succeeded = (strcmp(backend_libs__builtin_ops__PredName_6, (MR_String) "unsafe_promise_unique") == 0);
                            if (backend_libs__builtin_ops__succeeded)
                              {
                                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_10 == (MR_Integer) 0);
                                if (backend_libs__builtin_ops__succeeded)
                                  {
                                    backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__Var_673)) == (MR_mktag((MR_Integer) 1)));
                                    if (backend_libs__builtin_ops__succeeded)
                                      {
                                        backend_libs__builtin_ops__Y_19 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_673, (MR_Integer) 0));
                                        backend_libs__builtin_ops__Var_234 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_673, (MR_Integer) 1)));
                                        backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__Var_234 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
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
                            MR_Word backend_libs__builtin_ops__Var_683;
                            MR_Box backend_libs__builtin_ops__Var_684;
                            MR_Integer backend_libs__builtin_ops__slot_9;
                            MR_String backend_libs__builtin_ops__str_10;

                            backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_10 == (MR_Integer) 0);
                            if (backend_libs__builtin_ops__succeeded)
                              {
                                backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__Var_673)) == (MR_mktag((MR_Integer) 1)));
                                if (backend_libs__builtin_ops__succeeded)
                                  {
                                    backend_libs__builtin_ops__Var_684 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_673, (MR_Integer) 0));
                                    backend_libs__builtin_ops__Var_683 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_673, (MR_Integer) 1)));
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
                                              backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__Var_683 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                            }
                                            break;
                                          case (MR_Integer) 3:
                                            {
                                              /* case "=<" */
                                              backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__Var_683 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                            }
                                            break;
                                          case (MR_Integer) 8:
                                            {
                                              /* case "unchecked_quotient" */
                                              {
                                                MR_Word backend_libs__builtin_ops__Var_395;
                                                MR_Box backend_libs__builtin_ops__Z_401;

                                                backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__Var_683)) == (MR_mktag((MR_Integer) 1)));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  {
                                                    backend_libs__builtin_ops__Z_401 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_683, (MR_Integer) 0));
                                                    backend_libs__builtin_ops__Var_395 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_683, (MR_Integer) 1)));
                                                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__Var_395 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                  }
                                              }
                                            }
                                            break;
                                          case (MR_Integer) 10:
                                            {
                                              /* case "+" */
                                              if ((backend_libs__builtin_ops__Var_683 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                                                backend_libs__builtin_ops__succeeded = MR_TRUE;
                                              else
                                                {
                                                  MR_Word backend_libs__builtin_ops__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_683, (MR_Integer) 1)));
                                                  MR_Box backend_libs__builtin_ops__Z_334 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_683, (MR_Integer) 0));

                                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__Var_52 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                }
                                            }
                                            break;
                                          case (MR_Integer) 11:
                                            {
                                              /* case "*" */
                                              {
                                                MR_Word backend_libs__builtin_ops__Var_32;
                                                MR_Box backend_libs__builtin_ops__Z_354;

                                                backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__Var_683)) == (MR_mktag((MR_Integer) 1)));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  {
                                                    backend_libs__builtin_ops__Z_354 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_683, (MR_Integer) 0));
                                                    backend_libs__builtin_ops__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_683, (MR_Integer) 1)));
                                                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__Var_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                  }
                                              }
                                            }
                                            break;
                                          case (MR_Integer) 12:
                                            {
                                              /* case "-" */
                                              if ((backend_libs__builtin_ops__Var_683 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                                                backend_libs__builtin_ops__succeeded = MR_TRUE;
                                              else
                                                {
                                                  MR_Word backend_libs__builtin_ops__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_683, (MR_Integer) 1)));
                                                  MR_Box backend_libs__builtin_ops__Z_345 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_683, (MR_Integer) 0));

                                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__Var_38 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                }
                                            }
                                            break;
                                          case (MR_Integer) 13:
                                            {
                                              /* case "<" */
                                              backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__Var_683 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                            }
                                            break;
                                          case (MR_Integer) 15:
                                            {
                                              /* case ">" */
                                              backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__Var_683 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
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
                            MR_Word backend_libs__builtin_ops__Var_685;
                            MR_Box backend_libs__builtin_ops__Var_686;

                            backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__Var_673)) == (MR_mktag((MR_Integer) 1)));
                            if (backend_libs__builtin_ops__succeeded)
                              {
                                backend_libs__builtin_ops__Var_686 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_673, (MR_Integer) 0));
                                backend_libs__builtin_ops__Var_685 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_673, (MR_Integer) 1)));
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
                                          MR_Word backend_libs__builtin_ops__Var_133;
                                          MR_Box backend_libs__builtin_ops__Z_288;

                                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_10 == (MR_Integer) 0);
                                          if (backend_libs__builtin_ops__succeeded)
                                            {
                                              backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__Var_685)) == (MR_mktag((MR_Integer) 1)));
                                              if (backend_libs__builtin_ops__succeeded)
                                                {
                                                  backend_libs__builtin_ops__Z_288 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_685, (MR_Integer) 0));
                                                  backend_libs__builtin_ops__Var_133 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_685, (MR_Integer) 1)));
                                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__Var_133 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
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
                                            if ((backend_libs__builtin_ops__Var_685 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                                              backend_libs__builtin_ops__succeeded = MR_TRUE;
                                            else
                                              {
                                                MR_Word backend_libs__builtin_ops__Var_179 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_685, (MR_Integer) 1)));
                                                MR_Box backend_libs__builtin_ops__Z_263 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_685, (MR_Integer) 0));

                                                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__Var_179 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                              }
                                            break;
                                          case (MR_Integer) 1:
                                            {
                                              MR_Word backend_libs__builtin_ops__Var_405;
                                              MR_Box backend_libs__builtin_ops__Z_408;

                                              backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__Var_685)) == (MR_mktag((MR_Integer) 1)));
                                              if (backend_libs__builtin_ops__succeeded)
                                                {
                                                  backend_libs__builtin_ops__Z_408 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_685, (MR_Integer) 0));
                                                  backend_libs__builtin_ops__Var_405 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_685, (MR_Integer) 1)));
                                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__Var_405 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                }
                                            }
                                            break;
                                          case (MR_Integer) 2:
                                            {
                                              MR_Word backend_libs__builtin_ops__Var_411;
                                              MR_Box backend_libs__builtin_ops__Z_414;

                                              backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__Var_685)) == (MR_mktag((MR_Integer) 1)));
                                              if (backend_libs__builtin_ops__succeeded)
                                                {
                                                  backend_libs__builtin_ops__Z_414 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_685, (MR_Integer) 0));
                                                  backend_libs__builtin_ops__Var_411 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_685, (MR_Integer) 1)));
                                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__Var_411 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
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
                                            if ((backend_libs__builtin_ops__Var_685 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                                              backend_libs__builtin_ops__succeeded = MR_TRUE;
                                            else
                                              {
                                                MR_Word backend_libs__builtin_ops__Var_161 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_685, (MR_Integer) 1)));
                                                MR_Box backend_libs__builtin_ops__Z_274 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_685, (MR_Integer) 0));

                                                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__Var_161 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                              }
                                            break;
                                          case (MR_Integer) 1:
                                            {
                                              MR_Word backend_libs__builtin_ops__Var_417;
                                              MR_Box backend_libs__builtin_ops__Z_420;

                                              backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__Var_685)) == (MR_mktag((MR_Integer) 1)));
                                              if (backend_libs__builtin_ops__succeeded)
                                                {
                                                  backend_libs__builtin_ops__Z_420 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_685, (MR_Integer) 0));
                                                  backend_libs__builtin_ops__Var_417 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_685, (MR_Integer) 1)));
                                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__Var_417 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                }
                                            }
                                            break;
                                          case (MR_Integer) 2:
                                            {
                                              MR_Word backend_libs__builtin_ops__Var_423;
                                              MR_Box backend_libs__builtin_ops__Z_426;

                                              backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__Var_685)) == (MR_mktag((MR_Integer) 1)));
                                              if (backend_libs__builtin_ops__succeeded)
                                                {
                                                  backend_libs__builtin_ops__Z_426 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_685, (MR_Integer) 0));
                                                  backend_libs__builtin_ops__Var_423 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_685, (MR_Integer) 1)));
                                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__Var_423 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
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
                                          MR_Word backend_libs__builtin_ops__Var_430;
                                          MR_Box backend_libs__builtin_ops__Z_436;

                                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_10 == (MR_Integer) 0);
                                          if (backend_libs__builtin_ops__succeeded)
                                            {
                                              backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__Var_685)) == (MR_mktag((MR_Integer) 1)));
                                              if (backend_libs__builtin_ops__succeeded)
                                                {
                                                  backend_libs__builtin_ops__Z_436 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_685, (MR_Integer) 0));
                                                  backend_libs__builtin_ops__Var_430 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_685, (MR_Integer) 1)));
                                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__Var_430 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
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
                                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__Var_685 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                      }
                                      break;
                                    case (MR_Integer) 5:
                                      {
                                        /* case "=<" */
                                        backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_10 == (MR_Integer) 0);
                                        if (backend_libs__builtin_ops__succeeded)
                                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__Var_685 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                      }
                                      break;
                                    case (MR_Integer) 6:
                                      {
                                        /* case ">" */
                                        backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_10 == (MR_Integer) 0);
                                        if (backend_libs__builtin_ops__succeeded)
                                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__Var_685 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                      }
                                      break;
                                    case (MR_Integer) 7:
                                      {
                                        /* case ">=" */
                                        backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_10 == (MR_Integer) 0);
                                        if (backend_libs__builtin_ops__succeeded)
                                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__Var_685 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                      }
                                      break;
                                    case (MR_Integer) 8:
                                      {
                                        /* case "\" */
                                        backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_10 == (MR_Integer) 0);
                                        if (backend_libs__builtin_ops__succeeded)
                                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__Var_685 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                      }
                                      break;
                                    case (MR_Integer) 9:
                                      {
                                        /* case "\/" */
                                        {
                                          MR_Word backend_libs__builtin_ops__Var_464;
                                          MR_Box backend_libs__builtin_ops__Z_470;

                                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_10 == (MR_Integer) 0);
                                          if (backend_libs__builtin_ops__succeeded)
                                            {
                                              backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__Var_685)) == (MR_mktag((MR_Integer) 1)));
                                              if (backend_libs__builtin_ops__succeeded)
                                                {
                                                  backend_libs__builtin_ops__Z_470 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_685, (MR_Integer) 0));
                                                  backend_libs__builtin_ops__Var_464 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_685, (MR_Integer) 1)));
                                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__Var_464 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                }
                                            }
                                        }
                                      }
                                      break;
                                    case (MR_Integer) 10:
                                      {
                                        /* case "minus" */
                                        {
                                          MR_Word backend_libs__builtin_ops__Var_474;
                                          MR_Box backend_libs__builtin_ops__Z_480;

                                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_10 == (MR_Integer) 0);
                                          if (backend_libs__builtin_ops__succeeded)
                                            {
                                              backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__Var_685)) == (MR_mktag((MR_Integer) 1)));
                                              if (backend_libs__builtin_ops__succeeded)
                                                {
                                                  backend_libs__builtin_ops__Z_480 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_685, (MR_Integer) 0));
                                                  backend_libs__builtin_ops__Var_474 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_685, (MR_Integer) 1)));
                                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__Var_474 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                }
                                            }
                                        }
                                      }
                                      break;
                                    case (MR_Integer) 11:
                                      {
                                        /* case "plus" */
                                        {
                                          MR_Word backend_libs__builtin_ops__Var_484;
                                          MR_Box backend_libs__builtin_ops__Z_490;

                                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_10 == (MR_Integer) 0);
                                          if (backend_libs__builtin_ops__succeeded)
                                            {
                                              backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__Var_685)) == (MR_mktag((MR_Integer) 1)));
                                              if (backend_libs__builtin_ops__succeeded)
                                                {
                                                  backend_libs__builtin_ops__Z_490 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_685, (MR_Integer) 0));
                                                  backend_libs__builtin_ops__Var_484 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_685, (MR_Integer) 1)));
                                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__Var_484 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                }
                                            }
                                        }
                                      }
                                      break;
                                    case (MR_Integer) 12:
                                      {
                                        /* case "times" */
                                        {
                                          MR_Word backend_libs__builtin_ops__Var_494;
                                          MR_Box backend_libs__builtin_ops__Z_500;

                                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_10 == (MR_Integer) 0);
                                          if (backend_libs__builtin_ops__succeeded)
                                            {
                                              backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__Var_685)) == (MR_mktag((MR_Integer) 1)));
                                              if (backend_libs__builtin_ops__succeeded)
                                                {
                                                  backend_libs__builtin_ops__Z_500 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_685, (MR_Integer) 0));
                                                  backend_libs__builtin_ops__Var_494 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_685, (MR_Integer) 1)));
                                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__Var_494 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                }
                                            }
                                        }
                                      }
                                      break;
                                    case (MR_Integer) 13:
                                      {
                                        /* case "unchecked_left_shift" */
                                        {
                                          MR_Word backend_libs__builtin_ops__Var_504;
                                          MR_Box backend_libs__builtin_ops__Z_510;

                                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_10 == (MR_Integer) 0);
                                          if (backend_libs__builtin_ops__succeeded)
                                            {
                                              backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__Var_685)) == (MR_mktag((MR_Integer) 1)));
                                              if (backend_libs__builtin_ops__succeeded)
                                                {
                                                  backend_libs__builtin_ops__Z_510 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_685, (MR_Integer) 0));
                                                  backend_libs__builtin_ops__Var_504 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_685, (MR_Integer) 1)));
                                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__Var_504 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                }
                                            }
                                        }
                                      }
                                      break;
                                    case (MR_Integer) 14:
                                      {
                                        /* case "unchecked_quotient" */
                                        {
                                          MR_Word backend_libs__builtin_ops__Var_514;
                                          MR_Box backend_libs__builtin_ops__Z_520;

                                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_10 == (MR_Integer) 0);
                                          if (backend_libs__builtin_ops__succeeded)
                                            {
                                              backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__Var_685)) == (MR_mktag((MR_Integer) 1)));
                                              if (backend_libs__builtin_ops__succeeded)
                                                {
                                                  backend_libs__builtin_ops__Z_520 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_685, (MR_Integer) 0));
                                                  backend_libs__builtin_ops__Var_514 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_685, (MR_Integer) 1)));
                                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__Var_514 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                }
                                            }
                                        }
                                      }
                                      break;
                                    case (MR_Integer) 15:
                                      {
                                        /* case "unchecked_rem" */
                                        {
                                          MR_Word backend_libs__builtin_ops__Var_524;
                                          MR_Box backend_libs__builtin_ops__Z_530;

                                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_10 == (MR_Integer) 0);
                                          if (backend_libs__builtin_ops__succeeded)
                                            {
                                              backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__Var_685)) == (MR_mktag((MR_Integer) 1)));
                                              if (backend_libs__builtin_ops__succeeded)
                                                {
                                                  backend_libs__builtin_ops__Z_530 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_685, (MR_Integer) 0));
                                                  backend_libs__builtin_ops__Var_524 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_685, (MR_Integer) 1)));
                                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__Var_524 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                }
                                            }
                                        }
                                      }
                                      break;
                                    case (MR_Integer) 16:
                                      {
                                        /* case "unchecked_right_shift" */
                                        {
                                          MR_Word backend_libs__builtin_ops__Var_534;
                                          MR_Box backend_libs__builtin_ops__Z_540;

                                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_10 == (MR_Integer) 0);
                                          if (backend_libs__builtin_ops__succeeded)
                                            {
                                              backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__Var_685)) == (MR_mktag((MR_Integer) 1)));
                                              if (backend_libs__builtin_ops__succeeded)
                                                {
                                                  backend_libs__builtin_ops__Z_540 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_685, (MR_Integer) 0));
                                                  backend_libs__builtin_ops__Var_534 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_685, (MR_Integer) 1)));
                                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__Var_534 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                }
                                            }
                                        }
                                      }
                                      break;
                                    case (MR_Integer) 17:
                                      {
                                        /* case "xor" */
                                        {
                                          MR_Word backend_libs__builtin_ops__Var_139;
                                          MR_Box backend_libs__builtin_ops__Z_285;

                                          backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__Var_685)) == (MR_mktag((MR_Integer) 1)));
                                          if (backend_libs__builtin_ops__succeeded)
                                            {
                                              backend_libs__builtin_ops__Z_285 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_685, (MR_Integer) 0));
                                              backend_libs__builtin_ops__Var_139 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_685, (MR_Integer) 1)));
                                              backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__Var_139 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
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
                              backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__Var_673 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
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
                                                MR_Word backend_libs__builtin_ops__Var_671;
                                                MR_Box backend_libs__builtin_ops__Var_672;

                                                backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__Var_673)) == (MR_mktag((MR_Integer) 1)));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  {
                                                    backend_libs__builtin_ops__Var_672 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_673, (MR_Integer) 0));
                                                    backend_libs__builtin_ops__Var_671 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_673, (MR_Integer) 1)));
                                                    if ((backend_libs__builtin_ops__Var_671 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                                                      backend_libs__builtin_ops__succeeded = MR_TRUE;
                                                    else
                                                      {
                                                        MR_Word backend_libs__builtin_ops__Var_201 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_671, (MR_Integer) 1)));
                                                        MR_Box backend_libs__builtin_ops__Y_252 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_671, (MR_Integer) 0));

                                                        backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__Var_201 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                      }
                                                  }
                                              }
                                            }
                                            break;
                                          case (MR_Integer) 2:
                                            {
                                              /* case "unsafe_type_cast" */
                                              {
                                                MR_Word backend_libs__builtin_ops__Var_219;
                                                MR_Box backend_libs__builtin_ops__Y_245;

                                                backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__Var_673)) == (MR_mktag((MR_Integer) 1)));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  {
                                                    backend_libs__builtin_ops__Y_245 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_673, (MR_Integer) 0));
                                                    backend_libs__builtin_ops__Var_219 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_673, (MR_Integer) 1)));
                                                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__Var_219 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                  }
                                              }
                                            }
                                            break;
                                          case (MR_Integer) 3:
                                            {
                                              /* case "trace_get_io_state" */
                                              backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__Var_673 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                            }
                                            break;
                                          case (MR_Integer) 9:
                                            {
                                              /* case "builtin_int_gt" */
                                              {
                                                MR_Word backend_libs__builtin_ops__Var_214;
                                                MR_Box backend_libs__builtin_ops__Y_247;

                                                backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__Var_673)) == (MR_mktag((MR_Integer) 1)));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  {
                                                    backend_libs__builtin_ops__Y_247 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_673, (MR_Integer) 0));
                                                    backend_libs__builtin_ops__Var_214 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_673, (MR_Integer) 1)));
                                                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__Var_214 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                  }
                                              }
                                            }
                                            break;
                                          case (MR_Integer) 14:
                                            {
                                              /* case "builtin_int_lt" */
                                              {
                                                MR_Word backend_libs__builtin_ops__Var_551;
                                                MR_Box backend_libs__builtin_ops__Y_556;

                                                backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__Var_673)) == (MR_mktag((MR_Integer) 1)));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  {
                                                    backend_libs__builtin_ops__Y_556 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_673, (MR_Integer) 0));
                                                    backend_libs__builtin_ops__Var_551 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_673, (MR_Integer) 1)));
                                                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__Var_551 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                  }
                                              }
                                            }
                                            break;
                                          case (MR_Integer) 17:
                                          case (MR_Integer) 21:
                                            {
                                              /* case "store_at_ref", "store_at_ref_impure" */
                                              {
                                                MR_Word backend_libs__builtin_ops__Var_222;
                                                MR_Box backend_libs__builtin_ops__Y_243;

                                                backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__Var_673)) == (MR_mktag((MR_Integer) 1)));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  {
                                                    backend_libs__builtin_ops__Y_243 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_673, (MR_Integer) 0));
                                                    backend_libs__builtin_ops__Var_222 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_673, (MR_Integer) 1)));
                                                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__Var_222 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                  }
                                              }
                                            }
                                            break;
                                          case (MR_Integer) 27:
                                            {
                                              /* case "builtin_compound_eq" */
                                              {
                                                MR_Word backend_libs__builtin_ops__Var_209;
                                                MR_Box backend_libs__builtin_ops__Y_249;

                                                backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__Var_673)) == (MR_mktag((MR_Integer) 1)));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  {
                                                    backend_libs__builtin_ops__Y_249 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_673, (MR_Integer) 0));
                                                    backend_libs__builtin_ops__Var_209 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_673, (MR_Integer) 1)));
                                                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__Var_209 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                  }
                                              }
                                            }
                                            break;
                                          case (MR_Integer) 29:
                                            {
                                              /* case "builtin_compound_lt" */
                                              {
                                                MR_Word backend_libs__builtin_ops__Var_542;
                                                MR_Box backend_libs__builtin_ops__Y_547;

                                                backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__Var_673)) == (MR_mktag((MR_Integer) 1)));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  {
                                                    backend_libs__builtin_ops__Y_547 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_673, (MR_Integer) 0));
                                                    backend_libs__builtin_ops__Var_542 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_673, (MR_Integer) 1)));
                                                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__Var_542 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                  }
                                              }
                                            }
                                            break;
                                          case (MR_Integer) 31:
                                            {
                                              /* case "trace_set_io_state" */
                                              backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__Var_673 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
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
                            MR_Word backend_libs__builtin_ops__Var_193;
                            MR_Word backend_libs__builtin_ops__Var_194;
                            MR_Box backend_libs__builtin_ops__Y_260;
                            MR_Box backend_libs__builtin_ops__Z_23;

                            backend_libs__builtin_ops__succeeded = (strcmp(backend_libs__builtin_ops__PredName_6, (MR_String) "term_size_plus") == 0);
                            if (backend_libs__builtin_ops__succeeded)
                              {
                                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_10 == (MR_Integer) 0);
                                if (backend_libs__builtin_ops__succeeded)
                                  {
                                    backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__Var_673)) == (MR_mktag((MR_Integer) 1)));
                                    if (backend_libs__builtin_ops__succeeded)
                                      {
                                        backend_libs__builtin_ops__Y_260 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_673, (MR_Integer) 0));
                                        backend_libs__builtin_ops__Var_193 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_673, (MR_Integer) 1)));
                                        backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__Var_193)) == (MR_mktag((MR_Integer) 1)));
                                        if (backend_libs__builtin_ops__succeeded)
                                          {
                                            backend_libs__builtin_ops__Z_23 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_193, (MR_Integer) 0));
                                            backend_libs__builtin_ops__Var_194 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_193, (MR_Integer) 1)));
                                            backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__Var_194 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
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
                            MR_Word backend_libs__builtin_ops__Var_655;
                            MR_Box backend_libs__builtin_ops__Var_656;
                            MR_Integer backend_libs__builtin_ops__slot_4;
                            MR_String backend_libs__builtin_ops__str_5;

                            backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__Var_673)) == (MR_mktag((MR_Integer) 1)));
                            if (backend_libs__builtin_ops__succeeded)
                              {
                                backend_libs__builtin_ops__Var_656 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_673, (MR_Integer) 0));
                                backend_libs__builtin_ops__Var_655 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_673, (MR_Integer) 1)));
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
                                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_10 == (MR_Integer) 0);
                                          if (backend_libs__builtin_ops__succeeded)
                                            backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__Var_655 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                        }
                                        break;
                                      case (MR_Integer) 6:
                                        {
                                          /* case "xor" */
                                          {
                                            MR_Word backend_libs__builtin_ops__Var_67;
                                            MR_Box backend_libs__builtin_ops__Z_316;

                                            backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__Var_655)) == (MR_mktag((MR_Integer) 1)));
                                            if (backend_libs__builtin_ops__succeeded)
                                              {
                                                backend_libs__builtin_ops__Z_316 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_655, (MR_Integer) 0));
                                                backend_libs__builtin_ops__Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_655, (MR_Integer) 1)));
                                                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__Var_67 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
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
                                      case (MR_Integer) 9:
                                        {
                                          /* case "unchecked_right_shift" */
                                          {
                                            MR_Word backend_libs__builtin_ops__Var_633;
                                            MR_Box backend_libs__builtin_ops__Z_639;

                                            backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_10 == (MR_Integer) 0);
                                            if (backend_libs__builtin_ops__succeeded)
                                              {
                                                backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__Var_655)) == (MR_mktag((MR_Integer) 1)));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  {
                                                    backend_libs__builtin_ops__Z_639 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_655, (MR_Integer) 0));
                                                    backend_libs__builtin_ops__Var_633 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_655, (MR_Integer) 1)));
                                                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__Var_633 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                  }
                                              }
                                          }
                                        }
                                        break;
                                      case (MR_Integer) 17:
                                        {
                                          /* case "/\" */
                                          {
                                            MR_Word backend_libs__builtin_ops__Var_559;
                                            MR_Box backend_libs__builtin_ops__Z_565;

                                            backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_10 == (MR_Integer) 0);
                                            if (backend_libs__builtin_ops__succeeded)
                                              {
                                                backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__Var_655)) == (MR_mktag((MR_Integer) 1)));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  {
                                                    backend_libs__builtin_ops__Z_565 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_655, (MR_Integer) 0));
                                                    backend_libs__builtin_ops__Var_559 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_655, (MR_Integer) 1)));
                                                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__Var_559 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                  }
                                              }
                                          }
                                        }
                                        break;
                                      case (MR_Integer) 20:
                                        {
                                          /* case "unchecked_rem" */
                                          {
                                            MR_Word backend_libs__builtin_ops__Var_623;
                                            MR_Box backend_libs__builtin_ops__Z_629;

                                            backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_10 == (MR_Integer) 0);
                                            if (backend_libs__builtin_ops__succeeded)
                                              {
                                                backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__Var_655)) == (MR_mktag((MR_Integer) 1)));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  {
                                                    backend_libs__builtin_ops__Z_629 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_655, (MR_Integer) 0));
                                                    backend_libs__builtin_ops__Var_623 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_655, (MR_Integer) 1)));
                                                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__Var_623 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                  }
                                              }
                                          }
                                        }
                                        break;
                                      case (MR_Integer) 24:
                                        {
                                          /* case "unchecked_quotient" */
                                          {
                                            MR_Word backend_libs__builtin_ops__Var_613;
                                            MR_Box backend_libs__builtin_ops__Z_619;

                                            backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_10 == (MR_Integer) 0);
                                            if (backend_libs__builtin_ops__succeeded)
                                              {
                                                backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__Var_655)) == (MR_mktag((MR_Integer) 1)));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  {
                                                    backend_libs__builtin_ops__Z_619 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_655, (MR_Integer) 0));
                                                    backend_libs__builtin_ops__Var_613 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_655, (MR_Integer) 1)));
                                                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__Var_613 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                  }
                                              }
                                          }
                                        }
                                        break;
                                      case (MR_Integer) 29:
                                        {
                                          /* case "\" */
                                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_10 == (MR_Integer) 0);
                                          if (backend_libs__builtin_ops__succeeded)
                                            backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__Var_655 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                        }
                                        break;
                                      case (MR_Integer) 35:
                                        {
                                          /* case "=<" */
                                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_10 == (MR_Integer) 0);
                                          if (backend_libs__builtin_ops__succeeded)
                                            backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__Var_655 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                        }
                                        break;
                                      case (MR_Integer) 42:
                                        {
                                          /* case "+" */
                                          {
                                            MR_Word backend_libs__builtin_ops__Var_103;
                                            MR_Box backend_libs__builtin_ops__Z_306;

                                            backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__Var_655)) == (MR_mktag((MR_Integer) 1)));
                                            if (backend_libs__builtin_ops__succeeded)
                                              {
                                                backend_libs__builtin_ops__Z_306 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_655, (MR_Integer) 0));
                                                backend_libs__builtin_ops__Var_103 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_655, (MR_Integer) 1)));
                                                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__Var_103 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
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
                                      case (MR_Integer) 43:
                                        {
                                          /* case "*" */
                                          {
                                            MR_Word backend_libs__builtin_ops__Var_82;
                                            MR_Box backend_libs__builtin_ops__Z_312;

                                            backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_10 == (MR_Integer) 0);
                                            if (backend_libs__builtin_ops__succeeded)
                                              {
                                                backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__Var_655)) == (MR_mktag((MR_Integer) 1)));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  {
                                                    backend_libs__builtin_ops__Z_312 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_655, (MR_Integer) 0));
                                                    backend_libs__builtin_ops__Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_655, (MR_Integer) 1)));
                                                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__Var_82 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                  }
                                              }
                                          }
                                        }
                                        break;
                                      case (MR_Integer) 44:
                                        {
                                          /* case "-" */
                                          {
                                            MR_Word backend_libs__builtin_ops__Var_88;
                                            MR_Box backend_libs__builtin_ops__Z_309;

                                            backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__Var_655)) == (MR_mktag((MR_Integer) 1)));
                                            if (backend_libs__builtin_ops__succeeded)
                                              {
                                                backend_libs__builtin_ops__Z_309 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_655, (MR_Integer) 0));
                                                backend_libs__builtin_ops__Var_88 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_655, (MR_Integer) 1)));
                                                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__Var_88 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
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
                                      case (MR_Integer) 49:
                                        {
                                          /* case "\/" */
                                          {
                                            MR_Word backend_libs__builtin_ops__Var_593;
                                            MR_Box backend_libs__builtin_ops__Z_599;

                                            backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_10 == (MR_Integer) 0);
                                            if (backend_libs__builtin_ops__succeeded)
                                              {
                                                backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__Var_655)) == (MR_mktag((MR_Integer) 1)));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  {
                                                    backend_libs__builtin_ops__Z_599 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_655, (MR_Integer) 0));
                                                    backend_libs__builtin_ops__Var_593 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_655, (MR_Integer) 1)));
                                                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__Var_593 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                  }
                                              }
                                          }
                                        }
                                        break;
                                      case (MR_Integer) 51:
                                        {
                                          /* case "unchecked_left_shift" */
                                          {
                                            MR_Word backend_libs__builtin_ops__Var_603;
                                            MR_Box backend_libs__builtin_ops__Z_609;

                                            backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_10 == (MR_Integer) 0);
                                            if (backend_libs__builtin_ops__succeeded)
                                              {
                                                backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__Var_655)) == (MR_mktag((MR_Integer) 1)));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  {
                                                    backend_libs__builtin_ops__Z_609 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_655, (MR_Integer) 0));
                                                    backend_libs__builtin_ops__Var_603 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Var_655, (MR_Integer) 1)));
                                                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__Var_603 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                  }
                                              }
                                          }
                                        }
                                        break;
                                      case (MR_Integer) 61:
                                        {
                                          /* case "<" */
                                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_10 == (MR_Integer) 0);
                                          if (backend_libs__builtin_ops__succeeded)
                                            backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__Var_655 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                        }
                                        break;
                                      case (MR_Integer) 63:
                                        {
                                          /* case ">" */
                                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_10 == (MR_Integer) 0);
                                          if (backend_libs__builtin_ops__succeeded)
                                            backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__Var_655 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
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
