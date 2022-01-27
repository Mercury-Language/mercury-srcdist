/*
** Automatically generated from `term_constr_data.m'
** by the Mercury compiler,
** version rotd-2016-10-04
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


/* :- module transform_hlds.term_constr_data. */
/* :- implementation. */

/*
INIT mercury__transform_hlds__term_constr_data__init
ENDINIT
*/

#include "transform_hlds.term_constr_data.mih"


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
#include "check_hlds.unify_proc.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_out.mih"
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
#include "std_util.mih"
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
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.hlds_out.hlds_out_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_data__varset__pti_varset_1__plain_term__type_ctor_info_generic_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_data__term__pti_var_1__plain_term__type_ctor_info_generic_0;

static const MR_VA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_data____vpti_pred_1__plain_transform_hlds__term_constr_data__type_ctor_info_abstract_goal_0;

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

static const MR_DuFunctorDesc transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_functor_desc_abstract_proc_0_0;

static const MR_DuFunctorDescPtr transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_stag_ordered_abstract_proc_0_0[1];

static const MR_DuPtagLayout transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_ptag_ordered_abstract_proc_0[1];

static const MR_DuFunctorDescPtr transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_name_ordered_abstract_proc_0[1];

static const MR_Integer transform_hlds__term_constr_data__transform_hlds__term_constr_data__functor_number_map_abstract_proc_0[1];

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_data__list__ti_list_1transform_hlds__term_constr_data__type_ctor_info_abstract_proc_0;

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

static const MR_EnumFunctorDescPtr transform_hlds__term_constr_data__transform_hlds__term_constr_data__enum_value_ordered_recursion_type_0[4];

static const MR_EnumFunctorDescPtr transform_hlds__term_constr_data__transform_hlds__term_constr_data__enum_name_ordered_recursion_type_0[4];

static const MR_Integer transform_hlds__term_constr_data__transform_hlds__term_constr_data__functor_number_map_recursion_type_0[4];

static const MR_FA_TypeInfo_Struct2 transform_hlds__term_constr_data__pair__ti_pair_2term__ti_var_1term__type_ctor_info_generic_0libs__rat__type_ctor_info_rat_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_data__list__ti_list_1pair__ti_pair_2term__ti_var_1term__type_ctor_info_generic_0libs__rat__type_ctor_info_rat_0;

static const MR_Integer transform_hlds__term_constr_data__transform_hlds__term_constr_data__functor_number_map_widening_0[1];

static const MR_NotagFunctorDesc transform_hlds__term_constr_data__transform_hlds__term_constr_data__notag_functor_desc_widening_0;

static MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____abstract_goal_0_0_10001(
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2);

static void MR_CALL 
transform_hlds__term_constr_data____Compare____abstract_goal_0_0_10001(
  MR_Box * transform_hlds__term_constr_data__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____abstract_goals_0_0_10001(
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2);

static void MR_CALL 
transform_hlds__term_constr_data____Compare____abstract_goals_0_0_10001(
  MR_Box * transform_hlds__term_constr_data__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____abstract_ho_call_0_0_10001(
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2);

static void MR_CALL 
transform_hlds__term_constr_data____Compare____abstract_ho_call_0_0_10001(
  MR_Box * transform_hlds__term_constr_data__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____abstract_ppid_0_0_10001(
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2);

static void MR_CALL 
transform_hlds__term_constr_data____Compare____abstract_ppid_0_0_10001(
  MR_Box * transform_hlds__term_constr_data__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____abstract_proc_0_0_10001(
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2);

static void MR_CALL 
transform_hlds__term_constr_data____Compare____abstract_proc_0_0_10001(
  MR_Box * transform_hlds__term_constr_data__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____abstract_scc_0_0_10001(
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2);

static void MR_CALL 
transform_hlds__term_constr_data____Compare____abstract_scc_0_0_10001(
  MR_Box * transform_hlds__term_constr_data__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____arg_size_result_0_0_10001(
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2);

static void MR_CALL 
transform_hlds__term_constr_data____Compare____arg_size_result_0_0_10001(
  MR_Box * transform_hlds__term_constr_data__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____call_vars_0_0_10001(
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2);

static void MR_CALL 
transform_hlds__term_constr_data____Compare____call_vars_0_0_10001(
  MR_Box * transform_hlds__term_constr_data__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____head_vars_0_0_10001(
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2);

static void MR_CALL 
transform_hlds__term_constr_data____Compare____head_vars_0_0_10001(
  MR_Box * transform_hlds__term_constr_data__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____local_vars_0_0_10001(
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2);

static void MR_CALL 
transform_hlds__term_constr_data____Compare____local_vars_0_0_10001(
  MR_Box * transform_hlds__term_constr_data__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____nonlocal_vars_0_0_10001(
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2);

static void MR_CALL 
transform_hlds__term_constr_data____Compare____nonlocal_vars_0_0_10001(
  MR_Box * transform_hlds__term_constr_data__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____recursion_type_0_0_10001(
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2);

static void MR_CALL 
transform_hlds__term_constr_data____Compare____recursion_type_0_0_10001(
  MR_Box * transform_hlds__term_constr_data__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____size_term_0_0_10001(
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2);

static void MR_CALL 
transform_hlds__term_constr_data____Compare____size_term_0_0_10001(
  MR_Box * transform_hlds__term_constr_data__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____size_terms_0_0_10001(
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2);

static void MR_CALL 
transform_hlds__term_constr_data____Compare____size_terms_0_0_10001(
  MR_Box * transform_hlds__term_constr_data__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____size_var_0_0_10001(
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2);

static void MR_CALL 
transform_hlds__term_constr_data____Compare____size_var_0_0_10001(
  MR_Box * transform_hlds__term_constr_data__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____size_var_map_0_0_10001(
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2);

static void MR_CALL 
transform_hlds__term_constr_data____Compare____size_var_map_0_0_10001(
  MR_Box * transform_hlds__term_constr_data__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____size_vars_0_0_10001(
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2);

static void MR_CALL 
transform_hlds__term_constr_data____Compare____size_vars_0_0_10001(
  MR_Box * transform_hlds__term_constr_data__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____size_varset_0_0_10001(
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2);

static void MR_CALL 
transform_hlds__term_constr_data____Compare____size_varset_0_0_10001(
  MR_Box * transform_hlds__term_constr_data__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____widening_0_0_10001(
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2);

static void MR_CALL 
transform_hlds__term_constr_data____Compare____widening_0_0_10001(
  MR_Box * transform_hlds__term_constr_data__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____zero_vars_0_0_10001(
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2);

static void MR_CALL 
transform_hlds__term_constr_data____Compare____zero_vars_0_0_10001(
  MR_Box * transform_hlds__term_constr_data__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__term_constr_data__IntroducedFrom__pred__simplify_abstract_rep__477__1_2_p_0(
  MR_Word transform_hlds__term_constr_data__HeadVar__1_37,
  MR_Word transform_hlds__term_constr_data__HeadVar__2_56);

static MR_bool MR_CALL 
transform_hlds__term_constr_data__IntroducedFrom__pred__simplify_abstract_rep__475__1_2_p_0(
  MR_Word transform_hlds__term_constr_data__HeadVar__1_33,
  MR_Word transform_hlds__term_constr_data__HeadVar__2_53);

static void MR_CALL 
transform_hlds__term_constr_data__indent_line_3_p_0(
  MR_Integer transform_hlds__term_constr_data__N_4);

static void MR_CALL 
transform_hlds__term_constr_data__dump_var_name_4_p_0(
  MR_Word transform_hlds__term_constr_data__VarSet_5,
  MR_Word transform_hlds__term_constr_data__Var_6);

static void MR_CALL 
transform_hlds__term_constr_data__dump_abstract_disjuncts_6_p_0(
  MR_Word transform_hlds__term_constr_data__ModuleInfo_1,
  MR_Word transform_hlds__term_constr_data__VarSet_2,
  MR_Integer transform_hlds__term_constr_data__Indent_3,
  MR_Word transform_hlds__term_constr_data__HeadVar__4_4);

static void MR_CALL 
transform_hlds__term_constr_data__dump_size_var_4_p_0(
  MR_Word transform_hlds__term_constr_data__SizeVarSet_5,
  MR_Word transform_hlds__term_constr_data__Var_6);

static void MR_CALL 
transform_hlds__term_constr_data__simplify_conjuncts_2_p_0(
  MR_Word transform_hlds__term_constr_data__Goals0_3,
  MR_Word * transform_hlds__term_constr_data__Goals_4);

static MR_bool MR_CALL 
transform_hlds__term_constr_data__is_empty_conj_1_p_0(
  MR_Word transform_hlds__term_constr_data__HeadVar__1_1);

static MR_bool MR_CALL 
transform_hlds__term_constr_data__is_empty_primitive_1_p_0(
  MR_Word transform_hlds__term_constr_data__HeadVar__1_1);

static MR_Word MR_CALL 
transform_hlds__term_constr_data__combine_primitives_2_f_0(
  MR_Word transform_hlds__term_constr_data__GoalA_4,
  MR_Word transform_hlds__term_constr_data__GoalB_5);

static MR_bool MR_CALL 
transform_hlds__term_constr_data__is_primitive_1_p_0(
  MR_Word transform_hlds__term_constr_data__HeadVar__1_1);

static MR_Box MR_CALL 
transform_hlds__term_constr_data__flatten_conjuncts_2_3_p_0_2(
  MR_Box transform_hlds__term_constr_data__closure_arg,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2);

static MR_bool MR_CALL 
transform_hlds__term_constr_data__flatten_conjuncts_2_3_p_0_1(
  MR_Box transform_hlds__term_constr_data__closure_arg,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1);

static void MR_CALL 
transform_hlds__term_constr_data__flatten_conjuncts_2_3_p_0(
  MR_Word transform_hlds__term_constr_data__HeadVar__1_1,
  MR_Word transform_hlds__term_constr_data__STATE_VARIABLE_RevGoals_0_2,
  MR_Word * transform_hlds__term_constr_data__STATE_VARIABLE_RevGoals_3);

static void MR_CALL 
transform_hlds__term_constr_data__simplify_abstract_rep_2_p_0_6(
  MR_Box transform_hlds__term_constr_data__closure_arg,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1,
  MR_Box * transform_hlds__term_constr_data__wrapper_arg_2);

static MR_bool MR_CALL 
transform_hlds__term_constr_data__simplify_abstract_rep_2_p_0_5(
  MR_Box transform_hlds__term_constr_data__closure_arg,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1);

static MR_bool MR_CALL 
transform_hlds__term_constr_data__simplify_abstract_rep_2_p_0_4(
  MR_Box transform_hlds__term_constr_data__closure_arg,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1);

static MR_bool MR_CALL 
transform_hlds__term_constr_data__simplify_abstract_rep_2_p_0_3(
  MR_Box transform_hlds__term_constr_data__closure_arg,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1);

static MR_bool MR_CALL 
transform_hlds__term_constr_data__simplify_abstract_rep_2_p_0_2(
  MR_Box transform_hlds__term_constr_data__closure_arg,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1);

static void MR_CALL 
transform_hlds__term_constr_data__simplify_abstract_rep_2_p_0_1(
  MR_Box transform_hlds__term_constr_data__closure_arg,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1,
  MR_Box * transform_hlds__term_constr_data__wrapper_arg_2);

static void MR_CALL 
transform_hlds__term_constr_data__simplify_abstract_rep_2_p_0(
  MR_Word transform_hlds__term_constr_data__Goal0_3,
  MR_Word * transform_hlds__term_constr_data__Goal_4);

static void MR_CALL 
transform_hlds__term_constr_data__dump_abstract_goal_6_p_0_4(
  MR_Box transform_hlds__term_constr_data__closure_arg,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2,
  MR_Box * transform_hlds__term_constr_data__wrapper_arg_3);

static void MR_CALL 
transform_hlds__term_constr_data__dump_abstract_goal_6_p_0_3(
  MR_Box transform_hlds__term_constr_data__closure_arg,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2,
  MR_Box * transform_hlds__term_constr_data__wrapper_arg_3);

static void MR_CALL 
transform_hlds__term_constr_data__dump_abstract_goal_6_p_0_2(
  MR_Box transform_hlds__term_constr_data__closure_arg,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2,
  MR_Box * transform_hlds__term_constr_data__wrapper_arg_3);

static void MR_CALL 
transform_hlds__term_constr_data__dump_abstract_goal_6_p_0_1(
  MR_Box transform_hlds__term_constr_data__closure_arg,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2,
  MR_Box * transform_hlds__term_constr_data__wrapper_arg_3);

static void MR_CALL 
transform_hlds__term_constr_data__dump_abstract_proc_5_p_0_1(
  MR_Box transform_hlds__term_constr_data__closure_arg,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2,
  MR_Box * transform_hlds__term_constr_data__wrapper_arg_3);

static void MR_CALL 
transform_hlds__term_constr_data__dump_abstract_scc_5_p_0_1(
  MR_Box transform_hlds__term_constr_data__closure_arg,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2,
  MR_Box * transform_hlds__term_constr_data__wrapper_arg_3);

static void MR_CALL 
transform_hlds__term_constr_data__dump_abstract_scc_4_p_0_1(
  MR_Box transform_hlds__term_constr_data__closure_arg,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2,
  MR_Box * transform_hlds__term_constr_data__wrapper_arg_3);


static /* final */ const MR_Box transform_hlds__term_constr_data_scalar_common_1[11][2];

static /* final */ const MR_Box transform_hlds__term_constr_data_scalar_common_2[8][3];

static /* final */ const MR_Box transform_hlds__term_constr_data_scalar_common_4[1][8];

static /* final */ const MR_Box transform_hlds__term_constr_data_scalar_common_5[1][7];

static /* final */ const MR_Box transform_hlds__term_constr_data_scalar_common_6[1][9];

static /* final */ const MR_Box transform_hlds__term_constr_data_scalar_common_7[1][1];

static /* final */ const MR_Box transform_hlds__term_constr_data_scalar_common_8[2][5];

static /* final */ const MR_Box transform_hlds__term_constr_data_scalar_common_9[3][4];

static /* final */ const MR_Box transform_hlds__term_constr_data_scalar_common_10[1][6];


/* sealed */ struct transform_hlds__term_constr_data__vector_common_type_3_0_s {
  const MR_Word transform_hlds__term_constr_data__vector_common_type_3_0__vct_3_f_0;
};

static /* final */ const struct transform_hlds__term_constr_data__vector_common_type_3_0_s transform_hlds__term_constr_data_vector_common_3[16];



static /* final */ const MR_Box transform_hlds__term_constr_data_scalar_common_1[11][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__term_constr_data_scalar_common_1[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&transform_hlds__term_constr_data_scalar_common_1[0]))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_goal_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_ho_call_0))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_proc_0))
  },
  /* row 9 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__type_ctor_info_term2_error_0))
  },
  /* row 10 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__term_constr_data_scalar_common_2[1]))
  },
};

static /* final */ const MR_Box transform_hlds__term_constr_data_scalar_common_2[8][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__term_constr_data_scalar_common_1[5])),
    ((MR_Box) (&transform_hlds__term_constr_data_scalar_common_1[0]))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&transform_hlds__term_constr_data_scalar_common_1[0])),
    ((MR_Box) (&libs__rat__libs__rat__type_ctor_info_rat_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&transform_hlds__term_constr_data_scalar_common_8[0])),
    ((MR_Box) (transform_hlds__term_constr_data__simplify_abstract_rep_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&transform_hlds__term_constr_data_scalar_common_9[0])),
    ((MR_Box) (transform_hlds__term_constr_data__simplify_abstract_rep_2_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&transform_hlds__term_constr_data_scalar_common_9[0])),
    ((MR_Box) (transform_hlds__term_constr_data__simplify_abstract_rep_2_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&transform_hlds__term_constr_data_scalar_common_8[0])),
    ((MR_Box) (transform_hlds__term_constr_data__simplify_abstract_rep_2_p_0_6)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&transform_hlds__term_constr_data_scalar_common_9[0])),
    ((MR_Box) (transform_hlds__term_constr_data__flatten_conjuncts_2_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&transform_hlds__term_constr_data_scalar_common_10[0])),
    ((MR_Box) (transform_hlds__term_constr_data__flatten_conjuncts_2_3_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__term_constr_data_scalar_common_4[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_proc_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box transform_hlds__term_constr_data_scalar_common_5[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&transform_hlds__term_constr_data__varset__pti_varset_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&transform_hlds__term_constr_data__term__pti_var_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box transform_hlds__term_constr_data_scalar_common_6[1][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__term_constr_data__varset__pti_varset_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_goal_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box transform_hlds__term_constr_data_scalar_common_7[1][1] = {
  /* row 0 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
};

static /* final */ const MR_Box transform_hlds__term_constr_data_scalar_common_8[2][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_goal_0)),
    ((MR_Box) (&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_goal_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__term_constr_data____vpti_pred_1__plain_transform_hlds__term_constr_data__type_ctor_info_abstract_goal_0)),
    ((MR_Box) (&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_goal_0))
  },
};

static /* final */ const MR_Box transform_hlds__term_constr_data_scalar_common_9[3][4] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_goal_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&transform_hlds__term_constr_data_scalar_common_8[1])),
    ((MR_Box) (transform_hlds__term_constr_data__simplify_abstract_rep_2_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&transform_hlds__term_constr_data_scalar_common_2[3]))
  },
  /* row 2 */
  {
    ((MR_Box) (&transform_hlds__term_constr_data_scalar_common_8[1])),
    ((MR_Box) (transform_hlds__term_constr_data__simplify_abstract_rep_2_p_0_5)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&transform_hlds__term_constr_data_scalar_common_2[4]))
  },
};

static /* final */ const MR_Box transform_hlds__term_constr_data_scalar_common_10[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_goal_0)),
    ((MR_Box) (&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_goal_0)),
    ((MR_Box) (&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_goal_0))
  },
};


static /* final */ const struct transform_hlds__term_constr_data__vector_common_type_3_0_s transform_hlds__term_constr_data_vector_common_3[16] = {
  /* row 0 */   {     (MR_Integer) 3 },
  /* row 1 */   {     (MR_Integer) 3 },
  /* row 2 */   {     (MR_Integer) 3 },
  /* row 3 */   {     (MR_Integer) 3 },
  /* row 4 */   {     (MR_Integer) 1 },
  /* row 5 */   {     (MR_Integer) 1 },
  /* row 6 */   {     (MR_Integer) 3 },
  /* row 7 */   {     (MR_Integer) 3 },
  /* row 8 */   {     (MR_Integer) 2 },
  /* row 9 */   {     (MR_Integer) 3 },
  /* row 10 */   {     (MR_Integer) 2 },
  /* row 11 */   {     (MR_Integer) 3 },
  /* row 12 */   {     (MR_Integer) 0 },
  /* row 13 */   {     (MR_Integer) 1 },
  /* row 14 */   {     (MR_Integer) 2 },
  /* row 15 */   {     (MR_Integer) 3 },
};


#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_data__varset__pti_varset_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_data__term__pti_var_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

static const MR_VA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_data____vpti_pred_1__plain_transform_hlds__term_constr_data__type_ctor_info_abstract_goal_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_goal_0
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_data__list__ti_list_1transform_hlds__term_constr_data__type_ctor_info_abstract_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_goal_0
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_data__term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_data__list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__term_constr_data__term__ti_var_1term__type_ctor_info_generic_0
  }
};

static const MR_PseudoTypeInfo transform_hlds__term_constr_data__transform_hlds__term_constr_data__field_types_abstract_goal_0_0[4] = {
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_data__list__ti_list_1transform_hlds__term_constr_data__type_ctor_info_abstract_goal_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_data__list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_data__list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0
};

static const MR_ConstString transform_hlds__term_constr_data__transform_hlds__term_constr_data__field_names_abstract_goal_0_0[4] = {
  (MR_String) "disj_goals",
  (MR_String) "disj_size",
  (MR_String) "disj_locals",
  (MR_String) "disj_nonlocals"
};

static const MR_DuFunctorDesc transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_functor_desc_abstract_goal_0_0 = {
  (MR_String) "term_disj",
  (MR_Integer) 4,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__term_constr_data__transform_hlds__term_constr_data__field_types_abstract_goal_0_0,
  transform_hlds__term_constr_data__transform_hlds__term_constr_data__field_names_abstract_goal_0_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo transform_hlds__term_constr_data__transform_hlds__term_constr_data__field_types_abstract_goal_0_1[3] = {
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_data__list__ti_list_1transform_hlds__term_constr_data__type_ctor_info_abstract_goal_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_data__list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_data__list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0
};

static const MR_ConstString transform_hlds__term_constr_data__transform_hlds__term_constr_data__field_names_abstract_goal_0_1[3] = {
  (MR_String) "conj_goals",
  (MR_String) "conj_locals",
  (MR_String) "conj_nonlocals"
};

static const MR_DuFunctorDesc transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_functor_desc_abstract_goal_0_1 = {
  (MR_String) "term_conj",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  transform_hlds__term_constr_data__transform_hlds__term_constr_data__field_types_abstract_goal_0_1,
  transform_hlds__term_constr_data__transform_hlds__term_constr_data__field_names_abstract_goal_0_1,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_data__set_ordlist__ti_set_ordlist_1term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &transform_hlds__term_constr_data__term__ti_var_1term__type_ctor_info_generic_0
  }
};

static const MR_PseudoTypeInfo transform_hlds__term_constr_data__transform_hlds__term_constr_data__field_types_abstract_goal_0_2[7] = {
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_data__list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_data__set_ordlist__ti_set_ordlist_1term__ti_var_1term__type_ctor_info_generic_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_data__list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_data__list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0,
  (MR_PseudoTypeInfo) &libs__polyhedron__libs__polyhedron__type_ctor_info_polyhedron_0
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
  (MR_Integer) 7,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  transform_hlds__term_constr_data__transform_hlds__term_constr_data__field_types_abstract_goal_0_2,
  transform_hlds__term_constr_data__transform_hlds__term_constr_data__field_names_abstract_goal_0_2,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo transform_hlds__term_constr_data__transform_hlds__term_constr_data__field_types_abstract_goal_0_3[3] = {
  (MR_PseudoTypeInfo) &libs__polyhedron__libs__polyhedron__type_ctor_info_polyhedron_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_data__list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_data__list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0
};

static const MR_ConstString transform_hlds__term_constr_data__transform_hlds__term_constr_data__field_names_abstract_goal_0_3[3] = {
  (MR_String) "prim_constrs",
  (MR_String) "prim_locals",
  (MR_String) "prim_nonlocals"
};

static const MR_DuFunctorDesc transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_functor_desc_abstract_goal_0_3 = {
  (MR_String) "term_primitive",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 3,
  (MR_Integer) -1,
  (MR_Integer) 3,
  transform_hlds__term_constr_data__transform_hlds__term_constr_data__field_types_abstract_goal_0_3,
  transform_hlds__term_constr_data__transform_hlds__term_constr_data__field_names_abstract_goal_0_3,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_stag_ordered_abstract_goal_0_0[1] = {
  &transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_functor_desc_abstract_goal_0_0
};

static const MR_DuFunctorDescPtr transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_stag_ordered_abstract_goal_0_1[1] = {
  &transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_functor_desc_abstract_goal_0_1
};

static const MR_DuFunctorDescPtr transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_stag_ordered_abstract_goal_0_2[1] = {
  &transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_functor_desc_abstract_goal_0_2
};

static const MR_DuFunctorDescPtr transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_stag_ordered_abstract_goal_0_3[1] = {
  &transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_functor_desc_abstract_goal_0_3
};

static const MR_DuPtagLayout transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_ptag_ordered_abstract_goal_0[4] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_stag_ordered_abstract_goal_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_stag_ordered_abstract_goal_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_stag_ordered_abstract_goal_0_2
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_stag_ordered_abstract_goal_0_3
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
  (MR_Integer) 16,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__term_constr_data____Unify____abstract_goal_0_0_10001)),
  ((MR_Box) (transform_hlds__term_constr_data____Compare____abstract_goal_0_0_10001)),
  (MR_String) "transform_hlds.term_constr_data",
  (MR_String) "abstract_goal",
  {     transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_name_ordered_abstract_goal_0 },
  {     transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_ptag_ordered_abstract_goal_0 },
  (MR_Integer) 4,
  (MR_Integer) 4,
  transform_hlds__term_constr_data__transform_hlds__term_constr_data__functor_number_map_abstract_goal_0
};

const MR_TypeCtorInfo_Struct transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_goals_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__term_constr_data____Unify____abstract_goals_0_0_10001)),
  ((MR_Box) (transform_hlds__term_constr_data____Compare____abstract_goals_0_0_10001)),
  (MR_String) "transform_hlds.term_constr_data",
  (MR_String) "abstract_goals",
  {     NULL },
  {     (MR_PseudoTypeInfo) &transform_hlds__term_constr_data__list__ti_list_1transform_hlds__term_constr_data__type_ctor_info_abstract_goal_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_Integer transform_hlds__term_constr_data__transform_hlds__term_constr_data__functor_number_map_abstract_ho_call_0[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc transform_hlds__term_constr_data__transform_hlds__term_constr_data__notag_functor_desc_abstract_ho_call_0 = {
  (MR_String) "ho_call",
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_ho_call_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (transform_hlds__term_constr_data____Unify____abstract_ho_call_0_0_10001)),
  ((MR_Box) (transform_hlds__term_constr_data____Compare____abstract_ho_call_0_0_10001)),
  (MR_String) "transform_hlds.term_constr_data",
  (MR_String) "abstract_ho_call",
  {     &transform_hlds__term_constr_data__transform_hlds__term_constr_data__notag_functor_desc_abstract_ho_call_0 },
  {     &transform_hlds__term_constr_data__transform_hlds__term_constr_data__notag_functor_desc_abstract_ho_call_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__term_constr_data__transform_hlds__term_constr_data__functor_number_map_abstract_ho_call_0
};

static const MR_Integer transform_hlds__term_constr_data__transform_hlds__term_constr_data__functor_number_map_abstract_ppid_0[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc transform_hlds__term_constr_data__transform_hlds__term_constr_data__notag_functor_desc_abstract_ppid_0 = {
  (MR_String) "real",
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (transform_hlds__term_constr_data____Unify____abstract_ppid_0_0_10001)),
  ((MR_Box) (transform_hlds__term_constr_data____Compare____abstract_ppid_0_0_10001)),
  (MR_String) "transform_hlds.term_constr_data",
  (MR_String) "abstract_ppid",
  {     &transform_hlds__term_constr_data__transform_hlds__term_constr_data__notag_functor_desc_abstract_ppid_0 },
  {     &transform_hlds__term_constr_data__transform_hlds__term_constr_data__notag_functor_desc_abstract_ppid_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__term_constr_data__transform_hlds__term_constr_data__functor_number_map_abstract_ppid_0
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_data__list__ti_list_1bool__type_ctor_info_bool_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_data__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__term_constr_data__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__term_constr_data__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &transform_hlds__term_constr_data__term__ti_var_1term__type_ctor_info_generic_0
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_data__varset__ti_varset_1term__type_ctor_info_generic_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_data__list__ti_list_1transform_hlds__term_constr_data__type_ctor_info_abstract_ho_call_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_ho_call_0
  }
};

static const MR_PseudoTypeInfo transform_hlds__term_constr_data__transform_hlds__term_constr_data__field_types_abstract_proc_0_0[12] = {
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_data__list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_data__list__ti_list_1bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_goal_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_data__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1term__type_ctor_info_generic_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_data__varset__ti_varset_1term__type_ctor_info_generic_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_data__set_ordlist__ti_set_ordlist_1term__ti_var_1term__type_ctor_info_generic_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_recursion_type_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_data__list__ti_list_1transform_hlds__term_constr_data__type_ctor_info_abstract_ho_call_0
};

static const MR_ConstString transform_hlds__term_constr_data__transform_hlds__term_constr_data__field_names_abstract_proc_0_0[12] = {
  (MR_String) "ap_ppid",
  (MR_String) "ap_is_entry",
  (MR_String) "ap_context",
  (MR_String) "ap_head_vars",
  (MR_String) "ap_inputs",
  (MR_String) "ap_body",
  (MR_String) "ap_size_var_map",
  (MR_String) "ap_size_varset",
  (MR_String) "ap_zeros",
  (MR_String) "ap_recursion",
  (MR_String) "ap_num_calls",
  (MR_String) "ap_ho_calls"
};

static const MR_DuFunctorDesc transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_functor_desc_abstract_proc_0_0 = {
  (MR_String) "abstract_proc",
  (MR_Integer) 12,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__term_constr_data__transform_hlds__term_constr_data__field_types_abstract_proc_0_0,
  transform_hlds__term_constr_data__transform_hlds__term_constr_data__field_names_abstract_proc_0_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_stag_ordered_abstract_proc_0_0[1] = {
  &transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_functor_desc_abstract_proc_0_0
};

static const MR_DuPtagLayout transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_ptag_ordered_abstract_proc_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_stag_ordered_abstract_proc_0_0
  }
};

static const MR_DuFunctorDescPtr transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_name_ordered_abstract_proc_0[1] = {
  &transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_functor_desc_abstract_proc_0_0
};

static const MR_Integer transform_hlds__term_constr_data__transform_hlds__term_constr_data__functor_number_map_abstract_proc_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_proc_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__term_constr_data____Unify____abstract_proc_0_0_10001)),
  ((MR_Box) (transform_hlds__term_constr_data____Compare____abstract_proc_0_0_10001)),
  (MR_String) "transform_hlds.term_constr_data",
  (MR_String) "abstract_proc",
  {     transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_name_ordered_abstract_proc_0 },
  {     transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_ptag_ordered_abstract_proc_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__term_constr_data__transform_hlds__term_constr_data__functor_number_map_abstract_proc_0
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_data__list__ti_list_1transform_hlds__term_constr_data__type_ctor_info_abstract_proc_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_proc_0
  }
};

const MR_TypeCtorInfo_Struct transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_scc_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__term_constr_data____Unify____abstract_scc_0_0_10001)),
  ((MR_Box) (transform_hlds__term_constr_data____Compare____abstract_scc_0_0_10001)),
  (MR_String) "transform_hlds.term_constr_data",
  (MR_String) "abstract_scc",
  {     NULL },
  {     (MR_PseudoTypeInfo) &transform_hlds__term_constr_data__list__ti_list_1transform_hlds__term_constr_data__type_ctor_info_abstract_proc_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_DuFunctorDesc transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_functor_desc_arg_size_result_0_0 = {
  (MR_String) "arg_size_ok",
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

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_data__list__ti_list_1transform_hlds__term_constr_errors__type_ctor_info_term2_error_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__type_ctor_info_term2_error_0
  }
};

static const MR_PseudoTypeInfo transform_hlds__term_constr_data__transform_hlds__term_constr_data__field_types_arg_size_result_0_1[1] = {
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_data__list__ti_list_1transform_hlds__term_constr_errors__type_ctor_info_term2_error_0
};

static const MR_DuFunctorDesc transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_functor_desc_arg_size_result_0_1 = {
  (MR_String) "arg_size_error",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  transform_hlds__term_constr_data__transform_hlds__term_constr_data__field_types_arg_size_result_0_1,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_stag_ordered_arg_size_result_0_0[1] = {
  &transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_functor_desc_arg_size_result_0_0
};

static const MR_DuFunctorDescPtr transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_stag_ordered_arg_size_result_0_1[1] = {
  &transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_functor_desc_arg_size_result_0_1
};

static const MR_DuPtagLayout transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_ptag_ordered_arg_size_result_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_stag_ordered_arg_size_result_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_stag_ordered_arg_size_result_0_1
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
  (MR_Integer) 16,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__term_constr_data____Unify____arg_size_result_0_0_10001)),
  ((MR_Box) (transform_hlds__term_constr_data____Compare____arg_size_result_0_0_10001)),
  (MR_String) "transform_hlds.term_constr_data",
  (MR_String) "arg_size_result",
  {     transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_name_ordered_arg_size_result_0 },
  {     transform_hlds__term_constr_data__transform_hlds__term_constr_data__du_ptag_ordered_arg_size_result_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  transform_hlds__term_constr_data__transform_hlds__term_constr_data__functor_number_map_arg_size_result_0
};

const MR_TypeCtorInfo_Struct transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_call_vars_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__term_constr_data____Unify____call_vars_0_0_10001)),
  ((MR_Box) (transform_hlds__term_constr_data____Compare____call_vars_0_0_10001)),
  (MR_String) "transform_hlds.term_constr_data",
  (MR_String) "call_vars",
  {     NULL },
  {     (MR_PseudoTypeInfo) &transform_hlds__term_constr_data__list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

const MR_TypeCtorInfo_Struct transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_head_vars_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__term_constr_data____Unify____head_vars_0_0_10001)),
  ((MR_Box) (transform_hlds__term_constr_data____Compare____head_vars_0_0_10001)),
  (MR_String) "transform_hlds.term_constr_data",
  (MR_String) "head_vars",
  {     NULL },
  {     (MR_PseudoTypeInfo) &transform_hlds__term_constr_data__list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

const MR_TypeCtorInfo_Struct transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_local_vars_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__term_constr_data____Unify____local_vars_0_0_10001)),
  ((MR_Box) (transform_hlds__term_constr_data____Compare____local_vars_0_0_10001)),
  (MR_String) "transform_hlds.term_constr_data",
  (MR_String) "local_vars",
  {     NULL },
  {     (MR_PseudoTypeInfo) &transform_hlds__term_constr_data__list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

const MR_TypeCtorInfo_Struct transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_nonlocal_vars_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__term_constr_data____Unify____nonlocal_vars_0_0_10001)),
  ((MR_Box) (transform_hlds__term_constr_data____Compare____nonlocal_vars_0_0_10001)),
  (MR_String) "transform_hlds.term_constr_data",
  (MR_String) "nonlocal_vars",
  {     NULL },
  {     (MR_PseudoTypeInfo) &transform_hlds__term_constr_data__list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_EnumFunctorDesc transform_hlds__term_constr_data__transform_hlds__term_constr_data__enum_functor_desc_recursion_type_0_0 = {
  (MR_String) "none",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc transform_hlds__term_constr_data__transform_hlds__term_constr_data__enum_functor_desc_recursion_type_0_1 = {
  (MR_String) "direct_only",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc transform_hlds__term_constr_data__transform_hlds__term_constr_data__enum_functor_desc_recursion_type_0_2 = {
  (MR_String) "mutual_only",
  (MR_Integer) 2
};

static const MR_EnumFunctorDesc transform_hlds__term_constr_data__transform_hlds__term_constr_data__enum_functor_desc_recursion_type_0_3 = {
  (MR_String) "both",
  (MR_Integer) 3
};

static const MR_EnumFunctorDescPtr transform_hlds__term_constr_data__transform_hlds__term_constr_data__enum_value_ordered_recursion_type_0[4] = {
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
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (transform_hlds__term_constr_data____Unify____recursion_type_0_0_10001)),
  ((MR_Box) (transform_hlds__term_constr_data____Compare____recursion_type_0_0_10001)),
  (MR_String) "transform_hlds.term_constr_data",
  (MR_String) "recursion_type",
  {     transform_hlds__term_constr_data__transform_hlds__term_constr_data__enum_name_ordered_recursion_type_0 },
  {     transform_hlds__term_constr_data__transform_hlds__term_constr_data__enum_value_ordered_recursion_type_0 },
  (MR_Integer) 4,
  (MR_Integer) 4,
  transform_hlds__term_constr_data__transform_hlds__term_constr_data__functor_number_map_recursion_type_0
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__term_constr_data__pair__ti_pair_2term__ti_var_1term__type_ctor_info_generic_0libs__rat__type_ctor_info_rat_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &transform_hlds__term_constr_data__term__ti_var_1term__type_ctor_info_generic_0,
    (MR_TypeInfo) &libs__rat__libs__rat__type_ctor_info_rat_0
  }
};

const MR_TypeCtorInfo_Struct transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_size_term_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__term_constr_data____Unify____size_term_0_0_10001)),
  ((MR_Box) (transform_hlds__term_constr_data____Compare____size_term_0_0_10001)),
  (MR_String) "transform_hlds.term_constr_data",
  (MR_String) "size_term",
  {     NULL },
  {     (MR_PseudoTypeInfo) &transform_hlds__term_constr_data__pair__ti_pair_2term__ti_var_1term__type_ctor_info_generic_0libs__rat__type_ctor_info_rat_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_data__list__ti_list_1pair__ti_pair_2term__ti_var_1term__type_ctor_info_generic_0libs__rat__type_ctor_info_rat_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__term_constr_data__pair__ti_pair_2term__ti_var_1term__type_ctor_info_generic_0libs__rat__type_ctor_info_rat_0
  }
};

const MR_TypeCtorInfo_Struct transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_size_terms_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__term_constr_data____Unify____size_terms_0_0_10001)),
  ((MR_Box) (transform_hlds__term_constr_data____Compare____size_terms_0_0_10001)),
  (MR_String) "transform_hlds.term_constr_data",
  (MR_String) "size_terms",
  {     NULL },
  {     (MR_PseudoTypeInfo) &transform_hlds__term_constr_data__list__ti_list_1pair__ti_pair_2term__ti_var_1term__type_ctor_info_generic_0libs__rat__type_ctor_info_rat_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

const MR_TypeCtorInfo_Struct transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_size_var_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__term_constr_data____Unify____size_var_0_0_10001)),
  ((MR_Box) (transform_hlds__term_constr_data____Compare____size_var_0_0_10001)),
  (MR_String) "transform_hlds.term_constr_data",
  (MR_String) "size_var",
  {     NULL },
  {     (MR_PseudoTypeInfo) &transform_hlds__term_constr_data__term__ti_var_1term__type_ctor_info_generic_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

const MR_TypeCtorInfo_Struct transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_size_var_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__term_constr_data____Unify____size_var_map_0_0_10001)),
  ((MR_Box) (transform_hlds__term_constr_data____Compare____size_var_map_0_0_10001)),
  (MR_String) "transform_hlds.term_constr_data",
  (MR_String) "size_var_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &transform_hlds__term_constr_data__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1term__type_ctor_info_generic_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

const MR_TypeCtorInfo_Struct transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_size_vars_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__term_constr_data____Unify____size_vars_0_0_10001)),
  ((MR_Box) (transform_hlds__term_constr_data____Compare____size_vars_0_0_10001)),
  (MR_String) "transform_hlds.term_constr_data",
  (MR_String) "size_vars",
  {     NULL },
  {     (MR_PseudoTypeInfo) &transform_hlds__term_constr_data__list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

const MR_TypeCtorInfo_Struct transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_size_varset_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__term_constr_data____Unify____size_varset_0_0_10001)),
  ((MR_Box) (transform_hlds__term_constr_data____Compare____size_varset_0_0_10001)),
  (MR_String) "transform_hlds.term_constr_data",
  (MR_String) "size_varset",
  {     NULL },
  {     (MR_PseudoTypeInfo) &transform_hlds__term_constr_data__varset__ti_varset_1term__type_ctor_info_generic_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_Integer transform_hlds__term_constr_data__transform_hlds__term_constr_data__functor_number_map_widening_0[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc transform_hlds__term_constr_data__transform_hlds__term_constr_data__notag_functor_desc_widening_0 = {
  (MR_String) "after_fixed_cutoff",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_widening_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (transform_hlds__term_constr_data____Unify____widening_0_0_10001)),
  ((MR_Box) (transform_hlds__term_constr_data____Compare____widening_0_0_10001)),
  (MR_String) "transform_hlds.term_constr_data",
  (MR_String) "widening",
  {     &transform_hlds__term_constr_data__transform_hlds__term_constr_data__notag_functor_desc_widening_0 },
  {     &transform_hlds__term_constr_data__transform_hlds__term_constr_data__notag_functor_desc_widening_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__term_constr_data__transform_hlds__term_constr_data__functor_number_map_widening_0
};

const MR_TypeCtorInfo_Struct transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_zero_vars_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__term_constr_data____Unify____zero_vars_0_0_10001)),
  ((MR_Box) (transform_hlds__term_constr_data____Compare____zero_vars_0_0_10001)),
  (MR_String) "transform_hlds.term_constr_data",
  (MR_String) "zero_vars",
  {     NULL },
  {     (MR_PseudoTypeInfo) &transform_hlds__term_constr_data__set_ordlist__ti_set_ordlist_1term__ti_var_1term__type_ctor_info_generic_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____abstract_goal_0_0_10001(
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__term_constr_data__succeeded;

    {
      transform_hlds__term_constr_data__succeeded = transform_hlds__term_constr_data____Unify____abstract_goal_0_0(((MR_Word) transform_hlds__term_constr_data__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_2));
    }
    return transform_hlds__term_constr_data__succeeded;
  }
}

static void MR_CALL 
transform_hlds__term_constr_data____Compare____abstract_goal_0_0_10001(
  MR_Box * transform_hlds__term_constr_data__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_3)
{
  {
    MR_Word transform_hlds__term_constr_data__conv0_HeadVar__1_1;

    {
      transform_hlds__term_constr_data____Compare____abstract_goal_0_0(&transform_hlds__term_constr_data__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_2), ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_3));
    }
    *transform_hlds__term_constr_data__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_constr_data__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____abstract_goals_0_0_10001(
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__term_constr_data__succeeded;

    {
      transform_hlds__term_constr_data__succeeded = transform_hlds__term_constr_data____Unify____abstract_goals_0_0(((MR_Word) transform_hlds__term_constr_data__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_2));
    }
    return transform_hlds__term_constr_data__succeeded;
  }
}

static void MR_CALL 
transform_hlds__term_constr_data____Compare____abstract_goals_0_0_10001(
  MR_Box * transform_hlds__term_constr_data__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_3)
{
  {
    MR_Word transform_hlds__term_constr_data__conv0_HeadVar__1_1;

    {
      transform_hlds__term_constr_data____Compare____abstract_goals_0_0(&transform_hlds__term_constr_data__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_2), ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_3));
    }
    *transform_hlds__term_constr_data__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_constr_data__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____abstract_ho_call_0_0_10001(
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__term_constr_data__succeeded;

    {
      transform_hlds__term_constr_data__succeeded = transform_hlds__term_constr_data____Unify____abstract_ho_call_0_0(((MR_Word) transform_hlds__term_constr_data__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_2));
    }
    return transform_hlds__term_constr_data__succeeded;
  }
}

static void MR_CALL 
transform_hlds__term_constr_data____Compare____abstract_ho_call_0_0_10001(
  MR_Box * transform_hlds__term_constr_data__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_3)
{
  {
    MR_Word transform_hlds__term_constr_data__conv0_HeadVar__1_1;

    {
      transform_hlds__term_constr_data____Compare____abstract_ho_call_0_0(&transform_hlds__term_constr_data__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_2), ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_3));
    }
    *transform_hlds__term_constr_data__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_constr_data__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____abstract_ppid_0_0_10001(
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__term_constr_data__succeeded;

    {
      transform_hlds__term_constr_data__succeeded = transform_hlds__term_constr_data____Unify____abstract_ppid_0_0(((MR_Word) transform_hlds__term_constr_data__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_2));
    }
    return transform_hlds__term_constr_data__succeeded;
  }
}

static void MR_CALL 
transform_hlds__term_constr_data____Compare____abstract_ppid_0_0_10001(
  MR_Box * transform_hlds__term_constr_data__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_3)
{
  {
    MR_Word transform_hlds__term_constr_data__conv0_HeadVar__1_1;

    {
      transform_hlds__term_constr_data____Compare____abstract_ppid_0_0(&transform_hlds__term_constr_data__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_2), ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_3));
    }
    *transform_hlds__term_constr_data__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_constr_data__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____abstract_proc_0_0_10001(
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__term_constr_data__succeeded;

    {
      transform_hlds__term_constr_data__succeeded = transform_hlds__term_constr_data____Unify____abstract_proc_0_0(((MR_Word) transform_hlds__term_constr_data__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_2));
    }
    return transform_hlds__term_constr_data__succeeded;
  }
}

static void MR_CALL 
transform_hlds__term_constr_data____Compare____abstract_proc_0_0_10001(
  MR_Box * transform_hlds__term_constr_data__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_3)
{
  {
    MR_Word transform_hlds__term_constr_data__conv0_HeadVar__1_1;

    {
      transform_hlds__term_constr_data____Compare____abstract_proc_0_0(&transform_hlds__term_constr_data__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_2), ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_3));
    }
    *transform_hlds__term_constr_data__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_constr_data__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____abstract_scc_0_0_10001(
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__term_constr_data__succeeded;

    {
      transform_hlds__term_constr_data__succeeded = transform_hlds__term_constr_data____Unify____abstract_scc_0_0(((MR_Word) transform_hlds__term_constr_data__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_2));
    }
    return transform_hlds__term_constr_data__succeeded;
  }
}

static void MR_CALL 
transform_hlds__term_constr_data____Compare____abstract_scc_0_0_10001(
  MR_Box * transform_hlds__term_constr_data__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_3)
{
  {
    MR_Word transform_hlds__term_constr_data__conv0_HeadVar__1_1;

    {
      transform_hlds__term_constr_data____Compare____abstract_scc_0_0(&transform_hlds__term_constr_data__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_2), ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_3));
    }
    *transform_hlds__term_constr_data__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_constr_data__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____arg_size_result_0_0_10001(
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__term_constr_data__succeeded;

    {
      transform_hlds__term_constr_data__succeeded = transform_hlds__term_constr_data____Unify____arg_size_result_0_0(((MR_Word) transform_hlds__term_constr_data__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_2));
    }
    return transform_hlds__term_constr_data__succeeded;
  }
}

static void MR_CALL 
transform_hlds__term_constr_data____Compare____arg_size_result_0_0_10001(
  MR_Box * transform_hlds__term_constr_data__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_3)
{
  {
    MR_Word transform_hlds__term_constr_data__conv0_HeadVar__1_1;

    {
      transform_hlds__term_constr_data____Compare____arg_size_result_0_0(&transform_hlds__term_constr_data__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_2), ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_3));
    }
    *transform_hlds__term_constr_data__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_constr_data__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____call_vars_0_0_10001(
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__term_constr_data__succeeded;

    {
      transform_hlds__term_constr_data__succeeded = transform_hlds__term_constr_data____Unify____call_vars_0_0(((MR_Word) transform_hlds__term_constr_data__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_2));
    }
    return transform_hlds__term_constr_data__succeeded;
  }
}

static void MR_CALL 
transform_hlds__term_constr_data____Compare____call_vars_0_0_10001(
  MR_Box * transform_hlds__term_constr_data__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_3)
{
  {
    MR_Word transform_hlds__term_constr_data__conv0_HeadVar__1_1;

    {
      transform_hlds__term_constr_data____Compare____call_vars_0_0(&transform_hlds__term_constr_data__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_2), ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_3));
    }
    *transform_hlds__term_constr_data__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_constr_data__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____head_vars_0_0_10001(
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__term_constr_data__succeeded;

    {
      transform_hlds__term_constr_data__succeeded = transform_hlds__term_constr_data____Unify____head_vars_0_0(((MR_Word) transform_hlds__term_constr_data__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_2));
    }
    return transform_hlds__term_constr_data__succeeded;
  }
}

static void MR_CALL 
transform_hlds__term_constr_data____Compare____head_vars_0_0_10001(
  MR_Box * transform_hlds__term_constr_data__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_3)
{
  {
    MR_Word transform_hlds__term_constr_data__conv0_HeadVar__1_1;

    {
      transform_hlds__term_constr_data____Compare____head_vars_0_0(&transform_hlds__term_constr_data__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_2), ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_3));
    }
    *transform_hlds__term_constr_data__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_constr_data__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____local_vars_0_0_10001(
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__term_constr_data__succeeded;

    {
      transform_hlds__term_constr_data__succeeded = transform_hlds__term_constr_data____Unify____local_vars_0_0(((MR_Word) transform_hlds__term_constr_data__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_2));
    }
    return transform_hlds__term_constr_data__succeeded;
  }
}

static void MR_CALL 
transform_hlds__term_constr_data____Compare____local_vars_0_0_10001(
  MR_Box * transform_hlds__term_constr_data__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_3)
{
  {
    MR_Word transform_hlds__term_constr_data__conv0_HeadVar__1_1;

    {
      transform_hlds__term_constr_data____Compare____local_vars_0_0(&transform_hlds__term_constr_data__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_2), ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_3));
    }
    *transform_hlds__term_constr_data__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_constr_data__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____nonlocal_vars_0_0_10001(
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__term_constr_data__succeeded;

    {
      transform_hlds__term_constr_data__succeeded = transform_hlds__term_constr_data____Unify____nonlocal_vars_0_0(((MR_Word) transform_hlds__term_constr_data__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_2));
    }
    return transform_hlds__term_constr_data__succeeded;
  }
}

static void MR_CALL 
transform_hlds__term_constr_data____Compare____nonlocal_vars_0_0_10001(
  MR_Box * transform_hlds__term_constr_data__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_3)
{
  {
    MR_Word transform_hlds__term_constr_data__conv0_HeadVar__1_1;

    {
      transform_hlds__term_constr_data____Compare____nonlocal_vars_0_0(&transform_hlds__term_constr_data__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_2), ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_3));
    }
    *transform_hlds__term_constr_data__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_constr_data__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____recursion_type_0_0_10001(
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__term_constr_data__succeeded;

    {
      transform_hlds__term_constr_data__succeeded = transform_hlds__term_constr_data____Unify____recursion_type_0_0(((MR_Word) transform_hlds__term_constr_data__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_2));
    }
    return transform_hlds__term_constr_data__succeeded;
  }
}

static void MR_CALL 
transform_hlds__term_constr_data____Compare____recursion_type_0_0_10001(
  MR_Box * transform_hlds__term_constr_data__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_3)
{
  {
    MR_Word transform_hlds__term_constr_data__conv0_HeadVar__1_1;

    {
      transform_hlds__term_constr_data____Compare____recursion_type_0_0(&transform_hlds__term_constr_data__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_2), ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_3));
    }
    *transform_hlds__term_constr_data__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_constr_data__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____size_term_0_0_10001(
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__term_constr_data__succeeded;

    {
      transform_hlds__term_constr_data__succeeded = transform_hlds__term_constr_data____Unify____size_term_0_0(((MR_Word) transform_hlds__term_constr_data__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_2));
    }
    return transform_hlds__term_constr_data__succeeded;
  }
}

static void MR_CALL 
transform_hlds__term_constr_data____Compare____size_term_0_0_10001(
  MR_Box * transform_hlds__term_constr_data__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_3)
{
  {
    MR_Word transform_hlds__term_constr_data__conv0_HeadVar__1_1;

    {
      transform_hlds__term_constr_data____Compare____size_term_0_0(&transform_hlds__term_constr_data__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_2), ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_3));
    }
    *transform_hlds__term_constr_data__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_constr_data__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____size_terms_0_0_10001(
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__term_constr_data__succeeded;

    {
      transform_hlds__term_constr_data__succeeded = transform_hlds__term_constr_data____Unify____size_terms_0_0(((MR_Word) transform_hlds__term_constr_data__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_2));
    }
    return transform_hlds__term_constr_data__succeeded;
  }
}

static void MR_CALL 
transform_hlds__term_constr_data____Compare____size_terms_0_0_10001(
  MR_Box * transform_hlds__term_constr_data__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_3)
{
  {
    MR_Word transform_hlds__term_constr_data__conv0_HeadVar__1_1;

    {
      transform_hlds__term_constr_data____Compare____size_terms_0_0(&transform_hlds__term_constr_data__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_2), ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_3));
    }
    *transform_hlds__term_constr_data__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_constr_data__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____size_var_0_0_10001(
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__term_constr_data__succeeded;

    {
      transform_hlds__term_constr_data__succeeded = transform_hlds__term_constr_data____Unify____size_var_0_0(((MR_Word) transform_hlds__term_constr_data__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_2));
    }
    return transform_hlds__term_constr_data__succeeded;
  }
}

static void MR_CALL 
transform_hlds__term_constr_data____Compare____size_var_0_0_10001(
  MR_Box * transform_hlds__term_constr_data__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_3)
{
  {
    MR_Word transform_hlds__term_constr_data__conv0_HeadVar__1_1;

    {
      transform_hlds__term_constr_data____Compare____size_var_0_0(&transform_hlds__term_constr_data__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_2), ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_3));
    }
    *transform_hlds__term_constr_data__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_constr_data__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____size_var_map_0_0_10001(
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__term_constr_data__succeeded;

    {
      transform_hlds__term_constr_data__succeeded = transform_hlds__term_constr_data____Unify____size_var_map_0_0(((MR_Word) transform_hlds__term_constr_data__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_2));
    }
    return transform_hlds__term_constr_data__succeeded;
  }
}

static void MR_CALL 
transform_hlds__term_constr_data____Compare____size_var_map_0_0_10001(
  MR_Box * transform_hlds__term_constr_data__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_3)
{
  {
    MR_Word transform_hlds__term_constr_data__conv0_HeadVar__1_1;

    {
      transform_hlds__term_constr_data____Compare____size_var_map_0_0(&transform_hlds__term_constr_data__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_2), ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_3));
    }
    *transform_hlds__term_constr_data__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_constr_data__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____size_vars_0_0_10001(
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__term_constr_data__succeeded;

    {
      transform_hlds__term_constr_data__succeeded = transform_hlds__term_constr_data____Unify____size_vars_0_0(((MR_Word) transform_hlds__term_constr_data__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_2));
    }
    return transform_hlds__term_constr_data__succeeded;
  }
}

static void MR_CALL 
transform_hlds__term_constr_data____Compare____size_vars_0_0_10001(
  MR_Box * transform_hlds__term_constr_data__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_3)
{
  {
    MR_Word transform_hlds__term_constr_data__conv0_HeadVar__1_1;

    {
      transform_hlds__term_constr_data____Compare____size_vars_0_0(&transform_hlds__term_constr_data__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_2), ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_3));
    }
    *transform_hlds__term_constr_data__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_constr_data__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____size_varset_0_0_10001(
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__term_constr_data__succeeded;

    {
      transform_hlds__term_constr_data__succeeded = transform_hlds__term_constr_data____Unify____size_varset_0_0(((MR_Word) transform_hlds__term_constr_data__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_2));
    }
    return transform_hlds__term_constr_data__succeeded;
  }
}

static void MR_CALL 
transform_hlds__term_constr_data____Compare____size_varset_0_0_10001(
  MR_Box * transform_hlds__term_constr_data__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_3)
{
  {
    MR_Word transform_hlds__term_constr_data__conv0_HeadVar__1_1;

    {
      transform_hlds__term_constr_data____Compare____size_varset_0_0(&transform_hlds__term_constr_data__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_2), ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_3));
    }
    *transform_hlds__term_constr_data__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_constr_data__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____widening_0_0_10001(
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__term_constr_data__succeeded;

    {
      transform_hlds__term_constr_data__succeeded = transform_hlds__term_constr_data____Unify____widening_0_0(((MR_Word) transform_hlds__term_constr_data__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_2));
    }
    return transform_hlds__term_constr_data__succeeded;
  }
}

static void MR_CALL 
transform_hlds__term_constr_data____Compare____widening_0_0_10001(
  MR_Box * transform_hlds__term_constr_data__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_3)
{
  {
    MR_Word transform_hlds__term_constr_data__conv0_HeadVar__1_1;

    {
      transform_hlds__term_constr_data____Compare____widening_0_0(&transform_hlds__term_constr_data__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_2), ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_3));
    }
    *transform_hlds__term_constr_data__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_constr_data__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____zero_vars_0_0_10001(
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__term_constr_data__succeeded;

    {
      transform_hlds__term_constr_data__succeeded = transform_hlds__term_constr_data____Unify____zero_vars_0_0(((MR_Word) transform_hlds__term_constr_data__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_2));
    }
    return transform_hlds__term_constr_data__succeeded;
  }
}

static void MR_CALL 
transform_hlds__term_constr_data____Compare____zero_vars_0_0_10001(
  MR_Box * transform_hlds__term_constr_data__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_3)
{
  {
    MR_Word transform_hlds__term_constr_data__conv0_HeadVar__1_1;

    {
      transform_hlds__term_constr_data____Compare____zero_vars_0_0(&transform_hlds__term_constr_data__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_2), ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_3));
    }
    *transform_hlds__term_constr_data__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_constr_data__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__term_constr_data__IntroducedFrom__pred__simplify_abstract_rep__477__1_2_p_0(
  MR_Word transform_hlds__term_constr_data__HeadVar__1_37,
  MR_Word transform_hlds__term_constr_data__HeadVar__2_56)
{
  {
    MR_bool transform_hlds__term_constr_data__succeeded;

    {
      transform_hlds__term_constr_data__succeeded = mercury__std_util__isnt_2_p_0((MR_Word) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_goal_0, transform_hlds__term_constr_data__HeadVar__1_37, ((MR_Box) (transform_hlds__term_constr_data__HeadVar__2_56)));
    }
    return transform_hlds__term_constr_data__succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__term_constr_data__IntroducedFrom__pred__simplify_abstract_rep__475__1_2_p_0(
  MR_Word transform_hlds__term_constr_data__HeadVar__1_33,
  MR_Word transform_hlds__term_constr_data__HeadVar__2_53)
{
  {
    MR_bool transform_hlds__term_constr_data__succeeded;

    {
      transform_hlds__term_constr_data__succeeded = mercury__std_util__isnt_2_p_0((MR_Word) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_goal_0, transform_hlds__term_constr_data__HeadVar__1_33, ((MR_Box) (transform_hlds__term_constr_data__HeadVar__2_53)));
    }
    return transform_hlds__term_constr_data__succeeded;
  }
}

void MR_CALL 
transform_hlds__term_constr_data____Compare____zero_vars_0_0(
  MR_Word * transform_hlds__term_constr_data__HeadVar__1_1,
  MR_Word transform_hlds__term_constr_data__HeadVar__2_2,
  MR_Word transform_hlds__term_constr_data__HeadVar__3_3)
{
  {
    MR_bool transform_hlds__term_constr_data__succeeded;
    MR_Word transform_hlds__term_constr_data__Cast_HeadVar1_4 = transform_hlds__term_constr_data__HeadVar__2_2;
    MR_Word transform_hlds__term_constr_data__Cast_HeadVar2_5 = transform_hlds__term_constr_data__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_data_scalar_common_1[2], transform_hlds__term_constr_data__HeadVar__1_1, ((MR_Box) (transform_hlds__term_constr_data__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__term_constr_data__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____zero_vars_0_0(
  MR_Word transform_hlds__term_constr_data__HeadVar__1_1,
  MR_Word transform_hlds__term_constr_data__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__term_constr_data__succeeded;
    MR_Word transform_hlds__term_constr_data__Cast_HeadVar1_3 = transform_hlds__term_constr_data__HeadVar__1_1;
    MR_Word transform_hlds__term_constr_data__Cast_HeadVar2_4 = transform_hlds__term_constr_data__HeadVar__2_2;

    {
      transform_hlds__term_constr_data__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__term_constr_data_scalar_common_1[2], ((MR_Box) (transform_hlds__term_constr_data__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__term_constr_data__Cast_HeadVar2_4)));
    }
    return transform_hlds__term_constr_data__succeeded;
  }
}

void MR_CALL 
transform_hlds__term_constr_data____Compare____widening_0_0(
  MR_Word * transform_hlds__term_constr_data__HeadVar__1_1,
  MR_Word transform_hlds__term_constr_data__HeadVar__2_2,
  MR_Word transform_hlds__term_constr_data__HeadVar__3_3)
{
  {
    MR_bool transform_hlds__term_constr_data__succeeded;
    MR_Integer transform_hlds__term_constr_data__CastX_6 = (MR_Integer) transform_hlds__term_constr_data__HeadVar__2_2;
    MR_Integer transform_hlds__term_constr_data__CastY_7 = (MR_Integer) transform_hlds__term_constr_data__HeadVar__3_3;

    transform_hlds__term_constr_data__succeeded = (transform_hlds__term_constr_data__CastX_6 == transform_hlds__term_constr_data__CastY_7);
    if (transform_hlds__term_constr_data__succeeded)
      *transform_hlds__term_constr_data__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Integer transform_hlds__term_constr_data__V_4_4 = (MR_Integer) transform_hlds__term_constr_data__HeadVar__2_2;
        MR_Integer transform_hlds__term_constr_data__V_5_5 = (MR_Integer) transform_hlds__term_constr_data__HeadVar__3_3;

        {
          mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__term_constr_data__HeadVar__1_1, transform_hlds__term_constr_data__V_4_4, transform_hlds__term_constr_data__V_5_5);
        }
      }
  }
}

MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____widening_0_0(
  MR_Word transform_hlds__term_constr_data__HeadVar__1_1,
  MR_Word transform_hlds__term_constr_data__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__term_constr_data__succeeded;
    MR_Integer transform_hlds__term_constr_data__CastX_5 = (MR_Integer) transform_hlds__term_constr_data__HeadVar__1_1;
    MR_Integer transform_hlds__term_constr_data__CastY_6 = (MR_Integer) transform_hlds__term_constr_data__HeadVar__2_2;

    transform_hlds__term_constr_data__succeeded = (transform_hlds__term_constr_data__CastX_5 == transform_hlds__term_constr_data__CastY_6);
    if (transform_hlds__term_constr_data__succeeded)
      transform_hlds__term_constr_data__succeeded = MR_TRUE;
    else
      {
        MR_Integer transform_hlds__term_constr_data__V_3_3 = (MR_Integer) transform_hlds__term_constr_data__HeadVar__1_1;
        MR_Integer transform_hlds__term_constr_data__V_4_4 = (MR_Integer) transform_hlds__term_constr_data__HeadVar__2_2;

        transform_hlds__term_constr_data__succeeded = (transform_hlds__term_constr_data__V_3_3 == transform_hlds__term_constr_data__V_4_4);
      }
    return transform_hlds__term_constr_data__succeeded;
  }
}

void MR_CALL 
transform_hlds__term_constr_data____Compare____size_varset_0_0(
  MR_Word * transform_hlds__term_constr_data__HeadVar__1_1,
  MR_Word transform_hlds__term_constr_data__HeadVar__2_2,
  MR_Word transform_hlds__term_constr_data__HeadVar__3_3)
{
  {
    MR_bool transform_hlds__term_constr_data__succeeded;
    MR_Word transform_hlds__term_constr_data__Cast_HeadVar1_4 = transform_hlds__term_constr_data__HeadVar__2_2;
    MR_Word transform_hlds__term_constr_data__Cast_HeadVar2_5 = transform_hlds__term_constr_data__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_data_scalar_common_1[6], transform_hlds__term_constr_data__HeadVar__1_1, ((MR_Box) (transform_hlds__term_constr_data__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__term_constr_data__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____size_varset_0_0(
  MR_Word transform_hlds__term_constr_data__HeadVar__1_1,
  MR_Word transform_hlds__term_constr_data__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__term_constr_data__succeeded;
    MR_Word transform_hlds__term_constr_data__Cast_HeadVar1_3 = transform_hlds__term_constr_data__HeadVar__1_1;
    MR_Word transform_hlds__term_constr_data__Cast_HeadVar2_4 = transform_hlds__term_constr_data__HeadVar__2_2;

    {
      transform_hlds__term_constr_data__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__term_constr_data_scalar_common_1[6], ((MR_Box) (transform_hlds__term_constr_data__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__term_constr_data__Cast_HeadVar2_4)));
    }
    return transform_hlds__term_constr_data__succeeded;
  }
}

void MR_CALL 
transform_hlds__term_constr_data____Compare____size_vars_0_0(
  MR_Word * transform_hlds__term_constr_data__HeadVar__1_1,
  MR_Word transform_hlds__term_constr_data__HeadVar__2_2,
  MR_Word transform_hlds__term_constr_data__HeadVar__3_3)
{
  {
    MR_bool transform_hlds__term_constr_data__succeeded;
    MR_Word transform_hlds__term_constr_data__Cast_HeadVar1_4 = transform_hlds__term_constr_data__HeadVar__2_2;
    MR_Word transform_hlds__term_constr_data__Cast_HeadVar2_5 = transform_hlds__term_constr_data__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_data_scalar_common_1[1], transform_hlds__term_constr_data__HeadVar__1_1, ((MR_Box) (transform_hlds__term_constr_data__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__term_constr_data__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____size_vars_0_0(
  MR_Word transform_hlds__term_constr_data__HeadVar__1_1,
  MR_Word transform_hlds__term_constr_data__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__term_constr_data__succeeded;
    MR_Word transform_hlds__term_constr_data__Cast_HeadVar1_3 = transform_hlds__term_constr_data__HeadVar__1_1;
    MR_Word transform_hlds__term_constr_data__Cast_HeadVar2_4 = transform_hlds__term_constr_data__HeadVar__2_2;

    {
      transform_hlds__term_constr_data__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__term_constr_data_scalar_common_1[1], ((MR_Box) (transform_hlds__term_constr_data__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__term_constr_data__Cast_HeadVar2_4)));
    }
    return transform_hlds__term_constr_data__succeeded;
  }
}

void MR_CALL 
transform_hlds__term_constr_data____Compare____size_var_map_0_0(
  MR_Word * transform_hlds__term_constr_data__HeadVar__1_1,
  MR_Word transform_hlds__term_constr_data__HeadVar__2_2,
  MR_Word transform_hlds__term_constr_data__HeadVar__3_3)
{
  {
    MR_bool transform_hlds__term_constr_data__succeeded;
    MR_Word transform_hlds__term_constr_data__Cast_HeadVar1_4 = transform_hlds__term_constr_data__HeadVar__2_2;
    MR_Word transform_hlds__term_constr_data__Cast_HeadVar2_5 = transform_hlds__term_constr_data__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_data_scalar_common_2[0], transform_hlds__term_constr_data__HeadVar__1_1, ((MR_Box) (transform_hlds__term_constr_data__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__term_constr_data__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____size_var_map_0_0(
  MR_Word transform_hlds__term_constr_data__HeadVar__1_1,
  MR_Word transform_hlds__term_constr_data__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__term_constr_data__succeeded;
    MR_Word transform_hlds__term_constr_data__Cast_HeadVar1_3 = transform_hlds__term_constr_data__HeadVar__1_1;
    MR_Word transform_hlds__term_constr_data__Cast_HeadVar2_4 = transform_hlds__term_constr_data__HeadVar__2_2;

    {
      transform_hlds__term_constr_data__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__term_constr_data_scalar_common_2[0], ((MR_Box) (transform_hlds__term_constr_data__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__term_constr_data__Cast_HeadVar2_4)));
    }
    return transform_hlds__term_constr_data__succeeded;
  }
}

void MR_CALL 
transform_hlds__term_constr_data____Compare____size_var_0_0(
  MR_Word * transform_hlds__term_constr_data__HeadVar__1_1,
  MR_Word transform_hlds__term_constr_data__HeadVar__2_2,
  MR_Word transform_hlds__term_constr_data__HeadVar__3_3)
{
  {
    MR_bool transform_hlds__term_constr_data__succeeded;
    MR_Word transform_hlds__term_constr_data__Cast_HeadVar1_4 = transform_hlds__term_constr_data__HeadVar__2_2;
    MR_Word transform_hlds__term_constr_data__Cast_HeadVar2_5 = transform_hlds__term_constr_data__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_data_scalar_common_1[0], transform_hlds__term_constr_data__HeadVar__1_1, ((MR_Box) (transform_hlds__term_constr_data__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__term_constr_data__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____size_var_0_0(
  MR_Word transform_hlds__term_constr_data__HeadVar__1_1,
  MR_Word transform_hlds__term_constr_data__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__term_constr_data__succeeded;
    MR_Word transform_hlds__term_constr_data__Cast_HeadVar1_3 = transform_hlds__term_constr_data__HeadVar__1_1;
    MR_Word transform_hlds__term_constr_data__Cast_HeadVar2_4 = transform_hlds__term_constr_data__HeadVar__2_2;

    {
      transform_hlds__term_constr_data__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__term_constr_data_scalar_common_1[0], ((MR_Box) (transform_hlds__term_constr_data__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__term_constr_data__Cast_HeadVar2_4)));
    }
    return transform_hlds__term_constr_data__succeeded;
  }
}

void MR_CALL 
transform_hlds__term_constr_data____Compare____size_terms_0_0(
  MR_Word * transform_hlds__term_constr_data__HeadVar__1_1,
  MR_Word transform_hlds__term_constr_data__HeadVar__2_2,
  MR_Word transform_hlds__term_constr_data__HeadVar__3_3)
{
  {
    MR_bool transform_hlds__term_constr_data__succeeded;
    MR_Word transform_hlds__term_constr_data__Cast_HeadVar1_4 = transform_hlds__term_constr_data__HeadVar__2_2;
    MR_Word transform_hlds__term_constr_data__Cast_HeadVar2_5 = transform_hlds__term_constr_data__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_data_scalar_common_1[10], transform_hlds__term_constr_data__HeadVar__1_1, ((MR_Box) (transform_hlds__term_constr_data__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__term_constr_data__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____size_terms_0_0(
  MR_Word transform_hlds__term_constr_data__HeadVar__1_1,
  MR_Word transform_hlds__term_constr_data__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__term_constr_data__succeeded;
    MR_Word transform_hlds__term_constr_data__Cast_HeadVar1_3 = transform_hlds__term_constr_data__HeadVar__1_1;
    MR_Word transform_hlds__term_constr_data__Cast_HeadVar2_4 = transform_hlds__term_constr_data__HeadVar__2_2;

    {
      transform_hlds__term_constr_data__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__term_constr_data_scalar_common_1[10], ((MR_Box) (transform_hlds__term_constr_data__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__term_constr_data__Cast_HeadVar2_4)));
    }
    return transform_hlds__term_constr_data__succeeded;
  }
}

void MR_CALL 
transform_hlds__term_constr_data____Compare____size_term_0_0(
  MR_Word * transform_hlds__term_constr_data__HeadVar__1_1,
  MR_Word transform_hlds__term_constr_data__HeadVar__2_2,
  MR_Word transform_hlds__term_constr_data__HeadVar__3_3)
{
  {
    MR_bool transform_hlds__term_constr_data__succeeded;
    MR_Word transform_hlds__term_constr_data__Cast_HeadVar1_4 = transform_hlds__term_constr_data__HeadVar__2_2;
    MR_Word transform_hlds__term_constr_data__Cast_HeadVar2_5 = transform_hlds__term_constr_data__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_data_scalar_common_2[1], transform_hlds__term_constr_data__HeadVar__1_1, ((MR_Box) (transform_hlds__term_constr_data__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__term_constr_data__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____size_term_0_0(
  MR_Word transform_hlds__term_constr_data__HeadVar__1_1,
  MR_Word transform_hlds__term_constr_data__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__term_constr_data__succeeded;
    MR_Word transform_hlds__term_constr_data__Cast_HeadVar1_3 = transform_hlds__term_constr_data__HeadVar__1_1;
    MR_Word transform_hlds__term_constr_data__Cast_HeadVar2_4 = transform_hlds__term_constr_data__HeadVar__2_2;

    {
      transform_hlds__term_constr_data__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__term_constr_data_scalar_common_2[1], ((MR_Box) (transform_hlds__term_constr_data__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__term_constr_data__Cast_HeadVar2_4)));
    }
    return transform_hlds__term_constr_data__succeeded;
  }
}

void MR_CALL 
transform_hlds__term_constr_data____Compare____recursion_type_0_0(
  MR_Word * transform_hlds__term_constr_data__HeadVar__1_1,
  MR_Word transform_hlds__term_constr_data__HeadVar__2_2,
  MR_Word transform_hlds__term_constr_data__HeadVar__3_3)
{
  {
    MR_bool transform_hlds__term_constr_data__succeeded;
    MR_Integer transform_hlds__term_constr_data__Cast_HeadVar1_4 = (MR_Integer) transform_hlds__term_constr_data__HeadVar__2_2;
    MR_Integer transform_hlds__term_constr_data__Cast_HeadVar2_5 = (MR_Integer) transform_hlds__term_constr_data__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__term_constr_data__HeadVar__1_1, transform_hlds__term_constr_data__Cast_HeadVar1_4, transform_hlds__term_constr_data__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____recursion_type_0_0(
  MR_Word transform_hlds__term_constr_data__HeadVar__2_1,
  MR_Word transform_hlds__term_constr_data__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__term_constr_data__succeeded = (transform_hlds__term_constr_data__HeadVar__2_1 == transform_hlds__term_constr_data__HeadVar__2_2);

    return transform_hlds__term_constr_data__succeeded;
  }
}

void MR_CALL 
transform_hlds__term_constr_data____Compare____nonlocal_vars_0_0(
  MR_Word * transform_hlds__term_constr_data__HeadVar__1_1,
  MR_Word transform_hlds__term_constr_data__HeadVar__2_2,
  MR_Word transform_hlds__term_constr_data__HeadVar__3_3)
{
  {
    MR_bool transform_hlds__term_constr_data__succeeded;
    MR_Word transform_hlds__term_constr_data__Cast_HeadVar1_4 = transform_hlds__term_constr_data__HeadVar__2_2;
    MR_Word transform_hlds__term_constr_data__Cast_HeadVar2_5 = transform_hlds__term_constr_data__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_data_scalar_common_1[1], transform_hlds__term_constr_data__HeadVar__1_1, ((MR_Box) (transform_hlds__term_constr_data__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__term_constr_data__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____nonlocal_vars_0_0(
  MR_Word transform_hlds__term_constr_data__HeadVar__1_1,
  MR_Word transform_hlds__term_constr_data__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__term_constr_data__succeeded;
    MR_Word transform_hlds__term_constr_data__Cast_HeadVar1_3 = transform_hlds__term_constr_data__HeadVar__1_1;
    MR_Word transform_hlds__term_constr_data__Cast_HeadVar2_4 = transform_hlds__term_constr_data__HeadVar__2_2;

    {
      transform_hlds__term_constr_data__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__term_constr_data_scalar_common_1[1], ((MR_Box) (transform_hlds__term_constr_data__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__term_constr_data__Cast_HeadVar2_4)));
    }
    return transform_hlds__term_constr_data__succeeded;
  }
}

void MR_CALL 
transform_hlds__term_constr_data____Compare____local_vars_0_0(
  MR_Word * transform_hlds__term_constr_data__HeadVar__1_1,
  MR_Word transform_hlds__term_constr_data__HeadVar__2_2,
  MR_Word transform_hlds__term_constr_data__HeadVar__3_3)
{
  {
    MR_bool transform_hlds__term_constr_data__succeeded;
    MR_Word transform_hlds__term_constr_data__Cast_HeadVar1_4 = transform_hlds__term_constr_data__HeadVar__2_2;
    MR_Word transform_hlds__term_constr_data__Cast_HeadVar2_5 = transform_hlds__term_constr_data__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_data_scalar_common_1[1], transform_hlds__term_constr_data__HeadVar__1_1, ((MR_Box) (transform_hlds__term_constr_data__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__term_constr_data__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____local_vars_0_0(
  MR_Word transform_hlds__term_constr_data__HeadVar__1_1,
  MR_Word transform_hlds__term_constr_data__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__term_constr_data__succeeded;
    MR_Word transform_hlds__term_constr_data__Cast_HeadVar1_3 = transform_hlds__term_constr_data__HeadVar__1_1;
    MR_Word transform_hlds__term_constr_data__Cast_HeadVar2_4 = transform_hlds__term_constr_data__HeadVar__2_2;

    {
      transform_hlds__term_constr_data__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__term_constr_data_scalar_common_1[1], ((MR_Box) (transform_hlds__term_constr_data__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__term_constr_data__Cast_HeadVar2_4)));
    }
    return transform_hlds__term_constr_data__succeeded;
  }
}

void MR_CALL 
transform_hlds__term_constr_data____Compare____head_vars_0_0(
  MR_Word * transform_hlds__term_constr_data__HeadVar__1_1,
  MR_Word transform_hlds__term_constr_data__HeadVar__2_2,
  MR_Word transform_hlds__term_constr_data__HeadVar__3_3)
{
  {
    MR_bool transform_hlds__term_constr_data__succeeded;
    MR_Word transform_hlds__term_constr_data__Cast_HeadVar1_4 = transform_hlds__term_constr_data__HeadVar__2_2;
    MR_Word transform_hlds__term_constr_data__Cast_HeadVar2_5 = transform_hlds__term_constr_data__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_data_scalar_common_1[1], transform_hlds__term_constr_data__HeadVar__1_1, ((MR_Box) (transform_hlds__term_constr_data__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__term_constr_data__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____head_vars_0_0(
  MR_Word transform_hlds__term_constr_data__HeadVar__1_1,
  MR_Word transform_hlds__term_constr_data__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__term_constr_data__succeeded;
    MR_Word transform_hlds__term_constr_data__Cast_HeadVar1_3 = transform_hlds__term_constr_data__HeadVar__1_1;
    MR_Word transform_hlds__term_constr_data__Cast_HeadVar2_4 = transform_hlds__term_constr_data__HeadVar__2_2;

    {
      transform_hlds__term_constr_data__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__term_constr_data_scalar_common_1[1], ((MR_Box) (transform_hlds__term_constr_data__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__term_constr_data__Cast_HeadVar2_4)));
    }
    return transform_hlds__term_constr_data__succeeded;
  }
}

void MR_CALL 
transform_hlds__term_constr_data____Compare____call_vars_0_0(
  MR_Word * transform_hlds__term_constr_data__HeadVar__1_1,
  MR_Word transform_hlds__term_constr_data__HeadVar__2_2,
  MR_Word transform_hlds__term_constr_data__HeadVar__3_3)
{
  {
    MR_bool transform_hlds__term_constr_data__succeeded;
    MR_Word transform_hlds__term_constr_data__Cast_HeadVar1_4 = transform_hlds__term_constr_data__HeadVar__2_2;
    MR_Word transform_hlds__term_constr_data__Cast_HeadVar2_5 = transform_hlds__term_constr_data__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_data_scalar_common_1[1], transform_hlds__term_constr_data__HeadVar__1_1, ((MR_Box) (transform_hlds__term_constr_data__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__term_constr_data__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____call_vars_0_0(
  MR_Word transform_hlds__term_constr_data__HeadVar__1_1,
  MR_Word transform_hlds__term_constr_data__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__term_constr_data__succeeded;
    MR_Word transform_hlds__term_constr_data__Cast_HeadVar1_3 = transform_hlds__term_constr_data__HeadVar__1_1;
    MR_Word transform_hlds__term_constr_data__Cast_HeadVar2_4 = transform_hlds__term_constr_data__HeadVar__2_2;

    {
      transform_hlds__term_constr_data__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__term_constr_data_scalar_common_1[1], ((MR_Box) (transform_hlds__term_constr_data__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__term_constr_data__Cast_HeadVar2_4)));
    }
    return transform_hlds__term_constr_data__succeeded;
  }
}

void MR_CALL 
transform_hlds__term_constr_data____Compare____arg_size_result_0_0(
  MR_Word * transform_hlds__term_constr_data__HeadVar__1_1,
  MR_Word transform_hlds__term_constr_data__HeadVar__2_2,
  MR_Word transform_hlds__term_constr_data__HeadVar__3_3)
{
  {
    MR_bool transform_hlds__term_constr_data__succeeded;
    MR_Integer transform_hlds__term_constr_data__CastX_8 = (MR_Integer) transform_hlds__term_constr_data__HeadVar__2_2;
    MR_Integer transform_hlds__term_constr_data__CastY_9 = (MR_Integer) transform_hlds__term_constr_data__HeadVar__3_3;

    transform_hlds__term_constr_data__succeeded = (transform_hlds__term_constr_data__CastX_8 == transform_hlds__term_constr_data__CastY_9);
    if (transform_hlds__term_constr_data__succeeded)
      *transform_hlds__term_constr_data__HeadVar__1_1 = (MR_Integer) 0;
    else
    if ((transform_hlds__term_constr_data__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((transform_hlds__term_constr_data__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *transform_hlds__term_constr_data__HeadVar__1_1 = (MR_Integer) 0;
      else
        *transform_hlds__term_constr_data__HeadVar__1_1 = (MR_Integer) 1;
    else
      {
        MR_Word transform_hlds__term_constr_data__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_data__HeadVar__2_2, (MR_Integer) 0)));

        if ((transform_hlds__term_constr_data__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *transform_hlds__term_constr_data__HeadVar__1_1 = (MR_Integer) 2;
        else
          {
            MR_Word transform_hlds__term_constr_data__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_data__HeadVar__3_3, (MR_Integer) 0)));

            {
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_data_scalar_common_1[9], transform_hlds__term_constr_data__HeadVar__1_1, ((MR_Box) (transform_hlds__term_constr_data__V_11_11)), ((MR_Box) (transform_hlds__term_constr_data__V_7_7)));
            }
          }
      }
  }
}

MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____arg_size_result_0_0(
  MR_Word transform_hlds__term_constr_data__HeadVar__1_1,
  MR_Word transform_hlds__term_constr_data__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__term_constr_data__succeeded;
    MR_Integer transform_hlds__term_constr_data__CastX_7 = (MR_Integer) transform_hlds__term_constr_data__HeadVar__1_1;
    MR_Integer transform_hlds__term_constr_data__CastY_8 = (MR_Integer) transform_hlds__term_constr_data__HeadVar__2_2;

    transform_hlds__term_constr_data__succeeded = (transform_hlds__term_constr_data__CastX_7 == transform_hlds__term_constr_data__CastY_8);
    if (transform_hlds__term_constr_data__succeeded)
      transform_hlds__term_constr_data__succeeded = MR_TRUE;
    else
    if ((transform_hlds__term_constr_data__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Integer transform_hlds__term_constr_data__CastX_3 = (MR_Integer) transform_hlds__term_constr_data__HeadVar__1_1;
        MR_Integer transform_hlds__term_constr_data__CastY_4 = (MR_Integer) transform_hlds__term_constr_data__HeadVar__2_2;

        transform_hlds__term_constr_data__succeeded = (transform_hlds__term_constr_data__CastY_4 == transform_hlds__term_constr_data__CastX_3);
      }
    else
      {
        MR_Word transform_hlds__term_constr_data__TypeInfo_9_9;
        MR_Word transform_hlds__term_constr_data__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_data__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word transform_hlds__term_constr_data__V_6_6;

        transform_hlds__term_constr_data__succeeded = ((MR_tag((MR_Word) transform_hlds__term_constr_data__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
        if (transform_hlds__term_constr_data__succeeded)
          {
            transform_hlds__term_constr_data__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_data__HeadVar__2_2, (MR_Integer) 0)));
            transform_hlds__term_constr_data__TypeInfo_9_9 = (MR_Word) &transform_hlds__term_constr_data_scalar_common_1[9];
            {
              transform_hlds__term_constr_data__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_data__TypeInfo_9_9, ((MR_Box) (transform_hlds__term_constr_data__V_5_5)), ((MR_Box) (transform_hlds__term_constr_data__V_6_6)));
            }
          }
      }
    return transform_hlds__term_constr_data__succeeded;
  }
}

void MR_CALL 
transform_hlds__term_constr_data____Compare____abstract_scc_0_0(
  MR_Word * transform_hlds__term_constr_data__HeadVar__1_1,
  MR_Word transform_hlds__term_constr_data__HeadVar__2_2,
  MR_Word transform_hlds__term_constr_data__HeadVar__3_3)
{
  {
    MR_bool transform_hlds__term_constr_data__succeeded;
    MR_Word transform_hlds__term_constr_data__Cast_HeadVar1_4 = transform_hlds__term_constr_data__HeadVar__2_2;
    MR_Word transform_hlds__term_constr_data__Cast_HeadVar2_5 = transform_hlds__term_constr_data__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_data_scalar_common_1[8], transform_hlds__term_constr_data__HeadVar__1_1, ((MR_Box) (transform_hlds__term_constr_data__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__term_constr_data__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____abstract_scc_0_0(
  MR_Word transform_hlds__term_constr_data__HeadVar__1_1,
  MR_Word transform_hlds__term_constr_data__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__term_constr_data__succeeded;
    MR_Word transform_hlds__term_constr_data__Cast_HeadVar1_3 = transform_hlds__term_constr_data__HeadVar__1_1;
    MR_Word transform_hlds__term_constr_data__Cast_HeadVar2_4 = transform_hlds__term_constr_data__HeadVar__2_2;

    {
      transform_hlds__term_constr_data__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__term_constr_data_scalar_common_1[8], ((MR_Box) (transform_hlds__term_constr_data__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__term_constr_data__Cast_HeadVar2_4)));
    }
    return transform_hlds__term_constr_data__succeeded;
  }
}

void MR_CALL 
transform_hlds__term_constr_data____Compare____abstract_proc_0_0(
  MR_Word * transform_hlds__term_constr_data__HeadVar__1_1,
  MR_Word transform_hlds__term_constr_data__HeadVar__2_2,
  MR_Word transform_hlds__term_constr_data__HeadVar__3_3)
{
  {
    MR_bool transform_hlds__term_constr_data__succeeded;
    MR_Integer transform_hlds__term_constr_data__CastX_39 = (MR_Integer) transform_hlds__term_constr_data__HeadVar__2_2;
    MR_Integer transform_hlds__term_constr_data__CastY_40 = (MR_Integer) transform_hlds__term_constr_data__HeadVar__3_3;

    transform_hlds__term_constr_data__succeeded = (transform_hlds__term_constr_data__CastX_39 == transform_hlds__term_constr_data__CastY_40);
    if (transform_hlds__term_constr_data__succeeded)
      *transform_hlds__term_constr_data__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word transform_hlds__term_constr_data__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word transform_hlds__term_constr_data__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word transform_hlds__term_constr_data__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word transform_hlds__term_constr_data__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word transform_hlds__term_constr_data__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word transform_hlds__term_constr_data__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__HeadVar__2_2, (MR_Integer) 5)));
        MR_Word transform_hlds__term_constr_data__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__HeadVar__2_2, (MR_Integer) 6)));
        MR_Word transform_hlds__term_constr_data__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__HeadVar__2_2, (MR_Integer) 7)));
        MR_Word transform_hlds__term_constr_data__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__HeadVar__2_2, (MR_Integer) 8)));
        MR_Word transform_hlds__term_constr_data__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__HeadVar__2_2, (MR_Integer) 9)));
        MR_Integer transform_hlds__term_constr_data__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__HeadVar__2_2, (MR_Integer) 10)));
        MR_Word transform_hlds__term_constr_data__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__HeadVar__2_2, (MR_Integer) 11)));
        MR_Word transform_hlds__term_constr_data__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word transform_hlds__term_constr_data__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word transform_hlds__term_constr_data__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word transform_hlds__term_constr_data__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word transform_hlds__term_constr_data__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__HeadVar__3_3, (MR_Integer) 4)));
        MR_Word transform_hlds__term_constr_data__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__HeadVar__3_3, (MR_Integer) 5)));
        MR_Word transform_hlds__term_constr_data__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__HeadVar__3_3, (MR_Integer) 6)));
        MR_Word transform_hlds__term_constr_data__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__HeadVar__3_3, (MR_Integer) 7)));
        MR_Word transform_hlds__term_constr_data__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__HeadVar__3_3, (MR_Integer) 8)));
        MR_Word transform_hlds__term_constr_data__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__HeadVar__3_3, (MR_Integer) 9)));
        MR_Integer transform_hlds__term_constr_data__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__HeadVar__3_3, (MR_Integer) 10)));
        MR_Word transform_hlds__term_constr_data__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__HeadVar__3_3, (MR_Integer) 11)));
        MR_Word transform_hlds__term_constr_data__V_28_28;

        {
          transform_hlds__term_constr_data____Compare____abstract_ppid_0_0(&transform_hlds__term_constr_data__V_28_28, transform_hlds__term_constr_data__V_4_4, transform_hlds__term_constr_data__V_16_16);
        }
        transform_hlds__term_constr_data__succeeded = (transform_hlds__term_constr_data__V_28_28 == (MR_Integer) 0);
        transform_hlds__term_constr_data__succeeded = !(transform_hlds__term_constr_data__succeeded);
        if (transform_hlds__term_constr_data__succeeded)
          *transform_hlds__term_constr_data__HeadVar__1_1 = transform_hlds__term_constr_data__V_28_28;
        else
          {
            MR_Word transform_hlds__term_constr_data__V_29_29;
            MR_Integer transform_hlds__term_constr_data__V_53_53 = (MR_Integer) transform_hlds__term_constr_data__V_5_5;
            MR_Integer transform_hlds__term_constr_data__V_54_54 = (MR_Integer) transform_hlds__term_constr_data__V_17_17;

            {
              mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__term_constr_data__V_29_29, transform_hlds__term_constr_data__V_53_53, transform_hlds__term_constr_data__V_54_54);
            }
            transform_hlds__term_constr_data__succeeded = (transform_hlds__term_constr_data__V_29_29 == (MR_Integer) 0);
            transform_hlds__term_constr_data__succeeded = !(transform_hlds__term_constr_data__succeeded);
            if (transform_hlds__term_constr_data__succeeded)
              *transform_hlds__term_constr_data__HeadVar__1_1 = transform_hlds__term_constr_data__V_29_29;
            else
              {
                MR_Word transform_hlds__term_constr_data__V_30_30;

                {
                  mercury__term____Compare____context_0_0(&transform_hlds__term_constr_data__V_30_30, transform_hlds__term_constr_data__V_6_6, transform_hlds__term_constr_data__V_18_18);
                }
                transform_hlds__term_constr_data__succeeded = (transform_hlds__term_constr_data__V_30_30 == (MR_Integer) 0);
                transform_hlds__term_constr_data__succeeded = !(transform_hlds__term_constr_data__succeeded);
                if (transform_hlds__term_constr_data__succeeded)
                  *transform_hlds__term_constr_data__HeadVar__1_1 = transform_hlds__term_constr_data__V_30_30;
                else
                  {
                    MR_Word transform_hlds__term_constr_data__V_31_31;

                    {
                      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_data_scalar_common_1[1], &transform_hlds__term_constr_data__V_31_31, ((MR_Box) (transform_hlds__term_constr_data__V_7_7)), ((MR_Box) (transform_hlds__term_constr_data__V_19_19)));
                    }
                    transform_hlds__term_constr_data__succeeded = (transform_hlds__term_constr_data__V_31_31 == (MR_Integer) 0);
                    transform_hlds__term_constr_data__succeeded = !(transform_hlds__term_constr_data__succeeded);
                    if (transform_hlds__term_constr_data__succeeded)
                      *transform_hlds__term_constr_data__HeadVar__1_1 = transform_hlds__term_constr_data__V_31_31;
                    else
                      {
                        MR_Word transform_hlds__term_constr_data__V_32_32;

                        {
                          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_data_scalar_common_1[4], &transform_hlds__term_constr_data__V_32_32, ((MR_Box) (transform_hlds__term_constr_data__V_8_8)), ((MR_Box) (transform_hlds__term_constr_data__V_20_20)));
                        }
                        transform_hlds__term_constr_data__succeeded = (transform_hlds__term_constr_data__V_32_32 == (MR_Integer) 0);
                        transform_hlds__term_constr_data__succeeded = !(transform_hlds__term_constr_data__succeeded);
                        if (transform_hlds__term_constr_data__succeeded)
                          *transform_hlds__term_constr_data__HeadVar__1_1 = transform_hlds__term_constr_data__V_32_32;
                        else
                          {
                            MR_Word transform_hlds__term_constr_data__V_33_33;

                            {
                              transform_hlds__term_constr_data____Compare____abstract_goal_0_0(&transform_hlds__term_constr_data__V_33_33, transform_hlds__term_constr_data__V_9_9, transform_hlds__term_constr_data__V_21_21);
                            }
                            transform_hlds__term_constr_data__succeeded = (transform_hlds__term_constr_data__V_33_33 == (MR_Integer) 0);
                            transform_hlds__term_constr_data__succeeded = !(transform_hlds__term_constr_data__succeeded);
                            if (transform_hlds__term_constr_data__succeeded)
                              *transform_hlds__term_constr_data__HeadVar__1_1 = transform_hlds__term_constr_data__V_33_33;
                            else
                              {
                                MR_Word transform_hlds__term_constr_data__V_34_34;

                                {
                                  mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_data_scalar_common_2[0], &transform_hlds__term_constr_data__V_34_34, ((MR_Box) (transform_hlds__term_constr_data__V_10_10)), ((MR_Box) (transform_hlds__term_constr_data__V_22_22)));
                                }
                                transform_hlds__term_constr_data__succeeded = (transform_hlds__term_constr_data__V_34_34 == (MR_Integer) 0);
                                transform_hlds__term_constr_data__succeeded = !(transform_hlds__term_constr_data__succeeded);
                                if (transform_hlds__term_constr_data__succeeded)
                                  *transform_hlds__term_constr_data__HeadVar__1_1 = transform_hlds__term_constr_data__V_34_34;
                                else
                                  {
                                    MR_Word transform_hlds__term_constr_data__V_35_35;

                                    {
                                      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_data_scalar_common_1[6], &transform_hlds__term_constr_data__V_35_35, ((MR_Box) (transform_hlds__term_constr_data__V_11_11)), ((MR_Box) (transform_hlds__term_constr_data__V_23_23)));
                                    }
                                    transform_hlds__term_constr_data__succeeded = (transform_hlds__term_constr_data__V_35_35 == (MR_Integer) 0);
                                    transform_hlds__term_constr_data__succeeded = !(transform_hlds__term_constr_data__succeeded);
                                    if (transform_hlds__term_constr_data__succeeded)
                                      *transform_hlds__term_constr_data__HeadVar__1_1 = transform_hlds__term_constr_data__V_35_35;
                                    else
                                      {
                                        MR_Word transform_hlds__term_constr_data__V_36_36;

                                        {
                                          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_data_scalar_common_1[2], &transform_hlds__term_constr_data__V_36_36, ((MR_Box) (transform_hlds__term_constr_data__V_12_12)), ((MR_Box) (transform_hlds__term_constr_data__V_24_24)));
                                        }
                                        transform_hlds__term_constr_data__succeeded = (transform_hlds__term_constr_data__V_36_36 == (MR_Integer) 0);
                                        transform_hlds__term_constr_data__succeeded = !(transform_hlds__term_constr_data__succeeded);
                                        if (transform_hlds__term_constr_data__succeeded)
                                          *transform_hlds__term_constr_data__HeadVar__1_1 = transform_hlds__term_constr_data__V_36_36;
                                        else
                                          {
                                            MR_Word transform_hlds__term_constr_data__V_37_37;
                                            MR_Integer transform_hlds__term_constr_data__V_55_55 = (MR_Integer) transform_hlds__term_constr_data__V_13_13;
                                            MR_Integer transform_hlds__term_constr_data__V_56_56 = (MR_Integer) transform_hlds__term_constr_data__V_25_25;

                                            {
                                              mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__term_constr_data__V_37_37, transform_hlds__term_constr_data__V_55_55, transform_hlds__term_constr_data__V_56_56);
                                            }
                                            transform_hlds__term_constr_data__succeeded = (transform_hlds__term_constr_data__V_37_37 == (MR_Integer) 0);
                                            transform_hlds__term_constr_data__succeeded = !(transform_hlds__term_constr_data__succeeded);
                                            if (transform_hlds__term_constr_data__succeeded)
                                              *transform_hlds__term_constr_data__HeadVar__1_1 = transform_hlds__term_constr_data__V_37_37;
                                            else
                                              {
                                                MR_Word transform_hlds__term_constr_data__V_38_38;

                                                {
                                                  mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__term_constr_data__V_38_38, transform_hlds__term_constr_data__V_14_14, transform_hlds__term_constr_data__V_26_26);
                                                }
                                                transform_hlds__term_constr_data__succeeded = (transform_hlds__term_constr_data__V_38_38 == (MR_Integer) 0);
                                                transform_hlds__term_constr_data__succeeded = !(transform_hlds__term_constr_data__succeeded);
                                                if (transform_hlds__term_constr_data__succeeded)
                                                  *transform_hlds__term_constr_data__HeadVar__1_1 = transform_hlds__term_constr_data__V_38_38;
                                                else
                                                  {
                                                    {
                                                      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_data_scalar_common_1[7], transform_hlds__term_constr_data__HeadVar__1_1, ((MR_Box) (transform_hlds__term_constr_data__V_15_15)), ((MR_Box) (transform_hlds__term_constr_data__V_27_27)));
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
      }
  }
}

MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____abstract_proc_0_0(
  MR_Word transform_hlds__term_constr_data__HeadVar__1_1,
  MR_Word transform_hlds__term_constr_data__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__term_constr_data__succeeded;
    MR_Integer transform_hlds__term_constr_data__CastX_27 = (MR_Integer) transform_hlds__term_constr_data__HeadVar__1_1;
    MR_Integer transform_hlds__term_constr_data__CastY_28 = (MR_Integer) transform_hlds__term_constr_data__HeadVar__2_2;

    transform_hlds__term_constr_data__succeeded = (transform_hlds__term_constr_data__CastX_27 == transform_hlds__term_constr_data__CastY_28);
    if (transform_hlds__term_constr_data__succeeded)
      transform_hlds__term_constr_data__succeeded = MR_TRUE;
    else
      {
        MR_Word transform_hlds__term_constr_data__TypeInfo_30_30;
        MR_Word transform_hlds__term_constr_data__TypeInfo_31_31;
        MR_Word transform_hlds__term_constr_data__TypeInfo_32_32;
        MR_Word transform_hlds__term_constr_data__TypeInfo_33_33;
        MR_Word transform_hlds__term_constr_data__TypeInfo_34_34;
        MR_Word transform_hlds__term_constr_data__TypeInfo_35_35;
        MR_Word transform_hlds__term_constr_data__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word transform_hlds__term_constr_data__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word transform_hlds__term_constr_data__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word transform_hlds__term_constr_data__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__HeadVar__1_1, (MR_Integer) 3)));
        MR_Word transform_hlds__term_constr_data__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__HeadVar__1_1, (MR_Integer) 4)));
        MR_Word transform_hlds__term_constr_data__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__HeadVar__1_1, (MR_Integer) 5)));
        MR_Word transform_hlds__term_constr_data__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__HeadVar__1_1, (MR_Integer) 6)));
        MR_Word transform_hlds__term_constr_data__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__HeadVar__1_1, (MR_Integer) 7)));
        MR_Word transform_hlds__term_constr_data__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__HeadVar__1_1, (MR_Integer) 8)));
        MR_Word transform_hlds__term_constr_data__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__HeadVar__1_1, (MR_Integer) 9)));
        MR_Integer transform_hlds__term_constr_data__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__HeadVar__1_1, (MR_Integer) 10)));
        MR_Word transform_hlds__term_constr_data__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__HeadVar__1_1, (MR_Integer) 11)));
        MR_Word transform_hlds__term_constr_data__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word transform_hlds__term_constr_data__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word transform_hlds__term_constr_data__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word transform_hlds__term_constr_data__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word transform_hlds__term_constr_data__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word transform_hlds__term_constr_data__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__HeadVar__2_2, (MR_Integer) 5)));
        MR_Word transform_hlds__term_constr_data__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__HeadVar__2_2, (MR_Integer) 6)));
        MR_Word transform_hlds__term_constr_data__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__HeadVar__2_2, (MR_Integer) 7)));
        MR_Word transform_hlds__term_constr_data__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__HeadVar__2_2, (MR_Integer) 8)));
        MR_Word transform_hlds__term_constr_data__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__HeadVar__2_2, (MR_Integer) 9)));
        MR_Integer transform_hlds__term_constr_data__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__HeadVar__2_2, (MR_Integer) 10)));
        MR_Word transform_hlds__term_constr_data__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__HeadVar__2_2, (MR_Integer) 11)));

        {
          transform_hlds__term_constr_data__succeeded = transform_hlds__term_constr_data____Unify____abstract_ppid_0_0(transform_hlds__term_constr_data__V_3_3, transform_hlds__term_constr_data__V_15_15);
        }
        if (transform_hlds__term_constr_data__succeeded)
          {
            transform_hlds__term_constr_data__succeeded = (transform_hlds__term_constr_data__V_4_4 == transform_hlds__term_constr_data__V_16_16);
            if (transform_hlds__term_constr_data__succeeded)
              {
                {
                  transform_hlds__term_constr_data__succeeded = mercury__term____Unify____context_0_0(transform_hlds__term_constr_data__V_5_5, transform_hlds__term_constr_data__V_17_17);
                }
                if (transform_hlds__term_constr_data__succeeded)
                  {
                    transform_hlds__term_constr_data__TypeInfo_30_30 = (MR_Word) &transform_hlds__term_constr_data_scalar_common_1[1];
                    {
                      transform_hlds__term_constr_data__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_data__TypeInfo_30_30, ((MR_Box) (transform_hlds__term_constr_data__V_6_6)), ((MR_Box) (transform_hlds__term_constr_data__V_18_18)));
                    }
                    if (transform_hlds__term_constr_data__succeeded)
                      {
                        transform_hlds__term_constr_data__TypeInfo_31_31 = (MR_Word) &transform_hlds__term_constr_data_scalar_common_1[4];
                        {
                          transform_hlds__term_constr_data__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_data__TypeInfo_31_31, ((MR_Box) (transform_hlds__term_constr_data__V_7_7)), ((MR_Box) (transform_hlds__term_constr_data__V_19_19)));
                        }
                        if (transform_hlds__term_constr_data__succeeded)
                          {
                            {
                              transform_hlds__term_constr_data__succeeded = transform_hlds__term_constr_data____Unify____abstract_goal_0_0(transform_hlds__term_constr_data__V_8_8, transform_hlds__term_constr_data__V_20_20);
                            }
                            if (transform_hlds__term_constr_data__succeeded)
                              {
                                transform_hlds__term_constr_data__TypeInfo_32_32 = (MR_Word) &transform_hlds__term_constr_data_scalar_common_2[0];
                                {
                                  transform_hlds__term_constr_data__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_data__TypeInfo_32_32, ((MR_Box) (transform_hlds__term_constr_data__V_9_9)), ((MR_Box) (transform_hlds__term_constr_data__V_21_21)));
                                }
                                if (transform_hlds__term_constr_data__succeeded)
                                  {
                                    transform_hlds__term_constr_data__TypeInfo_33_33 = (MR_Word) &transform_hlds__term_constr_data_scalar_common_1[6];
                                    {
                                      transform_hlds__term_constr_data__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_data__TypeInfo_33_33, ((MR_Box) (transform_hlds__term_constr_data__V_10_10)), ((MR_Box) (transform_hlds__term_constr_data__V_22_22)));
                                    }
                                    if (transform_hlds__term_constr_data__succeeded)
                                      {
                                        transform_hlds__term_constr_data__TypeInfo_34_34 = (MR_Word) &transform_hlds__term_constr_data_scalar_common_1[2];
                                        {
                                          transform_hlds__term_constr_data__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_data__TypeInfo_34_34, ((MR_Box) (transform_hlds__term_constr_data__V_11_11)), ((MR_Box) (transform_hlds__term_constr_data__V_23_23)));
                                        }
                                        if (transform_hlds__term_constr_data__succeeded)
                                          {
                                            transform_hlds__term_constr_data__succeeded = (transform_hlds__term_constr_data__V_12_12 == transform_hlds__term_constr_data__V_24_24);
                                            if (transform_hlds__term_constr_data__succeeded)
                                              {
                                                transform_hlds__term_constr_data__succeeded = (transform_hlds__term_constr_data__V_13_13 == transform_hlds__term_constr_data__V_25_25);
                                                if (transform_hlds__term_constr_data__succeeded)
                                                  {
                                                    transform_hlds__term_constr_data__TypeInfo_35_35 = (MR_Word) &transform_hlds__term_constr_data_scalar_common_1[7];
                                                    {
                                                      transform_hlds__term_constr_data__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_data__TypeInfo_35_35, ((MR_Box) (transform_hlds__term_constr_data__V_14_14)), ((MR_Box) (transform_hlds__term_constr_data__V_26_26)));
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
      }
    return transform_hlds__term_constr_data__succeeded;
  }
}

void MR_CALL 
transform_hlds__term_constr_data____Compare____abstract_ppid_0_0(
  MR_Word * transform_hlds__term_constr_data__HeadVar__1_1,
  MR_Word transform_hlds__term_constr_data__HeadVar__2_2,
  MR_Word transform_hlds__term_constr_data__HeadVar__3_3)
{
  {
    MR_bool transform_hlds__term_constr_data__succeeded;
    MR_Integer transform_hlds__term_constr_data__CastX_6 = (MR_Integer) transform_hlds__term_constr_data__HeadVar__2_2;
    MR_Integer transform_hlds__term_constr_data__CastY_7 = (MR_Integer) transform_hlds__term_constr_data__HeadVar__3_3;

    transform_hlds__term_constr_data__succeeded = (transform_hlds__term_constr_data__CastX_6 == transform_hlds__term_constr_data__CastY_7);
    if (transform_hlds__term_constr_data__succeeded)
      *transform_hlds__term_constr_data__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word transform_hlds__term_constr_data__V_4_4 = (MR_Word) transform_hlds__term_constr_data__HeadVar__2_2;
        MR_Word transform_hlds__term_constr_data__V_5_5 = (MR_Word) transform_hlds__term_constr_data__HeadVar__3_3;

        {
          hlds__hlds_pred____Compare____pred_proc_id_0_0(transform_hlds__term_constr_data__HeadVar__1_1, transform_hlds__term_constr_data__V_4_4, transform_hlds__term_constr_data__V_5_5);
        }
      }
  }
}

MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____abstract_ppid_0_0(
  MR_Word transform_hlds__term_constr_data__HeadVar__1_1,
  MR_Word transform_hlds__term_constr_data__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__term_constr_data__succeeded;
    MR_Integer transform_hlds__term_constr_data__CastX_5 = (MR_Integer) transform_hlds__term_constr_data__HeadVar__1_1;
    MR_Integer transform_hlds__term_constr_data__CastY_6 = (MR_Integer) transform_hlds__term_constr_data__HeadVar__2_2;

    transform_hlds__term_constr_data__succeeded = (transform_hlds__term_constr_data__CastX_5 == transform_hlds__term_constr_data__CastY_6);
    if (transform_hlds__term_constr_data__succeeded)
      transform_hlds__term_constr_data__succeeded = MR_TRUE;
    else
      {
        MR_Word transform_hlds__term_constr_data__V_3_3 = (MR_Word) transform_hlds__term_constr_data__HeadVar__1_1;
        MR_Word transform_hlds__term_constr_data__V_4_4 = (MR_Word) transform_hlds__term_constr_data__HeadVar__2_2;

        {
          transform_hlds__term_constr_data__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__term_constr_data__V_3_3, transform_hlds__term_constr_data__V_4_4);
        }
      }
    return transform_hlds__term_constr_data__succeeded;
  }
}

void MR_CALL 
transform_hlds__term_constr_data____Compare____abstract_ho_call_0_0(
  MR_Word * transform_hlds__term_constr_data__HeadVar__1_1,
  MR_Word transform_hlds__term_constr_data__HeadVar__2_2,
  MR_Word transform_hlds__term_constr_data__HeadVar__3_3)
{
  {
    MR_bool transform_hlds__term_constr_data__succeeded;
    MR_Integer transform_hlds__term_constr_data__CastX_6 = (MR_Integer) transform_hlds__term_constr_data__HeadVar__2_2;
    MR_Integer transform_hlds__term_constr_data__CastY_7 = (MR_Integer) transform_hlds__term_constr_data__HeadVar__3_3;

    transform_hlds__term_constr_data__succeeded = (transform_hlds__term_constr_data__CastX_6 == transform_hlds__term_constr_data__CastY_7);
    if (transform_hlds__term_constr_data__succeeded)
      *transform_hlds__term_constr_data__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word transform_hlds__term_constr_data__V_4_4 = (MR_Word) transform_hlds__term_constr_data__HeadVar__2_2;
        MR_Word transform_hlds__term_constr_data__V_5_5 = (MR_Word) transform_hlds__term_constr_data__HeadVar__3_3;

        {
          mercury__term____Compare____context_0_0(transform_hlds__term_constr_data__HeadVar__1_1, transform_hlds__term_constr_data__V_4_4, transform_hlds__term_constr_data__V_5_5);
        }
      }
  }
}

MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____abstract_ho_call_0_0(
  MR_Word transform_hlds__term_constr_data__HeadVar__1_1,
  MR_Word transform_hlds__term_constr_data__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__term_constr_data__succeeded;
    MR_Integer transform_hlds__term_constr_data__CastX_5 = (MR_Integer) transform_hlds__term_constr_data__HeadVar__1_1;
    MR_Integer transform_hlds__term_constr_data__CastY_6 = (MR_Integer) transform_hlds__term_constr_data__HeadVar__2_2;

    transform_hlds__term_constr_data__succeeded = (transform_hlds__term_constr_data__CastX_5 == transform_hlds__term_constr_data__CastY_6);
    if (transform_hlds__term_constr_data__succeeded)
      transform_hlds__term_constr_data__succeeded = MR_TRUE;
    else
      {
        MR_Word transform_hlds__term_constr_data__V_3_3 = (MR_Word) transform_hlds__term_constr_data__HeadVar__1_1;
        MR_Word transform_hlds__term_constr_data__V_4_4 = (MR_Word) transform_hlds__term_constr_data__HeadVar__2_2;

        {
          transform_hlds__term_constr_data__succeeded = mercury__term____Unify____context_0_0(transform_hlds__term_constr_data__V_3_3, transform_hlds__term_constr_data__V_4_4);
        }
      }
    return transform_hlds__term_constr_data__succeeded;
  }
}

void MR_CALL 
transform_hlds__term_constr_data____Compare____abstract_goals_0_0(
  MR_Word * transform_hlds__term_constr_data__HeadVar__1_1,
  MR_Word transform_hlds__term_constr_data__HeadVar__2_2,
  MR_Word transform_hlds__term_constr_data__HeadVar__3_3)
{
  {
    MR_bool transform_hlds__term_constr_data__succeeded;
    MR_Word transform_hlds__term_constr_data__Cast_HeadVar1_4 = transform_hlds__term_constr_data__HeadVar__2_2;
    MR_Word transform_hlds__term_constr_data__Cast_HeadVar2_5 = transform_hlds__term_constr_data__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_data_scalar_common_1[3], transform_hlds__term_constr_data__HeadVar__1_1, ((MR_Box) (transform_hlds__term_constr_data__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__term_constr_data__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
transform_hlds__term_constr_data____Unify____abstract_goals_0_0(
  MR_Word transform_hlds__term_constr_data__HeadVar__1_1,
  MR_Word transform_hlds__term_constr_data__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__term_constr_data__succeeded;
    MR_Word transform_hlds__term_constr_data__Cast_HeadVar1_3 = transform_hlds__term_constr_data__HeadVar__1_1;
    MR_Word transform_hlds__term_constr_data__Cast_HeadVar2_4 = transform_hlds__term_constr_data__HeadVar__2_2;

    {
      transform_hlds__term_constr_data__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__term_constr_data_scalar_common_1[3], ((MR_Box) (transform_hlds__term_constr_data__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__term_constr_data__Cast_HeadVar2_4)));
    }
    return transform_hlds__term_constr_data__succeeded;
  }
}

void MR_CALL 
transform_hlds__term_constr_data____Compare____abstract_goal_0_0(
  MR_Word * transform_hlds__term_constr_data__HeadVar__1_1,
  MR_Word transform_hlds__term_constr_data__HeadVar__2_2,
  MR_Word transform_hlds__term_constr_data__HeadVar__3_3)
{
  {
    MR_bool transform_hlds__term_constr_data__succeeded;
    MR_Integer transform_hlds__term_constr_data__CastX_153 = (MR_Integer) transform_hlds__term_constr_data__HeadVar__2_2;
    MR_Integer transform_hlds__term_constr_data__CastY_154 = (MR_Integer) transform_hlds__term_constr_data__HeadVar__3_3;

    transform_hlds__term_constr_data__succeeded = (transform_hlds__term_constr_data__CastX_153 == transform_hlds__term_constr_data__CastY_154);
    if (transform_hlds__term_constr_data__succeeded)
      *transform_hlds__term_constr_data__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) transform_hlds__term_constr_data__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word transform_hlds__term_constr_data__V_182_182 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__HeadVar__2_2, (MR_Integer) 3)));
            MR_Word transform_hlds__term_constr_data__V_183_183 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__HeadVar__2_2, (MR_Integer) 2)));
            MR_Integer transform_hlds__term_constr_data__V_184_184 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word transform_hlds__term_constr_data__V_185_185 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) transform_hlds__term_constr_data__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word transform_hlds__term_constr_data__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__HeadVar__3_3, (MR_Integer) 0)));
                  MR_Integer transform_hlds__term_constr_data__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__HeadVar__3_3, (MR_Integer) 1)));
                  MR_Word transform_hlds__term_constr_data__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__HeadVar__3_3, (MR_Integer) 2)));
                  MR_Word transform_hlds__term_constr_data__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__HeadVar__3_3, (MR_Integer) 3)));
                  MR_Word transform_hlds__term_constr_data__V_12_12;

                  {
                    mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_data_scalar_common_1[3], &transform_hlds__term_constr_data__V_12_12, ((MR_Box) (transform_hlds__term_constr_data__V_185_185)), ((MR_Box) (transform_hlds__term_constr_data__V_8_8)));
                  }
                  transform_hlds__term_constr_data__succeeded = (transform_hlds__term_constr_data__V_12_12 == (MR_Integer) 0);
                  transform_hlds__term_constr_data__succeeded = !(transform_hlds__term_constr_data__succeeded);
                  if (transform_hlds__term_constr_data__succeeded)
                    *transform_hlds__term_constr_data__HeadVar__1_1 = transform_hlds__term_constr_data__V_12_12;
                  else
                    {
                      MR_Word transform_hlds__term_constr_data__V_13_13;

                      {
                        mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__term_constr_data__V_13_13, transform_hlds__term_constr_data__V_184_184, transform_hlds__term_constr_data__V_9_9);
                      }
                      transform_hlds__term_constr_data__succeeded = (transform_hlds__term_constr_data__V_13_13 == (MR_Integer) 0);
                      transform_hlds__term_constr_data__succeeded = !(transform_hlds__term_constr_data__succeeded);
                      if (transform_hlds__term_constr_data__succeeded)
                        *transform_hlds__term_constr_data__HeadVar__1_1 = transform_hlds__term_constr_data__V_13_13;
                      else
                        {
                          MR_Word transform_hlds__term_constr_data__V_14_14;

                          {
                            mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_data_scalar_common_1[1], &transform_hlds__term_constr_data__V_14_14, ((MR_Box) (transform_hlds__term_constr_data__V_183_183)), ((MR_Box) (transform_hlds__term_constr_data__V_10_10)));
                          }
                          transform_hlds__term_constr_data__succeeded = (transform_hlds__term_constr_data__V_14_14 == (MR_Integer) 0);
                          transform_hlds__term_constr_data__succeeded = !(transform_hlds__term_constr_data__succeeded);
                          if (transform_hlds__term_constr_data__succeeded)
                            *transform_hlds__term_constr_data__HeadVar__1_1 = transform_hlds__term_constr_data__V_14_14;
                          else
                            {
                              {
                                mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_data_scalar_common_1[1], transform_hlds__term_constr_data__HeadVar__1_1, ((MR_Box) (transform_hlds__term_constr_data__V_182_182)), ((MR_Box) (transform_hlds__term_constr_data__V_11_11)));
                              }
                            }
                        }
                    }
                }
                break;
              case (MR_Integer) 1:
                *transform_hlds__term_constr_data__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 2:
                *transform_hlds__term_constr_data__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                *transform_hlds__term_constr_data__HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word transform_hlds__term_constr_data__V_179_179 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_data__HeadVar__2_2, (MR_Integer) 2)));
            MR_Word transform_hlds__term_constr_data__V_180_180 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_data__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word transform_hlds__term_constr_data__V_181_181 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_data__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) transform_hlds__term_constr_data__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *transform_hlds__term_constr_data__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word transform_hlds__term_constr_data__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_data__HeadVar__3_3, (MR_Integer) 0)));
                  MR_Word transform_hlds__term_constr_data__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_data__HeadVar__3_3, (MR_Integer) 1)));
                  MR_Word transform_hlds__term_constr_data__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_data__HeadVar__3_3, (MR_Integer) 2)));
                  MR_Word transform_hlds__term_constr_data__V_53_53;

                  {
                    mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_data_scalar_common_1[3], &transform_hlds__term_constr_data__V_53_53, ((MR_Box) (transform_hlds__term_constr_data__V_181_181)), ((MR_Box) (transform_hlds__term_constr_data__V_50_50)));
                  }
                  transform_hlds__term_constr_data__succeeded = (transform_hlds__term_constr_data__V_53_53 == (MR_Integer) 0);
                  transform_hlds__term_constr_data__succeeded = !(transform_hlds__term_constr_data__succeeded);
                  if (transform_hlds__term_constr_data__succeeded)
                    *transform_hlds__term_constr_data__HeadVar__1_1 = transform_hlds__term_constr_data__V_53_53;
                  else
                    {
                      MR_Word transform_hlds__term_constr_data__V_54_54;

                      {
                        mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_data_scalar_common_1[1], &transform_hlds__term_constr_data__V_54_54, ((MR_Box) (transform_hlds__term_constr_data__V_180_180)), ((MR_Box) (transform_hlds__term_constr_data__V_51_51)));
                      }
                      transform_hlds__term_constr_data__succeeded = (transform_hlds__term_constr_data__V_54_54 == (MR_Integer) 0);
                      transform_hlds__term_constr_data__succeeded = !(transform_hlds__term_constr_data__succeeded);
                      if (transform_hlds__term_constr_data__succeeded)
                        *transform_hlds__term_constr_data__HeadVar__1_1 = transform_hlds__term_constr_data__V_54_54;
                      else
                        {
                          {
                            mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_data_scalar_common_1[1], transform_hlds__term_constr_data__HeadVar__1_1, ((MR_Box) (transform_hlds__term_constr_data__V_179_179)), ((MR_Box) (transform_hlds__term_constr_data__V_52_52)));
                          }
                        }
                    }
                }
                break;
              case (MR_Integer) 2:
                *transform_hlds__term_constr_data__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                *transform_hlds__term_constr_data__HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word transform_hlds__term_constr_data__V_172_172 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_data__HeadVar__2_2, (MR_Integer) 6)));
            MR_Word transform_hlds__term_constr_data__V_173_173 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_data__HeadVar__2_2, (MR_Integer) 5)));
            MR_Word transform_hlds__term_constr_data__V_174_174 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_data__HeadVar__2_2, (MR_Integer) 4)));
            MR_Word transform_hlds__term_constr_data__V_175_175 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_data__HeadVar__2_2, (MR_Integer) 3)));
            MR_Word transform_hlds__term_constr_data__V_176_176 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_data__HeadVar__2_2, (MR_Integer) 2)));
            MR_Word transform_hlds__term_constr_data__V_177_177 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_data__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word transform_hlds__term_constr_data__V_178_178 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_data__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) transform_hlds__term_constr_data__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *transform_hlds__term_constr_data__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *transform_hlds__term_constr_data__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word transform_hlds__term_constr_data__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_data__HeadVar__3_3, (MR_Integer) 0)));
                  MR_Word transform_hlds__term_constr_data__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_data__HeadVar__3_3, (MR_Integer) 1)));
                  MR_Word transform_hlds__term_constr_data__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_data__HeadVar__3_3, (MR_Integer) 2)));
                  MR_Word transform_hlds__term_constr_data__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_data__HeadVar__3_3, (MR_Integer) 3)));
                  MR_Word transform_hlds__term_constr_data__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_data__HeadVar__3_3, (MR_Integer) 4)));
                  MR_Word transform_hlds__term_constr_data__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_data__HeadVar__3_3, (MR_Integer) 5)));
                  MR_Word transform_hlds__term_constr_data__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_data__HeadVar__3_3, (MR_Integer) 6)));
                  MR_Word transform_hlds__term_constr_data__V_106_106;

                  {
                    transform_hlds__term_constr_data____Compare____abstract_ppid_0_0(&transform_hlds__term_constr_data__V_106_106, transform_hlds__term_constr_data__V_178_178, transform_hlds__term_constr_data__V_99_99);
                  }
                  transform_hlds__term_constr_data__succeeded = (transform_hlds__term_constr_data__V_106_106 == (MR_Integer) 0);
                  transform_hlds__term_constr_data__succeeded = !(transform_hlds__term_constr_data__succeeded);
                  if (transform_hlds__term_constr_data__succeeded)
                    *transform_hlds__term_constr_data__HeadVar__1_1 = transform_hlds__term_constr_data__V_106_106;
                  else
                    {
                      MR_Word transform_hlds__term_constr_data__V_107_107;

                      {
                        mercury__term____Compare____context_0_0(&transform_hlds__term_constr_data__V_107_107, transform_hlds__term_constr_data__V_177_177, transform_hlds__term_constr_data__V_100_100);
                      }
                      transform_hlds__term_constr_data__succeeded = (transform_hlds__term_constr_data__V_107_107 == (MR_Integer) 0);
                      transform_hlds__term_constr_data__succeeded = !(transform_hlds__term_constr_data__succeeded);
                      if (transform_hlds__term_constr_data__succeeded)
                        *transform_hlds__term_constr_data__HeadVar__1_1 = transform_hlds__term_constr_data__V_107_107;
                      else
                        {
                          MR_Word transform_hlds__term_constr_data__V_108_108;

                          {
                            mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_data_scalar_common_1[1], &transform_hlds__term_constr_data__V_108_108, ((MR_Box) (transform_hlds__term_constr_data__V_176_176)), ((MR_Box) (transform_hlds__term_constr_data__V_101_101)));
                          }
                          transform_hlds__term_constr_data__succeeded = (transform_hlds__term_constr_data__V_108_108 == (MR_Integer) 0);
                          transform_hlds__term_constr_data__succeeded = !(transform_hlds__term_constr_data__succeeded);
                          if (transform_hlds__term_constr_data__succeeded)
                            *transform_hlds__term_constr_data__HeadVar__1_1 = transform_hlds__term_constr_data__V_108_108;
                          else
                            {
                              MR_Word transform_hlds__term_constr_data__V_109_109;

                              {
                                mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_data_scalar_common_1[2], &transform_hlds__term_constr_data__V_109_109, ((MR_Box) (transform_hlds__term_constr_data__V_175_175)), ((MR_Box) (transform_hlds__term_constr_data__V_102_102)));
                              }
                              transform_hlds__term_constr_data__succeeded = (transform_hlds__term_constr_data__V_109_109 == (MR_Integer) 0);
                              transform_hlds__term_constr_data__succeeded = !(transform_hlds__term_constr_data__succeeded);
                              if (transform_hlds__term_constr_data__succeeded)
                                *transform_hlds__term_constr_data__HeadVar__1_1 = transform_hlds__term_constr_data__V_109_109;
                              else
                                {
                                  MR_Word transform_hlds__term_constr_data__V_110_110;

                                  {
                                    mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_data_scalar_common_1[1], &transform_hlds__term_constr_data__V_110_110, ((MR_Box) (transform_hlds__term_constr_data__V_174_174)), ((MR_Box) (transform_hlds__term_constr_data__V_103_103)));
                                  }
                                  transform_hlds__term_constr_data__succeeded = (transform_hlds__term_constr_data__V_110_110 == (MR_Integer) 0);
                                  transform_hlds__term_constr_data__succeeded = !(transform_hlds__term_constr_data__succeeded);
                                  if (transform_hlds__term_constr_data__succeeded)
                                    *transform_hlds__term_constr_data__HeadVar__1_1 = transform_hlds__term_constr_data__V_110_110;
                                  else
                                    {
                                      MR_Word transform_hlds__term_constr_data__V_111_111;

                                      {
                                        mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_data_scalar_common_1[1], &transform_hlds__term_constr_data__V_111_111, ((MR_Box) (transform_hlds__term_constr_data__V_173_173)), ((MR_Box) (transform_hlds__term_constr_data__V_104_104)));
                                      }
                                      transform_hlds__term_constr_data__succeeded = (transform_hlds__term_constr_data__V_111_111 == (MR_Integer) 0);
                                      transform_hlds__term_constr_data__succeeded = !(transform_hlds__term_constr_data__succeeded);
                                      if (transform_hlds__term_constr_data__succeeded)
                                        *transform_hlds__term_constr_data__HeadVar__1_1 = transform_hlds__term_constr_data__V_111_111;
                                      else
                                        {
                                          libs__polyhedron____Compare____polyhedron_0_0(transform_hlds__term_constr_data__HeadVar__1_1, transform_hlds__term_constr_data__V_172_172, transform_hlds__term_constr_data__V_105_105);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                break;
              case (MR_Integer) 3:
                *transform_hlds__term_constr_data__HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word transform_hlds__term_constr_data__V_186_186 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_data__HeadVar__2_2, (MR_Integer) 2)));
            MR_Word transform_hlds__term_constr_data__V_187_187 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_data__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word transform_hlds__term_constr_data__V_188_188 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_data__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) transform_hlds__term_constr_data__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *transform_hlds__term_constr_data__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *transform_hlds__term_constr_data__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                *transform_hlds__term_constr_data__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                {
                  MR_Word transform_hlds__term_constr_data__V_148_148 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_data__HeadVar__3_3, (MR_Integer) 0)));
                  MR_Word transform_hlds__term_constr_data__V_149_149 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_data__HeadVar__3_3, (MR_Integer) 1)));
                  MR_Word transform_hlds__term_constr_data__V_150_150 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_data__HeadVar__3_3, (MR_Integer) 2)));
                  MR_Word transform_hlds__term_constr_data__V_151_151;

                  {
                    libs__polyhedron____Compare____polyhedron_0_0(&transform_hlds__term_constr_data__V_151_151, transform_hlds__term_constr_data__V_188_188, transform_hlds__term_constr_data__V_148_148);
                  }
                  transform_hlds__term_constr_data__succeeded = (transform_hlds__term_constr_data__V_151_151 == (MR_Integer) 0);
                  transform_hlds__term_constr_data__succeeded = !(transform_hlds__term_constr_data__succeeded);
                  if (transform_hlds__term_constr_data__succeeded)
                    *transform_hlds__term_constr_data__HeadVar__1_1 = transform_hlds__term_constr_data__V_151_151;
                  else
                    {
                      MR_Word transform_hlds__term_constr_data__V_152_152;

                      {
                        mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_data_scalar_common_1[1], &transform_hlds__term_constr_data__V_152_152, ((MR_Box) (transform_hlds__term_constr_data__V_187_187)), ((MR_Box) (transform_hlds__term_constr_data__V_149_149)));
                      }
                      transform_hlds__term_constr_data__succeeded = (transform_hlds__term_constr_data__V_152_152 == (MR_Integer) 0);
                      transform_hlds__term_constr_data__succeeded = !(transform_hlds__term_constr_data__succeeded);
                      if (transform_hlds__term_constr_data__succeeded)
                        *transform_hlds__term_constr_data__HeadVar__1_1 = transform_hlds__term_constr_data__V_152_152;
                      else
                        {
                          {
                            mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_data_scalar_common_1[1], transform_hlds__term_constr_data__HeadVar__1_1, ((MR_Box) (transform_hlds__term_constr_data__V_186_186)), ((MR_Box) (transform_hlds__term_constr_data__V_150_150)));
                          }
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
transform_hlds__term_constr_data____Unify____abstract_goal_0_0(
  MR_Word transform_hlds__term_constr_data__HeadVar__1_1,
  MR_Word transform_hlds__term_constr_data__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__term_constr_data__succeeded;
    MR_Integer transform_hlds__term_constr_data__CastX_37 = (MR_Integer) transform_hlds__term_constr_data__HeadVar__1_1;
    MR_Integer transform_hlds__term_constr_data__CastY_38 = (MR_Integer) transform_hlds__term_constr_data__HeadVar__2_2;

    transform_hlds__term_constr_data__succeeded = (transform_hlds__term_constr_data__CastX_37 == transform_hlds__term_constr_data__CastY_38);
    if (transform_hlds__term_constr_data__succeeded)
      transform_hlds__term_constr_data__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) transform_hlds__term_constr_data__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word transform_hlds__term_constr_data__TypeInfo_48_48;
            MR_Word transform_hlds__term_constr_data__TypeInfo_49_49;
            MR_Word transform_hlds__term_constr_data__TypeInfo_50_50;
            MR_Word transform_hlds__term_constr_data__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__HeadVar__1_1, (MR_Integer) 0)));
            MR_Integer transform_hlds__term_constr_data__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word transform_hlds__term_constr_data__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__HeadVar__1_1, (MR_Integer) 2)));
            MR_Word transform_hlds__term_constr_data__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__HeadVar__1_1, (MR_Integer) 3)));
            MR_Word transform_hlds__term_constr_data__V_7_7;
            MR_Integer transform_hlds__term_constr_data__V_8_8;
            MR_Word transform_hlds__term_constr_data__V_9_9;
            MR_Word transform_hlds__term_constr_data__V_10_10;

            transform_hlds__term_constr_data__succeeded = ((MR_tag((MR_Word) transform_hlds__term_constr_data__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
            if (transform_hlds__term_constr_data__succeeded)
              {
                transform_hlds__term_constr_data__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__HeadVar__2_2, (MR_Integer) 0)));
                transform_hlds__term_constr_data__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__HeadVar__2_2, (MR_Integer) 1)));
                transform_hlds__term_constr_data__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__HeadVar__2_2, (MR_Integer) 2)));
                transform_hlds__term_constr_data__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__HeadVar__2_2, (MR_Integer) 3)));
                transform_hlds__term_constr_data__TypeInfo_48_48 = (MR_Word) &transform_hlds__term_constr_data_scalar_common_1[3];
                {
                  transform_hlds__term_constr_data__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_data__TypeInfo_48_48, ((MR_Box) (transform_hlds__term_constr_data__V_3_3)), ((MR_Box) (transform_hlds__term_constr_data__V_7_7)));
                }
                if (transform_hlds__term_constr_data__succeeded)
                  {
                    transform_hlds__term_constr_data__succeeded = (transform_hlds__term_constr_data__V_4_4 == transform_hlds__term_constr_data__V_8_8);
                    if (transform_hlds__term_constr_data__succeeded)
                      {
                        transform_hlds__term_constr_data__TypeInfo_49_49 = (MR_Word) &transform_hlds__term_constr_data_scalar_common_1[1];
                        {
                          transform_hlds__term_constr_data__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_data__TypeInfo_49_49, ((MR_Box) (transform_hlds__term_constr_data__V_5_5)), ((MR_Box) (transform_hlds__term_constr_data__V_9_9)));
                        }
                        if (transform_hlds__term_constr_data__succeeded)
                          {
                            transform_hlds__term_constr_data__TypeInfo_50_50 = (MR_Word) &transform_hlds__term_constr_data_scalar_common_1[1];
                            {
                              transform_hlds__term_constr_data__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_data__TypeInfo_50_50, ((MR_Box) (transform_hlds__term_constr_data__V_6_6)), ((MR_Box) (transform_hlds__term_constr_data__V_10_10)));
                            }
                          }
                      }
                  }
              }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word transform_hlds__term_constr_data__TypeInfo_45_45;
            MR_Word transform_hlds__term_constr_data__TypeInfo_46_46;
            MR_Word transform_hlds__term_constr_data__TypeInfo_47_47;
            MR_Word transform_hlds__term_constr_data__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_data__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word transform_hlds__term_constr_data__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_data__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word transform_hlds__term_constr_data__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_data__HeadVar__1_1, (MR_Integer) 2)));
            MR_Word transform_hlds__term_constr_data__V_14_14;
            MR_Word transform_hlds__term_constr_data__V_15_15;
            MR_Word transform_hlds__term_constr_data__V_16_16;

            transform_hlds__term_constr_data__succeeded = ((MR_tag((MR_Word) transform_hlds__term_constr_data__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (transform_hlds__term_constr_data__succeeded)
              {
                transform_hlds__term_constr_data__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_data__HeadVar__2_2, (MR_Integer) 0)));
                transform_hlds__term_constr_data__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_data__HeadVar__2_2, (MR_Integer) 1)));
                transform_hlds__term_constr_data__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_data__HeadVar__2_2, (MR_Integer) 2)));
                transform_hlds__term_constr_data__TypeInfo_45_45 = (MR_Word) &transform_hlds__term_constr_data_scalar_common_1[3];
                {
                  transform_hlds__term_constr_data__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_data__TypeInfo_45_45, ((MR_Box) (transform_hlds__term_constr_data__V_11_11)), ((MR_Box) (transform_hlds__term_constr_data__V_14_14)));
                }
                if (transform_hlds__term_constr_data__succeeded)
                  {
                    transform_hlds__term_constr_data__TypeInfo_46_46 = (MR_Word) &transform_hlds__term_constr_data_scalar_common_1[1];
                    {
                      transform_hlds__term_constr_data__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_data__TypeInfo_46_46, ((MR_Box) (transform_hlds__term_constr_data__V_12_12)), ((MR_Box) (transform_hlds__term_constr_data__V_15_15)));
                    }
                    if (transform_hlds__term_constr_data__succeeded)
                      {
                        transform_hlds__term_constr_data__TypeInfo_47_47 = (MR_Word) &transform_hlds__term_constr_data_scalar_common_1[1];
                        {
                          transform_hlds__term_constr_data__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_data__TypeInfo_47_47, ((MR_Box) (transform_hlds__term_constr_data__V_13_13)), ((MR_Box) (transform_hlds__term_constr_data__V_16_16)));
                        }
                      }
                  }
              }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word transform_hlds__term_constr_data__TypeInfo_40_40;
            MR_Word transform_hlds__term_constr_data__TypeInfo_41_41;
            MR_Word transform_hlds__term_constr_data__TypeInfo_42_42;
            MR_Word transform_hlds__term_constr_data__TypeInfo_43_43;
            MR_Word transform_hlds__term_constr_data__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_data__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word transform_hlds__term_constr_data__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_data__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word transform_hlds__term_constr_data__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_data__HeadVar__1_1, (MR_Integer) 2)));
            MR_Word transform_hlds__term_constr_data__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_data__HeadVar__1_1, (MR_Integer) 3)));
            MR_Word transform_hlds__term_constr_data__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_data__HeadVar__1_1, (MR_Integer) 4)));
            MR_Word transform_hlds__term_constr_data__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_data__HeadVar__1_1, (MR_Integer) 5)));
            MR_Word transform_hlds__term_constr_data__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_data__HeadVar__1_1, (MR_Integer) 6)));
            MR_Word transform_hlds__term_constr_data__V_24_24;
            MR_Word transform_hlds__term_constr_data__V_25_25;
            MR_Word transform_hlds__term_constr_data__V_26_26;
            MR_Word transform_hlds__term_constr_data__V_27_27;
            MR_Word transform_hlds__term_constr_data__V_28_28;
            MR_Word transform_hlds__term_constr_data__V_29_29;
            MR_Word transform_hlds__term_constr_data__V_30_30;

            transform_hlds__term_constr_data__succeeded = ((MR_tag((MR_Word) transform_hlds__term_constr_data__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (transform_hlds__term_constr_data__succeeded)
              {
                transform_hlds__term_constr_data__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_data__HeadVar__2_2, (MR_Integer) 0)));
                transform_hlds__term_constr_data__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_data__HeadVar__2_2, (MR_Integer) 1)));
                transform_hlds__term_constr_data__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_data__HeadVar__2_2, (MR_Integer) 2)));
                transform_hlds__term_constr_data__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_data__HeadVar__2_2, (MR_Integer) 3)));
                transform_hlds__term_constr_data__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_data__HeadVar__2_2, (MR_Integer) 4)));
                transform_hlds__term_constr_data__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_data__HeadVar__2_2, (MR_Integer) 5)));
                transform_hlds__term_constr_data__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_data__HeadVar__2_2, (MR_Integer) 6)));
                {
                  transform_hlds__term_constr_data__succeeded = transform_hlds__term_constr_data____Unify____abstract_ppid_0_0(transform_hlds__term_constr_data__V_17_17, transform_hlds__term_constr_data__V_24_24);
                }
                if (transform_hlds__term_constr_data__succeeded)
                  {
                    {
                      transform_hlds__term_constr_data__succeeded = mercury__term____Unify____context_0_0(transform_hlds__term_constr_data__V_18_18, transform_hlds__term_constr_data__V_25_25);
                    }
                    if (transform_hlds__term_constr_data__succeeded)
                      {
                        transform_hlds__term_constr_data__TypeInfo_40_40 = (MR_Word) &transform_hlds__term_constr_data_scalar_common_1[1];
                        {
                          transform_hlds__term_constr_data__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_data__TypeInfo_40_40, ((MR_Box) (transform_hlds__term_constr_data__V_19_19)), ((MR_Box) (transform_hlds__term_constr_data__V_26_26)));
                        }
                        if (transform_hlds__term_constr_data__succeeded)
                          {
                            transform_hlds__term_constr_data__TypeInfo_41_41 = (MR_Word) &transform_hlds__term_constr_data_scalar_common_1[2];
                            {
                              transform_hlds__term_constr_data__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_data__TypeInfo_41_41, ((MR_Box) (transform_hlds__term_constr_data__V_20_20)), ((MR_Box) (transform_hlds__term_constr_data__V_27_27)));
                            }
                            if (transform_hlds__term_constr_data__succeeded)
                              {
                                transform_hlds__term_constr_data__TypeInfo_42_42 = (MR_Word) &transform_hlds__term_constr_data_scalar_common_1[1];
                                {
                                  transform_hlds__term_constr_data__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_data__TypeInfo_42_42, ((MR_Box) (transform_hlds__term_constr_data__V_21_21)), ((MR_Box) (transform_hlds__term_constr_data__V_28_28)));
                                }
                                if (transform_hlds__term_constr_data__succeeded)
                                  {
                                    transform_hlds__term_constr_data__TypeInfo_43_43 = (MR_Word) &transform_hlds__term_constr_data_scalar_common_1[1];
                                    {
                                      transform_hlds__term_constr_data__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_data__TypeInfo_43_43, ((MR_Box) (transform_hlds__term_constr_data__V_22_22)), ((MR_Box) (transform_hlds__term_constr_data__V_29_29)));
                                    }
                                    if (transform_hlds__term_constr_data__succeeded)
                                      {
                                        transform_hlds__term_constr_data__succeeded = libs__polyhedron____Unify____polyhedron_0_0(transform_hlds__term_constr_data__V_23_23, transform_hlds__term_constr_data__V_30_30);
                                      }
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
            MR_Word transform_hlds__term_constr_data__TypeInfo_52_52;
            MR_Word transform_hlds__term_constr_data__TypeInfo_53_53;
            MR_Word transform_hlds__term_constr_data__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_data__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word transform_hlds__term_constr_data__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_data__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word transform_hlds__term_constr_data__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_data__HeadVar__1_1, (MR_Integer) 2)));
            MR_Word transform_hlds__term_constr_data__V_34_34;
            MR_Word transform_hlds__term_constr_data__V_35_35;
            MR_Word transform_hlds__term_constr_data__V_36_36;

            transform_hlds__term_constr_data__succeeded = ((MR_tag((MR_Word) transform_hlds__term_constr_data__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)));
            if (transform_hlds__term_constr_data__succeeded)
              {
                transform_hlds__term_constr_data__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_data__HeadVar__2_2, (MR_Integer) 0)));
                transform_hlds__term_constr_data__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_data__HeadVar__2_2, (MR_Integer) 1)));
                transform_hlds__term_constr_data__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_data__HeadVar__2_2, (MR_Integer) 2)));
                {
                  transform_hlds__term_constr_data__succeeded = libs__polyhedron____Unify____polyhedron_0_0(transform_hlds__term_constr_data__V_31_31, transform_hlds__term_constr_data__V_34_34);
                }
                if (transform_hlds__term_constr_data__succeeded)
                  {
                    transform_hlds__term_constr_data__TypeInfo_52_52 = (MR_Word) &transform_hlds__term_constr_data_scalar_common_1[1];
                    {
                      transform_hlds__term_constr_data__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_data__TypeInfo_52_52, ((MR_Box) (transform_hlds__term_constr_data__V_32_32)), ((MR_Box) (transform_hlds__term_constr_data__V_35_35)));
                    }
                    if (transform_hlds__term_constr_data__succeeded)
                      {
                        transform_hlds__term_constr_data__TypeInfo_53_53 = (MR_Word) &transform_hlds__term_constr_data_scalar_common_1[1];
                        {
                          transform_hlds__term_constr_data__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_data__TypeInfo_53_53, ((MR_Box) (transform_hlds__term_constr_data__V_33_33)), ((MR_Box) (transform_hlds__term_constr_data__V_36_36)));
                        }
                      }
                  }
              }
          }
          break;
      }
    return transform_hlds__term_constr_data__succeeded;
  }
}

static void MR_CALL 
transform_hlds__term_constr_data__indent_line_3_p_0(
  MR_Integer transform_hlds__term_constr_data__N_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool transform_hlds__term_constr_data__succeeded = (transform_hlds__term_constr_data__N_4 > (MR_Integer) 0);

        if (transform_hlds__term_constr_data__succeeded)
          {
            MR_Integer transform_hlds__term_constr_data__V_11_11;

            {
              mercury__io__write_string_3_p_0((MR_String) "  ");
            }
            transform_hlds__term_constr_data__V_11_11 = (transform_hlds__term_constr_data__N_4 - (MR_Integer) 1);
            /* direct tailcall eliminated */
            {
              MR_Integer transform_hlds__term_constr_data__N__tmp_copy_4 = transform_hlds__term_constr_data__V_11_11;

              transform_hlds__term_constr_data__N_4 = transform_hlds__term_constr_data__N__tmp_copy_4;
            }
            continue;
          }
        else
          {
          }
      }
      break;
    }
}

static void MR_CALL 
transform_hlds__term_constr_data__dump_var_name_4_p_0(
  MR_Word transform_hlds__term_constr_data__VarSet_5,
  MR_Word transform_hlds__term_constr_data__Var_6)
{
  {
    MR_bool transform_hlds__term_constr_data__succeeded;
    MR_String transform_hlds__term_constr_data__VarName_8;

    {
      mercury__varset__lookup_name_3_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, transform_hlds__term_constr_data__VarSet_5, transform_hlds__term_constr_data__Var_6, &transform_hlds__term_constr_data__VarName_8);
    }
    {
      mercury__io__write_string_3_p_0(transform_hlds__term_constr_data__VarName_8);
    }
  }
}

static void MR_CALL 
transform_hlds__term_constr_data__dump_abstract_disjuncts_6_p_0(
  MR_Word transform_hlds__term_constr_data__ModuleInfo_1,
  MR_Word transform_hlds__term_constr_data__VarSet_2,
  MR_Integer transform_hlds__term_constr_data__Indent_3,
  MR_Word transform_hlds__term_constr_data__HeadVar__4_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool transform_hlds__term_constr_data__succeeded;

        if ((transform_hlds__term_constr_data__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
          }
        else
          {
            MR_Word transform_hlds__term_constr_data__Goal_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_data__HeadVar__4_4, (MR_Integer) 0)));
            MR_Word transform_hlds__term_constr_data__Goals_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_data__HeadVar__4_4, (MR_Integer) 1)));
            MR_Integer transform_hlds__term_constr_data__V_23_23 = (transform_hlds__term_constr_data__Indent_3 + (MR_Integer) 1);

            {
              transform_hlds__term_constr_data__dump_abstract_goal_6_p_0(transform_hlds__term_constr_data__ModuleInfo_1, transform_hlds__term_constr_data__VarSet_2, transform_hlds__term_constr_data__V_23_23, transform_hlds__term_constr_data__Goal_16);
            }
            if ((transform_hlds__term_constr_data__Goals_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
              }
            else
              {
                {
                  transform_hlds__term_constr_data__indent_line_3_p_0(transform_hlds__term_constr_data__Indent_3);
                }
                {
                  mercury__io__write_string_3_p_0((MR_String) ";\n");
                }
              }
            /* direct tailcall eliminated */
            {
              MR_Word transform_hlds__term_constr_data__HeadVar__4__tmp_copy_4 = transform_hlds__term_constr_data__Goals_17;

              transform_hlds__term_constr_data__HeadVar__4_4 = transform_hlds__term_constr_data__HeadVar__4__tmp_copy_4;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
transform_hlds__term_constr_data__dump_size_var_4_p_0(
  MR_Word transform_hlds__term_constr_data__SizeVarSet_5,
  MR_Word transform_hlds__term_constr_data__Var_6)
{
  {
    MR_bool transform_hlds__term_constr_data__succeeded;
    MR_Word transform_hlds__term_constr_data__TypeCtorInfo_19_19 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
    MR_String transform_hlds__term_constr_data__VarName_8;
    MR_Integer transform_hlds__term_constr_data__V_17_17;
    MR_String transform_hlds__term_constr_data__V_24_24;

    {
      mercury__varset__lookup_name_3_p_0(transform_hlds__term_constr_data__TypeCtorInfo_19_19, transform_hlds__term_constr_data__SizeVarSet_5, transform_hlds__term_constr_data__Var_6, &transform_hlds__term_constr_data__VarName_8);
    }
    {
      transform_hlds__term_constr_data__V_17_17 = mercury__term__var_to_int_1_f_0(transform_hlds__term_constr_data__TypeCtorInfo_19_19, transform_hlds__term_constr_data__Var_6);
    }
    {
      mercury__io__write_string_3_p_0(transform_hlds__term_constr_data__VarName_8);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "[");
    }
    {
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &transform_hlds__term_constr_data_scalar_common_7[0], transform_hlds__term_constr_data__V_17_17, &transform_hlds__term_constr_data__V_24_24);
    }
    {
      mercury__io__write_string_3_p_0(transform_hlds__term_constr_data__V_24_24);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "]");
    }
  }
}

static void MR_CALL 
transform_hlds__term_constr_data__simplify_conjuncts_2_p_0(
  MR_Word transform_hlds__term_constr_data__Goals0_3,
  MR_Word * transform_hlds__term_constr_data__Goals_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool transform_hlds__term_constr_data__succeeded;

        if ((transform_hlds__term_constr_data__Goals0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *transform_hlds__term_constr_data__Goals_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        else
          {
            MR_Word transform_hlds__term_constr_data__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_data__Goals0_3, (MR_Integer) 1)));
            MR_Word transform_hlds__term_constr_data__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_data__Goals0_3, (MR_Integer) 0)));

            if ((transform_hlds__term_constr_data__V_26_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *transform_hlds__term_constr_data__Goals_4 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_constr_data__V_27_27));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
              }
            else
              {
                MR_Word transform_hlds__term_constr_data__GoalB_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_data__V_26_26, (MR_Integer) 0)));
                MR_Word transform_hlds__term_constr_data__OtherGoals_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_data__V_26_26, (MR_Integer) 1)));
                MR_Word transform_hlds__term_constr_data__PolyA_9;
                MR_Word transform_hlds__term_constr_data__LocalsA_10;
                MR_Word transform_hlds__term_constr_data__NonLocalsA_11;
                MR_Word transform_hlds__term_constr_data__PolyB_12;
                MR_Word transform_hlds__term_constr_data__LocalsB_13;
                MR_Word transform_hlds__term_constr_data__NonLocalsB_14;

                transform_hlds__term_constr_data__succeeded = ((MR_tag((MR_Word) transform_hlds__term_constr_data__V_27_27)) == (MR_mktag((MR_Integer) 3)));
                if (transform_hlds__term_constr_data__succeeded)
                  {
                    transform_hlds__term_constr_data__PolyA_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_data__V_27_27, (MR_Integer) 0)));
                    transform_hlds__term_constr_data__LocalsA_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_data__V_27_27, (MR_Integer) 1)));
                    transform_hlds__term_constr_data__NonLocalsA_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_data__V_27_27, (MR_Integer) 2)));
                    transform_hlds__term_constr_data__succeeded = ((MR_tag((MR_Word) transform_hlds__term_constr_data__GoalB_7)) == (MR_mktag((MR_Integer) 3)));
                    if (transform_hlds__term_constr_data__succeeded)
                      {
                        transform_hlds__term_constr_data__PolyB_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_data__GoalB_7, (MR_Integer) 0)));
                        transform_hlds__term_constr_data__LocalsB_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_data__GoalB_7, (MR_Integer) 1)));
                        transform_hlds__term_constr_data__NonLocalsB_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_data__GoalB_7, (MR_Integer) 2)));
                      }
                  }
                if (transform_hlds__term_constr_data__succeeded)
                  {
                    MR_Word transform_hlds__term_constr_data__TypeInfo_25_25;
                    MR_Word transform_hlds__term_constr_data__Poly_15;
                    MR_Word transform_hlds__term_constr_data__Locals_16;
                    MR_Word transform_hlds__term_constr_data__NonLocals_17;
                    MR_Word transform_hlds__term_constr_data__Goals1_18;
                    MR_Word transform_hlds__term_constr_data__Goal_22;

                    {
                      transform_hlds__term_constr_data__Poly_15 = libs__polyhedron__intersection_2_f_0(transform_hlds__term_constr_data__PolyA_9, transform_hlds__term_constr_data__PolyB_12);
                    }
                    transform_hlds__term_constr_data__TypeInfo_25_25 = (MR_Word) &transform_hlds__term_constr_data_scalar_common_1[0];
                    {
                      transform_hlds__term_constr_data__Locals_16 = mercury__list__f_43_43_2_f_0(transform_hlds__term_constr_data__TypeInfo_25_25, transform_hlds__term_constr_data__LocalsA_10, transform_hlds__term_constr_data__LocalsB_13);
                    }
                    {
                      transform_hlds__term_constr_data__NonLocals_17 = mercury__list__f_43_43_2_f_0(transform_hlds__term_constr_data__TypeInfo_25_25, transform_hlds__term_constr_data__NonLocalsA_11, transform_hlds__term_constr_data__NonLocalsB_14);
                    }
                    {
                      transform_hlds__term_constr_data__Goal_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), transform_hlds__term_constr_data__Goal_22, 0) = ((MR_Box) (transform_hlds__term_constr_data__Poly_15));
                      MR_hl_field(MR_mktag(3), transform_hlds__term_constr_data__Goal_22, 1) = ((MR_Box) (transform_hlds__term_constr_data__Locals_16));
                      MR_hl_field(MR_mktag(3), transform_hlds__term_constr_data__Goal_22, 2) = ((MR_Box) (transform_hlds__term_constr_data__NonLocals_17));
                    }
                    {
                      transform_hlds__term_constr_data__Goals1_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), transform_hlds__term_constr_data__Goals1_18, 0) = ((MR_Box) (transform_hlds__term_constr_data__Goal_22));
                      MR_hl_field(MR_mktag(1), transform_hlds__term_constr_data__Goals1_18, 1) = ((MR_Box) (transform_hlds__term_constr_data__OtherGoals_8));
                    }
                    /* direct tailcall eliminated */
                    {
                      MR_Word transform_hlds__term_constr_data__Goals0__tmp_copy_3 = transform_hlds__term_constr_data__Goals1_18;

                      transform_hlds__term_constr_data__Goals0_3 = transform_hlds__term_constr_data__Goals0__tmp_copy_3;
                    }
                    continue;
                  }
                else
                  *transform_hlds__term_constr_data__Goals_4 = transform_hlds__term_constr_data__Goals0_3;
              }
          }
      }
      break;
    }
}

static MR_bool MR_CALL 
transform_hlds__term_constr_data__is_empty_conj_1_p_0(
  MR_Word transform_hlds__term_constr_data__HeadVar__1_1)
{
  {
    MR_bool transform_hlds__term_constr_data__succeeded = ((MR_tag((MR_Word) transform_hlds__term_constr_data__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
    MR_Word transform_hlds__term_constr_data__V_4_4;
    MR_Word transform_hlds__term_constr_data__V_2_2;
    MR_Word transform_hlds__term_constr_data__V_3_3;

    if (transform_hlds__term_constr_data__succeeded)
      {
        transform_hlds__term_constr_data__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_data__HeadVar__1_1, (MR_Integer) 0)));
        transform_hlds__term_constr_data__V_2_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_data__HeadVar__1_1, (MR_Integer) 1)));
        transform_hlds__term_constr_data__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_data__HeadVar__1_1, (MR_Integer) 2)));
        transform_hlds__term_constr_data__succeeded = (transform_hlds__term_constr_data__V_4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
    return transform_hlds__term_constr_data__succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__term_constr_data__is_empty_primitive_1_p_0(
  MR_Word transform_hlds__term_constr_data__HeadVar__1_1)
{
  {
    MR_bool transform_hlds__term_constr_data__succeeded = ((MR_tag((MR_Word) transform_hlds__term_constr_data__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)));
    MR_Word transform_hlds__term_constr_data__Poly_2;
    MR_Word transform_hlds__term_constr_data__V_3_3;
    MR_Word transform_hlds__term_constr_data__V_4_4;

    if (transform_hlds__term_constr_data__succeeded)
      {
        transform_hlds__term_constr_data__Poly_2 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_data__HeadVar__1_1, (MR_Integer) 0)));
        transform_hlds__term_constr_data__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_data__HeadVar__1_1, (MR_Integer) 1)));
        transform_hlds__term_constr_data__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_data__HeadVar__1_1, (MR_Integer) 2)));
        {
          transform_hlds__term_constr_data__succeeded = libs__polyhedron__is_universe_1_p_0(transform_hlds__term_constr_data__Poly_2);
        }
      }
    return transform_hlds__term_constr_data__succeeded;
  }
}

static MR_Word MR_CALL 
transform_hlds__term_constr_data__combine_primitives_2_f_0(
  MR_Word transform_hlds__term_constr_data__GoalA_4,
  MR_Word transform_hlds__term_constr_data__GoalB_5)
{
  {
    MR_bool transform_hlds__term_constr_data__succeeded = ((MR_tag((MR_Word) transform_hlds__term_constr_data__GoalA_4)) == (MR_mktag((MR_Integer) 3)));
    MR_Word transform_hlds__term_constr_data__Goal_6;
    MR_Word transform_hlds__term_constr_data__PolyA_7;
    MR_Word transform_hlds__term_constr_data__LocalsA_8;
    MR_Word transform_hlds__term_constr_data__NonLocalsA_9;
    MR_Word transform_hlds__term_constr_data__PolyB_10;
    MR_Word transform_hlds__term_constr_data__LocalsB_11;
    MR_Word transform_hlds__term_constr_data__NonLocalsB_12;

    if (transform_hlds__term_constr_data__succeeded)
      {
        transform_hlds__term_constr_data__PolyA_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_data__GoalA_4, (MR_Integer) 0)));
        transform_hlds__term_constr_data__LocalsA_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_data__GoalA_4, (MR_Integer) 1)));
        transform_hlds__term_constr_data__NonLocalsA_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_data__GoalA_4, (MR_Integer) 2)));
        transform_hlds__term_constr_data__succeeded = ((MR_tag((MR_Word) transform_hlds__term_constr_data__GoalB_5)) == (MR_mktag((MR_Integer) 3)));
        if (transform_hlds__term_constr_data__succeeded)
          {
            transform_hlds__term_constr_data__PolyB_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_data__GoalB_5, (MR_Integer) 0)));
            transform_hlds__term_constr_data__LocalsB_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_data__GoalB_5, (MR_Integer) 1)));
            transform_hlds__term_constr_data__NonLocalsB_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_data__GoalB_5, (MR_Integer) 2)));
          }
      }
    if (transform_hlds__term_constr_data__succeeded)
      {
        MR_Word transform_hlds__term_constr_data__TypeInfo_19_19;
        MR_Word transform_hlds__term_constr_data__Poly_13;
        MR_Word transform_hlds__term_constr_data__Locals_14;
        MR_Word transform_hlds__term_constr_data__NonLocals_15;

        {
          transform_hlds__term_constr_data__Poly_13 = libs__polyhedron__intersection_2_f_0(transform_hlds__term_constr_data__PolyA_7, transform_hlds__term_constr_data__PolyB_10);
        }
        transform_hlds__term_constr_data__TypeInfo_19_19 = (MR_Word) &transform_hlds__term_constr_data_scalar_common_1[0];
        {
          transform_hlds__term_constr_data__Locals_14 = mercury__list__f_43_43_2_f_0(transform_hlds__term_constr_data__TypeInfo_19_19, transform_hlds__term_constr_data__LocalsA_8, transform_hlds__term_constr_data__LocalsB_11);
        }
        {
          transform_hlds__term_constr_data__NonLocals_15 = mercury__list__f_43_43_2_f_0(transform_hlds__term_constr_data__TypeInfo_19_19, transform_hlds__term_constr_data__NonLocalsA_9, transform_hlds__term_constr_data__NonLocalsB_12);
        }
        {
          transform_hlds__term_constr_data__Goal_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), transform_hlds__term_constr_data__Goal_6, 0) = ((MR_Box) (transform_hlds__term_constr_data__Poly_13));
          MR_hl_field(MR_mktag(3), transform_hlds__term_constr_data__Goal_6, 1) = ((MR_Box) (transform_hlds__term_constr_data__Locals_14));
          MR_hl_field(MR_mktag(3), transform_hlds__term_constr_data__Goal_6, 2) = ((MR_Box) (transform_hlds__term_constr_data__NonLocals_15));
        }
      }
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_constr_data", (MR_String) "function \140transform_hlds.term_constr_data.combine_primitives\'/2", (MR_String) "non-primitive goals");
        }
      }
    return transform_hlds__term_constr_data__Goal_6;
  }
}

static MR_bool MR_CALL 
transform_hlds__term_constr_data__is_primitive_1_p_0(
  MR_Word transform_hlds__term_constr_data__HeadVar__1_1)
{
  {
    MR_bool transform_hlds__term_constr_data__succeeded = ((MR_tag((MR_Word) transform_hlds__term_constr_data__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)));
    MR_Word transform_hlds__term_constr_data__V_2_2;
    MR_Word transform_hlds__term_constr_data__V_3_3;
    MR_Word transform_hlds__term_constr_data__V_4_4;

    if (transform_hlds__term_constr_data__succeeded)
      {
        transform_hlds__term_constr_data__V_2_2 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_data__HeadVar__1_1, (MR_Integer) 0)));
        transform_hlds__term_constr_data__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_data__HeadVar__1_1, (MR_Integer) 1)));
        transform_hlds__term_constr_data__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_data__HeadVar__1_1, (MR_Integer) 2)));
      }
    return transform_hlds__term_constr_data__succeeded;
  }
}

static MR_Box MR_CALL 
transform_hlds__term_constr_data__flatten_conjuncts_2_3_p_0_2(
  MR_Box transform_hlds__term_constr_data__closure_arg,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2)
{
  {
    MR_Box transform_hlds__term_constr_data__wrapper_arg_3;
    MR_Box transform_hlds__term_constr_data__closure = transform_hlds__term_constr_data__closure_arg;
    MR_Word transform_hlds__term_constr_data__conv0_Goal_6;

    {
      transform_hlds__term_constr_data__conv0_Goal_6 = transform_hlds__term_constr_data__combine_primitives_2_f_0(((MR_Word) transform_hlds__term_constr_data__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_2));
    }
    transform_hlds__term_constr_data__wrapper_arg_3 = ((MR_Box) (transform_hlds__term_constr_data__conv0_Goal_6));
    return transform_hlds__term_constr_data__wrapper_arg_3;
  }
}

static MR_bool MR_CALL 
transform_hlds__term_constr_data__flatten_conjuncts_2_3_p_0_1(
  MR_Box transform_hlds__term_constr_data__closure_arg,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1)
{
  {
    MR_bool transform_hlds__term_constr_data__succeeded;
    MR_Box transform_hlds__term_constr_data__closure = transform_hlds__term_constr_data__closure_arg;

    {
      transform_hlds__term_constr_data__succeeded = transform_hlds__term_constr_data__is_primitive_1_p_0(((MR_Word) transform_hlds__term_constr_data__wrapper_arg_1));
    }
    return transform_hlds__term_constr_data__succeeded;
  }
}

static void MR_CALL 
transform_hlds__term_constr_data__flatten_conjuncts_2_3_p_0(
  MR_Word transform_hlds__term_constr_data__HeadVar__1_1,
  MR_Word transform_hlds__term_constr_data__STATE_VARIABLE_RevGoals_0_2,
  MR_Word * transform_hlds__term_constr_data__STATE_VARIABLE_RevGoals_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool transform_hlds__term_constr_data__succeeded;

        if ((transform_hlds__term_constr_data__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *transform_hlds__term_constr_data__STATE_VARIABLE_RevGoals_3 = transform_hlds__term_constr_data__STATE_VARIABLE_RevGoals_0_2;
        else
          {
            MR_Word transform_hlds__term_constr_data__Goal0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_data__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word transform_hlds__term_constr_data__Goals0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_data__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word transform_hlds__term_constr_data__NextNonPrimitive_14;
            MR_Word transform_hlds__term_constr_data__STATE_VARIABLE_RevGoals_22_22;
            MR_Word transform_hlds__term_constr_data__V_10_10;
            MR_Word transform_hlds__term_constr_data__V_11_11;
            MR_Word transform_hlds__term_constr_data__V_12_12;

            transform_hlds__term_constr_data__succeeded = ((MR_tag((MR_Word) transform_hlds__term_constr_data__Goal0_7)) == (MR_mktag((MR_Integer) 3)));
            if (transform_hlds__term_constr_data__succeeded)
              {
                transform_hlds__term_constr_data__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_data__Goal0_7, (MR_Integer) 0)));
                transform_hlds__term_constr_data__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_data__Goal0_7, (MR_Integer) 1)));
                transform_hlds__term_constr_data__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_data__Goal0_7, (MR_Integer) 2)));
                {
                  MR_Word transform_hlds__term_constr_data__TypeCtorInfo_26_26 = (MR_Word) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_goal_0;
                  MR_Word transform_hlds__term_constr_data__Primitives_13;
                  MR_Word transform_hlds__term_constr_data__NewPrimitive_15;

                  {
                    mercury__list__take_while_4_p_0(transform_hlds__term_constr_data__TypeCtorInfo_26_26, (MR_Word) &transform_hlds__term_constr_data_scalar_common_2[6], transform_hlds__term_constr_data__Goals0_8, &transform_hlds__term_constr_data__Primitives_13, &transform_hlds__term_constr_data__NextNonPrimitive_14);
                  }
                  if ((transform_hlds__term_constr_data__Primitives_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    transform_hlds__term_constr_data__NewPrimitive_15 = transform_hlds__term_constr_data__Goal0_7;
                  else
                    {
                      MR_Box transform_hlds__term_constr_data__conv1_NewPrimitive_15;

                      {
                        transform_hlds__term_constr_data__conv1_NewPrimitive_15 = mercury__list__foldl_3_f_0(transform_hlds__term_constr_data__TypeCtorInfo_26_26, transform_hlds__term_constr_data__TypeCtorInfo_26_26, (MR_Word) &transform_hlds__term_constr_data_scalar_common_2[7], transform_hlds__term_constr_data__Primitives_13, ((MR_Box) (transform_hlds__term_constr_data__Goal0_7)));
                      }
                      transform_hlds__term_constr_data__NewPrimitive_15 = ((MR_Word) transform_hlds__term_constr_data__conv1_NewPrimitive_15);
                    }
                  {
                    mercury__list__cons_3_p_0(transform_hlds__term_constr_data__TypeCtorInfo_26_26, ((MR_Box) (transform_hlds__term_constr_data__NewPrimitive_15)), transform_hlds__term_constr_data__STATE_VARIABLE_RevGoals_0_2, &transform_hlds__term_constr_data__STATE_VARIABLE_RevGoals_22_22);
                  }
                }
              }
            else
              {
                {
                  mercury__list__cons_3_p_0((MR_Word) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_goal_0, ((MR_Box) (transform_hlds__term_constr_data__Goal0_7)), transform_hlds__term_constr_data__STATE_VARIABLE_RevGoals_0_2, &transform_hlds__term_constr_data__STATE_VARIABLE_RevGoals_22_22);
                }
                transform_hlds__term_constr_data__NextNonPrimitive_14 = transform_hlds__term_constr_data__Goals0_8;
              }
            /* direct tailcall eliminated */
            {
              MR_Word transform_hlds__term_constr_data__HeadVar__1__tmp_copy_1 = transform_hlds__term_constr_data__NextNonPrimitive_14;
              MR_Word transform_hlds__term_constr_data__STATE_VARIABLE_RevGoals_0__tmp_copy_2 = transform_hlds__term_constr_data__STATE_VARIABLE_RevGoals_22_22;

              transform_hlds__term_constr_data__STATE_VARIABLE_RevGoals_0_2 = transform_hlds__term_constr_data__STATE_VARIABLE_RevGoals_0__tmp_copy_2;
              transform_hlds__term_constr_data__HeadVar__1_1 = transform_hlds__term_constr_data__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
transform_hlds__term_constr_data__simplify_abstract_rep_2_p_0_6(
  MR_Box transform_hlds__term_constr_data__closure_arg,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1,
  MR_Box * transform_hlds__term_constr_data__wrapper_arg_2)
{
  {
    MR_Box transform_hlds__term_constr_data__closure = transform_hlds__term_constr_data__closure_arg;
    MR_Word transform_hlds__term_constr_data__conv1_Goal_4;

    {
      transform_hlds__term_constr_data__simplify_abstract_rep_2_p_0(((MR_Word) transform_hlds__term_constr_data__wrapper_arg_1), &transform_hlds__term_constr_data__conv1_Goal_4);
    }
    *transform_hlds__term_constr_data__wrapper_arg_2 = ((MR_Box) (transform_hlds__term_constr_data__conv1_Goal_4));
  }
}

static MR_bool MR_CALL 
transform_hlds__term_constr_data__simplify_abstract_rep_2_p_0_5(
  MR_Box transform_hlds__term_constr_data__closure_arg,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1)
{
  {
    MR_bool transform_hlds__term_constr_data__succeeded;
    MR_Box transform_hlds__term_constr_data__closure = transform_hlds__term_constr_data__closure_arg;

    {
      transform_hlds__term_constr_data__succeeded = transform_hlds__term_constr_data__IntroducedFrom__pred__simplify_abstract_rep__477__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_1));
    }
    return transform_hlds__term_constr_data__succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__term_constr_data__simplify_abstract_rep_2_p_0_4(
  MR_Box transform_hlds__term_constr_data__closure_arg,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1)
{
  {
    MR_bool transform_hlds__term_constr_data__succeeded;
    MR_Box transform_hlds__term_constr_data__closure = transform_hlds__term_constr_data__closure_arg;

    {
      transform_hlds__term_constr_data__succeeded = transform_hlds__term_constr_data__is_empty_conj_1_p_0(((MR_Word) transform_hlds__term_constr_data__wrapper_arg_1));
    }
    return transform_hlds__term_constr_data__succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__term_constr_data__simplify_abstract_rep_2_p_0_3(
  MR_Box transform_hlds__term_constr_data__closure_arg,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1)
{
  {
    MR_bool transform_hlds__term_constr_data__succeeded;
    MR_Box transform_hlds__term_constr_data__closure = transform_hlds__term_constr_data__closure_arg;

    {
      transform_hlds__term_constr_data__succeeded = transform_hlds__term_constr_data__IntroducedFrom__pred__simplify_abstract_rep__475__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_1));
    }
    return transform_hlds__term_constr_data__succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__term_constr_data__simplify_abstract_rep_2_p_0_2(
  MR_Box transform_hlds__term_constr_data__closure_arg,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1)
{
  {
    MR_bool transform_hlds__term_constr_data__succeeded;
    MR_Box transform_hlds__term_constr_data__closure = transform_hlds__term_constr_data__closure_arg;

    {
      transform_hlds__term_constr_data__succeeded = transform_hlds__term_constr_data__is_empty_primitive_1_p_0(((MR_Word) transform_hlds__term_constr_data__wrapper_arg_1));
    }
    return transform_hlds__term_constr_data__succeeded;
  }
}

static void MR_CALL 
transform_hlds__term_constr_data__simplify_abstract_rep_2_p_0_1(
  MR_Box transform_hlds__term_constr_data__closure_arg,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1,
  MR_Box * transform_hlds__term_constr_data__wrapper_arg_2)
{
  {
    MR_Box transform_hlds__term_constr_data__closure = transform_hlds__term_constr_data__closure_arg;
    MR_Word transform_hlds__term_constr_data__conv0_Goal_4;

    {
      transform_hlds__term_constr_data__simplify_abstract_rep_2_p_0(((MR_Word) transform_hlds__term_constr_data__wrapper_arg_1), &transform_hlds__term_constr_data__conv0_Goal_4);
    }
    *transform_hlds__term_constr_data__wrapper_arg_2 = ((MR_Box) (transform_hlds__term_constr_data__conv0_Goal_4));
  }
}

static void MR_CALL 
transform_hlds__term_constr_data__simplify_abstract_rep_2_p_0(
  MR_Word transform_hlds__term_constr_data__Goal0_3,
  MR_Word * transform_hlds__term_constr_data__Goal_4)
{
  {
    MR_bool transform_hlds__term_constr_data__succeeded;

    switch (MR_tag((MR_Word) transform_hlds__term_constr_data__Goal0_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word transform_hlds__term_constr_data__TypeCtorInfo_49_49 = (MR_Word) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_goal_0;
          MR_Word transform_hlds__term_constr_data__Disjuncts0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__Goal0_3, (MR_Integer) 0)));
          MR_Word transform_hlds__term_constr_data__Locals_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__Goal0_3, (MR_Integer) 2)));
          MR_Word transform_hlds__term_constr_data__NonLocals_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__Goal0_3, (MR_Integer) 3)));
          MR_Word transform_hlds__term_constr_data__Disjuncts_9;
          MR_Integer transform_hlds__term_constr_data___Size0_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__Goal0_3, (MR_Integer) 1)));

          {
            mercury__list__map_3_p_0(transform_hlds__term_constr_data__TypeCtorInfo_49_49, transform_hlds__term_constr_data__TypeCtorInfo_49_49, (MR_Word) &transform_hlds__term_constr_data_scalar_common_2[5], transform_hlds__term_constr_data__Disjuncts0_5, &transform_hlds__term_constr_data__Disjuncts_9);
          }
          if ((transform_hlds__term_constr_data__Disjuncts_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              MR_Word transform_hlds__term_constr_data__V_42_42;

              {
                transform_hlds__term_constr_data__V_42_42 = libs__polyhedron__universe_0_f_0();
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *transform_hlds__term_constr_data__Goal_4 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (transform_hlds__term_constr_data__V_42_42));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
            }
          else
            {
              MR_Word transform_hlds__term_constr_data__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_data__Disjuncts_9, (MR_Integer) 1)));
              MR_Word transform_hlds__term_constr_data__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_data__Disjuncts_9, (MR_Integer) 0)));

              if ((transform_hlds__term_constr_data__V_59_59 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  *transform_hlds__term_constr_data__Goal_4 = transform_hlds__term_constr_data__update_local_and_nonlocal_vars_3_f_0(transform_hlds__term_constr_data__V_60_60, transform_hlds__term_constr_data__Locals_7, transform_hlds__term_constr_data__NonLocals_8);
                }
              else
                {
                  MR_Integer transform_hlds__term_constr_data__Size_14;

                  {
                    transform_hlds__term_constr_data__Size_14 = mercury__list__length_1_f_0(transform_hlds__term_constr_data__TypeCtorInfo_49_49, transform_hlds__term_constr_data__Disjuncts_9);
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                    *transform_hlds__term_constr_data__Goal_4 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__term_constr_data__Disjuncts_9));
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__term_constr_data__Size_14));
                    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__term_constr_data__Locals_7));
                    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__term_constr_data__NonLocals_8));
                  }
                }
            }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word transform_hlds__term_constr_data__TypeCtorInfo_52_52 = (MR_Word) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_goal_0;
          MR_Word transform_hlds__term_constr_data__Conjuncts_16;
          MR_Word transform_hlds__term_constr_data__STATE_VARIABLE_Conjuncts_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_data__Goal0_3, (MR_Integer) 0)));
          MR_Word transform_hlds__term_constr_data__STATE_VARIABLE_Conjuncts_30_30;
          MR_Word transform_hlds__term_constr_data__STATE_VARIABLE_Conjuncts_32_32;
          MR_Word transform_hlds__term_constr_data__STATE_VARIABLE_Conjuncts_34_34;
          MR_Word transform_hlds__term_constr_data__Locals_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_data__Goal0_3, (MR_Integer) 1)));
          MR_Word transform_hlds__term_constr_data__NonLocals_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_data__Goal0_3, (MR_Integer) 2)));
          MR_Word transform_hlds__term_constr_data__Conjunct_17;
          MR_Word transform_hlds__term_constr_data__V_38_38;

          {
            mercury__list__map_3_p_0(transform_hlds__term_constr_data__TypeCtorInfo_52_52, transform_hlds__term_constr_data__TypeCtorInfo_52_52, (MR_Word) &transform_hlds__term_constr_data_scalar_common_2[2], transform_hlds__term_constr_data__STATE_VARIABLE_Conjuncts_28_28, &transform_hlds__term_constr_data__STATE_VARIABLE_Conjuncts_30_30);
          }
          {
            mercury__list__filter_3_p_0(transform_hlds__term_constr_data__TypeCtorInfo_52_52, (MR_Word) &transform_hlds__term_constr_data_scalar_common_9[1], transform_hlds__term_constr_data__STATE_VARIABLE_Conjuncts_30_30, &transform_hlds__term_constr_data__STATE_VARIABLE_Conjuncts_32_32);
          }
          if ((transform_hlds__term_constr_data__STATE_VARIABLE_Conjuncts_32_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            transform_hlds__term_constr_data__STATE_VARIABLE_Conjuncts_34_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          else
            {
              MR_Word transform_hlds__term_constr_data__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_data__STATE_VARIABLE_Conjuncts_32_32, (MR_Integer) 1)));
              MR_Word transform_hlds__term_constr_data__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_data__STATE_VARIABLE_Conjuncts_32_32, (MR_Integer) 0)));

              if ((transform_hlds__term_constr_data__V_73_73 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  {
                    transform_hlds__term_constr_data__STATE_VARIABLE_Conjuncts_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), transform_hlds__term_constr_data__STATE_VARIABLE_Conjuncts_34_34, 0) = ((MR_Box) (transform_hlds__term_constr_data__V_74_74));
                    MR_hl_field(MR_mktag(1), transform_hlds__term_constr_data__STATE_VARIABLE_Conjuncts_34_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                }
              else
                {
                  MR_Word transform_hlds__term_constr_data__RevGoals_69;

                  {
                    transform_hlds__term_constr_data__flatten_conjuncts_2_3_p_0(transform_hlds__term_constr_data__STATE_VARIABLE_Conjuncts_32_32, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__term_constr_data__RevGoals_69);
                  }
                  {
                    transform_hlds__term_constr_data__STATE_VARIABLE_Conjuncts_34_34 = mercury__list__reverse_1_f_0((MR_Word) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_goal_0, transform_hlds__term_constr_data__RevGoals_69);
                  }
                }
            }
          {
            mercury__list__filter_3_p_0(transform_hlds__term_constr_data__TypeCtorInfo_52_52, (MR_Word) &transform_hlds__term_constr_data_scalar_common_9[2], transform_hlds__term_constr_data__STATE_VARIABLE_Conjuncts_34_34, &transform_hlds__term_constr_data__Conjuncts_16);
          }
          transform_hlds__term_constr_data__succeeded = ((MR_tag((MR_Word) transform_hlds__term_constr_data__Conjuncts_16)) == (MR_mktag((MR_Integer) 1)));
          if (transform_hlds__term_constr_data__succeeded)
            {
              transform_hlds__term_constr_data__Conjunct_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_data__Conjuncts_16, (MR_Integer) 0)));
              transform_hlds__term_constr_data__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_data__Conjuncts_16, (MR_Integer) 1)));
              transform_hlds__term_constr_data__succeeded = (transform_hlds__term_constr_data__V_38_38 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
          if (transform_hlds__term_constr_data__succeeded)
            {
              *transform_hlds__term_constr_data__Goal_4 = transform_hlds__term_constr_data__update_local_and_nonlocal_vars_3_f_0(transform_hlds__term_constr_data__Conjunct_17, transform_hlds__term_constr_data__Locals_45, transform_hlds__term_constr_data__NonLocals_46);
            }
          else
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              *transform_hlds__term_constr_data__Goal_4 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_constr_data__Conjuncts_16));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__term_constr_data__Locals_45));
              MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (transform_hlds__term_constr_data__NonLocals_46));
            }
        }
        break;
      case (MR_Integer) 2:
      case (MR_Integer) 3:
        *transform_hlds__term_constr_data__Goal_4 = transform_hlds__term_constr_data__Goal0_3;
        break;
    }
  }
}

static void MR_CALL 
transform_hlds__term_constr_data__dump_abstract_goal_6_p_0_4(
  MR_Box transform_hlds__term_constr_data__closure_arg,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2,
  MR_Box * transform_hlds__term_constr_data__wrapper_arg_3)
{
  {
    MR_Box transform_hlds__term_constr_data__closure = transform_hlds__term_constr_data__closure_arg;

    {
      transform_hlds__term_constr_data__dump_var_name_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
transform_hlds__term_constr_data__dump_abstract_goal_6_p_0_3(
  MR_Box transform_hlds__term_constr_data__closure_arg,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2,
  MR_Box * transform_hlds__term_constr_data__wrapper_arg_3)
{
  {
    MR_Box transform_hlds__term_constr_data__closure = transform_hlds__term_constr_data__closure_arg;

    {
      transform_hlds__term_constr_data__dump_var_name_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
transform_hlds__term_constr_data__dump_abstract_goal_6_p_0_2(
  MR_Box transform_hlds__term_constr_data__closure_arg,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2,
  MR_Box * transform_hlds__term_constr_data__wrapper_arg_3)
{
  {
    MR_Box transform_hlds__term_constr_data__closure = transform_hlds__term_constr_data__closure_arg;

    {
      transform_hlds__term_constr_data__dump_abstract_goal_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__closure, (MR_Integer) 4))), ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__closure, (MR_Integer) 5))), ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
transform_hlds__term_constr_data__dump_abstract_goal_6_p_0_1(
  MR_Box transform_hlds__term_constr_data__closure_arg,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2,
  MR_Box * transform_hlds__term_constr_data__wrapper_arg_3)
{
  {
    MR_Box transform_hlds__term_constr_data__closure = transform_hlds__term_constr_data__closure_arg;

    {
      transform_hlds__term_constr_data__dump_var_name_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_1));
    }
  }
}

void MR_CALL 
transform_hlds__term_constr_data__dump_abstract_goal_6_p_0(
  MR_Word transform_hlds__term_constr_data__ModuleInfo_7,
  MR_Word transform_hlds__term_constr_data__VarSet_8,
  MR_Integer transform_hlds__term_constr_data__Indent_9,
  MR_Word transform_hlds__term_constr_data__AbstractGoal_10)
{
  {
    MR_bool transform_hlds__term_constr_data__succeeded;

    switch (MR_tag((MR_Word) transform_hlds__term_constr_data__AbstractGoal_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word transform_hlds__term_constr_data__TypeInfo_108_108;
          MR_Word transform_hlds__term_constr_data__Goals_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__AbstractGoal_10, (MR_Integer) 0)));
          MR_Integer transform_hlds__term_constr_data__Size_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__AbstractGoal_10, (MR_Integer) 1)));
          MR_Word transform_hlds__term_constr_data__Locals_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__AbstractGoal_10, (MR_Integer) 2)));
          MR_Word transform_hlds__term_constr_data__NonLocals_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__AbstractGoal_10, (MR_Integer) 3)));
          MR_Word transform_hlds__term_constr_data__V_89_89;
          MR_String transform_hlds__term_constr_data__V_131_131;

          {
            transform_hlds__term_constr_data__indent_line_3_p_0(transform_hlds__term_constr_data__Indent_9);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "disj[");
          }
          {
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &transform_hlds__term_constr_data_scalar_common_7[0], transform_hlds__term_constr_data__Size_13, &transform_hlds__term_constr_data__V_131_131);
          }
          {
            mercury__io__write_string_3_p_0(transform_hlds__term_constr_data__V_131_131);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "](\n");
          }
          {
            transform_hlds__term_constr_data__dump_abstract_disjuncts_6_p_0(transform_hlds__term_constr_data__ModuleInfo_7, transform_hlds__term_constr_data__VarSet_8, transform_hlds__term_constr_data__Indent_9, transform_hlds__term_constr_data__Goals_12);
          }
          {
            transform_hlds__term_constr_data__indent_line_3_p_0(transform_hlds__term_constr_data__Indent_9);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) " Locals: ");
          }
          {
            transform_hlds__term_constr_data__V_89_89 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__V_89_89, 0) = ((MR_Box) (&transform_hlds__term_constr_data_scalar_common_5[0]));
            MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__V_89_89, 1) = ((MR_Box) (transform_hlds__term_constr_data__dump_abstract_goal_6_p_0_4));
            MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__V_89_89, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__V_89_89, 3) = ((MR_Box) (transform_hlds__term_constr_data__VarSet_8));
          }
          transform_hlds__term_constr_data__TypeInfo_108_108 = (MR_Word) &transform_hlds__term_constr_data_scalar_common_1[0];
          {
            mercury__io__write_list_5_p_0(transform_hlds__term_constr_data__TypeInfo_108_108, transform_hlds__term_constr_data__Locals_14, (MR_String) ", ", transform_hlds__term_constr_data__V_89_89);
          }
          {
            mercury__io__nl_2_p_0();
          }
          {
            transform_hlds__term_constr_data__indent_line_3_p_0(transform_hlds__term_constr_data__Indent_9);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) " Non-Locals: ");
          }
          {
            mercury__io__write_list_5_p_0(transform_hlds__term_constr_data__TypeInfo_108_108, transform_hlds__term_constr_data__NonLocals_15, (MR_String) ", ", transform_hlds__term_constr_data__V_89_89);
          }
          {
            mercury__io__nl_2_p_0();
          }
          {
            transform_hlds__term_constr_data__indent_line_3_p_0(transform_hlds__term_constr_data__Indent_9);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) ")\n");
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word transform_hlds__term_constr_data__TypeInfo_120_120;
          MR_Word transform_hlds__term_constr_data__V_57_57;
          MR_Integer transform_hlds__term_constr_data__V_59_59;
          MR_Word transform_hlds__term_constr_data__V_65_65;
          MR_Word transform_hlds__term_constr_data__Goals_102 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_data__AbstractGoal_10, (MR_Integer) 0)));
          MR_Word transform_hlds__term_constr_data__Locals_103 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_data__AbstractGoal_10, (MR_Integer) 1)));
          MR_Word transform_hlds__term_constr_data__NonLocals_104 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_data__AbstractGoal_10, (MR_Integer) 2)));
          MR_Box transform_hlds__term_constr_data__conv0_STATE_VARIABLE_IO_58_58;

          {
            transform_hlds__term_constr_data__indent_line_3_p_0(transform_hlds__term_constr_data__Indent_9);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "conj(\n");
          }
          transform_hlds__term_constr_data__V_59_59 = (transform_hlds__term_constr_data__Indent_9 + (MR_Integer) 1);
          {
            transform_hlds__term_constr_data__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__V_57_57, 0) = ((MR_Box) (&transform_hlds__term_constr_data_scalar_common_6[0]));
            MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__V_57_57, 1) = ((MR_Box) (transform_hlds__term_constr_data__dump_abstract_goal_6_p_0_2));
            MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__V_57_57, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__V_57_57, 3) = ((MR_Box) (transform_hlds__term_constr_data__ModuleInfo_7));
            MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__V_57_57, 4) = ((MR_Box) (transform_hlds__term_constr_data__VarSet_8));
            MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__V_57_57, 5) = ((MR_Box) (transform_hlds__term_constr_data__V_59_59));
          }
          {
            mercury__list__foldl_4_p_2((MR_Word) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_goal_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, transform_hlds__term_constr_data__V_57_57, transform_hlds__term_constr_data__Goals_102, ((MR_Box) ((MR_Integer) 0)), &transform_hlds__term_constr_data__conv0_STATE_VARIABLE_IO_58_58);
          }
          {
            transform_hlds__term_constr_data__indent_line_3_p_0(transform_hlds__term_constr_data__Indent_9);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) " Locals: ");
          }
          {
            transform_hlds__term_constr_data__V_65_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__V_65_65, 0) = ((MR_Box) (&transform_hlds__term_constr_data_scalar_common_5[0]));
            MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__V_65_65, 1) = ((MR_Box) (transform_hlds__term_constr_data__dump_abstract_goal_6_p_0_3));
            MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__V_65_65, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__V_65_65, 3) = ((MR_Box) (transform_hlds__term_constr_data__VarSet_8));
          }
          transform_hlds__term_constr_data__TypeInfo_120_120 = (MR_Word) &transform_hlds__term_constr_data_scalar_common_1[0];
          {
            mercury__io__write_list_5_p_0(transform_hlds__term_constr_data__TypeInfo_120_120, transform_hlds__term_constr_data__Locals_103, (MR_String) ", ", transform_hlds__term_constr_data__V_65_65);
          }
          {
            mercury__io__nl_2_p_0();
          }
          {
            transform_hlds__term_constr_data__indent_line_3_p_0(transform_hlds__term_constr_data__Indent_9);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) " Non-Locals: ");
          }
          {
            mercury__io__write_list_5_p_0(transform_hlds__term_constr_data__TypeInfo_120_120, transform_hlds__term_constr_data__NonLocals_104, (MR_String) ", ", transform_hlds__term_constr_data__V_65_65);
          }
          {
            mercury__io__nl_2_p_0();
          }
          {
            transform_hlds__term_constr_data__indent_line_3_p_0(transform_hlds__term_constr_data__Indent_9);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) ")\n");
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word transform_hlds__term_constr_data__PPId0_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_data__AbstractGoal_10, (MR_Integer) 0)));
          MR_Word transform_hlds__term_constr_data__CallVars_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_data__AbstractGoal_10, (MR_Integer) 2)));
          MR_Word transform_hlds__term_constr_data__CallPoly_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_data__AbstractGoal_10, (MR_Integer) 6)));
          MR_Word transform_hlds__term_constr_data__PPId_23;
          MR_Word transform_hlds__term_constr_data__V_43_43;
          MR_Word transform_hlds__term_constr_data__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_data__AbstractGoal_10, (MR_Integer) 1)));
          MR_Word transform_hlds__term_constr_data__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_data__AbstractGoal_10, (MR_Integer) 3)));
          MR_Word transform_hlds__term_constr_data__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_data__AbstractGoal_10, (MR_Integer) 4)));
          MR_Word transform_hlds__term_constr_data__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_data__AbstractGoal_10, (MR_Integer) 5)));

          {
            transform_hlds__term_constr_data__indent_line_3_p_0(transform_hlds__term_constr_data__Indent_9);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "call: ");
          }
          transform_hlds__term_constr_data__PPId_23 = (MR_Word) transform_hlds__term_constr_data__PPId0_16;
          {
            hlds__hlds_out__hlds_out_util__write_pred_proc_id_4_p_0(transform_hlds__term_constr_data__ModuleInfo_7, transform_hlds__term_constr_data__PPId_23);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) " : [");
          }
          {
            transform_hlds__term_constr_data__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__V_43_43, 0) = ((MR_Box) (&transform_hlds__term_constr_data_scalar_common_5[0]));
            MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__V_43_43, 1) = ((MR_Box) (transform_hlds__term_constr_data__dump_abstract_goal_6_p_0_1));
            MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__V_43_43, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__V_43_43, 3) = ((MR_Box) (transform_hlds__term_constr_data__VarSet_8));
          }
          {
            mercury__io__write_list_5_p_0((MR_Word) &transform_hlds__term_constr_data_scalar_common_1[0], transform_hlds__term_constr_data__CallVars_18, (MR_String) ", ", transform_hlds__term_constr_data__V_43_43);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "]\n");
          }
          {
            transform_hlds__term_constr_data__indent_line_3_p_0(transform_hlds__term_constr_data__Indent_9);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "Other call constraints:[\n");
          }
          {
            libs__polyhedron__write_polyhedron_4_p_0(transform_hlds__term_constr_data__CallPoly_22, transform_hlds__term_constr_data__VarSet_8);
          }
          {
            transform_hlds__term_constr_data__indent_line_3_p_0(transform_hlds__term_constr_data__Indent_9);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "]\n");
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word transform_hlds__term_constr_data__Poly_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_data__AbstractGoal_10, (MR_Integer) 0)));
          MR_Word transform_hlds__term_constr_data__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_data__AbstractGoal_10, (MR_Integer) 1)));
          MR_Word transform_hlds__term_constr_data__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_data__AbstractGoal_10, (MR_Integer) 2)));

          {
            transform_hlds__term_constr_data__indent_line_3_p_0(transform_hlds__term_constr_data__Indent_9);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "[\n");
          }
          {
            libs__polyhedron__write_polyhedron_4_p_0(transform_hlds__term_constr_data__Poly_24, transform_hlds__term_constr_data__VarSet_8);
          }
          {
            transform_hlds__term_constr_data__indent_line_3_p_0(transform_hlds__term_constr_data__Indent_9);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "]\n");
          }
        }
        break;
    }
  }
}

static void MR_CALL 
transform_hlds__term_constr_data__dump_abstract_proc_5_p_0_1(
  MR_Box transform_hlds__term_constr_data__closure_arg,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2,
  MR_Box * transform_hlds__term_constr_data__wrapper_arg_3)
{
  {
    MR_Box transform_hlds__term_constr_data__closure = transform_hlds__term_constr_data__closure_arg;

    {
      transform_hlds__term_constr_data__dump_size_var_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_1));
    }
  }
}

void MR_CALL 
transform_hlds__term_constr_data__dump_abstract_proc_5_p_0(
  MR_Word transform_hlds__term_constr_data__ModuleInfo_6,
  MR_Integer transform_hlds__term_constr_data__Indent_7,
  MR_Word transform_hlds__term_constr_data__Proc_8)
{
  {
    MR_bool transform_hlds__term_constr_data__succeeded;
    MR_Word transform_hlds__term_constr_data__AbstractPPId_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__Proc_8, (MR_Integer) 0)));
    MR_Word transform_hlds__term_constr_data__HeadVars_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__Proc_8, (MR_Integer) 3)));
    MR_Word transform_hlds__term_constr_data__Body_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__Proc_8, (MR_Integer) 5)));
    MR_Word transform_hlds__term_constr_data__SizeVarSet_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__Proc_8, (MR_Integer) 7)));
    MR_Word transform_hlds__term_constr_data__PPId_14;
    MR_Word transform_hlds__term_constr_data__V_22_22;
    MR_Integer transform_hlds__term_constr_data__V_26_26;
    MR_Word transform_hlds__term_constr_data__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__Proc_8, (MR_Integer) 1)));
    MR_Word transform_hlds__term_constr_data__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__Proc_8, (MR_Integer) 2)));
    MR_Word transform_hlds__term_constr_data__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__Proc_8, (MR_Integer) 4)));
    MR_Word transform_hlds__term_constr_data__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__Proc_8, (MR_Integer) 6)));
    MR_Word transform_hlds__term_constr_data__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__Proc_8, (MR_Integer) 8)));
    MR_Word transform_hlds__term_constr_data__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__Proc_8, (MR_Integer) 9)));
    MR_Integer transform_hlds__term_constr_data__V_38_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__Proc_8, (MR_Integer) 10)));
    MR_Word transform_hlds__term_constr_data__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__Proc_8, (MR_Integer) 11)));

    {
      transform_hlds__term_constr_data__indent_line_3_p_0(transform_hlds__term_constr_data__Indent_7);
    }
    transform_hlds__term_constr_data__PPId_14 = (MR_Word) transform_hlds__term_constr_data__AbstractPPId_10;
    {
      hlds__hlds_out__hlds_out_util__write_pred_proc_id_4_p_0(transform_hlds__term_constr_data__ModuleInfo_6, transform_hlds__term_constr_data__PPId_14);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) " : [");
    }
    {
      transform_hlds__term_constr_data__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__V_22_22, 0) = ((MR_Box) (&transform_hlds__term_constr_data_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__V_22_22, 1) = ((MR_Box) (transform_hlds__term_constr_data__dump_abstract_proc_5_p_0_1));
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__V_22_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__V_22_22, 3) = ((MR_Box) (transform_hlds__term_constr_data__SizeVarSet_13));
    }
    {
      mercury__io__write_list_5_p_0((MR_Word) &transform_hlds__term_constr_data_scalar_common_1[0], transform_hlds__term_constr_data__HeadVars_11, (MR_String) ", ", transform_hlds__term_constr_data__V_22_22);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) " ] :- \n");
    }
    transform_hlds__term_constr_data__V_26_26 = (transform_hlds__term_constr_data__Indent_7 + (MR_Integer) 1);
    {
      transform_hlds__term_constr_data__dump_abstract_goal_6_p_0(transform_hlds__term_constr_data__ModuleInfo_6, transform_hlds__term_constr_data__SizeVarSet_13, transform_hlds__term_constr_data__V_26_26, transform_hlds__term_constr_data__Body_12);
    }
  }
}

static void MR_CALL 
transform_hlds__term_constr_data__dump_abstract_scc_5_p_0_1(
  MR_Box transform_hlds__term_constr_data__closure_arg,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2,
  MR_Box * transform_hlds__term_constr_data__wrapper_arg_3)
{
  {
    MR_Box transform_hlds__term_constr_data__closure = transform_hlds__term_constr_data__closure_arg;

    {
      transform_hlds__term_constr_data__dump_abstract_proc_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_1));
    }
  }
}

void MR_CALL 
transform_hlds__term_constr_data__dump_abstract_scc_5_p_0(
  MR_Word transform_hlds__term_constr_data__ModuleInfo_6,
  MR_Integer transform_hlds__term_constr_data__Indent_7,
  MR_Word transform_hlds__term_constr_data__SCC_8)
{
  {
    MR_bool transform_hlds__term_constr_data__succeeded;
    MR_Word transform_hlds__term_constr_data__V_12_12;
    MR_Box transform_hlds__term_constr_data__conv0_STATE_VARIABLE_IO_11;

    {
      transform_hlds__term_constr_data__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__V_12_12, 0) = ((MR_Box) (&transform_hlds__term_constr_data_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__V_12_12, 1) = ((MR_Box) (transform_hlds__term_constr_data__dump_abstract_scc_5_p_0_1));
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__V_12_12, 3) = ((MR_Box) (transform_hlds__term_constr_data__ModuleInfo_6));
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__V_12_12, 4) = ((MR_Box) (transform_hlds__term_constr_data__Indent_7));
    }
    {
      mercury__list__foldl_4_p_2((MR_Word) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_proc_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, transform_hlds__term_constr_data__V_12_12, transform_hlds__term_constr_data__SCC_8, ((MR_Box) ((MR_Integer) 0)), &transform_hlds__term_constr_data__conv0_STATE_VARIABLE_IO_11);
    }
  }
}

static void MR_CALL 
transform_hlds__term_constr_data__dump_abstract_scc_4_p_0_1(
  MR_Box transform_hlds__term_constr_data__closure_arg,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_data__wrapper_arg_2,
  MR_Box * transform_hlds__term_constr_data__wrapper_arg_3)
{
  {
    MR_Box transform_hlds__term_constr_data__closure = transform_hlds__term_constr_data__closure_arg;

    {
      transform_hlds__term_constr_data__dump_abstract_proc_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__term_constr_data__wrapper_arg_1));
    }
  }
}

void MR_CALL 
transform_hlds__term_constr_data__dump_abstract_scc_4_p_0(
  MR_Word transform_hlds__term_constr_data__ModuleInfo_5,
  MR_Word transform_hlds__term_constr_data__SCC_6)
{
  {
    MR_bool transform_hlds__term_constr_data__succeeded;
    MR_Word transform_hlds__term_constr_data__V_18_18;
    MR_Box transform_hlds__term_constr_data__conv0_STATE_VARIABLE_IO_9;

    {
      transform_hlds__term_constr_data__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__V_18_18, 0) = ((MR_Box) (&transform_hlds__term_constr_data_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__V_18_18, 1) = ((MR_Box) (transform_hlds__term_constr_data__dump_abstract_scc_4_p_0_1));
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__V_18_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__V_18_18, 3) = ((MR_Box) (transform_hlds__term_constr_data__ModuleInfo_5));
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__V_18_18, 4) = ((MR_Box) ((MR_Integer) 0));
    }
    {
      mercury__list__foldl_4_p_2((MR_Word) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_proc_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, transform_hlds__term_constr_data__V_18_18, transform_hlds__term_constr_data__SCC_6, ((MR_Box) ((MR_Integer) 0)), &transform_hlds__term_constr_data__conv0_STATE_VARIABLE_IO_9);
    }
  }
}

MR_bool MR_CALL 
transform_hlds__term_constr_data__analysis_depends_on_ho_1_p_0(
  MR_Word transform_hlds__term_constr_data__Proc_2)
{
  {
    MR_bool transform_hlds__term_constr_data__succeeded;
    MR_Word transform_hlds__term_constr_data__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__Proc_2, (MR_Integer) 11)));
    MR_Word transform_hlds__term_constr_data__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__Proc_2, (MR_Integer) 0)));
    MR_Word transform_hlds__term_constr_data__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__Proc_2, (MR_Integer) 1)));
    MR_Word transform_hlds__term_constr_data__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__Proc_2, (MR_Integer) 2)));
    MR_Word transform_hlds__term_constr_data__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__Proc_2, (MR_Integer) 3)));
    MR_Word transform_hlds__term_constr_data__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__Proc_2, (MR_Integer) 4)));
    MR_Word transform_hlds__term_constr_data__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__Proc_2, (MR_Integer) 5)));
    MR_Word transform_hlds__term_constr_data__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__Proc_2, (MR_Integer) 6)));
    MR_Word transform_hlds__term_constr_data__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__Proc_2, (MR_Integer) 7)));
    MR_Word transform_hlds__term_constr_data__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__Proc_2, (MR_Integer) 8)));
    MR_Word transform_hlds__term_constr_data__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__Proc_2, (MR_Integer) 9)));
    MR_Integer transform_hlds__term_constr_data__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__Proc_2, (MR_Integer) 10)));

    {
      transform_hlds__term_constr_data__succeeded = mercury__list__is_not_empty_1_p_0((MR_Word) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_ho_call_0, transform_hlds__term_constr_data__V_3_3);
    }
    return transform_hlds__term_constr_data__succeeded;
  }
}

MR_Word MR_CALL 
transform_hlds__term_constr_data__size_varset_from_abstract_scc_1_f_0(
  MR_Word transform_hlds__term_constr_data__HeadVar__1_1)
{
  {
    MR_bool transform_hlds__term_constr_data__succeeded;
    MR_Word transform_hlds__term_constr_data__HeadVar__2_2;

    if ((transform_hlds__term_constr_data__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_constr_data", (MR_String) "function \140transform_hlds.term_constr_data.size_varset_from_abstract_scc\'/1", (MR_String) "empty SCC");
        }
      }
    else
      {
        MR_Word transform_hlds__term_constr_data__Proc_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_data__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word transform_hlds__term_constr_data__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_data__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word transform_hlds__term_constr_data__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__Proc_7, (MR_Integer) 0)));
        MR_Word transform_hlds__term_constr_data__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__Proc_7, (MR_Integer) 1)));
        MR_Word transform_hlds__term_constr_data__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__Proc_7, (MR_Integer) 2)));
        MR_Word transform_hlds__term_constr_data__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__Proc_7, (MR_Integer) 3)));
        MR_Word transform_hlds__term_constr_data__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__Proc_7, (MR_Integer) 4)));
        MR_Word transform_hlds__term_constr_data__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__Proc_7, (MR_Integer) 5)));
        MR_Word transform_hlds__term_constr_data__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__Proc_7, (MR_Integer) 6)));
        MR_Word transform_hlds__term_constr_data__V_16_16;
        MR_Word transform_hlds__term_constr_data__V_17_17;
        MR_Integer transform_hlds__term_constr_data__V_18_18;
        MR_Word transform_hlds__term_constr_data__V_19_19;

        transform_hlds__term_constr_data__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__Proc_7, (MR_Integer) 7)));
        transform_hlds__term_constr_data__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__Proc_7, (MR_Integer) 8)));
        transform_hlds__term_constr_data__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__Proc_7, (MR_Integer) 9)));
        transform_hlds__term_constr_data__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__Proc_7, (MR_Integer) 10)));
        transform_hlds__term_constr_data__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__Proc_7, (MR_Integer) 11)));
      }
    return transform_hlds__term_constr_data__HeadVar__2_2;
  }
}

MR_bool MR_CALL 
transform_hlds__term_constr_data__proc_is_recursive_1_p_0(
  MR_Word transform_hlds__term_constr_data__Proc_2)
{
  {
    MR_bool transform_hlds__term_constr_data__succeeded;
    MR_Word transform_hlds__term_constr_data__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__Proc_2, (MR_Integer) 9)));
    MR_Word transform_hlds__term_constr_data__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__Proc_2, (MR_Integer) 0)));
    MR_Word transform_hlds__term_constr_data__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__Proc_2, (MR_Integer) 1)));
    MR_Word transform_hlds__term_constr_data__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__Proc_2, (MR_Integer) 2)));
    MR_Word transform_hlds__term_constr_data__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__Proc_2, (MR_Integer) 3)));
    MR_Word transform_hlds__term_constr_data__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__Proc_2, (MR_Integer) 4)));
    MR_Word transform_hlds__term_constr_data__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__Proc_2, (MR_Integer) 5)));
    MR_Word transform_hlds__term_constr_data__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__Proc_2, (MR_Integer) 6)));
    MR_Word transform_hlds__term_constr_data__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__Proc_2, (MR_Integer) 7)));
    MR_Word transform_hlds__term_constr_data__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__Proc_2, (MR_Integer) 8)));
    MR_Integer transform_hlds__term_constr_data__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__Proc_2, (MR_Integer) 10)));
    MR_Word transform_hlds__term_constr_data__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__Proc_2, (MR_Integer) 11)));

    transform_hlds__term_constr_data__succeeded = (transform_hlds__term_constr_data__V_3_3 == (MR_Integer) 0);
    transform_hlds__term_constr_data__succeeded = !(transform_hlds__term_constr_data__succeeded);
    return transform_hlds__term_constr_data__succeeded;
  }
}

MR_bool MR_CALL 
transform_hlds__term_constr_data__scc_contains_recursion_1_p_0(
  MR_Word transform_hlds__term_constr_data__HeadVar__1_1)
{
  {
    MR_bool transform_hlds__term_constr_data__succeeded;

    if ((transform_hlds__term_constr_data__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_constr_data", (MR_String) "predicate \140transform_hlds.term_constr_data.scc_contains_recursion\'/1", (MR_String) "empty SCC");
        }
        transform_hlds__term_constr_data__succeeded = MR_TRUE;
      }
    else
      {
        MR_Word transform_hlds__term_constr_data__Proc_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_data__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word transform_hlds__term_constr_data__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_data__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word transform_hlds__term_constr_data__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__Proc_5, (MR_Integer) 9)));
        MR_Word transform_hlds__term_constr_data__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__Proc_5, (MR_Integer) 0)));
        MR_Word transform_hlds__term_constr_data__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__Proc_5, (MR_Integer) 1)));
        MR_Word transform_hlds__term_constr_data__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__Proc_5, (MR_Integer) 2)));
        MR_Word transform_hlds__term_constr_data__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__Proc_5, (MR_Integer) 3)));
        MR_Word transform_hlds__term_constr_data__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__Proc_5, (MR_Integer) 4)));
        MR_Word transform_hlds__term_constr_data__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__Proc_5, (MR_Integer) 5)));
        MR_Word transform_hlds__term_constr_data__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__Proc_5, (MR_Integer) 6)));
        MR_Word transform_hlds__term_constr_data__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__Proc_5, (MR_Integer) 7)));
        MR_Word transform_hlds__term_constr_data__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__Proc_5, (MR_Integer) 8)));
        MR_Integer transform_hlds__term_constr_data__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__Proc_5, (MR_Integer) 10)));
        MR_Word transform_hlds__term_constr_data__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__Proc_5, (MR_Integer) 11)));

        transform_hlds__term_constr_data__succeeded = (transform_hlds__term_constr_data__V_7_7 == (MR_Integer) 0);
        transform_hlds__term_constr_data__succeeded = !(transform_hlds__term_constr_data__succeeded);
      }
    return transform_hlds__term_constr_data__succeeded;
  }
}

MR_Word MR_CALL 
transform_hlds__term_constr_data__simplify_conjuncts_1_f_0(
  MR_Word transform_hlds__term_constr_data__Goals0_3)
{
  {
    MR_bool transform_hlds__term_constr_data__succeeded;
    MR_Word transform_hlds__term_constr_data__Goals_4;

    {
      transform_hlds__term_constr_data__simplify_conjuncts_2_p_0(transform_hlds__term_constr_data__Goals0_3, &transform_hlds__term_constr_data__Goals_4);
    }
    return transform_hlds__term_constr_data__Goals_4;
  }
}

MR_Word MR_CALL 
transform_hlds__term_constr_data__simplify_abstract_rep_1_f_0(
  MR_Word transform_hlds__term_constr_data__Goal0_3)
{
  {
    MR_bool transform_hlds__term_constr_data__succeeded;
    MR_Word transform_hlds__term_constr_data__Goal_4;

    {
      transform_hlds__term_constr_data__simplify_abstract_rep_2_p_0(transform_hlds__term_constr_data__Goal0_3, &transform_hlds__term_constr_data__Goal_4);
    }
    return transform_hlds__term_constr_data__Goal_4;
  }
}

MR_Word MR_CALL 
transform_hlds__term_constr_data__combine_primitive_goals_2_f_0(
  MR_Word transform_hlds__term_constr_data__GoalA_4,
  MR_Word transform_hlds__term_constr_data__GoalB_5)
{
  {
    MR_bool transform_hlds__term_constr_data__succeeded = ((MR_tag((MR_Word) transform_hlds__term_constr_data__GoalA_4)) == (MR_mktag((MR_Integer) 3)));
    MR_Word transform_hlds__term_constr_data__Goal_6;
    MR_Word transform_hlds__term_constr_data__PolyA_7;
    MR_Word transform_hlds__term_constr_data__LocalsA_8;
    MR_Word transform_hlds__term_constr_data__NonLocalsA_9;
    MR_Word transform_hlds__term_constr_data__PolyB_10;
    MR_Word transform_hlds__term_constr_data__LocalsB_11;
    MR_Word transform_hlds__term_constr_data__NonLocalsB_12;

    if (transform_hlds__term_constr_data__succeeded)
      {
        transform_hlds__term_constr_data__PolyA_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_data__GoalA_4, (MR_Integer) 0)));
        transform_hlds__term_constr_data__LocalsA_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_data__GoalA_4, (MR_Integer) 1)));
        transform_hlds__term_constr_data__NonLocalsA_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_data__GoalA_4, (MR_Integer) 2)));
        transform_hlds__term_constr_data__succeeded = ((MR_tag((MR_Word) transform_hlds__term_constr_data__GoalB_5)) == (MR_mktag((MR_Integer) 3)));
        if (transform_hlds__term_constr_data__succeeded)
          {
            transform_hlds__term_constr_data__PolyB_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_data__GoalB_5, (MR_Integer) 0)));
            transform_hlds__term_constr_data__LocalsB_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_data__GoalB_5, (MR_Integer) 1)));
            transform_hlds__term_constr_data__NonLocalsB_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_data__GoalB_5, (MR_Integer) 2)));
          }
      }
    if (transform_hlds__term_constr_data__succeeded)
      {
        MR_Word transform_hlds__term_constr_data__TypeInfo_19_19;
        MR_Word transform_hlds__term_constr_data__Poly_13;
        MR_Word transform_hlds__term_constr_data__Locals_14;
        MR_Word transform_hlds__term_constr_data__NonLocals_15;

        {
          transform_hlds__term_constr_data__Poly_13 = libs__polyhedron__intersection_2_f_0(transform_hlds__term_constr_data__PolyA_7, transform_hlds__term_constr_data__PolyB_10);
        }
        transform_hlds__term_constr_data__TypeInfo_19_19 = (MR_Word) &transform_hlds__term_constr_data_scalar_common_1[0];
        {
          transform_hlds__term_constr_data__Locals_14 = mercury__list__f_43_43_2_f_0(transform_hlds__term_constr_data__TypeInfo_19_19, transform_hlds__term_constr_data__LocalsA_8, transform_hlds__term_constr_data__LocalsB_11);
        }
        {
          transform_hlds__term_constr_data__NonLocals_15 = mercury__list__f_43_43_2_f_0(transform_hlds__term_constr_data__TypeInfo_19_19, transform_hlds__term_constr_data__NonLocalsA_9, transform_hlds__term_constr_data__NonLocalsB_12);
        }
        {
          transform_hlds__term_constr_data__Goal_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), transform_hlds__term_constr_data__Goal_6, 0) = ((MR_Box) (transform_hlds__term_constr_data__Poly_13));
          MR_hl_field(MR_mktag(3), transform_hlds__term_constr_data__Goal_6, 1) = ((MR_Box) (transform_hlds__term_constr_data__Locals_14));
          MR_hl_field(MR_mktag(3), transform_hlds__term_constr_data__Goal_6, 2) = ((MR_Box) (transform_hlds__term_constr_data__NonLocals_15));
        }
      }
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_constr_data", (MR_String) "function \140transform_hlds.term_constr_data.combine_primitive_goals\'/2", (MR_String) "non-primitive goals");
        }
      }
    return transform_hlds__term_constr_data__Goal_6;
  }
}

MR_Word MR_CALL 
transform_hlds__term_constr_data__combine_recursion_types_2_f_0(
  MR_Word transform_hlds__term_constr_data__HeadVar__1_1,
  MR_Word transform_hlds__term_constr_data__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__term_constr_data__succeeded;
    MR_Word transform_hlds__term_constr_data__HeadVar__3_3;

    switch (transform_hlds__term_constr_data__HeadVar__1_1) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 3:
        {
          transform_hlds__term_constr_data__HeadVar__3_3 = ((&transform_hlds__term_constr_data_vector_common_3[0 + transform_hlds__term_constr_data__HeadVar__2_2]))->transform_hlds__term_constr_data__vector_common_type_3_0__vct_3_f_0;
        }
        break;
      case (MR_Integer) 1:
        {
          transform_hlds__term_constr_data__HeadVar__3_3 = ((&transform_hlds__term_constr_data_vector_common_3[4 + transform_hlds__term_constr_data__HeadVar__2_2]))->transform_hlds__term_constr_data__vector_common_type_3_0__vct_3_f_0;
        }
        break;
      case (MR_Integer) 2:
        {
          transform_hlds__term_constr_data__HeadVar__3_3 = ((&transform_hlds__term_constr_data_vector_common_3[8 + transform_hlds__term_constr_data__HeadVar__2_2]))->transform_hlds__term_constr_data__vector_common_type_3_0__vct_3_f_0;
        }
        break;
      case (MR_Integer) 0:
        {
          transform_hlds__term_constr_data__HeadVar__3_3 = ((&transform_hlds__term_constr_data_vector_common_3[12 + transform_hlds__term_constr_data__HeadVar__2_2]))->transform_hlds__term_constr_data__vector_common_type_3_0__vct_3_f_0;
        }
        break;
    }
    return transform_hlds__term_constr_data__HeadVar__3_3;
  }
}

MR_Word MR_CALL 
transform_hlds__term_constr_data__update_local_and_nonlocal_vars_3_f_0(
  MR_Word transform_hlds__term_constr_data__Goal0_5,
  MR_Word transform_hlds__term_constr_data__Locals0_6,
  MR_Word transform_hlds__term_constr_data__NonLocals0_7)
{
  {
    MR_bool transform_hlds__term_constr_data__succeeded;
    MR_Word transform_hlds__term_constr_data__Goal_8;

    switch (MR_tag((MR_Word) transform_hlds__term_constr_data__Goal0_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word transform_hlds__term_constr_data__TypeInfo_34_34 = (MR_Word) &transform_hlds__term_constr_data_scalar_common_1[0];
          MR_Word transform_hlds__term_constr_data__Goals_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__Goal0_5, (MR_Integer) 0)));
          MR_Integer transform_hlds__term_constr_data__Size_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__Goal0_5, (MR_Integer) 1)));
          MR_Word transform_hlds__term_constr_data__Locals1_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__Goal0_5, (MR_Integer) 2)));
          MR_Word transform_hlds__term_constr_data__NonLocals1_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__Goal0_5, (MR_Integer) 3)));
          MR_Word transform_hlds__term_constr_data__Locals_13;
          MR_Word transform_hlds__term_constr_data__NonLocals_14;

          {
            transform_hlds__term_constr_data__Locals_13 = mercury__list__f_43_43_2_f_0(transform_hlds__term_constr_data__TypeInfo_34_34, transform_hlds__term_constr_data__Locals0_6, transform_hlds__term_constr_data__Locals1_11);
          }
          {
            transform_hlds__term_constr_data__NonLocals_14 = mercury__list__f_43_43_2_f_0(transform_hlds__term_constr_data__TypeInfo_34_34, transform_hlds__term_constr_data__NonLocals0_7, transform_hlds__term_constr_data__NonLocals1_12);
          }
          {
            transform_hlds__term_constr_data__Goal_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__Goal_8, 0) = ((MR_Box) (transform_hlds__term_constr_data__Goals_9));
            MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__Goal_8, 1) = ((MR_Box) (transform_hlds__term_constr_data__Size_10));
            MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__Goal_8, 2) = ((MR_Box) (transform_hlds__term_constr_data__Locals_13));
            MR_hl_field(MR_mktag(0), transform_hlds__term_constr_data__Goal_8, 3) = ((MR_Box) (transform_hlds__term_constr_data__NonLocals_14));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word transform_hlds__term_constr_data__TypeInfo_35_35 = (MR_Word) &transform_hlds__term_constr_data_scalar_common_1[0];
          MR_Word transform_hlds__term_constr_data__Goals_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_data__Goal0_5, (MR_Integer) 0)));
          MR_Word transform_hlds__term_constr_data__Locals1_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_data__Goal0_5, (MR_Integer) 1)));
          MR_Word transform_hlds__term_constr_data__NonLocals1_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_data__Goal0_5, (MR_Integer) 2)));
          MR_Word transform_hlds__term_constr_data__Locals_23;
          MR_Word transform_hlds__term_constr_data__NonLocals_24;

          {
            transform_hlds__term_constr_data__Locals_23 = mercury__list__f_43_43_2_f_0(transform_hlds__term_constr_data__TypeInfo_35_35, transform_hlds__term_constr_data__Locals0_6, transform_hlds__term_constr_data__Locals1_21);
          }
          {
            transform_hlds__term_constr_data__NonLocals_24 = mercury__list__f_43_43_2_f_0(transform_hlds__term_constr_data__TypeInfo_35_35, transform_hlds__term_constr_data__NonLocals0_7, transform_hlds__term_constr_data__NonLocals1_22);
          }
          {
            transform_hlds__term_constr_data__Goal_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), transform_hlds__term_constr_data__Goal_8, 0) = ((MR_Box) (transform_hlds__term_constr_data__Goals_20));
            MR_hl_field(MR_mktag(1), transform_hlds__term_constr_data__Goal_8, 1) = ((MR_Box) (transform_hlds__term_constr_data__Locals_23));
            MR_hl_field(MR_mktag(1), transform_hlds__term_constr_data__Goal_8, 2) = ((MR_Box) (transform_hlds__term_constr_data__NonLocals_24));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word transform_hlds__term_constr_data__TypeInfo_36_36 = (MR_Word) &transform_hlds__term_constr_data_scalar_common_1[0];
          MR_Word transform_hlds__term_constr_data__PPId_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_data__Goal0_5, (MR_Integer) 0)));
          MR_Word transform_hlds__term_constr_data__Context_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_data__Goal0_5, (MR_Integer) 1)));
          MR_Word transform_hlds__term_constr_data__CallVars_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_data__Goal0_5, (MR_Integer) 2)));
          MR_Word transform_hlds__term_constr_data__Zeros_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_data__Goal0_5, (MR_Integer) 3)));
          MR_Word transform_hlds__term_constr_data__Polyhedron_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_data__Goal0_5, (MR_Integer) 6)));
          MR_Word transform_hlds__term_constr_data__Locals1_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_data__Goal0_5, (MR_Integer) 4)));
          MR_Word transform_hlds__term_constr_data__NonLocals1_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_data__Goal0_5, (MR_Integer) 5)));
          MR_Word transform_hlds__term_constr_data__Locals_27;
          MR_Word transform_hlds__term_constr_data__NonLocals_28;

          {
            transform_hlds__term_constr_data__Locals_27 = mercury__list__f_43_43_2_f_0(transform_hlds__term_constr_data__TypeInfo_36_36, transform_hlds__term_constr_data__Locals0_6, transform_hlds__term_constr_data__Locals1_25);
          }
          {
            transform_hlds__term_constr_data__NonLocals_28 = mercury__list__f_43_43_2_f_0(transform_hlds__term_constr_data__TypeInfo_36_36, transform_hlds__term_constr_data__NonLocals0_7, transform_hlds__term_constr_data__NonLocals1_26);
          }
          {
            transform_hlds__term_constr_data__Goal_8 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), transform_hlds__term_constr_data__Goal_8, 0) = ((MR_Box) (transform_hlds__term_constr_data__PPId_15));
            MR_hl_field(MR_mktag(2), transform_hlds__term_constr_data__Goal_8, 1) = ((MR_Box) (transform_hlds__term_constr_data__Context_16));
            MR_hl_field(MR_mktag(2), transform_hlds__term_constr_data__Goal_8, 2) = ((MR_Box) (transform_hlds__term_constr_data__CallVars_17));
            MR_hl_field(MR_mktag(2), transform_hlds__term_constr_data__Goal_8, 3) = ((MR_Box) (transform_hlds__term_constr_data__Zeros_18));
            MR_hl_field(MR_mktag(2), transform_hlds__term_constr_data__Goal_8, 4) = ((MR_Box) (transform_hlds__term_constr_data__Locals_27));
            MR_hl_field(MR_mktag(2), transform_hlds__term_constr_data__Goal_8, 5) = ((MR_Box) (transform_hlds__term_constr_data__NonLocals_28));
            MR_hl_field(MR_mktag(2), transform_hlds__term_constr_data__Goal_8, 6) = ((MR_Box) (transform_hlds__term_constr_data__Polyhedron_19));
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word transform_hlds__term_constr_data__TypeInfo_37_37 = (MR_Word) &transform_hlds__term_constr_data_scalar_common_1[0];
          MR_Word transform_hlds__term_constr_data__Locals1_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_data__Goal0_5, (MR_Integer) 1)));
          MR_Word transform_hlds__term_constr_data__NonLocals1_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_data__Goal0_5, (MR_Integer) 2)));
          MR_Word transform_hlds__term_constr_data__Locals_31;
          MR_Word transform_hlds__term_constr_data__NonLocals_32;
          MR_Word transform_hlds__term_constr_data__Polyhedron_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_data__Goal0_5, (MR_Integer) 0)));

          {
            transform_hlds__term_constr_data__Locals_31 = mercury__list__f_43_43_2_f_0(transform_hlds__term_constr_data__TypeInfo_37_37, transform_hlds__term_constr_data__Locals0_6, transform_hlds__term_constr_data__Locals1_29);
          }
          {
            transform_hlds__term_constr_data__NonLocals_32 = mercury__list__f_43_43_2_f_0(transform_hlds__term_constr_data__TypeInfo_37_37, transform_hlds__term_constr_data__NonLocals0_7, transform_hlds__term_constr_data__NonLocals1_30);
          }
          {
            transform_hlds__term_constr_data__Goal_8 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), transform_hlds__term_constr_data__Goal_8, 0) = ((MR_Box) (transform_hlds__term_constr_data__Polyhedron_33));
            MR_hl_field(MR_mktag(3), transform_hlds__term_constr_data__Goal_8, 1) = ((MR_Box) (transform_hlds__term_constr_data__Locals_31));
            MR_hl_field(MR_mktag(3), transform_hlds__term_constr_data__Goal_8, 2) = ((MR_Box) (transform_hlds__term_constr_data__NonLocals_32));
          }
        }
        break;
    }
    return transform_hlds__term_constr_data__Goal_8;
  }
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
	MR_register_type_ctor_info(&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_goals_0);
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

/* :- end_module transform_hlds.term_constr_data. */
