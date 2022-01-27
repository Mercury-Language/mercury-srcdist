/*
** Automatically generated from `elds.m'
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


/* :- module erl_backend.elds. */
/* :- implementation. */

/*
INIT mercury__erl_backend__elds__init
ENDINIT
*/

#include "erl_backend.elds.mih"


#include "analysis.mih"
#include "backend_libs.mih"
#include "check_hlds.mih"
#include "erl_backend.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "backend_libs.rtti.mih"
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




static const MR_FA_PseudoTypeInfo_Struct1 erl_backend__elds__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 erl_backend__elds__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_TypeInfo_Struct1 erl_backend__elds__list__ti_list_1parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0;

static const MR_FA_TypeInfo_Struct1 erl_backend__elds__list__ti_list_1parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0;

static const MR_FA_TypeInfo_Struct1 erl_backend__elds__list__ti_list_1erl_backend__elds__type_ctor_info_elds_defn_0;

static const MR_FA_TypeInfo_Struct1 erl_backend__elds__list__ti_list_1erl_backend__elds__type_ctor_info_elds_foreign_export_defn_0;

static const MR_FA_TypeInfo_Struct1 erl_backend__elds__list__ti_list_1erl_backend__elds__type_ctor_info_elds_rtti_defn_0;

static const MR_FA_TypeInfo_Struct1 erl_backend__elds__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_0_0[9];

static const MR_ConstString erl_backend__elds__erl_backend__elds__field_names_elds_0_0[9];

static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_0_0;

static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_0_0[1];

static const MR_DuPtagLayout erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_0[1];

static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_name_ordered_elds_0[1];

static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_0[1];

static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_0;

static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_1;

static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_2;

static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_3;

static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_4;

static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_5;

static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_6;

static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_7;

static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_8;

static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_9;

static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_10;

static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_11;

static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_12;

static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_13;

static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_14;

static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_15;

static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_16;

static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_17;

static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_18;

static const MR_EnumFunctorDescPtr erl_backend__elds__erl_backend__elds__enum_value_ordered_elds_binop_0[19];

static const MR_EnumFunctorDescPtr erl_backend__elds__erl_backend__elds__enum_name_ordered_elds_binop_0[19];

static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_binop_0[19];

static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_body_0_0[1];

static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_body_0_0;

static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_body_0_1[1];

static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_body_0_1;

static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_body_0_0[1];

static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_body_0_1[1];

static const MR_DuPtagLayout erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_body_0[2];

static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_name_ordered_elds_body_0[2];

static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_body_0[2];

static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_call_target_0_0[1];

static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_call_target_0_0;

static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_call_target_0_1[1];

static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_call_target_0_1;

static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_call_target_0_2[1];

static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_call_target_0_2;

static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_call_target_0_0[1];

static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_call_target_0_1[1];

static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_call_target_0_2[1];

static const MR_DuPtagLayout erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_call_target_0[3];

static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_name_ordered_elds_call_target_0[3];

static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_call_target_0[3];

static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_case_0_0[2];

static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_case_0_0;

static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_case_0_0[1];

static const MR_DuPtagLayout erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_case_0[1];

static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_name_ordered_elds_case_0[1];

static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_case_0[1];

static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_catch_0_0[3];

static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_catch_0_0;

static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_catch_0_0[1];

static const MR_DuPtagLayout erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_catch_0[1];

static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_name_ordered_elds_catch_0[1];

static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_catch_0[1];

static const MR_FA_TypeInfo_Struct1 erl_backend__elds__list__ti_list_1erl_backend__elds__type_ctor_info_elds_term_0;

static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_clause_0_0[2];

static const MR_ConstString erl_backend__elds__erl_backend__elds__field_names_elds_clause_0_0[2];

static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_clause_0_0;

static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_clause_0_0[1];

static const MR_DuPtagLayout erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_clause_0[1];

static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_name_ordered_elds_clause_0[1];

static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_clause_0[1];

static const MR_FA_TypeInfo_Struct1 erl_backend__elds__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 erl_backend__elds__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0;

static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_defn_0_0[4];

static const MR_ConstString erl_backend__elds__erl_backend__elds__field_names_elds_defn_0_0[4];

static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_defn_0_0;

static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_defn_0_0[1];

static const MR_DuPtagLayout erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_defn_0[1];

static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_name_ordered_elds_defn_0[1];

static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_defn_0[1];

static const MR_FA_TypeInfo_Struct1 erl_backend__elds__list__ti_list_1erl_backend__elds__type_ctor_info_elds_expr_0;

static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_0[1];

static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_0;

static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_1[1];

static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_1;

static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_2[2];

static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_2;

static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_3[2];

static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_3;

static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_4[3];

static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_4;

static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_5[2];

static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_5;

static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_6[1];

static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_6;

static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_7[1];

static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_7;

static const MR_FA_TypeInfo_Struct1 erl_backend__elds__list__ti_list_1erl_backend__elds__type_ctor_info_elds_case_0;

static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_8[2];

static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_8;

static const MR_FA_TypeInfo_Struct1 erl_backend__elds__maybe__ti_maybe_1erl_backend__elds__type_ctor_info_elds_catch_0;

static const MR_FA_TypeInfo_Struct1 erl_backend__elds__maybe__ti_maybe_1erl_backend__elds__type_ctor_info_elds_expr_0;

static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_9[4];

static const MR_ConstString erl_backend__elds__erl_backend__elds__field_names_elds_expr_0_9[4];

static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_9;

static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_10[1];

static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_10;

static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_11[2];

static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_11;

static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_12[2];

static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_12;

static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_13[1];

static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_13;

static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_expr_0_0[1];

static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_expr_0_1[1];

static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_expr_0_2[1];

static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_expr_0_3[11];

static const MR_DuPtagLayout erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_expr_0[4];

static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_name_ordered_elds_expr_0[14];

static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_expr_0[14];

static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_foreign_export_defn_0_0[3];

static const MR_ConstString erl_backend__elds__erl_backend__elds__field_names_elds_foreign_export_defn_0_0[3];

static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_foreign_export_defn_0_0;

static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_foreign_export_defn_0_0[1];

static const MR_DuPtagLayout erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_foreign_export_defn_0[1];

static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_name_ordered_elds_foreign_export_defn_0[1];

static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_foreign_export_defn_0[1];

static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_rtti_defn_0_0[4];

static const MR_ConstString erl_backend__elds__erl_backend__elds__field_names_elds_rtti_defn_0_0[4];

static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_rtti_defn_0_0;

static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_rtti_defn_0_0[1];

static const MR_DuPtagLayout erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_rtti_defn_0[1];

static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_name_ordered_elds_rtti_defn_0[1];

static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_rtti_defn_0[1];

static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_rtti_id_0_0[1];

static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_rtti_id_0_0;

static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_rtti_id_0_1[1];

static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_rtti_id_0_1;

static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_rtti_id_0_2[1];

static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_rtti_id_0_2;

static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_rtti_id_0_3[3];

static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_rtti_id_0_3;

static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_rtti_id_0_0[1];

static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_rtti_id_0_1[1];

static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_rtti_id_0_2[1];

static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_rtti_id_0_3[1];

static const MR_DuPtagLayout erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_rtti_id_0[4];

static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_name_ordered_elds_rtti_id_0[4];

static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_rtti_id_0[4];

static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_0[1];

static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_0;

static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_1[1];

static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_1;

static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_2[1];

static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_2;

static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_3[1];

static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_3;

static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_4[1];

static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_4;

static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_5[1];

static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_5;

static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_6[1];

static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_6;

static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_7[1];

static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_7;

static const MR_FA_TypeInfo_Struct1 erl_backend__elds__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_8[1];

static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_8;

static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_9;

static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_10[1];

static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_10;

static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_term_0_0[1];

static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_term_0_1[1];

static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_term_0_2[1];

static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_term_0_3[8];

static const MR_DuPtagLayout erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_term_0[4];

static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_name_ordered_elds_term_0[11];

static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_term_0[11];

static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_unop_0_0;

static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_unop_0_1;

static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_unop_0_2;

static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_unop_0_3;

static const MR_EnumFunctorDescPtr erl_backend__elds__erl_backend__elds__enum_value_ordered_elds_unop_0[4];

static const MR_EnumFunctorDescPtr erl_backend__elds__erl_backend__elds__enum_name_ordered_elds_unop_0[4];

static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_unop_0[4];

static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_0_0_10001(
  MR_Box erl_backend__elds__wrapper_arg_1,
  MR_Box erl_backend__elds__wrapper_arg_2);

static void MR_CALL 
erl_backend__elds____Compare____elds_0_0_10001(
  MR_Box * erl_backend__elds__wrapper_arg_1,
  MR_Box erl_backend__elds__wrapper_arg_2,
  MR_Box erl_backend__elds__wrapper_arg_3);

static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_binop_0_0_10001(
  MR_Box erl_backend__elds__wrapper_arg_1,
  MR_Box erl_backend__elds__wrapper_arg_2);

static void MR_CALL 
erl_backend__elds____Compare____elds_binop_0_0_10001(
  MR_Box * erl_backend__elds__wrapper_arg_1,
  MR_Box erl_backend__elds__wrapper_arg_2,
  MR_Box erl_backend__elds__wrapper_arg_3);

static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_body_0_0_10001(
  MR_Box erl_backend__elds__wrapper_arg_1,
  MR_Box erl_backend__elds__wrapper_arg_2);

static void MR_CALL 
erl_backend__elds____Compare____elds_body_0_0_10001(
  MR_Box * erl_backend__elds__wrapper_arg_1,
  MR_Box erl_backend__elds__wrapper_arg_2,
  MR_Box erl_backend__elds__wrapper_arg_3);

static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_call_target_0_0_10001(
  MR_Box erl_backend__elds__wrapper_arg_1,
  MR_Box erl_backend__elds__wrapper_arg_2);

static void MR_CALL 
erl_backend__elds____Compare____elds_call_target_0_0_10001(
  MR_Box * erl_backend__elds__wrapper_arg_1,
  MR_Box erl_backend__elds__wrapper_arg_2,
  MR_Box erl_backend__elds__wrapper_arg_3);

static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_case_0_0_10001(
  MR_Box erl_backend__elds__wrapper_arg_1,
  MR_Box erl_backend__elds__wrapper_arg_2);

static void MR_CALL 
erl_backend__elds____Compare____elds_case_0_0_10001(
  MR_Box * erl_backend__elds__wrapper_arg_1,
  MR_Box erl_backend__elds__wrapper_arg_2,
  MR_Box erl_backend__elds__wrapper_arg_3);

static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_catch_0_0_10001(
  MR_Box erl_backend__elds__wrapper_arg_1,
  MR_Box erl_backend__elds__wrapper_arg_2);

static void MR_CALL 
erl_backend__elds____Compare____elds_catch_0_0_10001(
  MR_Box * erl_backend__elds__wrapper_arg_1,
  MR_Box erl_backend__elds__wrapper_arg_2,
  MR_Box erl_backend__elds__wrapper_arg_3);

static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_clause_0_0_10001(
  MR_Box erl_backend__elds__wrapper_arg_1,
  MR_Box erl_backend__elds__wrapper_arg_2);

static void MR_CALL 
erl_backend__elds____Compare____elds_clause_0_0_10001(
  MR_Box * erl_backend__elds__wrapper_arg_1,
  MR_Box erl_backend__elds__wrapper_arg_2,
  MR_Box erl_backend__elds__wrapper_arg_3);

static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_defn_0_0_10001(
  MR_Box erl_backend__elds__wrapper_arg_1,
  MR_Box erl_backend__elds__wrapper_arg_2);

static void MR_CALL 
erl_backend__elds____Compare____elds_defn_0_0_10001(
  MR_Box * erl_backend__elds__wrapper_arg_1,
  MR_Box erl_backend__elds__wrapper_arg_2,
  MR_Box erl_backend__elds__wrapper_arg_3);

static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_expr_0_0_10001(
  MR_Box erl_backend__elds__wrapper_arg_1,
  MR_Box erl_backend__elds__wrapper_arg_2);

static void MR_CALL 
erl_backend__elds____Compare____elds_expr_0_0_10001(
  MR_Box * erl_backend__elds__wrapper_arg_1,
  MR_Box erl_backend__elds__wrapper_arg_2,
  MR_Box erl_backend__elds__wrapper_arg_3);

static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_foreign_export_defn_0_0_10001(
  MR_Box erl_backend__elds__wrapper_arg_1,
  MR_Box erl_backend__elds__wrapper_arg_2);

static void MR_CALL 
erl_backend__elds____Compare____elds_foreign_export_defn_0_0_10001(
  MR_Box * erl_backend__elds__wrapper_arg_1,
  MR_Box erl_backend__elds__wrapper_arg_2,
  MR_Box erl_backend__elds__wrapper_arg_3);

static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_rtti_defn_0_0_10001(
  MR_Box erl_backend__elds__wrapper_arg_1,
  MR_Box erl_backend__elds__wrapper_arg_2);

static void MR_CALL 
erl_backend__elds____Compare____elds_rtti_defn_0_0_10001(
  MR_Box * erl_backend__elds__wrapper_arg_1,
  MR_Box erl_backend__elds__wrapper_arg_2,
  MR_Box erl_backend__elds__wrapper_arg_3);

static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_rtti_id_0_0_10001(
  MR_Box erl_backend__elds__wrapper_arg_1,
  MR_Box erl_backend__elds__wrapper_arg_2);

static void MR_CALL 
erl_backend__elds____Compare____elds_rtti_id_0_0_10001(
  MR_Box * erl_backend__elds__wrapper_arg_1,
  MR_Box erl_backend__elds__wrapper_arg_2,
  MR_Box erl_backend__elds__wrapper_arg_3);

static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_term_0_0_10001(
  MR_Box erl_backend__elds__wrapper_arg_1,
  MR_Box erl_backend__elds__wrapper_arg_2);

static void MR_CALL 
erl_backend__elds____Compare____elds_term_0_0_10001(
  MR_Box * erl_backend__elds__wrapper_arg_1,
  MR_Box erl_backend__elds__wrapper_arg_2,
  MR_Box erl_backend__elds__wrapper_arg_3);

static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_unop_0_0_10001(
  MR_Box erl_backend__elds__wrapper_arg_1,
  MR_Box erl_backend__elds__wrapper_arg_2);

static void MR_CALL 
erl_backend__elds____Compare____elds_unop_0_0_10001(
  MR_Box * erl_backend__elds__wrapper_arg_1,
  MR_Box erl_backend__elds__wrapper_arg_2,
  MR_Box erl_backend__elds__wrapper_arg_3);

static MR_Word MR_CALL 
erl_backend__elds__IntroducedFrom__func__exprs_from_fixed_vars__423__1_1_f_0(
  MR_String erl_backend__elds__LambdaHeadVar__1_6);

static MR_Word MR_CALL 
erl_backend__elds__IntroducedFrom__func__terms_from_fixed_vars__421__1_1_f_0(
  MR_String erl_backend__elds__LambdaHeadVar__1_6);

static MR_Box MR_CALL 
erl_backend__elds__exprs_from_fixed_vars_1_f_0_1(
  MR_Box erl_backend__elds__closure_arg,
  MR_Box erl_backend__elds__wrapper_arg_1);

static MR_Box MR_CALL 
erl_backend__elds__terms_from_fixed_vars_1_f_0_1(
  MR_Box erl_backend__elds__closure_arg,
  MR_Box erl_backend__elds__wrapper_arg_1);

static MR_Box MR_CALL 
erl_backend__elds__exprs_from_vars_1_f_0_1(
  MR_Box erl_backend__elds__closure_arg,
  MR_Box erl_backend__elds__wrapper_arg_1);

static MR_Box MR_CALL 
erl_backend__elds__terms_from_vars_1_f_0_1(
  MR_Box erl_backend__elds__closure_arg,
  MR_Box erl_backend__elds__wrapper_arg_1);


static /* final */ const MR_Box erl_backend__elds_scalar_common_1[22][2];

static /* final */ const MR_Box erl_backend__elds_scalar_common_2[5][1];

static /* final */ const MR_Box erl_backend__elds_scalar_common_3[5][3];

static /* final */ const MR_Box erl_backend__elds_scalar_common_4[4][5];




static /* final */ const MR_Box erl_backend__elds_scalar_common_1[22][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_defn_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_foreign_export_defn_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_rtti_defn_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_term_0))
  },
  /* row 9 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 10 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 11 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_case_0))
  },
  /* row 12 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_catch_0))
  },
  /* row 13 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0))
  },
  /* row 14 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_String) "true"))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_String) "false"))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_String) "fail"))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_String) "throw"))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_String) "MERCURY_COMMIT"))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_String) "void"))
  },
};

static /* final */ const MR_Box erl_backend__elds_scalar_common_2[5][1] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &erl_backend__elds_scalar_common_1[20])))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "element"))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) "self"))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &erl_backend__elds_scalar_common_1[16])))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &erl_backend__elds_scalar_common_1[21])))
  },
};

static /* final */ const MR_Box erl_backend__elds_scalar_common_3[5][3] = {
  /* row 0 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (MR_mkword(MR_mktag(2), &erl_backend__elds_scalar_common_2[2]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 1 */
  {
    ((MR_Box) (&erl_backend__elds_scalar_common_4[0])),
    ((MR_Box) (erl_backend__elds__terms_from_vars_1_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&erl_backend__elds_scalar_common_4[1])),
    ((MR_Box) (erl_backend__elds__exprs_from_vars_1_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&erl_backend__elds_scalar_common_4[2])),
    ((MR_Box) (erl_backend__elds__terms_from_fixed_vars_1_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&erl_backend__elds_scalar_common_4[3])),
    ((MR_Box) (erl_backend__elds__exprs_from_fixed_vars_1_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box erl_backend__elds_scalar_common_4[4][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&erl_backend__elds__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_term_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&erl_backend__elds__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_term_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 erl_backend__elds__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 erl_backend__elds__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

static const MR_FA_TypeInfo_Struct1 erl_backend__elds__list__ti_list_1parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0
  }
};

static const MR_FA_TypeInfo_Struct1 erl_backend__elds__list__ti_list_1parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0
  }
};

static const MR_FA_TypeInfo_Struct1 erl_backend__elds__list__ti_list_1erl_backend__elds__type_ctor_info_elds_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_defn_0
  }
};

static const MR_FA_TypeInfo_Struct1 erl_backend__elds__list__ti_list_1erl_backend__elds__type_ctor_info_elds_foreign_export_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_foreign_export_defn_0
  }
};

static const MR_FA_TypeInfo_Struct1 erl_backend__elds__list__ti_list_1erl_backend__elds__type_ctor_info_elds_rtti_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_rtti_defn_0
  }
};

static const MR_FA_TypeInfo_Struct1 erl_backend__elds__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_0_0[9] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__list__ti_list_1parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__list__ti_list_1parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__list__ti_list_1erl_backend__elds__type_ctor_info_elds_defn_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__list__ti_list_1erl_backend__elds__type_ctor_info_elds_foreign_export_defn_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__list__ti_list_1erl_backend__elds__type_ctor_info_elds_rtti_defn_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0
};

static const MR_ConstString erl_backend__elds__erl_backend__elds__field_names_elds_0_0[9] = {
  (MR_String) "elds_name",
  (MR_String) "elds_imports",
  (MR_String) "elds_foreign_decls",
  (MR_String) "elds_foreign_bodies",
  (MR_String) "elds_funcs",
  (MR_String) "elds_fe_funcs",
  (MR_String) "elds_rtti_funcs",
  (MR_String) "elds_init_preds",
  (MR_String) "elds_final_preds"
};

static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_0_0 = {
  (MR_String) "elds",
  (MR_Integer) 9,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  erl_backend__elds__erl_backend__elds__field_types_elds_0_0,
  erl_backend__elds__erl_backend__elds__field_names_elds_0_0,
  NULL,
  NULL
};

static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_0_0[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_0_0
};

static const MR_DuPtagLayout erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_0_0
  }
};

static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_name_ordered_elds_0[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_0_0
};

static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct erl_backend__elds__erl_backend__elds__type_ctor_info_elds_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (erl_backend__elds____Unify____elds_0_0_10001)),
  ((MR_Box) (erl_backend__elds____Compare____elds_0_0_10001)),
  (MR_String) "erl_backend.elds",
  (MR_String) "elds",
  {     erl_backend__elds__erl_backend__elds__du_name_ordered_elds_0 },
  {     erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  erl_backend__elds__erl_backend__elds__functor_number_map_elds_0
};

static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_0 = {
  (MR_String) "mul",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_1 = {
  (MR_String) "float_div",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_2 = {
  (MR_String) "int_div",
  (MR_Integer) 2
};

static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_3 = {
  (MR_String) "rem",
  (MR_Integer) 3
};

static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_4 = {
  (MR_String) "band",
  (MR_Integer) 4
};

static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_5 = {
  (MR_String) "add",
  (MR_Integer) 5
};

static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_6 = {
  (MR_String) "sub",
  (MR_Integer) 6
};

static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_7 = {
  (MR_String) "bor",
  (MR_Integer) 7
};

static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_8 = {
  (MR_String) "bxor",
  (MR_Integer) 8
};

static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_9 = {
  (MR_String) "bsl",
  (MR_Integer) 9
};

static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_10 = {
  (MR_String) "bsr",
  (MR_Integer) 10
};

static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_11 = {
  (MR_String) "=<",
  (MR_Integer) 11
};

static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_12 = {
  (MR_String) "<",
  (MR_Integer) 12
};

static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_13 = {
  (MR_String) ">=",
  (MR_Integer) 13
};

static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_14 = {
  (MR_String) ">",
  (MR_Integer) 14
};

static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_15 = {
  (MR_String) "=:=",
  (MR_Integer) 15
};

static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_16 = {
  (MR_String) "=/=",
  (MR_Integer) 16
};

static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_17 = {
  (MR_String) "andalso",
  (MR_Integer) 17
};

static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_18 = {
  (MR_String) "orelse",
  (MR_Integer) 18
};

static const MR_EnumFunctorDescPtr erl_backend__elds__erl_backend__elds__enum_value_ordered_elds_binop_0[19] = {
  &erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_0,
  &erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_1,
  &erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_2,
  &erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_3,
  &erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_4,
  &erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_5,
  &erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_6,
  &erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_7,
  &erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_8,
  &erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_9,
  &erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_10,
  &erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_11,
  &erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_12,
  &erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_13,
  &erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_14,
  &erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_15,
  &erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_16,
  &erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_17,
  &erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_18
};

static const MR_EnumFunctorDescPtr erl_backend__elds__erl_backend__elds__enum_name_ordered_elds_binop_0[19] = {
  &erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_12,
  &erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_16,
  &erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_15,
  &erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_11,
  &erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_14,
  &erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_13,
  &erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_5,
  &erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_17,
  &erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_4,
  &erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_7,
  &erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_9,
  &erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_10,
  &erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_8,
  &erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_1,
  &erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_2,
  &erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_0,
  &erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_18,
  &erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_3,
  &erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_binop_0_6
};

static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_binop_0[19] = {
  (MR_Integer) 15,
  (MR_Integer) 13,
  (MR_Integer) 14,
  (MR_Integer) 17,
  (MR_Integer) 8,
  (MR_Integer) 6,
  (MR_Integer) 18,
  (MR_Integer) 9,
  (MR_Integer) 12,
  (MR_Integer) 10,
  (MR_Integer) 11,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 5,
  (MR_Integer) 4,
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 7,
  (MR_Integer) 16
};

const MR_TypeCtorInfo_Struct erl_backend__elds__erl_backend__elds__type_ctor_info_elds_binop_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (erl_backend__elds____Unify____elds_binop_0_0_10001)),
  ((MR_Box) (erl_backend__elds____Compare____elds_binop_0_0_10001)),
  (MR_String) "erl_backend.elds",
  (MR_String) "elds_binop",
  {     erl_backend__elds__erl_backend__elds__enum_name_ordered_elds_binop_0 },
  {     erl_backend__elds__erl_backend__elds__enum_value_ordered_elds_binop_0 },
  (MR_Integer) 19,
  (MR_Integer) 4,
  erl_backend__elds__erl_backend__elds__functor_number_map_elds_binop_0
};

static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_body_0_0[1] = {
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_clause_0
};

static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_body_0_0 = {
  (MR_String) "body_defined_here",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE_DIRECT_ARG,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  erl_backend__elds__erl_backend__elds__field_types_elds_body_0_0,
  NULL,
  NULL,
  NULL
};

static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_body_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_body_0_1 = {
  (MR_String) "body_external",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  erl_backend__elds__erl_backend__elds__field_types_elds_body_0_1,
  NULL,
  NULL,
  NULL
};

static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_body_0_0[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_body_0_0
};

static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_body_0_1[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_body_0_1
};

static const MR_DuPtagLayout erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_body_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE_DIRECT_ARG,
    erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_body_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_body_0_1
  }
};

static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_name_ordered_elds_body_0[2] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_body_0_0,
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_body_0_1
};

static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_body_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct erl_backend__elds__erl_backend__elds__type_ctor_info_elds_body_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (erl_backend__elds____Unify____elds_body_0_0_10001)),
  ((MR_Box) (erl_backend__elds____Compare____elds_body_0_0_10001)),
  (MR_String) "erl_backend.elds",
  (MR_String) "elds_body",
  {     erl_backend__elds__erl_backend__elds__du_name_ordered_elds_body_0 },
  {     erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_body_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  erl_backend__elds__erl_backend__elds__functor_number_map_elds_body_0
};

static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_call_target_0_0[1] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
};

static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_call_target_0_0 = {
  (MR_String) "elds_call_plain",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  erl_backend__elds__erl_backend__elds__field_types_elds_call_target_0_0,
  NULL,
  NULL,
  NULL
};

static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_call_target_0_1[1] = {
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0
};

static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_call_target_0_1 = {
  (MR_String) "elds_call_ho",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  erl_backend__elds__erl_backend__elds__field_types_elds_call_target_0_1,
  NULL,
  NULL,
  NULL
};

static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_call_target_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_call_target_0_2 = {
  (MR_String) "elds_call_builtin",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  erl_backend__elds__erl_backend__elds__field_types_elds_call_target_0_2,
  NULL,
  NULL,
  NULL
};

static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_call_target_0_0[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_call_target_0_0
};

static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_call_target_0_1[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_call_target_0_1
};

static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_call_target_0_2[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_call_target_0_2
};

static const MR_DuPtagLayout erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_call_target_0[3] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_call_target_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_call_target_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_call_target_0_2
  }
};

static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_name_ordered_elds_call_target_0[3] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_call_target_0_2,
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_call_target_0_1,
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_call_target_0_0
};

static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_call_target_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct erl_backend__elds__erl_backend__elds__type_ctor_info_elds_call_target_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 3,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (erl_backend__elds____Unify____elds_call_target_0_0_10001)),
  ((MR_Box) (erl_backend__elds____Compare____elds_call_target_0_0_10001)),
  (MR_String) "erl_backend.elds",
  (MR_String) "elds_call_target",
  {     erl_backend__elds__erl_backend__elds__du_name_ordered_elds_call_target_0 },
  {     erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_call_target_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  erl_backend__elds__erl_backend__elds__functor_number_map_elds_call_target_0
};

static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_case_0_0[2] = {
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_term_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0
};

static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_case_0_0 = {
  (MR_String) "elds_case",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  erl_backend__elds__erl_backend__elds__field_types_elds_case_0_0,
  NULL,
  NULL,
  NULL
};

static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_case_0_0[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_case_0_0
};

static const MR_DuPtagLayout erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_case_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_case_0_0
  }
};

static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_name_ordered_elds_case_0[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_case_0_0
};

static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_case_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct erl_backend__elds__erl_backend__elds__type_ctor_info_elds_case_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (erl_backend__elds____Unify____elds_case_0_0_10001)),
  ((MR_Box) (erl_backend__elds____Compare____elds_case_0_0_10001)),
  (MR_String) "erl_backend.elds",
  (MR_String) "elds_case",
  {     erl_backend__elds__erl_backend__elds__du_name_ordered_elds_case_0 },
  {     erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_case_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  erl_backend__elds__erl_backend__elds__functor_number_map_elds_case_0
};

static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_catch_0_0[3] = {
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_term_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_term_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0
};

static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_catch_0_0 = {
  (MR_String) "elds_catch",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  erl_backend__elds__erl_backend__elds__field_types_elds_catch_0_0,
  NULL,
  NULL,
  NULL
};

static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_catch_0_0[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_catch_0_0
};

static const MR_DuPtagLayout erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_catch_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_catch_0_0
  }
};

static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_name_ordered_elds_catch_0[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_catch_0_0
};

static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_catch_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct erl_backend__elds__erl_backend__elds__type_ctor_info_elds_catch_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (erl_backend__elds____Unify____elds_catch_0_0_10001)),
  ((MR_Box) (erl_backend__elds____Compare____elds_catch_0_0_10001)),
  (MR_String) "erl_backend.elds",
  (MR_String) "elds_catch",
  {     erl_backend__elds__erl_backend__elds__du_name_ordered_elds_catch_0 },
  {     erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_catch_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  erl_backend__elds__erl_backend__elds__functor_number_map_elds_catch_0
};

static const MR_FA_TypeInfo_Struct1 erl_backend__elds__list__ti_list_1erl_backend__elds__type_ctor_info_elds_term_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_term_0
  }
};

static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_clause_0_0[2] = {
  (MR_PseudoTypeInfo) &erl_backend__elds__list__ti_list_1erl_backend__elds__type_ctor_info_elds_term_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0
};

static const MR_ConstString erl_backend__elds__erl_backend__elds__field_names_elds_clause_0_0[2] = {
  (MR_String) "clause_pattern",
  (MR_String) "clause_expr"
};

static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_clause_0_0 = {
  (MR_String) "elds_clause",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  erl_backend__elds__erl_backend__elds__field_types_elds_clause_0_0,
  erl_backend__elds__erl_backend__elds__field_names_elds_clause_0_0,
  NULL,
  NULL
};

static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_clause_0_0[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_clause_0_0
};

static const MR_DuPtagLayout erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_clause_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_clause_0_0
  }
};

static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_name_ordered_elds_clause_0[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_clause_0_0
};

static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_clause_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct erl_backend__elds__erl_backend__elds__type_ctor_info_elds_clause_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (erl_backend__elds____Unify____elds_clause_0_0_10001)),
  ((MR_Box) (erl_backend__elds____Compare____elds_clause_0_0_10001)),
  (MR_String) "erl_backend.elds",
  (MR_String) "elds_clause",
  {     erl_backend__elds__erl_backend__elds__du_name_ordered_elds_clause_0 },
  {     erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_clause_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  erl_backend__elds__erl_backend__elds__functor_number_map_elds_clause_0
};

static const MR_FA_TypeInfo_Struct1 erl_backend__elds__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 erl_backend__elds__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_defn_0_0[4] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_body_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0
};

static const MR_ConstString erl_backend__elds__erl_backend__elds__field_names_elds_defn_0_0[4] = {
  (MR_String) "defn_proc_id",
  (MR_String) "defn_varset",
  (MR_String) "defn_body",
  (MR_String) "defn_env_vars"
};

static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_defn_0_0 = {
  (MR_String) "elds_defn",
  (MR_Integer) 4,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  erl_backend__elds__erl_backend__elds__field_types_elds_defn_0_0,
  erl_backend__elds__erl_backend__elds__field_names_elds_defn_0_0,
  NULL,
  NULL
};

static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_defn_0_0[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_defn_0_0
};

static const MR_DuPtagLayout erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_defn_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_defn_0_0
  }
};

static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_name_ordered_elds_defn_0[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_defn_0_0
};

static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_defn_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct erl_backend__elds__erl_backend__elds__type_ctor_info_elds_defn_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (erl_backend__elds____Unify____elds_defn_0_0_10001)),
  ((MR_Box) (erl_backend__elds____Compare____elds_defn_0_0_10001)),
  (MR_String) "erl_backend.elds",
  (MR_String) "elds_defn",
  {     erl_backend__elds__erl_backend__elds__du_name_ordered_elds_defn_0 },
  {     erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_defn_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  erl_backend__elds__erl_backend__elds__functor_number_map_elds_defn_0
};

static const MR_FA_TypeInfo_Struct1 erl_backend__elds__list__ti_list_1erl_backend__elds__type_ctor_info_elds_expr_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0
  }
};

static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_0[1] = {
  (MR_PseudoTypeInfo) &erl_backend__elds__list__ti_list_1erl_backend__elds__type_ctor_info_elds_expr_0
};

static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_0 = {
  (MR_String) "elds_block",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_0,
  NULL,
  NULL,
  NULL
};

static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_1[1] = {
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_term_0
};

static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_1 = {
  (MR_String) "elds_term",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 1,
  erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_1,
  NULL,
  NULL,
  NULL
};

static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_2[2] = {
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0
};

static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_2 = {
  (MR_String) "elds_eq",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 2,
  erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_2,
  NULL,
  NULL,
  NULL
};

static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_3[2] = {
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_unop_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0
};

static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_3 = {
  (MR_String) "elds_unop",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 3,
  erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_3,
  NULL,
  NULL,
  NULL
};

static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_4[3] = {
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_binop_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0
};

static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_4 = {
  (MR_String) "elds_binop",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 4,
  erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_4,
  NULL,
  NULL,
  NULL
};

static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_5[2] = {
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_call_target_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__list__ti_list_1erl_backend__elds__type_ctor_info_elds_expr_0
};

static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_5 = {
  (MR_String) "elds_call",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 3,
  (MR_Integer) 5,
  erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_5,
  NULL,
  NULL,
  NULL
};

static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_6[1] = {
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_rtti_id_0
};

static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_6 = {
  (MR_String) "elds_rtti_ref",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 4,
  (MR_Integer) 6,
  erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_6,
  NULL,
  NULL,
  NULL
};

static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_7[1] = {
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_clause_0
};

static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_7 = {
  (MR_String) "elds_fun",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE_DIRECT_ARG,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 7,
  erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_7,
  NULL,
  NULL,
  NULL
};

static const MR_FA_TypeInfo_Struct1 erl_backend__elds__list__ti_list_1erl_backend__elds__type_ctor_info_elds_case_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_case_0
  }
};

static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_8[2] = {
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__list__ti_list_1erl_backend__elds__type_ctor_info_elds_case_0
};

static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_8 = {
  (MR_String) "elds_case_expr",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 5,
  (MR_Integer) 8,
  erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_8,
  NULL,
  NULL,
  NULL
};

static const MR_FA_TypeInfo_Struct1 erl_backend__elds__maybe__ti_maybe_1erl_backend__elds__type_ctor_info_elds_catch_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_catch_0
  }
};

static const MR_FA_TypeInfo_Struct1 erl_backend__elds__maybe__ti_maybe_1erl_backend__elds__type_ctor_info_elds_expr_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0
  }
};

static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_9[4] = {
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__list__ti_list_1erl_backend__elds__type_ctor_info_elds_case_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__maybe__ti_maybe_1erl_backend__elds__type_ctor_info_elds_catch_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__maybe__ti_maybe_1erl_backend__elds__type_ctor_info_elds_expr_0
};

static const MR_ConstString erl_backend__elds__erl_backend__elds__field_names_elds_expr_0_9[4] = {
  (MR_String) "try_expr",
  (MR_String) "try_cases",
  (MR_String) "try_catch",
  (MR_String) "try_after"
};

static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_9 = {
  (MR_String) "elds_try",
  (MR_Integer) 4,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 6,
  (MR_Integer) 9,
  erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_9,
  erl_backend__elds__erl_backend__elds__field_names_elds_expr_0_9,
  NULL,
  NULL
};

static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_10[1] = {
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0
};

static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_10 = {
  (MR_String) "elds_throw",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 7,
  (MR_Integer) 10,
  erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_10,
  NULL,
  NULL,
  NULL
};

static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_11[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0
};

static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_11 = {
  (MR_String) "elds_foreign_code",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 8,
  (MR_Integer) 11,
  erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_11,
  NULL,
  NULL,
  NULL
};

static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_12[2] = {
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0
};

static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_12 = {
  (MR_String) "elds_send",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 9,
  (MR_Integer) 12,
  erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_12,
  NULL,
  NULL,
  NULL
};

static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_13[1] = {
  (MR_PseudoTypeInfo) &erl_backend__elds__list__ti_list_1erl_backend__elds__type_ctor_info_elds_case_0
};

static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_13 = {
  (MR_String) "elds_receive",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 10,
  (MR_Integer) 13,
  erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_13,
  NULL,
  NULL,
  NULL
};

static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_expr_0_0[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_7
};

static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_expr_0_1[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_0
};

static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_expr_0_2[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_1
};

static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_expr_0_3[11] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_2,
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_3,
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_4,
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_5,
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_6,
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_8,
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_9,
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_10,
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_11,
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_12,
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_13
};

static const MR_DuPtagLayout erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_expr_0[4] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE_DIRECT_ARG,
    erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_expr_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_expr_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_expr_0_2
  },
  {
    (MR_Integer) 11,
    mercury__private_builtin__MR_SECTAG_REMOTE,
    erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_expr_0_3
  }
};

static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_name_ordered_elds_expr_0[14] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_4,
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_0,
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_5,
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_8,
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_2,
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_11,
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_7,
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_13,
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_6,
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_12,
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_1,
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_10,
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_9,
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_3
};

static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_expr_0[14] = {
  (MR_Integer) 1,
  (MR_Integer) 10,
  (MR_Integer) 4,
  (MR_Integer) 13,
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 8,
  (MR_Integer) 6,
  (MR_Integer) 3,
  (MR_Integer) 12,
  (MR_Integer) 11,
  (MR_Integer) 5,
  (MR_Integer) 9,
  (MR_Integer) 7
};

const MR_TypeCtorInfo_Struct erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (erl_backend__elds____Unify____elds_expr_0_0_10001)),
  ((MR_Box) (erl_backend__elds____Compare____elds_expr_0_0_10001)),
  (MR_String) "erl_backend.elds",
  (MR_String) "elds_expr",
  {     erl_backend__elds__erl_backend__elds__du_name_ordered_elds_expr_0 },
  {     erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_expr_0 },
  (MR_Integer) 14,
  (MR_Integer) 4,
  erl_backend__elds__erl_backend__elds__functor_number_map_elds_expr_0
};

static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_foreign_export_defn_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_clause_0
};

static const MR_ConstString erl_backend__elds__erl_backend__elds__field_names_elds_foreign_export_defn_0_0[3] = {
  (MR_String) "fe_defn_name",
  (MR_String) "fe_defn_varset",
  (MR_String) "fe_defn_clause"
};

static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_foreign_export_defn_0_0 = {
  (MR_String) "elds_foreign_export_defn",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  erl_backend__elds__erl_backend__elds__field_types_elds_foreign_export_defn_0_0,
  erl_backend__elds__erl_backend__elds__field_names_elds_foreign_export_defn_0_0,
  NULL,
  NULL
};

static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_foreign_export_defn_0_0[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_foreign_export_defn_0_0
};

static const MR_DuPtagLayout erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_foreign_export_defn_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_foreign_export_defn_0_0
  }
};

static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_name_ordered_elds_foreign_export_defn_0[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_foreign_export_defn_0_0
};

static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_foreign_export_defn_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct erl_backend__elds__erl_backend__elds__type_ctor_info_elds_foreign_export_defn_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (erl_backend__elds____Unify____elds_foreign_export_defn_0_0_10001)),
  ((MR_Box) (erl_backend__elds____Compare____elds_foreign_export_defn_0_0_10001)),
  (MR_String) "erl_backend.elds",
  (MR_String) "elds_foreign_export_defn",
  {     erl_backend__elds__erl_backend__elds__du_name_ordered_elds_foreign_export_defn_0 },
  {     erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_foreign_export_defn_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  erl_backend__elds__erl_backend__elds__functor_number_map_elds_foreign_export_defn_0
};

static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_rtti_defn_0_0[4] = {
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_rtti_id_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_clause_0
};

static const MR_ConstString erl_backend__elds__erl_backend__elds__field_names_elds_rtti_defn_0_0[4] = {
  (MR_String) "rtti_defn_id",
  (MR_String) "rtti_defn_exported",
  (MR_String) "rtti_defn_varset",
  (MR_String) "rtti_defn_clause"
};

static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_rtti_defn_0_0 = {
  (MR_String) "elds_rtti_defn",
  (MR_Integer) 4,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  erl_backend__elds__erl_backend__elds__field_types_elds_rtti_defn_0_0,
  erl_backend__elds__erl_backend__elds__field_names_elds_rtti_defn_0_0,
  NULL,
  NULL
};

static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_rtti_defn_0_0[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_rtti_defn_0_0
};

static const MR_DuPtagLayout erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_rtti_defn_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_rtti_defn_0_0
  }
};

static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_name_ordered_elds_rtti_defn_0[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_rtti_defn_0_0
};

static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_rtti_defn_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct erl_backend__elds__erl_backend__elds__type_ctor_info_elds_rtti_defn_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (erl_backend__elds____Unify____elds_rtti_defn_0_0_10001)),
  ((MR_Box) (erl_backend__elds____Compare____elds_rtti_defn_0_0_10001)),
  (MR_String) "erl_backend.elds",
  (MR_String) "elds_rtti_defn",
  {     erl_backend__elds__erl_backend__elds__du_name_ordered_elds_rtti_defn_0 },
  {     erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_rtti_defn_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  erl_backend__elds__erl_backend__elds__functor_number_map_elds_rtti_defn_0
};

static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_rtti_id_0_0[1] = {
  (MR_PseudoTypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_type_ctor_0
};

static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_rtti_id_0_0 = {
  (MR_String) "elds_rtti_type_ctor_id",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  erl_backend__elds__erl_backend__elds__field_types_elds_rtti_id_0_0,
  NULL,
  NULL,
  NULL
};

static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_rtti_id_0_1[1] = {
  (MR_PseudoTypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_type_info_0
};

static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_rtti_id_0_1 = {
  (MR_String) "elds_rtti_type_info_id",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  erl_backend__elds__erl_backend__elds__field_types_elds_rtti_id_0_1,
  NULL,
  NULL,
  NULL
};

static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_rtti_id_0_2[1] = {
  (MR_PseudoTypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_pseudo_type_info_0
};

static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_rtti_id_0_2 = {
  (MR_String) "elds_rtti_pseudo_type_info_id",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  erl_backend__elds__erl_backend__elds__field_types_elds_rtti_id_0_2,
  NULL,
  NULL,
  NULL
};

static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_rtti_id_0_3[3] = {
  (MR_PseudoTypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_tc_name_0,
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_rtti_id_0_3 = {
  (MR_String) "elds_rtti_base_typeclass_id",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 3,
  (MR_Integer) -1,
  (MR_Integer) 3,
  erl_backend__elds__erl_backend__elds__field_types_elds_rtti_id_0_3,
  NULL,
  NULL,
  NULL
};

static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_rtti_id_0_0[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_rtti_id_0_0
};

static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_rtti_id_0_1[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_rtti_id_0_1
};

static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_rtti_id_0_2[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_rtti_id_0_2
};

static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_rtti_id_0_3[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_rtti_id_0_3
};

static const MR_DuPtagLayout erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_rtti_id_0[4] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_rtti_id_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_rtti_id_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_rtti_id_0_2
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_rtti_id_0_3
  }
};

static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_name_ordered_elds_rtti_id_0[4] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_rtti_id_0_3,
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_rtti_id_0_2,
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_rtti_id_0_0,
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_rtti_id_0_1
};

static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_rtti_id_0[4] = {
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct erl_backend__elds__erl_backend__elds__type_ctor_info_elds_rtti_id_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (erl_backend__elds____Unify____elds_rtti_id_0_0_10001)),
  ((MR_Box) (erl_backend__elds____Compare____elds_rtti_id_0_0_10001)),
  (MR_String) "erl_backend.elds",
  (MR_String) "elds_rtti_id",
  {     erl_backend__elds__erl_backend__elds__du_name_ordered_elds_rtti_id_0 },
  {     erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_rtti_id_0 },
  (MR_Integer) 4,
  (MR_Integer) 4,
  erl_backend__elds__erl_backend__elds__functor_number_map_elds_rtti_id_0
};

static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_character_0
};

static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_0 = {
  (MR_String) "elds_char",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  erl_backend__elds__erl_backend__elds__field_types_elds_term_0_0,
  NULL,
  NULL,
  NULL
};

static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_1 = {
  (MR_String) "elds_int",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 1,
  erl_backend__elds__erl_backend__elds__field_types_elds_term_0_1,
  NULL,
  NULL,
  NULL
};

static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0
};

static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_2 = {
  (MR_String) "elds_float",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 2,
  erl_backend__elds__erl_backend__elds__field_types_elds_term_0_2,
  NULL,
  NULL,
  NULL
};

static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_3[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_3 = {
  (MR_String) "elds_binary",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 3,
  erl_backend__elds__erl_backend__elds__field_types_elds_term_0_3,
  NULL,
  NULL,
  NULL
};

static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_4[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_4 = {
  (MR_String) "elds_list_of_ints",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 4,
  erl_backend__elds__erl_backend__elds__field_types_elds_term_0_4,
  NULL,
  NULL,
  NULL
};

static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_5[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_5 = {
  (MR_String) "elds_atom_raw",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 3,
  (MR_Integer) 5,
  erl_backend__elds__erl_backend__elds__field_types_elds_term_0_5,
  NULL,
  NULL,
  NULL
};

static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_6[1] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
};

static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_6 = {
  (MR_String) "elds_atom",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 4,
  (MR_Integer) 6,
  erl_backend__elds__erl_backend__elds__field_types_elds_term_0_6,
  NULL,
  NULL,
  NULL
};

static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_7[1] = {
  (MR_PseudoTypeInfo) &erl_backend__elds__list__ti_list_1erl_backend__elds__type_ctor_info_elds_expr_0
};

static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_7 = {
  (MR_String) "elds_tuple",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 5,
  (MR_Integer) 7,
  erl_backend__elds__erl_backend__elds__field_types_elds_term_0_7,
  NULL,
  NULL,
  NULL
};

static const MR_FA_TypeInfo_Struct1 erl_backend__elds__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_8[1] = {
  (MR_PseudoTypeInfo) &erl_backend__elds__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_8 = {
  (MR_String) "elds_var",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 6,
  (MR_Integer) 8,
  erl_backend__elds__erl_backend__elds__field_types_elds_term_0_8,
  NULL,
  NULL,
  NULL
};

static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_9 = {
  (MR_String) "elds_anon_var",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 9,
  NULL,
  NULL,
  NULL,
  NULL
};

static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_10[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_10 = {
  (MR_String) "elds_fixed_name_var",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 7,
  (MR_Integer) 10,
  erl_backend__elds__erl_backend__elds__field_types_elds_term_0_10,
  NULL,
  NULL,
  NULL
};

static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_term_0_0[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_9
};

static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_term_0_1[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_0
};

static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_term_0_2[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_1
};

static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_term_0_3[8] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_2,
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_3,
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_4,
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_5,
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_6,
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_7,
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_8,
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_10
};

static const MR_DuPtagLayout erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_term_0[4] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_term_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_term_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_term_0_2
  },
  {
    (MR_Integer) 8,
    mercury__private_builtin__MR_SECTAG_REMOTE,
    erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_term_0_3
  }
};

static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_name_ordered_elds_term_0[11] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_9,
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_6,
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_5,
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_3,
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_0,
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_10,
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_2,
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_1,
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_4,
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_7,
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_8
};

static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_term_0[11] = {
  (MR_Integer) 4,
  (MR_Integer) 7,
  (MR_Integer) 6,
  (MR_Integer) 3,
  (MR_Integer) 8,
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 9,
  (MR_Integer) 10,
  (MR_Integer) 0,
  (MR_Integer) 5
};

const MR_TypeCtorInfo_Struct erl_backend__elds__erl_backend__elds__type_ctor_info_elds_term_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (erl_backend__elds____Unify____elds_term_0_0_10001)),
  ((MR_Box) (erl_backend__elds____Compare____elds_term_0_0_10001)),
  (MR_String) "erl_backend.elds",
  (MR_String) "elds_term",
  {     erl_backend__elds__erl_backend__elds__du_name_ordered_elds_term_0 },
  {     erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_term_0 },
  (MR_Integer) 11,
  (MR_Integer) 4,
  erl_backend__elds__erl_backend__elds__functor_number_map_elds_term_0
};

static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_unop_0_0 = {
  (MR_String) "plus",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_unop_0_1 = {
  (MR_String) "minus",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_unop_0_2 = {
  (MR_String) "bnot",
  (MR_Integer) 2
};

static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_unop_0_3 = {
  (MR_String) "logical_not",
  (MR_Integer) 3
};

static const MR_EnumFunctorDescPtr erl_backend__elds__erl_backend__elds__enum_value_ordered_elds_unop_0[4] = {
  &erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_unop_0_0,
  &erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_unop_0_1,
  &erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_unop_0_2,
  &erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_unop_0_3
};

static const MR_EnumFunctorDescPtr erl_backend__elds__erl_backend__elds__enum_name_ordered_elds_unop_0[4] = {
  &erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_unop_0_2,
  &erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_unop_0_3,
  &erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_unop_0_1,
  &erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_unop_0_0
};

static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_unop_0[4] = {
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct erl_backend__elds__erl_backend__elds__type_ctor_info_elds_unop_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (erl_backend__elds____Unify____elds_unop_0_0_10001)),
  ((MR_Box) (erl_backend__elds____Compare____elds_unop_0_0_10001)),
  (MR_String) "erl_backend.elds",
  (MR_String) "elds_unop",
  {     erl_backend__elds__erl_backend__elds__enum_name_ordered_elds_unop_0 },
  {     erl_backend__elds__erl_backend__elds__enum_value_ordered_elds_unop_0 },
  (MR_Integer) 4,
  (MR_Integer) 4,
  erl_backend__elds__erl_backend__elds__functor_number_map_elds_unop_0
};

static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_0_0_10001(
  MR_Box erl_backend__elds__wrapper_arg_1,
  MR_Box erl_backend__elds__wrapper_arg_2)
{
  {
    MR_bool erl_backend__elds__succeeded;

    {
      erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_0_0(((MR_Word) erl_backend__elds__wrapper_arg_1), ((MR_Word) erl_backend__elds__wrapper_arg_2));
    }
    return erl_backend__elds__succeeded;
  }
}

static void MR_CALL 
erl_backend__elds____Compare____elds_0_0_10001(
  MR_Box * erl_backend__elds__wrapper_arg_1,
  MR_Box erl_backend__elds__wrapper_arg_2,
  MR_Box erl_backend__elds__wrapper_arg_3)
{
  {
    MR_Word erl_backend__elds__conv0_HeadVar__1_1;

    {
      erl_backend__elds____Compare____elds_0_0(&erl_backend__elds__conv0_HeadVar__1_1, ((MR_Word) erl_backend__elds__wrapper_arg_2), ((MR_Word) erl_backend__elds__wrapper_arg_3));
    }
    *erl_backend__elds__wrapper_arg_1 = ((MR_Box) (erl_backend__elds__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_binop_0_0_10001(
  MR_Box erl_backend__elds__wrapper_arg_1,
  MR_Box erl_backend__elds__wrapper_arg_2)
{
  {
    MR_bool erl_backend__elds__succeeded;

    {
      erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_binop_0_0(((MR_Word) erl_backend__elds__wrapper_arg_1), ((MR_Word) erl_backend__elds__wrapper_arg_2));
    }
    return erl_backend__elds__succeeded;
  }
}

static void MR_CALL 
erl_backend__elds____Compare____elds_binop_0_0_10001(
  MR_Box * erl_backend__elds__wrapper_arg_1,
  MR_Box erl_backend__elds__wrapper_arg_2,
  MR_Box erl_backend__elds__wrapper_arg_3)
{
  {
    MR_Word erl_backend__elds__conv0_HeadVar__1_1;

    {
      erl_backend__elds____Compare____elds_binop_0_0(&erl_backend__elds__conv0_HeadVar__1_1, ((MR_Word) erl_backend__elds__wrapper_arg_2), ((MR_Word) erl_backend__elds__wrapper_arg_3));
    }
    *erl_backend__elds__wrapper_arg_1 = ((MR_Box) (erl_backend__elds__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_body_0_0_10001(
  MR_Box erl_backend__elds__wrapper_arg_1,
  MR_Box erl_backend__elds__wrapper_arg_2)
{
  {
    MR_bool erl_backend__elds__succeeded;

    {
      erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_body_0_0(((MR_Word) erl_backend__elds__wrapper_arg_1), ((MR_Word) erl_backend__elds__wrapper_arg_2));
    }
    return erl_backend__elds__succeeded;
  }
}

static void MR_CALL 
erl_backend__elds____Compare____elds_body_0_0_10001(
  MR_Box * erl_backend__elds__wrapper_arg_1,
  MR_Box erl_backend__elds__wrapper_arg_2,
  MR_Box erl_backend__elds__wrapper_arg_3)
{
  {
    MR_Word erl_backend__elds__conv0_HeadVar__1_1;

    {
      erl_backend__elds____Compare____elds_body_0_0(&erl_backend__elds__conv0_HeadVar__1_1, ((MR_Word) erl_backend__elds__wrapper_arg_2), ((MR_Word) erl_backend__elds__wrapper_arg_3));
    }
    *erl_backend__elds__wrapper_arg_1 = ((MR_Box) (erl_backend__elds__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_call_target_0_0_10001(
  MR_Box erl_backend__elds__wrapper_arg_1,
  MR_Box erl_backend__elds__wrapper_arg_2)
{
  {
    MR_bool erl_backend__elds__succeeded;

    {
      erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_call_target_0_0(((MR_Word) erl_backend__elds__wrapper_arg_1), ((MR_Word) erl_backend__elds__wrapper_arg_2));
    }
    return erl_backend__elds__succeeded;
  }
}

static void MR_CALL 
erl_backend__elds____Compare____elds_call_target_0_0_10001(
  MR_Box * erl_backend__elds__wrapper_arg_1,
  MR_Box erl_backend__elds__wrapper_arg_2,
  MR_Box erl_backend__elds__wrapper_arg_3)
{
  {
    MR_Word erl_backend__elds__conv0_HeadVar__1_1;

    {
      erl_backend__elds____Compare____elds_call_target_0_0(&erl_backend__elds__conv0_HeadVar__1_1, ((MR_Word) erl_backend__elds__wrapper_arg_2), ((MR_Word) erl_backend__elds__wrapper_arg_3));
    }
    *erl_backend__elds__wrapper_arg_1 = ((MR_Box) (erl_backend__elds__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_case_0_0_10001(
  MR_Box erl_backend__elds__wrapper_arg_1,
  MR_Box erl_backend__elds__wrapper_arg_2)
{
  {
    MR_bool erl_backend__elds__succeeded;

    {
      erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_case_0_0(((MR_Word) erl_backend__elds__wrapper_arg_1), ((MR_Word) erl_backend__elds__wrapper_arg_2));
    }
    return erl_backend__elds__succeeded;
  }
}

static void MR_CALL 
erl_backend__elds____Compare____elds_case_0_0_10001(
  MR_Box * erl_backend__elds__wrapper_arg_1,
  MR_Box erl_backend__elds__wrapper_arg_2,
  MR_Box erl_backend__elds__wrapper_arg_3)
{
  {
    MR_Word erl_backend__elds__conv0_HeadVar__1_1;

    {
      erl_backend__elds____Compare____elds_case_0_0(&erl_backend__elds__conv0_HeadVar__1_1, ((MR_Word) erl_backend__elds__wrapper_arg_2), ((MR_Word) erl_backend__elds__wrapper_arg_3));
    }
    *erl_backend__elds__wrapper_arg_1 = ((MR_Box) (erl_backend__elds__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_catch_0_0_10001(
  MR_Box erl_backend__elds__wrapper_arg_1,
  MR_Box erl_backend__elds__wrapper_arg_2)
{
  {
    MR_bool erl_backend__elds__succeeded;

    {
      erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_catch_0_0(((MR_Word) erl_backend__elds__wrapper_arg_1), ((MR_Word) erl_backend__elds__wrapper_arg_2));
    }
    return erl_backend__elds__succeeded;
  }
}

static void MR_CALL 
erl_backend__elds____Compare____elds_catch_0_0_10001(
  MR_Box * erl_backend__elds__wrapper_arg_1,
  MR_Box erl_backend__elds__wrapper_arg_2,
  MR_Box erl_backend__elds__wrapper_arg_3)
{
  {
    MR_Word erl_backend__elds__conv0_HeadVar__1_1;

    {
      erl_backend__elds____Compare____elds_catch_0_0(&erl_backend__elds__conv0_HeadVar__1_1, ((MR_Word) erl_backend__elds__wrapper_arg_2), ((MR_Word) erl_backend__elds__wrapper_arg_3));
    }
    *erl_backend__elds__wrapper_arg_1 = ((MR_Box) (erl_backend__elds__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_clause_0_0_10001(
  MR_Box erl_backend__elds__wrapper_arg_1,
  MR_Box erl_backend__elds__wrapper_arg_2)
{
  {
    MR_bool erl_backend__elds__succeeded;

    {
      erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_clause_0_0(((MR_Word) erl_backend__elds__wrapper_arg_1), ((MR_Word) erl_backend__elds__wrapper_arg_2));
    }
    return erl_backend__elds__succeeded;
  }
}

static void MR_CALL 
erl_backend__elds____Compare____elds_clause_0_0_10001(
  MR_Box * erl_backend__elds__wrapper_arg_1,
  MR_Box erl_backend__elds__wrapper_arg_2,
  MR_Box erl_backend__elds__wrapper_arg_3)
{
  {
    MR_Word erl_backend__elds__conv0_HeadVar__1_1;

    {
      erl_backend__elds____Compare____elds_clause_0_0(&erl_backend__elds__conv0_HeadVar__1_1, ((MR_Word) erl_backend__elds__wrapper_arg_2), ((MR_Word) erl_backend__elds__wrapper_arg_3));
    }
    *erl_backend__elds__wrapper_arg_1 = ((MR_Box) (erl_backend__elds__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_defn_0_0_10001(
  MR_Box erl_backend__elds__wrapper_arg_1,
  MR_Box erl_backend__elds__wrapper_arg_2)
{
  {
    MR_bool erl_backend__elds__succeeded;

    {
      erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_defn_0_0(((MR_Word) erl_backend__elds__wrapper_arg_1), ((MR_Word) erl_backend__elds__wrapper_arg_2));
    }
    return erl_backend__elds__succeeded;
  }
}

static void MR_CALL 
erl_backend__elds____Compare____elds_defn_0_0_10001(
  MR_Box * erl_backend__elds__wrapper_arg_1,
  MR_Box erl_backend__elds__wrapper_arg_2,
  MR_Box erl_backend__elds__wrapper_arg_3)
{
  {
    MR_Word erl_backend__elds__conv0_HeadVar__1_1;

    {
      erl_backend__elds____Compare____elds_defn_0_0(&erl_backend__elds__conv0_HeadVar__1_1, ((MR_Word) erl_backend__elds__wrapper_arg_2), ((MR_Word) erl_backend__elds__wrapper_arg_3));
    }
    *erl_backend__elds__wrapper_arg_1 = ((MR_Box) (erl_backend__elds__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_expr_0_0_10001(
  MR_Box erl_backend__elds__wrapper_arg_1,
  MR_Box erl_backend__elds__wrapper_arg_2)
{
  {
    MR_bool erl_backend__elds__succeeded;

    {
      erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_expr_0_0(((MR_Word) erl_backend__elds__wrapper_arg_1), ((MR_Word) erl_backend__elds__wrapper_arg_2));
    }
    return erl_backend__elds__succeeded;
  }
}

static void MR_CALL 
erl_backend__elds____Compare____elds_expr_0_0_10001(
  MR_Box * erl_backend__elds__wrapper_arg_1,
  MR_Box erl_backend__elds__wrapper_arg_2,
  MR_Box erl_backend__elds__wrapper_arg_3)
{
  {
    MR_Word erl_backend__elds__conv0_HeadVar__1_1;

    {
      erl_backend__elds____Compare____elds_expr_0_0(&erl_backend__elds__conv0_HeadVar__1_1, ((MR_Word) erl_backend__elds__wrapper_arg_2), ((MR_Word) erl_backend__elds__wrapper_arg_3));
    }
    *erl_backend__elds__wrapper_arg_1 = ((MR_Box) (erl_backend__elds__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_foreign_export_defn_0_0_10001(
  MR_Box erl_backend__elds__wrapper_arg_1,
  MR_Box erl_backend__elds__wrapper_arg_2)
{
  {
    MR_bool erl_backend__elds__succeeded;

    {
      erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_foreign_export_defn_0_0(((MR_Word) erl_backend__elds__wrapper_arg_1), ((MR_Word) erl_backend__elds__wrapper_arg_2));
    }
    return erl_backend__elds__succeeded;
  }
}

static void MR_CALL 
erl_backend__elds____Compare____elds_foreign_export_defn_0_0_10001(
  MR_Box * erl_backend__elds__wrapper_arg_1,
  MR_Box erl_backend__elds__wrapper_arg_2,
  MR_Box erl_backend__elds__wrapper_arg_3)
{
  {
    MR_Word erl_backend__elds__conv0_HeadVar__1_1;

    {
      erl_backend__elds____Compare____elds_foreign_export_defn_0_0(&erl_backend__elds__conv0_HeadVar__1_1, ((MR_Word) erl_backend__elds__wrapper_arg_2), ((MR_Word) erl_backend__elds__wrapper_arg_3));
    }
    *erl_backend__elds__wrapper_arg_1 = ((MR_Box) (erl_backend__elds__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_rtti_defn_0_0_10001(
  MR_Box erl_backend__elds__wrapper_arg_1,
  MR_Box erl_backend__elds__wrapper_arg_2)
{
  {
    MR_bool erl_backend__elds__succeeded;

    {
      erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_rtti_defn_0_0(((MR_Word) erl_backend__elds__wrapper_arg_1), ((MR_Word) erl_backend__elds__wrapper_arg_2));
    }
    return erl_backend__elds__succeeded;
  }
}

static void MR_CALL 
erl_backend__elds____Compare____elds_rtti_defn_0_0_10001(
  MR_Box * erl_backend__elds__wrapper_arg_1,
  MR_Box erl_backend__elds__wrapper_arg_2,
  MR_Box erl_backend__elds__wrapper_arg_3)
{
  {
    MR_Word erl_backend__elds__conv0_HeadVar__1_1;

    {
      erl_backend__elds____Compare____elds_rtti_defn_0_0(&erl_backend__elds__conv0_HeadVar__1_1, ((MR_Word) erl_backend__elds__wrapper_arg_2), ((MR_Word) erl_backend__elds__wrapper_arg_3));
    }
    *erl_backend__elds__wrapper_arg_1 = ((MR_Box) (erl_backend__elds__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_rtti_id_0_0_10001(
  MR_Box erl_backend__elds__wrapper_arg_1,
  MR_Box erl_backend__elds__wrapper_arg_2)
{
  {
    MR_bool erl_backend__elds__succeeded;

    {
      erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_rtti_id_0_0(((MR_Word) erl_backend__elds__wrapper_arg_1), ((MR_Word) erl_backend__elds__wrapper_arg_2));
    }
    return erl_backend__elds__succeeded;
  }
}

static void MR_CALL 
erl_backend__elds____Compare____elds_rtti_id_0_0_10001(
  MR_Box * erl_backend__elds__wrapper_arg_1,
  MR_Box erl_backend__elds__wrapper_arg_2,
  MR_Box erl_backend__elds__wrapper_arg_3)
{
  {
    MR_Word erl_backend__elds__conv0_HeadVar__1_1;

    {
      erl_backend__elds____Compare____elds_rtti_id_0_0(&erl_backend__elds__conv0_HeadVar__1_1, ((MR_Word) erl_backend__elds__wrapper_arg_2), ((MR_Word) erl_backend__elds__wrapper_arg_3));
    }
    *erl_backend__elds__wrapper_arg_1 = ((MR_Box) (erl_backend__elds__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_term_0_0_10001(
  MR_Box erl_backend__elds__wrapper_arg_1,
  MR_Box erl_backend__elds__wrapper_arg_2)
{
  {
    MR_bool erl_backend__elds__succeeded;

    {
      erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_term_0_0(((MR_Word) erl_backend__elds__wrapper_arg_1), ((MR_Word) erl_backend__elds__wrapper_arg_2));
    }
    return erl_backend__elds__succeeded;
  }
}

static void MR_CALL 
erl_backend__elds____Compare____elds_term_0_0_10001(
  MR_Box * erl_backend__elds__wrapper_arg_1,
  MR_Box erl_backend__elds__wrapper_arg_2,
  MR_Box erl_backend__elds__wrapper_arg_3)
{
  {
    MR_Word erl_backend__elds__conv0_HeadVar__1_1;

    {
      erl_backend__elds____Compare____elds_term_0_0(&erl_backend__elds__conv0_HeadVar__1_1, ((MR_Word) erl_backend__elds__wrapper_arg_2), ((MR_Word) erl_backend__elds__wrapper_arg_3));
    }
    *erl_backend__elds__wrapper_arg_1 = ((MR_Box) (erl_backend__elds__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_unop_0_0_10001(
  MR_Box erl_backend__elds__wrapper_arg_1,
  MR_Box erl_backend__elds__wrapper_arg_2)
{
  {
    MR_bool erl_backend__elds__succeeded;

    {
      erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_unop_0_0(((MR_Word) erl_backend__elds__wrapper_arg_1), ((MR_Word) erl_backend__elds__wrapper_arg_2));
    }
    return erl_backend__elds__succeeded;
  }
}

static void MR_CALL 
erl_backend__elds____Compare____elds_unop_0_0_10001(
  MR_Box * erl_backend__elds__wrapper_arg_1,
  MR_Box erl_backend__elds__wrapper_arg_2,
  MR_Box erl_backend__elds__wrapper_arg_3)
{
  {
    MR_Word erl_backend__elds__conv0_HeadVar__1_1;

    {
      erl_backend__elds____Compare____elds_unop_0_0(&erl_backend__elds__conv0_HeadVar__1_1, ((MR_Word) erl_backend__elds__wrapper_arg_2), ((MR_Word) erl_backend__elds__wrapper_arg_3));
    }
    *erl_backend__elds__wrapper_arg_1 = ((MR_Box) (erl_backend__elds__conv0_HeadVar__1_1));
  }
}

static MR_Word MR_CALL 
erl_backend__elds__IntroducedFrom__func__exprs_from_fixed_vars__423__1_1_f_0(
  MR_String erl_backend__elds__LambdaHeadVar__1_6)
{
  {
    MR_bool erl_backend__elds__succeeded;
    MR_Word erl_backend__elds__LambdaHeadVar__2_7;
    MR_Word erl_backend__elds__V_8_8;

    {
      erl_backend__elds__V_8_8 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), erl_backend__elds__V_8_8, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
      MR_hl_field(MR_mktag(3), erl_backend__elds__V_8_8, 1) = ((MR_Box) (erl_backend__elds__LambdaHeadVar__1_6));
    }
    {
      erl_backend__elds__LambdaHeadVar__2_7 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), erl_backend__elds__LambdaHeadVar__2_7, 0) = ((MR_Box) (erl_backend__elds__V_8_8));
    }
    return erl_backend__elds__LambdaHeadVar__2_7;
  }
}

static MR_Word MR_CALL 
erl_backend__elds__IntroducedFrom__func__terms_from_fixed_vars__421__1_1_f_0(
  MR_String erl_backend__elds__LambdaHeadVar__1_6)
{
  {
    MR_bool erl_backend__elds__succeeded;
    MR_Word erl_backend__elds__LambdaHeadVar__2_7;

    {
      erl_backend__elds__LambdaHeadVar__2_7 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), erl_backend__elds__LambdaHeadVar__2_7, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
      MR_hl_field(MR_mktag(3), erl_backend__elds__LambdaHeadVar__2_7, 1) = ((MR_Box) (erl_backend__elds__LambdaHeadVar__1_6));
    }
    return erl_backend__elds__LambdaHeadVar__2_7;
  }
}

void MR_CALL 
erl_backend__elds____Compare____elds_unop_0_0(
  MR_Word * erl_backend__elds__HeadVar__1_1,
  MR_Word erl_backend__elds__HeadVar__2_2,
  MR_Word erl_backend__elds__HeadVar__3_3)
{
  {
    MR_bool erl_backend__elds__succeeded;
    MR_Integer erl_backend__elds__Cast_HeadVar1_4 = (MR_Integer) erl_backend__elds__HeadVar__2_2;
    MR_Integer erl_backend__elds__Cast_HeadVar2_5 = (MR_Integer) erl_backend__elds__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(erl_backend__elds__HeadVar__1_1, erl_backend__elds__Cast_HeadVar1_4, erl_backend__elds__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
erl_backend__elds____Unify____elds_unop_0_0(
  MR_Word erl_backend__elds__HeadVar__2_1,
  MR_Word erl_backend__elds__HeadVar__2_2)
{
  {
    MR_bool erl_backend__elds__succeeded = (erl_backend__elds__HeadVar__2_1 == erl_backend__elds__HeadVar__2_2);

    return erl_backend__elds__succeeded;
  }
}

void MR_CALL 
erl_backend__elds____Compare____elds_term_0_0(
  MR_Word * erl_backend__elds__HeadVar__1_1,
  MR_Word erl_backend__elds__HeadVar__2_2,
  MR_Word erl_backend__elds__HeadVar__3_3)
{
  {
    MR_bool erl_backend__elds__succeeded;
    MR_Integer erl_backend__elds__CastX_224 = (MR_Integer) erl_backend__elds__HeadVar__2_2;
    MR_Integer erl_backend__elds__CastY_225 = (MR_Integer) erl_backend__elds__HeadVar__3_3;

    erl_backend__elds__succeeded = (erl_backend__elds__CastX_224 == erl_backend__elds__CastY_225);
    if (erl_backend__elds__succeeded)
      *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) erl_backend__elds__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 0;
              break;
            case (MR_Integer) 1:
              *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 2:
              *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 1:
                  *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 3:
                  *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 4:
                  *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 5:
                  *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 6:
                  *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 7:
                  *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Char erl_backend__elds__V_239_239 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 1:
                {
                  MR_Char erl_backend__elds__V_5_5 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)));

                  {
                    mercury__private_builtin__builtin_compare_character_3_p_0(erl_backend__elds__HeadVar__1_1, erl_backend__elds__V_239_239, erl_backend__elds__V_5_5);
                  }
                }
                break;
              case (MR_Integer) 2:
                *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 3:
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 4:
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 5:
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 6:
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 7:
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Integer erl_backend__elds__V_242_242 = ((MR_Integer) (MR_hl_field(MR_mktag(2), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 1:
                *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Integer erl_backend__elds__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(2), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)));

                  {
                    mercury__private_builtin__builtin_compare_int_3_p_0(erl_backend__elds__HeadVar__1_1, erl_backend__elds__V_242_242, erl_backend__elds__V_28_28);
                  }
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 3:
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 4:
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 5:
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 6:
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 7:
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Float erl_backend__elds__V_241_241 = MR_unbox_float((MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));

                switch (MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_Float erl_backend__elds__V_51_51 = MR_unbox_float((MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 1)));

                          {
                            mercury__private_builtin__builtin_compare_float_3_p_0(erl_backend__elds__HeadVar__1_1, erl_backend__elds__V_241_241, erl_backend__elds__V_51_51);
                          }
                        }
                        break;
                      case (MR_Integer) 1:
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 2:
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 3:
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 4:
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 5:
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 6:
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 7:
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_String erl_backend__elds__V_238_238 = ((MR_String) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));

                switch (MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_String erl_backend__elds__V_74_74 = ((MR_String) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 1)));

                          {
                            mercury__private_builtin__builtin_compare_string_3_p_0(erl_backend__elds__HeadVar__1_1, erl_backend__elds__V_238_238, erl_backend__elds__V_74_74);
                          }
                        }
                        break;
                      case (MR_Integer) 2:
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 3:
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 4:
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 5:
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 6:
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 7:
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_String erl_backend__elds__V_243_243 = ((MR_String) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));

                switch (MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 2:
                        {
                          MR_String erl_backend__elds__V_97_97 = ((MR_String) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 1)));

                          {
                            mercury__private_builtin__builtin_compare_string_3_p_0(erl_backend__elds__HeadVar__1_1, erl_backend__elds__V_243_243, erl_backend__elds__V_97_97);
                          }
                        }
                        break;
                      case (MR_Integer) 3:
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 4:
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 5:
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 6:
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 7:
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_String erl_backend__elds__V_237_237 = ((MR_String) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));

                switch (MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 2:
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 3:
                        {
                          MR_String erl_backend__elds__V_120_120 = ((MR_String) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 1)));

                          {
                            mercury__private_builtin__builtin_compare_string_3_p_0(erl_backend__elds__HeadVar__1_1, erl_backend__elds__V_237_237, erl_backend__elds__V_120_120);
                          }
                        }
                        break;
                      case (MR_Integer) 4:
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 5:
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 6:
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 7:
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word erl_backend__elds__V_236_236 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));

                switch (MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 2:
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 3:
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 4:
                        {
                          MR_Word erl_backend__elds__V_143_143 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 1)));

                          {
                            mdbcomp__sym_name____Compare____sym_name_0_0(erl_backend__elds__HeadVar__1_1, erl_backend__elds__V_236_236, erl_backend__elds__V_143_143);
                          }
                        }
                        break;
                      case (MR_Integer) 5:
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 6:
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 7:
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word erl_backend__elds__V_244_244 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));

                switch (MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 2:
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 3:
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 4:
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 5:
                        {
                          MR_Word erl_backend__elds__V_166_166 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 1)));

                          {
                            mercury__builtin__compare_3_p_0((MR_Word) &erl_backend__elds_scalar_common_1[14], erl_backend__elds__HeadVar__1_1, ((MR_Box) (erl_backend__elds__V_244_244)), ((MR_Box) (erl_backend__elds__V_166_166)));
                          }
                        }
                        break;
                      case (MR_Integer) 6:
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 7:
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word erl_backend__elds__V_245_245 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));

                switch (MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 2:
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 3:
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 4:
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 5:
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 6:
                        {
                          MR_Word erl_backend__elds__V_189_189 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 1)));

                          {
                            mercury__builtin__compare_3_p_0((MR_Word) &erl_backend__elds_scalar_common_1[0], erl_backend__elds__HeadVar__1_1, ((MR_Box) (erl_backend__elds__V_245_245)), ((MR_Box) (erl_backend__elds__V_189_189)));
                          }
                        }
                        break;
                      case (MR_Integer) 7:
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 7:
              {
                MR_String erl_backend__elds__V_240_240 = ((MR_String) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));

                switch (MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 2:
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 3:
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 4:
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 5:
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 6:
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 7:
                        {
                          MR_String erl_backend__elds__V_223_223 = ((MR_String) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 1)));

                          {
                            mercury__private_builtin__builtin_compare_string_3_p_0(erl_backend__elds__HeadVar__1_1, erl_backend__elds__V_240_240, erl_backend__elds__V_223_223);
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
erl_backend__elds____Unify____elds_term_0_0(
  MR_Word erl_backend__elds__HeadVar__1_1,
  MR_Word erl_backend__elds__HeadVar__2_2)
{
  {
    MR_bool erl_backend__elds__succeeded;
    MR_Integer erl_backend__elds__CastX_25 = (MR_Integer) erl_backend__elds__HeadVar__1_1;
    MR_Integer erl_backend__elds__CastY_26 = (MR_Integer) erl_backend__elds__HeadVar__2_2;

    erl_backend__elds__succeeded = (erl_backend__elds__CastX_25 == erl_backend__elds__CastY_26);
    if (erl_backend__elds__succeeded)
      erl_backend__elds__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) erl_backend__elds__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer erl_backend__elds__CastX_21 = (MR_Integer) erl_backend__elds__HeadVar__1_1;
            MR_Integer erl_backend__elds__CastY_22 = (MR_Integer) erl_backend__elds__HeadVar__2_2;

            erl_backend__elds__succeeded = (erl_backend__elds__CastY_22 == erl_backend__elds__CastX_21);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Char erl_backend__elds__V_3_3 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds__HeadVar__1_1, (MR_Integer) 0)));
            MR_Char erl_backend__elds__V_4_4;

            erl_backend__elds__succeeded = ((MR_tag((MR_Word) erl_backend__elds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (erl_backend__elds__succeeded)
              {
                erl_backend__elds__V_4_4 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)));
                erl_backend__elds__succeeded = (erl_backend__elds__V_3_3 == erl_backend__elds__V_4_4);
              }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Integer erl_backend__elds__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(2), erl_backend__elds__HeadVar__1_1, (MR_Integer) 0)));
            MR_Integer erl_backend__elds__V_6_6;

            erl_backend__elds__succeeded = ((MR_tag((MR_Word) erl_backend__elds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (erl_backend__elds__succeeded)
              {
                erl_backend__elds__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(2), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)));
                erl_backend__elds__succeeded = (erl_backend__elds__V_5_5 == erl_backend__elds__V_6_6);
              }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__1_1, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Float erl_backend__elds__V_7_7 = MR_unbox_float((MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__1_1, (MR_Integer) 1)));
                MR_Float erl_backend__elds__V_8_8;

                erl_backend__elds__succeeded = ((((MR_tag((MR_Word) erl_backend__elds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (erl_backend__elds__succeeded)
                  {
                    erl_backend__elds__V_8_8 = MR_unbox_float((MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));
                    erl_backend__elds__succeeded = (erl_backend__elds__V_7_7 == erl_backend__elds__V_8_8);
                  }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_String erl_backend__elds__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__1_1, (MR_Integer) 1)));
                MR_String erl_backend__elds__V_10_10;

                erl_backend__elds__succeeded = ((((MR_tag((MR_Word) erl_backend__elds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (erl_backend__elds__succeeded)
                  {
                    erl_backend__elds__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));
                    erl_backend__elds__succeeded = (strcmp(erl_backend__elds__V_9_9, erl_backend__elds__V_10_10) == 0);
                  }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_String erl_backend__elds__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__1_1, (MR_Integer) 1)));
                MR_String erl_backend__elds__V_12_12;

                erl_backend__elds__succeeded = ((((MR_tag((MR_Word) erl_backend__elds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
                if (erl_backend__elds__succeeded)
                  {
                    erl_backend__elds__V_12_12 = ((MR_String) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));
                    erl_backend__elds__succeeded = (strcmp(erl_backend__elds__V_11_11, erl_backend__elds__V_12_12) == 0);
                  }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_String erl_backend__elds__V_13_13 = ((MR_String) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__1_1, (MR_Integer) 1)));
                MR_String erl_backend__elds__V_14_14;

                erl_backend__elds__succeeded = ((((MR_tag((MR_Word) erl_backend__elds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3)));
                if (erl_backend__elds__succeeded)
                  {
                    erl_backend__elds__V_14_14 = ((MR_String) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));
                    erl_backend__elds__succeeded = (strcmp(erl_backend__elds__V_13_13, erl_backend__elds__V_14_14) == 0);
                  }
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word erl_backend__elds__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__1_1, (MR_Integer) 1)));
                MR_Word erl_backend__elds__V_16_16;

                erl_backend__elds__succeeded = ((((MR_tag((MR_Word) erl_backend__elds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 4)));
                if (erl_backend__elds__succeeded)
                  {
                    erl_backend__elds__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));
                    {
                      erl_backend__elds__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(erl_backend__elds__V_15_15, erl_backend__elds__V_16_16);
                    }
                  }
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word erl_backend__elds__TypeInfo_28_28;
                MR_Word erl_backend__elds__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__1_1, (MR_Integer) 1)));
                MR_Word erl_backend__elds__V_18_18;

                erl_backend__elds__succeeded = ((((MR_tag((MR_Word) erl_backend__elds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 5)));
                if (erl_backend__elds__succeeded)
                  {
                    erl_backend__elds__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));
                    erl_backend__elds__TypeInfo_28_28 = (MR_Word) &erl_backend__elds_scalar_common_1[14];
                    {
                      erl_backend__elds__succeeded = mercury__builtin__unify_2_p_0(erl_backend__elds__TypeInfo_28_28, ((MR_Box) (erl_backend__elds__V_17_17)), ((MR_Box) (erl_backend__elds__V_18_18)));
                    }
                  }
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word erl_backend__elds__TypeInfo_29_29;
                MR_Word erl_backend__elds__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__1_1, (MR_Integer) 1)));
                MR_Word erl_backend__elds__V_20_20;

                erl_backend__elds__succeeded = ((((MR_tag((MR_Word) erl_backend__elds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 6)));
                if (erl_backend__elds__succeeded)
                  {
                    erl_backend__elds__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));
                    erl_backend__elds__TypeInfo_29_29 = (MR_Word) &erl_backend__elds_scalar_common_1[0];
                    {
                      erl_backend__elds__succeeded = mercury__builtin__unify_2_p_0(erl_backend__elds__TypeInfo_29_29, ((MR_Box) (erl_backend__elds__V_19_19)), ((MR_Box) (erl_backend__elds__V_20_20)));
                    }
                  }
              }
              break;
            case (MR_Integer) 7:
              {
                MR_String erl_backend__elds__V_23_23 = ((MR_String) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__1_1, (MR_Integer) 1)));
                MR_String erl_backend__elds__V_24_24;

                erl_backend__elds__succeeded = ((((MR_tag((MR_Word) erl_backend__elds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 7)));
                if (erl_backend__elds__succeeded)
                  {
                    erl_backend__elds__V_24_24 = ((MR_String) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));
                    erl_backend__elds__succeeded = (strcmp(erl_backend__elds__V_23_23, erl_backend__elds__V_24_24) == 0);
                  }
              }
              break;
          }
          break;
      }
    return erl_backend__elds__succeeded;
  }
}

void MR_CALL 
erl_backend__elds____Compare____elds_rtti_id_0_0(
  MR_Word * erl_backend__elds__HeadVar__1_1,
  MR_Word erl_backend__elds__HeadVar__2_2,
  MR_Word erl_backend__elds__HeadVar__3_3)
{
  {
    MR_bool erl_backend__elds__succeeded;
    MR_Integer erl_backend__elds__CastX_54 = (MR_Integer) erl_backend__elds__HeadVar__2_2;
    MR_Integer erl_backend__elds__CastY_55 = (MR_Integer) erl_backend__elds__HeadVar__3_3;

    erl_backend__elds__succeeded = (erl_backend__elds__CastX_54 == erl_backend__elds__CastY_55);
    if (erl_backend__elds__succeeded)
      *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) erl_backend__elds__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word erl_backend__elds__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word erl_backend__elds__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)));

                  {
                    backend_libs__rtti____Compare____rtti_type_ctor_0_0(erl_backend__elds__HeadVar__1_1, erl_backend__elds__V_66_66, erl_backend__elds__V_5_5);
                  }
                }
                break;
              case (MR_Integer) 1:
                *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 2:
                *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word erl_backend__elds__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word erl_backend__elds__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)));

                  {
                    backend_libs__rtti____Compare____rtti_type_info_0_0(erl_backend__elds__HeadVar__1_1, erl_backend__elds__V_67_67, erl_backend__elds__V_17_17);
                  }
                }
                break;
              case (MR_Integer) 2:
                *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word erl_backend__elds__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(2), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word erl_backend__elds__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)));

                  {
                    backend_libs__rtti____Compare____rtti_pseudo_type_info_0_0(erl_backend__elds__HeadVar__1_1, erl_backend__elds__V_65_65, erl_backend__elds__V_29_29);
                  }
                }
                break;
              case (MR_Integer) 3:
                *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_String erl_backend__elds__V_62_62 = ((MR_String) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 2)));
            MR_Word erl_backend__elds__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word erl_backend__elds__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                {
                  MR_Word erl_backend__elds__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)));
                  MR_Word erl_backend__elds__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 1)));
                  MR_String erl_backend__elds__V_51_51 = ((MR_String) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 2)));
                  MR_Word erl_backend__elds__V_52_52;

                  {
                    backend_libs__rtti____Compare____tc_name_0_0(&erl_backend__elds__V_52_52, erl_backend__elds__V_64_64, erl_backend__elds__V_49_49);
                  }
                  erl_backend__elds__succeeded = (erl_backend__elds__V_52_52 == (MR_Integer) 0);
                  erl_backend__elds__succeeded = !(erl_backend__elds__succeeded);
                  if (erl_backend__elds__succeeded)
                    *erl_backend__elds__HeadVar__1_1 = erl_backend__elds__V_52_52;
                  else
                    {
                      MR_Word erl_backend__elds__V_53_53;

                      {
                        mdbcomp__sym_name____Compare____sym_name_0_0(&erl_backend__elds__V_53_53, erl_backend__elds__V_63_63, erl_backend__elds__V_50_50);
                      }
                      erl_backend__elds__succeeded = (erl_backend__elds__V_53_53 == (MR_Integer) 0);
                      erl_backend__elds__succeeded = !(erl_backend__elds__succeeded);
                      if (erl_backend__elds__succeeded)
                        *erl_backend__elds__HeadVar__1_1 = erl_backend__elds__V_53_53;
                      else
                        {
                          mercury__private_builtin__builtin_compare_string_3_p_0(erl_backend__elds__HeadVar__1_1, erl_backend__elds__V_62_62, erl_backend__elds__V_51_51);
                        }
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
erl_backend__elds____Unify____elds_rtti_id_0_0(
  MR_Word erl_backend__elds__HeadVar__1_1,
  MR_Word erl_backend__elds__HeadVar__2_2)
{
  {
    MR_bool erl_backend__elds__succeeded;
    MR_Integer erl_backend__elds__CastX_15 = (MR_Integer) erl_backend__elds__HeadVar__1_1;
    MR_Integer erl_backend__elds__CastY_16 = (MR_Integer) erl_backend__elds__HeadVar__2_2;

    erl_backend__elds__succeeded = (erl_backend__elds__CastX_15 == erl_backend__elds__CastY_16);
    if (erl_backend__elds__succeeded)
      erl_backend__elds__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) erl_backend__elds__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word erl_backend__elds__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word erl_backend__elds__V_4_4;

            erl_backend__elds__succeeded = ((MR_tag((MR_Word) erl_backend__elds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
            if (erl_backend__elds__succeeded)
              {
                erl_backend__elds__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)));
                {
                  erl_backend__elds__succeeded = backend_libs__rtti____Unify____rtti_type_ctor_0_0(erl_backend__elds__V_3_3, erl_backend__elds__V_4_4);
                }
              }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word erl_backend__elds__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word erl_backend__elds__V_6_6;

            erl_backend__elds__succeeded = ((MR_tag((MR_Word) erl_backend__elds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (erl_backend__elds__succeeded)
              {
                erl_backend__elds__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)));
                {
                  erl_backend__elds__succeeded = backend_libs__rtti____Unify____rtti_type_info_0_0(erl_backend__elds__V_5_5, erl_backend__elds__V_6_6);
                }
              }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word erl_backend__elds__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), erl_backend__elds__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word erl_backend__elds__V_8_8;

            erl_backend__elds__succeeded = ((MR_tag((MR_Word) erl_backend__elds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (erl_backend__elds__succeeded)
              {
                erl_backend__elds__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)));
                {
                  erl_backend__elds__succeeded = backend_libs__rtti____Unify____rtti_pseudo_type_info_0_0(erl_backend__elds__V_7_7, erl_backend__elds__V_8_8);
                }
              }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word erl_backend__elds__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word erl_backend__elds__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__1_1, (MR_Integer) 1)));
            MR_String erl_backend__elds__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__1_1, (MR_Integer) 2)));
            MR_Word erl_backend__elds__V_12_12;
            MR_Word erl_backend__elds__V_13_13;
            MR_String erl_backend__elds__V_14_14;

            erl_backend__elds__succeeded = ((MR_tag((MR_Word) erl_backend__elds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)));
            if (erl_backend__elds__succeeded)
              {
                erl_backend__elds__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)));
                erl_backend__elds__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));
                erl_backend__elds__V_14_14 = ((MR_String) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 2)));
                {
                  erl_backend__elds__succeeded = backend_libs__rtti____Unify____tc_name_0_0(erl_backend__elds__V_9_9, erl_backend__elds__V_12_12);
                }
                if (erl_backend__elds__succeeded)
                  {
                    {
                      erl_backend__elds__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(erl_backend__elds__V_10_10, erl_backend__elds__V_13_13);
                    }
                    if (erl_backend__elds__succeeded)
                      erl_backend__elds__succeeded = (strcmp(erl_backend__elds__V_11_11, erl_backend__elds__V_14_14) == 0);
                  }
              }
          }
          break;
      }
    return erl_backend__elds__succeeded;
  }
}

void MR_CALL 
erl_backend__elds____Compare____elds_rtti_defn_0_0(
  MR_Word * erl_backend__elds__HeadVar__1_1,
  MR_Word erl_backend__elds__HeadVar__2_2,
  MR_Word erl_backend__elds__HeadVar__3_3)
{
  {
    MR_bool erl_backend__elds__succeeded;
    MR_Integer erl_backend__elds__CastX_15 = (MR_Integer) erl_backend__elds__HeadVar__2_2;
    MR_Integer erl_backend__elds__CastY_16 = (MR_Integer) erl_backend__elds__HeadVar__3_3;

    erl_backend__elds__succeeded = (erl_backend__elds__CastX_15 == erl_backend__elds__CastY_16);
    if (erl_backend__elds__succeeded)
      *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word erl_backend__elds__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word erl_backend__elds__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word erl_backend__elds__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word erl_backend__elds__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word erl_backend__elds__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word erl_backend__elds__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word erl_backend__elds__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word erl_backend__elds__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word erl_backend__elds__V_12_12;

        {
          erl_backend__elds____Compare____elds_rtti_id_0_0(&erl_backend__elds__V_12_12, erl_backend__elds__V_4_4, erl_backend__elds__V_8_8);
        }
        erl_backend__elds__succeeded = (erl_backend__elds__V_12_12 == (MR_Integer) 0);
        erl_backend__elds__succeeded = !(erl_backend__elds__succeeded);
        if (erl_backend__elds__succeeded)
          *erl_backend__elds__HeadVar__1_1 = erl_backend__elds__V_12_12;
        else
          {
            MR_Word erl_backend__elds__V_13_13;
            MR_Integer erl_backend__elds__V_21_21 = (MR_Integer) erl_backend__elds__V_5_5;
            MR_Integer erl_backend__elds__V_22_22 = (MR_Integer) erl_backend__elds__V_9_9;

            {
              mercury__private_builtin__builtin_compare_int_3_p_0(&erl_backend__elds__V_13_13, erl_backend__elds__V_21_21, erl_backend__elds__V_22_22);
            }
            erl_backend__elds__succeeded = (erl_backend__elds__V_13_13 == (MR_Integer) 0);
            erl_backend__elds__succeeded = !(erl_backend__elds__succeeded);
            if (erl_backend__elds__succeeded)
              *erl_backend__elds__HeadVar__1_1 = erl_backend__elds__V_13_13;
            else
              {
                MR_Word erl_backend__elds__V_14_14;

                {
                  mercury__builtin__compare_3_p_0((MR_Word) &erl_backend__elds_scalar_common_1[9], &erl_backend__elds__V_14_14, ((MR_Box) (erl_backend__elds__V_6_6)), ((MR_Box) (erl_backend__elds__V_10_10)));
                }
                erl_backend__elds__succeeded = (erl_backend__elds__V_14_14 == (MR_Integer) 0);
                erl_backend__elds__succeeded = !(erl_backend__elds__succeeded);
                if (erl_backend__elds__succeeded)
                  *erl_backend__elds__HeadVar__1_1 = erl_backend__elds__V_14_14;
                else
                  {
                    erl_backend__elds____Compare____elds_clause_0_0(erl_backend__elds__HeadVar__1_1, erl_backend__elds__V_7_7, erl_backend__elds__V_11_11);
                  }
              }
          }
      }
  }
}

MR_bool MR_CALL 
erl_backend__elds____Unify____elds_rtti_defn_0_0(
  MR_Word erl_backend__elds__HeadVar__1_1,
  MR_Word erl_backend__elds__HeadVar__2_2)
{
  {
    MR_bool erl_backend__elds__succeeded;
    MR_Integer erl_backend__elds__CastX_11 = (MR_Integer) erl_backend__elds__HeadVar__1_1;
    MR_Integer erl_backend__elds__CastY_12 = (MR_Integer) erl_backend__elds__HeadVar__2_2;

    erl_backend__elds__succeeded = (erl_backend__elds__CastX_11 == erl_backend__elds__CastY_12);
    if (erl_backend__elds__succeeded)
      erl_backend__elds__succeeded = MR_TRUE;
    else
      {
        MR_Word erl_backend__elds__TypeInfo_13_13;
        MR_Word erl_backend__elds__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word erl_backend__elds__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word erl_backend__elds__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word erl_backend__elds__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__1_1, (MR_Integer) 3)));
        MR_Word erl_backend__elds__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word erl_backend__elds__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word erl_backend__elds__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word erl_backend__elds__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 3)));

        {
          erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_rtti_id_0_0(erl_backend__elds__V_3_3, erl_backend__elds__V_7_7);
        }
        if (erl_backend__elds__succeeded)
          {
            erl_backend__elds__succeeded = (erl_backend__elds__V_4_4 == erl_backend__elds__V_8_8);
            if (erl_backend__elds__succeeded)
              {
                erl_backend__elds__TypeInfo_13_13 = (MR_Word) &erl_backend__elds_scalar_common_1[9];
                {
                  erl_backend__elds__succeeded = mercury__builtin__unify_2_p_0(erl_backend__elds__TypeInfo_13_13, ((MR_Box) (erl_backend__elds__V_5_5)), ((MR_Box) (erl_backend__elds__V_9_9)));
                }
                if (erl_backend__elds__succeeded)
                  {
                    erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_clause_0_0(erl_backend__elds__V_6_6, erl_backend__elds__V_10_10);
                  }
              }
          }
      }
    return erl_backend__elds__succeeded;
  }
}

void MR_CALL 
erl_backend__elds____Compare____elds_foreign_export_defn_0_0(
  MR_Word * erl_backend__elds__HeadVar__1_1,
  MR_Word erl_backend__elds__HeadVar__2_2,
  MR_Word erl_backend__elds__HeadVar__3_3)
{
  {
    MR_bool erl_backend__elds__succeeded;
    MR_Integer erl_backend__elds__CastX_12 = (MR_Integer) erl_backend__elds__HeadVar__2_2;
    MR_Integer erl_backend__elds__CastY_13 = (MR_Integer) erl_backend__elds__HeadVar__3_3;

    erl_backend__elds__succeeded = (erl_backend__elds__CastX_12 == erl_backend__elds__CastY_13);
    if (erl_backend__elds__succeeded)
      *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_String erl_backend__elds__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word erl_backend__elds__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word erl_backend__elds__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 2)));
        MR_String erl_backend__elds__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word erl_backend__elds__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word erl_backend__elds__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word erl_backend__elds__V_10_10;

        {
          mercury__private_builtin__builtin_compare_string_3_p_0(&erl_backend__elds__V_10_10, erl_backend__elds__V_4_4, erl_backend__elds__V_7_7);
        }
        erl_backend__elds__succeeded = (erl_backend__elds__V_10_10 == (MR_Integer) 0);
        erl_backend__elds__succeeded = !(erl_backend__elds__succeeded);
        if (erl_backend__elds__succeeded)
          *erl_backend__elds__HeadVar__1_1 = erl_backend__elds__V_10_10;
        else
          {
            MR_Word erl_backend__elds__V_11_11;

            {
              mercury__builtin__compare_3_p_0((MR_Word) &erl_backend__elds_scalar_common_1[9], &erl_backend__elds__V_11_11, ((MR_Box) (erl_backend__elds__V_5_5)), ((MR_Box) (erl_backend__elds__V_8_8)));
            }
            erl_backend__elds__succeeded = (erl_backend__elds__V_11_11 == (MR_Integer) 0);
            erl_backend__elds__succeeded = !(erl_backend__elds__succeeded);
            if (erl_backend__elds__succeeded)
              *erl_backend__elds__HeadVar__1_1 = erl_backend__elds__V_11_11;
            else
              {
                erl_backend__elds____Compare____elds_clause_0_0(erl_backend__elds__HeadVar__1_1, erl_backend__elds__V_6_6, erl_backend__elds__V_9_9);
              }
          }
      }
  }
}

MR_bool MR_CALL 
erl_backend__elds____Unify____elds_foreign_export_defn_0_0(
  MR_Word erl_backend__elds__HeadVar__1_1,
  MR_Word erl_backend__elds__HeadVar__2_2)
{
  {
    MR_bool erl_backend__elds__succeeded;
    MR_Integer erl_backend__elds__CastX_9 = (MR_Integer) erl_backend__elds__HeadVar__1_1;
    MR_Integer erl_backend__elds__CastY_10 = (MR_Integer) erl_backend__elds__HeadVar__2_2;

    erl_backend__elds__succeeded = (erl_backend__elds__CastX_9 == erl_backend__elds__CastY_10);
    if (erl_backend__elds__succeeded)
      erl_backend__elds__succeeded = MR_TRUE;
    else
      {
        MR_Word erl_backend__elds__TypeInfo_11_11;
        MR_String erl_backend__elds__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word erl_backend__elds__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word erl_backend__elds__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__1_1, (MR_Integer) 2)));
        MR_String erl_backend__elds__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word erl_backend__elds__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word erl_backend__elds__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 2)));

        erl_backend__elds__succeeded = (strcmp(erl_backend__elds__V_3_3, erl_backend__elds__V_6_6) == 0);
        if (erl_backend__elds__succeeded)
          {
            erl_backend__elds__TypeInfo_11_11 = (MR_Word) &erl_backend__elds_scalar_common_1[9];
            {
              erl_backend__elds__succeeded = mercury__builtin__unify_2_p_0(erl_backend__elds__TypeInfo_11_11, ((MR_Box) (erl_backend__elds__V_4_4)), ((MR_Box) (erl_backend__elds__V_7_7)));
            }
            if (erl_backend__elds__succeeded)
              {
                erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_clause_0_0(erl_backend__elds__V_5_5, erl_backend__elds__V_8_8);
              }
          }
      }
    return erl_backend__elds__succeeded;
  }
}

void MR_CALL 
erl_backend__elds____Compare____elds_expr_0_0(
  MR_Word * erl_backend__elds__HeadVar__1_1,
  MR_Word erl_backend__elds__HeadVar__2_2,
  MR_Word erl_backend__elds__HeadVar__3_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool erl_backend__elds__succeeded;
        MR_Integer erl_backend__elds__CastX_715 = (MR_Integer) erl_backend__elds__HeadVar__2_2;
        MR_Integer erl_backend__elds__CastY_716 = (MR_Integer) erl_backend__elds__HeadVar__3_3;

        erl_backend__elds__succeeded = (erl_backend__elds__CastX_715 == erl_backend__elds__CastY_716);
        if (erl_backend__elds__succeeded)
          *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 0;
        else
          switch (MR_tag((MR_Word) erl_backend__elds__HeadVar__2_2)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word erl_backend__elds__V_754_754 = (MR_Word) MR_body(((MR_Word) erl_backend__elds__HeadVar__2_2), (MR_Integer) 0);

                switch (MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word erl_backend__elds__V_372_372 = (MR_Word) MR_body(((MR_Word) erl_backend__elds__HeadVar__3_3), (MR_Integer) 0);

                      {
                        erl_backend__elds____Compare____elds_clause_0_0(erl_backend__elds__HeadVar__1_1, erl_backend__elds__V_754_754, erl_backend__elds__V_372_372);
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 2:
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 3:
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 4:
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 5:
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 6:
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 7:
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 8:
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 9:
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 10:
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word erl_backend__elds__V_745_745 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)));

                switch (MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word erl_backend__elds__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)));

                      {
                        mercury__builtin__compare_3_p_0((MR_Word) &erl_backend__elds_scalar_common_1[14], erl_backend__elds__HeadVar__1_1, ((MR_Box) (erl_backend__elds__V_745_745)), ((MR_Box) (erl_backend__elds__V_5_5)));
                      }
                    }
                    break;
                  case (MR_Integer) 2:
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 1:
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 2:
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 3:
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 4:
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 5:
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 6:
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 7:
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 8:
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 9:
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 10:
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word erl_backend__elds__V_759_759 = ((MR_Word) (MR_hl_field(MR_mktag(2), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)));

                switch (MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word erl_backend__elds__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(2), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)));

                      {
                        erl_backend__elds____Compare____elds_term_0_0(erl_backend__elds__HeadVar__1_1, erl_backend__elds__V_759_759, erl_backend__elds__V_46_46);
                      }
                    }
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 1:
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 2:
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 3:
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 4:
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 5:
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 6:
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 7:
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 8:
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 9:
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 10:
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word erl_backend__elds__V_750_750 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 2)));
                    MR_Word erl_backend__elds__V_751_751 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));

                    switch (MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 1:
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 2:
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 3:
                        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            {
                              MR_Word erl_backend__elds__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 1)));
                              MR_Word erl_backend__elds__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 2)));
                              MR_Word erl_backend__elds__V_92_92;

                              {
                                erl_backend__elds____Compare____elds_expr_0_0(&erl_backend__elds__V_92_92, erl_backend__elds__V_751_751, erl_backend__elds__V_90_90);
                              }
                              erl_backend__elds__succeeded = (erl_backend__elds__V_92_92 == (MR_Integer) 0);
                              erl_backend__elds__succeeded = !(erl_backend__elds__succeeded);
                              if (erl_backend__elds__succeeded)
                                *erl_backend__elds__HeadVar__1_1 = erl_backend__elds__V_92_92;
                              else
                                {
                                  /* direct tailcall eliminated */
                                  {
                                    MR_Word erl_backend__elds__HeadVar__2__tmp_copy_2 = erl_backend__elds__V_750_750;
                                    MR_Word erl_backend__elds__HeadVar__3__tmp_copy_3 = erl_backend__elds__V_91_91;

                                    erl_backend__elds__HeadVar__3_3 = erl_backend__elds__HeadVar__3__tmp_copy_3;
                                    erl_backend__elds__HeadVar__2_2 = erl_backend__elds__HeadVar__2__tmp_copy_2;
                                  }
                                  continue;
                                }
                            }
                            break;
                          case (MR_Integer) 1:
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
                            break;
                          case (MR_Integer) 2:
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
                            break;
                          case (MR_Integer) 3:
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
                            break;
                          case (MR_Integer) 4:
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
                            break;
                          case (MR_Integer) 5:
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
                            break;
                          case (MR_Integer) 6:
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
                            break;
                          case (MR_Integer) 7:
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
                            break;
                          case (MR_Integer) 8:
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
                            break;
                          case (MR_Integer) 9:
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
                            break;
                          case (MR_Integer) 10:
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
                            break;
                        }
                        break;
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word erl_backend__elds__V_765_765 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 2)));
                    MR_Word erl_backend__elds__V_766_766 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));

                    switch (MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 1:
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 2:
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 3:
                        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
                            break;
                          case (MR_Integer) 1:
                            {
                              MR_Word erl_backend__elds__V_148_148 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 1)));
                              MR_Word erl_backend__elds__V_149_149 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 2)));
                              MR_Word erl_backend__elds__V_150_150;
                              MR_Integer erl_backend__elds__V_769_769 = (MR_Integer) erl_backend__elds__V_766_766;
                              MR_Integer erl_backend__elds__V_770_770 = (MR_Integer) erl_backend__elds__V_148_148;

                              {
                                mercury__private_builtin__builtin_compare_int_3_p_0(&erl_backend__elds__V_150_150, erl_backend__elds__V_769_769, erl_backend__elds__V_770_770);
                              }
                              erl_backend__elds__succeeded = (erl_backend__elds__V_150_150 == (MR_Integer) 0);
                              erl_backend__elds__succeeded = !(erl_backend__elds__succeeded);
                              if (erl_backend__elds__succeeded)
                                *erl_backend__elds__HeadVar__1_1 = erl_backend__elds__V_150_150;
                              else
                                {
                                  /* direct tailcall eliminated */
                                  {
                                    MR_Word erl_backend__elds__HeadVar__2__tmp_copy_2 = erl_backend__elds__V_765_765;
                                    MR_Word erl_backend__elds__HeadVar__3__tmp_copy_3 = erl_backend__elds__V_149_149;

                                    erl_backend__elds__HeadVar__3_3 = erl_backend__elds__HeadVar__3__tmp_copy_3;
                                    erl_backend__elds__HeadVar__2_2 = erl_backend__elds__HeadVar__2__tmp_copy_2;
                                  }
                                  continue;
                                }
                            }
                            break;
                          case (MR_Integer) 2:
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
                            break;
                          case (MR_Integer) 3:
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
                            break;
                          case (MR_Integer) 4:
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
                            break;
                          case (MR_Integer) 5:
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
                            break;
                          case (MR_Integer) 6:
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
                            break;
                          case (MR_Integer) 7:
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
                            break;
                          case (MR_Integer) 8:
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
                            break;
                          case (MR_Integer) 9:
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
                            break;
                          case (MR_Integer) 10:
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
                            break;
                        }
                        break;
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word erl_backend__elds__V_742_742 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 3)));
                    MR_Word erl_backend__elds__V_743_743 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 2)));
                    MR_Word erl_backend__elds__V_744_744 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));

                    switch (MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 1:
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 2:
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 3:
                        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
                            break;
                          case (MR_Integer) 1:
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
                            break;
                          case (MR_Integer) 2:
                            {
                              MR_Word erl_backend__elds__V_211_211 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 1)));
                              MR_Word erl_backend__elds__V_212_212 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 2)));
                              MR_Word erl_backend__elds__V_213_213 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 3)));
                              MR_Word erl_backend__elds__V_214_214;
                              MR_Integer erl_backend__elds__V_767_767 = (MR_Integer) erl_backend__elds__V_744_744;
                              MR_Integer erl_backend__elds__V_768_768 = (MR_Integer) erl_backend__elds__V_211_211;

                              {
                                mercury__private_builtin__builtin_compare_int_3_p_0(&erl_backend__elds__V_214_214, erl_backend__elds__V_767_767, erl_backend__elds__V_768_768);
                              }
                              erl_backend__elds__succeeded = (erl_backend__elds__V_214_214 == (MR_Integer) 0);
                              erl_backend__elds__succeeded = !(erl_backend__elds__succeeded);
                              if (erl_backend__elds__succeeded)
                                *erl_backend__elds__HeadVar__1_1 = erl_backend__elds__V_214_214;
                              else
                                {
                                  MR_Word erl_backend__elds__V_215_215;

                                  {
                                    erl_backend__elds____Compare____elds_expr_0_0(&erl_backend__elds__V_215_215, erl_backend__elds__V_743_743, erl_backend__elds__V_212_212);
                                  }
                                  erl_backend__elds__succeeded = (erl_backend__elds__V_215_215 == (MR_Integer) 0);
                                  erl_backend__elds__succeeded = !(erl_backend__elds__succeeded);
                                  if (erl_backend__elds__succeeded)
                                    *erl_backend__elds__HeadVar__1_1 = erl_backend__elds__V_215_215;
                                  else
                                    {
                                      /* direct tailcall eliminated */
                                      {
                                        MR_Word erl_backend__elds__HeadVar__2__tmp_copy_2 = erl_backend__elds__V_742_742;
                                        MR_Word erl_backend__elds__HeadVar__3__tmp_copy_3 = erl_backend__elds__V_213_213;

                                        erl_backend__elds__HeadVar__3_3 = erl_backend__elds__HeadVar__3__tmp_copy_3;
                                        erl_backend__elds__HeadVar__2_2 = erl_backend__elds__HeadVar__2__tmp_copy_2;
                                      }
                                      continue;
                                    }
                                }
                            }
                            break;
                          case (MR_Integer) 3:
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
                            break;
                          case (MR_Integer) 4:
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
                            break;
                          case (MR_Integer) 5:
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
                            break;
                          case (MR_Integer) 6:
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
                            break;
                          case (MR_Integer) 7:
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
                            break;
                          case (MR_Integer) 8:
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
                            break;
                          case (MR_Integer) 9:
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
                            break;
                          case (MR_Integer) 10:
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
                            break;
                        }
                        break;
                    }
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    MR_Word erl_backend__elds__V_746_746 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 2)));
                    MR_Word erl_backend__elds__V_747_747 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));

                    switch (MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 1:
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 2:
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 3:
                        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
                            break;
                          case (MR_Integer) 1:
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
                            break;
                          case (MR_Integer) 2:
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
                            break;
                          case (MR_Integer) 3:
                            {
                              MR_Word erl_backend__elds__V_280_280 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 1)));
                              MR_Word erl_backend__elds__V_281_281 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 2)));
                              MR_Word erl_backend__elds__V_282_282;

                              {
                                erl_backend__elds____Compare____elds_call_target_0_0(&erl_backend__elds__V_282_282, erl_backend__elds__V_747_747, erl_backend__elds__V_280_280);
                              }
                              erl_backend__elds__succeeded = (erl_backend__elds__V_282_282 == (MR_Integer) 0);
                              erl_backend__elds__succeeded = !(erl_backend__elds__succeeded);
                              if (erl_backend__elds__succeeded)
                                *erl_backend__elds__HeadVar__1_1 = erl_backend__elds__V_282_282;
                              else
                                {
                                  {
                                    mercury__builtin__compare_3_p_0((MR_Word) &erl_backend__elds_scalar_common_1[14], erl_backend__elds__HeadVar__1_1, ((MR_Box) (erl_backend__elds__V_746_746)), ((MR_Box) (erl_backend__elds__V_281_281)));
                                  }
                                }
                            }
                            break;
                          case (MR_Integer) 4:
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
                            break;
                          case (MR_Integer) 5:
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
                            break;
                          case (MR_Integer) 6:
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
                            break;
                          case (MR_Integer) 7:
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
                            break;
                          case (MR_Integer) 8:
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
                            break;
                          case (MR_Integer) 9:
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
                            break;
                          case (MR_Integer) 10:
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
                            break;
                        }
                        break;
                    }
                  }
                  break;
                case (MR_Integer) 4:
                  {
                    MR_Word erl_backend__elds__V_756_756 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));

                    switch (MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 1:
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 2:
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 3:
                        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
                            break;
                          case (MR_Integer) 1:
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
                            break;
                          case (MR_Integer) 2:
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
                            break;
                          case (MR_Integer) 3:
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
                            break;
                          case (MR_Integer) 4:
                            {
                              MR_Word erl_backend__elds__V_331_331 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 1)));

                              {
                                erl_backend__elds____Compare____elds_rtti_id_0_0(erl_backend__elds__HeadVar__1_1, erl_backend__elds__V_756_756, erl_backend__elds__V_331_331);
                              }
                            }
                            break;
                          case (MR_Integer) 5:
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
                            break;
                          case (MR_Integer) 6:
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
                            break;
                          case (MR_Integer) 7:
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
                            break;
                          case (MR_Integer) 8:
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
                            break;
                          case (MR_Integer) 9:
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
                            break;
                          case (MR_Integer) 10:
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
                            break;
                        }
                        break;
                    }
                  }
                  break;
                case (MR_Integer) 5:
                  {
                    MR_Word erl_backend__elds__V_748_748 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 2)));
                    MR_Word erl_backend__elds__V_749_749 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));

                    switch (MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 2:
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 3:
                        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
                            break;
                          case (MR_Integer) 1:
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
                            break;
                          case (MR_Integer) 2:
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
                            break;
                          case (MR_Integer) 3:
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
                            break;
                          case (MR_Integer) 4:
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
                            break;
                          case (MR_Integer) 5:
                            {
                              MR_Word erl_backend__elds__V_422_422 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 1)));
                              MR_Word erl_backend__elds__V_423_423 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 2)));
                              MR_Word erl_backend__elds__V_424_424;

                              {
                                erl_backend__elds____Compare____elds_expr_0_0(&erl_backend__elds__V_424_424, erl_backend__elds__V_749_749, erl_backend__elds__V_422_422);
                              }
                              erl_backend__elds__succeeded = (erl_backend__elds__V_424_424 == (MR_Integer) 0);
                              erl_backend__elds__succeeded = !(erl_backend__elds__succeeded);
                              if (erl_backend__elds__succeeded)
                                *erl_backend__elds__HeadVar__1_1 = erl_backend__elds__V_424_424;
                              else
                                {
                                  {
                                    mercury__builtin__compare_3_p_0((MR_Word) &erl_backend__elds_scalar_common_1[11], erl_backend__elds__HeadVar__1_1, ((MR_Box) (erl_backend__elds__V_748_748)), ((MR_Box) (erl_backend__elds__V_423_423)));
                                  }
                                }
                            }
                            break;
                          case (MR_Integer) 6:
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
                            break;
                          case (MR_Integer) 7:
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
                            break;
                          case (MR_Integer) 8:
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
                            break;
                          case (MR_Integer) 9:
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
                            break;
                          case (MR_Integer) 10:
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
                            break;
                        }
                        break;
                    }
                  }
                  break;
                case (MR_Integer) 6:
                  {
                    MR_Word erl_backend__elds__V_761_761 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 4)));
                    MR_Word erl_backend__elds__V_762_762 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 3)));
                    MR_Word erl_backend__elds__V_763_763 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 2)));
                    MR_Word erl_backend__elds__V_764_764 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));

                    switch (MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 2:
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 3:
                        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
                            break;
                          case (MR_Integer) 1:
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
                            break;
                          case (MR_Integer) 2:
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
                            break;
                          case (MR_Integer) 3:
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
                            break;
                          case (MR_Integer) 4:
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
                            break;
                          case (MR_Integer) 5:
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
                            break;
                          case (MR_Integer) 6:
                            {
                              MR_Word erl_backend__elds__V_500_500 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 1)));
                              MR_Word erl_backend__elds__V_501_501 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 2)));
                              MR_Word erl_backend__elds__V_502_502 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 3)));
                              MR_Word erl_backend__elds__V_503_503 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 4)));
                              MR_Word erl_backend__elds__V_504_504;

                              {
                                erl_backend__elds____Compare____elds_expr_0_0(&erl_backend__elds__V_504_504, erl_backend__elds__V_764_764, erl_backend__elds__V_500_500);
                              }
                              erl_backend__elds__succeeded = (erl_backend__elds__V_504_504 == (MR_Integer) 0);
                              erl_backend__elds__succeeded = !(erl_backend__elds__succeeded);
                              if (erl_backend__elds__succeeded)
                                *erl_backend__elds__HeadVar__1_1 = erl_backend__elds__V_504_504;
                              else
                                {
                                  MR_Word erl_backend__elds__V_505_505;

                                  {
                                    mercury__builtin__compare_3_p_0((MR_Word) &erl_backend__elds_scalar_common_1[11], &erl_backend__elds__V_505_505, ((MR_Box) (erl_backend__elds__V_763_763)), ((MR_Box) (erl_backend__elds__V_501_501)));
                                  }
                                  erl_backend__elds__succeeded = (erl_backend__elds__V_505_505 == (MR_Integer) 0);
                                  erl_backend__elds__succeeded = !(erl_backend__elds__succeeded);
                                  if (erl_backend__elds__succeeded)
                                    *erl_backend__elds__HeadVar__1_1 = erl_backend__elds__V_505_505;
                                  else
                                    {
                                      MR_Word erl_backend__elds__V_506_506;

                                      {
                                        mercury__builtin__compare_3_p_0((MR_Word) &erl_backend__elds_scalar_common_1[12], &erl_backend__elds__V_506_506, ((MR_Box) (erl_backend__elds__V_762_762)), ((MR_Box) (erl_backend__elds__V_502_502)));
                                      }
                                      erl_backend__elds__succeeded = (erl_backend__elds__V_506_506 == (MR_Integer) 0);
                                      erl_backend__elds__succeeded = !(erl_backend__elds__succeeded);
                                      if (erl_backend__elds__succeeded)
                                        *erl_backend__elds__HeadVar__1_1 = erl_backend__elds__V_506_506;
                                      else
                                        {
                                          {
                                            mercury__builtin__compare_3_p_0((MR_Word) &erl_backend__elds_scalar_common_1[13], erl_backend__elds__HeadVar__1_1, ((MR_Box) (erl_backend__elds__V_761_761)), ((MR_Box) (erl_backend__elds__V_503_503)));
                                          }
                                        }
                                    }
                                }
                            }
                            break;
                          case (MR_Integer) 7:
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
                            break;
                          case (MR_Integer) 8:
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
                            break;
                          case (MR_Integer) 9:
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
                            break;
                          case (MR_Integer) 10:
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
                            break;
                        }
                        break;
                    }
                  }
                  break;
                case (MR_Integer) 7:
                  {
                    MR_Word erl_backend__elds__V_760_760 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));

                    switch (MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 2:
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 3:
                        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
                            break;
                          case (MR_Integer) 1:
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
                            break;
                          case (MR_Integer) 2:
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
                            break;
                          case (MR_Integer) 3:
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
                            break;
                          case (MR_Integer) 4:
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
                            break;
                          case (MR_Integer) 5:
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
                            break;
                          case (MR_Integer) 6:
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
                            break;
                          case (MR_Integer) 7:
                            {
                              MR_Word erl_backend__elds__V_559_559 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 1)));

                              /* direct tailcall eliminated */
                              {
                                MR_Word erl_backend__elds__HeadVar__2__tmp_copy_2 = erl_backend__elds__V_760_760;
                                MR_Word erl_backend__elds__HeadVar__3__tmp_copy_3 = erl_backend__elds__V_559_559;

                                erl_backend__elds__HeadVar__3_3 = erl_backend__elds__HeadVar__3__tmp_copy_3;
                                erl_backend__elds__HeadVar__2_2 = erl_backend__elds__HeadVar__2__tmp_copy_2;
                              }
                              continue;
                            }
                            break;
                          case (MR_Integer) 8:
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
                            break;
                          case (MR_Integer) 9:
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
                            break;
                          case (MR_Integer) 10:
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
                            break;
                        }
                        break;
                    }
                  }
                  break;
                case (MR_Integer) 8:
                  {
                    MR_Word erl_backend__elds__V_752_752 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 2)));
                    MR_String erl_backend__elds__V_753_753 = ((MR_String) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));

                    switch (MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 2:
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 3:
                        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
                            break;
                          case (MR_Integer) 1:
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
                            break;
                          case (MR_Integer) 2:
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
                            break;
                          case (MR_Integer) 3:
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
                            break;
                          case (MR_Integer) 4:
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
                            break;
                          case (MR_Integer) 5:
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
                            break;
                          case (MR_Integer) 6:
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
                            break;
                          case (MR_Integer) 7:
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
                            break;
                          case (MR_Integer) 8:
                            {
                              MR_String erl_backend__elds__V_612_612 = ((MR_String) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 1)));
                              MR_Word erl_backend__elds__V_613_613 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 2)));
                              MR_Word erl_backend__elds__V_614_614;

                              {
                                mercury__private_builtin__builtin_compare_string_3_p_0(&erl_backend__elds__V_614_614, erl_backend__elds__V_753_753, erl_backend__elds__V_612_612);
                              }
                              erl_backend__elds__succeeded = (erl_backend__elds__V_614_614 == (MR_Integer) 0);
                              erl_backend__elds__succeeded = !(erl_backend__elds__succeeded);
                              if (erl_backend__elds__succeeded)
                                *erl_backend__elds__HeadVar__1_1 = erl_backend__elds__V_614_614;
                              else
                                {
                                  mercury__term____Compare____context_0_0(erl_backend__elds__HeadVar__1_1, erl_backend__elds__V_752_752, erl_backend__elds__V_613_613);
                                }
                            }
                            break;
                          case (MR_Integer) 9:
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
                            break;
                          case (MR_Integer) 10:
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
                            break;
                        }
                        break;
                    }
                  }
                  break;
                case (MR_Integer) 9:
                  {
                    MR_Word erl_backend__elds__V_757_757 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 2)));
                    MR_Word erl_backend__elds__V_758_758 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));

                    switch (MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 2:
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 3:
                        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
                            break;
                          case (MR_Integer) 1:
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
                            break;
                          case (MR_Integer) 2:
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
                            break;
                          case (MR_Integer) 3:
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
                            break;
                          case (MR_Integer) 4:
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
                            break;
                          case (MR_Integer) 5:
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
                            break;
                          case (MR_Integer) 6:
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
                            break;
                          case (MR_Integer) 7:
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
                            break;
                          case (MR_Integer) 8:
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
                            break;
                          case (MR_Integer) 9:
                            {
                              MR_Word erl_backend__elds__V_670_670 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 1)));
                              MR_Word erl_backend__elds__V_671_671 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 2)));
                              MR_Word erl_backend__elds__V_672_672;

                              {
                                erl_backend__elds____Compare____elds_expr_0_0(&erl_backend__elds__V_672_672, erl_backend__elds__V_758_758, erl_backend__elds__V_670_670);
                              }
                              erl_backend__elds__succeeded = (erl_backend__elds__V_672_672 == (MR_Integer) 0);
                              erl_backend__elds__succeeded = !(erl_backend__elds__succeeded);
                              if (erl_backend__elds__succeeded)
                                *erl_backend__elds__HeadVar__1_1 = erl_backend__elds__V_672_672;
                              else
                                {
                                  /* direct tailcall eliminated */
                                  {
                                    MR_Word erl_backend__elds__HeadVar__2__tmp_copy_2 = erl_backend__elds__V_757_757;
                                    MR_Word erl_backend__elds__HeadVar__3__tmp_copy_3 = erl_backend__elds__V_671_671;

                                    erl_backend__elds__HeadVar__3_3 = erl_backend__elds__HeadVar__3__tmp_copy_3;
                                    erl_backend__elds__HeadVar__2_2 = erl_backend__elds__HeadVar__2__tmp_copy_2;
                                  }
                                  continue;
                                }
                            }
                            break;
                          case (MR_Integer) 10:
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
                            break;
                        }
                        break;
                    }
                  }
                  break;
                case (MR_Integer) 10:
                  {
                    MR_Word erl_backend__elds__V_755_755 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));

                    switch (MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 2:
                        *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 3:
                        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)))) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
                            break;
                          case (MR_Integer) 1:
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
                            break;
                          case (MR_Integer) 2:
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
                            break;
                          case (MR_Integer) 3:
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
                            break;
                          case (MR_Integer) 4:
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
                            break;
                          case (MR_Integer) 5:
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
                            break;
                          case (MR_Integer) 6:
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
                            break;
                          case (MR_Integer) 7:
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
                            break;
                          case (MR_Integer) 8:
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
                            break;
                          case (MR_Integer) 9:
                            *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
                            break;
                          case (MR_Integer) 10:
                            {
                              MR_Word erl_backend__elds__V_714_714 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, (MR_Integer) 1)));

                              {
                                mercury__builtin__compare_3_p_0((MR_Word) &erl_backend__elds_scalar_common_1[11], erl_backend__elds__HeadVar__1_1, ((MR_Box) (erl_backend__elds__V_755_755)), ((MR_Box) (erl_backend__elds__V_714_714)));
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
erl_backend__elds____Unify____elds_expr_0_0(
  MR_Word erl_backend__elds__HeadVar__1_1,
  MR_Word erl_backend__elds__HeadVar__2_2)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool erl_backend__elds__succeeded;
        MR_Integer erl_backend__elds__CastX_53 = (MR_Integer) erl_backend__elds__HeadVar__1_1;
        MR_Integer erl_backend__elds__CastY_54 = (MR_Integer) erl_backend__elds__HeadVar__2_2;

        erl_backend__elds__succeeded = (erl_backend__elds__CastX_53 == erl_backend__elds__CastY_54);
        if (erl_backend__elds__succeeded)
          erl_backend__elds__succeeded = MR_TRUE;
        else
          switch (MR_tag((MR_Word) erl_backend__elds__HeadVar__1_1)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word erl_backend__elds__V_27_27 = (MR_Word) MR_body(((MR_Word) erl_backend__elds__HeadVar__1_1), (MR_Integer) 0);
                MR_Word erl_backend__elds__V_28_28;

                erl_backend__elds__succeeded = ((MR_tag((MR_Word) erl_backend__elds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
                if (erl_backend__elds__succeeded)
                  {
                    erl_backend__elds__V_28_28 = (MR_Word) MR_body(((MR_Word) erl_backend__elds__HeadVar__2_2), (MR_Integer) 0);
                    {
                      erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_clause_0_0(erl_backend__elds__V_27_27, erl_backend__elds__V_28_28);
                    }
                  }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word erl_backend__elds__TypeInfo_55_55;
                MR_Word erl_backend__elds__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds__HeadVar__1_1, (MR_Integer) 0)));
                MR_Word erl_backend__elds__V_4_4;

                erl_backend__elds__succeeded = ((MR_tag((MR_Word) erl_backend__elds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
                if (erl_backend__elds__succeeded)
                  {
                    erl_backend__elds__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)));
                    erl_backend__elds__TypeInfo_55_55 = (MR_Word) &erl_backend__elds_scalar_common_1[14];
                    {
                      erl_backend__elds__succeeded = mercury__builtin__unify_2_p_0(erl_backend__elds__TypeInfo_55_55, ((MR_Box) (erl_backend__elds__V_3_3)), ((MR_Box) (erl_backend__elds__V_4_4)));
                    }
                  }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word erl_backend__elds__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(2), erl_backend__elds__HeadVar__1_1, (MR_Integer) 0)));
                MR_Word erl_backend__elds__V_6_6;

                erl_backend__elds__succeeded = ((MR_tag((MR_Word) erl_backend__elds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
                if (erl_backend__elds__succeeded)
                  {
                    erl_backend__elds__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(2), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)));
                    {
                      erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_term_0_0(erl_backend__elds__V_5_5, erl_backend__elds__V_6_6);
                    }
                  }
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__1_1, (MR_Integer) 0)))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word erl_backend__elds__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__1_1, (MR_Integer) 1)));
                    MR_Word erl_backend__elds__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__1_1, (MR_Integer) 2)));
                    MR_Word erl_backend__elds__V_9_9;
                    MR_Word erl_backend__elds__V_10_10;

                    erl_backend__elds__succeeded = ((((MR_tag((MR_Word) erl_backend__elds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
                    if (erl_backend__elds__succeeded)
                      {
                        erl_backend__elds__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));
                        erl_backend__elds__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 2)));
                        {
                          erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_expr_0_0(erl_backend__elds__V_7_7, erl_backend__elds__V_9_9);
                        }
                        if (erl_backend__elds__succeeded)
                          {
                            /* direct tailcall eliminated */
                            {
                              MR_Word erl_backend__elds__HeadVar__1__tmp_copy_1 = erl_backend__elds__V_8_8;
                              MR_Word erl_backend__elds__HeadVar__2__tmp_copy_2 = erl_backend__elds__V_10_10;

                              erl_backend__elds__HeadVar__2_2 = erl_backend__elds__HeadVar__2__tmp_copy_2;
                              erl_backend__elds__HeadVar__1_1 = erl_backend__elds__HeadVar__1__tmp_copy_1;
                            }
                            continue;
                          }
                      }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word erl_backend__elds__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__1_1, (MR_Integer) 1)));
                    MR_Word erl_backend__elds__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__1_1, (MR_Integer) 2)));
                    MR_Word erl_backend__elds__V_13_13;
                    MR_Word erl_backend__elds__V_14_14;

                    erl_backend__elds__succeeded = ((((MR_tag((MR_Word) erl_backend__elds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
                    if (erl_backend__elds__succeeded)
                      {
                        erl_backend__elds__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));
                        erl_backend__elds__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 2)));
                        erl_backend__elds__succeeded = (erl_backend__elds__V_11_11 == erl_backend__elds__V_13_13);
                        if (erl_backend__elds__succeeded)
                          {
                            /* direct tailcall eliminated */
                            {
                              MR_Word erl_backend__elds__HeadVar__1__tmp_copy_1 = erl_backend__elds__V_12_12;
                              MR_Word erl_backend__elds__HeadVar__2__tmp_copy_2 = erl_backend__elds__V_14_14;

                              erl_backend__elds__HeadVar__2_2 = erl_backend__elds__HeadVar__2__tmp_copy_2;
                              erl_backend__elds__HeadVar__1_1 = erl_backend__elds__HeadVar__1__tmp_copy_1;
                            }
                            continue;
                          }
                      }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word erl_backend__elds__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__1_1, (MR_Integer) 1)));
                    MR_Word erl_backend__elds__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__1_1, (MR_Integer) 2)));
                    MR_Word erl_backend__elds__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__1_1, (MR_Integer) 3)));
                    MR_Word erl_backend__elds__V_18_18;
                    MR_Word erl_backend__elds__V_19_19;
                    MR_Word erl_backend__elds__V_20_20;

                    erl_backend__elds__succeeded = ((((MR_tag((MR_Word) erl_backend__elds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
                    if (erl_backend__elds__succeeded)
                      {
                        erl_backend__elds__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));
                        erl_backend__elds__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 2)));
                        erl_backend__elds__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 3)));
                        erl_backend__elds__succeeded = (erl_backend__elds__V_15_15 == erl_backend__elds__V_18_18);
                        if (erl_backend__elds__succeeded)
                          {
                            {
                              erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_expr_0_0(erl_backend__elds__V_16_16, erl_backend__elds__V_19_19);
                            }
                            if (erl_backend__elds__succeeded)
                              {
                                /* direct tailcall eliminated */
                                {
                                  MR_Word erl_backend__elds__HeadVar__1__tmp_copy_1 = erl_backend__elds__V_17_17;
                                  MR_Word erl_backend__elds__HeadVar__2__tmp_copy_2 = erl_backend__elds__V_20_20;

                                  erl_backend__elds__HeadVar__2_2 = erl_backend__elds__HeadVar__2__tmp_copy_2;
                                  erl_backend__elds__HeadVar__1_1 = erl_backend__elds__HeadVar__1__tmp_copy_1;
                                }
                                continue;
                              }
                          }
                      }
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    MR_Word erl_backend__elds__TypeInfo_56_56;
                    MR_Word erl_backend__elds__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__1_1, (MR_Integer) 1)));
                    MR_Word erl_backend__elds__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__1_1, (MR_Integer) 2)));
                    MR_Word erl_backend__elds__V_23_23;
                    MR_Word erl_backend__elds__V_24_24;

                    erl_backend__elds__succeeded = ((((MR_tag((MR_Word) erl_backend__elds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3)));
                    if (erl_backend__elds__succeeded)
                      {
                        erl_backend__elds__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));
                        erl_backend__elds__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 2)));
                        {
                          erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_call_target_0_0(erl_backend__elds__V_21_21, erl_backend__elds__V_23_23);
                        }
                        if (erl_backend__elds__succeeded)
                          {
                            erl_backend__elds__TypeInfo_56_56 = (MR_Word) &erl_backend__elds_scalar_common_1[14];
                            {
                              erl_backend__elds__succeeded = mercury__builtin__unify_2_p_0(erl_backend__elds__TypeInfo_56_56, ((MR_Box) (erl_backend__elds__V_22_22)), ((MR_Box) (erl_backend__elds__V_24_24)));
                            }
                          }
                      }
                  }
                  break;
                case (MR_Integer) 4:
                  {
                    MR_Word erl_backend__elds__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__1_1, (MR_Integer) 1)));
                    MR_Word erl_backend__elds__V_26_26;

                    erl_backend__elds__succeeded = ((((MR_tag((MR_Word) erl_backend__elds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 4)));
                    if (erl_backend__elds__succeeded)
                      {
                        erl_backend__elds__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));
                        {
                          erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_rtti_id_0_0(erl_backend__elds__V_25_25, erl_backend__elds__V_26_26);
                        }
                      }
                  }
                  break;
                case (MR_Integer) 5:
                  {
                    MR_Word erl_backend__elds__TypeInfo_57_57;
                    MR_Word erl_backend__elds__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__1_1, (MR_Integer) 1)));
                    MR_Word erl_backend__elds__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__1_1, (MR_Integer) 2)));
                    MR_Word erl_backend__elds__V_31_31;
                    MR_Word erl_backend__elds__V_32_32;

                    erl_backend__elds__succeeded = ((((MR_tag((MR_Word) erl_backend__elds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 5)));
                    if (erl_backend__elds__succeeded)
                      {
                        erl_backend__elds__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));
                        erl_backend__elds__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 2)));
                        {
                          erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_expr_0_0(erl_backend__elds__V_29_29, erl_backend__elds__V_31_31);
                        }
                        if (erl_backend__elds__succeeded)
                          {
                            erl_backend__elds__TypeInfo_57_57 = (MR_Word) &erl_backend__elds_scalar_common_1[11];
                            {
                              erl_backend__elds__succeeded = mercury__builtin__unify_2_p_0(erl_backend__elds__TypeInfo_57_57, ((MR_Box) (erl_backend__elds__V_30_30)), ((MR_Box) (erl_backend__elds__V_32_32)));
                            }
                          }
                      }
                  }
                  break;
                case (MR_Integer) 6:
                  {
                    MR_Word erl_backend__elds__TypeInfo_60_60;
                    MR_Word erl_backend__elds__TypeInfo_61_61;
                    MR_Word erl_backend__elds__TypeInfo_62_62;
                    MR_Word erl_backend__elds__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__1_1, (MR_Integer) 1)));
                    MR_Word erl_backend__elds__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__1_1, (MR_Integer) 2)));
                    MR_Word erl_backend__elds__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__1_1, (MR_Integer) 3)));
                    MR_Word erl_backend__elds__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__1_1, (MR_Integer) 4)));
                    MR_Word erl_backend__elds__V_37_37;
                    MR_Word erl_backend__elds__V_38_38;
                    MR_Word erl_backend__elds__V_39_39;
                    MR_Word erl_backend__elds__V_40_40;

                    erl_backend__elds__succeeded = ((((MR_tag((MR_Word) erl_backend__elds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 6)));
                    if (erl_backend__elds__succeeded)
                      {
                        erl_backend__elds__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));
                        erl_backend__elds__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 2)));
                        erl_backend__elds__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 3)));
                        erl_backend__elds__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 4)));
                        {
                          erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_expr_0_0(erl_backend__elds__V_33_33, erl_backend__elds__V_37_37);
                        }
                        if (erl_backend__elds__succeeded)
                          {
                            erl_backend__elds__TypeInfo_60_60 = (MR_Word) &erl_backend__elds_scalar_common_1[11];
                            {
                              erl_backend__elds__succeeded = mercury__builtin__unify_2_p_0(erl_backend__elds__TypeInfo_60_60, ((MR_Box) (erl_backend__elds__V_34_34)), ((MR_Box) (erl_backend__elds__V_38_38)));
                            }
                            if (erl_backend__elds__succeeded)
                              {
                                erl_backend__elds__TypeInfo_61_61 = (MR_Word) &erl_backend__elds_scalar_common_1[12];
                                {
                                  erl_backend__elds__succeeded = mercury__builtin__unify_2_p_0(erl_backend__elds__TypeInfo_61_61, ((MR_Box) (erl_backend__elds__V_35_35)), ((MR_Box) (erl_backend__elds__V_39_39)));
                                }
                                if (erl_backend__elds__succeeded)
                                  {
                                    erl_backend__elds__TypeInfo_62_62 = (MR_Word) &erl_backend__elds_scalar_common_1[13];
                                    {
                                      erl_backend__elds__succeeded = mercury__builtin__unify_2_p_0(erl_backend__elds__TypeInfo_62_62, ((MR_Box) (erl_backend__elds__V_36_36)), ((MR_Box) (erl_backend__elds__V_40_40)));
                                    }
                                  }
                              }
                          }
                      }
                  }
                  break;
                case (MR_Integer) 7:
                  {
                    MR_Word erl_backend__elds__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__1_1, (MR_Integer) 1)));
                    MR_Word erl_backend__elds__V_42_42;

                    erl_backend__elds__succeeded = ((((MR_tag((MR_Word) erl_backend__elds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 7)));
                    if (erl_backend__elds__succeeded)
                      {
                        erl_backend__elds__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));
                        /* direct tailcall eliminated */
                        {
                          MR_Word erl_backend__elds__HeadVar__1__tmp_copy_1 = erl_backend__elds__V_41_41;
                          MR_Word erl_backend__elds__HeadVar__2__tmp_copy_2 = erl_backend__elds__V_42_42;

                          erl_backend__elds__HeadVar__2_2 = erl_backend__elds__HeadVar__2__tmp_copy_2;
                          erl_backend__elds__HeadVar__1_1 = erl_backend__elds__HeadVar__1__tmp_copy_1;
                        }
                        continue;
                      }
                  }
                  break;
                case (MR_Integer) 8:
                  {
                    MR_String erl_backend__elds__V_43_43 = ((MR_String) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__1_1, (MR_Integer) 1)));
                    MR_Word erl_backend__elds__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__1_1, (MR_Integer) 2)));
                    MR_String erl_backend__elds__V_45_45;
                    MR_Word erl_backend__elds__V_46_46;

                    erl_backend__elds__succeeded = ((((MR_tag((MR_Word) erl_backend__elds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 8)));
                    if (erl_backend__elds__succeeded)
                      {
                        erl_backend__elds__V_45_45 = ((MR_String) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));
                        erl_backend__elds__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 2)));
                        erl_backend__elds__succeeded = (strcmp(erl_backend__elds__V_43_43, erl_backend__elds__V_45_45) == 0);
                        if (erl_backend__elds__succeeded)
                          {
                            erl_backend__elds__succeeded = mercury__term____Unify____context_0_0(erl_backend__elds__V_44_44, erl_backend__elds__V_46_46);
                          }
                      }
                  }
                  break;
                case (MR_Integer) 9:
                  {
                    MR_Word erl_backend__elds__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__1_1, (MR_Integer) 1)));
                    MR_Word erl_backend__elds__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__1_1, (MR_Integer) 2)));
                    MR_Word erl_backend__elds__V_49_49;
                    MR_Word erl_backend__elds__V_50_50;

                    erl_backend__elds__succeeded = ((((MR_tag((MR_Word) erl_backend__elds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 9)));
                    if (erl_backend__elds__succeeded)
                      {
                        erl_backend__elds__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));
                        erl_backend__elds__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 2)));
                        {
                          erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_expr_0_0(erl_backend__elds__V_47_47, erl_backend__elds__V_49_49);
                        }
                        if (erl_backend__elds__succeeded)
                          {
                            /* direct tailcall eliminated */
                            {
                              MR_Word erl_backend__elds__HeadVar__1__tmp_copy_1 = erl_backend__elds__V_48_48;
                              MR_Word erl_backend__elds__HeadVar__2__tmp_copy_2 = erl_backend__elds__V_50_50;

                              erl_backend__elds__HeadVar__2_2 = erl_backend__elds__HeadVar__2__tmp_copy_2;
                              erl_backend__elds__HeadVar__1_1 = erl_backend__elds__HeadVar__1__tmp_copy_1;
                            }
                            continue;
                          }
                      }
                  }
                  break;
                case (MR_Integer) 10:
                  {
                    MR_Word erl_backend__elds__TypeInfo_59_59;
                    MR_Word erl_backend__elds__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__1_1, (MR_Integer) 1)));
                    MR_Word erl_backend__elds__V_52_52;

                    erl_backend__elds__succeeded = ((((MR_tag((MR_Word) erl_backend__elds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 10)));
                    if (erl_backend__elds__succeeded)
                      {
                        erl_backend__elds__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));
                        erl_backend__elds__TypeInfo_59_59 = (MR_Word) &erl_backend__elds_scalar_common_1[11];
                        {
                          erl_backend__elds__succeeded = mercury__builtin__unify_2_p_0(erl_backend__elds__TypeInfo_59_59, ((MR_Box) (erl_backend__elds__V_51_51)), ((MR_Box) (erl_backend__elds__V_52_52)));
                        }
                      }
                  }
                  break;
              }
              break;
          }
        return erl_backend__elds__succeeded;
      }
      break;
    }
}

void MR_CALL 
erl_backend__elds____Compare____elds_defn_0_0(
  MR_Word * erl_backend__elds__HeadVar__1_1,
  MR_Word erl_backend__elds__HeadVar__2_2,
  MR_Word erl_backend__elds__HeadVar__3_3)
{
  {
    MR_bool erl_backend__elds__succeeded;
    MR_Integer erl_backend__elds__CastX_15 = (MR_Integer) erl_backend__elds__HeadVar__2_2;
    MR_Integer erl_backend__elds__CastY_16 = (MR_Integer) erl_backend__elds__HeadVar__3_3;

    erl_backend__elds__succeeded = (erl_backend__elds__CastX_15 == erl_backend__elds__CastY_16);
    if (erl_backend__elds__succeeded)
      *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word erl_backend__elds__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word erl_backend__elds__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word erl_backend__elds__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word erl_backend__elds__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word erl_backend__elds__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word erl_backend__elds__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word erl_backend__elds__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word erl_backend__elds__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word erl_backend__elds__V_12_12;

        {
          hlds__hlds_pred____Compare____pred_proc_id_0_0(&erl_backend__elds__V_12_12, erl_backend__elds__V_4_4, erl_backend__elds__V_8_8);
        }
        erl_backend__elds__succeeded = (erl_backend__elds__V_12_12 == (MR_Integer) 0);
        erl_backend__elds__succeeded = !(erl_backend__elds__succeeded);
        if (erl_backend__elds__succeeded)
          *erl_backend__elds__HeadVar__1_1 = erl_backend__elds__V_12_12;
        else
          {
            MR_Word erl_backend__elds__V_13_13;

            {
              mercury__builtin__compare_3_p_0((MR_Word) &erl_backend__elds_scalar_common_1[9], &erl_backend__elds__V_13_13, ((MR_Box) (erl_backend__elds__V_5_5)), ((MR_Box) (erl_backend__elds__V_9_9)));
            }
            erl_backend__elds__succeeded = (erl_backend__elds__V_13_13 == (MR_Integer) 0);
            erl_backend__elds__succeeded = !(erl_backend__elds__succeeded);
            if (erl_backend__elds__succeeded)
              *erl_backend__elds__HeadVar__1_1 = erl_backend__elds__V_13_13;
            else
              {
                MR_Word erl_backend__elds__V_14_14;

                {
                  erl_backend__elds____Compare____elds_body_0_0(&erl_backend__elds__V_14_14, erl_backend__elds__V_6_6, erl_backend__elds__V_10_10);
                }
                erl_backend__elds__succeeded = (erl_backend__elds__V_14_14 == (MR_Integer) 0);
                erl_backend__elds__succeeded = !(erl_backend__elds__succeeded);
                if (erl_backend__elds__succeeded)
                  *erl_backend__elds__HeadVar__1_1 = erl_backend__elds__V_14_14;
                else
                  {
                    {
                      mercury__builtin__compare_3_p_0((MR_Word) &erl_backend__elds_scalar_common_1[10], erl_backend__elds__HeadVar__1_1, ((MR_Box) (erl_backend__elds__V_7_7)), ((MR_Box) (erl_backend__elds__V_11_11)));
                    }
                  }
              }
          }
      }
  }
}

MR_bool MR_CALL 
erl_backend__elds____Unify____elds_defn_0_0(
  MR_Word erl_backend__elds__HeadVar__1_1,
  MR_Word erl_backend__elds__HeadVar__2_2)
{
  {
    MR_bool erl_backend__elds__succeeded;
    MR_Integer erl_backend__elds__CastX_11 = (MR_Integer) erl_backend__elds__HeadVar__1_1;
    MR_Integer erl_backend__elds__CastY_12 = (MR_Integer) erl_backend__elds__HeadVar__2_2;

    erl_backend__elds__succeeded = (erl_backend__elds__CastX_11 == erl_backend__elds__CastY_12);
    if (erl_backend__elds__succeeded)
      erl_backend__elds__succeeded = MR_TRUE;
    else
      {
        MR_Word erl_backend__elds__TypeInfo_14_14;
        MR_Word erl_backend__elds__TypeInfo_15_15;
        MR_Word erl_backend__elds__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word erl_backend__elds__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word erl_backend__elds__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word erl_backend__elds__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__1_1, (MR_Integer) 3)));
        MR_Word erl_backend__elds__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word erl_backend__elds__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word erl_backend__elds__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word erl_backend__elds__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 3)));

        {
          erl_backend__elds__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(erl_backend__elds__V_3_3, erl_backend__elds__V_7_7);
        }
        if (erl_backend__elds__succeeded)
          {
            erl_backend__elds__TypeInfo_14_14 = (MR_Word) &erl_backend__elds_scalar_common_1[9];
            {
              erl_backend__elds__succeeded = mercury__builtin__unify_2_p_0(erl_backend__elds__TypeInfo_14_14, ((MR_Box) (erl_backend__elds__V_4_4)), ((MR_Box) (erl_backend__elds__V_8_8)));
            }
            if (erl_backend__elds__succeeded)
              {
                {
                  erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_body_0_0(erl_backend__elds__V_5_5, erl_backend__elds__V_9_9);
                }
                if (erl_backend__elds__succeeded)
                  {
                    erl_backend__elds__TypeInfo_15_15 = (MR_Word) &erl_backend__elds_scalar_common_1[10];
                    {
                      erl_backend__elds__succeeded = mercury__builtin__unify_2_p_0(erl_backend__elds__TypeInfo_15_15, ((MR_Box) (erl_backend__elds__V_6_6)), ((MR_Box) (erl_backend__elds__V_10_10)));
                    }
                  }
              }
          }
      }
    return erl_backend__elds__succeeded;
  }
}

void MR_CALL 
erl_backend__elds____Compare____elds_clause_0_0(
  MR_Word * erl_backend__elds__HeadVar__1_1,
  MR_Word erl_backend__elds__HeadVar__2_2,
  MR_Word erl_backend__elds__HeadVar__3_3)
{
  {
    MR_bool erl_backend__elds__succeeded;
    MR_Integer erl_backend__elds__CastX_9 = (MR_Integer) erl_backend__elds__HeadVar__2_2;
    MR_Integer erl_backend__elds__CastY_10 = (MR_Integer) erl_backend__elds__HeadVar__3_3;

    erl_backend__elds__succeeded = (erl_backend__elds__CastX_9 == erl_backend__elds__CastY_10);
    if (erl_backend__elds__succeeded)
      *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word erl_backend__elds__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word erl_backend__elds__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word erl_backend__elds__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word erl_backend__elds__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word erl_backend__elds__V_8_8;

        {
          mercury__builtin__compare_3_p_0((MR_Word) &erl_backend__elds_scalar_common_1[8], &erl_backend__elds__V_8_8, ((MR_Box) (erl_backend__elds__V_4_4)), ((MR_Box) (erl_backend__elds__V_6_6)));
        }
        erl_backend__elds__succeeded = (erl_backend__elds__V_8_8 == (MR_Integer) 0);
        erl_backend__elds__succeeded = !(erl_backend__elds__succeeded);
        if (erl_backend__elds__succeeded)
          *erl_backend__elds__HeadVar__1_1 = erl_backend__elds__V_8_8;
        else
          {
            erl_backend__elds____Compare____elds_expr_0_0(erl_backend__elds__HeadVar__1_1, erl_backend__elds__V_5_5, erl_backend__elds__V_7_7);
          }
      }
  }
}

MR_bool MR_CALL 
erl_backend__elds____Unify____elds_clause_0_0(
  MR_Word erl_backend__elds__HeadVar__1_1,
  MR_Word erl_backend__elds__HeadVar__2_2)
{
  {
    MR_bool erl_backend__elds__succeeded;
    MR_Integer erl_backend__elds__CastX_7 = (MR_Integer) erl_backend__elds__HeadVar__1_1;
    MR_Integer erl_backend__elds__CastY_8 = (MR_Integer) erl_backend__elds__HeadVar__2_2;

    erl_backend__elds__succeeded = (erl_backend__elds__CastX_7 == erl_backend__elds__CastY_8);
    if (erl_backend__elds__succeeded)
      erl_backend__elds__succeeded = MR_TRUE;
    else
      {
        MR_Word erl_backend__elds__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word erl_backend__elds__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word erl_backend__elds__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word erl_backend__elds__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));

        {
          erl_backend__elds__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &erl_backend__elds_scalar_common_1[8], ((MR_Box) (erl_backend__elds__V_3_3)), ((MR_Box) (erl_backend__elds__V_5_5)));
        }
        if (erl_backend__elds__succeeded)
          {
            erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_expr_0_0(erl_backend__elds__V_4_4, erl_backend__elds__V_6_6);
          }
      }
    return erl_backend__elds__succeeded;
  }
}

void MR_CALL 
erl_backend__elds____Compare____elds_catch_0_0(
  MR_Word * erl_backend__elds__HeadVar__1_1,
  MR_Word erl_backend__elds__HeadVar__2_2,
  MR_Word erl_backend__elds__HeadVar__3_3)
{
  {
    MR_bool erl_backend__elds__succeeded;
    MR_Integer erl_backend__elds__CastX_12 = (MR_Integer) erl_backend__elds__HeadVar__2_2;
    MR_Integer erl_backend__elds__CastY_13 = (MR_Integer) erl_backend__elds__HeadVar__3_3;

    erl_backend__elds__succeeded = (erl_backend__elds__CastX_12 == erl_backend__elds__CastY_13);
    if (erl_backend__elds__succeeded)
      *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word erl_backend__elds__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word erl_backend__elds__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word erl_backend__elds__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word erl_backend__elds__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word erl_backend__elds__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word erl_backend__elds__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word erl_backend__elds__V_10_10;

        {
          erl_backend__elds____Compare____elds_term_0_0(&erl_backend__elds__V_10_10, erl_backend__elds__V_4_4, erl_backend__elds__V_7_7);
        }
        erl_backend__elds__succeeded = (erl_backend__elds__V_10_10 == (MR_Integer) 0);
        erl_backend__elds__succeeded = !(erl_backend__elds__succeeded);
        if (erl_backend__elds__succeeded)
          *erl_backend__elds__HeadVar__1_1 = erl_backend__elds__V_10_10;
        else
          {
            MR_Word erl_backend__elds__V_11_11;

            {
              erl_backend__elds____Compare____elds_term_0_0(&erl_backend__elds__V_11_11, erl_backend__elds__V_5_5, erl_backend__elds__V_8_8);
            }
            erl_backend__elds__succeeded = (erl_backend__elds__V_11_11 == (MR_Integer) 0);
            erl_backend__elds__succeeded = !(erl_backend__elds__succeeded);
            if (erl_backend__elds__succeeded)
              *erl_backend__elds__HeadVar__1_1 = erl_backend__elds__V_11_11;
            else
              {
                erl_backend__elds____Compare____elds_expr_0_0(erl_backend__elds__HeadVar__1_1, erl_backend__elds__V_6_6, erl_backend__elds__V_9_9);
              }
          }
      }
  }
}

MR_bool MR_CALL 
erl_backend__elds____Unify____elds_catch_0_0(
  MR_Word erl_backend__elds__HeadVar__1_1,
  MR_Word erl_backend__elds__HeadVar__2_2)
{
  {
    MR_bool erl_backend__elds__succeeded;
    MR_Integer erl_backend__elds__CastX_9 = (MR_Integer) erl_backend__elds__HeadVar__1_1;
    MR_Integer erl_backend__elds__CastY_10 = (MR_Integer) erl_backend__elds__HeadVar__2_2;

    erl_backend__elds__succeeded = (erl_backend__elds__CastX_9 == erl_backend__elds__CastY_10);
    if (erl_backend__elds__succeeded)
      erl_backend__elds__succeeded = MR_TRUE;
    else
      {
        MR_Word erl_backend__elds__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word erl_backend__elds__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word erl_backend__elds__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word erl_backend__elds__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word erl_backend__elds__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word erl_backend__elds__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 2)));

        {
          erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_term_0_0(erl_backend__elds__V_3_3, erl_backend__elds__V_6_6);
        }
        if (erl_backend__elds__succeeded)
          {
            {
              erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_term_0_0(erl_backend__elds__V_4_4, erl_backend__elds__V_7_7);
            }
            if (erl_backend__elds__succeeded)
              {
                erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_expr_0_0(erl_backend__elds__V_5_5, erl_backend__elds__V_8_8);
              }
          }
      }
    return erl_backend__elds__succeeded;
  }
}

void MR_CALL 
erl_backend__elds____Compare____elds_case_0_0(
  MR_Word * erl_backend__elds__HeadVar__1_1,
  MR_Word erl_backend__elds__HeadVar__2_2,
  MR_Word erl_backend__elds__HeadVar__3_3)
{
  {
    MR_bool erl_backend__elds__succeeded;
    MR_Integer erl_backend__elds__CastX_9 = (MR_Integer) erl_backend__elds__HeadVar__2_2;
    MR_Integer erl_backend__elds__CastY_10 = (MR_Integer) erl_backend__elds__HeadVar__3_3;

    erl_backend__elds__succeeded = (erl_backend__elds__CastX_9 == erl_backend__elds__CastY_10);
    if (erl_backend__elds__succeeded)
      *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word erl_backend__elds__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word erl_backend__elds__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word erl_backend__elds__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word erl_backend__elds__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word erl_backend__elds__V_8_8;

        {
          erl_backend__elds____Compare____elds_term_0_0(&erl_backend__elds__V_8_8, erl_backend__elds__V_4_4, erl_backend__elds__V_6_6);
        }
        erl_backend__elds__succeeded = (erl_backend__elds__V_8_8 == (MR_Integer) 0);
        erl_backend__elds__succeeded = !(erl_backend__elds__succeeded);
        if (erl_backend__elds__succeeded)
          *erl_backend__elds__HeadVar__1_1 = erl_backend__elds__V_8_8;
        else
          {
            erl_backend__elds____Compare____elds_expr_0_0(erl_backend__elds__HeadVar__1_1, erl_backend__elds__V_5_5, erl_backend__elds__V_7_7);
          }
      }
  }
}

MR_bool MR_CALL 
erl_backend__elds____Unify____elds_case_0_0(
  MR_Word erl_backend__elds__HeadVar__1_1,
  MR_Word erl_backend__elds__HeadVar__2_2)
{
  {
    MR_bool erl_backend__elds__succeeded;
    MR_Integer erl_backend__elds__CastX_7 = (MR_Integer) erl_backend__elds__HeadVar__1_1;
    MR_Integer erl_backend__elds__CastY_8 = (MR_Integer) erl_backend__elds__HeadVar__2_2;

    erl_backend__elds__succeeded = (erl_backend__elds__CastX_7 == erl_backend__elds__CastY_8);
    if (erl_backend__elds__succeeded)
      erl_backend__elds__succeeded = MR_TRUE;
    else
      {
        MR_Word erl_backend__elds__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word erl_backend__elds__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word erl_backend__elds__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word erl_backend__elds__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));

        {
          erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_term_0_0(erl_backend__elds__V_3_3, erl_backend__elds__V_5_5);
        }
        if (erl_backend__elds__succeeded)
          {
            erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_expr_0_0(erl_backend__elds__V_4_4, erl_backend__elds__V_6_6);
          }
      }
    return erl_backend__elds__succeeded;
  }
}

void MR_CALL 
erl_backend__elds____Compare____elds_call_target_0_0(
  MR_Word * erl_backend__elds__HeadVar__1_1,
  MR_Word erl_backend__elds__HeadVar__2_2,
  MR_Word erl_backend__elds__HeadVar__3_3)
{
  {
    MR_bool erl_backend__elds__succeeded;
    MR_Integer erl_backend__elds__CastX_22 = (MR_Integer) erl_backend__elds__HeadVar__2_2;
    MR_Integer erl_backend__elds__CastY_23 = (MR_Integer) erl_backend__elds__HeadVar__3_3;

    erl_backend__elds__succeeded = (erl_backend__elds__CastX_22 == erl_backend__elds__CastY_23);
    if (erl_backend__elds__succeeded)
      *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) erl_backend__elds__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word erl_backend__elds__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word erl_backend__elds__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)));

                  {
                    hlds__hlds_pred____Compare____pred_proc_id_0_0(erl_backend__elds__HeadVar__1_1, erl_backend__elds__V_29_29, erl_backend__elds__V_5_5);
                  }
                }
                break;
              case (MR_Integer) 1:
                *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 2:
                *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word erl_backend__elds__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word erl_backend__elds__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)));

                  {
                    erl_backend__elds____Compare____elds_expr_0_0(erl_backend__elds__HeadVar__1_1, erl_backend__elds__V_28_28, erl_backend__elds__V_13_13);
                  }
                }
                break;
              case (MR_Integer) 2:
                *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_String erl_backend__elds__V_27_27 = ((MR_String) (MR_hl_field(MR_mktag(2), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_String erl_backend__elds__V_21_21 = ((MR_String) (MR_hl_field(MR_mktag(2), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)));

                  {
                    mercury__private_builtin__builtin_compare_string_3_p_0(erl_backend__elds__HeadVar__1_1, erl_backend__elds__V_27_27, erl_backend__elds__V_21_21);
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
erl_backend__elds____Unify____elds_call_target_0_0(
  MR_Word erl_backend__elds__HeadVar__1_1,
  MR_Word erl_backend__elds__HeadVar__2_2)
{
  {
    MR_bool erl_backend__elds__succeeded;
    MR_Integer erl_backend__elds__CastX_9 = (MR_Integer) erl_backend__elds__HeadVar__1_1;
    MR_Integer erl_backend__elds__CastY_10 = (MR_Integer) erl_backend__elds__HeadVar__2_2;

    erl_backend__elds__succeeded = (erl_backend__elds__CastX_9 == erl_backend__elds__CastY_10);
    if (erl_backend__elds__succeeded)
      erl_backend__elds__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) erl_backend__elds__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word erl_backend__elds__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word erl_backend__elds__V_4_4;

            erl_backend__elds__succeeded = ((MR_tag((MR_Word) erl_backend__elds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
            if (erl_backend__elds__succeeded)
              {
                erl_backend__elds__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)));
                {
                  erl_backend__elds__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(erl_backend__elds__V_3_3, erl_backend__elds__V_4_4);
                }
              }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word erl_backend__elds__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word erl_backend__elds__V_6_6;

            erl_backend__elds__succeeded = ((MR_tag((MR_Word) erl_backend__elds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (erl_backend__elds__succeeded)
              {
                erl_backend__elds__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)));
                {
                  erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_expr_0_0(erl_backend__elds__V_5_5, erl_backend__elds__V_6_6);
                }
              }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_String erl_backend__elds__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(2), erl_backend__elds__HeadVar__1_1, (MR_Integer) 0)));
            MR_String erl_backend__elds__V_8_8;

            erl_backend__elds__succeeded = ((MR_tag((MR_Word) erl_backend__elds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (erl_backend__elds__succeeded)
              {
                erl_backend__elds__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(2), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)));
                erl_backend__elds__succeeded = (strcmp(erl_backend__elds__V_7_7, erl_backend__elds__V_8_8) == 0);
              }
          }
          break;
      }
    return erl_backend__elds__succeeded;
  }
}

void MR_CALL 
erl_backend__elds____Compare____elds_body_0_0(
  MR_Word * erl_backend__elds__HeadVar__1_1,
  MR_Word erl_backend__elds__HeadVar__2_2,
  MR_Word erl_backend__elds__HeadVar__3_3)
{
  {
    MR_bool erl_backend__elds__succeeded;
    MR_Integer erl_backend__elds__CastX_12 = (MR_Integer) erl_backend__elds__HeadVar__2_2;
    MR_Integer erl_backend__elds__CastY_13 = (MR_Integer) erl_backend__elds__HeadVar__3_3;

    erl_backend__elds__succeeded = (erl_backend__elds__CastX_12 == erl_backend__elds__CastY_13);
    if (erl_backend__elds__succeeded)
      *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word erl_backend__elds__V_16_16 = (MR_Word) MR_body(((MR_Word) erl_backend__elds__HeadVar__2_2), (MR_Integer) 0);

        if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
          {
            MR_Word erl_backend__elds__V_5_5 = (MR_Word) MR_body(((MR_Word) erl_backend__elds__HeadVar__3_3), (MR_Integer) 0);

            {
              erl_backend__elds____Compare____elds_clause_0_0(erl_backend__elds__HeadVar__1_1, erl_backend__elds__V_16_16, erl_backend__elds__V_5_5);
            }
          }
        else
          *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 1;
      }
    else
      {
        MR_Integer erl_backend__elds__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)));

        if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
          *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 2;
        else
          {
            MR_Integer erl_backend__elds__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)));

            {
              mercury__private_builtin__builtin_compare_int_3_p_0(erl_backend__elds__HeadVar__1_1, erl_backend__elds__V_17_17, erl_backend__elds__V_11_11);
            }
          }
      }
  }
}

MR_bool MR_CALL 
erl_backend__elds____Unify____elds_body_0_0(
  MR_Word erl_backend__elds__HeadVar__1_1,
  MR_Word erl_backend__elds__HeadVar__2_2)
{
  {
    MR_bool erl_backend__elds__succeeded;
    MR_Integer erl_backend__elds__CastX_7 = (MR_Integer) erl_backend__elds__HeadVar__1_1;
    MR_Integer erl_backend__elds__CastY_8 = (MR_Integer) erl_backend__elds__HeadVar__2_2;

    erl_backend__elds__succeeded = (erl_backend__elds__CastX_7 == erl_backend__elds__CastY_8);
    if (erl_backend__elds__succeeded)
      erl_backend__elds__succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word erl_backend__elds__V_3_3 = (MR_Word) MR_body(((MR_Word) erl_backend__elds__HeadVar__1_1), (MR_Integer) 0);
        MR_Word erl_backend__elds__V_4_4;

        erl_backend__elds__succeeded = ((MR_tag((MR_Word) erl_backend__elds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
        if (erl_backend__elds__succeeded)
          {
            erl_backend__elds__V_4_4 = (MR_Word) MR_body(((MR_Word) erl_backend__elds__HeadVar__2_2), (MR_Integer) 0);
            {
              erl_backend__elds__succeeded = erl_backend__elds____Unify____elds_clause_0_0(erl_backend__elds__V_3_3, erl_backend__elds__V_4_4);
            }
          }
      }
    else
      {
        MR_Integer erl_backend__elds__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), erl_backend__elds__HeadVar__1_1, (MR_Integer) 0)));
        MR_Integer erl_backend__elds__V_6_6;

        erl_backend__elds__succeeded = ((MR_tag((MR_Word) erl_backend__elds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
        if (erl_backend__elds__succeeded)
          {
            erl_backend__elds__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)));
            erl_backend__elds__succeeded = (erl_backend__elds__V_5_5 == erl_backend__elds__V_6_6);
          }
      }
    return erl_backend__elds__succeeded;
  }
}

void MR_CALL 
erl_backend__elds____Compare____elds_binop_0_0(
  MR_Word * erl_backend__elds__HeadVar__1_1,
  MR_Word erl_backend__elds__HeadVar__2_2,
  MR_Word erl_backend__elds__HeadVar__3_3)
{
  {
    MR_bool erl_backend__elds__succeeded;
    MR_Integer erl_backend__elds__Cast_HeadVar1_4 = (MR_Integer) erl_backend__elds__HeadVar__2_2;
    MR_Integer erl_backend__elds__Cast_HeadVar2_5 = (MR_Integer) erl_backend__elds__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(erl_backend__elds__HeadVar__1_1, erl_backend__elds__Cast_HeadVar1_4, erl_backend__elds__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
erl_backend__elds____Unify____elds_binop_0_0(
  MR_Word erl_backend__elds__HeadVar__2_1,
  MR_Word erl_backend__elds__HeadVar__2_2)
{
  {
    MR_bool erl_backend__elds__succeeded = (erl_backend__elds__HeadVar__2_1 == erl_backend__elds__HeadVar__2_2);

    return erl_backend__elds__succeeded;
  }
}

void MR_CALL 
erl_backend__elds____Compare____elds_0_0(
  MR_Word * erl_backend__elds__HeadVar__1_1,
  MR_Word erl_backend__elds__HeadVar__2_2,
  MR_Word erl_backend__elds__HeadVar__3_3)
{
  {
    MR_bool erl_backend__elds__succeeded;
    MR_Integer erl_backend__elds__CastX_30 = (MR_Integer) erl_backend__elds__HeadVar__2_2;
    MR_Integer erl_backend__elds__CastY_31 = (MR_Integer) erl_backend__elds__HeadVar__3_3;

    erl_backend__elds__succeeded = (erl_backend__elds__CastX_30 == erl_backend__elds__CastY_31);
    if (erl_backend__elds__succeeded)
      *erl_backend__elds__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word erl_backend__elds__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word erl_backend__elds__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word erl_backend__elds__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word erl_backend__elds__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word erl_backend__elds__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word erl_backend__elds__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 5)));
        MR_Word erl_backend__elds__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 6)));
        MR_Word erl_backend__elds__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 7)));
        MR_Word erl_backend__elds__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 8)));
        MR_Word erl_backend__elds__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word erl_backend__elds__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word erl_backend__elds__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word erl_backend__elds__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word erl_backend__elds__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__3_3, (MR_Integer) 4)));
        MR_Word erl_backend__elds__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__3_3, (MR_Integer) 5)));
        MR_Word erl_backend__elds__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__3_3, (MR_Integer) 6)));
        MR_Word erl_backend__elds__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__3_3, (MR_Integer) 7)));
        MR_Word erl_backend__elds__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__3_3, (MR_Integer) 8)));
        MR_Word erl_backend__elds__V_22_22;

        {
          mdbcomp__sym_name____Compare____sym_name_0_0(&erl_backend__elds__V_22_22, erl_backend__elds__V_4_4, erl_backend__elds__V_13_13);
        }
        erl_backend__elds__succeeded = (erl_backend__elds__V_22_22 == (MR_Integer) 0);
        erl_backend__elds__succeeded = !(erl_backend__elds__succeeded);
        if (erl_backend__elds__succeeded)
          *erl_backend__elds__HeadVar__1_1 = erl_backend__elds__V_22_22;
        else
          {
            MR_Word erl_backend__elds__V_23_23;

            {
              mercury__builtin__compare_3_p_0((MR_Word) &erl_backend__elds_scalar_common_1[1], &erl_backend__elds__V_23_23, ((MR_Box) (erl_backend__elds__V_5_5)), ((MR_Box) (erl_backend__elds__V_14_14)));
            }
            erl_backend__elds__succeeded = (erl_backend__elds__V_23_23 == (MR_Integer) 0);
            erl_backend__elds__succeeded = !(erl_backend__elds__succeeded);
            if (erl_backend__elds__succeeded)
              *erl_backend__elds__HeadVar__1_1 = erl_backend__elds__V_23_23;
            else
              {
                MR_Word erl_backend__elds__V_24_24;

                {
                  mercury__builtin__compare_3_p_0((MR_Word) &erl_backend__elds_scalar_common_1[2], &erl_backend__elds__V_24_24, ((MR_Box) (erl_backend__elds__V_6_6)), ((MR_Box) (erl_backend__elds__V_15_15)));
                }
                erl_backend__elds__succeeded = (erl_backend__elds__V_24_24 == (MR_Integer) 0);
                erl_backend__elds__succeeded = !(erl_backend__elds__succeeded);
                if (erl_backend__elds__succeeded)
                  *erl_backend__elds__HeadVar__1_1 = erl_backend__elds__V_24_24;
                else
                  {
                    MR_Word erl_backend__elds__V_25_25;

                    {
                      mercury__builtin__compare_3_p_0((MR_Word) &erl_backend__elds_scalar_common_1[3], &erl_backend__elds__V_25_25, ((MR_Box) (erl_backend__elds__V_7_7)), ((MR_Box) (erl_backend__elds__V_16_16)));
                    }
                    erl_backend__elds__succeeded = (erl_backend__elds__V_25_25 == (MR_Integer) 0);
                    erl_backend__elds__succeeded = !(erl_backend__elds__succeeded);
                    if (erl_backend__elds__succeeded)
                      *erl_backend__elds__HeadVar__1_1 = erl_backend__elds__V_25_25;
                    else
                      {
                        MR_Word erl_backend__elds__V_26_26;

                        {
                          mercury__builtin__compare_3_p_0((MR_Word) &erl_backend__elds_scalar_common_1[4], &erl_backend__elds__V_26_26, ((MR_Box) (erl_backend__elds__V_8_8)), ((MR_Box) (erl_backend__elds__V_17_17)));
                        }
                        erl_backend__elds__succeeded = (erl_backend__elds__V_26_26 == (MR_Integer) 0);
                        erl_backend__elds__succeeded = !(erl_backend__elds__succeeded);
                        if (erl_backend__elds__succeeded)
                          *erl_backend__elds__HeadVar__1_1 = erl_backend__elds__V_26_26;
                        else
                          {
                            MR_Word erl_backend__elds__V_27_27;

                            {
                              mercury__builtin__compare_3_p_0((MR_Word) &erl_backend__elds_scalar_common_1[5], &erl_backend__elds__V_27_27, ((MR_Box) (erl_backend__elds__V_9_9)), ((MR_Box) (erl_backend__elds__V_18_18)));
                            }
                            erl_backend__elds__succeeded = (erl_backend__elds__V_27_27 == (MR_Integer) 0);
                            erl_backend__elds__succeeded = !(erl_backend__elds__succeeded);
                            if (erl_backend__elds__succeeded)
                              *erl_backend__elds__HeadVar__1_1 = erl_backend__elds__V_27_27;
                            else
                              {
                                MR_Word erl_backend__elds__V_28_28;

                                {
                                  mercury__builtin__compare_3_p_0((MR_Word) &erl_backend__elds_scalar_common_1[6], &erl_backend__elds__V_28_28, ((MR_Box) (erl_backend__elds__V_10_10)), ((MR_Box) (erl_backend__elds__V_19_19)));
                                }
                                erl_backend__elds__succeeded = (erl_backend__elds__V_28_28 == (MR_Integer) 0);
                                erl_backend__elds__succeeded = !(erl_backend__elds__succeeded);
                                if (erl_backend__elds__succeeded)
                                  *erl_backend__elds__HeadVar__1_1 = erl_backend__elds__V_28_28;
                                else
                                  {
                                    MR_Word erl_backend__elds__V_29_29;

                                    {
                                      mercury__builtin__compare_3_p_0((MR_Word) &erl_backend__elds_scalar_common_1[7], &erl_backend__elds__V_29_29, ((MR_Box) (erl_backend__elds__V_11_11)), ((MR_Box) (erl_backend__elds__V_20_20)));
                                    }
                                    erl_backend__elds__succeeded = (erl_backend__elds__V_29_29 == (MR_Integer) 0);
                                    erl_backend__elds__succeeded = !(erl_backend__elds__succeeded);
                                    if (erl_backend__elds__succeeded)
                                      *erl_backend__elds__HeadVar__1_1 = erl_backend__elds__V_29_29;
                                    else
                                      {
                                        {
                                          mercury__builtin__compare_3_p_0((MR_Word) &erl_backend__elds_scalar_common_1[7], erl_backend__elds__HeadVar__1_1, ((MR_Box) (erl_backend__elds__V_12_12)), ((MR_Box) (erl_backend__elds__V_21_21)));
                                        }
                                      }
                                  }
                              }
                          }
                      }
                  }
              }
          }
      }
  }
}

MR_bool MR_CALL 
erl_backend__elds____Unify____elds_0_0(
  MR_Word erl_backend__elds__HeadVar__1_1,
  MR_Word erl_backend__elds__HeadVar__2_2)
{
  {
    MR_bool erl_backend__elds__succeeded;
    MR_Integer erl_backend__elds__CastX_21 = (MR_Integer) erl_backend__elds__HeadVar__1_1;
    MR_Integer erl_backend__elds__CastY_22 = (MR_Integer) erl_backend__elds__HeadVar__2_2;

    erl_backend__elds__succeeded = (erl_backend__elds__CastX_21 == erl_backend__elds__CastY_22);
    if (erl_backend__elds__succeeded)
      erl_backend__elds__succeeded = MR_TRUE;
    else
      {
        MR_Word erl_backend__elds__TypeInfo_24_24;
        MR_Word erl_backend__elds__TypeInfo_25_25;
        MR_Word erl_backend__elds__TypeInfo_26_26;
        MR_Word erl_backend__elds__TypeInfo_27_27;
        MR_Word erl_backend__elds__TypeInfo_28_28;
        MR_Word erl_backend__elds__TypeInfo_29_29;
        MR_Word erl_backend__elds__TypeInfo_30_30;
        MR_Word erl_backend__elds__TypeInfo_31_31;
        MR_Word erl_backend__elds__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word erl_backend__elds__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word erl_backend__elds__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word erl_backend__elds__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__1_1, (MR_Integer) 3)));
        MR_Word erl_backend__elds__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__1_1, (MR_Integer) 4)));
        MR_Word erl_backend__elds__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__1_1, (MR_Integer) 5)));
        MR_Word erl_backend__elds__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__1_1, (MR_Integer) 6)));
        MR_Word erl_backend__elds__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__1_1, (MR_Integer) 7)));
        MR_Word erl_backend__elds__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__1_1, (MR_Integer) 8)));
        MR_Word erl_backend__elds__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word erl_backend__elds__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word erl_backend__elds__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word erl_backend__elds__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word erl_backend__elds__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word erl_backend__elds__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 5)));
        MR_Word erl_backend__elds__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 6)));
        MR_Word erl_backend__elds__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 7)));
        MR_Word erl_backend__elds__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__2_2, (MR_Integer) 8)));

        {
          erl_backend__elds__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(erl_backend__elds__V_3_3, erl_backend__elds__V_12_12);
        }
        if (erl_backend__elds__succeeded)
          {
            erl_backend__elds__TypeInfo_24_24 = (MR_Word) &erl_backend__elds_scalar_common_1[1];
            {
              erl_backend__elds__succeeded = mercury__builtin__unify_2_p_0(erl_backend__elds__TypeInfo_24_24, ((MR_Box) (erl_backend__elds__V_4_4)), ((MR_Box) (erl_backend__elds__V_13_13)));
            }
            if (erl_backend__elds__succeeded)
              {
                erl_backend__elds__TypeInfo_25_25 = (MR_Word) &erl_backend__elds_scalar_common_1[2];
                {
                  erl_backend__elds__succeeded = mercury__builtin__unify_2_p_0(erl_backend__elds__TypeInfo_25_25, ((MR_Box) (erl_backend__elds__V_5_5)), ((MR_Box) (erl_backend__elds__V_14_14)));
                }
                if (erl_backend__elds__succeeded)
                  {
                    erl_backend__elds__TypeInfo_26_26 = (MR_Word) &erl_backend__elds_scalar_common_1[3];
                    {
                      erl_backend__elds__succeeded = mercury__builtin__unify_2_p_0(erl_backend__elds__TypeInfo_26_26, ((MR_Box) (erl_backend__elds__V_6_6)), ((MR_Box) (erl_backend__elds__V_15_15)));
                    }
                    if (erl_backend__elds__succeeded)
                      {
                        erl_backend__elds__TypeInfo_27_27 = (MR_Word) &erl_backend__elds_scalar_common_1[4];
                        {
                          erl_backend__elds__succeeded = mercury__builtin__unify_2_p_0(erl_backend__elds__TypeInfo_27_27, ((MR_Box) (erl_backend__elds__V_7_7)), ((MR_Box) (erl_backend__elds__V_16_16)));
                        }
                        if (erl_backend__elds__succeeded)
                          {
                            erl_backend__elds__TypeInfo_28_28 = (MR_Word) &erl_backend__elds_scalar_common_1[5];
                            {
                              erl_backend__elds__succeeded = mercury__builtin__unify_2_p_0(erl_backend__elds__TypeInfo_28_28, ((MR_Box) (erl_backend__elds__V_8_8)), ((MR_Box) (erl_backend__elds__V_17_17)));
                            }
                            if (erl_backend__elds__succeeded)
                              {
                                erl_backend__elds__TypeInfo_29_29 = (MR_Word) &erl_backend__elds_scalar_common_1[6];
                                {
                                  erl_backend__elds__succeeded = mercury__builtin__unify_2_p_0(erl_backend__elds__TypeInfo_29_29, ((MR_Box) (erl_backend__elds__V_9_9)), ((MR_Box) (erl_backend__elds__V_18_18)));
                                }
                                if (erl_backend__elds__succeeded)
                                  {
                                    erl_backend__elds__TypeInfo_30_30 = (MR_Word) &erl_backend__elds_scalar_common_1[7];
                                    {
                                      erl_backend__elds__succeeded = mercury__builtin__unify_2_p_0(erl_backend__elds__TypeInfo_30_30, ((MR_Box) (erl_backend__elds__V_10_10)), ((MR_Box) (erl_backend__elds__V_19_19)));
                                    }
                                    if (erl_backend__elds__succeeded)
                                      {
                                        erl_backend__elds__TypeInfo_31_31 = (MR_Word) &erl_backend__elds_scalar_common_1[7];
                                        {
                                          erl_backend__elds__succeeded = mercury__builtin__unify_2_p_0(erl_backend__elds__TypeInfo_31_31, ((MR_Box) (erl_backend__elds__V_11_11)), ((MR_Box) (erl_backend__elds__V_20_20)));
                                        }
                                      }
                                  }
                              }
                          }
                      }
                  }
              }
          }
      }
    return erl_backend__elds__succeeded;
  }
}

MR_Word MR_CALL 
erl_backend__elds__make_enum_alternative_1_f_0(
  MR_String erl_backend__elds__F_3)
{
  {
    MR_bool erl_backend__elds__succeeded;
    MR_Word erl_backend__elds__HeadVar__2_2;
    MR_Word erl_backend__elds__V_4_4;
    MR_Word erl_backend__elds__V_5_5;
    MR_Word erl_backend__elds__V_6_6;
    MR_Word erl_backend__elds__V_7_7;

    {
      erl_backend__elds__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), erl_backend__elds__V_7_7, 0) = ((MR_Box) (erl_backend__elds__F_3));
    }
    {
      erl_backend__elds__V_6_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), erl_backend__elds__V_6_6, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(3), erl_backend__elds__V_6_6, 1) = ((MR_Box) (erl_backend__elds__V_7_7));
    }
    {
      erl_backend__elds__V_5_5 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), erl_backend__elds__V_5_5, 0) = ((MR_Box) (erl_backend__elds__V_6_6));
    }
    {
      erl_backend__elds__V_4_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), erl_backend__elds__V_4_4, 0) = ((MR_Box) (erl_backend__elds__V_5_5));
      MR_hl_field(MR_mktag(1), erl_backend__elds__V_4_4, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      erl_backend__elds__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, 1) = ((MR_Box) (erl_backend__elds__V_4_4));
    }
    return erl_backend__elds__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
erl_backend__elds__tuple_or_single_expr_1_f_0(
  MR_Word erl_backend__elds__List_3)
{
  {
    MR_bool erl_backend__elds__succeeded = ((MR_tag((MR_Word) erl_backend__elds__List_3)) == (MR_mktag((MR_Integer) 1)));
    MR_Word erl_backend__elds__HeadVar__2_2;
    MR_Word erl_backend__elds__SingleExpr_4;
    MR_Word erl_backend__elds__V_5_5;

    if (erl_backend__elds__succeeded)
      {
        erl_backend__elds__SingleExpr_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds__List_3, (MR_Integer) 0)));
        erl_backend__elds__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds__List_3, (MR_Integer) 1)));
        erl_backend__elds__succeeded = (erl_backend__elds__V_5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
    if (erl_backend__elds__succeeded)
      erl_backend__elds__HeadVar__2_2 = erl_backend__elds__SingleExpr_4;
    else
      {
        MR_Word erl_backend__elds__V_6_6;

        {
          erl_backend__elds__V_6_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), erl_backend__elds__V_6_6, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
          MR_hl_field(MR_mktag(3), erl_backend__elds__V_6_6, 1) = ((MR_Box) (erl_backend__elds__List_3));
        }
        {
          erl_backend__elds__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), erl_backend__elds__HeadVar__2_2, 0) = ((MR_Box) (erl_backend__elds__V_6_6));
        }
      }
    return erl_backend__elds__HeadVar__2_2;
  }
}

MR_Integer MR_CALL 
erl_backend__elds__elds_clause_arity_1_f_0(
  MR_Word erl_backend__elds__HeadVar__1_1)
{
  {
    MR_bool erl_backend__elds__succeeded;
    MR_Integer erl_backend__elds__HeadVar__2_2;
    MR_Word erl_backend__elds__Args_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word erl_backend__elds___Expr_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__HeadVar__1_1, (MR_Integer) 1)));

    {
      erl_backend__elds__HeadVar__2_2 = mercury__list__length_1_f_0((MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_term_0, erl_backend__elds__Args_3);
    }
    return erl_backend__elds__HeadVar__2_2;
  }
}

MR_Integer MR_CALL 
erl_backend__elds__elds_body_arity_1_f_0(
  MR_Word erl_backend__elds__HeadVar__1_1)
{
  {
    MR_bool erl_backend__elds__succeeded;
    MR_Integer erl_backend__elds__HeadVar__2_2;

    if (((MR_tag((MR_Word) erl_backend__elds__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word erl_backend__elds__Clause_3 = (MR_Word) MR_body(((MR_Word) erl_backend__elds__HeadVar__1_1), (MR_Integer) 0);
        MR_Word erl_backend__elds__Args_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__Clause_3, (MR_Integer) 0)));
        MR_Word erl_backend__elds___Expr_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds__Clause_3, (MR_Integer) 1)));

        {
          erl_backend__elds__HeadVar__2_2 = mercury__list__length_1_f_0((MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_term_0, erl_backend__elds__Args_5);
        }
      }
    else
      erl_backend__elds__HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(1), erl_backend__elds__HeadVar__1_1, (MR_Integer) 0)));
    return erl_backend__elds__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
erl_backend__elds__det_expr_1_f_0(
  MR_Word erl_backend__elds__HeadVar__1_1)
{
  {
    MR_bool erl_backend__elds__succeeded;
    MR_Word erl_backend__elds__Expr_2;

    if ((erl_backend__elds__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "erl_backend.elds", (MR_String) "function \140erl_backend.elds.det_expr\'/1", (MR_String) "no expression");
        }
      }
    else
      erl_backend__elds__Expr_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds__HeadVar__1_1, (MR_Integer) 0)));
    return erl_backend__elds__Expr_2;
  }
}

MR_Word MR_CALL 
erl_backend__elds__expr_or_void_1_f_0(
  MR_Word erl_backend__elds__HeadVar__1_1)
{
  {
    MR_bool erl_backend__elds__succeeded;
    MR_Word erl_backend__elds__HeadVar__2_2;

    if ((erl_backend__elds__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        erl_backend__elds__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(2), &erl_backend__elds_scalar_common_2[4]);
      }
    else
      erl_backend__elds__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds__HeadVar__1_1, (MR_Integer) 0)));
    return erl_backend__elds__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
erl_backend__elds__maybe_join_exprs1_2_f_0(
  MR_Word erl_backend__elds__HeadVar__1_1,
  MR_Word erl_backend__elds__HeadVar__2_2)
{
  {
    MR_bool erl_backend__elds__succeeded;
    MR_Word erl_backend__elds__HeadVar__3_3;

    if ((erl_backend__elds__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      erl_backend__elds__HeadVar__3_3 = erl_backend__elds__HeadVar__2_2;
    else
      {
        MR_Word erl_backend__elds__ExprA_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds__HeadVar__1_1, (MR_Integer) 0)));

        {
          erl_backend__elds__HeadVar__3_3 = erl_backend__elds__join_exprs_2_f_0(erl_backend__elds__ExprA_4, erl_backend__elds__HeadVar__2_2);
        }
      }
    return erl_backend__elds__HeadVar__3_3;
  }
}

MR_Word MR_CALL 
erl_backend__elds__maybe_join_exprs_2_f_0(
  MR_Word erl_backend__elds__HeadVar__1_1,
  MR_Word erl_backend__elds__HeadVar__2_2)
{
  {
    MR_bool erl_backend__elds__succeeded;
    MR_Word erl_backend__elds__HeadVar__3_3;

    if ((erl_backend__elds__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      erl_backend__elds__HeadVar__3_3 = erl_backend__elds__HeadVar__1_1;
    else
      {
        MR_Word erl_backend__elds__ExprB_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds__HeadVar__2_2, (MR_Integer) 0)));

        {
          erl_backend__elds__HeadVar__3_3 = erl_backend__elds__join_exprs_2_f_0(erl_backend__elds__HeadVar__1_1, erl_backend__elds__ExprB_5);
        }
      }
    return erl_backend__elds__HeadVar__3_3;
  }
}

MR_Word MR_CALL 
erl_backend__elds__join_exprs_2_f_0(
  MR_Word erl_backend__elds__ExprA_4,
  MR_Word erl_backend__elds__ExprB_5)
{
  {
    MR_bool erl_backend__elds__succeeded = ((MR_tag((MR_Word) erl_backend__elds__ExprA_4)) == (MR_mktag((MR_Integer) 1)));
    MR_Word erl_backend__elds__Expr_6;
    MR_Word erl_backend__elds__As_8;
    MR_Word erl_backend__elds__Bs_10;
    MR_Word erl_backend__elds__AsBs_11;
    MR_Word erl_backend__elds__As0_7;
    MR_Word erl_backend__elds__Bs0_9;
    MR_Word erl_backend__elds__SingleExpr_12;
    MR_Word erl_backend__elds__V_15_15;

    if (erl_backend__elds__succeeded)
      {
        erl_backend__elds__As0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds__ExprA_4, (MR_Integer) 0)));
        erl_backend__elds__As_8 = erl_backend__elds__As0_7;
      }
    else
      {
        {
          erl_backend__elds__As_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), erl_backend__elds__As_8, 0) = ((MR_Box) (erl_backend__elds__ExprA_4));
          MR_hl_field(MR_mktag(1), erl_backend__elds__As_8, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
      }
    erl_backend__elds__succeeded = ((MR_tag((MR_Word) erl_backend__elds__ExprB_5)) == (MR_mktag((MR_Integer) 1)));
    if (erl_backend__elds__succeeded)
      {
        erl_backend__elds__Bs0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds__ExprB_5, (MR_Integer) 0)));
        erl_backend__elds__Bs_10 = erl_backend__elds__Bs0_9;
      }
    else
      {
        {
          erl_backend__elds__Bs_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), erl_backend__elds__Bs_10, 0) = ((MR_Box) (erl_backend__elds__ExprB_5));
          MR_hl_field(MR_mktag(1), erl_backend__elds__Bs_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
      }
    {
      erl_backend__elds__AsBs_11 = mercury__list__f_43_43_2_f_0((MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0, erl_backend__elds__As_8, erl_backend__elds__Bs_10);
    }
    erl_backend__elds__succeeded = ((MR_tag((MR_Word) erl_backend__elds__AsBs_11)) == (MR_mktag((MR_Integer) 1)));
    if (erl_backend__elds__succeeded)
      {
        erl_backend__elds__SingleExpr_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds__AsBs_11, (MR_Integer) 0)));
        erl_backend__elds__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds__AsBs_11, (MR_Integer) 1)));
        erl_backend__elds__succeeded = (erl_backend__elds__V_15_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
    if (erl_backend__elds__succeeded)
      erl_backend__elds__Expr_6 = erl_backend__elds__SingleExpr_12;
    else
      {
        erl_backend__elds__Expr_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), erl_backend__elds__Expr_6, 0) = ((MR_Box) (erl_backend__elds__AsBs_11));
      }
    return erl_backend__elds__Expr_6;
  }
}

MR_Word MR_CALL 
erl_backend__elds__expr_to_term_1_f_0(
  MR_Word erl_backend__elds__Expr_3)
{
  {
    MR_bool erl_backend__elds__succeeded = ((MR_tag((MR_Word) erl_backend__elds__Expr_3)) == (MR_mktag((MR_Integer) 2)));
    MR_Word erl_backend__elds__Term_4;
    MR_Word erl_backend__elds__Term0_5;

    if (erl_backend__elds__succeeded)
      {
        erl_backend__elds__Term0_5 = ((MR_Word) (MR_hl_field(MR_mktag(2), erl_backend__elds__Expr_3, (MR_Integer) 0)));
        erl_backend__elds__Term_4 = erl_backend__elds__Term0_5;
      }
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "erl_backend.elds", (MR_String) "function \140erl_backend.elds.expr_to_term\'/1", (MR_String) "unable to convert elds_expr to elds_term");
        }
      }
    return erl_backend__elds__Term_4;
  }
}

static MR_Box MR_CALL 
erl_backend__elds__exprs_from_fixed_vars_1_f_0_1(
  MR_Box erl_backend__elds__closure_arg,
  MR_Box erl_backend__elds__wrapper_arg_1)
{
  {
    MR_Box erl_backend__elds__wrapper_arg_2;
    MR_Box erl_backend__elds__closure = erl_backend__elds__closure_arg;
    MR_Word erl_backend__elds__conv0_LambdaHeadVar__2_7;

    {
      erl_backend__elds__conv0_LambdaHeadVar__2_7 = erl_backend__elds__IntroducedFrom__func__exprs_from_fixed_vars__423__1_1_f_0(((MR_String) erl_backend__elds__wrapper_arg_1));
    }
    erl_backend__elds__wrapper_arg_2 = ((MR_Box) (erl_backend__elds__conv0_LambdaHeadVar__2_7));
    return erl_backend__elds__wrapper_arg_2;
  }
}

MR_Word MR_CALL 
erl_backend__elds__exprs_from_fixed_vars_1_f_0(
  MR_Word erl_backend__elds__Names_3)
{
  {
    MR_bool erl_backend__elds__succeeded;
    MR_Word erl_backend__elds__HeadVar__2_2;

    {
      erl_backend__elds__HeadVar__2_2 = mercury__list__map_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0, (MR_Word) &erl_backend__elds_scalar_common_3[4], erl_backend__elds__Names_3);
    }
    return erl_backend__elds__HeadVar__2_2;
  }
}

static MR_Box MR_CALL 
erl_backend__elds__terms_from_fixed_vars_1_f_0_1(
  MR_Box erl_backend__elds__closure_arg,
  MR_Box erl_backend__elds__wrapper_arg_1)
{
  {
    MR_Box erl_backend__elds__wrapper_arg_2;
    MR_Box erl_backend__elds__closure = erl_backend__elds__closure_arg;
    MR_Word erl_backend__elds__conv0_LambdaHeadVar__2_7;

    {
      erl_backend__elds__conv0_LambdaHeadVar__2_7 = erl_backend__elds__IntroducedFrom__func__terms_from_fixed_vars__421__1_1_f_0(((MR_String) erl_backend__elds__wrapper_arg_1));
    }
    erl_backend__elds__wrapper_arg_2 = ((MR_Box) (erl_backend__elds__conv0_LambdaHeadVar__2_7));
    return erl_backend__elds__wrapper_arg_2;
  }
}

MR_Word MR_CALL 
erl_backend__elds__terms_from_fixed_vars_1_f_0(
  MR_Word erl_backend__elds__Names_3)
{
  {
    MR_bool erl_backend__elds__succeeded;
    MR_Word erl_backend__elds__HeadVar__2_2;

    {
      erl_backend__elds__HeadVar__2_2 = mercury__list__map_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_term_0, (MR_Word) &erl_backend__elds_scalar_common_3[3], erl_backend__elds__Names_3);
    }
    return erl_backend__elds__HeadVar__2_2;
  }
}

static MR_Box MR_CALL 
erl_backend__elds__exprs_from_vars_1_f_0_1(
  MR_Box erl_backend__elds__closure_arg,
  MR_Box erl_backend__elds__wrapper_arg_1)
{
  {
    MR_Box erl_backend__elds__wrapper_arg_2;
    MR_Box erl_backend__elds__closure = erl_backend__elds__closure_arg;
    MR_Word erl_backend__elds__conv0_HeadVar__2_2;

    {
      erl_backend__elds__conv0_HeadVar__2_2 = erl_backend__elds__expr_from_var_1_f_0(((MR_Word) erl_backend__elds__wrapper_arg_1));
    }
    erl_backend__elds__wrapper_arg_2 = ((MR_Box) (erl_backend__elds__conv0_HeadVar__2_2));
    return erl_backend__elds__wrapper_arg_2;
  }
}

MR_Word MR_CALL 
erl_backend__elds__exprs_from_vars_1_f_0(
  MR_Word erl_backend__elds__Vars_3)
{
  {
    MR_bool erl_backend__elds__succeeded;
    MR_Word erl_backend__elds__HeadVar__2_2;

    {
      erl_backend__elds__HeadVar__2_2 = mercury__list__map_2_f_0((MR_Word) &erl_backend__elds_scalar_common_1[0], (MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0, (MR_Word) &erl_backend__elds_scalar_common_3[2], erl_backend__elds__Vars_3);
    }
    return erl_backend__elds__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
erl_backend__elds__expr_from_var_1_f_0(
  MR_Word erl_backend__elds__Var_3)
{
  {
    MR_bool erl_backend__elds__succeeded;
    MR_Word erl_backend__elds__HeadVar__2_2;
    MR_Word erl_backend__elds__V_4_4;

    {
      erl_backend__elds__V_4_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), erl_backend__elds__V_4_4, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
      MR_hl_field(MR_mktag(3), erl_backend__elds__V_4_4, 1) = ((MR_Box) (erl_backend__elds__Var_3));
    }
    {
      erl_backend__elds__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), erl_backend__elds__HeadVar__2_2, 0) = ((MR_Box) (erl_backend__elds__V_4_4));
    }
    return erl_backend__elds__HeadVar__2_2;
  }
}

static MR_Box MR_CALL 
erl_backend__elds__terms_from_vars_1_f_0_1(
  MR_Box erl_backend__elds__closure_arg,
  MR_Box erl_backend__elds__wrapper_arg_1)
{
  {
    MR_Box erl_backend__elds__wrapper_arg_2;
    MR_Box erl_backend__elds__closure = erl_backend__elds__closure_arg;
    MR_Word erl_backend__elds__conv0_HeadVar__2_2;

    {
      erl_backend__elds__conv0_HeadVar__2_2 = erl_backend__elds__term_from_var_1_f_0(((MR_Word) erl_backend__elds__wrapper_arg_1));
    }
    erl_backend__elds__wrapper_arg_2 = ((MR_Box) (erl_backend__elds__conv0_HeadVar__2_2));
    return erl_backend__elds__wrapper_arg_2;
  }
}

MR_Word MR_CALL 
erl_backend__elds__terms_from_vars_1_f_0(
  MR_Word erl_backend__elds__Vars_3)
{
  {
    MR_bool erl_backend__elds__succeeded;
    MR_Word erl_backend__elds__HeadVar__2_2;

    {
      erl_backend__elds__HeadVar__2_2 = mercury__list__map_2_f_0((MR_Word) &erl_backend__elds_scalar_common_1[0], (MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_term_0, (MR_Word) &erl_backend__elds_scalar_common_3[1], erl_backend__elds__Vars_3);
    }
    return erl_backend__elds__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
erl_backend__elds__term_from_var_1_f_0(
  MR_Word erl_backend__elds__Var_3)
{
  {
    MR_bool erl_backend__elds__succeeded;
    MR_Word erl_backend__elds__HeadVar__2_2;

    {
      erl_backend__elds__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
      MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, 1) = ((MR_Box) (erl_backend__elds__Var_3));
    }
    return erl_backend__elds__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
erl_backend__elds__var_eq_false_1_f_0(
  MR_Word erl_backend__elds__Var_3)
{
  {
    MR_bool erl_backend__elds__succeeded;
    MR_Word erl_backend__elds__HeadVar__2_2;
    MR_Word erl_backend__elds__V_4_4;
    MR_Word erl_backend__elds__V_8_8;

    {
      erl_backend__elds__V_8_8 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), erl_backend__elds__V_8_8, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
      MR_hl_field(MR_mktag(3), erl_backend__elds__V_8_8, 1) = ((MR_Box) (erl_backend__elds__Var_3));
    }
    {
      erl_backend__elds__V_4_4 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), erl_backend__elds__V_4_4, 0) = ((MR_Box) (erl_backend__elds__V_8_8));
    }
    {
      erl_backend__elds__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, 1) = ((MR_Box) (erl_backend__elds__V_4_4));
      MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__2_2, 2) = ((MR_Box) (MR_mkword(MR_mktag(2), &erl_backend__elds_scalar_common_2[3])));
    }
    return erl_backend__elds__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
erl_backend__elds__elds_call_self_0_f_0(void)
{
  {
    MR_bool erl_backend__elds__succeeded;

    return (MR_Word) MR_mkword(MR_mktag(3), &erl_backend__elds_scalar_common_3[0]);
  }
}

MR_Word MR_CALL 
erl_backend__elds__elds_call_element_2_f_0(
  MR_Word erl_backend__elds__Var_4,
  MR_Integer erl_backend__elds__Index_5)
{
  {
    MR_bool erl_backend__elds__succeeded;
    MR_Word erl_backend__elds__HeadVar__3_3;
    MR_Word erl_backend__elds__V_7_7;
    MR_Word erl_backend__elds__V_8_8;
    MR_Word erl_backend__elds__V_9_9;
    MR_Word erl_backend__elds__V_10_10;
    MR_Word erl_backend__elds__V_11_11;
    MR_Word erl_backend__elds__V_14_14;

    {
      erl_backend__elds__V_9_9 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), erl_backend__elds__V_9_9, 0) = ((MR_Box) (erl_backend__elds__Index_5));
    }
    {
      erl_backend__elds__V_8_8 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), erl_backend__elds__V_8_8, 0) = ((MR_Box) (erl_backend__elds__V_9_9));
    }
    {
      erl_backend__elds__V_14_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), erl_backend__elds__V_14_14, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
      MR_hl_field(MR_mktag(3), erl_backend__elds__V_14_14, 1) = ((MR_Box) (erl_backend__elds__Var_4));
    }
    {
      erl_backend__elds__V_11_11 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), erl_backend__elds__V_11_11, 0) = ((MR_Box) (erl_backend__elds__V_14_14));
    }
    {
      erl_backend__elds__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), erl_backend__elds__V_10_10, 0) = ((MR_Box) (erl_backend__elds__V_11_11));
      MR_hl_field(MR_mktag(1), erl_backend__elds__V_10_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      erl_backend__elds__V_7_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), erl_backend__elds__V_7_7, 0) = ((MR_Box) (erl_backend__elds__V_8_8));
      MR_hl_field(MR_mktag(1), erl_backend__elds__V_7_7, 1) = ((MR_Box) (erl_backend__elds__V_10_10));
    }
    {
      erl_backend__elds__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &erl_backend__elds_scalar_common_2[1])));
      MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, 2) = ((MR_Box) (erl_backend__elds__V_7_7));
    }
    return erl_backend__elds__HeadVar__3_3;
  }
}

MR_Word MR_CALL 
erl_backend__elds__elds_call_builtin_2_f_0(
  MR_String erl_backend__elds__FunName_4,
  MR_Word erl_backend__elds__Exprs_5)
{
  {
    MR_bool erl_backend__elds__succeeded;
    MR_Word erl_backend__elds__HeadVar__3_3;
    MR_Word erl_backend__elds__V_6_6;

    {
      erl_backend__elds__V_6_6 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), erl_backend__elds__V_6_6, 0) = ((MR_Box) (erl_backend__elds__FunName_4));
    }
    {
      erl_backend__elds__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, 1) = ((MR_Box) (erl_backend__elds__V_6_6));
      MR_hl_field(MR_mktag(3), erl_backend__elds__HeadVar__3_3, 2) = ((MR_Box) (erl_backend__elds__Exprs_5));
    }
    return erl_backend__elds__HeadVar__3_3;
  }
}

MR_Word MR_CALL 
erl_backend__elds__elds_commit_marker_0_f_0(void)
{
  {
    MR_bool erl_backend__elds__succeeded;

    return (MR_Word) MR_mkword(MR_mktag(2), &erl_backend__elds_scalar_common_2[0]);
  }
}

MR_Word MR_CALL 
erl_backend__elds__elds_empty_tuple_0_f_0(void)
{
  {
    MR_bool erl_backend__elds__succeeded;

    return (MR_Word) MR_mkword(MR_mktag(3), &erl_backend__elds_scalar_common_1[19]);
  }
}

MR_Word MR_CALL 
erl_backend__elds__elds_throw_atom_0_f_0(void)
{
  {
    MR_bool erl_backend__elds__succeeded;

    return (MR_Word) MR_mkword(MR_mktag(3), &erl_backend__elds_scalar_common_1[18]);
  }
}

MR_Word MR_CALL 
erl_backend__elds__elds_fail_0_f_0(void)
{
  {
    MR_bool erl_backend__elds__succeeded;

    return (MR_Word) MR_mkword(MR_mktag(3), &erl_backend__elds_scalar_common_1[17]);
  }
}

MR_Word MR_CALL 
erl_backend__elds__elds_false_0_f_0(void)
{
  {
    MR_bool erl_backend__elds__succeeded;

    return (MR_Word) MR_mkword(MR_mktag(3), &erl_backend__elds_scalar_common_1[16]);
  }
}

MR_Word MR_CALL 
erl_backend__elds__elds_true_0_f_0(void)
{
  {
    MR_bool erl_backend__elds__succeeded;

    return (MR_Word) MR_mkword(MR_mktag(3), &erl_backend__elds_scalar_common_1[15]);
  }
}

void mercury__erl_backend__elds__init(void)
{
}

void mercury__erl_backend__elds__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_0);
	MR_register_type_ctor_info(&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_binop_0);
	MR_register_type_ctor_info(&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_body_0);
	MR_register_type_ctor_info(&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_call_target_0);
	MR_register_type_ctor_info(&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_case_0);
	MR_register_type_ctor_info(&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_catch_0);
	MR_register_type_ctor_info(&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_clause_0);
	MR_register_type_ctor_info(&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_defn_0);
	MR_register_type_ctor_info(&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0);
	MR_register_type_ctor_info(&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_foreign_export_defn_0);
	MR_register_type_ctor_info(&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_rtti_defn_0);
	MR_register_type_ctor_info(&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_rtti_id_0);
	MR_register_type_ctor_info(&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_term_0);
	MR_register_type_ctor_info(&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_unop_0);
}

void mercury__erl_backend__elds__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module erl_backend.elds. */
