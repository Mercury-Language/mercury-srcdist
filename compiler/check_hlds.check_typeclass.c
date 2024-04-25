/*
** Automatically generated from `check_typeclass.m'
** by the Mercury compiler,
** version rotd-2024-04-25
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


// :- module check_hlds.check_typeclass.
// :- implementation.

/*
INIT mercury__check_hlds__check_typeclass__init
ENDINIT
*/

#include "check_hlds.check_typeclass.mih"


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
#include "edit_seq.mih"
#include "enum.mih"
#include "getopt.mih"
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
#include "check_hlds.type_assign.mih"
#include "check_hlds.type_util.mih"
#include "check_hlds.typecheck_info.mih"
#include "check_hlds.typeclasses.mih"
#include "hlds.add_pred.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_error_util.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.make_hlds.mih"
#include "hlds.passes_aux.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.maybe_util.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.equiv_type.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.parse_tree_out_type.mih"
#include "parse_tree.parse_tree_output.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_type_scan.mih"
#include "parse_tree.prog_type_subst.mih"
#include "parse_tree.prog_type_unify.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "recompilation.record_uses.mih"
#include "string.builder.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.make_hlds.instance_method_clauses.mih"
#include "hlds.make_hlds.make_hlds_types.mih"
#include "hlds.make_hlds.qual_info.mih"




static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__check_typeclass__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__hlds_data__type_ctor_info_hlds_type_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__check_typeclass__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__check_typeclass__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_hlds__hlds_class__type_ctor_info_hlds_class_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__check_typeclass__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_class_id_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__check_typeclass__list__pti_list_1__plain_check_hlds__check_typeclass__type_ctor_info_class_path_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__check_typeclass__list__pti_list_1__plain_hlds__hlds_class__type_ctor_info_hlds_instance_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__check_typeclass__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__check_typeclass__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__check_typeclass__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__check_typeclass__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__check_typeclass__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__check_typeclass__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__check_typeclass__list__pti_list_1__plain_hlds__hlds_class__type_ctor_info_method_info_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__check_typeclass__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__check_typeclass__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__check_typeclass__pair__pti_pair_2__plain_list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0__plain_check_hlds__check_typeclass__type_ctor_info_type_vector_instances_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__check_typeclass__list__pti_list_1__plain_hlds__hlds_class__type_ctor_info_hlds_class_fundep_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__check_typeclass__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__check_typeclass__list__pti_list_1__plain_check_hlds__check_typeclass__type_ctor_info_induced_fundep_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__check_typeclass__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__check_typeclass__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__check_typeclass__cord__pti_cord_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0;

static const MR_EnumFunctorDesc check_hlds__check_typeclass__check_hlds__check_typeclass__enum_functor_desc_bad_instance_type_kind_0_0;

static const MR_EnumFunctorDesc check_hlds__check_typeclass__check_hlds__check_typeclass__enum_functor_desc_bad_instance_type_kind_0_1;

static const MR_EnumFunctorDescPtr check_hlds__check_typeclass__check_hlds__check_typeclass__enum_ordinal_ordered_bad_instance_type_kind_0[2];

static const MR_EnumFunctorDescPtr check_hlds__check_typeclass__check_hlds__check_typeclass__enum_name_ordered_bad_instance_type_kind_0[2];

static const MR_Integer check_hlds__check_typeclass__check_hlds__check_typeclass__functor_number_map_bad_instance_type_kind_0[2];

static const MR_Integer check_hlds__check_typeclass__check_hlds__check_typeclass__functor_number_map_class_path_0[1];

static const MR_FA_TypeInfo_Struct1 check_hlds__check_typeclass__list__ti_list_1parse_tree__prog_data__type_ctor_info_class_id_0;

static const MR_NotagFunctorDesc check_hlds__check_typeclass__check_hlds__check_typeclass__notag_functor_desc_class_path_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__check_typeclass__set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_PseudoTypeInfo check_hlds__check_typeclass__check_hlds__check_typeclass__field_types_induced_fundep_0_0[2];

static const MR_ConstString check_hlds__check_typeclass__check_hlds__check_typeclass__field_names_induced_fundep_0_0[2];

static const MR_DuFunctorDesc check_hlds__check_typeclass__check_hlds__check_typeclass__du_functor_desc_induced_fundep_0_0;

static const MR_DuFunctorDescPtr check_hlds__check_typeclass__check_hlds__check_typeclass__du_stag_ordered_induced_fundep_0_0[1];

static const MR_DuPtagLayout check_hlds__check_typeclass__check_hlds__check_typeclass__du_ptag_ordered_induced_fundep_0[1];

static const MR_DuFunctorDescPtr check_hlds__check_typeclass__check_hlds__check_typeclass__du_name_ordered_induced_fundep_0[1];

static const MR_Integer check_hlds__check_typeclass__check_hlds__check_typeclass__functor_number_map_induced_fundep_0[1];

static const MR_FA_TypeInfo_Struct1 check_hlds__check_typeclass__list__ti_list_1check_hlds__check_typeclass__type_ctor_info_induced_fundep_0;

static const MR_EnumFunctorDesc check_hlds__check_typeclass__check_hlds__check_typeclass__enum_functor_desc_module_quals_0_0;

static const MR_EnumFunctorDesc check_hlds__check_typeclass__check_hlds__check_typeclass__enum_functor_desc_module_quals_0_1;

static const MR_EnumFunctorDesc check_hlds__check_typeclass__check_hlds__check_typeclass__enum_functor_desc_module_quals_0_2;

static const MR_EnumFunctorDescPtr check_hlds__check_typeclass__check_hlds__check_typeclass__enum_ordinal_ordered_module_quals_0[3];

static const MR_EnumFunctorDescPtr check_hlds__check_typeclass__check_hlds__check_typeclass__enum_name_ordered_module_quals_0[3];

static const MR_Integer check_hlds__check_typeclass__check_hlds__check_typeclass__functor_number_map_module_quals_0[3];

static const MR_EnumFunctorDesc check_hlds__check_typeclass__check_hlds__check_typeclass__enum_functor_desc_quant_error_type_0_0;

static const MR_EnumFunctorDesc check_hlds__check_typeclass__check_hlds__check_typeclass__enum_functor_desc_quant_error_type_0_1;

static const MR_EnumFunctorDescPtr check_hlds__check_typeclass__check_hlds__check_typeclass__enum_ordinal_ordered_quant_error_type_0[2];

static const MR_EnumFunctorDescPtr check_hlds__check_typeclass__check_hlds__check_typeclass__enum_name_ordered_quant_error_type_0[2];

static const MR_Integer check_hlds__check_typeclass__check_hlds__check_typeclass__functor_number_map_quant_error_type_0[2];

static const MR_EnumFunctorDesc check_hlds__check_typeclass__check_hlds__check_typeclass__enum_functor_desc_type_limit_0_0;

static const MR_EnumFunctorDesc check_hlds__check_typeclass__check_hlds__check_typeclass__enum_functor_desc_type_limit_0_1;

static const MR_EnumFunctorDescPtr check_hlds__check_typeclass__check_hlds__check_typeclass__enum_ordinal_ordered_type_limit_0[2];

static const MR_EnumFunctorDescPtr check_hlds__check_typeclass__check_hlds__check_typeclass__enum_name_ordered_type_limit_0[2];

static const MR_Integer check_hlds__check_typeclass__check_hlds__check_typeclass__functor_number_map_type_limit_0[2];

static const MR_FA_TypeInfo_Struct1 check_hlds__check_typeclass__list__ti_list_1hlds__hlds_class__type_ctor_info_hlds_instance_defn_0;

static const MR_PseudoTypeInfo check_hlds__check_typeclass__check_hlds__check_typeclass__field_types_type_vector_instances_0_0[4];

static const MR_ConstString check_hlds__check_typeclass__check_hlds__check_typeclass__field_names_type_vector_instances_0_0[4];

static const MR_DuFunctorDesc check_hlds__check_typeclass__check_hlds__check_typeclass__du_functor_desc_type_vector_instances_0_0;

static const MR_DuFunctorDescPtr check_hlds__check_typeclass__check_hlds__check_typeclass__du_stag_ordered_type_vector_instances_0_0[1];

static const MR_DuPtagLayout check_hlds__check_typeclass__check_hlds__check_typeclass__du_ptag_ordered_type_vector_instances_0[1];

static const MR_DuFunctorDescPtr check_hlds__check_typeclass__check_hlds__check_typeclass__du_name_ordered_type_vector_instances_0[1];

static const MR_Integer check_hlds__check_typeclass__check_hlds__check_typeclass__functor_number_map_type_vector_instances_0[1];

static const MR_FA_TypeInfo_Struct2 check_hlds__check_typeclass__tree234__ti_tree234_2list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0check_hlds__check_typeclass__type_ctor_info_type_vector_instances_0;

static const MR_EnumFunctorDesc check_hlds__check_typeclass__check_hlds__check_typeclass__enum_functor_desc_which_types_0_0;

static const MR_EnumFunctorDesc check_hlds__check_typeclass__check_hlds__check_typeclass__enum_functor_desc_which_types_0_1;

static const MR_EnumFunctorDescPtr check_hlds__check_typeclass__check_hlds__check_typeclass__enum_ordinal_ordered_which_types_0[2];

static const MR_EnumFunctorDescPtr check_hlds__check_typeclass__check_hlds__check_typeclass__enum_name_ordered_which_types_0[2];

static const MR_Integer check_hlds__check_typeclass__check_hlds__check_typeclass__functor_number_map_which_types_0[2];

static MR_Word MR_CALL 
check_hlds__check_typeclass__IntroducedFrom__func__error_classes_do_not_exist_pieces__2649__1_1_f_0(
  MR_Word LambdaHeadVar__1_14);

static MR_String MR_CALL 
check_hlds__check_typeclass__IntroducedFrom__func__report_unbound_tvars_in_ctor_context__2578__1_2_f_0(
  MR_Word TVarSet_11,
  MR_Word HeadVar__2_73);

static MR_String MR_CALL 
check_hlds__check_typeclass__IntroducedFrom__func__report_badly_quantified_vars__2548__1_2_f_0(
  MR_Word TVarSet_10,
  MR_Word HeadVar__2_76);

static MR_String MR_CALL 
check_hlds__check_typeclass__IntroducedFrom__func__report_unbound_tvars_in_pred_context__2479__1_2_f_0(
  MR_Word TVarSet_9,
  MR_Word HeadVar__2_91);

static MR_String MR_CALL 
check_hlds__check_typeclass__IntroducedFrom__func__report_coverage_error__2401__1_2_f_0(
  MR_Word TVarSet_10,
  MR_Word HeadVar__2_83);

static MR_bool MR_CALL 
check_hlds__check_typeclass__IntroducedFrom__pred__check_typeclass_constraints_on_data_ctor__1844__1_2_p_0(
  MR_Word ExistQArgTVars_31,
  MR_Word ExistQArgTVarsB_32);

static MR_bool MR_CALL 
check_hlds__check_typeclass__IntroducedFrom__pred__check_typeclass_constraints_on_data_ctor__1843__1_2_p_0(
  MR_Word ExistQVars_19,
  MR_Word HeadVar__2_53);

static MR_bool MR_CALL 
check_hlds__check_typeclass__IntroducedFrom__pred__check_typeclass_constraints_on_data_ctor__1840__1_2_p_0(
  MR_Word ExistQVars_19,
  MR_Word LambdaHeadVar__1_43);

static MR_bool MR_CALL 
check_hlds__check_typeclass__IntroducedFrom__pred__generate_instance_method_pred_and_procs__966__1_9_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
check_hlds__check_typeclass__IntroducedFrom__pred__generate_instance_method_pred_and_procs__966__1_9_p_0(
  MR_Word ClassPredId_16,
  MR_Word Context_56,
  MR_Word InstancePredId_103,
  MR_Word ClassProcTable_105,
  MR_Word STATE_VARIABLE_ModuleInfo_147_147,
  MR_Word LambdaHeadVar__1_148,
  MR_Word * LambdaHeadVar__2_149,
  MR_Word LambdaHeadVar__3_150,
  MR_Word * LambdaHeadVar__4_151);

static MR_bool MR_CALL 
check_hlds__check_typeclass__IntroducedFrom__pred__generate_instance_method_pred_and_procs__972__1_2_p_0(
  MR_Word ClassPredId_16,
  MR_Word ClassOrigPredId_115);

static void MR_CALL 
check_hlds__check_typeclass____Compare____which_types_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__check_typeclass____Unify____which_types_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__check_typeclass____Compare____type_vector_instances_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__check_typeclass____Unify____type_vector_instances_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__check_typeclass____Compare____type_vector_instances_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__check_typeclass____Unify____type_vector_instances_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__check_typeclass____Compare____type_vector_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__check_typeclass____Unify____type_vector_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__check_typeclass____Compare____type_limit_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__check_typeclass____Unify____type_limit_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__check_typeclass____Compare____quant_error_type_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__check_typeclass____Unify____quant_error_type_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__check_typeclass____Compare____module_quals_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__check_typeclass____Unify____module_quals_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__check_typeclass____Compare____induced_fundeps_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__check_typeclass____Unify____induced_fundeps_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__check_typeclass____Compare____induced_fundep_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__check_typeclass____Unify____induced_fundep_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__check_typeclass____Compare____class_path_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__check_typeclass____Unify____class_path_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__check_typeclass____Compare____bad_instance_type_kind_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__check_typeclass____Unify____bad_instance_type_kind_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_Word MR_CALL 
check_hlds__check_typeclass__method_name_pieces_1_f_0(
  MR_Word Method_3);

static void MR_CALL 
check_hlds__check_typeclass__report_duplicate_instance_defn_8_p_0(
  MR_Word ClassId_9,
  MR_Word Severity_10,
  MR_String SeverityWord_11,
  MR_String Category_12,
  MR_Word FirstContext_13,
  MR_Word LaterInstanceDefn_14,
  MR_Word STATE_VARIABLE_Specs_0_22,
  MR_Word * STATE_VARIABLE_Specs_23);

static MR_Word MR_CALL 
check_hlds__check_typeclass__non_tvar_arg_to_pieces_2_f_0(
  MR_Word TVarSet_4,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__check_typeclass__add_path_element_3_p_0(
  MR_Word ClassId_4,
  MR_Word STATE_VARIABLE_LaterLines_0_7,
  MR_Word * STATE_VARIABLE_LaterLines_8);

static void MR_CALL 
check_hlds__check_typeclass__report_cyclic_classes_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__check_typeclass__report_cyclic_classes_4_p_0(
  MR_Word ClassTable_5,
  MR_Word ClassPath_6,
  MR_Word STATE_VARIABLE_Specs_0_16,
  MR_Word * STATE_VARIABLE_Specs_17);

static void MR_CALL 
check_hlds__check_typeclass__collect_determined_vars_5_p_0(
  MR_Word FunDep_6,
  MR_Word STATE_VARIABLE_FunDeps_0_11,
  MR_Word * STATE_VARIABLE_FunDeps_12,
  MR_Word STATE_VARIABLE_Vars_0_13,
  MR_Word * STATE_VARIABLE_Vars_14);

static void MR_CALL 
check_hlds__check_typeclass__remove_vars_3_p_0(
  MR_Word Vars_4,
  MR_Word InducedFunDep0_5,
  MR_Word * InducedFunDep_6);

static void MR_CALL 
check_hlds__check_typeclass__induced_vars_4_p_0(
  MR_Word ArgTypes_5,
  MR_Integer ArgNum_6,
  MR_Word STATE_VARIABLE_TVars_0_11,
  MR_Word * STATE_VARIABLE_TVars_12);

static void MR_CALL 
check_hlds__check_typeclass__add_induced_fundep_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__check_typeclass__add_induced_fundep_4_p_0(
  MR_Word Args_5,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_FunDeps_0_11,
  MR_Word * STATE_VARIABLE_FunDeps_12);

static void MR_CALL 
check_hlds__check_typeclass__induced_fundeps_3_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__check_typeclass__induced_fundeps_3_4_p_0(
  MR_Word ClassTable_5,
  MR_Word Constraint_6,
  MR_Word STATE_VARIABLE_FunDeps_0_13,
  MR_Word * STATE_VARIABLE_FunDeps_14);

static void MR_CALL 
check_hlds__check_typeclass__acc_induced_fundeps_for_constraint_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__check_typeclass__acc_induced_fundeps_for_constraint_5_p_0(
  MR_Word ClassTable_6,
  MR_Word TVarSet_7,
  MR_Word Constraint_8,
  MR_Word STATE_VARIABLE_FunDeps_0_25,
  MR_Word * STATE_VARIABLE_FunDeps_26);

static MR_Box MR_CALL 
check_hlds__check_typeclass__check_typeclass_constraints_on_data_ctor_6_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__check_typeclass__check_typeclass_constraints_on_data_ctor_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__check_typeclass__check_typeclass_constraints_on_data_ctor_6_p_0_3(
  MR_Box closure_arg);

static MR_bool MR_CALL 
check_hlds__check_typeclass__check_typeclass_constraints_on_data_ctor_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
check_hlds__check_typeclass__check_typeclass_constraints_on_data_ctor_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__check_typeclass__check_typeclass_constraints_on_data_ctor_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word TypeCtor_8,
  MR_Word TypeDefn_9,
  MR_Word Ctor_10,
  MR_Word STATE_VARIABLE_Specs_0_38,
  MR_Word * STATE_VARIABLE_Specs_39);

static MR_Box MR_CALL 
check_hlds__check_typeclass__report_unbound_tvars_in_ctor_context_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__check_typeclass__report_unbound_tvars_in_ctor_context_5_p_0(
  MR_Word Vars_6,
  MR_Word TypeCtor_7,
  MR_Word TypeDefn_8,
  MR_Word STATE_VARIABLE_Specs_0_16,
  MR_Word * STATE_VARIABLE_Specs_17);

static void MR_CALL 
check_hlds__check_typeclass__check_typeclass_constraints_on_type_data_ctors_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__check_typeclass__check_typeclass_constraints_on_type_data_ctors_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_Specs_0_19,
  MR_Word * STATE_VARIABLE_Specs_20);

static MR_Box MR_CALL 
check_hlds__check_typeclass__check_typeclass_constraints_on_pred_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__check_typeclass__check_typeclass_constraints_on_pred_5_p_0(
  MR_Word ProgressStream_6,
  MR_Word ModuleInfo_7,
  MR_Word PredId_8,
  MR_Word STATE_VARIABLE_Specs_0_27,
  MR_Word * STATE_VARIABLE_Specs_28);

static void MR_CALL 
check_hlds__check_typeclass__find_bad_class_ids_in_constraints_4_p_0(
  MR_Word ClassTable_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_BadClassIds_0_3,
  MR_Word * STATE_VARIABLE_BadClassIds_4);

static MR_Box MR_CALL 
check_hlds__check_typeclass__check_constraint_quant_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__check_typeclass__check_constraint_quant_3_p_0(
  MR_Word PredInfo_4,
  MR_Word STATE_VARIABLE_Specs_0_16,
  MR_Word * STATE_VARIABLE_Specs_17);

static MR_Box MR_CALL 
check_hlds__check_typeclass__maybe_report_badly_quantified_vars_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__check_typeclass__maybe_report_badly_quantified_vars_5_p_0(
  MR_Word PredInfo_6,
  MR_Word QuantErrorType_7,
  MR_Word TVars_8,
  MR_Word STATE_VARIABLE_Specs_0_12,
  MR_Word * STATE_VARIABLE_Specs_13);

static MR_Box MR_CALL 
check_hlds__check_typeclass__check_pred_type_ambiguities_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__check_typeclass__check_pred_type_ambiguities_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__check_typeclass__check_pred_type_ambiguities_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word PredInfo_6,
  MR_Word STATE_VARIABLE_Specs_0_18,
  MR_Word * STATE_VARIABLE_Specs_19);

static void MR_CALL 
check_hlds__check_typeclass__check_consistency_pair_2_7_p_0(
  MR_Word ClassId_8,
  MR_Word ClassDefn_9,
  MR_Word InstanceA_10,
  MR_Word InstanceB_11,
  MR_Word FunDep_12,
  MR_Word STATE_VARIABLE_Specs_0_30,
  MR_Word * STATE_VARIABLE_Specs_31);

static void MR_CALL 
check_hlds__check_typeclass__report_consistency_error_7_p_0(
  MR_Word ClassId_8,
  MR_Word ClassDefn_9,
  MR_Word InstanceA_10,
  MR_Word InstanceB_11,
  MR_Word FunDep_12,
  MR_Word STATE_VARIABLE_Specs_0_29,
  MR_Word * STATE_VARIABLE_Specs_30);

static void MR_CALL 
check_hlds__check_typeclass__check_consistency_pair_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__check_typeclass__check_consistency_pair_7_p_0(
  MR_Word ClassId_8,
  MR_Word ClassDefn_9,
  MR_Word FunDeps_10,
  MR_Word InstanceA_11,
  MR_Word InstanceB_12,
  MR_Word STATE_VARIABLE_Specs_0_14,
  MR_Word * STATE_VARIABLE_Specs_15);

static void MR_CALL 
check_hlds__check_typeclass__check_coverage_for_instance_defn_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__check_typeclass__check_coverage_for_instance_defn_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word ClassId_8,
  MR_Word InstanceDefn_9,
  MR_Word FunDep_10,
  MR_Word STATE_VARIABLE_Specs_0_24,
  MR_Word * STATE_VARIABLE_Specs_25);

static MR_Box MR_CALL 
check_hlds__check_typeclass__report_coverage_error_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__check_typeclass__report_coverage_error_5_p_0(
  MR_Word ClassId_6,
  MR_Word InstanceDefn_7,
  MR_Word Vars_8,
  MR_Word STATE_VARIABLE_Specs_0_15,
  MR_Word * STATE_VARIABLE_Specs_16);

static void MR_CALL 
check_hlds__check_typeclass__fundeps_closure_loop_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
check_hlds__check_typeclass__fundeps_closure_loop_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__check_typeclass__fundeps_closure_loop_4_p_0(
  MR_Word FunDeps0_5,
  MR_Word NewVars0_6,
  MR_Word Result0_7,
  MR_Word * Result_8);

static MR_bool MR_CALL 
check_hlds__check_typeclass__is_concrete_or_imported_instance_defn_1_p_0(
  MR_Word InstanceDefn_2);

static MR_bool MR_CALL 
check_hlds__check_typeclass__is_concrete_instance_defn_1_p_0(
  MR_Word InstanceDefn_2);

static MR_bool MR_CALL 
check_hlds__check_typeclass__check_fundeps_for_class_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
check_hlds__check_typeclass__check_fundeps_for_class_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__check_typeclass__check_fundeps_for_class_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word ClassId_6,
  MR_Word STATE_VARIABLE_Specs_0_16,
  MR_Word * STATE_VARIABLE_Specs_17);

static void MR_CALL 
check_hlds__check_typeclass__check_consistency_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__check_typeclass__check_consistency_6_p_0(
  MR_Word ClassId_1,
  MR_Word ClassDefn_2,
  MR_Word HeadVar__3_3,
  MR_Word FunDeps_4,
  MR_Word STATE_VARIABLE_Specs_0_5,
  MR_Word * STATE_VARIABLE_Specs_6);

static void MR_CALL 
check_hlds__check_typeclass__check_coverage_for_instance_defns_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__check_typeclass__check_coverage_for_instance_defns_6_p_0(
  MR_Word ModuleInfo_1,
  MR_Word ClassId_2,
  MR_Word HeadVar__3_3,
  MR_Word FunDeps_4,
  MR_Word STATE_VARIABLE_Specs_0_5,
  MR_Word * STATE_VARIABLE_Specs_6);

static void MR_CALL 
check_hlds__check_typeclass__check_that_instance_constraints_match_5_p_0(
  MR_Word ClassId_6,
  MR_Word ConcreteInstanceDefn_7,
  MR_Word AbstractInstanceDefn_8,
  MR_Word STATE_VARIABLE_Specs_0_16,
  MR_Word * STATE_VARIABLE_Specs_17);

static void MR_CALL 
check_hlds__check_typeclass__report_abstract_concrete_constraints_mismatch_5_p_0(
  MR_Word ClassId_6,
  MR_Word AbstractInstanceDefn_7,
  MR_Word ConcreteInstanceDefn_8,
  MR_Word STATE_VARIABLE_Specs_0_17,
  MR_Word * STATE_VARIABLE_Specs_18);

static void MR_CALL 
check_hlds__check_typeclass__compare_instance_defns_by_context_3_p_0(
  MR_Word InstanceDefnA_4,
  MR_Word InstanceDefnB_5,
  MR_Word * Result_6);

static void MR_CALL 
check_hlds__check_typeclass__check_for_missing_concrete_instances_in_class_and_vector_5_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__check_typeclass__check_for_missing_concrete_instances_in_class_and_vector_5_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__check_typeclass__check_for_missing_concrete_instances_in_class_and_vector_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__check_typeclass__check_for_missing_concrete_instances_in_class_and_vector_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__check_typeclass__check_for_missing_concrete_instances_in_class_and_vector_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__check_typeclass__check_for_missing_concrete_instances_in_class_and_vector_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__check_typeclass__check_for_missing_concrete_instances_in_class_and_vector_5_p_0(
  MR_Word ClassId_6,
  MR_Word HeadVar__2_2,
  MR_Word * PickedInstance_9,
  MR_Word STATE_VARIABLE_Specs_0_36,
  MR_Word * STATE_VARIABLE_Specs_37);

static void MR_CALL 
check_hlds__check_typeclass__report_local_vs_nonlocal_clash_5_p_0(
  MR_Word ClassId_6,
  MR_Word LocalInstance_7,
  MR_Word NonLocalInstance_8,
  MR_Word STATE_VARIABLE_Specs_0_18,
  MR_Word * STATE_VARIABLE_Specs_19);

static MR_String MR_CALL 
check_hlds__check_typeclass__instance_name_6_f_0(
  MR_Word WhichTypes_8,
  MR_Word Limit_9,
  MR_Word Quals_10,
  MR_Word SetDefaultFunc_11,
  MR_Word ClassId_12,
  MR_Word InstanceDefn_13);

static void MR_CALL 
check_hlds__check_typeclass__report_abstract_instance_without_concrete_4_p_0(
  MR_Word ClassId_5,
  MR_Word InstanceDefn_6,
  MR_Word STATE_VARIABLE_Specs_0_18,
  MR_Word * STATE_VARIABLE_Specs_19);

static void MR_CALL 
check_hlds__check_typeclass__report_any_duplicate_instance_defns_in_category_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__check_typeclass__report_any_duplicate_instance_defns_in_category_8_p_0(
  MR_Word ClassId_9,
  MR_Word Severity_10,
  MR_String SeverityWord_11,
  MR_String Category_12,
  MR_Word InstanceDefns_13,
  MR_Word * MaybeInstanceDefn_14,
  MR_Word STATE_VARIABLE_Specs_0_19,
  MR_Word * STATE_VARIABLE_Specs_20);

static void MR_CALL 
check_hlds__check_typeclass__check_for_overlapping_nonidentical_instance_5_p_0(
  MR_Word ClassId_6,
  MR_Word InstanceDefnA_7,
  MR_Word InstanceDefnB_8,
  MR_Word STATE_VARIABLE_Specs_0_40,
  MR_Word * STATE_VARIABLE_Specs_41);

static void MR_CALL 
check_hlds__check_typeclass__check_for_missing_concrete_instances_in_class_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
check_hlds__check_typeclass__check_for_missing_concrete_instances_in_class_4_p_0(
  MR_Word ClassId_5,
  MR_Word Instances_6,
  MR_Word STATE_VARIABLE_Specs_0_11,
  MR_Word * STATE_VARIABLE_Specs_12);

static void MR_CALL 
check_hlds__check_typeclass__build_type_vector_instances_map_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_VectorInstancesMap_0_2,
  MR_Word * STATE_VARIABLE_VectorInstancesMap_3);

static void MR_CALL 
check_hlds__check_typeclass__categorize_and_add_instance_defn_4_p_0(
  MR_Word IsImported_5,
  MR_Word InstanceDefn_6,
  MR_Word VectorInstances0_7,
  MR_Word * VectorInstances_8);

static void MR_CALL 
check_hlds__check_typeclass__check_for_overlapping_nonidentical_instances_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__check_typeclass__check_for_overlapping_nonidentical_instances_4_p_0(
  MR_Word ClassId_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_Specs_0_3,
  MR_Word * STATE_VARIABLE_Specs_4);

static void MR_CALL 
check_hlds__check_typeclass__generate_instance_method_procs_for_class_instance_14_p_0(
  MR_Word ClassId_15,
  MR_Word ClassTVarSet_16,
  MR_Word ClassParamTVars_17,
  MR_Word SuperClasses_18,
  MR_Word ClassInterface_19,
  MR_Word ClassMethodInfos_20,
  MR_Word STATE_VARIABLE_InstanceDefn_0_40,
  MR_Word * STATE_VARIABLE_InstanceDefn_41,
  MR_Word STATE_VARIABLE_ModuleInfo_0_42,
  MR_Word * STATE_VARIABLE_ModuleInfo_43,
  MR_Word STATE_VARIABLE_QualInfo_0_44,
  MR_Word * STATE_VARIABLE_QualInfo_45,
  MR_Word STATE_VARIABLE_Specs_0_46,
  MR_Word * STATE_VARIABLE_Specs_47);

static MR_Box MR_CALL 
check_hlds__check_typeclass__report_unknown_instance_methods_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__check_typeclass__report_unknown_instance_methods_6_p_0(
  MR_Word ClassId_7,
  MR_Word InstanceDefn_8,
  MR_Word HeadMethod_9,
  MR_Word TailMethods_10,
  MR_Word STATE_VARIABLE_Specs_0_27,
  MR_Word * STATE_VARIABLE_Specs_28);

static void MR_CALL 
check_hlds__check_typeclass__check_instance_for_superclass_conformance_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word ClassId_11,
  MR_Word ClassTVarSet_12,
  MR_Word ClassVars0_13,
  MR_Word ProgSuperClasses0_14,
  MR_Word InstanceDefn0_15,
  MR_Word * InstanceDefn_16,
  MR_Word STATE_VARIABLE_Specs_0_48,
  MR_Word * STATE_VARIABLE_Specs_49);

static void MR_CALL 
check_hlds__check_typeclass__report_unsatistfied_superclass_constraint_6_p_0(
  MR_Word ClassId_7,
  MR_Word InstanceDefn_8,
  MR_Word ClassTVarSet_9,
  MR_Word UnprovenConstraints_10,
  MR_Word STATE_VARIABLE_Specs_0_17,
  MR_Word * STATE_VARIABLE_Specs_18);

static void MR_CALL 
check_hlds__check_typeclass__constraint_list_to_comma_strings_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
check_hlds__check_typeclass__generate_instance_method_procs_for_preds_16_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_InstanceMethodMap_0_5,
  MR_Word * STATE_VARIABLE_InstanceMethodMap_6,
  MR_Word STATE_VARIABLE_InstanceMethodsCord_0_7,
  MR_Word * STATE_VARIABLE_InstanceMethodsCord_8,
  MR_Word STATE_VARIABLE_InstanceMethodInfosCord_0_9,
  MR_Word * STATE_VARIABLE_InstanceMethodInfosCord_10,
  MR_Word STATE_VARIABLE_ModuleInfo_0_11,
  MR_Word * STATE_VARIABLE_ModuleInfo_12,
  MR_Word STATE_VARIABLE_QualInfo_0_13,
  MR_Word * STATE_VARIABLE_QualInfo_14,
  MR_Word STATE_VARIABLE_Specs_0_15,
  MR_Word * STATE_VARIABLE_Specs_16);

static void MR_CALL 
check_hlds__check_typeclass__report_undefined_method_5_p_0(
  MR_Word ClassId_6,
  MR_Word InstanceDefn_7,
  MR_Word MethodName_8,
  MR_Word STATE_VARIABLE_Specs_0_14,
  MR_Word * STATE_VARIABLE_Specs_15);

static void MR_CALL 
check_hlds__check_typeclass__generate_instance_method_pred_and_procs_13_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
check_hlds__check_typeclass__generate_instance_method_pred_and_procs_13_p_0(
  MR_Word ClassId_14,
  MR_Word ClassVars_15,
  MR_Word ClassPredId_16,
  MR_Word InstanceDefn_17,
  MR_Word InstanceMethod_18,
  MR_Word ClassMethodInfos_19,
  MR_Word * InstanceMethodInfos_20,
  MR_Word STATE_VARIABLE_ModuleInfo_0_126,
  MR_Word * STATE_VARIABLE_ModuleInfo_127,
  MR_Word STATE_VARIABLE_QualInfo_0_128,
  MR_Word * STATE_VARIABLE_QualInfo_129,
  MR_Word STATE_VARIABLE_Specs_0_130,
  MR_Word * STATE_VARIABLE_Specs_131);

static void MR_CALL 
check_hlds__check_typeclass__get_other_class_method_procs_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
check_hlds__check_typeclass__build_instance_method_map_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_InstanceMethodMap_0_4,
  MR_Word * STATE_VARIABLE_InstanceMethodMap_5,
  MR_Word STATE_VARIABLE_Specs_0_6,
  MR_Word * STATE_VARIABLE_Specs_7);

static void MR_CALL 
check_hlds__check_typeclass__report_duplicate_method_defn_7_p_0(
  MR_Word ClassId_8,
  MR_Word InstanceDefn_9,
  MR_Word MethodName_10,
  MR_Word FirstContext_11,
  MR_Word LaterContext_12,
  MR_Word STATE_VARIABLE_Specs_0_23,
  MR_Word * STATE_VARIABLE_Specs_24);

static void MR_CALL 
check_hlds__check_typeclass__generate_instance_method_procs_for_class_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
check_hlds__check_typeclass__generate_instance_method_procs_for_class_10_p_0(
  MR_Word ClassTable_11,
  MR_Word ClassId_12,
  MR_Word InstanceDefns0_13,
  MR_Word * InstanceDefns_14,
  MR_Word STATE_VARIABLE_ModuleInfo_0_32,
  MR_Word * STATE_VARIABLE_ModuleInfo_33,
  MR_Word STATE_VARIABLE_QualInfo_0_34,
  MR_Word * STATE_VARIABLE_QualInfo_35,
  MR_Word STATE_VARIABLE_Specs_0_36,
  MR_Word * STATE_VARIABLE_Specs_37);

static void MR_CALL 
check_hlds__check_typeclass__is_valid_instance_type_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word ClassId_10,
  MR_Word InstanceDefn_11,
  MR_Word Type_12,
  MR_Integer ArgNum_13,
  MR_Integer * HeadVar__6_6,
  MR_Word STATE_VARIABLE_Specs_0_40,
  MR_Word * STATE_VARIABLE_Specs_41);

static void MR_CALL 
check_hlds__check_typeclass__report_bad_type_in_instance_6_p_0(
  MR_Word ClassId_7,
  MR_Word InstanceDefn_8,
  MR_Word EndPieces_9,
  MR_Word Kind_10,
  MR_Word STATE_VARIABLE_Specs_0_16,
  MR_Word * STATE_VARIABLE_Specs_17);

static MR_Box MR_CALL 
check_hlds__check_typeclass__report_badly_formed_type_in_instance_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__check_typeclass__report_badly_formed_type_in_instance_7_p_0(
  MR_Word ClassId_8,
  MR_Word InstanceDefn_9,
  MR_Word TypeCtor_10,
  MR_Integer ArgNum_11,
  MR_Word NonTVarArgs_12,
  MR_Word STATE_VARIABLE_Specs_0_18,
  MR_Word * STATE_VARIABLE_Specs_19);

static void MR_CALL 
check_hlds__check_typeclass__find_non_type_variables_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer ArgNum_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
check_hlds__check_typeclass__is_orig_type_non_eqv_type_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word ClassId_10,
  MR_Word InstanceDefn_11,
  MR_Word Type_12,
  MR_Integer ArgNum_13,
  MR_Integer * HeadVar__6_6,
  MR_Word STATE_VARIABLE_Specs_0_41,
  MR_Word * STATE_VARIABLE_Specs_42);

static MR_Word MR_CALL 
check_hlds__check_typeclass__in_instance_decl_pieces_3_f_0(
  MR_Word WhichTypes_5,
  MR_Word ClassId_6,
  MR_Word InstanceDefn_7);

static void MR_CALL 
check_hlds__check_typeclass__is_instance_type_vector_valid_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
check_hlds__check_typeclass__is_instance_type_vector_valid_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
check_hlds__check_typeclass__is_instance_type_vector_valid_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word ClassId_6,
  MR_Word InstanceDefn_7,
  MR_Word * STATE_VARIABLE_Specs_13);

static void MR_CALL 
check_hlds__check_typeclass__check_instance_declaration_types_for_class_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__check_typeclass__check_instance_declaration_types_for_class_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word ClassId_7,
  MR_Word InstanceDefns_8,
  MR_Word STATE_VARIABLE_Specs_0_12,
  MR_Word * STATE_VARIABLE_Specs_13);

static void MR_CALL 
check_hlds__check_typeclass__find_class_cycles_3_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box * wrapper_arg_9);

static void MR_CALL 
check_hlds__check_typeclass__find_class_cycles_3_10_p_0(
  MR_Word Path_11,
  MR_Word Constraint_12,
  MR_Word STATE_VARIABLE_ClassTable_0_25,
  MR_Word * STATE_VARIABLE_ClassTable_26,
  MR_Word STATE_VARIABLE_Visited_0_27,
  MR_Word * STATE_VARIABLE_Visited_28,
  MR_Word STATE_VARIABLE_Cycles_0_29,
  MR_Word * STATE_VARIABLE_Cycles_30,
  MR_Word STATE_VARIABLE_FunDepAncestors_0_31,
  MR_Word * STATE_VARIABLE_FunDepAncestors_32);

static void MR_CALL 
check_hlds__check_typeclass__find_class_cycles_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box * wrapper_arg_9);

static void MR_CALL 
check_hlds__check_typeclass__find_class_cycles_8_p_0(
  MR_Word Path_9,
  MR_Word ClassId_10,
  MR_Word STATE_VARIABLE_ClassTable_0_16,
  MR_Word * STATE_VARIABLE_ClassTable_17,
  MR_Word STATE_VARIABLE_Visited_0_18,
  MR_Word * STATE_VARIABLE_Visited_19,
  MR_Word STATE_VARIABLE_Cycles_0_20,
  MR_Word * STATE_VARIABLE_Cycles_21);

static MR_bool MR_CALL 
check_hlds__check_typeclass__find_class_cycle_4_p_0(
  MR_Word ClassId_5,
  MR_Word PathRemaining0_6,
  MR_Word PathSoFar0_7,
  MR_Word * Cycle_8);

static void MR_CALL 
check_hlds__check_typeclass__check_typeclasses_6_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__check_typeclass__check_typeclasses_6_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__check_typeclass__check_typeclasses_6_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
check_hlds__check_typeclass__check_typeclasses_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box * wrapper_arg_9);

static void MR_CALL 
check_hlds__check_typeclass__check_typeclasses_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
check_hlds__check_typeclass__check_typeclasses_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__check_typeclass__check_typeclasses_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
check_hlds__check_typeclass__check_typeclass_constraints_on_data_ctors_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__check_typeclass__check_typeclass_constraints_on_data_ctors_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word STATE_VARIABLE_Specs_0_8,
  MR_Word * STATE_VARIABLE_Specs_9);

static MR_bool MR_CALL 
check_hlds__check_typeclass____Unify____bad_instance_type_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__check_typeclass____Compare____bad_instance_type_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__check_typeclass____Unify____class_path_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__check_typeclass____Compare____class_path_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__check_typeclass____Unify____induced_fundep_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__check_typeclass____Compare____induced_fundep_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__check_typeclass____Unify____induced_fundeps_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__check_typeclass____Compare____induced_fundeps_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__check_typeclass____Unify____module_quals_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__check_typeclass____Compare____module_quals_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__check_typeclass____Unify____quant_error_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__check_typeclass____Compare____quant_error_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__check_typeclass____Unify____type_limit_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__check_typeclass____Compare____type_limit_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__check_typeclass____Unify____type_vector_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__check_typeclass____Compare____type_vector_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__check_typeclass____Unify____type_vector_instances_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__check_typeclass____Compare____type_vector_instances_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__check_typeclass____Unify____type_vector_instances_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__check_typeclass____Compare____type_vector_instances_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__check_typeclass____Unify____which_types_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__check_typeclass____Compare____which_types_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box check_hlds__check_typeclass_scalar_common_1[184][2];

static /* final */ const MR_Box check_hlds__check_typeclass_scalar_common_2[17][3];

static /* final */ const MR_Box check_hlds__check_typeclass_scalar_common_3[5][1];

static /* final */ const MR_Box check_hlds__check_typeclass_scalar_common_4[3][4];

static /* final */ const MR_Box check_hlds__check_typeclass_scalar_common_5[8][7];

static /* final */ const MR_Box check_hlds__check_typeclass_scalar_common_6[3][11];

static /* final */ const MR_Box check_hlds__check_typeclass_scalar_common_7[6][8];

static /* final */ const MR_Box check_hlds__check_typeclass_scalar_common_8[2][13];

static /* final */ const MR_Box check_hlds__check_typeclass_scalar_common_9[5][6];

static /* final */ const MR_Box check_hlds__check_typeclass_scalar_common_10[1][17];

static /* final */ const MR_Box check_hlds__check_typeclass_scalar_common_11[1][12];

static /* final */ const MR_Box check_hlds__check_typeclass_scalar_common_12[5][5];

static /* final */ const MR_Box check_hlds__check_typeclass_scalar_common_13[2][9];

static /* final */ const MR_Box check_hlds__check_typeclass_scalar_common_14[2][10];




static /* final */ const MR_Box check_hlds__check_typeclass_scalar_common_1[184][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__check_typeclass__check_hlds__check_typeclass__type_ctor_info_class_path_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   7 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row   8 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__check_typeclass_scalar_common_1[0]))
  },
  /* row   9 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__check_typeclass__check_hlds__check_typeclass__type_ctor_info_induced_fundep_0))
  },
  /* row  10 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&check_hlds__check_typeclass_scalar_common_1[0]))
  },
  /* row  11 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0))
  },
  /* row  12 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0))
  },
  /* row  13 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "is an apply/N type;"))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "the"))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "instance type"))
  },
  /* row  17 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "type variables."))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__check_typeclass_scalar_common_1[18]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__check_typeclass_scalar_common_1[17])))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "a type constructor applied to zero or more"))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__check_typeclass_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__check_typeclass_scalar_common_1[19])))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "it should be"))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__check_typeclass_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__check_typeclass_scalar_common_1[21])))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "is a higher order type;"))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "is a type variable;"))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: no definition for typeclass"))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__check_typeclass_scalar_common_1[27]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__check_typeclass_scalar_common_1[17])))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: instance declaration for abstract typeclass"))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: cyclic superclass relation detected:"))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "<="))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "in the"))
  },
  /* row  33 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "instance type,"))
  },
  /* row  34 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "of the arguments of the type constructor"))
  },
  /* row  35 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "argument,"))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "is an abstract exported equivalence type."))
  },
  /* row  37 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__check_typeclass_scalar_common_1[36]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__check_typeclass_scalar_common_1[17])))
  },
  /* row  38 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "multiple implementations of"))
  },
  /* row  39 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "First definition appears here."))
  },
  /* row  40 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__check_typeclass_scalar_common_1[39]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__check_typeclass_scalar_common_1[17])))
  },
  /* row  41 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Later definition appears here."))
  },
  /* row  42 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__check_typeclass_scalar_common_1[41]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__check_typeclass_scalar_common_1[17])))
  },
  /* row  43 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "no implementation for"))
  },
  /* row  44 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "the type class has no"))
  },
  /* row  45 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "method named"))
  },
  /* row  46 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 35U)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row  47 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__check_typeclass_scalar_common_1[46]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  48 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "the type class has none of these methods:"))
  },
  /* row  49 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__check_typeclass_scalar_common_1[48]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__check_typeclass_scalar_common_1[47])))
  },
  /* row  50 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 35U)),
    ((MR_Box) ((MR_Integer) -1))
  },
  /* row  51 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__check_typeclass_scalar_common_1[50]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  52 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__check_typeclass_scalar_common_1[27]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__check_typeclass_scalar_common_1[51])))
  },
  /* row  53 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "the following superclass"))
  },
  /* row  54 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "not satisfied:"))
  },
  /* row  55 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: overlapping instance declarations"))
  },
  /* row  56 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "for class"))
  },
  /* row  57 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "One instance declaration is here, ..."))
  },
  /* row  58 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__check_typeclass_scalar_common_1[57]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__check_typeclass_scalar_common_1[17])))
  },
  /* row  59 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) (MR_mkword(1, &check_hlds__check_typeclass_scalar_common_1[58])))
  },
  /* row  60 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__check_typeclass_scalar_common_1[27]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__check_typeclass_scalar_common_1[59])))
  },
  /* row  61 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "... and the other is here."))
  },
  /* row  62 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__check_typeclass_scalar_common_1[61]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__check_typeclass_scalar_common_1[17])))
  },
  /* row  63 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row  64 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "duplicate"))
  },
  /* row  65 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "instance declaration"))
  },
  /* row  66 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Previous instance declaration was here."))
  },
  /* row  67 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__check_typeclass_scalar_common_1[66]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__check_typeclass_scalar_common_1[17])))
  },
  /* row  68 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: the instance constraints"))
  },
  /* row  69 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "on this abstract instance declaration"))
  },
  /* row  70 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "on the corresponding concrete instance declaration."))
  },
  /* row  71 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__check_typeclass_scalar_common_1[70]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__check_typeclass_scalar_common_1[17])))
  },
  /* row  72 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "do not match the instance constraints"))
  },
  /* row  73 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__check_typeclass_scalar_common_1[72]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__check_typeclass_scalar_common_1[71])))
  },
  /* row  74 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "concrete instance declaration is here."))
  },
  /* row  75 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__check_typeclass_scalar_common_1[74]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__check_typeclass_scalar_common_1[17])))
  },
  /* row  76 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "The corresponding"))
  },
  /* row  77 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__check_typeclass_scalar_common_1[76]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__check_typeclass_scalar_common_1[75])))
  },
  /* row  78 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: this abstract instance declaration"))
  },
  /* row  79 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "for"))
  },
  /* row  80 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "in the implementation section."))
  },
  /* row  81 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__check_typeclass_scalar_common_1[80]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__check_typeclass_scalar_common_1[17])))
  },
  /* row  82 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "has no corresponding concrete instance declaration"))
  },
  /* row  83 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__check_typeclass_scalar_common_1[82]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__check_typeclass_scalar_common_1[81])))
  },
  /* row  84 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: this instance declaration"))
  },
  /* row  85 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "an instance declaration in another module."))
  },
  /* row  86 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__check_typeclass_scalar_common_1[85]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__check_typeclass_scalar_common_1[17])))
  },
  /* row  87 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "clashes with"))
  },
  /* row  88 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__check_typeclass_scalar_common_1[87]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__check_typeclass_scalar_common_1[86])))
  },
  /* row  89 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "The other instance declaration is here."))
  },
  /* row  90 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__check_typeclass_scalar_common_1[89]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__check_typeclass_scalar_common_1[17])))
  },
  /* row  91 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "In instance for typeclass"))
  },
  /* row  92 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "functional dependency not satisfied:"))
  },
  /* row  93 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "in the range of the functional dependency, but"))
  },
  /* row  94 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "not determined by the domain."))
  },
  /* row  95 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__check_typeclass_scalar_common_1[94]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__check_typeclass_scalar_common_1[17])))
  },
  /* row  96 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Inconsistent instance declaration for typeclass"))
  },
  /* row  97 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "with functional dependency"))
  },
  /* row  98 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Here is the conflicting instance."))
  },
  /* row  99 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__check_typeclass_scalar_common_1[98]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__check_typeclass_scalar_common_1[17])))
  },
  /* row 100 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "In declaration for"))
  },
  /* row 101 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "error in type class constraints:"))
  },
  /* row 102 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "in the constraints, but"))
  },
  /* row 103 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "not determined by the"))
  },
  /* row 104 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__check_typeclass_scalar_common_1[103]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 105 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "function\'s argument or result types."))
  },
  /* row 106 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__check_typeclass_scalar_common_1[105]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__check_typeclass_scalar_common_1[17])))
  },
  /* row 107 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "predicate\'s argument types."))
  },
  /* row 108 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__check_typeclass_scalar_common_1[107]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__check_typeclass_scalar_common_1[17])))
  },
  /* row 109 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__check_typeclass_scalar_common_1[63]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__check_typeclass_scalar_common_1[17])))
  },
  /* row 110 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "In declaration of"))
  },
  /* row 111 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__check_typeclass_scalar_common_1[110]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 112 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "type variable"))
  },
  /* row 113 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "existentially constrained"))
  },
  /* row 114 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "universally quantified"))
  },
  /* row 115 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "universally constrained"))
  },
  /* row 116 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "existentially quantified"))
  },
  /* row 117 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 118 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "but"))
  },
  /* row 119 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "In declaration for type"))
  },
  /* row 120 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "not determined by the constructor\'s argument types."))
  },
  /* row 121 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__check_typeclass_scalar_common_1[120]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__check_typeclass_scalar_common_1[17])))
  },
  /* row 122 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "of the reference manual for details."))
  },
  /* row 123 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__check_typeclass_scalar_common_1[122]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__check_typeclass_scalar_common_1[17])))
  },
  /* row 124 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "See the \"Functional dependencies\" section"))
  },
  /* row 125 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__check_typeclass_scalar_common_1[124]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__check_typeclass_scalar_common_1[123])))
  },
  /* row 126 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) (MR_mkword(1, &check_hlds__check_typeclass_scalar_common_1[125])))
  },
  /* row 127 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "is fully determined."))
  },
  /* row 128 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__check_typeclass_scalar_common_1[127]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__check_typeclass_scalar_common_1[126])))
  },
  /* row 129 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "2) The type variable occurs in a type which"))
  },
  /* row 130 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__check_typeclass_scalar_common_1[129]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__check_typeclass_scalar_common_1[128])))
  },
  /* row 131 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) (MR_mkword(1, &check_hlds__check_typeclass_scalar_common_1[130])))
  },
  /* row 132 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "constructor which is constrained."))
  },
  /* row 133 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__check_typeclass_scalar_common_1[132]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__check_typeclass_scalar_common_1[131])))
  },
  /* row 134 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "types of the predicate, function, or"))
  },
  /* row 135 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__check_typeclass_scalar_common_1[134]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__check_typeclass_scalar_common_1[133])))
  },
  /* row 136 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "1) The type variable occurs in the argument"))
  },
  /* row 137 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__check_typeclass_scalar_common_1[136]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__check_typeclass_scalar_common_1[135])))
  },
  /* row 138 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) (MR_mkword(1, &check_hlds__check_typeclass_scalar_common_1[137])))
  },
  /* row 139 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "following holds:"))
  },
  /* row 140 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__check_typeclass_scalar_common_1[139]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__check_typeclass_scalar_common_1[138])))
  },
  /* row 141 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "A type variable is determined if one of the"))
  },
  /* row 142 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__check_typeclass_scalar_common_1[141]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__check_typeclass_scalar_common_1[140])))
  },
  /* row 143 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) (MR_mkword(1, &check_hlds__check_typeclass_scalar_common_1[142])))
  },
  /* row 144 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "that functional dependency are fully determined."))
  },
  /* row 145 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__check_typeclass_scalar_common_1[144]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__check_typeclass_scalar_common_1[143])))
  },
  /* row 146 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "the types in all of the domain arguments for"))
  },
  /* row 147 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__check_typeclass_scalar_common_1[146]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__check_typeclass_scalar_common_1[145])))
  },
  /* row 148 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "functional dependency for that class, and"))
  },
  /* row 149 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__check_typeclass_scalar_common_1[148]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__check_typeclass_scalar_common_1[147])))
  },
  /* row 150 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "that argument is in the range of some"))
  },
  /* row 151 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__check_typeclass_scalar_common_1[150]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__check_typeclass_scalar_common_1[149])))
  },
  /* row 152 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "2) The type occurs in a constraint argument,"))
  },
  /* row 153 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__check_typeclass_scalar_common_1[152]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__check_typeclass_scalar_common_1[151])))
  },
  /* row 154 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) (MR_mkword(1, &check_hlds__check_typeclass_scalar_common_1[153])))
  },
  /* row 155 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "are determined."))
  },
  /* row 156 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__check_typeclass_scalar_common_1[155]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__check_typeclass_scalar_common_1[154])))
  },
  /* row 157 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "1) All type variables occurring in the type"))
  },
  /* row 158 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__check_typeclass_scalar_common_1[157]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__check_typeclass_scalar_common_1[156])))
  },
  /* row 159 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) (MR_mkword(1, &check_hlds__check_typeclass_scalar_common_1[158])))
  },
  /* row 160 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__check_typeclass_scalar_common_1[139]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__check_typeclass_scalar_common_1[159])))
  },
  /* row 161 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "A type is fully determined if one of the"))
  },
  /* row 162 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__check_typeclass_scalar_common_1[161]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__check_typeclass_scalar_common_1[160])))
  },
  /* row 163 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "must be fully determined."))
  },
  /* row 164 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__check_typeclass_scalar_common_1[163]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__check_typeclass_scalar_common_1[162])))
  },
  /* row 165 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "All types occurring in typeclass constraints"))
  },
  /* row 166 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__check_typeclass_scalar_common_1[165]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__check_typeclass_scalar_common_1[164])))
  },
  /* row 167 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "error: the type class"))
  },
  /* row 168 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "does not exist."))
  },
  /* row 169 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__check_typeclass_scalar_common_1[168]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__check_typeclass_scalar_common_1[17])))
  },
  /* row 170 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "error: the type classes"))
  },
  /* row 171 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__check_typeclass_scalar_common_1[170]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 172 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "do not exist."))
  },
  /* row 173 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__check_typeclass_scalar_common_1[172]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__check_typeclass_scalar_common_1[17])))
  },
  /* row 174 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "In instance declaration for"))
  },
  /* row 175 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "method"))
  },
  /* row 176 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__check_typeclass_scalar_common_1[14]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__check_typeclass_scalar_common_1[23])))
  },
  /* row 177 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__check_typeclass_scalar_common_1[24]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__check_typeclass_scalar_common_1[23])))
  },
  /* row 178 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__check_typeclass_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__check_typeclass_scalar_common_1[23])))
  },
  /* row 179 */
  {
    ((MR_Box) (&check_hlds__check_typeclass_scalar_common_3[3])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 180 */
  {
    (MR_Box) ((MR_Unsigned) 1U),
    ((MR_Box) (MR_mkword(1, &check_hlds__check_typeclass_scalar_common_1[166])))
  },
  /* row 181 */
  {
    ((MR_Box) (MR_mkword(2, &check_hlds__check_typeclass_scalar_common_1[180]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 182 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__check_typeclass_scalar_common_1[116]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__check_typeclass_scalar_common_1[28])))
  },
  /* row 183 */
  {
    ((MR_Box) (&check_hlds__check_typeclass_scalar_common_3[4])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box check_hlds__check_typeclass_scalar_common_2[17][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&check_hlds__check_typeclass_scalar_common_1[7])),
    ((MR_Box) (&check_hlds__check_typeclass__check_hlds__check_typeclass__type_ctor_info_type_vector_instances_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__check_typeclass_scalar_common_1[7])),
    ((MR_Box) (&check_hlds__check_typeclass__check_hlds__check_typeclass__type_ctor_info_type_vector_instances_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&check_hlds__check_typeclass_scalar_common_5[2])),
    ((MR_Box) (check_hlds__check_typeclass__check_typeclasses_6_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&check_hlds__check_typeclass_scalar_common_12[0])),
    ((MR_Box) (check_hlds__check_typeclass__report_unknown_instance_methods_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&check_hlds__check_typeclass_scalar_common_9[1])),
    ((MR_Box) (check_hlds__check_typeclass__check_for_missing_concrete_instances_in_class_and_vector_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
  {
    ((MR_Box) (&check_hlds__check_typeclass_scalar_common_9[1])),
    ((MR_Box) (check_hlds__check_typeclass__check_for_missing_concrete_instances_in_class_and_vector_5_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   9 */
  {
    ((MR_Box) (&check_hlds__check_typeclass_scalar_common_9[1])),
    ((MR_Box) (check_hlds__check_typeclass__check_for_missing_concrete_instances_in_class_and_vector_5_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  10 */
  {
    ((MR_Box) (&check_hlds__check_typeclass_scalar_common_9[1])),
    ((MR_Box) (check_hlds__check_typeclass__check_for_missing_concrete_instances_in_class_and_vector_5_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  11 */
  {
    ((MR_Box) (&check_hlds__check_typeclass_scalar_common_4[2])),
    ((MR_Box) (check_hlds__check_typeclass__check_fundeps_for_class_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  12 */
  {
    ((MR_Box) (&check_hlds__check_typeclass_scalar_common_4[2])),
    ((MR_Box) (check_hlds__check_typeclass__check_fundeps_for_class_4_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  13 */
  {
    ((MR_Box) (&check_hlds__check_typeclass_scalar_common_7[4])),
    ((MR_Box) (check_hlds__check_typeclass__fundeps_closure_loop_4_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  14 */
  {
    ((MR_Box) (&check_hlds__check_typeclass_scalar_common_12[1])),
    ((MR_Box) (check_hlds__check_typeclass__check_typeclass_constraints_on_pred_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  15 */
  {
    ((MR_Box) (&check_hlds__check_typeclass_scalar_common_12[1])),
    ((MR_Box) (check_hlds__check_typeclass__check_typeclass_constraints_on_data_ctor_6_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  16 */
  {
    ((MR_Box) (&check_hlds__check_typeclass_scalar_common_9[4])),
    ((MR_Box) (check_hlds__check_typeclass__report_cyclic_classes_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__check_typeclass_scalar_common_3[5][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_String) "{}")) },
  /* row   1 */
  { (MR_Box) ((MR_Unsigned) 0U) },
  /* row   2 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
  /* row   3 */
  { ((MR_Box) (MR_mkword(1, &check_hlds__check_typeclass_scalar_common_1[99]))) },
  /* row   4 */
  { ((MR_Box) (MR_mkword(1, &check_hlds__check_typeclass_scalar_common_1[67]))) },
};

static /* final */ const MR_Box check_hlds__check_typeclass_scalar_common_4[3][4] = {
  /* row   0 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   1 */
  {
    ((MR_Box) (&check_hlds__check_typeclass_scalar_common_6[0])),
    ((MR_Box) (check_hlds__check_typeclass__check_typeclasses_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (((MR_Box) ((MR_Unsigned) 0U))))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0))
  },
};

static /* final */ const MR_Box check_hlds__check_typeclass_scalar_common_5[8][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&check_hlds__check_typeclass__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__hlds_data__type_ctor_info_hlds_type_defn_0)),
    ((MR_Box) (&check_hlds__check_typeclass__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&check_hlds__check_typeclass__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&check_hlds__check_typeclass__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_hlds__hlds_class__type_ctor_info_hlds_class_defn_0)),
    ((MR_Box) (&check_hlds__check_typeclass__check_hlds__check_typeclass__type_ctor_info_class_path_0)),
    ((MR_Box) (&check_hlds__check_typeclass__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&check_hlds__check_typeclass__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0)),
    ((MR_Box) (&check_hlds__check_typeclass__list__pti_list_1__plain_hlds__hlds_class__type_ctor_info_hlds_instance_defn_0)),
    ((MR_Box) (&check_hlds__check_typeclass__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&check_hlds__check_typeclass__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0)),
    ((MR_Box) (&check_hlds__check_typeclass__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&check_hlds__check_typeclass__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0)),
    ((MR_Box) (&check_hlds__check_typeclass__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&check_hlds__check_typeclass__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_hlds__hlds_class__type_ctor_info_hlds_class_defn_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&check_hlds__check_typeclass__list__pti_list_1__plain_check_hlds__check_typeclass__type_ctor_info_induced_fundep_0)),
    ((MR_Box) (&check_hlds__check_typeclass__list__pti_list_1__plain_check_hlds__check_typeclass__type_ctor_info_induced_fundep_0))
  },
  /* row   6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&check_hlds__check_typeclass__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_fundep_0)),
    ((MR_Box) (&check_hlds__check_typeclass__list__pti_list_1__plain_check_hlds__check_typeclass__type_ctor_info_induced_fundep_0)),
    ((MR_Box) (&check_hlds__check_typeclass__list__pti_list_1__plain_check_hlds__check_typeclass__type_ctor_info_induced_fundep_0))
  },
  /* row   7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&check_hlds__check_typeclass__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&check_hlds__check_typeclass__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__check_typeclass__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
};

static /* final */ const MR_Box check_hlds__check_typeclass_scalar_common_6[3][11] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&check_hlds__check_typeclass__check_hlds__check_typeclass__type_ctor_info_class_path_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0)),
    ((MR_Box) (&check_hlds__check_typeclass__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_hlds__hlds_class__type_ctor_info_hlds_class_defn_0)),
    ((MR_Box) (&check_hlds__check_typeclass__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_hlds__hlds_class__type_ctor_info_hlds_class_defn_0)),
    ((MR_Box) (&check_hlds__check_typeclass__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_class_id_0)),
    ((MR_Box) (&check_hlds__check_typeclass__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_class_id_0)),
    ((MR_Box) (&check_hlds__check_typeclass__list__pti_list_1__plain_check_hlds__check_typeclass__type_ctor_info_class_path_0)),
    ((MR_Box) (&check_hlds__check_typeclass__list__pti_list_1__plain_check_hlds__check_typeclass__type_ctor_info_class_path_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&check_hlds__check_typeclass__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&check_hlds__check_typeclass__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_severity_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0)),
    ((MR_Box) (&check_hlds__check_typeclass__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&check_hlds__check_typeclass__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box check_hlds__check_typeclass_scalar_common_7[6][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0)),
    ((MR_Box) (&check_hlds__check_typeclass__list__pti_list_1__plain_hlds__hlds_class__type_ctor_info_hlds_instance_defn_0)),
    ((MR_Box) (&check_hlds__check_typeclass__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&check_hlds__check_typeclass__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&check_hlds__check_typeclass__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&check_hlds__check_typeclass__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0)),
    ((MR_Box) (&check_hlds__check_typeclass__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&check_hlds__check_typeclass__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0)),
    ((MR_Box) (&check_hlds__check_typeclass__pair__pti_pair_2__plain_list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0__plain_check_hlds__check_typeclass__type_ctor_info_type_vector_instances_0)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0)),
    ((MR_Box) (&check_hlds__check_typeclass__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&check_hlds__check_typeclass__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&check_hlds__check_typeclass__check_hlds__check_typeclass__type_ctor_info_induced_fundep_0)),
    ((MR_Box) (&check_hlds__check_typeclass__list__pti_list_1__plain_check_hlds__check_typeclass__type_ctor_info_induced_fundep_0)),
    ((MR_Box) (&check_hlds__check_typeclass__list__pti_list_1__plain_check_hlds__check_typeclass__type_ctor_info_induced_fundep_0)),
    ((MR_Box) (&check_hlds__check_typeclass__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__check_typeclass__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&check_hlds__check_typeclass__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_hlds__hlds_class__type_ctor_info_hlds_class_defn_0)),
    ((MR_Box) (&check_hlds__check_typeclass__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&check_hlds__check_typeclass__list__pti_list_1__plain_check_hlds__check_typeclass__type_ctor_info_induced_fundep_0)),
    ((MR_Box) (&check_hlds__check_typeclass__list__pti_list_1__plain_check_hlds__check_typeclass__type_ctor_info_induced_fundep_0))
  },
};

static /* final */ const MR_Box check_hlds__check_typeclass_scalar_common_8[2][13] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) (&check_hlds__check_typeclass__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_hlds__hlds_class__type_ctor_info_hlds_class_defn_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0)),
    ((MR_Box) (&check_hlds__check_typeclass__list__pti_list_1__plain_hlds__hlds_class__type_ctor_info_hlds_instance_defn_0)),
    ((MR_Box) (&check_hlds__check_typeclass__list__pti_list_1__plain_hlds__hlds_class__type_ctor_info_hlds_instance_defn_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0)),
    ((MR_Box) (&hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0)),
    ((MR_Box) (&check_hlds__check_typeclass__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&check_hlds__check_typeclass__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) (&check_hlds__check_typeclass__check_hlds__check_typeclass__type_ctor_info_class_path_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&check_hlds__check_typeclass__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_hlds__hlds_class__type_ctor_info_hlds_class_defn_0)),
    ((MR_Box) (&check_hlds__check_typeclass__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_hlds__hlds_class__type_ctor_info_hlds_class_defn_0)),
    ((MR_Box) (&check_hlds__check_typeclass__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_class_id_0)),
    ((MR_Box) (&check_hlds__check_typeclass__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_class_id_0)),
    ((MR_Box) (&check_hlds__check_typeclass__list__pti_list_1__plain_check_hlds__check_typeclass__type_ctor_info_class_path_0)),
    ((MR_Box) (&check_hlds__check_typeclass__list__pti_list_1__plain_check_hlds__check_typeclass__type_ctor_info_class_path_0)),
    ((MR_Box) (&check_hlds__check_typeclass__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&check_hlds__check_typeclass__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0))
  },
};

static /* final */ const MR_Box check_hlds__check_typeclass_scalar_common_9[5][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__check_typeclass__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__check_typeclass__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&check_hlds__check_typeclass__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_comparison_result_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__check_typeclass__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__check_typeclass__check_hlds__check_typeclass__type_ctor_info_induced_fundep_0)),
    ((MR_Box) (&check_hlds__check_typeclass__check_hlds__check_typeclass__type_ctor_info_induced_fundep_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__check_typeclass__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__check_typeclass__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0)),
    ((MR_Box) (&check_hlds__check_typeclass__cord__pti_cord_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0)),
    ((MR_Box) (&check_hlds__check_typeclass__cord__pti_cord_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0))
  },
};

static /* final */ const MR_Box check_hlds__check_typeclass_scalar_common_10[1][17] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 14)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0)),
    ((MR_Box) (&check_hlds__check_typeclass__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__check_typeclass__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__check_typeclass__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_interface_0)),
    ((MR_Box) (&check_hlds__check_typeclass__list__pti_list_1__plain_hlds__hlds_class__type_ctor_info_method_info_0)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0)),
    ((MR_Box) (&hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0)),
    ((MR_Box) (&check_hlds__check_typeclass__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&check_hlds__check_typeclass__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box check_hlds__check_typeclass_scalar_common_11[1][12] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&check_hlds__check_typeclass__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_method_info_0)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_method_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0))
  },
};

static /* final */ const MR_Box check_hlds__check_typeclass_scalar_common_12[5][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_instance_method_0)),
    ((MR_Box) (&check_hlds__check_typeclass__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__check_typeclass__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__check_typeclass__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__check_typeclass__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__check_typeclass__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
};

static /* final */ const MR_Box check_hlds__check_typeclass_scalar_common_13[2][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_fundep_0)),
    ((MR_Box) (&check_hlds__check_typeclass__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&check_hlds__check_typeclass__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0)),
    ((MR_Box) (&check_hlds__check_typeclass__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&check_hlds__check_typeclass__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box check_hlds__check_typeclass_scalar_common_14[2][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0)),
    ((MR_Box) (&check_hlds__check_typeclass__list__pti_list_1__plain_hlds__hlds_class__type_ctor_info_hlds_class_fundep_0)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0)),
    ((MR_Box) (&check_hlds__check_typeclass__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&check_hlds__check_typeclass__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_fundep_0)),
    ((MR_Box) (&check_hlds__check_typeclass__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&check_hlds__check_typeclass__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__check_typeclass__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__hlds_data__type_ctor_info_hlds_type_defn_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0),
    (MR_PseudoTypeInfo) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__check_typeclass__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__check_typeclass__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_hlds__hlds_class__type_ctor_info_hlds_class_defn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0),
    (MR_PseudoTypeInfo) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__check_typeclass__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_class_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__check_typeclass__list__pti_list_1__plain_check_hlds__check_typeclass__type_ctor_info_class_path_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&check_hlds__check_typeclass__check_hlds__check_typeclass__type_ctor_info_class_path_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__check_typeclass__list__pti_list_1__plain_hlds__hlds_class__type_ctor_info_hlds_instance_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__check_typeclass__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__check_typeclass__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__check_typeclass__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__check_typeclass__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0) }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__check_typeclass__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__check_typeclass__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&check_hlds__check_typeclass__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__check_typeclass__list__pti_list_1__plain_hlds__hlds_class__type_ctor_info_method_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_method_info_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__check_typeclass__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__check_typeclass__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__check_typeclass__pair__pti_pair_2__plain_list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0__plain_check_hlds__check_typeclass__type_ctor_info_type_vector_instances_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&check_hlds__check_typeclass__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0),
    (MR_PseudoTypeInfo) (&check_hlds__check_typeclass__check_hlds__check_typeclass__type_ctor_info_type_vector_instances_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__check_typeclass__list__pti_list_1__plain_hlds__hlds_class__type_ctor_info_hlds_class_fundep_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_fundep_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__check_typeclass__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_PseudoTypeInfo) (&check_hlds__check_typeclass__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__check_typeclass__list__pti_list_1__plain_check_hlds__check_typeclass__type_ctor_info_induced_fundep_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&check_hlds__check_typeclass__check_hlds__check_typeclass__type_ctor_info_induced_fundep_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__check_typeclass__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__check_typeclass__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__check_typeclass__cord__pti_cord_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0) }
};

static const MR_EnumFunctorDesc check_hlds__check_typeclass__check_hlds__check_typeclass__enum_functor_desc_bad_instance_type_kind_0_0 = {
  (MR_String) "badly_formed",
  INT32_C(0)
};

static const MR_EnumFunctorDesc check_hlds__check_typeclass__check_hlds__check_typeclass__enum_functor_desc_bad_instance_type_kind_0_1 = {
  (MR_String) "abstract_exported_eqv",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr check_hlds__check_typeclass__check_hlds__check_typeclass__enum_ordinal_ordered_bad_instance_type_kind_0[2] = {
  &check_hlds__check_typeclass__check_hlds__check_typeclass__enum_functor_desc_bad_instance_type_kind_0_0,
  &check_hlds__check_typeclass__check_hlds__check_typeclass__enum_functor_desc_bad_instance_type_kind_0_1
};

static const MR_EnumFunctorDescPtr check_hlds__check_typeclass__check_hlds__check_typeclass__enum_name_ordered_bad_instance_type_kind_0[2] = {
  &check_hlds__check_typeclass__check_hlds__check_typeclass__enum_functor_desc_bad_instance_type_kind_0_1,
  &check_hlds__check_typeclass__check_hlds__check_typeclass__enum_functor_desc_bad_instance_type_kind_0_0
};

static const MR_Integer check_hlds__check_typeclass__check_hlds__check_typeclass__functor_number_map_bad_instance_type_kind_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__check_typeclass__check_hlds__check_typeclass__type_ctor_info_bad_instance_type_kind_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__check_typeclass____Unify____bad_instance_type_kind_0_0_10001)),
  ((MR_Box) (check_hlds__check_typeclass____Compare____bad_instance_type_kind_0_0_10001)),
  (MR_String) "check_hlds.check_typeclass",
  (MR_String) "bad_instance_type_kind",
  { check_hlds__check_typeclass__check_hlds__check_typeclass__enum_name_ordered_bad_instance_type_kind_0 },
  { check_hlds__check_typeclass__check_hlds__check_typeclass__enum_ordinal_ordered_bad_instance_type_kind_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__check_typeclass__check_hlds__check_typeclass__functor_number_map_bad_instance_type_kind_0,

};

static const MR_Integer check_hlds__check_typeclass__check_hlds__check_typeclass__functor_number_map_class_path_0[1] = { (MR_Integer) 0 };

static const MR_FA_TypeInfo_Struct1 check_hlds__check_typeclass__list__ti_list_1parse_tree__prog_data__type_ctor_info_class_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0) }
};

static const MR_NotagFunctorDesc check_hlds__check_typeclass__check_hlds__check_typeclass__notag_functor_desc_class_path_0 = {
  (MR_String) "class_path",
  (MR_PseudoTypeInfo) (&check_hlds__check_typeclass__list__ti_list_1parse_tree__prog_data__type_ctor_info_class_id_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct check_hlds__check_typeclass__check_hlds__check_typeclass__type_ctor_info_class_path_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (check_hlds__check_typeclass____Unify____class_path_0_0_10001)),
  ((MR_Box) (check_hlds__check_typeclass____Compare____class_path_0_0_10001)),
  (MR_String) "check_hlds.check_typeclass",
  (MR_String) "class_path",
  { &check_hlds__check_typeclass__check_hlds__check_typeclass__notag_functor_desc_class_path_0 },
  { &check_hlds__check_typeclass__check_hlds__check_typeclass__notag_functor_desc_class_path_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  check_hlds__check_typeclass__check_hlds__check_typeclass__functor_number_map_class_path_0,

};

static const MR_FA_TypeInfo_Struct1 check_hlds__check_typeclass__set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_TypeInfo) (&check_hlds__check_typeclass__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_PseudoTypeInfo check_hlds__check_typeclass__check_hlds__check_typeclass__field_types_induced_fundep_0_0[2] = {
  (MR_PseudoTypeInfo) (&check_hlds__check_typeclass__set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
  (MR_PseudoTypeInfo) (&check_hlds__check_typeclass__set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)
};

static const MR_ConstString check_hlds__check_typeclass__check_hlds__check_typeclass__field_names_induced_fundep_0_0[2] = {
  (MR_String) "domain",
  (MR_String) "range"
};

static const MR_DuFunctorDesc check_hlds__check_typeclass__check_hlds__check_typeclass__du_functor_desc_induced_fundep_0_0 = {
  (MR_String) "induced_fundep",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__check_typeclass__check_hlds__check_typeclass__field_types_induced_fundep_0_0,
  check_hlds__check_typeclass__check_hlds__check_typeclass__field_names_induced_fundep_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__check_typeclass__check_hlds__check_typeclass__du_stag_ordered_induced_fundep_0_0[1] = { &check_hlds__check_typeclass__check_hlds__check_typeclass__du_functor_desc_induced_fundep_0_0 };

static const MR_DuPtagLayout check_hlds__check_typeclass__check_hlds__check_typeclass__du_ptag_ordered_induced_fundep_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__check_typeclass__check_hlds__check_typeclass__du_stag_ordered_induced_fundep_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__check_typeclass__check_hlds__check_typeclass__du_name_ordered_induced_fundep_0[1] = { &check_hlds__check_typeclass__check_hlds__check_typeclass__du_functor_desc_induced_fundep_0_0 };

static const MR_Integer check_hlds__check_typeclass__check_hlds__check_typeclass__functor_number_map_induced_fundep_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct check_hlds__check_typeclass__check_hlds__check_typeclass__type_ctor_info_induced_fundep_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__check_typeclass____Unify____induced_fundep_0_0_10001)),
  ((MR_Box) (check_hlds__check_typeclass____Compare____induced_fundep_0_0_10001)),
  (MR_String) "check_hlds.check_typeclass",
  (MR_String) "induced_fundep",
  { check_hlds__check_typeclass__check_hlds__check_typeclass__du_name_ordered_induced_fundep_0 },
  { check_hlds__check_typeclass__check_hlds__check_typeclass__du_ptag_ordered_induced_fundep_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  check_hlds__check_typeclass__check_hlds__check_typeclass__functor_number_map_induced_fundep_0,

};

static const MR_FA_TypeInfo_Struct1 check_hlds__check_typeclass__list__ti_list_1check_hlds__check_typeclass__type_ctor_info_induced_fundep_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&check_hlds__check_typeclass__check_hlds__check_typeclass__type_ctor_info_induced_fundep_0) }
};

const MR_TypeCtorInfo_Struct check_hlds__check_typeclass__check_hlds__check_typeclass__type_ctor_info_induced_fundeps_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__check_typeclass____Unify____induced_fundeps_0_0_10001)),
  ((MR_Box) (check_hlds__check_typeclass____Compare____induced_fundeps_0_0_10001)),
  (MR_String) "check_hlds.check_typeclass",
  (MR_String) "induced_fundeps",
  { NULL },
  { (MR_PseudoTypeInfo) (&check_hlds__check_typeclass__list__ti_list_1check_hlds__check_typeclass__type_ctor_info_induced_fundep_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_EnumFunctorDesc check_hlds__check_typeclass__check_hlds__check_typeclass__enum_functor_desc_module_quals_0_0 = {
  (MR_String) "keep_all",
  INT32_C(0)
};

static const MR_EnumFunctorDesc check_hlds__check_typeclass__check_hlds__check_typeclass__enum_functor_desc_module_quals_0_1 = {
  (MR_String) "delete_builtin",
  INT32_C(1)
};

static const MR_EnumFunctorDesc check_hlds__check_typeclass__check_hlds__check_typeclass__enum_functor_desc_module_quals_0_2 = {
  (MR_String) "delete_all",
  INT32_C(2)
};

static const MR_EnumFunctorDescPtr check_hlds__check_typeclass__check_hlds__check_typeclass__enum_ordinal_ordered_module_quals_0[3] = {
  &check_hlds__check_typeclass__check_hlds__check_typeclass__enum_functor_desc_module_quals_0_0,
  &check_hlds__check_typeclass__check_hlds__check_typeclass__enum_functor_desc_module_quals_0_1,
  &check_hlds__check_typeclass__check_hlds__check_typeclass__enum_functor_desc_module_quals_0_2
};

static const MR_EnumFunctorDescPtr check_hlds__check_typeclass__check_hlds__check_typeclass__enum_name_ordered_module_quals_0[3] = {
  &check_hlds__check_typeclass__check_hlds__check_typeclass__enum_functor_desc_module_quals_0_2,
  &check_hlds__check_typeclass__check_hlds__check_typeclass__enum_functor_desc_module_quals_0_1,
  &check_hlds__check_typeclass__check_hlds__check_typeclass__enum_functor_desc_module_quals_0_0
};

static const MR_Integer check_hlds__check_typeclass__check_hlds__check_typeclass__functor_number_map_module_quals_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__check_typeclass__check_hlds__check_typeclass__type_ctor_info_module_quals_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__check_typeclass____Unify____module_quals_0_0_10001)),
  ((MR_Box) (check_hlds__check_typeclass____Compare____module_quals_0_0_10001)),
  (MR_String) "check_hlds.check_typeclass",
  (MR_String) "module_quals",
  { check_hlds__check_typeclass__check_hlds__check_typeclass__enum_name_ordered_module_quals_0 },
  { check_hlds__check_typeclass__check_hlds__check_typeclass__enum_ordinal_ordered_module_quals_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  check_hlds__check_typeclass__check_hlds__check_typeclass__functor_number_map_module_quals_0,

};

static const MR_EnumFunctorDesc check_hlds__check_typeclass__check_hlds__check_typeclass__enum_functor_desc_quant_error_type_0_0 = {
  (MR_String) "universal_constraint",
  INT32_C(0)
};

static const MR_EnumFunctorDesc check_hlds__check_typeclass__check_hlds__check_typeclass__enum_functor_desc_quant_error_type_0_1 = {
  (MR_String) "existential_constraint",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr check_hlds__check_typeclass__check_hlds__check_typeclass__enum_ordinal_ordered_quant_error_type_0[2] = {
  &check_hlds__check_typeclass__check_hlds__check_typeclass__enum_functor_desc_quant_error_type_0_0,
  &check_hlds__check_typeclass__check_hlds__check_typeclass__enum_functor_desc_quant_error_type_0_1
};

static const MR_EnumFunctorDescPtr check_hlds__check_typeclass__check_hlds__check_typeclass__enum_name_ordered_quant_error_type_0[2] = {
  &check_hlds__check_typeclass__check_hlds__check_typeclass__enum_functor_desc_quant_error_type_0_1,
  &check_hlds__check_typeclass__check_hlds__check_typeclass__enum_functor_desc_quant_error_type_0_0
};

static const MR_Integer check_hlds__check_typeclass__check_hlds__check_typeclass__functor_number_map_quant_error_type_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__check_typeclass__check_hlds__check_typeclass__type_ctor_info_quant_error_type_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__check_typeclass____Unify____quant_error_type_0_0_10001)),
  ((MR_Box) (check_hlds__check_typeclass____Compare____quant_error_type_0_0_10001)),
  (MR_String) "check_hlds.check_typeclass",
  (MR_String) "quant_error_type",
  { check_hlds__check_typeclass__check_hlds__check_typeclass__enum_name_ordered_quant_error_type_0 },
  { check_hlds__check_typeclass__check_hlds__check_typeclass__enum_ordinal_ordered_quant_error_type_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__check_typeclass__check_hlds__check_typeclass__functor_number_map_quant_error_type_0,

};

static const MR_EnumFunctorDesc check_hlds__check_typeclass__check_hlds__check_typeclass__enum_functor_desc_type_limit_0_0 = {
  (MR_String) "print_all_types",
  INT32_C(0)
};

static const MR_EnumFunctorDesc check_hlds__check_typeclass__check_hlds__check_typeclass__enum_functor_desc_type_limit_0_1 = {
  (MR_String) "print_few_types",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr check_hlds__check_typeclass__check_hlds__check_typeclass__enum_ordinal_ordered_type_limit_0[2] = {
  &check_hlds__check_typeclass__check_hlds__check_typeclass__enum_functor_desc_type_limit_0_0,
  &check_hlds__check_typeclass__check_hlds__check_typeclass__enum_functor_desc_type_limit_0_1
};

static const MR_EnumFunctorDescPtr check_hlds__check_typeclass__check_hlds__check_typeclass__enum_name_ordered_type_limit_0[2] = {
  &check_hlds__check_typeclass__check_hlds__check_typeclass__enum_functor_desc_type_limit_0_0,
  &check_hlds__check_typeclass__check_hlds__check_typeclass__enum_functor_desc_type_limit_0_1
};

static const MR_Integer check_hlds__check_typeclass__check_hlds__check_typeclass__functor_number_map_type_limit_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct check_hlds__check_typeclass__check_hlds__check_typeclass__type_ctor_info_type_limit_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__check_typeclass____Unify____type_limit_0_0_10001)),
  ((MR_Box) (check_hlds__check_typeclass____Compare____type_limit_0_0_10001)),
  (MR_String) "check_hlds.check_typeclass",
  (MR_String) "type_limit",
  { check_hlds__check_typeclass__check_hlds__check_typeclass__enum_name_ordered_type_limit_0 },
  { check_hlds__check_typeclass__check_hlds__check_typeclass__enum_ordinal_ordered_type_limit_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__check_typeclass__check_hlds__check_typeclass__functor_number_map_type_limit_0,

};

const MR_TypeCtorInfo_Struct check_hlds__check_typeclass__check_hlds__check_typeclass__type_ctor_info_type_vector_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__check_typeclass____Unify____type_vector_0_0_10001)),
  ((MR_Box) (check_hlds__check_typeclass____Compare____type_vector_0_0_10001)),
  (MR_String) "check_hlds.check_typeclass",
  (MR_String) "type_vector",
  { NULL },
  { (MR_PseudoTypeInfo) (&check_hlds__check_typeclass__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct1 check_hlds__check_typeclass__list__ti_list_1hlds__hlds_class__type_ctor_info_hlds_instance_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0) }
};

static const MR_PseudoTypeInfo check_hlds__check_typeclass__check_hlds__check_typeclass__field_types_type_vector_instances_0_0[4] = {
  (MR_PseudoTypeInfo) (&check_hlds__check_typeclass__list__ti_list_1hlds__hlds_class__type_ctor_info_hlds_instance_defn_0),
  (MR_PseudoTypeInfo) (&check_hlds__check_typeclass__list__ti_list_1hlds__hlds_class__type_ctor_info_hlds_instance_defn_0),
  (MR_PseudoTypeInfo) (&check_hlds__check_typeclass__list__ti_list_1hlds__hlds_class__type_ctor_info_hlds_instance_defn_0),
  (MR_PseudoTypeInfo) (&check_hlds__check_typeclass__list__ti_list_1hlds__hlds_class__type_ctor_info_hlds_instance_defn_0)
};

static const MR_ConstString check_hlds__check_typeclass__check_hlds__check_typeclass__field_names_type_vector_instances_0_0[4] = {
  (MR_String) "local_abstracts",
  (MR_String) "local_concretes",
  (MR_String) "nonlocal_abstracts",
  (MR_String) "nonlocal_concretes"
};

static const MR_DuFunctorDesc check_hlds__check_typeclass__check_hlds__check_typeclass__du_functor_desc_type_vector_instances_0_0 = {
  (MR_String) "type_vector_instances",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__check_typeclass__check_hlds__check_typeclass__field_types_type_vector_instances_0_0,
  check_hlds__check_typeclass__check_hlds__check_typeclass__field_names_type_vector_instances_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__check_typeclass__check_hlds__check_typeclass__du_stag_ordered_type_vector_instances_0_0[1] = { &check_hlds__check_typeclass__check_hlds__check_typeclass__du_functor_desc_type_vector_instances_0_0 };

static const MR_DuPtagLayout check_hlds__check_typeclass__check_hlds__check_typeclass__du_ptag_ordered_type_vector_instances_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__check_typeclass__check_hlds__check_typeclass__du_stag_ordered_type_vector_instances_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__check_typeclass__check_hlds__check_typeclass__du_name_ordered_type_vector_instances_0[1] = { &check_hlds__check_typeclass__check_hlds__check_typeclass__du_functor_desc_type_vector_instances_0_0 };

static const MR_Integer check_hlds__check_typeclass__check_hlds__check_typeclass__functor_number_map_type_vector_instances_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct check_hlds__check_typeclass__check_hlds__check_typeclass__type_ctor_info_type_vector_instances_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__check_typeclass____Unify____type_vector_instances_0_0_10001)),
  ((MR_Box) (check_hlds__check_typeclass____Compare____type_vector_instances_0_0_10001)),
  (MR_String) "check_hlds.check_typeclass",
  (MR_String) "type_vector_instances",
  { check_hlds__check_typeclass__check_hlds__check_typeclass__du_name_ordered_type_vector_instances_0 },
  { check_hlds__check_typeclass__check_hlds__check_typeclass__du_ptag_ordered_type_vector_instances_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  check_hlds__check_typeclass__check_hlds__check_typeclass__functor_number_map_type_vector_instances_0,

};

static const MR_FA_TypeInfo_Struct2 check_hlds__check_typeclass__tree234__ti_tree234_2list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0check_hlds__check_typeclass__type_ctor_info_type_vector_instances_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&check_hlds__check_typeclass__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0),
    (MR_TypeInfo) (&check_hlds__check_typeclass__check_hlds__check_typeclass__type_ctor_info_type_vector_instances_0)
  }
};

const MR_TypeCtorInfo_Struct check_hlds__check_typeclass__check_hlds__check_typeclass__type_ctor_info_type_vector_instances_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__check_typeclass____Unify____type_vector_instances_map_0_0_10001)),
  ((MR_Box) (check_hlds__check_typeclass____Compare____type_vector_instances_map_0_0_10001)),
  (MR_String) "check_hlds.check_typeclass",
  (MR_String) "type_vector_instances_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&check_hlds__check_typeclass__tree234__ti_tree234_2list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0check_hlds__check_typeclass__type_ctor_info_type_vector_instances_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_EnumFunctorDesc check_hlds__check_typeclass__check_hlds__check_typeclass__enum_functor_desc_which_types_0_0 = {
  (MR_String) "orig_types",
  INT32_C(0)
};

static const MR_EnumFunctorDesc check_hlds__check_typeclass__check_hlds__check_typeclass__enum_functor_desc_which_types_0_1 = {
  (MR_String) "cur_types",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr check_hlds__check_typeclass__check_hlds__check_typeclass__enum_ordinal_ordered_which_types_0[2] = {
  &check_hlds__check_typeclass__check_hlds__check_typeclass__enum_functor_desc_which_types_0_0,
  &check_hlds__check_typeclass__check_hlds__check_typeclass__enum_functor_desc_which_types_0_1
};

static const MR_EnumFunctorDescPtr check_hlds__check_typeclass__check_hlds__check_typeclass__enum_name_ordered_which_types_0[2] = {
  &check_hlds__check_typeclass__check_hlds__check_typeclass__enum_functor_desc_which_types_0_1,
  &check_hlds__check_typeclass__check_hlds__check_typeclass__enum_functor_desc_which_types_0_0
};

static const MR_Integer check_hlds__check_typeclass__check_hlds__check_typeclass__functor_number_map_which_types_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__check_typeclass__check_hlds__check_typeclass__type_ctor_info_which_types_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__check_typeclass____Unify____which_types_0_0_10001)),
  ((MR_Box) (check_hlds__check_typeclass____Compare____which_types_0_0_10001)),
  (MR_String) "check_hlds.check_typeclass",
  (MR_String) "which_types",
  { check_hlds__check_typeclass__check_hlds__check_typeclass__enum_name_ordered_which_types_0 },
  { check_hlds__check_typeclass__check_hlds__check_typeclass__enum_ordinal_ordered_which_types_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__check_typeclass__check_hlds__check_typeclass__functor_number_map_which_types_0,

};

static MR_Word MR_CALL 
check_hlds__check_typeclass__IntroducedFrom__func__error_classes_do_not_exist_pieces__2649__1_1_f_0(
  MR_Word LambdaHeadVar__1_14)
{
  MR_Word LambdaHeadVar__2_15;

  {
    LambdaHeadVar__2_15 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, LambdaHeadVar__2_15, 0) = ((MR_Box) ((MR_Unsigned) 23U));
    MR_hl_field(3, LambdaHeadVar__2_15, 1) = ((MR_Box) (LambdaHeadVar__1_14));
  }
  return LambdaHeadVar__2_15;
}

static MR_String MR_CALL 
check_hlds__check_typeclass__IntroducedFrom__func__report_unbound_tvars_in_ctor_context__2578__1_2_f_0(
  MR_Word TVarSet_11,
  MR_Word HeadVar__2_73)
{
  MR_String HeadVar__3_74;

  HeadVar__3_74 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_vs_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TVarSet_11, HeadVar__2_73);
  return HeadVar__3_74;
}

static MR_String MR_CALL 
check_hlds__check_typeclass__IntroducedFrom__func__report_badly_quantified_vars__2548__1_2_f_0(
  MR_Word TVarSet_10,
  MR_Word HeadVar__2_76)
{
  MR_String HeadVar__3_77;

  HeadVar__3_77 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_vs_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TVarSet_10, HeadVar__2_76);
  return HeadVar__3_77;
}

static MR_String MR_CALL 
check_hlds__check_typeclass__IntroducedFrom__func__report_unbound_tvars_in_pred_context__2479__1_2_f_0(
  MR_Word TVarSet_9,
  MR_Word HeadVar__2_91)
{
  MR_String HeadVar__3_92;

  HeadVar__3_92 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_vs_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TVarSet_9, HeadVar__2_91);
  return HeadVar__3_92;
}

static MR_String MR_CALL 
check_hlds__check_typeclass__IntroducedFrom__func__report_coverage_error__2401__1_2_f_0(
  MR_Word TVarSet_10,
  MR_Word HeadVar__2_83)
{
  MR_String HeadVar__3_84;

  HeadVar__3_84 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_vs_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TVarSet_10, HeadVar__2_83);
  return HeadVar__3_84;
}

static MR_bool MR_CALL 
check_hlds__check_typeclass__IntroducedFrom__pred__check_typeclass_constraints_on_data_ctor__1844__1_2_p_0(
  MR_Word ExistQArgTVars_31,
  MR_Word ExistQArgTVarsB_32)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[8]), ((MR_Box) (ExistQArgTVars_31)), ((MR_Box) (ExistQArgTVarsB_32)));
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__check_typeclass__IntroducedFrom__pred__check_typeclass_constraints_on_data_ctor__1843__1_2_p_0(
  MR_Word ExistQVars_19,
  MR_Word HeadVar__2_53)
{
  MR_bool succeeded;

  succeeded = mercury__list__contains_2_p_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[0]), ExistQVars_19, ((MR_Box) (HeadVar__2_53)));
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__check_typeclass__IntroducedFrom__pred__check_typeclass_constraints_on_data_ctor__1840__1_2_p_0(
  MR_Word ExistQVars_19,
  MR_Word LambdaHeadVar__1_43)
{
  MR_bool succeeded;

  succeeded = mercury__list__member_2_p_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[0]), ((MR_Box) (LambdaHeadVar__1_43)), ExistQVars_19);
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__check_typeclass__IntroducedFrom__pred__generate_instance_method_pred_and_procs__966__1_9_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__check_typeclass__IntroducedFrom__pred__generate_instance_method_pred_and_procs__972__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static void MR_CALL 
check_hlds__check_typeclass__IntroducedFrom__pred__generate_instance_method_pred_and_procs__966__1_9_p_0(
  MR_Word ClassPredId_16,
  MR_Word Context_56,
  MR_Word InstancePredId_103,
  MR_Word ClassProcTable_105,
  MR_Word STATE_VARIABLE_ModuleInfo_147_147,
  MR_Word LambdaHeadVar__1_148,
  MR_Word * LambdaHeadVar__2_149,
  MR_Word LambdaHeadVar__3_150,
  MR_Word * LambdaHeadVar__4_151)
{
  MR_bool succeeded;
  MR_Word MethodNum_111 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_148, (MR_Integer) 0))));
  MR_Word MethodName_112 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_148, (MR_Integer) 1))));
  MR_Word ClassOrigPredProcId_113 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_148, (MR_Integer) 2))));
  MR_Word ClassOrigPredId_115 = ((MR_Word) ((MR_hl_field(0, ClassOrigPredProcId_113, (MR_Integer) 0))));
  MR_Integer ClassOrigProcId_116 = ((MR_Integer) ((MR_hl_field(0, ClassOrigPredProcId_113, (MR_Integer) 1))));
  MR_Word ClassProcInfo_117;
  MR_Word InstVarSet_118;
  MR_Word Modes_119;
  MR_Word MaybeDetism_120;
  MR_Integer InstanceProcId_123;
  MR_Word InstanceOrigPredProcId_124;
  MR_Word Var_152;
  MR_Word Var_155;
  MR_Box conv0_ClassProcInfo_117;

  {
    Var_152 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_152, 0) = ((MR_Box) (&check_hlds__check_typeclass_scalar_common_12[4]));
    MR_hl_field(0, Var_152, 1) = ((MR_Box) (check_hlds__check_typeclass__IntroducedFrom__pred__generate_instance_method_pred_and_procs__966__1_9_p_0_1));
    MR_hl_field(0, Var_152, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_152, 3) = ((MR_Box) (ClassPredId_16));
    MR_hl_field(0, Var_152, 4) = ((MR_Box) (ClassOrigPredId_115));
  }
  mercury__require__expect_3_p_0(Var_152, (MR_String) "predicate \140check_hlds.check_typeclass.generate_instance_method_pred_and_procs\'/13", (MR_String) "ClassOrigPredId != ClassPredId");
  mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ClassProcTable_105, ((MR_Box) (ClassOrigProcId_116)), &conv0_ClassProcInfo_117);
  ClassProcInfo_117 = ((MR_Word) (conv0_ClassProcInfo_117));
  hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(ClassProcInfo_117, &InstVarSet_118);
  hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ClassProcInfo_117, &Modes_119);
  hlds__hlds_pred__proc_info_get_declared_determinism_2_p_0(ClassProcInfo_117, &MaybeDetism_120);
  {
    Var_155 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_155, 0) = ((MR_Box) (Modes_119));
  }
  hlds__add_pred__add_new_proc_14_p_0(STATE_VARIABLE_ModuleInfo_147_147, Context_56, (MR_Word) ((MR_Unsigned) 0U), InstVarSet_118, Modes_119, Var_155, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 1, MaybeDetism_120, (MR_Integer) 0, (MR_Integer) 1, LambdaHeadVar__3_150, LambdaHeadVar__4_151, &InstanceProcId_123);
  {
    InstanceOrigPredProcId_124 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, InstanceOrigPredProcId_124, 0) = ((MR_Box) (InstancePredId_103));
    MR_hl_field(0, InstanceOrigPredProcId_124, 1) = ((MR_Box) (InstanceProcId_123));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    *LambdaHeadVar__2_149 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (MethodNum_111));
    MR_hl_field(0, base, 1) = ((MR_Box) (MethodName_112));
    MR_hl_field(0, base, 2) = ((MR_Box) (InstanceOrigPredProcId_124));
    MR_hl_field(0, base, 3) = ((MR_Box) (InstanceOrigPredProcId_124));
  }
}

static MR_bool MR_CALL 
check_hlds__check_typeclass__IntroducedFrom__pred__generate_instance_method_pred_and_procs__972__1_2_p_0(
  MR_Word ClassPredId_16,
  MR_Word ClassOrigPredId_115)
{
  MR_bool succeeded;

  succeeded = hlds__hlds_pred____Unify____pred_id_0_0(ClassOrigPredId_115, ClassPredId_16);
  return succeeded;
}

static void MR_CALL 
check_hlds__check_typeclass____Compare____which_types_0_0(
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

static MR_bool MR_CALL 
check_hlds__check_typeclass____Unify____which_types_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
check_hlds__check_typeclass____Compare____type_vector_instances_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_2[4]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
check_hlds__check_typeclass____Unify____type_vector_instances_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_2[4]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
check_hlds__check_typeclass____Compare____type_vector_instances_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_15 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_16 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_15 == CastY_16);
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
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[5]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[5]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[5]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
          mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[5]), HeadVar__1_1, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
      }
    }
  }
}

static MR_bool MR_CALL 
check_hlds__check_typeclass____Unify____type_vector_instances_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
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
    MR_Word TypeInfo_16_16;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[5]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
    {
      TypeInfo_14_14 = (MR_Word) (&check_hlds__check_typeclass_scalar_common_1[5]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_14_14, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
      {
        TypeInfo_15_15 = (MR_Word) (&check_hlds__check_typeclass_scalar_common_1[5]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_15_15, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        if (succeeded)
        {
          TypeInfo_16_16 = (MR_Word) (&check_hlds__check_typeclass_scalar_common_1[5]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_16_16, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
        }
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
check_hlds__check_typeclass____Compare____type_vector_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[7]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
check_hlds__check_typeclass____Unify____type_vector_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[7]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
check_hlds__check_typeclass____Compare____type_limit_0_0(
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

static MR_bool MR_CALL 
check_hlds__check_typeclass____Unify____type_limit_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
check_hlds__check_typeclass____Compare____quant_error_type_0_0(
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

static MR_bool MR_CALL 
check_hlds__check_typeclass____Unify____quant_error_type_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
check_hlds__check_typeclass____Compare____module_quals_0_0(
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

static MR_bool MR_CALL 
check_hlds__check_typeclass____Unify____module_quals_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
check_hlds__check_typeclass____Compare____induced_fundeps_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[9]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
check_hlds__check_typeclass____Unify____induced_fundeps_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[9]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
check_hlds__check_typeclass____Compare____induced_fundep_0_0(
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[10]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[10]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
  }
}

static MR_bool MR_CALL 
check_hlds__check_typeclass____Unify____induced_fundep_0_0(
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
  {
    MR_Word TypeInfo_10_10;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[10]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
    {
      TypeInfo_10_10 = (MR_Word) (&check_hlds__check_typeclass_scalar_common_1[10]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_10_10, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
    }
  }
  return succeeded;
}

static void MR_CALL 
check_hlds__check_typeclass____Compare____class_path_0_0(
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

    mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[13]), HeadVar__1_1, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
  }
}

static MR_bool MR_CALL 
check_hlds__check_typeclass____Unify____class_path_0_0(
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

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[13]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
  }
  return succeeded;
}

static void MR_CALL 
check_hlds__check_typeclass____Compare____bad_instance_type_kind_0_0(
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

static MR_bool MR_CALL 
check_hlds__check_typeclass____Unify____bad_instance_type_kind_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static MR_Word MR_CALL 
check_hlds__check_typeclass__method_name_pieces_1_f_0(
  MR_Word Method_3)
{
  MR_Word Pieces_4;
  MR_Word PFSymNameArity_5 = ((MR_Word) ((MR_hl_field(0, Method_3, (MR_Integer) 0))));
  MR_Word Var_8;

  {
    Var_8 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_8, 0) = ((MR_Box) ((MR_Unsigned) 16U));
    MR_hl_field(3, Var_8, 1) = ((MR_Box) (PFSymNameArity_5));
  }
  {
    Pieces_4 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Pieces_4, 0) = ((MR_Box) (Var_8));
    MR_hl_field(1, Pieces_4, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  return Pieces_4;
}

static void MR_CALL 
check_hlds__check_typeclass__report_duplicate_instance_defn_8_p_0(
  MR_Word ClassId_9,
  MR_Word Severity_10,
  MR_String SeverityWord_11,
  MR_String Category_12,
  MR_Word FirstContext_13,
  MR_Word LaterInstanceDefn_14,
  MR_Word STATE_VARIABLE_Specs_0_22,
  MR_Word * STATE_VARIABLE_Specs_23)
{
  MR_Word LaterContext_16 = ((MR_Word) ((MR_hl_field(0, LaterInstanceDefn_14, (MR_Integer) 10))));
  MR_Word LaterPieces_17;
  MR_Word LaterMsg_18;
  MR_Word FirstMsg_20;
  MR_Word Spec_21;
  MR_Word Var_24;
  MR_Word Var_25;
  MR_Word Var_28;
  MR_Word Var_31;
  MR_Word Var_32;
  MR_Word Var_33;
  MR_Word Var_36;
  MR_Word Var_39;
  MR_Word Var_40;
  MR_Word Var_52;
  MR_Word Var_60;
  MR_Word Var_61;

  {
    Var_24 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_24, 0) = ((MR_Box) ((MR_Unsigned) 6U));
    MR_hl_field(3, Var_24, 1) = ((MR_Box) (SeverityWord_11));
  }
  {
    Var_32 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_32, 0) = ((MR_Box) ((MR_Unsigned) 6U));
    MR_hl_field(3, Var_32, 1) = ((MR_Box) (Category_12));
  }
  {
    Var_40 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_40, 0) = ((MR_Box) ((MR_Unsigned) 23U));
    MR_hl_field(3, Var_40, 1) = ((MR_Box) (ClassId_9));
  }
  {
    Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_39, 0) = ((MR_Box) (Var_40));
    MR_hl_field(1, Var_39, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__check_typeclass_scalar_common_1[28])));
  }
  {
    Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_36, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__check_typeclass_scalar_common_1[56])));
    MR_hl_field(1, Var_36, 1) = ((MR_Box) (Var_39));
  }
  {
    Var_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_33, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__check_typeclass_scalar_common_1[65])));
    MR_hl_field(1, Var_33, 1) = ((MR_Box) (Var_36));
  }
  {
    Var_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_31, 0) = ((MR_Box) (Var_32));
    MR_hl_field(1, Var_31, 1) = ((MR_Box) (Var_33));
  }
  {
    Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_28, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__check_typeclass_scalar_common_1[64])));
    MR_hl_field(1, Var_28, 1) = ((MR_Box) (Var_31));
  }
  {
    Var_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_25, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__check_typeclass_scalar_common_1[63])));
    MR_hl_field(1, Var_25, 1) = ((MR_Box) (Var_28));
  }
  {
    LaterPieces_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, LaterPieces_17, 0) = ((MR_Box) (Var_24));
    MR_hl_field(1, LaterPieces_17, 1) = ((MR_Box) (Var_25));
  }
  {
    LaterMsg_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, LaterMsg_18, 0) = ((MR_Box) (LaterContext_16));
    MR_hl_field(0, LaterMsg_18, 1) = ((MR_Box) (LaterPieces_17));
  }
  {
    Var_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_52, 0) = ((MR_Box) (FirstContext_13));
  }
  {
    FirstMsg_20 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, FirstMsg_20, 0) = ((MR_Box) (Var_52));
    MR_hl_field(3, FirstMsg_20, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(3, FirstMsg_20, 2) = ((MR_Box) ((MR_Integer) 0));
    MR_hl_field(3, FirstMsg_20, 3) = ((MR_Box) (MR_mkword(1, &check_hlds__check_typeclass_scalar_common_1[183])));
  }
  {
    Var_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_61, 0) = ((MR_Box) (FirstMsg_20));
    MR_hl_field(1, Var_61, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_60, 0) = ((MR_Box) (LaterMsg_18));
    MR_hl_field(1, Var_60, 1) = ((MR_Box) (Var_61));
  }
  {
    Spec_21 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Spec_21, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.check_typeclass.report_duplicate_instance_defn\'/8"));
    MR_hl_field(2, Spec_21, 1) = ((MR_Box) (Severity_10));
    MR_hl_field(2, Spec_21, 2) = ((MR_Box) ((MR_Unsigned) 52U));
    MR_hl_field(2, Spec_21, 3) = ((MR_Box) (Var_60));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *STATE_VARIABLE_Specs_23 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (Spec_21));
    MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_22));
  }
}

static MR_Word MR_CALL 
check_hlds__check_typeclass__non_tvar_arg_to_pieces_2_f_0(
  MR_Word TVarSet_4,
  MR_Word HeadVar__2_2)
{
  MR_Word Pieces_7;
  MR_Integer ArgNum_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
  MR_Word ArgType_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
  MR_String TypeStr_8;
  MR_Word Var_12;
  MR_Word Var_13;
  MR_Word Var_14;
  MR_Word Var_17;
  MR_Word Var_18;

  TypeStr_8 = parse_tree__parse_tree_out_type__mercury_type_to_string_3_f_0(TVarSet_4, (MR_Integer) 0, ArgType_6);
  {
    Var_13 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_13, 0) = ((MR_Box) ((MR_Unsigned) 3U));
    MR_hl_field(3, Var_13, 1) = ((MR_Box) (ArgNum_5));
  }
  {
    Var_18 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_18, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_18, 1) = ((MR_Box) (TypeStr_8));
  }
  {
    Var_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_17, 0) = ((MR_Box) (Var_18));
    MR_hl_field(1, Var_17, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_14, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__check_typeclass_scalar_common_1[35])));
    MR_hl_field(1, Var_14, 1) = ((MR_Box) (Var_17));
  }
  {
    Var_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_12, 0) = ((MR_Box) (Var_13));
    MR_hl_field(1, Var_12, 1) = ((MR_Box) (Var_14));
  }
  {
    Pieces_7 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Pieces_7, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__check_typeclass_scalar_common_1[15])));
    MR_hl_field(1, Pieces_7, 1) = ((MR_Box) (Var_12));
  }
  return Pieces_7;
}

static void MR_CALL 
check_hlds__check_typeclass__add_path_element_3_p_0(
  MR_Word ClassId_4,
  MR_Word STATE_VARIABLE_LaterLines_0_7,
  MR_Word * STATE_VARIABLE_LaterLines_8)
{
  MR_Word Line_6;
  MR_Word Var_11;
  MR_Word Var_12;
  MR_Word Var_17;

  {
    Var_12 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_12, 0) = ((MR_Box) ((MR_Unsigned) 23U));
    MR_hl_field(3, Var_12, 1) = ((MR_Box) (ClassId_4));
  }
  {
    Var_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_11, 0) = ((MR_Box) (Var_12));
    MR_hl_field(1, Var_11, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__check_typeclass_scalar_common_1[17])));
  }
  {
    Line_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Line_6, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__check_typeclass_scalar_common_1[31])));
    MR_hl_field(1, Line_6, 1) = ((MR_Box) (Var_11));
  }
  Var_17 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Line_6);
  *STATE_VARIABLE_LaterLines_8 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), STATE_VARIABLE_LaterLines_0_7, Var_17);
}

static void MR_CALL 
check_hlds__check_typeclass__report_cyclic_classes_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_LaterLines_8;

  check_hlds__check_typeclass__add_path_element_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_LaterLines_8);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_LaterLines_8));
}

static void MR_CALL 
check_hlds__check_typeclass__report_cyclic_classes_4_p_0(
  MR_Word ClassTable_5,
  MR_Word ClassPath_6,
  MR_Word STATE_VARIABLE_Specs_0_16,
  MR_Word * STATE_VARIABLE_Specs_17)
{
  MR_Word ClassPathClassIds_8 = (MR_Word) (ClassPath_6);

  if ((ClassPathClassIds_8 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.check_typeclass.report_cyclic_classes\'/4", (MR_String) "empty cycle found.");
      return;
    }
  else
  {
    MR_Word HeadClassId_9 = ((MR_Word) ((MR_hl_field(1, ClassPathClassIds_8, (MR_Integer) 0))));
    MR_Word TailClassIds_10 = ((MR_Word) ((MR_hl_field(1, ClassPathClassIds_8, (MR_Integer) 1))));
    MR_Word Context_11;
    MR_Word StartPieces_12;
    MR_Word LaterLinesCord_13;
    MR_Word Pieces_14;
    MR_Word Spec_15;
    MR_Word Var_20;
    MR_Word Var_23;
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Box conv0_Var_20;
    MR_Box conv2_LaterLinesCord_13;

    conv0_Var_20 = mercury__map__lookup_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0), ClassTable_5, ((MR_Box) (HeadClassId_9)));
    Var_20 = ((MR_Word) (conv0_Var_20));
    Context_11 = ((MR_Word) ((MR_hl_field(0, Var_20, (MR_Integer) 9))));
    {
      Var_26 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_26, 0) = ((MR_Box) ((MR_Unsigned) 23U));
      MR_hl_field(3, Var_26, 1) = ((MR_Box) (HeadClassId_9));
    }
    {
      Var_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_25, 0) = ((MR_Box) (Var_26));
      MR_hl_field(1, Var_25, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__check_typeclass_scalar_common_1[17])));
    }
    {
      Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_23, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(1, Var_23, 1) = ((MR_Box) (Var_25));
    }
    {
      StartPieces_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, StartPieces_12, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__check_typeclass_scalar_common_1[30])));
      MR_hl_field(1, StartPieces_12, 1) = ((MR_Box) (Var_23));
    }
    Var_31 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0));
    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&check_hlds__check_typeclass_scalar_common_1[11]), (MR_Word) (&check_hlds__check_typeclass_scalar_common_2[16]), TailClassIds_10, ((MR_Box) (Var_31)), &conv2_LaterLinesCord_13);
    LaterLinesCord_13 = ((MR_Word) (conv2_LaterLinesCord_13));
    Var_32 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), LaterLinesCord_13);
    Pieces_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), StartPieces_12, Var_32);
    {
      Spec_15 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_15, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.check_typeclass.report_cyclic_classes\'/4"));
      MR_hl_field(0, Spec_15, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_15, 2) = ((MR_Box) ((MR_Unsigned) 52U));
      MR_hl_field(0, Spec_15, 3) = ((MR_Box) (Context_11));
      MR_hl_field(0, Spec_15, 4) = ((MR_Box) (Pieces_14));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_17 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Spec_15));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_16));
    }
  }
}

static void MR_CALL 
check_hlds__check_typeclass__collect_determined_vars_5_p_0(
  MR_Word FunDep_6,
  MR_Word STATE_VARIABLE_FunDeps_0_11,
  MR_Word * STATE_VARIABLE_FunDeps_12,
  MR_Word STATE_VARIABLE_Vars_0_13,
  MR_Word * STATE_VARIABLE_Vars_14)
{
  MR_bool succeeded;
  MR_Word Domain_9 = ((MR_Word) ((MR_hl_field(0, FunDep_6, (MR_Integer) 0))));
  MR_Word Range_10 = ((MR_Word) ((MR_hl_field(0, FunDep_6, (MR_Integer) 1))));

  succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[0]), Domain_9);
  if (succeeded)
  {
    mercury__set__union_3_p_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[0]), Range_10, STATE_VARIABLE_Vars_0_13, STATE_VARIABLE_Vars_14);
    *STATE_VARIABLE_FunDeps_12 = STATE_VARIABLE_FunDeps_0_11;
  }
  else
  {
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_FunDeps_12 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (FunDep_6));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_FunDeps_0_11));
    }
    *STATE_VARIABLE_Vars_14 = STATE_VARIABLE_Vars_0_13;
  }
}

static void MR_CALL 
check_hlds__check_typeclass__remove_vars_3_p_0(
  MR_Word Vars_4,
  MR_Word InducedFunDep0_5,
  MR_Word * InducedFunDep_6)
{
  MR_Word Domain0_7 = ((MR_Word) ((MR_hl_field(0, InducedFunDep0_5, (MR_Integer) 0))));
  MR_Word Range0_8 = ((MR_Word) ((MR_hl_field(0, InducedFunDep0_5, (MR_Integer) 1))));
  MR_Word Domain_9;
  MR_Word Range_10;

  mercury__set__difference_3_p_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[0]), Domain0_7, Vars_4, &Domain_9);
  mercury__set__difference_3_p_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[0]), Range0_8, Vars_4, &Range_10);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *InducedFunDep_6 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Domain_9));
    MR_hl_field(0, base, 1) = ((MR_Box) (Range_10));
  }
}

static void MR_CALL 
check_hlds__check_typeclass__induced_vars_4_p_0(
  MR_Word ArgTypes_5,
  MR_Integer ArgNum_6,
  MR_Word STATE_VARIABLE_TVars_0_11,
  MR_Word * STATE_VARIABLE_TVars_12)
{
  MR_Word ArgType_8;
  MR_Word ArgTVars_9;
  MR_Word NewTVars_10;
  MR_Box conv0_ArgType_8;

  conv0_ArgType_8 = mercury__list__det_index1_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypes_5, ArgNum_6);
  ArgType_8 = ((MR_Word) (conv0_ArgType_8));
  parse_tree__prog_type_scan__type_vars_in_type_2_p_0(ArgType_8, &ArgTVars_9);
  mercury__set__list_to_set_2_p_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[0]), ArgTVars_9, &NewTVars_10);
  mercury__set__union_3_p_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[0]), NewTVars_10, STATE_VARIABLE_TVars_0_11, STATE_VARIABLE_TVars_12);
}

static void MR_CALL 
check_hlds__check_typeclass__add_induced_fundep_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_TVars_12;

  check_hlds__check_typeclass__induced_vars_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_TVars_12);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_TVars_12));
}

static void MR_CALL 
check_hlds__check_typeclass__add_induced_fundep_4_p_0(
  MR_Word Args_5,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_FunDeps_0_11,
  MR_Word * STATE_VARIABLE_FunDeps_12)
{
  MR_Word Domain0_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
  MR_Word Range0_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
  MR_Word Domain_9;
  MR_Word Range_10;
  MR_Word Var_13;
  MR_Word Var_14;
  MR_Word Var_16;
  MR_Word Var_18;
  MR_Box conv1_Domain_9;
  MR_Box conv2_Range_10;

  {
    Var_13 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_13, 0) = ((MR_Box) (&check_hlds__check_typeclass_scalar_common_5[7]));
    MR_hl_field(0, Var_13, 1) = ((MR_Box) (check_hlds__check_typeclass__add_induced_fundep_4_p_0_1));
    MR_hl_field(0, Var_13, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_13, 3) = ((MR_Box) (Args_5));
  }
  Var_14 = mercury__set__init_0_f_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[0]));
  mercury__set__fold_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&check_hlds__check_typeclass_scalar_common_1[10]), Var_13, Domain0_6, ((MR_Box) (Var_14)), &conv1_Domain_9);
  Domain_9 = ((MR_Word) (conv1_Domain_9));
  Var_16 = mercury__set__init_0_f_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[0]));
  mercury__set__fold_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&check_hlds__check_typeclass_scalar_common_1[10]), Var_13, Range0_7, ((MR_Box) (Var_16)), &conv2_Range_10);
  Range_10 = ((MR_Word) (conv2_Range_10));
  {
    Var_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_18, 0) = ((MR_Box) (Domain_9));
    MR_hl_field(0, Var_18, 1) = ((MR_Box) (Range_10));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *STATE_VARIABLE_FunDeps_12 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (Var_18));
    MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_FunDeps_0_11));
  }
}

static void MR_CALL 
check_hlds__check_typeclass__induced_fundeps_3_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_FunDeps_12;

  check_hlds__check_typeclass__add_induced_fundep_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_FunDeps_12);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_FunDeps_12));
}

static void MR_CALL 
check_hlds__check_typeclass__induced_fundeps_3_4_p_0(
  MR_Word ClassTable_5,
  MR_Word Constraint_6,
  MR_Word STATE_VARIABLE_FunDeps_0_13,
  MR_Word * STATE_VARIABLE_FunDeps_14)
{
  MR_Word ClassName_8 = ((MR_Word) ((MR_hl_field(0, Constraint_6, (MR_Integer) 0))));
  MR_Word ClassArgs_9 = ((MR_Word) ((MR_hl_field(0, Constraint_6, (MR_Integer) 1))));
  MR_Integer ClassArity_10;
  MR_Word ClassDefn_11;
  MR_Word ClassFunDeps_12;
  MR_Word Var_15;
  MR_Word Var_16;
  MR_Box conv0_ClassDefn_11;
  MR_Box conv2_STATE_VARIABLE_FunDeps_14;

  mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ClassArgs_9, &ClassArity_10);
  {
    Var_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_15, 0) = ((MR_Box) (ClassName_8));
    MR_hl_field(0, Var_15, 1) = ((MR_Box) (ClassArity_10));
  }
  mercury__map__lookup_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0), ClassTable_5, ((MR_Box) (Var_15)), &conv0_ClassDefn_11);
  ClassDefn_11 = ((MR_Word) (conv0_ClassDefn_11));
  ClassFunDeps_12 = ((MR_Word) ((MR_hl_field(0, ClassDefn_11, (MR_Integer) 5))));
  {
    Var_16 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_16, 0) = ((MR_Box) (&check_hlds__check_typeclass_scalar_common_5[6]));
    MR_hl_field(0, Var_16, 1) = ((MR_Box) (check_hlds__check_typeclass__induced_fundeps_3_4_p_0_1));
    MR_hl_field(0, Var_16, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_16, 3) = ((MR_Box) (ClassArgs_9));
  }
  mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_fundep_0), (MR_Word) (&check_hlds__check_typeclass_scalar_common_1[9]), Var_16, ClassFunDeps_12, ((MR_Box) (STATE_VARIABLE_FunDeps_0_13)), &conv2_STATE_VARIABLE_FunDeps_14);
  *STATE_VARIABLE_FunDeps_14 = ((MR_Word) (conv2_STATE_VARIABLE_FunDeps_14));
}

static void MR_CALL 
check_hlds__check_typeclass__acc_induced_fundeps_for_constraint_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_FunDeps_14;

  check_hlds__check_typeclass__induced_fundeps_3_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_FunDeps_14);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_FunDeps_14));
}

static void MR_CALL 
check_hlds__check_typeclass__acc_induced_fundeps_for_constraint_5_p_0(
  MR_Word ClassTable_6,
  MR_Word TVarSet_7,
  MR_Word Constraint_8,
  MR_Word STATE_VARIABLE_FunDeps_0_25,
  MR_Word * STATE_VARIABLE_FunDeps_26)
{
  MR_Word Name_10 = ((MR_Word) ((MR_hl_field(0, Constraint_8, (MR_Integer) 0))));
  MR_Word Args_11 = ((MR_Word) ((MR_hl_field(0, Constraint_8, (MR_Integer) 1))));
  MR_Integer Arity_12;
  MR_Word ClassDefn_13;
  MR_Word ClassAncestors_14;
  MR_Word Var_27;
  MR_Word Var_30;
  MR_Word Var_32;
  MR_Box conv0_ClassDefn_13;

  Arity_12 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Args_11);
  {
    Var_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_27, 0) = ((MR_Box) (Name_10));
    MR_hl_field(0, Var_27, 1) = ((MR_Box) (Arity_12));
  }
  conv0_ClassDefn_13 = mercury__map__lookup_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0), ClassTable_6, ((MR_Box) (Var_27)));
  ClassDefn_13 = ((MR_Word) (conv0_ClassDefn_13));
  Var_30 = ((MR_Word) ((MR_hl_field(0, ClassDefn_13, (MR_Integer) 1))));
  Var_32 = ((MR_Word) ((MR_hl_field(0, ClassDefn_13, (MR_Integer) 3))));
  ClassAncestors_14 = ((MR_Word) ((MR_hl_field(0, ClassDefn_13, (MR_Integer) 6))));
  if ((ClassAncestors_14 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_FunDeps_26 = STATE_VARIABLE_FunDeps_0_25;
  else
  {
    MR_Word Renaming_20;
    MR_Word RenamedAncestors_21;
    MR_Word RenamedParams_22;
    MR_Word Subst_23;
    MR_Word Ancestors_24;
    MR_Word Var_28;
    MR_Word Var_19;
    MR_Box conv2_STATE_VARIABLE_FunDeps_26;

    parse_tree__prog_data__tvarset_merge_renaming_4_p_0(TVarSet_7, Var_30, &Var_19, &Renaming_20);
    parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_list_3_p_0(Renaming_20, ClassAncestors_14, &RenamedAncestors_21);
    parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_list_3_p_0(Renaming_20, Var_32, &RenamedParams_22);
    mercury__map__from_corresponding_lists_3_p_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), RenamedParams_22, Args_11, &Subst_23);
    parse_tree__prog_type_subst__apply_subst_to_prog_constraint_list_3_p_0(Subst_23, RenamedAncestors_21, &Ancestors_24);
    {
      Var_28 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_28, 0) = ((MR_Box) (&check_hlds__check_typeclass_scalar_common_5[5]));
      MR_hl_field(0, Var_28, 1) = ((MR_Box) (check_hlds__check_typeclass__acc_induced_fundeps_for_constraint_5_p_0_1));
      MR_hl_field(0, Var_28, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_28, 3) = ((MR_Box) (ClassTable_6));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&check_hlds__check_typeclass_scalar_common_1[9]), Var_28, Ancestors_24, ((MR_Box) (STATE_VARIABLE_FunDeps_0_25)), &conv2_STATE_VARIABLE_FunDeps_26);
    *STATE_VARIABLE_FunDeps_26 = ((MR_Word) (conv2_STATE_VARIABLE_FunDeps_26));
  }
}

static MR_Box MR_CALL 
check_hlds__check_typeclass__check_typeclass_constraints_on_data_ctor_6_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv2_LambdaHeadVar__2_15;

  conv2_LambdaHeadVar__2_15 = check_hlds__check_typeclass__IntroducedFrom__func__error_classes_do_not_exist_pieces__2649__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv2_LambdaHeadVar__2_15));
  return wrapper_arg_2;
}

static void MR_CALL 
check_hlds__check_typeclass__check_typeclass_constraints_on_data_ctor_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_FunDeps_26;

  check_hlds__check_typeclass__acc_induced_fundeps_for_constraint_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_FunDeps_26);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_FunDeps_26));
}

static MR_bool MR_CALL 
check_hlds__check_typeclass__check_typeclass_constraints_on_data_ctor_6_p_0_3(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__check_typeclass__IntroducedFrom__pred__check_typeclass_constraints_on_data_ctor__1844__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__check_typeclass__check_typeclass_constraints_on_data_ctor_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__check_typeclass__IntroducedFrom__pred__check_typeclass_constraints_on_data_ctor__1843__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__check_typeclass__check_typeclass_constraints_on_data_ctor_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__check_typeclass__IntroducedFrom__pred__check_typeclass_constraints_on_data_ctor__1840__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
check_hlds__check_typeclass__check_typeclass_constraints_on_data_ctor_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word TypeCtor_8,
  MR_Word TypeDefn_9,
  MR_Word Ctor_10,
  MR_Word STATE_VARIABLE_Specs_0_38,
  MR_Word * STATE_VARIABLE_Specs_39)
{
  MR_bool succeeded;
  MR_Word MaybeExistConstraints_13 = ((MR_Word) ((MR_hl_field(0, Ctor_10, (MR_Integer) 1))));
  MR_Word CtorArgs_15 = ((MR_Word) ((MR_hl_field(0, Ctor_10, (MR_Integer) 3))));

  if ((MaybeExistConstraints_13 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_Specs_39 = STATE_VARIABLE_Specs_0_38;
  else
  {
    MR_Word ExistConstraints_18 = (MR_Word) (MR_body((MR_Word) (MaybeExistConstraints_13), (MR_Integer) 1));
    MR_Word ExistQVars_19 = ((MR_Word) ((MR_hl_field(0, ExistConstraints_18, (MR_Integer) 0))));
    MR_Word Constraints_20 = ((MR_Word) ((MR_hl_field(0, ExistConstraints_18, (MR_Integer) 1))));
    MR_Word ClassTable_23;
    MR_Word BadClassSNAsSet_24;
    MR_Word BadClassSNAs_25;
    MR_Word Var_40;

    hlds__hlds_module__module_info_get_class_table_2_p_0(ModuleInfo_7, &ClassTable_23);
    Var_40 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0));
    check_hlds__check_typeclass__find_bad_class_ids_in_constraints_4_p_0(ClassTable_23, Constraints_20, Var_40, &BadClassSNAsSet_24);
    mercury__set__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), BadClassSNAsSet_24, &BadClassSNAs_25);
    if ((BadClassSNAs_25 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word ArgTypes_28;
      MR_Word ArgTVars_29;
      MR_Word ExistQArgTVars_31;
      MR_Word ExistQArgTVarsB_32;
      MR_Word ConstrainedTVars_33;
      MR_Word TVarSet_34;
      MR_Word UnboundTVars_35;
      MR_Word Var_42;
      MR_Word Var_44;
      MR_Word Var_45;
      MR_Word ClassTable_53;
      MR_Word InducedFunDeps_54;
      MR_Word FunDepsClosure_55;
      MR_Word UnboundTVarsSet_56;
      MR_Word Var_57;
      MR_Word Var_58;
      MR_Word Var_60;
      MR_Word Var_64;
      MR_Box conv1_InducedFunDeps_54;

      parse_tree__prog_data__get_ctor_arg_types_2_p_0(CtorArgs_15, &ArgTypes_28);
      parse_tree__prog_type_scan__type_vars_in_types_2_p_0(ArgTypes_28, &ArgTVars_29);
      {
        Var_42 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_42, 0) = ((MR_Box) (&check_hlds__check_typeclass_scalar_common_12[2]));
        MR_hl_field(0, Var_42, 1) = ((MR_Box) (check_hlds__check_typeclass__check_typeclass_constraints_on_data_ctor_6_p_0_1));
        MR_hl_field(0, Var_42, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_42, 3) = ((MR_Box) (ExistQVars_19));
      }
      mercury__list__filter_3_p_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[0]), Var_42, ArgTVars_29, &ExistQArgTVars_31);
      {
        Var_44 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_44, 0) = ((MR_Box) (&check_hlds__check_typeclass_scalar_common_12[2]));
        MR_hl_field(0, Var_44, 1) = ((MR_Box) (check_hlds__check_typeclass__check_typeclass_constraints_on_data_ctor_6_p_0_2));
        MR_hl_field(0, Var_44, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_44, 3) = ((MR_Box) (ExistQVars_19));
      }
      mercury__list__filter_3_p_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[0]), Var_44, ArgTVars_29, &ExistQArgTVarsB_32);
      {
        Var_45 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_45, 0) = ((MR_Box) (&check_hlds__check_typeclass_scalar_common_12[3]));
        MR_hl_field(0, Var_45, 1) = ((MR_Box) (check_hlds__check_typeclass__check_typeclass_constraints_on_data_ctor_6_p_0_3));
        MR_hl_field(0, Var_45, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(0, Var_45, 3) = ((MR_Box) (ExistQArgTVars_31));
        MR_hl_field(0, Var_45, 4) = ((MR_Box) (ExistQArgTVarsB_32));
      }
      mercury__require__expect_3_p_0(Var_45, (MR_String) "predicate \140check_hlds.check_typeclass.check_typeclass_constraints_on_data_ctor\'/6", (MR_String) "ExistQArgTVars != ExistQArgTVarsB");
      parse_tree__prog_type_scan__constraint_list_get_tvars_2_p_0(Constraints_20, &ConstrainedTVars_33);
      hlds__hlds_data__get_type_defn_tvarset_2_p_0(TypeDefn_9, &TVarSet_34);
      hlds__hlds_module__module_info_get_class_table_2_p_0(ModuleInfo_7, &ClassTable_53);
      {
        Var_60 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_60, 0) = ((MR_Box) (&check_hlds__check_typeclass_scalar_common_7[5]));
        MR_hl_field(0, Var_60, 1) = ((MR_Box) (check_hlds__check_typeclass__check_typeclass_constraints_on_data_ctor_6_p_0_4));
        MR_hl_field(0, Var_60, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(0, Var_60, 3) = ((MR_Box) (ClassTable_53));
        MR_hl_field(0, Var_60, 4) = ((MR_Box) (TVarSet_34));
      }
      mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&check_hlds__check_typeclass_scalar_common_1[9]), Var_60, Constraints_20, ((MR_Box) ((MR_Unsigned) 0U)), &conv1_InducedFunDeps_54);
      InducedFunDeps_54 = ((MR_Word) (conv1_InducedFunDeps_54));
      Var_57 = mercury__set__list_to_set_1_f_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[0]), ExistQArgTVars_31);
      Var_64 = mercury__set__init_0_f_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[0]));
      check_hlds__check_typeclass__fundeps_closure_loop_4_p_0(InducedFunDeps_54, Var_57, Var_64, &FunDepsClosure_55);
      Var_58 = mercury__set__list_to_set_1_f_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[0]), ConstrainedTVars_33);
      UnboundTVarsSet_56 = mercury__set__difference_2_f_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[0]), Var_58, FunDepsClosure_55);
      UnboundTVars_35 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[0]), UnboundTVarsSet_56);
      if ((UnboundTVars_35 == (MR_Word) ((MR_Unsigned) 0U)))
        *STATE_VARIABLE_Specs_39 = STATE_VARIABLE_Specs_0_38;
      else
        check_hlds__check_typeclass__report_unbound_tvars_in_ctor_context_5_p_0(UnboundTVars_35, TypeCtor_8, TypeDefn_9, STATE_VARIABLE_Specs_0_38, STATE_VARIABLE_Specs_39);
    }
    else
    {
      MR_Word HeadBadClassSNA_26 = ((MR_Word) ((MR_hl_field(1, BadClassSNAs_25, (MR_Integer) 0))));
      MR_Word TailBadClassSNAs_27 = ((MR_Word) ((MR_hl_field(1, BadClassSNAs_25, (MR_Integer) 1))));
      MR_Word Context_66;
      MR_Word StartPieces_67;
      MR_Word Pieces_68;
      MR_Word Spec_69;
      MR_Word Var_72;
      MR_Word Var_73;
      MR_Word Var_75;
      MR_Word QualHeadClassId_81;

      hlds__hlds_data__get_type_defn_context_2_p_0(TypeDefn_9, &Context_66);
      {
        Var_73 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_73, 0) = ((MR_Box) ((MR_Unsigned) 17U));
        MR_hl_field(3, Var_73, 1) = ((MR_Box) (TypeCtor_8));
      }
      {
        Var_72 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_72, 0) = ((MR_Box) (Var_73));
        MR_hl_field(1, Var_72, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__check_typeclass_scalar_common_1[109])));
      }
      {
        StartPieces_67 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, StartPieces_67, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__check_typeclass_scalar_common_1[119])));
        MR_hl_field(1, StartPieces_67, 1) = ((MR_Box) (Var_72));
      }
      {
        QualHeadClassId_81 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, QualHeadClassId_81, 0) = ((MR_Box) ((MR_Unsigned) 23U));
        MR_hl_field(3, QualHeadClassId_81, 1) = ((MR_Box) (HeadBadClassSNA_26));
      }
      if ((TailBadClassSNAs_27 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_85;

        {
          Var_85 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_85, 0) = ((MR_Box) (QualHeadClassId_81));
          MR_hl_field(1, Var_85, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__check_typeclass_scalar_common_1[169])));
        }
        {
          Var_75 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_75, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__check_typeclass_scalar_common_1[167])));
          MR_hl_field(1, Var_75, 1) = ((MR_Box) (Var_85));
        }
      }
      else
      {
        MR_Word QualTailClassIds_82;
        MR_Word QualClassIds_83;
        MR_Word Var_88;
        MR_Word Var_89;

        QualTailClassIds_82 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (&check_hlds__check_typeclass_scalar_common_2[15]), TailBadClassSNAs_27);
        {
          QualClassIds_83 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, QualClassIds_83, 0) = ((MR_Box) (QualHeadClassId_81));
          MR_hl_field(1, QualClassIds_83, 1) = ((MR_Box) (QualTailClassIds_82));
        }
        Var_89 = parse_tree__error_spec__component_list_to_pieces_2_f_0((MR_String) "and", QualClassIds_83);
        Var_88 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_89, (MR_Word) (MR_mkword(1, &check_hlds__check_typeclass_scalar_common_1[173])));
        Var_75 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__check_typeclass_scalar_common_1[171])), Var_88);
      }
      Pieces_68 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), StartPieces_67, Var_75);
      {
        Spec_69 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Spec_69, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.check_typeclass.report_bad_class_ids_in_data_ctor\'/6"));
        MR_hl_field(0, Spec_69, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, Spec_69, 2) = ((MR_Box) ((MR_Unsigned) 52U));
        MR_hl_field(0, Spec_69, 3) = ((MR_Box) (Context_66));
        MR_hl_field(0, Spec_69, 4) = ((MR_Box) (Pieces_68));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_39 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Spec_69));
        MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_38));
      }
    }
  }
}

static MR_Box MR_CALL 
check_hlds__check_typeclass__report_unbound_tvars_in_ctor_context_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_HeadVar__3_74;

  conv0_HeadVar__3_74 = check_hlds__check_typeclass__IntroducedFrom__func__report_unbound_tvars_in_ctor_context__2578__1_2_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_74));
  return wrapper_arg_2;
}

static void MR_CALL 
check_hlds__check_typeclass__report_unbound_tvars_in_ctor_context_5_p_0(
  MR_Word Vars_6,
  MR_Word TypeCtor_7,
  MR_Word TypeDefn_8,
  MR_Word STATE_VARIABLE_Specs_0_16,
  MR_Word * STATE_VARIABLE_Specs_17)
{
  MR_Word Context_10;
  MR_Word TVarSet_11;
  MR_Word VarsStrs_12;
  MR_Word Pieces_13;
  MR_Word Msg_14;
  MR_Word Spec_15;
  MR_Word Var_18;
  MR_Word Var_19;
  MR_Word Var_22;
  MR_Word Var_23;
  MR_Word Var_24;
  MR_Word Var_27;
  MR_Word Var_29;
  MR_Word Var_32;
  MR_Word Var_33;
  MR_String Var_34;
  MR_Word Var_38;
  MR_Word Var_39;
  MR_Word Var_40;
  MR_Word Var_41;
  MR_String Var_42;
  MR_Word Var_45;
  MR_Word Var_48;
  MR_Word Var_49;
  MR_String Var_50;
  MR_Word Var_59;
  MR_Word Var_60;
  MR_Word Var_69;
  MR_Box conv1_Var_34;
  MR_Box conv2_Var_42;
  MR_Box conv3_Var_50;

  hlds__hlds_data__get_type_defn_context_2_p_0(TypeDefn_8, &Context_10);
  hlds__hlds_data__get_type_defn_tvarset_2_p_0(TypeDefn_8, &TVarSet_11);
  {
    Var_18 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_18, 0) = ((MR_Box) (&check_hlds__check_typeclass_scalar_common_9[3]));
    MR_hl_field(0, Var_18, 1) = ((MR_Box) (check_hlds__check_typeclass__report_unbound_tvars_in_ctor_context_5_p_0_1));
    MR_hl_field(0, Var_18, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_18, 3) = ((MR_Box) (TVarSet_11));
  }
  VarsStrs_12 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_18, Vars_6);
  {
    Var_23 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_23, 0) = ((MR_Box) ((MR_Unsigned) 18U));
    MR_hl_field(3, Var_23, 1) = ((MR_Box) (TypeCtor_7));
  }
  conv1_Var_34 = parse_tree__error_spec__choose_number_3_f_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Vars_6, ((MR_Box) ((MR_String) "type variable")), ((MR_Box) ((MR_String) "type variables")));
  Var_34 = ((MR_String) (conv1_Var_34));
  {
    Var_33 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_33, 0) = ((MR_Box) ((MR_Unsigned) 6U));
    MR_hl_field(3, Var_33, 1) = ((MR_Box) (Var_34));
  }
  {
    Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_32, 0) = ((MR_Box) (Var_33));
    MR_hl_field(1, Var_32, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_29, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__check_typeclass_scalar_common_1[101])));
    MR_hl_field(1, Var_29, 1) = ((MR_Box) (Var_32));
  }
  {
    Var_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_27, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(1, Var_27, 1) = ((MR_Box) (Var_29));
  }
  {
    Var_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_24, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__check_typeclass_scalar_common_1[63])));
    MR_hl_field(1, Var_24, 1) = ((MR_Box) (Var_27));
  }
  {
    Var_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_22, 0) = ((MR_Box) (Var_23));
    MR_hl_field(1, Var_22, 1) = ((MR_Box) (Var_24));
  }
  {
    Var_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_19, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__check_typeclass_scalar_common_1[119])));
    MR_hl_field(1, Var_19, 1) = ((MR_Box) (Var_22));
  }
  Var_39 = parse_tree__error_spec__list_to_quoted_pieces_1_f_0(VarsStrs_12);
  conv2_Var_42 = parse_tree__error_spec__choose_number_3_f_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Vars_6, ((MR_Box) ((MR_String) "occurs")), ((MR_Box) ((MR_String) "occur")));
  Var_42 = ((MR_String) (conv2_Var_42));
  {
    Var_41 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_41, 0) = ((MR_Box) ((MR_Unsigned) 6U));
    MR_hl_field(3, Var_41, 1) = ((MR_Box) (Var_42));
  }
  conv3_Var_50 = parse_tree__error_spec__choose_number_3_f_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Vars_6, ((MR_Box) ((MR_String) "is")), ((MR_Box) ((MR_String) "are")));
  Var_50 = ((MR_String) (conv3_Var_50));
  {
    Var_49 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_49, 0) = ((MR_Box) ((MR_Unsigned) 6U));
    MR_hl_field(3, Var_49, 1) = ((MR_Box) (Var_50));
  }
  {
    Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_48, 0) = ((MR_Box) (Var_49));
    MR_hl_field(1, Var_48, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__check_typeclass_scalar_common_1[121])));
  }
  {
    Var_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_45, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__check_typeclass_scalar_common_1[102])));
    MR_hl_field(1, Var_45, 1) = ((MR_Box) (Var_48));
  }
  {
    Var_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_40, 0) = ((MR_Box) (Var_41));
    MR_hl_field(1, Var_40, 1) = ((MR_Box) (Var_45));
  }
  Var_38 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_39, Var_40);
  Pieces_13 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_19, Var_38);
  {
    Var_60 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_60, 0) = ((MR_Box) (Pieces_13));
  }
  {
    Var_59 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_59, 0) = ((MR_Box) (Var_60));
    MR_hl_field(1, Var_59, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__check_typeclass_scalar_common_1[181])));
  }
  {
    Msg_14 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Msg_14, 0) = ((MR_Box) (Context_10));
    MR_hl_field(2, Msg_14, 1) = ((MR_Box) (Var_59));
  }
  {
    Var_69 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_69, 0) = ((MR_Box) (Msg_14));
    MR_hl_field(1, Var_69, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Spec_15 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Spec_15, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.check_typeclass.report_unbound_tvars_in_ctor_context\'/5"));
    MR_hl_field(2, Spec_15, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(2, Spec_15, 2) = ((MR_Box) ((MR_Unsigned) 52U));
    MR_hl_field(2, Spec_15, 3) = ((MR_Box) (Var_69));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *STATE_VARIABLE_Specs_17 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (Spec_15));
    MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_16));
  }
}

static void MR_CALL 
check_hlds__check_typeclass__check_typeclass_constraints_on_type_data_ctors_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Specs_39;

  check_hlds__check_typeclass__check_typeclass_constraints_on_data_ctor_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Specs_39);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_39));
}

static void MR_CALL 
check_hlds__check_typeclass__check_typeclass_constraints_on_type_data_ctors_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_Specs_0_19,
  MR_Word * STATE_VARIABLE_Specs_20)
{
  MR_Word TypeCtor_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
  MR_Word TypeDefn_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
  MR_Word Body_9;

  hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_7, &Body_9);
  switch (MR_tag((MR_Word) Body_9)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Ctors_10;
        MR_Word Var_21 = (MR_Word) ((MR_Word) (Body_9));
        MR_Word Var_22;
        MR_Word Var_23;
        MR_Box conv1_STATE_VARIABLE_Specs_20;

        Ctors_10 = ((MR_Word) ((MR_hl_field(0, Var_21, (MR_Integer) 0))));
        {
          Var_22 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_22, 0) = ((MR_Box) (&check_hlds__check_typeclass_scalar_common_13[1]));
          MR_hl_field(0, Var_22, 1) = ((MR_Box) (check_hlds__check_typeclass__check_typeclass_constraints_on_type_data_ctors_4_p_0_1));
          MR_hl_field(0, Var_22, 2) = ((MR_Box) ((MR_Integer) 3));
          MR_hl_field(0, Var_22, 3) = ((MR_Box) (ModuleInfo_5));
          MR_hl_field(0, Var_22, 4) = ((MR_Box) (TypeCtor_6));
          MR_hl_field(0, Var_22, 5) = ((MR_Box) (TypeDefn_7));
        }
        Var_23 = mercury__one_or_more__one_or_more_to_list_1_f_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), Ctors_10);
        mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), (MR_Word) (&check_hlds__check_typeclass_scalar_common_1[3]), Var_22, Var_23, ((MR_Box) (STATE_VARIABLE_Specs_0_19)), &conv1_STATE_VARIABLE_Specs_20);
        *STATE_VARIABLE_Specs_20 = ((MR_Word) (conv1_STATE_VARIABLE_Specs_20));
      }
      break;
    case (MR_Integer) 1:
      *STATE_VARIABLE_Specs_20 = STATE_VARIABLE_Specs_0_19;
      break;
    case (MR_Integer) 2:
      *STATE_VARIABLE_Specs_20 = STATE_VARIABLE_Specs_0_19;
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Body_9, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *STATE_VARIABLE_Specs_20 = STATE_VARIABLE_Specs_0_19;
          break;
        case (MR_Integer) 1:
          *STATE_VARIABLE_Specs_20 = STATE_VARIABLE_Specs_0_19;
          break;
      }
      break;
  }
}

static MR_Box MR_CALL 
check_hlds__check_typeclass__check_typeclass_constraints_on_pred_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_15;

  conv0_LambdaHeadVar__2_15 = check_hlds__check_typeclass__IntroducedFrom__func__error_classes_do_not_exist_pieces__2649__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_15));
  return wrapper_arg_2;
}

static void MR_CALL 
check_hlds__check_typeclass__check_typeclass_constraints_on_pred_5_p_0(
  MR_Word ProgressStream_6,
  MR_Word ModuleInfo_7,
  MR_Word PredId_8,
  MR_Word STATE_VARIABLE_Specs_0_27,
  MR_Word * STATE_VARIABLE_Specs_28)
{
  MR_bool succeeded;
  MR_Word PredInfo_10;
  MR_Word Constraints_11;
  MR_Word UnivConstraints_12;
  MR_Word ExistConstraints_13;

  hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_7, PredId_8, &PredInfo_10);
  hlds__hlds_pred__pred_info_get_class_context_2_p_0(PredInfo_10, &Constraints_11);
  UnivConstraints_12 = ((MR_Word) ((MR_hl_field(0, Constraints_11, (MR_Integer) 0))));
  ExistConstraints_13 = ((MR_Word) ((MR_hl_field(0, Constraints_11, (MR_Integer) 1))));
  succeeded = (UnivConstraints_12 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
  }
  if (!(succeeded))
  {
    succeeded = (ExistConstraints_13 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
    }
  }
  if (succeeded)
  {
    MR_Word AllConstraints_18;
    MR_Word ClassTable_20;
    MR_Word BadClassSNAsSet_21;
    MR_Word BadClassSNAs_22;
    MR_Word Var_32;

    AllConstraints_18 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), UnivConstraints_12, ExistConstraints_13);
    hlds__passes_aux__maybe_write_pred_progress_message_6_p_0(ProgressStream_6, ModuleInfo_7, (MR_String) "Checking typeclass constraints on", PredId_8);
    hlds__hlds_module__module_info_get_class_table_2_p_0(ModuleInfo_7, &ClassTable_20);
    Var_32 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0));
    check_hlds__check_typeclass__find_bad_class_ids_in_constraints_4_p_0(ClassTable_20, AllConstraints_18, Var_32, &BadClassSNAsSet_21);
    mercury__set__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), BadClassSNAsSet_21, &BadClassSNAs_22);
    if ((BadClassSNAs_22 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Status_25;
      MR_Word Var_50;

      hlds__hlds_pred__pred_info_get_status_2_p_0(PredInfo_10, &Status_25);
      Var_50 = (MR_Word) (Status_25);
      switch (MR_tag((MR_Word) Var_50)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(Var_50)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *STATE_VARIABLE_Specs_28 = STATE_VARIABLE_Specs_0_27;
              break;
            case (MR_Integer) 1:
              *STATE_VARIABLE_Specs_28 = STATE_VARIABLE_Specs_0_27;
              break;
            case (MR_Integer) 2:
              *STATE_VARIABLE_Specs_28 = STATE_VARIABLE_Specs_0_27;
              break;
            case (MR_Integer) 3:
              {
                MR_Word STATE_VARIABLE_Specs_34_95;

                check_hlds__check_typeclass__check_pred_type_ambiguities_4_p_0(ModuleInfo_7, PredInfo_10, STATE_VARIABLE_Specs_0_27, &STATE_VARIABLE_Specs_34_95);
                check_hlds__check_typeclass__check_constraint_quant_3_p_0(PredInfo_10, STATE_VARIABLE_Specs_34_95, STATE_VARIABLE_Specs_28);
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word STATE_VARIABLE_Specs_34_109;

                check_hlds__check_typeclass__check_pred_type_ambiguities_4_p_0(ModuleInfo_7, PredInfo_10, STATE_VARIABLE_Specs_0_27, &STATE_VARIABLE_Specs_34_109);
                check_hlds__check_typeclass__check_constraint_quant_3_p_0(PredInfo_10, STATE_VARIABLE_Specs_34_109, STATE_VARIABLE_Specs_28);
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word STATE_VARIABLE_Specs_34_34;

                check_hlds__check_typeclass__check_pred_type_ambiguities_4_p_0(ModuleInfo_7, PredInfo_10, STATE_VARIABLE_Specs_0_27, &STATE_VARIABLE_Specs_34_34);
                check_hlds__check_typeclass__check_constraint_quant_3_p_0(PredInfo_10, STATE_VARIABLE_Specs_34_34, STATE_VARIABLE_Specs_28);
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word STATE_VARIABLE_Specs_34_114;

                check_hlds__check_typeclass__check_pred_type_ambiguities_4_p_0(ModuleInfo_7, PredInfo_10, STATE_VARIABLE_Specs_0_27, &STATE_VARIABLE_Specs_34_114);
                check_hlds__check_typeclass__check_constraint_quant_3_p_0(PredInfo_10, STATE_VARIABLE_Specs_34_114, STATE_VARIABLE_Specs_28);
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Word STATE_VARIABLE_Specs_34_98;

                check_hlds__check_typeclass__check_pred_type_ambiguities_4_p_0(ModuleInfo_7, PredInfo_10, STATE_VARIABLE_Specs_0_27, &STATE_VARIABLE_Specs_34_98);
                check_hlds__check_typeclass__check_constraint_quant_3_p_0(PredInfo_10, STATE_VARIABLE_Specs_34_98, STATE_VARIABLE_Specs_28);
              }
              break;
            case (MR_Integer) 8:
              {
                MR_Word STATE_VARIABLE_Specs_34_106;

                check_hlds__check_typeclass__check_pred_type_ambiguities_4_p_0(ModuleInfo_7, PredInfo_10, STATE_VARIABLE_Specs_0_27, &STATE_VARIABLE_Specs_34_106);
                check_hlds__check_typeclass__check_constraint_quant_3_p_0(PredInfo_10, STATE_VARIABLE_Specs_34_106, STATE_VARIABLE_Specs_28);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word STATE_VARIABLE_Specs_34_101;

            check_hlds__check_typeclass__check_pred_type_ambiguities_4_p_0(ModuleInfo_7, PredInfo_10, STATE_VARIABLE_Specs_0_27, &STATE_VARIABLE_Specs_34_101);
            check_hlds__check_typeclass__check_constraint_quant_3_p_0(PredInfo_10, STATE_VARIABLE_Specs_34_101, STATE_VARIABLE_Specs_28);
          }
          break;
        case (MR_Integer) 2:
          *STATE_VARIABLE_Specs_28 = STATE_VARIABLE_Specs_0_27;
          break;
      }
    }
    else
    {
      MR_Word HeadBadClassSNA_23 = ((MR_Word) ((MR_hl_field(1, BadClassSNAs_22, (MR_Integer) 0))));
      MR_Word TailBadClassSNAs_24 = ((MR_Word) ((MR_hl_field(1, BadClassSNAs_22, (MR_Integer) 1))));
      MR_Word Context_51;
      MR_Word PredOrFunc_52;
      MR_String PredName_53;
      MR_Word PredModuleName_54;
      MR_Word CurModuleName_55;
      MR_Word PredSymName_56;
      MR_Word ArgTypes_59;
      MR_Word PredFormArity_60;
      MR_Word PFSymNameArity_61;
      MR_Word StartPieces_62;
      MR_Word Pieces_63;
      MR_Word Spec_64;
      MR_Word Var_67;
      MR_Word Var_68;
      MR_Word Var_70;
      MR_Word QualHeadClassId_78;
      MR_Word _TVarSet_57;
      MR_Word Var_58;

      hlds__hlds_pred__pred_info_get_context_2_p_0(PredInfo_10, &Context_51);
      PredOrFunc_52 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_10);
      PredName_53 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_10);
      PredModuleName_54 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_10);
      hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_7, &CurModuleName_55);
      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(CurModuleName_55, PredModuleName_54);
      if (succeeded)
        {
          PredSymName_56 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, PredSymName_56, 0) = ((MR_Box) (PredName_53));
        }
      else
        {
          PredSymName_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, PredSymName_56, 0) = ((MR_Box) (PredModuleName_54));
          MR_hl_field(1, PredSymName_56, 1) = ((MR_Box) (PredName_53));
        }
      hlds__hlds_pred__pred_info_get_arg_types_4_p_0(PredInfo_10, &_TVarSet_57, &Var_58, &ArgTypes_59);
      PredFormArity_60 = parse_tree__prog_data__arg_list_arity_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypes_59);
      {
        PFSymNameArity_61 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, PFSymNameArity_61, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_52));
        MR_hl_field(0, PFSymNameArity_61, 1) = ((MR_Box) (PredSymName_56));
        MR_hl_field(0, PFSymNameArity_61, 2) = ((MR_Box) (PredFormArity_60));
      }
      {
        Var_68 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_68, 0) = ((MR_Box) ((MR_Unsigned) 14U));
        MR_hl_field(3, Var_68, 1) = ((MR_Box) (PFSymNameArity_61));
      }
      {
        Var_67 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_67, 0) = ((MR_Box) (Var_68));
        MR_hl_field(1, Var_67, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__check_typeclass_scalar_common_1[109])));
      }
      {
        StartPieces_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, StartPieces_62, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__check_typeclass_scalar_common_1[100])));
        MR_hl_field(1, StartPieces_62, 1) = ((MR_Box) (Var_67));
      }
      {
        QualHeadClassId_78 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, QualHeadClassId_78, 0) = ((MR_Box) ((MR_Unsigned) 23U));
        MR_hl_field(3, QualHeadClassId_78, 1) = ((MR_Box) (HeadBadClassSNA_23));
      }
      if ((TailBadClassSNAs_24 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_82;

        {
          Var_82 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_82, 0) = ((MR_Box) (QualHeadClassId_78));
          MR_hl_field(1, Var_82, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__check_typeclass_scalar_common_1[169])));
        }
        {
          Var_70 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_70, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__check_typeclass_scalar_common_1[167])));
          MR_hl_field(1, Var_70, 1) = ((MR_Box) (Var_82));
        }
      }
      else
      {
        MR_Word QualTailClassIds_79;
        MR_Word QualClassIds_80;
        MR_Word Var_85;
        MR_Word Var_86;

        QualTailClassIds_79 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (&check_hlds__check_typeclass_scalar_common_2[14]), TailBadClassSNAs_24);
        {
          QualClassIds_80 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, QualClassIds_80, 0) = ((MR_Box) (QualHeadClassId_78));
          MR_hl_field(1, QualClassIds_80, 1) = ((MR_Box) (QualTailClassIds_79));
        }
        Var_86 = parse_tree__error_spec__component_list_to_pieces_2_f_0((MR_String) "and", QualClassIds_80);
        Var_85 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_86, (MR_Word) (MR_mkword(1, &check_hlds__check_typeclass_scalar_common_1[173])));
        Var_70 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__check_typeclass_scalar_common_1[171])), Var_85);
      }
      Pieces_63 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), StartPieces_62, Var_70);
      {
        Spec_64 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Spec_64, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.check_typeclass.report_bad_class_ids_in_pred_decl\'/6"));
        MR_hl_field(0, Spec_64, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, Spec_64, 2) = ((MR_Box) ((MR_Unsigned) 52U));
        MR_hl_field(0, Spec_64, 3) = ((MR_Box) (Context_51));
        MR_hl_field(0, Spec_64, 4) = ((MR_Box) (Pieces_63));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_28 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Spec_64));
        MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_27));
      }
    }
  }
  else
    *STATE_VARIABLE_Specs_28 = STATE_VARIABLE_Specs_0_27;
}

static void MR_CALL 
check_hlds__check_typeclass__find_bad_class_ids_in_constraints_4_p_0(
  MR_Word ClassTable_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_BadClassIds_0_3,
  MR_Word * STATE_VARIABLE_BadClassIds_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_BadClassIds_4 = STATE_VARIABLE_BadClassIds_0_3;
    else
    {
      MR_Word C_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Cs_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_BadClassIds_15_15;
      MR_Word ClassSymName_16 = ((MR_Word) ((MR_hl_field(0, C_10, (MR_Integer) 0))));
      MR_Word ArgTypes_17 = ((MR_Word) ((MR_hl_field(0, C_10, (MR_Integer) 1))));
      MR_Integer Arity_18;
      MR_Word ClassId_19;
      MR_Box conv0_Var_20;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_BadClassIds_0_3;

      mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypes_17, &Arity_18);
      {
        ClassId_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, ClassId_19, 0) = ((MR_Box) (ClassSymName_16));
        MR_hl_field(0, ClassId_19, 1) = ((MR_Box) (Arity_18));
      }
      succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0), ClassTable_1, ((MR_Box) (ClassId_19)), &conv0_Var_20);
      if (succeeded)
        succeeded = MR_TRUE;
      if (succeeded)
        STATE_VARIABLE_BadClassIds_15_15 = STATE_VARIABLE_BadClassIds_0_3;
      else
        mercury__set__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), ((MR_Box) (ClassId_19)), STATE_VARIABLE_BadClassIds_0_3, &STATE_VARIABLE_BadClassIds_15_15);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Cs_11;
      next_value_of_STATE_VARIABLE_BadClassIds_0_3 = STATE_VARIABLE_BadClassIds_15_15;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_BadClassIds_0_3 = next_value_of_STATE_VARIABLE_BadClassIds_0_3;
      continue;
    }
    break;
  }
}

static MR_Box MR_CALL 
check_hlds__check_typeclass__check_constraint_quant_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv1_HeadVar__3_77;

  conv1_HeadVar__3_77 = check_hlds__check_typeclass__IntroducedFrom__func__report_badly_quantified_vars__2548__1_2_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__3_77));
  return wrapper_arg_2;
}

static void MR_CALL 
check_hlds__check_typeclass__check_constraint_quant_3_p_0(
  MR_Word PredInfo_4,
  MR_Word STATE_VARIABLE_Specs_0_16,
  MR_Word * STATE_VARIABLE_Specs_17)
{
  MR_Word ExistQVars_6;
  MR_Word Constraints_7;
  MR_Word UnivCs_8;
  MR_Word ExistCs_9;
  MR_Word UnivTVars_10;
  MR_Word ExistQVarsSet_11;
  MR_Word UnivTVarsSet_12;
  MR_Word BadUnivTVarsSet_13;
  MR_Word ExistTVars_14;
  MR_Word BadExistTVars_15;
  MR_Word Var_19;
  MR_Word STATE_VARIABLE_Specs_20_20;

  hlds__hlds_pred__pred_info_get_exist_quant_tvars_2_p_0(PredInfo_4, &ExistQVars_6);
  hlds__hlds_pred__pred_info_get_class_context_2_p_0(PredInfo_4, &Constraints_7);
  UnivCs_8 = ((MR_Word) ((MR_hl_field(0, Constraints_7, (MR_Integer) 0))));
  ExistCs_9 = ((MR_Word) ((MR_hl_field(0, Constraints_7, (MR_Integer) 1))));
  parse_tree__prog_type_scan__constraint_list_get_tvars_2_p_0(UnivCs_8, &UnivTVars_10);
  mercury__set__list_to_set_2_p_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[0]), ExistQVars_6, &ExistQVarsSet_11);
  mercury__set__list_to_set_2_p_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[0]), UnivTVars_10, &UnivTVarsSet_12);
  mercury__set__intersect_3_p_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[0]), ExistQVarsSet_11, UnivTVarsSet_12, &BadUnivTVarsSet_13);
  Var_19 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[0]), BadUnivTVarsSet_13);
  if ((Var_19 == (MR_Word) ((MR_Unsigned) 0U)))
    STATE_VARIABLE_Specs_20_20 = STATE_VARIABLE_Specs_0_16;
  else
  {
    MR_Word TVarSet_25;
    MR_Word Context_26;
    MR_Word InDeclaration_27;
    MR_Word TypeVariables_28;
    MR_Word TVarsStrs_29;
    MR_Word TVarsPart_30;
    MR_Word Are_31;
    MR_Word Pieces_34;
    MR_Word Spec_35;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_String Var_44;
    MR_Word Var_48;
    MR_String Var_49;
    MR_Word Var_52;
    MR_Word Var_53;
    MR_Word Var_54;
    MR_Word Var_55;
    MR_Word Var_56;
    MR_Word Var_58;
    MR_Word Var_60;
    MR_Box conv0_Var_44;
    MR_Box conv2_Var_49;

    hlds__hlds_pred__pred_info_get_typevarset_2_p_0(PredInfo_4, &TVarSet_25);
    hlds__hlds_pred__pred_info_get_context_2_p_0(PredInfo_4, &Context_26);
    Var_38 = hlds__hlds_error_util__describe_one_pred_info_name_2_f_0((MR_Integer) 0, PredInfo_4);
    Var_37 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_38, (MR_Word) (MR_mkword(1, &check_hlds__check_typeclass_scalar_common_1[109])));
    InDeclaration_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__check_typeclass_scalar_common_1[111])), Var_37);
    conv0_Var_44 = parse_tree__error_spec__choose_number_3_f_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_19, ((MR_Box) ((MR_String) "")), ((MR_Box) ((MR_String) "s")));
    Var_44 = ((MR_String) (conv0_Var_44));
    {
      Var_43 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_43, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(3, Var_43, 1) = ((MR_Box) (Var_44));
    }
    {
      Var_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_42, 0) = ((MR_Box) (Var_43));
      MR_hl_field(1, Var_42, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      TypeVariables_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, TypeVariables_28, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__check_typeclass_scalar_common_1[112])));
      MR_hl_field(1, TypeVariables_28, 1) = ((MR_Box) (Var_42));
    }
    {
      Var_48 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_48, 0) = ((MR_Box) (&check_hlds__check_typeclass_scalar_common_9[3]));
      MR_hl_field(0, Var_48, 1) = ((MR_Box) (check_hlds__check_typeclass__check_constraint_quant_3_p_0_1));
      MR_hl_field(0, Var_48, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_48, 3) = ((MR_Box) (TVarSet_25));
    }
    TVarsStrs_29 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_48, Var_19);
    TVarsPart_30 = parse_tree__error_spec__list_to_quoted_pieces_1_f_0(TVarsStrs_29);
    conv2_Var_49 = parse_tree__error_spec__choose_number_3_f_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_19, ((MR_Box) ((MR_String) "is")), ((MR_Box) ((MR_String) "are")));
    Var_49 = ((MR_String) (conv2_Var_49));
    {
      Are_31 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Are_31, 0) = ((MR_Box) ((MR_Unsigned) 6U));
      MR_hl_field(3, Are_31, 1) = ((MR_Box) (Var_49));
    }
    {
      Var_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_60, 0) = ((MR_Box) (Are_31));
      MR_hl_field(1, Var_60, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__check_typeclass_scalar_common_1[182])));
    }
    {
      Var_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_58, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__check_typeclass_scalar_common_1[118])));
      MR_hl_field(1, Var_58, 1) = ((MR_Box) (Var_60));
    }
    {
      Var_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_56, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__check_typeclass_scalar_common_1[117])));
      MR_hl_field(1, Var_56, 1) = ((MR_Box) (Var_58));
    }
    {
      Var_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_55, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__check_typeclass_scalar_common_1[115])));
      MR_hl_field(1, Var_55, 1) = ((MR_Box) (Var_56));
    }
    {
      Var_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_54, 0) = ((MR_Box) (Are_31));
      MR_hl_field(1, Var_54, 1) = ((MR_Box) (Var_55));
    }
    Var_53 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), TVarsPart_30, Var_54);
    Var_52 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), TypeVariables_28, Var_53);
    Pieces_34 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), InDeclaration_27, Var_52);
    {
      Spec_35 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_35, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.check_typeclass.report_badly_quantified_vars\'/5"));
      MR_hl_field(0, Spec_35, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_35, 2) = ((MR_Box) ((MR_Unsigned) 52U));
      MR_hl_field(0, Spec_35, 3) = ((MR_Box) (Context_26));
      MR_hl_field(0, Spec_35, 4) = ((MR_Box) (Pieces_34));
    }
    {
      STATE_VARIABLE_Specs_20_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, STATE_VARIABLE_Specs_20_20, 0) = ((MR_Box) (Spec_35));
      MR_hl_field(1, STATE_VARIABLE_Specs_20_20, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_16));
    }
  }
  parse_tree__prog_type_scan__constraint_list_get_tvars_2_p_0(ExistCs_9, &ExistTVars_14);
  mercury__list__delete_elems_3_p_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[0]), ExistTVars_14, ExistQVars_6, &BadExistTVars_15);
  check_hlds__check_typeclass__maybe_report_badly_quantified_vars_5_p_0(PredInfo_4, (MR_Integer) 1, BadExistTVars_15, STATE_VARIABLE_Specs_20_20, STATE_VARIABLE_Specs_17);
}

static MR_Box MR_CALL 
check_hlds__check_typeclass__maybe_report_badly_quantified_vars_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv1_HeadVar__3_77;

  conv1_HeadVar__3_77 = check_hlds__check_typeclass__IntroducedFrom__func__report_badly_quantified_vars__2548__1_2_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__3_77));
  return wrapper_arg_2;
}

static void MR_CALL 
check_hlds__check_typeclass__maybe_report_badly_quantified_vars_5_p_0(
  MR_Word PredInfo_6,
  MR_Word QuantErrorType_7,
  MR_Word TVars_8,
  MR_Word STATE_VARIABLE_Specs_0_12,
  MR_Word * STATE_VARIABLE_Specs_13)
{
  if ((TVars_8 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_Specs_13 = STATE_VARIABLE_Specs_0_12;
  else
  {
    MR_Word TVarSet_14;
    MR_Word Context_15;
    MR_Word InDeclaration_16;
    MR_Word TypeVariables_17;
    MR_Word TVarsStrs_18;
    MR_Word TVarsPart_19;
    MR_Word Are_20;
    MR_Word BlahConstrained_21;
    MR_Word BlahQuantified_22;
    MR_Word Pieces_23;
    MR_Word Spec_24;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_String Var_33;
    MR_Word Var_37;
    MR_String Var_38;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word Var_45;
    MR_Word Var_47;
    MR_Word Var_49;
    MR_Word Var_50;
    MR_Box conv0_Var_33;
    MR_Box conv2_Var_38;

    hlds__hlds_pred__pred_info_get_typevarset_2_p_0(PredInfo_6, &TVarSet_14);
    hlds__hlds_pred__pred_info_get_context_2_p_0(PredInfo_6, &Context_15);
    Var_27 = hlds__hlds_error_util__describe_one_pred_info_name_2_f_0((MR_Integer) 0, PredInfo_6);
    Var_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_27, (MR_Word) (MR_mkword(1, &check_hlds__check_typeclass_scalar_common_1[109])));
    InDeclaration_16 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__check_typeclass_scalar_common_1[111])), Var_26);
    conv0_Var_33 = parse_tree__error_spec__choose_number_3_f_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), TVars_8, ((MR_Box) ((MR_String) "")), ((MR_Box) ((MR_String) "s")));
    Var_33 = ((MR_String) (conv0_Var_33));
    {
      Var_32 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_32, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(3, Var_32, 1) = ((MR_Box) (Var_33));
    }
    {
      Var_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_31, 0) = ((MR_Box) (Var_32));
      MR_hl_field(1, Var_31, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      TypeVariables_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, TypeVariables_17, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__check_typeclass_scalar_common_1[112])));
      MR_hl_field(1, TypeVariables_17, 1) = ((MR_Box) (Var_31));
    }
    {
      Var_37 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_37, 0) = ((MR_Box) (&check_hlds__check_typeclass_scalar_common_9[3]));
      MR_hl_field(0, Var_37, 1) = ((MR_Box) (check_hlds__check_typeclass__maybe_report_badly_quantified_vars_5_p_0_1));
      MR_hl_field(0, Var_37, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_37, 3) = ((MR_Box) (TVarSet_14));
    }
    TVarsStrs_18 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_37, TVars_8);
    TVarsPart_19 = parse_tree__error_spec__list_to_quoted_pieces_1_f_0(TVarsStrs_18);
    conv2_Var_38 = parse_tree__error_spec__choose_number_3_f_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), TVars_8, ((MR_Box) ((MR_String) "is")), ((MR_Box) ((MR_String) "are")));
    Var_38 = ((MR_String) (conv2_Var_38));
    {
      Are_20 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Are_20, 0) = ((MR_Box) ((MR_Unsigned) 6U));
      MR_hl_field(3, Are_20, 1) = ((MR_Box) (Var_38));
    }
    switch (QuantErrorType_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          BlahConstrained_21 = (MR_Word) (MR_mkword(3, &check_hlds__check_typeclass_scalar_common_1[113]));
          BlahQuantified_22 = (MR_Word) (MR_mkword(3, &check_hlds__check_typeclass_scalar_common_1[114]));
        }
        break;
      case (MR_Integer) 0:
        {
          BlahConstrained_21 = (MR_Word) (MR_mkword(3, &check_hlds__check_typeclass_scalar_common_1[115]));
          BlahQuantified_22 = (MR_Word) (MR_mkword(3, &check_hlds__check_typeclass_scalar_common_1[116]));
        }
        break;
    }
    {
      Var_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_50, 0) = ((MR_Box) (BlahQuantified_22));
      MR_hl_field(1, Var_50, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__check_typeclass_scalar_common_1[28])));
    }
    {
      Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_49, 0) = ((MR_Box) (Are_20));
      MR_hl_field(1, Var_49, 1) = ((MR_Box) (Var_50));
    }
    {
      Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_47, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__check_typeclass_scalar_common_1[118])));
      MR_hl_field(1, Var_47, 1) = ((MR_Box) (Var_49));
    }
    {
      Var_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_45, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__check_typeclass_scalar_common_1[117])));
      MR_hl_field(1, Var_45, 1) = ((MR_Box) (Var_47));
    }
    {
      Var_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_44, 0) = ((MR_Box) (BlahConstrained_21));
      MR_hl_field(1, Var_44, 1) = ((MR_Box) (Var_45));
    }
    {
      Var_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_43, 0) = ((MR_Box) (Are_20));
      MR_hl_field(1, Var_43, 1) = ((MR_Box) (Var_44));
    }
    Var_42 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), TVarsPart_19, Var_43);
    Var_41 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), TypeVariables_17, Var_42);
    Pieces_23 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), InDeclaration_16, Var_41);
    {
      Spec_24 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_24, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.check_typeclass.report_badly_quantified_vars\'/5"));
      MR_hl_field(0, Spec_24, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_24, 2) = ((MR_Box) ((MR_Unsigned) 52U));
      MR_hl_field(0, Spec_24, 3) = ((MR_Box) (Context_15));
      MR_hl_field(0, Spec_24, 4) = ((MR_Box) (Pieces_23));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_13 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Spec_24));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_12));
    }
  }
}

static MR_Box MR_CALL 
check_hlds__check_typeclass__check_pred_type_ambiguities_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv2_HeadVar__3_92;

  conv2_HeadVar__3_92 = check_hlds__check_typeclass__IntroducedFrom__func__report_unbound_tvars_in_pred_context__2479__1_2_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__3_92));
  return wrapper_arg_2;
}

static void MR_CALL 
check_hlds__check_typeclass__check_pred_type_ambiguities_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_FunDeps_26;

  check_hlds__check_typeclass__acc_induced_fundeps_for_constraint_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_FunDeps_26);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_FunDeps_26));
}

static void MR_CALL 
check_hlds__check_typeclass__check_pred_type_ambiguities_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word PredInfo_6,
  MR_Word STATE_VARIABLE_Specs_0_18,
  MR_Word * STATE_VARIABLE_Specs_19)
{
  MR_Word TVarSet_8;
  MR_Word ArgTypes_9;
  MR_Word Constraints_10;
  MR_Word ArgTVars_11;
  MR_Word ConstrainedTVars_12;
  MR_Word UnivCs_13;
  MR_Word ExistCs_14;
  MR_Word UnboundTVars_15;
  MR_Word Var_20;
  MR_Word ClassTable_22;
  MR_Word InducedFunDeps_23;
  MR_Word FunDepsClosure_24;
  MR_Word UnboundTVarsSet_25;
  MR_Word Var_26;
  MR_Word Var_27;
  MR_Word Var_29;
  MR_Word Var_33;
  MR_Box conv1_InducedFunDeps_23;

  hlds__hlds_pred__pred_info_get_typevarset_2_p_0(PredInfo_6, &TVarSet_8);
  hlds__hlds_pred__pred_info_get_arg_types_2_p_0(PredInfo_6, &ArgTypes_9);
  hlds__hlds_pred__pred_info_get_class_context_2_p_0(PredInfo_6, &Constraints_10);
  parse_tree__prog_type_scan__type_vars_in_types_2_p_0(ArgTypes_9, &ArgTVars_11);
  parse_tree__prog_type_scan__univ_exist_constraints_get_tvars_2_p_0(Constraints_10, &ConstrainedTVars_12);
  UnivCs_13 = ((MR_Word) ((MR_hl_field(0, Constraints_10, (MR_Integer) 0))));
  ExistCs_14 = ((MR_Word) ((MR_hl_field(0, Constraints_10, (MR_Integer) 1))));
  Var_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), UnivCs_13, ExistCs_14);
  hlds__hlds_module__module_info_get_class_table_2_p_0(ModuleInfo_5, &ClassTable_22);
  {
    Var_29 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_29, 0) = ((MR_Box) (&check_hlds__check_typeclass_scalar_common_7[5]));
    MR_hl_field(0, Var_29, 1) = ((MR_Box) (check_hlds__check_typeclass__check_pred_type_ambiguities_4_p_0_1));
    MR_hl_field(0, Var_29, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_29, 3) = ((MR_Box) (ClassTable_22));
    MR_hl_field(0, Var_29, 4) = ((MR_Box) (TVarSet_8));
  }
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&check_hlds__check_typeclass_scalar_common_1[9]), Var_29, Var_20, ((MR_Box) ((MR_Unsigned) 0U)), &conv1_InducedFunDeps_23);
  InducedFunDeps_23 = ((MR_Word) (conv1_InducedFunDeps_23));
  Var_26 = mercury__set__list_to_set_1_f_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[0]), ArgTVars_11);
  Var_33 = mercury__set__init_0_f_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[0]));
  check_hlds__check_typeclass__fundeps_closure_loop_4_p_0(InducedFunDeps_23, Var_26, Var_33, &FunDepsClosure_24);
  Var_27 = mercury__set__list_to_set_1_f_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[0]), ConstrainedTVars_12);
  UnboundTVarsSet_25 = mercury__set__difference_2_f_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[0]), Var_27, FunDepsClosure_24);
  UnboundTVars_15 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[0]), UnboundTVarsSet_25);
  if ((UnboundTVars_15 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_Specs_19 = STATE_VARIABLE_Specs_0_18;
  else
  {
    MR_Word Context_35;
    MR_Word TVarSet_36;
    MR_Word ArgTypes_38;
    MR_String PredName_39;
    MR_Word Module_40;
    MR_Word SymName_41;
    MR_Word PredFormArity_42;
    MR_Word PredOrFunc_43;
    MR_Word VarsStrs_44;
    MR_Word PFSymNameArity_45;
    MR_Word Pieces0_46;
    MR_Word Pieces_47;
    MR_Word Msg_48;
    MR_Word Spec_49;
    MR_Word Var_50;
    MR_Word Var_51;
    MR_Word Var_53;
    MR_Word Var_54;
    MR_Word Var_55;
    MR_Word Var_57;
    MR_Word Var_59;
    MR_Word Var_61;
    MR_Word Var_62;
    MR_String Var_63;
    MR_Word Var_67;
    MR_Word Var_68;
    MR_Word Var_69;
    MR_Word Var_70;
    MR_String Var_71;
    MR_Word Var_74;
    MR_Word Var_76;
    MR_Word Var_77;
    MR_String Var_78;
    MR_Word Var_84;
    MR_Word Var_85;
    MR_Word Var_94;
    MR_Word Var_37;
    MR_Box conv3_Var_63;
    MR_Box conv4_Var_71;
    MR_Box conv5_Var_78;

    hlds__hlds_pred__pred_info_get_context_2_p_0(PredInfo_6, &Context_35);
    hlds__hlds_pred__pred_info_get_arg_types_4_p_0(PredInfo_6, &TVarSet_36, &Var_37, &ArgTypes_38);
    PredName_39 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_6);
    Module_40 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_6);
    {
      SymName_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, SymName_41, 0) = ((MR_Box) (Module_40));
      MR_hl_field(1, SymName_41, 1) = ((MR_Box) (PredName_39));
    }
    PredFormArity_42 = parse_tree__prog_data__arg_list_arity_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypes_38);
    PredOrFunc_43 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_6);
    {
      Var_50 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_50, 0) = ((MR_Box) (&check_hlds__check_typeclass_scalar_common_9[3]));
      MR_hl_field(0, Var_50, 1) = ((MR_Box) (check_hlds__check_typeclass__check_pred_type_ambiguities_4_p_0_2));
      MR_hl_field(0, Var_50, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_50, 3) = ((MR_Box) (TVarSet_36));
    }
    VarsStrs_44 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_50, UnboundTVars_15);
    {
      PFSymNameArity_45 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, PFSymNameArity_45, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_43));
      MR_hl_field(0, PFSymNameArity_45, 1) = ((MR_Box) (SymName_41));
      MR_hl_field(0, PFSymNameArity_45, 2) = ((MR_Box) (PredFormArity_42));
    }
    {
      Var_54 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_54, 0) = ((MR_Box) ((MR_Unsigned) 14U));
      MR_hl_field(3, Var_54, 1) = ((MR_Box) (PFSymNameArity_45));
    }
    conv3_Var_63 = parse_tree__error_spec__choose_number_3_f_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), UnboundTVars_15, ((MR_Box) ((MR_String) "type variable")), ((MR_Box) ((MR_String) "type variables")));
    Var_63 = ((MR_String) (conv3_Var_63));
    {
      Var_62 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_62, 0) = ((MR_Box) ((MR_Unsigned) 6U));
      MR_hl_field(3, Var_62, 1) = ((MR_Box) (Var_63));
    }
    {
      Var_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_61, 0) = ((MR_Box) (Var_62));
      MR_hl_field(1, Var_61, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_59 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_59, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__check_typeclass_scalar_common_1[101])));
      MR_hl_field(1, Var_59, 1) = ((MR_Box) (Var_61));
    }
    {
      Var_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_57, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(1, Var_57, 1) = ((MR_Box) (Var_59));
    }
    {
      Var_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_55, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__check_typeclass_scalar_common_1[63])));
      MR_hl_field(1, Var_55, 1) = ((MR_Box) (Var_57));
    }
    {
      Var_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_53, 0) = ((MR_Box) (Var_54));
      MR_hl_field(1, Var_53, 1) = ((MR_Box) (Var_55));
    }
    {
      Var_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_51, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__check_typeclass_scalar_common_1[100])));
      MR_hl_field(1, Var_51, 1) = ((MR_Box) (Var_53));
    }
    Var_68 = parse_tree__error_spec__list_to_quoted_pieces_1_f_0(VarsStrs_44);
    conv4_Var_71 = parse_tree__error_spec__choose_number_3_f_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), UnboundTVars_15, ((MR_Box) ((MR_String) "occurs")), ((MR_Box) ((MR_String) "occur")));
    Var_71 = ((MR_String) (conv4_Var_71));
    {
      Var_70 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_70, 0) = ((MR_Box) ((MR_Unsigned) 6U));
      MR_hl_field(3, Var_70, 1) = ((MR_Box) (Var_71));
    }
    conv5_Var_78 = parse_tree__error_spec__choose_number_3_f_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), UnboundTVars_15, ((MR_Box) ((MR_String) "is")), ((MR_Box) ((MR_String) "are")));
    Var_78 = ((MR_String) (conv5_Var_78));
    {
      Var_77 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_77, 0) = ((MR_Box) ((MR_Unsigned) 6U));
      MR_hl_field(3, Var_77, 1) = ((MR_Box) (Var_78));
    }
    {
      Var_76 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_76, 0) = ((MR_Box) (Var_77));
      MR_hl_field(1, Var_76, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__check_typeclass_scalar_common_1[104])));
    }
    {
      Var_74 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_74, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__check_typeclass_scalar_common_1[102])));
      MR_hl_field(1, Var_74, 1) = ((MR_Box) (Var_76));
    }
    {
      Var_69 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_69, 0) = ((MR_Box) (Var_70));
      MR_hl_field(1, Var_69, 1) = ((MR_Box) (Var_74));
    }
    Var_67 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_68, Var_69);
    Pieces0_46 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_51, Var_67);
    switch (PredOrFunc_43) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        Pieces_47 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Pieces0_46, (MR_Word) (MR_mkword(1, &check_hlds__check_typeclass_scalar_common_1[106])));
        break;
      case (MR_Integer) 0:
        Pieces_47 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Pieces0_46, (MR_Word) (MR_mkword(1, &check_hlds__check_typeclass_scalar_common_1[108])));
        break;
    }
    {
      Var_85 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_85, 0) = ((MR_Box) (Pieces_47));
    }
    {
      Var_84 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_84, 0) = ((MR_Box) (Var_85));
      MR_hl_field(1, Var_84, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__check_typeclass_scalar_common_1[181])));
    }
    {
      Msg_48 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Msg_48, 0) = ((MR_Box) (Context_35));
      MR_hl_field(2, Msg_48, 1) = ((MR_Box) (Var_84));
    }
    {
      Var_94 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_94, 0) = ((MR_Box) (Msg_48));
      MR_hl_field(1, Var_94, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Spec_49 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Spec_49, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.check_typeclass.report_unbound_tvars_in_pred_context\'/4"));
      MR_hl_field(2, Spec_49, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(2, Spec_49, 2) = ((MR_Box) ((MR_Unsigned) 52U));
      MR_hl_field(2, Spec_49, 3) = ((MR_Box) (Var_94));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_19 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Spec_49));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_18));
    }
  }
}

static void MR_CALL 
check_hlds__check_typeclass__check_consistency_pair_2_7_p_0(
  MR_Word ClassId_8,
  MR_Word ClassDefn_9,
  MR_Word InstanceA_10,
  MR_Word InstanceB_11,
  MR_Word FunDep_12,
  MR_Word STATE_VARIABLE_Specs_0_30,
  MR_Word * STATE_VARIABLE_Specs_31)
{
  MR_bool succeeded;
  MR_Word TVarSetA_14 = ((MR_Word) ((MR_hl_field(0, InstanceA_10, (MR_Integer) 2))));
  MR_Word TVarSetB_15 = ((MR_Word) ((MR_hl_field(0, InstanceB_11, (MR_Integer) 2))));
  MR_Word Renaming_17;
  MR_Word TypesA_18;
  MR_Word TypesB0_19;
  MR_Word TypesB_20;
  MR_Word Domain_21;
  MR_Word Range_22;
  MR_Word DomainA_23;
  MR_Word DomainB_24;
  MR_Word Var_16;
  MR_Word Subst_25;
  MR_Word Var_33;

  parse_tree__prog_data__tvarset_merge_renaming_4_p_0(TVarSetA_14, TVarSetB_15, &Var_16, &Renaming_17);
  TypesA_18 = ((MR_Word) ((MR_hl_field(0, InstanceA_10, (MR_Integer) 4))));
  TypesB0_19 = ((MR_Word) ((MR_hl_field(0, InstanceB_11, (MR_Integer) 4))));
  parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0(Renaming_17, TypesB0_19, &TypesB_20);
  Domain_21 = ((MR_Word) ((MR_hl_field(0, FunDep_12, (MR_Integer) 0))));
  Range_22 = ((MR_Word) ((MR_hl_field(0, FunDep_12, (MR_Integer) 1))));
  DomainA_23 = hlds__hlds_class__restrict_list_elements_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Domain_21, TypesA_18);
  DomainB_24 = hlds__hlds_class__restrict_list_elements_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Domain_21, TypesB_20);
  Var_33 = mercury__map__init_0_f_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0));
  succeeded = parse_tree__prog_type_unify__type_unify_list_5_p_0(DomainA_23, DomainB_24, (MR_Word) ((MR_Unsigned) 0U), Var_33, &Subst_25);
  if (succeeded)
  {
    MR_Word RangeA0_26;
    MR_Word RangeB0_27;
    MR_Word RangeA_28;
    MR_Word RangeB_29;

    RangeA0_26 = hlds__hlds_class__restrict_list_elements_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Range_22, TypesA_18);
    RangeB0_27 = hlds__hlds_class__restrict_list_elements_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Range_22, TypesB_20);
    parse_tree__prog_type_subst__apply_rec_subst_to_type_list_3_p_0(Subst_25, RangeA0_26, &RangeA_28);
    parse_tree__prog_type_subst__apply_rec_subst_to_type_list_3_p_0(Subst_25, RangeB0_27, &RangeB_29);
    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[7]), ((MR_Box) (RangeA_28)), ((MR_Box) (RangeB_29)));
    if (succeeded)
      *STATE_VARIABLE_Specs_31 = STATE_VARIABLE_Specs_0_30;
    else
      check_hlds__check_typeclass__report_consistency_error_7_p_0(ClassId_8, ClassDefn_9, InstanceA_10, InstanceB_11, FunDep_12, STATE_VARIABLE_Specs_0_30, STATE_VARIABLE_Specs_31);
  }
  else
    *STATE_VARIABLE_Specs_31 = STATE_VARIABLE_Specs_0_30;
}

static void MR_CALL 
check_hlds__check_typeclass__report_consistency_error_7_p_0(
  MR_Word ClassId_8,
  MR_Word ClassDefn_9,
  MR_Word InstanceA_10,
  MR_Word InstanceB_11,
  MR_Word FunDep_12,
  MR_Word STATE_VARIABLE_Specs_0_29,
  MR_Word * STATE_VARIABLE_Specs_30)
{
  MR_Word Params_14 = ((MR_Word) ((MR_hl_field(0, ClassDefn_9, (MR_Integer) 3))));
  MR_Word TVarSet_15 = ((MR_Word) ((MR_hl_field(0, ClassDefn_9, (MR_Integer) 1))));
  MR_Word ContextA_16 = ((MR_Word) ((MR_hl_field(0, InstanceA_10, (MR_Integer) 10))));
  MR_Word ContextB_17 = ((MR_Word) ((MR_hl_field(0, InstanceB_11, (MR_Integer) 10))));
  MR_Word Domain_18 = ((MR_Word) ((MR_hl_field(0, FunDep_12, (MR_Integer) 0))));
  MR_Word Range_19 = ((MR_Word) ((MR_hl_field(0, FunDep_12, (MR_Integer) 1))));
  MR_Word DomainParams_20;
  MR_Word RangeParams_21;
  MR_String Domains_22;
  MR_String Ranges_23;
  MR_Word PiecesA_24;
  MR_Word MsgA_26;
  MR_Word MsgB_27;
  MR_Word Spec_28;
  MR_Word Var_33;
  MR_Word Var_34;
  MR_Word Var_35;
  MR_Word Var_38;
  MR_Word Var_39;
  MR_String Var_40;
  MR_String Var_42;
  MR_String Var_43;
  MR_String Var_45;
  MR_Word Var_58;
  MR_Word Var_67;
  MR_Word Var_68;

  DomainParams_20 = hlds__hlds_class__restrict_list_elements_2_f_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[0]), Domain_18, Params_14);
  RangeParams_21 = hlds__hlds_class__restrict_list_elements_2_f_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[0]), Range_19, Params_14);
  Domains_22 = parse_tree__parse_tree_out_term__mercury_vars_to_name_only_vs_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TVarSet_15, DomainParams_20);
  Ranges_23 = parse_tree__parse_tree_out_term__mercury_vars_to_name_only_vs_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TVarSet_15, RangeParams_21);
  {
    Var_34 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_34, 0) = ((MR_Box) ((MR_Unsigned) 23U));
    MR_hl_field(3, Var_34, 1) = ((MR_Box) (ClassId_8));
  }
  Var_45 = mercury__string__f_43_43_2_f_0(Ranges_23, (MR_String) ")");
  Var_43 = mercury__string__f_43_43_2_f_0((MR_String) " -> ", Var_45);
  Var_42 = mercury__string__f_43_43_2_f_0(Domains_22, Var_43);
  Var_40 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_42);
  {
    Var_39 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_39, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_39, 1) = ((MR_Box) (Var_40));
  }
  {
    Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_38, 0) = ((MR_Box) (Var_39));
    MR_hl_field(1, Var_38, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__check_typeclass_scalar_common_1[28])));
  }
  {
    Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_35, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__check_typeclass_scalar_common_1[97])));
    MR_hl_field(1, Var_35, 1) = ((MR_Box) (Var_38));
  }
  {
    Var_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_33, 0) = ((MR_Box) (Var_34));
    MR_hl_field(1, Var_33, 1) = ((MR_Box) (Var_35));
  }
  {
    PiecesA_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, PiecesA_24, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__check_typeclass_scalar_common_1[96])));
    MR_hl_field(1, PiecesA_24, 1) = ((MR_Box) (Var_33));
  }
  {
    MsgA_26 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, MsgA_26, 0) = ((MR_Box) (ContextA_16));
    MR_hl_field(0, MsgA_26, 1) = ((MR_Box) (PiecesA_24));
  }
  {
    Var_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_58, 0) = ((MR_Box) (ContextB_17));
  }
  {
    MsgB_27 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, MsgB_27, 0) = ((MR_Box) (Var_58));
    MR_hl_field(3, MsgB_27, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(3, MsgB_27, 2) = ((MR_Box) ((MR_Integer) 0));
    MR_hl_field(3, MsgB_27, 3) = ((MR_Box) (MR_mkword(1, &check_hlds__check_typeclass_scalar_common_1[179])));
  }
  {
    Var_68 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_68, 0) = ((MR_Box) (MsgB_27));
    MR_hl_field(1, Var_68, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_67 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_67, 0) = ((MR_Box) (MsgA_26));
    MR_hl_field(1, Var_67, 1) = ((MR_Box) (Var_68));
  }
  {
    Spec_28 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Spec_28, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.check_typeclass.report_consistency_error\'/7"));
    MR_hl_field(2, Spec_28, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(2, Spec_28, 2) = ((MR_Box) ((MR_Unsigned) 52U));
    MR_hl_field(2, Spec_28, 3) = ((MR_Box) (Var_67));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *STATE_VARIABLE_Specs_30 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (Spec_28));
    MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_29));
  }
}

static void MR_CALL 
check_hlds__check_typeclass__check_consistency_pair_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Specs_31;

  check_hlds__check_typeclass__check_consistency_pair_2_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Specs_31);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_31));
}

static void MR_CALL 
check_hlds__check_typeclass__check_consistency_pair_7_p_0(
  MR_Word ClassId_8,
  MR_Word ClassDefn_9,
  MR_Word FunDeps_10,
  MR_Word InstanceA_11,
  MR_Word InstanceB_12,
  MR_Word STATE_VARIABLE_Specs_0_14,
  MR_Word * STATE_VARIABLE_Specs_15)
{
  MR_bool succeeded;
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, InstanceA_11, (MR_Integer) 0))));
  MR_Word Var_17;
  MR_Word Var_18;
  MR_Word Var_55 = ((MR_Word) ((MR_hl_field(0, InstanceB_12, (MR_Integer) 0))));

  succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(Var_16, Var_55);
  if (succeeded)
  {
    Var_18 = ((MR_Word) ((MR_hl_field(0, InstanceA_11, (MR_Integer) 1))));
    Var_17 = hlds__status__instance_status_is_imported_1_f_0(Var_18);
    succeeded = (Var_17 == (MR_Integer) 1);
  }
  if (succeeded)
    *STATE_VARIABLE_Specs_15 = STATE_VARIABLE_Specs_0_14;
  else
  {
    MR_Word Var_19;
    MR_Box conv1_STATE_VARIABLE_Specs_15;

    {
      Var_19 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_19, 0) = ((MR_Box) (&check_hlds__check_typeclass_scalar_common_14[1]));
      MR_hl_field(0, Var_19, 1) = ((MR_Box) (check_hlds__check_typeclass__check_consistency_pair_7_p_0_1));
      MR_hl_field(0, Var_19, 2) = ((MR_Box) ((MR_Integer) 4));
      MR_hl_field(0, Var_19, 3) = ((MR_Box) (ClassId_8));
      MR_hl_field(0, Var_19, 4) = ((MR_Box) (ClassDefn_9));
      MR_hl_field(0, Var_19, 5) = ((MR_Box) (InstanceA_11));
      MR_hl_field(0, Var_19, 6) = ((MR_Box) (InstanceB_12));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_fundep_0), (MR_Word) (&check_hlds__check_typeclass_scalar_common_1[3]), Var_19, FunDeps_10, ((MR_Box) (STATE_VARIABLE_Specs_0_14)), &conv1_STATE_VARIABLE_Specs_15);
    *STATE_VARIABLE_Specs_15 = ((MR_Word) (conv1_STATE_VARIABLE_Specs_15));
  }
}

static void MR_CALL 
check_hlds__check_typeclass__check_coverage_for_instance_defn_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_FunDeps_26;

  check_hlds__check_typeclass__acc_induced_fundeps_for_constraint_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_FunDeps_26);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_FunDeps_26));
}

static void MR_CALL 
check_hlds__check_typeclass__check_coverage_for_instance_defn_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word ClassId_8,
  MR_Word InstanceDefn_9,
  MR_Word FunDep_10,
  MR_Word STATE_VARIABLE_Specs_0_24,
  MR_Word * STATE_VARIABLE_Specs_25)
{
  MR_Word TVarSet_12 = ((MR_Word) ((MR_hl_field(0, InstanceDefn_9, (MR_Integer) 2))));
  MR_Word Types_13 = ((MR_Word) ((MR_hl_field(0, InstanceDefn_9, (MR_Integer) 4))));
  MR_Word Domain_14 = ((MR_Word) ((MR_hl_field(0, FunDep_10, (MR_Integer) 0))));
  MR_Word Range_15 = ((MR_Word) ((MR_hl_field(0, FunDep_10, (MR_Integer) 1))));
  MR_Word DomainTypes_16;
  MR_Word RangeTypes_17;
  MR_Word DomainTVars_18;
  MR_Word RangeTVars_19;
  MR_Word Constraints_20;
  MR_Word UnboundVars_21;
  MR_Word ClassTable_57;
  MR_Word InducedFunDeps_58;
  MR_Word FunDepsClosure_59;
  MR_Word UnboundTVarsSet_60;
  MR_Word Var_61;
  MR_Word Var_62;
  MR_Word Var_64;
  MR_Word Var_68;
  MR_Box conv1_InducedFunDeps_58;

  DomainTypes_16 = hlds__hlds_class__restrict_list_elements_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Domain_14, Types_13);
  RangeTypes_17 = hlds__hlds_class__restrict_list_elements_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Range_15, Types_13);
  parse_tree__prog_type_scan__type_vars_in_types_2_p_0(DomainTypes_16, &DomainTVars_18);
  parse_tree__prog_type_scan__type_vars_in_types_2_p_0(RangeTypes_17, &RangeTVars_19);
  Constraints_20 = ((MR_Word) ((MR_hl_field(0, InstanceDefn_9, (MR_Integer) 5))));
  hlds__hlds_module__module_info_get_class_table_2_p_0(ModuleInfo_7, &ClassTable_57);
  {
    Var_64 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_64, 0) = ((MR_Box) (&check_hlds__check_typeclass_scalar_common_7[5]));
    MR_hl_field(0, Var_64, 1) = ((MR_Box) (check_hlds__check_typeclass__check_coverage_for_instance_defn_6_p_0_1));
    MR_hl_field(0, Var_64, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_64, 3) = ((MR_Box) (ClassTable_57));
    MR_hl_field(0, Var_64, 4) = ((MR_Box) (TVarSet_12));
  }
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&check_hlds__check_typeclass_scalar_common_1[9]), Var_64, Constraints_20, ((MR_Box) ((MR_Unsigned) 0U)), &conv1_InducedFunDeps_58);
  InducedFunDeps_58 = ((MR_Word) (conv1_InducedFunDeps_58));
  Var_61 = mercury__set__list_to_set_1_f_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[0]), DomainTVars_18);
  Var_68 = mercury__set__init_0_f_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[0]));
  check_hlds__check_typeclass__fundeps_closure_loop_4_p_0(InducedFunDeps_58, Var_61, Var_68, &FunDepsClosure_59);
  Var_62 = mercury__set__list_to_set_1_f_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[0]), RangeTVars_19);
  UnboundTVarsSet_60 = mercury__set__difference_2_f_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[0]), Var_62, FunDepsClosure_59);
  UnboundVars_21 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[0]), UnboundTVarsSet_60);
  if ((UnboundVars_21 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_Specs_25 = STATE_VARIABLE_Specs_0_24;
  else
    check_hlds__check_typeclass__report_coverage_error_5_p_0(ClassId_8, InstanceDefn_9, UnboundVars_21, STATE_VARIABLE_Specs_0_24, STATE_VARIABLE_Specs_25);
}

static MR_Box MR_CALL 
check_hlds__check_typeclass__report_coverage_error_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_HeadVar__3_84;

  conv0_HeadVar__3_84 = check_hlds__check_typeclass__IntroducedFrom__func__report_coverage_error__2401__1_2_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_84));
  return wrapper_arg_2;
}

static void MR_CALL 
check_hlds__check_typeclass__report_coverage_error_5_p_0(
  MR_Word ClassId_6,
  MR_Word InstanceDefn_7,
  MR_Word Vars_8,
  MR_Word STATE_VARIABLE_Specs_0_15,
  MR_Word * STATE_VARIABLE_Specs_16)
{
  MR_Word TVarSet_10 = ((MR_Word) ((MR_hl_field(0, InstanceDefn_7, (MR_Integer) 2))));
  MR_Word VarsStrs_11;
  MR_Word Pieces_12;
  MR_Word Context_13;
  MR_Word Spec_14;
  MR_Word Var_17;
  MR_Word Var_18;
  MR_Word Var_21;
  MR_Word Var_22;
  MR_Word Var_23;
  MR_Word Var_26;
  MR_Word Var_28;
  MR_Word Var_31;
  MR_Word Var_32;
  MR_String Var_33;
  MR_Word Var_37;
  MR_Word Var_38;
  MR_Word Var_39;
  MR_Word Var_40;
  MR_String Var_41;
  MR_Word Var_44;
  MR_Word Var_47;
  MR_Word Var_48;
  MR_String Var_49;
  MR_Box conv1_Var_33;
  MR_Box conv2_Var_41;
  MR_Box conv3_Var_49;

  {
    Var_17 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_17, 0) = ((MR_Box) (&check_hlds__check_typeclass_scalar_common_9[3]));
    MR_hl_field(0, Var_17, 1) = ((MR_Box) (check_hlds__check_typeclass__report_coverage_error_5_p_0_1));
    MR_hl_field(0, Var_17, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_17, 3) = ((MR_Box) (TVarSet_10));
  }
  VarsStrs_11 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_17, Vars_8);
  {
    Var_22 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_22, 0) = ((MR_Box) ((MR_Unsigned) 24U));
    MR_hl_field(3, Var_22, 1) = ((MR_Box) (ClassId_6));
  }
  conv1_Var_33 = parse_tree__error_spec__choose_number_3_f_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Vars_8, ((MR_Box) ((MR_String) "type variable")), ((MR_Box) ((MR_String) "type variables")));
  Var_33 = ((MR_String) (conv1_Var_33));
  {
    Var_32 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_32, 0) = ((MR_Box) ((MR_Unsigned) 6U));
    MR_hl_field(3, Var_32, 1) = ((MR_Box) (Var_33));
  }
  {
    Var_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_31, 0) = ((MR_Box) (Var_32));
    MR_hl_field(1, Var_31, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_28, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__check_typeclass_scalar_common_1[92])));
    MR_hl_field(1, Var_28, 1) = ((MR_Box) (Var_31));
  }
  {
    Var_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_26, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(1, Var_26, 1) = ((MR_Box) (Var_28));
  }
  {
    Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_23, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__check_typeclass_scalar_common_1[63])));
    MR_hl_field(1, Var_23, 1) = ((MR_Box) (Var_26));
  }
  {
    Var_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_21, 0) = ((MR_Box) (Var_22));
    MR_hl_field(1, Var_21, 1) = ((MR_Box) (Var_23));
  }
  {
    Var_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_18, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__check_typeclass_scalar_common_1[91])));
    MR_hl_field(1, Var_18, 1) = ((MR_Box) (Var_21));
  }
  Var_38 = parse_tree__error_spec__list_to_quoted_pieces_1_f_0(VarsStrs_11);
  conv2_Var_41 = parse_tree__error_spec__choose_number_3_f_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Vars_8, ((MR_Box) ((MR_String) "occurs")), ((MR_Box) ((MR_String) "occur")));
  Var_41 = ((MR_String) (conv2_Var_41));
  {
    Var_40 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_40, 0) = ((MR_Box) ((MR_Unsigned) 6U));
    MR_hl_field(3, Var_40, 1) = ((MR_Box) (Var_41));
  }
  conv3_Var_49 = parse_tree__error_spec__choose_number_3_f_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Vars_8, ((MR_Box) ((MR_String) "is")), ((MR_Box) ((MR_String) "are")));
  Var_49 = ((MR_String) (conv3_Var_49));
  {
    Var_48 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_48, 0) = ((MR_Box) ((MR_Unsigned) 6U));
    MR_hl_field(3, Var_48, 1) = ((MR_Box) (Var_49));
  }
  {
    Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_47, 0) = ((MR_Box) (Var_48));
    MR_hl_field(1, Var_47, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__check_typeclass_scalar_common_1[95])));
  }
  {
    Var_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_44, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__check_typeclass_scalar_common_1[93])));
    MR_hl_field(1, Var_44, 1) = ((MR_Box) (Var_47));
  }
  {
    Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_39, 0) = ((MR_Box) (Var_40));
    MR_hl_field(1, Var_39, 1) = ((MR_Box) (Var_44));
  }
  Var_37 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_38, Var_39);
  Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_18, Var_37);
  Context_13 = ((MR_Word) ((MR_hl_field(0, InstanceDefn_7, (MR_Integer) 10))));
  {
    Spec_14 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Spec_14, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.check_typeclass.report_coverage_error\'/5"));
    MR_hl_field(0, Spec_14, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Spec_14, 2) = ((MR_Box) ((MR_Unsigned) 52U));
    MR_hl_field(0, Spec_14, 3) = ((MR_Box) (Context_13));
    MR_hl_field(0, Spec_14, 4) = ((MR_Box) (Pieces_12));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *STATE_VARIABLE_Specs_16 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (Spec_14));
    MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_15));
  }
}

static void MR_CALL 
check_hlds__check_typeclass__fundeps_closure_loop_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_FunDeps_12;
  MR_Word conv1_STATE_VARIABLE_Vars_14;

  check_hlds__check_typeclass__collect_determined_vars_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_FunDeps_12, ((MR_Word) (wrapper_arg_4)), &conv1_STATE_VARIABLE_Vars_14);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_FunDeps_12));
  *wrapper_arg_5 = ((MR_Box) (conv1_STATE_VARIABLE_Vars_14));
}

static void MR_CALL 
check_hlds__check_typeclass__fundeps_closure_loop_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_InducedFunDep_6;

  check_hlds__check_typeclass__remove_vars_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_InducedFunDep_6);
  *wrapper_arg_2 = ((MR_Box) (conv0_InducedFunDep_6));
}

static void MR_CALL 
check_hlds__check_typeclass__fundeps_closure_loop_4_p_0(
  MR_Word FunDeps0_5,
  MR_Word NewVars0_6,
  MR_Word Result0_7,
  MR_Word * Result_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[0]), NewVars0_6);
    if (succeeded)
      *Result_8 = Result0_7;
    else
    {
      MR_Word Result1_9;
      MR_Word FunDeps1_10;
      MR_Word FunDeps_11;
      MR_Word NewVars_12;
      MR_Word Var_13;
      MR_Word Var_16;
      MR_Box conv4_FunDeps_11;
      MR_Box conv3_NewVars_12;
      MR_Word next_value_of_FunDeps0_5;
      MR_Word next_value_of_NewVars0_6;
      MR_Word next_value_of_Result0_7;

      mercury__set__union_3_p_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[0]), Result0_7, NewVars0_6, &Result1_9);
      {
        Var_13 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_13, 0) = ((MR_Box) (&check_hlds__check_typeclass_scalar_common_9[2]));
        MR_hl_field(0, Var_13, 1) = ((MR_Box) (check_hlds__check_typeclass__fundeps_closure_loop_4_p_0_1));
        MR_hl_field(0, Var_13, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_13, 3) = ((MR_Box) (NewVars0_6));
      }
      mercury__list__map_3_p_0((MR_Word) (&check_hlds__check_typeclass__check_hlds__check_typeclass__type_ctor_info_induced_fundep_0), (MR_Word) (&check_hlds__check_typeclass__check_hlds__check_typeclass__type_ctor_info_induced_fundep_0), Var_13, FunDeps0_5, &FunDeps1_10);
      Var_16 = mercury__set__init_0_f_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[0]));
      mercury__list__foldl2_6_p_0((MR_Word) (&check_hlds__check_typeclass__check_hlds__check_typeclass__type_ctor_info_induced_fundep_0), (MR_Word) (&check_hlds__check_typeclass_scalar_common_1[9]), (MR_Word) (&check_hlds__check_typeclass_scalar_common_1[10]), (MR_Word) (&check_hlds__check_typeclass_scalar_common_2[13]), FunDeps1_10, ((MR_Box) ((MR_Unsigned) 0U)), &conv4_FunDeps_11, ((MR_Box) (Var_16)), &conv3_NewVars_12);
      FunDeps_11 = ((MR_Word) (conv4_FunDeps_11));
      NewVars_12 = ((MR_Word) (conv3_NewVars_12));
      // direct tailcall eliminated
      ;
      next_value_of_FunDeps0_5 = FunDeps_11;
      next_value_of_NewVars0_6 = NewVars_12;
      next_value_of_Result0_7 = Result1_9;
      FunDeps0_5 = next_value_of_FunDeps0_5;
      NewVars0_6 = next_value_of_NewVars0_6;
      Result0_7 = next_value_of_Result0_7;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
check_hlds__check_typeclass__is_concrete_or_imported_instance_defn_1_p_0(
  MR_Word InstanceDefn_2)
{
  MR_bool succeeded;

  {
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, InstanceDefn_2, (MR_Integer) 8))));

    succeeded = (Var_16 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
    }
  }
  if (!(succeeded))
  {
    MR_Word Var_3;
    MR_Word Var_4 = ((MR_Word) ((MR_hl_field(0, InstanceDefn_2, (MR_Integer) 1))));

    Var_3 = hlds__status__instance_status_is_imported_1_f_0(Var_4);
    succeeded = (Var_3 == (MR_Integer) 1);
  }
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__check_typeclass__is_concrete_instance_defn_1_p_0(
  MR_Word InstanceDefn_2)
{
  MR_bool succeeded;
  MR_Word Var_4 = ((MR_Word) ((MR_hl_field(0, InstanceDefn_2, (MR_Integer) 8))));

  succeeded = (Var_4 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
  }
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__check_typeclass__check_fundeps_for_class_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__check_typeclass__is_concrete_instance_defn_1_p_0(((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__check_typeclass__check_fundeps_for_class_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__check_typeclass__is_concrete_or_imported_instance_defn_1_p_0(((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
check_hlds__check_typeclass__check_fundeps_for_class_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word ClassId_6,
  MR_Word STATE_VARIABLE_Specs_0_16,
  MR_Word * STATE_VARIABLE_Specs_17)
{
  MR_bool succeeded;
  MR_Word ClassTable_8;
  MR_Word ClassDefn_9;
  MR_Word InstanceTable_10;
  MR_Word InstanceDefns_11;
  MR_Word FunDeps_12;
  MR_Word Globals_13;
  MR_Word IntermodOpt_14;
  MR_Word ConcreteInstanceDefns_15;
  MR_Word STATE_VARIABLE_Specs_18_18;
  MR_Box conv0_ClassDefn_9;
  MR_Box conv1_InstanceDefns_11;

  hlds__hlds_module__module_info_get_class_table_2_p_0(ModuleInfo_5, &ClassTable_8);
  mercury__map__lookup_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0), ClassTable_8, ((MR_Box) (ClassId_6)), &conv0_ClassDefn_9);
  ClassDefn_9 = ((MR_Word) (conv0_ClassDefn_9));
  hlds__hlds_module__module_info_get_instance_table_2_p_0(ModuleInfo_5, &InstanceTable_10);
  mercury__map__lookup_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&check_hlds__check_typeclass_scalar_common_1[5]), InstanceTable_10, ((MR_Box) (ClassId_6)), &conv1_InstanceDefns_11);
  InstanceDefns_11 = ((MR_Word) (conv1_InstanceDefns_11));
  FunDeps_12 = ((MR_Word) ((MR_hl_field(0, ClassDefn_9, (MR_Integer) 5))));
  check_hlds__check_typeclass__check_coverage_for_instance_defns_6_p_0(ModuleInfo_5, ClassId_6, InstanceDefns_11, FunDeps_12, STATE_VARIABLE_Specs_0_16, &STATE_VARIABLE_Specs_18_18);
  hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_5, &Globals_13);
  libs__globals__lookup_bool_option_3_p_0(Globals_13, (MR_Integer) 502, &IntermodOpt_14);
  switch (IntermodOpt_14) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      mercury__list__filter_3_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0), (MR_Word) (&check_hlds__check_typeclass_scalar_common_2[11]), InstanceDefns_11, &ConcreteInstanceDefns_15);
      break;
    case (MR_Integer) 1:
      mercury__list__filter_3_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0), (MR_Word) (&check_hlds__check_typeclass_scalar_common_2[12]), InstanceDefns_11, &ConcreteInstanceDefns_15);
      break;
  }
  check_hlds__check_typeclass__check_consistency_6_p_0(ClassId_6, ClassDefn_9, ConcreteInstanceDefns_15, FunDeps_12, STATE_VARIABLE_Specs_18_18, STATE_VARIABLE_Specs_17);
}

static void MR_CALL 
check_hlds__check_typeclass__check_consistency_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Specs_15;

  check_hlds__check_typeclass__check_consistency_pair_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Specs_15);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_15));
}

static void MR_CALL 
check_hlds__check_typeclass__check_consistency_6_p_0(
  MR_Word ClassId_1,
  MR_Word ClassDefn_2,
  MR_Word HeadVar__3_3,
  MR_Word FunDeps_4,
  MR_Word STATE_VARIABLE_Specs_0_5,
  MR_Word * STATE_VARIABLE_Specs_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Specs_6 = STATE_VARIABLE_Specs_0_5;
    else
    {
      MR_Word Instance_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word Instances_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Word Var_21;
      MR_Word STATE_VARIABLE_Specs_22_22;
      MR_Box conv1_STATE_VARIABLE_Specs_22_22;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_5;

      {
        Var_21 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_21, 0) = ((MR_Box) (&check_hlds__check_typeclass_scalar_common_14[0]));
        MR_hl_field(0, Var_21, 1) = ((MR_Box) (check_hlds__check_typeclass__check_consistency_6_p_0_1));
        MR_hl_field(0, Var_21, 2) = ((MR_Box) ((MR_Integer) 4));
        MR_hl_field(0, Var_21, 3) = ((MR_Box) (ClassId_1));
        MR_hl_field(0, Var_21, 4) = ((MR_Box) (ClassDefn_2));
        MR_hl_field(0, Var_21, 5) = ((MR_Box) (FunDeps_4));
        MR_hl_field(0, Var_21, 6) = ((MR_Box) (Instance_15));
      }
      mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0), (MR_Word) (&check_hlds__check_typeclass_scalar_common_1[3]), Var_21, Instances_16, ((MR_Box) (STATE_VARIABLE_Specs_0_5)), &conv1_STATE_VARIABLE_Specs_22_22);
      STATE_VARIABLE_Specs_22_22 = ((MR_Word) (conv1_STATE_VARIABLE_Specs_22_22));
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = Instances_16;
      next_value_of_STATE_VARIABLE_Specs_0_5 = STATE_VARIABLE_Specs_22_22;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_Specs_0_5 = next_value_of_STATE_VARIABLE_Specs_0_5;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__check_typeclass__check_coverage_for_instance_defns_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Specs_25;

  check_hlds__check_typeclass__check_coverage_for_instance_defn_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Specs_25);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_25));
}

static void MR_CALL 
check_hlds__check_typeclass__check_coverage_for_instance_defns_6_p_0(
  MR_Word ModuleInfo_1,
  MR_Word ClassId_2,
  MR_Word HeadVar__3_3,
  MR_Word FunDeps_4,
  MR_Word STATE_VARIABLE_Specs_0_5,
  MR_Word * STATE_VARIABLE_Specs_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Specs_6 = STATE_VARIABLE_Specs_0_5;
    else
    {
      MR_Word InstanceDefn_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word InstanceDefns_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Word Var_21;
      MR_Word STATE_VARIABLE_Specs_22_22;
      MR_Box conv1_STATE_VARIABLE_Specs_22_22;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_5;

      {
        Var_21 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_21, 0) = ((MR_Box) (&check_hlds__check_typeclass_scalar_common_13[0]));
        MR_hl_field(0, Var_21, 1) = ((MR_Box) (check_hlds__check_typeclass__check_coverage_for_instance_defns_6_p_0_1));
        MR_hl_field(0, Var_21, 2) = ((MR_Box) ((MR_Integer) 3));
        MR_hl_field(0, Var_21, 3) = ((MR_Box) (ModuleInfo_1));
        MR_hl_field(0, Var_21, 4) = ((MR_Box) (ClassId_2));
        MR_hl_field(0, Var_21, 5) = ((MR_Box) (InstanceDefn_15));
      }
      mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_fundep_0), (MR_Word) (&check_hlds__check_typeclass_scalar_common_1[3]), Var_21, FunDeps_4, ((MR_Box) (STATE_VARIABLE_Specs_0_5)), &conv1_STATE_VARIABLE_Specs_22_22);
      STATE_VARIABLE_Specs_22_22 = ((MR_Word) (conv1_STATE_VARIABLE_Specs_22_22));
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = InstanceDefns_16;
      next_value_of_STATE_VARIABLE_Specs_0_5 = STATE_VARIABLE_Specs_22_22;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_Specs_0_5 = next_value_of_STATE_VARIABLE_Specs_0_5;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__check_typeclass__check_that_instance_constraints_match_5_p_0(
  MR_Word ClassId_6,
  MR_Word ConcreteInstanceDefn_7,
  MR_Word AbstractInstanceDefn_8,
  MR_Word STATE_VARIABLE_Specs_0_16,
  MR_Word * STATE_VARIABLE_Specs_17)
{
  MR_bool succeeded;
  MR_Word ConcreteTVars_10;
  MR_Word AbstractTVars_11;
  MR_Word ConcreteTVarSet_12;
  MR_Word AbstractTVarSet_13;
  MR_Word ConcreteConstraints_14;
  MR_Word AbstractConstraints_15;
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, ConcreteInstanceDefn_7, (MR_Integer) 4))));
  MR_Word Var_19;

  parse_tree__prog_type_scan__type_vars_in_types_2_p_0(Var_18, &ConcreteTVars_10);
  Var_19 = ((MR_Word) ((MR_hl_field(0, AbstractInstanceDefn_8, (MR_Integer) 4))));
  parse_tree__prog_type_scan__type_vars_in_types_2_p_0(Var_19, &AbstractTVars_11);
  ConcreteTVarSet_12 = ((MR_Word) ((MR_hl_field(0, ConcreteInstanceDefn_7, (MR_Integer) 2))));
  ConcreteConstraints_14 = ((MR_Word) ((MR_hl_field(0, ConcreteInstanceDefn_7, (MR_Integer) 5))));
  AbstractTVarSet_13 = ((MR_Word) ((MR_hl_field(0, AbstractInstanceDefn_8, (MR_Integer) 2))));
  AbstractConstraints_15 = ((MR_Word) ((MR_hl_field(0, AbstractInstanceDefn_8, (MR_Integer) 5))));
  succeeded = check_hlds__check_typeclass__constraints_are_identical_6_p_0(ConcreteTVars_10, ConcreteTVarSet_12, ConcreteConstraints_14, AbstractTVars_11, AbstractTVarSet_13, AbstractConstraints_15);
  if (succeeded)
    *STATE_VARIABLE_Specs_17 = STATE_VARIABLE_Specs_0_16;
  else
    check_hlds__check_typeclass__report_abstract_concrete_constraints_mismatch_5_p_0(ClassId_6, AbstractInstanceDefn_8, ConcreteInstanceDefn_7, STATE_VARIABLE_Specs_0_16, STATE_VARIABLE_Specs_17);
}

static void MR_CALL 
check_hlds__check_typeclass__report_abstract_concrete_constraints_mismatch_5_p_0(
  MR_Word ClassId_6,
  MR_Word AbstractInstanceDefn_7,
  MR_Word ConcreteInstanceDefn_8,
  MR_Word STATE_VARIABLE_Specs_0_17,
  MR_Word * STATE_VARIABLE_Specs_18)
{
  MR_Word ConcreteContext_10 = ((MR_Word) ((MR_hl_field(0, ConcreteInstanceDefn_8, (MR_Integer) 10))));
  MR_Word AbstractContext_11 = ((MR_Word) ((MR_hl_field(0, AbstractInstanceDefn_7, (MR_Integer) 10))));
  MR_Word AbstractPieces_12;
  MR_Word AbstractMsg_13;
  MR_Word ConcreteMsg_15;
  MR_Word Spec_16;
  MR_Word Var_21;
  MR_Word Var_24;
  MR_Word Var_27;
  MR_Word Var_28;
  MR_Word Var_49;
  MR_Word Var_50;

  {
    Var_28 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_28, 0) = ((MR_Box) ((MR_Unsigned) 23U));
    MR_hl_field(3, Var_28, 1) = ((MR_Box) (ClassId_6));
  }
  {
    Var_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_27, 0) = ((MR_Box) (Var_28));
    MR_hl_field(1, Var_27, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__check_typeclass_scalar_common_1[73])));
  }
  {
    Var_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_24, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__check_typeclass_scalar_common_1[56])));
    MR_hl_field(1, Var_24, 1) = ((MR_Box) (Var_27));
  }
  {
    Var_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_21, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__check_typeclass_scalar_common_1[69])));
    MR_hl_field(1, Var_21, 1) = ((MR_Box) (Var_24));
  }
  {
    AbstractPieces_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, AbstractPieces_12, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__check_typeclass_scalar_common_1[68])));
    MR_hl_field(1, AbstractPieces_12, 1) = ((MR_Box) (Var_21));
  }
  {
    AbstractMsg_13 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, AbstractMsg_13, 0) = ((MR_Box) (AbstractContext_11));
    MR_hl_field(0, AbstractMsg_13, 1) = ((MR_Box) (AbstractPieces_12));
  }
  {
    ConcreteMsg_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ConcreteMsg_15, 0) = ((MR_Box) (ConcreteContext_10));
    MR_hl_field(0, ConcreteMsg_15, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__check_typeclass_scalar_common_1[77])));
  }
  {
    Var_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_50, 0) = ((MR_Box) (ConcreteMsg_15));
    MR_hl_field(1, Var_50, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_49, 0) = ((MR_Box) (AbstractMsg_13));
    MR_hl_field(1, Var_49, 1) = ((MR_Box) (Var_50));
  }
  {
    Spec_16 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Spec_16, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.check_typeclass.report_abstract_concrete_constraints_mismatch\'/5"));
    MR_hl_field(2, Spec_16, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(2, Spec_16, 2) = ((MR_Box) ((MR_Unsigned) 52U));
    MR_hl_field(2, Spec_16, 3) = ((MR_Box) (Var_49));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *STATE_VARIABLE_Specs_18 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (Spec_16));
    MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_17));
  }
}

static void MR_CALL 
check_hlds__check_typeclass__compare_instance_defns_by_context_3_p_0(
  MR_Word InstanceDefnA_4,
  MR_Word InstanceDefnB_5,
  MR_Word * Result_6)
{
  MR_Word ContextA_7 = ((MR_Word) ((MR_hl_field(0, InstanceDefnA_4, (MR_Integer) 10))));
  MR_Word ContextB_8 = ((MR_Word) ((MR_hl_field(0, InstanceDefnB_5, (MR_Integer) 10))));

  mercury__term_context____Compare____term_context_0_0(Result_6, ContextA_7, ContextB_8);
}

static void MR_CALL 
check_hlds__check_typeclass__check_for_missing_concrete_instances_in_class_and_vector_5_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv6_STATE_VARIABLE_Specs_17;

  check_hlds__check_typeclass__check_that_instance_constraints_match_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv6_STATE_VARIABLE_Specs_17);
  *wrapper_arg_3 = ((MR_Box) (conv6_STATE_VARIABLE_Specs_17));
}

static void MR_CALL 
check_hlds__check_typeclass__check_for_missing_concrete_instances_in_class_and_vector_5_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_STATE_VARIABLE_Specs_17;

  check_hlds__check_typeclass__check_that_instance_constraints_match_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_Specs_17);
  *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_Specs_17));
}

static void MR_CALL 
check_hlds__check_typeclass__check_for_missing_concrete_instances_in_class_and_vector_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_Result_6;

  check_hlds__check_typeclass__compare_instance_defns_by_context_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_Result_6);
  *wrapper_arg_3 = ((MR_Box) (conv3_Result_6));
}

static void MR_CALL 
check_hlds__check_typeclass__check_for_missing_concrete_instances_in_class_and_vector_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_Result_6;

  check_hlds__check_typeclass__compare_instance_defns_by_context_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_Result_6);
  *wrapper_arg_3 = ((MR_Box) (conv2_Result_6));
}

static void MR_CALL 
check_hlds__check_typeclass__check_for_missing_concrete_instances_in_class_and_vector_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_Result_6;

  check_hlds__check_typeclass__compare_instance_defns_by_context_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_Result_6);
  *wrapper_arg_3 = ((MR_Box) (conv1_Result_6));
}

static void MR_CALL 
check_hlds__check_typeclass__check_for_missing_concrete_instances_in_class_and_vector_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_Result_6;

  check_hlds__check_typeclass__compare_instance_defns_by_context_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_Result_6);
  *wrapper_arg_3 = ((MR_Box) (conv0_Result_6));
}

static void MR_CALL 
check_hlds__check_typeclass__check_for_missing_concrete_instances_in_class_and_vector_5_p_0(
  MR_Word ClassId_6,
  MR_Word HeadVar__2_2,
  MR_Word * PickedInstance_9,
  MR_Word STATE_VARIABLE_Specs_0_36,
  MR_Word * STATE_VARIABLE_Specs_37)
{
  MR_bool succeeded;
  MR_Word VectorInstances_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
  MR_Word LocalAbstracts0_11 = ((MR_Word) ((MR_hl_field(0, VectorInstances_8, (MR_Integer) 0))));
  MR_Word LocalConcretes0_12 = ((MR_Word) ((MR_hl_field(0, VectorInstances_8, (MR_Integer) 1))));
  MR_Word NonLocalAbstracts0_13 = ((MR_Word) ((MR_hl_field(0, VectorInstances_8, (MR_Integer) 2))));
  MR_Word NonLocalConcretes0_14 = ((MR_Word) ((MR_hl_field(0, VectorInstances_8, (MR_Integer) 3))));
  MR_Word LocalAbstracts_15;
  MR_Word LocalConcretes_16;
  MR_Word NonLocalAbstracts_17;
  MR_Word NonLocalConcretes_18;
  MR_Word MaybeLocalConcrete_19;
  MR_Word LocalConcreteSpecs_20;
  MR_Word MaybeNonLocalConcrete_21;
  MR_Word NonLocalConcreteSpecs_22;
  MR_Word MaybeLocalAbstract_23;
  MR_Word MaybeNonLocalAbstract_24;
  MR_Word MaybeLocal_28;
  MR_Word MaybeNonLocal_32;
  MR_Word STATE_VARIABLE_Specs_53_53;
  MR_Word STATE_VARIABLE_Specs_57_57;
  MR_Word Var_58;
  MR_Word STATE_VARIABLE_Specs_60_60;
  MR_Word STATE_VARIABLE_Specs_62_62;
  MR_Word STATE_VARIABLE_Specs_63_63;
  MR_Word Var_25;
  MR_Word LocalConcrete0_26;
  MR_Word NonLocalConcrete0_27;

  mercury__list__sort_3_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0), (MR_Word) (&check_hlds__check_typeclass_scalar_common_2[7]), LocalAbstracts0_11, &LocalAbstracts_15);
  mercury__list__sort_3_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0), (MR_Word) (&check_hlds__check_typeclass_scalar_common_2[8]), LocalConcretes0_12, &LocalConcretes_16);
  mercury__list__sort_3_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0), (MR_Word) (&check_hlds__check_typeclass_scalar_common_2[9]), NonLocalAbstracts0_13, &NonLocalAbstracts_17);
  mercury__list__sort_3_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0), (MR_Word) (&check_hlds__check_typeclass_scalar_common_2[10]), NonLocalConcretes0_14, &NonLocalConcretes_18);
  check_hlds__check_typeclass__report_any_duplicate_instance_defns_in_category_8_p_0(ClassId_6, (MR_Word) ((MR_Unsigned) 0U), (MR_String) "Error", (MR_String) "concrete", LocalConcretes_16, &MaybeLocalConcrete_19, (MR_Word) ((MR_Unsigned) 0U), &LocalConcreteSpecs_20);
  check_hlds__check_typeclass__report_any_duplicate_instance_defns_in_category_8_p_0(ClassId_6, (MR_Word) ((MR_Unsigned) 0U), (MR_String) "Error", (MR_String) "imported concrete", NonLocalConcretes_18, &MaybeNonLocalConcrete_21, (MR_Word) ((MR_Unsigned) 0U), &NonLocalConcreteSpecs_22);
  check_hlds__check_typeclass__report_any_duplicate_instance_defns_in_category_8_p_0(ClassId_6, (MR_Word) ((MR_Unsigned) 4U), (MR_String) "Warning", (MR_String) "abstract", LocalAbstracts_15, &MaybeLocalAbstract_23, STATE_VARIABLE_Specs_0_36, &STATE_VARIABLE_Specs_53_53);
  check_hlds__check_typeclass__report_any_duplicate_instance_defns_in_category_8_p_0(ClassId_6, (MR_Word) ((MR_Unsigned) 4U), (MR_String) "Warning", (MR_String) "imported abstract", NonLocalAbstracts_17, &MaybeNonLocalAbstract_24, STATE_VARIABLE_Specs_53_53, &Var_25);
  Var_58 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), NonLocalConcreteSpecs_22, STATE_VARIABLE_Specs_53_53);
  STATE_VARIABLE_Specs_57_57 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), LocalConcreteSpecs_20, Var_58);
  succeeded = (LocalConcreteSpecs_20 == (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    succeeded = (MaybeLocalConcrete_19 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
      LocalConcrete0_26 = ((MR_Word) ((MR_hl_field(1, MaybeLocalConcrete_19, (MR_Integer) 0))));
  }
  if (succeeded)
  {
    MR_Word Var_59;
    MR_Box conv5_STATE_VARIABLE_Specs_60_60;

    {
      Var_59 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_59, 0) = ((MR_Box) (&check_hlds__check_typeclass_scalar_common_7[2]));
      MR_hl_field(0, Var_59, 1) = ((MR_Box) (check_hlds__check_typeclass__check_for_missing_concrete_instances_in_class_and_vector_5_p_0_5));
      MR_hl_field(0, Var_59, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_59, 3) = ((MR_Box) (ClassId_6));
      MR_hl_field(0, Var_59, 4) = ((MR_Box) (LocalConcrete0_26));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0), (MR_Word) (&check_hlds__check_typeclass_scalar_common_1[3]), Var_59, LocalAbstracts_15, ((MR_Box) (STATE_VARIABLE_Specs_57_57)), &conv5_STATE_VARIABLE_Specs_60_60);
    STATE_VARIABLE_Specs_60_60 = ((MR_Word) (conv5_STATE_VARIABLE_Specs_60_60));
  }
  else
    STATE_VARIABLE_Specs_60_60 = STATE_VARIABLE_Specs_57_57;
  succeeded = (NonLocalConcreteSpecs_22 == (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    succeeded = (MaybeNonLocalConcrete_21 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
      NonLocalConcrete0_27 = ((MR_Word) ((MR_hl_field(1, MaybeNonLocalConcrete_21, (MR_Integer) 0))));
  }
  if (succeeded)
  {
    MR_Word Var_61;
    MR_Box conv7_STATE_VARIABLE_Specs_62_62;

    {
      Var_61 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_61, 0) = ((MR_Box) (&check_hlds__check_typeclass_scalar_common_7[2]));
      MR_hl_field(0, Var_61, 1) = ((MR_Box) (check_hlds__check_typeclass__check_for_missing_concrete_instances_in_class_and_vector_5_p_0_6));
      MR_hl_field(0, Var_61, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_61, 3) = ((MR_Box) (ClassId_6));
      MR_hl_field(0, Var_61, 4) = ((MR_Box) (NonLocalConcrete0_27));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0), (MR_Word) (&check_hlds__check_typeclass_scalar_common_1[3]), Var_61, NonLocalAbstracts_17, ((MR_Box) (STATE_VARIABLE_Specs_60_60)), &conv7_STATE_VARIABLE_Specs_62_62);
    STATE_VARIABLE_Specs_62_62 = ((MR_Word) (conv7_STATE_VARIABLE_Specs_62_62));
    MaybeNonLocal_32 = MaybeNonLocalConcrete_21;
  }
  else
  {
    STATE_VARIABLE_Specs_62_62 = STATE_VARIABLE_Specs_60_60;
    if ((MaybeNonLocalConcrete_21 == (MR_Word) ((MR_Unsigned) 0U)))
      MaybeNonLocal_32 = MaybeNonLocalAbstract_24;
    else
      MaybeNonLocal_32 = MaybeNonLocalConcrete_21;
  }
  if ((MaybeLocalConcrete_19 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((MaybeLocalAbstract_23 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MaybeLocal_28 = (MR_Word) ((MR_Unsigned) 0U);
      STATE_VARIABLE_Specs_63_63 = STATE_VARIABLE_Specs_62_62;
    }
    else
    {
      MR_Word LocalAbstract_29 = ((MR_Word) ((MR_hl_field(1, MaybeLocalAbstract_23, (MR_Integer) 0))));

      check_hlds__check_typeclass__report_abstract_instance_without_concrete_4_p_0(ClassId_6, LocalAbstract_29, STATE_VARIABLE_Specs_62_62, &STATE_VARIABLE_Specs_63_63);
      MaybeLocal_28 = MaybeLocalAbstract_23;
    }
  else
  {
    MR_Word LocalConcrete1_30 = ((MR_Word) ((MR_hl_field(1, MaybeLocalConcrete_19, (MR_Integer) 0))));

    if ((MaybeLocalAbstract_23 == (MR_Word) ((MR_Unsigned) 0U)))
      MaybeLocal_28 = MaybeLocalConcrete_19;
    else
    {
      MR_Word LocalConcrete_31;
      MR_Word Var_64;
      MR_Word Var_65;
      MR_Word LocalAbstract_69 = ((MR_Word) ((MR_hl_field(1, MaybeLocalAbstract_23, (MR_Integer) 0))));
      MR_Word Var_83;
      MR_Word Var_84;
      MR_Word Var_85;
      MR_Word Var_86;
      MR_Word Var_87;
      MR_Word Var_88;
      MR_Word Var_90;
      MR_Word Var_91;
      MR_Word Var_92;
      MR_Word Var_93;

      Var_65 = ((MR_Word) ((MR_hl_field(0, LocalAbstract_69, (MR_Integer) 10))));
      {
        Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_64, 0) = ((MR_Box) (Var_65));
      }
      Var_83 = ((MR_Word) ((MR_hl_field(0, LocalConcrete1_30, (MR_Integer) 0))));
      Var_84 = ((MR_Word) ((MR_hl_field(0, LocalConcrete1_30, (MR_Integer) 1))));
      Var_85 = ((MR_Word) ((MR_hl_field(0, LocalConcrete1_30, (MR_Integer) 2))));
      Var_86 = ((MR_Word) ((MR_hl_field(0, LocalConcrete1_30, (MR_Integer) 3))));
      Var_87 = ((MR_Word) ((MR_hl_field(0, LocalConcrete1_30, (MR_Integer) 4))));
      Var_88 = ((MR_Word) ((MR_hl_field(0, LocalConcrete1_30, (MR_Integer) 5))));
      Var_90 = ((MR_Word) ((MR_hl_field(0, LocalConcrete1_30, (MR_Integer) 7))));
      Var_91 = ((MR_Word) ((MR_hl_field(0, LocalConcrete1_30, (MR_Integer) 8))));
      Var_92 = ((MR_Word) ((MR_hl_field(0, LocalConcrete1_30, (MR_Integer) 9))));
      Var_93 = ((MR_Word) ((MR_hl_field(0, LocalConcrete1_30, (MR_Integer) 10))));
      {
        LocalConcrete_31 = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, LocalConcrete_31, 0) = ((MR_Box) (Var_83));
        MR_hl_field(0, LocalConcrete_31, 1) = ((MR_Box) (Var_84));
        MR_hl_field(0, LocalConcrete_31, 2) = ((MR_Box) (Var_85));
        MR_hl_field(0, LocalConcrete_31, 3) = ((MR_Box) (Var_86));
        MR_hl_field(0, LocalConcrete_31, 4) = ((MR_Box) (Var_87));
        MR_hl_field(0, LocalConcrete_31, 5) = ((MR_Box) (Var_88));
        MR_hl_field(0, LocalConcrete_31, 6) = ((MR_Box) (Var_64));
        MR_hl_field(0, LocalConcrete_31, 7) = ((MR_Box) (Var_90));
        MR_hl_field(0, LocalConcrete_31, 8) = ((MR_Box) (Var_91));
        MR_hl_field(0, LocalConcrete_31, 9) = ((MR_Box) (Var_92));
        MR_hl_field(0, LocalConcrete_31, 10) = ((MR_Box) (Var_93));
      }
      {
        MaybeLocal_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MaybeLocal_28, 0) = ((MR_Box) (LocalConcrete_31));
      }
    }
    STATE_VARIABLE_Specs_63_63 = STATE_VARIABLE_Specs_62_62;
  }
  if ((MaybeLocal_28 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    if ((MaybeNonLocal_32 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.check_typeclass.check_for_missing_concrete_instances_in_class_and_vector\'/5", (MR_String) "no instance left to pick");
        return;
      }
    else
      *PickedInstance_9 = ((MR_Word) ((MR_hl_field(1, MaybeNonLocal_32, (MR_Integer) 0))));
    *STATE_VARIABLE_Specs_37 = STATE_VARIABLE_Specs_63_63;
  }
  else
  {
    *PickedInstance_9 = ((MR_Word) ((MR_hl_field(1, MaybeLocal_28, (MR_Integer) 0))));
    if ((MaybeNonLocal_32 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Specs_37 = STATE_VARIABLE_Specs_63_63;
    else
    {
      MR_Word NonLocal_72 = ((MR_Word) ((MR_hl_field(1, MaybeNonLocal_32, (MR_Integer) 0))));

      check_hlds__check_typeclass__report_local_vs_nonlocal_clash_5_p_0(ClassId_6, *PickedInstance_9, NonLocal_72, STATE_VARIABLE_Specs_63_63, STATE_VARIABLE_Specs_37);
    }
  }
}

static void MR_CALL 
check_hlds__check_typeclass__report_local_vs_nonlocal_clash_5_p_0(
  MR_Word ClassId_6,
  MR_Word LocalInstance_7,
  MR_Word NonLocalInstance_8,
  MR_Word STATE_VARIABLE_Specs_0_18,
  MR_Word * STATE_VARIABLE_Specs_19)
{
  MR_String InstanceName_10;
  MR_Word LocalPieces_11;
  MR_Word LocalContext_12;
  MR_Word LocalMsg_13;
  MR_Word NonLocalContext_15;
  MR_Word NonLocalMsg_16;
  MR_Word Spec_17;
  MR_Word Var_26;
  MR_Word Var_29;
  MR_Word Var_30;
  MR_Word Var_48;
  MR_Word Var_49;

  InstanceName_10 = check_hlds__check_typeclass__instance_name_6_f_0((MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 1, ClassId_6, LocalInstance_7);
  {
    Var_30 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_30, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_30, 1) = ((MR_Box) (InstanceName_10));
  }
  {
    Var_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_29, 0) = ((MR_Box) (Var_30));
    MR_hl_field(1, Var_29, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__check_typeclass_scalar_common_1[88])));
  }
  {
    Var_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_26, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__check_typeclass_scalar_common_1[79])));
    MR_hl_field(1, Var_26, 1) = ((MR_Box) (Var_29));
  }
  {
    LocalPieces_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, LocalPieces_11, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__check_typeclass_scalar_common_1[84])));
    MR_hl_field(1, LocalPieces_11, 1) = ((MR_Box) (Var_26));
  }
  LocalContext_12 = ((MR_Word) ((MR_hl_field(0, LocalInstance_7, (MR_Integer) 10))));
  {
    LocalMsg_13 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, LocalMsg_13, 0) = ((MR_Box) (LocalContext_12));
    MR_hl_field(0, LocalMsg_13, 1) = ((MR_Box) (LocalPieces_11));
  }
  NonLocalContext_15 = ((MR_Word) ((MR_hl_field(0, NonLocalInstance_8, (MR_Integer) 10))));
  {
    NonLocalMsg_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, NonLocalMsg_16, 0) = ((MR_Box) (NonLocalContext_15));
    MR_hl_field(0, NonLocalMsg_16, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__check_typeclass_scalar_common_1[90])));
  }
  {
    Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_49, 0) = ((MR_Box) (NonLocalMsg_16));
    MR_hl_field(1, Var_49, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_48, 0) = ((MR_Box) (LocalMsg_13));
    MR_hl_field(1, Var_48, 1) = ((MR_Box) (Var_49));
  }
  {
    Spec_17 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Spec_17, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.check_typeclass.report_local_vs_nonlocal_clash\'/5"));
    MR_hl_field(2, Spec_17, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(2, Spec_17, 2) = ((MR_Box) ((MR_Unsigned) 52U));
    MR_hl_field(2, Spec_17, 3) = ((MR_Box) (Var_48));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *STATE_VARIABLE_Specs_19 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (Spec_17));
    MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_18));
  }
}

static MR_String MR_CALL 
check_hlds__check_typeclass__instance_name_6_f_0(
  MR_Word WhichTypes_8,
  MR_Word Limit_9,
  MR_Word Quals_10,
  MR_Word SetDefaultFunc_11,
  MR_Word ClassId_12,
  MR_Word InstanceDefn_13)
{
  MR_bool succeeded;
  MR_String InstanceName_14;
  MR_Word ClassName_15 = ((MR_Word) ((MR_hl_field(0, ClassId_12, (MR_Integer) 0))));
  MR_String ClassNameStr_17;
  MR_Word Types0_18;
  MR_Integer NumTypes0_19;
  MR_Word Var_76;
  MR_Word Var_77;
  MR_Integer Var_23;

  ClassNameStr_17 = mdbcomp__sym_name__unqualify_name_1_f_0(ClassName_15);
  Var_77 = ((MR_Word) ((MR_hl_field(0, InstanceDefn_13, (MR_Integer) 3))));
  Var_76 = ((MR_Word) ((MR_hl_field(0, InstanceDefn_13, (MR_Integer) 4))));
  switch (WhichTypes_8) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      Types0_18 = Var_76;
      break;
    case (MR_Integer) 0:
      Types0_18 = Var_77;
      break;
  }
  mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Types0_18, &NumTypes0_19);
  succeeded = (Limit_9 == (MR_Integer) 1);
  if (succeeded)
  {
    Var_23 = (MR_Integer) 5;
    succeeded = (NumTypes0_19 > Var_23);
  }
  if (succeeded)
  {
    MR_String Var_81;
    MR_String Var_89;

    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_3[2]), NumTypes0_19, &Var_81);
    Var_89 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_81);
    InstanceName_14 = mercury__string__f_43_43_2_f_0(ClassNameStr_17, Var_89);
  }
  else
  {
    MR_Word Types_20;
    MR_Word TVarSet_21;
    MR_String TypesStr_22;
    MR_String Var_91;
    MR_String Var_93;

    switch (Quals_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
        parse_tree__prog_type__strip_module_names_from_type_list_4_p_0((MR_Integer) 1, SetDefaultFunc_11, Types0_18, &Types_20);
        break;
      case (MR_Integer) 1:
        parse_tree__prog_type__strip_module_names_from_type_list_4_p_0((MR_Integer) 0, SetDefaultFunc_11, Types0_18, &Types_20);
        break;
      case (MR_Integer) 0:
        Types_20 = Types0_18;
        break;
    }
    TVarSet_21 = ((MR_Word) ((MR_hl_field(0, InstanceDefn_13, (MR_Integer) 2))));
    TypesStr_22 = parse_tree__parse_tree_out_type__mercury_types_to_string_3_f_0(TVarSet_21, (MR_Integer) 0, Types_20);
    Var_91 = mercury__string__f_43_43_2_f_0(TypesStr_22, (MR_String) ")");
    Var_93 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_91);
    InstanceName_14 = mercury__string__f_43_43_2_f_0(ClassNameStr_17, Var_93);
  }
  return InstanceName_14;
}

static void MR_CALL 
check_hlds__check_typeclass__report_abstract_instance_without_concrete_4_p_0(
  MR_Word ClassId_5,
  MR_Word InstanceDefn_6,
  MR_Word STATE_VARIABLE_Specs_0_18,
  MR_Word * STATE_VARIABLE_Specs_19)
{
  MR_Word ClassName_8 = ((MR_Word) ((MR_hl_field(0, ClassId_5, (MR_Integer) 0))));
  MR_String ClassNameString_10;
  MR_Word Types_11;
  MR_Word TVarSet_12;
  MR_String TypesStr_13;
  MR_String InstanceName_14;
  MR_Word Pieces_15;
  MR_Word Context_16;
  MR_Word Spec_17;
  MR_Word Var_29;
  MR_Word Var_32;
  MR_Word Var_33;
  MR_String Var_77;
  MR_String Var_79;

  ClassNameString_10 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ClassName_8);
  TVarSet_12 = ((MR_Word) ((MR_hl_field(0, InstanceDefn_6, (MR_Integer) 2))));
  Types_11 = ((MR_Word) ((MR_hl_field(0, InstanceDefn_6, (MR_Integer) 4))));
  TypesStr_13 = parse_tree__parse_tree_out_type__mercury_types_to_string_3_f_0(TVarSet_12, (MR_Integer) 0, Types_11);
  Var_77 = mercury__string__f_43_43_2_f_0(TypesStr_13, (MR_String) ")");
  Var_79 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_77);
  InstanceName_14 = mercury__string__f_43_43_2_f_0(ClassNameString_10, Var_79);
  {
    Var_33 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_33, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_33, 1) = ((MR_Box) (InstanceName_14));
  }
  {
    Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_32, 0) = ((MR_Box) (Var_33));
    MR_hl_field(1, Var_32, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__check_typeclass_scalar_common_1[83])));
  }
  {
    Var_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_29, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__check_typeclass_scalar_common_1[79])));
    MR_hl_field(1, Var_29, 1) = ((MR_Box) (Var_32));
  }
  {
    Pieces_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Pieces_15, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__check_typeclass_scalar_common_1[78])));
    MR_hl_field(1, Pieces_15, 1) = ((MR_Box) (Var_29));
  }
  Context_16 = ((MR_Word) ((MR_hl_field(0, InstanceDefn_6, (MR_Integer) 10))));
  {
    Spec_17 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Spec_17, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.check_typeclass.report_abstract_instance_without_concrete\'/4"));
    MR_hl_field(0, Spec_17, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Spec_17, 2) = ((MR_Box) ((MR_Unsigned) 52U));
    MR_hl_field(0, Spec_17, 3) = ((MR_Box) (Context_16));
    MR_hl_field(0, Spec_17, 4) = ((MR_Box) (Pieces_15));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *STATE_VARIABLE_Specs_19 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (Spec_17));
    MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_18));
  }
}

static void MR_CALL 
check_hlds__check_typeclass__report_any_duplicate_instance_defns_in_category_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Specs_23;

  check_hlds__check_typeclass__report_duplicate_instance_defn_8_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 7)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Specs_23);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_23));
}

static void MR_CALL 
check_hlds__check_typeclass__report_any_duplicate_instance_defns_in_category_8_p_0(
  MR_Word ClassId_9,
  MR_Word Severity_10,
  MR_String SeverityWord_11,
  MR_String Category_12,
  MR_Word InstanceDefns_13,
  MR_Word * MaybeInstanceDefn_14,
  MR_Word STATE_VARIABLE_Specs_0_19,
  MR_Word * STATE_VARIABLE_Specs_20)
{
  if ((InstanceDefns_13 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *MaybeInstanceDefn_14 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Specs_20 = STATE_VARIABLE_Specs_0_19;
  }
  else
  {
    MR_Word FirstInstanceDefn_16 = ((MR_Word) ((MR_hl_field(1, InstanceDefns_13, (MR_Integer) 0))));
    MR_Word LaterInstanceDefns_17 = ((MR_Word) ((MR_hl_field(1, InstanceDefns_13, (MR_Integer) 1))));
    MR_Word FirstContext_18;
    MR_Word Var_21;
    MR_Box conv1_STATE_VARIABLE_Specs_20;

    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeInstanceDefn_14 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (FirstInstanceDefn_16));
    }
    FirstContext_18 = ((MR_Word) ((MR_hl_field(0, FirstInstanceDefn_16, (MR_Integer) 10))));
    {
      Var_21 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_21, 0) = ((MR_Box) (&check_hlds__check_typeclass_scalar_common_6[2]));
      MR_hl_field(0, Var_21, 1) = ((MR_Box) (check_hlds__check_typeclass__report_any_duplicate_instance_defns_in_category_8_p_0_1));
      MR_hl_field(0, Var_21, 2) = ((MR_Box) ((MR_Integer) 5));
      MR_hl_field(0, Var_21, 3) = ((MR_Box) (ClassId_9));
      MR_hl_field(0, Var_21, 4) = ((MR_Box) (Severity_10));
      MR_hl_field(0, Var_21, 5) = ((MR_Box) (SeverityWord_11));
      MR_hl_field(0, Var_21, 6) = ((MR_Box) (Category_12));
      MR_hl_field(0, Var_21, 7) = ((MR_Box) (FirstContext_18));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0), (MR_Word) (&check_hlds__check_typeclass_scalar_common_1[3]), Var_21, LaterInstanceDefns_17, ((MR_Box) (STATE_VARIABLE_Specs_0_19)), &conv1_STATE_VARIABLE_Specs_20);
    *STATE_VARIABLE_Specs_20 = ((MR_Word) (conv1_STATE_VARIABLE_Specs_20));
  }
}

static void MR_CALL 
check_hlds__check_typeclass__check_for_overlapping_nonidentical_instance_5_p_0(
  MR_Word ClassId_6,
  MR_Word InstanceDefnA_7,
  MR_Word InstanceDefnB_8,
  MR_Word STATE_VARIABLE_Specs_0_40,
  MR_Word * STATE_VARIABLE_Specs_41)
{
  MR_bool succeeded;
  MR_Word TVarSetA_12 = ((MR_Word) ((MR_hl_field(0, InstanceDefnA_7, (MR_Integer) 2))));
  MR_Word TypesA_14 = ((MR_Word) ((MR_hl_field(0, InstanceDefnA_7, (MR_Integer) 4))));
  MR_Word ContextA_20 = ((MR_Word) ((MR_hl_field(0, InstanceDefnA_7, (MR_Integer) 10))));
  MR_Word TVarSetB_23 = ((MR_Word) ((MR_hl_field(0, InstanceDefnB_8, (MR_Integer) 2))));
  MR_Word TypesB_25 = ((MR_Word) ((MR_hl_field(0, InstanceDefnB_8, (MR_Integer) 4))));
  MR_Word ContextB_31 = ((MR_Word) ((MR_hl_field(0, InstanceDefnB_8, (MR_Integer) 10))));
  MR_Word RenamingAB_33;
  MR_Word RenamingBA_35;
  MR_Word _MergedTVarSetAB_32;
  MR_Word _MergedTVarSetBA_34;

  parse_tree__prog_data__tvarset_merge_renaming_4_p_0(TVarSetA_12, TVarSetB_23, &_MergedTVarSetAB_32, &RenamingAB_33);
  parse_tree__prog_data__tvarset_merge_renaming_4_p_0(TVarSetB_23, TVarSetB_23, &_MergedTVarSetBA_34, &RenamingBA_35);
  {
    MR_Word TypesBR_36;
    MR_Word Var_37;

    parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0(RenamingAB_33, TypesB_25, &TypesBR_36);
    succeeded = parse_tree__prog_type_unify__type_list_subsumes_3_p_0(TypesA_14, TypesBR_36, &Var_37);
  }
  if (!(succeeded))
  {
    MR_Word TypesAR_38;
    MR_Word Var_39;

    parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0(RenamingBA_35, TypesA_14, &TypesAR_38);
    succeeded = parse_tree__prog_type_unify__type_list_subsumes_3_p_0(TypesB_25, TypesAR_38, &Var_39);
  }
  if (succeeded)
  {
    MR_Word PiecesA_43;
    MR_Word MsgA_44;
    MR_Word MsgB_46;
    MR_Word Spec_47;
    MR_Word Var_50;
    MR_Word Var_53;
    MR_Word Var_54;
    MR_Word Var_59;
    MR_Word Var_60;

    {
      Var_54 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_54, 0) = ((MR_Box) ((MR_Unsigned) 23U));
      MR_hl_field(3, Var_54, 1) = ((MR_Box) (ClassId_6));
    }
    {
      Var_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_53, 0) = ((MR_Box) (Var_54));
      MR_hl_field(1, Var_53, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__check_typeclass_scalar_common_1[60])));
    }
    {
      Var_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_50, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__check_typeclass_scalar_common_1[56])));
      MR_hl_field(1, Var_50, 1) = ((MR_Box) (Var_53));
    }
    {
      PiecesA_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, PiecesA_43, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__check_typeclass_scalar_common_1[55])));
      MR_hl_field(1, PiecesA_43, 1) = ((MR_Box) (Var_50));
    }
    {
      MsgA_44 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, MsgA_44, 0) = ((MR_Box) (ContextA_20));
      MR_hl_field(0, MsgA_44, 1) = ((MR_Box) (PiecesA_43));
    }
    {
      MsgB_46 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, MsgB_46, 0) = ((MR_Box) (ContextB_31));
      MR_hl_field(0, MsgB_46, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__check_typeclass_scalar_common_1[62])));
    }
    {
      Var_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_60, 0) = ((MR_Box) (MsgB_46));
      MR_hl_field(1, Var_60, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_59 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_59, 0) = ((MR_Box) (MsgA_44));
      MR_hl_field(1, Var_59, 1) = ((MR_Box) (Var_60));
    }
    {
      Spec_47 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Spec_47, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.check_typeclass.report_overlapping_instances\'/5"));
      MR_hl_field(2, Spec_47, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(2, Spec_47, 2) = ((MR_Box) ((MR_Unsigned) 52U));
      MR_hl_field(2, Spec_47, 3) = ((MR_Box) (Var_59));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_41 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Spec_47));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_40));
    }
  }
  else
    *STATE_VARIABLE_Specs_41 = STATE_VARIABLE_Specs_0_40;
}

static void MR_CALL 
check_hlds__check_typeclass__check_for_missing_concrete_instances_in_class_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_PickedInstance_9;
  MR_Word conv0_STATE_VARIABLE_Specs_37;

  check_hlds__check_typeclass__check_for_missing_concrete_instances_in_class_and_vector_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv1_PickedInstance_9, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_Specs_37);
  *wrapper_arg_2 = ((MR_Box) (conv1_PickedInstance_9));
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_37));
}

static void MR_CALL 
check_hlds__check_typeclass__check_for_missing_concrete_instances_in_class_4_p_0(
  MR_Word ClassId_5,
  MR_Word Instances_6,
  MR_Word STATE_VARIABLE_Specs_0_11,
  MR_Word * STATE_VARIABLE_Specs_12)
{
  MR_Word VectorInstancesMap_8;
  MR_Word VectorInstancesAL_9;
  MR_Word PickedInstances_10;
  MR_Word Var_13;
  MR_Word Var_14;
  MR_Word STATE_VARIABLE_Specs_15_15;
  MR_Box conv2_STATE_VARIABLE_Specs_15_15;

  Var_13 = mercury__map__init_0_f_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[7]), (MR_Word) (&check_hlds__check_typeclass__check_hlds__check_typeclass__type_ctor_info_type_vector_instances_0));
  check_hlds__check_typeclass__build_type_vector_instances_map_3_p_0(Instances_6, Var_13, &VectorInstancesMap_8);
  mercury__map__to_sorted_assoc_list_2_p_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[7]), (MR_Word) (&check_hlds__check_typeclass__check_hlds__check_typeclass__type_ctor_info_type_vector_instances_0), VectorInstancesMap_8, &VectorInstancesAL_9);
  {
    Var_14 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_14, 0) = ((MR_Box) (&check_hlds__check_typeclass_scalar_common_7[3]));
    MR_hl_field(0, Var_14, 1) = ((MR_Box) (check_hlds__check_typeclass__check_for_missing_concrete_instances_in_class_4_p_0_1));
    MR_hl_field(0, Var_14, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_14, 3) = ((MR_Box) (ClassId_5));
  }
  mercury__list__map_foldl_5_p_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_2[1]), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0), (MR_Word) (&check_hlds__check_typeclass_scalar_common_1[3]), Var_14, VectorInstancesAL_9, &PickedInstances_10, ((MR_Box) (STATE_VARIABLE_Specs_0_11)), &conv2_STATE_VARIABLE_Specs_15_15);
  STATE_VARIABLE_Specs_15_15 = ((MR_Word) (conv2_STATE_VARIABLE_Specs_15_15));
  check_hlds__check_typeclass__check_for_overlapping_nonidentical_instances_4_p_0(ClassId_5, PickedInstances_10, STATE_VARIABLE_Specs_15_15, STATE_VARIABLE_Specs_12);
}

static void MR_CALL 
check_hlds__check_typeclass__build_type_vector_instances_map_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_VectorInstancesMap_0_2,
  MR_Word * STATE_VARIABLE_VectorInstancesMap_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_VectorInstancesMap_3 = STATE_VARIABLE_VectorInstancesMap_0_2;
    else
    {
      MR_Word InstanceDefn_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word InstanceDefns_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word TypeVector_10 = ((MR_Word) ((MR_hl_field(0, InstanceDefn_7, (MR_Integer) 4))));
      MR_Word InstanceStatus_11 = ((MR_Word) ((MR_hl_field(0, InstanceDefn_7, (MR_Integer) 1))));
      MR_Word IsImported_12;
      MR_Word STATE_VARIABLE_VectorInstancesMap_17_17;
      MR_Word VectorInstances0_13;
      MR_Box conv0_VectorInstances0_13;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_VectorInstancesMap_0_2;

      IsImported_12 = hlds__status__instance_status_is_imported_1_f_0(InstanceStatus_11);
      succeeded = mercury__map__search_3_p_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[7]), (MR_Word) (&check_hlds__check_typeclass__check_hlds__check_typeclass__type_ctor_info_type_vector_instances_0), STATE_VARIABLE_VectorInstancesMap_0_2, ((MR_Box) (TypeVector_10)), &conv0_VectorInstances0_13);
      if (succeeded)
      {
        VectorInstances0_13 = ((MR_Word) (conv0_VectorInstances0_13));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word VectorInstances_14;

        check_hlds__check_typeclass__categorize_and_add_instance_defn_4_p_0(IsImported_12, InstanceDefn_7, VectorInstances0_13, &VectorInstances_14);
        mercury__map__det_update_4_p_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[7]), (MR_Word) (&check_hlds__check_typeclass__check_hlds__check_typeclass__type_ctor_info_type_vector_instances_0), ((MR_Box) (TypeVector_10)), ((MR_Box) (VectorInstances_14)), STATE_VARIABLE_VectorInstancesMap_0_2, &STATE_VARIABLE_VectorInstancesMap_17_17);
      }
      else
      {
        MR_Word VectorInstances_25;

        check_hlds__check_typeclass__categorize_and_add_instance_defn_4_p_0(IsImported_12, InstanceDefn_7, (MR_Word) (&check_hlds__check_typeclass_scalar_common_4[0]), &VectorInstances_25);
        mercury__map__det_insert_4_p_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[7]), (MR_Word) (&check_hlds__check_typeclass__check_hlds__check_typeclass__type_ctor_info_type_vector_instances_0), ((MR_Box) (TypeVector_10)), ((MR_Box) (VectorInstances_25)), STATE_VARIABLE_VectorInstancesMap_0_2, &STATE_VARIABLE_VectorInstancesMap_17_17);
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = InstanceDefns_8;
      next_value_of_STATE_VARIABLE_VectorInstancesMap_0_2 = STATE_VARIABLE_VectorInstancesMap_17_17;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_VectorInstancesMap_0_2 = next_value_of_STATE_VARIABLE_VectorInstancesMap_0_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__check_typeclass__categorize_and_add_instance_defn_4_p_0(
  MR_Word IsImported_5,
  MR_Word InstanceDefn_6,
  MR_Word VectorInstances0_7,
  MR_Word * VectorInstances_8)
{
  MR_Word Body_9 = ((MR_Word) ((MR_hl_field(0, InstanceDefn_6, (MR_Integer) 8))));
  MR_Word Var_66 = ((MR_Word) ((MR_hl_field(0, VectorInstances0_7, (MR_Integer) 3))));
  MR_Word Var_67 = ((MR_Word) ((MR_hl_field(0, VectorInstances0_7, (MR_Integer) 2))));
  MR_Word Var_68 = ((MR_Word) ((MR_hl_field(0, VectorInstances0_7, (MR_Integer) 1))));
  MR_Word Var_69 = ((MR_Word) ((MR_hl_field(0, VectorInstances0_7, (MR_Integer) 0))));

  switch (IsImported_5) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      if ((Body_9 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_16;

        {
          Var_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_16, 0) = ((MR_Box) (InstanceDefn_6));
          MR_hl_field(1, Var_16, 1) = ((MR_Box) (Var_69));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          *VectorInstances_8 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_16));
          MR_hl_field(0, base, 1) = ((MR_Box) (Var_68));
          MR_hl_field(0, base, 2) = ((MR_Box) (Var_67));
          MR_hl_field(0, base, 3) = ((MR_Box) (Var_66));
        }
      }
      else
      {
        MR_Word Var_17;

        {
          Var_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_17, 0) = ((MR_Box) (InstanceDefn_6));
          MR_hl_field(1, Var_17, 1) = ((MR_Box) (Var_68));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          *VectorInstances_8 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_69));
          MR_hl_field(0, base, 1) = ((MR_Box) (Var_17));
          MR_hl_field(0, base, 2) = ((MR_Box) (Var_67));
          MR_hl_field(0, base, 3) = ((MR_Box) (Var_66));
        }
      }
      break;
    case (MR_Integer) 1:
      if ((Body_9 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_18;

        {
          Var_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_18, 0) = ((MR_Box) (InstanceDefn_6));
          MR_hl_field(1, Var_18, 1) = ((MR_Box) (Var_67));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          *VectorInstances_8 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_69));
          MR_hl_field(0, base, 1) = ((MR_Box) (Var_68));
          MR_hl_field(0, base, 2) = ((MR_Box) (Var_18));
          MR_hl_field(0, base, 3) = ((MR_Box) (Var_66));
        }
      }
      else
      {
        MR_Word Var_19;

        {
          Var_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_19, 0) = ((MR_Box) (InstanceDefn_6));
          MR_hl_field(1, Var_19, 1) = ((MR_Box) (Var_66));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          *VectorInstances_8 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_69));
          MR_hl_field(0, base, 1) = ((MR_Box) (Var_68));
          MR_hl_field(0, base, 2) = ((MR_Box) (Var_67));
          MR_hl_field(0, base, 3) = ((MR_Box) (Var_19));
        }
      }
      break;
  }
}

static void MR_CALL 
check_hlds__check_typeclass__check_for_overlapping_nonidentical_instances_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Specs_41;

  check_hlds__check_typeclass__check_for_overlapping_nonidentical_instance_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Specs_41);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_41));
}

static void MR_CALL 
check_hlds__check_typeclass__check_for_overlapping_nonidentical_instances_4_p_0(
  MR_Word ClassId_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_Specs_0_3,
  MR_Word * STATE_VARIABLE_Specs_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Specs_4 = STATE_VARIABLE_Specs_0_3;
    else
    {
      MR_Word HeadInstanceDefn_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word TailInstanceDefns_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_15;
      MR_Word STATE_VARIABLE_Specs_16_16;
      MR_Box conv1_STATE_VARIABLE_Specs_16_16;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_3;

      {
        Var_15 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_15, 0) = ((MR_Box) (&check_hlds__check_typeclass_scalar_common_7[2]));
        MR_hl_field(0, Var_15, 1) = ((MR_Box) (check_hlds__check_typeclass__check_for_overlapping_nonidentical_instances_4_p_0_1));
        MR_hl_field(0, Var_15, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(0, Var_15, 3) = ((MR_Box) (ClassId_1));
        MR_hl_field(0, Var_15, 4) = ((MR_Box) (HeadInstanceDefn_10));
      }
      mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0), (MR_Word) (&check_hlds__check_typeclass_scalar_common_1[3]), Var_15, TailInstanceDefns_11, ((MR_Box) (STATE_VARIABLE_Specs_0_3)), &conv1_STATE_VARIABLE_Specs_16_16);
      STATE_VARIABLE_Specs_16_16 = ((MR_Word) (conv1_STATE_VARIABLE_Specs_16_16));
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = TailInstanceDefns_11;
      next_value_of_STATE_VARIABLE_Specs_0_3 = STATE_VARIABLE_Specs_16_16;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_Specs_0_3 = next_value_of_STATE_VARIABLE_Specs_0_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__check_typeclass__generate_instance_method_procs_for_class_instance_14_p_0(
  MR_Word ClassId_15,
  MR_Word ClassTVarSet_16,
  MR_Word ClassParamTVars_17,
  MR_Word SuperClasses_18,
  MR_Word ClassInterface_19,
  MR_Word ClassMethodInfos_20,
  MR_Word STATE_VARIABLE_InstanceDefn_0_40,
  MR_Word * STATE_VARIABLE_InstanceDefn_41,
  MR_Word STATE_VARIABLE_ModuleInfo_0_42,
  MR_Word * STATE_VARIABLE_ModuleInfo_43,
  MR_Word STATE_VARIABLE_QualInfo_0_44,
  MR_Word * STATE_VARIABLE_QualInfo_45,
  MR_Word STATE_VARIABLE_Specs_0_46,
  MR_Word * STATE_VARIABLE_Specs_47)
{
  MR_Word InstanceBody_33 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_InstanceDefn_0_40, (MR_Integer) 8))));
  MR_Word InstanceContext_35 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_InstanceDefn_0_40, (MR_Integer) 10))));
  MR_Word STATE_VARIABLE_Specs_61_61;
  MR_Word STATE_VARIABLE_InstanceDefn_62_62;

  if ((InstanceBody_33 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    STATE_VARIABLE_InstanceDefn_62_62 = STATE_VARIABLE_InstanceDefn_0_40;
    *STATE_VARIABLE_ModuleInfo_43 = STATE_VARIABLE_ModuleInfo_0_42;
    *STATE_VARIABLE_QualInfo_45 = STATE_VARIABLE_QualInfo_0_44;
    STATE_VARIABLE_Specs_61_61 = STATE_VARIABLE_Specs_0_46;
  }
  else
  {
    MR_Word InstanceMethods_36 = ((MR_Word) ((MR_hl_field(1, InstanceBody_33, (MR_Integer) 0))));

    if ((ClassInterface_19 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Pieces_37;
      MR_Word Spec_38;
      MR_Word Var_50;
      MR_Word Var_51;

      {
        Var_51 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_51, 0) = ((MR_Box) ((MR_Unsigned) 24U));
        MR_hl_field(3, Var_51, 1) = ((MR_Box) (ClassId_15));
      }
      {
        Var_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_50, 0) = ((MR_Box) (Var_51));
        MR_hl_field(1, Var_50, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__check_typeclass_scalar_common_1[28])));
      }
      {
        Pieces_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Pieces_37, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__check_typeclass_scalar_common_1[29])));
        MR_hl_field(1, Pieces_37, 1) = ((MR_Box) (Var_50));
      }
      {
        Spec_38 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Spec_38, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.check_typeclass.generate_instance_method_procs_for_class_instance\'/14"));
        MR_hl_field(0, Spec_38, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, Spec_38, 2) = ((MR_Box) ((MR_Unsigned) 52U));
        MR_hl_field(0, Spec_38, 3) = ((MR_Box) (InstanceContext_35));
        MR_hl_field(0, Spec_38, 4) = ((MR_Box) (Pieces_37));
      }
      {
        STATE_VARIABLE_Specs_61_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, STATE_VARIABLE_Specs_61_61, 0) = ((MR_Box) (Spec_38));
        MR_hl_field(1, STATE_VARIABLE_Specs_61_61, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_46));
      }
      STATE_VARIABLE_InstanceDefn_62_62 = STATE_VARIABLE_InstanceDefn_0_40;
      *STATE_VARIABLE_ModuleInfo_43 = STATE_VARIABLE_ModuleInfo_0_42;
      *STATE_VARIABLE_QualInfo_45 = STATE_VARIABLE_QualInfo_0_44;
    }
    else
    {
      MR_Word InstanceMethodMap_63;
      MR_Word LeftOverInstanceMethodMap_64;
      MR_Word InstanceMethodsCord_65;
      MR_Word InstanceMethodInfosCord_66;
      MR_Word UnknownInstanceMethods_67;
      MR_Word Var_70;
      MR_Word STATE_VARIABLE_Specs_37_71;
      MR_Word Var_72;
      MR_Word Var_73;
      MR_Word STATE_VARIABLE_Specs_42_74;
      MR_Word STATE_VARIABLE_InstanceDefn_43_75;
      MR_Word Var_76;
      MR_Word Var_77;
      MR_Word Var_78;
      MR_Word Var_79;
      MR_Word Var_80;
      MR_Word Var_81;
      MR_Word Var_82;
      MR_Word Var_83;
      MR_Word Var_84;
      MR_Word Var_85;
      MR_Word Var_86;
      MR_Word Var_87;
      MR_Word Var_88;
      MR_Word Var_90;
      MR_Word Var_91;
      MR_Word Var_92;
      MR_Word Var_93;
      MR_Word Var_94;
      MR_Word Var_95;
      MR_Word Var_96;
      MR_Word Var_97;
      MR_Word Var_98;
      MR_Word Var_100;
      MR_Word Var_101;

      Var_70 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pred_pf_name_arity_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_instance_method_0));
      check_hlds__check_typeclass__build_instance_method_map_7_p_0(ClassId_15, STATE_VARIABLE_InstanceDefn_0_40, InstanceMethods_36, Var_70, &InstanceMethodMap_63, STATE_VARIABLE_Specs_0_46, &STATE_VARIABLE_Specs_37_71);
      Var_72 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_instance_method_0));
      Var_73 = mercury__cord__init_0_f_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_method_info_0));
      check_hlds__check_typeclass__generate_instance_method_procs_for_preds_16_p_0(ClassId_15, ClassParamTVars_17, STATE_VARIABLE_InstanceDefn_0_40, ClassMethodInfos_20, InstanceMethodMap_63, &LeftOverInstanceMethodMap_64, Var_72, &InstanceMethodsCord_65, Var_73, &InstanceMethodInfosCord_66, STATE_VARIABLE_ModuleInfo_0_42, STATE_VARIABLE_ModuleInfo_43, STATE_VARIABLE_QualInfo_0_44, STATE_VARIABLE_QualInfo_45, STATE_VARIABLE_Specs_37_71, &STATE_VARIABLE_Specs_42_74);
      Var_77 = mercury__cord__list_1_f_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_method_info_0), InstanceMethodInfosCord_66);
      {
        Var_76 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_76, 0) = ((MR_Box) (Var_77));
      }
      Var_80 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_InstanceDefn_0_40, (MR_Integer) 0))));
      Var_81 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_InstanceDefn_0_40, (MR_Integer) 1))));
      Var_82 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_InstanceDefn_0_40, (MR_Integer) 2))));
      Var_83 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_InstanceDefn_0_40, (MR_Integer) 3))));
      Var_84 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_InstanceDefn_0_40, (MR_Integer) 4))));
      Var_85 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_InstanceDefn_0_40, (MR_Integer) 5))));
      Var_86 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_InstanceDefn_0_40, (MR_Integer) 6))));
      Var_87 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_InstanceDefn_0_40, (MR_Integer) 7))));
      Var_88 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_InstanceDefn_0_40, (MR_Integer) 8))));
      Var_90 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_InstanceDefn_0_40, (MR_Integer) 10))));
      {
        STATE_VARIABLE_InstanceDefn_43_75 = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, STATE_VARIABLE_InstanceDefn_43_75, 0) = ((MR_Box) (Var_80));
        MR_hl_field(0, STATE_VARIABLE_InstanceDefn_43_75, 1) = ((MR_Box) (Var_81));
        MR_hl_field(0, STATE_VARIABLE_InstanceDefn_43_75, 2) = ((MR_Box) (Var_82));
        MR_hl_field(0, STATE_VARIABLE_InstanceDefn_43_75, 3) = ((MR_Box) (Var_83));
        MR_hl_field(0, STATE_VARIABLE_InstanceDefn_43_75, 4) = ((MR_Box) (Var_84));
        MR_hl_field(0, STATE_VARIABLE_InstanceDefn_43_75, 5) = ((MR_Box) (Var_85));
        MR_hl_field(0, STATE_VARIABLE_InstanceDefn_43_75, 6) = ((MR_Box) (Var_86));
        MR_hl_field(0, STATE_VARIABLE_InstanceDefn_43_75, 7) = ((MR_Box) (Var_87));
        MR_hl_field(0, STATE_VARIABLE_InstanceDefn_43_75, 8) = ((MR_Box) (Var_88));
        MR_hl_field(0, STATE_VARIABLE_InstanceDefn_43_75, 9) = ((MR_Box) (Var_76));
        MR_hl_field(0, STATE_VARIABLE_InstanceDefn_43_75, 10) = ((MR_Box) (Var_90));
      }
      Var_79 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_instance_method_0), InstanceMethodsCord_65);
      {
        Var_78 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_78, 0) = ((MR_Box) (Var_79));
      }
      Var_91 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_InstanceDefn_43_75, (MR_Integer) 0))));
      Var_92 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_InstanceDefn_43_75, (MR_Integer) 1))));
      Var_93 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_InstanceDefn_43_75, (MR_Integer) 2))));
      Var_94 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_InstanceDefn_43_75, (MR_Integer) 3))));
      Var_95 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_InstanceDefn_43_75, (MR_Integer) 4))));
      Var_96 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_InstanceDefn_43_75, (MR_Integer) 5))));
      Var_97 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_InstanceDefn_43_75, (MR_Integer) 6))));
      Var_98 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_InstanceDefn_43_75, (MR_Integer) 7))));
      Var_100 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_InstanceDefn_43_75, (MR_Integer) 9))));
      Var_101 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_InstanceDefn_43_75, (MR_Integer) 10))));
      {
        STATE_VARIABLE_InstanceDefn_62_62 = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, STATE_VARIABLE_InstanceDefn_62_62, 0) = ((MR_Box) (Var_91));
        MR_hl_field(0, STATE_VARIABLE_InstanceDefn_62_62, 1) = ((MR_Box) (Var_92));
        MR_hl_field(0, STATE_VARIABLE_InstanceDefn_62_62, 2) = ((MR_Box) (Var_93));
        MR_hl_field(0, STATE_VARIABLE_InstanceDefn_62_62, 3) = ((MR_Box) (Var_94));
        MR_hl_field(0, STATE_VARIABLE_InstanceDefn_62_62, 4) = ((MR_Box) (Var_95));
        MR_hl_field(0, STATE_VARIABLE_InstanceDefn_62_62, 5) = ((MR_Box) (Var_96));
        MR_hl_field(0, STATE_VARIABLE_InstanceDefn_62_62, 6) = ((MR_Box) (Var_97));
        MR_hl_field(0, STATE_VARIABLE_InstanceDefn_62_62, 7) = ((MR_Box) (Var_98));
        MR_hl_field(0, STATE_VARIABLE_InstanceDefn_62_62, 8) = ((MR_Box) (Var_78));
        MR_hl_field(0, STATE_VARIABLE_InstanceDefn_62_62, 9) = ((MR_Box) (Var_100));
        MR_hl_field(0, STATE_VARIABLE_InstanceDefn_62_62, 10) = ((MR_Box) (Var_101));
      }
      mercury__map__values_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pred_pf_name_arity_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_instance_method_0), LeftOverInstanceMethodMap_64, &UnknownInstanceMethods_67);
      if ((UnknownInstanceMethods_67 == (MR_Word) ((MR_Unsigned) 0U)))
        STATE_VARIABLE_Specs_61_61 = STATE_VARIABLE_Specs_42_74;
      else
      {
        MR_Word HeadUnknownInstanceMethod_68 = ((MR_Word) ((MR_hl_field(1, UnknownInstanceMethods_67, (MR_Integer) 0))));
        MR_Word TailUnknownInstanceMethods_69 = ((MR_Word) ((MR_hl_field(1, UnknownInstanceMethods_67, (MR_Integer) 1))));

        check_hlds__check_typeclass__report_unknown_instance_methods_6_p_0(ClassId_15, STATE_VARIABLE_InstanceDefn_62_62, HeadUnknownInstanceMethod_68, TailUnknownInstanceMethods_69, STATE_VARIABLE_Specs_42_74, &STATE_VARIABLE_Specs_61_61);
      }
    }
  }
  check_hlds__check_typeclass__check_instance_for_superclass_conformance_9_p_0(*STATE_VARIABLE_ModuleInfo_43, ClassId_15, ClassTVarSet_16, ClassParamTVars_17, SuperClasses_18, STATE_VARIABLE_InstanceDefn_62_62, STATE_VARIABLE_InstanceDefn_41, STATE_VARIABLE_Specs_61_61, STATE_VARIABLE_Specs_47);
}

static MR_Box MR_CALL 
check_hlds__check_typeclass__report_unknown_instance_methods_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_Pieces_4;

  conv0_Pieces_4 = check_hlds__check_typeclass__method_name_pieces_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_Pieces_4));
  return wrapper_arg_2;
}

static void MR_CALL 
check_hlds__check_typeclass__report_unknown_instance_methods_6_p_0(
  MR_Word ClassId_7,
  MR_Word InstanceDefn_8,
  MR_Word HeadMethod_9,
  MR_Word TailMethods_10,
  MR_Word STATE_VARIABLE_Specs_0_27,
  MR_Word * STATE_VARIABLE_Specs_28)
{
  MR_Word PrefixPieces_12;
  MR_Word SelectedContext_16;
  MR_Word Pieces_22;
  MR_Word Spec_26;

  PrefixPieces_12 = check_hlds__check_typeclass__in_instance_decl_pieces_3_f_0((MR_Integer) 1, ClassId_7, InstanceDefn_8);
  if ((TailMethods_10 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word MethodName_13 = ((MR_Word) ((MR_hl_field(0, HeadMethod_9, (MR_Integer) 0))));
    MR_Word PredOrFunc_17;
    MR_Word MethodSymName_18;
    MR_Word UserArity_19;
    MR_Integer UserArityInt_20;
    MR_Word SNA_21;
    MR_Word Var_30;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Word Var_35;
    MR_Word Var_38;
    MR_Word Var_39;

    SelectedContext_16 = ((MR_Word) ((MR_hl_field(0, HeadMethod_9, (MR_Integer) 2))));
    PredOrFunc_17 = ((MR_Unsigned) ((MR_hl_field(0, MethodName_13, (MR_Integer) 0))) & (MR_Integer) 1);
    MethodSymName_18 = ((MR_Word) ((MR_hl_field(0, MethodName_13, (MR_Integer) 1))));
    UserArity_19 = ((MR_Word) ((MR_hl_field(0, MethodName_13, (MR_Integer) 2))));
    UserArityInt_20 = (MR_Integer) (UserArity_19);
    {
      SNA_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, SNA_21, 0) = ((MR_Box) (MethodSymName_18));
      MR_hl_field(0, SNA_21, 1) = ((MR_Box) (UserArityInt_20));
    }
    {
      Var_34 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_34, 0) = ((MR_Box) ((MR_Unsigned) 28U));
      MR_hl_field(3, Var_34, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_17));
    }
    {
      Var_39 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_39, 0) = ((MR_Box) ((MR_Unsigned) 12U));
      MR_hl_field(3, Var_39, 1) = ((MR_Box) (SNA_21));
    }
    {
      Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_38, 0) = ((MR_Box) (Var_39));
      MR_hl_field(1, Var_38, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__check_typeclass_scalar_common_1[28])));
    }
    {
      Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_35, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__check_typeclass_scalar_common_1[45])));
      MR_hl_field(1, Var_35, 1) = ((MR_Box) (Var_38));
    }
    {
      Var_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_33, 0) = ((MR_Box) (Var_34));
      MR_hl_field(1, Var_33, 1) = ((MR_Box) (Var_35));
    }
    {
      Var_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_30, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__check_typeclass_scalar_common_1[44])));
      MR_hl_field(1, Var_30, 1) = ((MR_Box) (Var_33));
    }
    Pieces_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), PrefixPieces_12, Var_30);
  }
  else
  {
    MR_Word MethodPieces_25;
    MR_Word Var_47;
    MR_Word Var_48;
    MR_Word Var_56;

    SelectedContext_16 = ((MR_Word) ((MR_hl_field(0, InstanceDefn_8, (MR_Integer) 10))));
    {
      Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_47, 0) = ((MR_Box) (HeadMethod_9));
      MR_hl_field(1, Var_47, 1) = ((MR_Box) (TailMethods_10));
    }
    MethodPieces_25 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_instance_method_0), (MR_Word) (&check_hlds__check_typeclass_scalar_common_1[12]), (MR_Word) (&check_hlds__check_typeclass_scalar_common_2[6]), Var_47);
    Var_56 = parse_tree__error_spec__component_list_to_line_pieces_2_f_0(MethodPieces_25, (MR_Word) (MR_mkword(1, &check_hlds__check_typeclass_scalar_common_1[52])));
    Var_48 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__check_typeclass_scalar_common_1[49])), Var_56);
    Pieces_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), PrefixPieces_12, Var_48);
  }
  {
    Spec_26 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Spec_26, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.check_typeclass.report_unknown_instance_methods\'/6"));
    MR_hl_field(0, Spec_26, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Spec_26, 2) = ((MR_Box) ((MR_Unsigned) 52U));
    MR_hl_field(0, Spec_26, 3) = ((MR_Box) (SelectedContext_16));
    MR_hl_field(0, Spec_26, 4) = ((MR_Box) (Pieces_22));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *STATE_VARIABLE_Specs_28 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (Spec_26));
    MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_27));
  }
}

static void MR_CALL 
check_hlds__check_typeclass__check_instance_for_superclass_conformance_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word ClassId_11,
  MR_Word ClassTVarSet_12,
  MR_Word ClassVars0_13,
  MR_Word ProgSuperClasses0_14,
  MR_Word InstanceDefn0_15,
  MR_Word * InstanceDefn_16,
  MR_Word STATE_VARIABLE_Specs_0_48,
  MR_Word * STATE_VARIABLE_Specs_49)
{
  MR_Word ModuleName_18 = ((MR_Word) ((MR_hl_field(0, InstanceDefn0_15, (MR_Integer) 0))));
  MR_Word Status_19 = ((MR_Word) ((MR_hl_field(0, InstanceDefn0_15, (MR_Integer) 1))));
  MR_Word InstanceTVarSet0_20 = ((MR_Word) ((MR_hl_field(0, InstanceDefn0_15, (MR_Integer) 2))));
  MR_Word OriginalTypes_21 = ((MR_Word) ((MR_hl_field(0, InstanceDefn0_15, (MR_Integer) 3))));
  MR_Word InstanceTypes_22 = ((MR_Word) ((MR_hl_field(0, InstanceDefn0_15, (MR_Integer) 4))));
  MR_Word InstanceProgConstraints_23 = ((MR_Word) ((MR_hl_field(0, InstanceDefn0_15, (MR_Integer) 5))));
  MR_Word MaybeSubsumedContext_24 = ((MR_Word) ((MR_hl_field(0, InstanceDefn0_15, (MR_Integer) 6))));
  MR_Word Proofs0_25 = ((MR_Word) ((MR_hl_field(0, InstanceDefn0_15, (MR_Integer) 7))));
  MR_Word Body_26 = ((MR_Word) ((MR_hl_field(0, InstanceDefn0_15, (MR_Integer) 8))));
  MR_Word Interface_27 = ((MR_Word) ((MR_hl_field(0, InstanceDefn0_15, (MR_Integer) 9))));
  MR_Word Context_28 = ((MR_Word) ((MR_hl_field(0, InstanceDefn0_15, (MR_Integer) 10))));
  MR_Word InstanceTVarSet1_29;
  MR_Word Renaming_30;
  MR_Word ProgSuperClasses_31;
  MR_Word ClassVars_32;
  MR_Word TypeSubst_33;
  MR_Word ClassTable_34;
  MR_Word InstanceTable_35;
  MR_Word SuperClasses_36;
  MR_Word InstanceConstraints_37;
  MR_Word Constraints0_38;
  MR_Word ConstraintMap0_39;
  MR_Word InstanceTVarSet2_41;
  MR_Word Proofs1_42;
  MR_Word Constraints_44;
  MR_Word UnprovenConstraints_45;
  MR_Word Var_40;
  MR_Word Var_43;

  parse_tree__prog_data__tvarset_merge_renaming_4_p_0(InstanceTVarSet0_20, ClassTVarSet_12, &InstanceTVarSet1_29, &Renaming_30);
  parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_list_3_p_0(Renaming_30, ProgSuperClasses0_14, &ProgSuperClasses_31);
  parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_list_3_p_0(Renaming_30, ClassVars0_13, &ClassVars_32);
  mercury__map__from_corresponding_lists_3_p_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ClassVars_32, InstanceTypes_22, &TypeSubst_33);
  hlds__hlds_module__module_info_get_class_table_2_p_0(ModuleInfo_10, &ClassTable_34);
  hlds__hlds_module__module_info_get_instance_table_2_p_0(ModuleInfo_10, &InstanceTable_35);
  hlds__hlds_class__init_hlds_constraint_list_2_p_0(ProgSuperClasses_31, &SuperClasses_36);
  hlds__hlds_class__init_hlds_constraint_list_2_p_0(InstanceProgConstraints_23, &InstanceConstraints_37);
  hlds__hlds_class__make_hlds_constraints_5_p_0(ClassTable_34, InstanceTVarSet1_29, SuperClasses_36, InstanceConstraints_37, &Constraints0_38);
  mercury__map__init_1_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_id_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), &ConstraintMap0_39);
  check_hlds__typeclasses__reduce_context_by_rule_application_13_p_0(ClassTable_34, InstanceTable_35, ClassVars_32, TypeSubst_33, &Var_40, InstanceTVarSet1_29, &InstanceTVarSet2_41, Proofs0_25, &Proofs1_42, ConstraintMap0_39, &Var_43, Constraints0_38, &Constraints_44);
  UnprovenConstraints_45 = ((MR_Word) ((MR_hl_field(0, Constraints_44, (MR_Integer) 0))));
  if ((UnprovenConstraints_45 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
      *InstanceDefn_16 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (ModuleName_18));
      MR_hl_field(0, base, 1) = ((MR_Box) (Status_19));
      MR_hl_field(0, base, 2) = ((MR_Box) (InstanceTVarSet2_41));
      MR_hl_field(0, base, 3) = ((MR_Box) (OriginalTypes_21));
      MR_hl_field(0, base, 4) = ((MR_Box) (InstanceTypes_22));
      MR_hl_field(0, base, 5) = ((MR_Box) (InstanceProgConstraints_23));
      MR_hl_field(0, base, 6) = ((MR_Box) (MaybeSubsumedContext_24));
      MR_hl_field(0, base, 7) = ((MR_Box) (Proofs1_42));
      MR_hl_field(0, base, 8) = ((MR_Box) (Body_26));
      MR_hl_field(0, base, 9) = ((MR_Box) (Interface_27));
      MR_hl_field(0, base, 10) = ((MR_Box) (Context_28));
    }
    *STATE_VARIABLE_Specs_49 = STATE_VARIABLE_Specs_0_48;
  }
  else
  {
    check_hlds__check_typeclass__report_unsatistfied_superclass_constraint_6_p_0(ClassId_11, InstanceDefn0_15, ClassTVarSet_12, UnprovenConstraints_45, STATE_VARIABLE_Specs_0_48, STATE_VARIABLE_Specs_49);
    *InstanceDefn_16 = InstanceDefn0_15;
  }
}

static void MR_CALL 
check_hlds__check_typeclass__report_unsatistfied_superclass_constraint_6_p_0(
  MR_Word ClassId_7,
  MR_Word InstanceDefn_8,
  MR_Word ClassTVarSet_9,
  MR_Word UnprovenConstraints_10,
  MR_Word STATE_VARIABLE_Specs_0_17,
  MR_Word * STATE_VARIABLE_Specs_18)
{
  MR_Word PrefixPieces_12;
  MR_String ConstraintsStr_13;
  MR_Word Pieces_14;
  MR_Word Context_15;
  MR_Word Spec_16;
  MR_Word Var_20;
  MR_Word Var_23;
  MR_Word Var_24;
  MR_String Var_25;
  MR_Word Var_28;
  MR_Word Var_31;
  MR_Word Var_33;
  MR_Word Var_34;
  MR_Box conv0_Var_25;

  PrefixPieces_12 = check_hlds__check_typeclass__in_instance_decl_pieces_3_f_0((MR_Integer) 1, ClassId_7, InstanceDefn_8);
  if ((UnprovenConstraints_10 == (MR_Word) ((MR_Unsigned) 0U)))
    ConstraintsStr_13 = (MR_String) "";
  else
  {
    MR_Word C_59 = ((MR_Word) ((MR_hl_field(1, UnprovenConstraints_10, (MR_Integer) 0))));
    MR_Word Cs_60 = ((MR_Word) ((MR_hl_field(1, UnprovenConstraints_10, (MR_Integer) 1))));
    MR_Word P_62;
    MR_String PString_63;
    MR_Word TailStrings_64;
    MR_Word Strings_65;
    MR_Word Var_68;
    MR_Word Var_69;

    hlds__hlds_class__retrieve_prog_constraint_2_p_0(C_59, &P_62);
    PString_63 = parse_tree__parse_tree_out_type__mercury_constraint_to_string_3_f_0(ClassTVarSet_9, (MR_Integer) 0, P_62);
    check_hlds__check_typeclass__constraint_list_to_comma_strings_3_p_0(ClassTVarSet_9, Cs_60, &TailStrings_64);
    {
      Var_69 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_69, 0) = ((MR_Box) ((MR_String) "\'"));
      MR_hl_field(1, Var_69, 1) = ((MR_Box) (TailStrings_64));
    }
    {
      Var_68 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_68, 0) = ((MR_Box) (PString_63));
      MR_hl_field(1, Var_68, 1) = ((MR_Box) (Var_69));
    }
    {
      Strings_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Strings_65, 0) = ((MR_Box) ((MR_String) "\140"));
      MR_hl_field(1, Strings_65, 1) = ((MR_Box) (Var_68));
    }
    ConstraintsStr_13 = mercury__string__append_list_1_f_0(Strings_65);
  }
  conv0_Var_25 = parse_tree__error_spec__choose_number_3_f_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), UnprovenConstraints_10, ((MR_Box) ((MR_String) "constraint is")), ((MR_Box) ((MR_String) "constraints are")));
  Var_25 = ((MR_String) (conv0_Var_25));
  {
    Var_24 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_24, 0) = ((MR_Box) ((MR_Unsigned) 6U));
    MR_hl_field(3, Var_24, 1) = ((MR_Box) (Var_25));
  }
  {
    Var_34 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_34, 0) = ((MR_Box) ((MR_Unsigned) 6U));
    MR_hl_field(3, Var_34, 1) = ((MR_Box) (ConstraintsStr_13));
  }
  {
    Var_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_33, 0) = ((MR_Box) (Var_34));
    MR_hl_field(1, Var_33, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__check_typeclass_scalar_common_1[28])));
  }
  {
    Var_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_31, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(1, Var_31, 1) = ((MR_Box) (Var_33));
  }
  {
    Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_28, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__check_typeclass_scalar_common_1[54])));
    MR_hl_field(1, Var_28, 1) = ((MR_Box) (Var_31));
  }
  {
    Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_23, 0) = ((MR_Box) (Var_24));
    MR_hl_field(1, Var_23, 1) = ((MR_Box) (Var_28));
  }
  {
    Var_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_20, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__check_typeclass_scalar_common_1[53])));
    MR_hl_field(1, Var_20, 1) = ((MR_Box) (Var_23));
  }
  Pieces_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), PrefixPieces_12, Var_20);
  Context_15 = ((MR_Word) ((MR_hl_field(0, InstanceDefn_8, (MR_Integer) 10))));
  {
    Spec_16 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Spec_16, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.check_typeclass.report_unsatistfied_superclass_constraint\'/6"));
    MR_hl_field(0, Spec_16, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Spec_16, 2) = ((MR_Box) ((MR_Unsigned) 52U));
    MR_hl_field(0, Spec_16, 3) = ((MR_Box) (Context_15));
    MR_hl_field(0, Spec_16, 4) = ((MR_Box) (Pieces_14));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *STATE_VARIABLE_Specs_18 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (Spec_16));
    MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_17));
  }
}

static void MR_CALL 
check_hlds__check_typeclass__constraint_list_to_comma_strings_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word C_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Cs_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word P_9;
    MR_String PString_10;
    MR_Word TailStrings_11;
    MR_Word Var_14;
    MR_Word Var_15;

    hlds__hlds_class__retrieve_prog_constraint_2_p_0(C_6, &P_9);
    PString_10 = parse_tree__parse_tree_out_type__mercury_constraint_to_string_3_f_0(HeadVar__1_1, (MR_Integer) 0, P_9);
    check_hlds__check_typeclass__constraint_list_to_comma_strings_3_p_0(HeadVar__1_1, Cs_7, &TailStrings_11);
    {
      Var_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_15, 0) = ((MR_Box) ((MR_String) "\'"));
      MR_hl_field(1, Var_15, 1) = ((MR_Box) (TailStrings_11));
    }
    {
      Var_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_14, 0) = ((MR_Box) (PString_10));
      MR_hl_field(1, Var_14, 1) = ((MR_Box) (Var_15));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) ((MR_String) ", \140"));
      MR_hl_field(1, base, 1) = ((MR_Box) (Var_14));
    }
  }
}

static void MR_CALL 
check_hlds__check_typeclass__generate_instance_method_procs_for_preds_16_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_InstanceMethodMap_0_5,
  MR_Word * STATE_VARIABLE_InstanceMethodMap_6,
  MR_Word STATE_VARIABLE_InstanceMethodsCord_0_7,
  MR_Word * STATE_VARIABLE_InstanceMethodsCord_8,
  MR_Word STATE_VARIABLE_InstanceMethodInfosCord_0_9,
  MR_Word * STATE_VARIABLE_InstanceMethodInfosCord_10,
  MR_Word STATE_VARIABLE_ModuleInfo_0_11,
  MR_Word * STATE_VARIABLE_ModuleInfo_12,
  MR_Word STATE_VARIABLE_QualInfo_0_13,
  MR_Word * STATE_VARIABLE_QualInfo_14,
  MR_Word STATE_VARIABLE_Specs_0_15,
  MR_Word * STATE_VARIABLE_Specs_16)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Specs_16 = STATE_VARIABLE_Specs_0_15;
      *STATE_VARIABLE_QualInfo_14 = STATE_VARIABLE_QualInfo_0_13;
      *STATE_VARIABLE_ModuleInfo_12 = STATE_VARIABLE_ModuleInfo_0_11;
      *STATE_VARIABLE_InstanceMethodInfosCord_10 = STATE_VARIABLE_InstanceMethodInfosCord_0_9;
      *STATE_VARIABLE_InstanceMethodsCord_8 = STATE_VARIABLE_InstanceMethodsCord_0_7;
      *STATE_VARIABLE_InstanceMethodMap_6 = STATE_VARIABLE_InstanceMethodMap_0_5;
    }
    else
    {
      MR_Word HeadClassMethodInfo_41 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
      MR_Word TailClassMethodInfos_42 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
      MR_Word MethodName_50 = ((MR_Word) ((MR_hl_field(0, HeadClassMethodInfo_41, (MR_Integer) 1))));
      MR_Word OrigClassPredProcId_51 = ((MR_Word) ((MR_hl_field(0, HeadClassMethodInfo_41, (MR_Integer) 2))));
      MR_Word ClassPredId_53 = ((MR_Word) ((MR_hl_field(0, OrigClassPredProcId_51, (MR_Integer) 0))));
      MR_Word TailCurClassMethodInfos_55;
      MR_Word OtherClassMethodInfos_56;
      MR_Word STATE_VARIABLE_ModuleInfo_73_73;
      MR_Word STATE_VARIABLE_QualInfo_74_74;
      MR_Word STATE_VARIABLE_Specs_75_75;
      MR_Word STATE_VARIABLE_InstanceMethodsCord_76_76;
      MR_Word STATE_VARIABLE_InstanceMethodInfosCord_77_77;
      MR_Word STATE_VARIABLE_InstanceMethodMap_80_80;
      MR_Word InstanceMethod_57;
      MR_Word STATE_VARIABLE_InstanceMethodMap_72_72;
      MR_Box conv0_InstanceMethod_57;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Word next_value_of_STATE_VARIABLE_InstanceMethodMap_0_5;
      MR_Word next_value_of_STATE_VARIABLE_InstanceMethodsCord_0_7;
      MR_Word next_value_of_STATE_VARIABLE_InstanceMethodInfosCord_0_9;
      MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_11;
      MR_Word next_value_of_STATE_VARIABLE_QualInfo_0_13;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_15;

      check_hlds__check_typeclass__get_other_class_method_procs_4_p_0(MethodName_50, TailClassMethodInfos_42, &TailCurClassMethodInfos_55, &OtherClassMethodInfos_56);
      succeeded = mercury__map__remove_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pred_pf_name_arity_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_instance_method_0), ((MR_Box) (MethodName_50)), &conv0_InstanceMethod_57, STATE_VARIABLE_InstanceMethodMap_0_5, &STATE_VARIABLE_InstanceMethodMap_72_72);
      if (succeeded)
      {
        InstanceMethod_57 = ((MR_Word) (conv0_InstanceMethod_57));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word ClassMethodInfos_58;
        MR_Word InstanceMethodInfos_59;
        MR_Word Var_78;

        STATE_VARIABLE_InstanceMethodMap_80_80 = STATE_VARIABLE_InstanceMethodMap_72_72;
        {
          ClassMethodInfos_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, ClassMethodInfos_58, 0) = ((MR_Box) (HeadClassMethodInfo_41));
          MR_hl_field(1, ClassMethodInfos_58, 1) = ((MR_Box) (TailCurClassMethodInfos_55));
        }
        check_hlds__check_typeclass__generate_instance_method_pred_and_procs_13_p_0(HeadVar__1_1, HeadVar__2_2, ClassPredId_53, HeadVar__3_3, InstanceMethod_57, ClassMethodInfos_58, &InstanceMethodInfos_59, STATE_VARIABLE_ModuleInfo_0_11, &STATE_VARIABLE_ModuleInfo_73_73, STATE_VARIABLE_QualInfo_0_13, &STATE_VARIABLE_QualInfo_74_74, STATE_VARIABLE_Specs_0_15, &STATE_VARIABLE_Specs_75_75);
        mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_instance_method_0), ((MR_Box) (InstanceMethod_57)), STATE_VARIABLE_InstanceMethodsCord_0_7, &STATE_VARIABLE_InstanceMethodsCord_76_76);
        Var_78 = mercury__cord__from_list_1_f_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_method_info_0), InstanceMethodInfos_59);
        STATE_VARIABLE_InstanceMethodInfosCord_77_77 = mercury__cord__f_43_43_2_f_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_method_info_0), STATE_VARIABLE_InstanceMethodInfosCord_0_9, Var_78);
      }
      else
      {
        check_hlds__check_typeclass__report_undefined_method_5_p_0(HeadVar__1_1, HeadVar__3_3, MethodName_50, STATE_VARIABLE_Specs_0_15, &STATE_VARIABLE_Specs_75_75);
        STATE_VARIABLE_QualInfo_74_74 = STATE_VARIABLE_QualInfo_0_13;
        STATE_VARIABLE_ModuleInfo_73_73 = STATE_VARIABLE_ModuleInfo_0_11;
        STATE_VARIABLE_InstanceMethodInfosCord_77_77 = STATE_VARIABLE_InstanceMethodInfosCord_0_9;
        STATE_VARIABLE_InstanceMethodsCord_76_76 = STATE_VARIABLE_InstanceMethodsCord_0_7;
        STATE_VARIABLE_InstanceMethodMap_80_80 = STATE_VARIABLE_InstanceMethodMap_0_5;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__4_4 = OtherClassMethodInfos_56;
      next_value_of_STATE_VARIABLE_InstanceMethodMap_0_5 = STATE_VARIABLE_InstanceMethodMap_80_80;
      next_value_of_STATE_VARIABLE_InstanceMethodsCord_0_7 = STATE_VARIABLE_InstanceMethodsCord_76_76;
      next_value_of_STATE_VARIABLE_InstanceMethodInfosCord_0_9 = STATE_VARIABLE_InstanceMethodInfosCord_77_77;
      next_value_of_STATE_VARIABLE_ModuleInfo_0_11 = STATE_VARIABLE_ModuleInfo_73_73;
      next_value_of_STATE_VARIABLE_QualInfo_0_13 = STATE_VARIABLE_QualInfo_74_74;
      next_value_of_STATE_VARIABLE_Specs_0_15 = STATE_VARIABLE_Specs_75_75;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      STATE_VARIABLE_InstanceMethodMap_0_5 = next_value_of_STATE_VARIABLE_InstanceMethodMap_0_5;
      STATE_VARIABLE_InstanceMethodsCord_0_7 = next_value_of_STATE_VARIABLE_InstanceMethodsCord_0_7;
      STATE_VARIABLE_InstanceMethodInfosCord_0_9 = next_value_of_STATE_VARIABLE_InstanceMethodInfosCord_0_9;
      STATE_VARIABLE_ModuleInfo_0_11 = next_value_of_STATE_VARIABLE_ModuleInfo_0_11;
      STATE_VARIABLE_QualInfo_0_13 = next_value_of_STATE_VARIABLE_QualInfo_0_13;
      STATE_VARIABLE_Specs_0_15 = next_value_of_STATE_VARIABLE_Specs_0_15;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__check_typeclass__report_undefined_method_5_p_0(
  MR_Word ClassId_6,
  MR_Word InstanceDefn_7,
  MR_Word MethodName_8,
  MR_Word STATE_VARIABLE_Specs_0_14,
  MR_Word * STATE_VARIABLE_Specs_15)
{
  MR_Word PrefixPieces_10;
  MR_Word PFMethodNamePieces_11;
  MR_Word Pieces_12;
  MR_Word Spec_13;
  MR_Word Var_17;
  MR_Word Var_18;
  MR_Word Var_30;
  MR_Word PredOrFunc_42;
  MR_Word MethodSymName_43;
  MR_Word UserArity_44;
  MR_Integer UserArityInt_45;
  MR_Word SNA_46;
  MR_Word Var_47;
  MR_Word Var_48;
  MR_Word Var_51;
  MR_Word Var_52;

  PrefixPieces_10 = check_hlds__check_typeclass__in_instance_decl_pieces_3_f_0((MR_Integer) 1, ClassId_6, InstanceDefn_7);
  PredOrFunc_42 = ((MR_Unsigned) ((MR_hl_field(0, MethodName_8, (MR_Integer) 0))) & (MR_Integer) 1);
  MethodSymName_43 = ((MR_Word) ((MR_hl_field(0, MethodName_8, (MR_Integer) 1))));
  UserArity_44 = ((MR_Word) ((MR_hl_field(0, MethodName_8, (MR_Integer) 2))));
  UserArityInt_45 = (MR_Integer) (UserArity_44);
  {
    SNA_46 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, SNA_46, 0) = ((MR_Box) (MethodSymName_43));
    MR_hl_field(0, SNA_46, 1) = ((MR_Box) (UserArityInt_45));
  }
  {
    Var_47 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_47, 0) = ((MR_Box) ((MR_Unsigned) 28U));
    MR_hl_field(3, Var_47, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_42));
  }
  {
    Var_52 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_52, 0) = ((MR_Box) ((MR_Unsigned) 12U));
    MR_hl_field(3, Var_52, 1) = ((MR_Box) (SNA_46));
  }
  {
    Var_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_51, 0) = ((MR_Box) (Var_52));
    MR_hl_field(1, Var_51, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_48, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__check_typeclass_scalar_common_1[175])));
    MR_hl_field(1, Var_48, 1) = ((MR_Box) (Var_51));
  }
  {
    PFMethodNamePieces_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, PFMethodNamePieces_11, 0) = ((MR_Box) (Var_47));
    MR_hl_field(1, PFMethodNamePieces_11, 1) = ((MR_Box) (Var_48));
  }
  {
    Var_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_18, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__check_typeclass_scalar_common_1[43])));
    MR_hl_field(1, Var_18, 1) = ((MR_Box) (PFMethodNamePieces_11));
  }
  Var_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_18, (MR_Word) (MR_mkword(1, &check_hlds__check_typeclass_scalar_common_1[28])));
  Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), PrefixPieces_10, Var_17);
  Var_30 = ((MR_Word) ((MR_hl_field(0, InstanceDefn_7, (MR_Integer) 10))));
  {
    Spec_13 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Spec_13, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.check_typeclass.report_undefined_method\'/5"));
    MR_hl_field(0, Spec_13, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Spec_13, 2) = ((MR_Box) ((MR_Unsigned) 52U));
    MR_hl_field(0, Spec_13, 3) = ((MR_Box) (Var_30));
    MR_hl_field(0, Spec_13, 4) = ((MR_Box) (Pieces_12));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *STATE_VARIABLE_Specs_15 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (Spec_13));
    MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_14));
  }
}

static void MR_CALL 
check_hlds__check_typeclass__generate_instance_method_pred_and_procs_13_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_LambdaHeadVar__2_149;
  MR_Word conv0_LambdaHeadVar__4_151;

  check_hlds__check_typeclass__IntroducedFrom__pred__generate_instance_method_pred_and_procs__966__1_9_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 7)))), ((MR_Word) (wrapper_arg_1)), &conv1_LambdaHeadVar__2_149, ((MR_Word) (wrapper_arg_3)), &conv0_LambdaHeadVar__4_151);
  *wrapper_arg_2 = ((MR_Box) (conv1_LambdaHeadVar__2_149));
  *wrapper_arg_4 = ((MR_Box) (conv0_LambdaHeadVar__4_151));
}

static void MR_CALL 
check_hlds__check_typeclass__generate_instance_method_pred_and_procs_13_p_0(
  MR_Word ClassId_14,
  MR_Word ClassVars_15,
  MR_Word ClassPredId_16,
  MR_Word InstanceDefn_17,
  MR_Word InstanceMethod_18,
  MR_Word ClassMethodInfos_19,
  MR_Word * InstanceMethodInfos_20,
  MR_Word STATE_VARIABLE_ModuleInfo_0_126,
  MR_Word * STATE_VARIABLE_ModuleInfo_127,
  MR_Word STATE_VARIABLE_QualInfo_0_128,
  MR_Word * STATE_VARIABLE_QualInfo_129,
  MR_Word STATE_VARIABLE_Specs_0_130,
  MR_Word * STATE_VARIABLE_Specs_131)
{
  MR_Word ClassPredInfo_24;
  MR_Word TVarSet0_25;
  MR_Word ExistQVars0_26;
  MR_Word ClassContext0_28;
  MR_Word Markers0_29;
  MR_Word UnivCs0_30;
  MR_Word ExistCs_31;
  MR_Word UnivCs_33;
  MR_Word ClassMethodClassContext0_34;
  MR_Word ClassPredModule_35;
  MR_String ClassPredMethodName_36;
  MR_Word ClassPredMethodSymName_37;
  MR_Word PredOrFunc_38;
  MR_Word PredFormArity_39;
  MR_Word UserArity_40;
  MR_Word InstanceTypes0_41;
  MR_String InstancePredName_42;
  MR_Word InstanceModuleName_43;
  MR_Word InstanceStatus0_44;
  MR_Word InstanceTVarSet_45;
  MR_Word InstanceConstraints0_47;
  MR_Word UnsubstArgTypes_53;
  MR_Word InstanceProcDefn_55;
  MR_Word Context_56;
  MR_Word TVarSet1_57;
  MR_Word Renaming_58;
  MR_Word InstanceTypes1_59;
  MR_Word InstanceConstraints1_60;
  MR_Word TypeSubst_61;
  MR_Word ArgTypes1_62;
  MR_Word ClassMethodClassContext1_63;
  MR_Word ArgTVars_64;
  MR_Word MethodContextTVars_65;
  MR_Word InstanceTVars_66;
  MR_Word VarsToKeep0_67;
  MR_Word VarsToKeep_68;
  MR_Word TVarSet2_69;
  MR_Word SquashSubst_70;
  MR_Word ArgTypes_71;
  MR_Word ClassMethodClassContext_72;
  MR_Word ExistQVars_73;
  MR_Word InstanceTypes_74;
  MR_Word InstanceConstraints_75;
  MR_Word UnivConstraints1_76;
  MR_Word ExistConstraints_77;
  MR_Word UnivConstraints_78;
  MR_Word ClassContext_79;
  MR_Word Proofs_80;
  MR_Word ConstraintMap_81;
  MR_Word Markers1_82;
  MR_Word Markers2_83;
  MR_Word Markers_85;
  MR_Word IsImported_87;
  MR_Word InstanceStatus_88;
  MR_Word ClausesInfo_89;
  MR_Word TVarSet_90;
  MR_Word InstanceMethodConstraints_91;
  MR_Word ClassMethodPFSymNameArity_92;
  MR_Word PredOrigin_93;
  MR_Word VarNameRemap_94;
  MR_Word OldImportStatus_95;
  MR_Word PredStatus_96;
  MR_Word PredInfo0_99;
  MR_Word PredInfo1_100;
  MR_Word PredInfo2_101;
  MR_Word PredTable1_102;
  MR_Word InstancePredId_103;
  MR_Word PredTable_104;
  MR_Word ClassProcTable_105;
  MR_Word AddProc_106;
  MR_Word PredInfo_125;
  MR_Word Var_134;
  MR_Word Var_135;
  MR_Word Var_136;
  MR_Word STATE_VARIABLE_ModuleInfo_142_142;
  MR_Word Var_145;
  MR_Word STATE_VARIABLE_ModuleInfo_147_147;
  MR_Box conv2_PredInfo_125;

  hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_126, ClassPredId_16, &ClassPredInfo_24);
  hlds__hlds_pred__pred_info_get_arg_types_4_p_0(ClassPredInfo_24, &TVarSet0_25, &ExistQVars0_26, &UnsubstArgTypes_53);
  hlds__hlds_pred__pred_info_get_class_context_2_p_0(ClassPredInfo_24, &ClassContext0_28);
  hlds__hlds_pred__pred_info_get_markers_2_p_0(ClassPredInfo_24, &Markers0_29);
  UnivCs0_30 = ((MR_Word) ((MR_hl_field(0, ClassContext0_28, (MR_Integer) 0))));
  ExistCs_31 = ((MR_Word) ((MR_hl_field(0, ClassContext0_28, (MR_Integer) 1))));
  if ((UnivCs0_30 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.check_typeclass.generate_instance_method_pred_and_procs\'/13", (MR_String) "no constraint on class method");
      return;
    }
  else
    UnivCs_33 = ((MR_Word) ((MR_hl_field(1, UnivCs0_30, (MR_Integer) 1))));
  {
    ClassMethodClassContext0_34 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ClassMethodClassContext0_34, 0) = ((MR_Box) (UnivCs_33));
    MR_hl_field(0, ClassMethodClassContext0_34, 1) = ((MR_Box) (ExistCs_31));
  }
  ClassPredModule_35 = hlds__hlds_pred__pred_info_module_1_f_0(ClassPredInfo_24);
  ClassPredMethodName_36 = hlds__hlds_pred__pred_info_name_1_f_0(ClassPredInfo_24);
  {
    ClassPredMethodSymName_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, ClassPredMethodSymName_37, 0) = ((MR_Box) (ClassPredModule_35));
    MR_hl_field(1, ClassPredMethodSymName_37, 1) = ((MR_Box) (ClassPredMethodName_36));
  }
  PredOrFunc_38 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(ClassPredInfo_24);
  PredFormArity_39 = hlds__hlds_pred__pred_info_pred_form_arity_1_f_0(ClassPredInfo_24);
  parse_tree__prog_util__user_arity_pred_form_arity_3_p_1(PredOrFunc_38, &UserArity_40, PredFormArity_39);
  InstanceModuleName_43 = ((MR_Word) ((MR_hl_field(0, InstanceDefn_17, (MR_Integer) 0))));
  InstanceStatus0_44 = ((MR_Word) ((MR_hl_field(0, InstanceDefn_17, (MR_Integer) 1))));
  InstanceTVarSet_45 = ((MR_Word) ((MR_hl_field(0, InstanceDefn_17, (MR_Integer) 2))));
  InstanceTypes0_41 = ((MR_Word) ((MR_hl_field(0, InstanceDefn_17, (MR_Integer) 4))));
  InstanceConstraints0_47 = ((MR_Word) ((MR_hl_field(0, InstanceDefn_17, (MR_Integer) 5))));
  hlds__pred_name__make_instance_method_pred_name_5_p_0(ClassId_14, ClassPredMethodSymName_37, UserArity_40, InstanceTypes0_41, &InstancePredName_42);
  InstanceProcDefn_55 = ((MR_Word) ((MR_hl_field(0, InstanceMethod_18, (MR_Integer) 1))));
  Context_56 = ((MR_Word) ((MR_hl_field(0, InstanceMethod_18, (MR_Integer) 2))));
  parse_tree__prog_data__tvarset_merge_renaming_4_p_0(TVarSet0_25, InstanceTVarSet_45, &TVarSet1_57, &Renaming_58);
  parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0(Renaming_58, InstanceTypes0_41, &InstanceTypes1_59);
  parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_list_3_p_0(Renaming_58, InstanceConstraints0_47, &InstanceConstraints1_60);
  mercury__map__from_corresponding_lists_3_p_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ClassVars_15, InstanceTypes1_59, &TypeSubst_61);
  parse_tree__prog_type_subst__apply_subst_to_type_list_3_p_0(TypeSubst_61, UnsubstArgTypes_53, &ArgTypes1_62);
  parse_tree__prog_type_subst__apply_subst_to_univ_exist_constraints_3_p_0(TypeSubst_61, ClassMethodClassContext0_34, &ClassMethodClassContext1_63);
  parse_tree__prog_type_scan__type_vars_in_types_2_p_0(ArgTypes1_62, &ArgTVars_64);
  parse_tree__prog_type_scan__univ_exist_constraints_get_tvars_2_p_0(ClassMethodClassContext1_63, &MethodContextTVars_65);
  parse_tree__prog_type_scan__constraint_list_get_tvars_2_p_0(InstanceConstraints1_60, &InstanceTVars_66);
  {
    Var_136 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_136, 0) = ((MR_Box) (InstanceTVars_66));
    MR_hl_field(1, Var_136, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_135 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_135, 0) = ((MR_Box) (MethodContextTVars_65));
    MR_hl_field(1, Var_135, 1) = ((MR_Box) (Var_136));
  }
  {
    Var_134 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_134, 0) = ((MR_Box) (ArgTVars_64));
    MR_hl_field(1, Var_134, 1) = ((MR_Box) (Var_135));
  }
  mercury__list__condense_2_p_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[0]), Var_134, &VarsToKeep0_67);
  mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[0]), VarsToKeep0_67, &VarsToKeep_68);
  mercury__varset__squash_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TVarSet1_57, VarsToKeep_68, &TVarSet2_69, &SquashSubst_70);
  parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0(SquashSubst_70, ArgTypes1_62, &ArgTypes_71);
  parse_tree__prog_type_subst__apply_variable_renaming_to_univ_exist_constraints_3_p_0(SquashSubst_70, ClassMethodClassContext1_63, &ClassMethodClassContext_72);
  parse_tree__prog_type__apply_partial_map_to_list_3_p_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[0]), SquashSubst_70, ExistQVars0_26, &ExistQVars_73);
  parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0(SquashSubst_70, InstanceTypes1_59, &InstanceTypes_74);
  parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_list_3_p_0(SquashSubst_70, InstanceConstraints1_60, &InstanceConstraints_75);
  UnivConstraints1_76 = ((MR_Word) ((MR_hl_field(0, ClassMethodClassContext_72, (MR_Integer) 0))));
  ExistConstraints_77 = ((MR_Word) ((MR_hl_field(0, ClassMethodClassContext_72, (MR_Integer) 1))));
  mercury__list__append_3_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), InstanceConstraints_75, UnivConstraints1_76, &UnivConstraints_78);
  {
    ClassContext_79 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ClassContext_79, 0) = ((MR_Box) (UnivConstraints_78));
    MR_hl_field(0, ClassContext_79, 1) = ((MR_Box) (ExistConstraints_77));
  }
  mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_proof_0), &Proofs_80);
  mercury__map__init_1_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_id_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), &ConstraintMap_81);
  hlds__hlds_pred__remove_marker_3_p_0((MR_Integer) 11, Markers0_29, &Markers1_82);
  hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 12, Markers1_82, &Markers2_83);
  if (((MR_tag((MR_Word) InstanceProcDefn_55)) == (MR_Integer) 1))
    Markers_85 = Markers2_83;
  else
    hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 13, Markers2_83, &Markers_85);
  IsImported_87 = hlds__status__instance_status_is_imported_1_f_0(InstanceStatus0_44);
  switch (IsImported_87) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      InstanceStatus_88 = InstanceStatus0_44;
      break;
    case (MR_Integer) 1:
      InstanceStatus_88 = (MR_Word) (((MR_Box) ((MR_Unsigned) 0U)));
      break;
  }
  hlds__make_hlds__instance_method_clauses__produce_instance_method_clauses_15_p_0(InstanceProcDefn_55, PredOrFunc_38, ArgTypes_71, Markers_85, Context_56, InstanceStatus_88, &ClausesInfo_89, TVarSet2_69, &TVarSet_90, STATE_VARIABLE_ModuleInfo_0_126, &STATE_VARIABLE_ModuleInfo_142_142, STATE_VARIABLE_QualInfo_0_128, STATE_VARIABLE_QualInfo_129, STATE_VARIABLE_Specs_0_130, STATE_VARIABLE_Specs_131);
  {
    InstanceMethodConstraints_91 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, InstanceMethodConstraints_91, 0) = ((MR_Box) (ClassId_14));
    MR_hl_field(0, InstanceMethodConstraints_91, 1) = ((MR_Box) (InstanceTypes_74));
    MR_hl_field(0, InstanceMethodConstraints_91, 2) = ((MR_Box) (InstanceConstraints_75));
    MR_hl_field(0, InstanceMethodConstraints_91, 3) = ((MR_Box) (ClassMethodClassContext_72));
  }
  {
    ClassMethodPFSymNameArity_92 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ClassMethodPFSymNameArity_92, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_38));
    MR_hl_field(0, ClassMethodPFSymNameArity_92, 1) = ((MR_Box) (ClassPredMethodSymName_37));
    MR_hl_field(0, ClassMethodPFSymNameArity_92, 2) = ((MR_Box) (UserArity_40));
  }
  {
    Var_145 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_145, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_145, 1) = ((MR_Box) (ClassMethodPFSymNameArity_92));
    MR_hl_field(3, Var_145, 2) = ((MR_Box) (InstanceMethodConstraints_91));
  }
  {
    PredOrigin_93 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, PredOrigin_93, 0) = ((MR_Box) (Var_145));
  }
  mercury__map__init_1_p_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[6]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), &VarNameRemap_94);
  OldImportStatus_95 = (MR_Word) (InstanceStatus_88);
  PredStatus_96 = (MR_Word) (OldImportStatus_95);
  hlds__hlds_pred__pred_info_init_19_p_0(PredOrFunc_38, InstanceModuleName_43, InstancePredName_42, PredFormArity_39, Context_56, PredOrigin_93, PredStatus_96, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) (&check_hlds__check_typeclass_scalar_common_3[1]), Markers_85, ArgTypes_71, TVarSet_90, ExistQVars_73, ClassContext_79, Proofs_80, ConstraintMap_81, ClausesInfo_89, VarNameRemap_94, &PredInfo0_99);
  hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(ClausesInfo_89, PredInfo0_99, &PredInfo1_100);
  hlds__hlds_pred__pred_info_set_instance_method_arg_types_3_p_0(UnsubstArgTypes_53, PredInfo1_100, &PredInfo2_101);
  hlds__hlds_module__module_info_get_predicate_table_2_p_0(STATE_VARIABLE_ModuleInfo_142_142, &PredTable1_102);
  hlds__pred_table__predicate_table_insert_4_p_0(PredInfo2_101, &InstancePredId_103, PredTable1_102, &PredTable_104);
  hlds__hlds_module__module_info_set_predicate_table_3_p_0(PredTable_104, STATE_VARIABLE_ModuleInfo_142_142, &STATE_VARIABLE_ModuleInfo_147_147);
  hlds__hlds_pred__pred_info_get_proc_table_2_p_0(ClassPredInfo_24, &ClassProcTable_105);
  {
    AddProc_106 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, AddProc_106, 0) = ((MR_Box) (&check_hlds__check_typeclass_scalar_common_11[0]));
    MR_hl_field(0, AddProc_106, 1) = ((MR_Box) (check_hlds__check_typeclass__generate_instance_method_pred_and_procs_13_p_0_1));
    MR_hl_field(0, AddProc_106, 2) = ((MR_Box) ((MR_Integer) 5));
    MR_hl_field(0, AddProc_106, 3) = ((MR_Box) (ClassPredId_16));
    MR_hl_field(0, AddProc_106, 4) = ((MR_Box) (Context_56));
    MR_hl_field(0, AddProc_106, 5) = ((MR_Box) (InstancePredId_103));
    MR_hl_field(0, AddProc_106, 6) = ((MR_Box) (ClassProcTable_105));
    MR_hl_field(0, AddProc_106, 7) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_147_147));
  }
  mercury__list__map_foldl_5_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_method_info_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_method_info_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), AddProc_106, ClassMethodInfos_19, InstanceMethodInfos_20, ((MR_Box) (PredInfo2_101)), &conv2_PredInfo_125);
  PredInfo_125 = ((MR_Word) (conv2_PredInfo_125));
  hlds__hlds_module__module_info_set_pred_info_4_p_0(InstancePredId_103, PredInfo_125, STATE_VARIABLE_ModuleInfo_147_147, STATE_VARIABLE_ModuleInfo_127);
}

static void MR_CALL 
check_hlds__check_typeclass__get_other_class_method_procs_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  MR_bool succeeded;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Word HeadMethodInfo_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word TailMethodInfos_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, HeadMethodInfo_8, (MR_Integer) 1))));

    succeeded = parse_tree__prog_data____Unify____pred_pf_name_arity_0_0(HeadVar__1_1, Var_16);
    if (succeeded)
    {
      MR_Word TailCurMethodInfos_12;

      check_hlds__check_typeclass__get_other_class_method_procs_4_p_0(HeadVar__1_1, TailMethodInfos_9, &TailCurMethodInfos_12, HeadVar__4_4);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__3_3 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (HeadMethodInfo_8));
        MR_hl_field(1, base, 1) = ((MR_Box) (TailCurMethodInfos_12));
      }
    }
    else
    {
      *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__4_4 = HeadVar__2_2;
    }
  }
}

static void MR_CALL 
check_hlds__check_typeclass__build_instance_method_map_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_InstanceMethodMap_0_4,
  MR_Word * STATE_VARIABLE_InstanceMethodMap_5,
  MR_Word STATE_VARIABLE_Specs_0_6,
  MR_Word * STATE_VARIABLE_Specs_7)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Specs_7 = STATE_VARIABLE_Specs_0_6;
      *STATE_VARIABLE_InstanceMethodMap_5 = STATE_VARIABLE_InstanceMethodMap_0_4;
    }
    else
    {
      MR_Word Method_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word Methods_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Word MethodName_22 = ((MR_Word) ((MR_hl_field(0, Method_18, (MR_Integer) 0))));
      MR_Word NewDefn_23 = ((MR_Word) ((MR_hl_field(0, Method_18, (MR_Integer) 1))));
      MR_Word NewContext_24 = ((MR_Word) ((MR_hl_field(0, Method_18, (MR_Integer) 2))));
      MR_Word STATE_VARIABLE_InstanceMethodMap_49_49;
      MR_Word STATE_VARIABLE_Specs_50_50;
      MR_Word OldMethod_25;
      MR_Box conv0_OldMethod_25;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_InstanceMethodMap_0_4;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_6;

      succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pred_pf_name_arity_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_instance_method_0), STATE_VARIABLE_InstanceMethodMap_0_4, ((MR_Box) (MethodName_22)), &conv0_OldMethod_25);
      if (succeeded)
      {
        OldMethod_25 = ((MR_Word) (conv0_OldMethod_25));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word OldDefn_27 = ((MR_Word) ((MR_hl_field(0, OldMethod_25, (MR_Integer) 1))));
        MR_Word OldContext_28 = ((MR_Word) ((MR_hl_field(0, OldMethod_25, (MR_Integer) 2))));
        MR_Word OldClausesCord_29;
        MR_Word NewClausesCord_30;

        succeeded = ((MR_tag((MR_Word) OldDefn_27)) == (MR_Integer) 1);
        if (succeeded)
        {
          OldClausesCord_29 = ((MR_Word) ((MR_hl_field(1, OldDefn_27, (MR_Integer) 0))));
          succeeded = ((MR_tag((MR_Word) NewDefn_23)) == (MR_Integer) 1);
          if (succeeded)
            NewClausesCord_30 = ((MR_Word) ((MR_hl_field(1, NewDefn_23, (MR_Integer) 0))));
        }
        if (succeeded)
        {
          MR_Word NewClauses_31;
          MR_Word NewClause_32;
          MR_Word UpdatedClausesCord_36;
          MR_Word UpdatedDefn_37;
          MR_Word UpdatedMethod_38;

          NewClauses_31 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_clause_info_0), NewClausesCord_30);
          if ((NewClauses_31 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.check_typeclass.build_instance_method_map\'/7", (MR_String) "NewClauses = []");
              return;
            }
          else
          {
            MR_Word Var_58 = ((MR_Word) ((MR_hl_field(1, NewClauses_31, (MR_Integer) 1))));
            MR_Word Var_59 = ((MR_Word) ((MR_hl_field(1, NewClauses_31, (MR_Integer) 0))));

            if ((Var_58 == (MR_Word) ((MR_Unsigned) 0U)))
              NewClause_32 = Var_59;
            else
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.check_typeclass.build_instance_method_map\'/7", (MR_String) "NewClauses = [_, _, | _]");
                return;
              }
          }
          mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_clause_info_0), ((MR_Box) (NewClause_32)), OldClausesCord_29, &UpdatedClausesCord_36);
          {
            UpdatedDefn_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, UpdatedDefn_37, 0) = ((MR_Box) (UpdatedClausesCord_36));
          }
          {
            UpdatedMethod_38 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, UpdatedMethod_38, 0) = ((MR_Box) (MethodName_22));
            MR_hl_field(0, UpdatedMethod_38, 1) = ((MR_Box) (UpdatedDefn_37));
            MR_hl_field(0, UpdatedMethod_38, 2) = ((MR_Box) (OldContext_28));
          }
          mercury__map__det_update_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pred_pf_name_arity_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_instance_method_0), ((MR_Box) (MethodName_22)), ((MR_Box) (UpdatedMethod_38)), STATE_VARIABLE_InstanceMethodMap_0_4, &STATE_VARIABLE_InstanceMethodMap_49_49);
          STATE_VARIABLE_Specs_50_50 = STATE_VARIABLE_Specs_0_6;
        }
        else
        {
          check_hlds__check_typeclass__report_duplicate_method_defn_7_p_0(HeadVar__1_1, HeadVar__2_2, MethodName_22, OldContext_28, NewContext_24, STATE_VARIABLE_Specs_0_6, &STATE_VARIABLE_Specs_50_50);
          STATE_VARIABLE_InstanceMethodMap_49_49 = STATE_VARIABLE_InstanceMethodMap_0_4;
        }
      }
      else
      {
        mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pred_pf_name_arity_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_instance_method_0), ((MR_Box) (MethodName_22)), ((MR_Box) (Method_18)), STATE_VARIABLE_InstanceMethodMap_0_4, &STATE_VARIABLE_InstanceMethodMap_49_49);
        STATE_VARIABLE_Specs_50_50 = STATE_VARIABLE_Specs_0_6;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = Methods_19;
      next_value_of_STATE_VARIABLE_InstanceMethodMap_0_4 = STATE_VARIABLE_InstanceMethodMap_49_49;
      next_value_of_STATE_VARIABLE_Specs_0_6 = STATE_VARIABLE_Specs_50_50;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_InstanceMethodMap_0_4 = next_value_of_STATE_VARIABLE_InstanceMethodMap_0_4;
      STATE_VARIABLE_Specs_0_6 = next_value_of_STATE_VARIABLE_Specs_0_6;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__check_typeclass__report_duplicate_method_defn_7_p_0(
  MR_Word ClassId_8,
  MR_Word InstanceDefn_9,
  MR_Word MethodName_10,
  MR_Word FirstContext_11,
  MR_Word LaterContext_12,
  MR_Word STATE_VARIABLE_Specs_0_23,
  MR_Word * STATE_VARIABLE_Specs_24)
{
  MR_Word PrefixPieces_14;
  MR_Word PFMethodNamePieces_15;
  MR_Word HeaderPieces_16;
  MR_Word HeaderMsg_17;
  MR_Word FirstMsg_19;
  MR_Word LaterMsg_21;
  MR_Word Spec_22;
  MR_Word Var_26;
  MR_Word Var_27;
  MR_Word Var_36;
  MR_Word Var_50;
  MR_Word Var_51;
  MR_Word Var_52;
  MR_Word PredOrFunc_65;
  MR_Word MethodSymName_66;
  MR_Word UserArity_67;
  MR_Integer UserArityInt_68;
  MR_Word SNA_69;
  MR_Word Var_70;
  MR_Word Var_71;
  MR_Word Var_74;
  MR_Word Var_75;

  PrefixPieces_14 = check_hlds__check_typeclass__in_instance_decl_pieces_3_f_0((MR_Integer) 1, ClassId_8, InstanceDefn_9);
  PredOrFunc_65 = ((MR_Unsigned) ((MR_hl_field(0, MethodName_10, (MR_Integer) 0))) & (MR_Integer) 1);
  MethodSymName_66 = ((MR_Word) ((MR_hl_field(0, MethodName_10, (MR_Integer) 1))));
  UserArity_67 = ((MR_Word) ((MR_hl_field(0, MethodName_10, (MR_Integer) 2))));
  UserArityInt_68 = (MR_Integer) (UserArity_67);
  {
    SNA_69 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, SNA_69, 0) = ((MR_Box) (MethodSymName_66));
    MR_hl_field(0, SNA_69, 1) = ((MR_Box) (UserArityInt_68));
  }
  {
    Var_70 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_70, 0) = ((MR_Box) ((MR_Unsigned) 28U));
    MR_hl_field(3, Var_70, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_65));
  }
  {
    Var_75 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_75, 0) = ((MR_Box) ((MR_Unsigned) 12U));
    MR_hl_field(3, Var_75, 1) = ((MR_Box) (SNA_69));
  }
  {
    Var_74 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_74, 0) = ((MR_Box) (Var_75));
    MR_hl_field(1, Var_74, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_71, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__check_typeclass_scalar_common_1[175])));
    MR_hl_field(1, Var_71, 1) = ((MR_Box) (Var_74));
  }
  {
    PFMethodNamePieces_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, PFMethodNamePieces_15, 0) = ((MR_Box) (Var_70));
    MR_hl_field(1, PFMethodNamePieces_15, 1) = ((MR_Box) (Var_71));
  }
  {
    Var_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_27, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__check_typeclass_scalar_common_1[38])));
    MR_hl_field(1, Var_27, 1) = ((MR_Box) (PFMethodNamePieces_15));
  }
  Var_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_27, (MR_Word) (MR_mkword(1, &check_hlds__check_typeclass_scalar_common_1[28])));
  HeaderPieces_16 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), PrefixPieces_14, Var_26);
  Var_36 = ((MR_Word) ((MR_hl_field(0, InstanceDefn_9, (MR_Integer) 10))));
  {
    HeaderMsg_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeaderMsg_17, 0) = ((MR_Box) (Var_36));
    MR_hl_field(0, HeaderMsg_17, 1) = ((MR_Box) (HeaderPieces_16));
  }
  {
    FirstMsg_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, FirstMsg_19, 0) = ((MR_Box) (FirstContext_11));
    MR_hl_field(0, FirstMsg_19, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__check_typeclass_scalar_common_1[40])));
  }
  {
    LaterMsg_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, LaterMsg_21, 0) = ((MR_Box) (LaterContext_12));
    MR_hl_field(0, LaterMsg_21, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__check_typeclass_scalar_common_1[42])));
  }
  {
    Var_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_52, 0) = ((MR_Box) (LaterMsg_21));
    MR_hl_field(1, Var_52, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_51, 0) = ((MR_Box) (FirstMsg_19));
    MR_hl_field(1, Var_51, 1) = ((MR_Box) (Var_52));
  }
  {
    Var_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_50, 0) = ((MR_Box) (HeaderMsg_17));
    MR_hl_field(1, Var_50, 1) = ((MR_Box) (Var_51));
  }
  {
    Spec_22 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Spec_22, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.check_typeclass.report_duplicate_method_defn\'/7"));
    MR_hl_field(2, Spec_22, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(2, Spec_22, 2) = ((MR_Box) ((MR_Unsigned) 52U));
    MR_hl_field(2, Spec_22, 3) = ((MR_Box) (Var_50));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *STATE_VARIABLE_Specs_24 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (Spec_22));
    MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_23));
  }
}

static void MR_CALL 
check_hlds__check_typeclass__generate_instance_method_procs_for_class_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_STATE_VARIABLE_InstanceDefn_41;
  MR_Word conv3_STATE_VARIABLE_ModuleInfo_43;
  MR_Word conv2_STATE_VARIABLE_QualInfo_45;
  MR_Word conv1_STATE_VARIABLE_Specs_47;

  check_hlds__check_typeclass__generate_instance_method_procs_for_class_instance_14_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 7)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 8)))), ((MR_Word) (wrapper_arg_1)), &conv4_STATE_VARIABLE_InstanceDefn_41, ((MR_Word) (wrapper_arg_3)), &conv3_STATE_VARIABLE_ModuleInfo_43, ((MR_Word) (wrapper_arg_5)), &conv2_STATE_VARIABLE_QualInfo_45, ((MR_Word) (wrapper_arg_7)), &conv1_STATE_VARIABLE_Specs_47);
  *wrapper_arg_2 = ((MR_Box) (conv4_STATE_VARIABLE_InstanceDefn_41));
  *wrapper_arg_4 = ((MR_Box) (conv3_STATE_VARIABLE_ModuleInfo_43));
  *wrapper_arg_6 = ((MR_Box) (conv2_STATE_VARIABLE_QualInfo_45));
  *wrapper_arg_8 = ((MR_Box) (conv1_STATE_VARIABLE_Specs_47));
}

static void MR_CALL 
check_hlds__check_typeclass__generate_instance_method_procs_for_class_10_p_0(
  MR_Word ClassTable_11,
  MR_Word ClassId_12,
  MR_Word InstanceDefns0_13,
  MR_Word * InstanceDefns_14,
  MR_Word STATE_VARIABLE_ModuleInfo_0_32,
  MR_Word * STATE_VARIABLE_ModuleInfo_33,
  MR_Word STATE_VARIABLE_QualInfo_0_34,
  MR_Word * STATE_VARIABLE_QualInfo_35,
  MR_Word STATE_VARIABLE_Specs_0_36,
  MR_Word * STATE_VARIABLE_Specs_37)
{
  MR_bool succeeded;
  MR_Word ClassDefn_18;
  MR_Word TypeClassStatus_19;
  MR_Word ClassTVarSet_20;
  MR_Word ClassParamTVars_22;
  MR_Word SuperClasses_23;
  MR_Word Interface_26;
  MR_Word ClassMethodInfos_27;
  MR_Word ClassContext_28;
  MR_Word MaybeBadDefn_29;
  MR_Box conv0_ClassDefn_18;
  MR_Word Var_38;

  mercury__map__lookup_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0), ClassTable_11, ((MR_Box) (ClassId_12)), &conv0_ClassDefn_18);
  ClassDefn_18 = ((MR_Word) (conv0_ClassDefn_18));
  TypeClassStatus_19 = ((MR_Word) ((MR_hl_field(0, ClassDefn_18, (MR_Integer) 0))));
  ClassTVarSet_20 = ((MR_Word) ((MR_hl_field(0, ClassDefn_18, (MR_Integer) 1))));
  ClassParamTVars_22 = ((MR_Word) ((MR_hl_field(0, ClassDefn_18, (MR_Integer) 3))));
  SuperClasses_23 = ((MR_Word) ((MR_hl_field(0, ClassDefn_18, (MR_Integer) 4))));
  Interface_26 = ((MR_Word) ((MR_hl_field(0, ClassDefn_18, (MR_Integer) 7))));
  ClassMethodInfos_27 = ((MR_Word) ((MR_hl_field(0, ClassDefn_18, (MR_Integer) 8))));
  ClassContext_28 = ((MR_Word) ((MR_hl_field(0, ClassDefn_18, (MR_Integer) 9))));
  MaybeBadDefn_29 = ((MR_Unsigned) ((MR_hl_field(0, ClassDefn_18, (MR_Integer) 10))) & (MR_Integer) 1);
  Var_38 = hlds__status__typeclass_status_defined_in_this_module_1_f_0(TypeClassStatus_19);
  succeeded = (Var_38 == (MR_Integer) 1);
  if (succeeded)
    succeeded = (Interface_26 == (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    switch (MaybeBadDefn_29) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        *STATE_VARIABLE_Specs_37 = STATE_VARIABLE_Specs_0_36;
        break;
      case (MR_Integer) 0:
        {
          MR_Word Pieces_30;
          MR_Word Spec_31;
          MR_Word Var_41;
          MR_Word Var_42;

          {
            Var_42 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_42, 0) = ((MR_Box) ((MR_Unsigned) 24U));
            MR_hl_field(3, Var_42, 1) = ((MR_Box) (ClassId_12));
          }
          {
            Var_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_41, 0) = ((MR_Box) (Var_42));
            MR_hl_field(1, Var_41, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__check_typeclass_scalar_common_1[28])));
          }
          {
            Pieces_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Pieces_30, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__check_typeclass_scalar_common_1[26])));
            MR_hl_field(1, Pieces_30, 1) = ((MR_Box) (Var_41));
          }
          {
            Spec_31 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Spec_31, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.check_typeclass.generate_instance_method_procs_for_class\'/10"));
            MR_hl_field(0, Spec_31, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, Spec_31, 2) = ((MR_Box) ((MR_Unsigned) 52U));
            MR_hl_field(0, Spec_31, 3) = ((MR_Box) (ClassContext_28));
            MR_hl_field(0, Spec_31, 4) = ((MR_Box) (Pieces_30));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_Specs_37 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Spec_31));
            MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_36));
          }
        }
        break;
    }
    *InstanceDefns_14 = InstanceDefns0_13;
    *STATE_VARIABLE_QualInfo_35 = STATE_VARIABLE_QualInfo_0_34;
    *STATE_VARIABLE_ModuleInfo_33 = STATE_VARIABLE_ModuleInfo_0_32;
  }
  else
  {
    MR_Word Var_53;
    MR_Box conv7_STATE_VARIABLE_ModuleInfo_33;
    MR_Box conv6_STATE_VARIABLE_QualInfo_35;
    MR_Box conv5_STATE_VARIABLE_Specs_37;

    {
      Var_53 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_53, 0) = ((MR_Box) (&check_hlds__check_typeclass_scalar_common_10[0]));
      MR_hl_field(0, Var_53, 1) = ((MR_Box) (check_hlds__check_typeclass__generate_instance_method_procs_for_class_10_p_0_1));
      MR_hl_field(0, Var_53, 2) = ((MR_Box) ((MR_Integer) 6));
      MR_hl_field(0, Var_53, 3) = ((MR_Box) (ClassId_12));
      MR_hl_field(0, Var_53, 4) = ((MR_Box) (ClassTVarSet_20));
      MR_hl_field(0, Var_53, 5) = ((MR_Box) (ClassParamTVars_22));
      MR_hl_field(0, Var_53, 6) = ((MR_Box) (SuperClasses_23));
      MR_hl_field(0, Var_53, 7) = ((MR_Box) (Interface_26));
      MR_hl_field(0, Var_53, 8) = ((MR_Box) (ClassMethodInfos_27));
    }
    mercury__list__map_foldl3_9_p_1((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0), (MR_Word) (&check_hlds__check_typeclass_scalar_common_1[3]), Var_53, InstanceDefns0_13, InstanceDefns_14, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_32)), &conv7_STATE_VARIABLE_ModuleInfo_33, ((MR_Box) (STATE_VARIABLE_QualInfo_0_34)), &conv6_STATE_VARIABLE_QualInfo_35, ((MR_Box) (STATE_VARIABLE_Specs_0_36)), &conv5_STATE_VARIABLE_Specs_37);
    *STATE_VARIABLE_ModuleInfo_33 = ((MR_Word) (conv7_STATE_VARIABLE_ModuleInfo_33));
    *STATE_VARIABLE_QualInfo_35 = ((MR_Word) (conv6_STATE_VARIABLE_QualInfo_35));
    *STATE_VARIABLE_Specs_37 = ((MR_Word) (conv5_STATE_VARIABLE_Specs_37));
  }
}

static void MR_CALL 
check_hlds__check_typeclass__is_valid_instance_type_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word ClassId_10,
  MR_Word InstanceDefn_11,
  MR_Word Type_12,
  MR_Integer ArgNum_13,
  MR_Integer * HeadVar__6_6,
  MR_Word STATE_VARIABLE_Specs_0_40,
  MR_Word * STATE_VARIABLE_Specs_41)
{
  *HeadVar__6_6 = (MR_Integer) ((MR_Unsigned) ArgNum_13 + (MR_Unsigned) 1);
  switch (MR_tag((MR_Word) Type_12)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word TVarSet_161 = ((MR_Word) ((MR_hl_field(0, InstanceDefn_11, (MR_Integer) 2))));
        MR_String TypeStr_162;
        MR_Word EndPieces_163;
        MR_Word Var_167;
        MR_Word Var_168;
        MR_Word Var_169;
        MR_Word Var_172;
        MR_Word Var_173;

        TypeStr_162 = parse_tree__parse_tree_out_type__mercury_type_to_string_3_f_0(TVarSet_161, (MR_Integer) 0, Type_12);
        {
          Var_168 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_168, 0) = ((MR_Box) ((MR_Unsigned) 3U));
          MR_hl_field(3, Var_168, 1) = ((MR_Box) (ArgNum_13));
        }
        {
          Var_173 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_173, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Var_173, 1) = ((MR_Box) (TypeStr_162));
        }
        {
          Var_172 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_172, 0) = ((MR_Box) (Var_173));
          MR_hl_field(1, Var_172, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__check_typeclass_scalar_common_1[178])));
        }
        {
          Var_169 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_169, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__check_typeclass_scalar_common_1[16])));
          MR_hl_field(1, Var_169, 1) = ((MR_Box) (Var_172));
        }
        {
          Var_167 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_167, 0) = ((MR_Box) (Var_168));
          MR_hl_field(1, Var_167, 1) = ((MR_Box) (Var_169));
        }
        {
          EndPieces_163 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, EndPieces_163, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__check_typeclass_scalar_common_1[15])));
          MR_hl_field(1, EndPieces_163, 1) = ((MR_Box) (Var_167));
        }
        check_hlds__check_typeclass__report_bad_type_in_instance_6_p_0(ClassId_10, InstanceDefn_11, EndPieces_163, (MR_Integer) 0, STATE_VARIABLE_Specs_0_40, STATE_VARIABLE_Specs_41);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word TypeCtorSymName_29 = ((MR_Word) ((MR_hl_field(1, Type_12, (MR_Integer) 0))));
        MR_Word ArgTypes_30 = ((MR_Word) ((MR_hl_field(1, Type_12, (MR_Integer) 1))));
        MR_Word NonTVarArgs_33;
        MR_Word STATE_VARIABLE_Specs_74_74;
        MR_Integer Var_37;

        check_hlds__check_typeclass__find_non_type_variables_3_p_0(ArgTypes_30, (MR_Integer) 1, &NonTVarArgs_33);
        if ((NonTVarArgs_33 == (MR_Word) ((MR_Unsigned) 0U)))
          STATE_VARIABLE_Specs_74_74 = STATE_VARIABLE_Specs_0_40;
        else
        {
          MR_Word TypeCtor_36;
          MR_Integer Var_73;

          Var_73 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypes_30);
          {
            TypeCtor_36 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, TypeCtor_36, 0) = ((MR_Box) (TypeCtorSymName_29));
            MR_hl_field(0, TypeCtor_36, 1) = ((MR_Box) (Var_73));
          }
          check_hlds__check_typeclass__report_badly_formed_type_in_instance_7_p_0(ClassId_10, InstanceDefn_11, TypeCtor_36, ArgNum_13, NonTVarArgs_33, STATE_VARIABLE_Specs_0_40, &STATE_VARIABLE_Specs_74_74);
        }
        check_hlds__check_typeclass__is_orig_type_non_eqv_type_8_p_0(ModuleInfo_9, ClassId_10, InstanceDefn_11, Type_12, ArgNum_13, &Var_37, STATE_VARIABLE_Specs_74_74, STATE_VARIABLE_Specs_41);
      }
      break;
    case (MR_Integer) 2:
      *STATE_VARIABLE_Specs_41 = STATE_VARIABLE_Specs_0_40;
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Type_12, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word ArgTypes_140 = ((MR_Word) ((MR_hl_field(3, Type_12, (MR_Integer) 1))));
            MR_Word NonTVarArgs_141;
            MR_Word STATE_VARIABLE_Specs_74_148;
            MR_Integer Var_138;

            check_hlds__check_typeclass__find_non_type_variables_3_p_0(ArgTypes_140, (MR_Integer) 1, &NonTVarArgs_141);
            if ((NonTVarArgs_141 == (MR_Word) ((MR_Unsigned) 0U)))
              STATE_VARIABLE_Specs_74_148 = STATE_VARIABLE_Specs_0_40;
            else
            {
              MR_Word TypeCtor_130;
              MR_Integer Var_131;

              Var_131 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypes_140);
              {
                TypeCtor_130 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, TypeCtor_130, 0) = ((MR_Box) (&check_hlds__check_typeclass_scalar_common_3[0]));
                MR_hl_field(0, TypeCtor_130, 1) = ((MR_Box) (Var_131));
              }
              check_hlds__check_typeclass__report_badly_formed_type_in_instance_7_p_0(ClassId_10, InstanceDefn_11, TypeCtor_130, ArgNum_13, NonTVarArgs_141, STATE_VARIABLE_Specs_0_40, &STATE_VARIABLE_Specs_74_148);
            }
            check_hlds__check_typeclass__is_orig_type_non_eqv_type_8_p_0(ModuleInfo_9, ClassId_10, InstanceDefn_11, Type_12, ArgNum_13, &Var_138, STATE_VARIABLE_Specs_74_148, STATE_VARIABLE_Specs_41);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word TVarSet_100 = ((MR_Word) ((MR_hl_field(0, InstanceDefn_11, (MR_Integer) 2))));
            MR_String TypeStr_101;
            MR_Word EndPieces_102;
            MR_Word Var_106;
            MR_Word Var_107;
            MR_Word Var_108;
            MR_Word Var_111;
            MR_Word Var_112;
            MR_Word PrefixPieces_207;
            MR_Word InstanceContext_208;
            MR_Word Spec_209;
            MR_Word Var_213;

            TypeStr_101 = parse_tree__parse_tree_out_type__mercury_type_to_string_3_f_0(TVarSet_100, (MR_Integer) 0, Type_12);
            {
              Var_107 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_107, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(3, Var_107, 1) = ((MR_Box) (ArgNum_13));
            }
            {
              Var_112 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_112, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(3, Var_112, 1) = ((MR_Box) (TypeStr_101));
            }
            {
              Var_111 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_111, 0) = ((MR_Box) (Var_112));
              MR_hl_field(1, Var_111, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__check_typeclass_scalar_common_1[177])));
            }
            {
              Var_108 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_108, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__check_typeclass_scalar_common_1[16])));
              MR_hl_field(1, Var_108, 1) = ((MR_Box) (Var_111));
            }
            {
              Var_106 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_106, 0) = ((MR_Box) (Var_107));
              MR_hl_field(1, Var_106, 1) = ((MR_Box) (Var_108));
            }
            {
              EndPieces_102 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, EndPieces_102, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__check_typeclass_scalar_common_1[15])));
              MR_hl_field(1, EndPieces_102, 1) = ((MR_Box) (Var_106));
            }
            PrefixPieces_207 = check_hlds__check_typeclass__in_instance_decl_pieces_3_f_0((MR_Integer) 1, ClassId_10, InstanceDefn_11);
            InstanceContext_208 = ((MR_Word) ((MR_hl_field(0, InstanceDefn_11, (MR_Integer) 10))));
            Var_213 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), PrefixPieces_207, EndPieces_102);
            {
              Spec_209 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Spec_209, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.check_typeclass.report_bad_type_in_instance\'/6"));
              MR_hl_field(0, Spec_209, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(0, Spec_209, 2) = ((MR_Box) ((MR_Unsigned) 52U));
              MR_hl_field(0, Spec_209, 3) = ((MR_Box) (InstanceContext_208));
              MR_hl_field(0, Spec_209, 4) = ((MR_Box) (Var_213));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_Specs_41 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Spec_209));
              MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_40));
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word TVarSet_26 = ((MR_Word) ((MR_hl_field(0, InstanceDefn_11, (MR_Integer) 2))));
            MR_String TypeStr_27;
            MR_Word EndPieces_28;
            MR_Word Var_49;
            MR_Word Var_50;
            MR_Word Var_51;
            MR_Word Var_54;
            MR_Word Var_55;
            MR_Word PrefixPieces_188;
            MR_Word InstanceContext_189;
            MR_Word Spec_190;
            MR_Word Var_194;

            TypeStr_27 = parse_tree__parse_tree_out_type__mercury_type_to_string_3_f_0(TVarSet_26, (MR_Integer) 0, Type_12);
            {
              Var_50 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_50, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(3, Var_50, 1) = ((MR_Box) (ArgNum_13));
            }
            {
              Var_55 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_55, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(3, Var_55, 1) = ((MR_Box) (TypeStr_27));
            }
            {
              Var_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_54, 0) = ((MR_Box) (Var_55));
              MR_hl_field(1, Var_54, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__check_typeclass_scalar_common_1[176])));
            }
            {
              Var_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_51, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__check_typeclass_scalar_common_1[16])));
              MR_hl_field(1, Var_51, 1) = ((MR_Box) (Var_54));
            }
            {
              Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_49, 0) = ((MR_Box) (Var_50));
              MR_hl_field(1, Var_49, 1) = ((MR_Box) (Var_51));
            }
            {
              EndPieces_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, EndPieces_28, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__check_typeclass_scalar_common_1[15])));
              MR_hl_field(1, EndPieces_28, 1) = ((MR_Box) (Var_49));
            }
            PrefixPieces_188 = check_hlds__check_typeclass__in_instance_decl_pieces_3_f_0((MR_Integer) 1, ClassId_10, InstanceDefn_11);
            InstanceContext_189 = ((MR_Word) ((MR_hl_field(0, InstanceDefn_11, (MR_Integer) 10))));
            Var_194 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), PrefixPieces_188, EndPieces_28);
            {
              Spec_190 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Spec_190, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.check_typeclass.report_bad_type_in_instance\'/6"));
              MR_hl_field(0, Spec_190, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(0, Spec_190, 2) = ((MR_Box) ((MR_Unsigned) 52U));
              MR_hl_field(0, Spec_190, 3) = ((MR_Box) (InstanceContext_189));
              MR_hl_field(0, Spec_190, 4) = ((MR_Box) (Var_194));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_Specs_41 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Spec_190));
              MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_40));
            }
          }
          break;
        case (MR_Integer) 3:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.check_typeclass.is_valid_instance_type\'/8", (MR_String) "kinded_type");
            return;
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
check_hlds__check_typeclass__report_bad_type_in_instance_6_p_0(
  MR_Word ClassId_7,
  MR_Word InstanceDefn_8,
  MR_Word EndPieces_9,
  MR_Word Kind_10,
  MR_Word STATE_VARIABLE_Specs_0_16,
  MR_Word * STATE_VARIABLE_Specs_17)
{
  MR_Word WhichTypes_12;
  MR_Word PrefixPieces_13;
  MR_Word InstanceContext_14;
  MR_Word Spec_15;
  MR_Word Var_21;

  switch (Kind_10) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      WhichTypes_12 = (MR_Integer) 0;
      break;
    case (MR_Integer) 0:
      WhichTypes_12 = (MR_Integer) 1;
      break;
  }
  PrefixPieces_13 = check_hlds__check_typeclass__in_instance_decl_pieces_3_f_0(WhichTypes_12, ClassId_7, InstanceDefn_8);
  InstanceContext_14 = ((MR_Word) ((MR_hl_field(0, InstanceDefn_8, (MR_Integer) 10))));
  Var_21 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), PrefixPieces_13, EndPieces_9);
  {
    Spec_15 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Spec_15, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.check_typeclass.report_bad_type_in_instance\'/6"));
    MR_hl_field(0, Spec_15, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Spec_15, 2) = ((MR_Box) ((MR_Unsigned) 52U));
    MR_hl_field(0, Spec_15, 3) = ((MR_Box) (InstanceContext_14));
    MR_hl_field(0, Spec_15, 4) = ((MR_Box) (Var_21));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *STATE_VARIABLE_Specs_17 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (Spec_15));
    MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_16));
  }
}

static MR_Box MR_CALL 
check_hlds__check_typeclass__report_badly_formed_type_in_instance_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_Pieces_7;

  conv0_Pieces_7 = check_hlds__check_typeclass__non_tvar_arg_to_pieces_2_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_Pieces_7));
  return wrapper_arg_2;
}

static void MR_CALL 
check_hlds__check_typeclass__report_badly_formed_type_in_instance_7_p_0(
  MR_Word ClassId_8,
  MR_Word InstanceDefn_9,
  MR_Word TypeCtor_10,
  MR_Integer ArgNum_11,
  MR_Word NonTVarArgs_12,
  MR_Word STATE_VARIABLE_Specs_0_18,
  MR_Word * STATE_VARIABLE_Specs_19)
{
  MR_Word TVarSet_14 = ((MR_Word) ((MR_hl_field(0, InstanceDefn_9, (MR_Integer) 2))));
  MR_Word NonTVarArgPieceLists_15;
  MR_Word NonTVarArgPieces_16;
  MR_Word EndPieces_17;
  MR_Word Var_20;
  MR_Word Var_22;
  MR_Word Var_25;
  MR_Word Var_26;
  MR_Word Var_27;
  MR_Word Var_30;
  MR_Word Var_31;
  MR_String Var_32;
  MR_Word Var_35;
  MR_Word Var_38;
  MR_Word Var_39;
  MR_Word Var_40;
  MR_Word Var_41;
  MR_String Var_42;
  MR_Word PrefixPieces_69;
  MR_Word InstanceContext_70;
  MR_Word Spec_71;
  MR_Word Var_75;
  MR_Box conv1_Var_32;
  MR_Box conv2_Var_42;

  {
    Var_20 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_20, 0) = ((MR_Box) (&check_hlds__check_typeclass_scalar_common_9[0]));
    MR_hl_field(0, Var_20, 1) = ((MR_Box) (check_hlds__check_typeclass__report_badly_formed_type_in_instance_7_p_0_1));
    MR_hl_field(0, Var_20, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_20, 3) = ((MR_Box) (TVarSet_14));
  }
  NonTVarArgPieceLists_15 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_2[3]), (MR_Word) (&check_hlds__check_typeclass_scalar_common_1[12]), Var_20, NonTVarArgs_12);
  NonTVarArgPieces_16 = parse_tree__error_spec__component_lists_to_pieces_2_f_0((MR_String) "and", NonTVarArgPieceLists_15);
  {
    Var_26 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_26, 0) = ((MR_Box) ((MR_Unsigned) 3U));
    MR_hl_field(3, Var_26, 1) = ((MR_Box) (ArgNum_11));
  }
  conv1_Var_32 = parse_tree__error_spec__choose_number_3_f_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_2[3]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), NonTVarArgs_12, ((MR_Box) ((MR_String) "one")), ((MR_Box) ((MR_String) "some")));
  Var_32 = ((MR_String) (conv1_Var_32));
  {
    Var_31 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_31, 0) = ((MR_Box) ((MR_Unsigned) 6U));
    MR_hl_field(3, Var_31, 1) = ((MR_Box) (Var_32));
  }
  {
    Var_39 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_39, 0) = ((MR_Box) ((MR_Unsigned) 18U));
    MR_hl_field(3, Var_39, 1) = ((MR_Box) (TypeCtor_10));
  }
  conv2_Var_42 = parse_tree__error_spec__choose_number_3_f_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_2[3]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), NonTVarArgs_12, ((MR_Box) ((MR_String) "is not a type variable, but should be. This is")), ((MR_Box) ((MR_String) "are not type variables, but should be. These are")));
  Var_42 = ((MR_String) (conv2_Var_42));
  {
    Var_41 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_41, 0) = ((MR_Box) ((MR_Unsigned) 6U));
    MR_hl_field(3, Var_41, 1) = ((MR_Box) (Var_42));
  }
  {
    Var_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_40, 0) = ((MR_Box) (Var_41));
    MR_hl_field(1, Var_40, 1) = ((MR_Box) (NonTVarArgPieces_16));
  }
  {
    Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_38, 0) = ((MR_Box) (Var_39));
    MR_hl_field(1, Var_38, 1) = ((MR_Box) (Var_40));
  }
  {
    Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_35, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__check_typeclass_scalar_common_1[34])));
    MR_hl_field(1, Var_35, 1) = ((MR_Box) (Var_38));
  }
  {
    Var_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_30, 0) = ((MR_Box) (Var_31));
    MR_hl_field(1, Var_30, 1) = ((MR_Box) (Var_35));
  }
  {
    Var_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_27, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__check_typeclass_scalar_common_1[33])));
    MR_hl_field(1, Var_27, 1) = ((MR_Box) (Var_30));
  }
  {
    Var_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_25, 0) = ((MR_Box) (Var_26));
    MR_hl_field(1, Var_25, 1) = ((MR_Box) (Var_27));
  }
  {
    Var_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_22, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__check_typeclass_scalar_common_1[32])));
    MR_hl_field(1, Var_22, 1) = ((MR_Box) (Var_25));
  }
  EndPieces_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_22, (MR_Word) (MR_mkword(1, &check_hlds__check_typeclass_scalar_common_1[28])));
  PrefixPieces_69 = check_hlds__check_typeclass__in_instance_decl_pieces_3_f_0((MR_Integer) 1, ClassId_8, InstanceDefn_9);
  InstanceContext_70 = ((MR_Word) ((MR_hl_field(0, InstanceDefn_9, (MR_Integer) 10))));
  Var_75 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), PrefixPieces_69, EndPieces_17);
  {
    Spec_71 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Spec_71, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.check_typeclass.report_bad_type_in_instance\'/6"));
    MR_hl_field(0, Spec_71, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Spec_71, 2) = ((MR_Box) ((MR_Unsigned) 52U));
    MR_hl_field(0, Spec_71, 3) = ((MR_Box) (InstanceContext_70));
    MR_hl_field(0, Spec_71, 4) = ((MR_Box) (Var_75));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *STATE_VARIABLE_Specs_19 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (Spec_71));
    MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_18));
  }
}

static void MR_CALL 
check_hlds__check_typeclass__find_non_type_variables_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer ArgNum_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word ArgType_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgTypes_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word TailNonTVarArgs_9;
    MR_Integer Var_27 = (MR_Integer) ((MR_Unsigned) ArgNum_2 + (MR_Unsigned) 1);

    check_hlds__check_typeclass__find_non_type_variables_3_p_0(ArgTypes_6, Var_27, &TailNonTVarArgs_9);
    switch (MR_tag((MR_Word) ArgType_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *HeadVar__3_3 = TailNonTVarArgs_9;
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
      case (MR_Integer) 3:
        {
          MR_Word Var_29;

          {
            Var_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_29, 0) = ((MR_Box) (ArgNum_2));
            MR_hl_field(0, Var_29, 1) = ((MR_Box) (ArgType_5));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__3_3 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Var_29));
            MR_hl_field(1, base, 1) = ((MR_Box) (TailNonTVarArgs_9));
          }
        }
        break;
    }
  }
}

static void MR_CALL 
check_hlds__check_typeclass__is_orig_type_non_eqv_type_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word ClassId_10,
  MR_Word InstanceDefn_11,
  MR_Word Type_12,
  MR_Integer ArgNum_13,
  MR_Integer * HeadVar__6_6,
  MR_Word STATE_VARIABLE_Specs_0_41,
  MR_Word * STATE_VARIABLE_Specs_42)
{
  MR_bool succeeded;

  *HeadVar__6_6 = (MR_Integer) ((MR_Unsigned) ArgNum_13 + (MR_Unsigned) 1);
  switch (MR_tag((MR_Word) Type_12)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_Specs_42 = STATE_VARIABLE_Specs_0_41;
      break;
    case (MR_Integer) 1:
      {
        MR_Word TypeDefn_18;

        succeeded = check_hlds__type_util__type_to_type_defn_3_p_0(ModuleInfo_9, Type_12, &TypeDefn_18);
        if (succeeded)
        {
          MR_Word TypeBody_19;

          hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_18, &TypeBody_19);
          switch (MR_tag((MR_Word) TypeBody_19)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *STATE_VARIABLE_Specs_42 = STATE_VARIABLE_Specs_0_41;
              break;
            case (MR_Integer) 1:
              *STATE_VARIABLE_Specs_42 = STATE_VARIABLE_Specs_0_41;
              break;
            case (MR_Integer) 2:
              {
                MR_Word TypeDefnStatus_21;
                MR_Word Var_51;
                MR_Word Var_44;
                MR_Word Var_45;

                hlds__hlds_data__get_type_defn_status_2_p_0(TypeDefn_18, &TypeDefnStatus_21);
                Var_44 = (MR_Word) (TypeDefnStatus_21);
                succeeded = (Var_44 == (MR_Word) ((MR_Unsigned) 20U));
                if (succeeded)
                {
                  Var_51 = ((MR_Word) ((MR_hl_field(0, InstanceDefn_11, (MR_Integer) 2))));
                  Var_45 = ((MR_Word) ((MR_hl_field(0, InstanceDefn_11, (MR_Integer) 8))));
                  succeeded = (Var_45 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                  }
                }
                if (succeeded)
                {
                  MR_String TypeStr_60;
                  MR_Word EndPieces_61;
                  MR_Word Var_65;
                  MR_Word Var_66;
                  MR_Word Var_67;
                  MR_Word Var_70;
                  MR_Word Var_71;
                  MR_Word PrefixPieces_85;
                  MR_Word InstanceContext_86;
                  MR_Word Spec_87;
                  MR_Word Var_91;

                  TypeStr_60 = parse_tree__parse_tree_out_type__mercury_type_to_string_3_f_0(Var_51, (MR_Integer) 0, Type_12);
                  {
                    Var_66 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, Var_66, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                    MR_hl_field(3, Var_66, 1) = ((MR_Box) (ArgNum_13));
                  }
                  {
                    Var_71 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, Var_71, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(3, Var_71, 1) = ((MR_Box) (TypeStr_60));
                  }
                  {
                    Var_70 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_70, 0) = ((MR_Box) (Var_71));
                    MR_hl_field(1, Var_70, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__check_typeclass_scalar_common_1[37])));
                  }
                  {
                    Var_67 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_67, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__check_typeclass_scalar_common_1[16])));
                    MR_hl_field(1, Var_67, 1) = ((MR_Box) (Var_70));
                  }
                  {
                    Var_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_65, 0) = ((MR_Box) (Var_66));
                    MR_hl_field(1, Var_65, 1) = ((MR_Box) (Var_67));
                  }
                  {
                    EndPieces_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, EndPieces_61, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__check_typeclass_scalar_common_1[15])));
                    MR_hl_field(1, EndPieces_61, 1) = ((MR_Box) (Var_65));
                  }
                  PrefixPieces_85 = check_hlds__check_typeclass__in_instance_decl_pieces_3_f_0((MR_Integer) 0, ClassId_10, InstanceDefn_11);
                  InstanceContext_86 = ((MR_Word) ((MR_hl_field(0, InstanceDefn_11, (MR_Integer) 10))));
                  Var_91 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), PrefixPieces_85, EndPieces_61);
                  {
                    Spec_87 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Spec_87, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.check_typeclass.report_bad_type_in_instance\'/6"));
                    MR_hl_field(0, Spec_87, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(0, Spec_87, 2) = ((MR_Box) ((MR_Unsigned) 52U));
                    MR_hl_field(0, Spec_87, 3) = ((MR_Box) (InstanceContext_86));
                    MR_hl_field(0, Spec_87, 4) = ((MR_Box) (Var_91));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *STATE_VARIABLE_Specs_42 = base;
                    MR_hl_field(1, base, 0) = ((MR_Box) (Spec_87));
                    MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_41));
                  }
                }
                else
                  *STATE_VARIABLE_Specs_42 = STATE_VARIABLE_Specs_0_41;
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(3, TypeBody_19, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *STATE_VARIABLE_Specs_42 = STATE_VARIABLE_Specs_0_41;
                  break;
                case (MR_Integer) 1:
                  *STATE_VARIABLE_Specs_42 = STATE_VARIABLE_Specs_0_41;
                  break;
              }
              break;
          }
        }
        else
          *STATE_VARIABLE_Specs_42 = STATE_VARIABLE_Specs_0_41;
      }
      break;
    case (MR_Integer) 2:
      *STATE_VARIABLE_Specs_42 = STATE_VARIABLE_Specs_0_41;
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Type_12, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *STATE_VARIABLE_Specs_42 = STATE_VARIABLE_Specs_0_41;
          break;
        case (MR_Integer) 1:
          *STATE_VARIABLE_Specs_42 = STATE_VARIABLE_Specs_0_41;
          break;
        case (MR_Integer) 2:
          *STATE_VARIABLE_Specs_42 = STATE_VARIABLE_Specs_0_41;
          break;
        case (MR_Integer) 3:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.check_typeclass.is_orig_type_non_eqv_type\'/8", (MR_String) "kinded_type");
            return;
          }
          break;
      }
      break;
  }
}

static MR_Word MR_CALL 
check_hlds__check_typeclass__in_instance_decl_pieces_3_f_0(
  MR_Word WhichTypes_5,
  MR_Word ClassId_6,
  MR_Word InstanceDefn_7)
{
  MR_bool succeeded;
  MR_Word Pieces_8;
  MR_String InstanceName_9;
  MR_Word Var_15;
  MR_Word Var_16;
  MR_Word ClassName_18 = ((MR_Word) ((MR_hl_field(0, ClassId_6, (MR_Integer) 0))));
  MR_String ClassNameStr_20;
  MR_Word Types0_21;
  MR_Integer NumTypes0_22;
  MR_Word Var_79;
  MR_Word Var_80;
  MR_Integer Var_26;

  ClassNameStr_20 = mdbcomp__sym_name__unqualify_name_1_f_0(ClassName_18);
  Var_80 = ((MR_Word) ((MR_hl_field(0, InstanceDefn_7, (MR_Integer) 3))));
  Var_79 = ((MR_Word) ((MR_hl_field(0, InstanceDefn_7, (MR_Integer) 4))));
  switch (WhichTypes_5) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      Types0_21 = Var_79;
      break;
    case (MR_Integer) 0:
      Types0_21 = Var_80;
      break;
  }
  mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Types0_21, &NumTypes0_22);
  succeeded = MR_TRUE;
  if (succeeded)
  {
    Var_26 = (MR_Integer) 5;
    succeeded = (NumTypes0_22 > Var_26);
  }
  if (succeeded)
  {
    MR_String Var_84;
    MR_String Var_92;

    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_3[2]), NumTypes0_22, &Var_84);
    Var_92 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_84);
    InstanceName_9 = mercury__string__f_43_43_2_f_0(ClassNameStr_20, Var_92);
  }
  else
  {
    MR_Word Types_23;
    MR_Word TVarSet_24;
    MR_String TypesStr_25;
    MR_String Var_94;
    MR_String Var_96;

    parse_tree__prog_type__strip_module_names_from_type_list_4_p_0((MR_Integer) 1, (MR_Integer) 1, Types0_21, &Types_23);
    TVarSet_24 = ((MR_Word) ((MR_hl_field(0, InstanceDefn_7, (MR_Integer) 2))));
    TypesStr_25 = parse_tree__parse_tree_out_type__mercury_types_to_string_3_f_0(TVarSet_24, (MR_Integer) 0, Types_23);
    Var_94 = mercury__string__f_43_43_2_f_0(TypesStr_25, (MR_String) ")");
    Var_96 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_94);
    InstanceName_9 = mercury__string__f_43_43_2_f_0(ClassNameStr_20, Var_96);
  }
  {
    Var_16 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_16, 0) = ((MR_Box) ((MR_Unsigned) 7U));
    MR_hl_field(3, Var_16, 1) = ((MR_Box) (InstanceName_9));
  }
  {
    Var_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_15, 0) = ((MR_Box) (Var_16));
    MR_hl_field(1, Var_15, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__check_typeclass_scalar_common_1[109])));
  }
  {
    Pieces_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Pieces_8, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__check_typeclass_scalar_common_1[174])));
    MR_hl_field(1, Pieces_8, 1) = ((MR_Box) (Var_15));
  }
  return Pieces_8;
}

static void MR_CALL 
check_hlds__check_typeclass__is_instance_type_vector_valid_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Integer conv5_HeadVar__6_6;
  MR_Word conv4_STATE_VARIABLE_Specs_41;

  check_hlds__check_typeclass__is_valid_instance_type_8_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv5_HeadVar__6_6, ((MR_Word) (wrapper_arg_4)), &conv4_STATE_VARIABLE_Specs_41);
  *wrapper_arg_3 = ((MR_Box) (conv5_HeadVar__6_6));
  *wrapper_arg_5 = ((MR_Box) (conv4_STATE_VARIABLE_Specs_41));
}

static void MR_CALL 
check_hlds__check_typeclass__is_instance_type_vector_valid_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Integer conv1_HeadVar__6_6;
  MR_Word conv0_STATE_VARIABLE_Specs_42;

  check_hlds__check_typeclass__is_orig_type_non_eqv_type_8_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv1_HeadVar__6_6, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Specs_42);
  *wrapper_arg_3 = ((MR_Box) (conv1_HeadVar__6_6));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_42));
}

static void MR_CALL 
check_hlds__check_typeclass__is_instance_type_vector_valid_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word ClassId_6,
  MR_Word InstanceDefn_7,
  MR_Word * STATE_VARIABLE_Specs_13)
{
  MR_Word OriginalTypes_9 = ((MR_Word) ((MR_hl_field(0, InstanceDefn_7, (MR_Integer) 3))));
  MR_Word Types_11;
  MR_Word Var_15;
  MR_Word STATE_VARIABLE_Specs_17_17;
  MR_Word Var_18;
  MR_Box conv3_Var_10;
  MR_Box conv2_STATE_VARIABLE_Specs_17_17;
  MR_Box conv7_Var_12;
  MR_Box conv6_STATE_VARIABLE_Specs_13;

  {
    Var_15 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_15, 0) = ((MR_Box) (&check_hlds__check_typeclass_scalar_common_6[1]));
    MR_hl_field(0, Var_15, 1) = ((MR_Box) (check_hlds__check_typeclass__is_instance_type_vector_valid_4_p_0_1));
    MR_hl_field(0, Var_15, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_15, 3) = ((MR_Box) (ModuleInfo_5));
    MR_hl_field(0, Var_15, 4) = ((MR_Box) (ClassId_6));
    MR_hl_field(0, Var_15, 5) = ((MR_Box) (InstanceDefn_7));
  }
  mercury__list__foldl2_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&check_hlds__check_typeclass_scalar_common_1[3]), Var_15, OriginalTypes_9, ((MR_Box) ((MR_Integer) 1)), &conv3_Var_10, ((MR_Box) ((MR_Unsigned) 0U)), &conv2_STATE_VARIABLE_Specs_17_17);
  STATE_VARIABLE_Specs_17_17 = ((MR_Word) (conv2_STATE_VARIABLE_Specs_17_17));
  Types_11 = ((MR_Word) ((MR_hl_field(0, InstanceDefn_7, (MR_Integer) 4))));
  {
    Var_18 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_18, 0) = ((MR_Box) (&check_hlds__check_typeclass_scalar_common_6[1]));
    MR_hl_field(0, Var_18, 1) = ((MR_Box) (check_hlds__check_typeclass__is_instance_type_vector_valid_4_p_0_2));
    MR_hl_field(0, Var_18, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_18, 3) = ((MR_Box) (ModuleInfo_5));
    MR_hl_field(0, Var_18, 4) = ((MR_Box) (ClassId_6));
    MR_hl_field(0, Var_18, 5) = ((MR_Box) (InstanceDefn_7));
  }
  mercury__list__foldl2_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&check_hlds__check_typeclass_scalar_common_1[3]), Var_18, Types_11, ((MR_Box) ((MR_Integer) 1)), &conv7_Var_12, ((MR_Box) (STATE_VARIABLE_Specs_17_17)), &conv6_STATE_VARIABLE_Specs_13);
  *STATE_VARIABLE_Specs_13 = ((MR_Word) (conv6_STATE_VARIABLE_Specs_13));
}

static void MR_CALL 
check_hlds__check_typeclass__check_instance_declaration_types_for_class_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Specs_13;

  check_hlds__check_typeclass__is_instance_type_vector_valid_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv0_STATE_VARIABLE_Specs_13);
  *wrapper_arg_2 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_13));
}

static void MR_CALL 
check_hlds__check_typeclass__check_instance_declaration_types_for_class_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word ClassId_7,
  MR_Word InstanceDefns_8,
  MR_Word STATE_VARIABLE_Specs_0_12,
  MR_Word * STATE_VARIABLE_Specs_13)
{
  MR_Word InstanceSpecLists_10;
  MR_Word ClassInstanceSpecs_11;
  MR_Word Var_14;

  {
    Var_14 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_14, 0) = ((MR_Box) (&check_hlds__check_typeclass_scalar_common_5[4]));
    MR_hl_field(0, Var_14, 1) = ((MR_Box) (check_hlds__check_typeclass__check_instance_declaration_types_for_class_5_p_0_1));
    MR_hl_field(0, Var_14, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_14, 3) = ((MR_Box) (ModuleInfo_6));
    MR_hl_field(0, Var_14, 4) = ((MR_Box) (ClassId_7));
  }
  mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0), (MR_Word) (&check_hlds__check_typeclass_scalar_common_1[3]), Var_14, InstanceDefns_8, &InstanceSpecLists_10);
  mercury__list__condense_2_p_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), InstanceSpecLists_10, &ClassInstanceSpecs_11);
  *STATE_VARIABLE_Specs_13 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), ClassInstanceSpecs_11, STATE_VARIABLE_Specs_0_12);
}

static void MR_CALL 
check_hlds__check_typeclass__find_class_cycles_3_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box * wrapper_arg_9)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_STATE_VARIABLE_ClassTable_26;
  MR_Word conv3_STATE_VARIABLE_Visited_28;
  MR_Word conv2_STATE_VARIABLE_Cycles_30;
  MR_Word conv1_STATE_VARIABLE_FunDepAncestors_32;

  check_hlds__check_typeclass__find_class_cycles_3_10_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_ClassTable_26, ((MR_Word) (wrapper_arg_4)), &conv3_STATE_VARIABLE_Visited_28, ((MR_Word) (wrapper_arg_6)), &conv2_STATE_VARIABLE_Cycles_30, ((MR_Word) (wrapper_arg_8)), &conv1_STATE_VARIABLE_FunDepAncestors_32);
  *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_ClassTable_26));
  *wrapper_arg_5 = ((MR_Box) (conv3_STATE_VARIABLE_Visited_28));
  *wrapper_arg_7 = ((MR_Box) (conv2_STATE_VARIABLE_Cycles_30));
  *wrapper_arg_9 = ((MR_Box) (conv1_STATE_VARIABLE_FunDepAncestors_32));
}

static void MR_CALL 
check_hlds__check_typeclass__find_class_cycles_3_10_p_0(
  MR_Word Path_11,
  MR_Word Constraint_12,
  MR_Word STATE_VARIABLE_ClassTable_0_25,
  MR_Word * STATE_VARIABLE_ClassTable_26,
  MR_Word STATE_VARIABLE_Visited_0_27,
  MR_Word * STATE_VARIABLE_Visited_28,
  MR_Word STATE_VARIABLE_Cycles_0_29,
  MR_Word * STATE_VARIABLE_Cycles_30,
  MR_Word STATE_VARIABLE_FunDepAncestors_0_31,
  MR_Word * STATE_VARIABLE_FunDepAncestors_32)
{
  MR_bool succeeded;
  MR_Word ClassName_17 = ((MR_Word) ((MR_hl_field(0, Constraint_12, (MR_Integer) 0))));
  MR_Word ArgTypes_18 = ((MR_Word) ((MR_hl_field(0, Constraint_12, (MR_Integer) 1))));
  MR_Integer Arity_19;
  MR_Word ClassId_20;
  MR_Word ClassParamTVars_21;
  MR_Word NewFunDepAncestors0_22;
  MR_Word Binding_23;
  MR_Word NewFunDepAncestors_24;
  MR_Word ClassDefn0_36;
  MR_Word Kinds_37;
  MR_Box conv0_ClassDefn0_36;

  mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypes_18, &Arity_19);
  {
    ClassId_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ClassId_20, 0) = ((MR_Box) (ClassName_17));
    MR_hl_field(0, ClassId_20, 1) = ((MR_Box) (Arity_19));
  }
  conv0_ClassDefn0_36 = mercury__map__lookup_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0), STATE_VARIABLE_ClassTable_0_25, ((MR_Box) (ClassId_20)));
  ClassDefn0_36 = ((MR_Word) (conv0_ClassDefn0_36));
  Kinds_37 = ((MR_Word) ((MR_hl_field(0, ClassDefn0_36, (MR_Integer) 2))));
  ClassParamTVars_21 = ((MR_Word) ((MR_hl_field(0, ClassDefn0_36, (MR_Integer) 3))));
  succeeded = mercury__set__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), ((MR_Box) (ClassId_20)), STATE_VARIABLE_Visited_0_27);
  if (succeeded)
  {
    MR_Word Cycle_38;
    MR_Word Var_48;
    MR_Word Var_49;

    {
      Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_49, 0) = ((MR_Box) (ClassId_20));
      MR_hl_field(1, Var_49, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_48 = (MR_Word) (Var_49);
    succeeded = check_hlds__check_typeclass__find_class_cycle_4_p_0(ClassId_20, Path_11, Var_48, &Cycle_38);
    if (succeeded)
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Cycles_30 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Cycle_38));
        MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Cycles_0_29));
      }
    else
      *STATE_VARIABLE_Cycles_30 = STATE_VARIABLE_Cycles_0_29;
    NewFunDepAncestors0_22 = ((MR_Word) ((MR_hl_field(0, ClassDefn0_36, (MR_Integer) 6))));
    *STATE_VARIABLE_Visited_28 = STATE_VARIABLE_Visited_0_27;
    *STATE_VARIABLE_ClassTable_26 = STATE_VARIABLE_ClassTable_0_25;
  }
  else
  {
    MR_Word FunDeps_39;
    MR_Word FunDepAncestors0_40;
    MR_Word Superclasses_44;
    MR_Word PathClassIds_45;
    MR_Word Path1_46;
    MR_Word ClassDefn_47;
    MR_Word STATE_VARIABLE_Visited_42_51;
    MR_Word Var_54;
    MR_Word Var_55;
    MR_Word STATE_VARIABLE_ClassTable_47_56;
    MR_Box conv8_STATE_VARIABLE_ClassTable_47_56;
    MR_Box conv7_STATE_VARIABLE_Visited_28;
    MR_Box conv6_STATE_VARIABLE_Cycles_30;
    MR_Box conv5_NewFunDepAncestors0_22;
    MR_Word Var_85;
    MR_Word Var_86;
    MR_Word Var_87;
    MR_Word Var_88;
    MR_Word Var_89;
    MR_Word Var_90;
    MR_Word Var_92;
    MR_Word Var_93;
    MR_Word Var_94;
    MR_Word Var_95;

    mercury__set__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), ((MR_Box) (ClassId_20)), STATE_VARIABLE_Visited_0_27, &STATE_VARIABLE_Visited_42_51);
    Superclasses_44 = ((MR_Word) ((MR_hl_field(0, ClassDefn0_36, (MR_Integer) 4))));
    FunDeps_39 = ((MR_Word) ((MR_hl_field(0, ClassDefn0_36, (MR_Integer) 5))));
    if ((FunDeps_39 == (MR_Word) ((MR_Unsigned) 0U)))
      FunDepAncestors0_40 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word ClassName_41 = ((MR_Word) ((MR_hl_field(0, ClassId_20, (MR_Integer) 0))));
      MR_Word ArgTypes_43;
      MR_Word Var_52;

      parse_tree__prog_type__var_list_to_type_list_3_p_0(Kinds_37, ClassParamTVars_21, &ArgTypes_43);
      {
        Var_52 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_52, 0) = ((MR_Box) (ClassName_41));
        MR_hl_field(0, Var_52, 1) = ((MR_Box) (ArgTypes_43));
      }
      {
        FunDepAncestors0_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, FunDepAncestors0_40, 0) = ((MR_Box) (Var_52));
        MR_hl_field(1, FunDepAncestors0_40, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
    PathClassIds_45 = (MR_Word) (Path_11);
    {
      Var_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_54, 0) = ((MR_Box) (ClassId_20));
      MR_hl_field(1, Var_54, 1) = ((MR_Box) (PathClassIds_45));
    }
    Path1_46 = (MR_Word) (Var_54);
    {
      Var_55 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_55, 0) = ((MR_Box) (&check_hlds__check_typeclass_scalar_common_8[1]));
      MR_hl_field(0, Var_55, 1) = ((MR_Box) (check_hlds__check_typeclass__find_class_cycles_3_10_p_0_1));
      MR_hl_field(0, Var_55, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_55, 3) = ((MR_Box) (Path1_46));
    }
    mercury__list__foldl4_10_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&check_hlds__check_typeclass_scalar_common_2[0]), (MR_Word) (&check_hlds__check_typeclass_scalar_common_1[1]), (MR_Word) (&check_hlds__check_typeclass_scalar_common_1[2]), (MR_Word) (&check_hlds__check_typeclass_scalar_common_1[4]), Var_55, Superclasses_44, ((MR_Box) (STATE_VARIABLE_ClassTable_0_25)), &conv8_STATE_VARIABLE_ClassTable_47_56, ((MR_Box) (STATE_VARIABLE_Visited_42_51)), &conv7_STATE_VARIABLE_Visited_28, ((MR_Box) (STATE_VARIABLE_Cycles_0_29)), &conv6_STATE_VARIABLE_Cycles_30, ((MR_Box) (FunDepAncestors0_40)), &conv5_NewFunDepAncestors0_22);
    STATE_VARIABLE_ClassTable_47_56 = ((MR_Word) (conv8_STATE_VARIABLE_ClassTable_47_56));
    *STATE_VARIABLE_Visited_28 = ((MR_Word) (conv7_STATE_VARIABLE_Visited_28));
    *STATE_VARIABLE_Cycles_30 = ((MR_Word) (conv6_STATE_VARIABLE_Cycles_30));
    NewFunDepAncestors0_22 = ((MR_Word) (conv5_NewFunDepAncestors0_22));
    Var_85 = ((MR_Word) ((MR_hl_field(0, ClassDefn0_36, (MR_Integer) 0))));
    Var_86 = ((MR_Word) ((MR_hl_field(0, ClassDefn0_36, (MR_Integer) 1))));
    Var_87 = ((MR_Word) ((MR_hl_field(0, ClassDefn0_36, (MR_Integer) 2))));
    Var_88 = ((MR_Word) ((MR_hl_field(0, ClassDefn0_36, (MR_Integer) 3))));
    Var_89 = ((MR_Word) ((MR_hl_field(0, ClassDefn0_36, (MR_Integer) 4))));
    Var_90 = ((MR_Word) ((MR_hl_field(0, ClassDefn0_36, (MR_Integer) 5))));
    Var_92 = ((MR_Word) ((MR_hl_field(0, ClassDefn0_36, (MR_Integer) 7))));
    Var_93 = ((MR_Word) ((MR_hl_field(0, ClassDefn0_36, (MR_Integer) 8))));
    Var_94 = ((MR_Word) ((MR_hl_field(0, ClassDefn0_36, (MR_Integer) 9))));
    Var_95 = ((MR_Unsigned) ((MR_hl_field(0, ClassDefn0_36, (MR_Integer) 10))) & (MR_Integer) 1);
    {
      ClassDefn_47 = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ClassDefn_47, 0) = ((MR_Box) (Var_85));
      MR_hl_field(0, ClassDefn_47, 1) = ((MR_Box) (Var_86));
      MR_hl_field(0, ClassDefn_47, 2) = ((MR_Box) (Var_87));
      MR_hl_field(0, ClassDefn_47, 3) = ((MR_Box) (Var_88));
      MR_hl_field(0, ClassDefn_47, 4) = ((MR_Box) (Var_89));
      MR_hl_field(0, ClassDefn_47, 5) = ((MR_Box) (Var_90));
      MR_hl_field(0, ClassDefn_47, 6) = ((MR_Box) (NewFunDepAncestors0_22));
      MR_hl_field(0, ClassDefn_47, 7) = ((MR_Box) (Var_92));
      MR_hl_field(0, ClassDefn_47, 8) = ((MR_Box) (Var_93));
      MR_hl_field(0, ClassDefn_47, 9) = ((MR_Box) (Var_94));
      MR_hl_field(0, ClassDefn_47, 10) = (MR_Box) ((MR_Unsigned) (Var_95));
    }
    mercury__map__det_update_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0), ((MR_Box) (ClassId_20)), ((MR_Box) (ClassDefn_47)), STATE_VARIABLE_ClassTable_47_56, STATE_VARIABLE_ClassTable_26);
  }
  mercury__map__from_corresponding_lists_3_p_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ClassParamTVars_21, ArgTypes_18, &Binding_23);
  parse_tree__prog_type_subst__apply_subst_to_prog_constraint_list_3_p_0(Binding_23, NewFunDepAncestors0_22, &NewFunDepAncestors_24);
  *STATE_VARIABLE_FunDepAncestors_32 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), NewFunDepAncestors_24, STATE_VARIABLE_FunDepAncestors_0_31);
}

static void MR_CALL 
check_hlds__check_typeclass__find_class_cycles_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box * wrapper_arg_9)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_STATE_VARIABLE_ClassTable_26;
  MR_Word conv3_STATE_VARIABLE_Visited_28;
  MR_Word conv2_STATE_VARIABLE_Cycles_30;
  MR_Word conv1_STATE_VARIABLE_FunDepAncestors_32;

  check_hlds__check_typeclass__find_class_cycles_3_10_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_ClassTable_26, ((MR_Word) (wrapper_arg_4)), &conv3_STATE_VARIABLE_Visited_28, ((MR_Word) (wrapper_arg_6)), &conv2_STATE_VARIABLE_Cycles_30, ((MR_Word) (wrapper_arg_8)), &conv1_STATE_VARIABLE_FunDepAncestors_32);
  *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_ClassTable_26));
  *wrapper_arg_5 = ((MR_Box) (conv3_STATE_VARIABLE_Visited_28));
  *wrapper_arg_7 = ((MR_Box) (conv2_STATE_VARIABLE_Cycles_30));
  *wrapper_arg_9 = ((MR_Box) (conv1_STATE_VARIABLE_FunDepAncestors_32));
}

static void MR_CALL 
check_hlds__check_typeclass__find_class_cycles_8_p_0(
  MR_Word Path_9,
  MR_Word ClassId_10,
  MR_Word STATE_VARIABLE_ClassTable_0_16,
  MR_Word * STATE_VARIABLE_ClassTable_17,
  MR_Word STATE_VARIABLE_Visited_0_18,
  MR_Word * STATE_VARIABLE_Visited_19,
  MR_Word STATE_VARIABLE_Cycles_0_20,
  MR_Word * STATE_VARIABLE_Cycles_21)
{
  MR_bool succeeded;
  MR_Word Var_14;
  MR_Word ClassDefn0_22;
  MR_Word Kinds_23;
  MR_Box conv0_ClassDefn0_22;

  conv0_ClassDefn0_22 = mercury__map__lookup_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0), STATE_VARIABLE_ClassTable_0_16, ((MR_Box) (ClassId_10)));
  ClassDefn0_22 = ((MR_Word) (conv0_ClassDefn0_22));
  Kinds_23 = ((MR_Word) ((MR_hl_field(0, ClassDefn0_22, (MR_Integer) 2))));
  Var_14 = ((MR_Word) ((MR_hl_field(0, ClassDefn0_22, (MR_Integer) 3))));
  succeeded = mercury__set__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), ((MR_Box) (ClassId_10)), STATE_VARIABLE_Visited_0_18);
  if (succeeded)
  {
    MR_Word Cycle_24;
    MR_Word Var_34;
    MR_Word Var_35;

    {
      Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_35, 0) = ((MR_Box) (ClassId_10));
      MR_hl_field(1, Var_35, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_34 = (MR_Word) (Var_35);
    succeeded = check_hlds__check_typeclass__find_class_cycle_4_p_0(ClassId_10, Path_9, Var_34, &Cycle_24);
    if (succeeded)
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Cycles_21 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Cycle_24));
        MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Cycles_0_20));
      }
    else
      *STATE_VARIABLE_Cycles_21 = STATE_VARIABLE_Cycles_0_20;
    *STATE_VARIABLE_Visited_19 = STATE_VARIABLE_Visited_0_18;
    *STATE_VARIABLE_ClassTable_17 = STATE_VARIABLE_ClassTable_0_16;
  }
  else
  {
    MR_Word FunDeps_25;
    MR_Word FunDepAncestors0_26;
    MR_Word Superclasses_30;
    MR_Word PathClassIds_31;
    MR_Word Path1_32;
    MR_Word ClassDefn_33;
    MR_Word STATE_VARIABLE_Visited_42_37;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_Word STATE_VARIABLE_ClassTable_47_42;
    MR_Word Var_89;
    MR_Box conv8_STATE_VARIABLE_ClassTable_47_42;
    MR_Box conv7_STATE_VARIABLE_Visited_19;
    MR_Box conv6_STATE_VARIABLE_Cycles_21;
    MR_Box conv5_Var_89;
    MR_Word Var_71;
    MR_Word Var_72;
    MR_Word Var_73;
    MR_Word Var_74;
    MR_Word Var_75;
    MR_Word Var_76;
    MR_Word Var_78;
    MR_Word Var_79;
    MR_Word Var_80;
    MR_Word Var_81;

    mercury__set__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), ((MR_Box) (ClassId_10)), STATE_VARIABLE_Visited_0_18, &STATE_VARIABLE_Visited_42_37);
    Superclasses_30 = ((MR_Word) ((MR_hl_field(0, ClassDefn0_22, (MR_Integer) 4))));
    FunDeps_25 = ((MR_Word) ((MR_hl_field(0, ClassDefn0_22, (MR_Integer) 5))));
    if ((FunDeps_25 == (MR_Word) ((MR_Unsigned) 0U)))
      FunDepAncestors0_26 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word ClassName_27 = ((MR_Word) ((MR_hl_field(0, ClassId_10, (MR_Integer) 0))));
      MR_Word ArgTypes_29;
      MR_Word Var_38;

      parse_tree__prog_type__var_list_to_type_list_3_p_0(Kinds_23, Var_14, &ArgTypes_29);
      {
        Var_38 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_38, 0) = ((MR_Box) (ClassName_27));
        MR_hl_field(0, Var_38, 1) = ((MR_Box) (ArgTypes_29));
      }
      {
        FunDepAncestors0_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, FunDepAncestors0_26, 0) = ((MR_Box) (Var_38));
        MR_hl_field(1, FunDepAncestors0_26, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
    PathClassIds_31 = (MR_Word) (Path_9);
    {
      Var_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_40, 0) = ((MR_Box) (ClassId_10));
      MR_hl_field(1, Var_40, 1) = ((MR_Box) (PathClassIds_31));
    }
    Path1_32 = (MR_Word) (Var_40);
    {
      Var_41 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_41, 0) = ((MR_Box) (&check_hlds__check_typeclass_scalar_common_8[1]));
      MR_hl_field(0, Var_41, 1) = ((MR_Box) (check_hlds__check_typeclass__find_class_cycles_8_p_0_1));
      MR_hl_field(0, Var_41, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_41, 3) = ((MR_Box) (Path1_32));
    }
    mercury__list__foldl4_10_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&check_hlds__check_typeclass_scalar_common_2[0]), (MR_Word) (&check_hlds__check_typeclass_scalar_common_1[1]), (MR_Word) (&check_hlds__check_typeclass_scalar_common_1[2]), (MR_Word) (&check_hlds__check_typeclass_scalar_common_1[4]), Var_41, Superclasses_30, ((MR_Box) (STATE_VARIABLE_ClassTable_0_16)), &conv8_STATE_VARIABLE_ClassTable_47_42, ((MR_Box) (STATE_VARIABLE_Visited_42_37)), &conv7_STATE_VARIABLE_Visited_19, ((MR_Box) (STATE_VARIABLE_Cycles_0_20)), &conv6_STATE_VARIABLE_Cycles_21, ((MR_Box) (FunDepAncestors0_26)), &conv5_Var_89);
    STATE_VARIABLE_ClassTable_47_42 = ((MR_Word) (conv8_STATE_VARIABLE_ClassTable_47_42));
    *STATE_VARIABLE_Visited_19 = ((MR_Word) (conv7_STATE_VARIABLE_Visited_19));
    *STATE_VARIABLE_Cycles_21 = ((MR_Word) (conv6_STATE_VARIABLE_Cycles_21));
    Var_89 = ((MR_Word) (conv5_Var_89));
    Var_71 = ((MR_Word) ((MR_hl_field(0, ClassDefn0_22, (MR_Integer) 0))));
    Var_72 = ((MR_Word) ((MR_hl_field(0, ClassDefn0_22, (MR_Integer) 1))));
    Var_73 = ((MR_Word) ((MR_hl_field(0, ClassDefn0_22, (MR_Integer) 2))));
    Var_74 = ((MR_Word) ((MR_hl_field(0, ClassDefn0_22, (MR_Integer) 3))));
    Var_75 = ((MR_Word) ((MR_hl_field(0, ClassDefn0_22, (MR_Integer) 4))));
    Var_76 = ((MR_Word) ((MR_hl_field(0, ClassDefn0_22, (MR_Integer) 5))));
    Var_78 = ((MR_Word) ((MR_hl_field(0, ClassDefn0_22, (MR_Integer) 7))));
    Var_79 = ((MR_Word) ((MR_hl_field(0, ClassDefn0_22, (MR_Integer) 8))));
    Var_80 = ((MR_Word) ((MR_hl_field(0, ClassDefn0_22, (MR_Integer) 9))));
    Var_81 = ((MR_Unsigned) ((MR_hl_field(0, ClassDefn0_22, (MR_Integer) 10))) & (MR_Integer) 1);
    {
      ClassDefn_33 = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ClassDefn_33, 0) = ((MR_Box) (Var_71));
      MR_hl_field(0, ClassDefn_33, 1) = ((MR_Box) (Var_72));
      MR_hl_field(0, ClassDefn_33, 2) = ((MR_Box) (Var_73));
      MR_hl_field(0, ClassDefn_33, 3) = ((MR_Box) (Var_74));
      MR_hl_field(0, ClassDefn_33, 4) = ((MR_Box) (Var_75));
      MR_hl_field(0, ClassDefn_33, 5) = ((MR_Box) (Var_76));
      MR_hl_field(0, ClassDefn_33, 6) = ((MR_Box) (Var_89));
      MR_hl_field(0, ClassDefn_33, 7) = ((MR_Box) (Var_78));
      MR_hl_field(0, ClassDefn_33, 8) = ((MR_Box) (Var_79));
      MR_hl_field(0, ClassDefn_33, 9) = ((MR_Box) (Var_80));
      MR_hl_field(0, ClassDefn_33, 10) = (MR_Box) ((MR_Unsigned) (Var_81));
    }
    mercury__map__det_update_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0), ((MR_Box) (ClassId_10)), ((MR_Box) (ClassDefn_33)), STATE_VARIABLE_ClassTable_47_42, STATE_VARIABLE_ClassTable_17);
  }
}

static MR_bool MR_CALL 
check_hlds__check_typeclass__find_class_cycle_4_p_0(
  MR_Word ClassId_5,
  MR_Word PathRemaining0_6,
  MR_Word PathSoFar0_7,
  MR_Word * Cycle_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word Head_9;
    MR_Word Tail_10;
    MR_Word PathSoFarClassIds0_11;
    MR_Word PathSoFar1_12;
    MR_Word Var_14 = (MR_Word) (PathRemaining0_6);
    MR_Word Var_15;

    // setup for model_semi tailcalls optimized into a loop
    ;
    succeeded = (Var_14 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Head_9 = ((MR_Word) ((MR_hl_field(1, Var_14, (MR_Integer) 0))));
      Tail_10 = ((MR_Word) ((MR_hl_field(1, Var_14, (MR_Integer) 1))));
      PathSoFarClassIds0_11 = (MR_Word) (PathSoFar0_7);
      {
        Var_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_15, 0) = ((MR_Box) (Head_9));
        MR_hl_field(1, Var_15, 1) = ((MR_Box) (PathSoFarClassIds0_11));
      }
      PathSoFar1_12 = (MR_Word) (Var_15);
      succeeded = parse_tree__prog_data____Unify____class_id_0_0(ClassId_5, Head_9);
      if (succeeded)
      {
        *Cycle_8 = PathSoFar1_12;
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word PathRemaining1_13 = (MR_Word) (Tail_10);
        MR_Word next_value_of_PathRemaining0_6 = PathRemaining1_13;
        MR_Word next_value_of_PathSoFar0_7 = PathSoFar1_12;

        // direct tailcall eliminated
        ;
        PathRemaining0_6 = next_value_of_PathRemaining0_6;
        PathSoFar0_7 = next_value_of_PathSoFar0_7;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
check_hlds__check_typeclass__constraints_are_identical_6_p_0(
  MR_Word OldVars0_7,
  MR_Word OldVarSet_8,
  MR_Word OldConstraints0_9,
  MR_Word Vars_10,
  MR_Word VarSet_11,
  MR_Word Constraints_12)
{
  MR_bool succeeded;
  MR_Word Renaming_14;
  MR_Word OldConstraints1_15;
  MR_Word OldVars_16;
  MR_Word VarRenaming_17;
  MR_Word OldConstraints_18;
  MR_Word Var_13;

  parse_tree__prog_data__tvarset_merge_renaming_4_p_0(VarSet_11, OldVarSet_8, &Var_13, &Renaming_14);
  parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_list_3_p_0(Renaming_14, OldConstraints0_9, &OldConstraints1_15);
  parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_list_3_p_0(Renaming_14, OldVars0_7, &OldVars_16);
  mercury__map__from_corresponding_lists_3_p_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[0]), (MR_Word) (&check_hlds__check_typeclass_scalar_common_1[0]), OldVars_16, Vars_10, &VarRenaming_17);
  parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_list_3_p_0(VarRenaming_17, OldConstraints1_15, &OldConstraints_18);
  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[4]), ((MR_Box) (OldConstraints_18)), ((MR_Box) (Constraints_12)));
  return succeeded;
}

static void MR_CALL 
check_hlds__check_typeclass__check_typeclasses_6_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv21_STATE_VARIABLE_Specs_28;

  check_hlds__check_typeclass__check_typeclass_constraints_on_pred_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv21_STATE_VARIABLE_Specs_28);
  *wrapper_arg_3 = ((MR_Box) (conv21_STATE_VARIABLE_Specs_28));
}

static void MR_CALL 
check_hlds__check_typeclass__check_typeclasses_6_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv19_STATE_VARIABLE_Specs_17;

  check_hlds__check_typeclass__check_fundeps_for_class_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv19_STATE_VARIABLE_Specs_17);
  *wrapper_arg_3 = ((MR_Box) (conv19_STATE_VARIABLE_Specs_17));
}

static void MR_CALL 
check_hlds__check_typeclass__check_typeclasses_6_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv17_STATE_VARIABLE_Specs_12;

  check_hlds__check_typeclass__check_for_missing_concrete_instances_in_class_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv17_STATE_VARIABLE_Specs_12);
  *wrapper_arg_4 = ((MR_Box) (conv17_STATE_VARIABLE_Specs_12));
}

static void MR_CALL 
check_hlds__check_typeclass__check_typeclasses_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box * wrapper_arg_9)
{
  MR_Box closure = closure_arg;
  MR_Word conv13_InstanceDefns_14;
  MR_Word conv12_STATE_VARIABLE_ModuleInfo_33;
  MR_Word conv11_STATE_VARIABLE_QualInfo_35;
  MR_Word conv10_STATE_VARIABLE_Specs_37;

  check_hlds__check_typeclass__generate_instance_method_procs_for_class_10_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv13_InstanceDefns_14, ((MR_Word) (wrapper_arg_4)), &conv12_STATE_VARIABLE_ModuleInfo_33, ((MR_Word) (wrapper_arg_6)), &conv11_STATE_VARIABLE_QualInfo_35, ((MR_Word) (wrapper_arg_8)), &conv10_STATE_VARIABLE_Specs_37);
  *wrapper_arg_3 = ((MR_Box) (conv13_InstanceDefns_14));
  *wrapper_arg_5 = ((MR_Box) (conv12_STATE_VARIABLE_ModuleInfo_33));
  *wrapper_arg_7 = ((MR_Box) (conv11_STATE_VARIABLE_QualInfo_35));
  *wrapper_arg_9 = ((MR_Box) (conv10_STATE_VARIABLE_Specs_37));
}

static void MR_CALL 
check_hlds__check_typeclass__check_typeclasses_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv8_STATE_VARIABLE_Specs_13;

  check_hlds__check_typeclass__check_instance_declaration_types_for_class_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv8_STATE_VARIABLE_Specs_13);
  *wrapper_arg_4 = ((MR_Box) (conv8_STATE_VARIABLE_Specs_13));
}

static void MR_CALL 
check_hlds__check_typeclass__check_typeclasses_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv6_STATE_VARIABLE_Specs_17;

  check_hlds__check_typeclass__report_cyclic_classes_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv6_STATE_VARIABLE_Specs_17);
  *wrapper_arg_3 = ((MR_Box) (conv6_STATE_VARIABLE_Specs_17));
}

static void MR_CALL 
check_hlds__check_typeclass__check_typeclasses_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_ClassTable_17;
  MR_Word conv1_STATE_VARIABLE_Visited_19;
  MR_Word conv0_STATE_VARIABLE_Cycles_21;

  check_hlds__check_typeclass__find_class_cycles_8_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_ClassTable_17, ((MR_Word) (wrapper_arg_4)), &conv1_STATE_VARIABLE_Visited_19, ((MR_Word) (wrapper_arg_6)), &conv0_STATE_VARIABLE_Cycles_21);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_ClassTable_17));
  *wrapper_arg_5 = ((MR_Box) (conv1_STATE_VARIABLE_Visited_19));
  *wrapper_arg_7 = ((MR_Box) (conv0_STATE_VARIABLE_Cycles_21));
}

void MR_CALL 
check_hlds__check_typeclass__check_typeclasses_6_p_0(
  MR_Word ProgressStream_7,
  MR_Word STATE_VARIABLE_ModuleInfo_0_18,
  MR_Word * STATE_VARIABLE_ModuleInfo_19,
  MR_Word STATE_VARIABLE_QualInfo_0_20,
  MR_Word * STATE_VARIABLE_QualInfo_21,
  MR_Word * STATE_VARIABLE_Specs_22)
{
  MR_Word Globals_11;
  MR_Word Verbose_12;
  MR_Word CycleSpecs_14;
  MR_Word InstanceDeclSpecs_15;
  MR_Word STATE_VARIABLE_ModuleInfo_31_31;
  MR_Word STATE_VARIABLE_Specs_33_33;
  MR_Word ClassTable0_56;
  MR_Word ClassIds_57;
  MR_Word ClassTable_58;
  MR_Word Cycles_60;
  MR_Word Var_62;
  MR_Word Var_65;
  MR_Word InstanceTable_74;
  MR_Word Var_75;
  MR_Box conv5_ClassTable_58;
  MR_Box conv4_Var_59;
  MR_Box conv3_Cycles_60;
  MR_Box conv7_CycleSpecs_14;
  MR_Box conv9_InstanceDeclSpecs_15;

  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_18, &Globals_11);
  libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 73, &Verbose_12);
  libs__file_util__maybe_write_string_5_p_0(ProgressStream_7, Verbose_12, (MR_String) "% Checking for cyclic classes...\n");
  hlds__hlds_module__module_info_get_class_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_18, &ClassTable0_56);
  ClassIds_57 = mercury__map__keys_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0), ClassTable0_56);
  Var_62 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0));
  mercury__list__foldl3_8_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&check_hlds__check_typeclass_scalar_common_2[0]), (MR_Word) (&check_hlds__check_typeclass_scalar_common_1[1]), (MR_Word) (&check_hlds__check_typeclass_scalar_common_1[2]), (MR_Word) (&check_hlds__check_typeclass_scalar_common_4[1]), ClassIds_57, ((MR_Box) (ClassTable0_56)), &conv5_ClassTable_58, ((MR_Box) (Var_62)), &conv4_Var_59, ((MR_Box) ((MR_Unsigned) 0U)), &conv3_Cycles_60);
  ClassTable_58 = ((MR_Word) (conv5_ClassTable_58));
  Cycles_60 = ((MR_Word) (conv3_Cycles_60));
  {
    Var_65 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_65, 0) = ((MR_Box) (&check_hlds__check_typeclass_scalar_common_5[1]));
    MR_hl_field(0, Var_65, 1) = ((MR_Box) (check_hlds__check_typeclass__check_typeclasses_6_p_0_2));
    MR_hl_field(0, Var_65, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_65, 3) = ((MR_Box) (ClassTable_58));
  }
  mercury__list__foldl_4_p_0((MR_Word) (&check_hlds__check_typeclass__check_hlds__check_typeclass__type_ctor_info_class_path_0), (MR_Word) (&check_hlds__check_typeclass_scalar_common_1[3]), Var_65, Cycles_60, ((MR_Box) ((MR_Unsigned) 0U)), &conv7_CycleSpecs_14);
  CycleSpecs_14 = ((MR_Word) (conv7_CycleSpecs_14));
  hlds__hlds_module__module_info_set_class_table_3_p_0(ClassTable_58, STATE_VARIABLE_ModuleInfo_0_18, &STATE_VARIABLE_ModuleInfo_31_31);
  libs__file_util__maybe_write_string_5_p_0(ProgressStream_7, Verbose_12, (MR_String) "% Checking instance declaration types...\n");
  hlds__hlds_module__module_info_get_instance_table_2_p_0(STATE_VARIABLE_ModuleInfo_31_31, &InstanceTable_74);
  {
    Var_75 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_75, 0) = ((MR_Box) (&check_hlds__check_typeclass_scalar_common_7[0]));
    MR_hl_field(0, Var_75, 1) = ((MR_Box) (check_hlds__check_typeclass__check_typeclasses_6_p_0_3));
    MR_hl_field(0, Var_75, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_75, 3) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_31_31));
  }
  mercury__map__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&check_hlds__check_typeclass_scalar_common_1[5]), (MR_Word) (&check_hlds__check_typeclass_scalar_common_1[3]), Var_75, InstanceTable_74, ((MR_Box) ((MR_Unsigned) 0U)), &conv9_InstanceDeclSpecs_15);
  InstanceDeclSpecs_15 = ((MR_Word) (conv9_InstanceDeclSpecs_15));
  STATE_VARIABLE_Specs_33_33 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), CycleSpecs_14, InstanceDeclSpecs_15);
  if ((InstanceDeclSpecs_15 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word STATE_VARIABLE_Specs_39_39;
    MR_Word STATE_VARIABLE_Specs_43_43;
    MR_Word STATE_VARIABLE_Specs_47_47;
    MR_Word STATE_VARIABLE_Specs_51_51;
    MR_Word ClassTable_79;
    MR_Word InstanceTable0_80;
    MR_Word InstanceTable_81;
    MR_Word NewSpecs_82;
    MR_Word Globals_83;
    MR_Word Errors_84;
    MR_Word Var_85;
    MR_Word STATE_VARIABLE_ModuleInfo_23_86;
    MR_Word InstanceTable_94;
    MR_Word InstanceTable_99;
    MR_Word ClassIds_100;
    MR_Word Var_101;
    MR_Word PredIds_105;
    MR_Word Var_106;
    MR_Box conv16_STATE_VARIABLE_ModuleInfo_23_86;
    MR_Box conv15_STATE_VARIABLE_QualInfo_21;
    MR_Box conv14_NewSpecs_82;
    MR_Box conv18_STATE_VARIABLE_Specs_43_43;
    MR_Box conv20_STATE_VARIABLE_Specs_47_47;
    MR_Box conv22_STATE_VARIABLE_Specs_51_51;

    libs__file_util__maybe_write_string_5_p_0(ProgressStream_7, Verbose_12, (MR_String) "% Checking typeclass instances...\n");
    hlds__hlds_module__module_info_get_class_table_2_p_0(STATE_VARIABLE_ModuleInfo_31_31, &ClassTable_79);
    hlds__hlds_module__module_info_get_instance_table_2_p_0(STATE_VARIABLE_ModuleInfo_31_31, &InstanceTable0_80);
    {
      Var_85 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_85, 0) = ((MR_Box) (&check_hlds__check_typeclass_scalar_common_8[0]));
      MR_hl_field(0, Var_85, 1) = ((MR_Box) (check_hlds__check_typeclass__check_typeclasses_6_p_0_4));
      MR_hl_field(0, Var_85, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_85, 3) = ((MR_Box) (ClassTable_79));
    }
    mercury__map__map_foldl3_9_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&check_hlds__check_typeclass_scalar_common_1[5]), (MR_Word) (&check_hlds__check_typeclass_scalar_common_1[5]), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0), (MR_Word) (&check_hlds__check_typeclass_scalar_common_1[3]), Var_85, InstanceTable0_80, &InstanceTable_81, ((MR_Box) (STATE_VARIABLE_ModuleInfo_31_31)), &conv16_STATE_VARIABLE_ModuleInfo_23_86, ((MR_Box) (STATE_VARIABLE_QualInfo_0_20)), &conv15_STATE_VARIABLE_QualInfo_21, ((MR_Box) ((MR_Unsigned) 0U)), &conv14_NewSpecs_82);
    STATE_VARIABLE_ModuleInfo_23_86 = ((MR_Word) (conv16_STATE_VARIABLE_ModuleInfo_23_86));
    *STATE_VARIABLE_QualInfo_21 = ((MR_Word) (conv15_STATE_VARIABLE_QualInfo_21));
    NewSpecs_82 = ((MR_Word) (conv14_NewSpecs_82));
    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_23_86, &Globals_83);
    Errors_84 = parse_tree__error_util__contains_errors_2_f_0(Globals_83, NewSpecs_82);
    switch (Errors_84) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        hlds__hlds_module__module_info_set_instance_table_3_p_0(InstanceTable_81, STATE_VARIABLE_ModuleInfo_23_86, STATE_VARIABLE_ModuleInfo_19);
        break;
      case (MR_Integer) 1:
        *STATE_VARIABLE_ModuleInfo_19 = STATE_VARIABLE_ModuleInfo_23_86;
        break;
    }
    STATE_VARIABLE_Specs_39_39 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), NewSpecs_82, STATE_VARIABLE_Specs_33_33);
    libs__file_util__maybe_write_string_5_p_0(ProgressStream_7, Verbose_12, (MR_String) "% Checking for missing concrete instances...\n");
    hlds__hlds_module__module_info_get_instance_table_2_p_0(*STATE_VARIABLE_ModuleInfo_19, &InstanceTable_94);
    mercury__map__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&check_hlds__check_typeclass_scalar_common_1[5]), (MR_Word) (&check_hlds__check_typeclass_scalar_common_1[3]), (MR_Word) (&check_hlds__check_typeclass_scalar_common_2[5]), InstanceTable_94, ((MR_Box) (STATE_VARIABLE_Specs_39_39)), &conv18_STATE_VARIABLE_Specs_43_43);
    STATE_VARIABLE_Specs_43_43 = ((MR_Word) (conv18_STATE_VARIABLE_Specs_43_43));
    libs__file_util__maybe_write_string_5_p_0(ProgressStream_7, Verbose_12, (MR_String) "% Checking functional dependencies on instances...\n");
    hlds__hlds_module__module_info_get_instance_table_2_p_0(*STATE_VARIABLE_ModuleInfo_19, &InstanceTable_99);
    mercury__map__keys_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&check_hlds__check_typeclass_scalar_common_1[5]), InstanceTable_99, &ClassIds_100);
    {
      Var_101 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_101, 0) = ((MR_Box) (&check_hlds__check_typeclass_scalar_common_5[3]));
      MR_hl_field(0, Var_101, 1) = ((MR_Box) (check_hlds__check_typeclass__check_typeclasses_6_p_0_6));
      MR_hl_field(0, Var_101, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_101, 3) = ((MR_Box) (*STATE_VARIABLE_ModuleInfo_19));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&check_hlds__check_typeclass_scalar_common_1[3]), Var_101, ClassIds_100, ((MR_Box) (STATE_VARIABLE_Specs_43_43)), &conv20_STATE_VARIABLE_Specs_47_47);
    STATE_VARIABLE_Specs_47_47 = ((MR_Word) (conv20_STATE_VARIABLE_Specs_47_47));
    libs__file_util__maybe_write_string_5_p_0(ProgressStream_7, Verbose_12, (MR_String) "% Checking typeclass constraints on predicates...\n");
    hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(*STATE_VARIABLE_ModuleInfo_19, &PredIds_105);
    {
      Var_106 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_106, 0) = ((MR_Box) (&check_hlds__check_typeclass_scalar_common_7[1]));
      MR_hl_field(0, Var_106, 1) = ((MR_Box) (check_hlds__check_typeclass__check_typeclasses_6_p_0_7));
      MR_hl_field(0, Var_106, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_106, 3) = ((MR_Box) (ProgressStream_7));
      MR_hl_field(0, Var_106, 4) = ((MR_Box) (*STATE_VARIABLE_ModuleInfo_19));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&check_hlds__check_typeclass_scalar_common_1[3]), Var_106, PredIds_105, ((MR_Box) (STATE_VARIABLE_Specs_47_47)), &conv22_STATE_VARIABLE_Specs_51_51);
    STATE_VARIABLE_Specs_51_51 = ((MR_Word) (conv22_STATE_VARIABLE_Specs_51_51));
    libs__file_util__maybe_write_string_5_p_0(ProgressStream_7, Verbose_12, (MR_String) "% Checking typeclass constraints on data constructors...\n");
    check_hlds__check_typeclass__check_typeclass_constraints_on_data_ctors_3_p_0(*STATE_VARIABLE_ModuleInfo_19, STATE_VARIABLE_Specs_51_51, STATE_VARIABLE_Specs_22);
  }
  else
  {
    *STATE_VARIABLE_ModuleInfo_19 = STATE_VARIABLE_ModuleInfo_31_31;
    *STATE_VARIABLE_QualInfo_21 = STATE_VARIABLE_QualInfo_0_20;
    *STATE_VARIABLE_Specs_22 = STATE_VARIABLE_Specs_33_33;
  }
}

static void MR_CALL 
check_hlds__check_typeclass__check_typeclass_constraints_on_data_ctors_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Specs_20;

  check_hlds__check_typeclass__check_typeclass_constraints_on_type_data_ctors_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Specs_20);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_20));
}

static void MR_CALL 
check_hlds__check_typeclass__check_typeclass_constraints_on_data_ctors_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word STATE_VARIABLE_Specs_0_8,
  MR_Word * STATE_VARIABLE_Specs_9)
{
  MR_Word TypeTable_6;
  MR_Word TypeCtorsDefns_7;
  MR_Word Var_10;
  MR_Box conv1_STATE_VARIABLE_Specs_9;

  hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_4, &TypeTable_6);
  hlds__hlds_data__get_all_type_ctor_defns_2_p_0(TypeTable_6, &TypeCtorsDefns_7);
  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (&check_hlds__check_typeclass_scalar_common_5[0]));
    MR_hl_field(0, Var_10, 1) = ((MR_Box) (check_hlds__check_typeclass__check_typeclass_constraints_on_data_ctors_3_p_0_1));
    MR_hl_field(0, Var_10, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_10, 3) = ((MR_Box) (ModuleInfo_4));
  }
  mercury__list__foldl_4_p_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_2[2]), (MR_Word) (&check_hlds__check_typeclass_scalar_common_1[3]), Var_10, TypeCtorsDefns_7, ((MR_Box) (STATE_VARIABLE_Specs_0_8)), &conv1_STATE_VARIABLE_Specs_9);
  *STATE_VARIABLE_Specs_9 = ((MR_Word) (conv1_STATE_VARIABLE_Specs_9));
}

static MR_bool MR_CALL 
check_hlds__check_typeclass____Unify____bad_instance_type_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__check_typeclass____Unify____bad_instance_type_kind_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__check_typeclass____Compare____bad_instance_type_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__check_typeclass____Compare____bad_instance_type_kind_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__check_typeclass____Unify____class_path_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__check_typeclass____Unify____class_path_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__check_typeclass____Compare____class_path_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__check_typeclass____Compare____class_path_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__check_typeclass____Unify____induced_fundep_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__check_typeclass____Unify____induced_fundep_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__check_typeclass____Compare____induced_fundep_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__check_typeclass____Compare____induced_fundep_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__check_typeclass____Unify____induced_fundeps_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__check_typeclass____Unify____induced_fundeps_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__check_typeclass____Compare____induced_fundeps_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__check_typeclass____Compare____induced_fundeps_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__check_typeclass____Unify____module_quals_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__check_typeclass____Unify____module_quals_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__check_typeclass____Compare____module_quals_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__check_typeclass____Compare____module_quals_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__check_typeclass____Unify____quant_error_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__check_typeclass____Unify____quant_error_type_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__check_typeclass____Compare____quant_error_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__check_typeclass____Compare____quant_error_type_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__check_typeclass____Unify____type_limit_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__check_typeclass____Unify____type_limit_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__check_typeclass____Compare____type_limit_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__check_typeclass____Compare____type_limit_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__check_typeclass____Unify____type_vector_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__check_typeclass____Unify____type_vector_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__check_typeclass____Compare____type_vector_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__check_typeclass____Compare____type_vector_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__check_typeclass____Unify____type_vector_instances_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__check_typeclass____Unify____type_vector_instances_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__check_typeclass____Compare____type_vector_instances_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__check_typeclass____Compare____type_vector_instances_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__check_typeclass____Unify____type_vector_instances_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__check_typeclass____Unify____type_vector_instances_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__check_typeclass____Compare____type_vector_instances_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__check_typeclass____Compare____type_vector_instances_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__check_typeclass____Unify____which_types_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__check_typeclass____Unify____which_types_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__check_typeclass____Compare____which_types_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__check_typeclass____Compare____which_types_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__check_hlds__check_typeclass__init(void)
{
}

void mercury__check_hlds__check_typeclass__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&check_hlds__check_typeclass__check_hlds__check_typeclass__type_ctor_info_bad_instance_type_kind_0);
	MR_register_type_ctor_info(&check_hlds__check_typeclass__check_hlds__check_typeclass__type_ctor_info_class_path_0);
	MR_register_type_ctor_info(&check_hlds__check_typeclass__check_hlds__check_typeclass__type_ctor_info_induced_fundep_0);
	MR_register_type_ctor_info(&check_hlds__check_typeclass__check_hlds__check_typeclass__type_ctor_info_induced_fundeps_0);
	MR_register_type_ctor_info(&check_hlds__check_typeclass__check_hlds__check_typeclass__type_ctor_info_module_quals_0);
	MR_register_type_ctor_info(&check_hlds__check_typeclass__check_hlds__check_typeclass__type_ctor_info_quant_error_type_0);
	MR_register_type_ctor_info(&check_hlds__check_typeclass__check_hlds__check_typeclass__type_ctor_info_type_limit_0);
	MR_register_type_ctor_info(&check_hlds__check_typeclass__check_hlds__check_typeclass__type_ctor_info_type_vector_0);
	MR_register_type_ctor_info(&check_hlds__check_typeclass__check_hlds__check_typeclass__type_ctor_info_type_vector_instances_0);
	MR_register_type_ctor_info(&check_hlds__check_typeclass__check_hlds__check_typeclass__type_ctor_info_type_vector_instances_map_0);
	MR_register_type_ctor_info(&check_hlds__check_typeclass__check_hlds__check_typeclass__type_ctor_info_which_types_0);
}

void mercury__check_hlds__check_typeclass__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__check_typeclass__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module check_hlds.check_typeclass.
