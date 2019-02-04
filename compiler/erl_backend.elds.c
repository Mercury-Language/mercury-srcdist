/*
** Automatically generated from `elds.m'
** by the Mercury compiler,
** version rotd-2018-08-31
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


// :- module erl_backend.elds.
// :- implementation.

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
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
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

static const MR_DuArgLocn erl_backend__elds__erl_backend__elds__field_locns_elds_expr_0_3[2];

static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_3;

static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_4[3];

static const MR_DuArgLocn erl_backend__elds__erl_backend__elds__field_locns_elds_expr_0_4[3];

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

static const MR_DuArgLocn erl_backend__elds__erl_backend__elds__field_locns_elds_rtti_defn_0_0[4];

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

static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_8[1];

static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_8;

static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_9[1];

static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_9;

static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_10[1];

static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_10;

static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_11[1];

static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_11;

static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_12[1];

static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_12;

static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_13[1];

static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_13;

static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_14[1];

static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_14;

static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_15[1];

static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_15;

static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_16[1];

static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_16;

static const MR_FA_TypeInfo_Struct1 erl_backend__elds__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_17[1];

static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_17;

static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_18;

static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_19[1];

static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_19;

static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_term_0_0[1];

static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_term_0_1[1];

static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_term_0_2[1];

static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_term_0_3[17];

static const MR_DuPtagLayout erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_term_0[4];

static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_name_ordered_elds_term_0[20];

static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_term_0[20];

static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_unop_0_0;

static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_unop_0_1;

static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_unop_0_2;

static const MR_EnumFunctorDesc erl_backend__elds__erl_backend__elds__enum_functor_desc_elds_unop_0_3;

static const MR_EnumFunctorDescPtr erl_backend__elds__erl_backend__elds__enum_value_ordered_elds_unop_0[4];

static const MR_EnumFunctorDescPtr erl_backend__elds__erl_backend__elds__enum_name_ordered_elds_unop_0[4];

static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_unop_0[4];

static MR_Word MR_CALL 
erl_backend__elds__IntroducedFrom__func__exprs_from_fixed_vars__433__1_1_f_0(
  MR_String LambdaHeadVar__1_6);

static MR_Word MR_CALL 
erl_backend__elds__IntroducedFrom__func__terms_from_fixed_vars__431__1_1_f_0(
  MR_String LambdaHeadVar__1_6);

static MR_Box MR_CALL 
erl_backend__elds__exprs_from_fixed_vars_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
erl_backend__elds__terms_from_fixed_vars_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
erl_backend__elds__exprs_from_vars_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
erl_backend__elds__terms_from_vars_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
erl_backend__elds____Compare____elds_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_binop_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
erl_backend__elds____Compare____elds_binop_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_body_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
erl_backend__elds____Compare____elds_body_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_call_target_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
erl_backend__elds____Compare____elds_call_target_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_case_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
erl_backend__elds____Compare____elds_case_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_catch_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
erl_backend__elds____Compare____elds_catch_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_clause_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
erl_backend__elds____Compare____elds_clause_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_defn_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
erl_backend__elds____Compare____elds_defn_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_expr_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
erl_backend__elds____Compare____elds_expr_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_foreign_export_defn_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
erl_backend__elds____Compare____elds_foreign_export_defn_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_rtti_defn_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
erl_backend__elds____Compare____elds_rtti_defn_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_rtti_id_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
erl_backend__elds____Compare____elds_rtti_id_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_term_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
erl_backend__elds____Compare____elds_term_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_unop_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
erl_backend__elds____Compare____elds_unop_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


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
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) ((MR_String) "true"))
  },
  /* row 16 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) ((MR_String) "false"))
  },
  /* row 17 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) ((MR_String) "fail"))
  },
  /* row 18 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) ((MR_String) "throw"))
  },
  /* row 19 */
  {
    ((MR_Box) ((MR_Unsigned) 14U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 20 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) ((MR_String) "MERCURY_COMMIT"))
  },
  /* row 21 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
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
    ((MR_Box) ((MR_Unsigned) 3U)),
    ((MR_Box) (MR_mkword(MR_mktag(2), &erl_backend__elds_scalar_common_2[2]))),
    ((MR_Box) ((MR_Unsigned) 0U))
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
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 erl_backend__elds__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)
  }
};

static const MR_FA_TypeInfo_Struct1 erl_backend__elds__list__ti_list_1parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0)
  }
};

static const MR_FA_TypeInfo_Struct1 erl_backend__elds__list__ti_list_1parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0)
  }
};

static const MR_FA_TypeInfo_Struct1 erl_backend__elds__list__ti_list_1erl_backend__elds__type_ctor_info_elds_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_defn_0)
  }
};

static const MR_FA_TypeInfo_Struct1 erl_backend__elds__list__ti_list_1erl_backend__elds__type_ctor_info_elds_foreign_export_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_foreign_export_defn_0)
  }
};

static const MR_FA_TypeInfo_Struct1 erl_backend__elds__list__ti_list_1erl_backend__elds__type_ctor_info_elds_rtti_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_rtti_defn_0)
  }
};

static const MR_FA_TypeInfo_Struct1 erl_backend__elds__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)
  }
};

static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_0_0[9] = {
  (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&erl_backend__elds__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&erl_backend__elds__list__ti_list_1parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0),
  (MR_PseudoTypeInfo) (&erl_backend__elds__list__ti_list_1parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0),
  (MR_PseudoTypeInfo) (&erl_backend__elds__list__ti_list_1erl_backend__elds__type_ctor_info_elds_defn_0),
  (MR_PseudoTypeInfo) (&erl_backend__elds__list__ti_list_1erl_backend__elds__type_ctor_info_elds_foreign_export_defn_0),
  (MR_PseudoTypeInfo) (&erl_backend__elds__list__ti_list_1erl_backend__elds__type_ctor_info_elds_rtti_defn_0),
  (MR_PseudoTypeInfo) (&erl_backend__elds__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
  (MR_PseudoTypeInfo) (&erl_backend__elds__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0)
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
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  erl_backend__elds__erl_backend__elds__field_types_elds_0_0,
  erl_backend__elds__erl_backend__elds__field_names_elds_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_0_0[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_0_0
};

static const MR_DuPtagLayout erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_0_0,
    INT8_C(-1)
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
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
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
  (MR_PseudoTypeInfo) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_clause_0)
};

static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_body_0_0 = {
  (MR_String) "body_defined_here",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE_DIRECT_ARG,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  erl_backend__elds__erl_backend__elds__field_types_elds_body_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_body_0_1[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_body_0_1 = {
  (MR_String) "body_external",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  erl_backend__elds__erl_backend__elds__field_types_elds_body_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
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
    MR_SECTAG_NONE_DIRECT_ARG,
    erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_body_0_0,
    INT8_C(-1)
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_body_0_1,
    INT8_C(-1)
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
  (MR_Integer) 17,
  (MR_Integer) 2,
  MR_TYPECTOR_REP_DU,
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
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)
};

static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_call_target_0_0 = {
  (MR_String) "elds_call_plain",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  erl_backend__elds__erl_backend__elds__field_types_elds_call_target_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_call_target_0_1[1] = {
  (MR_PseudoTypeInfo) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0)
};

static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_call_target_0_1 = {
  (MR_String) "elds_call_ho",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  erl_backend__elds__erl_backend__elds__field_types_elds_call_target_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_call_target_0_2[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_call_target_0_2 = {
  (MR_String) "elds_call_builtin",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  erl_backend__elds__erl_backend__elds__field_types_elds_call_target_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
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
    MR_SECTAG_NONE,
    erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_call_target_0_0,
    INT8_C(-1)
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_call_target_0_1,
    INT8_C(-1)
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_call_target_0_2,
    INT8_C(-1)
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
  (MR_Integer) 17,
  (MR_Integer) 3,
  MR_TYPECTOR_REP_DU,
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
  (MR_PseudoTypeInfo) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_term_0),
  (MR_PseudoTypeInfo) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0)
};

static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_case_0_0 = {
  (MR_String) "elds_case",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  erl_backend__elds__erl_backend__elds__field_types_elds_case_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_case_0_0[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_case_0_0
};

static const MR_DuPtagLayout erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_case_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_case_0_0,
    INT8_C(-1)
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
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
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
  (MR_PseudoTypeInfo) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_term_0),
  (MR_PseudoTypeInfo) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_term_0),
  (MR_PseudoTypeInfo) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0)
};

static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_catch_0_0 = {
  (MR_String) "elds_catch",
  (MR_Integer) 3,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  erl_backend__elds__erl_backend__elds__field_types_elds_catch_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_catch_0_0[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_catch_0_0
};

static const MR_DuPtagLayout erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_catch_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_catch_0_0,
    INT8_C(-1)
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
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
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
    (MR_TypeInfo) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_term_0)
  }
};

static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_clause_0_0[2] = {
  (MR_PseudoTypeInfo) (&erl_backend__elds__list__ti_list_1erl_backend__elds__type_ctor_info_elds_term_0),
  (MR_PseudoTypeInfo) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0)
};

static const MR_ConstString erl_backend__elds__erl_backend__elds__field_names_elds_clause_0_0[2] = {
  (MR_String) "clause_pattern",
  (MR_String) "clause_expr"
};

static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_clause_0_0 = {
  (MR_String) "elds_clause",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  erl_backend__elds__erl_backend__elds__field_types_elds_clause_0_0,
  erl_backend__elds__erl_backend__elds__field_names_elds_clause_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_clause_0_0[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_clause_0_0
};

static const MR_DuPtagLayout erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_clause_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_clause_0_0,
    INT8_C(-1)
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
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
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
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 erl_backend__elds__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_defn_0_0[4] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
  (MR_PseudoTypeInfo) (&erl_backend__elds__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_body_0),
  (MR_PseudoTypeInfo) (&erl_backend__elds__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0)
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
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  erl_backend__elds__erl_backend__elds__field_types_elds_defn_0_0,
  erl_backend__elds__erl_backend__elds__field_names_elds_defn_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_defn_0_0[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_defn_0_0
};

static const MR_DuPtagLayout erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_defn_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_defn_0_0,
    INT8_C(-1)
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
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
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
    (MR_TypeInfo) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0)
  }
};

static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_0[1] = {
  (MR_PseudoTypeInfo) (&erl_backend__elds__list__ti_list_1erl_backend__elds__type_ctor_info_elds_expr_0)
};

static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_0 = {
  (MR_String) "elds_block",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_1[1] = {
  (MR_PseudoTypeInfo) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_term_0)
};

static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_1 = {
  (MR_String) "elds_term",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 1,
  erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_2[2] = {
  (MR_PseudoTypeInfo) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0),
  (MR_PseudoTypeInfo) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0)
};

static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_2 = {
  (MR_String) "elds_eq",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_REMOTE_FULL_WORD,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 2,
  erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_3[2] = {
  (MR_PseudoTypeInfo) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_unop_0),
  (MR_PseudoTypeInfo) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0)
};

static const MR_DuArgLocn erl_backend__elds__erl_backend__elds__field_locns_elds_expr_0_3[2] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 2
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_3 = {
  (MR_String) "elds_unop",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_REMOTE_FULL_WORD,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 3,
  erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_3,
  NULL,
  erl_backend__elds__erl_backend__elds__field_locns_elds_expr_0_3,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_4[3] = {
  (MR_PseudoTypeInfo) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_binop_0),
  (MR_PseudoTypeInfo) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0),
  (MR_PseudoTypeInfo) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0)
};

static const MR_DuArgLocn erl_backend__elds__erl_backend__elds__field_locns_elds_expr_0_4[3] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 5
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
  }
};

static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_4 = {
  (MR_String) "elds_binop",
  (MR_Integer) 3,
  (MR_Integer) 0,
  MR_SECTAG_REMOTE_FULL_WORD,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 4,
  erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_4,
  NULL,
  erl_backend__elds__erl_backend__elds__field_locns_elds_expr_0_4,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_5[2] = {
  (MR_PseudoTypeInfo) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_call_target_0),
  (MR_PseudoTypeInfo) (&erl_backend__elds__list__ti_list_1erl_backend__elds__type_ctor_info_elds_expr_0)
};

static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_5 = {
  (MR_String) "elds_call",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_REMOTE_FULL_WORD,
  (MR_Integer) 3,
  (MR_Integer) 3,
  (MR_Integer) 5,
  erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_5,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_6[1] = {
  (MR_PseudoTypeInfo) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_rtti_id_0)
};

static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_6 = {
  (MR_String) "elds_rtti_ref",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_REMOTE_FULL_WORD,
  (MR_Integer) 3,
  (MR_Integer) 4,
  (MR_Integer) 6,
  erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_6,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_7[1] = {
  (MR_PseudoTypeInfo) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_clause_0)
};

static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_7 = {
  (MR_String) "elds_fun",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE_DIRECT_ARG,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 7,
  erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_7,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_TypeInfo_Struct1 erl_backend__elds__list__ti_list_1erl_backend__elds__type_ctor_info_elds_case_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_case_0)
  }
};

static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_8[2] = {
  (MR_PseudoTypeInfo) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0),
  (MR_PseudoTypeInfo) (&erl_backend__elds__list__ti_list_1erl_backend__elds__type_ctor_info_elds_case_0)
};

static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_8 = {
  (MR_String) "elds_case_expr",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_REMOTE_FULL_WORD,
  (MR_Integer) 3,
  (MR_Integer) 5,
  (MR_Integer) 8,
  erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_8,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_TypeInfo_Struct1 erl_backend__elds__maybe__ti_maybe_1erl_backend__elds__type_ctor_info_elds_catch_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_catch_0)
  }
};

static const MR_FA_TypeInfo_Struct1 erl_backend__elds__maybe__ti_maybe_1erl_backend__elds__type_ctor_info_elds_expr_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0)
  }
};

static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_9[4] = {
  (MR_PseudoTypeInfo) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0),
  (MR_PseudoTypeInfo) (&erl_backend__elds__list__ti_list_1erl_backend__elds__type_ctor_info_elds_case_0),
  (MR_PseudoTypeInfo) (&erl_backend__elds__maybe__ti_maybe_1erl_backend__elds__type_ctor_info_elds_catch_0),
  (MR_PseudoTypeInfo) (&erl_backend__elds__maybe__ti_maybe_1erl_backend__elds__type_ctor_info_elds_expr_0)
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
  MR_SECTAG_REMOTE_FULL_WORD,
  (MR_Integer) 3,
  (MR_Integer) 6,
  (MR_Integer) 9,
  erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_9,
  erl_backend__elds__erl_backend__elds__field_names_elds_expr_0_9,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_10[1] = {
  (MR_PseudoTypeInfo) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0)
};

static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_10 = {
  (MR_String) "elds_throw",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_REMOTE_FULL_WORD,
  (MR_Integer) 3,
  (MR_Integer) 7,
  (MR_Integer) 10,
  erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_10,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_11[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_context_0)
};

static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_11 = {
  (MR_String) "elds_foreign_code",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_REMOTE_FULL_WORD,
  (MR_Integer) 3,
  (MR_Integer) 8,
  (MR_Integer) 11,
  erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_11,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_12[2] = {
  (MR_PseudoTypeInfo) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0),
  (MR_PseudoTypeInfo) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0)
};

static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_12 = {
  (MR_String) "elds_send",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_REMOTE_FULL_WORD,
  (MR_Integer) 3,
  (MR_Integer) 9,
  (MR_Integer) 12,
  erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_12,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_13[1] = {
  (MR_PseudoTypeInfo) (&erl_backend__elds__list__ti_list_1erl_backend__elds__type_ctor_info_elds_case_0)
};

static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_expr_0_13 = {
  (MR_String) "elds_receive",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_REMOTE_FULL_WORD,
  (MR_Integer) 3,
  (MR_Integer) 10,
  (MR_Integer) 13,
  erl_backend__elds__erl_backend__elds__field_types_elds_expr_0_13,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
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
    MR_SECTAG_NONE_DIRECT_ARG,
    erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_expr_0_0,
    INT8_C(-1)
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_expr_0_1,
    INT8_C(-1)
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_expr_0_2,
    INT8_C(-1)
  },
  {
    (MR_Integer) 11,
    MR_SECTAG_REMOTE_FULL_WORD,
    erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_expr_0_3,
    INT8_C(-1)
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
  (MR_Integer) 17,
  (MR_Integer) 4,
  MR_TYPECTOR_REP_DU,
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
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&erl_backend__elds__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_clause_0)
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
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  erl_backend__elds__erl_backend__elds__field_types_elds_foreign_export_defn_0_0,
  erl_backend__elds__erl_backend__elds__field_names_elds_foreign_export_defn_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_foreign_export_defn_0_0[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_foreign_export_defn_0_0
};

static const MR_DuPtagLayout erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_foreign_export_defn_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_foreign_export_defn_0_0,
    INT8_C(-1)
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
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
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
  (MR_PseudoTypeInfo) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_rtti_id_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&erl_backend__elds__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_clause_0)
};

static const MR_ConstString erl_backend__elds__erl_backend__elds__field_names_elds_rtti_defn_0_0[4] = {
  (MR_String) "rtti_defn_id",
  (MR_String) "rtti_defn_exported",
  (MR_String) "rtti_defn_varset",
  (MR_String) "rtti_defn_clause"
};

static const MR_DuArgLocn erl_backend__elds__erl_backend__elds__field_locns_elds_rtti_defn_0_0[4] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 1
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
  }
};

static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_rtti_defn_0_0 = {
  (MR_String) "elds_rtti_defn",
  (MR_Integer) 4,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  erl_backend__elds__erl_backend__elds__field_types_elds_rtti_defn_0_0,
  erl_backend__elds__erl_backend__elds__field_names_elds_rtti_defn_0_0,
  erl_backend__elds__erl_backend__elds__field_locns_elds_rtti_defn_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_rtti_defn_0_0[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_rtti_defn_0_0
};

static const MR_DuPtagLayout erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_rtti_defn_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_rtti_defn_0_0,
    INT8_C(-1)
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
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
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
  (MR_PseudoTypeInfo) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_type_ctor_0)
};

static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_rtti_id_0_0 = {
  (MR_String) "elds_rtti_type_ctor_id",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  erl_backend__elds__erl_backend__elds__field_types_elds_rtti_id_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_rtti_id_0_1[1] = {
  (MR_PseudoTypeInfo) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_type_info_0)
};

static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_rtti_id_0_1 = {
  (MR_String) "elds_rtti_type_info_id",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  erl_backend__elds__erl_backend__elds__field_types_elds_rtti_id_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_rtti_id_0_2[1] = {
  (MR_PseudoTypeInfo) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_pseudo_type_info_0)
};

static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_rtti_id_0_2 = {
  (MR_String) "elds_rtti_pseudo_type_info_id",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  erl_backend__elds__erl_backend__elds__field_types_elds_rtti_id_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_rtti_id_0_3[3] = {
  (MR_PseudoTypeInfo) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_tc_name_0),
  (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_rtti_id_0_3 = {
  (MR_String) "elds_rtti_base_typeclass_id",
  (MR_Integer) 3,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 3,
  (MR_Integer) -1,
  (MR_Integer) 3,
  erl_backend__elds__erl_backend__elds__field_types_elds_rtti_id_0_3,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
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
    MR_SECTAG_NONE,
    erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_rtti_id_0_0,
    INT8_C(-1)
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_rtti_id_0_1,
    INT8_C(-1)
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_rtti_id_0_2,
    INT8_C(-1)
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_rtti_id_0_3,
    INT8_C(-1)
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
  (MR_Integer) 17,
  (MR_Integer) 4,
  MR_TYPECTOR_REP_DU,
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
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_character_0)
};

static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_0 = {
  (MR_String) "elds_char",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  erl_backend__elds__erl_backend__elds__field_types_elds_term_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_1[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_1 = {
  (MR_String) "elds_int",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 1,
  erl_backend__elds__erl_backend__elds__field_types_elds_term_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_2[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint_0)
};

static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_2 = {
  (MR_String) "elds_uint",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_REMOTE_FULL_WORD,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 2,
  erl_backend__elds__erl_backend__elds__field_types_elds_term_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_3[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int8_0)
};

static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_3 = {
  (MR_String) "elds_int8",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_REMOTE_FULL_WORD,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 3,
  erl_backend__elds__erl_backend__elds__field_types_elds_term_0_3,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_4[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint8_0)
};

static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_4 = {
  (MR_String) "elds_uint8",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_REMOTE_FULL_WORD,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 4,
  erl_backend__elds__erl_backend__elds__field_types_elds_term_0_4,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_5[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int16_0)
};

static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_5 = {
  (MR_String) "elds_int16",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_REMOTE_FULL_WORD,
  (MR_Integer) 3,
  (MR_Integer) 3,
  (MR_Integer) 5,
  erl_backend__elds__erl_backend__elds__field_types_elds_term_0_5,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_6[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint16_0)
};

static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_6 = {
  (MR_String) "elds_uint16",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_REMOTE_FULL_WORD,
  (MR_Integer) 3,
  (MR_Integer) 4,
  (MR_Integer) 6,
  erl_backend__elds__erl_backend__elds__field_types_elds_term_0_6,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_7[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int32_0)
};

static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_7 = {
  (MR_String) "elds_int32",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_REMOTE_FULL_WORD,
  (MR_Integer) 3,
  (MR_Integer) 5,
  (MR_Integer) 7,
  erl_backend__elds__erl_backend__elds__field_types_elds_term_0_7,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_8[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint32_0)
};

static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_8 = {
  (MR_String) "elds_uint32",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_REMOTE_FULL_WORD,
  (MR_Integer) 3,
  (MR_Integer) 6,
  (MR_Integer) 8,
  erl_backend__elds__erl_backend__elds__field_types_elds_term_0_8,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_9[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int64_0)
};

static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_9 = {
  (MR_String) "elds_int64",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_REMOTE_FULL_WORD,
  (MR_Integer) 3,
  (MR_Integer) 7,
  (MR_Integer) 9,
  erl_backend__elds__erl_backend__elds__field_types_elds_term_0_9,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_10[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint64_0)
};

static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_10 = {
  (MR_String) "elds_uint64",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_REMOTE_FULL_WORD,
  (MR_Integer) 3,
  (MR_Integer) 8,
  (MR_Integer) 10,
  erl_backend__elds__erl_backend__elds__field_types_elds_term_0_10,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_11[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_float_0)
};

static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_11 = {
  (MR_String) "elds_float",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_REMOTE_FULL_WORD,
  (MR_Integer) 3,
  (MR_Integer) 9,
  (MR_Integer) 11,
  erl_backend__elds__erl_backend__elds__field_types_elds_term_0_11,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_12[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_12 = {
  (MR_String) "elds_binary",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_REMOTE_FULL_WORD,
  (MR_Integer) 3,
  (MR_Integer) 10,
  (MR_Integer) 12,
  erl_backend__elds__erl_backend__elds__field_types_elds_term_0_12,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_13[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_13 = {
  (MR_String) "elds_list_of_ints",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_REMOTE_FULL_WORD,
  (MR_Integer) 3,
  (MR_Integer) 11,
  (MR_Integer) 13,
  erl_backend__elds__erl_backend__elds__field_types_elds_term_0_13,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_14[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_14 = {
  (MR_String) "elds_atom_raw",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_REMOTE_FULL_WORD,
  (MR_Integer) 3,
  (MR_Integer) 12,
  (MR_Integer) 14,
  erl_backend__elds__erl_backend__elds__field_types_elds_term_0_14,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_15[1] = {
  (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)
};

static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_15 = {
  (MR_String) "elds_atom",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_REMOTE_FULL_WORD,
  (MR_Integer) 3,
  (MR_Integer) 13,
  (MR_Integer) 15,
  erl_backend__elds__erl_backend__elds__field_types_elds_term_0_15,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_16[1] = {
  (MR_PseudoTypeInfo) (&erl_backend__elds__list__ti_list_1erl_backend__elds__type_ctor_info_elds_expr_0)
};

static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_16 = {
  (MR_String) "elds_tuple",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_REMOTE_FULL_WORD,
  (MR_Integer) 3,
  (MR_Integer) 14,
  (MR_Integer) 16,
  erl_backend__elds__erl_backend__elds__field_types_elds_term_0_16,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_TypeInfo_Struct1 erl_backend__elds__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_17[1] = {
  (MR_PseudoTypeInfo) (&erl_backend__elds__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
};

static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_17 = {
  (MR_String) "elds_var",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_REMOTE_FULL_WORD,
  (MR_Integer) 3,
  (MR_Integer) 15,
  (MR_Integer) 17,
  erl_backend__elds__erl_backend__elds__field_types_elds_term_0_17,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_18 = {
  (MR_String) "elds_anon_var",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL_REST_OF_WORD,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 18,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo erl_backend__elds__erl_backend__elds__field_types_elds_term_0_19[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_19 = {
  (MR_String) "elds_fixed_name_var",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_REMOTE_FULL_WORD,
  (MR_Integer) 3,
  (MR_Integer) 16,
  (MR_Integer) 19,
  erl_backend__elds__erl_backend__elds__field_types_elds_term_0_19,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_term_0_0[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_18
};

static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_term_0_1[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_0
};

static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_term_0_2[1] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_1
};

static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_term_0_3[17] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_2,
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_3,
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_4,
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_5,
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_6,
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_7,
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_8,
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_9,
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_10,
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_11,
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_12,
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_13,
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_14,
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_15,
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_16,
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_17,
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_19
};

static const MR_DuPtagLayout erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_term_0[4] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_LOCAL_REST_OF_WORD,
    erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_term_0_0,
    INT8_C(-1)
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_term_0_1,
    INT8_C(-1)
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_term_0_2,
    INT8_C(-1)
  },
  {
    (MR_Integer) 17,
    MR_SECTAG_REMOTE_FULL_WORD,
    erl_backend__elds__erl_backend__elds__du_stag_ordered_elds_term_0_3,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr erl_backend__elds__erl_backend__elds__du_name_ordered_elds_term_0[20] = {
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_18,
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_15,
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_14,
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_12,
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_0,
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_19,
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_11,
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_1,
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_5,
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_7,
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_9,
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_3,
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_13,
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_16,
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_2,
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_6,
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_8,
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_10,
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_4,
  &erl_backend__elds__erl_backend__elds__du_functor_desc_elds_term_0_17
};

static const MR_Integer erl_backend__elds__erl_backend__elds__functor_number_map_elds_term_0[20] = {
  (MR_Integer) 4,
  (MR_Integer) 7,
  (MR_Integer) 14,
  (MR_Integer) 11,
  (MR_Integer) 18,
  (MR_Integer) 8,
  (MR_Integer) 15,
  (MR_Integer) 9,
  (MR_Integer) 16,
  (MR_Integer) 10,
  (MR_Integer) 17,
  (MR_Integer) 6,
  (MR_Integer) 3,
  (MR_Integer) 12,
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 13,
  (MR_Integer) 19,
  (MR_Integer) 0,
  (MR_Integer) 5
};

const MR_TypeCtorInfo_Struct erl_backend__elds__erl_backend__elds__type_ctor_info_elds_term_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 4,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (erl_backend__elds____Unify____elds_term_0_0_10001)),
  ((MR_Box) (erl_backend__elds____Compare____elds_term_0_0_10001)),
  (MR_String) "erl_backend.elds",
  (MR_String) "elds_term",
  {     erl_backend__elds__erl_backend__elds__du_name_ordered_elds_term_0 },
  {     erl_backend__elds__erl_backend__elds__du_ptag_ordered_elds_term_0 },
  (MR_Integer) 20,
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
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

static MR_Word MR_CALL 
erl_backend__elds__IntroducedFrom__func__exprs_from_fixed_vars__433__1_1_f_0(
  MR_String LambdaHeadVar__1_6)
{
  {
    MR_Word LambdaHeadVar__2_7;
    MR_Word Var_8;

    {
      Var_8 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_8, 0) = ((MR_Box) ((MR_Unsigned) 16U));
      MR_hl_field(MR_mktag(3), Var_8, 1) = ((MR_Box) (LambdaHeadVar__1_6));
    }
    {
      LambdaHeadVar__2_7 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), LambdaHeadVar__2_7, 0) = ((MR_Box) (Var_8));
    }
    return LambdaHeadVar__2_7;
  }
}

static MR_Word MR_CALL 
erl_backend__elds__IntroducedFrom__func__terms_from_fixed_vars__431__1_1_f_0(
  MR_String LambdaHeadVar__1_6)
{
  {
    MR_Word LambdaHeadVar__2_7;

    {
      LambdaHeadVar__2_7 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), LambdaHeadVar__2_7, 0) = ((MR_Box) ((MR_Unsigned) 16U));
      MR_hl_field(MR_mktag(3), LambdaHeadVar__2_7, 1) = ((MR_Box) (LambdaHeadVar__1_6));
    }
    return LambdaHeadVar__2_7;
  }
}

void MR_CALL 
erl_backend__elds____Compare____elds_unop_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
erl_backend__elds____Unify____elds_unop_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
erl_backend__elds____Compare____elds_rtti_defn_0_0(
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
      MR_Word ArgX2_6 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
      MR_Word ArgY2_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 1);
      MR_Word ArgX3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY3_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word ArgX4_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgY4_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
      MR_Unsigned packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Unsigned packed_args_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
      MR_Word Var_12;

      erl_backend__elds____Compare____elds_rtti_id_0_0(&Var_12, ArgX1_4, ArgY1_5);
      succeeded = (Var_12 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_12;
      else
      {
        MR_Word Var_13;
        MR_Integer Var_21 = (MR_Integer) (ArgX2_6);
        MR_Integer Var_22 = (MR_Integer) (ArgY2_7);

        mercury__private_builtin__builtin_compare_int_3_p_0(&Var_13, Var_21, Var_22);
        succeeded = (Var_13 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_13;
        else
        {
          MR_Word Var_14;

          mercury__builtin__compare_3_p_0((MR_Word) (&erl_backend__elds_scalar_common_1[9]), &Var_14, ((MR_Box) (ArgX3_8)), ((MR_Box) (ArgY3_9)));
          succeeded = (Var_14 == (MR_Integer) 0);
          succeeded = !(succeeded);
          if (succeeded)
            *HeadVar__1_1 = Var_14;
          else
            erl_backend__elds____Compare____elds_clause_0_0(HeadVar__1_1, ArgX4_10, ArgY4_11);
        }
      }
    }
  }
}

MR_bool MR_CALL 
erl_backend__elds____Unify____elds_rtti_defn_0_0(
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
      MR_Word TypeInfo_13_13;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
      MR_Word ArgY2_6 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
      MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Unsigned packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      MR_Unsigned packed_args_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));

      succeeded = erl_backend__elds____Unify____elds_rtti_id_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        succeeded = (ArgX2_5 == ArgY2_6);
        if (succeeded)
        {
          TypeInfo_13_13 = (MR_Word) (&erl_backend__elds_scalar_common_1[9]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_13_13, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
          if (succeeded)
            succeeded = erl_backend__elds____Unify____elds_clause_0_0(ArgX4_9, ArgY4_10);
        }
      }
    }
    return succeeded;
  }
}

void MR_CALL 
erl_backend__elds____Compare____elds_foreign_export_defn_0_0(
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
      MR_String ArgX1_4 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY3_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word Var_10;

      mercury__private_builtin__builtin_compare_string_3_p_0(&Var_10, ArgX1_4, ArgY1_5);
      succeeded = (Var_10 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_10;
      else
      {
        MR_Word Var_11;

        mercury__builtin__compare_3_p_0((MR_Word) (&erl_backend__elds_scalar_common_1[9]), &Var_11, ((MR_Box) (ArgX2_6)), ((MR_Box) (ArgY2_7)));
        succeeded = (Var_11 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_11;
        else
          erl_backend__elds____Compare____elds_clause_0_0(HeadVar__1_1, ArgX3_8, ArgY3_9);
      }
    }
  }
}

MR_bool MR_CALL 
erl_backend__elds____Unify____elds_foreign_export_defn_0_0(
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
      MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_String ArgY1_4 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));

      succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
      if (succeeded)
      {
        TypeInfo_11_11 = (MR_Word) (&erl_backend__elds_scalar_common_1[9]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_11_11, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        if (succeeded)
          succeeded = erl_backend__elds____Unify____elds_clause_0_0(ArgX3_7, ArgY3_8);
      }
    }
    return succeeded;
  }
}

void MR_CALL 
erl_backend__elds____Compare____elds_defn_0_0(
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
      MR_Word ArgX3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY3_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word ArgX4_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgY4_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
      MR_Word Var_12;

      hlds__hlds_pred____Compare____pred_proc_id_0_0(&Var_12, ArgX1_4, ArgY1_5);
      succeeded = (Var_12 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_12;
      else
      {
        MR_Word Var_13;

        mercury__builtin__compare_3_p_0((MR_Word) (&erl_backend__elds_scalar_common_1[9]), &Var_13, ((MR_Box) (ArgX2_6)), ((MR_Box) (ArgY2_7)));
        succeeded = (Var_13 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_13;
        else
        {
          MR_Word Var_14;

          erl_backend__elds____Compare____elds_body_0_0(&Var_14, ArgX3_8, ArgY3_9);
          succeeded = (Var_14 == (MR_Integer) 0);
          succeeded = !(succeeded);
          if (succeeded)
            *HeadVar__1_1 = Var_14;
          else
          {
            mercury__builtin__compare_3_p_0((MR_Word) (&erl_backend__elds_scalar_common_1[10]), HeadVar__1_1, ((MR_Box) (ArgX4_10)), ((MR_Box) (ArgY4_11)));
          }
        }
      }
    }
  }
}

MR_bool MR_CALL 
erl_backend__elds____Unify____elds_defn_0_0(
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
      MR_Word TypeInfo_14_14;
      MR_Word TypeInfo_15_15;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
      MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));

      succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        TypeInfo_14_14 = (MR_Word) (&erl_backend__elds_scalar_common_1[9]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_14_14, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        if (succeeded)
        {
          succeeded = erl_backend__elds____Unify____elds_body_0_0(ArgX3_7, ArgY3_8);
          if (succeeded)
          {
            TypeInfo_15_15 = (MR_Word) (&erl_backend__elds_scalar_common_1[10]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_15_15, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
          }
        }
      }
    }
    return succeeded;
  }
}

void MR_CALL 
erl_backend__elds____Compare____elds_catch_0_0(
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

      erl_backend__elds____Compare____elds_term_0_0(&Var_10, ArgX1_4, ArgY1_5);
      succeeded = (Var_10 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_10;
      else
      {
        MR_Word Var_11;

        erl_backend__elds____Compare____elds_term_0_0(&Var_11, ArgX2_6, ArgY2_7);
        succeeded = (Var_11 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_11;
        else
          erl_backend__elds____Compare____elds_expr_0_0(HeadVar__1_1, ArgX3_8, ArgY3_9);
      }
    }
  }
}

MR_bool MR_CALL 
erl_backend__elds____Unify____elds_catch_0_0(
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
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));

      succeeded = erl_backend__elds____Unify____elds_term_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        succeeded = erl_backend__elds____Unify____elds_term_0_0(ArgX2_5, ArgY2_6);
        if (succeeded)
          succeeded = erl_backend__elds____Unify____elds_expr_0_0(ArgX3_7, ArgY3_8);
      }
    }
    return succeeded;
  }
}

void MR_CALL 
erl_backend__elds____Compare____elds_case_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word Var_8;

      erl_backend__elds____Compare____elds_term_0_0(&Var_8, ArgX1_4, ArgY1_5);
      succeeded = (Var_8 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_8;
      else
        erl_backend__elds____Compare____elds_expr_0_0(HeadVar__1_1, ArgX2_6, ArgY2_7);
    }
  }
}

MR_bool MR_CALL 
erl_backend__elds____Unify____elds_case_0_0(
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
    {
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));

      succeeded = erl_backend__elds____Unify____elds_term_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
        succeeded = erl_backend__elds____Unify____elds_expr_0_0(ArgX2_5, ArgY2_6);
    }
    return succeeded;
  }
}

void MR_CALL 
erl_backend__elds____Compare____elds_body_0_0(
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
        MR_Word ArgY1_5 = (MR_Word) (MR_body((MR_Word) (HeadVar__3_3), (MR_Integer) 0));

        erl_backend__elds____Compare____elds_clause_0_0(HeadVar__1_1, Var_16, ArgY1_5);
      }
      else
        *HeadVar__1_1 = (MR_Integer) 1;
    }
    else
    {
      MR_Integer Var_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
        *HeadVar__1_1 = (MR_Integer) 2;
      else
      {
        MR_Integer ArgY1_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

        mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Var_17, ArgY1_11);
      }
    }
  }
}

void MR_CALL 
erl_backend__elds____Compare____elds_clause_0_0(
  MR_Word * tscc_output_ptr_1_HeadVar__1_1,
  MR_Word tscc_proc_1_input_1_HeadVar__2_2,
  MR_Word tscc_proc_1_input_2_HeadVar__3_3)
{
  {
    MR_Word tscc_proc_2_input_1_HeadVar__2_2;
    MR_Word tscc_proc_2_input_2_HeadVar__3_3;
    MR_Word tscc_output_1_HeadVar__1_1;

    // The code for TSCC PROC 1: pred erl_backend.elds.compare_for_erl_backend.elds.elds_clause_0/3-0.
    ;
    // Setup for mutual tailcalls optimized into a loop.
    ;
    // The mutually recursive procedures are:
    ;
    ;
    // proc 1 in TSCC: pred erl_backend.elds.compare_for_erl_backend.elds.elds_clause_0/3-0
    ;
    // proc 2 in TSCC: pred erl_backend.elds.compare_for_erl_backend.elds.elds_expr_0/3-0
    ;
    ;
    goto top_of_proc_1;
  top_of_proc_1:;
    {
      MR_Word HeadVar__1_1;
      MR_Word HeadVar__2_2 = tscc_proc_1_input_1_HeadVar__2_2;
      MR_Word HeadVar__3_3 = tscc_proc_1_input_2_HeadVar__3_3;
      MR_bool succeeded;
      MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
      MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

      succeeded = (CastX_9 == CastY_10);
      if (succeeded)
        HeadVar__1_1 = (MR_Integer) 0;
      else
      {
        MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
        MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
        MR_Word ArgX2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
        MR_Word ArgY2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
        MR_Word Var_8;

        mercury__builtin__compare_3_p_0((MR_Word) (&erl_backend__elds_scalar_common_1[8]), &Var_8, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
        succeeded = (Var_8 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          HeadVar__1_1 = Var_8;
        else
        {
          MR_Word next_value_of_tscc_proc_2_input_1_HeadVar__2_2 = ArgX2_6;
          MR_Word next_value_of_tscc_proc_2_input_2_HeadVar__3_3 = ArgY2_7;

          // direct tailcall eliminated
          ;
          tscc_proc_2_input_1_HeadVar__2_2 = next_value_of_tscc_proc_2_input_1_HeadVar__2_2;
          tscc_proc_2_input_2_HeadVar__3_3 = next_value_of_tscc_proc_2_input_2_HeadVar__3_3;
          goto top_of_proc_2;
        }
      }
      tscc_output_1_HeadVar__1_1 = HeadVar__1_1;
      goto tscc_end;
    }
  top_of_proc_2:;
    {
      MR_Word HeadVar__1_1;
      MR_Word HeadVar__2_2 = tscc_proc_2_input_1_HeadVar__2_2;
      MR_Word HeadVar__3_3 = tscc_proc_2_input_2_HeadVar__3_3;
      MR_bool succeeded;
      MR_Integer CastX_715 = (MR_Integer) (HeadVar__2_2);
      MR_Integer CastY_716 = (MR_Integer) (HeadVar__3_3);

      succeeded = (CastX_715 == CastY_716);
      if (succeeded)
        HeadVar__1_1 = (MR_Integer) 0;
      else
        switch (MR_tag((MR_Word) HeadVar__2_2)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Var_754 = (MR_Word) (MR_body((MR_Word) (HeadVar__2_2), (MR_Integer) 0));

              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word ArgY1_372 = (MR_Word) (MR_body((MR_Word) (HeadVar__3_3), (MR_Integer) 0));
                    MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__2_2 = Var_754;
                    MR_Word next_value_of_tscc_proc_1_input_2_HeadVar__3_3 = ArgY1_372;

                    // direct tailcall eliminated
                    ;
                    tscc_proc_1_input_1_HeadVar__2_2 = next_value_of_tscc_proc_1_input_1_HeadVar__2_2;
                    tscc_proc_1_input_2_HeadVar__3_3 = next_value_of_tscc_proc_1_input_2_HeadVar__3_3;
                    goto top_of_proc_1;
                  }
                  break;
                case (MR_Integer) 1:
                  HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 3:
                      HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 4:
                      HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 5:
                      HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 6:
                      HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 7:
                      HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 8:
                      HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 9:
                      HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 10:
                      HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Var_745 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

                    mercury__builtin__compare_3_p_0((MR_Word) (&erl_backend__elds_scalar_common_1[14]), &HeadVar__1_1, ((MR_Box) (Var_745)), ((MR_Box) (ArgY1_5)));
                  }
                  break;
                case (MR_Integer) 2:
                  HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 1:
                      HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 2:
                      HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 3:
                      HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 4:
                      HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 5:
                      HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 6:
                      HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 7:
                      HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 8:
                      HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 9:
                      HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 10:
                      HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Var_759 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));

              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 1:
                  HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word ArgY1_46 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))));

                    erl_backend__elds____Compare____elds_term_0_0(&HeadVar__1_1, Var_759, ArgY1_46);
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 1:
                      HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 2:
                      HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 3:
                      HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 4:
                      HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 5:
                      HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 6:
                      HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 7:
                      HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 8:
                      HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 9:
                      HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 10:
                      HeadVar__1_1 = (MR_Integer) 1;
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
                  MR_Word Var_750 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  MR_Word Var_751 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

                  switch (MR_tag((MR_Word) HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 1:
                      HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 3:
                      switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          {
                            MR_Word ArgY1_89 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                            MR_Word ArgY2_91 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                            MR_Word Var_92;

                            erl_backend__elds____Compare____elds_expr_0_0(&Var_92, Var_751, ArgY1_89);
                            succeeded = (Var_92 == (MR_Integer) 0);
                            succeeded = !(succeeded);
                            if (succeeded)
                              HeadVar__1_1 = Var_92;
                            else
                            {
                              MR_Word next_value_of_tscc_proc_2_input_1_HeadVar__2_2 = Var_750;
                              MR_Word next_value_of_tscc_proc_2_input_2_HeadVar__3_3 = ArgY2_91;

                              // direct tailcall eliminated
                              ;
                              tscc_proc_2_input_1_HeadVar__2_2 = next_value_of_tscc_proc_2_input_1_HeadVar__2_2;
                              tscc_proc_2_input_2_HeadVar__3_3 = next_value_of_tscc_proc_2_input_2_HeadVar__3_3;
                              goto top_of_proc_2;
                            }
                          }
                          break;
                        case (MR_Integer) 1:
                          HeadVar__1_1 = (MR_Integer) 1;
                          break;
                        case (MR_Integer) 2:
                          HeadVar__1_1 = (MR_Integer) 1;
                          break;
                        case (MR_Integer) 3:
                          HeadVar__1_1 = (MR_Integer) 1;
                          break;
                        case (MR_Integer) 4:
                          HeadVar__1_1 = (MR_Integer) 1;
                          break;
                        case (MR_Integer) 5:
                          HeadVar__1_1 = (MR_Integer) 1;
                          break;
                        case (MR_Integer) 6:
                          HeadVar__1_1 = (MR_Integer) 1;
                          break;
                        case (MR_Integer) 7:
                          HeadVar__1_1 = (MR_Integer) 1;
                          break;
                        case (MR_Integer) 8:
                          HeadVar__1_1 = (MR_Integer) 1;
                          break;
                        case (MR_Integer) 9:
                          HeadVar__1_1 = (MR_Integer) 1;
                          break;
                        case (MR_Integer) 10:
                          HeadVar__1_1 = (MR_Integer) 1;
                          break;
                      }
                      break;
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word Var_765 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  MR_Word Var_766 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 3);
                  MR_Unsigned packed_args_2 = (MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1)));

                  switch (MR_tag((MR_Word) HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 1:
                      HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 3:
                      switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          HeadVar__1_1 = (MR_Integer) 2;
                          break;
                        case (MR_Integer) 1:
                          {
                            MR_Word ArgY1_147 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 3);
                            MR_Word ArgY2_149 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                            MR_Unsigned packed_args_3 = (MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1)));
                            MR_Word Var_150;
                            MR_Integer Var_769 = (MR_Integer) (Var_766);
                            MR_Integer Var_770 = (MR_Integer) (ArgY1_147);

                            mercury__private_builtin__builtin_compare_int_3_p_0(&Var_150, Var_769, Var_770);
                            succeeded = (Var_150 == (MR_Integer) 0);
                            succeeded = !(succeeded);
                            if (succeeded)
                              HeadVar__1_1 = Var_150;
                            else
                            {
                              MR_Word next_value_of_tscc_proc_2_input_1_HeadVar__2_2 = Var_765;
                              MR_Word next_value_of_tscc_proc_2_input_2_HeadVar__3_3 = ArgY2_149;

                              // direct tailcall eliminated
                              ;
                              tscc_proc_2_input_1_HeadVar__2_2 = next_value_of_tscc_proc_2_input_1_HeadVar__2_2;
                              tscc_proc_2_input_2_HeadVar__3_3 = next_value_of_tscc_proc_2_input_2_HeadVar__3_3;
                              goto top_of_proc_2;
                            }
                          }
                          break;
                        case (MR_Integer) 2:
                          HeadVar__1_1 = (MR_Integer) 1;
                          break;
                        case (MR_Integer) 3:
                          HeadVar__1_1 = (MR_Integer) 1;
                          break;
                        case (MR_Integer) 4:
                          HeadVar__1_1 = (MR_Integer) 1;
                          break;
                        case (MR_Integer) 5:
                          HeadVar__1_1 = (MR_Integer) 1;
                          break;
                        case (MR_Integer) 6:
                          HeadVar__1_1 = (MR_Integer) 1;
                          break;
                        case (MR_Integer) 7:
                          HeadVar__1_1 = (MR_Integer) 1;
                          break;
                        case (MR_Integer) 8:
                          HeadVar__1_1 = (MR_Integer) 1;
                          break;
                        case (MR_Integer) 9:
                          HeadVar__1_1 = (MR_Integer) 1;
                          break;
                        case (MR_Integer) 10:
                          HeadVar__1_1 = (MR_Integer) 1;
                          break;
                      }
                      break;
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word Var_742 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                  MR_Word Var_743 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  MR_Word Var_744 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 31);
                  MR_Unsigned packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1)));

                  switch (MR_tag((MR_Word) HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 1:
                      HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 3:
                      switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          HeadVar__1_1 = (MR_Integer) 2;
                          break;
                        case (MR_Integer) 1:
                          HeadVar__1_1 = (MR_Integer) 2;
                          break;
                        case (MR_Integer) 2:
                          {
                            MR_Word ArgY1_209 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 31);
                            MR_Word ArgY2_211 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                            MR_Word ArgY3_213 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 3))));
                            MR_Unsigned packed_args_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1)));
                            MR_Word Var_214;
                            MR_Integer Var_767 = (MR_Integer) (Var_744);
                            MR_Integer Var_768 = (MR_Integer) (ArgY1_209);

                            mercury__private_builtin__builtin_compare_int_3_p_0(&Var_214, Var_767, Var_768);
                            succeeded = (Var_214 == (MR_Integer) 0);
                            succeeded = !(succeeded);
                            if (succeeded)
                              HeadVar__1_1 = Var_214;
                            else
                            {
                              MR_Word Var_215;

                              erl_backend__elds____Compare____elds_expr_0_0(&Var_215, Var_743, ArgY2_211);
                              succeeded = (Var_215 == (MR_Integer) 0);
                              succeeded = !(succeeded);
                              if (succeeded)
                                HeadVar__1_1 = Var_215;
                              else
                              {
                                MR_Word next_value_of_tscc_proc_2_input_1_HeadVar__2_2 = Var_742;
                                MR_Word next_value_of_tscc_proc_2_input_2_HeadVar__3_3 = ArgY3_213;

                                // direct tailcall eliminated
                                ;
                                tscc_proc_2_input_1_HeadVar__2_2 = next_value_of_tscc_proc_2_input_1_HeadVar__2_2;
                                tscc_proc_2_input_2_HeadVar__3_3 = next_value_of_tscc_proc_2_input_2_HeadVar__3_3;
                                goto top_of_proc_2;
                              }
                            }
                          }
                          break;
                        case (MR_Integer) 3:
                          HeadVar__1_1 = (MR_Integer) 1;
                          break;
                        case (MR_Integer) 4:
                          HeadVar__1_1 = (MR_Integer) 1;
                          break;
                        case (MR_Integer) 5:
                          HeadVar__1_1 = (MR_Integer) 1;
                          break;
                        case (MR_Integer) 6:
                          HeadVar__1_1 = (MR_Integer) 1;
                          break;
                        case (MR_Integer) 7:
                          HeadVar__1_1 = (MR_Integer) 1;
                          break;
                        case (MR_Integer) 8:
                          HeadVar__1_1 = (MR_Integer) 1;
                          break;
                        case (MR_Integer) 9:
                          HeadVar__1_1 = (MR_Integer) 1;
                          break;
                        case (MR_Integer) 10:
                          HeadVar__1_1 = (MR_Integer) 1;
                          break;
                      }
                      break;
                  }
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word Var_746 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  MR_Word Var_747 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

                  switch (MR_tag((MR_Word) HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 1:
                      HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 3:
                      switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          HeadVar__1_1 = (MR_Integer) 2;
                          break;
                        case (MR_Integer) 1:
                          HeadVar__1_1 = (MR_Integer) 2;
                          break;
                        case (MR_Integer) 2:
                          HeadVar__1_1 = (MR_Integer) 2;
                          break;
                        case (MR_Integer) 3:
                          {
                            MR_Word ArgY1_279 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                            MR_Word ArgY2_281 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                            MR_Word Var_282;

                            erl_backend__elds____Compare____elds_call_target_0_0(&Var_282, Var_747, ArgY1_279);
                            succeeded = (Var_282 == (MR_Integer) 0);
                            succeeded = !(succeeded);
                            if (succeeded)
                              HeadVar__1_1 = Var_282;
                            else
                            {
                              mercury__builtin__compare_3_p_0((MR_Word) (&erl_backend__elds_scalar_common_1[14]), &HeadVar__1_1, ((MR_Box) (Var_746)), ((MR_Box) (ArgY2_281)));
                            }
                          }
                          break;
                        case (MR_Integer) 4:
                          HeadVar__1_1 = (MR_Integer) 1;
                          break;
                        case (MR_Integer) 5:
                          HeadVar__1_1 = (MR_Integer) 1;
                          break;
                        case (MR_Integer) 6:
                          HeadVar__1_1 = (MR_Integer) 1;
                          break;
                        case (MR_Integer) 7:
                          HeadVar__1_1 = (MR_Integer) 1;
                          break;
                        case (MR_Integer) 8:
                          HeadVar__1_1 = (MR_Integer) 1;
                          break;
                        case (MR_Integer) 9:
                          HeadVar__1_1 = (MR_Integer) 1;
                          break;
                        case (MR_Integer) 10:
                          HeadVar__1_1 = (MR_Integer) 1;
                          break;
                      }
                      break;
                  }
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_Word Var_756 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

                  switch (MR_tag((MR_Word) HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 1:
                      HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 3:
                      switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          HeadVar__1_1 = (MR_Integer) 2;
                          break;
                        case (MR_Integer) 1:
                          HeadVar__1_1 = (MR_Integer) 2;
                          break;
                        case (MR_Integer) 2:
                          HeadVar__1_1 = (MR_Integer) 2;
                          break;
                        case (MR_Integer) 3:
                          HeadVar__1_1 = (MR_Integer) 2;
                          break;
                        case (MR_Integer) 4:
                          {
                            MR_Word ArgY1_331 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));

                            erl_backend__elds____Compare____elds_rtti_id_0_0(&HeadVar__1_1, Var_756, ArgY1_331);
                          }
                          break;
                        case (MR_Integer) 5:
                          HeadVar__1_1 = (MR_Integer) 1;
                          break;
                        case (MR_Integer) 6:
                          HeadVar__1_1 = (MR_Integer) 1;
                          break;
                        case (MR_Integer) 7:
                          HeadVar__1_1 = (MR_Integer) 1;
                          break;
                        case (MR_Integer) 8:
                          HeadVar__1_1 = (MR_Integer) 1;
                          break;
                        case (MR_Integer) 9:
                          HeadVar__1_1 = (MR_Integer) 1;
                          break;
                        case (MR_Integer) 10:
                          HeadVar__1_1 = (MR_Integer) 1;
                          break;
                      }
                      break;
                  }
                }
                break;
              case (MR_Integer) 5:
                {
                  MR_Word Var_748 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  MR_Word Var_749 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

                  switch (MR_tag((MR_Word) HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 3:
                      switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          HeadVar__1_1 = (MR_Integer) 2;
                          break;
                        case (MR_Integer) 1:
                          HeadVar__1_1 = (MR_Integer) 2;
                          break;
                        case (MR_Integer) 2:
                          HeadVar__1_1 = (MR_Integer) 2;
                          break;
                        case (MR_Integer) 3:
                          HeadVar__1_1 = (MR_Integer) 2;
                          break;
                        case (MR_Integer) 4:
                          HeadVar__1_1 = (MR_Integer) 2;
                          break;
                        case (MR_Integer) 5:
                          {
                            MR_Word ArgY1_421 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                            MR_Word ArgY2_423 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                            MR_Word Var_424;

                            erl_backend__elds____Compare____elds_expr_0_0(&Var_424, Var_749, ArgY1_421);
                            succeeded = (Var_424 == (MR_Integer) 0);
                            succeeded = !(succeeded);
                            if (succeeded)
                              HeadVar__1_1 = Var_424;
                            else
                            {
                              mercury__builtin__compare_3_p_0((MR_Word) (&erl_backend__elds_scalar_common_1[11]), &HeadVar__1_1, ((MR_Box) (Var_748)), ((MR_Box) (ArgY2_423)));
                            }
                          }
                          break;
                        case (MR_Integer) 6:
                          HeadVar__1_1 = (MR_Integer) 1;
                          break;
                        case (MR_Integer) 7:
                          HeadVar__1_1 = (MR_Integer) 1;
                          break;
                        case (MR_Integer) 8:
                          HeadVar__1_1 = (MR_Integer) 1;
                          break;
                        case (MR_Integer) 9:
                          HeadVar__1_1 = (MR_Integer) 1;
                          break;
                        case (MR_Integer) 10:
                          HeadVar__1_1 = (MR_Integer) 1;
                          break;
                      }
                      break;
                  }
                }
                break;
              case (MR_Integer) 6:
                {
                  MR_Word Var_761 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 4))));
                  MR_Word Var_762 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                  MR_Word Var_763 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  MR_Word Var_764 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

                  switch (MR_tag((MR_Word) HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 3:
                      switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          HeadVar__1_1 = (MR_Integer) 2;
                          break;
                        case (MR_Integer) 1:
                          HeadVar__1_1 = (MR_Integer) 2;
                          break;
                        case (MR_Integer) 2:
                          HeadVar__1_1 = (MR_Integer) 2;
                          break;
                        case (MR_Integer) 3:
                          HeadVar__1_1 = (MR_Integer) 2;
                          break;
                        case (MR_Integer) 4:
                          HeadVar__1_1 = (MR_Integer) 2;
                          break;
                        case (MR_Integer) 5:
                          HeadVar__1_1 = (MR_Integer) 2;
                          break;
                        case (MR_Integer) 6:
                          {
                            MR_Word ArgY1_497 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                            MR_Word ArgY2_499 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                            MR_Word ArgY3_501 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 3))));
                            MR_Word ArgY4_503 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 4))));
                            MR_Word Var_504;

                            erl_backend__elds____Compare____elds_expr_0_0(&Var_504, Var_764, ArgY1_497);
                            succeeded = (Var_504 == (MR_Integer) 0);
                            succeeded = !(succeeded);
                            if (succeeded)
                              HeadVar__1_1 = Var_504;
                            else
                            {
                              MR_Word Var_505;

                              mercury__builtin__compare_3_p_0((MR_Word) (&erl_backend__elds_scalar_common_1[11]), &Var_505, ((MR_Box) (Var_763)), ((MR_Box) (ArgY2_499)));
                              succeeded = (Var_505 == (MR_Integer) 0);
                              succeeded = !(succeeded);
                              if (succeeded)
                                HeadVar__1_1 = Var_505;
                              else
                              {
                                MR_Word Var_506;

                                mercury__builtin__compare_3_p_0((MR_Word) (&erl_backend__elds_scalar_common_1[12]), &Var_506, ((MR_Box) (Var_762)), ((MR_Box) (ArgY3_501)));
                                succeeded = (Var_506 == (MR_Integer) 0);
                                succeeded = !(succeeded);
                                if (succeeded)
                                  HeadVar__1_1 = Var_506;
                                else
                                {
                                  mercury__builtin__compare_3_p_0((MR_Word) (&erl_backend__elds_scalar_common_1[13]), &HeadVar__1_1, ((MR_Box) (Var_761)), ((MR_Box) (ArgY4_503)));
                                }
                              }
                            }
                          }
                          break;
                        case (MR_Integer) 7:
                          HeadVar__1_1 = (MR_Integer) 1;
                          break;
                        case (MR_Integer) 8:
                          HeadVar__1_1 = (MR_Integer) 1;
                          break;
                        case (MR_Integer) 9:
                          HeadVar__1_1 = (MR_Integer) 1;
                          break;
                        case (MR_Integer) 10:
                          HeadVar__1_1 = (MR_Integer) 1;
                          break;
                      }
                      break;
                  }
                }
                break;
              case (MR_Integer) 7:
                {
                  MR_Word Var_760 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

                  switch (MR_tag((MR_Word) HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 3:
                      switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          HeadVar__1_1 = (MR_Integer) 2;
                          break;
                        case (MR_Integer) 1:
                          HeadVar__1_1 = (MR_Integer) 2;
                          break;
                        case (MR_Integer) 2:
                          HeadVar__1_1 = (MR_Integer) 2;
                          break;
                        case (MR_Integer) 3:
                          HeadVar__1_1 = (MR_Integer) 2;
                          break;
                        case (MR_Integer) 4:
                          HeadVar__1_1 = (MR_Integer) 2;
                          break;
                        case (MR_Integer) 5:
                          HeadVar__1_1 = (MR_Integer) 2;
                          break;
                        case (MR_Integer) 6:
                          HeadVar__1_1 = (MR_Integer) 2;
                          break;
                        case (MR_Integer) 7:
                          {
                            MR_Word ArgY1_559 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                            MR_Word next_value_of_tscc_proc_2_input_1_HeadVar__2_2 = Var_760;
                            MR_Word next_value_of_tscc_proc_2_input_2_HeadVar__3_3 = ArgY1_559;

                            // direct tailcall eliminated
                            ;
                            tscc_proc_2_input_1_HeadVar__2_2 = next_value_of_tscc_proc_2_input_1_HeadVar__2_2;
                            tscc_proc_2_input_2_HeadVar__3_3 = next_value_of_tscc_proc_2_input_2_HeadVar__3_3;
                            goto top_of_proc_2;
                          }
                          break;
                        case (MR_Integer) 8:
                          HeadVar__1_1 = (MR_Integer) 1;
                          break;
                        case (MR_Integer) 9:
                          HeadVar__1_1 = (MR_Integer) 1;
                          break;
                        case (MR_Integer) 10:
                          HeadVar__1_1 = (MR_Integer) 1;
                          break;
                      }
                      break;
                  }
                }
                break;
              case (MR_Integer) 8:
                {
                  MR_Word Var_752 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  MR_String Var_753 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

                  switch (MR_tag((MR_Word) HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 3:
                      switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          HeadVar__1_1 = (MR_Integer) 2;
                          break;
                        case (MR_Integer) 1:
                          HeadVar__1_1 = (MR_Integer) 2;
                          break;
                        case (MR_Integer) 2:
                          HeadVar__1_1 = (MR_Integer) 2;
                          break;
                        case (MR_Integer) 3:
                          HeadVar__1_1 = (MR_Integer) 2;
                          break;
                        case (MR_Integer) 4:
                          HeadVar__1_1 = (MR_Integer) 2;
                          break;
                        case (MR_Integer) 5:
                          HeadVar__1_1 = (MR_Integer) 2;
                          break;
                        case (MR_Integer) 6:
                          HeadVar__1_1 = (MR_Integer) 2;
                          break;
                        case (MR_Integer) 7:
                          HeadVar__1_1 = (MR_Integer) 2;
                          break;
                        case (MR_Integer) 8:
                          {
                            MR_String ArgY1_611 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                            MR_Word ArgY2_613 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                            MR_Word Var_614;

                            mercury__private_builtin__builtin_compare_string_3_p_0(&Var_614, Var_753, ArgY1_611);
                            succeeded = (Var_614 == (MR_Integer) 0);
                            succeeded = !(succeeded);
                            if (succeeded)
                              HeadVar__1_1 = Var_614;
                            else
                              mercury__term____Compare____context_0_0(&HeadVar__1_1, Var_752, ArgY2_613);
                          }
                          break;
                        case (MR_Integer) 9:
                          HeadVar__1_1 = (MR_Integer) 1;
                          break;
                        case (MR_Integer) 10:
                          HeadVar__1_1 = (MR_Integer) 1;
                          break;
                      }
                      break;
                  }
                }
                break;
              case (MR_Integer) 9:
                {
                  MR_Word Var_757 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  MR_Word Var_758 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

                  switch (MR_tag((MR_Word) HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 3:
                      switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          HeadVar__1_1 = (MR_Integer) 2;
                          break;
                        case (MR_Integer) 1:
                          HeadVar__1_1 = (MR_Integer) 2;
                          break;
                        case (MR_Integer) 2:
                          HeadVar__1_1 = (MR_Integer) 2;
                          break;
                        case (MR_Integer) 3:
                          HeadVar__1_1 = (MR_Integer) 2;
                          break;
                        case (MR_Integer) 4:
                          HeadVar__1_1 = (MR_Integer) 2;
                          break;
                        case (MR_Integer) 5:
                          HeadVar__1_1 = (MR_Integer) 2;
                          break;
                        case (MR_Integer) 6:
                          HeadVar__1_1 = (MR_Integer) 2;
                          break;
                        case (MR_Integer) 7:
                          HeadVar__1_1 = (MR_Integer) 2;
                          break;
                        case (MR_Integer) 8:
                          HeadVar__1_1 = (MR_Integer) 2;
                          break;
                        case (MR_Integer) 9:
                          {
                            MR_Word ArgY1_669 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                            MR_Word ArgY2_671 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                            MR_Word Var_672;

                            erl_backend__elds____Compare____elds_expr_0_0(&Var_672, Var_758, ArgY1_669);
                            succeeded = (Var_672 == (MR_Integer) 0);
                            succeeded = !(succeeded);
                            if (succeeded)
                              HeadVar__1_1 = Var_672;
                            else
                            {
                              MR_Word next_value_of_tscc_proc_2_input_1_HeadVar__2_2 = Var_757;
                              MR_Word next_value_of_tscc_proc_2_input_2_HeadVar__3_3 = ArgY2_671;

                              // direct tailcall eliminated
                              ;
                              tscc_proc_2_input_1_HeadVar__2_2 = next_value_of_tscc_proc_2_input_1_HeadVar__2_2;
                              tscc_proc_2_input_2_HeadVar__3_3 = next_value_of_tscc_proc_2_input_2_HeadVar__3_3;
                              goto top_of_proc_2;
                            }
                          }
                          break;
                        case (MR_Integer) 10:
                          HeadVar__1_1 = (MR_Integer) 1;
                          break;
                      }
                      break;
                  }
                }
                break;
              case (MR_Integer) 10:
                {
                  MR_Word Var_755 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

                  switch (MR_tag((MR_Word) HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 3:
                      switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          HeadVar__1_1 = (MR_Integer) 2;
                          break;
                        case (MR_Integer) 1:
                          HeadVar__1_1 = (MR_Integer) 2;
                          break;
                        case (MR_Integer) 2:
                          HeadVar__1_1 = (MR_Integer) 2;
                          break;
                        case (MR_Integer) 3:
                          HeadVar__1_1 = (MR_Integer) 2;
                          break;
                        case (MR_Integer) 4:
                          HeadVar__1_1 = (MR_Integer) 2;
                          break;
                        case (MR_Integer) 5:
                          HeadVar__1_1 = (MR_Integer) 2;
                          break;
                        case (MR_Integer) 6:
                          HeadVar__1_1 = (MR_Integer) 2;
                          break;
                        case (MR_Integer) 7:
                          HeadVar__1_1 = (MR_Integer) 2;
                          break;
                        case (MR_Integer) 8:
                          HeadVar__1_1 = (MR_Integer) 2;
                          break;
                        case (MR_Integer) 9:
                          HeadVar__1_1 = (MR_Integer) 2;
                          break;
                        case (MR_Integer) 10:
                          {
                            MR_Word ArgY1_714 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));

                            mercury__builtin__compare_3_p_0((MR_Word) (&erl_backend__elds_scalar_common_1[11]), &HeadVar__1_1, ((MR_Box) (Var_755)), ((MR_Box) (ArgY1_714)));
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
      tscc_output_1_HeadVar__1_1 = HeadVar__1_1;
      goto tscc_end;
    }
  tscc_end:;
    *tscc_output_ptr_1_HeadVar__1_1 = tscc_output_1_HeadVar__1_1;
    return;
  }
}

void MR_CALL 
erl_backend__elds____Compare____elds_expr_0_0(
  MR_Word * tscc_output_ptr_1_HeadVar__1_1,
  MR_Word tscc_proc_2_input_1_HeadVar__2_2,
  MR_Word tscc_proc_2_input_2_HeadVar__3_3)
{
  {
    MR_Word tscc_proc_1_input_1_HeadVar__2_2;
    MR_Word tscc_proc_1_input_2_HeadVar__3_3;
    MR_Word tscc_output_1_HeadVar__1_1;

    // The code for TSCC PROC 2: pred erl_backend.elds.compare_for_erl_backend.elds.elds_expr_0/3-0.
    ;
    // Setup for mutual tailcalls optimized into a loop.
    ;
    // The mutually recursive procedures are:
    ;
    ;
    // proc 1 in TSCC: pred erl_backend.elds.compare_for_erl_backend.elds.elds_clause_0/3-0
    ;
    // proc 2 in TSCC: pred erl_backend.elds.compare_for_erl_backend.elds.elds_expr_0/3-0
    ;
    ;
    goto top_of_proc_2;
  top_of_proc_1:;
    {
      MR_Word HeadVar__1_1;
      MR_Word HeadVar__2_2 = tscc_proc_1_input_1_HeadVar__2_2;
      MR_Word HeadVar__3_3 = tscc_proc_1_input_2_HeadVar__3_3;
      MR_bool succeeded;
      MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
      MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

      succeeded = (CastX_9 == CastY_10);
      if (succeeded)
        HeadVar__1_1 = (MR_Integer) 0;
      else
      {
        MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
        MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
        MR_Word ArgX2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
        MR_Word ArgY2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
        MR_Word Var_8;

        mercury__builtin__compare_3_p_0((MR_Word) (&erl_backend__elds_scalar_common_1[8]), &Var_8, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
        succeeded = (Var_8 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          HeadVar__1_1 = Var_8;
        else
        {
          MR_Word next_value_of_tscc_proc_2_input_1_HeadVar__2_2 = ArgX2_6;
          MR_Word next_value_of_tscc_proc_2_input_2_HeadVar__3_3 = ArgY2_7;

          // direct tailcall eliminated
          ;
          tscc_proc_2_input_1_HeadVar__2_2 = next_value_of_tscc_proc_2_input_1_HeadVar__2_2;
          tscc_proc_2_input_2_HeadVar__3_3 = next_value_of_tscc_proc_2_input_2_HeadVar__3_3;
          goto top_of_proc_2;
        }
      }
      tscc_output_1_HeadVar__1_1 = HeadVar__1_1;
      goto tscc_end;
    }
  top_of_proc_2:;
    {
      MR_Word HeadVar__1_1;
      MR_Word HeadVar__2_2 = tscc_proc_2_input_1_HeadVar__2_2;
      MR_Word HeadVar__3_3 = tscc_proc_2_input_2_HeadVar__3_3;
      MR_bool succeeded;
      MR_Integer CastX_715 = (MR_Integer) (HeadVar__2_2);
      MR_Integer CastY_716 = (MR_Integer) (HeadVar__3_3);

      succeeded = (CastX_715 == CastY_716);
      if (succeeded)
        HeadVar__1_1 = (MR_Integer) 0;
      else
        switch (MR_tag((MR_Word) HeadVar__2_2)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Var_754 = (MR_Word) (MR_body((MR_Word) (HeadVar__2_2), (MR_Integer) 0));

              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word ArgY1_372 = (MR_Word) (MR_body((MR_Word) (HeadVar__3_3), (MR_Integer) 0));
                    MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__2_2 = Var_754;
                    MR_Word next_value_of_tscc_proc_1_input_2_HeadVar__3_3 = ArgY1_372;

                    // direct tailcall eliminated
                    ;
                    tscc_proc_1_input_1_HeadVar__2_2 = next_value_of_tscc_proc_1_input_1_HeadVar__2_2;
                    tscc_proc_1_input_2_HeadVar__3_3 = next_value_of_tscc_proc_1_input_2_HeadVar__3_3;
                    goto top_of_proc_1;
                  }
                  break;
                case (MR_Integer) 1:
                  HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 3:
                      HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 4:
                      HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 5:
                      HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 6:
                      HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 7:
                      HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 8:
                      HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 9:
                      HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 10:
                      HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Var_745 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

                    mercury__builtin__compare_3_p_0((MR_Word) (&erl_backend__elds_scalar_common_1[14]), &HeadVar__1_1, ((MR_Box) (Var_745)), ((MR_Box) (ArgY1_5)));
                  }
                  break;
                case (MR_Integer) 2:
                  HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 1:
                      HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 2:
                      HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 3:
                      HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 4:
                      HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 5:
                      HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 6:
                      HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 7:
                      HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 8:
                      HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 9:
                      HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 10:
                      HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Var_759 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));

              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 1:
                  HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word ArgY1_46 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))));

                    erl_backend__elds____Compare____elds_term_0_0(&HeadVar__1_1, Var_759, ArgY1_46);
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 1:
                      HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 2:
                      HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 3:
                      HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 4:
                      HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 5:
                      HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 6:
                      HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 7:
                      HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 8:
                      HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 9:
                      HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 10:
                      HeadVar__1_1 = (MR_Integer) 1;
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
                  MR_Word Var_750 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  MR_Word Var_751 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

                  switch (MR_tag((MR_Word) HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 1:
                      HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 3:
                      switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          {
                            MR_Word ArgY1_89 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                            MR_Word ArgY2_91 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                            MR_Word Var_92;

                            erl_backend__elds____Compare____elds_expr_0_0(&Var_92, Var_751, ArgY1_89);
                            succeeded = (Var_92 == (MR_Integer) 0);
                            succeeded = !(succeeded);
                            if (succeeded)
                              HeadVar__1_1 = Var_92;
                            else
                            {
                              MR_Word next_value_of_tscc_proc_2_input_1_HeadVar__2_2 = Var_750;
                              MR_Word next_value_of_tscc_proc_2_input_2_HeadVar__3_3 = ArgY2_91;

                              // direct tailcall eliminated
                              ;
                              tscc_proc_2_input_1_HeadVar__2_2 = next_value_of_tscc_proc_2_input_1_HeadVar__2_2;
                              tscc_proc_2_input_2_HeadVar__3_3 = next_value_of_tscc_proc_2_input_2_HeadVar__3_3;
                              goto top_of_proc_2;
                            }
                          }
                          break;
                        case (MR_Integer) 1:
                          HeadVar__1_1 = (MR_Integer) 1;
                          break;
                        case (MR_Integer) 2:
                          HeadVar__1_1 = (MR_Integer) 1;
                          break;
                        case (MR_Integer) 3:
                          HeadVar__1_1 = (MR_Integer) 1;
                          break;
                        case (MR_Integer) 4:
                          HeadVar__1_1 = (MR_Integer) 1;
                          break;
                        case (MR_Integer) 5:
                          HeadVar__1_1 = (MR_Integer) 1;
                          break;
                        case (MR_Integer) 6:
                          HeadVar__1_1 = (MR_Integer) 1;
                          break;
                        case (MR_Integer) 7:
                          HeadVar__1_1 = (MR_Integer) 1;
                          break;
                        case (MR_Integer) 8:
                          HeadVar__1_1 = (MR_Integer) 1;
                          break;
                        case (MR_Integer) 9:
                          HeadVar__1_1 = (MR_Integer) 1;
                          break;
                        case (MR_Integer) 10:
                          HeadVar__1_1 = (MR_Integer) 1;
                          break;
                      }
                      break;
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word Var_765 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  MR_Word Var_766 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 3);
                  MR_Unsigned packed_args_2 = (MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1)));

                  switch (MR_tag((MR_Word) HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 1:
                      HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 3:
                      switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          HeadVar__1_1 = (MR_Integer) 2;
                          break;
                        case (MR_Integer) 1:
                          {
                            MR_Word ArgY1_147 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 3);
                            MR_Word ArgY2_149 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                            MR_Unsigned packed_args_3 = (MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1)));
                            MR_Word Var_150;
                            MR_Integer Var_769 = (MR_Integer) (Var_766);
                            MR_Integer Var_770 = (MR_Integer) (ArgY1_147);

                            mercury__private_builtin__builtin_compare_int_3_p_0(&Var_150, Var_769, Var_770);
                            succeeded = (Var_150 == (MR_Integer) 0);
                            succeeded = !(succeeded);
                            if (succeeded)
                              HeadVar__1_1 = Var_150;
                            else
                            {
                              MR_Word next_value_of_tscc_proc_2_input_1_HeadVar__2_2 = Var_765;
                              MR_Word next_value_of_tscc_proc_2_input_2_HeadVar__3_3 = ArgY2_149;

                              // direct tailcall eliminated
                              ;
                              tscc_proc_2_input_1_HeadVar__2_2 = next_value_of_tscc_proc_2_input_1_HeadVar__2_2;
                              tscc_proc_2_input_2_HeadVar__3_3 = next_value_of_tscc_proc_2_input_2_HeadVar__3_3;
                              goto top_of_proc_2;
                            }
                          }
                          break;
                        case (MR_Integer) 2:
                          HeadVar__1_1 = (MR_Integer) 1;
                          break;
                        case (MR_Integer) 3:
                          HeadVar__1_1 = (MR_Integer) 1;
                          break;
                        case (MR_Integer) 4:
                          HeadVar__1_1 = (MR_Integer) 1;
                          break;
                        case (MR_Integer) 5:
                          HeadVar__1_1 = (MR_Integer) 1;
                          break;
                        case (MR_Integer) 6:
                          HeadVar__1_1 = (MR_Integer) 1;
                          break;
                        case (MR_Integer) 7:
                          HeadVar__1_1 = (MR_Integer) 1;
                          break;
                        case (MR_Integer) 8:
                          HeadVar__1_1 = (MR_Integer) 1;
                          break;
                        case (MR_Integer) 9:
                          HeadVar__1_1 = (MR_Integer) 1;
                          break;
                        case (MR_Integer) 10:
                          HeadVar__1_1 = (MR_Integer) 1;
                          break;
                      }
                      break;
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word Var_742 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                  MR_Word Var_743 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  MR_Word Var_744 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 31);
                  MR_Unsigned packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1)));

                  switch (MR_tag((MR_Word) HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 1:
                      HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 3:
                      switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          HeadVar__1_1 = (MR_Integer) 2;
                          break;
                        case (MR_Integer) 1:
                          HeadVar__1_1 = (MR_Integer) 2;
                          break;
                        case (MR_Integer) 2:
                          {
                            MR_Word ArgY1_209 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 31);
                            MR_Word ArgY2_211 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                            MR_Word ArgY3_213 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 3))));
                            MR_Unsigned packed_args_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1)));
                            MR_Word Var_214;
                            MR_Integer Var_767 = (MR_Integer) (Var_744);
                            MR_Integer Var_768 = (MR_Integer) (ArgY1_209);

                            mercury__private_builtin__builtin_compare_int_3_p_0(&Var_214, Var_767, Var_768);
                            succeeded = (Var_214 == (MR_Integer) 0);
                            succeeded = !(succeeded);
                            if (succeeded)
                              HeadVar__1_1 = Var_214;
                            else
                            {
                              MR_Word Var_215;

                              erl_backend__elds____Compare____elds_expr_0_0(&Var_215, Var_743, ArgY2_211);
                              succeeded = (Var_215 == (MR_Integer) 0);
                              succeeded = !(succeeded);
                              if (succeeded)
                                HeadVar__1_1 = Var_215;
                              else
                              {
                                MR_Word next_value_of_tscc_proc_2_input_1_HeadVar__2_2 = Var_742;
                                MR_Word next_value_of_tscc_proc_2_input_2_HeadVar__3_3 = ArgY3_213;

                                // direct tailcall eliminated
                                ;
                                tscc_proc_2_input_1_HeadVar__2_2 = next_value_of_tscc_proc_2_input_1_HeadVar__2_2;
                                tscc_proc_2_input_2_HeadVar__3_3 = next_value_of_tscc_proc_2_input_2_HeadVar__3_3;
                                goto top_of_proc_2;
                              }
                            }
                          }
                          break;
                        case (MR_Integer) 3:
                          HeadVar__1_1 = (MR_Integer) 1;
                          break;
                        case (MR_Integer) 4:
                          HeadVar__1_1 = (MR_Integer) 1;
                          break;
                        case (MR_Integer) 5:
                          HeadVar__1_1 = (MR_Integer) 1;
                          break;
                        case (MR_Integer) 6:
                          HeadVar__1_1 = (MR_Integer) 1;
                          break;
                        case (MR_Integer) 7:
                          HeadVar__1_1 = (MR_Integer) 1;
                          break;
                        case (MR_Integer) 8:
                          HeadVar__1_1 = (MR_Integer) 1;
                          break;
                        case (MR_Integer) 9:
                          HeadVar__1_1 = (MR_Integer) 1;
                          break;
                        case (MR_Integer) 10:
                          HeadVar__1_1 = (MR_Integer) 1;
                          break;
                      }
                      break;
                  }
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word Var_746 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  MR_Word Var_747 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

                  switch (MR_tag((MR_Word) HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 1:
                      HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 3:
                      switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          HeadVar__1_1 = (MR_Integer) 2;
                          break;
                        case (MR_Integer) 1:
                          HeadVar__1_1 = (MR_Integer) 2;
                          break;
                        case (MR_Integer) 2:
                          HeadVar__1_1 = (MR_Integer) 2;
                          break;
                        case (MR_Integer) 3:
                          {
                            MR_Word ArgY1_279 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                            MR_Word ArgY2_281 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                            MR_Word Var_282;

                            erl_backend__elds____Compare____elds_call_target_0_0(&Var_282, Var_747, ArgY1_279);
                            succeeded = (Var_282 == (MR_Integer) 0);
                            succeeded = !(succeeded);
                            if (succeeded)
                              HeadVar__1_1 = Var_282;
                            else
                            {
                              mercury__builtin__compare_3_p_0((MR_Word) (&erl_backend__elds_scalar_common_1[14]), &HeadVar__1_1, ((MR_Box) (Var_746)), ((MR_Box) (ArgY2_281)));
                            }
                          }
                          break;
                        case (MR_Integer) 4:
                          HeadVar__1_1 = (MR_Integer) 1;
                          break;
                        case (MR_Integer) 5:
                          HeadVar__1_1 = (MR_Integer) 1;
                          break;
                        case (MR_Integer) 6:
                          HeadVar__1_1 = (MR_Integer) 1;
                          break;
                        case (MR_Integer) 7:
                          HeadVar__1_1 = (MR_Integer) 1;
                          break;
                        case (MR_Integer) 8:
                          HeadVar__1_1 = (MR_Integer) 1;
                          break;
                        case (MR_Integer) 9:
                          HeadVar__1_1 = (MR_Integer) 1;
                          break;
                        case (MR_Integer) 10:
                          HeadVar__1_1 = (MR_Integer) 1;
                          break;
                      }
                      break;
                  }
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_Word Var_756 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

                  switch (MR_tag((MR_Word) HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 1:
                      HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 3:
                      switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          HeadVar__1_1 = (MR_Integer) 2;
                          break;
                        case (MR_Integer) 1:
                          HeadVar__1_1 = (MR_Integer) 2;
                          break;
                        case (MR_Integer) 2:
                          HeadVar__1_1 = (MR_Integer) 2;
                          break;
                        case (MR_Integer) 3:
                          HeadVar__1_1 = (MR_Integer) 2;
                          break;
                        case (MR_Integer) 4:
                          {
                            MR_Word ArgY1_331 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));

                            erl_backend__elds____Compare____elds_rtti_id_0_0(&HeadVar__1_1, Var_756, ArgY1_331);
                          }
                          break;
                        case (MR_Integer) 5:
                          HeadVar__1_1 = (MR_Integer) 1;
                          break;
                        case (MR_Integer) 6:
                          HeadVar__1_1 = (MR_Integer) 1;
                          break;
                        case (MR_Integer) 7:
                          HeadVar__1_1 = (MR_Integer) 1;
                          break;
                        case (MR_Integer) 8:
                          HeadVar__1_1 = (MR_Integer) 1;
                          break;
                        case (MR_Integer) 9:
                          HeadVar__1_1 = (MR_Integer) 1;
                          break;
                        case (MR_Integer) 10:
                          HeadVar__1_1 = (MR_Integer) 1;
                          break;
                      }
                      break;
                  }
                }
                break;
              case (MR_Integer) 5:
                {
                  MR_Word Var_748 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  MR_Word Var_749 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

                  switch (MR_tag((MR_Word) HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 3:
                      switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          HeadVar__1_1 = (MR_Integer) 2;
                          break;
                        case (MR_Integer) 1:
                          HeadVar__1_1 = (MR_Integer) 2;
                          break;
                        case (MR_Integer) 2:
                          HeadVar__1_1 = (MR_Integer) 2;
                          break;
                        case (MR_Integer) 3:
                          HeadVar__1_1 = (MR_Integer) 2;
                          break;
                        case (MR_Integer) 4:
                          HeadVar__1_1 = (MR_Integer) 2;
                          break;
                        case (MR_Integer) 5:
                          {
                            MR_Word ArgY1_421 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                            MR_Word ArgY2_423 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                            MR_Word Var_424;

                            erl_backend__elds____Compare____elds_expr_0_0(&Var_424, Var_749, ArgY1_421);
                            succeeded = (Var_424 == (MR_Integer) 0);
                            succeeded = !(succeeded);
                            if (succeeded)
                              HeadVar__1_1 = Var_424;
                            else
                            {
                              mercury__builtin__compare_3_p_0((MR_Word) (&erl_backend__elds_scalar_common_1[11]), &HeadVar__1_1, ((MR_Box) (Var_748)), ((MR_Box) (ArgY2_423)));
                            }
                          }
                          break;
                        case (MR_Integer) 6:
                          HeadVar__1_1 = (MR_Integer) 1;
                          break;
                        case (MR_Integer) 7:
                          HeadVar__1_1 = (MR_Integer) 1;
                          break;
                        case (MR_Integer) 8:
                          HeadVar__1_1 = (MR_Integer) 1;
                          break;
                        case (MR_Integer) 9:
                          HeadVar__1_1 = (MR_Integer) 1;
                          break;
                        case (MR_Integer) 10:
                          HeadVar__1_1 = (MR_Integer) 1;
                          break;
                      }
                      break;
                  }
                }
                break;
              case (MR_Integer) 6:
                {
                  MR_Word Var_761 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 4))));
                  MR_Word Var_762 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                  MR_Word Var_763 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  MR_Word Var_764 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

                  switch (MR_tag((MR_Word) HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 3:
                      switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          HeadVar__1_1 = (MR_Integer) 2;
                          break;
                        case (MR_Integer) 1:
                          HeadVar__1_1 = (MR_Integer) 2;
                          break;
                        case (MR_Integer) 2:
                          HeadVar__1_1 = (MR_Integer) 2;
                          break;
                        case (MR_Integer) 3:
                          HeadVar__1_1 = (MR_Integer) 2;
                          break;
                        case (MR_Integer) 4:
                          HeadVar__1_1 = (MR_Integer) 2;
                          break;
                        case (MR_Integer) 5:
                          HeadVar__1_1 = (MR_Integer) 2;
                          break;
                        case (MR_Integer) 6:
                          {
                            MR_Word ArgY1_497 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                            MR_Word ArgY2_499 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                            MR_Word ArgY3_501 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 3))));
                            MR_Word ArgY4_503 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 4))));
                            MR_Word Var_504;

                            erl_backend__elds____Compare____elds_expr_0_0(&Var_504, Var_764, ArgY1_497);
                            succeeded = (Var_504 == (MR_Integer) 0);
                            succeeded = !(succeeded);
                            if (succeeded)
                              HeadVar__1_1 = Var_504;
                            else
                            {
                              MR_Word Var_505;

                              mercury__builtin__compare_3_p_0((MR_Word) (&erl_backend__elds_scalar_common_1[11]), &Var_505, ((MR_Box) (Var_763)), ((MR_Box) (ArgY2_499)));
                              succeeded = (Var_505 == (MR_Integer) 0);
                              succeeded = !(succeeded);
                              if (succeeded)
                                HeadVar__1_1 = Var_505;
                              else
                              {
                                MR_Word Var_506;

                                mercury__builtin__compare_3_p_0((MR_Word) (&erl_backend__elds_scalar_common_1[12]), &Var_506, ((MR_Box) (Var_762)), ((MR_Box) (ArgY3_501)));
                                succeeded = (Var_506 == (MR_Integer) 0);
                                succeeded = !(succeeded);
                                if (succeeded)
                                  HeadVar__1_1 = Var_506;
                                else
                                {
                                  mercury__builtin__compare_3_p_0((MR_Word) (&erl_backend__elds_scalar_common_1[13]), &HeadVar__1_1, ((MR_Box) (Var_761)), ((MR_Box) (ArgY4_503)));
                                }
                              }
                            }
                          }
                          break;
                        case (MR_Integer) 7:
                          HeadVar__1_1 = (MR_Integer) 1;
                          break;
                        case (MR_Integer) 8:
                          HeadVar__1_1 = (MR_Integer) 1;
                          break;
                        case (MR_Integer) 9:
                          HeadVar__1_1 = (MR_Integer) 1;
                          break;
                        case (MR_Integer) 10:
                          HeadVar__1_1 = (MR_Integer) 1;
                          break;
                      }
                      break;
                  }
                }
                break;
              case (MR_Integer) 7:
                {
                  MR_Word Var_760 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

                  switch (MR_tag((MR_Word) HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 3:
                      switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          HeadVar__1_1 = (MR_Integer) 2;
                          break;
                        case (MR_Integer) 1:
                          HeadVar__1_1 = (MR_Integer) 2;
                          break;
                        case (MR_Integer) 2:
                          HeadVar__1_1 = (MR_Integer) 2;
                          break;
                        case (MR_Integer) 3:
                          HeadVar__1_1 = (MR_Integer) 2;
                          break;
                        case (MR_Integer) 4:
                          HeadVar__1_1 = (MR_Integer) 2;
                          break;
                        case (MR_Integer) 5:
                          HeadVar__1_1 = (MR_Integer) 2;
                          break;
                        case (MR_Integer) 6:
                          HeadVar__1_1 = (MR_Integer) 2;
                          break;
                        case (MR_Integer) 7:
                          {
                            MR_Word ArgY1_559 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                            MR_Word next_value_of_tscc_proc_2_input_1_HeadVar__2_2 = Var_760;
                            MR_Word next_value_of_tscc_proc_2_input_2_HeadVar__3_3 = ArgY1_559;

                            // direct tailcall eliminated
                            ;
                            tscc_proc_2_input_1_HeadVar__2_2 = next_value_of_tscc_proc_2_input_1_HeadVar__2_2;
                            tscc_proc_2_input_2_HeadVar__3_3 = next_value_of_tscc_proc_2_input_2_HeadVar__3_3;
                            goto top_of_proc_2;
                          }
                          break;
                        case (MR_Integer) 8:
                          HeadVar__1_1 = (MR_Integer) 1;
                          break;
                        case (MR_Integer) 9:
                          HeadVar__1_1 = (MR_Integer) 1;
                          break;
                        case (MR_Integer) 10:
                          HeadVar__1_1 = (MR_Integer) 1;
                          break;
                      }
                      break;
                  }
                }
                break;
              case (MR_Integer) 8:
                {
                  MR_Word Var_752 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  MR_String Var_753 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

                  switch (MR_tag((MR_Word) HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 3:
                      switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          HeadVar__1_1 = (MR_Integer) 2;
                          break;
                        case (MR_Integer) 1:
                          HeadVar__1_1 = (MR_Integer) 2;
                          break;
                        case (MR_Integer) 2:
                          HeadVar__1_1 = (MR_Integer) 2;
                          break;
                        case (MR_Integer) 3:
                          HeadVar__1_1 = (MR_Integer) 2;
                          break;
                        case (MR_Integer) 4:
                          HeadVar__1_1 = (MR_Integer) 2;
                          break;
                        case (MR_Integer) 5:
                          HeadVar__1_1 = (MR_Integer) 2;
                          break;
                        case (MR_Integer) 6:
                          HeadVar__1_1 = (MR_Integer) 2;
                          break;
                        case (MR_Integer) 7:
                          HeadVar__1_1 = (MR_Integer) 2;
                          break;
                        case (MR_Integer) 8:
                          {
                            MR_String ArgY1_611 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                            MR_Word ArgY2_613 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                            MR_Word Var_614;

                            mercury__private_builtin__builtin_compare_string_3_p_0(&Var_614, Var_753, ArgY1_611);
                            succeeded = (Var_614 == (MR_Integer) 0);
                            succeeded = !(succeeded);
                            if (succeeded)
                              HeadVar__1_1 = Var_614;
                            else
                              mercury__term____Compare____context_0_0(&HeadVar__1_1, Var_752, ArgY2_613);
                          }
                          break;
                        case (MR_Integer) 9:
                          HeadVar__1_1 = (MR_Integer) 1;
                          break;
                        case (MR_Integer) 10:
                          HeadVar__1_1 = (MR_Integer) 1;
                          break;
                      }
                      break;
                  }
                }
                break;
              case (MR_Integer) 9:
                {
                  MR_Word Var_757 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  MR_Word Var_758 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

                  switch (MR_tag((MR_Word) HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 3:
                      switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          HeadVar__1_1 = (MR_Integer) 2;
                          break;
                        case (MR_Integer) 1:
                          HeadVar__1_1 = (MR_Integer) 2;
                          break;
                        case (MR_Integer) 2:
                          HeadVar__1_1 = (MR_Integer) 2;
                          break;
                        case (MR_Integer) 3:
                          HeadVar__1_1 = (MR_Integer) 2;
                          break;
                        case (MR_Integer) 4:
                          HeadVar__1_1 = (MR_Integer) 2;
                          break;
                        case (MR_Integer) 5:
                          HeadVar__1_1 = (MR_Integer) 2;
                          break;
                        case (MR_Integer) 6:
                          HeadVar__1_1 = (MR_Integer) 2;
                          break;
                        case (MR_Integer) 7:
                          HeadVar__1_1 = (MR_Integer) 2;
                          break;
                        case (MR_Integer) 8:
                          HeadVar__1_1 = (MR_Integer) 2;
                          break;
                        case (MR_Integer) 9:
                          {
                            MR_Word ArgY1_669 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                            MR_Word ArgY2_671 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                            MR_Word Var_672;

                            erl_backend__elds____Compare____elds_expr_0_0(&Var_672, Var_758, ArgY1_669);
                            succeeded = (Var_672 == (MR_Integer) 0);
                            succeeded = !(succeeded);
                            if (succeeded)
                              HeadVar__1_1 = Var_672;
                            else
                            {
                              MR_Word next_value_of_tscc_proc_2_input_1_HeadVar__2_2 = Var_757;
                              MR_Word next_value_of_tscc_proc_2_input_2_HeadVar__3_3 = ArgY2_671;

                              // direct tailcall eliminated
                              ;
                              tscc_proc_2_input_1_HeadVar__2_2 = next_value_of_tscc_proc_2_input_1_HeadVar__2_2;
                              tscc_proc_2_input_2_HeadVar__3_3 = next_value_of_tscc_proc_2_input_2_HeadVar__3_3;
                              goto top_of_proc_2;
                            }
                          }
                          break;
                        case (MR_Integer) 10:
                          HeadVar__1_1 = (MR_Integer) 1;
                          break;
                      }
                      break;
                  }
                }
                break;
              case (MR_Integer) 10:
                {
                  MR_Word Var_755 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

                  switch (MR_tag((MR_Word) HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 3:
                      switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          HeadVar__1_1 = (MR_Integer) 2;
                          break;
                        case (MR_Integer) 1:
                          HeadVar__1_1 = (MR_Integer) 2;
                          break;
                        case (MR_Integer) 2:
                          HeadVar__1_1 = (MR_Integer) 2;
                          break;
                        case (MR_Integer) 3:
                          HeadVar__1_1 = (MR_Integer) 2;
                          break;
                        case (MR_Integer) 4:
                          HeadVar__1_1 = (MR_Integer) 2;
                          break;
                        case (MR_Integer) 5:
                          HeadVar__1_1 = (MR_Integer) 2;
                          break;
                        case (MR_Integer) 6:
                          HeadVar__1_1 = (MR_Integer) 2;
                          break;
                        case (MR_Integer) 7:
                          HeadVar__1_1 = (MR_Integer) 2;
                          break;
                        case (MR_Integer) 8:
                          HeadVar__1_1 = (MR_Integer) 2;
                          break;
                        case (MR_Integer) 9:
                          HeadVar__1_1 = (MR_Integer) 2;
                          break;
                        case (MR_Integer) 10:
                          {
                            MR_Word ArgY1_714 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));

                            mercury__builtin__compare_3_p_0((MR_Word) (&erl_backend__elds_scalar_common_1[11]), &HeadVar__1_1, ((MR_Box) (Var_755)), ((MR_Box) (ArgY1_714)));
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
      tscc_output_1_HeadVar__1_1 = HeadVar__1_1;
      goto tscc_end;
    }
  tscc_end:;
    *tscc_output_ptr_1_HeadVar__1_1 = tscc_output_1_HeadVar__1_1;
    return;
  }
}

void MR_CALL 
erl_backend__elds____Compare____elds_call_target_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_22 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_23 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_22 == CastY_23);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));

                  hlds__hlds_pred____Compare____pred_proc_id_0_0(HeadVar__1_1, Var_29, ArgY1_5);
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ArgY1_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

                  erl_backend__elds____Compare____elds_expr_0_0(HeadVar__1_1, Var_28, ArgY1_13);
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
            MR_String Var_27 = ((MR_String) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));

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
                  MR_String ArgY1_21 = ((MR_String) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))));

                  mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, Var_27, ArgY1_21);
                }
                break;
            }
          }
          break;
      }
  }
}

void MR_CALL 
erl_backend__elds____Compare____elds_term_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_45 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_46 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_45 == CastY_46);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Integer Var_4;
      MR_Integer Var_5;

      erl_backend__elds____Index____elds_term_0_0(HeadVar__2_2, &Var_4);
      erl_backend__elds____Index____elds_term_0_0(HeadVar__3_3, &Var_5);
      succeeded = (Var_4 < Var_5);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        succeeded = (Var_4 > Var_5);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 2;
        else
        {
          MR_Word Var_6;

          switch (MR_tag((MR_Word) HeadVar__2_2)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                Var_6 = (MR_Integer) 0;
                succeeded = MR_TRUE;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Char ArgX1_7 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
                MR_Char ArgY1_8;

                succeeded = ((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1);
                if (succeeded)
                {
                  ArgY1_8 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
                  mercury__private_builtin__builtin_compare_character_3_p_0(&Var_6, ArgX1_7, ArgY1_8);
                  succeeded = MR_TRUE;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Integer ArgX1_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
                MR_Integer ArgY1_10;

                succeeded = ((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 2);
                if (succeeded)
                {
                  ArgY1_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))));
                  mercury__private_builtin__builtin_compare_int_3_p_0(&Var_6, ArgX1_9, ArgY1_10);
                  succeeded = MR_TRUE;
                }
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Unsigned ArgX1_11 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                    MR_Unsigned ArgY1_12;

                    succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))) == (MR_Integer) 0)));
                    if (succeeded)
                    {
                      ArgY1_12 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                      mercury__private_builtin__builtin_compare_uint_3_p_0(&Var_6, ArgX1_11, ArgY1_12);
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    int8_t ArgX1_13 = ((int8_t) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1)));
                    int8_t ArgY1_14;

                    succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))) == (MR_Integer) 1)));
                    if (succeeded)
                    {
                      ArgY1_14 = ((int8_t) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1)));
                      mercury__private_builtin__builtin_compare_int8_3_p_0(&Var_6, ArgX1_13, ArgY1_14);
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    uint8_t ArgX1_15 = ((uint8_t) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1)));
                    uint8_t ArgY1_16;

                    succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))) == (MR_Integer) 2)));
                    if (succeeded)
                    {
                      ArgY1_16 = ((uint8_t) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1)));
                      mercury__private_builtin__builtin_compare_uint8_3_p_0(&Var_6, ArgX1_15, ArgY1_16);
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    int16_t ArgX1_17 = ((int16_t) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1)));
                    int16_t ArgY1_18;

                    succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))) == (MR_Integer) 3)));
                    if (succeeded)
                    {
                      ArgY1_18 = ((int16_t) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1)));
                      mercury__private_builtin__builtin_compare_int16_3_p_0(&Var_6, ArgX1_17, ArgY1_18);
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 4:
                  {
                    uint16_t ArgX1_19 = ((uint16_t) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1)));
                    uint16_t ArgY1_20;

                    succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))) == (MR_Integer) 4)));
                    if (succeeded)
                    {
                      ArgY1_20 = ((uint16_t) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1)));
                      mercury__private_builtin__builtin_compare_uint16_3_p_0(&Var_6, ArgX1_19, ArgY1_20);
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 5:
                  {
                    int32_t ArgX1_21 = ((int32_t) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1)));
                    int32_t ArgY1_22;

                    succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))) == (MR_Integer) 5)));
                    if (succeeded)
                    {
                      ArgY1_22 = ((int32_t) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1)));
                      mercury__private_builtin__builtin_compare_int32_3_p_0(&Var_6, ArgX1_21, ArgY1_22);
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 6:
                  {
                    uint32_t ArgX1_23 = ((uint32_t) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1)));
                    uint32_t ArgY1_24;

                    succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))) == (MR_Integer) 6)));
                    if (succeeded)
                    {
                      ArgY1_24 = ((uint32_t) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1)));
                      mercury__private_builtin__builtin_compare_uint32_3_p_0(&Var_6, ArgX1_23, ArgY1_24);
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 7:
                  {
                    int64_t ArgX1_25 = MR_unbox_int64((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1)));
                    int64_t ArgY1_26;

                    succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))) == (MR_Integer) 7)));
                    if (succeeded)
                    {
                      ArgY1_26 = MR_unbox_int64((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1)));
                      mercury__private_builtin__builtin_compare_int64_3_p_0(&Var_6, ArgX1_25, ArgY1_26);
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 8:
                  {
                    uint64_t ArgX1_27 = MR_unbox_uint64((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1)));
                    uint64_t ArgY1_28;

                    succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))) == (MR_Integer) 8)));
                    if (succeeded)
                    {
                      ArgY1_28 = MR_unbox_uint64((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1)));
                      mercury__private_builtin__builtin_compare_uint64_3_p_0(&Var_6, ArgX1_27, ArgY1_28);
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 9:
                  {
                    MR_Float ArgX1_29 = MR_unbox_float((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1)));
                    MR_Float ArgY1_30;

                    succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))) == (MR_Integer) 9)));
                    if (succeeded)
                    {
                      ArgY1_30 = MR_unbox_float((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1)));
                      mercury__private_builtin__builtin_compare_float_3_p_0(&Var_6, ArgX1_29, ArgY1_30);
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 10:
                  {
                    MR_String ArgX1_31 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                    MR_String ArgY1_32;

                    succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))) == (MR_Integer) 10)));
                    if (succeeded)
                    {
                      ArgY1_32 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                      mercury__private_builtin__builtin_compare_string_3_p_0(&Var_6, ArgX1_31, ArgY1_32);
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 11:
                  {
                    MR_String ArgX1_33 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                    MR_String ArgY1_34;

                    succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))) == (MR_Integer) 11)));
                    if (succeeded)
                    {
                      ArgY1_34 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                      mercury__private_builtin__builtin_compare_string_3_p_0(&Var_6, ArgX1_33, ArgY1_34);
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 12:
                  {
                    MR_String ArgX1_35 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                    MR_String ArgY1_36;

                    succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))) == (MR_Integer) 12)));
                    if (succeeded)
                    {
                      ArgY1_36 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                      mercury__private_builtin__builtin_compare_string_3_p_0(&Var_6, ArgX1_35, ArgY1_36);
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 13:
                  {
                    MR_Word ArgX1_37 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                    MR_Word ArgY1_38;

                    succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))) == (MR_Integer) 13)));
                    if (succeeded)
                    {
                      ArgY1_38 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                      mdbcomp__sym_name____Compare____sym_name_0_0(&Var_6, ArgX1_37, ArgY1_38);
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 14:
                  {
                    MR_Word TypeInfo_63_63;
                    MR_Word ArgX1_39 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                    MR_Word ArgY1_40;

                    succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))) == (MR_Integer) 14)));
                    if (succeeded)
                    {
                      ArgY1_40 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                      TypeInfo_63_63 = (MR_Word) (&erl_backend__elds_scalar_common_1[14]);
                      mercury__builtin__compare_3_p_0(TypeInfo_63_63, &Var_6, ((MR_Box) (ArgX1_39)), ((MR_Box) (ArgY1_40)));
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 15:
                  {
                    MR_Word TypeInfo_64_64;
                    MR_Word ArgX1_41 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                    MR_Word ArgY1_42;

                    succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))) == (MR_Integer) 15)));
                    if (succeeded)
                    {
                      ArgY1_42 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                      TypeInfo_64_64 = (MR_Word) (&erl_backend__elds_scalar_common_1[0]);
                      mercury__builtin__compare_3_p_0(TypeInfo_64_64, &Var_6, ((MR_Box) (ArgX1_41)), ((MR_Box) (ArgY1_42)));
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 16:
                  {
                    MR_String ArgX1_43 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                    MR_String ArgY1_44;

                    succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))) == (MR_Integer) 16)));
                    if (succeeded)
                    {
                      ArgY1_44 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                      mercury__private_builtin__builtin_compare_string_3_p_0(&Var_6, ArgX1_43, ArgY1_44);
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
              }
              break;
          }
          if (succeeded)
            *HeadVar__1_1 = Var_6;
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
erl_backend__elds____Index____elds_term_0_0(
  MR_Word HeadVar__1_1,
  MR_Integer * HeadVar__2_2)
{
  switch (MR_tag((MR_Word) HeadVar__1_1)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *HeadVar__2_2 = (MR_Integer) 18;
      break;
    case (MR_Integer) 1:
      *HeadVar__2_2 = (MR_Integer) 0;
      break;
    case (MR_Integer) 2:
      *HeadVar__2_2 = (MR_Integer) 1;
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0)))) {
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
          *HeadVar__2_2 = (MR_Integer) 6;
          break;
        case (MR_Integer) 5:
          *HeadVar__2_2 = (MR_Integer) 7;
          break;
        case (MR_Integer) 6:
          *HeadVar__2_2 = (MR_Integer) 8;
          break;
        case (MR_Integer) 7:
          *HeadVar__2_2 = (MR_Integer) 9;
          break;
        case (MR_Integer) 8:
          *HeadVar__2_2 = (MR_Integer) 10;
          break;
        case (MR_Integer) 9:
          *HeadVar__2_2 = (MR_Integer) 11;
          break;
        case (MR_Integer) 10:
          *HeadVar__2_2 = (MR_Integer) 12;
          break;
        case (MR_Integer) 11:
          *HeadVar__2_2 = (MR_Integer) 13;
          break;
        case (MR_Integer) 12:
          *HeadVar__2_2 = (MR_Integer) 14;
          break;
        case (MR_Integer) 13:
          *HeadVar__2_2 = (MR_Integer) 15;
          break;
        case (MR_Integer) 14:
          *HeadVar__2_2 = (MR_Integer) 16;
          break;
        case (MR_Integer) 15:
          *HeadVar__2_2 = (MR_Integer) 17;
          break;
        case (MR_Integer) 16:
          *HeadVar__2_2 = (MR_Integer) 19;
          break;
      }
      break;
  }
}

void MR_CALL 
erl_backend__elds____Compare____elds_rtti_id_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_54 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_55 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_54 == CastY_55);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));

                  backend_libs__rtti____Compare____rtti_type_ctor_0_0(HeadVar__1_1, Var_66, ArgY1_5);
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
            MR_Word Var_67 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ArgY1_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

                  backend_libs__rtti____Compare____rtti_type_info_0_0(HeadVar__1_1, Var_67, ArgY1_17);
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
            MR_Word Var_65 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));

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
                  MR_Word ArgY1_29 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))));

                  backend_libs__rtti____Compare____rtti_pseudo_type_info_0_0(HeadVar__1_1, Var_65, ArgY1_29);
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
            MR_String Var_62 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
            MR_Word Var_63 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
            MR_Word Var_64 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))));

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
                  MR_Word ArgY1_47 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))));
                  MR_Word ArgY2_49 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                  MR_String ArgY3_51 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                  MR_Word Var_52;

                  backend_libs__rtti____Compare____tc_name_0_0(&Var_52, Var_64, ArgY1_47);
                  succeeded = (Var_52 == (MR_Integer) 0);
                  succeeded = !(succeeded);
                  if (succeeded)
                    *HeadVar__1_1 = Var_52;
                  else
                  {
                    MR_Word Var_53;

                    mdbcomp__sym_name____Compare____sym_name_0_0(&Var_53, Var_63, ArgY2_49);
                    succeeded = (Var_53 == (MR_Integer) 0);
                    succeeded = !(succeeded);
                    if (succeeded)
                      *HeadVar__1_1 = Var_53;
                    else
                      mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, Var_62, ArgY3_51);
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
erl_backend__elds____Unify____elds_body_0_0(
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
      MR_Word ArgX1_3 = (MR_Word) (MR_body((MR_Word) (HeadVar__1_1), (MR_Integer) 0));
      MR_Word ArgY1_4;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
      if (succeeded)
      {
        ArgY1_4 = (MR_Word) (MR_body((MR_Word) (HeadVar__2_2), (MR_Integer) 0));
        succeeded = erl_backend__elds____Unify____elds_clause_0_0(ArgX1_3, ArgY1_4);
      }
    }
    else
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
    return succeeded;
  }
}

MR_bool MR_CALL 
erl_backend__elds____Unify____elds_clause_0_0(
  MR_Word tscc_proc_1_input_1_HeadVar__1_1,
  MR_Word tscc_proc_1_input_2_HeadVar__2_2)
{
  {
    MR_Word tscc_proc_2_input_1_HeadVar__1_1;
    MR_Word tscc_proc_2_input_2_HeadVar__2_2;
    MR_bool tscc_output_succeeded;

    // The code for TSCC PROC 1: pred erl_backend.elds.unify_for_erl_backend.elds.elds_clause_0/2-0.
    ;
    // Setup for mutual tailcalls optimized into a loop.
    ;
    // The mutually recursive procedures are:
    ;
    ;
    // proc 1 in TSCC: pred erl_backend.elds.unify_for_erl_backend.elds.elds_clause_0/2-0
    ;
    // proc 2 in TSCC: pred erl_backend.elds.unify_for_erl_backend.elds.elds_expr_0/2-0
    ;
    ;
    goto top_of_proc_1;
  top_of_proc_1:;
    {
      MR_Word HeadVar__1_1 = tscc_proc_1_input_1_HeadVar__1_1;
      MR_Word HeadVar__2_2 = tscc_proc_1_input_2_HeadVar__2_2;
      MR_bool succeeded = MR_TRUE;
      MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
      MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

      succeeded = (CastX_7 == CastY_8);
      if (succeeded)
        succeeded = MR_TRUE;
      else
      {
        MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
        MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
        MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
        MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
        MR_Word next_value_of_tscc_proc_2_input_1_HeadVar__1_1;
        MR_Word next_value_of_tscc_proc_2_input_2_HeadVar__2_2;

        succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&erl_backend__elds_scalar_common_1[8]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
        if (succeeded)
        {
          // direct tailcall eliminated
          ;
          next_value_of_tscc_proc_2_input_1_HeadVar__1_1 = ArgX2_5;
          next_value_of_tscc_proc_2_input_2_HeadVar__2_2 = ArgY2_6;
          tscc_proc_2_input_1_HeadVar__1_1 = next_value_of_tscc_proc_2_input_1_HeadVar__1_1;
          tscc_proc_2_input_2_HeadVar__2_2 = next_value_of_tscc_proc_2_input_2_HeadVar__2_2;
          goto top_of_proc_2;
        }
      }
      tscc_output_succeeded = succeeded;
      goto tscc_end;
    }
  top_of_proc_2:;
    {
      MR_Word HeadVar__1_1 = tscc_proc_2_input_1_HeadVar__1_1;
      MR_Word HeadVar__2_2 = tscc_proc_2_input_2_HeadVar__2_2;
      MR_bool succeeded = MR_TRUE;
      MR_Integer CastX_53 = (MR_Integer) (HeadVar__1_1);
      MR_Integer CastY_54 = (MR_Integer) (HeadVar__2_2);

      succeeded = (CastX_53 == CastY_54);
      if (succeeded)
        succeeded = MR_TRUE;
      else
        switch (MR_tag((MR_Word) HeadVar__1_1)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ArgX1_27 = (MR_Word) (MR_body((MR_Word) (HeadVar__1_1), (MR_Integer) 0));
              MR_Word ArgY1_28;
              MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
              MR_Word next_value_of_tscc_proc_1_input_2_HeadVar__2_2;

              succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
              if (succeeded)
              {
                ArgY1_28 = (MR_Word) (MR_body((MR_Word) (HeadVar__2_2), (MR_Integer) 0));
                // direct tailcall eliminated
                ;
                next_value_of_tscc_proc_1_input_1_HeadVar__1_1 = ArgX1_27;
                next_value_of_tscc_proc_1_input_2_HeadVar__2_2 = ArgY1_28;
                tscc_proc_1_input_1_HeadVar__1_1 = next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
                tscc_proc_1_input_2_HeadVar__2_2 = next_value_of_tscc_proc_1_input_2_HeadVar__2_2;
                goto top_of_proc_1;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word TypeInfo_55_55;
              MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
              MR_Word ArgY1_4;

              succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
              if (succeeded)
              {
                ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
                TypeInfo_55_55 = (MR_Word) (&erl_backend__elds_scalar_common_1[14]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_55_55, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
              MR_Word ArgY1_6;

              succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
              if (succeeded)
              {
                ArgY1_6 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
                succeeded = erl_backend__elds____Unify____elds_term_0_0(ArgX1_5, ArgY1_6);
              }
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word ArgX1_7 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                  MR_Word ArgY1_8;
                  MR_Word ArgX2_9 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
                  MR_Word ArgY2_10;
                  MR_Word next_value_of_tscc_proc_2_input_1_HeadVar__1_1;
                  MR_Word next_value_of_tscc_proc_2_input_2_HeadVar__2_2;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))) == (MR_Integer) 0)));
                  if (succeeded)
                  {
                    ArgY1_8 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                    ArgY2_10 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                    succeeded = erl_backend__elds____Unify____elds_expr_0_0(ArgX1_7, ArgY1_8);
                    if (succeeded)
                    {
                      // direct tailcall eliminated
                      ;
                      next_value_of_tscc_proc_2_input_1_HeadVar__1_1 = ArgX2_9;
                      next_value_of_tscc_proc_2_input_2_HeadVar__2_2 = ArgY2_10;
                      tscc_proc_2_input_1_HeadVar__1_1 = next_value_of_tscc_proc_2_input_1_HeadVar__1_1;
                      tscc_proc_2_input_2_HeadVar__2_2 = next_value_of_tscc_proc_2_input_2_HeadVar__2_2;
                      goto top_of_proc_2;
                    }
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ArgX1_11 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 3);
                  MR_Word ArgY1_12;
                  MR_Word ArgX2_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
                  MR_Word ArgY2_14;
                  MR_Unsigned packed_args_2 = (MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));
                  MR_Unsigned packed_args_3;
                  MR_Word next_value_of_tscc_proc_2_input_1_HeadVar__1_1;
                  MR_Word next_value_of_tscc_proc_2_input_2_HeadVar__2_2;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))) == (MR_Integer) 1)));
                  if (succeeded)
                  {
                    packed_args_3 = (MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1)));
                    ArgY1_12 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 3);
                    ArgY2_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                    succeeded = (ArgX1_11 == ArgY1_12);
                    if (succeeded)
                    {
                      // direct tailcall eliminated
                      ;
                      next_value_of_tscc_proc_2_input_1_HeadVar__1_1 = ArgX2_13;
                      next_value_of_tscc_proc_2_input_2_HeadVar__2_2 = ArgY2_14;
                      tscc_proc_2_input_1_HeadVar__1_1 = next_value_of_tscc_proc_2_input_1_HeadVar__1_1;
                      tscc_proc_2_input_2_HeadVar__2_2 = next_value_of_tscc_proc_2_input_2_HeadVar__2_2;
                      goto top_of_proc_2;
                    }
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word ArgX1_15 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 31);
                  MR_Word ArgY1_16;
                  MR_Word ArgX2_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
                  MR_Word ArgY2_18;
                  MR_Word ArgX3_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
                  MR_Word ArgY3_20;
                  MR_Unsigned packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));
                  MR_Unsigned packed_args_1;
                  MR_Word next_value_of_tscc_proc_2_input_1_HeadVar__1_1;
                  MR_Word next_value_of_tscc_proc_2_input_2_HeadVar__2_2;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))) == (MR_Integer) 2)));
                  if (succeeded)
                  {
                    packed_args_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1)));
                    ArgY1_16 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 31);
                    ArgY2_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                    ArgY3_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                    succeeded = (ArgX1_15 == ArgY1_16);
                    if (succeeded)
                    {
                      succeeded = erl_backend__elds____Unify____elds_expr_0_0(ArgX2_17, ArgY2_18);
                      if (succeeded)
                      {
                        // direct tailcall eliminated
                        ;
                        next_value_of_tscc_proc_2_input_1_HeadVar__1_1 = ArgX3_19;
                        next_value_of_tscc_proc_2_input_2_HeadVar__2_2 = ArgY3_20;
                        tscc_proc_2_input_1_HeadVar__1_1 = next_value_of_tscc_proc_2_input_1_HeadVar__1_1;
                        tscc_proc_2_input_2_HeadVar__2_2 = next_value_of_tscc_proc_2_input_2_HeadVar__2_2;
                        goto top_of_proc_2;
                      }
                    }
                  }
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word TypeInfo_56_56;
                  MR_Word ArgX1_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                  MR_Word ArgY1_22;
                  MR_Word ArgX2_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
                  MR_Word ArgY2_24;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))) == (MR_Integer) 3)));
                  if (succeeded)
                  {
                    ArgY1_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                    ArgY2_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                    succeeded = erl_backend__elds____Unify____elds_call_target_0_0(ArgX1_21, ArgY1_22);
                    if (succeeded)
                    {
                      TypeInfo_56_56 = (MR_Word) (&erl_backend__elds_scalar_common_1[14]);
                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_56_56, ((MR_Box) (ArgX2_23)), ((MR_Box) (ArgY2_24)));
                    }
                  }
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_Word ArgX1_25 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                  MR_Word ArgY1_26;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))) == (MR_Integer) 4)));
                  if (succeeded)
                  {
                    ArgY1_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                    succeeded = erl_backend__elds____Unify____elds_rtti_id_0_0(ArgX1_25, ArgY1_26);
                  }
                }
                break;
              case (MR_Integer) 5:
                {
                  MR_Word TypeInfo_57_57;
                  MR_Word ArgX1_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                  MR_Word ArgY1_30;
                  MR_Word ArgX2_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
                  MR_Word ArgY2_32;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))) == (MR_Integer) 5)));
                  if (succeeded)
                  {
                    ArgY1_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                    ArgY2_32 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                    succeeded = erl_backend__elds____Unify____elds_expr_0_0(ArgX1_29, ArgY1_30);
                    if (succeeded)
                    {
                      TypeInfo_57_57 = (MR_Word) (&erl_backend__elds_scalar_common_1[11]);
                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_57_57, ((MR_Box) (ArgX2_31)), ((MR_Box) (ArgY2_32)));
                    }
                  }
                }
                break;
              case (MR_Integer) 6:
                {
                  MR_Word TypeInfo_60_60;
                  MR_Word TypeInfo_61_61;
                  MR_Word TypeInfo_62_62;
                  MR_Word ArgX1_33 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                  MR_Word ArgY1_34;
                  MR_Word ArgX2_35 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
                  MR_Word ArgY2_36;
                  MR_Word ArgX3_37 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
                  MR_Word ArgY3_38;
                  MR_Word ArgX4_39 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 4))));
                  MR_Word ArgY4_40;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))) == (MR_Integer) 6)));
                  if (succeeded)
                  {
                    ArgY1_34 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                    ArgY2_36 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                    ArgY3_38 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                    ArgY4_40 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 4))));
                    succeeded = erl_backend__elds____Unify____elds_expr_0_0(ArgX1_33, ArgY1_34);
                    if (succeeded)
                    {
                      TypeInfo_60_60 = (MR_Word) (&erl_backend__elds_scalar_common_1[11]);
                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_60_60, ((MR_Box) (ArgX2_35)), ((MR_Box) (ArgY2_36)));
                      if (succeeded)
                      {
                        TypeInfo_61_61 = (MR_Word) (&erl_backend__elds_scalar_common_1[12]);
                        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_61_61, ((MR_Box) (ArgX3_37)), ((MR_Box) (ArgY3_38)));
                        if (succeeded)
                        {
                          TypeInfo_62_62 = (MR_Word) (&erl_backend__elds_scalar_common_1[13]);
                          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_62_62, ((MR_Box) (ArgX4_39)), ((MR_Box) (ArgY4_40)));
                        }
                      }
                    }
                  }
                }
                break;
              case (MR_Integer) 7:
                {
                  MR_Word ArgX1_41 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                  MR_Word ArgY1_42;
                  MR_Word next_value_of_tscc_proc_2_input_1_HeadVar__1_1;
                  MR_Word next_value_of_tscc_proc_2_input_2_HeadVar__2_2;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))) == (MR_Integer) 7)));
                  if (succeeded)
                  {
                    ArgY1_42 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                    // direct tailcall eliminated
                    ;
                    next_value_of_tscc_proc_2_input_1_HeadVar__1_1 = ArgX1_41;
                    next_value_of_tscc_proc_2_input_2_HeadVar__2_2 = ArgY1_42;
                    tscc_proc_2_input_1_HeadVar__1_1 = next_value_of_tscc_proc_2_input_1_HeadVar__1_1;
                    tscc_proc_2_input_2_HeadVar__2_2 = next_value_of_tscc_proc_2_input_2_HeadVar__2_2;
                    goto top_of_proc_2;
                  }
                }
                break;
              case (MR_Integer) 8:
                {
                  MR_String ArgX1_43 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                  MR_String ArgY1_44;
                  MR_Word ArgX2_45 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
                  MR_Word ArgY2_46;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))) == (MR_Integer) 8)));
                  if (succeeded)
                  {
                    ArgY1_44 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                    ArgY2_46 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                    succeeded = (strcmp(ArgX1_43, ArgY1_44) == 0);
                    if (succeeded)
                      succeeded = mercury__term____Unify____context_0_0(ArgX2_45, ArgY2_46);
                  }
                }
                break;
              case (MR_Integer) 9:
                {
                  MR_Word ArgX1_47 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                  MR_Word ArgY1_48;
                  MR_Word ArgX2_49 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
                  MR_Word ArgY2_50;
                  MR_Word next_value_of_tscc_proc_2_input_1_HeadVar__1_1;
                  MR_Word next_value_of_tscc_proc_2_input_2_HeadVar__2_2;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))) == (MR_Integer) 9)));
                  if (succeeded)
                  {
                    ArgY1_48 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                    ArgY2_50 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                    succeeded = erl_backend__elds____Unify____elds_expr_0_0(ArgX1_47, ArgY1_48);
                    if (succeeded)
                    {
                      // direct tailcall eliminated
                      ;
                      next_value_of_tscc_proc_2_input_1_HeadVar__1_1 = ArgX2_49;
                      next_value_of_tscc_proc_2_input_2_HeadVar__2_2 = ArgY2_50;
                      tscc_proc_2_input_1_HeadVar__1_1 = next_value_of_tscc_proc_2_input_1_HeadVar__1_1;
                      tscc_proc_2_input_2_HeadVar__2_2 = next_value_of_tscc_proc_2_input_2_HeadVar__2_2;
                      goto top_of_proc_2;
                    }
                  }
                }
                break;
              case (MR_Integer) 10:
                {
                  MR_Word TypeInfo_59_59;
                  MR_Word ArgX1_51 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                  MR_Word ArgY1_52;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))) == (MR_Integer) 10)));
                  if (succeeded)
                  {
                    ArgY1_52 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                    TypeInfo_59_59 = (MR_Word) (&erl_backend__elds_scalar_common_1[11]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_59_59, ((MR_Box) (ArgX1_51)), ((MR_Box) (ArgY1_52)));
                  }
                }
                break;
            }
            break;
        }
      tscc_output_succeeded = succeeded;
      goto tscc_end;
    }
  tscc_end:;
    return tscc_output_succeeded;
  }
}

MR_bool MR_CALL 
erl_backend__elds____Unify____elds_expr_0_0(
  MR_Word tscc_proc_2_input_1_HeadVar__1_1,
  MR_Word tscc_proc_2_input_2_HeadVar__2_2)
{
  {
    MR_Word tscc_proc_1_input_1_HeadVar__1_1;
    MR_Word tscc_proc_1_input_2_HeadVar__2_2;
    MR_bool tscc_output_succeeded;

    // The code for TSCC PROC 2: pred erl_backend.elds.unify_for_erl_backend.elds.elds_expr_0/2-0.
    ;
    // Setup for mutual tailcalls optimized into a loop.
    ;
    // The mutually recursive procedures are:
    ;
    ;
    // proc 1 in TSCC: pred erl_backend.elds.unify_for_erl_backend.elds.elds_clause_0/2-0
    ;
    // proc 2 in TSCC: pred erl_backend.elds.unify_for_erl_backend.elds.elds_expr_0/2-0
    ;
    ;
    goto top_of_proc_2;
  top_of_proc_1:;
    {
      MR_Word HeadVar__1_1 = tscc_proc_1_input_1_HeadVar__1_1;
      MR_Word HeadVar__2_2 = tscc_proc_1_input_2_HeadVar__2_2;
      MR_bool succeeded = MR_TRUE;
      MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
      MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

      succeeded = (CastX_7 == CastY_8);
      if (succeeded)
        succeeded = MR_TRUE;
      else
      {
        MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
        MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
        MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
        MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
        MR_Word next_value_of_tscc_proc_2_input_1_HeadVar__1_1;
        MR_Word next_value_of_tscc_proc_2_input_2_HeadVar__2_2;

        succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&erl_backend__elds_scalar_common_1[8]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
        if (succeeded)
        {
          // direct tailcall eliminated
          ;
          next_value_of_tscc_proc_2_input_1_HeadVar__1_1 = ArgX2_5;
          next_value_of_tscc_proc_2_input_2_HeadVar__2_2 = ArgY2_6;
          tscc_proc_2_input_1_HeadVar__1_1 = next_value_of_tscc_proc_2_input_1_HeadVar__1_1;
          tscc_proc_2_input_2_HeadVar__2_2 = next_value_of_tscc_proc_2_input_2_HeadVar__2_2;
          goto top_of_proc_2;
        }
      }
      tscc_output_succeeded = succeeded;
      goto tscc_end;
    }
  top_of_proc_2:;
    {
      MR_Word HeadVar__1_1 = tscc_proc_2_input_1_HeadVar__1_1;
      MR_Word HeadVar__2_2 = tscc_proc_2_input_2_HeadVar__2_2;
      MR_bool succeeded = MR_TRUE;
      MR_Integer CastX_53 = (MR_Integer) (HeadVar__1_1);
      MR_Integer CastY_54 = (MR_Integer) (HeadVar__2_2);

      succeeded = (CastX_53 == CastY_54);
      if (succeeded)
        succeeded = MR_TRUE;
      else
        switch (MR_tag((MR_Word) HeadVar__1_1)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ArgX1_27 = (MR_Word) (MR_body((MR_Word) (HeadVar__1_1), (MR_Integer) 0));
              MR_Word ArgY1_28;
              MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
              MR_Word next_value_of_tscc_proc_1_input_2_HeadVar__2_2;

              succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
              if (succeeded)
              {
                ArgY1_28 = (MR_Word) (MR_body((MR_Word) (HeadVar__2_2), (MR_Integer) 0));
                // direct tailcall eliminated
                ;
                next_value_of_tscc_proc_1_input_1_HeadVar__1_1 = ArgX1_27;
                next_value_of_tscc_proc_1_input_2_HeadVar__2_2 = ArgY1_28;
                tscc_proc_1_input_1_HeadVar__1_1 = next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
                tscc_proc_1_input_2_HeadVar__2_2 = next_value_of_tscc_proc_1_input_2_HeadVar__2_2;
                goto top_of_proc_1;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word TypeInfo_55_55;
              MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
              MR_Word ArgY1_4;

              succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
              if (succeeded)
              {
                ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
                TypeInfo_55_55 = (MR_Word) (&erl_backend__elds_scalar_common_1[14]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_55_55, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
              MR_Word ArgY1_6;

              succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
              if (succeeded)
              {
                ArgY1_6 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
                succeeded = erl_backend__elds____Unify____elds_term_0_0(ArgX1_5, ArgY1_6);
              }
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word ArgX1_7 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                  MR_Word ArgY1_8;
                  MR_Word ArgX2_9 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
                  MR_Word ArgY2_10;
                  MR_Word next_value_of_tscc_proc_2_input_1_HeadVar__1_1;
                  MR_Word next_value_of_tscc_proc_2_input_2_HeadVar__2_2;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))) == (MR_Integer) 0)));
                  if (succeeded)
                  {
                    ArgY1_8 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                    ArgY2_10 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                    succeeded = erl_backend__elds____Unify____elds_expr_0_0(ArgX1_7, ArgY1_8);
                    if (succeeded)
                    {
                      // direct tailcall eliminated
                      ;
                      next_value_of_tscc_proc_2_input_1_HeadVar__1_1 = ArgX2_9;
                      next_value_of_tscc_proc_2_input_2_HeadVar__2_2 = ArgY2_10;
                      tscc_proc_2_input_1_HeadVar__1_1 = next_value_of_tscc_proc_2_input_1_HeadVar__1_1;
                      tscc_proc_2_input_2_HeadVar__2_2 = next_value_of_tscc_proc_2_input_2_HeadVar__2_2;
                      goto top_of_proc_2;
                    }
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ArgX1_11 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 3);
                  MR_Word ArgY1_12;
                  MR_Word ArgX2_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
                  MR_Word ArgY2_14;
                  MR_Unsigned packed_args_2 = (MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));
                  MR_Unsigned packed_args_3;
                  MR_Word next_value_of_tscc_proc_2_input_1_HeadVar__1_1;
                  MR_Word next_value_of_tscc_proc_2_input_2_HeadVar__2_2;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))) == (MR_Integer) 1)));
                  if (succeeded)
                  {
                    packed_args_3 = (MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1)));
                    ArgY1_12 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 3);
                    ArgY2_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                    succeeded = (ArgX1_11 == ArgY1_12);
                    if (succeeded)
                    {
                      // direct tailcall eliminated
                      ;
                      next_value_of_tscc_proc_2_input_1_HeadVar__1_1 = ArgX2_13;
                      next_value_of_tscc_proc_2_input_2_HeadVar__2_2 = ArgY2_14;
                      tscc_proc_2_input_1_HeadVar__1_1 = next_value_of_tscc_proc_2_input_1_HeadVar__1_1;
                      tscc_proc_2_input_2_HeadVar__2_2 = next_value_of_tscc_proc_2_input_2_HeadVar__2_2;
                      goto top_of_proc_2;
                    }
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word ArgX1_15 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 31);
                  MR_Word ArgY1_16;
                  MR_Word ArgX2_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
                  MR_Word ArgY2_18;
                  MR_Word ArgX3_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
                  MR_Word ArgY3_20;
                  MR_Unsigned packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));
                  MR_Unsigned packed_args_1;
                  MR_Word next_value_of_tscc_proc_2_input_1_HeadVar__1_1;
                  MR_Word next_value_of_tscc_proc_2_input_2_HeadVar__2_2;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))) == (MR_Integer) 2)));
                  if (succeeded)
                  {
                    packed_args_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1)));
                    ArgY1_16 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 31);
                    ArgY2_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                    ArgY3_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                    succeeded = (ArgX1_15 == ArgY1_16);
                    if (succeeded)
                    {
                      succeeded = erl_backend__elds____Unify____elds_expr_0_0(ArgX2_17, ArgY2_18);
                      if (succeeded)
                      {
                        // direct tailcall eliminated
                        ;
                        next_value_of_tscc_proc_2_input_1_HeadVar__1_1 = ArgX3_19;
                        next_value_of_tscc_proc_2_input_2_HeadVar__2_2 = ArgY3_20;
                        tscc_proc_2_input_1_HeadVar__1_1 = next_value_of_tscc_proc_2_input_1_HeadVar__1_1;
                        tscc_proc_2_input_2_HeadVar__2_2 = next_value_of_tscc_proc_2_input_2_HeadVar__2_2;
                        goto top_of_proc_2;
                      }
                    }
                  }
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word TypeInfo_56_56;
                  MR_Word ArgX1_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                  MR_Word ArgY1_22;
                  MR_Word ArgX2_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
                  MR_Word ArgY2_24;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))) == (MR_Integer) 3)));
                  if (succeeded)
                  {
                    ArgY1_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                    ArgY2_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                    succeeded = erl_backend__elds____Unify____elds_call_target_0_0(ArgX1_21, ArgY1_22);
                    if (succeeded)
                    {
                      TypeInfo_56_56 = (MR_Word) (&erl_backend__elds_scalar_common_1[14]);
                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_56_56, ((MR_Box) (ArgX2_23)), ((MR_Box) (ArgY2_24)));
                    }
                  }
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_Word ArgX1_25 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                  MR_Word ArgY1_26;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))) == (MR_Integer) 4)));
                  if (succeeded)
                  {
                    ArgY1_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                    succeeded = erl_backend__elds____Unify____elds_rtti_id_0_0(ArgX1_25, ArgY1_26);
                  }
                }
                break;
              case (MR_Integer) 5:
                {
                  MR_Word TypeInfo_57_57;
                  MR_Word ArgX1_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                  MR_Word ArgY1_30;
                  MR_Word ArgX2_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
                  MR_Word ArgY2_32;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))) == (MR_Integer) 5)));
                  if (succeeded)
                  {
                    ArgY1_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                    ArgY2_32 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                    succeeded = erl_backend__elds____Unify____elds_expr_0_0(ArgX1_29, ArgY1_30);
                    if (succeeded)
                    {
                      TypeInfo_57_57 = (MR_Word) (&erl_backend__elds_scalar_common_1[11]);
                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_57_57, ((MR_Box) (ArgX2_31)), ((MR_Box) (ArgY2_32)));
                    }
                  }
                }
                break;
              case (MR_Integer) 6:
                {
                  MR_Word TypeInfo_60_60;
                  MR_Word TypeInfo_61_61;
                  MR_Word TypeInfo_62_62;
                  MR_Word ArgX1_33 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                  MR_Word ArgY1_34;
                  MR_Word ArgX2_35 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
                  MR_Word ArgY2_36;
                  MR_Word ArgX3_37 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
                  MR_Word ArgY3_38;
                  MR_Word ArgX4_39 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 4))));
                  MR_Word ArgY4_40;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))) == (MR_Integer) 6)));
                  if (succeeded)
                  {
                    ArgY1_34 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                    ArgY2_36 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                    ArgY3_38 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                    ArgY4_40 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 4))));
                    succeeded = erl_backend__elds____Unify____elds_expr_0_0(ArgX1_33, ArgY1_34);
                    if (succeeded)
                    {
                      TypeInfo_60_60 = (MR_Word) (&erl_backend__elds_scalar_common_1[11]);
                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_60_60, ((MR_Box) (ArgX2_35)), ((MR_Box) (ArgY2_36)));
                      if (succeeded)
                      {
                        TypeInfo_61_61 = (MR_Word) (&erl_backend__elds_scalar_common_1[12]);
                        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_61_61, ((MR_Box) (ArgX3_37)), ((MR_Box) (ArgY3_38)));
                        if (succeeded)
                        {
                          TypeInfo_62_62 = (MR_Word) (&erl_backend__elds_scalar_common_1[13]);
                          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_62_62, ((MR_Box) (ArgX4_39)), ((MR_Box) (ArgY4_40)));
                        }
                      }
                    }
                  }
                }
                break;
              case (MR_Integer) 7:
                {
                  MR_Word ArgX1_41 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                  MR_Word ArgY1_42;
                  MR_Word next_value_of_tscc_proc_2_input_1_HeadVar__1_1;
                  MR_Word next_value_of_tscc_proc_2_input_2_HeadVar__2_2;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))) == (MR_Integer) 7)));
                  if (succeeded)
                  {
                    ArgY1_42 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                    // direct tailcall eliminated
                    ;
                    next_value_of_tscc_proc_2_input_1_HeadVar__1_1 = ArgX1_41;
                    next_value_of_tscc_proc_2_input_2_HeadVar__2_2 = ArgY1_42;
                    tscc_proc_2_input_1_HeadVar__1_1 = next_value_of_tscc_proc_2_input_1_HeadVar__1_1;
                    tscc_proc_2_input_2_HeadVar__2_2 = next_value_of_tscc_proc_2_input_2_HeadVar__2_2;
                    goto top_of_proc_2;
                  }
                }
                break;
              case (MR_Integer) 8:
                {
                  MR_String ArgX1_43 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                  MR_String ArgY1_44;
                  MR_Word ArgX2_45 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
                  MR_Word ArgY2_46;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))) == (MR_Integer) 8)));
                  if (succeeded)
                  {
                    ArgY1_44 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                    ArgY2_46 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                    succeeded = (strcmp(ArgX1_43, ArgY1_44) == 0);
                    if (succeeded)
                      succeeded = mercury__term____Unify____context_0_0(ArgX2_45, ArgY2_46);
                  }
                }
                break;
              case (MR_Integer) 9:
                {
                  MR_Word ArgX1_47 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                  MR_Word ArgY1_48;
                  MR_Word ArgX2_49 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
                  MR_Word ArgY2_50;
                  MR_Word next_value_of_tscc_proc_2_input_1_HeadVar__1_1;
                  MR_Word next_value_of_tscc_proc_2_input_2_HeadVar__2_2;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))) == (MR_Integer) 9)));
                  if (succeeded)
                  {
                    ArgY1_48 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                    ArgY2_50 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                    succeeded = erl_backend__elds____Unify____elds_expr_0_0(ArgX1_47, ArgY1_48);
                    if (succeeded)
                    {
                      // direct tailcall eliminated
                      ;
                      next_value_of_tscc_proc_2_input_1_HeadVar__1_1 = ArgX2_49;
                      next_value_of_tscc_proc_2_input_2_HeadVar__2_2 = ArgY2_50;
                      tscc_proc_2_input_1_HeadVar__1_1 = next_value_of_tscc_proc_2_input_1_HeadVar__1_1;
                      tscc_proc_2_input_2_HeadVar__2_2 = next_value_of_tscc_proc_2_input_2_HeadVar__2_2;
                      goto top_of_proc_2;
                    }
                  }
                }
                break;
              case (MR_Integer) 10:
                {
                  MR_Word TypeInfo_59_59;
                  MR_Word ArgX1_51 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                  MR_Word ArgY1_52;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))) == (MR_Integer) 10)));
                  if (succeeded)
                  {
                    ArgY1_52 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                    TypeInfo_59_59 = (MR_Word) (&erl_backend__elds_scalar_common_1[11]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_59_59, ((MR_Box) (ArgX1_51)), ((MR_Box) (ArgY1_52)));
                  }
                }
                break;
            }
            break;
        }
      tscc_output_succeeded = succeeded;
      goto tscc_end;
    }
  tscc_end:;
    return tscc_output_succeeded;
  }
}

MR_bool MR_CALL 
erl_backend__elds____Unify____elds_call_target_0_0(
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
            MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_4;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
            if (succeeded)
            {
              ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
              succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(ArgX1_3, ArgY1_4);
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_6;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
              succeeded = erl_backend__elds____Unify____elds_expr_0_0(ArgX1_5, ArgY1_6);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_String ArgX1_7 = ((MR_String) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
            MR_String ArgY1_8;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
            if (succeeded)
            {
              ArgY1_8 = ((MR_String) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
              succeeded = (strcmp(ArgX1_7, ArgY1_8) == 0);
            }
          }
          break;
      }
    return succeeded;
  }
}

MR_bool MR_CALL 
erl_backend__elds____Unify____elds_term_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_43 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_44 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_43 == CastY_44);
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
            MR_Char ArgX1_3 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
            MR_Char ArgY1_4;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_4 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
              succeeded = (ArgX1_3 == ArgY1_4);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Integer ArgX1_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
            MR_Integer ArgY1_6;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
            if (succeeded)
            {
              ArgY1_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
              succeeded = (ArgX1_5 == ArgY1_6);
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Unsigned ArgX1_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_Unsigned ArgY1_8;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  ArgY1_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  succeeded = (ArgX1_7 == ArgY1_8);
                }
              }
              break;
            case (MR_Integer) 1:
              {
                int8_t ArgX1_9 = ((int8_t) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));
                int8_t ArgY1_10;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))) == (MR_Integer) 1)));
                if (succeeded)
                {
                  ArgY1_10 = ((int8_t) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1)));
                  succeeded = (ArgX1_9 == ArgY1_10);
                }
              }
              break;
            case (MR_Integer) 2:
              {
                uint8_t ArgX1_11 = ((uint8_t) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));
                uint8_t ArgY1_12;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))) == (MR_Integer) 2)));
                if (succeeded)
                {
                  ArgY1_12 = ((uint8_t) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1)));
                  succeeded = (ArgX1_11 == ArgY1_12);
                }
              }
              break;
            case (MR_Integer) 3:
              {
                int16_t ArgX1_13 = ((int16_t) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));
                int16_t ArgY1_14;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))) == (MR_Integer) 3)));
                if (succeeded)
                {
                  ArgY1_14 = ((int16_t) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1)));
                  succeeded = (ArgX1_13 == ArgY1_14);
                }
              }
              break;
            case (MR_Integer) 4:
              {
                uint16_t ArgX1_15 = ((uint16_t) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));
                uint16_t ArgY1_16;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))) == (MR_Integer) 4)));
                if (succeeded)
                {
                  ArgY1_16 = ((uint16_t) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1)));
                  succeeded = (ArgX1_15 == ArgY1_16);
                }
              }
              break;
            case (MR_Integer) 5:
              {
                int32_t ArgX1_17 = ((int32_t) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));
                int32_t ArgY1_18;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))) == (MR_Integer) 5)));
                if (succeeded)
                {
                  ArgY1_18 = ((int32_t) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1)));
                  succeeded = (ArgX1_17 == ArgY1_18);
                }
              }
              break;
            case (MR_Integer) 6:
              {
                uint32_t ArgX1_19 = ((uint32_t) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));
                uint32_t ArgY1_20;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))) == (MR_Integer) 6)));
                if (succeeded)
                {
                  ArgY1_20 = ((uint32_t) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1)));
                  succeeded = (ArgX1_19 == ArgY1_20);
                }
              }
              break;
            case (MR_Integer) 7:
              {
                int64_t ArgX1_21 = MR_unbox_int64((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));
                int64_t ArgY1_22;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))) == (MR_Integer) 7)));
                if (succeeded)
                {
                  ArgY1_22 = MR_unbox_int64((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1)));
                  succeeded = (ArgX1_21 == ArgY1_22);
                }
              }
              break;
            case (MR_Integer) 8:
              {
                uint64_t ArgX1_23 = MR_unbox_uint64((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));
                uint64_t ArgY1_24;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))) == (MR_Integer) 8)));
                if (succeeded)
                {
                  ArgY1_24 = MR_unbox_uint64((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1)));
                  succeeded = (ArgX1_23 == ArgY1_24);
                }
              }
              break;
            case (MR_Integer) 9:
              {
                MR_Float ArgX1_25 = MR_unbox_float((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));
                MR_Float ArgY1_26;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))) == (MR_Integer) 9)));
                if (succeeded)
                {
                  ArgY1_26 = MR_unbox_float((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1)));
                  succeeded = (ArgX1_25 == ArgY1_26);
                }
              }
              break;
            case (MR_Integer) 10:
              {
                MR_String ArgX1_27 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_String ArgY1_28;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))) == (MR_Integer) 10)));
                if (succeeded)
                {
                  ArgY1_28 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  succeeded = (strcmp(ArgX1_27, ArgY1_28) == 0);
                }
              }
              break;
            case (MR_Integer) 11:
              {
                MR_String ArgX1_29 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_String ArgY1_30;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))) == (MR_Integer) 11)));
                if (succeeded)
                {
                  ArgY1_30 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  succeeded = (strcmp(ArgX1_29, ArgY1_30) == 0);
                }
              }
              break;
            case (MR_Integer) 12:
              {
                MR_String ArgX1_31 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_String ArgY1_32;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))) == (MR_Integer) 12)));
                if (succeeded)
                {
                  ArgY1_32 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  succeeded = (strcmp(ArgX1_31, ArgY1_32) == 0);
                }
              }
              break;
            case (MR_Integer) 13:
              {
                MR_Word ArgX1_33 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_Word ArgY1_34;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))) == (MR_Integer) 13)));
                if (succeeded)
                {
                  ArgY1_34 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX1_33, ArgY1_34);
                }
              }
              break;
            case (MR_Integer) 14:
              {
                MR_Word TypeInfo_46_46;
                MR_Word ArgX1_35 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_Word ArgY1_36;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))) == (MR_Integer) 14)));
                if (succeeded)
                {
                  ArgY1_36 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  TypeInfo_46_46 = (MR_Word) (&erl_backend__elds_scalar_common_1[14]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_46_46, ((MR_Box) (ArgX1_35)), ((MR_Box) (ArgY1_36)));
                }
              }
              break;
            case (MR_Integer) 15:
              {
                MR_Word TypeInfo_47_47;
                MR_Word ArgX1_37 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_Word ArgY1_38;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))) == (MR_Integer) 15)));
                if (succeeded)
                {
                  ArgY1_38 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  TypeInfo_47_47 = (MR_Word) (&erl_backend__elds_scalar_common_1[0]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_47_47, ((MR_Box) (ArgX1_37)), ((MR_Box) (ArgY1_38)));
                }
              }
              break;
            case (MR_Integer) 16:
              {
                MR_String ArgX1_41 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_String ArgY1_42;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))) == (MR_Integer) 16)));
                if (succeeded)
                {
                  ArgY1_42 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  succeeded = (strcmp(ArgX1_41, ArgY1_42) == 0);
                }
              }
              break;
          }
          break;
      }
    return succeeded;
  }
}

MR_bool MR_CALL 
erl_backend__elds____Unify____elds_rtti_id_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
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
            MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_4;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
            if (succeeded)
            {
              ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
              succeeded = backend_libs__rtti____Unify____rtti_type_ctor_0_0(ArgX1_3, ArgY1_4);
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_6;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
              succeeded = backend_libs__rtti____Unify____rtti_type_info_0_0(ArgX1_5, ArgY1_6);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ArgX1_7 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_8;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
            if (succeeded)
            {
              ArgY1_8 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
              succeeded = backend_libs__rtti____Unify____rtti_pseudo_type_info_0_0(ArgX1_7, ArgY1_8);
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word ArgX1_9 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_10;
            MR_Word ArgX2_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
            MR_Word ArgY2_12;
            MR_String ArgX3_13 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
            MR_String ArgY3_14;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3);
            if (succeeded)
            {
              ArgY1_10 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))));
              ArgY2_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
              ArgY3_14 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
              succeeded = backend_libs__rtti____Unify____tc_name_0_0(ArgX1_9, ArgY1_10);
              if (succeeded)
              {
                succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX2_11, ArgY2_12);
                if (succeeded)
                  succeeded = (strcmp(ArgX3_13, ArgY3_14) == 0);
              }
            }
          }
          break;
      }
    return succeeded;
  }
}

void MR_CALL 
erl_backend__elds____Compare____elds_binop_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
erl_backend__elds____Unify____elds_binop_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
erl_backend__elds____Compare____elds_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_30 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_31 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_30 == CastY_31);
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
      MR_Word ArgX4_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgY4_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
      MR_Word ArgX5_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_Word ArgY5_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4))));
      MR_Word ArgX6_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));
      MR_Word ArgY6_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 5))));
      MR_Word ArgX7_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6))));
      MR_Word ArgY7_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 6))));
      MR_Word ArgX8_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7))));
      MR_Word ArgY8_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 7))));
      MR_Word ArgX9_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 8))));
      MR_Word ArgY9_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 8))));
      MR_Word Var_22;

      mdbcomp__sym_name____Compare____sym_name_0_0(&Var_22, ArgX1_4, ArgY1_5);
      succeeded = (Var_22 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_22;
      else
      {
        MR_Word Var_23;

        mercury__builtin__compare_3_p_0((MR_Word) (&erl_backend__elds_scalar_common_1[1]), &Var_23, ((MR_Box) (ArgX2_6)), ((MR_Box) (ArgY2_7)));
        succeeded = (Var_23 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_23;
        else
        {
          MR_Word Var_24;

          mercury__builtin__compare_3_p_0((MR_Word) (&erl_backend__elds_scalar_common_1[2]), &Var_24, ((MR_Box) (ArgX3_8)), ((MR_Box) (ArgY3_9)));
          succeeded = (Var_24 == (MR_Integer) 0);
          succeeded = !(succeeded);
          if (succeeded)
            *HeadVar__1_1 = Var_24;
          else
          {
            MR_Word Var_25;

            mercury__builtin__compare_3_p_0((MR_Word) (&erl_backend__elds_scalar_common_1[3]), &Var_25, ((MR_Box) (ArgX4_10)), ((MR_Box) (ArgY4_11)));
            succeeded = (Var_25 == (MR_Integer) 0);
            succeeded = !(succeeded);
            if (succeeded)
              *HeadVar__1_1 = Var_25;
            else
            {
              MR_Word Var_26;

              mercury__builtin__compare_3_p_0((MR_Word) (&erl_backend__elds_scalar_common_1[4]), &Var_26, ((MR_Box) (ArgX5_12)), ((MR_Box) (ArgY5_13)));
              succeeded = (Var_26 == (MR_Integer) 0);
              succeeded = !(succeeded);
              if (succeeded)
                *HeadVar__1_1 = Var_26;
              else
              {
                MR_Word Var_27;

                mercury__builtin__compare_3_p_0((MR_Word) (&erl_backend__elds_scalar_common_1[5]), &Var_27, ((MR_Box) (ArgX6_14)), ((MR_Box) (ArgY6_15)));
                succeeded = (Var_27 == (MR_Integer) 0);
                succeeded = !(succeeded);
                if (succeeded)
                  *HeadVar__1_1 = Var_27;
                else
                {
                  MR_Word Var_28;

                  mercury__builtin__compare_3_p_0((MR_Word) (&erl_backend__elds_scalar_common_1[6]), &Var_28, ((MR_Box) (ArgX7_16)), ((MR_Box) (ArgY7_17)));
                  succeeded = (Var_28 == (MR_Integer) 0);
                  succeeded = !(succeeded);
                  if (succeeded)
                    *HeadVar__1_1 = Var_28;
                  else
                  {
                    MR_Word Var_29;

                    mercury__builtin__compare_3_p_0((MR_Word) (&erl_backend__elds_scalar_common_1[7]), &Var_29, ((MR_Box) (ArgX8_18)), ((MR_Box) (ArgY8_19)));
                    succeeded = (Var_29 == (MR_Integer) 0);
                    succeeded = !(succeeded);
                    if (succeeded)
                      *HeadVar__1_1 = Var_29;
                    else
                    {
                      mercury__builtin__compare_3_p_0((MR_Word) (&erl_backend__elds_scalar_common_1[7]), HeadVar__1_1, ((MR_Box) (ArgX9_20)), ((MR_Box) (ArgY9_21)));
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
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_21 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_22 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_21 == CastY_22);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_24_24;
      MR_Word TypeInfo_25_25;
      MR_Word TypeInfo_26_26;
      MR_Word TypeInfo_27_27;
      MR_Word TypeInfo_28_28;
      MR_Word TypeInfo_29_29;
      MR_Word TypeInfo_30_30;
      MR_Word TypeInfo_31_31;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
      MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4))));
      MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 5))));
      MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));
      MR_Word ArgX7_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 6))));
      MR_Word ArgY7_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6))));
      MR_Word ArgX8_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 7))));
      MR_Word ArgY8_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7))));
      MR_Word ArgX9_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 8))));
      MR_Word ArgY9_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 8))));

      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        TypeInfo_24_24 = (MR_Word) (&erl_backend__elds_scalar_common_1[1]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_24_24, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        if (succeeded)
        {
          TypeInfo_25_25 = (MR_Word) (&erl_backend__elds_scalar_common_1[2]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_25_25, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
          if (succeeded)
          {
            TypeInfo_26_26 = (MR_Word) (&erl_backend__elds_scalar_common_1[3]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_26_26, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
            if (succeeded)
            {
              TypeInfo_27_27 = (MR_Word) (&erl_backend__elds_scalar_common_1[4]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_27_27, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
              if (succeeded)
              {
                TypeInfo_28_28 = (MR_Word) (&erl_backend__elds_scalar_common_1[5]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_28_28, ((MR_Box) (ArgX6_13)), ((MR_Box) (ArgY6_14)));
                if (succeeded)
                {
                  TypeInfo_29_29 = (MR_Word) (&erl_backend__elds_scalar_common_1[6]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_29_29, ((MR_Box) (ArgX7_15)), ((MR_Box) (ArgY7_16)));
                  if (succeeded)
                  {
                    TypeInfo_30_30 = (MR_Word) (&erl_backend__elds_scalar_common_1[7]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_30_30, ((MR_Box) (ArgX8_17)), ((MR_Box) (ArgY8_18)));
                    if (succeeded)
                    {
                      TypeInfo_31_31 = (MR_Word) (&erl_backend__elds_scalar_common_1[7]);
                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_31_31, ((MR_Box) (ArgX9_19)), ((MR_Box) (ArgY9_20)));
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    return succeeded;
  }
}

MR_Word MR_CALL 
erl_backend__elds__make_enum_alternative_1_f_0(
  MR_String F_3)
{
  {
    MR_Word HeadVar__2_2;
    MR_Word Var_4;
    MR_Word Var_5;
    MR_Word Var_6;
    MR_Word Var_7;

    {
      Var_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_7, 0) = ((MR_Box) (F_3));
    }
    {
      Var_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_6, 0) = ((MR_Box) ((MR_Unsigned) 13U));
      MR_hl_field(MR_mktag(3), Var_6, 1) = ((MR_Box) (Var_7));
    }
    {
      Var_5 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_5, 0) = ((MR_Box) (Var_6));
    }
    {
      Var_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_4, 0) = ((MR_Box) (Var_5));
      MR_hl_field(MR_mktag(1), Var_4, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), HeadVar__2_2, 0) = ((MR_Box) ((MR_Unsigned) 14U));
      MR_hl_field(MR_mktag(3), HeadVar__2_2, 1) = ((MR_Box) (Var_4));
    }
    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
erl_backend__elds__tuple_or_single_expr_1_f_0(
  MR_Word List_3)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) List_3)) == (MR_Integer) 1);
    MR_Word HeadVar__2_2;
    MR_Word SingleExpr_4;
    MR_Word Var_5;

    if (succeeded)
    {
      SingleExpr_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), List_3, (MR_Integer) 0))));
      Var_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), List_3, (MR_Integer) 1))));
      succeeded = (Var_5 == (MR_Word) ((MR_Unsigned) 0U));
    }
    if (succeeded)
      HeadVar__2_2 = SingleExpr_4;
    else
    {
      MR_Word Var_6;

      {
        Var_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_6, 0) = ((MR_Box) ((MR_Unsigned) 14U));
        MR_hl_field(MR_mktag(3), Var_6, 1) = ((MR_Box) (List_3));
      }
      {
        HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), HeadVar__2_2, 0) = ((MR_Box) (Var_6));
      }
    }
    return HeadVar__2_2;
  }
}

MR_Integer MR_CALL 
erl_backend__elds__elds_clause_arity_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Integer HeadVar__2_2;
    MR_Word Args_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));

    HeadVar__2_2 = mercury__list__length_1_f_0((MR_Word) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_term_0), Args_3);
    return HeadVar__2_2;
  }
}

MR_Integer MR_CALL 
erl_backend__elds__elds_body_arity_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Integer HeadVar__2_2;

    if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0))
    {
      MR_Word Clause_3 = (MR_Word) (MR_body((MR_Word) (HeadVar__1_1), (MR_Integer) 0));
      MR_Word Args_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Clause_3, (MR_Integer) 0))));

      HeadVar__2_2 = mercury__list__length_1_f_0((MR_Word) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_term_0), Args_5);
    }
    else
      HeadVar__2_2 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
erl_backend__elds__det_expr_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word Expr_2;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_3_p_0((MR_String) "erl_backend.elds", (MR_String) "function \140erl_backend.elds.det_expr\'/1", (MR_String) "no expression");
    }
    else
      Expr_2 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    return Expr_2;
  }
}

MR_Word MR_CALL 
erl_backend__elds__expr_or_void_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word HeadVar__2_2;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__2_2 = (MR_Word) (MR_mkword(MR_mktag(2), &erl_backend__elds_scalar_common_2[4]));
    else
      HeadVar__2_2 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
erl_backend__elds__maybe_join_exprs1_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_Word HeadVar__3_3;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__3_3 = HeadVar__2_2;
    else
    {
      MR_Word ExprA_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));

      HeadVar__3_3 = erl_backend__elds__join_exprs_2_f_0(ExprA_4, HeadVar__2_2);
    }
    return HeadVar__3_3;
  }
}

MR_Word MR_CALL 
erl_backend__elds__maybe_join_exprs_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_Word HeadVar__3_3;

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__3_3 = HeadVar__1_1;
    else
    {
      MR_Word ExprB_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      HeadVar__3_3 = erl_backend__elds__join_exprs_2_f_0(HeadVar__1_1, ExprB_5);
    }
    return HeadVar__3_3;
  }
}

MR_Word MR_CALL 
erl_backend__elds__join_exprs_2_f_0(
  MR_Word ExprA_4,
  MR_Word ExprB_5)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) ExprA_4)) == (MR_Integer) 1);
    MR_Word Expr_6;
    MR_Word As_8;
    MR_Word Bs_10;
    MR_Word AsBs_11;
    MR_Word As0_7;
    MR_Word Bs0_9;
    MR_Word SingleExpr_12;
    MR_Word Var_15;

    if (succeeded)
    {
      As0_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ExprA_4, (MR_Integer) 0))));
      As_8 = As0_7;
    }
    else
    {
      {
        As_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), As_8, 0) = ((MR_Box) (ExprA_4));
        MR_hl_field(MR_mktag(1), As_8, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
    succeeded = ((MR_tag((MR_Word) ExprB_5)) == (MR_Integer) 1);
    if (succeeded)
    {
      Bs0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ExprB_5, (MR_Integer) 0))));
      Bs_10 = Bs0_9;
    }
    else
    {
      {
        Bs_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Bs_10, 0) = ((MR_Box) (ExprB_5));
        MR_hl_field(MR_mktag(1), Bs_10, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
    AsBs_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0), As_8, Bs_10);
    succeeded = ((MR_tag((MR_Word) AsBs_11)) == (MR_Integer) 1);
    if (succeeded)
    {
      SingleExpr_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), AsBs_11, (MR_Integer) 0))));
      Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), AsBs_11, (MR_Integer) 1))));
      succeeded = (Var_15 == (MR_Word) ((MR_Unsigned) 0U));
    }
    if (succeeded)
      Expr_6 = SingleExpr_12;
    else
      {
        Expr_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Expr_6, 0) = ((MR_Box) (AsBs_11));
      }
    return Expr_6;
  }
}

MR_Word MR_CALL 
erl_backend__elds__expr_to_term_1_f_0(
  MR_Word Expr_3)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Expr_3)) == (MR_Integer) 2);
    MR_Word Term_4;
    MR_Word Term0_5;

    if (succeeded)
    {
      Term0_5 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Expr_3, (MR_Integer) 0))));
      Term_4 = Term0_5;
    }
    else
    {
      mercury__require__unexpected_3_p_0((MR_String) "erl_backend.elds", (MR_String) "function \140erl_backend.elds.expr_to_term\'/1", (MR_String) "unable to convert elds_expr to elds_term");
    }
    return Term_4;
  }
}

static MR_Box MR_CALL 
erl_backend__elds__exprs_from_fixed_vars_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_7;

    conv0_LambdaHeadVar__2_7 = erl_backend__elds__IntroducedFrom__func__exprs_from_fixed_vars__433__1_1_f_0(((MR_String) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_7));
    return wrapper_arg_2;
  }
}

MR_Word MR_CALL 
erl_backend__elds__exprs_from_fixed_vars_1_f_0(
  MR_Word Names_3)
{
  {
    MR_Word HeadVar__2_2;

    HeadVar__2_2 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0), (MR_Word) (&erl_backend__elds_scalar_common_3[4]), Names_3);
    return HeadVar__2_2;
  }
}

static MR_Box MR_CALL 
erl_backend__elds__terms_from_fixed_vars_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_7;

    conv0_LambdaHeadVar__2_7 = erl_backend__elds__IntroducedFrom__func__terms_from_fixed_vars__431__1_1_f_0(((MR_String) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_7));
    return wrapper_arg_2;
  }
}

MR_Word MR_CALL 
erl_backend__elds__terms_from_fixed_vars_1_f_0(
  MR_Word Names_3)
{
  {
    MR_Word HeadVar__2_2;

    HeadVar__2_2 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_term_0), (MR_Word) (&erl_backend__elds_scalar_common_3[3]), Names_3);
    return HeadVar__2_2;
  }
}

static MR_Box MR_CALL 
erl_backend__elds__exprs_from_vars_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = erl_backend__elds__expr_from_var_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

MR_Word MR_CALL 
erl_backend__elds__exprs_from_vars_1_f_0(
  MR_Word Vars_3)
{
  {
    MR_Word HeadVar__2_2;

    HeadVar__2_2 = mercury__list__map_2_f_0((MR_Word) (&erl_backend__elds_scalar_common_1[0]), (MR_Word) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0), (MR_Word) (&erl_backend__elds_scalar_common_3[2]), Vars_3);
    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
erl_backend__elds__expr_from_var_1_f_0(
  MR_Word Var_3)
{
  {
    MR_Word HeadVar__2_2;
    MR_Word Var_4;

    {
      Var_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_4, 0) = ((MR_Box) ((MR_Unsigned) 15U));
      MR_hl_field(MR_mktag(3), Var_4, 1) = ((MR_Box) (Var_3));
    }
    {
      HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), HeadVar__2_2, 0) = ((MR_Box) (Var_4));
    }
    return HeadVar__2_2;
  }
}

static MR_Box MR_CALL 
erl_backend__elds__terms_from_vars_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = erl_backend__elds__term_from_var_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

MR_Word MR_CALL 
erl_backend__elds__terms_from_vars_1_f_0(
  MR_Word Vars_3)
{
  {
    MR_Word HeadVar__2_2;

    HeadVar__2_2 = mercury__list__map_2_f_0((MR_Word) (&erl_backend__elds_scalar_common_1[0]), (MR_Word) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_term_0), (MR_Word) (&erl_backend__elds_scalar_common_3[1]), Vars_3);
    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
erl_backend__elds__term_from_var_1_f_0(
  MR_Word Var_3)
{
  {
    MR_Word HeadVar__2_2;

    {
      HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), HeadVar__2_2, 0) = ((MR_Box) ((MR_Unsigned) 15U));
      MR_hl_field(MR_mktag(3), HeadVar__2_2, 1) = ((MR_Box) (Var_3));
    }
    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
erl_backend__elds__var_eq_false_1_f_0(
  MR_Word Var_3)
{
  {
    MR_Word HeadVar__2_2;
    MR_Word Var_4;
    MR_Word Var_8;

    {
      Var_8 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_8, 0) = ((MR_Box) ((MR_Unsigned) 15U));
      MR_hl_field(MR_mktag(3), Var_8, 1) = ((MR_Box) (Var_3));
    }
    {
      Var_4 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_4, 0) = ((MR_Box) (Var_8));
    }
    {
      HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), HeadVar__2_2, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), HeadVar__2_2, 1) = ((MR_Box) (Var_4));
      MR_hl_field(MR_mktag(3), HeadVar__2_2, 2) = ((MR_Box) (MR_mkword(MR_mktag(2), &erl_backend__elds_scalar_common_2[3])));
    }
    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
erl_backend__elds__elds_call_self_0_f_0(void)
{
  {
    return (MR_Word) (MR_mkword(MR_mktag(3), &erl_backend__elds_scalar_common_3[0]));
  }
}

MR_Word MR_CALL 
erl_backend__elds__elds_call_element_2_f_0(
  MR_Word Var_4,
  MR_Integer Index_5)
{
  {
    MR_Word HeadVar__3_3;
    MR_Word Var_7;
    MR_Word Var_8;
    MR_Word Var_9;
    MR_Word Var_10;
    MR_Word Var_11;
    MR_Word Var_14;

    {
      Var_9 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_9, 0) = ((MR_Box) (Index_5));
    }
    {
      Var_8 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_8, 0) = ((MR_Box) (Var_9));
    }
    {
      Var_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_14, 0) = ((MR_Box) ((MR_Unsigned) 15U));
      MR_hl_field(MR_mktag(3), Var_14, 1) = ((MR_Box) (Var_4));
    }
    {
      Var_11 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_11, 0) = ((MR_Box) (Var_14));
    }
    {
      Var_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_10, 0) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(1), Var_10, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_7, 0) = ((MR_Box) (Var_8));
      MR_hl_field(MR_mktag(1), Var_7, 1) = ((MR_Box) (Var_10));
    }
    {
      HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), HeadVar__3_3, 0) = ((MR_Box) ((MR_Unsigned) 3U));
      MR_hl_field(MR_mktag(3), HeadVar__3_3, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &erl_backend__elds_scalar_common_2[1])));
      MR_hl_field(MR_mktag(3), HeadVar__3_3, 2) = ((MR_Box) (Var_7));
    }
    return HeadVar__3_3;
  }
}

MR_Word MR_CALL 
erl_backend__elds__elds_call_builtin_2_f_0(
  MR_String FunName_4,
  MR_Word Exprs_5)
{
  {
    MR_Word HeadVar__3_3;
    MR_Word Var_6;

    {
      Var_6 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_6, 0) = ((MR_Box) (FunName_4));
    }
    {
      HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), HeadVar__3_3, 0) = ((MR_Box) ((MR_Unsigned) 3U));
      MR_hl_field(MR_mktag(3), HeadVar__3_3, 1) = ((MR_Box) (Var_6));
      MR_hl_field(MR_mktag(3), HeadVar__3_3, 2) = ((MR_Box) (Exprs_5));
    }
    return HeadVar__3_3;
  }
}

MR_Word MR_CALL 
erl_backend__elds__elds_commit_marker_0_f_0(void)
{
  {
    return (MR_Word) (MR_mkword(MR_mktag(2), &erl_backend__elds_scalar_common_2[0]));
  }
}

MR_Word MR_CALL 
erl_backend__elds__elds_empty_tuple_0_f_0(void)
{
  {
    return (MR_Word) (MR_mkword(MR_mktag(3), &erl_backend__elds_scalar_common_1[19]));
  }
}

MR_Word MR_CALL 
erl_backend__elds__elds_throw_atom_0_f_0(void)
{
  {
    return (MR_Word) (MR_mkword(MR_mktag(3), &erl_backend__elds_scalar_common_1[18]));
  }
}

MR_Word MR_CALL 
erl_backend__elds__elds_fail_0_f_0(void)
{
  {
    return (MR_Word) (MR_mkword(MR_mktag(3), &erl_backend__elds_scalar_common_1[17]));
  }
}

MR_Word MR_CALL 
erl_backend__elds__elds_false_0_f_0(void)
{
  {
    return (MR_Word) (MR_mkword(MR_mktag(3), &erl_backend__elds_scalar_common_1[16]));
  }
}

MR_Word MR_CALL 
erl_backend__elds__elds_true_0_f_0(void)
{
  {
    return (MR_Word) (MR_mkword(MR_mktag(3), &erl_backend__elds_scalar_common_1[15]));
  }
}

static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = erl_backend__elds____Unify____elds_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
erl_backend__elds____Compare____elds_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    erl_backend__elds____Compare____elds_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_binop_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = erl_backend__elds____Unify____elds_binop_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
erl_backend__elds____Compare____elds_binop_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    erl_backend__elds____Compare____elds_binop_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_body_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = erl_backend__elds____Unify____elds_body_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
erl_backend__elds____Compare____elds_body_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    erl_backend__elds____Compare____elds_body_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_call_target_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = erl_backend__elds____Unify____elds_call_target_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
erl_backend__elds____Compare____elds_call_target_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    erl_backend__elds____Compare____elds_call_target_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_case_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = erl_backend__elds____Unify____elds_case_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
erl_backend__elds____Compare____elds_case_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    erl_backend__elds____Compare____elds_case_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_catch_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = erl_backend__elds____Unify____elds_catch_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
erl_backend__elds____Compare____elds_catch_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    erl_backend__elds____Compare____elds_catch_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_clause_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = erl_backend__elds____Unify____elds_clause_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
erl_backend__elds____Compare____elds_clause_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    erl_backend__elds____Compare____elds_clause_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_defn_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = erl_backend__elds____Unify____elds_defn_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
erl_backend__elds____Compare____elds_defn_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    erl_backend__elds____Compare____elds_defn_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_expr_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = erl_backend__elds____Unify____elds_expr_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
erl_backend__elds____Compare____elds_expr_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    erl_backend__elds____Compare____elds_expr_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_foreign_export_defn_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = erl_backend__elds____Unify____elds_foreign_export_defn_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
erl_backend__elds____Compare____elds_foreign_export_defn_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    erl_backend__elds____Compare____elds_foreign_export_defn_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_rtti_defn_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = erl_backend__elds____Unify____elds_rtti_defn_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
erl_backend__elds____Compare____elds_rtti_defn_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    erl_backend__elds____Compare____elds_rtti_defn_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_rtti_id_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = erl_backend__elds____Unify____elds_rtti_id_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
erl_backend__elds____Compare____elds_rtti_id_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    erl_backend__elds____Compare____elds_rtti_id_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_term_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = erl_backend__elds____Unify____elds_term_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
erl_backend__elds____Compare____elds_term_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    erl_backend__elds____Compare____elds_term_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
erl_backend__elds____Unify____elds_unop_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = erl_backend__elds____Unify____elds_unop_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
erl_backend__elds____Compare____elds_unop_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    erl_backend__elds____Compare____elds_unop_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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

// Ensure everything is compiled with the same grade.
const char *mercury__erl_backend__elds__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module erl_backend.elds.
