/*
** Automatically generated from `builtin_ops.m'
** by the Mercury compiler,
** version rotd-2026-04-06
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


// :- module backend_libs.builtin_ops.
// :- implementation.

/*
INIT mercury__backend_libs__builtin_ops__init
ENDINIT
*/

#include "backend_libs.builtin_ops.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
#include "bimap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "hlds.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "require.mih"
#include "robdd.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "analysis.framework.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_markers.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.status.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.polyhedron.mih"
#include "mdbcomp.builtin_modules.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"




static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_arith_op_0_0;

static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_arith_op_0_1;

static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_arith_op_0_2;

static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_arith_op_0_3;

static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_arith_op_0_4;

static const MR_EnumFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__enum_ordinal_ordered_arith_op_0[5];

static const MR_EnumFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__enum_name_ordered_arith_op_0[5];

static const MR_Integer backend_libs__builtin_ops__backend_libs__builtin_ops__functor_number_map_arith_op_0[5];

static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_array_elem_type_0_0[1];

static const MR_DuArgLocn backend_libs__builtin_ops__backend_libs__builtin_ops__field_locns_array_elem_type_0_0[1];

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_array_elem_type_0_0;

static const MR_FA_TypeInfo_Struct1 backend_libs__builtin_ops__list__ti_list_1backend_libs__builtin_ops__type_ctor_info_scalar_array_elem_type_0;

static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_array_elem_type_0_1[1];

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_array_elem_type_0_1;

static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_array_elem_type_0_0[1];

static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_array_elem_type_0_1[1];

static const MR_DuPtagLayout backend_libs__builtin_ops__backend_libs__builtin_ops__du_ptag_ordered_array_elem_type_0[2];

static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_name_ordered_array_elem_type_0[2];

static const MR_Integer backend_libs__builtin_ops__backend_libs__builtin_ops__functor_number_map_array_elem_type_0[2];

static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_binary_op_0_0[2];

static const MR_DuArgLocn backend_libs__builtin_ops__backend_libs__builtin_ops__field_locns_binary_op_0_0[2];

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_0;

static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_binary_op_0_1[2];

static const MR_DuArgLocn backend_libs__builtin_ops__backend_libs__builtin_ops__field_locns_binary_op_0_1[2];

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_1;

static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_binary_op_0_2[2];

static const MR_DuArgLocn backend_libs__builtin_ops__backend_libs__builtin_ops__field_locns_binary_op_0_2[2];

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_2;

static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_binary_op_0_3[1];

static const MR_DuArgLocn backend_libs__builtin_ops__backend_libs__builtin_ops__field_locns_binary_op_0_3[1];

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_3;

static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_binary_op_0_4[1];

static const MR_DuArgLocn backend_libs__builtin_ops__backend_libs__builtin_ops__field_locns_binary_op_0_4[1];

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_4;

static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_binary_op_0_5[1];

static const MR_DuArgLocn backend_libs__builtin_ops__backend_libs__builtin_ops__field_locns_binary_op_0_5[1];

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_5;

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_6;

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_7;

static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_binary_op_0_8[2];

static const MR_DuArgLocn backend_libs__builtin_ops__backend_libs__builtin_ops__field_locns_binary_op_0_8[2];

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_8;

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_9;

static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_binary_op_0_10[1];

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_10;

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_11;

static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_binary_op_0_12[1];

static const MR_DuArgLocn backend_libs__builtin_ops__backend_libs__builtin_ops__field_locns_binary_op_0_12[1];

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_12;

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_13;

static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_binary_op_0_14[2];

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_14;

static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_binary_op_0_15[1];

static const MR_DuArgLocn backend_libs__builtin_ops__backend_libs__builtin_ops__field_locns_binary_op_0_15[1];

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_15;

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_16;

static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_binary_op_0_17[1];

static const MR_DuArgLocn backend_libs__builtin_ops__backend_libs__builtin_ops__field_locns_binary_op_0_17[1];

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_17;

static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_binary_op_0_18[1];

static const MR_DuArgLocn backend_libs__builtin_ops__backend_libs__builtin_ops__field_locns_binary_op_0_18[1];

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_18;

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_19;

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_20;

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_21;

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_22;

static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_binary_op_0_0[10];

static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_binary_op_0_1[1];

static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_binary_op_0_2[1];

static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_binary_op_0_3[11];

static const MR_DuPtagLayout backend_libs__builtin_ops__backend_libs__builtin_ops__du_ptag_ordered_binary_op_0[4];

static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_name_ordered_binary_op_0[23];

static const MR_Integer backend_libs__builtin_ops__backend_libs__builtin_ops__functor_number_map_binary_op_0[23];

static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_cmp_op_0_0;

static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_cmp_op_0_1;

static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_cmp_op_0_2;

static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_cmp_op_0_3;

static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_cmp_op_0_4;

static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_cmp_op_0_5;

static const MR_EnumFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__enum_ordinal_ordered_cmp_op_0[6];

static const MR_EnumFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__enum_name_ordered_cmp_op_0[6];

static const MR_Integer backend_libs__builtin_ops__backend_libs__builtin_ops__functor_number_map_cmp_op_0[6];

static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_float_arith_op_0_0;

static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_float_arith_op_0_1;

static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_float_arith_op_0_2;

static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_float_arith_op_0_3;

static const MR_EnumFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__enum_ordinal_ordered_float_arith_op_0[4];

static const MR_EnumFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__enum_name_ordered_float_arith_op_0[4];

static const MR_Integer backend_libs__builtin_ops__backend_libs__builtin_ops__functor_number_map_float_arith_op_0[4];

static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_int_as_uint_cmp_op_0_0;

static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_int_as_uint_cmp_op_0_1;

static const MR_EnumFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__enum_ordinal_ordered_int_as_uint_cmp_op_0[2];

static const MR_EnumFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__enum_name_ordered_int_as_uint_cmp_op_0[2];

static const MR_Integer backend_libs__builtin_ops__backend_libs__builtin_ops__functor_number_map_int_as_uint_cmp_op_0[2];

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_maybe_size_0_0;

static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_maybe_size_0_1[1];

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_maybe_size_0_1;

static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_maybe_size_0_0[1];

static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_maybe_size_0_1[1];

static const MR_DuPtagLayout backend_libs__builtin_ops__backend_libs__builtin_ops__du_ptag_ordered_maybe_size_0[2];

static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_name_ordered_maybe_size_0[2];

static const MR_Integer backend_libs__builtin_ops__backend_libs__builtin_ops__functor_number_map_maybe_size_0[2];

static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_scalar_array_elem_type_0_0;

static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_scalar_array_elem_type_0_1;

static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_scalar_array_elem_type_0_2;

static const MR_EnumFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__enum_ordinal_ordered_scalar_array_elem_type_0[3];

static const MR_EnumFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__enum_name_ordered_scalar_array_elem_type_0[3];

static const MR_Integer backend_libs__builtin_ops__backend_libs__builtin_ops__functor_number_map_scalar_array_elem_type_0[3];

static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_shift_by_type_0_0;

static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_shift_by_type_0_1;

static const MR_EnumFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__enum_ordinal_ordered_shift_by_type_0[2];

static const MR_EnumFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__enum_name_ordered_shift_by_type_0[2];

static const MR_Integer backend_libs__builtin_ops__backend_libs__builtin_ops__functor_number_map_shift_by_type_0[2];

static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_assigned_expr_1_0[1];

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_assigned_expr_1_0;

static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_assigned_expr_1_1[1];

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_assigned_expr_1_1;

static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_assigned_expr_1_2[3];

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_assigned_expr_1_2;

static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_assigned_expr_1_3[3];

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_assigned_expr_1_3;

static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_assigned_expr_1_4[2];

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_assigned_expr_1_4;

static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_simple_assigned_expr_1_0[1];

static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_simple_assigned_expr_1_1[1];

static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_simple_assigned_expr_1_2[1];

static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_simple_assigned_expr_1_3[2];

static const MR_DuPtagLayout backend_libs__builtin_ops__backend_libs__builtin_ops__du_ptag_ordered_simple_assigned_expr_1[4];

static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_name_ordered_simple_assigned_expr_1[5];

static const MR_Integer backend_libs__builtin_ops__backend_libs__builtin_ops__functor_number_map_simple_assigned_expr_1[5];

static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__builtin_ops__backend_libs__builtin_ops__pti_simple_assigned_expr_1__pseudo_1;

static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_code_1_0[2];

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_code_1_0;

static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_code_1_1[2];

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_code_1_1;

static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__builtin_ops__backend_libs__builtin_ops__pti_simple_test_expr_1__pseudo_1;

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

static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_const_0_0[1];

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_const_0_0;

static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_const_0_1[1];

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_const_0_1;

static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_const_0_2[1];

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_const_0_2;

static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_const_0_3[1];

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_const_0_3;

static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_const_0_4[1];

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_const_0_4;

static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_const_0_5[1];

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_const_0_5;

static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_const_0_6[1];

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_const_0_6;

static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_const_0_7[1];

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_const_0_7;

static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_const_0_8[1];

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_const_0_8;

static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_const_0_9[1];

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_const_0_9;

static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_const_0_10[1];

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_const_0_10;

static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_simple_const_0_0[1];

static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_simple_const_0_1[1];

static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_simple_const_0_2[1];

static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_simple_const_0_3[8];

static const MR_DuPtagLayout backend_libs__builtin_ops__backend_libs__builtin_ops__du_ptag_ordered_simple_const_0[4];

static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_name_ordered_simple_const_0[11];

static const MR_Integer backend_libs__builtin_ops__backend_libs__builtin_ops__functor_number_map_simple_const_0[11];

static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_test_expr_1_0[3];

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_test_expr_1_0;

static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_simple_test_expr_1_0[1];

static const MR_DuPtagLayout backend_libs__builtin_ops__backend_libs__builtin_ops__du_ptag_ordered_simple_test_expr_1[1];

static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_name_ordered_simple_test_expr_1[1];

static const MR_Integer backend_libs__builtin_ops__backend_libs__builtin_ops__functor_number_map_simple_test_expr_1[1];

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_unary_op_0_0;

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_unary_op_0_1;

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_unary_op_0_2;

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_unary_op_0_3;

static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_unary_op_0_4[1];

static const MR_DuArgLocn backend_libs__builtin_ops__backend_libs__builtin_ops__field_locns_unary_op_0_4[1];

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_unary_op_0_4;

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_unary_op_0_5;

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_unary_op_0_6;

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_unary_op_0_7;

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_unary_op_0_8;

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_unary_op_0_9;

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_unary_op_0_10;

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_unary_op_0_11;

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_unary_op_0_12;

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_unary_op_0_13;

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_unary_op_0_14;

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_unary_op_0_15;

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_unary_op_0_16;

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_unary_op_0_17;

static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_unary_op_0_0[17];

static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_unary_op_0_1[1];

static const MR_DuPtagLayout backend_libs__builtin_ops__backend_libs__builtin_ops__du_ptag_ordered_unary_op_0[2];

static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_name_ordered_unary_op_0[18];

static const MR_Integer backend_libs__builtin_ops__backend_libs__builtin_ops__functor_number_map_unary_op_0[18];

static MR_bool MR_CALL 
backend_libs__builtin_ops__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_102_108_111_97_116_95_95_91_49_93_95_48_4_p_0(
  MR_String PredName_5,
  MR_Integer ProcNum_6,
  MR_Word Args_7,
  MR_Word * Code_8);

static MR_bool MR_CALL 
backend_libs__builtin_ops__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_105_110_116_95_95_91_49_93_95_48_5_p_0(
  MR_Word IT_6,
  MR_String PredName_7,
  MR_Integer ProcNum_8,
  MR_Word Args_9,
  MR_Word * Code_10);

static MR_Word MR_CALL 
backend_libs__builtin_ops__make_int_zero_const_1_f_0(
  MR_Word HeadVar__1_1);

static MR_bool MR_CALL 
backend_libs__builtin_ops__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_91_49_93_95_48_4_p_0(
  MR_String PredName_5,
  MR_Integer ProcNum_6,
  MR_Word Args_7,
  MR_Word * Code_8);

static MR_bool MR_CALL 
backend_libs__builtin_ops____Unify____arith_op_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
backend_libs__builtin_ops____Compare____arith_op_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
backend_libs__builtin_ops____Unify____array_elem_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
backend_libs__builtin_ops____Compare____array_elem_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
backend_libs__builtin_ops____Unify____binary_op_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
backend_libs__builtin_ops____Compare____binary_op_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
backend_libs__builtin_ops____Unify____cmp_op_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
backend_libs__builtin_ops____Compare____cmp_op_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
backend_libs__builtin_ops____Unify____float_arith_op_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
backend_libs__builtin_ops____Compare____float_arith_op_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
backend_libs__builtin_ops____Unify____int_as_uint_cmp_op_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
backend_libs__builtin_ops____Compare____int_as_uint_cmp_op_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
backend_libs__builtin_ops____Unify____maybe_size_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
backend_libs__builtin_ops____Compare____maybe_size_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
backend_libs__builtin_ops____Unify____scalar_array_elem_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
backend_libs__builtin_ops____Compare____scalar_array_elem_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
backend_libs__builtin_ops____Unify____shift_by_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
backend_libs__builtin_ops____Compare____shift_by_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
backend_libs__builtin_ops____Unify____simple_assigned_expr_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
backend_libs__builtin_ops____Compare____simple_assigned_expr_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
backend_libs__builtin_ops____Unify____simple_code_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
backend_libs__builtin_ops____Compare____simple_code_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
backend_libs__builtin_ops____Unify____simple_const_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
backend_libs__builtin_ops____Compare____simple_const_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
backend_libs__builtin_ops____Unify____simple_test_expr_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
backend_libs__builtin_ops____Compare____simple_test_expr_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
backend_libs__builtin_ops____Unify____unary_op_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
backend_libs__builtin_ops____Compare____unary_op_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box backend_libs__builtin_ops_scalar_common_1[39][2];

static /* final */ const MR_Box backend_libs__builtin_ops_scalar_common_2[6][1];

static /* final */ const MR_Float backend_libs__builtin_ops_scalar_common_3[1];

static /* final */ const int64_t backend_libs__builtin_ops_scalar_common_4[1];

static /* final */ const uint64_t backend_libs__builtin_ops_scalar_common_5[1];


struct backend_libs__builtin_ops__vector_common_type_6_0_s {
  const MR_Word backend_libs__builtin_ops__vector_common_type_6_0__vct_6_f_0;
};

static /* final */ const struct backend_libs__builtin_ops__vector_common_type_6_0_s backend_libs__builtin_ops_vector_common_6[6];

struct backend_libs__builtin_ops__vector_common_type_7_0_s {
  const MR_String backend_libs__builtin_ops__vector_common_type_7_0__vct_7_f_0;
};

static /* final */ const struct backend_libs__builtin_ops__vector_common_type_7_0_s backend_libs__builtin_ops_vector_common_7[166];

struct backend_libs__builtin_ops__vector_common_type_8_0_s {
  const MR_Word backend_libs__builtin_ops__vector_common_type_8_0__vct_8_f_0;
};

static /* final */ const struct backend_libs__builtin_ops__vector_common_type_8_0_s backend_libs__builtin_ops_vector_common_8[10];



static /* final */ const MR_Box backend_libs__builtin_ops_scalar_common_1[39][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&backend_libs__builtin_ops__backend_libs__builtin_ops__type_ctor_info_scalar_array_elem_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    (MR_Box) ((MR_Unsigned) 3U)
  },
  /* row   2 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    (MR_Box) ((MR_Unsigned) 2U)
  },
  /* row   3 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row   4 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row   5 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 7U)),
    (MR_Box) (&backend_libs__builtin_ops_scalar_common_3[0])
  },
  /* row   6 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) (MR_Word) (INT16_C(0)))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 3U)),
    ((MR_Box) (MR_Word) (INT32_C(0)))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    (MR_Box) (&backend_libs__builtin_ops_scalar_common_4[0])
  },
  /* row   9 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 2U)),
    ((MR_Box) (MR_Word) (UINT16_C(0)))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_Word) (UINT32_C(0)))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    (MR_Box) (&backend_libs__builtin_ops_scalar_common_5[0])
  },
  /* row  12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_Word) (UINT8_C(0)))
  },
  /* row  13 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    (MR_Box) (((((MR_Unsigned) 4U << 3)) | (MR_Unsigned) 4U))
  },
  /* row  14 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    (MR_Box) (((((MR_Unsigned) 4U << 3)) | (MR_Unsigned) 2U))
  },
  /* row  15 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    (MR_Box) (((((MR_Unsigned) 6U << 3)) | (MR_Unsigned) 4U))
  },
  /* row  16 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    (MR_Box) (((((MR_Unsigned) 6U << 3)) | (MR_Unsigned) 2U))
  },
  /* row  17 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    (MR_Box) (((((MR_Unsigned) 8U << 3)) | (MR_Unsigned) 4U))
  },
  /* row  18 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    (MR_Box) (((((MR_Unsigned) 8U << 3)) | (MR_Unsigned) 2U))
  },
  /* row  19 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    (MR_Box) (((((MR_Unsigned) 2U << 3)) | (MR_Unsigned) 4U))
  },
  /* row  20 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    (MR_Box) (((((MR_Unsigned) 2U << 3)) | (MR_Unsigned) 2U))
  },
  /* row  21 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    (MR_Box) (((((MR_Unsigned) 0U << 3)) | (MR_Unsigned) 4U))
  },
  /* row  22 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    (MR_Box) (((((MR_Unsigned) 0U << 3)) | (MR_Unsigned) 2U))
  },
  /* row  23 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    (MR_Box) (((((MR_Unsigned) 5U << 3)) | (MR_Unsigned) 4U))
  },
  /* row  24 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    (MR_Box) (((((MR_Unsigned) 5U << 3)) | (MR_Unsigned) 2U))
  },
  /* row  25 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    (MR_Box) (((((MR_Unsigned) 7U << 3)) | (MR_Unsigned) 4U))
  },
  /* row  26 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    (MR_Box) (((((MR_Unsigned) 7U << 3)) | (MR_Unsigned) 2U))
  },
  /* row  27 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    (MR_Box) (((((MR_Unsigned) 9U << 3)) | (MR_Unsigned) 4U))
  },
  /* row  28 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    (MR_Box) (((((MR_Unsigned) 9U << 3)) | (MR_Unsigned) 2U))
  },
  /* row  29 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    (MR_Box) (((((MR_Unsigned) 3U << 3)) | (MR_Unsigned) 4U))
  },
  /* row  30 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    (MR_Box) (((((MR_Unsigned) 3U << 3)) | (MR_Unsigned) 2U))
  },
  /* row  31 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    (MR_Box) (((((MR_Unsigned) 1U << 3)) | (MR_Unsigned) 4U))
  },
  /* row  32 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    (MR_Box) (((((MR_Unsigned) 1U << 3)) | (MR_Unsigned) 2U))
  },
  /* row  33 */
  {
    ((MR_Box) ((MR_Unsigned) 9U)),
    (MR_Box) ((MR_Unsigned) 2U)
  },
  /* row  34 */
  {
    ((MR_Box) ((MR_Unsigned) 9U)),
    (MR_Box) ((MR_Unsigned) 3U)
  },
  /* row  35 */
  {
    ((MR_Box) ((MR_Unsigned) 10U)),
    (MR_Box) ((MR_Unsigned) 2U)
  },
  /* row  36 */
  {
    ((MR_Box) ((MR_Unsigned) 10U)),
    (MR_Box) ((MR_Unsigned) 3U)
  },
  /* row  37 */
  {
    ((MR_Box) ((MR_Unsigned) 10U)),
    (MR_Box) ((MR_Unsigned) 4U)
  },
  /* row  38 */
  {
    ((MR_Box) ((MR_Unsigned) 10U)),
    (MR_Box) ((MR_Unsigned) 5U)
  },
};

static /* final */ const MR_Box backend_libs__builtin_ops_scalar_common_2[6][1] = {
  /* row   0 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
  /* row   1 */
  { ((MR_Box) ((MR_Unsigned) 0U)) },
  /* row   2 */
  { (MR_Box) (((MR_Unsigned) 0U << 3)) },
  /* row   3 */
  { ((MR_Box) ((MR_Integer) 0)) },
  /* row   4 */
  { ((MR_Box) (MR_Word) (INT8_C(0))) },
  /* row   5 */
  { ((MR_Box) ((MR_Unsigned) 0U)) },
};

static /* final */ const MR_Float backend_libs__builtin_ops_scalar_common_3[1] = {
  /* row   0 */
  (MR_Float) 0.0000000000000000,
};

static /* final */ const int64_t backend_libs__builtin_ops_scalar_common_4[1] = {
  /* row   0 */
  INT64_C(0),
};

static /* final */ const uint64_t backend_libs__builtin_ops_scalar_common_5[1] = {
  /* row   0 */
  UINT64_C(0),
};


static /* final */ const struct backend_libs__builtin_ops__vector_common_type_6_0_s backend_libs__builtin_ops_vector_common_6[6] = {
  /* row   0 */   { (MR_Integer) 1 },
  /* row   1 */   { (MR_Integer) 0 },
  /* row   2 */   { (MR_Integer) 5 },
  /* row   3 */   { (MR_Integer) 4 },
  /* row   4 */   { (MR_Integer) 3 },
  /* row   5 */   { (MR_Integer) 2 },
};

static /* final */ const struct backend_libs__builtin_ops__vector_common_type_7_0_s backend_libs__builtin_ops_vector_common_7[166] = {
  /* row   0 */   { (MR_String) "add" },
  /* row   1 */   { (MR_String) "sub" },
  /* row   2 */   { (MR_String) "mul" },
  /* row   3 */   { (MR_String) "div" },
  /* row   4 */   { (MR_String) "rem" },
  /* row   5 */   { (MR_String) "eq" },
  /* row   6 */   { (MR_String) "ne" },
  /* row   7 */   { (MR_String) "lt" },
  /* row   8 */   { (MR_String) "le" },
  /* row   9 */   { (MR_String) "gt" },
  /* row  10 */   { (MR_String) "ge" },
  /* row  11 */   { (MR_String) "+" },
  /* row  12 */   { (MR_String) "-" },
  /* row  13 */   { (MR_String) "*" },
  /* row  14 */   { (MR_String) "/" },
  /* row  15 */   { (MR_String) "%" },
  /* row  16 */   { (MR_String) "==" },
  /* row  17 */   { (MR_String) "!=" },
  /* row  18 */   { (MR_String) "<" },
  /* row  19 */   { (MR_String) "<=" },
  /* row  20 */   { (MR_String) ">" },
  /* row  21 */   { (MR_String) ">=" },
  /* row  22 */   { NULL },
  /* row  23 */   { (MR_String) ">=" },
  /* row  24 */   { NULL },
  /* row  25 */   { (MR_String) "=<" },
  /* row  26 */   { NULL },
  /* row  27 */   { NULL },
  /* row  28 */   { NULL },
  /* row  29 */   { NULL },
  /* row  30 */   { (MR_String) "unchecked_quotient" },
  /* row  31 */   { NULL },
  /* row  32 */   { (MR_String) "+" },
  /* row  33 */   { (MR_String) "*" },
  /* row  34 */   { (MR_String) "-" },
  /* row  35 */   { (MR_String) "<" },
  /* row  36 */   { NULL },
  /* row  37 */   { (MR_String) ">" },
  /* row  38 */   { NULL },
  /* row  39 */   { NULL },
  /* row  40 */   { NULL },
  /* row  41 */   { (MR_String) "uint32" },
  /* row  42 */   { NULL },
  /* row  43 */   { NULL },
  /* row  44 */   { NULL },
  /* row  45 */   { (MR_String) "int16" },
  /* row  46 */   { (MR_String) "int" },
  /* row  47 */   { NULL },
  /* row  48 */   { (MR_String) "io" },
  /* row  49 */   { NULL },
  /* row  50 */   { NULL },
  /* row  51 */   { (MR_String) "uint8" },
  /* row  52 */   { (MR_String) "private_builtin" },
  /* row  53 */   { NULL },
  /* row  54 */   { (MR_String) "builtin" },
  /* row  55 */   { NULL },
  /* row  56 */   { NULL },
  /* row  57 */   { NULL },
  /* row  58 */   { (MR_String) "uint" },
  /* row  59 */   { NULL },
  /* row  60 */   { NULL },
  /* row  61 */   { (MR_String) "int8" },
  /* row  62 */   { NULL },
  /* row  63 */   { NULL },
  /* row  64 */   { NULL },
  /* row  65 */   { NULL },
  /* row  66 */   { (MR_String) "uint64" },
  /* row  67 */   { NULL },
  /* row  68 */   { NULL },
  /* row  69 */   { NULL },
  /* row  70 */   { NULL },
  /* row  71 */   { (MR_String) "uint16" },
  /* row  72 */   { NULL },
  /* row  73 */   { (MR_String) "float" },
  /* row  74 */   { NULL },
  /* row  75 */   { (MR_String) "int32" },
  /* row  76 */   { NULL },
  /* row  77 */   { NULL },
  /* row  78 */   { NULL },
  /* row  79 */   { NULL },
  /* row  80 */   { NULL },
  /* row  81 */   { NULL },
  /* row  82 */   { NULL },
  /* row  83 */   { NULL },
  /* row  84 */   { NULL },
  /* row  85 */   { NULL },
  /* row  86 */   { (MR_String) "int64" },
  /* row  87 */   { NULL },
  /* row  88 */   { NULL },
  /* row  89 */   { NULL },
  /* row  90 */   { NULL },
  /* row  91 */   { NULL },
  /* row  92 */   { NULL },
  /* row  93 */   { NULL },
  /* row  94 */   { (MR_String) "term_size_prof_builtin" },
  /* row  95 */   { NULL },
  /* row  96 */   { NULL },
  /* row  97 */   { NULL },
  /* row  98 */   { NULL },
  /* row  99 */   { NULL },
  /* row 100 */   { NULL },
  /* row 101 */   { NULL },
  /* row 102 */   { NULL },
  /* row 103 */   { NULL },
  /* row 104 */   { NULL },
  /* row 105 */   { (MR_String) "uint32" },
  /* row 106 */   { NULL },
  /* row 107 */   { NULL },
  /* row 108 */   { NULL },
  /* row 109 */   { (MR_String) "int16" },
  /* row 110 */   { (MR_String) "int" },
  /* row 111 */   { NULL },
  /* row 112 */   { (MR_String) "io" },
  /* row 113 */   { NULL },
  /* row 114 */   { NULL },
  /* row 115 */   { (MR_String) "uint8" },
  /* row 116 */   { (MR_String) "private_builtin" },
  /* row 117 */   { NULL },
  /* row 118 */   { (MR_String) "builtin" },
  /* row 119 */   { NULL },
  /* row 120 */   { NULL },
  /* row 121 */   { NULL },
  /* row 122 */   { (MR_String) "uint" },
  /* row 123 */   { NULL },
  /* row 124 */   { NULL },
  /* row 125 */   { (MR_String) "int8" },
  /* row 126 */   { NULL },
  /* row 127 */   { NULL },
  /* row 128 */   { NULL },
  /* row 129 */   { NULL },
  /* row 130 */   { (MR_String) "uint64" },
  /* row 131 */   { NULL },
  /* row 132 */   { NULL },
  /* row 133 */   { NULL },
  /* row 134 */   { NULL },
  /* row 135 */   { (MR_String) "uint16" },
  /* row 136 */   { NULL },
  /* row 137 */   { (MR_String) "float" },
  /* row 138 */   { NULL },
  /* row 139 */   { (MR_String) "int32" },
  /* row 140 */   { NULL },
  /* row 141 */   { NULL },
  /* row 142 */   { NULL },
  /* row 143 */   { NULL },
  /* row 144 */   { NULL },
  /* row 145 */   { NULL },
  /* row 146 */   { NULL },
  /* row 147 */   { NULL },
  /* row 148 */   { NULL },
  /* row 149 */   { NULL },
  /* row 150 */   { (MR_String) "int64" },
  /* row 151 */   { NULL },
  /* row 152 */   { NULL },
  /* row 153 */   { NULL },
  /* row 154 */   { NULL },
  /* row 155 */   { NULL },
  /* row 156 */   { NULL },
  /* row 157 */   { NULL },
  /* row 158 */   { (MR_String) "term_size_prof_builtin" },
  /* row 159 */   { NULL },
  /* row 160 */   { NULL },
  /* row 161 */   { NULL },
  /* row 162 */   { NULL },
  /* row 163 */   { NULL },
  /* row 164 */   { NULL },
  /* row 165 */   { NULL },
};

static /* final */ const struct backend_libs__builtin_ops__vector_common_type_8_0_s backend_libs__builtin_ops_vector_common_8[10] = {
  /* row   0 */   { (MR_Word) (&backend_libs__builtin_ops_scalar_common_2[3]) },
  /* row   1 */   { (MR_Word) (MR_mkword(1, &backend_libs__builtin_ops_scalar_common_2[5])) },
  /* row   2 */   { (MR_Word) (MR_mkword(2, &backend_libs__builtin_ops_scalar_common_2[4])) },
  /* row   3 */   { (MR_Word) (MR_mkword(3, &backend_libs__builtin_ops_scalar_common_1[12])) },
  /* row   4 */   { (MR_Word) (MR_mkword(3, &backend_libs__builtin_ops_scalar_common_1[6])) },
  /* row   5 */   { (MR_Word) (MR_mkword(3, &backend_libs__builtin_ops_scalar_common_1[9])) },
  /* row   6 */   { (MR_Word) (MR_mkword(3, &backend_libs__builtin_ops_scalar_common_1[7])) },
  /* row   7 */   { (MR_Word) (MR_mkword(3, &backend_libs__builtin_ops_scalar_common_1[10])) },
  /* row   8 */   { (MR_Word) (MR_mkword(3, &backend_libs__builtin_ops_scalar_common_1[8])) },
  /* row   9 */   { (MR_Word) (MR_mkword(3, &backend_libs__builtin_ops_scalar_common_1[11])) },
};


#include "array.mh"


static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_arith_op_0_0 = {
  (MR_String) "ao_add",
  INT32_C(0)
};

static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_arith_op_0_1 = {
  (MR_String) "ao_sub",
  INT32_C(1)
};

static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_arith_op_0_2 = {
  (MR_String) "ao_mul",
  INT32_C(2)
};

static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_arith_op_0_3 = {
  (MR_String) "ao_div",
  INT32_C(3)
};

static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_arith_op_0_4 = {
  (MR_String) "ao_rem",
  INT32_C(4)
};

static const MR_EnumFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__enum_ordinal_ordered_arith_op_0[5] = {
  &backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_arith_op_0_0,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_arith_op_0_1,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_arith_op_0_2,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_arith_op_0_3,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_arith_op_0_4
};

static const MR_EnumFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__enum_name_ordered_arith_op_0[5] = {
  &backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_arith_op_0_0,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_arith_op_0_3,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_arith_op_0_2,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_arith_op_0_4,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_arith_op_0_1
};

static const MR_Integer backend_libs__builtin_ops__backend_libs__builtin_ops__functor_number_map_arith_op_0[5] = {
  (MR_Integer) 0,
  (MR_Integer) 4,
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 3
};

const MR_TypeCtorInfo_Struct backend_libs__builtin_ops__backend_libs__builtin_ops__type_ctor_info_arith_op_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (backend_libs__builtin_ops____Unify____arith_op_0_0_10001)),
  ((MR_Box) (backend_libs__builtin_ops____Compare____arith_op_0_0_10001)),
  (MR_String) "backend_libs.builtin_ops",
  (MR_String) "arith_op",
  { backend_libs__builtin_ops__backend_libs__builtin_ops__enum_name_ordered_arith_op_0 },
  { backend_libs__builtin_ops__backend_libs__builtin_ops__enum_ordinal_ordered_arith_op_0 },
  (MR_Integer) 5,
  UINT16_C(12),
  backend_libs__builtin_ops__backend_libs__builtin_ops__functor_number_map_arith_op_0,

};

static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_array_elem_type_0_0[1] = { (MR_PseudoTypeInfo) (&backend_libs__builtin_ops__backend_libs__builtin_ops__type_ctor_info_scalar_array_elem_type_0) };

static const MR_DuArgLocn backend_libs__builtin_ops__backend_libs__builtin_ops__field_locns_array_elem_type_0_0[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 2
  }
};

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_array_elem_type_0_0 = {
  (MR_String) "array_elem_scalar",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_array_elem_type_0_0,
  NULL,
  backend_libs__builtin_ops__backend_libs__builtin_ops__field_locns_array_elem_type_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_TypeInfo_Struct1 backend_libs__builtin_ops__list__ti_list_1backend_libs__builtin_ops__type_ctor_info_scalar_array_elem_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&backend_libs__builtin_ops__backend_libs__builtin_ops__type_ctor_info_scalar_array_elem_type_0) }
};

static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_array_elem_type_0_1[1] = { (MR_PseudoTypeInfo) (&backend_libs__builtin_ops__list__ti_list_1backend_libs__builtin_ops__type_ctor_info_scalar_array_elem_type_0) };

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_array_elem_type_0_1 = {
  (MR_String) "array_elem_struct",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_array_elem_type_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_array_elem_type_0_0[1] = { &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_array_elem_type_0_0 };

static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_array_elem_type_0_1[1] = { &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_array_elem_type_0_1 };

static const MR_DuPtagLayout backend_libs__builtin_ops__backend_libs__builtin_ops__du_ptag_ordered_array_elem_type_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_array_elem_type_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_array_elem_type_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (backend_libs__builtin_ops____Unify____array_elem_type_0_0_10001)),
  ((MR_Box) (backend_libs__builtin_ops____Compare____array_elem_type_0_0_10001)),
  (MR_String) "backend_libs.builtin_ops",
  (MR_String) "array_elem_type",
  { backend_libs__builtin_ops__backend_libs__builtin_ops__du_name_ordered_array_elem_type_0 },
  { backend_libs__builtin_ops__backend_libs__builtin_ops__du_ptag_ordered_array_elem_type_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  backend_libs__builtin_ops__backend_libs__builtin_ops__functor_number_map_array_elem_type_0,

};

static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_binary_op_0_0[2] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_int_type_0),
  (MR_PseudoTypeInfo) (&backend_libs__builtin_ops__backend_libs__builtin_ops__type_ctor_info_arith_op_0)
};

static const MR_DuArgLocn backend_libs__builtin_ops__backend_libs__builtin_ops__field_locns_binary_op_0_0[2] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 3,
    (MR_Integer) 4
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 3
  }
};

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_0 = {
  (MR_String) "int_arith",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_binary_op_0_0,
  NULL,
  backend_libs__builtin_ops__backend_libs__builtin_ops__field_locns_binary_op_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_binary_op_0_1[2] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_int_type_0),
  (MR_PseudoTypeInfo) (&backend_libs__builtin_ops__backend_libs__builtin_ops__type_ctor_info_shift_by_type_0)
};

static const MR_DuArgLocn backend_libs__builtin_ops__backend_libs__builtin_ops__field_locns_binary_op_0_1[2] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 1,
    (MR_Integer) 4
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_1 = {
  (MR_String) "unchecked_left_shift",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(1),
  backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_binary_op_0_1,
  NULL,
  backend_libs__builtin_ops__backend_libs__builtin_ops__field_locns_binary_op_0_1,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_binary_op_0_2[2] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_int_type_0),
  (MR_PseudoTypeInfo) (&backend_libs__builtin_ops__backend_libs__builtin_ops__type_ctor_info_shift_by_type_0)
};

static const MR_DuArgLocn backend_libs__builtin_ops__backend_libs__builtin_ops__field_locns_binary_op_0_2[2] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 1,
    (MR_Integer) 4
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_2 = {
  (MR_String) "unchecked_right_shift",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 0,
  INT32_C(2),
  backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_binary_op_0_2,
  NULL,
  backend_libs__builtin_ops__backend_libs__builtin_ops__field_locns_binary_op_0_2,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_binary_op_0_3[1] = { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_int_type_0) };

static const MR_DuArgLocn backend_libs__builtin_ops__backend_libs__builtin_ops__field_locns_binary_op_0_3[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 4
  }
};

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_3 = {
  (MR_String) "bitwise_and",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 1,
  INT32_C(3),
  backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_binary_op_0_3,
  NULL,
  backend_libs__builtin_ops__backend_libs__builtin_ops__field_locns_binary_op_0_3,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_binary_op_0_4[1] = { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_int_type_0) };

static const MR_DuArgLocn backend_libs__builtin_ops__backend_libs__builtin_ops__field_locns_binary_op_0_4[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 4
  }
};

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_4 = {
  (MR_String) "bitwise_or",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 2,
  INT32_C(4),
  backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_binary_op_0_4,
  NULL,
  backend_libs__builtin_ops__backend_libs__builtin_ops__field_locns_binary_op_0_4,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_binary_op_0_5[1] = { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_int_type_0) };

static const MR_DuArgLocn backend_libs__builtin_ops__backend_libs__builtin_ops__field_locns_binary_op_0_5[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 4
  }
};

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_5 = {
  (MR_String) "bitwise_xor",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 3,
  INT32_C(5),
  backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_binary_op_0_5,
  NULL,
  backend_libs__builtin_ops__backend_libs__builtin_ops__field_locns_binary_op_0_5,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_6 = {
  (MR_String) "logical_and",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(6),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_7 = {
  (MR_String) "logical_or",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 1,
  INT32_C(7),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_binary_op_0_8[2] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_int_type_0),
  (MR_PseudoTypeInfo) (&backend_libs__builtin_ops__backend_libs__builtin_ops__type_ctor_info_cmp_op_0)
};

static const MR_DuArgLocn backend_libs__builtin_ops__backend_libs__builtin_ops__field_locns_binary_op_0_8[2] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 3,
    (MR_Integer) 4
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 3
  }
};

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_8 = {
  (MR_String) "int_cmp",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 4,
  INT32_C(8),
  backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_binary_op_0_8,
  NULL,
  backend_libs__builtin_ops__backend_libs__builtin_ops__field_locns_binary_op_0_8,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_9 = {
  (MR_String) "body",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 2,
  INT32_C(9),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_binary_op_0_10[1] = { (MR_PseudoTypeInfo) (&backend_libs__builtin_ops__backend_libs__builtin_ops__type_ctor_info_array_elem_type_0) };

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_10 = {
  (MR_String) "array_index",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 5,
  INT32_C(10),
  backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_binary_op_0_10,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_11 = {
  (MR_String) "string_unsafe_index_code_unit",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 3,
  INT32_C(11),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_binary_op_0_12[1] = { (MR_PseudoTypeInfo) (&backend_libs__builtin_ops__backend_libs__builtin_ops__type_ctor_info_cmp_op_0) };

static const MR_DuArgLocn backend_libs__builtin_ops__backend_libs__builtin_ops__field_locns_binary_op_0_12[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 3
  }
};

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_12 = {
  (MR_String) "str_cmp",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 6,
  INT32_C(12),
  backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_binary_op_0_12,
  NULL,
  backend_libs__builtin_ops__backend_libs__builtin_ops__field_locns_binary_op_0_12,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_13 = {
  (MR_String) "str_nzp",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 4,
  INT32_C(13),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_binary_op_0_14[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&backend_libs__builtin_ops__backend_libs__builtin_ops__type_ctor_info_maybe_size_0)
};

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_14 = {
  (MR_String) "offset_str_eq",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 7,
  INT32_C(14),
  backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_binary_op_0_14,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_binary_op_0_15[1] = { (MR_PseudoTypeInfo) (&backend_libs__builtin_ops__backend_libs__builtin_ops__type_ctor_info_int_as_uint_cmp_op_0) };

static const MR_DuArgLocn backend_libs__builtin_ops__backend_libs__builtin_ops__field_locns_binary_op_0_15[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 3
  }
};

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_15 = {
  (MR_String) "int_as_uint_cmp",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 8,
  INT32_C(15),
  backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_binary_op_0_15,
  NULL,
  backend_libs__builtin_ops__backend_libs__builtin_ops__field_locns_binary_op_0_15,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_16 = {
  (MR_String) "in_range",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 5,
  INT32_C(16),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_binary_op_0_17[1] = { (MR_PseudoTypeInfo) (&backend_libs__builtin_ops__backend_libs__builtin_ops__type_ctor_info_float_arith_op_0) };

static const MR_DuArgLocn backend_libs__builtin_ops__backend_libs__builtin_ops__field_locns_binary_op_0_17[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 3
  }
};

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_17 = {
  (MR_String) "float_arith",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 9,
  INT32_C(17),
  backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_binary_op_0_17,
  NULL,
  backend_libs__builtin_ops__backend_libs__builtin_ops__field_locns_binary_op_0_17,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_binary_op_0_18[1] = { (MR_PseudoTypeInfo) (&backend_libs__builtin_ops__backend_libs__builtin_ops__type_ctor_info_cmp_op_0) };

static const MR_DuArgLocn backend_libs__builtin_ops__backend_libs__builtin_ops__field_locns_binary_op_0_18[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 3
  }
};

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_18 = {
  (MR_String) "float_cmp",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 10,
  INT32_C(18),
  backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_binary_op_0_18,
  NULL,
  backend_libs__builtin_ops__backend_libs__builtin_ops__field_locns_binary_op_0_18,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_19 = {
  (MR_String) "float_from_dword",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 6,
  INT32_C(19),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_20 = {
  (MR_String) "int64_from_dword",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 7,
  INT32_C(20),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_21 = {
  (MR_String) "uint64_from_dword",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 8,
  INT32_C(21),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_22 = {
  (MR_String) "pointer_equal_conservative",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 9,
  INT32_C(22),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_binary_op_0_0[10] = {
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_6,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_7,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_9,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_11,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_13,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_16,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_19,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_20,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_21,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_22
};

static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_binary_op_0_1[1] = { &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_0 };

static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_binary_op_0_2[1] = { &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_1 };

static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_binary_op_0_3[11] = {
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_2,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_3,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_4,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_5,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_8,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_10,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_12,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_14,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_15,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_17,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_18
};

static const MR_DuPtagLayout backend_libs__builtin_ops__backend_libs__builtin_ops__du_ptag_ordered_binary_op_0[4] = {
  {
    UINT32_C(10),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_binary_op_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_binary_op_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_binary_op_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  },
  {
    UINT32_C(11),
    MR_SECTAG_REMOTE_FULL_WORD,
    backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_binary_op_0_3,
    INT8_C(-1),
    UINT8_C(3),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_name_ordered_binary_op_0[23] = {
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_10,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_3,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_4,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_5,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_9,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_17,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_18,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_19,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_16,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_20,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_0,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_15,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_8,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_6,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_7,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_14,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_22,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_12,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_13,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_11,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_21,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_1,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_2
};

static const MR_Integer backend_libs__builtin_ops__backend_libs__builtin_ops__functor_number_map_binary_op_0[23] = {
  (MR_Integer) 10,
  (MR_Integer) 21,
  (MR_Integer) 22,
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 13,
  (MR_Integer) 14,
  (MR_Integer) 12,
  (MR_Integer) 4,
  (MR_Integer) 0,
  (MR_Integer) 19,
  (MR_Integer) 17,
  (MR_Integer) 18,
  (MR_Integer) 15,
  (MR_Integer) 11,
  (MR_Integer) 8,
  (MR_Integer) 5,
  (MR_Integer) 6,
  (MR_Integer) 7,
  (MR_Integer) 9,
  (MR_Integer) 20,
  (MR_Integer) 16
};

const MR_TypeCtorInfo_Struct backend_libs__builtin_ops__backend_libs__builtin_ops__type_ctor_info_binary_op_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (backend_libs__builtin_ops____Unify____binary_op_0_0_10001)),
  ((MR_Box) (backend_libs__builtin_ops____Compare____binary_op_0_0_10001)),
  (MR_String) "backend_libs.builtin_ops",
  (MR_String) "binary_op",
  { backend_libs__builtin_ops__backend_libs__builtin_ops__du_name_ordered_binary_op_0 },
  { backend_libs__builtin_ops__backend_libs__builtin_ops__du_ptag_ordered_binary_op_0 },
  (MR_Integer) 23,
  UINT16_C(12),
  backend_libs__builtin_ops__backend_libs__builtin_ops__functor_number_map_binary_op_0,

};

static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_cmp_op_0_0 = {
  (MR_String) "eq",
  INT32_C(0)
};

static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_cmp_op_0_1 = {
  (MR_String) "ne",
  INT32_C(1)
};

static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_cmp_op_0_2 = {
  (MR_String) "lt",
  INT32_C(2)
};

static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_cmp_op_0_3 = {
  (MR_String) "le",
  INT32_C(3)
};

static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_cmp_op_0_4 = {
  (MR_String) "gt",
  INT32_C(4)
};

static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_cmp_op_0_5 = {
  (MR_String) "ge",
  INT32_C(5)
};

static const MR_EnumFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__enum_ordinal_ordered_cmp_op_0[6] = {
  &backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_cmp_op_0_0,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_cmp_op_0_1,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_cmp_op_0_2,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_cmp_op_0_3,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_cmp_op_0_4,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_cmp_op_0_5
};

static const MR_EnumFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__enum_name_ordered_cmp_op_0[6] = {
  &backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_cmp_op_0_0,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_cmp_op_0_5,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_cmp_op_0_4,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_cmp_op_0_3,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_cmp_op_0_2,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_cmp_op_0_1
};

static const MR_Integer backend_libs__builtin_ops__backend_libs__builtin_ops__functor_number_map_cmp_op_0[6] = {
  (MR_Integer) 0,
  (MR_Integer) 5,
  (MR_Integer) 4,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct backend_libs__builtin_ops__backend_libs__builtin_ops__type_ctor_info_cmp_op_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (backend_libs__builtin_ops____Unify____cmp_op_0_0_10001)),
  ((MR_Box) (backend_libs__builtin_ops____Compare____cmp_op_0_0_10001)),
  (MR_String) "backend_libs.builtin_ops",
  (MR_String) "cmp_op",
  { backend_libs__builtin_ops__backend_libs__builtin_ops__enum_name_ordered_cmp_op_0 },
  { backend_libs__builtin_ops__backend_libs__builtin_ops__enum_ordinal_ordered_cmp_op_0 },
  (MR_Integer) 6,
  UINT16_C(12),
  backend_libs__builtin_ops__backend_libs__builtin_ops__functor_number_map_cmp_op_0,

};

static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_float_arith_op_0_0 = {
  (MR_String) "ao_add",
  INT32_C(0)
};

static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_float_arith_op_0_1 = {
  (MR_String) "ao_sub",
  INT32_C(1)
};

static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_float_arith_op_0_2 = {
  (MR_String) "ao_mul",
  INT32_C(2)
};

static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_float_arith_op_0_3 = {
  (MR_String) "ao_div",
  INT32_C(3)
};

static const MR_EnumFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__enum_ordinal_ordered_float_arith_op_0[4] = {
  &backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_float_arith_op_0_0,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_float_arith_op_0_1,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_float_arith_op_0_2,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_float_arith_op_0_3
};

static const MR_EnumFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__enum_name_ordered_float_arith_op_0[4] = {
  &backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_float_arith_op_0_0,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_float_arith_op_0_3,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_float_arith_op_0_2,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_float_arith_op_0_1
};

static const MR_Integer backend_libs__builtin_ops__backend_libs__builtin_ops__functor_number_map_float_arith_op_0[4] = {
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct backend_libs__builtin_ops__backend_libs__builtin_ops__type_ctor_info_float_arith_op_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (backend_libs__builtin_ops____Unify____float_arith_op_0_0_10001)),
  ((MR_Box) (backend_libs__builtin_ops____Compare____float_arith_op_0_0_10001)),
  (MR_String) "backend_libs.builtin_ops",
  (MR_String) "float_arith_op",
  { backend_libs__builtin_ops__backend_libs__builtin_ops__enum_name_ordered_float_arith_op_0 },
  { backend_libs__builtin_ops__backend_libs__builtin_ops__enum_ordinal_ordered_float_arith_op_0 },
  (MR_Integer) 4,
  UINT16_C(12),
  backend_libs__builtin_ops__backend_libs__builtin_ops__functor_number_map_float_arith_op_0,

};

static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_int_as_uint_cmp_op_0_0 = {
  (MR_String) "lt",
  INT32_C(2)
};

static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_int_as_uint_cmp_op_0_1 = {
  (MR_String) "le",
  INT32_C(3)
};

static const MR_EnumFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__enum_ordinal_ordered_int_as_uint_cmp_op_0[2] = {
  &backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_int_as_uint_cmp_op_0_0,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_int_as_uint_cmp_op_0_1
};

static const MR_EnumFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__enum_name_ordered_int_as_uint_cmp_op_0[2] = {
  &backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_int_as_uint_cmp_op_0_1,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_int_as_uint_cmp_op_0_0
};

static const MR_Integer backend_libs__builtin_ops__backend_libs__builtin_ops__functor_number_map_int_as_uint_cmp_op_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct backend_libs__builtin_ops__backend_libs__builtin_ops__type_ctor_info_int_as_uint_cmp_op_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (backend_libs__builtin_ops____Unify____int_as_uint_cmp_op_0_0_10001)),
  ((MR_Box) (backend_libs__builtin_ops____Compare____int_as_uint_cmp_op_0_0_10001)),
  (MR_String) "backend_libs.builtin_ops",
  (MR_String) "int_as_uint_cmp_op",
  { backend_libs__builtin_ops__backend_libs__builtin_ops__enum_name_ordered_int_as_uint_cmp_op_0 },
  { backend_libs__builtin_ops__backend_libs__builtin_ops__enum_ordinal_ordered_int_as_uint_cmp_op_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  backend_libs__builtin_ops__backend_libs__builtin_ops__functor_number_map_int_as_uint_cmp_op_0,

};

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_maybe_size_0_0 = {
  (MR_String) "no_size",
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

static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_maybe_size_0_1[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) };

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_maybe_size_0_1 = {
  (MR_String) "size",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_maybe_size_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_maybe_size_0_0[1] = { &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_maybe_size_0_0 };

static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_maybe_size_0_1[1] = { &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_maybe_size_0_1 };

static const MR_DuPtagLayout backend_libs__builtin_ops__backend_libs__builtin_ops__du_ptag_ordered_maybe_size_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_maybe_size_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_maybe_size_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_name_ordered_maybe_size_0[2] = {
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_maybe_size_0_0,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_maybe_size_0_1
};

static const MR_Integer backend_libs__builtin_ops__backend_libs__builtin_ops__functor_number_map_maybe_size_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct backend_libs__builtin_ops__backend_libs__builtin_ops__type_ctor_info_maybe_size_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (backend_libs__builtin_ops____Unify____maybe_size_0_0_10001)),
  ((MR_Box) (backend_libs__builtin_ops____Compare____maybe_size_0_0_10001)),
  (MR_String) "backend_libs.builtin_ops",
  (MR_String) "maybe_size",
  { backend_libs__builtin_ops__backend_libs__builtin_ops__du_name_ordered_maybe_size_0 },
  { backend_libs__builtin_ops__backend_libs__builtin_ops__du_ptag_ordered_maybe_size_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  backend_libs__builtin_ops__backend_libs__builtin_ops__functor_number_map_maybe_size_0,

};

static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_scalar_array_elem_type_0_0 = {
  (MR_String) "scalar_elem_string",
  INT32_C(0)
};

static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_scalar_array_elem_type_0_1 = {
  (MR_String) "scalar_elem_int",
  INT32_C(1)
};

static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_scalar_array_elem_type_0_2 = {
  (MR_String) "scalar_elem_generic",
  INT32_C(2)
};

static const MR_EnumFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__enum_ordinal_ordered_scalar_array_elem_type_0[3] = {
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (backend_libs__builtin_ops____Unify____scalar_array_elem_type_0_0_10001)),
  ((MR_Box) (backend_libs__builtin_ops____Compare____scalar_array_elem_type_0_0_10001)),
  (MR_String) "backend_libs.builtin_ops",
  (MR_String) "scalar_array_elem_type",
  { backend_libs__builtin_ops__backend_libs__builtin_ops__enum_name_ordered_scalar_array_elem_type_0 },
  { backend_libs__builtin_ops__backend_libs__builtin_ops__enum_ordinal_ordered_scalar_array_elem_type_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  backend_libs__builtin_ops__backend_libs__builtin_ops__functor_number_map_scalar_array_elem_type_0,

};

static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_shift_by_type_0_0 = {
  (MR_String) "shift_by_int",
  INT32_C(0)
};

static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_shift_by_type_0_1 = {
  (MR_String) "shift_by_uint",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__enum_ordinal_ordered_shift_by_type_0[2] = {
  &backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_shift_by_type_0_0,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_shift_by_type_0_1
};

static const MR_EnumFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__enum_name_ordered_shift_by_type_0[2] = {
  &backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_shift_by_type_0_0,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_shift_by_type_0_1
};

static const MR_Integer backend_libs__builtin_ops__backend_libs__builtin_ops__functor_number_map_shift_by_type_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct backend_libs__builtin_ops__backend_libs__builtin_ops__type_ctor_info_shift_by_type_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (backend_libs__builtin_ops____Unify____shift_by_type_0_0_10001)),
  ((MR_Box) (backend_libs__builtin_ops____Compare____shift_by_type_0_0_10001)),
  (MR_String) "backend_libs.builtin_ops",
  (MR_String) "shift_by_type",
  { backend_libs__builtin_ops__backend_libs__builtin_ops__enum_name_ordered_shift_by_type_0 },
  { backend_libs__builtin_ops__backend_libs__builtin_ops__enum_ordinal_ordered_shift_by_type_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  backend_libs__builtin_ops__backend_libs__builtin_ops__functor_number_map_shift_by_type_0,

};

static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_assigned_expr_1_0[1] = { (MR_PseudoTypeInfo) ((MR_Integer) 1) };

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_assigned_expr_1_0 = {
  (MR_String) "assign_copy",
  INT16_C(1),
  UINT16_C(1),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_assigned_expr_1_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_assigned_expr_1_1[1] = { (MR_PseudoTypeInfo) (&backend_libs__builtin_ops__backend_libs__builtin_ops__type_ctor_info_simple_const_0) };

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_assigned_expr_1_1 = {
  (MR_String) "assign_const",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_assigned_expr_1_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_assigned_expr_1_2[3] = {
  (MR_PseudoTypeInfo) (&backend_libs__builtin_ops__backend_libs__builtin_ops__type_ctor_info_binary_op_0),
  (MR_PseudoTypeInfo) ((MR_Integer) 1),
  (MR_PseudoTypeInfo) ((MR_Integer) 1)
};

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_assigned_expr_1_2 = {
  (MR_String) "assign_binary",
  INT16_C(3),
  UINT16_C(6),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_assigned_expr_1_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_assigned_expr_1_3[3] = {
  (MR_PseudoTypeInfo) (&backend_libs__builtin_ops__backend_libs__builtin_ops__type_ctor_info_binary_op_0),
  (MR_PseudoTypeInfo) (&backend_libs__builtin_ops__backend_libs__builtin_ops__type_ctor_info_simple_const_0),
  (MR_PseudoTypeInfo) ((MR_Integer) 1)
};

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_assigned_expr_1_3 = {
  (MR_String) "assign_binary_lc",
  INT16_C(3),
  UINT16_C(4),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 0,
  INT32_C(3),
  backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_assigned_expr_1_3,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_assigned_expr_1_4[2] = {
  (MR_PseudoTypeInfo) (&backend_libs__builtin_ops__backend_libs__builtin_ops__type_ctor_info_unary_op_0),
  (MR_PseudoTypeInfo) ((MR_Integer) 1)
};

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_assigned_expr_1_4 = {
  (MR_String) "assign_unary",
  INT16_C(2),
  UINT16_C(2),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 1,
  INT32_C(4),
  backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_assigned_expr_1_4,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_simple_assigned_expr_1_0[1] = { &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_assigned_expr_1_0 };

static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_simple_assigned_expr_1_1[1] = { &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_assigned_expr_1_1 };

static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_simple_assigned_expr_1_2[1] = { &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_assigned_expr_1_2 };

static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_simple_assigned_expr_1_3[2] = {
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_assigned_expr_1_3,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_assigned_expr_1_4
};

static const MR_DuPtagLayout backend_libs__builtin_ops__backend_libs__builtin_ops__du_ptag_ordered_simple_assigned_expr_1[4] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_simple_assigned_expr_1_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_simple_assigned_expr_1_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_simple_assigned_expr_1_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  },
  {
    UINT32_C(2),
    MR_SECTAG_REMOTE_FULL_WORD,
    backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_simple_assigned_expr_1_3,
    INT8_C(-1),
    UINT8_C(3),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_name_ordered_simple_assigned_expr_1[5] = {
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_assigned_expr_1_2,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_assigned_expr_1_3,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_assigned_expr_1_1,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_assigned_expr_1_0,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_assigned_expr_1_4
};

static const MR_Integer backend_libs__builtin_ops__backend_libs__builtin_ops__functor_number_map_simple_assigned_expr_1[5] = {
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 4
};

const MR_TypeCtorInfo_Struct backend_libs__builtin_ops__backend_libs__builtin_ops__type_ctor_info_simple_assigned_expr_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (backend_libs__builtin_ops____Unify____simple_assigned_expr_1_0_10001)),
  ((MR_Box) (backend_libs__builtin_ops____Compare____simple_assigned_expr_1_0_10001)),
  (MR_String) "backend_libs.builtin_ops",
  (MR_String) "simple_assigned_expr",
  { backend_libs__builtin_ops__backend_libs__builtin_ops__du_name_ordered_simple_assigned_expr_1 },
  { backend_libs__builtin_ops__backend_libs__builtin_ops__du_ptag_ordered_simple_assigned_expr_1 },
  (MR_Integer) 5,
  UINT16_C(12),
  backend_libs__builtin_ops__backend_libs__builtin_ops__functor_number_map_simple_assigned_expr_1,

};

static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__builtin_ops__backend_libs__builtin_ops__pti_simple_assigned_expr_1__pseudo_1 = {
  &backend_libs__builtin_ops__backend_libs__builtin_ops__type_ctor_info_simple_assigned_expr_1,
  { (MR_PseudoTypeInfo) ((MR_Integer) 1) }
};

static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_code_1_0[2] = {
  (MR_PseudoTypeInfo) ((MR_Integer) 1),
  (MR_PseudoTypeInfo) (&backend_libs__builtin_ops__backend_libs__builtin_ops__pti_simple_assigned_expr_1__pseudo_1)
};

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_code_1_0 = {
  (MR_String) "assign",
  INT16_C(2),
  UINT16_C(3),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_code_1_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_code_1_1[2] = {
  (MR_PseudoTypeInfo) ((MR_Integer) 1),
  (MR_PseudoTypeInfo) ((MR_Integer) 1)
};

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_code_1_1 = {
  (MR_String) "ref_assign",
  INT16_C(2),
  UINT16_C(3),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_code_1_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__builtin_ops__backend_libs__builtin_ops__pti_simple_test_expr_1__pseudo_1 = {
  &backend_libs__builtin_ops__backend_libs__builtin_ops__type_ctor_info_simple_test_expr_1,
  { (MR_PseudoTypeInfo) ((MR_Integer) 1) }
};

static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_code_1_2[1] = { (MR_PseudoTypeInfo) (&backend_libs__builtin_ops__backend_libs__builtin_ops__pti_simple_test_expr_1__pseudo_1) };

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_code_1_2 = {
  (MR_String) "test",
  INT16_C(1),
  UINT16_C(1),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_code_1_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__builtin_ops__list__pti_list_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) ((MR_Integer) 1) }
};

static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_code_1_3[1] = { (MR_PseudoTypeInfo) (&backend_libs__builtin_ops__list__pti_list_1__pseudo_1) };

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_code_1_3 = {
  (MR_String) "noop",
  INT16_C(1),
  UINT16_C(1),
  MR_SECTAG_NONE,
  UINT8_C(3),
  (MR_Integer) -1,
  INT32_C(3),
  backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_code_1_3,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_simple_code_1_0[1] = { &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_code_1_0 };

static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_simple_code_1_1[1] = { &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_code_1_1 };

static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_simple_code_1_2[1] = { &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_code_1_2 };

static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_simple_code_1_3[1] = { &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_code_1_3 };

static const MR_DuPtagLayout backend_libs__builtin_ops__backend_libs__builtin_ops__du_ptag_ordered_simple_code_1[4] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_simple_code_1_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_simple_code_1_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_simple_code_1_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_simple_code_1_3,
    INT8_C(-1),
    UINT8_C(3),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (backend_libs__builtin_ops____Unify____simple_code_1_0_10001)),
  ((MR_Box) (backend_libs__builtin_ops____Compare____simple_code_1_0_10001)),
  (MR_String) "backend_libs.builtin_ops",
  (MR_String) "simple_code",
  { backend_libs__builtin_ops__backend_libs__builtin_ops__du_name_ordered_simple_code_1 },
  { backend_libs__builtin_ops__backend_libs__builtin_ops__du_ptag_ordered_simple_code_1 },
  (MR_Integer) 4,
  UINT16_C(12),
  backend_libs__builtin_ops__backend_libs__builtin_ops__functor_number_map_simple_code_1,

};

static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_const_0_0[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) };

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_const_0_0 = {
  (MR_String) "int_const",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_const_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_const_0_1[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint_0) };

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_const_0_1 = {
  (MR_String) "uint_const",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_const_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_const_0_2[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int8_0) };

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_const_0_2 = {
  (MR_String) "int8_const",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_const_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_const_0_3[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint8_0) };

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_const_0_3 = {
  (MR_String) "uint8_const",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 0,
  INT32_C(3),
  backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_const_0_3,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_const_0_4[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int16_0) };

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_const_0_4 = {
  (MR_String) "int16_const",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 1,
  INT32_C(4),
  backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_const_0_4,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_const_0_5[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint16_0) };

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_const_0_5 = {
  (MR_String) "uint16_const",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 2,
  INT32_C(5),
  backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_const_0_5,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_const_0_6[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int32_0) };

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_const_0_6 = {
  (MR_String) "int32_const",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 3,
  INT32_C(6),
  backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_const_0_6,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_const_0_7[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint32_0) };

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_const_0_7 = {
  (MR_String) "uint32_const",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 4,
  INT32_C(7),
  backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_const_0_7,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_const_0_8[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int64_0) };

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_const_0_8 = {
  (MR_String) "int64_const",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 5,
  INT32_C(8),
  backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_const_0_8,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_const_0_9[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint64_0) };

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_const_0_9 = {
  (MR_String) "uint64_const",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 6,
  INT32_C(9),
  backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_const_0_9,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_const_0_10[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_float_0) };

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_const_0_10 = {
  (MR_String) "float_const",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 7,
  INT32_C(10),
  backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_const_0_10,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_simple_const_0_0[1] = { &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_const_0_0 };

static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_simple_const_0_1[1] = { &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_const_0_1 };

static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_simple_const_0_2[1] = { &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_const_0_2 };

static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_simple_const_0_3[8] = {
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_const_0_3,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_const_0_4,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_const_0_5,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_const_0_6,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_const_0_7,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_const_0_8,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_const_0_9,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_const_0_10
};

static const MR_DuPtagLayout backend_libs__builtin_ops__backend_libs__builtin_ops__du_ptag_ordered_simple_const_0[4] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_simple_const_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_simple_const_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_simple_const_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  },
  {
    UINT32_C(8),
    MR_SECTAG_REMOTE_FULL_WORD,
    backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_simple_const_0_3,
    INT8_C(-1),
    UINT8_C(3),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_name_ordered_simple_const_0[11] = {
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_const_0_10,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_const_0_4,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_const_0_6,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_const_0_8,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_const_0_2,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_const_0_0,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_const_0_5,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_const_0_7,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_const_0_9,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_const_0_3,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_const_0_1
};

static const MR_Integer backend_libs__builtin_ops__backend_libs__builtin_ops__functor_number_map_simple_const_0[11] = {
  (MR_Integer) 5,
  (MR_Integer) 10,
  (MR_Integer) 4,
  (MR_Integer) 9,
  (MR_Integer) 1,
  (MR_Integer) 6,
  (MR_Integer) 2,
  (MR_Integer) 7,
  (MR_Integer) 3,
  (MR_Integer) 8,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct backend_libs__builtin_ops__backend_libs__builtin_ops__type_ctor_info_simple_const_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (backend_libs__builtin_ops____Unify____simple_const_0_0_10001)),
  ((MR_Box) (backend_libs__builtin_ops____Compare____simple_const_0_0_10001)),
  (MR_String) "backend_libs.builtin_ops",
  (MR_String) "simple_const",
  { backend_libs__builtin_ops__backend_libs__builtin_ops__du_name_ordered_simple_const_0 },
  { backend_libs__builtin_ops__backend_libs__builtin_ops__du_ptag_ordered_simple_const_0 },
  (MR_Integer) 11,
  UINT16_C(12),
  backend_libs__builtin_ops__backend_libs__builtin_ops__functor_number_map_simple_const_0,

};

static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_test_expr_1_0[3] = {
  (MR_PseudoTypeInfo) (&backend_libs__builtin_ops__backend_libs__builtin_ops__type_ctor_info_binary_op_0),
  (MR_PseudoTypeInfo) ((MR_Integer) 1),
  (MR_PseudoTypeInfo) ((MR_Integer) 1)
};

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_test_expr_1_0 = {
  (MR_String) "binary_test",
  INT16_C(3),
  UINT16_C(6),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_test_expr_1_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_simple_test_expr_1_0[1] = { &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_test_expr_1_0 };

static const MR_DuPtagLayout backend_libs__builtin_ops__backend_libs__builtin_ops__du_ptag_ordered_simple_test_expr_1[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_simple_test_expr_1_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_name_ordered_simple_test_expr_1[1] = { &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_test_expr_1_0 };

static const MR_Integer backend_libs__builtin_ops__backend_libs__builtin_ops__functor_number_map_simple_test_expr_1[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct backend_libs__builtin_ops__backend_libs__builtin_ops__type_ctor_info_simple_test_expr_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (backend_libs__builtin_ops____Unify____simple_test_expr_1_0_10001)),
  ((MR_Box) (backend_libs__builtin_ops____Compare____simple_test_expr_1_0_10001)),
  (MR_String) "backend_libs.builtin_ops",
  (MR_String) "simple_test_expr",
  { backend_libs__builtin_ops__backend_libs__builtin_ops__du_name_ordered_simple_test_expr_1 },
  { backend_libs__builtin_ops__backend_libs__builtin_ops__du_ptag_ordered_simple_test_expr_1 },
  (MR_Integer) 1,
  UINT16_C(12),
  backend_libs__builtin_ops__backend_libs__builtin_ops__functor_number_map_simple_test_expr_1,

};

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_unary_op_0_0 = {
  (MR_String) "tag",
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

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_unary_op_0_1 = {
  (MR_String) "strip_tag",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 1,
  INT32_C(1),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_unary_op_0_2 = {
  (MR_String) "mkbody",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 2,
  INT32_C(2),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_unary_op_0_3 = {
  (MR_String) "unmkbody",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 3,
  INT32_C(3),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_unary_op_0_4[1] = { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_int_type_0) };

static const MR_DuArgLocn backend_libs__builtin_ops__backend_libs__builtin_ops__field_locns_unary_op_0_4[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 4
  }
};

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_unary_op_0_4 = {
  (MR_String) "bitwise_complement",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(4),
  backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_unary_op_0_4,
  NULL,
  backend_libs__builtin_ops__backend_libs__builtin_ops__field_locns_unary_op_0_4,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_unary_op_0_5 = {
  (MR_String) "logical_not",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 4,
  INT32_C(5),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_unary_op_0_6 = {
  (MR_String) "hash_string",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 5,
  INT32_C(6),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_unary_op_0_7 = {
  (MR_String) "hash_string2",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 6,
  INT32_C(7),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_unary_op_0_8 = {
  (MR_String) "hash_string3",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 7,
  INT32_C(8),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_unary_op_0_9 = {
  (MR_String) "hash_string4",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 8,
  INT32_C(9),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_unary_op_0_10 = {
  (MR_String) "hash_string5",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 9,
  INT32_C(10),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_unary_op_0_11 = {
  (MR_String) "hash_string6",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 10,
  INT32_C(11),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_unary_op_0_12 = {
  (MR_String) "dword_float_get_word0",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 11,
  INT32_C(12),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_unary_op_0_13 = {
  (MR_String) "dword_float_get_word1",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 12,
  INT32_C(13),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_unary_op_0_14 = {
  (MR_String) "dword_int64_get_word0",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 13,
  INT32_C(14),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_unary_op_0_15 = {
  (MR_String) "dword_int64_get_word1",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 14,
  INT32_C(15),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_unary_op_0_16 = {
  (MR_String) "dword_uint64_get_word0",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 15,
  INT32_C(16),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_unary_op_0_17 = {
  (MR_String) "dword_uint64_get_word1",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 16,
  INT32_C(17),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_unary_op_0_0[17] = {
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_unary_op_0_0,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_unary_op_0_1,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_unary_op_0_2,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_unary_op_0_3,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_unary_op_0_5,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_unary_op_0_6,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_unary_op_0_7,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_unary_op_0_8,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_unary_op_0_9,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_unary_op_0_10,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_unary_op_0_11,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_unary_op_0_12,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_unary_op_0_13,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_unary_op_0_14,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_unary_op_0_15,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_unary_op_0_16,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_unary_op_0_17
};

static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_unary_op_0_1[1] = { &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_unary_op_0_4 };

static const MR_DuPtagLayout backend_libs__builtin_ops__backend_libs__builtin_ops__du_ptag_ordered_unary_op_0[2] = {
  {
    UINT32_C(17),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_unary_op_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_unary_op_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_name_ordered_unary_op_0[18] = {
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_unary_op_0_4,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_unary_op_0_12,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_unary_op_0_13,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_unary_op_0_14,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_unary_op_0_15,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_unary_op_0_16,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_unary_op_0_17,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_unary_op_0_6,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_unary_op_0_7,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_unary_op_0_8,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_unary_op_0_9,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_unary_op_0_10,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_unary_op_0_11,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_unary_op_0_5,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_unary_op_0_2,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_unary_op_0_1,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_unary_op_0_0,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_unary_op_0_3
};

static const MR_Integer backend_libs__builtin_ops__backend_libs__builtin_ops__functor_number_map_unary_op_0[18] = {
  (MR_Integer) 16,
  (MR_Integer) 15,
  (MR_Integer) 14,
  (MR_Integer) 17,
  (MR_Integer) 0,
  (MR_Integer) 13,
  (MR_Integer) 7,
  (MR_Integer) 8,
  (MR_Integer) 9,
  (MR_Integer) 10,
  (MR_Integer) 11,
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
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (backend_libs__builtin_ops____Unify____unary_op_0_0_10001)),
  ((MR_Box) (backend_libs__builtin_ops____Compare____unary_op_0_0_10001)),
  (MR_String) "backend_libs.builtin_ops",
  (MR_String) "unary_op",
  { backend_libs__builtin_ops__backend_libs__builtin_ops__du_name_ordered_unary_op_0 },
  { backend_libs__builtin_ops__backend_libs__builtin_ops__du_ptag_ordered_unary_op_0 },
  (MR_Integer) 18,
  UINT16_C(12),
  backend_libs__builtin_ops__backend_libs__builtin_ops__functor_number_map_unary_op_0,

};

void MR_CALL 
backend_libs__builtin_ops____Compare____simple_code_1_0(
  MR_Word TypeInfo_for_T_20,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_18 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_19 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_18 == CastY_19);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Box ArgX1_4 = (MR_hl_field(0, HeadVar__2_2, 0));
              MR_Box ArgY1_5 = (MR_hl_field(0, HeadVar__3_3, 0));
              MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
              MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
              MR_Word SubResult1_6;

              mercury__builtin__compare_3_p_0(TypeInfo_for_T_20, &SubResult1_6, ArgX1_4, ArgY1_5);
              succeeded = (SubResult1_6 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult1_6;
              else
                backend_libs__builtin_ops____Compare____simple_assigned_expr_1_0(TypeInfo_for_T_20, HeadVar__1_1, ArgX2_7, ArgY2_8);
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
          case (MR_Integer) 3:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 1:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 1:
            {
              MR_Box ArgX1_9 = (MR_hl_field(1, HeadVar__2_2, 0));
              MR_Box ArgY1_10 = (MR_hl_field(1, HeadVar__3_3, 0));
              MR_Box ArgX2_12 = (MR_hl_field(1, HeadVar__2_2, 1));
              MR_Box ArgY2_13 = (MR_hl_field(1, HeadVar__3_3, 1));
              MR_Word SubResult1_11;

              mercury__builtin__compare_3_p_0(TypeInfo_for_T_20, &SubResult1_11, ArgX1_9, ArgY1_10);
              succeeded = (SubResult1_11 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult1_11;
              else
                mercury__builtin__compare_3_p_0(TypeInfo_for_T_20, HeadVar__1_1, ArgX2_12, ArgY2_13);
            }
            break;
          case (MR_Integer) 2:
          case (MR_Integer) 3:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 2:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 2:
            {
              MR_Word ArgX1_14 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 0))));
              MR_Word ArgY1_15 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, 0))));

              backend_libs__builtin_ops____Compare____simple_test_expr_1_0(TypeInfo_for_T_20, HeadVar__1_1, ArgX1_14, ArgY1_15);
            }
            break;
          case (MR_Integer) 3:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 3:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 3:
            {
              MR_Word ArgX1_16 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 0))));
              MR_Word ArgY1_17 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 0))));

              mercury__list____Compare____list_1_0(TypeInfo_for_T_20, HeadVar__1_1, ArgX1_16, ArgY1_17);
            }
            break;
        }
        break;
    }
}

void MR_CALL 
backend_libs__builtin_ops____Compare____simple_test_expr_1_0(
  MR_Word TypeInfo_for_T_14,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_12 == CastY_13);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Box ArgX2_7 = (MR_hl_field(0, HeadVar__2_2, 1));
    MR_Box ArgY2_8 = (MR_hl_field(0, HeadVar__3_3, 1));
    MR_Box ArgX3_10 = (MR_hl_field(0, HeadVar__2_2, 2));
    MR_Box ArgY3_11 = (MR_hl_field(0, HeadVar__3_3, 2));
    MR_Word SubResult1_6;

    backend_libs__builtin_ops____Compare____binary_op_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0(TypeInfo_for_T_14, &SubResult2_9, ArgX2_7, ArgY2_8);
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
        mercury__builtin__compare_3_p_0(TypeInfo_for_T_14, HeadVar__1_1, ArgX3_10, ArgY3_11);
    }
  }
}

MR_bool MR_CALL 
backend_libs__builtin_ops____Unify____simple_code_1_0(
  MR_Word TypeInfo_for_T_17,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_15 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_16 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_15 == CastY_16);
  if (succeeded)
    succeeded = MR_TRUE;
  else
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Box ArgX1_3 = (MR_hl_field(0, HeadVar__1_1, 0));
          MR_Box ArgY1_4;
          MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
          MR_Word ArgY2_6;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
          if (succeeded)
          {
            ArgY1_4 = (MR_hl_field(0, HeadVar__2_2, 0));
            ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_17, ArgX1_3, ArgY1_4);
            if (succeeded)
              succeeded = backend_libs__builtin_ops____Unify____simple_assigned_expr_1_0(TypeInfo_for_T_17, ArgX2_5, ArgY2_6);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box ArgX1_7 = (MR_hl_field(1, HeadVar__1_1, 0));
          MR_Box ArgY1_8;
          MR_Box ArgX2_9 = (MR_hl_field(1, HeadVar__1_1, 1));
          MR_Box ArgY2_10;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_8 = (MR_hl_field(1, HeadVar__2_2, 0));
            ArgY2_10 = (MR_hl_field(1, HeadVar__2_2, 1));
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_17, ArgX1_7, ArgY1_8);
            if (succeeded)
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_17, ArgX2_9, ArgY2_10);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ArgX1_11 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, 0))));
          MR_Word ArgY1_12;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_12 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 0))));
            succeeded = backend_libs__builtin_ops____Unify____simple_test_expr_1_0(TypeInfo_for_T_17, ArgX1_11, ArgY1_12);
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word ArgX1_13 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 0))));
          MR_Word ArgY1_14;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3);
          if (succeeded)
          {
            ArgY1_14 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 0))));
            succeeded = mercury__list____Unify____list_1_0(TypeInfo_for_T_17, ArgX1_13, ArgY1_14);
          }
        }
        break;
    }
  return succeeded;
}

MR_bool MR_CALL 
backend_libs__builtin_ops____Unify____simple_test_expr_1_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Box ArgX2_5 = (MR_hl_field(0, HeadVar__1_1, 1));
    MR_Box ArgY2_6 = (MR_hl_field(0, HeadVar__2_2, 1));
    MR_Box ArgX3_7 = (MR_hl_field(0, HeadVar__1_1, 2));
    MR_Box ArgY3_8 = (MR_hl_field(0, HeadVar__2_2, 2));

    succeeded = backend_libs__builtin_ops____Unify____binary_op_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_11, ArgX2_5, ArgY2_6);
      if (succeeded)
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_11, ArgX3_7, ArgY3_8);
    }
  }
  return succeeded;
}

void MR_CALL 
backend_libs__builtin_ops____Compare____simple_assigned_expr_1_0(
  MR_Word TypeInfo_for_T_31,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_29 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_30 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_29 == CastY_30);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Box ArgX1_4 = (MR_hl_field(0, HeadVar__2_2, 0));
              MR_Box ArgY1_5 = (MR_hl_field(0, HeadVar__3_3, 0));

              mercury__builtin__compare_3_p_0(TypeInfo_for_T_31, HeadVar__1_1, ArgX1_4, ArgY1_5);
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
          case (MR_Integer) 3:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 1:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgX1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
              MR_Word ArgY1_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));

              backend_libs__builtin_ops____Compare____simple_const_0_0(HeadVar__1_1, ArgX1_6, ArgY1_7);
            }
            break;
          case (MR_Integer) 2:
          case (MR_Integer) 3:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 2:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 2:
            {
              MR_Word ArgX1_8 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 0))));
              MR_Word ArgY1_9 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, 0))));
              MR_Box ArgX2_11 = (MR_hl_field(2, HeadVar__2_2, 1));
              MR_Box ArgY2_12 = (MR_hl_field(2, HeadVar__3_3, 1));
              MR_Box ArgX3_14 = (MR_hl_field(2, HeadVar__2_2, 2));
              MR_Box ArgY3_15 = (MR_hl_field(2, HeadVar__3_3, 2));
              MR_Word SubResult1_10;

              backend_libs__builtin_ops____Compare____binary_op_0_0(&SubResult1_10, ArgX1_8, ArgY1_9);
              succeeded = (SubResult1_10 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult1_10;
              else
              {
                MR_Word SubResult2_13;

                mercury__builtin__compare_3_p_0(TypeInfo_for_T_31, &SubResult2_13, ArgX2_11, ArgY2_12);
                succeeded = (SubResult2_13 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult2_13;
                else
                  mercury__builtin__compare_3_p_0(TypeInfo_for_T_31, HeadVar__1_1, ArgX3_14, ArgY3_15);
              }
            }
            break;
          case (MR_Integer) 3:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word ArgX1_16 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                      MR_Word ArgY1_17 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 1))));
                      MR_Word ArgX2_19 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 2))));
                      MR_Word ArgY2_20 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 2))));
                      MR_Box ArgX3_22 = (MR_hl_field(3, HeadVar__2_2, 3));
                      MR_Box ArgY3_23 = (MR_hl_field(3, HeadVar__3_3, 3));
                      MR_Word SubResult1_18;

                      backend_libs__builtin_ops____Compare____binary_op_0_0(&SubResult1_18, ArgX1_16, ArgY1_17);
                      succeeded = (SubResult1_18 != (MR_Integer) 0);
                      if (succeeded)
                        *HeadVar__1_1 = SubResult1_18;
                      else
                      {
                        MR_Word SubResult2_21;

                        backend_libs__builtin_ops____Compare____simple_const_0_0(&SubResult2_21, ArgX2_19, ArgY2_20);
                        succeeded = (SubResult2_21 != (MR_Integer) 0);
                        if (succeeded)
                          *HeadVar__1_1 = SubResult2_21;
                        else
                          mercury__builtin__compare_3_p_0(TypeInfo_for_T_31, HeadVar__1_1, ArgX3_22, ArgY3_23);
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
            break;
          case (MR_Integer) 1:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word ArgX1_24 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                      MR_Word ArgY1_25 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 1))));
                      MR_Box ArgX2_27 = (MR_hl_field(3, HeadVar__2_2, 2));
                      MR_Box ArgY2_28 = (MR_hl_field(3, HeadVar__3_3, 2));
                      MR_Word SubResult1_26;

                      backend_libs__builtin_ops____Compare____unary_op_0_0(&SubResult1_26, ArgX1_24, ArgY1_25);
                      succeeded = (SubResult1_26 != (MR_Integer) 0);
                      if (succeeded)
                        *HeadVar__1_1 = SubResult1_26;
                      else
                        mercury__builtin__compare_3_p_0(TypeInfo_for_T_31, HeadVar__1_1, ArgX2_27, ArgY2_28);
                    }
                    break;
                }
                break;
            }
            break;
        }
        break;
    }
}

void MR_CALL 
backend_libs__builtin_ops____Compare____unary_op_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Integer IndexX_4;
    MR_Integer IndexY_5;

    backend_libs__builtin_ops____Index____unary_op_0_0(HeadVar__2_2, &IndexX_4);
    backend_libs__builtin_ops____Index____unary_op_0_0(HeadVar__3_3, &IndexY_5);
    succeeded = (IndexX_4 < IndexY_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (IndexX_4 > IndexY_5);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 2;
      else
      {
        MR_Word CompareResult_6;

        switch (MR_tag((MR_Word) HeadVar__2_2)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              CompareResult_6 = (MR_Integer) 0;
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgX1_7 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, 0))) & (MR_Integer) 15);
              MR_Word ArgY1_8;
              MR_Integer Var_12;
              MR_Integer Var_13;

              succeeded = ((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1);
              if (succeeded)
              {
                ArgY1_8 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__3_3, 0))) & (MR_Integer) 15);
                Var_12 = (MR_Integer) (ArgX1_7);
                Var_13 = (MR_Integer) (ArgY1_8);
                succeeded = (Var_12 < Var_13);
                if (succeeded)
                  CompareResult_6 = (MR_Integer) 1;
                else
                {
                  succeeded = (Var_12 > Var_13);
                  if (succeeded)
                    CompareResult_6 = (MR_Integer) 2;
                  else
                    CompareResult_6 = (MR_Integer) 0;
                }
                succeeded = MR_TRUE;
              }
            }
            break;
        }
        if (succeeded)
          *HeadVar__1_1 = CompareResult_6;
        else
          {
            mercury__private_builtin__compare_error_0_p_0();
            return;
          }
      }
    }
  }
}

void MR_CALL 
backend_libs__builtin_ops____Index____unary_op_0_0(
  MR_Word HeadVar__1_1,
  MR_Integer * HeadVar__2_2)
{
  switch (MR_tag((MR_Word) HeadVar__1_1)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *HeadVar__2_2 = (MR_Integer) 0;
          break;
        case (MR_Integer) 1:
          *HeadVar__2_2 = (MR_Integer) 1;
          break;
        case (MR_Integer) 2:
          *HeadVar__2_2 = (MR_Integer) 2;
          break;
        case (MR_Integer) 3:
          *HeadVar__2_2 = (MR_Integer) 3;
          break;
        case (MR_Integer) 4:
          *HeadVar__2_2 = (MR_Integer) 5;
          break;
        case (MR_Integer) 5:
          *HeadVar__2_2 = (MR_Integer) 6;
          break;
        case (MR_Integer) 6:
          *HeadVar__2_2 = (MR_Integer) 7;
          break;
        case (MR_Integer) 7:
          *HeadVar__2_2 = (MR_Integer) 8;
          break;
        case (MR_Integer) 8:
          *HeadVar__2_2 = (MR_Integer) 9;
          break;
        case (MR_Integer) 9:
          *HeadVar__2_2 = (MR_Integer) 10;
          break;
        case (MR_Integer) 10:
          *HeadVar__2_2 = (MR_Integer) 11;
          break;
        case (MR_Integer) 11:
          *HeadVar__2_2 = (MR_Integer) 12;
          break;
        case (MR_Integer) 12:
          *HeadVar__2_2 = (MR_Integer) 13;
          break;
        case (MR_Integer) 13:
          *HeadVar__2_2 = (MR_Integer) 14;
          break;
        case (MR_Integer) 14:
          *HeadVar__2_2 = (MR_Integer) 15;
          break;
        case (MR_Integer) 15:
          *HeadVar__2_2 = (MR_Integer) 16;
          break;
        case (MR_Integer) 16:
          *HeadVar__2_2 = (MR_Integer) 17;
          break;
      }
      break;
    case (MR_Integer) 1:
      *HeadVar__2_2 = (MR_Integer) 4;
      break;
  }
}

void MR_CALL 
backend_libs__builtin_ops____Compare____simple_const_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_26 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_27 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_26 == CastY_27);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 0))));
              MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 0))));

              succeeded = (ArgX1_4 < ArgY1_5);
              if (succeeded)
                *HeadVar__1_1 = (MR_Integer) 1;
              else
              {
                succeeded = (ArgX1_4 > ArgY1_5);
                if (succeeded)
                  *HeadVar__1_1 = (MR_Integer) 2;
                else
                  *HeadVar__1_1 = (MR_Integer) 0;
              }
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
          case (MR_Integer) 3:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 1:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 1:
            {
              MR_Unsigned ArgX1_6 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, 0))));
              MR_Unsigned ArgY1_7 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__3_3, 0))));

              succeeded = (ArgX1_6 < ArgY1_7);
              if (succeeded)
                *HeadVar__1_1 = (MR_Integer) 1;
              else
              {
                succeeded = (ArgX1_6 > ArgY1_7);
                if (succeeded)
                  *HeadVar__1_1 = (MR_Integer) 2;
                else
                  *HeadVar__1_1 = (MR_Integer) 0;
              }
            }
            break;
          case (MR_Integer) 2:
          case (MR_Integer) 3:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 2:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 2:
            {
              int8_t ArgX1_8 = ((int8_t) (MR_Word) (MR_hl_field(2, HeadVar__2_2, 0)));
              int8_t ArgY1_9 = ((int8_t) (MR_Word) (MR_hl_field(2, HeadVar__3_3, 0)));

              succeeded = (ArgX1_8 < ArgY1_9);
              if (succeeded)
                *HeadVar__1_1 = (MR_Integer) 1;
              else
              {
                succeeded = (ArgX1_8 > ArgY1_9);
                if (succeeded)
                  *HeadVar__1_1 = (MR_Integer) 2;
                else
                  *HeadVar__1_1 = (MR_Integer) 0;
              }
            }
            break;
          case (MR_Integer) 3:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      uint8_t ArgX1_10 = ((uint8_t) (MR_Word) (MR_hl_field(3, HeadVar__2_2, 1)));
                      uint8_t ArgY1_11 = ((uint8_t) (MR_Word) (MR_hl_field(3, HeadVar__3_3, 1)));

                      succeeded = (ArgX1_10 < ArgY1_11);
                      if (succeeded)
                        *HeadVar__1_1 = (MR_Integer) 1;
                      else
                      {
                        succeeded = (ArgX1_10 > ArgY1_11);
                        if (succeeded)
                          *HeadVar__1_1 = (MR_Integer) 2;
                        else
                          *HeadVar__1_1 = (MR_Integer) 0;
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                  case (MR_Integer) 3:
                  case (MR_Integer) 4:
                  case (MR_Integer) 5:
                  case (MR_Integer) 6:
                  case (MR_Integer) 7:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
            break;
          case (MR_Integer) 1:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    {
                      int16_t ArgX1_12 = ((int16_t) (MR_Word) (MR_hl_field(3, HeadVar__2_2, 1)));
                      int16_t ArgY1_13 = ((int16_t) (MR_Word) (MR_hl_field(3, HeadVar__3_3, 1)));

                      succeeded = (ArgX1_12 < ArgY1_13);
                      if (succeeded)
                        *HeadVar__1_1 = (MR_Integer) 1;
                      else
                      {
                        succeeded = (ArgX1_12 > ArgY1_13);
                        if (succeeded)
                          *HeadVar__1_1 = (MR_Integer) 2;
                        else
                          *HeadVar__1_1 = (MR_Integer) 0;
                      }
                    }
                    break;
                  case (MR_Integer) 2:
                  case (MR_Integer) 3:
                  case (MR_Integer) 4:
                  case (MR_Integer) 5:
                  case (MR_Integer) 6:
                  case (MR_Integer) 7:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
            break;
          case (MR_Integer) 2:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    {
                      uint16_t ArgX1_14 = ((uint16_t) (MR_Word) (MR_hl_field(3, HeadVar__2_2, 1)));
                      uint16_t ArgY1_15 = ((uint16_t) (MR_Word) (MR_hl_field(3, HeadVar__3_3, 1)));

                      succeeded = (ArgX1_14 < ArgY1_15);
                      if (succeeded)
                        *HeadVar__1_1 = (MR_Integer) 1;
                      else
                      {
                        succeeded = (ArgX1_14 > ArgY1_15);
                        if (succeeded)
                          *HeadVar__1_1 = (MR_Integer) 2;
                        else
                          *HeadVar__1_1 = (MR_Integer) 0;
                      }
                    }
                    break;
                  case (MR_Integer) 3:
                  case (MR_Integer) 4:
                  case (MR_Integer) 5:
                  case (MR_Integer) 6:
                  case (MR_Integer) 7:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
            break;
          case (MR_Integer) 3:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    {
                      int32_t ArgX1_16 = ((int32_t) (MR_Word) (MR_hl_field(3, HeadVar__2_2, 1)));
                      int32_t ArgY1_17 = ((int32_t) (MR_Word) (MR_hl_field(3, HeadVar__3_3, 1)));

                      succeeded = (ArgX1_16 < ArgY1_17);
                      if (succeeded)
                        *HeadVar__1_1 = (MR_Integer) 1;
                      else
                      {
                        succeeded = (ArgX1_16 > ArgY1_17);
                        if (succeeded)
                          *HeadVar__1_1 = (MR_Integer) 2;
                        else
                          *HeadVar__1_1 = (MR_Integer) 0;
                      }
                    }
                    break;
                  case (MR_Integer) 4:
                  case (MR_Integer) 5:
                  case (MR_Integer) 6:
                  case (MR_Integer) 7:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
            break;
          case (MR_Integer) 4:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                  case (MR_Integer) 3:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 4:
                    {
                      uint32_t ArgX1_18 = ((uint32_t) (MR_Word) (MR_hl_field(3, HeadVar__2_2, 1)));
                      uint32_t ArgY1_19 = ((uint32_t) (MR_Word) (MR_hl_field(3, HeadVar__3_3, 1)));

                      succeeded = (ArgX1_18 < ArgY1_19);
                      if (succeeded)
                        *HeadVar__1_1 = (MR_Integer) 1;
                      else
                      {
                        succeeded = (ArgX1_18 > ArgY1_19);
                        if (succeeded)
                          *HeadVar__1_1 = (MR_Integer) 2;
                        else
                          *HeadVar__1_1 = (MR_Integer) 0;
                      }
                    }
                    break;
                  case (MR_Integer) 5:
                  case (MR_Integer) 6:
                  case (MR_Integer) 7:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
            break;
          case (MR_Integer) 5:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                  case (MR_Integer) 3:
                  case (MR_Integer) 4:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 5:
                    {
                      int64_t ArgX1_20 = MR_unbox_int64((MR_hl_field(3, HeadVar__2_2, 1)));
                      int64_t ArgY1_21 = MR_unbox_int64((MR_hl_field(3, HeadVar__3_3, 1)));

                      succeeded = (ArgX1_20 < ArgY1_21);
                      if (succeeded)
                        *HeadVar__1_1 = (MR_Integer) 1;
                      else
                      {
                        succeeded = (ArgX1_20 > ArgY1_21);
                        if (succeeded)
                          *HeadVar__1_1 = (MR_Integer) 2;
                        else
                          *HeadVar__1_1 = (MR_Integer) 0;
                      }
                    }
                    break;
                  case (MR_Integer) 6:
                  case (MR_Integer) 7:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
            break;
          case (MR_Integer) 6:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                  case (MR_Integer) 3:
                  case (MR_Integer) 4:
                  case (MR_Integer) 5:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 6:
                    {
                      uint64_t ArgX1_22 = MR_unbox_uint64((MR_hl_field(3, HeadVar__2_2, 1)));
                      uint64_t ArgY1_23 = MR_unbox_uint64((MR_hl_field(3, HeadVar__3_3, 1)));

                      succeeded = (ArgX1_22 < ArgY1_23);
                      if (succeeded)
                        *HeadVar__1_1 = (MR_Integer) 1;
                      else
                      {
                        succeeded = (ArgX1_22 > ArgY1_23);
                        if (succeeded)
                          *HeadVar__1_1 = (MR_Integer) 2;
                        else
                          *HeadVar__1_1 = (MR_Integer) 0;
                      }
                    }
                    break;
                  case (MR_Integer) 7:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
            break;
          case (MR_Integer) 7:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                  case (MR_Integer) 3:
                  case (MR_Integer) 4:
                  case (MR_Integer) 5:
                  case (MR_Integer) 6:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 7:
                    {
                      MR_Float ArgX1_24 = MR_unbox_float((MR_hl_field(3, HeadVar__2_2, 1)));
                      MR_Float ArgY1_25 = MR_unbox_float((MR_hl_field(3, HeadVar__3_3, 1)));

                      mercury__private_builtin__builtin_compare_float_3_p_0(HeadVar__1_1, ArgX1_24, ArgY1_25);
                    }
                    break;
                }
                break;
            }
            break;
        }
        break;
    }
}

MR_bool MR_CALL 
backend_libs__builtin_ops____Unify____simple_assigned_expr_1_0(
  MR_Word TypeInfo_for_T_25,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
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
          MR_Box ArgX1_3 = (MR_hl_field(0, HeadVar__1_1, 0));
          MR_Box ArgY1_4;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
          if (succeeded)
          {
            ArgY1_4 = (MR_hl_field(0, HeadVar__2_2, 0));
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_25, ArgX1_3, ArgY1_4);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
          MR_Word ArgY1_6;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
            succeeded = backend_libs__builtin_ops____Unify____simple_const_0_0(ArgX1_5, ArgY1_6);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ArgX1_7 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, 0))));
          MR_Word ArgY1_8;
          MR_Box ArgX2_9 = (MR_hl_field(2, HeadVar__1_1, 1));
          MR_Box ArgY2_10;
          MR_Box ArgX3_11 = (MR_hl_field(2, HeadVar__1_1, 2));
          MR_Box ArgY3_12;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_8 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 0))));
            ArgY2_10 = (MR_hl_field(2, HeadVar__2_2, 1));
            ArgY3_12 = (MR_hl_field(2, HeadVar__2_2, 2));
            succeeded = backend_libs__builtin_ops____Unify____binary_op_0_0(ArgX1_7, ArgY1_8);
            if (succeeded)
            {
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_25, ArgX2_9, ArgY2_10);
              if (succeeded)
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_25, ArgX3_11, ArgY3_12);
            }
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ArgX1_13 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_Word ArgY1_14;
              MR_Word ArgX2_15 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_Word ArgY2_16;
              MR_Box ArgX3_17 = (MR_hl_field(3, HeadVar__1_1, 3));
              MR_Box ArgY3_18;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                ArgY1_14 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                ArgY2_16 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 2))));
                ArgY3_18 = (MR_hl_field(3, HeadVar__2_2, 3));
                succeeded = backend_libs__builtin_ops____Unify____binary_op_0_0(ArgX1_13, ArgY1_14);
                if (succeeded)
                {
                  succeeded = backend_libs__builtin_ops____Unify____simple_const_0_0(ArgX2_15, ArgY2_16);
                  if (succeeded)
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_25, ArgX3_17, ArgY3_18);
                }
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgX1_19 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_Word ArgY1_20;
              MR_Box ArgX2_21 = (MR_hl_field(3, HeadVar__1_1, 2));
              MR_Box ArgY2_22;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                ArgY1_20 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                ArgY2_22 = (MR_hl_field(3, HeadVar__2_2, 2));
                succeeded = backend_libs__builtin_ops____Unify____unary_op_0_0(ArgX1_19, ArgY1_20);
                if (succeeded)
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_25, ArgX2_21, ArgY2_22);
              }
            }
            break;
        }
        break;
    }
  return succeeded;
}

MR_bool MR_CALL 
backend_libs__builtin_ops____Unify____unary_op_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_7 == CastY_8);
  if (succeeded)
    succeeded = MR_TRUE;
  else
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
          MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

          succeeded = (CastY_6 == CastX_5);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__1_1, 0))) & (MR_Integer) 15);
          MR_Word ArgY1_4;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, 0))) & (MR_Integer) 15);
            succeeded = (ArgX1_3 == ArgY1_4);
          }
        }
        break;
    }
  return succeeded;
}

MR_bool MR_CALL 
backend_libs__builtin_ops____Unify____simple_const_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_25 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_26 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_25 == CastY_26);
  if (succeeded)
    succeeded = MR_TRUE;
  else
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 0))));
          MR_Integer ArgY1_4;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 0))));
            succeeded = (ArgX1_3 == ArgY1_4);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Unsigned ArgX1_5 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__1_1, 0))));
          MR_Unsigned ArgY1_6;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_6 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, 0))));
            succeeded = (ArgX1_5 == ArgY1_6);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          int8_t ArgX1_7 = ((int8_t) (MR_Word) (MR_hl_field(2, HeadVar__1_1, 0)));
          int8_t ArgY1_8;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_8 = ((int8_t) (MR_Word) (MR_hl_field(2, HeadVar__2_2, 0)));
            succeeded = (ArgX1_7 == ArgY1_8);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              uint8_t ArgX1_9 = ((uint8_t) (MR_Word) (MR_hl_field(3, HeadVar__1_1, 1)));
              uint8_t ArgY1_10;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                ArgY1_10 = ((uint8_t) (MR_Word) (MR_hl_field(3, HeadVar__2_2, 1)));
                succeeded = (ArgX1_9 == ArgY1_10);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              int16_t ArgX1_11 = ((int16_t) (MR_Word) (MR_hl_field(3, HeadVar__1_1, 1)));
              int16_t ArgY1_12;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                ArgY1_12 = ((int16_t) (MR_Word) (MR_hl_field(3, HeadVar__2_2, 1)));
                succeeded = (ArgX1_11 == ArgY1_12);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              uint16_t ArgX1_13 = ((uint16_t) (MR_Word) (MR_hl_field(3, HeadVar__1_1, 1)));
              uint16_t ArgY1_14;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 2)));
              if (succeeded)
              {
                ArgY1_14 = ((uint16_t) (MR_Word) (MR_hl_field(3, HeadVar__2_2, 1)));
                succeeded = (ArgX1_13 == ArgY1_14);
              }
            }
            break;
          case (MR_Integer) 3:
            {
              int32_t ArgX1_15 = ((int32_t) (MR_Word) (MR_hl_field(3, HeadVar__1_1, 1)));
              int32_t ArgY1_16;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 3)));
              if (succeeded)
              {
                ArgY1_16 = ((int32_t) (MR_Word) (MR_hl_field(3, HeadVar__2_2, 1)));
                succeeded = (ArgX1_15 == ArgY1_16);
              }
            }
            break;
          case (MR_Integer) 4:
            {
              uint32_t ArgX1_17 = ((uint32_t) (MR_Word) (MR_hl_field(3, HeadVar__1_1, 1)));
              uint32_t ArgY1_18;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 4)));
              if (succeeded)
              {
                ArgY1_18 = ((uint32_t) (MR_Word) (MR_hl_field(3, HeadVar__2_2, 1)));
                succeeded = (ArgX1_17 == ArgY1_18);
              }
            }
            break;
          case (MR_Integer) 5:
            {
              int64_t ArgX1_19 = MR_unbox_int64((MR_hl_field(3, HeadVar__1_1, 1)));
              int64_t ArgY1_20;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 5)));
              if (succeeded)
              {
                ArgY1_20 = MR_unbox_int64((MR_hl_field(3, HeadVar__2_2, 1)));
                succeeded = (ArgX1_19 == ArgY1_20);
              }
            }
            break;
          case (MR_Integer) 6:
            {
              uint64_t ArgX1_21 = MR_unbox_uint64((MR_hl_field(3, HeadVar__1_1, 1)));
              uint64_t ArgY1_22;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 6)));
              if (succeeded)
              {
                ArgY1_22 = MR_unbox_uint64((MR_hl_field(3, HeadVar__2_2, 1)));
                succeeded = (ArgX1_21 == ArgY1_22);
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Float ArgX1_23 = MR_unbox_float((MR_hl_field(3, HeadVar__1_1, 1)));
              MR_Float ArgY1_24;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 7)));
              if (succeeded)
              {
                ArgY1_24 = MR_unbox_float((MR_hl_field(3, HeadVar__2_2, 1)));
                succeeded = (ArgX1_23 == ArgY1_24);
              }
            }
            break;
        }
        break;
    }
  return succeeded;
}

void MR_CALL 
backend_libs__builtin_ops____Compare____shift_by_type_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
  MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

  succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 2;
    else
      *HeadVar__1_1 = (MR_Integer) 0;
  }
}

MR_bool MR_CALL 
backend_libs__builtin_ops____Unify____shift_by_type_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
backend_libs__builtin_ops____Compare____scalar_array_elem_type_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
  MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

  succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 2;
    else
      *HeadVar__1_1 = (MR_Integer) 0;
  }
}

MR_bool MR_CALL 
backend_libs__builtin_ops____Unify____scalar_array_elem_type_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
backend_libs__builtin_ops____Compare____int_as_uint_cmp_op_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_4 = (MR_Word) (HeadVar__2_2);
  MR_Word Cast_HeadVar2_5 = (MR_Word) (HeadVar__3_3);
  MR_Integer Var_7 = (MR_Integer) (Cast_HeadVar1_4);
  MR_Integer Var_8 = (MR_Integer) (Cast_HeadVar2_5);

  succeeded = (Var_7 < Var_8);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    succeeded = (Var_7 > Var_8);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 2;
    else
      *HeadVar__1_1 = (MR_Integer) 0;
  }
}

MR_bool MR_CALL 
backend_libs__builtin_ops____Unify____int_as_uint_cmp_op_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = (MR_Word) (HeadVar__1_1);
  MR_Word Cast_HeadVar2_4 = (MR_Word) (HeadVar__2_2);

  succeeded = (Cast_HeadVar1_3 == Cast_HeadVar2_4);
  return succeeded;
}

void MR_CALL 
backend_libs__builtin_ops____Compare____float_arith_op_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_4 = (MR_Word) (HeadVar__2_2);
  MR_Word Cast_HeadVar2_5 = (MR_Word) (HeadVar__3_3);
  MR_Integer Var_7 = (MR_Integer) (Cast_HeadVar1_4);
  MR_Integer Var_8 = (MR_Integer) (Cast_HeadVar2_5);

  succeeded = (Var_7 < Var_8);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    succeeded = (Var_7 > Var_8);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 2;
    else
      *HeadVar__1_1 = (MR_Integer) 0;
  }
}

MR_bool MR_CALL 
backend_libs__builtin_ops____Unify____float_arith_op_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = (MR_Word) (HeadVar__1_1);
  MR_Word Cast_HeadVar2_4 = (MR_Word) (HeadVar__2_2);

  succeeded = (Cast_HeadVar1_3 == Cast_HeadVar2_4);
  return succeeded;
}

void MR_CALL 
backend_libs__builtin_ops____Compare____cmp_op_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
  MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

  succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 2;
    else
      *HeadVar__1_1 = (MR_Integer) 0;
  }
}

MR_bool MR_CALL 
backend_libs__builtin_ops____Unify____cmp_op_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
backend_libs__builtin_ops____Compare____binary_op_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_48 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_49 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_48 == CastY_49);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Integer IndexX_4;
    MR_Integer IndexY_5;

    backend_libs__builtin_ops____Index____binary_op_0_0(HeadVar__2_2, &IndexX_4);
    backend_libs__builtin_ops____Index____binary_op_0_0(HeadVar__3_3, &IndexY_5);
    succeeded = (IndexX_4 < IndexY_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (IndexX_4 > IndexY_5);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 2;
      else
      {
        MR_Word CompareResult_6;

        switch (MR_tag((MR_Word) HeadVar__2_2)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              CompareResult_6 = (MR_Integer) 0;
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgX1_7 = ((((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, 0))) >> 3)) & (MR_Integer) 15);
              MR_Word ArgY1_8;
              MR_Word ArgX2_10 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, 0))) & (MR_Integer) 7);
              MR_Word ArgY2_11;
              MR_Word SubResult1_9;
              MR_Integer Var_78;
              MR_Integer Var_79;

              succeeded = ((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1);
              if (succeeded)
              {
                ArgY1_8 = ((((MR_Unsigned) ((MR_hl_field(1, HeadVar__3_3, 0))) >> 3)) & (MR_Integer) 15);
                ArgY2_11 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__3_3, 0))) & (MR_Integer) 7);
                Var_78 = (MR_Integer) (ArgX1_7);
                Var_79 = (MR_Integer) (ArgY1_8);
                succeeded = (Var_78 < Var_79);
                if (succeeded)
                {
                  SubResult1_9 = (MR_Integer) 1;
                  succeeded = MR_TRUE;
                }
                else
                {
                  succeeded = (Var_78 > Var_79);
                  if (succeeded)
                  {
                    SubResult1_9 = (MR_Integer) 2;
                    succeeded = MR_TRUE;
                  }
                }
                if (succeeded)
                  CompareResult_6 = SubResult1_9;
                else
                {
                  MR_Integer Var_80 = (MR_Integer) (ArgX2_10);
                  MR_Integer Var_81 = (MR_Integer) (ArgY2_11);

                  succeeded = (Var_80 < Var_81);
                  if (succeeded)
                    CompareResult_6 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (Var_80 > Var_81);
                    if (succeeded)
                      CompareResult_6 = (MR_Integer) 2;
                    else
                      CompareResult_6 = (MR_Integer) 0;
                  }
                }
                succeeded = MR_TRUE;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ArgX1_12 = ((((MR_Unsigned) ((MR_hl_field(2, HeadVar__2_2, 0))) >> 1)) & (MR_Integer) 15);
              MR_Word ArgY1_13;
              MR_Word ArgX2_15 = ((MR_Unsigned) ((MR_hl_field(2, HeadVar__2_2, 0))) & (MR_Integer) 1);
              MR_Word ArgY2_16;
              MR_Word SubResult1_14;
              MR_Integer Var_90;
              MR_Integer Var_91;

              succeeded = ((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 2);
              if (succeeded)
              {
                ArgY1_13 = ((((MR_Unsigned) ((MR_hl_field(2, HeadVar__3_3, 0))) >> 1)) & (MR_Integer) 15);
                ArgY2_16 = ((MR_Unsigned) ((MR_hl_field(2, HeadVar__3_3, 0))) & (MR_Integer) 1);
                Var_90 = (MR_Integer) (ArgX1_12);
                Var_91 = (MR_Integer) (ArgY1_13);
                succeeded = (Var_90 < Var_91);
                if (succeeded)
                {
                  SubResult1_14 = (MR_Integer) 1;
                  succeeded = MR_TRUE;
                }
                else
                {
                  succeeded = (Var_90 > Var_91);
                  if (succeeded)
                  {
                    SubResult1_14 = (MR_Integer) 2;
                    succeeded = MR_TRUE;
                  }
                }
                if (succeeded)
                  CompareResult_6 = SubResult1_14;
                else
                {
                  MR_Integer Var_92 = (MR_Integer) (ArgX2_15);
                  MR_Integer Var_93 = (MR_Integer) (ArgY2_16);

                  succeeded = (Var_92 < Var_93);
                  if (succeeded)
                    CompareResult_6 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (Var_92 > Var_93);
                    if (succeeded)
                      CompareResult_6 = (MR_Integer) 2;
                    else
                      CompareResult_6 = (MR_Integer) 0;
                  }
                }
                succeeded = MR_TRUE;
              }
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word ArgX1_17 = ((((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 1))) >> 1)) & (MR_Integer) 15);
                  MR_Word ArgY1_18;
                  MR_Word ArgX2_20 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 1))) & (MR_Integer) 1);
                  MR_Word ArgY2_21;
                  MR_Word SubResult1_19;
                  MR_Integer Var_94;
                  MR_Integer Var_95;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 0)));
                  if (succeeded)
                  {
                    ArgY1_18 = ((((MR_Unsigned) ((MR_hl_field(3, HeadVar__3_3, 1))) >> 1)) & (MR_Integer) 15);
                    ArgY2_21 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__3_3, 1))) & (MR_Integer) 1);
                    Var_94 = (MR_Integer) (ArgX1_17);
                    Var_95 = (MR_Integer) (ArgY1_18);
                    succeeded = (Var_94 < Var_95);
                    if (succeeded)
                    {
                      SubResult1_19 = (MR_Integer) 1;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = (Var_94 > Var_95);
                      if (succeeded)
                      {
                        SubResult1_19 = (MR_Integer) 2;
                        succeeded = MR_TRUE;
                      }
                    }
                    if (succeeded)
                      CompareResult_6 = SubResult1_19;
                    else
                    {
                      MR_Integer Var_96 = (MR_Integer) (ArgX2_20);
                      MR_Integer Var_97 = (MR_Integer) (ArgY2_21);

                      succeeded = (Var_96 < Var_97);
                      if (succeeded)
                        CompareResult_6 = (MR_Integer) 1;
                      else
                      {
                        succeeded = (Var_96 > Var_97);
                        if (succeeded)
                          CompareResult_6 = (MR_Integer) 2;
                        else
                          CompareResult_6 = (MR_Integer) 0;
                      }
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ArgX1_22 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 1))) & (MR_Integer) 15);
                  MR_Word ArgY1_23;
                  MR_Integer Var_68;
                  MR_Integer Var_69;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 1)));
                  if (succeeded)
                  {
                    ArgY1_23 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__3_3, 1))) & (MR_Integer) 15);
                    Var_68 = (MR_Integer) (ArgX1_22);
                    Var_69 = (MR_Integer) (ArgY1_23);
                    succeeded = (Var_68 < Var_69);
                    if (succeeded)
                      CompareResult_6 = (MR_Integer) 1;
                    else
                    {
                      succeeded = (Var_68 > Var_69);
                      if (succeeded)
                        CompareResult_6 = (MR_Integer) 2;
                      else
                        CompareResult_6 = (MR_Integer) 0;
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word ArgX1_24 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 1))) & (MR_Integer) 15);
                  MR_Word ArgY1_25;
                  MR_Integer Var_70;
                  MR_Integer Var_71;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 2)));
                  if (succeeded)
                  {
                    ArgY1_25 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__3_3, 1))) & (MR_Integer) 15);
                    Var_70 = (MR_Integer) (ArgX1_24);
                    Var_71 = (MR_Integer) (ArgY1_25);
                    succeeded = (Var_70 < Var_71);
                    if (succeeded)
                      CompareResult_6 = (MR_Integer) 1;
                    else
                    {
                      succeeded = (Var_70 > Var_71);
                      if (succeeded)
                        CompareResult_6 = (MR_Integer) 2;
                      else
                        CompareResult_6 = (MR_Integer) 0;
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word ArgX1_26 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 1))) & (MR_Integer) 15);
                  MR_Word ArgY1_27;
                  MR_Integer Var_72;
                  MR_Integer Var_73;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 3)));
                  if (succeeded)
                  {
                    ArgY1_27 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__3_3, 1))) & (MR_Integer) 15);
                    Var_72 = (MR_Integer) (ArgX1_26);
                    Var_73 = (MR_Integer) (ArgY1_27);
                    succeeded = (Var_72 < Var_73);
                    if (succeeded)
                      CompareResult_6 = (MR_Integer) 1;
                    else
                    {
                      succeeded = (Var_72 > Var_73);
                      if (succeeded)
                        CompareResult_6 = (MR_Integer) 2;
                      else
                        CompareResult_6 = (MR_Integer) 0;
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_Word ArgX1_28 = ((((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 1))) >> 3)) & (MR_Integer) 15);
                  MR_Word ArgY1_29;
                  MR_Word ArgX2_31 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 1))) & (MR_Integer) 7);
                  MR_Word ArgY2_32;
                  MR_Word SubResult1_30;
                  MR_Integer Var_84;
                  MR_Integer Var_85;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 4)));
                  if (succeeded)
                  {
                    ArgY1_29 = ((((MR_Unsigned) ((MR_hl_field(3, HeadVar__3_3, 1))) >> 3)) & (MR_Integer) 15);
                    ArgY2_32 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__3_3, 1))) & (MR_Integer) 7);
                    Var_84 = (MR_Integer) (ArgX1_28);
                    Var_85 = (MR_Integer) (ArgY1_29);
                    succeeded = (Var_84 < Var_85);
                    if (succeeded)
                    {
                      SubResult1_30 = (MR_Integer) 1;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = (Var_84 > Var_85);
                      if (succeeded)
                      {
                        SubResult1_30 = (MR_Integer) 2;
                        succeeded = MR_TRUE;
                      }
                    }
                    if (succeeded)
                      CompareResult_6 = SubResult1_30;
                    else
                    {
                      MR_Integer Var_86 = (MR_Integer) (ArgX2_31);
                      MR_Integer Var_87 = (MR_Integer) (ArgY2_32);

                      succeeded = (Var_86 < Var_87);
                      if (succeeded)
                        CompareResult_6 = (MR_Integer) 1;
                      else
                      {
                        succeeded = (Var_86 > Var_87);
                        if (succeeded)
                          CompareResult_6 = (MR_Integer) 2;
                        else
                          CompareResult_6 = (MR_Integer) 0;
                      }
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 5:
                {
                  MR_Word ArgX1_33 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                  MR_Word ArgY1_34;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 5)));
                  if (succeeded)
                  {
                    ArgY1_34 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 1))));
                    backend_libs__builtin_ops____Compare____array_elem_type_0_0(&CompareResult_6, ArgX1_33, ArgY1_34);
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 6:
                {
                  MR_Word ArgX1_35 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 1))) & (MR_Integer) 7);
                  MR_Word ArgY1_36;
                  MR_Integer Var_88;
                  MR_Integer Var_89;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 6)));
                  if (succeeded)
                  {
                    ArgY1_36 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__3_3, 1))) & (MR_Integer) 7);
                    Var_88 = (MR_Integer) (ArgX1_35);
                    Var_89 = (MR_Integer) (ArgY1_36);
                    succeeded = (Var_88 < Var_89);
                    if (succeeded)
                      CompareResult_6 = (MR_Integer) 1;
                    else
                    {
                      succeeded = (Var_88 > Var_89);
                      if (succeeded)
                        CompareResult_6 = (MR_Integer) 2;
                      else
                        CompareResult_6 = (MR_Integer) 0;
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 7:
                {
                  MR_Integer ArgX1_37 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 1))));
                  MR_Integer ArgY1_38;
                  MR_Word ArgX2_40 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 2))));
                  MR_Word ArgY2_41;
                  MR_Word SubResult1_39;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 7)));
                  if (succeeded)
                  {
                    ArgY1_38 = ((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 1))));
                    ArgY2_41 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 2))));
                    succeeded = (ArgX1_37 < ArgY1_38);
                    if (succeeded)
                    {
                      SubResult1_39 = (MR_Integer) 1;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = (ArgX1_37 > ArgY1_38);
                      if (succeeded)
                      {
                        SubResult1_39 = (MR_Integer) 2;
                        succeeded = MR_TRUE;
                      }
                    }
                    if (succeeded)
                      CompareResult_6 = SubResult1_39;
                    else
                      backend_libs__builtin_ops____Compare____maybe_size_0_0(&CompareResult_6, ArgX2_40, ArgY2_41);
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 8:
                {
                  MR_Word ArgX1_42 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 1))) & (MR_Integer) 7);
                  MR_Word ArgY1_43;
                  MR_Integer Var_82;
                  MR_Integer Var_83;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 8)));
                  if (succeeded)
                  {
                    ArgY1_43 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__3_3, 1))) & (MR_Integer) 7);
                    Var_82 = (MR_Integer) (ArgX1_42);
                    Var_83 = (MR_Integer) (ArgY1_43);
                    succeeded = (Var_82 < Var_83);
                    if (succeeded)
                      CompareResult_6 = (MR_Integer) 1;
                    else
                    {
                      succeeded = (Var_82 > Var_83);
                      if (succeeded)
                        CompareResult_6 = (MR_Integer) 2;
                      else
                        CompareResult_6 = (MR_Integer) 0;
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 9:
                {
                  MR_Word ArgX1_44 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 1))) & (MR_Integer) 7);
                  MR_Word ArgY1_45;
                  MR_Integer Var_74;
                  MR_Integer Var_75;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 9)));
                  if (succeeded)
                  {
                    ArgY1_45 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__3_3, 1))) & (MR_Integer) 7);
                    Var_74 = (MR_Integer) (ArgX1_44);
                    Var_75 = (MR_Integer) (ArgY1_45);
                    succeeded = (Var_74 < Var_75);
                    if (succeeded)
                      CompareResult_6 = (MR_Integer) 1;
                    else
                    {
                      succeeded = (Var_74 > Var_75);
                      if (succeeded)
                        CompareResult_6 = (MR_Integer) 2;
                      else
                        CompareResult_6 = (MR_Integer) 0;
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 10:
                {
                  MR_Word ArgX1_46 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 1))) & (MR_Integer) 7);
                  MR_Word ArgY1_47;
                  MR_Integer Var_76;
                  MR_Integer Var_77;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 10)));
                  if (succeeded)
                  {
                    ArgY1_47 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__3_3, 1))) & (MR_Integer) 7);
                    Var_76 = (MR_Integer) (ArgX1_46);
                    Var_77 = (MR_Integer) (ArgY1_47);
                    succeeded = (Var_76 < Var_77);
                    if (succeeded)
                      CompareResult_6 = (MR_Integer) 1;
                    else
                    {
                      succeeded = (Var_76 > Var_77);
                      if (succeeded)
                        CompareResult_6 = (MR_Integer) 2;
                      else
                        CompareResult_6 = (MR_Integer) 0;
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
            }
            break;
        }
        if (succeeded)
          *HeadVar__1_1 = CompareResult_6;
        else
          {
            mercury__private_builtin__compare_error_0_p_0();
            return;
          }
      }
    }
  }
}

void MR_CALL 
backend_libs__builtin_ops____Compare____maybe_size_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_6 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_7 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_6 == CastY_7);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      *HeadVar__1_1 = (MR_Integer) 1;
  else
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__1_1 = (MR_Integer) 2;
  else
  {
    MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(1, HeadVar__3_3, 0))));

    succeeded = (ArgX1_4 < ArgY1_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (ArgX1_4 > ArgY1_5);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 2;
      else
        *HeadVar__1_1 = (MR_Integer) 0;
    }
  }
}

void MR_CALL 
backend_libs__builtin_ops____Index____binary_op_0_0(
  MR_Word HeadVar__1_1,
  MR_Integer * HeadVar__2_2)
{
  switch (MR_tag((MR_Word) HeadVar__1_1)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *HeadVar__2_2 = (MR_Integer) 6;
          break;
        case (MR_Integer) 1:
          *HeadVar__2_2 = (MR_Integer) 7;
          break;
        case (MR_Integer) 2:
          *HeadVar__2_2 = (MR_Integer) 9;
          break;
        case (MR_Integer) 3:
          *HeadVar__2_2 = (MR_Integer) 11;
          break;
        case (MR_Integer) 4:
          *HeadVar__2_2 = (MR_Integer) 13;
          break;
        case (MR_Integer) 5:
          *HeadVar__2_2 = (MR_Integer) 16;
          break;
        case (MR_Integer) 6:
          *HeadVar__2_2 = (MR_Integer) 19;
          break;
        case (MR_Integer) 7:
          *HeadVar__2_2 = (MR_Integer) 20;
          break;
        case (MR_Integer) 8:
          *HeadVar__2_2 = (MR_Integer) 21;
          break;
        case (MR_Integer) 9:
          *HeadVar__2_2 = (MR_Integer) 22;
          break;
      }
      break;
    case (MR_Integer) 1:
      *HeadVar__2_2 = (MR_Integer) 0;
      break;
    case (MR_Integer) 2:
      *HeadVar__2_2 = (MR_Integer) 1;
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *HeadVar__2_2 = (MR_Integer) 2;
          break;
        case (MR_Integer) 1:
          *HeadVar__2_2 = (MR_Integer) 3;
          break;
        case (MR_Integer) 2:
          *HeadVar__2_2 = (MR_Integer) 4;
          break;
        case (MR_Integer) 3:
          *HeadVar__2_2 = (MR_Integer) 5;
          break;
        case (MR_Integer) 4:
          *HeadVar__2_2 = (MR_Integer) 8;
          break;
        case (MR_Integer) 5:
          *HeadVar__2_2 = (MR_Integer) 10;
          break;
        case (MR_Integer) 6:
          *HeadVar__2_2 = (MR_Integer) 12;
          break;
        case (MR_Integer) 7:
          *HeadVar__2_2 = (MR_Integer) 14;
          break;
        case (MR_Integer) 8:
          *HeadVar__2_2 = (MR_Integer) 15;
          break;
        case (MR_Integer) 9:
          *HeadVar__2_2 = (MR_Integer) 17;
          break;
        case (MR_Integer) 10:
          *HeadVar__2_2 = (MR_Integer) 18;
          break;
      }
      break;
  }
}

MR_bool MR_CALL 
backend_libs__builtin_ops____Unify____binary_op_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_41 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_42 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_41 == CastY_42);
  if (succeeded)
    succeeded = MR_TRUE;
  else
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer CastX_39 = (MR_Integer) (HeadVar__1_1);
          MR_Integer CastY_40 = (MR_Integer) (HeadVar__2_2);

          succeeded = (CastY_40 == CastX_39);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ArgX1_3 = ((((MR_Unsigned) ((MR_hl_field(1, HeadVar__1_1, 0))) >> 3)) & (MR_Integer) 15);
          MR_Word ArgY1_4;
          MR_Word ArgX2_5 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__1_1, 0))) & (MR_Integer) 7);
          MR_Word ArgY2_6;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_4 = ((((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, 0))) >> 3)) & (MR_Integer) 15);
            ArgY2_6 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, 0))) & (MR_Integer) 7);
            succeeded = (ArgX1_3 == ArgY1_4);
            if (succeeded)
              succeeded = (ArgX2_5 == ArgY2_6);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ArgX1_7 = ((((MR_Unsigned) ((MR_hl_field(2, HeadVar__1_1, 0))) >> 1)) & (MR_Integer) 15);
          MR_Word ArgY1_8;
          MR_Word ArgX2_9 = ((MR_Unsigned) ((MR_hl_field(2, HeadVar__1_1, 0))) & (MR_Integer) 1);
          MR_Word ArgY2_10;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_8 = ((((MR_Unsigned) ((MR_hl_field(2, HeadVar__2_2, 0))) >> 1)) & (MR_Integer) 15);
            ArgY2_10 = ((MR_Unsigned) ((MR_hl_field(2, HeadVar__2_2, 0))) & (MR_Integer) 1);
            succeeded = (ArgX1_7 == ArgY1_8);
            if (succeeded)
              succeeded = (ArgX2_9 == ArgY2_10);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ArgX1_11 = ((((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, 1))) >> 1)) & (MR_Integer) 15);
              MR_Word ArgY1_12;
              MR_Word ArgX2_13 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, 1))) & (MR_Integer) 1);
              MR_Word ArgY2_14;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                ArgY1_12 = ((((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 1))) >> 1)) & (MR_Integer) 15);
                ArgY2_14 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 1))) & (MR_Integer) 1);
                succeeded = (ArgX1_11 == ArgY1_12);
                if (succeeded)
                  succeeded = (ArgX2_13 == ArgY2_14);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgX1_15 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, 1))) & (MR_Integer) 15);
              MR_Word ArgY1_16;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                ArgY1_16 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 1))) & (MR_Integer) 15);
                succeeded = (ArgX1_15 == ArgY1_16);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ArgX1_17 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, 1))) & (MR_Integer) 15);
              MR_Word ArgY1_18;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 2)));
              if (succeeded)
              {
                ArgY1_18 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 1))) & (MR_Integer) 15);
                succeeded = (ArgX1_17 == ArgY1_18);
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word ArgX1_19 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, 1))) & (MR_Integer) 15);
              MR_Word ArgY1_20;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 3)));
              if (succeeded)
              {
                ArgY1_20 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 1))) & (MR_Integer) 15);
                succeeded = (ArgX1_19 == ArgY1_20);
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word ArgX1_21 = ((((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, 1))) >> 3)) & (MR_Integer) 15);
              MR_Word ArgY1_22;
              MR_Word ArgX2_23 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, 1))) & (MR_Integer) 7);
              MR_Word ArgY2_24;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 4)));
              if (succeeded)
              {
                ArgY1_22 = ((((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 1))) >> 3)) & (MR_Integer) 15);
                ArgY2_24 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 1))) & (MR_Integer) 7);
                succeeded = (ArgX1_21 == ArgY1_22);
                if (succeeded)
                  succeeded = (ArgX2_23 == ArgY2_24);
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word ArgX1_25 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_Word ArgY1_26;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 5)));
              if (succeeded)
              {
                ArgY1_26 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                succeeded = backend_libs__builtin_ops____Unify____array_elem_type_0_0(ArgX1_25, ArgY1_26);
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word ArgX1_27 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, 1))) & (MR_Integer) 7);
              MR_Word ArgY1_28;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 6)));
              if (succeeded)
              {
                ArgY1_28 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 1))) & (MR_Integer) 7);
                succeeded = (ArgX1_27 == ArgY1_28);
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Integer ArgX1_29 = ((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_Integer ArgY1_30;
              MR_Word ArgX2_31 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_Word ArgY2_32;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 7)));
              if (succeeded)
              {
                ArgY1_30 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 1))));
                ArgY2_32 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 2))));
                succeeded = (ArgX1_29 == ArgY1_30);
                if (succeeded)
                  succeeded = backend_libs__builtin_ops____Unify____maybe_size_0_0(ArgX2_31, ArgY2_32);
              }
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word ArgX1_33 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, 1))) & (MR_Integer) 7);
              MR_Word ArgY1_34;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 8)));
              if (succeeded)
              {
                ArgY1_34 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 1))) & (MR_Integer) 7);
                succeeded = (ArgX1_33 == ArgY1_34);
              }
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Word ArgX1_35 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, 1))) & (MR_Integer) 7);
              MR_Word ArgY1_36;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 9)));
              if (succeeded)
              {
                ArgY1_36 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 1))) & (MR_Integer) 7);
                succeeded = (ArgX1_35 == ArgY1_36);
              }
            }
            break;
          case (MR_Integer) 10:
            {
              MR_Word ArgX1_37 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, 1))) & (MR_Integer) 7);
              MR_Word ArgY1_38;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 10)));
              if (succeeded)
              {
                ArgY1_38 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 1))) & (MR_Integer) 7);
                succeeded = (ArgX1_37 == ArgY1_38);
              }
            }
            break;
        }
        break;
    }
  return succeeded;
}

MR_bool MR_CALL 
backend_libs__builtin_ops____Unify____maybe_size_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_7 == CastY_8);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastY_6 == CastX_5);
  }
  else
  {
    MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Integer ArgY1_4;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_4 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 0))));
      succeeded = (ArgX1_3 == ArgY1_4);
    }
  }
  return succeeded;
}

void MR_CALL 
backend_libs__builtin_ops____Compare____array_elem_type_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_8 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_9 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_8 == CastY_9);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0))
    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
    {
      MR_Word ArgX1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) & (MR_Integer) 3);
      MR_Word ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))) & (MR_Integer) 3);
      MR_Integer Var_12 = (MR_Integer) (ArgX1_4);
      MR_Integer Var_13 = (MR_Integer) (ArgY1_5);

      succeeded = (Var_12 < Var_13);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        succeeded = (Var_12 > Var_13);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 2;
        else
          *HeadVar__1_1 = (MR_Integer) 0;
      }
    }
    else
      *HeadVar__1_1 = (MR_Integer) 1;
  else
  if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
    *HeadVar__1_1 = (MR_Integer) 2;
  else
  {
    MR_Word ArgX1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word ArgY1_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));

    mercury__builtin__compare_3_p_0((MR_Word) (&backend_libs__builtin_ops_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (ArgX1_6)), ((MR_Box) (ArgY1_7)));
  }
}

MR_bool MR_CALL 
backend_libs__builtin_ops____Unify____array_elem_type_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
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
    MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) & (MR_Integer) 3);
    MR_Word ArgY1_4;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) & (MR_Integer) 3);
      succeeded = (ArgX1_3 == ArgY1_4);
    }
  }
  else
  {
    MR_Word TypeInfo_9_9;
    MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word ArgY1_6;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      TypeInfo_9_9 = (MR_Word) (&backend_libs__builtin_ops_scalar_common_1[0]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_9_9, ((MR_Box) (ArgX1_5)), ((MR_Box) (ArgY1_6)));
    }
  }
  return succeeded;
}

void MR_CALL 
backend_libs__builtin_ops____Compare____arith_op_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
  MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

  succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 2;
    else
      *HeadVar__1_1 = (MR_Integer) 0;
  }
}

MR_bool MR_CALL 
backend_libs__builtin_ops____Unify____arith_op_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
backend_libs__builtin_ops__translate_builtin_5_p_0(
  MR_Word TypeInfo_for_T_23,
  MR_Word FullyQualifiedModule_6,
  MR_String PredName_7,
  MR_Integer ProcId_8,
  MR_Word Args_9,
  MR_Word * Code_10)
{
  MR_bool succeeded;
  MR_Word CodePrime_13;
  MR_String ModuleName_11;
  MR_Integer ProcNum_12;
  MR_Integer slot_0;
  MR_String str_1;

  succeeded = mdbcomp__builtin_modules__is_std_lib_module_name_2_p_0(FullyQualifiedModule_6, &ModuleName_11);
  if (succeeded)
  {
    hlds__hlds_pred__proc_id_to_int_2_p_0(ProcId_8, &ProcNum_12);
    // hashed string jump switch
    ;
    // compute the hash value of the input string
    ;
    slot_0 = ((MR_hash_string6(ModuleName_11)) & (MR_Integer) 63);
    // no collisions; no hash chain loop
    ;
    // lookup the string for this hash slot
    ;
    str_1 = ((&backend_libs__builtin_ops_vector_common_7[102 + slot_0]))->backend_libs__builtin_ops__vector_common_type_7_0__vct_7_f_0;
    // did we find a match?
    ;
    if ((((str_1 != NULL)) && ((strcmp(str_1, ModuleName_11) == 0))))
    {
      // we found a match; dispatch to the corresponding code
      ;
      switch (slot_0) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 3:
          {
            // case "uint32"
            ;
            succeeded = backend_libs__builtin_ops__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_105_110_116_95_95_91_49_93_95_48_5_p_0((MR_Integer) 7, PredName_7, ProcNum_12, Args_9, &CodePrime_13);
          }
          break;
        case (MR_Integer) 7:
          {
            // case "int16"
            ;
            succeeded = backend_libs__builtin_ops__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_105_110_116_95_95_91_49_93_95_48_5_p_0((MR_Integer) 4, PredName_7, ProcNum_12, Args_9, &CodePrime_13);
          }
          break;
        case (MR_Integer) 8:
          {
            // case "int"
            ;
            succeeded = backend_libs__builtin_ops__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_105_110_116_95_95_91_49_93_95_48_5_p_0((MR_Integer) 0, PredName_7, ProcNum_12, Args_9, &CodePrime_13);
          }
          break;
        case (MR_Integer) 10:
          {
            // case "io"
            ;
            {
              MR_Word Var_58;

              succeeded = (ProcNum_12 == (MR_Integer) 0);
              if (succeeded)
              {
                succeeded = (Args_9 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Var_58 = ((MR_Word) ((MR_hl_field(1, Args_9, 1))));
                  succeeded = (Var_58 == (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    if ((strcmp(PredName_7, (MR_String) "unsafe_get_io_state") == 0))
                    {
                      {
                        CodePrime_13 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(3, CodePrime_13, 0) = ((MR_Box) (Args_9));
                      }
                      succeeded = MR_TRUE;
                    }
                    else
                    if ((strcmp(PredName_7, (MR_String) "unsafe_set_io_state") == 0))
                    {
                      CodePrime_13 = (MR_Word) (MR_mkword(3, &backend_libs__builtin_ops_scalar_common_2[1]));
                      succeeded = MR_TRUE;
                    }
                    else
                      succeeded = MR_FALSE;
                  }
                }
              }
            }
          }
          break;
        case (MR_Integer) 13:
          {
            // case "uint8"
            ;
            succeeded = backend_libs__builtin_ops__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_105_110_116_95_95_91_49_93_95_48_5_p_0((MR_Integer) 3, PredName_7, ProcNum_12, Args_9, &CodePrime_13);
          }
          break;
        case (MR_Integer) 14:
          {
            // case "private_builtin"
            ;
            succeeded = backend_libs__builtin_ops__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_91_49_93_95_48_4_p_0(PredName_7, ProcNum_12, Args_9, &CodePrime_13);
          }
          break;
        case (MR_Integer) 16:
          {
            // case "builtin"
            ;
            {
              MR_Box X_35;
              MR_Box Y_36;
              MR_Word Var_40;
              MR_Word Var_41;
              MR_Word Var_42;

              succeeded = (strcmp(PredName_7, (MR_String) "unsafe_promise_unique") == 0);
              if (succeeded)
              {
                succeeded = (ProcNum_12 == (MR_Integer) 0);
                if (succeeded)
                {
                  succeeded = (Args_9 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    X_35 = (MR_hl_field(1, Args_9, 0));
                    Var_40 = ((MR_Word) ((MR_hl_field(1, Args_9, 1))));
                    succeeded = (Var_40 != (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      Y_36 = (MR_hl_field(1, Var_40, 0));
                      Var_41 = ((MR_Word) ((MR_hl_field(1, Var_40, 1))));
                      succeeded = (Var_41 == (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        {
                          Var_42 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(0, Var_42, 0) = X_35;
                        }
                        {
                          CodePrime_13 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(0, CodePrime_13, 0) = Y_36;
                          MR_hl_field(0, CodePrime_13, 1) = ((MR_Box) (Var_42));
                        }
                        succeeded = MR_TRUE;
                      }
                    }
                  }
                }
              }
            }
          }
          break;
        case (MR_Integer) 20:
          {
            // case "uint"
            ;
            succeeded = backend_libs__builtin_ops__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_105_110_116_95_95_91_49_93_95_48_5_p_0((MR_Integer) 1, PredName_7, ProcNum_12, Args_9, &CodePrime_13);
          }
          break;
        case (MR_Integer) 23:
          {
            // case "int8"
            ;
            succeeded = backend_libs__builtin_ops__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_105_110_116_95_95_91_49_93_95_48_5_p_0((MR_Integer) 2, PredName_7, ProcNum_12, Args_9, &CodePrime_13);
          }
          break;
        case (MR_Integer) 28:
          {
            // case "uint64"
            ;
            succeeded = backend_libs__builtin_ops__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_105_110_116_95_95_91_49_93_95_48_5_p_0((MR_Integer) 9, PredName_7, ProcNum_12, Args_9, &CodePrime_13);
          }
          break;
        case (MR_Integer) 33:
          {
            // case "uint16"
            ;
            succeeded = backend_libs__builtin_ops__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_105_110_116_95_95_91_49_93_95_48_5_p_0((MR_Integer) 5, PredName_7, ProcNum_12, Args_9, &CodePrime_13);
          }
          break;
        case (MR_Integer) 35:
          {
            // case "float"
            ;
            succeeded = backend_libs__builtin_ops__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_102_108_111_97_116_95_95_91_49_93_95_48_4_p_0(PredName_7, ProcNum_12, Args_9, &CodePrime_13);
          }
          break;
        case (MR_Integer) 37:
          {
            // case "int32"
            ;
            succeeded = backend_libs__builtin_ops__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_105_110_116_95_95_91_49_93_95_48_5_p_0((MR_Integer) 6, PredName_7, ProcNum_12, Args_9, &CodePrime_13);
          }
          break;
        case (MR_Integer) 48:
          {
            // case "int64"
            ;
            succeeded = backend_libs__builtin_ops__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_105_110_116_95_95_91_49_93_95_48_5_p_0((MR_Integer) 8, PredName_7, ProcNum_12, Args_9, &CodePrime_13);
          }
          break;
        case (MR_Integer) 56:
          {
            // case "term_size_prof_builtin"
            ;
            {
              MR_Box Z_38;
              MR_Word Var_48;
              MR_Word Var_49;
              MR_Word Var_50;
              MR_Word Var_51;
              MR_Word Var_52;
              MR_Box X_56;
              MR_Box Y_57;

              succeeded = (strcmp(PredName_7, (MR_String) "term_size_plus") == 0);
              if (succeeded)
              {
                succeeded = (ProcNum_12 == (MR_Integer) 0);
                if (succeeded)
                {
                  succeeded = (Args_9 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    X_56 = (MR_hl_field(1, Args_9, 0));
                    Var_48 = ((MR_Word) ((MR_hl_field(1, Args_9, 1))));
                    succeeded = (Var_48 != (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      Y_57 = (MR_hl_field(1, Var_48, 0));
                      Var_49 = ((MR_Word) ((MR_hl_field(1, Var_48, 1))));
                      succeeded = (Var_49 != (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        Z_38 = (MR_hl_field(1, Var_49, 0));
                        Var_50 = ((MR_Word) ((MR_hl_field(1, Var_49, 1))));
                        succeeded = (Var_50 == (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          Var_52 = (MR_Word) (MR_mkword(1, &backend_libs__builtin_ops_scalar_common_2[2]));
                          {
                            Var_51 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(2, Var_51, 0) = ((MR_Box) (Var_52));
                            MR_hl_field(2, Var_51, 1) = X_56;
                            MR_hl_field(2, Var_51, 2) = Y_57;
                          }
                          {
                            CodePrime_13 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(0, CodePrime_13, 0) = Z_38;
                            MR_hl_field(0, CodePrime_13, 1) = ((MR_Box) (Var_51));
                          }
                          succeeded = MR_TRUE;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          break;
      }
      // jump out of search loop
      ;
      goto label_0;
    }
    succeeded = MR_FALSE;
  label_0:;
  }
  if (succeeded)
    *Code_10 = CodePrime_13;
  else
  {
    MR_Integer Arity_14;
    MR_String Msg_15;
    MR_String Var_24;
    MR_String Var_32;
    MR_String Var_33;

    mercury__list__length_2_p_0(TypeInfo_for_T_23, Args_9, &Arity_14);
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&backend_libs__builtin_ops_scalar_common_2[0]), Arity_14, &Var_24);
    Var_32 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_24);
    Var_33 = mercury__string__f_43_43_2_f_0(PredName_7, Var_32);
    Msg_15 = mercury__string__f_43_43_2_f_0((MR_String) "unknown builtin ", Var_33);
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.builtin_ops.translate_builtin\'/5", Msg_15);
      return;
    }
  }
}

MR_bool MR_CALL 
backend_libs__builtin_ops__test_if_builtin_3_p_0(
  MR_Word FullyQualifiedModule_4,
  MR_String PredName_5,
  MR_Integer Arity_6)
{
  MR_bool succeeded;
  MR_Word TypeCtorInfo_12_12;
  MR_String ModuleName_7;
  MR_Integer ProcNum_8;
  MR_Word Args_9;
  MR_Integer Var_11;
  MR_Integer slot_0;
  MR_String str_1;

  succeeded = mdbcomp__builtin_modules__is_std_lib_module_name_2_p_0(FullyQualifiedModule_4, &ModuleName_7);
  if (succeeded)
  {
    ProcNum_8 = (MR_Integer) 0;
    Var_11 = (MR_Integer) 0;
    TypeCtorInfo_12_12 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0);
    mercury__list__duplicate_3_p_0(TypeCtorInfo_12_12, Arity_6, ((MR_Box) (Var_11)), &Args_9);
    // hashed string jump switch
    ;
    // compute the hash value of the input string
    ;
    slot_0 = ((MR_hash_string6(ModuleName_7)) & (MR_Integer) 63);
    // no collisions; no hash chain loop
    ;
    // lookup the string for this hash slot
    ;
    str_1 = ((&backend_libs__builtin_ops_vector_common_7[38 + slot_0]))->backend_libs__builtin_ops__vector_common_type_7_0__vct_7_f_0;
    // did we find a match?
    ;
    if ((((str_1 != NULL)) && ((strcmp(str_1, ModuleName_7) == 0))))
    {
      // we found a match; dispatch to the corresponding code
      ;
      switch (slot_0) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 3:
          {
            // case "uint32"
            ;
            {
              MR_Word _Code_62;

              succeeded = backend_libs__builtin_ops__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_105_110_116_95_95_91_49_93_95_48_5_p_0((MR_Integer) 7, PredName_5, ProcNum_8, Args_9, &_Code_62);
            }
          }
          break;
        case (MR_Integer) 7:
          {
            // case "int16"
            ;
            {
              MR_Word _Code_50;

              succeeded = backend_libs__builtin_ops__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_105_110_116_95_95_91_49_93_95_48_5_p_0((MR_Integer) 4, PredName_5, ProcNum_8, Args_9, &_Code_50);
            }
          }
          break;
        case (MR_Integer) 8:
          {
            // case "int"
            ;
            {
              MR_Word _Code_48;

              succeeded = backend_libs__builtin_ops__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_105_110_116_95_95_91_49_93_95_48_5_p_0((MR_Integer) 0, PredName_5, ProcNum_8, Args_9, &_Code_48);
            }
          }
          break;
        case (MR_Integer) 10:
          {
            // case "io"
            ;
            {
              MR_Word Var_36;

              if ((strcmp(PredName_5, (MR_String) "unsafe_get_io_state") == 0))
                succeeded = MR_TRUE;
              else
              if ((strcmp(PredName_5, (MR_String) "unsafe_set_io_state") == 0))
                succeeded = MR_TRUE;
              else
                succeeded = MR_FALSE;
              if (succeeded)
              {
                succeeded = (Args_9 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Var_36 = ((MR_Word) ((MR_hl_field(1, Args_9, 1))));
                  succeeded = (Var_36 == (MR_Word) ((MR_Unsigned) 0U));
                }
              }
            }
          }
          break;
        case (MR_Integer) 13:
          {
            // case "uint8"
            ;
            {
              MR_Word _Code_66;

              succeeded = backend_libs__builtin_ops__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_105_110_116_95_95_91_49_93_95_48_5_p_0((MR_Integer) 3, PredName_5, ProcNum_8, Args_9, &_Code_66);
            }
          }
          break;
        case (MR_Integer) 14:
          {
            // case "private_builtin"
            ;
            {
              MR_Word _Code_72;

              succeeded = backend_libs__builtin_ops__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_91_49_93_95_48_4_p_0(PredName_5, ProcNum_8, Args_9, &_Code_72);
            }
          }
          break;
        case (MR_Integer) 16:
          {
            // case "builtin"
            ;
            {
              MR_Word Var_18;
              MR_Word Var_19;

              succeeded = (strcmp(PredName_5, (MR_String) "unsafe_promise_unique") == 0);
              if (succeeded)
              {
                succeeded = (Args_9 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Var_18 = ((MR_Word) ((MR_hl_field(1, Args_9, 1))));
                  succeeded = (Var_18 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Var_19 = ((MR_Word) ((MR_hl_field(1, Var_18, 1))));
                    succeeded = (Var_19 == (MR_Word) ((MR_Unsigned) 0U));
                  }
                }
              }
            }
          }
          break;
        case (MR_Integer) 20:
          {
            // case "uint"
            ;
            {
              MR_Word _Code_58;

              succeeded = backend_libs__builtin_ops__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_105_110_116_95_95_91_49_93_95_48_5_p_0((MR_Integer) 1, PredName_5, ProcNum_8, Args_9, &_Code_58);
            }
          }
          break;
        case (MR_Integer) 23:
          {
            // case "int8"
            ;
            {
              MR_Word _Code_56;

              succeeded = backend_libs__builtin_ops__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_105_110_116_95_95_91_49_93_95_48_5_p_0((MR_Integer) 2, PredName_5, ProcNum_8, Args_9, &_Code_56);
            }
          }
          break;
        case (MR_Integer) 28:
          {
            // case "uint64"
            ;
            {
              MR_Word _Code_64;

              succeeded = backend_libs__builtin_ops__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_105_110_116_95_95_91_49_93_95_48_5_p_0((MR_Integer) 9, PredName_5, ProcNum_8, Args_9, &_Code_64);
            }
          }
          break;
        case (MR_Integer) 33:
          {
            // case "uint16"
            ;
            {
              MR_Word _Code_60;

              succeeded = backend_libs__builtin_ops__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_105_110_116_95_95_91_49_93_95_48_5_p_0((MR_Integer) 5, PredName_5, ProcNum_8, Args_9, &_Code_60);
            }
          }
          break;
        case (MR_Integer) 35:
          {
            // case "float"
            ;
            {
              MR_Word _Code_47;

              succeeded = backend_libs__builtin_ops__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_102_108_111_97_116_95_95_91_49_93_95_48_4_p_0(PredName_5, ProcNum_8, Args_9, &_Code_47);
            }
          }
          break;
        case (MR_Integer) 37:
          {
            // case "int32"
            ;
            {
              MR_Word _Code_52;

              succeeded = backend_libs__builtin_ops__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_105_110_116_95_95_91_49_93_95_48_5_p_0((MR_Integer) 6, PredName_5, ProcNum_8, Args_9, &_Code_52);
            }
          }
          break;
        case (MR_Integer) 48:
          {
            // case "int64"
            ;
            {
              MR_Word _Code_54;

              succeeded = backend_libs__builtin_ops__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_105_110_116_95_95_91_49_93_95_48_5_p_0((MR_Integer) 8, PredName_5, ProcNum_8, Args_9, &_Code_54);
            }
          }
          break;
        case (MR_Integer) 56:
          {
            // case "term_size_prof_builtin"
            ;
            {
              MR_Word Var_26;
              MR_Word Var_27;
              MR_Word Var_28;

              succeeded = (strcmp(PredName_5, (MR_String) "term_size_plus") == 0);
              if (succeeded)
              {
                succeeded = (Args_9 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Var_26 = ((MR_Word) ((MR_hl_field(1, Args_9, 1))));
                  succeeded = (Var_26 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Var_27 = ((MR_Word) ((MR_hl_field(1, Var_26, 1))));
                    succeeded = (Var_27 != (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      Var_28 = ((MR_Word) ((MR_hl_field(1, Var_27, 1))));
                      succeeded = (Var_28 == (MR_Word) ((MR_Unsigned) 0U));
                    }
                  }
                }
              }
            }
          }
          break;
      }
      // jump out of search loop
      ;
      goto label_0;
    }
    succeeded = MR_FALSE;
  label_0:;
  }
  return succeeded;
}

static MR_bool MR_CALL 
backend_libs__builtin_ops__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_102_108_111_97_116_95_95_91_49_93_95_48_4_p_0(
  MR_String PredName_5,
  MR_Integer ProcNum_6,
  MR_Word Args_7,
  MR_Word * Code_8)
{
  MR_bool succeeded;
  MR_Integer slot_0 = ((MR_hash_string4(PredName_5)) & (MR_Integer) 15);
  MR_String str_1 = ((&backend_libs__builtin_ops_vector_common_7[22 + slot_0]))->backend_libs__builtin_ops__vector_common_type_7_0__vct_7_f_0;

  // hashed string jump switch
  ;
  // compute the hash value of the input string
  ;
  // no collisions; no hash chain loop
  ;
  // lookup the string for this hash slot
  ;
  // did we find a match?
  ;
  if ((((str_1 != NULL)) && ((strcmp(str_1, PredName_5) == 0))))
  {
    // we found a match; dispatch to the corresponding code
    ;
    switch (slot_0) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          // case ">="
          ;
          {
            MR_Word Var_96;
            MR_Word Var_97;
            MR_Word Var_98;
            MR_Word Var_99;
            MR_Box X_100;
            MR_Box Y_101;

            succeeded = (ProcNum_6 == (MR_Integer) 0);
            if (succeeded)
            {
              succeeded = (Args_7 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                X_100 = (MR_hl_field(1, Args_7, 0));
                Var_96 = ((MR_Word) ((MR_hl_field(1, Args_7, 1))));
                succeeded = (Var_96 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Y_101 = (MR_hl_field(1, Var_96, 0));
                  Var_97 = ((MR_Word) ((MR_hl_field(1, Var_96, 1))));
                  succeeded = (Var_97 == (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Var_99 = (MR_Word) (MR_mkword(3, &backend_libs__builtin_ops_scalar_common_1[38]));
                    {
                      Var_98 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, Var_98, 0) = ((MR_Box) (Var_99));
                      MR_hl_field(0, Var_98, 1) = X_100;
                      MR_hl_field(0, Var_98, 2) = Y_101;
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      *Code_8 = base;
                      MR_hl_field(2, base, 0) = ((MR_Box) (Var_98));
                    }
                    succeeded = MR_TRUE;
                  }
                }
              }
            }
          }
        }
        break;
      case (MR_Integer) 3:
        {
          // case "=<"
          ;
          {
            MR_Word Var_82;
            MR_Word Var_83;
            MR_Word Var_84;
            MR_Word Var_85;
            MR_Box X_86;
            MR_Box Y_87;

            succeeded = (ProcNum_6 == (MR_Integer) 0);
            if (succeeded)
            {
              succeeded = (Args_7 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                X_86 = (MR_hl_field(1, Args_7, 0));
                Var_82 = ((MR_Word) ((MR_hl_field(1, Args_7, 1))));
                succeeded = (Var_82 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Y_87 = (MR_hl_field(1, Var_82, 0));
                  Var_83 = ((MR_Word) ((MR_hl_field(1, Var_82, 1))));
                  succeeded = (Var_83 == (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Var_85 = (MR_Word) (MR_mkword(3, &backend_libs__builtin_ops_scalar_common_1[36]));
                    {
                      Var_84 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, Var_84, 0) = ((MR_Box) (Var_85));
                      MR_hl_field(0, Var_84, 1) = X_86;
                      MR_hl_field(0, Var_84, 2) = Y_87;
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      *Code_8 = base;
                      MR_hl_field(2, base, 0) = ((MR_Box) (Var_84));
                    }
                    succeeded = MR_TRUE;
                  }
                }
              }
            }
          }
        }
        break;
      case (MR_Integer) 8:
        {
          // case "unchecked_quotient"
          ;
          {
            MR_Word Var_73;
            MR_Word Var_74;
            MR_Word Var_75;
            MR_Word Var_76;
            MR_Word Var_77;
            MR_Box X_78;
            MR_Box Y_79;
            MR_Box Z_80;

            succeeded = (ProcNum_6 == (MR_Integer) 0);
            if (succeeded)
            {
              succeeded = (Args_7 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                X_78 = (MR_hl_field(1, Args_7, 0));
                Var_73 = ((MR_Word) ((MR_hl_field(1, Args_7, 1))));
                succeeded = (Var_73 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Y_79 = (MR_hl_field(1, Var_73, 0));
                  Var_74 = ((MR_Word) ((MR_hl_field(1, Var_73, 1))));
                  succeeded = (Var_74 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Z_80 = (MR_hl_field(1, Var_74, 0));
                    Var_75 = ((MR_Word) ((MR_hl_field(1, Var_74, 1))));
                    succeeded = (Var_75 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      Var_77 = (MR_Word) (MR_mkword(3, &backend_libs__builtin_ops_scalar_common_1[34]));
                      {
                        Var_76 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(2, Var_76, 0) = ((MR_Box) (Var_77));
                        MR_hl_field(2, Var_76, 1) = X_78;
                        MR_hl_field(2, Var_76, 2) = Y_79;
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                        *Code_8 = base;
                        MR_hl_field(0, base, 0) = Z_80;
                        MR_hl_field(0, base, 1) = ((MR_Box) (Var_76));
                      }
                      succeeded = MR_TRUE;
                    }
                  }
                }
              }
            }
          }
        }
        break;
      case (MR_Integer) 10:
        {
          // case "+"
          ;
          {
            MR_Word Var_64;
            MR_Box Var_65;
            MR_Word Var_68;
            MR_Box Var_69;

            succeeded = (ProcNum_6 == (MR_Integer) 0);
            if (succeeded)
            {
              succeeded = (Args_7 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                Var_65 = (MR_hl_field(1, Args_7, 0));
                Var_64 = ((MR_Word) ((MR_hl_field(1, Args_7, 1))));
                succeeded = (Var_64 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Var_69 = (MR_hl_field(1, Var_64, 0));
                  Var_68 = ((MR_Word) ((MR_hl_field(1, Var_64, 1))));
                  if ((Var_68 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    MR_Word Var_16;

                    {
                      Var_16 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, Var_16, 0) = Var_65;
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      *Code_8 = base;
                      MR_hl_field(0, base, 0) = Var_69;
                      MR_hl_field(0, base, 1) = ((MR_Box) (Var_16));
                    }
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    MR_Box Z_11 = (MR_hl_field(1, Var_68, 0));
                    MR_Word Var_19 = ((MR_Word) ((MR_hl_field(1, Var_68, 1))));
                    MR_Word Var_20;
                    MR_Word Var_21;

                    succeeded = (Var_19 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      Var_21 = (MR_Word) (MR_mkword(3, &backend_libs__builtin_ops_scalar_common_1[3]));
                      {
                        Var_20 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(2, Var_20, 0) = ((MR_Box) (Var_21));
                        MR_hl_field(2, Var_20, 1) = Var_65;
                        MR_hl_field(2, Var_20, 2) = Var_69;
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                        *Code_8 = base;
                        MR_hl_field(0, base, 0) = Z_11;
                        MR_hl_field(0, base, 1) = ((MR_Box) (Var_20));
                      }
                      succeeded = MR_TRUE;
                    }
                  }
                }
              }
            }
          }
        }
        break;
      case (MR_Integer) 11:
        {
          // case "*"
          ;
          {
            MR_Word Var_36;
            MR_Word Var_37;
            MR_Word Var_38;
            MR_Word Var_39;
            MR_Word Var_40;
            MR_Box X_58;
            MR_Box Y_59;
            MR_Box Z_60;

            succeeded = (ProcNum_6 == (MR_Integer) 0);
            if (succeeded)
            {
              succeeded = (Args_7 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                X_58 = (MR_hl_field(1, Args_7, 0));
                Var_36 = ((MR_Word) ((MR_hl_field(1, Args_7, 1))));
                succeeded = (Var_36 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Y_59 = (MR_hl_field(1, Var_36, 0));
                  Var_37 = ((MR_Word) ((MR_hl_field(1, Var_36, 1))));
                  succeeded = (Var_37 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Z_60 = (MR_hl_field(1, Var_37, 0));
                    Var_38 = ((MR_Word) ((MR_hl_field(1, Var_37, 1))));
                    succeeded = (Var_38 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      Var_40 = (MR_Word) (MR_mkword(3, &backend_libs__builtin_ops_scalar_common_1[33]));
                      {
                        Var_39 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(2, Var_39, 0) = ((MR_Box) (Var_40));
                        MR_hl_field(2, Var_39, 1) = X_58;
                        MR_hl_field(2, Var_39, 2) = Y_59;
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                        *Code_8 = base;
                        MR_hl_field(0, base, 0) = Z_60;
                        MR_hl_field(0, base, 1) = ((MR_Box) (Var_39));
                      }
                      succeeded = MR_TRUE;
                    }
                  }
                }
              }
            }
          }
        }
        break;
      case (MR_Integer) 12:
        {
          // case "-"
          ;
          {
            MR_Word Var_66;
            MR_Box Var_67;
            MR_Word Var_70;
            MR_Box Var_71;

            succeeded = (ProcNum_6 == (MR_Integer) 0);
            if (succeeded)
            {
              succeeded = (Args_7 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                Var_67 = (MR_hl_field(1, Args_7, 0));
                Var_66 = ((MR_Word) ((MR_hl_field(1, Args_7, 1))));
                succeeded = (Var_66 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Var_71 = (MR_hl_field(1, Var_66, 0));
                  Var_70 = ((MR_Word) ((MR_hl_field(1, Var_66, 1))));
                  if ((Var_70 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    MR_Word Var_25;

                    {
                      Var_25 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, Var_25, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(3, Var_25, 1) = ((MR_Box) (MR_mkword(3, &backend_libs__builtin_ops_scalar_common_1[4])));
                      MR_hl_field(3, Var_25, 2) = ((MR_Box) (MR_mkword(3, &backend_libs__builtin_ops_scalar_common_1[5])));
                      MR_hl_field(3, Var_25, 3) = Var_67;
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      *Code_8 = base;
                      MR_hl_field(0, base, 0) = Var_71;
                      MR_hl_field(0, base, 1) = ((MR_Box) (Var_25));
                    }
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    MR_Word Var_32 = ((MR_Word) ((MR_hl_field(1, Var_70, 1))));
                    MR_Word Var_33;
                    MR_Word Var_34;
                    MR_Box Z_51 = (MR_hl_field(1, Var_70, 0));

                    succeeded = (Var_32 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      Var_34 = (MR_Word) (MR_mkword(3, &backend_libs__builtin_ops_scalar_common_1[4]));
                      {
                        Var_33 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(2, Var_33, 0) = ((MR_Box) (Var_34));
                        MR_hl_field(2, Var_33, 1) = Var_67;
                        MR_hl_field(2, Var_33, 2) = Var_71;
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                        *Code_8 = base;
                        MR_hl_field(0, base, 0) = Z_51;
                        MR_hl_field(0, base, 1) = ((MR_Box) (Var_33));
                      }
                      succeeded = MR_TRUE;
                    }
                  }
                }
              }
            }
          }
        }
        break;
      case (MR_Integer) 13:
        {
          // case "<"
          ;
          {
            MR_Word Var_41;
            MR_Word Var_42;
            MR_Word Var_43;
            MR_Word Var_44;
            MR_Box X_61;
            MR_Box Y_62;

            succeeded = (ProcNum_6 == (MR_Integer) 0);
            if (succeeded)
            {
              succeeded = (Args_7 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                X_61 = (MR_hl_field(1, Args_7, 0));
                Var_41 = ((MR_Word) ((MR_hl_field(1, Args_7, 1))));
                succeeded = (Var_41 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Y_62 = (MR_hl_field(1, Var_41, 0));
                  Var_42 = ((MR_Word) ((MR_hl_field(1, Var_41, 1))));
                  succeeded = (Var_42 == (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Var_44 = (MR_Word) (MR_mkword(3, &backend_libs__builtin_ops_scalar_common_1[35]));
                    {
                      Var_43 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, Var_43, 0) = ((MR_Box) (Var_44));
                      MR_hl_field(0, Var_43, 1) = X_61;
                      MR_hl_field(0, Var_43, 2) = Y_62;
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      *Code_8 = base;
                      MR_hl_field(2, base, 0) = ((MR_Box) (Var_43));
                    }
                    succeeded = MR_TRUE;
                  }
                }
              }
            }
          }
        }
        break;
      case (MR_Integer) 15:
        {
          // case ">"
          ;
          {
            MR_Word Var_89;
            MR_Word Var_90;
            MR_Word Var_91;
            MR_Word Var_92;
            MR_Box X_93;
            MR_Box Y_94;

            succeeded = (ProcNum_6 == (MR_Integer) 0);
            if (succeeded)
            {
              succeeded = (Args_7 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                X_93 = (MR_hl_field(1, Args_7, 0));
                Var_89 = ((MR_Word) ((MR_hl_field(1, Args_7, 1))));
                succeeded = (Var_89 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Y_94 = (MR_hl_field(1, Var_89, 0));
                  Var_90 = ((MR_Word) ((MR_hl_field(1, Var_89, 1))));
                  succeeded = (Var_90 == (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Var_92 = (MR_Word) (MR_mkword(3, &backend_libs__builtin_ops_scalar_common_1[37]));
                    {
                      Var_91 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, Var_91, 0) = ((MR_Box) (Var_92));
                      MR_hl_field(0, Var_91, 1) = X_93;
                      MR_hl_field(0, Var_91, 2) = Y_94;
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      *Code_8 = base;
                      MR_hl_field(2, base, 0) = ((MR_Box) (Var_91));
                    }
                    succeeded = MR_TRUE;
                  }
                }
              }
            }
          }
        }
        break;
    }
    // jump out of search loop
    ;
    goto label_0;
  }
  succeeded = MR_FALSE;
label_0:;
  return succeeded;
}

static MR_bool MR_CALL 
backend_libs__builtin_ops__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_105_110_116_95_95_91_49_93_95_48_5_p_0(
  MR_Word IT_6,
  MR_String PredName_7,
  MR_Integer ProcNum_8,
  MR_Word Args_9,
  MR_Word * Code_10)
{
  MR_bool succeeded;

  {
    MR_Integer case_num_0 = (MR_Integer) -1;

    switch (MR_nth_code_unit(PredName_7, 0)) {
      case (MR_Integer) 42:
        if (MR_offset_streq(1, PredName_7, (MR_String) "*"))
          case_num_0 = (MR_Integer) 0;
        break;
      case (MR_Integer) 43:
        if (MR_offset_streq(1, PredName_7, (MR_String) "+"))
          case_num_0 = (MR_Integer) 6;
        break;
      case (MR_Integer) 45:
        if (MR_offset_streq(1, PredName_7, (MR_String) "-"))
          case_num_0 = (MR_Integer) 7;
        break;
      case (MR_Integer) 47:
        if (MR_offset_streq(1, PredName_7, (MR_String) "/\\"))
          case_num_0 = (MR_Integer) 8;
        break;
      case (MR_Integer) 60:
        if (MR_offset_streq(1, PredName_7, (MR_String) "<"))
          case_num_0 = (MR_Integer) 14;
        break;
      case (MR_Integer) 61:
        if (MR_offset_streq(1, PredName_7, (MR_String) "=<"))
          case_num_0 = (MR_Integer) 15;
        break;
      case (MR_Integer) 62:
        switch (MR_nth_code_unit(PredName_7, 1)) {
          case (MR_Integer) 0:
            case_num_0 = (MR_Integer) 16;
            break;
          case (MR_Integer) 61:
            if (MR_offset_streq(2, PredName_7, (MR_String) ">="))
              case_num_0 = (MR_Integer) 17;
            break;
        }
        break;
      case (MR_Integer) 92:
        switch (MR_nth_code_unit(PredName_7, 1)) {
          case (MR_Integer) 0:
            case_num_0 = (MR_Integer) 18;
            break;
          case (MR_Integer) 47:
            if (MR_offset_streq(2, PredName_7, (MR_String) "\\/"))
              case_num_0 = (MR_Integer) 9;
            break;
        }
        break;
      case (MR_Integer) 109:
        if (MR_offset_streq(1, PredName_7, (MR_String) "minus"))
          case_num_0 = (MR_Integer) 1;
        break;
      case (MR_Integer) 112:
        if (MR_offset_streq(1, PredName_7, (MR_String) "plus"))
          case_num_0 = (MR_Integer) 2;
        break;
      case (MR_Integer) 116:
        if (MR_offset_streq(1, PredName_7, (MR_String) "times"))
          case_num_0 = (MR_Integer) 3;
        break;
      case (MR_Integer) 117:
        if (MR_offset_strn_eq(1, 9, PredName_7, (MR_String) "unchecked_"))
          switch (MR_nth_code_unit(PredName_7, 10)) {
            case (MR_Integer) 108:
              if (MR_offset_strn_eq(11, 4, PredName_7, (MR_String) "unchecked_left_"))
                switch (MR_nth_code_unit(PredName_7, 15)) {
                  case (MR_Integer) 115:
                    if (MR_offset_streq(16, PredName_7, (MR_String) "unchecked_left_shift"))
                      case_num_0 = (MR_Integer) 10;
                    break;
                  case (MR_Integer) 117:
                    if (MR_offset_streq(16, PredName_7, (MR_String) "unchecked_left_ushift"))
                      case_num_0 = (MR_Integer) 11;
                    break;
                }
              break;
            case (MR_Integer) 113:
              if (MR_offset_streq(11, PredName_7, (MR_String) "unchecked_quotient"))
                case_num_0 = (MR_Integer) 4;
              break;
            case (MR_Integer) 114:
              switch (MR_nth_code_unit(PredName_7, 11)) {
                case (MR_Integer) 101:
                  if (MR_offset_streq(12, PredName_7, (MR_String) "unchecked_rem"))
                    case_num_0 = (MR_Integer) 5;
                  break;
                case (MR_Integer) 105:
                  if (MR_offset_strn_eq(12, 4, PredName_7, (MR_String) "unchecked_right_"))
                    switch (MR_nth_code_unit(PredName_7, 16)) {
                      case (MR_Integer) 115:
                        if (MR_offset_streq(17, PredName_7, (MR_String) "unchecked_right_shift"))
                          case_num_0 = (MR_Integer) 12;
                        break;
                      case (MR_Integer) 117:
                        if (MR_offset_streq(17, PredName_7, (MR_String) "unchecked_right_ushift"))
                          case_num_0 = (MR_Integer) 13;
                        break;
                    }
                  break;
              }
              break;
          }
        break;
      case (MR_Integer) 120:
        if (MR_offset_streq(1, PredName_7, (MR_String) "xor"))
          case_num_0 = (MR_Integer) 19;
        break;
    }
    switch (case_num_0) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 0:
        {
          // case "*"
          ;
          {
            MR_Word ArithOp_15;
            MR_Word Var_58;
            MR_Word Var_59;
            MR_Word Var_60;
            MR_Word Var_61;
            MR_Word Var_62;
            MR_Box X_95;
            MR_Box Y_96;
            MR_Box Z_97;

            succeeded = (ProcNum_8 == (MR_Integer) 0);
            if (succeeded)
            {
              ArithOp_15 = (MR_Integer) 2;
              succeeded = (Args_9 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                X_95 = (MR_hl_field(1, Args_9, 0));
                Var_58 = ((MR_Word) ((MR_hl_field(1, Args_9, 1))));
                succeeded = (Var_58 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Y_96 = (MR_hl_field(1, Var_58, 0));
                  Var_59 = ((MR_Word) ((MR_hl_field(1, Var_58, 1))));
                  succeeded = (Var_59 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Z_97 = (MR_hl_field(1, Var_59, 0));
                    Var_60 = ((MR_Word) ((MR_hl_field(1, Var_59, 1))));
                    succeeded = (Var_60 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      {
                        Var_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Var_62, 0) = (MR_Box) (((((MR_Unsigned) (IT_6) << 3)) | (MR_Unsigned) (ArithOp_15)));
                      }
                      {
                        Var_61 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(2, Var_61, 0) = ((MR_Box) (Var_62));
                        MR_hl_field(2, Var_61, 1) = X_95;
                        MR_hl_field(2, Var_61, 2) = Y_96;
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                        *Code_10 = base;
                        MR_hl_field(0, base, 0) = Z_97;
                        MR_hl_field(0, base, 1) = ((MR_Box) (Var_61));
                      }
                      succeeded = MR_TRUE;
                    }
                  }
                }
              }
            }
          }
        }
        break;
      case (MR_Integer) 1:
        {
          // case "minus"
          ;
          {
            MR_Word ArithOp_147;
            MR_Word Var_148;
            MR_Word Var_149;
            MR_Word Var_150;
            MR_Word Var_151;
            MR_Word Var_152;
            MR_Box X_153;
            MR_Box Y_154;
            MR_Box Z_155;

            succeeded = (ProcNum_8 == (MR_Integer) 0);
            if (succeeded)
            {
              ArithOp_147 = (MR_Integer) 1;
              succeeded = (Args_9 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                X_153 = (MR_hl_field(1, Args_9, 0));
                Var_148 = ((MR_Word) ((MR_hl_field(1, Args_9, 1))));
                succeeded = (Var_148 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Y_154 = (MR_hl_field(1, Var_148, 0));
                  Var_149 = ((MR_Word) ((MR_hl_field(1, Var_148, 1))));
                  succeeded = (Var_149 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Z_155 = (MR_hl_field(1, Var_149, 0));
                    Var_150 = ((MR_Word) ((MR_hl_field(1, Var_149, 1))));
                    succeeded = (Var_150 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      {
                        Var_152 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Var_152, 0) = (MR_Box) (((((MR_Unsigned) (IT_6) << 3)) | (MR_Unsigned) (ArithOp_147)));
                      }
                      {
                        Var_151 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(2, Var_151, 0) = ((MR_Box) (Var_152));
                        MR_hl_field(2, Var_151, 1) = X_153;
                        MR_hl_field(2, Var_151, 2) = Y_154;
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                        *Code_10 = base;
                        MR_hl_field(0, base, 0) = Z_155;
                        MR_hl_field(0, base, 1) = ((MR_Box) (Var_151));
                      }
                      succeeded = MR_TRUE;
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
          // case "plus"
          ;
          {
            MR_Word ArithOp_156;
            MR_Word Var_157;
            MR_Word Var_158;
            MR_Word Var_159;
            MR_Word Var_160;
            MR_Word Var_161;
            MR_Box X_162;
            MR_Box Y_163;
            MR_Box Z_164;

            succeeded = (ProcNum_8 == (MR_Integer) 0);
            if (succeeded)
            {
              ArithOp_156 = (MR_Integer) 0;
              succeeded = (Args_9 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                X_162 = (MR_hl_field(1, Args_9, 0));
                Var_157 = ((MR_Word) ((MR_hl_field(1, Args_9, 1))));
                succeeded = (Var_157 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Y_163 = (MR_hl_field(1, Var_157, 0));
                  Var_158 = ((MR_Word) ((MR_hl_field(1, Var_157, 1))));
                  succeeded = (Var_158 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Z_164 = (MR_hl_field(1, Var_158, 0));
                    Var_159 = ((MR_Word) ((MR_hl_field(1, Var_158, 1))));
                    succeeded = (Var_159 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      {
                        Var_161 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Var_161, 0) = (MR_Box) (((((MR_Unsigned) (IT_6) << 3)) | (MR_Unsigned) (ArithOp_156)));
                      }
                      {
                        Var_160 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(2, Var_160, 0) = ((MR_Box) (Var_161));
                        MR_hl_field(2, Var_160, 1) = X_162;
                        MR_hl_field(2, Var_160, 2) = Y_163;
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                        *Code_10 = base;
                        MR_hl_field(0, base, 0) = Z_164;
                        MR_hl_field(0, base, 1) = ((MR_Box) (Var_160));
                      }
                      succeeded = MR_TRUE;
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
          // case "times"
          ;
          {
            MR_Word ArithOp_165;
            MR_Word Var_166;
            MR_Word Var_167;
            MR_Word Var_168;
            MR_Word Var_169;
            MR_Word Var_170;
            MR_Box X_171;
            MR_Box Y_172;
            MR_Box Z_173;

            succeeded = (ProcNum_8 == (MR_Integer) 0);
            if (succeeded)
            {
              ArithOp_165 = (MR_Integer) 2;
              succeeded = (Args_9 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                X_171 = (MR_hl_field(1, Args_9, 0));
                Var_166 = ((MR_Word) ((MR_hl_field(1, Args_9, 1))));
                succeeded = (Var_166 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Y_172 = (MR_hl_field(1, Var_166, 0));
                  Var_167 = ((MR_Word) ((MR_hl_field(1, Var_166, 1))));
                  succeeded = (Var_167 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Z_173 = (MR_hl_field(1, Var_167, 0));
                    Var_168 = ((MR_Word) ((MR_hl_field(1, Var_167, 1))));
                    succeeded = (Var_168 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      {
                        Var_170 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Var_170, 0) = (MR_Box) (((((MR_Unsigned) (IT_6) << 3)) | (MR_Unsigned) (ArithOp_165)));
                      }
                      {
                        Var_169 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(2, Var_169, 0) = ((MR_Box) (Var_170));
                        MR_hl_field(2, Var_169, 1) = X_171;
                        MR_hl_field(2, Var_169, 2) = Y_172;
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                        *Code_10 = base;
                        MR_hl_field(0, base, 0) = Z_173;
                        MR_hl_field(0, base, 1) = ((MR_Box) (Var_169));
                      }
                      succeeded = MR_TRUE;
                    }
                  }
                }
              }
            }
          }
        }
        break;
      case (MR_Integer) 4:
        {
          // case "unchecked_quotient"
          ;
          {
            MR_Word ArithOp_174;
            MR_Word Var_175;
            MR_Word Var_176;
            MR_Word Var_177;
            MR_Word Var_178;
            MR_Word Var_179;
            MR_Box X_180;
            MR_Box Y_181;
            MR_Box Z_182;

            succeeded = (ProcNum_8 == (MR_Integer) 0);
            if (succeeded)
            {
              ArithOp_174 = (MR_Integer) 3;
              succeeded = (Args_9 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                X_180 = (MR_hl_field(1, Args_9, 0));
                Var_175 = ((MR_Word) ((MR_hl_field(1, Args_9, 1))));
                succeeded = (Var_175 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Y_181 = (MR_hl_field(1, Var_175, 0));
                  Var_176 = ((MR_Word) ((MR_hl_field(1, Var_175, 1))));
                  succeeded = (Var_176 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Z_182 = (MR_hl_field(1, Var_176, 0));
                    Var_177 = ((MR_Word) ((MR_hl_field(1, Var_176, 1))));
                    succeeded = (Var_177 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      {
                        Var_179 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Var_179, 0) = (MR_Box) (((((MR_Unsigned) (IT_6) << 3)) | (MR_Unsigned) (ArithOp_174)));
                      }
                      {
                        Var_178 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(2, Var_178, 0) = ((MR_Box) (Var_179));
                        MR_hl_field(2, Var_178, 1) = X_180;
                        MR_hl_field(2, Var_178, 2) = Y_181;
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                        *Code_10 = base;
                        MR_hl_field(0, base, 0) = Z_182;
                        MR_hl_field(0, base, 1) = ((MR_Box) (Var_178));
                      }
                      succeeded = MR_TRUE;
                    }
                  }
                }
              }
            }
          }
        }
        break;
      case (MR_Integer) 5:
        {
          // case "unchecked_rem"
          ;
          {
            MR_Word ArithOp_183;
            MR_Word Var_184;
            MR_Word Var_185;
            MR_Word Var_186;
            MR_Word Var_187;
            MR_Word Var_188;
            MR_Box X_189;
            MR_Box Y_190;
            MR_Box Z_191;

            succeeded = (ProcNum_8 == (MR_Integer) 0);
            if (succeeded)
            {
              ArithOp_183 = (MR_Integer) 4;
              succeeded = (Args_9 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                X_189 = (MR_hl_field(1, Args_9, 0));
                Var_184 = ((MR_Word) ((MR_hl_field(1, Args_9, 1))));
                succeeded = (Var_184 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Y_190 = (MR_hl_field(1, Var_184, 0));
                  Var_185 = ((MR_Word) ((MR_hl_field(1, Var_184, 1))));
                  succeeded = (Var_185 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Z_191 = (MR_hl_field(1, Var_185, 0));
                    Var_186 = ((MR_Word) ((MR_hl_field(1, Var_185, 1))));
                    succeeded = (Var_186 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      {
                        Var_188 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Var_188, 0) = (MR_Box) (((((MR_Unsigned) (IT_6) << 3)) | (MR_Unsigned) (ArithOp_183)));
                      }
                      {
                        Var_187 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(2, Var_187, 0) = ((MR_Box) (Var_188));
                        MR_hl_field(2, Var_187, 1) = X_189;
                        MR_hl_field(2, Var_187, 2) = Y_190;
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                        *Code_10 = base;
                        MR_hl_field(0, base, 0) = Z_191;
                        MR_hl_field(0, base, 1) = ((MR_Box) (Var_187));
                      }
                      succeeded = MR_TRUE;
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
          // case "+"
          ;
          {
            MR_Word Var_135;
            MR_Box Var_136;
            MR_Word Var_143;
            MR_Box Var_144;

            succeeded = (Args_9 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              Var_136 = (MR_hl_field(1, Args_9, 0));
              Var_135 = ((MR_Word) ((MR_hl_field(1, Args_9, 1))));
              succeeded = (Var_135 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                Var_144 = (MR_hl_field(1, Var_135, 0));
                Var_143 = ((MR_Word) ((MR_hl_field(1, Var_135, 1))));
                switch (ProcNum_8) {
                  default:
                    succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 0:
                    if ((Var_143 == (MR_Word) ((MR_Unsigned) 0U)))
                    {
                      MR_Word Var_31;

                      {
                        Var_31 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(0, Var_31, 0) = Var_136;
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                        *Code_10 = base;
                        MR_hl_field(0, base, 0) = Var_144;
                        MR_hl_field(0, base, 1) = ((MR_Box) (Var_31));
                      }
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      MR_Box Z_13 = (MR_hl_field(1, Var_143, 0));
                      MR_Word Var_19 = ((MR_Word) ((MR_hl_field(1, Var_143, 1))));
                      MR_Word Var_20;
                      MR_Word Var_21;
                      MR_Word Var_22;

                      succeeded = (Var_19 == (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        Var_22 = (MR_Integer) 0;
                        {
                          Var_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, Var_21, 0) = (MR_Box) (((((MR_Unsigned) (IT_6) << 3)) | (MR_Unsigned) (Var_22)));
                        }
                        {
                          Var_20 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(2, Var_20, 0) = ((MR_Box) (Var_21));
                          MR_hl_field(2, Var_20, 1) = Var_136;
                          MR_hl_field(2, Var_20, 2) = Var_144;
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                          *Code_10 = base;
                          MR_hl_field(0, base, 0) = Z_13;
                          MR_hl_field(0, base, 1) = ((MR_Box) (Var_20));
                        }
                        succeeded = MR_TRUE;
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word Var_23;
                      MR_Word Var_24;
                      MR_Word Var_25;
                      MR_Box Z_109;
                      MR_Word Var_112;

                      succeeded = (Var_143 != (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        Z_109 = (MR_hl_field(1, Var_143, 0));
                        Var_112 = ((MR_Word) ((MR_hl_field(1, Var_143, 1))));
                        succeeded = (Var_112 == (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          Var_25 = (MR_Integer) 1;
                          {
                            Var_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, Var_24, 0) = (MR_Box) (((((MR_Unsigned) (IT_6) << 3)) | (MR_Unsigned) (Var_25)));
                          }
                          {
                            Var_23 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(2, Var_23, 0) = ((MR_Box) (Var_24));
                            MR_hl_field(2, Var_23, 1) = Z_109;
                            MR_hl_field(2, Var_23, 2) = Var_144;
                          }
                          {
                            MR_Word base;
                            base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                            *Code_10 = base;
                            MR_hl_field(0, base, 0) = Var_136;
                            MR_hl_field(0, base, 1) = ((MR_Box) (Var_23));
                          }
                          succeeded = MR_TRUE;
                        }
                      }
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word Var_26;
                      MR_Word Var_27;
                      MR_Word Var_28;
                      MR_Box Z_115;
                      MR_Word Var_118;

                      succeeded = (Var_143 != (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        Z_115 = (MR_hl_field(1, Var_143, 0));
                        Var_118 = ((MR_Word) ((MR_hl_field(1, Var_143, 1))));
                        succeeded = (Var_118 == (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          Var_28 = (MR_Integer) 1;
                          {
                            Var_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, Var_27, 0) = (MR_Box) (((((MR_Unsigned) (IT_6) << 3)) | (MR_Unsigned) (Var_28)));
                          }
                          {
                            Var_26 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(2, Var_26, 0) = ((MR_Box) (Var_27));
                            MR_hl_field(2, Var_26, 1) = Z_115;
                            MR_hl_field(2, Var_26, 2) = Var_136;
                          }
                          {
                            MR_Word base;
                            base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                            *Code_10 = base;
                            MR_hl_field(0, base, 0) = Var_144;
                            MR_hl_field(0, base, 1) = ((MR_Box) (Var_26));
                          }
                          succeeded = MR_TRUE;
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
      case (MR_Integer) 7:
        {
          // case "-"
          ;
          {
            MR_Word Var_137;
            MR_Box Var_138;
            MR_Word Var_145;
            MR_Box Var_146;

            succeeded = (Args_9 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              Var_138 = (MR_hl_field(1, Args_9, 0));
              Var_137 = ((MR_Word) ((MR_hl_field(1, Args_9, 1))));
              succeeded = (Var_137 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                Var_146 = (MR_hl_field(1, Var_137, 0));
                Var_145 = ((MR_Word) ((MR_hl_field(1, Var_137, 1))));
                switch (ProcNum_8) {
                  default:
                    succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 0:
                    if ((Var_145 == (MR_Word) ((MR_Unsigned) 0U)))
                    {
                      MR_Word IntZeroConst_14;
                      MR_Word Var_46;
                      MR_Word Var_47;

                      IntZeroConst_14 = backend_libs__builtin_ops__make_int_zero_const_1_f_0(IT_6);
                      {
                        Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Var_47, 0) = (MR_Box) (((((MR_Unsigned) (IT_6) << 3)) | (MR_Unsigned) ((MR_Integer) 1)));
                      }
                      {
                        Var_46 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(3, Var_46, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                        MR_hl_field(3, Var_46, 1) = ((MR_Box) (Var_47));
                        MR_hl_field(3, Var_46, 2) = ((MR_Box) (IntZeroConst_14));
                        MR_hl_field(3, Var_46, 3) = Var_138;
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                        *Code_10 = base;
                        MR_hl_field(0, base, 0) = Var_146;
                        MR_hl_field(0, base, 1) = ((MR_Box) (Var_46));
                      }
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      MR_Word Var_34 = ((MR_Word) ((MR_hl_field(1, Var_145, 1))));
                      MR_Word Var_35;
                      MR_Word Var_36;
                      MR_Word Var_37;
                      MR_Box Z_83 = (MR_hl_field(1, Var_145, 0));

                      succeeded = (Var_34 == (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        Var_37 = (MR_Integer) 1;
                        {
                          Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, Var_36, 0) = (MR_Box) (((((MR_Unsigned) (IT_6) << 3)) | (MR_Unsigned) (Var_37)));
                        }
                        {
                          Var_35 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(2, Var_35, 0) = ((MR_Box) (Var_36));
                          MR_hl_field(2, Var_35, 1) = Var_138;
                          MR_hl_field(2, Var_35, 2) = Var_146;
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                          *Code_10 = base;
                          MR_hl_field(0, base, 0) = Z_83;
                          MR_hl_field(0, base, 1) = ((MR_Box) (Var_35));
                        }
                        succeeded = MR_TRUE;
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word Var_38;
                      MR_Word Var_39;
                      MR_Word Var_40;
                      MR_Word Var_121;
                      MR_Box Z_124;

                      succeeded = (Var_145 != (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        Z_124 = (MR_hl_field(1, Var_145, 0));
                        Var_121 = ((MR_Word) ((MR_hl_field(1, Var_145, 1))));
                        succeeded = (Var_121 == (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          Var_40 = (MR_Integer) 0;
                          {
                            Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, Var_39, 0) = (MR_Box) (((((MR_Unsigned) (IT_6) << 3)) | (MR_Unsigned) (Var_40)));
                          }
                          {
                            Var_38 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(2, Var_38, 0) = ((MR_Box) (Var_39));
                            MR_hl_field(2, Var_38, 1) = Var_146;
                            MR_hl_field(2, Var_38, 2) = Z_124;
                          }
                          {
                            MR_Word base;
                            base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                            *Code_10 = base;
                            MR_hl_field(0, base, 0) = Var_138;
                            MR_hl_field(0, base, 1) = ((MR_Box) (Var_38));
                          }
                          succeeded = MR_TRUE;
                        }
                      }
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word Var_41;
                      MR_Word Var_42;
                      MR_Word Var_43;
                      MR_Word Var_127;
                      MR_Box Z_130;

                      succeeded = (Var_145 != (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        Z_130 = (MR_hl_field(1, Var_145, 0));
                        Var_127 = ((MR_Word) ((MR_hl_field(1, Var_145, 1))));
                        succeeded = (Var_127 == (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          Var_43 = (MR_Integer) 1;
                          {
                            Var_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, Var_42, 0) = (MR_Box) (((((MR_Unsigned) (IT_6) << 3)) | (MR_Unsigned) (Var_43)));
                          }
                          {
                            Var_41 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(2, Var_41, 0) = ((MR_Box) (Var_42));
                            MR_hl_field(2, Var_41, 1) = Var_138;
                            MR_hl_field(2, Var_41, 2) = Z_130;
                          }
                          {
                            MR_Word base;
                            base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                            *Code_10 = base;
                            MR_hl_field(0, base, 0) = Var_146;
                            MR_hl_field(0, base, 1) = ((MR_Box) (Var_41));
                          }
                          succeeded = MR_TRUE;
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
      case (MR_Integer) 8:
        {
          // case "/\"
          ;
          {
            MR_Word Var_67;
            MR_Word Var_68;
            MR_Word Var_69;
            MR_Word Var_70;
            MR_Box X_98;
            MR_Box Y_99;
            MR_Box Z_100;
            MR_Word ArithOp_101;

            succeeded = (ProcNum_8 == (MR_Integer) 0);
            if (succeeded)
            {
              succeeded = (Args_9 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                X_98 = (MR_hl_field(1, Args_9, 0));
                Var_67 = ((MR_Word) ((MR_hl_field(1, Args_9, 1))));
                succeeded = (Var_67 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Y_99 = (MR_hl_field(1, Var_67, 0));
                  Var_68 = ((MR_Word) ((MR_hl_field(1, Var_67, 1))));
                  succeeded = (Var_68 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Z_100 = (MR_hl_field(1, Var_68, 0));
                    Var_69 = ((MR_Word) ((MR_hl_field(1, Var_68, 1))));
                    succeeded = (Var_69 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      {
                        ArithOp_101 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(3, ArithOp_101, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                        MR_hl_field(3, ArithOp_101, 1) = (MR_Box) ((MR_Unsigned) (IT_6));
                      }
                      {
                        Var_70 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(2, Var_70, 0) = ((MR_Box) (ArithOp_101));
                        MR_hl_field(2, Var_70, 1) = X_98;
                        MR_hl_field(2, Var_70, 2) = Y_99;
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                        *Code_10 = base;
                        MR_hl_field(0, base, 0) = Z_100;
                        MR_hl_field(0, base, 1) = ((MR_Box) (Var_70));
                      }
                      succeeded = MR_TRUE;
                    }
                  }
                }
              }
            }
          }
        }
        break;
      case (MR_Integer) 9:
        {
          // case "\/"
          ;
          {
            MR_Word Var_192;
            MR_Word Var_193;
            MR_Word Var_194;
            MR_Word Var_195;
            MR_Box X_196;
            MR_Box Y_197;
            MR_Box Z_198;
            MR_Word ArithOp_199;

            succeeded = (ProcNum_8 == (MR_Integer) 0);
            if (succeeded)
            {
              succeeded = (Args_9 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                X_196 = (MR_hl_field(1, Args_9, 0));
                Var_192 = ((MR_Word) ((MR_hl_field(1, Args_9, 1))));
                succeeded = (Var_192 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Y_197 = (MR_hl_field(1, Var_192, 0));
                  Var_193 = ((MR_Word) ((MR_hl_field(1, Var_192, 1))));
                  succeeded = (Var_193 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Z_198 = (MR_hl_field(1, Var_193, 0));
                    Var_194 = ((MR_Word) ((MR_hl_field(1, Var_193, 1))));
                    succeeded = (Var_194 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      {
                        ArithOp_199 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(3, ArithOp_199, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                        MR_hl_field(3, ArithOp_199, 1) = (MR_Box) ((MR_Unsigned) (IT_6));
                      }
                      {
                        Var_195 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(2, Var_195, 0) = ((MR_Box) (ArithOp_199));
                        MR_hl_field(2, Var_195, 1) = X_196;
                        MR_hl_field(2, Var_195, 2) = Y_197;
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                        *Code_10 = base;
                        MR_hl_field(0, base, 0) = Z_198;
                        MR_hl_field(0, base, 1) = ((MR_Box) (Var_195));
                      }
                      succeeded = MR_TRUE;
                    }
                  }
                }
              }
            }
          }
        }
        break;
      case (MR_Integer) 10:
        {
          // case "unchecked_left_shift"
          ;
          {
            MR_Word Var_63;
            MR_Word Var_200;
            MR_Word Var_201;
            MR_Word Var_202;
            MR_Word Var_203;
            MR_Box X_204;
            MR_Box Y_205;
            MR_Box Z_206;
            MR_Word ArithOp_207;

            succeeded = (ProcNum_8 == (MR_Integer) 0);
            if (succeeded)
            {
              Var_63 = (MR_Integer) 0;
              succeeded = (Args_9 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                X_204 = (MR_hl_field(1, Args_9, 0));
                Var_200 = ((MR_Word) ((MR_hl_field(1, Args_9, 1))));
                succeeded = (Var_200 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Y_205 = (MR_hl_field(1, Var_200, 0));
                  Var_201 = ((MR_Word) ((MR_hl_field(1, Var_200, 1))));
                  succeeded = (Var_201 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Z_206 = (MR_hl_field(1, Var_201, 0));
                    Var_202 = ((MR_Word) ((MR_hl_field(1, Var_201, 1))));
                    succeeded = (Var_202 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      {
                        ArithOp_207 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(2, ArithOp_207, 0) = (MR_Box) (((((MR_Unsigned) (IT_6) << 1)) | (MR_Unsigned) (Var_63)));
                      }
                      {
                        Var_203 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(2, Var_203, 0) = ((MR_Box) (ArithOp_207));
                        MR_hl_field(2, Var_203, 1) = X_204;
                        MR_hl_field(2, Var_203, 2) = Y_205;
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                        *Code_10 = base;
                        MR_hl_field(0, base, 0) = Z_206;
                        MR_hl_field(0, base, 1) = ((MR_Box) (Var_203));
                      }
                      succeeded = MR_TRUE;
                    }
                  }
                }
              }
            }
          }
        }
        break;
      case (MR_Integer) 11:
        {
          // case "unchecked_left_ushift"
          ;
          {
            MR_Word Var_64;
            MR_Word Var_208;
            MR_Word Var_209;
            MR_Word Var_210;
            MR_Word Var_211;
            MR_Box X_212;
            MR_Box Y_213;
            MR_Box Z_214;
            MR_Word ArithOp_215;

            succeeded = (ProcNum_8 == (MR_Integer) 0);
            if (succeeded)
            {
              Var_64 = (MR_Integer) 1;
              succeeded = (Args_9 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                X_212 = (MR_hl_field(1, Args_9, 0));
                Var_208 = ((MR_Word) ((MR_hl_field(1, Args_9, 1))));
                succeeded = (Var_208 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Y_213 = (MR_hl_field(1, Var_208, 0));
                  Var_209 = ((MR_Word) ((MR_hl_field(1, Var_208, 1))));
                  succeeded = (Var_209 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Z_214 = (MR_hl_field(1, Var_209, 0));
                    Var_210 = ((MR_Word) ((MR_hl_field(1, Var_209, 1))));
                    succeeded = (Var_210 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      {
                        ArithOp_215 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(2, ArithOp_215, 0) = (MR_Box) (((((MR_Unsigned) (IT_6) << 1)) | (MR_Unsigned) (Var_64)));
                      }
                      {
                        Var_211 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(2, Var_211, 0) = ((MR_Box) (ArithOp_215));
                        MR_hl_field(2, Var_211, 1) = X_212;
                        MR_hl_field(2, Var_211, 2) = Y_213;
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                        *Code_10 = base;
                        MR_hl_field(0, base, 0) = Z_214;
                        MR_hl_field(0, base, 1) = ((MR_Box) (Var_211));
                      }
                      succeeded = MR_TRUE;
                    }
                  }
                }
              }
            }
          }
        }
        break;
      case (MR_Integer) 12:
        {
          // case "unchecked_right_shift"
          ;
          {
            MR_Word Var_65;
            MR_Word Var_216;
            MR_Word Var_217;
            MR_Word Var_218;
            MR_Word Var_219;
            MR_Box X_220;
            MR_Box Y_221;
            MR_Box Z_222;
            MR_Word ArithOp_223;

            succeeded = (ProcNum_8 == (MR_Integer) 0);
            if (succeeded)
            {
              Var_65 = (MR_Integer) 0;
              succeeded = (Args_9 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                X_220 = (MR_hl_field(1, Args_9, 0));
                Var_216 = ((MR_Word) ((MR_hl_field(1, Args_9, 1))));
                succeeded = (Var_216 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Y_221 = (MR_hl_field(1, Var_216, 0));
                  Var_217 = ((MR_Word) ((MR_hl_field(1, Var_216, 1))));
                  succeeded = (Var_217 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Z_222 = (MR_hl_field(1, Var_217, 0));
                    Var_218 = ((MR_Word) ((MR_hl_field(1, Var_217, 1))));
                    succeeded = (Var_218 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      {
                        ArithOp_223 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(3, ArithOp_223, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                        MR_hl_field(3, ArithOp_223, 1) = (MR_Box) (((((MR_Unsigned) (IT_6) << 1)) | (MR_Unsigned) (Var_65)));
                      }
                      {
                        Var_219 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(2, Var_219, 0) = ((MR_Box) (ArithOp_223));
                        MR_hl_field(2, Var_219, 1) = X_220;
                        MR_hl_field(2, Var_219, 2) = Y_221;
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                        *Code_10 = base;
                        MR_hl_field(0, base, 0) = Z_222;
                        MR_hl_field(0, base, 1) = ((MR_Box) (Var_219));
                      }
                      succeeded = MR_TRUE;
                    }
                  }
                }
              }
            }
          }
        }
        break;
      case (MR_Integer) 13:
        {
          // case "unchecked_right_ushift"
          ;
          {
            MR_Word Var_66;
            MR_Word Var_224;
            MR_Word Var_225;
            MR_Word Var_226;
            MR_Word Var_227;
            MR_Box X_228;
            MR_Box Y_229;
            MR_Box Z_230;
            MR_Word ArithOp_231;

            succeeded = (ProcNum_8 == (MR_Integer) 0);
            if (succeeded)
            {
              Var_66 = (MR_Integer) 1;
              succeeded = (Args_9 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                X_228 = (MR_hl_field(1, Args_9, 0));
                Var_224 = ((MR_Word) ((MR_hl_field(1, Args_9, 1))));
                succeeded = (Var_224 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Y_229 = (MR_hl_field(1, Var_224, 0));
                  Var_225 = ((MR_Word) ((MR_hl_field(1, Var_224, 1))));
                  succeeded = (Var_225 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Z_230 = (MR_hl_field(1, Var_225, 0));
                    Var_226 = ((MR_Word) ((MR_hl_field(1, Var_225, 1))));
                    succeeded = (Var_226 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      {
                        ArithOp_231 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(3, ArithOp_231, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                        MR_hl_field(3, ArithOp_231, 1) = (MR_Box) (((((MR_Unsigned) (IT_6) << 1)) | (MR_Unsigned) (Var_66)));
                      }
                      {
                        Var_227 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(2, Var_227, 0) = ((MR_Box) (ArithOp_231));
                        MR_hl_field(2, Var_227, 1) = X_228;
                        MR_hl_field(2, Var_227, 2) = Y_229;
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                        *Code_10 = base;
                        MR_hl_field(0, base, 0) = Z_230;
                        MR_hl_field(0, base, 1) = ((MR_Box) (Var_227));
                      }
                      succeeded = MR_TRUE;
                    }
                  }
                }
              }
            }
          }
        }
        break;
      case (MR_Integer) 14:
        {
          // case "<"
          ;
          {
            MR_Word CmpOp_16;
            MR_Word Var_75;
            MR_Word Var_76;
            MR_Word Var_77;
            MR_Word Var_78;
            MR_Box X_104;
            MR_Box Y_105;

            succeeded = (ProcNum_8 == (MR_Integer) 0);
            if (succeeded)
            {
              CmpOp_16 = (MR_Integer) 2;
              succeeded = (Args_9 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                X_104 = (MR_hl_field(1, Args_9, 0));
                Var_75 = ((MR_Word) ((MR_hl_field(1, Args_9, 1))));
                succeeded = (Var_75 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Y_105 = (MR_hl_field(1, Var_75, 0));
                  Var_76 = ((MR_Word) ((MR_hl_field(1, Var_75, 1))));
                  succeeded = (Var_76 == (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    {
                      Var_78 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, Var_78, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                      MR_hl_field(3, Var_78, 1) = (MR_Box) (((((MR_Unsigned) (IT_6) << 3)) | (MR_Unsigned) (CmpOp_16)));
                    }
                    {
                      Var_77 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, Var_77, 0) = ((MR_Box) (Var_78));
                      MR_hl_field(0, Var_77, 1) = X_104;
                      MR_hl_field(0, Var_77, 2) = Y_105;
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      *Code_10 = base;
                      MR_hl_field(2, base, 0) = ((MR_Box) (Var_77));
                    }
                    succeeded = MR_TRUE;
                  }
                }
              }
            }
          }
        }
        break;
      case (MR_Integer) 15:
        {
          // case "=<"
          ;
          {
            MR_Word CmpOp_232;
            MR_Word Var_233;
            MR_Word Var_234;
            MR_Word Var_235;
            MR_Word Var_236;
            MR_Box X_237;
            MR_Box Y_238;

            succeeded = (ProcNum_8 == (MR_Integer) 0);
            if (succeeded)
            {
              CmpOp_232 = (MR_Integer) 3;
              succeeded = (Args_9 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                X_237 = (MR_hl_field(1, Args_9, 0));
                Var_233 = ((MR_Word) ((MR_hl_field(1, Args_9, 1))));
                succeeded = (Var_233 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Y_238 = (MR_hl_field(1, Var_233, 0));
                  Var_234 = ((MR_Word) ((MR_hl_field(1, Var_233, 1))));
                  succeeded = (Var_234 == (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    {
                      Var_236 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, Var_236, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                      MR_hl_field(3, Var_236, 1) = (MR_Box) (((((MR_Unsigned) (IT_6) << 3)) | (MR_Unsigned) (CmpOp_232)));
                    }
                    {
                      Var_235 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, Var_235, 0) = ((MR_Box) (Var_236));
                      MR_hl_field(0, Var_235, 1) = X_237;
                      MR_hl_field(0, Var_235, 2) = Y_238;
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      *Code_10 = base;
                      MR_hl_field(2, base, 0) = ((MR_Box) (Var_235));
                    }
                    succeeded = MR_TRUE;
                  }
                }
              }
            }
          }
        }
        break;
      case (MR_Integer) 16:
        {
          // case ">"
          ;
          {
            MR_Word CmpOp_239;
            MR_Word Var_240;
            MR_Word Var_241;
            MR_Word Var_242;
            MR_Word Var_243;
            MR_Box X_244;
            MR_Box Y_245;

            succeeded = (ProcNum_8 == (MR_Integer) 0);
            if (succeeded)
            {
              CmpOp_239 = (MR_Integer) 4;
              succeeded = (Args_9 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                X_244 = (MR_hl_field(1, Args_9, 0));
                Var_240 = ((MR_Word) ((MR_hl_field(1, Args_9, 1))));
                succeeded = (Var_240 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Y_245 = (MR_hl_field(1, Var_240, 0));
                  Var_241 = ((MR_Word) ((MR_hl_field(1, Var_240, 1))));
                  succeeded = (Var_241 == (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    {
                      Var_243 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, Var_243, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                      MR_hl_field(3, Var_243, 1) = (MR_Box) (((((MR_Unsigned) (IT_6) << 3)) | (MR_Unsigned) (CmpOp_239)));
                    }
                    {
                      Var_242 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, Var_242, 0) = ((MR_Box) (Var_243));
                      MR_hl_field(0, Var_242, 1) = X_244;
                      MR_hl_field(0, Var_242, 2) = Y_245;
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      *Code_10 = base;
                      MR_hl_field(2, base, 0) = ((MR_Box) (Var_242));
                    }
                    succeeded = MR_TRUE;
                  }
                }
              }
            }
          }
        }
        break;
      case (MR_Integer) 17:
        {
          // case ">="
          ;
          {
            MR_Word CmpOp_246;
            MR_Word Var_247;
            MR_Word Var_248;
            MR_Word Var_249;
            MR_Word Var_250;
            MR_Box X_251;
            MR_Box Y_252;

            succeeded = (ProcNum_8 == (MR_Integer) 0);
            if (succeeded)
            {
              CmpOp_246 = (MR_Integer) 5;
              succeeded = (Args_9 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                X_251 = (MR_hl_field(1, Args_9, 0));
                Var_247 = ((MR_Word) ((MR_hl_field(1, Args_9, 1))));
                succeeded = (Var_247 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Y_252 = (MR_hl_field(1, Var_247, 0));
                  Var_248 = ((MR_Word) ((MR_hl_field(1, Var_247, 1))));
                  succeeded = (Var_248 == (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    {
                      Var_250 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, Var_250, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                      MR_hl_field(3, Var_250, 1) = (MR_Box) (((((MR_Unsigned) (IT_6) << 3)) | (MR_Unsigned) (CmpOp_246)));
                    }
                    {
                      Var_249 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, Var_249, 0) = ((MR_Box) (Var_250));
                      MR_hl_field(0, Var_249, 1) = X_251;
                      MR_hl_field(0, Var_249, 2) = Y_252;
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      *Code_10 = base;
                      MR_hl_field(2, base, 0) = ((MR_Box) (Var_249));
                    }
                    succeeded = MR_TRUE;
                  }
                }
              }
            }
          }
        }
        break;
      case (MR_Integer) 18:
        {
          // case "\"
          ;
          {
            MR_Word Var_71;
            MR_Word Var_72;
            MR_Word Var_73;
            MR_Word Var_74;
            MR_Box X_102;
            MR_Box Y_103;

            succeeded = (ProcNum_8 == (MR_Integer) 0);
            if (succeeded)
            {
              succeeded = (Args_9 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                X_102 = (MR_hl_field(1, Args_9, 0));
                Var_71 = ((MR_Word) ((MR_hl_field(1, Args_9, 1))));
                succeeded = (Var_71 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Y_103 = (MR_hl_field(1, Var_71, 0));
                  Var_72 = ((MR_Word) ((MR_hl_field(1, Var_71, 1))));
                  succeeded = (Var_72 == (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    {
                      Var_74 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_74, 0) = (MR_Box) ((MR_Unsigned) (IT_6));
                    }
                    {
                      Var_73 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, Var_73, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(3, Var_73, 1) = ((MR_Box) (Var_74));
                      MR_hl_field(3, Var_73, 2) = X_102;
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      *Code_10 = base;
                      MR_hl_field(0, base, 0) = Y_103;
                      MR_hl_field(0, base, 1) = ((MR_Box) (Var_73));
                    }
                    succeeded = MR_TRUE;
                  }
                }
              }
            }
          }
        }
        break;
      case (MR_Integer) 19:
        {
          // case "xor"
          ;
          {
            MR_Word Var_49;
            MR_Word Var_50;
            MR_Word Var_51;
            MR_Box X_92;
            MR_Box Y_93;
            MR_Box Z_94;

            succeeded = (Args_9 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              X_92 = (MR_hl_field(1, Args_9, 0));
              Var_49 = ((MR_Word) ((MR_hl_field(1, Args_9, 1))));
              succeeded = (Var_49 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                Y_93 = (MR_hl_field(1, Var_49, 0));
                Var_50 = ((MR_Word) ((MR_hl_field(1, Var_49, 1))));
                succeeded = (Var_50 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Z_94 = (MR_hl_field(1, Var_50, 0));
                  Var_51 = ((MR_Word) ((MR_hl_field(1, Var_50, 1))));
                  succeeded = (Var_51 == (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                    switch (ProcNum_8) {
                      default:
                        succeeded = MR_FALSE;
                        break;
                      case (MR_Integer) 0:
                        {
                          MR_Word Var_52;
                          MR_Word Var_53;

                          {
                            Var_53 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(3, Var_53, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                            MR_hl_field(3, Var_53, 1) = (MR_Box) ((MR_Unsigned) (IT_6));
                          }
                          {
                            Var_52 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(2, Var_52, 0) = ((MR_Box) (Var_53));
                            MR_hl_field(2, Var_52, 1) = X_92;
                            MR_hl_field(2, Var_52, 2) = Y_93;
                          }
                          {
                            MR_Word base;
                            base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                            *Code_10 = base;
                            MR_hl_field(0, base, 0) = Z_94;
                            MR_hl_field(0, base, 1) = ((MR_Box) (Var_52));
                          }
                          succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word Var_54;
                          MR_Word Var_55;

                          {
                            Var_55 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(3, Var_55, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                            MR_hl_field(3, Var_55, 1) = (MR_Box) ((MR_Unsigned) (IT_6));
                          }
                          {
                            Var_54 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(2, Var_54, 0) = ((MR_Box) (Var_55));
                            MR_hl_field(2, Var_54, 1) = X_92;
                            MR_hl_field(2, Var_54, 2) = Z_94;
                          }
                          {
                            MR_Word base;
                            base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                            *Code_10 = base;
                            MR_hl_field(0, base, 0) = Y_93;
                            MR_hl_field(0, base, 1) = ((MR_Box) (Var_54));
                          }
                          succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 2:
                        {
                          MR_Word Var_56;
                          MR_Word Var_57;

                          {
                            Var_57 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(3, Var_57, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                            MR_hl_field(3, Var_57, 1) = (MR_Box) ((MR_Unsigned) (IT_6));
                          }
                          {
                            Var_56 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(2, Var_56, 0) = ((MR_Box) (Var_57));
                            MR_hl_field(2, Var_56, 1) = Y_93;
                            MR_hl_field(2, Var_56, 2) = Z_94;
                          }
                          {
                            MR_Word base;
                            base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                            *Code_10 = base;
                            MR_hl_field(0, base, 0) = X_92;
                            MR_hl_field(0, base, 1) = ((MR_Box) (Var_56));
                          }
                          succeeded = MR_TRUE;
                        }
                        break;
                    }
                }
              }
            }
          }
        }
        break;
    }
  }
  return succeeded;
}

static MR_Word MR_CALL 
backend_libs__builtin_ops__make_int_zero_const_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Word HeadVar__2_2 = ((&backend_libs__builtin_ops_vector_common_8[0 + HeadVar__1_1]))->backend_libs__builtin_ops__vector_common_type_8_0__vct_8_f_0;

  return HeadVar__2_2;
}

static MR_bool MR_CALL 
backend_libs__builtin_ops__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_91_49_93_95_48_4_p_0(
  MR_String PredName_5,
  MR_Integer ProcNum_6,
  MR_Word Args_7,
  MR_Word * Code_8)
{
  MR_bool succeeded;

  {
    MR_Integer case_num_0 = (MR_Integer) -1;

    switch (MR_nth_code_unit(PredName_5, 0)) {
      case (MR_Integer) 98:
        if (MR_offset_strn_eq(1, 7, PredName_5, (MR_String) "builtin_"))
          switch (MR_nth_code_unit(PredName_5, 8)) {
            case (MR_Integer) 105:
              if (MR_offset_strn_eq(9, 2, PredName_5, (MR_String) "builtin_int"))
                switch (MR_nth_code_unit(PredName_5, 11)) {
                  case (MR_Integer) 49:
                    if (MR_offset_strn_eq(12, 2, PredName_5, (MR_String) "builtin_int16_"))
                      switch (MR_nth_code_unit(PredName_5, 14)) {
                        case (MR_Integer) 103:
                          if (MR_offset_streq(15, PredName_5, (MR_String) "builtin_int16_gt"))
                            case_num_0 = (MR_Integer) 0;
                          break;
                        case (MR_Integer) 108:
                          if (MR_offset_streq(15, PredName_5, (MR_String) "builtin_int16_lt"))
                            case_num_0 = (MR_Integer) 1;
                          break;
                      }
                    break;
                  case (MR_Integer) 51:
                    if (MR_offset_strn_eq(12, 2, PredName_5, (MR_String) "builtin_int32_"))
                      switch (MR_nth_code_unit(PredName_5, 14)) {
                        case (MR_Integer) 103:
                          if (MR_offset_streq(15, PredName_5, (MR_String) "builtin_int32_gt"))
                            case_num_0 = (MR_Integer) 2;
                          break;
                        case (MR_Integer) 108:
                          if (MR_offset_streq(15, PredName_5, (MR_String) "builtin_int32_lt"))
                            case_num_0 = (MR_Integer) 3;
                          break;
                      }
                    break;
                  case (MR_Integer) 54:
                    if (MR_offset_strn_eq(12, 2, PredName_5, (MR_String) "builtin_int64_"))
                      switch (MR_nth_code_unit(PredName_5, 14)) {
                        case (MR_Integer) 103:
                          if (MR_offset_streq(15, PredName_5, (MR_String) "builtin_int64_gt"))
                            case_num_0 = (MR_Integer) 4;
                          break;
                        case (MR_Integer) 108:
                          if (MR_offset_streq(15, PredName_5, (MR_String) "builtin_int64_lt"))
                            case_num_0 = (MR_Integer) 5;
                          break;
                      }
                    break;
                  case (MR_Integer) 56:
                    switch (MR_nth_code_unit(PredName_5, 12)) {
                      case (MR_Integer) 95:
                        switch (MR_nth_code_unit(PredName_5, 13)) {
                          case (MR_Integer) 103:
                            if (MR_offset_streq(14, PredName_5, (MR_String) "builtin_int8_gt"))
                              case_num_0 = (MR_Integer) 6;
                            break;
                          case (MR_Integer) 108:
                            if (MR_offset_streq(14, PredName_5, (MR_String) "builtin_int8_lt"))
                              case_num_0 = (MR_Integer) 7;
                            break;
                        }
                        break;
                    }
                    break;
                  case (MR_Integer) 95:
                    switch (MR_nth_code_unit(PredName_5, 12)) {
                      case (MR_Integer) 103:
                        if (MR_offset_streq(13, PredName_5, (MR_String) "builtin_int_gt"))
                          case_num_0 = (MR_Integer) 8;
                        break;
                      case (MR_Integer) 108:
                        if (MR_offset_streq(13, PredName_5, (MR_String) "builtin_int_lt"))
                          case_num_0 = (MR_Integer) 9;
                        break;
                    }
                    break;
                }
              break;
            case (MR_Integer) 117:
              if (MR_offset_strn_eq(9, 3, PredName_5, (MR_String) "builtin_uint"))
                switch (MR_nth_code_unit(PredName_5, 12)) {
                  case (MR_Integer) 49:
                    if (MR_offset_strn_eq(13, 2, PredName_5, (MR_String) "builtin_uint16_"))
                      switch (MR_nth_code_unit(PredName_5, 15)) {
                        case (MR_Integer) 103:
                          if (MR_offset_streq(16, PredName_5, (MR_String) "builtin_uint16_gt"))
                            case_num_0 = (MR_Integer) 10;
                          break;
                        case (MR_Integer) 108:
                          if (MR_offset_streq(16, PredName_5, (MR_String) "builtin_uint16_lt"))
                            case_num_0 = (MR_Integer) 11;
                          break;
                      }
                    break;
                  case (MR_Integer) 51:
                    if (MR_offset_strn_eq(13, 2, PredName_5, (MR_String) "builtin_uint32_"))
                      switch (MR_nth_code_unit(PredName_5, 15)) {
                        case (MR_Integer) 103:
                          if (MR_offset_streq(16, PredName_5, (MR_String) "builtin_uint32_gt"))
                            case_num_0 = (MR_Integer) 12;
                          break;
                        case (MR_Integer) 108:
                          if (MR_offset_streq(16, PredName_5, (MR_String) "builtin_uint32_lt"))
                            case_num_0 = (MR_Integer) 13;
                          break;
                      }
                    break;
                  case (MR_Integer) 54:
                    if (MR_offset_strn_eq(13, 2, PredName_5, (MR_String) "builtin_uint64_"))
                      switch (MR_nth_code_unit(PredName_5, 15)) {
                        case (MR_Integer) 103:
                          if (MR_offset_streq(16, PredName_5, (MR_String) "builtin_uint64_gt"))
                            case_num_0 = (MR_Integer) 14;
                          break;
                        case (MR_Integer) 108:
                          if (MR_offset_streq(16, PredName_5, (MR_String) "builtin_uint64_lt"))
                            case_num_0 = (MR_Integer) 15;
                          break;
                      }
                    break;
                  case (MR_Integer) 56:
                    switch (MR_nth_code_unit(PredName_5, 13)) {
                      case (MR_Integer) 95:
                        switch (MR_nth_code_unit(PredName_5, 14)) {
                          case (MR_Integer) 103:
                            if (MR_offset_streq(15, PredName_5, (MR_String) "builtin_uint8_gt"))
                              case_num_0 = (MR_Integer) 16;
                            break;
                          case (MR_Integer) 108:
                            if (MR_offset_streq(15, PredName_5, (MR_String) "builtin_uint8_lt"))
                              case_num_0 = (MR_Integer) 17;
                            break;
                        }
                        break;
                    }
                    break;
                  case (MR_Integer) 95:
                    switch (MR_nth_code_unit(PredName_5, 13)) {
                      case (MR_Integer) 103:
                        if (MR_offset_streq(14, PredName_5, (MR_String) "builtin_uint_gt"))
                          case_num_0 = (MR_Integer) 18;
                        break;
                      case (MR_Integer) 108:
                        if (MR_offset_streq(14, PredName_5, (MR_String) "builtin_uint_lt"))
                          case_num_0 = (MR_Integer) 19;
                        break;
                    }
                    break;
                }
              break;
          }
        break;
      case (MR_Integer) 105:
        if (MR_offset_streq(1, PredName_5, (MR_String) "in_range"))
          case_num_0 = (MR_Integer) 20;
        break;
      case (MR_Integer) 112:
        switch (MR_nth_code_unit(PredName_5, 1)) {
          case (MR_Integer) 97:
            if (MR_offset_streq(2, PredName_5, (MR_String) "partial_inst_copy"))
              case_num_0 = (MR_Integer) 23;
            break;
          case (MR_Integer) 111:
            if (MR_offset_streq(2, PredName_5, (MR_String) "pointer_equal"))
              case_num_0 = (MR_Integer) 24;
            break;
        }
        break;
      case (MR_Integer) 115:
        if (MR_offset_streq(1, PredName_5, (MR_String) "store_at_ref_impure"))
          case_num_0 = (MR_Integer) 25;
        break;
      case (MR_Integer) 116:
        if (MR_offset_strn_eq(1, 5, PredName_5, (MR_String) "trace_"))
          switch (MR_nth_code_unit(PredName_5, 6)) {
            case (MR_Integer) 103:
              if (MR_offset_streq(7, PredName_5, (MR_String) "trace_get_io_state"))
                case_num_0 = (MR_Integer) 26;
              break;
            case (MR_Integer) 115:
              if (MR_offset_streq(7, PredName_5, (MR_String) "trace_set_io_state"))
                case_num_0 = (MR_Integer) 27;
              break;
          }
        break;
      case (MR_Integer) 117:
        if (MR_offset_strn_eq(1, 2, PredName_5, (MR_String) "uns"))
          switch (MR_nth_code_unit(PredName_5, 3)) {
            case (MR_Integer) 97:
              if (MR_offset_streq(4, PredName_5, (MR_String) "unsafe_type_cast"))
                case_num_0 = (MR_Integer) 28;
              break;
            case (MR_Integer) 105:
              if (MR_offset_strn_eq(4, 6, PredName_5, (MR_String) "unsigned_l"))
                switch (MR_nth_code_unit(PredName_5, 10)) {
                  case (MR_Integer) 101:
                    if (MR_offset_streq(11, PredName_5, (MR_String) "unsigned_le"))
                      case_num_0 = (MR_Integer) 21;
                    break;
                  case (MR_Integer) 116:
                    if (MR_offset_streq(11, PredName_5, (MR_String) "unsigned_lt"))
                      case_num_0 = (MR_Integer) 22;
                    break;
                }
              break;
          }
        break;
    }
    switch (case_num_0) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 0:
        {
          // case "builtin_int16_gt"
          ;
          {
            MR_Word CmpOp_14;
            MR_Word Var_26;
            MR_Word Var_27;
            MR_Word Var_28;
            MR_Box X_47;
            MR_Box Y_48;

            succeeded = (ProcNum_6 == (MR_Integer) 0);
            if (succeeded)
            {
              succeeded = (Args_7 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                X_47 = (MR_hl_field(1, Args_7, 0));
                Var_26 = ((MR_Word) ((MR_hl_field(1, Args_7, 1))));
                succeeded = (Var_26 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Y_48 = (MR_hl_field(1, Var_26, 0));
                  Var_27 = ((MR_Word) ((MR_hl_field(1, Var_26, 1))));
                  succeeded = (Var_27 == (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    CmpOp_14 = (MR_Word) (MR_mkword(3, &backend_libs__builtin_ops_scalar_common_1[13]));
                    {
                      Var_28 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, Var_28, 0) = ((MR_Box) (CmpOp_14));
                      MR_hl_field(0, Var_28, 1) = X_47;
                      MR_hl_field(0, Var_28, 2) = Y_48;
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      *Code_8 = base;
                      MR_hl_field(2, base, 0) = ((MR_Box) (Var_28));
                    }
                    succeeded = MR_TRUE;
                  }
                }
              }
            }
          }
        }
        break;
      case (MR_Integer) 1:
        {
          // case "builtin_int16_lt"
          ;
          {
            MR_Word CmpOp_63;
            MR_Word Var_64;
            MR_Word Var_65;
            MR_Word Var_66;
            MR_Box X_67;
            MR_Box Y_68;

            succeeded = (ProcNum_6 == (MR_Integer) 0);
            if (succeeded)
            {
              succeeded = (Args_7 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                X_67 = (MR_hl_field(1, Args_7, 0));
                Var_64 = ((MR_Word) ((MR_hl_field(1, Args_7, 1))));
                succeeded = (Var_64 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Y_68 = (MR_hl_field(1, Var_64, 0));
                  Var_65 = ((MR_Word) ((MR_hl_field(1, Var_64, 1))));
                  succeeded = (Var_65 == (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    CmpOp_63 = (MR_Word) (MR_mkword(3, &backend_libs__builtin_ops_scalar_common_1[14]));
                    {
                      Var_66 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, Var_66, 0) = ((MR_Box) (CmpOp_63));
                      MR_hl_field(0, Var_66, 1) = X_67;
                      MR_hl_field(0, Var_66, 2) = Y_68;
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      *Code_8 = base;
                      MR_hl_field(2, base, 0) = ((MR_Box) (Var_66));
                    }
                    succeeded = MR_TRUE;
                  }
                }
              }
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          // case "builtin_int32_gt"
          ;
          {
            MR_Word CmpOp_71;
            MR_Word Var_72;
            MR_Word Var_73;
            MR_Word Var_74;
            MR_Box X_75;
            MR_Box Y_76;

            succeeded = (ProcNum_6 == (MR_Integer) 0);
            if (succeeded)
            {
              succeeded = (Args_7 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                X_75 = (MR_hl_field(1, Args_7, 0));
                Var_72 = ((MR_Word) ((MR_hl_field(1, Args_7, 1))));
                succeeded = (Var_72 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Y_76 = (MR_hl_field(1, Var_72, 0));
                  Var_73 = ((MR_Word) ((MR_hl_field(1, Var_72, 1))));
                  succeeded = (Var_73 == (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    CmpOp_71 = (MR_Word) (MR_mkword(3, &backend_libs__builtin_ops_scalar_common_1[15]));
                    {
                      Var_74 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, Var_74, 0) = ((MR_Box) (CmpOp_71));
                      MR_hl_field(0, Var_74, 1) = X_75;
                      MR_hl_field(0, Var_74, 2) = Y_76;
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      *Code_8 = base;
                      MR_hl_field(2, base, 0) = ((MR_Box) (Var_74));
                    }
                    succeeded = MR_TRUE;
                  }
                }
              }
            }
          }
        }
        break;
      case (MR_Integer) 3:
        {
          // case "builtin_int32_lt"
          ;
          {
            MR_Word CmpOp_79;
            MR_Word Var_80;
            MR_Word Var_81;
            MR_Word Var_82;
            MR_Box X_83;
            MR_Box Y_84;

            succeeded = (ProcNum_6 == (MR_Integer) 0);
            if (succeeded)
            {
              succeeded = (Args_7 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                X_83 = (MR_hl_field(1, Args_7, 0));
                Var_80 = ((MR_Word) ((MR_hl_field(1, Args_7, 1))));
                succeeded = (Var_80 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Y_84 = (MR_hl_field(1, Var_80, 0));
                  Var_81 = ((MR_Word) ((MR_hl_field(1, Var_80, 1))));
                  succeeded = (Var_81 == (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    CmpOp_79 = (MR_Word) (MR_mkword(3, &backend_libs__builtin_ops_scalar_common_1[16]));
                    {
                      Var_82 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, Var_82, 0) = ((MR_Box) (CmpOp_79));
                      MR_hl_field(0, Var_82, 1) = X_83;
                      MR_hl_field(0, Var_82, 2) = Y_84;
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      *Code_8 = base;
                      MR_hl_field(2, base, 0) = ((MR_Box) (Var_82));
                    }
                    succeeded = MR_TRUE;
                  }
                }
              }
            }
          }
        }
        break;
      case (MR_Integer) 4:
        {
          // case "builtin_int64_gt"
          ;
          {
            MR_Word CmpOp_87;
            MR_Word Var_88;
            MR_Word Var_89;
            MR_Word Var_90;
            MR_Box X_91;
            MR_Box Y_92;

            succeeded = (ProcNum_6 == (MR_Integer) 0);
            if (succeeded)
            {
              succeeded = (Args_7 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                X_91 = (MR_hl_field(1, Args_7, 0));
                Var_88 = ((MR_Word) ((MR_hl_field(1, Args_7, 1))));
                succeeded = (Var_88 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Y_92 = (MR_hl_field(1, Var_88, 0));
                  Var_89 = ((MR_Word) ((MR_hl_field(1, Var_88, 1))));
                  succeeded = (Var_89 == (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    CmpOp_87 = (MR_Word) (MR_mkword(3, &backend_libs__builtin_ops_scalar_common_1[17]));
                    {
                      Var_90 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, Var_90, 0) = ((MR_Box) (CmpOp_87));
                      MR_hl_field(0, Var_90, 1) = X_91;
                      MR_hl_field(0, Var_90, 2) = Y_92;
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      *Code_8 = base;
                      MR_hl_field(2, base, 0) = ((MR_Box) (Var_90));
                    }
                    succeeded = MR_TRUE;
                  }
                }
              }
            }
          }
        }
        break;
      case (MR_Integer) 5:
        {
          // case "builtin_int64_lt"
          ;
          {
            MR_Word CmpOp_95;
            MR_Word Var_96;
            MR_Word Var_97;
            MR_Word Var_98;
            MR_Box X_99;
            MR_Box Y_100;

            succeeded = (ProcNum_6 == (MR_Integer) 0);
            if (succeeded)
            {
              succeeded = (Args_7 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                X_99 = (MR_hl_field(1, Args_7, 0));
                Var_96 = ((MR_Word) ((MR_hl_field(1, Args_7, 1))));
                succeeded = (Var_96 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Y_100 = (MR_hl_field(1, Var_96, 0));
                  Var_97 = ((MR_Word) ((MR_hl_field(1, Var_96, 1))));
                  succeeded = (Var_97 == (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    CmpOp_95 = (MR_Word) (MR_mkword(3, &backend_libs__builtin_ops_scalar_common_1[18]));
                    {
                      Var_98 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, Var_98, 0) = ((MR_Box) (CmpOp_95));
                      MR_hl_field(0, Var_98, 1) = X_99;
                      MR_hl_field(0, Var_98, 2) = Y_100;
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      *Code_8 = base;
                      MR_hl_field(2, base, 0) = ((MR_Box) (Var_98));
                    }
                    succeeded = MR_TRUE;
                  }
                }
              }
            }
          }
        }
        break;
      case (MR_Integer) 6:
        {
          // case "builtin_int8_gt"
          ;
          {
            MR_Word CmpOp_103;
            MR_Word Var_104;
            MR_Word Var_105;
            MR_Word Var_106;
            MR_Box X_107;
            MR_Box Y_108;

            succeeded = (ProcNum_6 == (MR_Integer) 0);
            if (succeeded)
            {
              succeeded = (Args_7 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                X_107 = (MR_hl_field(1, Args_7, 0));
                Var_104 = ((MR_Word) ((MR_hl_field(1, Args_7, 1))));
                succeeded = (Var_104 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Y_108 = (MR_hl_field(1, Var_104, 0));
                  Var_105 = ((MR_Word) ((MR_hl_field(1, Var_104, 1))));
                  succeeded = (Var_105 == (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    CmpOp_103 = (MR_Word) (MR_mkword(3, &backend_libs__builtin_ops_scalar_common_1[19]));
                    {
                      Var_106 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, Var_106, 0) = ((MR_Box) (CmpOp_103));
                      MR_hl_field(0, Var_106, 1) = X_107;
                      MR_hl_field(0, Var_106, 2) = Y_108;
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      *Code_8 = base;
                      MR_hl_field(2, base, 0) = ((MR_Box) (Var_106));
                    }
                    succeeded = MR_TRUE;
                  }
                }
              }
            }
          }
        }
        break;
      case (MR_Integer) 7:
        {
          // case "builtin_int8_lt"
          ;
          {
            MR_Word CmpOp_111;
            MR_Word Var_112;
            MR_Word Var_113;
            MR_Word Var_114;
            MR_Box X_115;
            MR_Box Y_116;

            succeeded = (ProcNum_6 == (MR_Integer) 0);
            if (succeeded)
            {
              succeeded = (Args_7 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                X_115 = (MR_hl_field(1, Args_7, 0));
                Var_112 = ((MR_Word) ((MR_hl_field(1, Args_7, 1))));
                succeeded = (Var_112 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Y_116 = (MR_hl_field(1, Var_112, 0));
                  Var_113 = ((MR_Word) ((MR_hl_field(1, Var_112, 1))));
                  succeeded = (Var_113 == (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    CmpOp_111 = (MR_Word) (MR_mkword(3, &backend_libs__builtin_ops_scalar_common_1[20]));
                    {
                      Var_114 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, Var_114, 0) = ((MR_Box) (CmpOp_111));
                      MR_hl_field(0, Var_114, 1) = X_115;
                      MR_hl_field(0, Var_114, 2) = Y_116;
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      *Code_8 = base;
                      MR_hl_field(2, base, 0) = ((MR_Box) (Var_114));
                    }
                    succeeded = MR_TRUE;
                  }
                }
              }
            }
          }
        }
        break;
      case (MR_Integer) 8:
        {
          // case "builtin_int_gt"
          ;
          {
            MR_Word CmpOp_119;
            MR_Word Var_120;
            MR_Word Var_121;
            MR_Word Var_122;
            MR_Box X_123;
            MR_Box Y_124;

            succeeded = (ProcNum_6 == (MR_Integer) 0);
            if (succeeded)
            {
              succeeded = (Args_7 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                X_123 = (MR_hl_field(1, Args_7, 0));
                Var_120 = ((MR_Word) ((MR_hl_field(1, Args_7, 1))));
                succeeded = (Var_120 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Y_124 = (MR_hl_field(1, Var_120, 0));
                  Var_121 = ((MR_Word) ((MR_hl_field(1, Var_120, 1))));
                  succeeded = (Var_121 == (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    CmpOp_119 = (MR_Word) (MR_mkword(3, &backend_libs__builtin_ops_scalar_common_1[21]));
                    {
                      Var_122 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, Var_122, 0) = ((MR_Box) (CmpOp_119));
                      MR_hl_field(0, Var_122, 1) = X_123;
                      MR_hl_field(0, Var_122, 2) = Y_124;
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      *Code_8 = base;
                      MR_hl_field(2, base, 0) = ((MR_Box) (Var_122));
                    }
                    succeeded = MR_TRUE;
                  }
                }
              }
            }
          }
        }
        break;
      case (MR_Integer) 9:
        {
          // case "builtin_int_lt"
          ;
          {
            MR_Word CmpOp_127;
            MR_Word Var_128;
            MR_Word Var_129;
            MR_Word Var_130;
            MR_Box X_131;
            MR_Box Y_132;

            succeeded = (ProcNum_6 == (MR_Integer) 0);
            if (succeeded)
            {
              succeeded = (Args_7 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                X_131 = (MR_hl_field(1, Args_7, 0));
                Var_128 = ((MR_Word) ((MR_hl_field(1, Args_7, 1))));
                succeeded = (Var_128 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Y_132 = (MR_hl_field(1, Var_128, 0));
                  Var_129 = ((MR_Word) ((MR_hl_field(1, Var_128, 1))));
                  succeeded = (Var_129 == (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    CmpOp_127 = (MR_Word) (MR_mkword(3, &backend_libs__builtin_ops_scalar_common_1[22]));
                    {
                      Var_130 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, Var_130, 0) = ((MR_Box) (CmpOp_127));
                      MR_hl_field(0, Var_130, 1) = X_131;
                      MR_hl_field(0, Var_130, 2) = Y_132;
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      *Code_8 = base;
                      MR_hl_field(2, base, 0) = ((MR_Box) (Var_130));
                    }
                    succeeded = MR_TRUE;
                  }
                }
              }
            }
          }
        }
        break;
      case (MR_Integer) 10:
        {
          // case "builtin_uint16_gt"
          ;
          {
            MR_Word CmpOp_135;
            MR_Word Var_136;
            MR_Word Var_137;
            MR_Word Var_138;
            MR_Box X_139;
            MR_Box Y_140;

            succeeded = (ProcNum_6 == (MR_Integer) 0);
            if (succeeded)
            {
              succeeded = (Args_7 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                X_139 = (MR_hl_field(1, Args_7, 0));
                Var_136 = ((MR_Word) ((MR_hl_field(1, Args_7, 1))));
                succeeded = (Var_136 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Y_140 = (MR_hl_field(1, Var_136, 0));
                  Var_137 = ((MR_Word) ((MR_hl_field(1, Var_136, 1))));
                  succeeded = (Var_137 == (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    CmpOp_135 = (MR_Word) (MR_mkword(3, &backend_libs__builtin_ops_scalar_common_1[23]));
                    {
                      Var_138 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, Var_138, 0) = ((MR_Box) (CmpOp_135));
                      MR_hl_field(0, Var_138, 1) = X_139;
                      MR_hl_field(0, Var_138, 2) = Y_140;
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      *Code_8 = base;
                      MR_hl_field(2, base, 0) = ((MR_Box) (Var_138));
                    }
                    succeeded = MR_TRUE;
                  }
                }
              }
            }
          }
        }
        break;
      case (MR_Integer) 11:
        {
          // case "builtin_uint16_lt"
          ;
          {
            MR_Word CmpOp_143;
            MR_Word Var_144;
            MR_Word Var_145;
            MR_Word Var_146;
            MR_Box X_147;
            MR_Box Y_148;

            succeeded = (ProcNum_6 == (MR_Integer) 0);
            if (succeeded)
            {
              succeeded = (Args_7 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                X_147 = (MR_hl_field(1, Args_7, 0));
                Var_144 = ((MR_Word) ((MR_hl_field(1, Args_7, 1))));
                succeeded = (Var_144 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Y_148 = (MR_hl_field(1, Var_144, 0));
                  Var_145 = ((MR_Word) ((MR_hl_field(1, Var_144, 1))));
                  succeeded = (Var_145 == (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    CmpOp_143 = (MR_Word) (MR_mkword(3, &backend_libs__builtin_ops_scalar_common_1[24]));
                    {
                      Var_146 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, Var_146, 0) = ((MR_Box) (CmpOp_143));
                      MR_hl_field(0, Var_146, 1) = X_147;
                      MR_hl_field(0, Var_146, 2) = Y_148;
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      *Code_8 = base;
                      MR_hl_field(2, base, 0) = ((MR_Box) (Var_146));
                    }
                    succeeded = MR_TRUE;
                  }
                }
              }
            }
          }
        }
        break;
      case (MR_Integer) 12:
        {
          // case "builtin_uint32_gt"
          ;
          {
            MR_Word CmpOp_151;
            MR_Word Var_152;
            MR_Word Var_153;
            MR_Word Var_154;
            MR_Box X_155;
            MR_Box Y_156;

            succeeded = (ProcNum_6 == (MR_Integer) 0);
            if (succeeded)
            {
              succeeded = (Args_7 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                X_155 = (MR_hl_field(1, Args_7, 0));
                Var_152 = ((MR_Word) ((MR_hl_field(1, Args_7, 1))));
                succeeded = (Var_152 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Y_156 = (MR_hl_field(1, Var_152, 0));
                  Var_153 = ((MR_Word) ((MR_hl_field(1, Var_152, 1))));
                  succeeded = (Var_153 == (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    CmpOp_151 = (MR_Word) (MR_mkword(3, &backend_libs__builtin_ops_scalar_common_1[25]));
                    {
                      Var_154 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, Var_154, 0) = ((MR_Box) (CmpOp_151));
                      MR_hl_field(0, Var_154, 1) = X_155;
                      MR_hl_field(0, Var_154, 2) = Y_156;
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      *Code_8 = base;
                      MR_hl_field(2, base, 0) = ((MR_Box) (Var_154));
                    }
                    succeeded = MR_TRUE;
                  }
                }
              }
            }
          }
        }
        break;
      case (MR_Integer) 13:
        {
          // case "builtin_uint32_lt"
          ;
          {
            MR_Word CmpOp_159;
            MR_Word Var_160;
            MR_Word Var_161;
            MR_Word Var_162;
            MR_Box X_163;
            MR_Box Y_164;

            succeeded = (ProcNum_6 == (MR_Integer) 0);
            if (succeeded)
            {
              succeeded = (Args_7 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                X_163 = (MR_hl_field(1, Args_7, 0));
                Var_160 = ((MR_Word) ((MR_hl_field(1, Args_7, 1))));
                succeeded = (Var_160 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Y_164 = (MR_hl_field(1, Var_160, 0));
                  Var_161 = ((MR_Word) ((MR_hl_field(1, Var_160, 1))));
                  succeeded = (Var_161 == (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    CmpOp_159 = (MR_Word) (MR_mkword(3, &backend_libs__builtin_ops_scalar_common_1[26]));
                    {
                      Var_162 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, Var_162, 0) = ((MR_Box) (CmpOp_159));
                      MR_hl_field(0, Var_162, 1) = X_163;
                      MR_hl_field(0, Var_162, 2) = Y_164;
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      *Code_8 = base;
                      MR_hl_field(2, base, 0) = ((MR_Box) (Var_162));
                    }
                    succeeded = MR_TRUE;
                  }
                }
              }
            }
          }
        }
        break;
      case (MR_Integer) 14:
        {
          // case "builtin_uint64_gt"
          ;
          {
            MR_Word CmpOp_167;
            MR_Word Var_168;
            MR_Word Var_169;
            MR_Word Var_170;
            MR_Box X_171;
            MR_Box Y_172;

            succeeded = (ProcNum_6 == (MR_Integer) 0);
            if (succeeded)
            {
              succeeded = (Args_7 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                X_171 = (MR_hl_field(1, Args_7, 0));
                Var_168 = ((MR_Word) ((MR_hl_field(1, Args_7, 1))));
                succeeded = (Var_168 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Y_172 = (MR_hl_field(1, Var_168, 0));
                  Var_169 = ((MR_Word) ((MR_hl_field(1, Var_168, 1))));
                  succeeded = (Var_169 == (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    CmpOp_167 = (MR_Word) (MR_mkword(3, &backend_libs__builtin_ops_scalar_common_1[27]));
                    {
                      Var_170 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, Var_170, 0) = ((MR_Box) (CmpOp_167));
                      MR_hl_field(0, Var_170, 1) = X_171;
                      MR_hl_field(0, Var_170, 2) = Y_172;
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      *Code_8 = base;
                      MR_hl_field(2, base, 0) = ((MR_Box) (Var_170));
                    }
                    succeeded = MR_TRUE;
                  }
                }
              }
            }
          }
        }
        break;
      case (MR_Integer) 15:
        {
          // case "builtin_uint64_lt"
          ;
          {
            MR_Word CmpOp_175;
            MR_Word Var_176;
            MR_Word Var_177;
            MR_Word Var_178;
            MR_Box X_179;
            MR_Box Y_180;

            succeeded = (ProcNum_6 == (MR_Integer) 0);
            if (succeeded)
            {
              succeeded = (Args_7 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                X_179 = (MR_hl_field(1, Args_7, 0));
                Var_176 = ((MR_Word) ((MR_hl_field(1, Args_7, 1))));
                succeeded = (Var_176 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Y_180 = (MR_hl_field(1, Var_176, 0));
                  Var_177 = ((MR_Word) ((MR_hl_field(1, Var_176, 1))));
                  succeeded = (Var_177 == (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    CmpOp_175 = (MR_Word) (MR_mkword(3, &backend_libs__builtin_ops_scalar_common_1[28]));
                    {
                      Var_178 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, Var_178, 0) = ((MR_Box) (CmpOp_175));
                      MR_hl_field(0, Var_178, 1) = X_179;
                      MR_hl_field(0, Var_178, 2) = Y_180;
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      *Code_8 = base;
                      MR_hl_field(2, base, 0) = ((MR_Box) (Var_178));
                    }
                    succeeded = MR_TRUE;
                  }
                }
              }
            }
          }
        }
        break;
      case (MR_Integer) 16:
        {
          // case "builtin_uint8_gt"
          ;
          {
            MR_Word CmpOp_183;
            MR_Word Var_184;
            MR_Word Var_185;
            MR_Word Var_186;
            MR_Box X_187;
            MR_Box Y_188;

            succeeded = (ProcNum_6 == (MR_Integer) 0);
            if (succeeded)
            {
              succeeded = (Args_7 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                X_187 = (MR_hl_field(1, Args_7, 0));
                Var_184 = ((MR_Word) ((MR_hl_field(1, Args_7, 1))));
                succeeded = (Var_184 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Y_188 = (MR_hl_field(1, Var_184, 0));
                  Var_185 = ((MR_Word) ((MR_hl_field(1, Var_184, 1))));
                  succeeded = (Var_185 == (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    CmpOp_183 = (MR_Word) (MR_mkword(3, &backend_libs__builtin_ops_scalar_common_1[29]));
                    {
                      Var_186 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, Var_186, 0) = ((MR_Box) (CmpOp_183));
                      MR_hl_field(0, Var_186, 1) = X_187;
                      MR_hl_field(0, Var_186, 2) = Y_188;
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      *Code_8 = base;
                      MR_hl_field(2, base, 0) = ((MR_Box) (Var_186));
                    }
                    succeeded = MR_TRUE;
                  }
                }
              }
            }
          }
        }
        break;
      case (MR_Integer) 17:
        {
          // case "builtin_uint8_lt"
          ;
          {
            MR_Word CmpOp_191;
            MR_Word Var_192;
            MR_Word Var_193;
            MR_Word Var_194;
            MR_Box X_195;
            MR_Box Y_196;

            succeeded = (ProcNum_6 == (MR_Integer) 0);
            if (succeeded)
            {
              succeeded = (Args_7 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                X_195 = (MR_hl_field(1, Args_7, 0));
                Var_192 = ((MR_Word) ((MR_hl_field(1, Args_7, 1))));
                succeeded = (Var_192 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Y_196 = (MR_hl_field(1, Var_192, 0));
                  Var_193 = ((MR_Word) ((MR_hl_field(1, Var_192, 1))));
                  succeeded = (Var_193 == (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    CmpOp_191 = (MR_Word) (MR_mkword(3, &backend_libs__builtin_ops_scalar_common_1[30]));
                    {
                      Var_194 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, Var_194, 0) = ((MR_Box) (CmpOp_191));
                      MR_hl_field(0, Var_194, 1) = X_195;
                      MR_hl_field(0, Var_194, 2) = Y_196;
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      *Code_8 = base;
                      MR_hl_field(2, base, 0) = ((MR_Box) (Var_194));
                    }
                    succeeded = MR_TRUE;
                  }
                }
              }
            }
          }
        }
        break;
      case (MR_Integer) 18:
        {
          // case "builtin_uint_gt"
          ;
          {
            MR_Word CmpOp_199;
            MR_Word Var_200;
            MR_Word Var_201;
            MR_Word Var_202;
            MR_Box X_203;
            MR_Box Y_204;

            succeeded = (ProcNum_6 == (MR_Integer) 0);
            if (succeeded)
            {
              succeeded = (Args_7 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                X_203 = (MR_hl_field(1, Args_7, 0));
                Var_200 = ((MR_Word) ((MR_hl_field(1, Args_7, 1))));
                succeeded = (Var_200 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Y_204 = (MR_hl_field(1, Var_200, 0));
                  Var_201 = ((MR_Word) ((MR_hl_field(1, Var_200, 1))));
                  succeeded = (Var_201 == (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    CmpOp_199 = (MR_Word) (MR_mkword(3, &backend_libs__builtin_ops_scalar_common_1[31]));
                    {
                      Var_202 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, Var_202, 0) = ((MR_Box) (CmpOp_199));
                      MR_hl_field(0, Var_202, 1) = X_203;
                      MR_hl_field(0, Var_202, 2) = Y_204;
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      *Code_8 = base;
                      MR_hl_field(2, base, 0) = ((MR_Box) (Var_202));
                    }
                    succeeded = MR_TRUE;
                  }
                }
              }
            }
          }
        }
        break;
      case (MR_Integer) 19:
        {
          // case "builtin_uint_lt"
          ;
          {
            MR_Word CmpOp_207;
            MR_Word Var_208;
            MR_Word Var_209;
            MR_Word Var_210;
            MR_Box X_211;
            MR_Box Y_212;

            succeeded = (ProcNum_6 == (MR_Integer) 0);
            if (succeeded)
            {
              succeeded = (Args_7 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                X_211 = (MR_hl_field(1, Args_7, 0));
                Var_208 = ((MR_Word) ((MR_hl_field(1, Args_7, 1))));
                succeeded = (Var_208 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Y_212 = (MR_hl_field(1, Var_208, 0));
                  Var_209 = ((MR_Word) ((MR_hl_field(1, Var_208, 1))));
                  succeeded = (Var_209 == (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    CmpOp_207 = (MR_Word) (MR_mkword(3, &backend_libs__builtin_ops_scalar_common_1[32]));
                    {
                      Var_210 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, Var_210, 0) = ((MR_Box) (CmpOp_207));
                      MR_hl_field(0, Var_210, 1) = X_211;
                      MR_hl_field(0, Var_210, 2) = Y_212;
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      *Code_8 = base;
                      MR_hl_field(2, base, 0) = ((MR_Box) (Var_210));
                    }
                    succeeded = MR_TRUE;
                  }
                }
              }
            }
          }
        }
        break;
      case (MR_Integer) 20:
        {
          // case "in_range"
          ;
          {
            MR_Word Var_31;
            MR_Word Var_32;
            MR_Word Var_33;
            MR_Box X_49;
            MR_Box Y_50;
            MR_Word CmpOp_51;

            succeeded = (ProcNum_6 == (MR_Integer) 0);
            if (succeeded)
            {
              CmpOp_51 = (MR_Word) ((MR_Unsigned) 20U);
              succeeded = (Args_7 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                X_49 = (MR_hl_field(1, Args_7, 0));
                Var_31 = ((MR_Word) ((MR_hl_field(1, Args_7, 1))));
                succeeded = (Var_31 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Y_50 = (MR_hl_field(1, Var_31, 0));
                  Var_32 = ((MR_Word) ((MR_hl_field(1, Var_31, 1))));
                  succeeded = (Var_32 == (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    {
                      Var_33 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, Var_33, 0) = ((MR_Box) (CmpOp_51));
                      MR_hl_field(0, Var_33, 1) = X_49;
                      MR_hl_field(0, Var_33, 2) = Y_50;
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      *Code_8 = base;
                      MR_hl_field(2, base, 0) = ((MR_Box) (Var_33));
                    }
                    succeeded = MR_TRUE;
                  }
                }
              }
            }
          }
        }
        break;
      case (MR_Integer) 21:
        {
          // case "unsigned_le"
          ;
          {
            MR_Word Var_213;
            MR_Word Var_214;
            MR_Word Var_215;
            MR_Box X_216;
            MR_Box Y_217;
            MR_Word CmpOp_218;

            succeeded = (ProcNum_6 == (MR_Integer) 0);
            if (succeeded)
            {
              CmpOp_218 = (MR_Word) (MR_mkword(3, &backend_libs__builtin_ops_scalar_common_1[1]));
              succeeded = (Args_7 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                X_216 = (MR_hl_field(1, Args_7, 0));
                Var_213 = ((MR_Word) ((MR_hl_field(1, Args_7, 1))));
                succeeded = (Var_213 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Y_217 = (MR_hl_field(1, Var_213, 0));
                  Var_214 = ((MR_Word) ((MR_hl_field(1, Var_213, 1))));
                  succeeded = (Var_214 == (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    {
                      Var_215 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, Var_215, 0) = ((MR_Box) (CmpOp_218));
                      MR_hl_field(0, Var_215, 1) = X_216;
                      MR_hl_field(0, Var_215, 2) = Y_217;
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      *Code_8 = base;
                      MR_hl_field(2, base, 0) = ((MR_Box) (Var_215));
                    }
                    succeeded = MR_TRUE;
                  }
                }
              }
            }
          }
        }
        break;
      case (MR_Integer) 22:
        {
          // case "unsigned_lt"
          ;
          {
            MR_Word Var_219;
            MR_Word Var_220;
            MR_Word Var_221;
            MR_Box X_222;
            MR_Box Y_223;
            MR_Word CmpOp_224;

            succeeded = (ProcNum_6 == (MR_Integer) 0);
            if (succeeded)
            {
              CmpOp_224 = (MR_Word) (MR_mkword(3, &backend_libs__builtin_ops_scalar_common_1[2]));
              succeeded = (Args_7 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                X_222 = (MR_hl_field(1, Args_7, 0));
                Var_219 = ((MR_Word) ((MR_hl_field(1, Args_7, 1))));
                succeeded = (Var_219 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Y_223 = (MR_hl_field(1, Var_219, 0));
                  Var_220 = ((MR_Word) ((MR_hl_field(1, Var_219, 1))));
                  succeeded = (Var_220 == (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    {
                      Var_221 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, Var_221, 0) = ((MR_Box) (CmpOp_224));
                      MR_hl_field(0, Var_221, 1) = X_222;
                      MR_hl_field(0, Var_221, 2) = Y_223;
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      *Code_8 = base;
                      MR_hl_field(2, base, 0) = ((MR_Box) (Var_221));
                    }
                    succeeded = MR_TRUE;
                  }
                }
              }
            }
          }
        }
        break;
      case (MR_Integer) 23:
        {
          // case "partial_inst_copy"
          ;
          {
            MR_Word Var_41;
            MR_Word Var_42;
            MR_Word Var_43;
            MR_Box X_54;
            MR_Box Y_55;

            succeeded = (ProcNum_6 == (MR_Integer) 0);
            if (succeeded)
            {
              succeeded = (Args_7 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                X_54 = (MR_hl_field(1, Args_7, 0));
                Var_41 = ((MR_Word) ((MR_hl_field(1, Args_7, 1))));
                succeeded = (Var_41 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Y_55 = (MR_hl_field(1, Var_41, 0));
                  Var_42 = ((MR_Word) ((MR_hl_field(1, Var_41, 1))));
                  succeeded = (Var_42 == (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    {
                      Var_43 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, Var_43, 0) = X_54;
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      *Code_8 = base;
                      MR_hl_field(0, base, 0) = Y_55;
                      MR_hl_field(0, base, 1) = ((MR_Box) (Var_43));
                    }
                    succeeded = MR_TRUE;
                  }
                }
              }
            }
          }
        }
        break;
      case (MR_Integer) 24:
        {
          // case "pointer_equal"
          ;
          {
            MR_Word Var_39;
            MR_Word Var_40;
            MR_Box X_52;
            MR_Box Y_53;
            MR_Word Var_57;
            MR_Box Var_58;
            MR_Word Var_59;
            MR_Box Var_60;

            succeeded = (ProcNum_6 == (MR_Integer) 0);
            if (succeeded)
            {
              succeeded = (Args_7 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                Var_58 = (MR_hl_field(1, Args_7, 0));
                Var_57 = ((MR_Word) ((MR_hl_field(1, Args_7, 1))));
                succeeded = (Var_57 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Var_60 = (MR_hl_field(1, Var_57, 0));
                  Var_59 = ((MR_Word) ((MR_hl_field(1, Var_57, 1))));
                  if ((Var_59 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    X_52 = Var_58;
                    Y_53 = Var_60;
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    MR_Word Var_38;

                    X_52 = Var_60;
                    Y_53 = (MR_hl_field(1, Var_59, 0));
                    Var_38 = ((MR_Word) ((MR_hl_field(1, Var_59, 1))));
                    succeeded = (Var_38 == (MR_Word) ((MR_Unsigned) 0U));
                  }
                  if (succeeded)
                  {
                    Var_40 = (MR_Word) ((MR_Unsigned) 36U);
                    {
                      Var_39 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, Var_39, 0) = ((MR_Box) (Var_40));
                      MR_hl_field(0, Var_39, 1) = X_52;
                      MR_hl_field(0, Var_39, 2) = Y_53;
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      *Code_8 = base;
                      MR_hl_field(2, base, 0) = ((MR_Box) (Var_39));
                    }
                    succeeded = MR_TRUE;
                  }
                }
              }
            }
          }
        }
        break;
      case (MR_Integer) 25:
        {
          // case "store_at_ref_impure"
          ;
          {
            MR_Box Y_11;
            MR_Word Var_21;
            MR_Word Var_22;
            MR_Box X_44;

            succeeded = (ProcNum_6 == (MR_Integer) 0);
            if (succeeded)
            {
              succeeded = (Args_7 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                X_44 = (MR_hl_field(1, Args_7, 0));
                Var_21 = ((MR_Word) ((MR_hl_field(1, Args_7, 1))));
                succeeded = (Var_21 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Y_11 = (MR_hl_field(1, Var_21, 0));
                  Var_22 = ((MR_Word) ((MR_hl_field(1, Var_21, 1))));
                  succeeded = (Var_22 == (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      *Code_8 = base;
                      MR_hl_field(1, base, 0) = X_44;
                      MR_hl_field(1, base, 1) = Y_11;
                    }
                    succeeded = MR_TRUE;
                  }
                }
              }
            }
          }
        }
        break;
      case (MR_Integer) 26:
        {
          // case "trace_get_io_state"
          ;
          {
            MR_Word Var_16;

            succeeded = (ProcNum_6 == (MR_Integer) 0);
            if (succeeded)
            {
              succeeded = (Args_7 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                Var_16 = ((MR_Word) ((MR_hl_field(1, Args_7, 1))));
                succeeded = (Var_16 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    *Code_8 = base;
                    MR_hl_field(3, base, 0) = ((MR_Box) (Args_7));
                  }
                  succeeded = MR_TRUE;
                }
              }
            }
          }
        }
        break;
      case (MR_Integer) 27:
        {
          // case "trace_set_io_state"
          ;
          {
            MR_Word Var_19;

            succeeded = (ProcNum_6 == (MR_Integer) 0);
            if (succeeded)
            {
              succeeded = (Args_7 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                Var_19 = ((MR_Word) ((MR_hl_field(1, Args_7, 1))));
                succeeded = (Var_19 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  *Code_8 = (MR_Word) (MR_mkword(3, &backend_libs__builtin_ops_scalar_common_2[1]));
                  succeeded = MR_TRUE;
                }
              }
            }
          }
        }
        break;
      case (MR_Integer) 28:
        {
          // case "unsafe_type_cast"
          ;
          {
            MR_Word Var_23;
            MR_Word Var_24;
            MR_Word Var_25;
            MR_Box X_45;
            MR_Box Y_46;

            succeeded = (ProcNum_6 == (MR_Integer) 0);
            if (succeeded)
            {
              succeeded = (Args_7 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                X_45 = (MR_hl_field(1, Args_7, 0));
                Var_23 = ((MR_Word) ((MR_hl_field(1, Args_7, 1))));
                succeeded = (Var_23 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Y_46 = (MR_hl_field(1, Var_23, 0));
                  Var_24 = ((MR_Word) ((MR_hl_field(1, Var_23, 1))));
                  succeeded = (Var_24 == (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    {
                      Var_25 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, Var_25, 0) = X_45;
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      *Code_8 = base;
                      MR_hl_field(0, base, 0) = Y_46;
                      MR_hl_field(0, base, 1) = ((MR_Box) (Var_25));
                    }
                    succeeded = MR_TRUE;
                  }
                }
              }
            }
          }
        }
        break;
    }
  }
  return succeeded;
}

MR_String MR_CALL 
backend_libs__builtin_ops__cmp_op_c_operator_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_String HeadVar__2_2 = ((&backend_libs__builtin_ops_vector_common_7[16 + HeadVar__1_1]))->backend_libs__builtin_ops__vector_common_type_7_0__vct_7_f_0;

  return HeadVar__2_2;
}

MR_String MR_CALL 
backend_libs__builtin_ops__arith_op_c_operator_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_String HeadVar__2_2 = ((&backend_libs__builtin_ops_vector_common_7[11 + HeadVar__1_1]))->backend_libs__builtin_ops__vector_common_type_7_0__vct_7_f_0;

  return HeadVar__2_2;
}

MR_String MR_CALL 
backend_libs__builtin_ops__dump_cmp_op_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_String HeadVar__2_2 = ((&backend_libs__builtin_ops_vector_common_7[5 + HeadVar__1_1]))->backend_libs__builtin_ops__vector_common_type_7_0__vct_7_f_0;

  return HeadVar__2_2;
}

MR_String MR_CALL 
backend_libs__builtin_ops__dump_arith_op_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_String HeadVar__2_2 = ((&backend_libs__builtin_ops_vector_common_7[0 + HeadVar__1_1]))->backend_libs__builtin_ops__vector_common_type_7_0__vct_7_f_0;

  return HeadVar__2_2;
}

MR_Word MR_CALL 
backend_libs__builtin_ops__negate_cmp_op_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Word HeadVar__2_2 = ((&backend_libs__builtin_ops_vector_common_6[0 + HeadVar__1_1]))->backend_libs__builtin_ops__vector_common_type_6_0__vct_6_f_0;

  return HeadVar__2_2;
}

static MR_bool MR_CALL 
backend_libs__builtin_ops____Unify____arith_op_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = backend_libs__builtin_ops____Unify____arith_op_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
backend_libs__builtin_ops____Compare____arith_op_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  backend_libs__builtin_ops____Compare____arith_op_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
backend_libs__builtin_ops____Unify____array_elem_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = backend_libs__builtin_ops____Unify____array_elem_type_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
backend_libs__builtin_ops____Compare____array_elem_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  backend_libs__builtin_ops____Compare____array_elem_type_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
backend_libs__builtin_ops____Unify____binary_op_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = backend_libs__builtin_ops____Unify____binary_op_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
backend_libs__builtin_ops____Compare____binary_op_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  backend_libs__builtin_ops____Compare____binary_op_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
backend_libs__builtin_ops____Unify____cmp_op_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = backend_libs__builtin_ops____Unify____cmp_op_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
backend_libs__builtin_ops____Compare____cmp_op_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  backend_libs__builtin_ops____Compare____cmp_op_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
backend_libs__builtin_ops____Unify____float_arith_op_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = backend_libs__builtin_ops____Unify____float_arith_op_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
backend_libs__builtin_ops____Compare____float_arith_op_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  backend_libs__builtin_ops____Compare____float_arith_op_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
backend_libs__builtin_ops____Unify____int_as_uint_cmp_op_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = backend_libs__builtin_ops____Unify____int_as_uint_cmp_op_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
backend_libs__builtin_ops____Compare____int_as_uint_cmp_op_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  backend_libs__builtin_ops____Compare____int_as_uint_cmp_op_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
backend_libs__builtin_ops____Unify____maybe_size_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = backend_libs__builtin_ops____Unify____maybe_size_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
backend_libs__builtin_ops____Compare____maybe_size_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  backend_libs__builtin_ops____Compare____maybe_size_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
backend_libs__builtin_ops____Unify____scalar_array_elem_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = backend_libs__builtin_ops____Unify____scalar_array_elem_type_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
backend_libs__builtin_ops____Compare____scalar_array_elem_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  backend_libs__builtin_ops____Compare____scalar_array_elem_type_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
backend_libs__builtin_ops____Unify____shift_by_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = backend_libs__builtin_ops____Unify____shift_by_type_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
backend_libs__builtin_ops____Compare____shift_by_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  backend_libs__builtin_ops____Compare____shift_by_type_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
backend_libs__builtin_ops____Unify____simple_assigned_expr_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = backend_libs__builtin_ops____Unify____simple_assigned_expr_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
backend_libs__builtin_ops____Compare____simple_assigned_expr_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  backend_libs__builtin_ops____Compare____simple_assigned_expr_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
backend_libs__builtin_ops____Unify____simple_code_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = backend_libs__builtin_ops____Unify____simple_code_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
backend_libs__builtin_ops____Compare____simple_code_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  backend_libs__builtin_ops____Compare____simple_code_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
backend_libs__builtin_ops____Unify____simple_const_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = backend_libs__builtin_ops____Unify____simple_const_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
backend_libs__builtin_ops____Compare____simple_const_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  backend_libs__builtin_ops____Compare____simple_const_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
backend_libs__builtin_ops____Unify____simple_test_expr_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = backend_libs__builtin_ops____Unify____simple_test_expr_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
backend_libs__builtin_ops____Compare____simple_test_expr_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  backend_libs__builtin_ops____Compare____simple_test_expr_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
backend_libs__builtin_ops____Unify____unary_op_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = backend_libs__builtin_ops____Unify____unary_op_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
backend_libs__builtin_ops____Compare____unary_op_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  backend_libs__builtin_ops____Compare____unary_op_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__backend_libs__builtin_ops__init(void)
{
}

void mercury__backend_libs__builtin_ops__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&backend_libs__builtin_ops__backend_libs__builtin_ops__type_ctor_info_arith_op_0);
  MR_register_type_ctor_info(&backend_libs__builtin_ops__backend_libs__builtin_ops__type_ctor_info_array_elem_type_0);
  MR_register_type_ctor_info(&backend_libs__builtin_ops__backend_libs__builtin_ops__type_ctor_info_binary_op_0);
  MR_register_type_ctor_info(&backend_libs__builtin_ops__backend_libs__builtin_ops__type_ctor_info_cmp_op_0);
  MR_register_type_ctor_info(&backend_libs__builtin_ops__backend_libs__builtin_ops__type_ctor_info_float_arith_op_0);
  MR_register_type_ctor_info(&backend_libs__builtin_ops__backend_libs__builtin_ops__type_ctor_info_int_as_uint_cmp_op_0);
  MR_register_type_ctor_info(&backend_libs__builtin_ops__backend_libs__builtin_ops__type_ctor_info_maybe_size_0);
  MR_register_type_ctor_info(&backend_libs__builtin_ops__backend_libs__builtin_ops__type_ctor_info_scalar_array_elem_type_0);
  MR_register_type_ctor_info(&backend_libs__builtin_ops__backend_libs__builtin_ops__type_ctor_info_shift_by_type_0);
  MR_register_type_ctor_info(&backend_libs__builtin_ops__backend_libs__builtin_ops__type_ctor_info_simple_assigned_expr_1);
  MR_register_type_ctor_info(&backend_libs__builtin_ops__backend_libs__builtin_ops__type_ctor_info_simple_code_1);
  MR_register_type_ctor_info(&backend_libs__builtin_ops__backend_libs__builtin_ops__type_ctor_info_simple_const_0);
  MR_register_type_ctor_info(&backend_libs__builtin_ops__backend_libs__builtin_ops__type_ctor_info_simple_test_expr_1);
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

// :- end_module backend_libs.builtin_ops.
