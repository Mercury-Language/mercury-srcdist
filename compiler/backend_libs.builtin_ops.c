/*
** Automatically generated from `builtin_ops.m'
** by the Mercury compiler,
** version rotd-2017-04-20
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
                      case (MR_Integer) 57:
                        {
                          backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 58:
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
    MR_Word backend_libs__builtin_ops__V_688_688;
    MR_Box backend_libs__builtin_ops__V_689_689;
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
            backend_libs__builtin_ops__V_689_689 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Args_9, (MR_Integer) 0));
            backend_libs__builtin_ops__V_688_688 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Args_9, (MR_Integer) 1)));
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
                            MR_Word backend_libs__builtin_ops__V_242_242;
                            MR_Word backend_libs__builtin_ops__V_243_243;

                            backend_libs__builtin_ops__succeeded = (strcmp(backend_libs__builtin_ops__PredName_7, (MR_String) "unsafe_promise_unique") == 0);
                            if (backend_libs__builtin_ops__succeeded)
                              {
                                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_12 == (MR_Integer) 0);
                                if (backend_libs__builtin_ops__succeeded)
                                  {
                                    backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_688_688)) == (MR_mktag((MR_Integer) 1)));
                                    if (backend_libs__builtin_ops__succeeded)
                                      {
                                        backend_libs__builtin_ops__Y_42 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_688_688, (MR_Integer) 0));
                                        backend_libs__builtin_ops__V_242_242 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_688_688, (MR_Integer) 1)));
                                        backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_242_242 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                        if (backend_libs__builtin_ops__succeeded)
                                          {
                                            {
                                              backend_libs__builtin_ops__V_243_243 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                              MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_243_243, 0) = backend_libs__builtin_ops__V_689_689;
                                            }
                                            {
                                              backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                              MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Y_42;
                                              MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_243_243));
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
                            MR_Word backend_libs__builtin_ops__V_698_698;
                            MR_Box backend_libs__builtin_ops__V_699_699;
                            MR_Integer backend_libs__builtin_ops__slot_9;
                            MR_String backend_libs__builtin_ops__str_10;

                            backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_12 == (MR_Integer) 0);
                            if (backend_libs__builtin_ops__succeeded)
                              {
                                backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_688_688)) == (MR_mktag((MR_Integer) 1)));
                                if (backend_libs__builtin_ops__succeeded)
                                  {
                                    backend_libs__builtin_ops__V_699_699 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_688_688, (MR_Integer) 0));
                                    backend_libs__builtin_ops__V_698_698 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_688_688, (MR_Integer) 1)));
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
                                                MR_Word backend_libs__builtin_ops__V_392_392;
                                                MR_Word backend_libs__builtin_ops__V_393_393;
                                                MR_Word backend_libs__builtin_ops__V_394_394;
                                                MR_Word backend_libs__builtin_ops__CompareOp_397;

                                                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_698_698 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  {
                                                    backend_libs__builtin_ops__CompareOp_397 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 53));
                                                    {
                                                      backend_libs__builtin_ops__V_393_393 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_393_393, 0) = backend_libs__builtin_ops__V_689_689;
                                                    }
                                                    {
                                                      backend_libs__builtin_ops__V_394_394 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_394_394, 0) = backend_libs__builtin_ops__V_699_699;
                                                    }
                                                    {
                                                      backend_libs__builtin_ops__V_392_392 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_392_392, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_392_392, 1) = ((MR_Box) (backend_libs__builtin_ops__CompareOp_397));
                                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_392_392, 2) = ((MR_Box) (backend_libs__builtin_ops__V_393_393));
                                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_392_392, 3) = ((MR_Box) (backend_libs__builtin_ops__V_394_394));
                                                    }
                                                    {
                                                      backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                                      MR_hl_field(MR_mktag(2), backend_libs__builtin_ops__CodePrime_13, 0) = ((MR_Box) (backend_libs__builtin_ops__V_392_392));
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
                                                MR_Word backend_libs__builtin_ops__V_376_376;
                                                MR_Word backend_libs__builtin_ops__V_377_377;
                                                MR_Word backend_libs__builtin_ops__V_378_378;
                                                MR_Word backend_libs__builtin_ops__CompareOp_381;

                                                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_698_698 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  {
                                                    backend_libs__builtin_ops__CompareOp_381 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 52));
                                                    {
                                                      backend_libs__builtin_ops__V_377_377 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_377_377, 0) = backend_libs__builtin_ops__V_689_689;
                                                    }
                                                    {
                                                      backend_libs__builtin_ops__V_378_378 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_378_378, 0) = backend_libs__builtin_ops__V_699_699;
                                                    }
                                                    {
                                                      backend_libs__builtin_ops__V_376_376 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_376_376, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_376_376, 1) = ((MR_Box) (backend_libs__builtin_ops__CompareOp_381));
                                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_376_376, 2) = ((MR_Box) (backend_libs__builtin_ops__V_377_377));
                                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_376_376, 3) = ((MR_Box) (backend_libs__builtin_ops__V_378_378));
                                                    }
                                                    {
                                                      backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                                      MR_hl_field(MR_mktag(2), backend_libs__builtin_ops__CodePrime_13, 0) = ((MR_Box) (backend_libs__builtin_ops__V_376_376));
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
                                                MR_Word backend_libs__builtin_ops__V_400_400;
                                                MR_Word backend_libs__builtin_ops__V_401_401;
                                                MR_Word backend_libs__builtin_ops__V_402_402;
                                                MR_Word backend_libs__builtin_ops__V_403_403;
                                                MR_Box backend_libs__builtin_ops__Z_406;

                                                backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_698_698)) == (MR_mktag((MR_Integer) 1)));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  {
                                                    backend_libs__builtin_ops__Z_406 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_698_698, (MR_Integer) 0));
                                                    backend_libs__builtin_ops__V_400_400 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_698_698, (MR_Integer) 1)));
                                                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_400_400 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                    if (backend_libs__builtin_ops__succeeded)
                                                      {
                                                        {
                                                          backend_libs__builtin_ops__V_402_402 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_402_402, 0) = backend_libs__builtin_ops__V_689_689;
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__V_403_403 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_403_403, 0) = backend_libs__builtin_ops__V_699_699;
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__V_401_401 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_401_401, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_401_401, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 47))));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_401_401, 2) = ((MR_Box) (backend_libs__builtin_ops__V_402_402));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_401_401, 3) = ((MR_Box) (backend_libs__builtin_ops__V_403_403));
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Z_406;
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_401_401));
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
                                              if ((backend_libs__builtin_ops__V_698_698 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                                                {
                                                  MR_Word backend_libs__builtin_ops__V_82_82;

                                                  {
                                                    backend_libs__builtin_ops__V_82_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                    MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_82_82, 0) = backend_libs__builtin_ops__V_689_689;
                                                  }
                                                  {
                                                    backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                    MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__V_699_699;
                                                    MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_82_82));
                                                  }
                                                  backend_libs__builtin_ops__succeeded = MR_TRUE;
                                                }
                                              else
                                                {
                                                  MR_Word backend_libs__builtin_ops__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_698_698, (MR_Integer) 1)));
                                                  MR_Word backend_libs__builtin_ops__V_76_76;
                                                  MR_Word backend_libs__builtin_ops__V_77_77;
                                                  MR_Word backend_libs__builtin_ops__V_78_78;
                                                  MR_Word backend_libs__builtin_ops__V_79_79;
                                                  MR_Box backend_libs__builtin_ops__Z_339 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_698_698, (MR_Integer) 0));

                                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_75_75 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                  if (backend_libs__builtin_ops__succeeded)
                                                    {
                                                      backend_libs__builtin_ops__V_77_77 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 44));
                                                      {
                                                        backend_libs__builtin_ops__V_78_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_78_78, 0) = backend_libs__builtin_ops__V_689_689;
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__V_79_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_79_79, 0) = backend_libs__builtin_ops__V_699_699;
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
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Z_339;
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
                                                MR_Box backend_libs__builtin_ops__Z_359;

                                                backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_698_698)) == (MR_mktag((MR_Integer) 1)));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  {
                                                    backend_libs__builtin_ops__Z_359 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_698_698, (MR_Integer) 0));
                                                    backend_libs__builtin_ops__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_698_698, (MR_Integer) 1)));
                                                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_55_55 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                    if (backend_libs__builtin_ops__succeeded)
                                                      {
                                                        {
                                                          backend_libs__builtin_ops__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_57_57, 0) = backend_libs__builtin_ops__V_689_689;
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__V_58_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_58_58, 0) = backend_libs__builtin_ops__V_699_699;
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__V_56_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_56_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_56_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 46))));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_56_56, 2) = ((MR_Box) (backend_libs__builtin_ops__V_57_57));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_56_56, 3) = ((MR_Box) (backend_libs__builtin_ops__V_58_58));
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Z_359;
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
                                              if ((backend_libs__builtin_ops__V_698_698 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                                                {
                                                  MR_Word backend_libs__builtin_ops__V_68_68;
                                                  MR_Word backend_libs__builtin_ops__V_72_72;

                                                  {
                                                    backend_libs__builtin_ops__V_72_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                    MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_72_72, 0) = backend_libs__builtin_ops__V_689_689;
                                                  }
                                                  {
                                                    backend_libs__builtin_ops__V_68_68 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_68_68, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_68_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 45))));
                                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_68_68, 2) = ((MR_Box) (MR_mkword(MR_mktag(3), &backend_libs__builtin_ops_scalar_common_1[1])));
                                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_68_68, 3) = ((MR_Box) (backend_libs__builtin_ops__V_72_72));
                                                  }
                                                  {
                                                    backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                    MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__V_699_699;
                                                    MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_68_68));
                                                  }
                                                  backend_libs__builtin_ops__succeeded = MR_TRUE;
                                                }
                                              else
                                                {
                                                  MR_Word backend_libs__builtin_ops__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_698_698, (MR_Integer) 1)));
                                                  MR_Word backend_libs__builtin_ops__V_62_62;
                                                  MR_Word backend_libs__builtin_ops__V_63_63;
                                                  MR_Word backend_libs__builtin_ops__V_64_64;
                                                  MR_Word backend_libs__builtin_ops__V_65_65;
                                                  MR_Box backend_libs__builtin_ops__Z_350 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_698_698, (MR_Integer) 0));

                                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_61_61 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                  if (backend_libs__builtin_ops__succeeded)
                                                    {
                                                      backend_libs__builtin_ops__V_63_63 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 45));
                                                      {
                                                        backend_libs__builtin_ops__V_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_64_64, 0) = backend_libs__builtin_ops__V_689_689;
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__V_65_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_65_65, 0) = backend_libs__builtin_ops__V_699_699;
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
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Z_350;
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
                                                MR_Word backend_libs__builtin_ops__CompareOp_363;

                                                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_698_698 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  {
                                                    backend_libs__builtin_ops__CompareOp_363 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 50));
                                                    {
                                                      backend_libs__builtin_ops__V_51_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_51_51, 0) = backend_libs__builtin_ops__V_689_689;
                                                    }
                                                    {
                                                      backend_libs__builtin_ops__V_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_52_52, 0) = backend_libs__builtin_ops__V_699_699;
                                                    }
                                                    {
                                                      backend_libs__builtin_ops__V_50_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_50_50, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_50_50, 1) = ((MR_Box) (backend_libs__builtin_ops__CompareOp_363));
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
                                                MR_Word backend_libs__builtin_ops__V_384_384;
                                                MR_Word backend_libs__builtin_ops__V_385_385;
                                                MR_Word backend_libs__builtin_ops__V_386_386;
                                                MR_Word backend_libs__builtin_ops__CompareOp_389;

                                                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_698_698 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  {
                                                    backend_libs__builtin_ops__CompareOp_389 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 51));
                                                    {
                                                      backend_libs__builtin_ops__V_385_385 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_385_385, 0) = backend_libs__builtin_ops__V_689_689;
                                                    }
                                                    {
                                                      backend_libs__builtin_ops__V_386_386 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_386_386, 0) = backend_libs__builtin_ops__V_699_699;
                                                    }
                                                    {
                                                      backend_libs__builtin_ops__V_384_384 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_384_384, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_384_384, 1) = ((MR_Box) (backend_libs__builtin_ops__CompareOp_389));
                                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_384_384, 2) = ((MR_Box) (backend_libs__builtin_ops__V_385_385));
                                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_384_384, 3) = ((MR_Box) (backend_libs__builtin_ops__V_386_386));
                                                    }
                                                    {
                                                      backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                                      MR_hl_field(MR_mktag(2), backend_libs__builtin_ops__CodePrime_13, 0) = ((MR_Box) (backend_libs__builtin_ops__V_384_384));
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
                            MR_Word backend_libs__builtin_ops__V_700_700;
                            MR_Box backend_libs__builtin_ops__V_701_701;

                            backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_688_688)) == (MR_mktag((MR_Integer) 1)));
                            if (backend_libs__builtin_ops__succeeded)
                              {
                                backend_libs__builtin_ops__V_701_701 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_688_688, (MR_Integer) 0));
                                backend_libs__builtin_ops__V_700_700 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_688_688, (MR_Integer) 1)));
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
                                          MR_Word backend_libs__builtin_ops__V_141_141;
                                          MR_Word backend_libs__builtin_ops__V_142_142;
                                          MR_Word backend_libs__builtin_ops__V_143_143;
                                          MR_Word backend_libs__builtin_ops__V_144_144;
                                          MR_Box backend_libs__builtin_ops__Z_296;

                                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_12 == (MR_Integer) 0);
                                          if (backend_libs__builtin_ops__succeeded)
                                            {
                                              backend_libs__builtin_ops__ArithOp_47 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
                                              backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_700_700)) == (MR_mktag((MR_Integer) 1)));
                                              if (backend_libs__builtin_ops__succeeded)
                                                {
                                                  backend_libs__builtin_ops__Z_296 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_700_700, (MR_Integer) 0));
                                                  backend_libs__builtin_ops__V_141_141 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_700_700, (MR_Integer) 1)));
                                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_141_141 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                  if (backend_libs__builtin_ops__succeeded)
                                                    {
                                                      {
                                                        backend_libs__builtin_ops__V_143_143 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_143_143, 0) = backend_libs__builtin_ops__V_689_689;
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__V_144_144 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_144_144, 0) = backend_libs__builtin_ops__V_701_701;
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__V_142_142 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_142_142, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_142_142, 1) = ((MR_Box) (backend_libs__builtin_ops__ArithOp_47));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_142_142, 2) = ((MR_Box) (backend_libs__builtin_ops__V_143_143));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_142_142, 3) = ((MR_Box) (backend_libs__builtin_ops__V_144_144));
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Z_296;
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_142_142));
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
                                            if ((backend_libs__builtin_ops__V_700_700 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                                              {
                                                MR_Word backend_libs__builtin_ops__V_184_184;

                                                {
                                                  backend_libs__builtin_ops__V_184_184 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                  MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_184_184, 0) = backend_libs__builtin_ops__V_689_689;
                                                }
                                                {
                                                  backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                  MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__V_701_701;
                                                  MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_184_184));
                                                }
                                                backend_libs__builtin_ops__succeeded = MR_TRUE;
                                              }
                                            else
                                              {
                                                MR_Word backend_libs__builtin_ops__V_187_187 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_700_700, (MR_Integer) 1)));
                                                MR_Word backend_libs__builtin_ops__V_196_196;
                                                MR_Word backend_libs__builtin_ops__V_197_197;
                                                MR_Word backend_libs__builtin_ops__V_198_198;
                                                MR_Word backend_libs__builtin_ops__V_199_199;
                                                MR_Box backend_libs__builtin_ops__Z_271 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_700_700, (MR_Integer) 0));

                                                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_187_187 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  {
                                                    backend_libs__builtin_ops__V_197_197 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                                                    {
                                                      backend_libs__builtin_ops__V_198_198 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_198_198, 0) = backend_libs__builtin_ops__V_689_689;
                                                    }
                                                    {
                                                      backend_libs__builtin_ops__V_199_199 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_199_199, 0) = backend_libs__builtin_ops__V_701_701;
                                                    }
                                                    {
                                                      backend_libs__builtin_ops__V_196_196 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_196_196, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_196_196, 1) = ((MR_Box) (backend_libs__builtin_ops__V_197_197));
                                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_196_196, 2) = ((MR_Box) (backend_libs__builtin_ops__V_198_198));
                                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_196_196, 3) = ((MR_Box) (backend_libs__builtin_ops__V_199_199));
                                                    }
                                                    {
                                                      backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Z_271;
                                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_196_196));
                                                    }
                                                    backend_libs__builtin_ops__succeeded = MR_TRUE;
                                                  }
                                              }
                                            break;
                                          case (MR_Integer) 1:
                                            {
                                              MR_Word backend_libs__builtin_ops__V_192_192;
                                              MR_Word backend_libs__builtin_ops__V_193_193;
                                              MR_Word backend_libs__builtin_ops__V_194_194;
                                              MR_Word backend_libs__builtin_ops__V_195_195;
                                              MR_Word backend_libs__builtin_ops__V_410_410;
                                              MR_Box backend_libs__builtin_ops__Z_413;

                                              backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_700_700)) == (MR_mktag((MR_Integer) 1)));
                                              if (backend_libs__builtin_ops__succeeded)
                                                {
                                                  backend_libs__builtin_ops__Z_413 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_700_700, (MR_Integer) 0));
                                                  backend_libs__builtin_ops__V_410_410 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_700_700, (MR_Integer) 1)));
                                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_410_410 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                  if (backend_libs__builtin_ops__succeeded)
                                                    {
                                                      backend_libs__builtin_ops__V_193_193 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
                                                      {
                                                        backend_libs__builtin_ops__V_194_194 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_194_194, 0) = backend_libs__builtin_ops__Z_413;
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__V_195_195 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_195_195, 0) = backend_libs__builtin_ops__V_701_701;
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__V_192_192 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_192_192, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_192_192, 1) = ((MR_Box) (backend_libs__builtin_ops__V_193_193));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_192_192, 2) = ((MR_Box) (backend_libs__builtin_ops__V_194_194));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_192_192, 3) = ((MR_Box) (backend_libs__builtin_ops__V_195_195));
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__V_689_689;
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_192_192));
                                                      }
                                                      backend_libs__builtin_ops__succeeded = MR_TRUE;
                                                    }
                                                }
                                            }
                                            break;
                                          case (MR_Integer) 2:
                                            {
                                              MR_Word backend_libs__builtin_ops__V_188_188;
                                              MR_Word backend_libs__builtin_ops__V_189_189;
                                              MR_Word backend_libs__builtin_ops__V_190_190;
                                              MR_Word backend_libs__builtin_ops__V_191_191;
                                              MR_Word backend_libs__builtin_ops__V_416_416;
                                              MR_Box backend_libs__builtin_ops__Z_419;

                                              backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_700_700)) == (MR_mktag((MR_Integer) 1)));
                                              if (backend_libs__builtin_ops__succeeded)
                                                {
                                                  backend_libs__builtin_ops__Z_419 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_700_700, (MR_Integer) 0));
                                                  backend_libs__builtin_ops__V_416_416 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_700_700, (MR_Integer) 1)));
                                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_416_416 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                  if (backend_libs__builtin_ops__succeeded)
                                                    {
                                                      backend_libs__builtin_ops__V_189_189 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
                                                      {
                                                        backend_libs__builtin_ops__V_190_190 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_190_190, 0) = backend_libs__builtin_ops__Z_419;
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__V_191_191 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_191_191, 0) = backend_libs__builtin_ops__V_689_689;
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__V_188_188 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_188_188, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_188_188, 1) = ((MR_Box) (backend_libs__builtin_ops__V_189_189));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_188_188, 2) = ((MR_Box) (backend_libs__builtin_ops__V_190_190));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_188_188, 3) = ((MR_Box) (backend_libs__builtin_ops__V_191_191));
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__V_701_701;
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_188_188));
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
                                            if ((backend_libs__builtin_ops__V_700_700 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                                              {
                                                MR_Word backend_libs__builtin_ops__V_162_162;
                                                MR_Word backend_libs__builtin_ops__V_166_166;

                                                {
                                                  backend_libs__builtin_ops__V_166_166 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                  MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_166_166, 0) = backend_libs__builtin_ops__V_689_689;
                                                }
                                                {
                                                  backend_libs__builtin_ops__V_162_162 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                  MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_162_162, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                  MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_162_162, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
                                                  MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_162_162, 2) = ((MR_Box) (MR_mkword(MR_mktag(1), &backend_libs__builtin_ops_scalar_common_4[1])));
                                                  MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_162_162, 3) = ((MR_Box) (backend_libs__builtin_ops__V_166_166));
                                                }
                                                {
                                                  backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                  MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__V_701_701;
                                                  MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_162_162));
                                                }
                                                backend_libs__builtin_ops__succeeded = MR_TRUE;
                                              }
                                            else
                                              {
                                                MR_Word backend_libs__builtin_ops__V_169_169 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_700_700, (MR_Integer) 1)));
                                                MR_Word backend_libs__builtin_ops__V_178_178;
                                                MR_Word backend_libs__builtin_ops__V_179_179;
                                                MR_Word backend_libs__builtin_ops__V_180_180;
                                                MR_Word backend_libs__builtin_ops__V_181_181;
                                                MR_Box backend_libs__builtin_ops__Z_282 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_700_700, (MR_Integer) 0));

                                                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_169_169 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  {
                                                    backend_libs__builtin_ops__V_179_179 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
                                                    {
                                                      backend_libs__builtin_ops__V_180_180 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_180_180, 0) = backend_libs__builtin_ops__V_689_689;
                                                    }
                                                    {
                                                      backend_libs__builtin_ops__V_181_181 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_181_181, 0) = backend_libs__builtin_ops__V_701_701;
                                                    }
                                                    {
                                                      backend_libs__builtin_ops__V_178_178 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_178_178, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_178_178, 1) = ((MR_Box) (backend_libs__builtin_ops__V_179_179));
                                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_178_178, 2) = ((MR_Box) (backend_libs__builtin_ops__V_180_180));
                                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_178_178, 3) = ((MR_Box) (backend_libs__builtin_ops__V_181_181));
                                                    }
                                                    {
                                                      backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Z_282;
                                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_178_178));
                                                    }
                                                    backend_libs__builtin_ops__succeeded = MR_TRUE;
                                                  }
                                              }
                                            break;
                                          case (MR_Integer) 1:
                                            {
                                              MR_Word backend_libs__builtin_ops__V_174_174;
                                              MR_Word backend_libs__builtin_ops__V_175_175;
                                              MR_Word backend_libs__builtin_ops__V_176_176;
                                              MR_Word backend_libs__builtin_ops__V_177_177;
                                              MR_Word backend_libs__builtin_ops__V_422_422;
                                              MR_Box backend_libs__builtin_ops__Z_425;

                                              backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_700_700)) == (MR_mktag((MR_Integer) 1)));
                                              if (backend_libs__builtin_ops__succeeded)
                                                {
                                                  backend_libs__builtin_ops__Z_425 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_700_700, (MR_Integer) 0));
                                                  backend_libs__builtin_ops__V_422_422 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_700_700, (MR_Integer) 1)));
                                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_422_422 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                  if (backend_libs__builtin_ops__succeeded)
                                                    {
                                                      backend_libs__builtin_ops__V_175_175 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                                                      {
                                                        backend_libs__builtin_ops__V_176_176 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_176_176, 0) = backend_libs__builtin_ops__V_701_701;
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__V_177_177 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_177_177, 0) = backend_libs__builtin_ops__Z_425;
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__V_174_174 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_174_174, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_174_174, 1) = ((MR_Box) (backend_libs__builtin_ops__V_175_175));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_174_174, 2) = ((MR_Box) (backend_libs__builtin_ops__V_176_176));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_174_174, 3) = ((MR_Box) (backend_libs__builtin_ops__V_177_177));
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__V_689_689;
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_174_174));
                                                      }
                                                      backend_libs__builtin_ops__succeeded = MR_TRUE;
                                                    }
                                                }
                                            }
                                            break;
                                          case (MR_Integer) 2:
                                            {
                                              MR_Word backend_libs__builtin_ops__V_170_170;
                                              MR_Word backend_libs__builtin_ops__V_171_171;
                                              MR_Word backend_libs__builtin_ops__V_172_172;
                                              MR_Word backend_libs__builtin_ops__V_173_173;
                                              MR_Word backend_libs__builtin_ops__V_428_428;
                                              MR_Box backend_libs__builtin_ops__Z_431;

                                              backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_700_700)) == (MR_mktag((MR_Integer) 1)));
                                              if (backend_libs__builtin_ops__succeeded)
                                                {
                                                  backend_libs__builtin_ops__Z_431 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_700_700, (MR_Integer) 0));
                                                  backend_libs__builtin_ops__V_428_428 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_700_700, (MR_Integer) 1)));
                                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_428_428 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                  if (backend_libs__builtin_ops__succeeded)
                                                    {
                                                      backend_libs__builtin_ops__V_171_171 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
                                                      {
                                                        backend_libs__builtin_ops__V_172_172 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_172_172, 0) = backend_libs__builtin_ops__V_689_689;
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__V_173_173 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_173_173, 0) = backend_libs__builtin_ops__Z_431;
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__V_170_170 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_170_170, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_170_170, 1) = ((MR_Box) (backend_libs__builtin_ops__V_171_171));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_170_170, 2) = ((MR_Box) (backend_libs__builtin_ops__V_172_172));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_170_170, 3) = ((MR_Box) (backend_libs__builtin_ops__V_173_173));
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__V_701_701;
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_170_170));
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
                                          MR_Word backend_libs__builtin_ops__ArithOp_432;
                                          MR_Word backend_libs__builtin_ops__V_435_435;
                                          MR_Word backend_libs__builtin_ops__V_436_436;
                                          MR_Word backend_libs__builtin_ops__V_437_437;
                                          MR_Word backend_libs__builtin_ops__V_438_438;
                                          MR_Box backend_libs__builtin_ops__Z_441;

                                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_12 == (MR_Integer) 0);
                                          if (backend_libs__builtin_ops__succeeded)
                                            {
                                              backend_libs__builtin_ops__ArithOp_432 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7));
                                              backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_700_700)) == (MR_mktag((MR_Integer) 1)));
                                              if (backend_libs__builtin_ops__succeeded)
                                                {
                                                  backend_libs__builtin_ops__Z_441 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_700_700, (MR_Integer) 0));
                                                  backend_libs__builtin_ops__V_435_435 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_700_700, (MR_Integer) 1)));
                                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_435_435 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                  if (backend_libs__builtin_ops__succeeded)
                                                    {
                                                      {
                                                        backend_libs__builtin_ops__V_437_437 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_437_437, 0) = backend_libs__builtin_ops__V_689_689;
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__V_438_438 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_438_438, 0) = backend_libs__builtin_ops__V_701_701;
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__V_436_436 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_436_436, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
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
                                    case (MR_Integer) 4:
                                      {
                                        /* case "<" */
                                        {
                                          MR_Word backend_libs__builtin_ops__V_131_131;
                                          MR_Word backend_libs__builtin_ops__V_132_132;
                                          MR_Word backend_libs__builtin_ops__V_133_133;
                                          MR_Word backend_libs__builtin_ops__CompareOp_301;

                                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_12 == (MR_Integer) 0);
                                          if (backend_libs__builtin_ops__succeeded)
                                            {
                                              backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_700_700 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                              if (backend_libs__builtin_ops__succeeded)
                                                {
                                                  backend_libs__builtin_ops__CompareOp_301 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 23));
                                                  {
                                                    backend_libs__builtin_ops__V_132_132 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                    MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_132_132, 0) = backend_libs__builtin_ops__V_689_689;
                                                  }
                                                  {
                                                    backend_libs__builtin_ops__V_133_133 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                    MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_133_133, 0) = backend_libs__builtin_ops__V_701_701;
                                                  }
                                                  {
                                                    backend_libs__builtin_ops__V_131_131 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_131_131, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_131_131, 1) = ((MR_Box) (backend_libs__builtin_ops__CompareOp_301));
                                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_131_131, 2) = ((MR_Box) (backend_libs__builtin_ops__V_132_132));
                                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_131_131, 3) = ((MR_Box) (backend_libs__builtin_ops__V_133_133));
                                                  }
                                                  {
                                                    backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                                    MR_hl_field(MR_mktag(2), backend_libs__builtin_ops__CodePrime_13, 0) = ((MR_Box) (backend_libs__builtin_ops__V_131_131));
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
                                          MR_Word backend_libs__builtin_ops__V_444_444;
                                          MR_Word backend_libs__builtin_ops__V_445_445;
                                          MR_Word backend_libs__builtin_ops__V_446_446;
                                          MR_Word backend_libs__builtin_ops__CompareOp_449;

                                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_12 == (MR_Integer) 0);
                                          if (backend_libs__builtin_ops__succeeded)
                                            {
                                              backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_700_700 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                              if (backend_libs__builtin_ops__succeeded)
                                                {
                                                  backend_libs__builtin_ops__CompareOp_449 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 25));
                                                  {
                                                    backend_libs__builtin_ops__V_445_445 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                    MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_445_445, 0) = backend_libs__builtin_ops__V_689_689;
                                                  }
                                                  {
                                                    backend_libs__builtin_ops__V_446_446 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                    MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_446_446, 0) = backend_libs__builtin_ops__V_701_701;
                                                  }
                                                  {
                                                    backend_libs__builtin_ops__V_444_444 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_444_444, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_444_444, 1) = ((MR_Box) (backend_libs__builtin_ops__CompareOp_449));
                                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_444_444, 2) = ((MR_Box) (backend_libs__builtin_ops__V_445_445));
                                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_444_444, 3) = ((MR_Box) (backend_libs__builtin_ops__V_446_446));
                                                  }
                                                  {
                                                    backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                                    MR_hl_field(MR_mktag(2), backend_libs__builtin_ops__CodePrime_13, 0) = ((MR_Box) (backend_libs__builtin_ops__V_444_444));
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
                                          MR_Word backend_libs__builtin_ops__V_452_452;
                                          MR_Word backend_libs__builtin_ops__V_453_453;
                                          MR_Word backend_libs__builtin_ops__V_454_454;
                                          MR_Word backend_libs__builtin_ops__CompareOp_457;

                                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_12 == (MR_Integer) 0);
                                          if (backend_libs__builtin_ops__succeeded)
                                            {
                                              backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_700_700 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                              if (backend_libs__builtin_ops__succeeded)
                                                {
                                                  backend_libs__builtin_ops__CompareOp_457 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 24));
                                                  {
                                                    backend_libs__builtin_ops__V_453_453 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                    MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_453_453, 0) = backend_libs__builtin_ops__V_689_689;
                                                  }
                                                  {
                                                    backend_libs__builtin_ops__V_454_454 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                    MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_454_454, 0) = backend_libs__builtin_ops__V_701_701;
                                                  }
                                                  {
                                                    backend_libs__builtin_ops__V_452_452 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_452_452, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_452_452, 1) = ((MR_Box) (backend_libs__builtin_ops__CompareOp_457));
                                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_452_452, 2) = ((MR_Box) (backend_libs__builtin_ops__V_453_453));
                                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_452_452, 3) = ((MR_Box) (backend_libs__builtin_ops__V_454_454));
                                                  }
                                                  {
                                                    backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                                    MR_hl_field(MR_mktag(2), backend_libs__builtin_ops__CodePrime_13, 0) = ((MR_Box) (backend_libs__builtin_ops__V_452_452));
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
                                          MR_Word backend_libs__builtin_ops__V_460_460;
                                          MR_Word backend_libs__builtin_ops__V_461_461;
                                          MR_Word backend_libs__builtin_ops__V_462_462;
                                          MR_Word backend_libs__builtin_ops__CompareOp_465;

                                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_12 == (MR_Integer) 0);
                                          if (backend_libs__builtin_ops__succeeded)
                                            {
                                              backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_700_700 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                              if (backend_libs__builtin_ops__succeeded)
                                                {
                                                  backend_libs__builtin_ops__CompareOp_465 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 26));
                                                  {
                                                    backend_libs__builtin_ops__V_461_461 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                    MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_461_461, 0) = backend_libs__builtin_ops__V_689_689;
                                                  }
                                                  {
                                                    backend_libs__builtin_ops__V_462_462 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                    MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_462_462, 0) = backend_libs__builtin_ops__V_701_701;
                                                  }
                                                  {
                                                    backend_libs__builtin_ops__V_460_460 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_460_460, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_460_460, 1) = ((MR_Box) (backend_libs__builtin_ops__CompareOp_465));
                                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_460_460, 2) = ((MR_Box) (backend_libs__builtin_ops__V_461_461));
                                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_460_460, 3) = ((MR_Box) (backend_libs__builtin_ops__V_462_462));
                                                  }
                                                  {
                                                    backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                                    MR_hl_field(MR_mktag(2), backend_libs__builtin_ops__CodePrime_13, 0) = ((MR_Box) (backend_libs__builtin_ops__V_460_460));
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
                                          MR_Word backend_libs__builtin_ops__V_136_136;
                                          MR_Word backend_libs__builtin_ops__V_137_137;
                                          MR_Word backend_libs__builtin_ops__V_138_138;

                                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_12 == (MR_Integer) 0);
                                          if (backend_libs__builtin_ops__succeeded)
                                            {
                                              backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_700_700 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                              if (backend_libs__builtin_ops__succeeded)
                                                {
                                                  backend_libs__builtin_ops__V_137_137 = (MR_Integer) 6;
                                                  {
                                                    backend_libs__builtin_ops__V_138_138 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                    MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_138_138, 0) = backend_libs__builtin_ops__V_689_689;
                                                  }
                                                  {
                                                    backend_libs__builtin_ops__V_136_136 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_136_136, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_136_136, 1) = ((MR_Box) (backend_libs__builtin_ops__V_137_137));
                                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_136_136, 2) = ((MR_Box) (backend_libs__builtin_ops__V_138_138));
                                                  }
                                                  {
                                                    backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                    MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__V_701_701;
                                                    MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_136_136));
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
                                          MR_Word backend_libs__builtin_ops__ArithOp_466;
                                          MR_Word backend_libs__builtin_ops__V_469_469;
                                          MR_Word backend_libs__builtin_ops__V_470_470;
                                          MR_Word backend_libs__builtin_ops__V_471_471;
                                          MR_Word backend_libs__builtin_ops__V_472_472;
                                          MR_Box backend_libs__builtin_ops__Z_475;

                                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_12 == (MR_Integer) 0);
                                          if (backend_libs__builtin_ops__succeeded)
                                            {
                                              backend_libs__builtin_ops__ArithOp_466 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8));
                                              backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_700_700)) == (MR_mktag((MR_Integer) 1)));
                                              if (backend_libs__builtin_ops__succeeded)
                                                {
                                                  backend_libs__builtin_ops__Z_475 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_700_700, (MR_Integer) 0));
                                                  backend_libs__builtin_ops__V_469_469 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_700_700, (MR_Integer) 1)));
                                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_469_469 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                  if (backend_libs__builtin_ops__succeeded)
                                                    {
                                                      {
                                                        backend_libs__builtin_ops__V_471_471 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_471_471, 0) = backend_libs__builtin_ops__V_689_689;
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__V_472_472 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_472_472, 0) = backend_libs__builtin_ops__V_701_701;
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__V_470_470 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_470_470, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_470_470, 1) = ((MR_Box) (backend_libs__builtin_ops__ArithOp_466));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_470_470, 2) = ((MR_Box) (backend_libs__builtin_ops__V_471_471));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_470_470, 3) = ((MR_Box) (backend_libs__builtin_ops__V_472_472));
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Z_475;
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_470_470));
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
                                          MR_Word backend_libs__builtin_ops__ArithOp_476;
                                          MR_Word backend_libs__builtin_ops__V_479_479;
                                          MR_Word backend_libs__builtin_ops__V_480_480;
                                          MR_Word backend_libs__builtin_ops__V_481_481;
                                          MR_Word backend_libs__builtin_ops__V_482_482;
                                          MR_Box backend_libs__builtin_ops__Z_485;

                                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_12 == (MR_Integer) 0);
                                          if (backend_libs__builtin_ops__succeeded)
                                            {
                                              backend_libs__builtin_ops__ArithOp_476 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
                                              backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_700_700)) == (MR_mktag((MR_Integer) 1)));
                                              if (backend_libs__builtin_ops__succeeded)
                                                {
                                                  backend_libs__builtin_ops__Z_485 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_700_700, (MR_Integer) 0));
                                                  backend_libs__builtin_ops__V_479_479 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_700_700, (MR_Integer) 1)));
                                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_479_479 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                  if (backend_libs__builtin_ops__succeeded)
                                                    {
                                                      {
                                                        backend_libs__builtin_ops__V_481_481 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_481_481, 0) = backend_libs__builtin_ops__V_689_689;
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__V_482_482 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_482_482, 0) = backend_libs__builtin_ops__V_701_701;
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__V_480_480 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_480_480, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_480_480, 1) = ((MR_Box) (backend_libs__builtin_ops__ArithOp_476));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_480_480, 2) = ((MR_Box) (backend_libs__builtin_ops__V_481_481));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_480_480, 3) = ((MR_Box) (backend_libs__builtin_ops__V_482_482));
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Z_485;
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_480_480));
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
                                          MR_Word backend_libs__builtin_ops__ArithOp_486;
                                          MR_Word backend_libs__builtin_ops__V_489_489;
                                          MR_Word backend_libs__builtin_ops__V_490_490;
                                          MR_Word backend_libs__builtin_ops__V_491_491;
                                          MR_Word backend_libs__builtin_ops__V_492_492;
                                          MR_Box backend_libs__builtin_ops__Z_495;

                                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_12 == (MR_Integer) 0);
                                          if (backend_libs__builtin_ops__succeeded)
                                            {
                                              backend_libs__builtin_ops__ArithOp_486 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                                              backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_700_700)) == (MR_mktag((MR_Integer) 1)));
                                              if (backend_libs__builtin_ops__succeeded)
                                                {
                                                  backend_libs__builtin_ops__Z_495 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_700_700, (MR_Integer) 0));
                                                  backend_libs__builtin_ops__V_489_489 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_700_700, (MR_Integer) 1)));
                                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_489_489 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                  if (backend_libs__builtin_ops__succeeded)
                                                    {
                                                      {
                                                        backend_libs__builtin_ops__V_491_491 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_491_491, 0) = backend_libs__builtin_ops__V_689_689;
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__V_492_492 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_492_492, 0) = backend_libs__builtin_ops__V_701_701;
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__V_490_490 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_490_490, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_490_490, 1) = ((MR_Box) (backend_libs__builtin_ops__ArithOp_486));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_490_490, 2) = ((MR_Box) (backend_libs__builtin_ops__V_491_491));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_490_490, 3) = ((MR_Box) (backend_libs__builtin_ops__V_492_492));
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Z_495;
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_490_490));
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
                                          MR_Word backend_libs__builtin_ops__ArithOp_496;
                                          MR_Word backend_libs__builtin_ops__V_499_499;
                                          MR_Word backend_libs__builtin_ops__V_500_500;
                                          MR_Word backend_libs__builtin_ops__V_501_501;
                                          MR_Word backend_libs__builtin_ops__V_502_502;
                                          MR_Box backend_libs__builtin_ops__Z_505;

                                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_12 == (MR_Integer) 0);
                                          if (backend_libs__builtin_ops__succeeded)
                                            {
                                              backend_libs__builtin_ops__ArithOp_496 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
                                              backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_700_700)) == (MR_mktag((MR_Integer) 1)));
                                              if (backend_libs__builtin_ops__succeeded)
                                                {
                                                  backend_libs__builtin_ops__Z_505 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_700_700, (MR_Integer) 0));
                                                  backend_libs__builtin_ops__V_499_499 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_700_700, (MR_Integer) 1)));
                                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_499_499 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                  if (backend_libs__builtin_ops__succeeded)
                                                    {
                                                      {
                                                        backend_libs__builtin_ops__V_501_501 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_501_501, 0) = backend_libs__builtin_ops__V_689_689;
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__V_502_502 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_502_502, 0) = backend_libs__builtin_ops__V_701_701;
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__V_500_500 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_500_500, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_500_500, 1) = ((MR_Box) (backend_libs__builtin_ops__ArithOp_496));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_500_500, 2) = ((MR_Box) (backend_libs__builtin_ops__V_501_501));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_500_500, 3) = ((MR_Box) (backend_libs__builtin_ops__V_502_502));
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Z_505;
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_500_500));
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
                                          MR_Word backend_libs__builtin_ops__ArithOp_506;
                                          MR_Word backend_libs__builtin_ops__V_509_509;
                                          MR_Word backend_libs__builtin_ops__V_510_510;
                                          MR_Word backend_libs__builtin_ops__V_511_511;
                                          MR_Word backend_libs__builtin_ops__V_512_512;
                                          MR_Box backend_libs__builtin_ops__Z_515;

                                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_12 == (MR_Integer) 0);
                                          if (backend_libs__builtin_ops__succeeded)
                                            {
                                              backend_libs__builtin_ops__ArithOp_506 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
                                              backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_700_700)) == (MR_mktag((MR_Integer) 1)));
                                              if (backend_libs__builtin_ops__succeeded)
                                                {
                                                  backend_libs__builtin_ops__Z_515 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_700_700, (MR_Integer) 0));
                                                  backend_libs__builtin_ops__V_509_509 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_700_700, (MR_Integer) 1)));
                                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_509_509 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                  if (backend_libs__builtin_ops__succeeded)
                                                    {
                                                      {
                                                        backend_libs__builtin_ops__V_511_511 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_511_511, 0) = backend_libs__builtin_ops__V_689_689;
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__V_512_512 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_512_512, 0) = backend_libs__builtin_ops__V_701_701;
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__V_510_510 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_510_510, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_510_510, 1) = ((MR_Box) (backend_libs__builtin_ops__ArithOp_506));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_510_510, 2) = ((MR_Box) (backend_libs__builtin_ops__V_511_511));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_510_510, 3) = ((MR_Box) (backend_libs__builtin_ops__V_512_512));
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Z_515;
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_510_510));
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
                                          MR_Word backend_libs__builtin_ops__ArithOp_516;
                                          MR_Word backend_libs__builtin_ops__V_519_519;
                                          MR_Word backend_libs__builtin_ops__V_520_520;
                                          MR_Word backend_libs__builtin_ops__V_521_521;
                                          MR_Word backend_libs__builtin_ops__V_522_522;
                                          MR_Box backend_libs__builtin_ops__Z_525;

                                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_12 == (MR_Integer) 0);
                                          if (backend_libs__builtin_ops__succeeded)
                                            {
                                              backend_libs__builtin_ops__ArithOp_516 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
                                              backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_700_700)) == (MR_mktag((MR_Integer) 1)));
                                              if (backend_libs__builtin_ops__succeeded)
                                                {
                                                  backend_libs__builtin_ops__Z_525 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_700_700, (MR_Integer) 0));
                                                  backend_libs__builtin_ops__V_519_519 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_700_700, (MR_Integer) 1)));
                                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_519_519 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                  if (backend_libs__builtin_ops__succeeded)
                                                    {
                                                      {
                                                        backend_libs__builtin_ops__V_521_521 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_521_521, 0) = backend_libs__builtin_ops__V_689_689;
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__V_522_522 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_522_522, 0) = backend_libs__builtin_ops__V_701_701;
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__V_520_520 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_520_520, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_520_520, 1) = ((MR_Box) (backend_libs__builtin_ops__ArithOp_516));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_520_520, 2) = ((MR_Box) (backend_libs__builtin_ops__V_521_521));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_520_520, 3) = ((MR_Box) (backend_libs__builtin_ops__V_522_522));
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Z_525;
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_520_520));
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
                                          MR_Word backend_libs__builtin_ops__ArithOp_526;
                                          MR_Word backend_libs__builtin_ops__V_529_529;
                                          MR_Word backend_libs__builtin_ops__V_530_530;
                                          MR_Word backend_libs__builtin_ops__V_531_531;
                                          MR_Word backend_libs__builtin_ops__V_532_532;
                                          MR_Box backend_libs__builtin_ops__Z_535;

                                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_12 == (MR_Integer) 0);
                                          if (backend_libs__builtin_ops__succeeded)
                                            {
                                              backend_libs__builtin_ops__ArithOp_526 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4));
                                              backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_700_700)) == (MR_mktag((MR_Integer) 1)));
                                              if (backend_libs__builtin_ops__succeeded)
                                                {
                                                  backend_libs__builtin_ops__Z_535 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_700_700, (MR_Integer) 0));
                                                  backend_libs__builtin_ops__V_529_529 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_700_700, (MR_Integer) 1)));
                                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_529_529 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                  if (backend_libs__builtin_ops__succeeded)
                                                    {
                                                      {
                                                        backend_libs__builtin_ops__V_531_531 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_531_531, 0) = backend_libs__builtin_ops__V_689_689;
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__V_532_532 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_532_532, 0) = backend_libs__builtin_ops__V_701_701;
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__V_530_530 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_530_530, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_530_530, 1) = ((MR_Box) (backend_libs__builtin_ops__ArithOp_526));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_530_530, 2) = ((MR_Box) (backend_libs__builtin_ops__V_531_531));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_530_530, 3) = ((MR_Box) (backend_libs__builtin_ops__V_532_532));
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Z_535;
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_530_530));
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
                                          MR_Word backend_libs__builtin_ops__ArithOp_536;
                                          MR_Word backend_libs__builtin_ops__V_539_539;
                                          MR_Word backend_libs__builtin_ops__V_540_540;
                                          MR_Word backend_libs__builtin_ops__V_541_541;
                                          MR_Word backend_libs__builtin_ops__V_542_542;
                                          MR_Box backend_libs__builtin_ops__Z_545;

                                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_12 == (MR_Integer) 0);
                                          if (backend_libs__builtin_ops__succeeded)
                                            {
                                              backend_libs__builtin_ops__ArithOp_536 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6));
                                              backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_700_700)) == (MR_mktag((MR_Integer) 1)));
                                              if (backend_libs__builtin_ops__succeeded)
                                                {
                                                  backend_libs__builtin_ops__Z_545 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_700_700, (MR_Integer) 0));
                                                  backend_libs__builtin_ops__V_539_539 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_700_700, (MR_Integer) 1)));
                                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_539_539 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                  if (backend_libs__builtin_ops__succeeded)
                                                    {
                                                      {
                                                        backend_libs__builtin_ops__V_541_541 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_541_541, 0) = backend_libs__builtin_ops__V_689_689;
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__V_542_542 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_542_542, 0) = backend_libs__builtin_ops__V_701_701;
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__V_540_540 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_540_540, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_540_540, 1) = ((MR_Box) (backend_libs__builtin_ops__ArithOp_536));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_540_540, 2) = ((MR_Box) (backend_libs__builtin_ops__V_541_541));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_540_540, 3) = ((MR_Box) (backend_libs__builtin_ops__V_542_542));
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Z_545;
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_540_540));
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
                                          MR_Word backend_libs__builtin_ops__V_147_147;
                                          MR_Box backend_libs__builtin_ops__Z_293;

                                          backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_700_700)) == (MR_mktag((MR_Integer) 1)));
                                          if (backend_libs__builtin_ops__succeeded)
                                            {
                                              backend_libs__builtin_ops__Z_293 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_700_700, (MR_Integer) 0));
                                              backend_libs__builtin_ops__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_700_700, (MR_Integer) 1)));
                                              backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_147_147 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                              if (backend_libs__builtin_ops__succeeded)
                                                switch (backend_libs__builtin_ops__ProcNum_12) {
                                                  default:
                                                    backend_libs__builtin_ops__succeeded = MR_FALSE;
                                                    break;
                                                  case (MR_Integer) 0:
                                                    {
                                                      MR_Word backend_libs__builtin_ops__V_156_156;
                                                      MR_Word backend_libs__builtin_ops__V_158_158;
                                                      MR_Word backend_libs__builtin_ops__V_159_159;

                                                      {
                                                        backend_libs__builtin_ops__V_158_158 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_158_158, 0) = backend_libs__builtin_ops__V_689_689;
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__V_159_159 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_159_159, 0) = backend_libs__builtin_ops__V_701_701;
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__V_156_156 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_156_156, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_156_156, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9))));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_156_156, 2) = ((MR_Box) (backend_libs__builtin_ops__V_158_158));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_156_156, 3) = ((MR_Box) (backend_libs__builtin_ops__V_159_159));
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Z_293;
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_156_156));
                                                      }
                                                      backend_libs__builtin_ops__succeeded = MR_TRUE;
                                                    }
                                                    break;
                                                  case (MR_Integer) 1:
                                                    {
                                                      MR_Word backend_libs__builtin_ops__V_152_152;
                                                      MR_Word backend_libs__builtin_ops__V_154_154;
                                                      MR_Word backend_libs__builtin_ops__V_155_155;

                                                      {
                                                        backend_libs__builtin_ops__V_154_154 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_154_154, 0) = backend_libs__builtin_ops__V_689_689;
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__V_155_155 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_155_155, 0) = backend_libs__builtin_ops__Z_293;
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__V_152_152 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_152_152, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_152_152, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9))));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_152_152, 2) = ((MR_Box) (backend_libs__builtin_ops__V_154_154));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_152_152, 3) = ((MR_Box) (backend_libs__builtin_ops__V_155_155));
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__V_701_701;
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_152_152));
                                                      }
                                                      backend_libs__builtin_ops__succeeded = MR_TRUE;
                                                    }
                                                    break;
                                                  case (MR_Integer) 2:
                                                    {
                                                      MR_Word backend_libs__builtin_ops__V_148_148;
                                                      MR_Word backend_libs__builtin_ops__V_150_150;
                                                      MR_Word backend_libs__builtin_ops__V_151_151;

                                                      {
                                                        backend_libs__builtin_ops__V_150_150 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_150_150, 0) = backend_libs__builtin_ops__V_701_701;
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__V_151_151 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_151_151, 0) = backend_libs__builtin_ops__Z_293;
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__V_148_148 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_148_148, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_148_148, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9))));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_148_148, 2) = ((MR_Box) (backend_libs__builtin_ops__V_150_150));
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_148_148, 3) = ((MR_Box) (backend_libs__builtin_ops__V_151_151));
                                                      }
                                                      {
                                                        backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__V_689_689;
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_148_148));
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
                              backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_688_688 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
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
                                                MR_Word backend_libs__builtin_ops__V_212_212;
                                                MR_Word backend_libs__builtin_ops__V_213_213;
                                                MR_Word backend_libs__builtin_ops__V_214_214;
                                                MR_Word backend_libs__builtin_ops__V_215_215;
                                                MR_Box backend_libs__builtin_ops__X_259;
                                                MR_Box backend_libs__builtin_ops__Y_260;
                                                MR_Word backend_libs__builtin_ops__V_686_686;
                                                MR_Box backend_libs__builtin_ops__V_687_687;

                                                backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_688_688)) == (MR_mktag((MR_Integer) 1)));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  {
                                                    backend_libs__builtin_ops__V_687_687 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_688_688, (MR_Integer) 0));
                                                    backend_libs__builtin_ops__V_686_686 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_688_688, (MR_Integer) 1)));
                                                    if ((backend_libs__builtin_ops__V_686_686 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                                                      {
                                                        backend_libs__builtin_ops__X_259 = backend_libs__builtin_ops__V_689_689;
                                                        backend_libs__builtin_ops__Y_260 = backend_libs__builtin_ops__V_687_687;
                                                        backend_libs__builtin_ops__succeeded = MR_TRUE;
                                                      }
                                                    else
                                                      {
                                                        MR_Word backend_libs__builtin_ops__V_209_209;

                                                        backend_libs__builtin_ops__X_259 = backend_libs__builtin_ops__V_687_687;
                                                        backend_libs__builtin_ops__Y_260 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_686_686, (MR_Integer) 0));
                                                        backend_libs__builtin_ops__V_209_209 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_686_686, (MR_Integer) 1)));
                                                        backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_209_209 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                      }
                                                    if (backend_libs__builtin_ops__succeeded)
                                                      {
                                                        backend_libs__builtin_ops__V_213_213 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 56));
                                                        {
                                                          backend_libs__builtin_ops__V_214_214 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_214_214, 0) = backend_libs__builtin_ops__X_259;
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__V_215_215 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_215_215, 0) = backend_libs__builtin_ops__Y_260;
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__V_212_212 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_212_212, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_212_212, 1) = ((MR_Box) (backend_libs__builtin_ops__V_213_213));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_212_212, 2) = ((MR_Box) (backend_libs__builtin_ops__V_214_214));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_212_212, 3) = ((MR_Box) (backend_libs__builtin_ops__V_215_215));
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                                          MR_hl_field(MR_mktag(2), backend_libs__builtin_ops__CodePrime_13, 0) = ((MR_Box) (backend_libs__builtin_ops__V_212_212));
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
                                                MR_Word backend_libs__builtin_ops__V_227_227;
                                                MR_Word backend_libs__builtin_ops__V_228_228;
                                                MR_Box backend_libs__builtin_ops__Y_253;

                                                backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_688_688)) == (MR_mktag((MR_Integer) 1)));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  {
                                                    backend_libs__builtin_ops__Y_253 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_688_688, (MR_Integer) 0));
                                                    backend_libs__builtin_ops__V_227_227 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_688_688, (MR_Integer) 1)));
                                                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_227_227 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                    if (backend_libs__builtin_ops__succeeded)
                                                      {
                                                        {
                                                          backend_libs__builtin_ops__V_228_228 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_228_228, 0) = backend_libs__builtin_ops__V_689_689;
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Y_253;
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_228_228));
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
                                              backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_688_688 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
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
                                                MR_Word backend_libs__builtin_ops__V_222_222;
                                                MR_Word backend_libs__builtin_ops__V_223_223;
                                                MR_Word backend_libs__builtin_ops__V_224_224;
                                                MR_Word backend_libs__builtin_ops__V_225_225;
                                                MR_Box backend_libs__builtin_ops__Y_255;

                                                backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_688_688)) == (MR_mktag((MR_Integer) 1)));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  {
                                                    backend_libs__builtin_ops__Y_255 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_688_688, (MR_Integer) 0));
                                                    backend_libs__builtin_ops__V_222_222 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_688_688, (MR_Integer) 1)));
                                                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_222_222 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                    if (backend_libs__builtin_ops__succeeded)
                                                      {
                                                        {
                                                          backend_libs__builtin_ops__V_224_224 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_224_224, 0) = backend_libs__builtin_ops__V_689_689;
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__V_225_225 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_225_225, 0) = backend_libs__builtin_ops__Y_255;
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__V_223_223 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_223_223, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_223_223, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 24))));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_223_223, 2) = ((MR_Box) (backend_libs__builtin_ops__V_224_224));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_223_223, 3) = ((MR_Box) (backend_libs__builtin_ops__V_225_225));
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                                          MR_hl_field(MR_mktag(2), backend_libs__builtin_ops__CodePrime_13, 0) = ((MR_Box) (backend_libs__builtin_ops__V_223_223));
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
                                                MR_Word backend_libs__builtin_ops__V_556_556;
                                                MR_Word backend_libs__builtin_ops__V_557_557;
                                                MR_Word backend_libs__builtin_ops__V_558_558;
                                                MR_Word backend_libs__builtin_ops__V_559_559;
                                                MR_Box backend_libs__builtin_ops__Y_561;

                                                backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_688_688)) == (MR_mktag((MR_Integer) 1)));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  {
                                                    backend_libs__builtin_ops__Y_561 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_688_688, (MR_Integer) 0));
                                                    backend_libs__builtin_ops__V_556_556 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_688_688, (MR_Integer) 1)));
                                                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_556_556 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                    if (backend_libs__builtin_ops__succeeded)
                                                      {
                                                        {
                                                          backend_libs__builtin_ops__V_558_558 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_558_558, 0) = backend_libs__builtin_ops__V_689_689;
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__V_559_559 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_559_559, 0) = backend_libs__builtin_ops__Y_561;
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__V_557_557 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_557_557, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_557_557, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 23))));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_557_557, 2) = ((MR_Box) (backend_libs__builtin_ops__V_558_558));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_557_557, 3) = ((MR_Box) (backend_libs__builtin_ops__V_559_559));
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                                          MR_hl_field(MR_mktag(2), backend_libs__builtin_ops__CodePrime_13, 0) = ((MR_Box) (backend_libs__builtin_ops__V_557_557));
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
                                                MR_Word backend_libs__builtin_ops__V_230_230;
                                                MR_Box backend_libs__builtin_ops__Y_251;

                                                backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_688_688)) == (MR_mktag((MR_Integer) 1)));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  {
                                                    backend_libs__builtin_ops__Y_251 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_688_688, (MR_Integer) 0));
                                                    backend_libs__builtin_ops__V_230_230 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_688_688, (MR_Integer) 1)));
                                                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_230_230 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                    if (backend_libs__builtin_ops__succeeded)
                                                      {
                                                        {
                                                          backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                                          MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__V_689_689;
                                                          MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__CodePrime_13, 1) = backend_libs__builtin_ops__Y_251;
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
                                                MR_Word backend_libs__builtin_ops__V_217_217;
                                                MR_Word backend_libs__builtin_ops__V_218_218;
                                                MR_Word backend_libs__builtin_ops__V_219_219;
                                                MR_Word backend_libs__builtin_ops__V_220_220;
                                                MR_Box backend_libs__builtin_ops__Y_257;

                                                backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_688_688)) == (MR_mktag((MR_Integer) 1)));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  {
                                                    backend_libs__builtin_ops__Y_257 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_688_688, (MR_Integer) 0));
                                                    backend_libs__builtin_ops__V_217_217 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_688_688, (MR_Integer) 1)));
                                                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_217_217 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                    if (backend_libs__builtin_ops__succeeded)
                                                      {
                                                        {
                                                          backend_libs__builtin_ops__V_219_219 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_219_219, 0) = backend_libs__builtin_ops__V_689_689;
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__V_220_220 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_220_220, 0) = backend_libs__builtin_ops__Y_257;
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__V_218_218 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_218_218, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_218_218, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 57))));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_218_218, 2) = ((MR_Box) (backend_libs__builtin_ops__V_219_219));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_218_218, 3) = ((MR_Box) (backend_libs__builtin_ops__V_220_220));
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                                          MR_hl_field(MR_mktag(2), backend_libs__builtin_ops__CodePrime_13, 0) = ((MR_Box) (backend_libs__builtin_ops__V_218_218));
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
                                                MR_Word backend_libs__builtin_ops__V_547_547;
                                                MR_Word backend_libs__builtin_ops__V_548_548;
                                                MR_Word backend_libs__builtin_ops__V_549_549;
                                                MR_Word backend_libs__builtin_ops__V_550_550;
                                                MR_Box backend_libs__builtin_ops__Y_552;

                                                backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_688_688)) == (MR_mktag((MR_Integer) 1)));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  {
                                                    backend_libs__builtin_ops__Y_552 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_688_688, (MR_Integer) 0));
                                                    backend_libs__builtin_ops__V_547_547 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_688_688, (MR_Integer) 1)));
                                                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_547_547 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                    if (backend_libs__builtin_ops__succeeded)
                                                      {
                                                        {
                                                          backend_libs__builtin_ops__V_549_549 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_549_549, 0) = backend_libs__builtin_ops__V_689_689;
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__V_550_550 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_550_550, 0) = backend_libs__builtin_ops__Y_552;
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__V_548_548 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_548_548, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_548_548, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 58))));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_548_548, 2) = ((MR_Box) (backend_libs__builtin_ops__V_549_549));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_548_548, 3) = ((MR_Box) (backend_libs__builtin_ops__V_550_550));
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                                          MR_hl_field(MR_mktag(2), backend_libs__builtin_ops__CodePrime_13, 0) = ((MR_Box) (backend_libs__builtin_ops__V_548_548));
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
                                                MR_Word backend_libs__builtin_ops__V_232_232;

                                                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_688_688 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  {
                                                    backend_libs__builtin_ops__V_232_232 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
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
                            MR_Word backend_libs__builtin_ops__V_201_201;
                            MR_Word backend_libs__builtin_ops__V_202_202;
                            MR_Word backend_libs__builtin_ops__V_203_203;
                            MR_Word backend_libs__builtin_ops__V_204_204;
                            MR_Word backend_libs__builtin_ops__V_205_205;
                            MR_Word backend_libs__builtin_ops__V_206_206;
                            MR_Box backend_libs__builtin_ops__Y_268;

                            backend_libs__builtin_ops__succeeded = (strcmp(backend_libs__builtin_ops__PredName_7, (MR_String) "term_size_plus") == 0);
                            if (backend_libs__builtin_ops__succeeded)
                              {
                                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_12 == (MR_Integer) 0);
                                if (backend_libs__builtin_ops__succeeded)
                                  {
                                    backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_688_688)) == (MR_mktag((MR_Integer) 1)));
                                    if (backend_libs__builtin_ops__succeeded)
                                      {
                                        backend_libs__builtin_ops__Y_268 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_688_688, (MR_Integer) 0));
                                        backend_libs__builtin_ops__V_201_201 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_688_688, (MR_Integer) 1)));
                                        backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_201_201)) == (MR_mktag((MR_Integer) 1)));
                                        if (backend_libs__builtin_ops__succeeded)
                                          {
                                            backend_libs__builtin_ops__Z_46 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_201_201, (MR_Integer) 0));
                                            backend_libs__builtin_ops__V_202_202 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_201_201, (MR_Integer) 1)));
                                            backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_202_202 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                            if (backend_libs__builtin_ops__succeeded)
                                              {
                                                backend_libs__builtin_ops__V_204_204 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                                                {
                                                  backend_libs__builtin_ops__V_205_205 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                  MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_205_205, 0) = backend_libs__builtin_ops__V_689_689;
                                                }
                                                {
                                                  backend_libs__builtin_ops__V_206_206 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                  MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_206_206, 0) = backend_libs__builtin_ops__Y_268;
                                                }
                                                {
                                                  backend_libs__builtin_ops__V_203_203 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                  MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_203_203, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                  MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_203_203, 1) = ((MR_Box) (backend_libs__builtin_ops__V_204_204));
                                                  MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_203_203, 2) = ((MR_Box) (backend_libs__builtin_ops__V_205_205));
                                                  MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_203_203, 3) = ((MR_Box) (backend_libs__builtin_ops__V_206_206));
                                                }
                                                {
                                                  backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                  MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Z_46;
                                                  MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_203_203));
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
                            MR_Word backend_libs__builtin_ops__V_670_670;
                            MR_Box backend_libs__builtin_ops__V_671_671;
                            MR_Integer backend_libs__builtin_ops__slot_4;
                            MR_String backend_libs__builtin_ops__str_5;

                            backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_688_688)) == (MR_mktag((MR_Integer) 1)));
                            if (backend_libs__builtin_ops__succeeded)
                              {
                                backend_libs__builtin_ops__V_671_671 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_688_688, (MR_Integer) 0));
                                backend_libs__builtin_ops__V_670_670 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_688_688, (MR_Integer) 1)));
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
                                            MR_Word backend_libs__builtin_ops__V_590_590;
                                            MR_Word backend_libs__builtin_ops__V_591_591;
                                            MR_Word backend_libs__builtin_ops__V_592_592;
                                            MR_Word backend_libs__builtin_ops__CompareOp_595;

                                            backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_12 == (MR_Integer) 0);
                                            if (backend_libs__builtin_ops__succeeded)
                                              {
                                                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_670_670 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  {
                                                    backend_libs__builtin_ops__CompareOp_595 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 33));
                                                    {
                                                      backend_libs__builtin_ops__V_591_591 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_591_591, 0) = backend_libs__builtin_ops__V_689_689;
                                                    }
                                                    {
                                                      backend_libs__builtin_ops__V_592_592 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_592_592, 0) = backend_libs__builtin_ops__V_671_671;
                                                    }
                                                    {
                                                      backend_libs__builtin_ops__V_590_590 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_590_590, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_590_590, 1) = ((MR_Box) (backend_libs__builtin_ops__CompareOp_595));
                                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_590_590, 2) = ((MR_Box) (backend_libs__builtin_ops__V_591_591));
                                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_590_590, 3) = ((MR_Box) (backend_libs__builtin_ops__V_592_592));
                                                    }
                                                    {
                                                      backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                                      MR_hl_field(MR_mktag(2), backend_libs__builtin_ops__CodePrime_13, 0) = ((MR_Box) (backend_libs__builtin_ops__V_590_590));
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
                                            MR_Word backend_libs__builtin_ops__V_648_648;
                                            MR_Word backend_libs__builtin_ops__V_649_649;
                                            MR_Word backend_libs__builtin_ops__V_650_650;
                                            MR_Word backend_libs__builtin_ops__V_651_651;
                                            MR_Box backend_libs__builtin_ops__Z_654;
                                            MR_Word backend_libs__builtin_ops__ArithOp_655;

                                            backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_12 == (MR_Integer) 0);
                                            if (backend_libs__builtin_ops__succeeded)
                                              {
                                                backend_libs__builtin_ops__ArithOp_655 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 41));
                                                backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_670_670)) == (MR_mktag((MR_Integer) 1)));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  {
                                                    backend_libs__builtin_ops__Z_654 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_670_670, (MR_Integer) 0));
                                                    backend_libs__builtin_ops__V_648_648 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_670_670, (MR_Integer) 1)));
                                                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_648_648 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                    if (backend_libs__builtin_ops__succeeded)
                                                      {
                                                        {
                                                          backend_libs__builtin_ops__V_650_650 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_650_650, 0) = backend_libs__builtin_ops__V_689_689;
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__V_651_651 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_651_651, 0) = backend_libs__builtin_ops__V_671_671;
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__V_649_649 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_649_649, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_649_649, 1) = ((MR_Box) (backend_libs__builtin_ops__ArithOp_655));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_649_649, 2) = ((MR_Box) (backend_libs__builtin_ops__V_650_650));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_649_649, 3) = ((MR_Box) (backend_libs__builtin_ops__V_651_651));
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Z_654;
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_649_649));
                                                        }
                                                        backend_libs__builtin_ops__succeeded = MR_TRUE;
                                                      }
                                                  }
                                              }
                                          }
                                        }
                                        break;
                                      case (MR_Integer) 9:
                                        {
                                          /* case "unchecked_right_shift" */
                                          {
                                            MR_Word backend_libs__builtin_ops__V_638_638;
                                            MR_Word backend_libs__builtin_ops__V_639_639;
                                            MR_Word backend_libs__builtin_ops__V_640_640;
                                            MR_Word backend_libs__builtin_ops__V_641_641;
                                            MR_Box backend_libs__builtin_ops__Z_644;
                                            MR_Word backend_libs__builtin_ops__ArithOp_645;

                                            backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_12 == (MR_Integer) 0);
                                            if (backend_libs__builtin_ops__succeeded)
                                              {
                                                backend_libs__builtin_ops__ArithOp_645 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 43));
                                                backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_670_670)) == (MR_mktag((MR_Integer) 1)));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  {
                                                    backend_libs__builtin_ops__Z_644 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_670_670, (MR_Integer) 0));
                                                    backend_libs__builtin_ops__V_638_638 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_670_670, (MR_Integer) 1)));
                                                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_638_638 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                    if (backend_libs__builtin_ops__succeeded)
                                                      {
                                                        {
                                                          backend_libs__builtin_ops__V_640_640 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_640_640, 0) = backend_libs__builtin_ops__V_689_689;
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__V_641_641 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_641_641, 0) = backend_libs__builtin_ops__V_671_671;
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__V_639_639 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_639_639, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_639_639, 1) = ((MR_Box) (backend_libs__builtin_ops__ArithOp_645));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_639_639, 2) = ((MR_Box) (backend_libs__builtin_ops__V_640_640));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_639_639, 3) = ((MR_Box) (backend_libs__builtin_ops__V_641_641));
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Z_644;
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_639_639));
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
                                            MR_Word backend_libs__builtin_ops__V_564_564;
                                            MR_Word backend_libs__builtin_ops__V_565_565;
                                            MR_Word backend_libs__builtin_ops__V_566_566;
                                            MR_Word backend_libs__builtin_ops__V_567_567;
                                            MR_Box backend_libs__builtin_ops__Z_570;
                                            MR_Word backend_libs__builtin_ops__ArithOp_571;

                                            backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_12 == (MR_Integer) 0);
                                            if (backend_libs__builtin_ops__succeeded)
                                              {
                                                backend_libs__builtin_ops__ArithOp_571 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 39));
                                                backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_670_670)) == (MR_mktag((MR_Integer) 1)));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  {
                                                    backend_libs__builtin_ops__Z_570 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_670_670, (MR_Integer) 0));
                                                    backend_libs__builtin_ops__V_564_564 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_670_670, (MR_Integer) 1)));
                                                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_564_564 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                    if (backend_libs__builtin_ops__succeeded)
                                                      {
                                                        {
                                                          backend_libs__builtin_ops__V_566_566 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_566_566, 0) = backend_libs__builtin_ops__V_689_689;
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__V_567_567 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_567_567, 0) = backend_libs__builtin_ops__V_671_671;
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__V_565_565 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_565_565, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_565_565, 1) = ((MR_Box) (backend_libs__builtin_ops__ArithOp_571));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_565_565, 2) = ((MR_Box) (backend_libs__builtin_ops__V_566_566));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_565_565, 3) = ((MR_Box) (backend_libs__builtin_ops__V_567_567));
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Z_570;
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_565_565));
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
                                            MR_Word backend_libs__builtin_ops__V_628_628;
                                            MR_Word backend_libs__builtin_ops__V_629_629;
                                            MR_Word backend_libs__builtin_ops__V_630_630;
                                            MR_Word backend_libs__builtin_ops__V_631_631;
                                            MR_Box backend_libs__builtin_ops__Z_634;
                                            MR_Word backend_libs__builtin_ops__ArithOp_635;

                                            backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_12 == (MR_Integer) 0);
                                            if (backend_libs__builtin_ops__succeeded)
                                              {
                                                backend_libs__builtin_ops__ArithOp_635 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 38));
                                                backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_670_670)) == (MR_mktag((MR_Integer) 1)));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  {
                                                    backend_libs__builtin_ops__Z_634 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_670_670, (MR_Integer) 0));
                                                    backend_libs__builtin_ops__V_628_628 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_670_670, (MR_Integer) 1)));
                                                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_628_628 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                    if (backend_libs__builtin_ops__succeeded)
                                                      {
                                                        {
                                                          backend_libs__builtin_ops__V_630_630 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_630_630, 0) = backend_libs__builtin_ops__V_689_689;
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__V_631_631 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_631_631, 0) = backend_libs__builtin_ops__V_671_671;
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__V_629_629 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_629_629, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_629_629, 1) = ((MR_Box) (backend_libs__builtin_ops__ArithOp_635));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_629_629, 2) = ((MR_Box) (backend_libs__builtin_ops__V_630_630));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_629_629, 3) = ((MR_Box) (backend_libs__builtin_ops__V_631_631));
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Z_634;
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_629_629));
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
                                            MR_Word backend_libs__builtin_ops__V_618_618;
                                            MR_Word backend_libs__builtin_ops__V_619_619;
                                            MR_Word backend_libs__builtin_ops__V_620_620;
                                            MR_Word backend_libs__builtin_ops__V_621_621;
                                            MR_Box backend_libs__builtin_ops__Z_624;
                                            MR_Word backend_libs__builtin_ops__ArithOp_625;

                                            backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_12 == (MR_Integer) 0);
                                            if (backend_libs__builtin_ops__succeeded)
                                              {
                                                backend_libs__builtin_ops__ArithOp_625 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 37));
                                                backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_670_670)) == (MR_mktag((MR_Integer) 1)));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  {
                                                    backend_libs__builtin_ops__Z_624 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_670_670, (MR_Integer) 0));
                                                    backend_libs__builtin_ops__V_618_618 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_670_670, (MR_Integer) 1)));
                                                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_618_618 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                    if (backend_libs__builtin_ops__succeeded)
                                                      {
                                                        {
                                                          backend_libs__builtin_ops__V_620_620 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_620_620, 0) = backend_libs__builtin_ops__V_689_689;
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__V_621_621 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_621_621, 0) = backend_libs__builtin_ops__V_671_671;
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__V_619_619 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_619_619, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_619_619, 1) = ((MR_Box) (backend_libs__builtin_ops__ArithOp_625));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_619_619, 2) = ((MR_Box) (backend_libs__builtin_ops__V_620_620));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_619_619, 3) = ((MR_Box) (backend_libs__builtin_ops__V_621_621));
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Z_624;
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_619_619));
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
                                            MR_Word backend_libs__builtin_ops__V_126_126;
                                            MR_Word backend_libs__builtin_ops__V_127_127;
                                            MR_Word backend_libs__builtin_ops__V_128_128;

                                            backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_12 == (MR_Integer) 0);
                                            if (backend_libs__builtin_ops__succeeded)
                                              {
                                                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_670_670 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  {
                                                    backend_libs__builtin_ops__V_127_127 = (MR_Integer) 8;
                                                    {
                                                      backend_libs__builtin_ops__V_128_128 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_128_128, 0) = backend_libs__builtin_ops__V_689_689;
                                                    }
                                                    {
                                                      backend_libs__builtin_ops__V_126_126 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_126_126, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_126_126, 1) = ((MR_Box) (backend_libs__builtin_ops__V_127_127));
                                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_126_126, 2) = ((MR_Box) (backend_libs__builtin_ops__V_128_128));
                                                    }
                                                    {
                                                      backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__V_671_671;
                                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_126_126));
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
                                            MR_Word backend_libs__builtin_ops__V_574_574;
                                            MR_Word backend_libs__builtin_ops__V_575_575;
                                            MR_Word backend_libs__builtin_ops__V_576_576;
                                            MR_Word backend_libs__builtin_ops__CompareOp_579;

                                            backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_12 == (MR_Integer) 0);
                                            if (backend_libs__builtin_ops__succeeded)
                                              {
                                                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_670_670 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  {
                                                    backend_libs__builtin_ops__CompareOp_579 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 32));
                                                    {
                                                      backend_libs__builtin_ops__V_575_575 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_575_575, 0) = backend_libs__builtin_ops__V_689_689;
                                                    }
                                                    {
                                                      backend_libs__builtin_ops__V_576_576 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_576_576, 0) = backend_libs__builtin_ops__V_671_671;
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
                                        }
                                        break;
                                      case (MR_Integer) 42:
                                        {
                                          /* case "+" */
                                          {
                                            MR_Word backend_libs__builtin_ops__V_111_111;
                                            MR_Box backend_libs__builtin_ops__Z_314;

                                            backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_670_670)) == (MR_mktag((MR_Integer) 1)));
                                            if (backend_libs__builtin_ops__succeeded)
                                              {
                                                backend_libs__builtin_ops__Z_314 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_670_670, (MR_Integer) 0));
                                                backend_libs__builtin_ops__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_670_670, (MR_Integer) 1)));
                                                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_111_111 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  switch (backend_libs__builtin_ops__ProcNum_12) {
                                                    default:
                                                      backend_libs__builtin_ops__succeeded = MR_FALSE;
                                                      break;
                                                    case (MR_Integer) 0:
                                                      {
                                                        MR_Word backend_libs__builtin_ops__V_120_120;
                                                        MR_Word backend_libs__builtin_ops__V_122_122;
                                                        MR_Word backend_libs__builtin_ops__V_123_123;

                                                        {
                                                          backend_libs__builtin_ops__V_122_122 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_122_122, 0) = backend_libs__builtin_ops__V_689_689;
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__V_123_123 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_123_123, 0) = backend_libs__builtin_ops__V_671_671;
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__V_120_120 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_120_120, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_120_120, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 34))));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_120_120, 2) = ((MR_Box) (backend_libs__builtin_ops__V_122_122));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_120_120, 3) = ((MR_Box) (backend_libs__builtin_ops__V_123_123));
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Z_314;
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_120_120));
                                                        }
                                                        backend_libs__builtin_ops__succeeded = MR_TRUE;
                                                      }
                                                      break;
                                                    case (MR_Integer) 1:
                                                      {
                                                        MR_Word backend_libs__builtin_ops__V_116_116;
                                                        MR_Word backend_libs__builtin_ops__V_118_118;
                                                        MR_Word backend_libs__builtin_ops__V_119_119;

                                                        {
                                                          backend_libs__builtin_ops__V_118_118 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_118_118, 0) = backend_libs__builtin_ops__Z_314;
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__V_119_119 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_119_119, 0) = backend_libs__builtin_ops__V_671_671;
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__V_116_116 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_116_116, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_116_116, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 35))));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_116_116, 2) = ((MR_Box) (backend_libs__builtin_ops__V_118_118));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_116_116, 3) = ((MR_Box) (backend_libs__builtin_ops__V_119_119));
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__V_689_689;
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_116_116));
                                                        }
                                                        backend_libs__builtin_ops__succeeded = MR_TRUE;
                                                      }
                                                      break;
                                                    case (MR_Integer) 2:
                                                      {
                                                        MR_Word backend_libs__builtin_ops__V_112_112;
                                                        MR_Word backend_libs__builtin_ops__V_114_114;
                                                        MR_Word backend_libs__builtin_ops__V_115_115;

                                                        {
                                                          backend_libs__builtin_ops__V_114_114 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_114_114, 0) = backend_libs__builtin_ops__Z_314;
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__V_115_115 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_115_115, 0) = backend_libs__builtin_ops__V_689_689;
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__V_112_112 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_112_112, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_112_112, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 35))));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_112_112, 2) = ((MR_Box) (backend_libs__builtin_ops__V_114_114));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_112_112, 3) = ((MR_Box) (backend_libs__builtin_ops__V_115_115));
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__V_671_671;
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_112_112));
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
                                            MR_Word backend_libs__builtin_ops__V_90_90;
                                            MR_Word backend_libs__builtin_ops__V_91_91;
                                            MR_Word backend_libs__builtin_ops__V_92_92;
                                            MR_Word backend_libs__builtin_ops__V_93_93;
                                            MR_Box backend_libs__builtin_ops__Z_320;
                                            MR_Word backend_libs__builtin_ops__ArithOp_321;

                                            backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_12 == (MR_Integer) 0);
                                            if (backend_libs__builtin_ops__succeeded)
                                              {
                                                backend_libs__builtin_ops__ArithOp_321 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 36));
                                                backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_670_670)) == (MR_mktag((MR_Integer) 1)));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  {
                                                    backend_libs__builtin_ops__Z_320 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_670_670, (MR_Integer) 0));
                                                    backend_libs__builtin_ops__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_670_670, (MR_Integer) 1)));
                                                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_90_90 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                    if (backend_libs__builtin_ops__succeeded)
                                                      {
                                                        {
                                                          backend_libs__builtin_ops__V_92_92 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_92_92, 0) = backend_libs__builtin_ops__V_689_689;
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__V_93_93 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_93_93, 0) = backend_libs__builtin_ops__V_671_671;
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__V_91_91 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_91_91, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_91_91, 1) = ((MR_Box) (backend_libs__builtin_ops__ArithOp_321));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_91_91, 2) = ((MR_Box) (backend_libs__builtin_ops__V_92_92));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_91_91, 3) = ((MR_Box) (backend_libs__builtin_ops__V_93_93));
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Z_320;
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_91_91));
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
                                            MR_Word backend_libs__builtin_ops__V_96_96;
                                            MR_Box backend_libs__builtin_ops__Z_317;

                                            backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_670_670)) == (MR_mktag((MR_Integer) 1)));
                                            if (backend_libs__builtin_ops__succeeded)
                                              {
                                                backend_libs__builtin_ops__Z_317 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_670_670, (MR_Integer) 0));
                                                backend_libs__builtin_ops__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_670_670, (MR_Integer) 1)));
                                                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_96_96 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  switch (backend_libs__builtin_ops__ProcNum_12) {
                                                    default:
                                                      backend_libs__builtin_ops__succeeded = MR_FALSE;
                                                      break;
                                                    case (MR_Integer) 0:
                                                      {
                                                        MR_Word backend_libs__builtin_ops__V_105_105;
                                                        MR_Word backend_libs__builtin_ops__V_107_107;
                                                        MR_Word backend_libs__builtin_ops__V_108_108;

                                                        {
                                                          backend_libs__builtin_ops__V_107_107 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_107_107, 0) = backend_libs__builtin_ops__V_689_689;
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__V_108_108 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_108_108, 0) = backend_libs__builtin_ops__V_671_671;
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__V_105_105 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_105_105, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_105_105, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_105_105, 2) = ((MR_Box) (backend_libs__builtin_ops__V_107_107));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_105_105, 3) = ((MR_Box) (backend_libs__builtin_ops__V_108_108));
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Z_317;
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_105_105));
                                                        }
                                                        backend_libs__builtin_ops__succeeded = MR_TRUE;
                                                      }
                                                      break;
                                                    case (MR_Integer) 1:
                                                      {
                                                        MR_Word backend_libs__builtin_ops__V_101_101;
                                                        MR_Word backend_libs__builtin_ops__V_103_103;
                                                        MR_Word backend_libs__builtin_ops__V_104_104;

                                                        {
                                                          backend_libs__builtin_ops__V_103_103 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_103_103, 0) = backend_libs__builtin_ops__V_671_671;
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__V_104_104 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_104_104, 0) = backend_libs__builtin_ops__Z_317;
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__V_101_101 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_101_101, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_101_101, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 34))));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_101_101, 2) = ((MR_Box) (backend_libs__builtin_ops__V_103_103));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_101_101, 3) = ((MR_Box) (backend_libs__builtin_ops__V_104_104));
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__V_689_689;
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_101_101));
                                                        }
                                                        backend_libs__builtin_ops__succeeded = MR_TRUE;
                                                      }
                                                      break;
                                                    case (MR_Integer) 2:
                                                      {
                                                        MR_Word backend_libs__builtin_ops__V_97_97;
                                                        MR_Word backend_libs__builtin_ops__V_99_99;
                                                        MR_Word backend_libs__builtin_ops__V_100_100;

                                                        {
                                                          backend_libs__builtin_ops__V_99_99 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_99_99, 0) = backend_libs__builtin_ops__V_689_689;
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__V_100_100 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_100_100, 0) = backend_libs__builtin_ops__Z_317;
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__V_97_97 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_97_97, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_97_97, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 35))));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_97_97, 2) = ((MR_Box) (backend_libs__builtin_ops__V_99_99));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_97_97, 3) = ((MR_Box) (backend_libs__builtin_ops__V_100_100));
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__V_671_671;
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_97_97));
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
                                            MR_Word backend_libs__builtin_ops__V_598_598;
                                            MR_Word backend_libs__builtin_ops__V_599_599;
                                            MR_Word backend_libs__builtin_ops__V_600_600;
                                            MR_Word backend_libs__builtin_ops__V_601_601;
                                            MR_Box backend_libs__builtin_ops__Z_604;
                                            MR_Word backend_libs__builtin_ops__ArithOp_605;

                                            backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_12 == (MR_Integer) 0);
                                            if (backend_libs__builtin_ops__succeeded)
                                              {
                                                backend_libs__builtin_ops__ArithOp_605 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 40));
                                                backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_670_670)) == (MR_mktag((MR_Integer) 1)));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  {
                                                    backend_libs__builtin_ops__Z_604 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_670_670, (MR_Integer) 0));
                                                    backend_libs__builtin_ops__V_598_598 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_670_670, (MR_Integer) 1)));
                                                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_598_598 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                    if (backend_libs__builtin_ops__succeeded)
                                                      {
                                                        {
                                                          backend_libs__builtin_ops__V_600_600 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_600_600, 0) = backend_libs__builtin_ops__V_689_689;
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__V_601_601 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_601_601, 0) = backend_libs__builtin_ops__V_671_671;
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__V_599_599 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_599_599, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_599_599, 1) = ((MR_Box) (backend_libs__builtin_ops__ArithOp_605));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_599_599, 2) = ((MR_Box) (backend_libs__builtin_ops__V_600_600));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_599_599, 3) = ((MR_Box) (backend_libs__builtin_ops__V_601_601));
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Z_604;
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_599_599));
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
                                            MR_Word backend_libs__builtin_ops__V_608_608;
                                            MR_Word backend_libs__builtin_ops__V_609_609;
                                            MR_Word backend_libs__builtin_ops__V_610_610;
                                            MR_Word backend_libs__builtin_ops__V_611_611;
                                            MR_Box backend_libs__builtin_ops__Z_614;
                                            MR_Word backend_libs__builtin_ops__ArithOp_615;

                                            backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_12 == (MR_Integer) 0);
                                            if (backend_libs__builtin_ops__succeeded)
                                              {
                                                backend_libs__builtin_ops__ArithOp_615 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 42));
                                                backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_670_670)) == (MR_mktag((MR_Integer) 1)));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  {
                                                    backend_libs__builtin_ops__Z_614 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_670_670, (MR_Integer) 0));
                                                    backend_libs__builtin_ops__V_608_608 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_670_670, (MR_Integer) 1)));
                                                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_608_608 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                    if (backend_libs__builtin_ops__succeeded)
                                                      {
                                                        {
                                                          backend_libs__builtin_ops__V_610_610 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_610_610, 0) = backend_libs__builtin_ops__V_689_689;
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__V_611_611 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_611_611, 0) = backend_libs__builtin_ops__V_671_671;
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__V_609_609 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_609_609, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_609_609, 1) = ((MR_Box) (backend_libs__builtin_ops__ArithOp_615));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_609_609, 2) = ((MR_Box) (backend_libs__builtin_ops__V_610_610));
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_609_609, 3) = ((MR_Box) (backend_libs__builtin_ops__V_611_611));
                                                        }
                                                        {
                                                          backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Z_614;
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_609_609));
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
                                            MR_Word backend_libs__builtin_ops__V_85_85;
                                            MR_Word backend_libs__builtin_ops__V_86_86;
                                            MR_Word backend_libs__builtin_ops__V_87_87;
                                            MR_Word backend_libs__builtin_ops__CompareOp_324;

                                            backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_12 == (MR_Integer) 0);
                                            if (backend_libs__builtin_ops__succeeded)
                                              {
                                                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_670_670 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  {
                                                    backend_libs__builtin_ops__CompareOp_324 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 30));
                                                    {
                                                      backend_libs__builtin_ops__V_86_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_86_86, 0) = backend_libs__builtin_ops__V_689_689;
                                                    }
                                                    {
                                                      backend_libs__builtin_ops__V_87_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_87_87, 0) = backend_libs__builtin_ops__V_671_671;
                                                    }
                                                    {
                                                      backend_libs__builtin_ops__V_85_85 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_85_85, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_85_85, 1) = ((MR_Box) (backend_libs__builtin_ops__CompareOp_324));
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
                                        }
                                        break;
                                      case (MR_Integer) 63:
                                        {
                                          /* case ">" */
                                          {
                                            MR_Word backend_libs__builtin_ops__V_582_582;
                                            MR_Word backend_libs__builtin_ops__V_583_583;
                                            MR_Word backend_libs__builtin_ops__V_584_584;
                                            MR_Word backend_libs__builtin_ops__CompareOp_587;

                                            backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_12 == (MR_Integer) 0);
                                            if (backend_libs__builtin_ops__succeeded)
                                              {
                                                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_670_670 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  {
                                                    backend_libs__builtin_ops__CompareOp_587 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 31));
                                                    {
                                                      backend_libs__builtin_ops__V_583_583 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_583_583, 0) = backend_libs__builtin_ops__V_689_689;
                                                    }
                                                    {
                                                      backend_libs__builtin_ops__V_584_584 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_584_584, 0) = backend_libs__builtin_ops__V_671_671;
                                                    }
                                                    {
                                                      backend_libs__builtin_ops__V_582_582 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_582_582, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_582_582, 1) = ((MR_Box) (backend_libs__builtin_ops__CompareOp_587));
                                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_582_582, 2) = ((MR_Box) (backend_libs__builtin_ops__V_583_583));
                                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_582_582, 3) = ((MR_Box) (backend_libs__builtin_ops__V_584_584));
                                                    }
                                                    {
                                                      backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                                      MR_hl_field(MR_mktag(2), backend_libs__builtin_ops__CodePrime_13, 0) = ((MR_Box) (backend_libs__builtin_ops__V_582_582));
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
    MR_Word backend_libs__builtin_ops__V_665_665;
    MR_Box backend_libs__builtin_ops__V_666_666;
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
            backend_libs__builtin_ops__V_666_666 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Args_8, (MR_Integer) 0));
            backend_libs__builtin_ops__V_665_665 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Args_8, (MR_Integer) 1)));
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
                            MR_Word backend_libs__builtin_ops__V_219_219;
                            MR_Box backend_libs__builtin_ops__Y_19;

                            backend_libs__builtin_ops__succeeded = (strcmp(backend_libs__builtin_ops__PredName_6, (MR_String) "unsafe_promise_unique") == 0);
                            if (backend_libs__builtin_ops__succeeded)
                              {
                                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_10 == (MR_Integer) 0);
                                if (backend_libs__builtin_ops__succeeded)
                                  {
                                    backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_665_665)) == (MR_mktag((MR_Integer) 1)));
                                    if (backend_libs__builtin_ops__succeeded)
                                      {
                                        backend_libs__builtin_ops__Y_19 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_665_665, (MR_Integer) 0));
                                        backend_libs__builtin_ops__V_219_219 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_665_665, (MR_Integer) 1)));
                                        backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_219_219 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
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
                            MR_Word backend_libs__builtin_ops__V_675_675;
                            MR_Box backend_libs__builtin_ops__V_676_676;
                            MR_Integer backend_libs__builtin_ops__slot_9;
                            MR_String backend_libs__builtin_ops__str_10;

                            backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_10 == (MR_Integer) 0);
                            if (backend_libs__builtin_ops__succeeded)
                              {
                                backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_665_665)) == (MR_mktag((MR_Integer) 1)));
                                if (backend_libs__builtin_ops__succeeded)
                                  {
                                    backend_libs__builtin_ops__V_676_676 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_665_665, (MR_Integer) 0));
                                    backend_libs__builtin_ops__V_675_675 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_665_665, (MR_Integer) 1)));
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
                                              backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_675_675 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                            }
                                            break;
                                          case (MR_Integer) 3:
                                            {
                                              /* case "=<" */
                                              backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_675_675 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                            }
                                            break;
                                          case (MR_Integer) 8:
                                            {
                                              /* case "unchecked_quotient" */
                                              {
                                                MR_Word backend_libs__builtin_ops__V_377_377;
                                                MR_Box backend_libs__builtin_ops__Z_383;

                                                backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_675_675)) == (MR_mktag((MR_Integer) 1)));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  {
                                                    backend_libs__builtin_ops__Z_383 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_675_675, (MR_Integer) 0));
                                                    backend_libs__builtin_ops__V_377_377 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_675_675, (MR_Integer) 1)));
                                                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_377_377 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                  }
                                              }
                                            }
                                            break;
                                          case (MR_Integer) 10:
                                            {
                                              /* case "+" */
                                              if ((backend_libs__builtin_ops__V_675_675 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                                                backend_libs__builtin_ops__succeeded = MR_TRUE;
                                              else
                                                {
                                                  MR_Word backend_libs__builtin_ops__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_675_675, (MR_Integer) 1)));
                                                  MR_Box backend_libs__builtin_ops__Z_316 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_675_675, (MR_Integer) 0));

                                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_52_52 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                }
                                            }
                                            break;
                                          case (MR_Integer) 11:
                                            {
                                              /* case "*" */
                                              {
                                                MR_Word backend_libs__builtin_ops__V_32_32;
                                                MR_Box backend_libs__builtin_ops__Z_336;

                                                backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_675_675)) == (MR_mktag((MR_Integer) 1)));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  {
                                                    backend_libs__builtin_ops__Z_336 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_675_675, (MR_Integer) 0));
                                                    backend_libs__builtin_ops__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_675_675, (MR_Integer) 1)));
                                                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_32_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                  }
                                              }
                                            }
                                            break;
                                          case (MR_Integer) 12:
                                            {
                                              /* case "-" */
                                              if ((backend_libs__builtin_ops__V_675_675 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                                                backend_libs__builtin_ops__succeeded = MR_TRUE;
                                              else
                                                {
                                                  MR_Word backend_libs__builtin_ops__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_675_675, (MR_Integer) 1)));
                                                  MR_Box backend_libs__builtin_ops__Z_327 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_675_675, (MR_Integer) 0));

                                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_38_38 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                }
                                            }
                                            break;
                                          case (MR_Integer) 13:
                                            {
                                              /* case "<" */
                                              backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_675_675 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                            }
                                            break;
                                          case (MR_Integer) 15:
                                            {
                                              /* case ">" */
                                              backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_675_675 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
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
                            MR_Word backend_libs__builtin_ops__V_677_677;
                            MR_Box backend_libs__builtin_ops__V_678_678;

                            backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_665_665)) == (MR_mktag((MR_Integer) 1)));
                            if (backend_libs__builtin_ops__succeeded)
                              {
                                backend_libs__builtin_ops__V_678_678 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_665_665, (MR_Integer) 0));
                                backend_libs__builtin_ops__V_677_677 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_665_665, (MR_Integer) 1)));
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
                                          MR_Word backend_libs__builtin_ops__V_118_118;
                                          MR_Box backend_libs__builtin_ops__Z_273;

                                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_10 == (MR_Integer) 0);
                                          if (backend_libs__builtin_ops__succeeded)
                                            {
                                              backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_677_677)) == (MR_mktag((MR_Integer) 1)));
                                              if (backend_libs__builtin_ops__succeeded)
                                                {
                                                  backend_libs__builtin_ops__Z_273 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_677_677, (MR_Integer) 0));
                                                  backend_libs__builtin_ops__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_677_677, (MR_Integer) 1)));
                                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_118_118 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
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
                                            if ((backend_libs__builtin_ops__V_677_677 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                                              backend_libs__builtin_ops__succeeded = MR_TRUE;
                                            else
                                              {
                                                MR_Word backend_libs__builtin_ops__V_164_164 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_677_677, (MR_Integer) 1)));
                                                MR_Box backend_libs__builtin_ops__Z_248 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_677_677, (MR_Integer) 0));

                                                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_164_164 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                              }
                                            break;
                                          case (MR_Integer) 1:
                                            {
                                              MR_Word backend_libs__builtin_ops__V_387_387;
                                              MR_Box backend_libs__builtin_ops__Z_390;

                                              backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_677_677)) == (MR_mktag((MR_Integer) 1)));
                                              if (backend_libs__builtin_ops__succeeded)
                                                {
                                                  backend_libs__builtin_ops__Z_390 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_677_677, (MR_Integer) 0));
                                                  backend_libs__builtin_ops__V_387_387 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_677_677, (MR_Integer) 1)));
                                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_387_387 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                }
                                            }
                                            break;
                                          case (MR_Integer) 2:
                                            {
                                              MR_Word backend_libs__builtin_ops__V_393_393;
                                              MR_Box backend_libs__builtin_ops__Z_396;

                                              backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_677_677)) == (MR_mktag((MR_Integer) 1)));
                                              if (backend_libs__builtin_ops__succeeded)
                                                {
                                                  backend_libs__builtin_ops__Z_396 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_677_677, (MR_Integer) 0));
                                                  backend_libs__builtin_ops__V_393_393 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_677_677, (MR_Integer) 1)));
                                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_393_393 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
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
                                            if ((backend_libs__builtin_ops__V_677_677 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                                              backend_libs__builtin_ops__succeeded = MR_TRUE;
                                            else
                                              {
                                                MR_Word backend_libs__builtin_ops__V_146_146 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_677_677, (MR_Integer) 1)));
                                                MR_Box backend_libs__builtin_ops__Z_259 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_677_677, (MR_Integer) 0));

                                                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_146_146 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                              }
                                            break;
                                          case (MR_Integer) 1:
                                            {
                                              MR_Word backend_libs__builtin_ops__V_399_399;
                                              MR_Box backend_libs__builtin_ops__Z_402;

                                              backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_677_677)) == (MR_mktag((MR_Integer) 1)));
                                              if (backend_libs__builtin_ops__succeeded)
                                                {
                                                  backend_libs__builtin_ops__Z_402 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_677_677, (MR_Integer) 0));
                                                  backend_libs__builtin_ops__V_399_399 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_677_677, (MR_Integer) 1)));
                                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_399_399 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                }
                                            }
                                            break;
                                          case (MR_Integer) 2:
                                            {
                                              MR_Word backend_libs__builtin_ops__V_405_405;
                                              MR_Box backend_libs__builtin_ops__Z_408;

                                              backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_677_677)) == (MR_mktag((MR_Integer) 1)));
                                              if (backend_libs__builtin_ops__succeeded)
                                                {
                                                  backend_libs__builtin_ops__Z_408 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_677_677, (MR_Integer) 0));
                                                  backend_libs__builtin_ops__V_405_405 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_677_677, (MR_Integer) 1)));
                                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_405_405 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
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
                                          MR_Word backend_libs__builtin_ops__V_412_412;
                                          MR_Box backend_libs__builtin_ops__Z_418;

                                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_10 == (MR_Integer) 0);
                                          if (backend_libs__builtin_ops__succeeded)
                                            {
                                              backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_677_677)) == (MR_mktag((MR_Integer) 1)));
                                              if (backend_libs__builtin_ops__succeeded)
                                                {
                                                  backend_libs__builtin_ops__Z_418 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_677_677, (MR_Integer) 0));
                                                  backend_libs__builtin_ops__V_412_412 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_677_677, (MR_Integer) 1)));
                                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_412_412 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
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
                                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_677_677 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                      }
                                      break;
                                    case (MR_Integer) 5:
                                      {
                                        /* case "=<" */
                                        backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_10 == (MR_Integer) 0);
                                        if (backend_libs__builtin_ops__succeeded)
                                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_677_677 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                      }
                                      break;
                                    case (MR_Integer) 6:
                                      {
                                        /* case ">" */
                                        backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_10 == (MR_Integer) 0);
                                        if (backend_libs__builtin_ops__succeeded)
                                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_677_677 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                      }
                                      break;
                                    case (MR_Integer) 7:
                                      {
                                        /* case ">=" */
                                        backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_10 == (MR_Integer) 0);
                                        if (backend_libs__builtin_ops__succeeded)
                                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_677_677 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                      }
                                      break;
                                    case (MR_Integer) 8:
                                      {
                                        /* case "\" */
                                        backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_10 == (MR_Integer) 0);
                                        if (backend_libs__builtin_ops__succeeded)
                                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_677_677 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                      }
                                      break;
                                    case (MR_Integer) 9:
                                      {
                                        /* case "\/" */
                                        {
                                          MR_Word backend_libs__builtin_ops__V_446_446;
                                          MR_Box backend_libs__builtin_ops__Z_452;

                                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_10 == (MR_Integer) 0);
                                          if (backend_libs__builtin_ops__succeeded)
                                            {
                                              backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_677_677)) == (MR_mktag((MR_Integer) 1)));
                                              if (backend_libs__builtin_ops__succeeded)
                                                {
                                                  backend_libs__builtin_ops__Z_452 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_677_677, (MR_Integer) 0));
                                                  backend_libs__builtin_ops__V_446_446 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_677_677, (MR_Integer) 1)));
                                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_446_446 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                }
                                            }
                                        }
                                      }
                                      break;
                                    case (MR_Integer) 10:
                                      {
                                        /* case "minus" */
                                        {
                                          MR_Word backend_libs__builtin_ops__V_456_456;
                                          MR_Box backend_libs__builtin_ops__Z_462;

                                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_10 == (MR_Integer) 0);
                                          if (backend_libs__builtin_ops__succeeded)
                                            {
                                              backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_677_677)) == (MR_mktag((MR_Integer) 1)));
                                              if (backend_libs__builtin_ops__succeeded)
                                                {
                                                  backend_libs__builtin_ops__Z_462 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_677_677, (MR_Integer) 0));
                                                  backend_libs__builtin_ops__V_456_456 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_677_677, (MR_Integer) 1)));
                                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_456_456 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                }
                                            }
                                        }
                                      }
                                      break;
                                    case (MR_Integer) 11:
                                      {
                                        /* case "plus" */
                                        {
                                          MR_Word backend_libs__builtin_ops__V_466_466;
                                          MR_Box backend_libs__builtin_ops__Z_472;

                                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_10 == (MR_Integer) 0);
                                          if (backend_libs__builtin_ops__succeeded)
                                            {
                                              backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_677_677)) == (MR_mktag((MR_Integer) 1)));
                                              if (backend_libs__builtin_ops__succeeded)
                                                {
                                                  backend_libs__builtin_ops__Z_472 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_677_677, (MR_Integer) 0));
                                                  backend_libs__builtin_ops__V_466_466 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_677_677, (MR_Integer) 1)));
                                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_466_466 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                }
                                            }
                                        }
                                      }
                                      break;
                                    case (MR_Integer) 12:
                                      {
                                        /* case "times" */
                                        {
                                          MR_Word backend_libs__builtin_ops__V_476_476;
                                          MR_Box backend_libs__builtin_ops__Z_482;

                                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_10 == (MR_Integer) 0);
                                          if (backend_libs__builtin_ops__succeeded)
                                            {
                                              backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_677_677)) == (MR_mktag((MR_Integer) 1)));
                                              if (backend_libs__builtin_ops__succeeded)
                                                {
                                                  backend_libs__builtin_ops__Z_482 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_677_677, (MR_Integer) 0));
                                                  backend_libs__builtin_ops__V_476_476 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_677_677, (MR_Integer) 1)));
                                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_476_476 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                }
                                            }
                                        }
                                      }
                                      break;
                                    case (MR_Integer) 13:
                                      {
                                        /* case "unchecked_left_shift" */
                                        {
                                          MR_Word backend_libs__builtin_ops__V_486_486;
                                          MR_Box backend_libs__builtin_ops__Z_492;

                                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_10 == (MR_Integer) 0);
                                          if (backend_libs__builtin_ops__succeeded)
                                            {
                                              backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_677_677)) == (MR_mktag((MR_Integer) 1)));
                                              if (backend_libs__builtin_ops__succeeded)
                                                {
                                                  backend_libs__builtin_ops__Z_492 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_677_677, (MR_Integer) 0));
                                                  backend_libs__builtin_ops__V_486_486 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_677_677, (MR_Integer) 1)));
                                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_486_486 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                }
                                            }
                                        }
                                      }
                                      break;
                                    case (MR_Integer) 14:
                                      {
                                        /* case "unchecked_quotient" */
                                        {
                                          MR_Word backend_libs__builtin_ops__V_496_496;
                                          MR_Box backend_libs__builtin_ops__Z_502;

                                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_10 == (MR_Integer) 0);
                                          if (backend_libs__builtin_ops__succeeded)
                                            {
                                              backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_677_677)) == (MR_mktag((MR_Integer) 1)));
                                              if (backend_libs__builtin_ops__succeeded)
                                                {
                                                  backend_libs__builtin_ops__Z_502 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_677_677, (MR_Integer) 0));
                                                  backend_libs__builtin_ops__V_496_496 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_677_677, (MR_Integer) 1)));
                                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_496_496 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                }
                                            }
                                        }
                                      }
                                      break;
                                    case (MR_Integer) 15:
                                      {
                                        /* case "unchecked_rem" */
                                        {
                                          MR_Word backend_libs__builtin_ops__V_506_506;
                                          MR_Box backend_libs__builtin_ops__Z_512;

                                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_10 == (MR_Integer) 0);
                                          if (backend_libs__builtin_ops__succeeded)
                                            {
                                              backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_677_677)) == (MR_mktag((MR_Integer) 1)));
                                              if (backend_libs__builtin_ops__succeeded)
                                                {
                                                  backend_libs__builtin_ops__Z_512 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_677_677, (MR_Integer) 0));
                                                  backend_libs__builtin_ops__V_506_506 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_677_677, (MR_Integer) 1)));
                                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_506_506 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                }
                                            }
                                        }
                                      }
                                      break;
                                    case (MR_Integer) 16:
                                      {
                                        /* case "unchecked_right_shift" */
                                        {
                                          MR_Word backend_libs__builtin_ops__V_516_516;
                                          MR_Box backend_libs__builtin_ops__Z_522;

                                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_10 == (MR_Integer) 0);
                                          if (backend_libs__builtin_ops__succeeded)
                                            {
                                              backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_677_677)) == (MR_mktag((MR_Integer) 1)));
                                              if (backend_libs__builtin_ops__succeeded)
                                                {
                                                  backend_libs__builtin_ops__Z_522 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_677_677, (MR_Integer) 0));
                                                  backend_libs__builtin_ops__V_516_516 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_677_677, (MR_Integer) 1)));
                                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_516_516 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                }
                                            }
                                        }
                                      }
                                      break;
                                    case (MR_Integer) 17:
                                      {
                                        /* case "xor" */
                                        {
                                          MR_Word backend_libs__builtin_ops__V_124_124;
                                          MR_Box backend_libs__builtin_ops__Z_270;

                                          backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_677_677)) == (MR_mktag((MR_Integer) 1)));
                                          if (backend_libs__builtin_ops__succeeded)
                                            {
                                              backend_libs__builtin_ops__Z_270 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_677_677, (MR_Integer) 0));
                                              backend_libs__builtin_ops__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_677_677, (MR_Integer) 1)));
                                              backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_124_124 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
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
                              backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_665_665 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
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
                                                MR_Word backend_libs__builtin_ops__V_663_663;
                                                MR_Box backend_libs__builtin_ops__V_664_664;

                                                backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_665_665)) == (MR_mktag((MR_Integer) 1)));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  {
                                                    backend_libs__builtin_ops__V_664_664 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_665_665, (MR_Integer) 0));
                                                    backend_libs__builtin_ops__V_663_663 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_665_665, (MR_Integer) 1)));
                                                    if ((backend_libs__builtin_ops__V_663_663 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                                                      backend_libs__builtin_ops__succeeded = MR_TRUE;
                                                    else
                                                      {
                                                        MR_Word backend_libs__builtin_ops__V_186_186 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_663_663, (MR_Integer) 1)));
                                                        MR_Box backend_libs__builtin_ops__Y_237 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_663_663, (MR_Integer) 0));

                                                        backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_186_186 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                      }
                                                  }
                                              }
                                            }
                                            break;
                                          case (MR_Integer) 2:
                                            {
                                              /* case "unsafe_type_cast" */
                                              {
                                                MR_Word backend_libs__builtin_ops__V_204_204;
                                                MR_Box backend_libs__builtin_ops__Y_230;

                                                backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_665_665)) == (MR_mktag((MR_Integer) 1)));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  {
                                                    backend_libs__builtin_ops__Y_230 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_665_665, (MR_Integer) 0));
                                                    backend_libs__builtin_ops__V_204_204 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_665_665, (MR_Integer) 1)));
                                                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_204_204 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                  }
                                              }
                                            }
                                            break;
                                          case (MR_Integer) 3:
                                            {
                                              /* case "trace_get_io_state" */
                                              backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_665_665 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                            }
                                            break;
                                          case (MR_Integer) 9:
                                            {
                                              /* case "builtin_int_gt" */
                                              {
                                                MR_Word backend_libs__builtin_ops__V_199_199;
                                                MR_Box backend_libs__builtin_ops__Y_232;

                                                backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_665_665)) == (MR_mktag((MR_Integer) 1)));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  {
                                                    backend_libs__builtin_ops__Y_232 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_665_665, (MR_Integer) 0));
                                                    backend_libs__builtin_ops__V_199_199 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_665_665, (MR_Integer) 1)));
                                                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_199_199 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                  }
                                              }
                                            }
                                            break;
                                          case (MR_Integer) 14:
                                            {
                                              /* case "builtin_int_lt" */
                                              {
                                                MR_Word backend_libs__builtin_ops__V_533_533;
                                                MR_Box backend_libs__builtin_ops__Y_538;

                                                backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_665_665)) == (MR_mktag((MR_Integer) 1)));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  {
                                                    backend_libs__builtin_ops__Y_538 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_665_665, (MR_Integer) 0));
                                                    backend_libs__builtin_ops__V_533_533 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_665_665, (MR_Integer) 1)));
                                                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_533_533 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                  }
                                              }
                                            }
                                            break;
                                          case (MR_Integer) 17:
                                          case (MR_Integer) 21:
                                            {
                                              /* case "store_at_ref", "store_at_ref_impure" */
                                              {
                                                MR_Word backend_libs__builtin_ops__V_207_207;
                                                MR_Box backend_libs__builtin_ops__Y_228;

                                                backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_665_665)) == (MR_mktag((MR_Integer) 1)));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  {
                                                    backend_libs__builtin_ops__Y_228 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_665_665, (MR_Integer) 0));
                                                    backend_libs__builtin_ops__V_207_207 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_665_665, (MR_Integer) 1)));
                                                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_207_207 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                  }
                                              }
                                            }
                                            break;
                                          case (MR_Integer) 27:
                                            {
                                              /* case "builtin_compound_eq" */
                                              {
                                                MR_Word backend_libs__builtin_ops__V_194_194;
                                                MR_Box backend_libs__builtin_ops__Y_234;

                                                backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_665_665)) == (MR_mktag((MR_Integer) 1)));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  {
                                                    backend_libs__builtin_ops__Y_234 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_665_665, (MR_Integer) 0));
                                                    backend_libs__builtin_ops__V_194_194 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_665_665, (MR_Integer) 1)));
                                                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_194_194 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                  }
                                              }
                                            }
                                            break;
                                          case (MR_Integer) 29:
                                            {
                                              /* case "builtin_compound_lt" */
                                              {
                                                MR_Word backend_libs__builtin_ops__V_524_524;
                                                MR_Box backend_libs__builtin_ops__Y_529;

                                                backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_665_665)) == (MR_mktag((MR_Integer) 1)));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  {
                                                    backend_libs__builtin_ops__Y_529 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_665_665, (MR_Integer) 0));
                                                    backend_libs__builtin_ops__V_524_524 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_665_665, (MR_Integer) 1)));
                                                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_524_524 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                  }
                                              }
                                            }
                                            break;
                                          case (MR_Integer) 31:
                                            {
                                              /* case "trace_set_io_state" */
                                              backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_665_665 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
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
                            MR_Word backend_libs__builtin_ops__V_178_178;
                            MR_Word backend_libs__builtin_ops__V_179_179;
                            MR_Box backend_libs__builtin_ops__Y_245;
                            MR_Box backend_libs__builtin_ops__Z_23;

                            backend_libs__builtin_ops__succeeded = (strcmp(backend_libs__builtin_ops__PredName_6, (MR_String) "term_size_plus") == 0);
                            if (backend_libs__builtin_ops__succeeded)
                              {
                                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_10 == (MR_Integer) 0);
                                if (backend_libs__builtin_ops__succeeded)
                                  {
                                    backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_665_665)) == (MR_mktag((MR_Integer) 1)));
                                    if (backend_libs__builtin_ops__succeeded)
                                      {
                                        backend_libs__builtin_ops__Y_245 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_665_665, (MR_Integer) 0));
                                        backend_libs__builtin_ops__V_178_178 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_665_665, (MR_Integer) 1)));
                                        backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_178_178)) == (MR_mktag((MR_Integer) 1)));
                                        if (backend_libs__builtin_ops__succeeded)
                                          {
                                            backend_libs__builtin_ops__Z_23 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_178_178, (MR_Integer) 0));
                                            backend_libs__builtin_ops__V_179_179 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_178_178, (MR_Integer) 1)));
                                            backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_179_179 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
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
                            MR_Word backend_libs__builtin_ops__V_647_647;
                            MR_Box backend_libs__builtin_ops__V_648_648;
                            MR_Integer backend_libs__builtin_ops__slot_4;
                            MR_String backend_libs__builtin_ops__str_5;

                            backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_665_665)) == (MR_mktag((MR_Integer) 1)));
                            if (backend_libs__builtin_ops__succeeded)
                              {
                                backend_libs__builtin_ops__V_648_648 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_665_665, (MR_Integer) 0));
                                backend_libs__builtin_ops__V_647_647 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_665_665, (MR_Integer) 1)));
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
                                            backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_647_647 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                        }
                                        break;
                                      case (MR_Integer) 6:
                                        {
                                          /* case "xor" */
                                          {
                                            MR_Word backend_libs__builtin_ops__V_625_625;
                                            MR_Box backend_libs__builtin_ops__Z_631;

                                            backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_10 == (MR_Integer) 0);
                                            if (backend_libs__builtin_ops__succeeded)
                                              {
                                                backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_647_647)) == (MR_mktag((MR_Integer) 1)));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  {
                                                    backend_libs__builtin_ops__Z_631 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_647_647, (MR_Integer) 0));
                                                    backend_libs__builtin_ops__V_625_625 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_647_647, (MR_Integer) 1)));
                                                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_625_625 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                  }
                                              }
                                          }
                                        }
                                        break;
                                      case (MR_Integer) 9:
                                        {
                                          /* case "unchecked_right_shift" */
                                          {
                                            MR_Word backend_libs__builtin_ops__V_615_615;
                                            MR_Box backend_libs__builtin_ops__Z_621;

                                            backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_10 == (MR_Integer) 0);
                                            if (backend_libs__builtin_ops__succeeded)
                                              {
                                                backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_647_647)) == (MR_mktag((MR_Integer) 1)));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  {
                                                    backend_libs__builtin_ops__Z_621 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_647_647, (MR_Integer) 0));
                                                    backend_libs__builtin_ops__V_615_615 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_647_647, (MR_Integer) 1)));
                                                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_615_615 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                  }
                                              }
                                          }
                                        }
                                        break;
                                      case (MR_Integer) 17:
                                        {
                                          /* case "/\" */
                                          {
                                            MR_Word backend_libs__builtin_ops__V_541_541;
                                            MR_Box backend_libs__builtin_ops__Z_547;

                                            backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_10 == (MR_Integer) 0);
                                            if (backend_libs__builtin_ops__succeeded)
                                              {
                                                backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_647_647)) == (MR_mktag((MR_Integer) 1)));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  {
                                                    backend_libs__builtin_ops__Z_547 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_647_647, (MR_Integer) 0));
                                                    backend_libs__builtin_ops__V_541_541 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_647_647, (MR_Integer) 1)));
                                                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_541_541 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                  }
                                              }
                                          }
                                        }
                                        break;
                                      case (MR_Integer) 20:
                                        {
                                          /* case "unchecked_rem" */
                                          {
                                            MR_Word backend_libs__builtin_ops__V_605_605;
                                            MR_Box backend_libs__builtin_ops__Z_611;

                                            backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_10 == (MR_Integer) 0);
                                            if (backend_libs__builtin_ops__succeeded)
                                              {
                                                backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_647_647)) == (MR_mktag((MR_Integer) 1)));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  {
                                                    backend_libs__builtin_ops__Z_611 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_647_647, (MR_Integer) 0));
                                                    backend_libs__builtin_ops__V_605_605 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_647_647, (MR_Integer) 1)));
                                                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_605_605 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                  }
                                              }
                                          }
                                        }
                                        break;
                                      case (MR_Integer) 24:
                                        {
                                          /* case "unchecked_quotient" */
                                          {
                                            MR_Word backend_libs__builtin_ops__V_595_595;
                                            MR_Box backend_libs__builtin_ops__Z_601;

                                            backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_10 == (MR_Integer) 0);
                                            if (backend_libs__builtin_ops__succeeded)
                                              {
                                                backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_647_647)) == (MR_mktag((MR_Integer) 1)));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  {
                                                    backend_libs__builtin_ops__Z_601 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_647_647, (MR_Integer) 0));
                                                    backend_libs__builtin_ops__V_595_595 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_647_647, (MR_Integer) 1)));
                                                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_595_595 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
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
                                            backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_647_647 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                        }
                                        break;
                                      case (MR_Integer) 35:
                                        {
                                          /* case "=<" */
                                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_10 == (MR_Integer) 0);
                                          if (backend_libs__builtin_ops__succeeded)
                                            backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_647_647 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                        }
                                        break;
                                      case (MR_Integer) 42:
                                        {
                                          /* case "+" */
                                          {
                                            MR_Word backend_libs__builtin_ops__V_88_88;
                                            MR_Box backend_libs__builtin_ops__Z_291;

                                            backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_647_647)) == (MR_mktag((MR_Integer) 1)));
                                            if (backend_libs__builtin_ops__succeeded)
                                              {
                                                backend_libs__builtin_ops__Z_291 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_647_647, (MR_Integer) 0));
                                                backend_libs__builtin_ops__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_647_647, (MR_Integer) 1)));
                                                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_88_88 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
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
                                            MR_Word backend_libs__builtin_ops__V_67_67;
                                            MR_Box backend_libs__builtin_ops__Z_297;

                                            backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_10 == (MR_Integer) 0);
                                            if (backend_libs__builtin_ops__succeeded)
                                              {
                                                backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_647_647)) == (MR_mktag((MR_Integer) 1)));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  {
                                                    backend_libs__builtin_ops__Z_297 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_647_647, (MR_Integer) 0));
                                                    backend_libs__builtin_ops__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_647_647, (MR_Integer) 1)));
                                                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_67_67 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                  }
                                              }
                                          }
                                        }
                                        break;
                                      case (MR_Integer) 44:
                                        {
                                          /* case "-" */
                                          {
                                            MR_Word backend_libs__builtin_ops__V_73_73;
                                            MR_Box backend_libs__builtin_ops__Z_294;

                                            backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_647_647)) == (MR_mktag((MR_Integer) 1)));
                                            if (backend_libs__builtin_ops__succeeded)
                                              {
                                                backend_libs__builtin_ops__Z_294 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_647_647, (MR_Integer) 0));
                                                backend_libs__builtin_ops__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_647_647, (MR_Integer) 1)));
                                                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_73_73 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
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
                                            MR_Word backend_libs__builtin_ops__V_575_575;
                                            MR_Box backend_libs__builtin_ops__Z_581;

                                            backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_10 == (MR_Integer) 0);
                                            if (backend_libs__builtin_ops__succeeded)
                                              {
                                                backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_647_647)) == (MR_mktag((MR_Integer) 1)));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  {
                                                    backend_libs__builtin_ops__Z_581 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_647_647, (MR_Integer) 0));
                                                    backend_libs__builtin_ops__V_575_575 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_647_647, (MR_Integer) 1)));
                                                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_575_575 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                  }
                                              }
                                          }
                                        }
                                        break;
                                      case (MR_Integer) 51:
                                        {
                                          /* case "unchecked_left_shift" */
                                          {
                                            MR_Word backend_libs__builtin_ops__V_585_585;
                                            MR_Box backend_libs__builtin_ops__Z_591;

                                            backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_10 == (MR_Integer) 0);
                                            if (backend_libs__builtin_ops__succeeded)
                                              {
                                                backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_647_647)) == (MR_mktag((MR_Integer) 1)));
                                                if (backend_libs__builtin_ops__succeeded)
                                                  {
                                                    backend_libs__builtin_ops__Z_591 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_647_647, (MR_Integer) 0));
                                                    backend_libs__builtin_ops__V_585_585 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_647_647, (MR_Integer) 1)));
                                                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_585_585 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
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
                                            backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_647_647 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                        }
                                        break;
                                      case (MR_Integer) 63:
                                        {
                                          /* case ">" */
                                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_10 == (MR_Integer) 0);
                                          if (backend_libs__builtin_ops__succeeded)
                                            backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_647_647 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
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
