/*
** Automatically generated from `term_constr_data.m'
** by the Mercury compiler,
** version rotd-2023-12-13
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


// :- module transform_hlds.term_constr_data.
// :- implementation.

/*
INIT mercury__transform_hlds__term_constr_data__init
ENDINIT
*/

#include "transform_hlds.term_constr_data.mih"


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
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
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
#include "term_context.mih"
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
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
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.indent.mih"
#include "libs.lp_rational.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_spec.mih"
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
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "string.builder.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.hlds_out.hlds_out_util.mih"




static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_data__varset__pti_varset_1__plain_term__type_ctor_info_generic_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_data__term__pti_var_1__plain_term__type_ctor_info_generic_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_data__list__ti_list_1transform_hlds__term_constr_data__type_ctor_info_abstract_goal_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_data__term__ti_var_1term__type_ctor_info_generic_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_data__list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0;

static const MR_PseudoTypeInfo transform_hlds__term_constr_data__transform_hlds__term_constr_data__field_types_abstract_goal_0_0[4];

static const MR_ConstString transform_hlds__term_constr_data__transform_hlds__term_constr_data__field_names_abstract_goal_0_0[4];

static const MR_DuFunctorDesc transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_functor_desc_abstract_goal_0_0;

static const MR_PseudoTypeInfo transform_hlds__term_constr_data__transform_hlds__term_constr_data__field_types_abstract_goal_0_1[3];

static const MR_ConstString transform_hlds__term_constr_data__transform_hlds__term_constr_data__field_names_abstract_goal_0_1[3];

static const MR_DuFunctorDesc transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_functor_desc_abstract_goal_0_1;

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_data__set_ordlist__ti_set_ordlist_1term__ti_var_1term__type_ctor_info_generic_0;

static const MR_PseudoTypeInfo transform_hlds__term_constr_data__transform_hlds__term_constr_data__field_types_abstract_goal_0_2[7];

static const MR_ConstString transform_hlds__term_constr_data__transform_hlds__term_constr_data__field_names_abstract_goal_0_2[7];

static const MR_DuFunctorDesc transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_functor_desc_abstract_goal_0_2;

static const MR_PseudoTypeInfo transform_hlds__term_constr_data__transform_hlds__term_constr_data__field_types_abstract_goal_0_3[3];

static const MR_ConstString transform_hlds__term_constr_data__transform_hlds__term_constr_data__field_names_abstract_goal_0_3[3];

static const MR_DuFunctorDesc transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_functor_desc_abstract_goal_0_3;

static const MR_DuFunctorDescPtr transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_stag_ordered_abstract_goal_0_0[1];

static const MR_DuFunctorDescPtr transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_stag_ordered_abstract_goal_0_1[1];

static const MR_DuFunctorDescPtr transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_stag_ordered_abstract_goal_0_2[1];

static const MR_DuFunctorDescPtr transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_stag_ordered_abstract_goal_0_3[1];

static const MR_DuPtagLayout transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_ptag_ordered_abstract_goal_0[4];

static const MR_DuFunctorDescPtr transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_name_ordered_abstract_goal_0[4];

static const MR_Integer transform_hlds__term_constr_data__transform_hlds__term_constr_data__functor_number_map_abstract_goal_0[4];

static const MR_Integer transform_hlds__term_constr_data__transform_hlds__term_constr_data__functor_number_map_abstract_ho_call_0[1];

static const MR_NotagFunctorDesc transform_hlds__term_constr_data__transform_hlds__term_constr_data__notag_functor_desc_abstract_ho_call_0;

static const MR_Integer transform_hlds__term_constr_data__transform_hlds__term_constr_data__functor_number_map_abstract_ppid_0[1];

static const MR_NotagFunctorDesc transform_hlds__term_constr_data__transform_hlds__term_constr_data__notag_functor_desc_abstract_ppid_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_data__list__ti_list_1bool__type_ctor_info_bool_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_data__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__term_constr_data__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1term__type_ctor_info_generic_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_data__varset__ti_varset_1term__type_ctor_info_generic_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_data__list__ti_list_1transform_hlds__term_constr_data__type_ctor_info_abstract_ho_call_0;

static const MR_PseudoTypeInfo transform_hlds__term_constr_data__transform_hlds__term_constr_data__field_types_abstract_proc_0_0[12];

static const MR_ConstString transform_hlds__term_constr_data__transform_hlds__term_constr_data__field_names_abstract_proc_0_0[12];

static const MR_DuArgLocn transform_hlds__term_constr_data__transform_hlds__term_constr_data__field_locns_abstract_proc_0_0[12];

static const MR_DuFunctorDesc transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_functor_desc_abstract_proc_0_0;

static const MR_DuFunctorDescPtr transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_stag_ordered_abstract_proc_0_0[1];

static const MR_DuPtagLayout transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_ptag_ordered_abstract_proc_0[1];

static const MR_DuFunctorDescPtr transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_name_ordered_abstract_proc_0[1];

static const MR_Integer transform_hlds__term_constr_data__transform_hlds__term_constr_data__functor_number_map_abstract_proc_0[1];

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_data__set_ordlist__ti_set_ordlist_1transform_hlds__term_constr_data__type_ctor_info_abstract_proc_0;

static const MR_DuFunctorDesc transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_functor_desc_arg_size_result_0_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_data__list__ti_list_1transform_hlds__term_constr_errors__type_ctor_info_term2_error_0;

static const MR_PseudoTypeInfo transform_hlds__term_constr_data__transform_hlds__term_constr_data__field_types_arg_size_result_0_1[1];

static const MR_DuFunctorDesc transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_functor_desc_arg_size_result_0_1;

static const MR_DuFunctorDescPtr transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_stag_ordered_arg_size_result_0_0[1];

static const MR_DuFunctorDescPtr transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_stag_ordered_arg_size_result_0_1[1];

static const MR_DuPtagLayout transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_ptag_ordered_arg_size_result_0[2];

static const MR_DuFunctorDescPtr transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_name_ordered_arg_size_result_0[2];

static const MR_Integer transform_hlds__term_constr_data__transform_hlds__term_constr_data__functor_number_map_arg_size_result_0[2];

static const MR_EnumFunctorDesc transform_hlds__term_constr_data__transform_hlds__term_constr_data__enum_functor_desc_recursion_type_0_0;

static const MR_EnumFunctorDesc transform_hlds__term_constr_data__transform_hlds__term_constr_data__enum_functor_desc_recursion_type_0_1;

static const MR_EnumFunctorDesc transform_hlds__term_constr_data__transform_hlds__term_constr_data__enum_functor_desc_recursion_type_0_2;

static const MR_EnumFunctorDesc transform_hlds__term_constr_data__transform_hlds__term_constr_data__enum_functor_desc_recursion_type_0_3;

static const MR_EnumFunctorDescPtr transform_hlds__term_constr_data__transform_hlds__term_constr_data__enum_ordinal_ordered_recursion_type_0[4];

static const MR_EnumFunctorDescPtr transform_hlds__term_constr_data__transform_hlds__term_constr_data__enum_name_ordered_recursion_type_0[4];

static const MR_Integer transform_hlds__term_constr_data__transform_hlds__term_constr_data__functor_number_map_recursion_type_0[4];

static const MR_FA_TypeInfo_Struct2 transform_hlds__term_constr_data__pair__ti_pair_2term__ti_var_1term__type_ctor_info_generic_0libs__rat__type_ctor_info_rat_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_data__list__ti_list_1pair__ti_pair_2term__ti_var_1term__type_ctor_info_generic_0libs__rat__type_ctor_info_rat_0;

static const MR_Integer transform_hlds__term_constr_data__transform_hlds__term_constr_data__functor_number_map_widening_0[1];

static const MR_NotagFunctorDesc transform_hlds__term_constr_data__transform_hlds__term_constr_data__notag_functor_desc_widening_0;

static void MR_CALL 
transform_hlds__term_constr_data__IntroducedFrom__pred__var_names_to_string__767__1_3_p_0(
  MR_Word VarSet_4,
  MR_Word HeadVar__2_10,
  MR_String * HeadVar__3_11);

static MR_String MR_CALL 
transform_hlds__term_constr_data__recursion_type_to_string_1_f_0(
  MR_Word HeadVar__1_1);

static MR_String MR_CALL 
transform_hlds__term_constr_data__size_var_to_string_2_f_0(
  MR_Word SizeVarSet_4,
  MR_Word Var_5);

static MR_bool MR_CALL 
transform_hlds__term_constr_data__is_empty_conj_1_p_0(
  MR_Word HeadVar__1_1);

static MR_bool MR_CALL 
transform_hlds__term_constr_data__is_empty_primitive_1_p_0(
  MR_Word HeadVar__1_1);

static MR_Word MR_CALL 
transform_hlds__term_constr_data__combine_primitives_2_f_0(
  MR_Word GoalA_4,
  MR_Word GoalB_5);

static MR_bool MR_CALL 
transform_hlds__term_constr_data__is_primitive_1_p_0(
  MR_Word HeadVar__1_1);

static MR_Box MR_CALL 
transform_hlds__term_constr_data__dump_abstract_proc_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__term_constr_data__dump_abstract_disjuncts_7_p_0(
  MR_Word Stream_1,
  MR_Word ModuleInfo_2,
  MR_Word VarSet_3,
  MR_Integer Indent_4,
  MR_Word HeadVar__5_5);

static void MR_CALL 
transform_hlds__term_constr_data__dump_abstract_goal_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__term_constr_data__var_names_to_string_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_String MR_CALL 
transform_hlds__term_constr_data__var_names_to_string_2_f_0(
  MR_Word VarSet_4,
  MR_Word Vars_5);

static void MR_CALL 
transform_hlds__term_constr_data__indent_line_4_p_0(
  MR_Word Stream_5,
  MR_Integer N_6);

static void MR_CALL 
transform_hlds__term_constr_data__dump_abstract_scc_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__term_constr_data__dump_abstract_scc_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__term_constr_data__simplify_conjuncts_2_p_0(
  MR_Word Goals0_3,
  MR_Word * Goals_4);

static void MR_CALL 
transform_hlds__term_constr_data__simplify_abstract_rep_2_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
transform_hlds__term_constr_data__simplify_abstract_rep_2_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
transform_hlds__term_constr_data__simplify_abstract_rep_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__term_constr_data__simplify_abstract_rep_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
transform_hlds__term_constr_data__simplify_abstract_rep_2_p_0(
  MR_Word Goal0_3,
  MR_Word * Goal_4);

static MR_Box MR_CALL 
transform_hlds__term_constr_data__flatten_conjuncts_2_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_bool MR_CALL 
transform_hlds__term_constr_data__flatten_conjuncts_2_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__term_constr_data__flatten_conjuncts_2_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_RevGoals_0_2,
  MR_Word * STATE_VARIABLE_RevGoals_3);

static MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____abstract_goal_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__term_constr_data____Compare____abstract_goal_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____abstract_ho_call_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__term_constr_data____Compare____abstract_ho_call_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____abstract_ppid_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__term_constr_data____Compare____abstract_ppid_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____abstract_proc_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__term_constr_data____Compare____abstract_proc_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____abstract_scc_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__term_constr_data____Compare____abstract_scc_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____arg_size_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__term_constr_data____Compare____arg_size_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____call_vars_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__term_constr_data____Compare____call_vars_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____head_vars_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__term_constr_data____Compare____head_vars_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____local_vars_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__term_constr_data____Compare____local_vars_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____nonlocal_vars_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__term_constr_data____Compare____nonlocal_vars_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____recursion_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__term_constr_data____Compare____recursion_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____size_term_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__term_constr_data____Compare____size_term_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____size_terms_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__term_constr_data____Compare____size_terms_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____size_var_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__term_constr_data____Compare____size_var_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____size_var_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__term_constr_data____Compare____size_var_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____size_vars_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__term_constr_data____Compare____size_vars_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____size_varset_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__term_constr_data____Compare____size_varset_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____widening_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__term_constr_data____Compare____widening_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____zero_vars_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__term_constr_data____Compare____zero_vars_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box transform_hlds__term_constr_data_scalar_common_1[11][2];

static /* final */ const MR_Box transform_hlds__term_constr_data_scalar_common_2[8][3];

static /* final */ const MR_Box transform_hlds__term_constr_data_scalar_common_3[1][1];

static /* final */ const MR_Box transform_hlds__term_constr_data_scalar_common_5[1][4];

static /* final */ const MR_Box transform_hlds__term_constr_data_scalar_common_6[2][6];

static /* final */ const MR_Box transform_hlds__term_constr_data_scalar_common_7[1][5];

static /* final */ const MR_Box transform_hlds__term_constr_data_scalar_common_8[1][9];

static /* final */ const MR_Box transform_hlds__term_constr_data_scalar_common_9[1][10];


struct transform_hlds__term_constr_data__vector_common_type_4_0_s {
  const MR_Word transform_hlds__term_constr_data__vector_common_type_4_0__vct_4_f_0;
};

static /* final */ const struct transform_hlds__term_constr_data__vector_common_type_4_0_s transform_hlds__term_constr_data_vector_common_4[16];

struct transform_hlds__term_constr_data__vector_common_type_10_0_s {
  const MR_String transform_hlds__term_constr_data__vector_common_type_10_0__vct_10_f_0;
};

static /* final */ const struct transform_hlds__term_constr_data__vector_common_type_10_0_s transform_hlds__term_constr_data_vector_common_10[4];



static /* final */ const MR_Box transform_hlds__term_constr_data_scalar_common_1[11][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__term_constr_data_scalar_common_1[0]))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&transform_hlds__term_constr_data_scalar_common_1[0]))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_goal_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
  /* row   7 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_ho_call_0))
  },
  /* row   8 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_proc_0))
  },
  /* row   9 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__type_ctor_info_term2_error_0))
  },
  /* row  10 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__term_constr_data_scalar_common_2[1]))
  },
};

static /* final */ const MR_Box transform_hlds__term_constr_data_scalar_common_2[8][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__term_constr_data_scalar_common_1[5])),
    ((MR_Box) (&transform_hlds__term_constr_data_scalar_common_1[0]))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&transform_hlds__term_constr_data_scalar_common_1[0])),
    ((MR_Box) (&libs__rat__libs__rat__type_ctor_info_rat_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&transform_hlds__term_constr_data_scalar_common_5[0])),
    ((MR_Box) (transform_hlds__term_constr_data__flatten_conjuncts_2_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&transform_hlds__term_constr_data_scalar_common_6[0])),
    ((MR_Box) (transform_hlds__term_constr_data__flatten_conjuncts_2_3_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&transform_hlds__term_constr_data_scalar_common_7[0])),
    ((MR_Box) (transform_hlds__term_constr_data__simplify_abstract_rep_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&transform_hlds__term_constr_data_scalar_common_5[0])),
    ((MR_Box) (transform_hlds__term_constr_data__simplify_abstract_rep_2_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&transform_hlds__term_constr_data_scalar_common_5[0])),
    ((MR_Box) (transform_hlds__term_constr_data__simplify_abstract_rep_2_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&transform_hlds__term_constr_data_scalar_common_7[0])),
    ((MR_Box) (transform_hlds__term_constr_data__simplify_abstract_rep_2_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__term_constr_data_scalar_common_3[1][1] = {
  /* row   0 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
};

static /* final */ const MR_Box transform_hlds__term_constr_data_scalar_common_5[1][4] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_goal_0))
  },
};

static /* final */ const MR_Box transform_hlds__term_constr_data_scalar_common_6[2][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_goal_0)),
    ((MR_Box) (&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_goal_0)),
    ((MR_Box) (&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_goal_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__term_constr_data__varset__pti_varset_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&transform_hlds__term_constr_data__term__pti_var_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box transform_hlds__term_constr_data_scalar_common_7[1][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_goal_0)),
    ((MR_Box) (&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_goal_0))
  },
};

static /* final */ const MR_Box transform_hlds__term_constr_data_scalar_common_8[1][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_proc_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box transform_hlds__term_constr_data_scalar_common_9[1][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__term_constr_data__varset__pti_varset_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_goal_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};


static /* final */ const struct transform_hlds__term_constr_data__vector_common_type_4_0_s transform_hlds__term_constr_data_vector_common_4[16] = {
  /* row   0 */   { (MR_Integer) 3 },
  /* row   1 */   { (MR_Integer) 3 },
  /* row   2 */   { (MR_Integer) 3 },
  /* row   3 */   { (MR_Integer) 3 },
  /* row   4 */   { (MR_Integer) 1 },
  /* row   5 */   { (MR_Integer) 1 },
  /* row   6 */   { (MR_Integer) 3 },
  /* row   7 */   { (MR_Integer) 3 },
  /* row   8 */   { (MR_Integer) 2 },
  /* row   9 */   { (MR_Integer) 3 },
  /* row  10 */   { (MR_Integer) 2 },
  /* row  11 */   { (MR_Integer) 3 },
  /* row  12 */   { (MR_Integer) 0 },
  /* row  13 */   { (MR_Integer) 1 },
  /* row  14 */   { (MR_Integer) 2 },
  /* row  15 */   { (MR_Integer) 3 },
};

static /* final */ const struct transform_hlds__term_constr_data__vector_common_type_10_0_s transform_hlds__term_constr_data_vector_common_10[4] = {
  /* row   0 */   { (MR_String) "none" },
  /* row   1 */   { (MR_String) "direct recursion only" },
  /* row   2 */   { (MR_String) "mutual recursion only" },
  /* row   3 */   { (MR_String) "mutual and direct recursion" },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_data__varset__pti_varset_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  { (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_generic_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_data__term__pti_var_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_generic_0) }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_data__list__ti_list_1transform_hlds__term_constr_data__type_ctor_info_abstract_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_goal_0) }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_data__term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&mercury__term__term__type_ctor_info_generic_0) }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_data__list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&transform_hlds__term_constr_data__term__ti_var_1term__type_ctor_info_generic_0) }
};

static const MR_PseudoTypeInfo transform_hlds__term_constr_data__transform_hlds__term_constr_data__field_types_abstract_goal_0_0[4] = {
  (MR_PseudoTypeInfo) (&transform_hlds__term_constr_data__list__ti_list_1transform_hlds__term_constr_data__type_ctor_info_abstract_goal_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&transform_hlds__term_constr_data__list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0),
  (MR_PseudoTypeInfo) (&transform_hlds__term_constr_data__list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0)
};

static const MR_ConstString transform_hlds__term_constr_data__transform_hlds__term_constr_data__field_names_abstract_goal_0_0[4] = {
  (MR_String) "disj_goals",
  (MR_String) "disj_size",
  (MR_String) "disj_locals",
  (MR_String) "disj_nonlocals"
};

static const MR_DuFunctorDesc transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_functor_desc_abstract_goal_0_0 = {
  (MR_String) "term_disj",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  transform_hlds__term_constr_data__transform_hlds__term_constr_data__field_types_abstract_goal_0_0,
  transform_hlds__term_constr_data__transform_hlds__term_constr_data__field_names_abstract_goal_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo transform_hlds__term_constr_data__transform_hlds__term_constr_data__field_types_abstract_goal_0_1[3] = {
  (MR_PseudoTypeInfo) (&transform_hlds__term_constr_data__list__ti_list_1transform_hlds__term_constr_data__type_ctor_info_abstract_goal_0),
  (MR_PseudoTypeInfo) (&transform_hlds__term_constr_data__list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0),
  (MR_PseudoTypeInfo) (&transform_hlds__term_constr_data__list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0)
};

static const MR_ConstString transform_hlds__term_constr_data__transform_hlds__term_constr_data__field_names_abstract_goal_0_1[3] = {
  (MR_String) "conj_goals",
  (MR_String) "conj_locals",
  (MR_String) "conj_nonlocals"
};

static const MR_DuFunctorDesc transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_functor_desc_abstract_goal_0_1 = {
  (MR_String) "term_conj",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  transform_hlds__term_constr_data__transform_hlds__term_constr_data__field_types_abstract_goal_0_1,
  transform_hlds__term_constr_data__transform_hlds__term_constr_data__field_names_abstract_goal_0_1,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_data__set_ordlist__ti_set_ordlist_1term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_TypeInfo) (&transform_hlds__term_constr_data__term__ti_var_1term__type_ctor_info_generic_0) }
};

static const MR_PseudoTypeInfo transform_hlds__term_constr_data__transform_hlds__term_constr_data__field_types_abstract_goal_0_2[7] = {
  (MR_PseudoTypeInfo) (&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0),
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0),
  (MR_PseudoTypeInfo) (&transform_hlds__term_constr_data__list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0),
  (MR_PseudoTypeInfo) (&transform_hlds__term_constr_data__set_ordlist__ti_set_ordlist_1term__ti_var_1term__type_ctor_info_generic_0),
  (MR_PseudoTypeInfo) (&transform_hlds__term_constr_data__list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0),
  (MR_PseudoTypeInfo) (&transform_hlds__term_constr_data__list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0),
  (MR_PseudoTypeInfo) (&libs__polyhedron__libs__polyhedron__type_ctor_info_polyhedron_0)
};

static const MR_ConstString transform_hlds__term_constr_data__transform_hlds__term_constr_data__field_names_abstract_goal_0_2[7] = {
  (MR_String) "call_ppid",
  (MR_String) "call_context",
  (MR_String) "call_vars",
  (MR_String) "call_zeros",
  (MR_String) "call_locals",
  (MR_String) "call_nonlocals",
  (MR_String) "call_constrs"
};

static const MR_DuFunctorDesc transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_functor_desc_abstract_goal_0_2 = {
  (MR_String) "term_call",
  INT16_C(7),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  transform_hlds__term_constr_data__transform_hlds__term_constr_data__field_types_abstract_goal_0_2,
  transform_hlds__term_constr_data__transform_hlds__term_constr_data__field_names_abstract_goal_0_2,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo transform_hlds__term_constr_data__transform_hlds__term_constr_data__field_types_abstract_goal_0_3[3] = {
  (MR_PseudoTypeInfo) (&libs__polyhedron__libs__polyhedron__type_ctor_info_polyhedron_0),
  (MR_PseudoTypeInfo) (&transform_hlds__term_constr_data__list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0),
  (MR_PseudoTypeInfo) (&transform_hlds__term_constr_data__list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0)
};

static const MR_ConstString transform_hlds__term_constr_data__transform_hlds__term_constr_data__field_names_abstract_goal_0_3[3] = {
  (MR_String) "prim_constrs",
  (MR_String) "prim_locals",
  (MR_String) "prim_nonlocals"
};

static const MR_DuFunctorDesc transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_functor_desc_abstract_goal_0_3 = {
  (MR_String) "term_primitive",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(3),
  (MR_Integer) -1,
  INT32_C(3),
  transform_hlds__term_constr_data__transform_hlds__term_constr_data__field_types_abstract_goal_0_3,
  transform_hlds__term_constr_data__transform_hlds__term_constr_data__field_names_abstract_goal_0_3,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_stag_ordered_abstract_goal_0_0[1] = { &transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_functor_desc_abstract_goal_0_0 };

static const MR_DuFunctorDescPtr transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_stag_ordered_abstract_goal_0_1[1] = { &transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_functor_desc_abstract_goal_0_1 };

static const MR_DuFunctorDescPtr transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_stag_ordered_abstract_goal_0_2[1] = { &transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_functor_desc_abstract_goal_0_2 };

static const MR_DuFunctorDescPtr transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_stag_ordered_abstract_goal_0_3[1] = { &transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_functor_desc_abstract_goal_0_3 };

static const MR_DuPtagLayout transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_ptag_ordered_abstract_goal_0[4] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_stag_ordered_abstract_goal_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_stag_ordered_abstract_goal_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_stag_ordered_abstract_goal_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_stag_ordered_abstract_goal_0_3,
    INT8_C(-1),
    UINT8_C(3),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_name_ordered_abstract_goal_0[4] = {
  &transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_functor_desc_abstract_goal_0_2,
  &transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_functor_desc_abstract_goal_0_1,
  &transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_functor_desc_abstract_goal_0_0,
  &transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_functor_desc_abstract_goal_0_3
};

static const MR_Integer transform_hlds__term_constr_data__transform_hlds__term_constr_data__functor_number_map_abstract_goal_0[4] = {
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 3
};

const MR_TypeCtorInfo_Struct transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_goal_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__term_constr_data____Unify____abstract_goal_0_0_10001)),
  ((MR_Box) (transform_hlds__term_constr_data____Compare____abstract_goal_0_0_10001)),
  (MR_String) "transform_hlds.term_constr_data",
  (MR_String) "abstract_goal",
  { transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_name_ordered_abstract_goal_0 },
  { transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_ptag_ordered_abstract_goal_0 },
  (MR_Integer) 4,
  UINT16_C(12),
  transform_hlds__term_constr_data__transform_hlds__term_constr_data__functor_number_map_abstract_goal_0,

};

static const MR_Integer transform_hlds__term_constr_data__transform_hlds__term_constr_data__functor_number_map_abstract_ho_call_0[1] = { (MR_Integer) 0 };

static const MR_NotagFunctorDesc transform_hlds__term_constr_data__transform_hlds__term_constr_data__notag_functor_desc_abstract_ho_call_0 = {
  (MR_String) "ho_call",
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_ho_call_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (transform_hlds__term_constr_data____Unify____abstract_ho_call_0_0_10001)),
  ((MR_Box) (transform_hlds__term_constr_data____Compare____abstract_ho_call_0_0_10001)),
  (MR_String) "transform_hlds.term_constr_data",
  (MR_String) "abstract_ho_call",
  { &transform_hlds__term_constr_data__transform_hlds__term_constr_data__notag_functor_desc_abstract_ho_call_0 },
  { &transform_hlds__term_constr_data__transform_hlds__term_constr_data__notag_functor_desc_abstract_ho_call_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  transform_hlds__term_constr_data__transform_hlds__term_constr_data__functor_number_map_abstract_ho_call_0,

};

static const MR_Integer transform_hlds__term_constr_data__transform_hlds__term_constr_data__functor_number_map_abstract_ppid_0[1] = { (MR_Integer) 0 };

static const MR_NotagFunctorDesc transform_hlds__term_constr_data__transform_hlds__term_constr_data__notag_functor_desc_abstract_ppid_0 = {
  (MR_String) "real",
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (transform_hlds__term_constr_data____Unify____abstract_ppid_0_0_10001)),
  ((MR_Box) (transform_hlds__term_constr_data____Compare____abstract_ppid_0_0_10001)),
  (MR_String) "transform_hlds.term_constr_data",
  (MR_String) "abstract_ppid",
  { &transform_hlds__term_constr_data__transform_hlds__term_constr_data__notag_functor_desc_abstract_ppid_0 },
  { &transform_hlds__term_constr_data__transform_hlds__term_constr_data__notag_functor_desc_abstract_ppid_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  transform_hlds__term_constr_data__transform_hlds__term_constr_data__functor_number_map_abstract_ppid_0,

};

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_data__list__ti_list_1bool__type_ctor_info_bool_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0) }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_data__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__term_constr_data__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&transform_hlds__term_constr_data__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_TypeInfo) (&transform_hlds__term_constr_data__term__ti_var_1term__type_ctor_info_generic_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_data__varset__ti_varset_1term__type_ctor_info_generic_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  { (MR_TypeInfo) (&mercury__term__term__type_ctor_info_generic_0) }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_data__list__ti_list_1transform_hlds__term_constr_data__type_ctor_info_abstract_ho_call_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_ho_call_0) }
};

static const MR_PseudoTypeInfo transform_hlds__term_constr_data__transform_hlds__term_constr_data__field_types_abstract_proc_0_0[12] = {
  (MR_PseudoTypeInfo) (&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0),
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0),
  (MR_PseudoTypeInfo) (&transform_hlds__term_constr_data__list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0),
  (MR_PseudoTypeInfo) (&transform_hlds__term_constr_data__list__ti_list_1bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_goal_0),
  (MR_PseudoTypeInfo) (&transform_hlds__term_constr_data__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1term__type_ctor_info_generic_0),
  (MR_PseudoTypeInfo) (&transform_hlds__term_constr_data__varset__ti_varset_1term__type_ctor_info_generic_0),
  (MR_PseudoTypeInfo) (&transform_hlds__term_constr_data__set_ordlist__ti_set_ordlist_1term__ti_var_1term__type_ctor_info_generic_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_recursion_type_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&transform_hlds__term_constr_data__list__ti_list_1transform_hlds__term_constr_data__type_ctor_info_abstract_ho_call_0)
};

static const MR_ConstString transform_hlds__term_constr_data__transform_hlds__term_constr_data__field_names_abstract_proc_0_0[12] = {
  (MR_String) "ap_ppid",
  (MR_String) "ap_context",
  (MR_String) "ap_head_vars",
  (MR_String) "ap_inputs",
  (MR_String) "ap_body",
  (MR_String) "ap_size_var_map",
  (MR_String) "ap_size_varset",
  (MR_String) "ap_zeros",
  (MR_String) "ap_is_entry",
  (MR_String) "ap_recursion",
  (MR_String) "ap_num_calls",
  (MR_String) "ap_ho_calls"
};

static const MR_DuArgLocn transform_hlds__term_constr_data__transform_hlds__term_constr_data__field_locns_abstract_proc_0_0[12] = {
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
    (MR_Integer) 0
  },
  {
    (MR_Integer) 5,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 6,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 7,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 8,
    (MR_Integer) 2,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 8,
    (MR_Integer) 0,
    (MR_Integer) 2
  },
  {
    (MR_Integer) 9,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 10,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_functor_desc_abstract_proc_0_0 = {
  (MR_String) "abstract_proc",
  INT16_C(12),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  transform_hlds__term_constr_data__transform_hlds__term_constr_data__field_types_abstract_proc_0_0,
  transform_hlds__term_constr_data__transform_hlds__term_constr_data__field_names_abstract_proc_0_0,
  transform_hlds__term_constr_data__transform_hlds__term_constr_data__field_locns_abstract_proc_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_stag_ordered_abstract_proc_0_0[1] = { &transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_functor_desc_abstract_proc_0_0 };

static const MR_DuPtagLayout transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_ptag_ordered_abstract_proc_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_stag_ordered_abstract_proc_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_name_ordered_abstract_proc_0[1] = { &transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_functor_desc_abstract_proc_0_0 };

static const MR_Integer transform_hlds__term_constr_data__transform_hlds__term_constr_data__functor_number_map_abstract_proc_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_proc_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__term_constr_data____Unify____abstract_proc_0_0_10001)),
  ((MR_Box) (transform_hlds__term_constr_data____Compare____abstract_proc_0_0_10001)),
  (MR_String) "transform_hlds.term_constr_data",
  (MR_String) "abstract_proc",
  { transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_name_ordered_abstract_proc_0 },
  { transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_ptag_ordered_abstract_proc_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  transform_hlds__term_constr_data__transform_hlds__term_constr_data__functor_number_map_abstract_proc_0,

};

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_data__set_ordlist__ti_set_ordlist_1transform_hlds__term_constr_data__type_ctor_info_abstract_proc_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_TypeInfo) (&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_proc_0) }
};

const MR_TypeCtorInfo_Struct transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_scc_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__term_constr_data____Unify____abstract_scc_0_0_10001)),
  ((MR_Box) (transform_hlds__term_constr_data____Compare____abstract_scc_0_0_10001)),
  (MR_String) "transform_hlds.term_constr_data",
  (MR_String) "abstract_scc",
  { NULL },
  { (MR_PseudoTypeInfo) (&transform_hlds__term_constr_data__set_ordlist__ti_set_ordlist_1transform_hlds__term_constr_data__type_ctor_info_abstract_proc_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_DuFunctorDesc transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_functor_desc_arg_size_result_0_0 = {
  (MR_String) "arg_size_ok",
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

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_data__list__ti_list_1transform_hlds__term_constr_errors__type_ctor_info_term2_error_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__type_ctor_info_term2_error_0) }
};

static const MR_PseudoTypeInfo transform_hlds__term_constr_data__transform_hlds__term_constr_data__field_types_arg_size_result_0_1[1] = { (MR_PseudoTypeInfo) (&transform_hlds__term_constr_data__list__ti_list_1transform_hlds__term_constr_errors__type_ctor_info_term2_error_0) };

static const MR_DuFunctorDesc transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_functor_desc_arg_size_result_0_1 = {
  (MR_String) "arg_size_error",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  transform_hlds__term_constr_data__transform_hlds__term_constr_data__field_types_arg_size_result_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_stag_ordered_arg_size_result_0_0[1] = { &transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_functor_desc_arg_size_result_0_0 };

static const MR_DuFunctorDescPtr transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_stag_ordered_arg_size_result_0_1[1] = { &transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_functor_desc_arg_size_result_0_1 };

static const MR_DuPtagLayout transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_ptag_ordered_arg_size_result_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_stag_ordered_arg_size_result_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_stag_ordered_arg_size_result_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_name_ordered_arg_size_result_0[2] = {
  &transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_functor_desc_arg_size_result_0_1,
  &transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_functor_desc_arg_size_result_0_0
};

static const MR_Integer transform_hlds__term_constr_data__transform_hlds__term_constr_data__functor_number_map_arg_size_result_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_arg_size_result_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__term_constr_data____Unify____arg_size_result_0_0_10001)),
  ((MR_Box) (transform_hlds__term_constr_data____Compare____arg_size_result_0_0_10001)),
  (MR_String) "transform_hlds.term_constr_data",
  (MR_String) "arg_size_result",
  { transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_name_ordered_arg_size_result_0 },
  { transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_ptag_ordered_arg_size_result_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  transform_hlds__term_constr_data__transform_hlds__term_constr_data__functor_number_map_arg_size_result_0,

};

const MR_TypeCtorInfo_Struct transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_call_vars_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__term_constr_data____Unify____call_vars_0_0_10001)),
  ((MR_Box) (transform_hlds__term_constr_data____Compare____call_vars_0_0_10001)),
  (MR_String) "transform_hlds.term_constr_data",
  (MR_String) "call_vars",
  { NULL },
  { (MR_PseudoTypeInfo) (&transform_hlds__term_constr_data__list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

const MR_TypeCtorInfo_Struct transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_head_vars_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__term_constr_data____Unify____head_vars_0_0_10001)),
  ((MR_Box) (transform_hlds__term_constr_data____Compare____head_vars_0_0_10001)),
  (MR_String) "transform_hlds.term_constr_data",
  (MR_String) "head_vars",
  { NULL },
  { (MR_PseudoTypeInfo) (&transform_hlds__term_constr_data__list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

const MR_TypeCtorInfo_Struct transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_local_vars_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__term_constr_data____Unify____local_vars_0_0_10001)),
  ((MR_Box) (transform_hlds__term_constr_data____Compare____local_vars_0_0_10001)),
  (MR_String) "transform_hlds.term_constr_data",
  (MR_String) "local_vars",
  { NULL },
  { (MR_PseudoTypeInfo) (&transform_hlds__term_constr_data__list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

const MR_TypeCtorInfo_Struct transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_nonlocal_vars_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__term_constr_data____Unify____nonlocal_vars_0_0_10001)),
  ((MR_Box) (transform_hlds__term_constr_data____Compare____nonlocal_vars_0_0_10001)),
  (MR_String) "transform_hlds.term_constr_data",
  (MR_String) "nonlocal_vars",
  { NULL },
  { (MR_PseudoTypeInfo) (&transform_hlds__term_constr_data__list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_EnumFunctorDesc transform_hlds__term_constr_data__transform_hlds__term_constr_data__enum_functor_desc_recursion_type_0_0 = {
  (MR_String) "none",
  INT32_C(0)
};

static const MR_EnumFunctorDesc transform_hlds__term_constr_data__transform_hlds__term_constr_data__enum_functor_desc_recursion_type_0_1 = {
  (MR_String) "direct_only",
  INT32_C(1)
};

static const MR_EnumFunctorDesc transform_hlds__term_constr_data__transform_hlds__term_constr_data__enum_functor_desc_recursion_type_0_2 = {
  (MR_String) "mutual_only",
  INT32_C(2)
};

static const MR_EnumFunctorDesc transform_hlds__term_constr_data__transform_hlds__term_constr_data__enum_functor_desc_recursion_type_0_3 = {
  (MR_String) "both",
  INT32_C(3)
};

static const MR_EnumFunctorDescPtr transform_hlds__term_constr_data__transform_hlds__term_constr_data__enum_ordinal_ordered_recursion_type_0[4] = {
  &transform_hlds__term_constr_data__transform_hlds__term_constr_data__enum_functor_desc_recursion_type_0_0,
  &transform_hlds__term_constr_data__transform_hlds__term_constr_data__enum_functor_desc_recursion_type_0_1,
  &transform_hlds__term_constr_data__transform_hlds__term_constr_data__enum_functor_desc_recursion_type_0_2,
  &transform_hlds__term_constr_data__transform_hlds__term_constr_data__enum_functor_desc_recursion_type_0_3
};

static const MR_EnumFunctorDescPtr transform_hlds__term_constr_data__transform_hlds__term_constr_data__enum_name_ordered_recursion_type_0[4] = {
  &transform_hlds__term_constr_data__transform_hlds__term_constr_data__enum_functor_desc_recursion_type_0_3,
  &transform_hlds__term_constr_data__transform_hlds__term_constr_data__enum_functor_desc_recursion_type_0_1,
  &transform_hlds__term_constr_data__transform_hlds__term_constr_data__enum_functor_desc_recursion_type_0_2,
  &transform_hlds__term_constr_data__transform_hlds__term_constr_data__enum_functor_desc_recursion_type_0_0
};

static const MR_Integer transform_hlds__term_constr_data__transform_hlds__term_constr_data__functor_number_map_recursion_type_0[4] = {
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_recursion_type_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (transform_hlds__term_constr_data____Unify____recursion_type_0_0_10001)),
  ((MR_Box) (transform_hlds__term_constr_data____Compare____recursion_type_0_0_10001)),
  (MR_String) "transform_hlds.term_constr_data",
  (MR_String) "recursion_type",
  { transform_hlds__term_constr_data__transform_hlds__term_constr_data__enum_name_ordered_recursion_type_0 },
  { transform_hlds__term_constr_data__transform_hlds__term_constr_data__enum_ordinal_ordered_recursion_type_0 },
  (MR_Integer) 4,
  UINT16_C(12),
  transform_hlds__term_constr_data__transform_hlds__term_constr_data__functor_number_map_recursion_type_0,

};

static const MR_FA_TypeInfo_Struct2 transform_hlds__term_constr_data__pair__ti_pair_2term__ti_var_1term__type_ctor_info_generic_0libs__rat__type_ctor_info_rat_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&transform_hlds__term_constr_data__term__ti_var_1term__type_ctor_info_generic_0),
    (MR_TypeInfo) (&libs__rat__libs__rat__type_ctor_info_rat_0)
  }
};

const MR_TypeCtorInfo_Struct transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_size_term_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__term_constr_data____Unify____size_term_0_0_10001)),
  ((MR_Box) (transform_hlds__term_constr_data____Compare____size_term_0_0_10001)),
  (MR_String) "transform_hlds.term_constr_data",
  (MR_String) "size_term",
  { NULL },
  { (MR_PseudoTypeInfo) (&transform_hlds__term_constr_data__pair__ti_pair_2term__ti_var_1term__type_ctor_info_generic_0libs__rat__type_ctor_info_rat_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_data__list__ti_list_1pair__ti_pair_2term__ti_var_1term__type_ctor_info_generic_0libs__rat__type_ctor_info_rat_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&transform_hlds__term_constr_data__pair__ti_pair_2term__ti_var_1term__type_ctor_info_generic_0libs__rat__type_ctor_info_rat_0) }
};

const MR_TypeCtorInfo_Struct transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_size_terms_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__term_constr_data____Unify____size_terms_0_0_10001)),
  ((MR_Box) (transform_hlds__term_constr_data____Compare____size_terms_0_0_10001)),
  (MR_String) "transform_hlds.term_constr_data",
  (MR_String) "size_terms",
  { NULL },
  { (MR_PseudoTypeInfo) (&transform_hlds__term_constr_data__list__ti_list_1pair__ti_pair_2term__ti_var_1term__type_ctor_info_generic_0libs__rat__type_ctor_info_rat_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

const MR_TypeCtorInfo_Struct transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_size_var_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__term_constr_data____Unify____size_var_0_0_10001)),
  ((MR_Box) (transform_hlds__term_constr_data____Compare____size_var_0_0_10001)),
  (MR_String) "transform_hlds.term_constr_data",
  (MR_String) "size_var",
  { NULL },
  { (MR_PseudoTypeInfo) (&transform_hlds__term_constr_data__term__ti_var_1term__type_ctor_info_generic_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

const MR_TypeCtorInfo_Struct transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_size_var_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__term_constr_data____Unify____size_var_map_0_0_10001)),
  ((MR_Box) (transform_hlds__term_constr_data____Compare____size_var_map_0_0_10001)),
  (MR_String) "transform_hlds.term_constr_data",
  (MR_String) "size_var_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&transform_hlds__term_constr_data__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1term__type_ctor_info_generic_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

const MR_TypeCtorInfo_Struct transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_size_vars_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__term_constr_data____Unify____size_vars_0_0_10001)),
  ((MR_Box) (transform_hlds__term_constr_data____Compare____size_vars_0_0_10001)),
  (MR_String) "transform_hlds.term_constr_data",
  (MR_String) "size_vars",
  { NULL },
  { (MR_PseudoTypeInfo) (&transform_hlds__term_constr_data__list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

const MR_TypeCtorInfo_Struct transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_size_varset_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__term_constr_data____Unify____size_varset_0_0_10001)),
  ((MR_Box) (transform_hlds__term_constr_data____Compare____size_varset_0_0_10001)),
  (MR_String) "transform_hlds.term_constr_data",
  (MR_String) "size_varset",
  { NULL },
  { (MR_PseudoTypeInfo) (&transform_hlds__term_constr_data__varset__ti_varset_1term__type_ctor_info_generic_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_Integer transform_hlds__term_constr_data__transform_hlds__term_constr_data__functor_number_map_widening_0[1] = { (MR_Integer) 0 };

static const MR_NotagFunctorDesc transform_hlds__term_constr_data__transform_hlds__term_constr_data__notag_functor_desc_widening_0 = {
  (MR_String) "after_fixed_cutoff",
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_widening_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (transform_hlds__term_constr_data____Unify____widening_0_0_10001)),
  ((MR_Box) (transform_hlds__term_constr_data____Compare____widening_0_0_10001)),
  (MR_String) "transform_hlds.term_constr_data",
  (MR_String) "widening",
  { &transform_hlds__term_constr_data__transform_hlds__term_constr_data__notag_functor_desc_widening_0 },
  { &transform_hlds__term_constr_data__transform_hlds__term_constr_data__notag_functor_desc_widening_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  transform_hlds__term_constr_data__transform_hlds__term_constr_data__functor_number_map_widening_0,

};

const MR_TypeCtorInfo_Struct transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_zero_vars_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__term_constr_data____Unify____zero_vars_0_0_10001)),
  ((MR_Box) (transform_hlds__term_constr_data____Compare____zero_vars_0_0_10001)),
  (MR_String) "transform_hlds.term_constr_data",
  (MR_String) "zero_vars",
  { NULL },
  { (MR_PseudoTypeInfo) (&transform_hlds__term_constr_data__set_ordlist__ti_set_ordlist_1term__ti_var_1term__type_ctor_info_generic_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static void MR_CALL 
transform_hlds__term_constr_data__IntroducedFrom__pred__var_names_to_string__767__1_3_p_0(
  MR_Word VarSet_4,
  MR_Word HeadVar__2_10,
  MR_String * HeadVar__3_11)
{
  mercury__varset__lookup_name_3_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_4, HeadVar__2_10, HeadVar__3_11);
}

void MR_CALL 
transform_hlds__term_constr_data____Compare____zero_vars_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__term_constr_data_scalar_common_1[2]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____zero_vars_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__term_constr_data_scalar_common_1[2]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
transform_hlds__term_constr_data____Compare____widening_0_0(
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
  {
    MR_Integer ArgX1_4 = (MR_Integer) (HeadVar__2_2);
    MR_Integer ArgY1_5 = (MR_Integer) (HeadVar__3_3);

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

MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____widening_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_5 == CastY_6);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Integer ArgX1_3 = (MR_Integer) (HeadVar__1_1);
    MR_Integer ArgY1_4 = (MR_Integer) (HeadVar__2_2);

    succeeded = (ArgX1_3 == ArgY1_4);
  }
  return succeeded;
}

void MR_CALL 
transform_hlds__term_constr_data____Compare____size_varset_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__term_constr_data_scalar_common_1[6]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____size_varset_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__term_constr_data_scalar_common_1[6]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
transform_hlds__term_constr_data____Compare____size_vars_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__term_constr_data_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____size_vars_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__term_constr_data_scalar_common_1[1]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
transform_hlds__term_constr_data____Compare____size_var_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__term_constr_data_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____size_var_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__term_constr_data_scalar_common_2[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
transform_hlds__term_constr_data____Compare____size_var_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__term_constr_data_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____size_var_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__term_constr_data_scalar_common_1[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
transform_hlds__term_constr_data____Compare____size_terms_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__term_constr_data_scalar_common_1[10]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____size_terms_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__term_constr_data_scalar_common_1[10]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
transform_hlds__term_constr_data____Compare____size_term_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__term_constr_data_scalar_common_2[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____size_term_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__term_constr_data_scalar_common_2[1]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
transform_hlds__term_constr_data____Compare____recursion_type_0_0(
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
transform_hlds__term_constr_data____Unify____recursion_type_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
transform_hlds__term_constr_data____Compare____nonlocal_vars_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__term_constr_data_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____nonlocal_vars_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__term_constr_data_scalar_common_1[1]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
transform_hlds__term_constr_data____Compare____local_vars_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__term_constr_data_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____local_vars_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__term_constr_data_scalar_common_1[1]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
transform_hlds__term_constr_data____Compare____head_vars_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__term_constr_data_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____head_vars_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__term_constr_data_scalar_common_1[1]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
transform_hlds__term_constr_data____Compare____call_vars_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__term_constr_data_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____call_vars_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__term_constr_data_scalar_common_1[1]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
transform_hlds__term_constr_data____Compare____arg_size_result_0_0(
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
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 2;
    else
    {
      MR_Word ArgY1_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));

      mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__term_constr_data_scalar_common_1[9]), HeadVar__1_1, ((MR_Box) (Var_11)), ((MR_Box) (ArgY1_7)));
    }
  }
}

MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____arg_size_result_0_0(
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
    MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastY_4 == CastX_3);
  }
  else
  {
    MR_Word TypeInfo_9_9;
    MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_6;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      TypeInfo_9_9 = (MR_Word) (&transform_hlds__term_constr_data_scalar_common_1[9]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_9_9, ((MR_Box) (ArgX1_5)), ((MR_Box) (ArgY1_6)));
    }
  }
  return succeeded;
}

void MR_CALL 
transform_hlds__term_constr_data____Compare____abstract_scc_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__term_constr_data_scalar_common_1[8]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____abstract_scc_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__term_constr_data_scalar_common_1[8]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
transform_hlds__term_constr_data____Compare____abstract_proc_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_39 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_40 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_39 == CastY_40);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 3))));
    MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
    MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 4))));
    MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 5))));
    MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 5))));
    MR_Word ArgX7_22 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 6))));
    MR_Word ArgY7_23 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 6))));
    MR_Word ArgX8_25 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 7))));
    MR_Word ArgY8_26 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 7))));
    MR_Word ArgX9_28 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 8))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgY9_29 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 8))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgX10_31 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 8))) & (MR_Integer) 3);
    MR_Word ArgY10_32 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 8))) & (MR_Integer) 3);
    MR_Integer ArgX11_34 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 9))));
    MR_Integer ArgY11_35 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 9))));
    MR_Word ArgX12_37 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 10))));
    MR_Word ArgY12_38 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 10))));
    MR_Word SubResult1_6;

    transform_hlds__term_constr_data____Compare____abstract_ppid_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__term_context____Compare____term_context_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__term_constr_data_scalar_common_1[1]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__term_constr_data_scalar_common_1[4]), &SubResult4_15, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;

            transform_hlds__term_constr_data____Compare____abstract_goal_0_0(&SubResult5_18, ArgX5_16, ArgY5_17);
            succeeded = (SubResult5_18 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
            {
              MR_Word SubResult6_21;

              mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__term_constr_data_scalar_common_2[0]), &SubResult6_21, ((MR_Box) (ArgX6_19)), ((MR_Box) (ArgY6_20)));
              succeeded = (SubResult6_21 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult6_21;
              else
              {
                MR_Word SubResult7_24;

                mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__term_constr_data_scalar_common_1[6]), &SubResult7_24, ((MR_Box) (ArgX7_22)), ((MR_Box) (ArgY7_23)));
                succeeded = (SubResult7_24 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult7_24;
                else
                {
                  MR_Word SubResult8_27;

                  mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__term_constr_data_scalar_common_1[2]), &SubResult8_27, ((MR_Box) (ArgX8_25)), ((MR_Box) (ArgY8_26)));
                  succeeded = (SubResult8_27 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult8_27;
                  else
                  {
                    MR_Word SubResult9_30;
                    MR_Integer Var_53 = (MR_Integer) (ArgX9_28);
                    MR_Integer Var_54 = (MR_Integer) (ArgY9_29);

                    succeeded = (Var_53 < Var_54);
                    if (succeeded)
                    {
                      SubResult9_30 = (MR_Integer) 1;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = (Var_53 > Var_54);
                      if (succeeded)
                      {
                        SubResult9_30 = (MR_Integer) 2;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = MR_TRUE;
                        succeeded = !(succeeded);
                        if (succeeded)
                        {
                          SubResult9_30 = (MR_Integer) 0;
                          succeeded = MR_TRUE;
                        }
                      }
                    }
                    if (succeeded)
                      *HeadVar__1_1 = SubResult9_30;
                    else
                    {
                      MR_Word SubResult10_33;
                      MR_Integer Var_55 = (MR_Integer) (ArgX10_31);
                      MR_Integer Var_56 = (MR_Integer) (ArgY10_32);

                      succeeded = (Var_55 < Var_56);
                      if (succeeded)
                      {
                        SubResult10_33 = (MR_Integer) 1;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = (Var_55 > Var_56);
                        if (succeeded)
                        {
                          SubResult10_33 = (MR_Integer) 2;
                          succeeded = MR_TRUE;
                        }
                        else
                        {
                          succeeded = MR_TRUE;
                          succeeded = !(succeeded);
                          if (succeeded)
                          {
                            SubResult10_33 = (MR_Integer) 0;
                            succeeded = MR_TRUE;
                          }
                        }
                      }
                      if (succeeded)
                        *HeadVar__1_1 = SubResult10_33;
                      else
                      {
                        MR_Word SubResult11_36;

                        succeeded = (ArgX11_34 < ArgY11_35);
                        if (succeeded)
                        {
                          SubResult11_36 = (MR_Integer) 1;
                          succeeded = MR_TRUE;
                        }
                        else
                        {
                          succeeded = (ArgX11_34 > ArgY11_35);
                          if (succeeded)
                          {
                            SubResult11_36 = (MR_Integer) 2;
                            succeeded = MR_TRUE;
                          }
                          else
                          {
                            succeeded = MR_TRUE;
                            succeeded = !(succeeded);
                            if (succeeded)
                            {
                              SubResult11_36 = (MR_Integer) 0;
                              succeeded = MR_TRUE;
                            }
                          }
                        }
                        if (succeeded)
                          *HeadVar__1_1 = SubResult11_36;
                        else
                          mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__term_constr_data_scalar_common_1[7]), HeadVar__1_1, ((MR_Box) (ArgX12_37)), ((MR_Box) (ArgY12_38)));
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
transform_hlds__term_constr_data____Unify____abstract_proc_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_27 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_28 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_27 == CastY_28);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_30_30;
    MR_Word TypeInfo_31_31;
    MR_Word TypeInfo_32_32;
    MR_Word TypeInfo_33_33;
    MR_Word TypeInfo_34_34;
    MR_Word TypeInfo_35_35;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 4))));
    MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
    MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 5))));
    MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 5))));
    MR_Word ArgX7_15 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 6))));
    MR_Word ArgY7_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 6))));
    MR_Word ArgX8_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 7))));
    MR_Word ArgY8_18 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 7))));
    MR_Word ArgX9_19 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 8))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgY9_20 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 8))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgX10_21 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 8))) & (MR_Integer) 3);
    MR_Word ArgY10_22 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 8))) & (MR_Integer) 3);
    MR_Integer ArgX11_23 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 9))));
    MR_Integer ArgY11_24 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 9))));
    MR_Word ArgX12_25 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 10))));
    MR_Word ArgY12_26 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 10))));

    succeeded = transform_hlds__term_constr_data____Unify____abstract_ppid_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      succeeded = mercury__term_context____Unify____term_context_0_0(ArgX2_5, ArgY2_6);
      if (succeeded)
      {
        TypeInfo_30_30 = (MR_Word) (&transform_hlds__term_constr_data_scalar_common_1[1]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_30_30, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        if (succeeded)
        {
          TypeInfo_31_31 = (MR_Word) (&transform_hlds__term_constr_data_scalar_common_1[4]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_31_31, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
          if (succeeded)
          {
            succeeded = transform_hlds__term_constr_data____Unify____abstract_goal_0_0(ArgX5_11, ArgY5_12);
            if (succeeded)
            {
              TypeInfo_32_32 = (MR_Word) (&transform_hlds__term_constr_data_scalar_common_2[0]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_32_32, ((MR_Box) (ArgX6_13)), ((MR_Box) (ArgY6_14)));
              if (succeeded)
              {
                TypeInfo_33_33 = (MR_Word) (&transform_hlds__term_constr_data_scalar_common_1[6]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_33_33, ((MR_Box) (ArgX7_15)), ((MR_Box) (ArgY7_16)));
                if (succeeded)
                {
                  TypeInfo_34_34 = (MR_Word) (&transform_hlds__term_constr_data_scalar_common_1[2]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_34_34, ((MR_Box) (ArgX8_17)), ((MR_Box) (ArgY8_18)));
                  if (succeeded)
                  {
                    succeeded = (ArgX9_19 == ArgY9_20);
                    if (succeeded)
                    {
                      succeeded = (ArgX10_21 == ArgY10_22);
                      if (succeeded)
                      {
                        succeeded = (ArgX11_23 == ArgY11_24);
                        if (succeeded)
                        {
                          TypeInfo_35_35 = (MR_Word) (&transform_hlds__term_constr_data_scalar_common_1[7]);
                          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_35_35, ((MR_Box) (ArgX12_25)), ((MR_Box) (ArgY12_26)));
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
  return succeeded;
}

void MR_CALL 
transform_hlds__term_constr_data____Compare____abstract_ho_call_0_0(
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
  {
    MR_Word ArgX1_4 = (MR_Word) (HeadVar__2_2);
    MR_Word ArgY1_5 = (MR_Word) (HeadVar__3_3);

    mercury__term_context____Compare____term_context_0_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
  }
}

MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____abstract_ho_call_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_5 == CastY_6);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word ArgX1_3 = (MR_Word) (HeadVar__1_1);
    MR_Word ArgY1_4 = (MR_Word) (HeadVar__2_2);

    succeeded = mercury__term_context____Unify____term_context_0_0(ArgX1_3, ArgY1_4);
  }
  return succeeded;
}

void MR_CALL 
transform_hlds__term_constr_data____Compare____abstract_goal_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_153 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_154 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_153 == CastY_154);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Var_182 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
          MR_Word Var_183 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
          MR_Integer Var_184 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
          MR_Word Var_185 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
                MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
                MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
                MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 3))));
                MR_Word SubResult1_6;

                mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__term_constr_data_scalar_common_1[3]), &SubResult1_6, ((MR_Box) (Var_185)), ((MR_Box) (ArgY1_5)));
                succeeded = (SubResult1_6 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult1_6;
                else
                {
                  MR_Word SubResult2_9;

                  succeeded = (Var_184 < ArgY2_8);
                  if (succeeded)
                  {
                    SubResult2_9 = (MR_Integer) 1;
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    succeeded = (Var_184 > ArgY2_8);
                    if (succeeded)
                    {
                      SubResult2_9 = (MR_Integer) 2;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = MR_TRUE;
                      succeeded = !(succeeded);
                      if (succeeded)
                      {
                        SubResult2_9 = (MR_Integer) 0;
                        succeeded = MR_TRUE;
                      }
                    }
                  }
                  if (succeeded)
                    *HeadVar__1_1 = SubResult2_9;
                  else
                  {
                    MR_Word SubResult3_12;

                    mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__term_constr_data_scalar_common_1[1]), &SubResult3_12, ((MR_Box) (Var_183)), ((MR_Box) (ArgY3_11)));
                    succeeded = (SubResult3_12 != (MR_Integer) 0);
                    if (succeeded)
                      *HeadVar__1_1 = SubResult3_12;
                    else
                      mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__term_constr_data_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (Var_182)), ((MR_Box) (ArgY4_14)));
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
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_179 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2))));
          MR_Word Var_180 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
          MR_Word Var_181 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 1:
              {
                MR_Word ArgY1_48 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
                MR_Word ArgY2_51 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
                MR_Word ArgY3_54 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 2))));
                MR_Word SubResult1_49;

                mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__term_constr_data_scalar_common_1[3]), &SubResult1_49, ((MR_Box) (Var_181)), ((MR_Box) (ArgY1_48)));
                succeeded = (SubResult1_49 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult1_49;
                else
                {
                  MR_Word SubResult2_52;

                  mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__term_constr_data_scalar_common_1[1]), &SubResult2_52, ((MR_Box) (Var_180)), ((MR_Box) (ArgY2_51)));
                  succeeded = (SubResult2_52 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult2_52;
                  else
                    mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__term_constr_data_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (Var_179)), ((MR_Box) (ArgY3_54)));
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
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Var_172 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 6))));
          MR_Word Var_173 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 5))));
          MR_Word Var_174 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 4))));
          MR_Word Var_175 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 3))));
          MR_Word Var_176 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 2))));
          MR_Word Var_177 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 1))));
          MR_Word Var_178 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));

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
                MR_Word ArgY1_93 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 0))));
                MR_Word ArgY2_96 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 1))));
                MR_Word ArgY3_99 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 2))));
                MR_Word ArgY4_102 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 3))));
                MR_Word ArgY5_105 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 4))));
                MR_Word ArgY6_108 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 5))));
                MR_Word ArgY7_111 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 6))));
                MR_Word SubResult1_94;

                transform_hlds__term_constr_data____Compare____abstract_ppid_0_0(&SubResult1_94, Var_178, ArgY1_93);
                succeeded = (SubResult1_94 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult1_94;
                else
                {
                  MR_Word SubResult2_97;

                  mercury__term_context____Compare____term_context_0_0(&SubResult2_97, Var_177, ArgY2_96);
                  succeeded = (SubResult2_97 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult2_97;
                  else
                  {
                    MR_Word SubResult3_100;

                    mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__term_constr_data_scalar_common_1[1]), &SubResult3_100, ((MR_Box) (Var_176)), ((MR_Box) (ArgY3_99)));
                    succeeded = (SubResult3_100 != (MR_Integer) 0);
                    if (succeeded)
                      *HeadVar__1_1 = SubResult3_100;
                    else
                    {
                      MR_Word SubResult4_103;

                      mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__term_constr_data_scalar_common_1[2]), &SubResult4_103, ((MR_Box) (Var_175)), ((MR_Box) (ArgY4_102)));
                      succeeded = (SubResult4_103 != (MR_Integer) 0);
                      if (succeeded)
                        *HeadVar__1_1 = SubResult4_103;
                      else
                      {
                        MR_Word SubResult5_106;

                        mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__term_constr_data_scalar_common_1[1]), &SubResult5_106, ((MR_Box) (Var_174)), ((MR_Box) (ArgY5_105)));
                        succeeded = (SubResult5_106 != (MR_Integer) 0);
                        if (succeeded)
                          *HeadVar__1_1 = SubResult5_106;
                        else
                        {
                          MR_Word SubResult6_109;

                          mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__term_constr_data_scalar_common_1[1]), &SubResult6_109, ((MR_Box) (Var_173)), ((MR_Box) (ArgY6_108)));
                          succeeded = (SubResult6_109 != (MR_Integer) 0);
                          if (succeeded)
                            *HeadVar__1_1 = SubResult6_109;
                          else
                            libs__polyhedron____Compare____polyhedron_0_0(HeadVar__1_1, Var_172, ArgY7_111);
                        }
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
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word Var_186 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))));
          MR_Word Var_187 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
          MR_Word Var_188 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0))));

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
                MR_Word ArgY1_146 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))));
                MR_Word ArgY2_149 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));
                MR_Word ArgY3_152 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 2))));
                MR_Word SubResult1_147;

                libs__polyhedron____Compare____polyhedron_0_0(&SubResult1_147, Var_188, ArgY1_146);
                succeeded = (SubResult1_147 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult1_147;
                else
                {
                  MR_Word SubResult2_150;

                  mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__term_constr_data_scalar_common_1[1]), &SubResult2_150, ((MR_Box) (Var_187)), ((MR_Box) (ArgY2_149)));
                  succeeded = (SubResult2_150 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult2_150;
                  else
                    mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__term_constr_data_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (Var_186)), ((MR_Box) (ArgY3_152)));
                }
              }
              break;
          }
        }
        break;
    }
}

void MR_CALL 
transform_hlds__term_constr_data____Compare____abstract_ppid_0_0(
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
  {
    MR_Word ArgX1_4 = (MR_Word) (HeadVar__2_2);
    MR_Word ArgY1_5 = (MR_Word) (HeadVar__3_3);

    hlds__hlds_pred____Compare____pred_proc_id_0_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
  }
}

MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____abstract_goal_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_37 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_38 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_37 == CastY_38);
  if (succeeded)
    succeeded = MR_TRUE;
  else
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word TypeInfo_48_48;
          MR_Word TypeInfo_49_49;
          MR_Word TypeInfo_50_50;
          MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_4;
          MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
          MR_Integer ArgY2_6;
          MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
          MR_Word ArgY3_8;
          MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))));
          MR_Word ArgY4_10;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
            ArgY2_6 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
            ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
            ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
            TypeInfo_48_48 = (MR_Word) (&transform_hlds__term_constr_data_scalar_common_1[3]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_48_48, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
            if (succeeded)
            {
              succeeded = (ArgX2_5 == ArgY2_6);
              if (succeeded)
              {
                TypeInfo_49_49 = (MR_Word) (&transform_hlds__term_constr_data_scalar_common_1[1]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_49_49, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
                if (succeeded)
                {
                  TypeInfo_50_50 = (MR_Word) (&transform_hlds__term_constr_data_scalar_common_1[1]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_50_50, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
                }
              }
            }
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word TypeInfo_45_45;
          MR_Word TypeInfo_46_46;
          MR_Word TypeInfo_47_47;
          MR_Word ArgX1_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_12;
          MR_Word ArgX2_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
          MR_Word ArgY2_14;
          MR_Word ArgX3_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 2))));
          MR_Word ArgY3_16;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
            ArgY2_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
            ArgY3_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2))));
            TypeInfo_45_45 = (MR_Word) (&transform_hlds__term_constr_data_scalar_common_1[3]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_45_45, ((MR_Box) (ArgX1_11)), ((MR_Box) (ArgY1_12)));
            if (succeeded)
            {
              TypeInfo_46_46 = (MR_Word) (&transform_hlds__term_constr_data_scalar_common_1[1]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_46_46, ((MR_Box) (ArgX2_13)), ((MR_Box) (ArgY2_14)));
              if (succeeded)
              {
                TypeInfo_47_47 = (MR_Word) (&transform_hlds__term_constr_data_scalar_common_1[1]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_47_47, ((MR_Box) (ArgX3_15)), ((MR_Box) (ArgY3_16)));
              }
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word TypeInfo_40_40;
          MR_Word TypeInfo_41_41;
          MR_Word TypeInfo_42_42;
          MR_Word TypeInfo_43_43;
          MR_Word ArgX1_17 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_18;
          MR_Word ArgX2_19 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 1))));
          MR_Word ArgY2_20;
          MR_Word ArgX3_21 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 2))));
          MR_Word ArgY3_22;
          MR_Word ArgX4_23 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 3))));
          MR_Word ArgY4_24;
          MR_Word ArgX5_25 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 4))));
          MR_Word ArgY5_26;
          MR_Word ArgX6_27 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 5))));
          MR_Word ArgY6_28;
          MR_Word ArgX7_29 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 6))));
          MR_Word ArgY7_30;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_18 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));
            ArgY2_20 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 1))));
            ArgY3_22 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 2))));
            ArgY4_24 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 3))));
            ArgY5_26 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 4))));
            ArgY6_28 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 5))));
            ArgY7_30 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 6))));
            succeeded = transform_hlds__term_constr_data____Unify____abstract_ppid_0_0(ArgX1_17, ArgY1_18);
            if (succeeded)
            {
              succeeded = mercury__term_context____Unify____term_context_0_0(ArgX2_19, ArgY2_20);
              if (succeeded)
              {
                TypeInfo_40_40 = (MR_Word) (&transform_hlds__term_constr_data_scalar_common_1[1]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_40_40, ((MR_Box) (ArgX3_21)), ((MR_Box) (ArgY3_22)));
                if (succeeded)
                {
                  TypeInfo_41_41 = (MR_Word) (&transform_hlds__term_constr_data_scalar_common_1[2]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_41_41, ((MR_Box) (ArgX4_23)), ((MR_Box) (ArgY4_24)));
                  if (succeeded)
                  {
                    TypeInfo_42_42 = (MR_Word) (&transform_hlds__term_constr_data_scalar_common_1[1]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_42_42, ((MR_Box) (ArgX5_25)), ((MR_Box) (ArgY5_26)));
                    if (succeeded)
                    {
                      TypeInfo_43_43 = (MR_Word) (&transform_hlds__term_constr_data_scalar_common_1[1]);
                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_43_43, ((MR_Box) (ArgX6_27)), ((MR_Box) (ArgY6_28)));
                      if (succeeded)
                        succeeded = libs__polyhedron____Unify____polyhedron_0_0(ArgX7_29, ArgY7_30);
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
          MR_Word TypeInfo_52_52;
          MR_Word TypeInfo_53_53;
          MR_Word ArgX1_31 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_32;
          MR_Word ArgX2_33 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
          MR_Word ArgY2_34;
          MR_Word ArgX3_35 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 2))));
          MR_Word ArgY3_36;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3);
          if (succeeded)
          {
            ArgY1_32 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0))));
            ArgY2_34 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
            ArgY3_36 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))));
            succeeded = libs__polyhedron____Unify____polyhedron_0_0(ArgX1_31, ArgY1_32);
            if (succeeded)
            {
              TypeInfo_52_52 = (MR_Word) (&transform_hlds__term_constr_data_scalar_common_1[1]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_52_52, ((MR_Box) (ArgX2_33)), ((MR_Box) (ArgY2_34)));
              if (succeeded)
              {
                TypeInfo_53_53 = (MR_Word) (&transform_hlds__term_constr_data_scalar_common_1[1]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_53_53, ((MR_Box) (ArgX3_35)), ((MR_Box) (ArgY3_36)));
              }
            }
          }
        }
        break;
    }
  return succeeded;
}

MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____abstract_ppid_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_5 == CastY_6);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word ArgX1_3 = (MR_Word) (HeadVar__1_1);
    MR_Word ArgY1_4 = (MR_Word) (HeadVar__2_2);

    succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(ArgX1_3, ArgY1_4);
  }
  return succeeded;
}

static MR_String MR_CALL 
transform_hlds__term_constr_data__recursion_type_to_string_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_String HeadVar__2_2 = ((&transform_hlds__term_constr_data_vector_common_10[0 + HeadVar__1_1]))->transform_hlds__term_constr_data__vector_common_type_10_0__vct_10_f_0;

  return HeadVar__2_2;
}

static MR_String MR_CALL 
transform_hlds__term_constr_data__size_var_to_string_2_f_0(
  MR_Word SizeVarSet_4,
  MR_Word Var_5)
{
  MR_String Str_6;
  MR_String VarName_7;
  MR_Integer Var_13;
  MR_String Var_17;
  MR_String Var_24;
  MR_String Var_26;

  mercury__varset__lookup_name_3_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), SizeVarSet_4, Var_5, &VarName_7);
  Var_13 = mercury__term__var_to_int_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Var_5);
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&transform_hlds__term_constr_data_scalar_common_3[0]), Var_13, &Var_17);
  Var_24 = mercury__string__f_43_43_2_f_0(Var_17, (MR_String) "]");
  Var_26 = mercury__string__f_43_43_2_f_0((MR_String) "[", Var_24);
  Str_6 = mercury__string__f_43_43_2_f_0(VarName_7, Var_26);
  return Str_6;
}

static MR_bool MR_CALL 
transform_hlds__term_constr_data__is_empty_conj_1_p_0(
  MR_Word HeadVar__1_1)
{
  MR_bool succeeded = ((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1);
  MR_Word Var_4;

  if (succeeded)
  {
    Var_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    succeeded = (Var_4 == (MR_Word) ((MR_Unsigned) 0U));
  }
  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__term_constr_data__is_empty_primitive_1_p_0(
  MR_Word HeadVar__1_1)
{
  MR_bool succeeded = ((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 3);
  MR_Word Poly_2;

  if (succeeded)
  {
    Poly_2 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 0))));
    succeeded = libs__polyhedron__is_universe_1_p_0(Poly_2);
  }
  return succeeded;
}

static MR_Word MR_CALL 
transform_hlds__term_constr_data__combine_primitives_2_f_0(
  MR_Word GoalA_4,
  MR_Word GoalB_5)
{
  MR_bool succeeded = ((MR_tag((MR_Word) GoalA_4)) == (MR_Integer) 3);
  MR_Word Goal_6;
  MR_Word PolyA_7;
  MR_Word LocalsA_8;
  MR_Word NonLocalsA_9;
  MR_Word PolyB_10;
  MR_Word LocalsB_11;
  MR_Word NonLocalsB_12;

  if (succeeded)
  {
    PolyA_7 = ((MR_Word) ((MR_hl_field(3, GoalA_4, (MR_Integer) 0))));
    LocalsA_8 = ((MR_Word) ((MR_hl_field(3, GoalA_4, (MR_Integer) 1))));
    NonLocalsA_9 = ((MR_Word) ((MR_hl_field(3, GoalA_4, (MR_Integer) 2))));
    succeeded = ((MR_tag((MR_Word) GoalB_5)) == (MR_Integer) 3);
    if (succeeded)
    {
      PolyB_10 = ((MR_Word) ((MR_hl_field(3, GoalB_5, (MR_Integer) 0))));
      LocalsB_11 = ((MR_Word) ((MR_hl_field(3, GoalB_5, (MR_Integer) 1))));
      NonLocalsB_12 = ((MR_Word) ((MR_hl_field(3, GoalB_5, (MR_Integer) 2))));
    }
  }
  if (succeeded)
  {
    MR_Word Poly_13;
    MR_Word Locals_14;
    MR_Word NonLocals_15;

    Poly_13 = libs__polyhedron__intersection_2_f_0(PolyA_7, PolyB_10);
    Locals_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&transform_hlds__term_constr_data_scalar_common_1[0]), LocalsA_8, LocalsB_11);
    NonLocals_15 = mercury__list__f_43_43_2_f_0((MR_Word) (&transform_hlds__term_constr_data_scalar_common_1[0]), NonLocalsA_9, NonLocalsB_12);
    {
      Goal_6 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Goal_6, 0) = ((MR_Box) (Poly_13));
      MR_hl_field(3, Goal_6, 1) = ((MR_Box) (Locals_14));
      MR_hl_field(3, Goal_6, 2) = ((MR_Box) (NonLocals_15));
    }
  }
  else
    mercury__require__unexpected_2_p_0((MR_String) "function \140transform_hlds.term_constr_data.combine_primitives\'/2", (MR_String) "non-primitive goals");
  return Goal_6;
}

static MR_bool MR_CALL 
transform_hlds__term_constr_data__is_primitive_1_p_0(
  MR_Word HeadVar__1_1)
{
  MR_bool succeeded = ((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 3);

  if (succeeded)
  {
  }
  return succeeded;
}

static MR_Box MR_CALL 
transform_hlds__term_constr_data__dump_abstract_proc_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_Str_6;

  conv0_Str_6 = transform_hlds__term_constr_data__size_var_to_string_2_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_Str_6));
  return wrapper_arg_2;
}

void MR_CALL 
transform_hlds__term_constr_data__dump_abstract_proc_6_p_0(
  MR_Word Stream_7,
  MR_Word ModuleInfo_8,
  MR_Integer Indent_9,
  MR_Word Proc_10)
{
  MR_Word AbstractPPId_12 = ((MR_Word) ((MR_hl_field(0, Proc_10, (MR_Integer) 0))));
  MR_Word HeadVars_13 = ((MR_Word) ((MR_hl_field(0, Proc_10, (MR_Integer) 2))));
  MR_Word Body_14 = ((MR_Word) ((MR_hl_field(0, Proc_10, (MR_Integer) 4))));
  MR_Word SizeVarSet_15 = ((MR_Word) ((MR_hl_field(0, Proc_10, (MR_Integer) 6))));
  MR_Word PPId_16 = (MR_Word) (AbstractPPId_12);
  MR_String PPIdStr_17;
  MR_Word HeadVarSizeStrs_18;
  MR_String HeadVarSizesStr_19;
  MR_Word Var_22;
  MR_Integer Var_32;

  PPIdStr_17 = hlds__hlds_out__hlds_out_util__pred_proc_id_to_dev_string_2_f_0(ModuleInfo_8, PPId_16);
  {
    Var_22 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_22, 0) = ((MR_Box) (&transform_hlds__term_constr_data_scalar_common_6[1]));
    MR_hl_field(0, Var_22, 1) = ((MR_Box) (transform_hlds__term_constr_data__dump_abstract_proc_6_p_0_1));
    MR_hl_field(0, Var_22, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_22, 3) = ((MR_Box) (SizeVarSet_15));
  }
  HeadVarSizeStrs_18 = mercury__list__map_2_f_0((MR_Word) (&transform_hlds__term_constr_data_scalar_common_1[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_22, HeadVars_13);
  HeadVarSizesStr_19 = mercury__string__join_list_2_f_0((MR_String) ", ", HeadVarSizeStrs_18);
  transform_hlds__term_constr_data__indent_line_4_p_0(Stream_7, Indent_9);
  mercury__io__write_string_4_p_0(Stream_7, PPIdStr_17);
  mercury__io__write_string_4_p_0(Stream_7, (MR_String) " : [ ");
  mercury__io__write_string_4_p_0(Stream_7, HeadVarSizesStr_19);
  mercury__io__write_string_4_p_0(Stream_7, (MR_String) " ] :- \n");
  Var_32 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
  transform_hlds__term_constr_data__dump_abstract_goal_7_p_0(Stream_7, ModuleInfo_8, SizeVarSet_15, Var_32, Body_14);
}

static void MR_CALL 
transform_hlds__term_constr_data__dump_abstract_disjuncts_7_p_0(
  MR_Word Stream_1,
  MR_Word ModuleInfo_2,
  MR_Word VarSet_3,
  MR_Integer Indent_4,
  MR_Word HeadVar__5_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word Goal_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 0))));
      MR_Word Goals_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 1))));
      MR_Integer Var_26 = (MR_Integer) ((MR_Unsigned) Indent_4 + (MR_Unsigned) 1);
      MR_Word next_value_of_HeadVar__5_5;

      transform_hlds__term_constr_data__dump_abstract_goal_7_p_0(Stream_1, ModuleInfo_2, VarSet_3, Var_26, Goal_19);
      if (!((Goals_20 == (MR_Word) ((MR_Unsigned) 0U))))
      {
        transform_hlds__term_constr_data__indent_line_4_p_0(Stream_1, Indent_4);
        mercury__io__write_string_4_p_0(Stream_1, (MR_String) ";\n");
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__5_5 = Goals_20;
      HeadVar__5_5 = next_value_of_HeadVar__5_5;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__term_constr_data__dump_abstract_goal_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  transform_hlds__term_constr_data__dump_abstract_goal_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)));
}

void MR_CALL 
transform_hlds__term_constr_data__dump_abstract_goal_7_p_0(
  MR_Word Stream_8,
  MR_Word ModuleInfo_9,
  MR_Word VarSet_10,
  MR_Integer Indent_11,
  MR_Word AbstractGoal_12)
{
  switch (MR_tag((MR_Word) AbstractGoal_12)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Goals_14 = ((MR_Word) ((MR_hl_field(0, AbstractGoal_12, (MR_Integer) 0))));
        MR_Integer Size_15 = ((MR_Integer) ((MR_hl_field(0, AbstractGoal_12, (MR_Integer) 1))));
        MR_Word Locals_16 = ((MR_Word) ((MR_hl_field(0, AbstractGoal_12, (MR_Integer) 2))));
        MR_Word NonLocals_17 = ((MR_Word) ((MR_hl_field(0, AbstractGoal_12, (MR_Integer) 3))));
        MR_String LocalVarNamesStr_18;
        MR_String NonLocalVarNamesStr_19;
        MR_String Var_114;

        transform_hlds__term_constr_data__indent_line_4_p_0(Stream_8, Indent_11);
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "disj[");
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&transform_hlds__term_constr_data_scalar_common_3[0]), Size_15, &Var_114);
        mercury__io__write_string_4_p_0(Stream_8, Var_114);
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "](\n");
        transform_hlds__term_constr_data__dump_abstract_disjuncts_7_p_0(Stream_8, ModuleInfo_9, VarSet_10, Indent_11, Goals_14);
        LocalVarNamesStr_18 = transform_hlds__term_constr_data__var_names_to_string_2_f_0(VarSet_10, Locals_16);
        NonLocalVarNamesStr_19 = transform_hlds__term_constr_data__var_names_to_string_2_f_0(VarSet_10, NonLocals_17);
        transform_hlds__term_constr_data__indent_line_4_p_0(Stream_8, Indent_11);
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) " Locals: ");
        mercury__io__write_string_4_p_0(Stream_8, LocalVarNamesStr_18);
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\n");
        transform_hlds__term_constr_data__indent_line_4_p_0(Stream_8, Indent_11);
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) " Non-Locals: ");
        mercury__io__write_string_4_p_0(Stream_8, NonLocalVarNamesStr_19);
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\n");
        transform_hlds__term_constr_data__indent_line_4_p_0(Stream_8, Indent_11);
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")\n");
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_60;
        MR_Integer Var_62;
        MR_Word Goals_101 = ((MR_Word) ((MR_hl_field(1, AbstractGoal_12, (MR_Integer) 0))));
        MR_Word Locals_102 = ((MR_Word) ((MR_hl_field(1, AbstractGoal_12, (MR_Integer) 1))));
        MR_Word NonLocals_103 = ((MR_Word) ((MR_hl_field(1, AbstractGoal_12, (MR_Integer) 2))));
        MR_String LocalVarNamesStr_104;
        MR_String NonLocalVarNamesStr_105;
        MR_Box conv0_STATE_VARIABLE_IO_61_61;

        transform_hlds__term_constr_data__indent_line_4_p_0(Stream_8, Indent_11);
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "conj(\n");
        Var_62 = (MR_Integer) ((MR_Unsigned) Indent_11 + (MR_Unsigned) 1);
        {
          Var_60 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_60, 0) = ((MR_Box) (&transform_hlds__term_constr_data_scalar_common_9[0]));
          MR_hl_field(0, Var_60, 1) = ((MR_Box) (transform_hlds__term_constr_data__dump_abstract_goal_7_p_0_1));
          MR_hl_field(0, Var_60, 2) = ((MR_Box) ((MR_Integer) 4));
          MR_hl_field(0, Var_60, 3) = ((MR_Box) (Stream_8));
          MR_hl_field(0, Var_60, 4) = ((MR_Box) (ModuleInfo_9));
          MR_hl_field(0, Var_60, 5) = ((MR_Box) (VarSet_10));
          MR_hl_field(0, Var_60, 6) = ((MR_Box) (Var_62));
        }
        mercury__list__foldl_4_p_2((MR_Word) (&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_goal_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_60, Goals_101, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_61_61);
        LocalVarNamesStr_104 = transform_hlds__term_constr_data__var_names_to_string_2_f_0(VarSet_10, Locals_102);
        NonLocalVarNamesStr_105 = transform_hlds__term_constr_data__var_names_to_string_2_f_0(VarSet_10, NonLocals_103);
        transform_hlds__term_constr_data__indent_line_4_p_0(Stream_8, Indent_11);
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) " Locals: ");
        mercury__io__write_string_4_p_0(Stream_8, LocalVarNamesStr_104);
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\n");
        transform_hlds__term_constr_data__indent_line_4_p_0(Stream_8, Indent_11);
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) " Non-Locals: ");
        mercury__io__write_string_4_p_0(Stream_8, NonLocalVarNamesStr_105);
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\n");
        transform_hlds__term_constr_data__indent_line_4_p_0(Stream_8, Indent_11);
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")\n");
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word PPId0_20 = ((MR_Word) ((MR_hl_field(2, AbstractGoal_12, (MR_Integer) 0))));
        MR_Word CallVars_22 = ((MR_Word) ((MR_hl_field(2, AbstractGoal_12, (MR_Integer) 2))));
        MR_Word CallPoly_26 = ((MR_Word) ((MR_hl_field(2, AbstractGoal_12, (MR_Integer) 6))));
        MR_Word PPId_27 = (MR_Word) (PPId0_20);
        MR_String PPIdStr_28;
        MR_String CallVarNamesStr_29;

        PPIdStr_28 = hlds__hlds_out__hlds_out_util__pred_proc_id_to_dev_string_2_f_0(ModuleInfo_9, PPId_27);
        CallVarNamesStr_29 = transform_hlds__term_constr_data__var_names_to_string_2_f_0(VarSet_10, CallVars_22);
        transform_hlds__term_constr_data__indent_line_4_p_0(Stream_8, Indent_11);
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "call: ");
        mercury__io__write_string_4_p_0(Stream_8, PPIdStr_28);
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) " : [");
        mercury__io__write_string_4_p_0(Stream_8, CallVarNamesStr_29);
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "]\n");
        transform_hlds__term_constr_data__indent_line_4_p_0(Stream_8, Indent_11);
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "Other call constraints:[\n");
        libs__polyhedron__write_polyhedron_5_p_0(Stream_8, VarSet_10, CallPoly_26);
        transform_hlds__term_constr_data__indent_line_4_p_0(Stream_8, Indent_11);
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "]\n");
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Word Poly_30 = ((MR_Word) ((MR_hl_field(3, AbstractGoal_12, (MR_Integer) 0))));

        transform_hlds__term_constr_data__indent_line_4_p_0(Stream_8, Indent_11);
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "[\n");
        libs__polyhedron__write_polyhedron_5_p_0(Stream_8, VarSet_10, Poly_30);
        transform_hlds__term_constr_data__indent_line_4_p_0(Stream_8, Indent_11);
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "]\n");
      }
      break;
  }
}

static void MR_CALL 
transform_hlds__term_constr_data__var_names_to_string_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_String conv0_HeadVar__3_11;

  transform_hlds__term_constr_data__IntroducedFrom__pred__var_names_to_string__767__1_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__3_11);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_11));
}

static MR_String MR_CALL 
transform_hlds__term_constr_data__var_names_to_string_2_f_0(
  MR_Word VarSet_4,
  MR_Word Vars_5)
{
  MR_String Str_6;
  MR_Word VarNames_7;
  MR_Word Var_8;

  {
    Var_8 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_8, 0) = ((MR_Box) (&transform_hlds__term_constr_data_scalar_common_6[1]));
    MR_hl_field(0, Var_8, 1) = ((MR_Box) (transform_hlds__term_constr_data__var_names_to_string_2_f_0_1));
    MR_hl_field(0, Var_8, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_8, 3) = ((MR_Box) (VarSet_4));
  }
  mercury__list__map_3_p_0((MR_Word) (&transform_hlds__term_constr_data_scalar_common_1[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_8, Vars_5, &VarNames_7);
  Str_6 = mercury__string__join_list_2_f_0((MR_String) ", ", VarNames_7);
  return Str_6;
}

static void MR_CALL 
transform_hlds__term_constr_data__indent_line_4_p_0(
  MR_Word Stream_5,
  MR_Integer N_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (N_6 > (MR_Integer) 0);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Integer Var_13;
      MR_Integer next_value_of_N_6;

      mercury__io__write_string_4_p_0(Stream_5, (MR_String) "  ");
      Var_13 = (MR_Integer) ((MR_Unsigned) N_6 - (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_N_6 = Var_13;
      N_6 = next_value_of_N_6;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__term_constr_data__dump_abstract_scc_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  transform_hlds__term_constr_data__dump_abstract_proc_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
}

void MR_CALL 
transform_hlds__term_constr_data__dump_abstract_scc_6_p_0(
  MR_Word Stream_7,
  MR_Word ModuleInfo_8,
  MR_Integer Indent_9,
  MR_Word SCC_10)
{
  MR_Word Var_14;
  MR_Box conv0_STATE_VARIABLE_IO_13;

  {
    Var_14 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_14, 0) = ((MR_Box) (&transform_hlds__term_constr_data_scalar_common_8[0]));
    MR_hl_field(0, Var_14, 1) = ((MR_Box) (transform_hlds__term_constr_data__dump_abstract_scc_6_p_0_1));
    MR_hl_field(0, Var_14, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_14, 3) = ((MR_Box) (Stream_7));
    MR_hl_field(0, Var_14, 4) = ((MR_Box) (ModuleInfo_8));
    MR_hl_field(0, Var_14, 5) = ((MR_Box) (Indent_9));
  }
  mercury__set__foldl_4_p_2((MR_Word) (&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_proc_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_14, SCC_10, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_13);
}

static void MR_CALL 
transform_hlds__term_constr_data__dump_abstract_scc_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  transform_hlds__term_constr_data__dump_abstract_proc_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
}

void MR_CALL 
transform_hlds__term_constr_data__dump_abstract_scc_5_p_0(
  MR_Word Stream_6,
  MR_Word ModuleInfo_7,
  MR_Word SCC_8)
{
  MR_Word Var_13;
  MR_Box conv0_STATE_VARIABLE_IO_11;

  {
    Var_13 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_13, 0) = ((MR_Box) (&transform_hlds__term_constr_data_scalar_common_8[0]));
    MR_hl_field(0, Var_13, 1) = ((MR_Box) (transform_hlds__term_constr_data__dump_abstract_scc_5_p_0_1));
    MR_hl_field(0, Var_13, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_13, 3) = ((MR_Box) (Stream_6));
    MR_hl_field(0, Var_13, 4) = ((MR_Box) (ModuleInfo_7));
    MR_hl_field(0, Var_13, 5) = ((MR_Box) ((MR_Integer) 0));
  }
  mercury__set__foldl_4_p_2((MR_Word) (&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_proc_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_13, SCC_8, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_11);
}

MR_Word MR_CALL 
transform_hlds__term_constr_data__simplify_conjuncts_1_f_0(
  MR_Word Goals0_3)
{
  MR_Word Goals_4;

  transform_hlds__term_constr_data__simplify_conjuncts_2_p_0(Goals0_3, &Goals_4);
  return Goals_4;
}

static void MR_CALL 
transform_hlds__term_constr_data__simplify_conjuncts_2_p_0(
  MR_Word Goals0_3,
  MR_Word * Goals_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((Goals0_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *Goals_4 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Var_24 = ((MR_Word) ((MR_hl_field(1, Goals0_3, (MR_Integer) 1))));
      MR_Word Var_25 = ((MR_Word) ((MR_hl_field(1, Goals0_3, (MR_Integer) 0))));

      if ((Var_24 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Goals_4 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_25));
          MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      else
      {
        MR_Word GoalB_7 = ((MR_Word) ((MR_hl_field(1, Var_24, (MR_Integer) 0))));
        MR_Word OtherGoals_8 = ((MR_Word) ((MR_hl_field(1, Var_24, (MR_Integer) 1))));
        MR_Word PolyA_9;
        MR_Word LocalsA_10;
        MR_Word NonLocalsA_11;
        MR_Word PolyB_12;
        MR_Word LocalsB_13;
        MR_Word NonLocalsB_14;

        succeeded = ((MR_tag((MR_Word) Var_25)) == (MR_Integer) 3);
        if (succeeded)
        {
          PolyA_9 = ((MR_Word) ((MR_hl_field(3, Var_25, (MR_Integer) 0))));
          LocalsA_10 = ((MR_Word) ((MR_hl_field(3, Var_25, (MR_Integer) 1))));
          NonLocalsA_11 = ((MR_Word) ((MR_hl_field(3, Var_25, (MR_Integer) 2))));
          succeeded = ((MR_tag((MR_Word) GoalB_7)) == (MR_Integer) 3);
          if (succeeded)
          {
            PolyB_12 = ((MR_Word) ((MR_hl_field(3, GoalB_7, (MR_Integer) 0))));
            LocalsB_13 = ((MR_Word) ((MR_hl_field(3, GoalB_7, (MR_Integer) 1))));
            NonLocalsB_14 = ((MR_Word) ((MR_hl_field(3, GoalB_7, (MR_Integer) 2))));
          }
        }
        if (succeeded)
        {
          MR_Word Poly_15;
          MR_Word Locals_16;
          MR_Word NonLocals_17;
          MR_Word Goals1_18;
          MR_Word Goal_22;
          MR_Word next_value_of_Goals0_3;

          Poly_15 = libs__polyhedron__intersection_2_f_0(PolyA_9, PolyB_12);
          Locals_16 = mercury__list__f_43_43_2_f_0((MR_Word) (&transform_hlds__term_constr_data_scalar_common_1[0]), LocalsA_10, LocalsB_13);
          NonLocals_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&transform_hlds__term_constr_data_scalar_common_1[0]), NonLocalsA_11, NonLocalsB_14);
          {
            Goal_22 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Goal_22, 0) = ((MR_Box) (Poly_15));
            MR_hl_field(3, Goal_22, 1) = ((MR_Box) (Locals_16));
            MR_hl_field(3, Goal_22, 2) = ((MR_Box) (NonLocals_17));
          }
          {
            Goals1_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Goals1_18, 0) = ((MR_Box) (Goal_22));
            MR_hl_field(1, Goals1_18, 1) = ((MR_Box) (OtherGoals_8));
          }
          // direct tailcall eliminated
          ;
          next_value_of_Goals0_3 = Goals1_18;
          Goals0_3 = next_value_of_Goals0_3;
          continue;
        }
        else
          *Goals_4 = Goals0_3;
      }
    }
    break;
  }
}

MR_Word MR_CALL 
transform_hlds__term_constr_data__simplify_abstract_rep_1_f_0(
  MR_Word Goal0_3)
{
  MR_Word Goal_4;

  transform_hlds__term_constr_data__simplify_abstract_rep_2_p_0(Goal0_3, &Goal_4);
  return Goal_4;
}

static void MR_CALL 
transform_hlds__term_constr_data__simplify_abstract_rep_2_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_Goal_4;

  transform_hlds__term_constr_data__simplify_abstract_rep_2_p_0(((MR_Word) (wrapper_arg_1)), &conv1_Goal_4);
  *wrapper_arg_2 = ((MR_Box) (conv1_Goal_4));
}

static MR_bool MR_CALL 
transform_hlds__term_constr_data__simplify_abstract_rep_2_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = transform_hlds__term_constr_data__is_empty_conj_1_p_0(((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__term_constr_data__simplify_abstract_rep_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = transform_hlds__term_constr_data__is_empty_primitive_1_p_0(((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__term_constr_data__simplify_abstract_rep_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_Goal_4;

  transform_hlds__term_constr_data__simplify_abstract_rep_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_Goal_4);
  *wrapper_arg_2 = ((MR_Box) (conv0_Goal_4));
}

static void MR_CALL 
transform_hlds__term_constr_data__simplify_abstract_rep_2_p_0(
  MR_Word Goal0_3,
  MR_Word * Goal_4)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) Goal0_3)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Disjuncts0_5 = ((MR_Word) ((MR_hl_field(0, Goal0_3, (MR_Integer) 0))));
        MR_Word Locals_7 = ((MR_Word) ((MR_hl_field(0, Goal0_3, (MR_Integer) 2))));
        MR_Word NonLocals_8 = ((MR_Word) ((MR_hl_field(0, Goal0_3, (MR_Integer) 3))));
        MR_Word Disjuncts_9;

        mercury__list__map_3_p_0((MR_Word) (&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_goal_0), (MR_Word) (&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_goal_0), (MR_Word) (&transform_hlds__term_constr_data_scalar_common_2[7]), Disjuncts0_5, &Disjuncts_9);
        if ((Disjuncts_9 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Var_29;

          Var_29 = libs__polyhedron__universe_0_f_0();
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            *Goal_4 = base;
            MR_hl_field(3, base, 0) = ((MR_Box) (Var_29));
            MR_hl_field(3, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, base, 2) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
        else
        {
          MR_Word Var_53 = ((MR_Word) ((MR_hl_field(1, Disjuncts_9, (MR_Integer) 1))));
          MR_Word Var_54 = ((MR_Word) ((MR_hl_field(1, Disjuncts_9, (MR_Integer) 0))));

          if ((Var_53 == (MR_Word) ((MR_Unsigned) 0U)))
            *Goal_4 = transform_hlds__term_constr_data__update_local_and_nonlocal_vars_3_f_0(Var_54, Locals_7, NonLocals_8);
          else
          {
            MR_Integer Size_14;

            Size_14 = mercury__list__length_1_f_0((MR_Word) (&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_goal_0), Disjuncts_9);
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              *Goal_4 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (Disjuncts_9));
              MR_hl_field(0, base, 1) = ((MR_Box) (Size_14));
              MR_hl_field(0, base, 2) = ((MR_Box) (Locals_7));
              MR_hl_field(0, base, 3) = ((MR_Box) (NonLocals_8));
            }
          }
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Conjuncts_16;
        MR_Word STATE_VARIABLE_Conjuncts_34_34 = ((MR_Word) ((MR_hl_field(1, Goal0_3, (MR_Integer) 0))));
        MR_Word STATE_VARIABLE_Conjuncts_36_36;
        MR_Word STATE_VARIABLE_Conjuncts_38_38;
        MR_Word STATE_VARIABLE_Conjuncts_39_39;
        MR_Word Locals_43 = ((MR_Word) ((MR_hl_field(1, Goal0_3, (MR_Integer) 1))));
        MR_Word NonLocals_44 = ((MR_Word) ((MR_hl_field(1, Goal0_3, (MR_Integer) 2))));
        MR_Word Conjunct_17;
        MR_Word Var_42;

        mercury__list__map_3_p_0((MR_Word) (&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_goal_0), (MR_Word) (&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_goal_0), (MR_Word) (&transform_hlds__term_constr_data_scalar_common_2[4]), STATE_VARIABLE_Conjuncts_34_34, &STATE_VARIABLE_Conjuncts_36_36);
        mercury__list__negated_filter_3_p_0((MR_Word) (&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_goal_0), (MR_Word) (&transform_hlds__term_constr_data_scalar_common_2[5]), STATE_VARIABLE_Conjuncts_36_36, &STATE_VARIABLE_Conjuncts_38_38);
        if ((STATE_VARIABLE_Conjuncts_38_38 == (MR_Word) ((MR_Unsigned) 0U)))
          STATE_VARIABLE_Conjuncts_39_39 = (MR_Word) ((MR_Unsigned) 0U);
        else
        {
          MR_Word Var_67 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_Conjuncts_38_38, (MR_Integer) 1))));
          MR_Word Var_68 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_Conjuncts_38_38, (MR_Integer) 0))));

          if ((Var_67 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              STATE_VARIABLE_Conjuncts_39_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, STATE_VARIABLE_Conjuncts_39_39, 0) = ((MR_Box) (Var_68));
              MR_hl_field(1, STATE_VARIABLE_Conjuncts_39_39, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
          else
          {
            MR_Word RevGoals_63;

            transform_hlds__term_constr_data__flatten_conjuncts_2_3_p_0(STATE_VARIABLE_Conjuncts_38_38, (MR_Word) ((MR_Unsigned) 0U), &RevGoals_63);
            STATE_VARIABLE_Conjuncts_39_39 = mercury__list__reverse_1_f_0((MR_Word) (&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_goal_0), RevGoals_63);
          }
        }
        mercury__list__negated_filter_3_p_0((MR_Word) (&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_goal_0), (MR_Word) (&transform_hlds__term_constr_data_scalar_common_2[6]), STATE_VARIABLE_Conjuncts_39_39, &Conjuncts_16);
        succeeded = (Conjuncts_16 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Conjunct_17 = ((MR_Word) ((MR_hl_field(1, Conjuncts_16, (MR_Integer) 0))));
          Var_42 = ((MR_Word) ((MR_hl_field(1, Conjuncts_16, (MR_Integer) 1))));
          succeeded = (Var_42 == (MR_Word) ((MR_Unsigned) 0U));
        }
        if (succeeded)
          *Goal_4 = transform_hlds__term_constr_data__update_local_and_nonlocal_vars_3_f_0(Conjunct_17, Locals_43, NonLocals_44);
        else
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            *Goal_4 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Conjuncts_16));
            MR_hl_field(1, base, 1) = ((MR_Box) (Locals_43));
            MR_hl_field(1, base, 2) = ((MR_Box) (NonLocals_44));
          }
      }
      break;
    case (MR_Integer) 2:
    case (MR_Integer) 3:
      *Goal_4 = Goal0_3;
      break;
  }
}

static MR_Box MR_CALL 
transform_hlds__term_constr_data__flatten_conjuncts_2_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_Word conv0_Goal_6;

  conv0_Goal_6 = transform_hlds__term_constr_data__combine_primitives_2_f_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  wrapper_arg_3 = ((MR_Box) (conv0_Goal_6));
  return wrapper_arg_3;
}

static MR_bool MR_CALL 
transform_hlds__term_constr_data__flatten_conjuncts_2_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = transform_hlds__term_constr_data__is_primitive_1_p_0(((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__term_constr_data__flatten_conjuncts_2_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_RevGoals_0_2,
  MR_Word * STATE_VARIABLE_RevGoals_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_RevGoals_3 = STATE_VARIABLE_RevGoals_0_2;
    else
    {
      MR_Word Goal0_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Goals0_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word NextNonPrimitive_14;
      MR_Word STATE_VARIABLE_RevGoals_22_22;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_RevGoals_0_2;

      succeeded = ((MR_tag((MR_Word) Goal0_7)) == (MR_Integer) 3);
      if (succeeded)
      {
        MR_Word Primitives_13;
        MR_Word NewPrimitive_15;

        mercury__list__take_while_4_p_0((MR_Word) (&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_goal_0), (MR_Word) (&transform_hlds__term_constr_data_scalar_common_2[2]), Goals0_8, &Primitives_13, &NextNonPrimitive_14);
        if ((Primitives_13 == (MR_Word) ((MR_Unsigned) 0U)))
          NewPrimitive_15 = Goal0_7;
        else
        {
          MR_Box conv1_NewPrimitive_15;

          conv1_NewPrimitive_15 = mercury__list__foldl_3_f_0((MR_Word) (&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_goal_0), (MR_Word) (&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_goal_0), (MR_Word) (&transform_hlds__term_constr_data_scalar_common_2[3]), Primitives_13, ((MR_Box) (Goal0_7)));
          NewPrimitive_15 = ((MR_Word) (conv1_NewPrimitive_15));
        }
        mercury__list__cons_3_p_0((MR_Word) (&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_goal_0), ((MR_Box) (NewPrimitive_15)), STATE_VARIABLE_RevGoals_0_2, &STATE_VARIABLE_RevGoals_22_22);
      }
      else
      {
        mercury__list__cons_3_p_0((MR_Word) (&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_goal_0), ((MR_Box) (Goal0_7)), STATE_VARIABLE_RevGoals_0_2, &STATE_VARIABLE_RevGoals_22_22);
        NextNonPrimitive_14 = Goals0_8;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = NextNonPrimitive_14;
      next_value_of_STATE_VARIABLE_RevGoals_0_2 = STATE_VARIABLE_RevGoals_22_22;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_RevGoals_0_2 = next_value_of_STATE_VARIABLE_RevGoals_0_2;
      continue;
    }
    break;
  }
}

MR_Word MR_CALL 
transform_hlds__term_constr_data__combine_primitive_goals_2_f_0(
  MR_Word GoalA_4,
  MR_Word GoalB_5)
{
  MR_bool succeeded = ((MR_tag((MR_Word) GoalA_4)) == (MR_Integer) 3);
  MR_Word Goal_6;
  MR_Word PolyA_7;
  MR_Word LocalsA_8;
  MR_Word NonLocalsA_9;
  MR_Word PolyB_10;
  MR_Word LocalsB_11;
  MR_Word NonLocalsB_12;

  if (succeeded)
  {
    PolyA_7 = ((MR_Word) ((MR_hl_field(3, GoalA_4, (MR_Integer) 0))));
    LocalsA_8 = ((MR_Word) ((MR_hl_field(3, GoalA_4, (MR_Integer) 1))));
    NonLocalsA_9 = ((MR_Word) ((MR_hl_field(3, GoalA_4, (MR_Integer) 2))));
    succeeded = ((MR_tag((MR_Word) GoalB_5)) == (MR_Integer) 3);
    if (succeeded)
    {
      PolyB_10 = ((MR_Word) ((MR_hl_field(3, GoalB_5, (MR_Integer) 0))));
      LocalsB_11 = ((MR_Word) ((MR_hl_field(3, GoalB_5, (MR_Integer) 1))));
      NonLocalsB_12 = ((MR_Word) ((MR_hl_field(3, GoalB_5, (MR_Integer) 2))));
    }
  }
  if (succeeded)
  {
    MR_Word Poly_13;
    MR_Word Locals_14;
    MR_Word NonLocals_15;

    Poly_13 = libs__polyhedron__intersection_2_f_0(PolyA_7, PolyB_10);
    Locals_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&transform_hlds__term_constr_data_scalar_common_1[0]), LocalsA_8, LocalsB_11);
    NonLocals_15 = mercury__list__f_43_43_2_f_0((MR_Word) (&transform_hlds__term_constr_data_scalar_common_1[0]), NonLocalsA_9, NonLocalsB_12);
    {
      Goal_6 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Goal_6, 0) = ((MR_Box) (Poly_13));
      MR_hl_field(3, Goal_6, 1) = ((MR_Box) (Locals_14));
      MR_hl_field(3, Goal_6, 2) = ((MR_Box) (NonLocals_15));
    }
  }
  else
    mercury__require__unexpected_2_p_0((MR_String) "function \140transform_hlds.term_constr_data.combine_primitive_goals\'/2", (MR_String) "non-primitive goals");
  return Goal_6;
}

MR_Word MR_CALL 
transform_hlds__term_constr_data__combine_recursion_types_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_Word HeadVar__3_3;

  switch (HeadVar__1_1) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 3:
      HeadVar__3_3 = ((&transform_hlds__term_constr_data_vector_common_4[0 + HeadVar__2_2]))->transform_hlds__term_constr_data__vector_common_type_4_0__vct_4_f_0;
      break;
    case (MR_Integer) 1:
      HeadVar__3_3 = ((&transform_hlds__term_constr_data_vector_common_4[4 + HeadVar__2_2]))->transform_hlds__term_constr_data__vector_common_type_4_0__vct_4_f_0;
      break;
    case (MR_Integer) 2:
      HeadVar__3_3 = ((&transform_hlds__term_constr_data_vector_common_4[8 + HeadVar__2_2]))->transform_hlds__term_constr_data__vector_common_type_4_0__vct_4_f_0;
      break;
    case (MR_Integer) 0:
      HeadVar__3_3 = ((&transform_hlds__term_constr_data_vector_common_4[12 + HeadVar__2_2]))->transform_hlds__term_constr_data__vector_common_type_4_0__vct_4_f_0;
      break;
  }
  return HeadVar__3_3;
}

MR_bool MR_CALL 
transform_hlds__term_constr_data__analysis_depends_on_ho_1_p_0(
  MR_Word Proc_2)
{
  MR_bool succeeded;
  MR_Word Var_3 = ((MR_Word) ((MR_hl_field(0, Proc_2, (MR_Integer) 10))));

  succeeded = mercury__list__is_not_empty_1_p_0((MR_Word) (&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_ho_call_0), Var_3);
  return succeeded;
}

MR_Word MR_CALL 
transform_hlds__term_constr_data__size_varset_from_abstract_scc_1_f_0(
  MR_Word SCC_3)
{
  MR_bool succeeded;
  MR_Word SizeVarSet_4;
  MR_Word Proc_5;
  MR_Word Var_6;
  MR_Box conv0_Proc_5;

  succeeded = mercury__set__remove_least_3_p_0((MR_Word) (&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_proc_0), &conv0_Proc_5, SCC_3, &Var_6);
  if (succeeded)
  {
    Proc_5 = ((MR_Word) (conv0_Proc_5));
    succeeded = MR_TRUE;
  }
  if (succeeded)
    SizeVarSet_4 = ((MR_Word) ((MR_hl_field(0, Proc_5, (MR_Integer) 6))));
  else
    mercury__require__unexpected_2_p_0((MR_String) "function \140transform_hlds.term_constr_data.size_varset_from_abstract_scc\'/1", (MR_String) "empty SCC");
  return SizeVarSet_4;
}

MR_bool MR_CALL 
transform_hlds__term_constr_data__proc_is_recursive_1_p_0(
  MR_Word Proc_2)
{
  MR_bool succeeded;
  MR_Word Var_3 = ((MR_Unsigned) ((MR_hl_field(0, Proc_2, (MR_Integer) 8))) & (MR_Integer) 3);

  succeeded = (Var_3 != (MR_Integer) 0);
  return succeeded;
}

MR_bool MR_CALL 
transform_hlds__term_constr_data__scc_contains_recursion_1_p_0(
  MR_Word SCC_2)
{
  MR_bool succeeded;
  MR_Word Proc_3;
  MR_Word Var_4;
  MR_Box conv0_Proc_3;

  succeeded = mercury__set__remove_least_3_p_0((MR_Word) (&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_proc_0), &conv0_Proc_3, SCC_2, &Var_4);
  if (succeeded)
  {
    Proc_3 = ((MR_Word) (conv0_Proc_3));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word Var_5 = ((MR_Unsigned) ((MR_hl_field(0, Proc_3, (MR_Integer) 8))) & (MR_Integer) 3);

    succeeded = (Var_5 != (MR_Integer) 0);
  }
  else
  {
    mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.term_constr_data.scc_contains_recursion\'/1", (MR_String) "empty SCC");
    succeeded = MR_TRUE;
  }
  return succeeded;
}

MR_Word MR_CALL 
transform_hlds__term_constr_data__update_local_and_nonlocal_vars_3_f_0(
  MR_Word Goal0_5,
  MR_Word Locals0_6,
  MR_Word NonLocals0_7)
{
  MR_Word Goal_8;

  switch (MR_tag((MR_Word) Goal0_5)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Goals_9 = ((MR_Word) ((MR_hl_field(0, Goal0_5, (MR_Integer) 0))));
        MR_Integer Size_10 = ((MR_Integer) ((MR_hl_field(0, Goal0_5, (MR_Integer) 1))));
        MR_Word Locals1_11 = ((MR_Word) ((MR_hl_field(0, Goal0_5, (MR_Integer) 2))));
        MR_Word NonLocals1_12 = ((MR_Word) ((MR_hl_field(0, Goal0_5, (MR_Integer) 3))));
        MR_Word Locals_13;
        MR_Word NonLocals_14;

        Locals_13 = mercury__list__f_43_43_2_f_0((MR_Word) (&transform_hlds__term_constr_data_scalar_common_1[0]), Locals0_6, Locals1_11);
        NonLocals_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&transform_hlds__term_constr_data_scalar_common_1[0]), NonLocals0_7, NonLocals1_12);
        {
          Goal_8 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Goal_8, 0) = ((MR_Box) (Goals_9));
          MR_hl_field(0, Goal_8, 1) = ((MR_Box) (Size_10));
          MR_hl_field(0, Goal_8, 2) = ((MR_Box) (Locals_13));
          MR_hl_field(0, Goal_8, 3) = ((MR_Box) (NonLocals_14));
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Goals_20 = ((MR_Word) ((MR_hl_field(1, Goal0_5, (MR_Integer) 0))));
        MR_Word Locals1_21 = ((MR_Word) ((MR_hl_field(1, Goal0_5, (MR_Integer) 1))));
        MR_Word NonLocals1_22 = ((MR_Word) ((MR_hl_field(1, Goal0_5, (MR_Integer) 2))));
        MR_Word Locals_23;
        MR_Word NonLocals_24;

        Locals_23 = mercury__list__f_43_43_2_f_0((MR_Word) (&transform_hlds__term_constr_data_scalar_common_1[0]), Locals0_6, Locals1_21);
        NonLocals_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&transform_hlds__term_constr_data_scalar_common_1[0]), NonLocals0_7, NonLocals1_22);
        {
          Goal_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Goal_8, 0) = ((MR_Box) (Goals_20));
          MR_hl_field(1, Goal_8, 1) = ((MR_Box) (Locals_23));
          MR_hl_field(1, Goal_8, 2) = ((MR_Box) (NonLocals_24));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word PPId_15 = ((MR_Word) ((MR_hl_field(2, Goal0_5, (MR_Integer) 0))));
        MR_Word Context_16 = ((MR_Word) ((MR_hl_field(2, Goal0_5, (MR_Integer) 1))));
        MR_Word CallVars_17 = ((MR_Word) ((MR_hl_field(2, Goal0_5, (MR_Integer) 2))));
        MR_Word Zeros_18 = ((MR_Word) ((MR_hl_field(2, Goal0_5, (MR_Integer) 3))));
        MR_Word Polyhedron_19 = ((MR_Word) ((MR_hl_field(2, Goal0_5, (MR_Integer) 6))));
        MR_Word Locals1_25 = ((MR_Word) ((MR_hl_field(2, Goal0_5, (MR_Integer) 4))));
        MR_Word NonLocals1_26 = ((MR_Word) ((MR_hl_field(2, Goal0_5, (MR_Integer) 5))));
        MR_Word Locals_27;
        MR_Word NonLocals_28;

        Locals_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&transform_hlds__term_constr_data_scalar_common_1[0]), Locals0_6, Locals1_25);
        NonLocals_28 = mercury__list__f_43_43_2_f_0((MR_Word) (&transform_hlds__term_constr_data_scalar_common_1[0]), NonLocals0_7, NonLocals1_26);
        {
          Goal_8 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, Goal_8, 0) = ((MR_Box) (PPId_15));
          MR_hl_field(2, Goal_8, 1) = ((MR_Box) (Context_16));
          MR_hl_field(2, Goal_8, 2) = ((MR_Box) (CallVars_17));
          MR_hl_field(2, Goal_8, 3) = ((MR_Box) (Zeros_18));
          MR_hl_field(2, Goal_8, 4) = ((MR_Box) (Locals_27));
          MR_hl_field(2, Goal_8, 5) = ((MR_Box) (NonLocals_28));
          MR_hl_field(2, Goal_8, 6) = ((MR_Box) (Polyhedron_19));
        }
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Word Locals1_29 = ((MR_Word) ((MR_hl_field(3, Goal0_5, (MR_Integer) 1))));
        MR_Word NonLocals1_30 = ((MR_Word) ((MR_hl_field(3, Goal0_5, (MR_Integer) 2))));
        MR_Word Locals_31;
        MR_Word NonLocals_32;
        MR_Word Polyhedron_33 = ((MR_Word) ((MR_hl_field(3, Goal0_5, (MR_Integer) 0))));

        Locals_31 = mercury__list__f_43_43_2_f_0((MR_Word) (&transform_hlds__term_constr_data_scalar_common_1[0]), Locals0_6, Locals1_29);
        NonLocals_32 = mercury__list__f_43_43_2_f_0((MR_Word) (&transform_hlds__term_constr_data_scalar_common_1[0]), NonLocals0_7, NonLocals1_30);
        {
          Goal_8 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Goal_8, 0) = ((MR_Box) (Polyhedron_33));
          MR_hl_field(3, Goal_8, 1) = ((MR_Box) (Locals_31));
          MR_hl_field(3, Goal_8, 2) = ((MR_Box) (NonLocals_32));
        }
      }
      break;
  }
  return Goal_8;
}

static MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____abstract_goal_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__term_constr_data____Unify____abstract_goal_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__term_constr_data____Compare____abstract_goal_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__term_constr_data____Compare____abstract_goal_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____abstract_ho_call_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__term_constr_data____Unify____abstract_ho_call_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__term_constr_data____Compare____abstract_ho_call_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__term_constr_data____Compare____abstract_ho_call_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____abstract_ppid_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__term_constr_data____Unify____abstract_ppid_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__term_constr_data____Compare____abstract_ppid_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__term_constr_data____Compare____abstract_ppid_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____abstract_proc_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__term_constr_data____Unify____abstract_proc_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__term_constr_data____Compare____abstract_proc_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__term_constr_data____Compare____abstract_proc_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____abstract_scc_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__term_constr_data____Unify____abstract_scc_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__term_constr_data____Compare____abstract_scc_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__term_constr_data____Compare____abstract_scc_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____arg_size_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__term_constr_data____Unify____arg_size_result_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__term_constr_data____Compare____arg_size_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__term_constr_data____Compare____arg_size_result_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____call_vars_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__term_constr_data____Unify____call_vars_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__term_constr_data____Compare____call_vars_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__term_constr_data____Compare____call_vars_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____head_vars_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__term_constr_data____Unify____head_vars_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__term_constr_data____Compare____head_vars_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__term_constr_data____Compare____head_vars_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____local_vars_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__term_constr_data____Unify____local_vars_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__term_constr_data____Compare____local_vars_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__term_constr_data____Compare____local_vars_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____nonlocal_vars_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__term_constr_data____Unify____nonlocal_vars_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__term_constr_data____Compare____nonlocal_vars_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__term_constr_data____Compare____nonlocal_vars_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____recursion_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__term_constr_data____Unify____recursion_type_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__term_constr_data____Compare____recursion_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__term_constr_data____Compare____recursion_type_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____size_term_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__term_constr_data____Unify____size_term_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__term_constr_data____Compare____size_term_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__term_constr_data____Compare____size_term_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____size_terms_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__term_constr_data____Unify____size_terms_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__term_constr_data____Compare____size_terms_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__term_constr_data____Compare____size_terms_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____size_var_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__term_constr_data____Unify____size_var_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__term_constr_data____Compare____size_var_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__term_constr_data____Compare____size_var_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____size_var_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__term_constr_data____Unify____size_var_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__term_constr_data____Compare____size_var_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__term_constr_data____Compare____size_var_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____size_vars_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__term_constr_data____Unify____size_vars_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__term_constr_data____Compare____size_vars_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__term_constr_data____Compare____size_vars_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____size_varset_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__term_constr_data____Unify____size_varset_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__term_constr_data____Compare____size_varset_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__term_constr_data____Compare____size_varset_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____widening_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__term_constr_data____Unify____widening_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__term_constr_data____Compare____widening_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__term_constr_data____Compare____widening_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____zero_vars_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__term_constr_data____Unify____zero_vars_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__term_constr_data____Compare____zero_vars_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__term_constr_data____Compare____zero_vars_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__transform_hlds__term_constr_data__init(void)
{
}

void mercury__transform_hlds__term_constr_data__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_goal_0);
	MR_register_type_ctor_info(&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_ho_call_0);
	MR_register_type_ctor_info(&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0);
	MR_register_type_ctor_info(&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_proc_0);
	MR_register_type_ctor_info(&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_scc_0);
	MR_register_type_ctor_info(&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_arg_size_result_0);
	MR_register_type_ctor_info(&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_call_vars_0);
	MR_register_type_ctor_info(&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_head_vars_0);
	MR_register_type_ctor_info(&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_local_vars_0);
	MR_register_type_ctor_info(&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_nonlocal_vars_0);
	MR_register_type_ctor_info(&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_recursion_type_0);
	MR_register_type_ctor_info(&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_size_term_0);
	MR_register_type_ctor_info(&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_size_terms_0);
	MR_register_type_ctor_info(&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_size_var_0);
	MR_register_type_ctor_info(&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_size_var_map_0);
	MR_register_type_ctor_info(&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_size_vars_0);
	MR_register_type_ctor_info(&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_size_varset_0);
	MR_register_type_ctor_info(&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_widening_0);
	MR_register_type_ctor_info(&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_zero_vars_0);
}

void mercury__transform_hlds__term_constr_data__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__transform_hlds__term_constr_data__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module transform_hlds.term_constr_data.
