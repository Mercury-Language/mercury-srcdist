/*
** Automatically generated from `abstract_mode_constraints.m'
** by the Mercury compiler,
** version rotd-2017-07-25
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


/* :- module check_hlds.abstract_mode_constraints. */
/* :- implementation. */

/*
INIT mercury__check_hlds__abstract_mode_constraints__init
ENDINIT
*/

#include "check_hlds.abstract_mode_constraints.mih"


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
#include "check_hlds.proc_requests.mih"
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




static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__abstract_mode_constraints__varset__pti_varset_1__plain_check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__abstract_mode_constraints__term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__abstract_mode_constraints__tree234__pti_tree234_2__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0__plain_bool__type_ctor_info_bool_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__abstract_mode_constraints__term__pti_var_1__plain_check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0;

static const MR_PseudoTypeInfo check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__field_types_mc_ann_constraint_0_0[2];

static const MR_DuFunctorDesc check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_functor_desc_mc_ann_constraint_0_0;

static const MR_DuFunctorDescPtr check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_stag_ordered_mc_ann_constraint_0_0[1];

static const MR_DuPtagLayout check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_ptag_ordered_mc_ann_constraint_0[1];

static const MR_DuFunctorDescPtr check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_name_ordered_mc_ann_constraint_0[1];

static const MR_Integer check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__functor_number_map_mc_ann_constraint_0[1];

static const MR_Integer check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__functor_number_map_mc_annotation_0[1];

static const MR_NotagFunctorDesc check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__notag_functor_desc_mc_annotation_0;

static const MR_FA_TypeInfo_Struct2 check_hlds__abstract_mode_constraints__tree234__ti_tree234_2term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0bool__type_ctor_info_bool_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__ti_var_constraint_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0;

static const MR_PseudoTypeInfo check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__field_types_mc_constraint_0_0[1];

static const MR_DuFunctorDesc check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_functor_desc_mc_constraint_0_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__abstract_mode_constraints__list__ti_list_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_constraint_0;

static const MR_PseudoTypeInfo check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__field_types_mc_constraint_0_1[1];

static const MR_DuFunctorDesc check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_functor_desc_mc_constraint_0_1;

static const MR_PseudoTypeInfo check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__field_types_mc_constraint_0_2[1];

static const MR_DuFunctorDesc check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_functor_desc_mc_constraint_0_2;

static const MR_DuFunctorDescPtr check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_stag_ordered_mc_constraint_0_0[1];

static const MR_DuFunctorDescPtr check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_stag_ordered_mc_constraint_0_1[1];

static const MR_DuFunctorDescPtr check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_stag_ordered_mc_constraint_0_2[1];

static const MR_DuPtagLayout check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_ptag_ordered_mc_constraint_0[3];

static const MR_DuFunctorDescPtr check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_name_ordered_mc_constraint_0[3];

static const MR_Integer check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__functor_number_map_mc_constraint_0[3];

static const MR_EnumFunctorDesc check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__enum_functor_desc_mc_type_0_0;

static const MR_EnumFunctorDescPtr check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__enum_value_ordered_mc_type_0[1];

static const MR_EnumFunctorDescPtr check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__enum_name_ordered_mc_type_0[1];

static const MR_Integer check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__functor_number_map_mc_type_0[1];

static const MR_FA_TypeInfo_Struct1 check_hlds__abstract_mode_constraints__varset__ti_varset_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__abstract_mode_constraints__list__ti_list_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_ann_constraint_0;

static const MR_FA_TypeInfo_Struct2 check_hlds__abstract_mode_constraints__tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_ann_constraint_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__abstract_mode_constraints__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_id_0;

static const MR_PseudoTypeInfo check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__field_types_pred_p_c_constraints_0_0[3];

static const MR_ConstString check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__field_names_pred_p_c_constraints_0_0[3];

static const MR_DuFunctorDesc check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_functor_desc_pred_p_c_constraints_0_0;

static const MR_DuFunctorDescPtr check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_stag_ordered_pred_p_c_constraints_0_0[1];

static const MR_DuPtagLayout check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_ptag_ordered_pred_p_c_constraints_0[1];

static const MR_DuFunctorDescPtr check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_name_ordered_pred_p_c_constraints_0[1];

static const MR_Integer check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__functor_number_map_pred_p_c_constraints_0[1];

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__abstract_mode_constraints__term__pti_var_1__pseudo_1;

static const MR_PseudoTypeInfo check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__field_types_var_constraint_1_0[2];

static const MR_DuFunctorDesc check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_functor_desc_var_constraint_1_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__abstract_mode_constraints__list__pti_list_1__pseudo_term__pti_var_1__pseudo_1;

static const MR_PseudoTypeInfo check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__field_types_var_constraint_1_1[1];

static const MR_DuFunctorDesc check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_functor_desc_var_constraint_1_1;

static const MR_PseudoTypeInfo check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__field_types_var_constraint_1_2[2];

static const MR_DuFunctorDesc check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_functor_desc_var_constraint_1_2;

static const MR_PseudoTypeInfo check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__field_types_var_constraint_1_3[2];

static const MR_DuFunctorDesc check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_functor_desc_var_constraint_1_3;

static const MR_PseudoTypeInfo check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__field_types_var_constraint_1_4[1];

static const MR_DuFunctorDesc check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_functor_desc_var_constraint_1_4;

static const MR_PseudoTypeInfo check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__field_types_var_constraint_1_5[1];

static const MR_DuFunctorDesc check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_functor_desc_var_constraint_1_5;

static const MR_DuFunctorDescPtr check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_stag_ordered_var_constraint_1_0[1];

static const MR_DuFunctorDescPtr check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_stag_ordered_var_constraint_1_1[1];

static const MR_DuFunctorDescPtr check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_stag_ordered_var_constraint_1_2[1];

static const MR_DuFunctorDescPtr check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_stag_ordered_var_constraint_1_3[3];

static const MR_DuPtagLayout check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_ptag_ordered_var_constraint_1[4];

static const MR_DuFunctorDescPtr check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_name_ordered_var_constraint_1[6];

static const MR_Integer check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__functor_number_map_var_constraint_1[6];

static void MR_CALL 
check_hlds__abstract_mode_constraints__pretty_print_binding_5_p_0(
  MR_Word check_hlds__abstract_mode_constraints__VarSet_6,
  MR_Word check_hlds__abstract_mode_constraints__Bindings_7,
  MR_Word check_hlds__abstract_mode_constraints__Var_8);

static void MR_CALL 
check_hlds__abstract_mode_constraints__pretty_print_bindings_6_p_0_1(
  MR_Box check_hlds__abstract_mode_constraints__closure_arg,
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_1,
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_2,
  MR_Box * check_hlds__abstract_mode_constraints__wrapper_arg_3);

static void MR_CALL 
check_hlds__abstract_mode_constraints__pretty_print_bindings_6_p_0(
  MR_Word check_hlds__abstract_mode_constraints__VarSet_7,
  MR_Word check_hlds__abstract_mode_constraints__Bindings_8,
  MR_Integer check_hlds__abstract_mode_constraints__N_9,
  MR_Integer * check_hlds__abstract_mode_constraints__HeadVar__4_4);

static void MR_CALL 
check_hlds__abstract_mode_constraints__dump_ann_constraint_6_p_0(
  MR_Word check_hlds__abstract_mode_constraints__Globals_7,
  MR_Word check_hlds__abstract_mode_constraints__VarSet_8,
  MR_Integer check_hlds__abstract_mode_constraints__Indent_9,
  MR_Word check_hlds__abstract_mode_constraints__AnnConstraint_10);

static void MR_CALL 
check_hlds__abstract_mode_constraints__dump_constraint_7_p_0_2(
  MR_Box check_hlds__abstract_mode_constraints__closure_arg,
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_1,
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_2,
  MR_Box * check_hlds__abstract_mode_constraints__wrapper_arg_3);

static void MR_CALL 
check_hlds__abstract_mode_constraints__dump_constraint_7_p_0_1(
  MR_Box check_hlds__abstract_mode_constraints__closure_arg,
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_1,
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_2,
  MR_Box * check_hlds__abstract_mode_constraints__wrapper_arg_3);

static void MR_CALL 
check_hlds__abstract_mode_constraints__dump_constraint_7_p_0(
  MR_Word check_hlds__abstract_mode_constraints__Globals_8,
  MR_Word check_hlds__abstract_mode_constraints__VarSet_9,
  MR_Integer check_hlds__abstract_mode_constraints__Indent_10,
  MR_Word check_hlds__abstract_mode_constraints__Annotation_11,
  MR_Word check_hlds__abstract_mode_constraints__Constraint_12);

static void MR_CALL 
check_hlds__abstract_mode_constraints__dump_var_constraint_7_p_0(
  MR_Word check_hlds__abstract_mode_constraints__Globals_8,
  MR_Word check_hlds__abstract_mode_constraints__VarSet_9,
  MR_Integer check_hlds__abstract_mode_constraints__Indent_10,
  MR_Word check_hlds__abstract_mode_constraints__Annotation_11,
  MR_Word check_hlds__abstract_mode_constraints__Constraint_12);

static void MR_CALL 
check_hlds__abstract_mode_constraints__mc_var_list_to_string_3_p_0(
  MR_Word check_hlds__abstract_mode_constraints__HeadVar__1_1,
  MR_Word check_hlds__abstract_mode_constraints__HeadVar__2_2,
  MR_String * check_hlds__abstract_mode_constraints__HeadVar__3_3);

static MR_Box MR_CALL 
check_hlds__abstract_mode_constraints__all_constraints_for_proc_2_f_0_1(
  MR_Box check_hlds__abstract_mode_constraints__closure_arg,
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_1);

static MR_Box MR_CALL 
check_hlds__abstract_mode_constraints__allproc_constraints_1_f_0_1(
  MR_Box check_hlds__abstract_mode_constraints__closure_arg,
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_1);

static void MR_CALL 
check_hlds__abstract_mode_constraints__pretty_print_solutions_4_p_0_1(
  MR_Box check_hlds__abstract_mode_constraints__closure_arg,
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_1,
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_2,
  MR_Box * check_hlds__abstract_mode_constraints__wrapper_arg_3,
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_4,
  MR_Box * check_hlds__abstract_mode_constraints__wrapper_arg_5);

static void MR_CALL 
check_hlds__abstract_mode_constraints__dump_constraints_and_annotations_5_p_0_1(
  MR_Box check_hlds__abstract_mode_constraints__closure_arg,
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_1,
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_2,
  MR_Box * check_hlds__abstract_mode_constraints__wrapper_arg_3);

static void MR_CALL 
check_hlds__abstract_mode_constraints__pretty_print_constraints_indent_5_p_0(
  MR_Word check_hlds__abstract_mode_constraints__HeadVar__1_1,
  MR_String check_hlds__abstract_mode_constraints__HeadVar__2_2,
  MR_Word check_hlds__abstract_mode_constraints__HeadVar__3_3);

static void MR_CALL 
check_hlds__abstract_mode_constraints__pretty_print_var_constraint_4_p_0(
  MR_Word check_hlds__abstract_mode_constraints__VarSet_5,
  MR_Word check_hlds__abstract_mode_constraints__Constraint_6);

static void MR_CALL 
check_hlds__abstract_mode_constraints__pretty_print_mc_vars_4_p_0(
  MR_Word check_hlds__abstract_mode_constraints__HeadVar__1_1,
  MR_Word check_hlds__abstract_mode_constraints__HeadVar__2_2);

static MR_bool MR_CALL 
check_hlds__abstract_mode_constraints____Unify____mc_ann_constraint_0_0_10001(
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_1,
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_2);

static void MR_CALL 
check_hlds__abstract_mode_constraints____Compare____mc_ann_constraint_0_0_10001(
  MR_Box * check_hlds__abstract_mode_constraints__wrapper_arg_1,
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_2,
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__abstract_mode_constraints____Unify____mc_annotation_0_0_10001(
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_1,
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_2);

static void MR_CALL 
check_hlds__abstract_mode_constraints____Compare____mc_annotation_0_0_10001(
  MR_Box * check_hlds__abstract_mode_constraints__wrapper_arg_1,
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_2,
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__abstract_mode_constraints____Unify____mc_bindings_0_0_10001(
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_1,
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_2);

static void MR_CALL 
check_hlds__abstract_mode_constraints____Compare____mc_bindings_0_0_10001(
  MR_Box * check_hlds__abstract_mode_constraints__wrapper_arg_1,
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_2,
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__abstract_mode_constraints____Unify____mc_constraint_0_0_10001(
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_1,
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_2);

static void MR_CALL 
check_hlds__abstract_mode_constraints____Compare____mc_constraint_0_0_10001(
  MR_Box * check_hlds__abstract_mode_constraints__wrapper_arg_1,
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_2,
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__abstract_mode_constraints____Unify____mc_type_0_0_10001(
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_1,
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_2);

static void MR_CALL 
check_hlds__abstract_mode_constraints____Compare____mc_type_0_0_10001(
  MR_Box * check_hlds__abstract_mode_constraints__wrapper_arg_1,
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_2,
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__abstract_mode_constraints____Unify____mc_var_0_0_10001(
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_1,
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_2);

static void MR_CALL 
check_hlds__abstract_mode_constraints____Compare____mc_var_0_0_10001(
  MR_Box * check_hlds__abstract_mode_constraints__wrapper_arg_1,
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_2,
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__abstract_mode_constraints____Unify____mc_varset_0_0_10001(
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_1,
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_2);

static void MR_CALL 
check_hlds__abstract_mode_constraints____Compare____mc_varset_0_0_10001(
  MR_Box * check_hlds__abstract_mode_constraints__wrapper_arg_1,
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_2,
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__abstract_mode_constraints____Unify____pred_p_c_constraints_0_0_10001(
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_1,
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_2);

static void MR_CALL 
check_hlds__abstract_mode_constraints____Compare____pred_p_c_constraints_0_0_10001(
  MR_Box * check_hlds__abstract_mode_constraints__wrapper_arg_1,
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_2,
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__abstract_mode_constraints____Unify____var_constraint_1_0_10001(
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_1,
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_2,
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_3);

static void MR_CALL 
check_hlds__abstract_mode_constraints____Compare____var_constraint_1_0_10001(
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_1,
  MR_Box * check_hlds__abstract_mode_constraints__wrapper_arg_2,
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_3,
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_4);

static MR_bool MR_CALL 
check_hlds__abstract_mode_constraints____Unify____var_constraint_0_0_10001(
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_1,
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_2);

static void MR_CALL 
check_hlds__abstract_mode_constraints____Compare____var_constraint_0_0_10001(
  MR_Box * check_hlds__abstract_mode_constraints__wrapper_arg_1,
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_2,
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_3);


static /* final */ const MR_Box check_hlds__abstract_mode_constraints_scalar_common_1[14][2];

static /* final */ const MR_Box check_hlds__abstract_mode_constraints_scalar_common_2[4][3];

static /* final */ const MR_Box check_hlds__abstract_mode_constraints_scalar_common_3[2][9];

static /* final */ const MR_Box check_hlds__abstract_mode_constraints_scalar_common_4[1][5];

static /* final */ const MR_Box check_hlds__abstract_mode_constraints_scalar_common_5[1][10];

static /* final */ const MR_Box check_hlds__abstract_mode_constraints_scalar_common_6[1][8];




static /* final */ const MR_Box check_hlds__abstract_mode_constraints_scalar_common_1[14][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_constraint_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_var_constraint_1)),
    ((MR_Box) (&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_ann_constraint_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "conj("))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__abstract_mode_constraints_scalar_common_1[6]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) ") end conj"))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__abstract_mode_constraints_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "disj("))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__abstract_mode_constraints_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) ") end disj"))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__abstract_mode_constraints_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box check_hlds__abstract_mode_constraints_scalar_common_2[4][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__abstract_mode_constraints_scalar_common_1[0])),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&check_hlds__abstract_mode_constraints_scalar_common_1[4]))
  },
  /* row 2 */
  {
    ((MR_Box) (&check_hlds__abstract_mode_constraints_scalar_common_4[0])),
    ((MR_Box) (check_hlds__abstract_mode_constraints__allproc_constraints_1_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&check_hlds__abstract_mode_constraints_scalar_common_4[0])),
    ((MR_Box) (check_hlds__abstract_mode_constraints__all_constraints_for_proc_2_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__abstract_mode_constraints_scalar_common_3[2][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&check_hlds__abstract_mode_constraints__varset__pti_varset_1__plain_check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_ann_constraint_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&check_hlds__abstract_mode_constraints__varset__pti_varset_1__plain_check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0)),
    ((MR_Box) (&check_hlds__abstract_mode_constraints__tree234__pti_tree234_2__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0__plain_bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box check_hlds__abstract_mode_constraints_scalar_common_4[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_ann_constraint_0)),
    ((MR_Box) (&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_constraint_0))
  },
};

static /* final */ const MR_Box check_hlds__abstract_mode_constraints_scalar_common_5[1][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&check_hlds__abstract_mode_constraints__varset__pti_varset_1__plain_check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_annotation_0)),
    ((MR_Box) (&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_constraint_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box check_hlds__abstract_mode_constraints_scalar_common_6[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&check_hlds__abstract_mode_constraints__varset__pti_varset_1__plain_check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0)),
    ((MR_Box) (&check_hlds__abstract_mode_constraints__tree234__pti_tree234_2__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0__plain_bool__type_ctor_info_bool_0)),
    ((MR_Box) (&check_hlds__abstract_mode_constraints__term__pti_var_1__plain_check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__abstract_mode_constraints__varset__pti_varset_1__plain_check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__abstract_mode_constraints__term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__abstract_mode_constraints__tree234__pti_tree234_2__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0__plain_bool__type_ctor_info_bool_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &check_hlds__abstract_mode_constraints__term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0,
    (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__abstract_mode_constraints__term__pti_var_1__plain_check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0
  }
};

static const MR_PseudoTypeInfo check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__field_types_mc_ann_constraint_0_0[2] = {
  (MR_PseudoTypeInfo) &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_constraint_0,
  (MR_PseudoTypeInfo) &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_annotation_0
};

static const MR_DuFunctorDesc check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_functor_desc_mc_ann_constraint_0_0 = {
  (MR_String) "mc_ann_constraint",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__field_types_mc_ann_constraint_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_stag_ordered_mc_ann_constraint_0_0[1] = {
  &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_functor_desc_mc_ann_constraint_0_0
};

static const MR_DuPtagLayout check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_ptag_ordered_mc_ann_constraint_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_stag_ordered_mc_ann_constraint_0_0
  }
};

static const MR_DuFunctorDescPtr check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_name_ordered_mc_ann_constraint_0[1] = {
  &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_functor_desc_mc_ann_constraint_0_0
};

static const MR_Integer check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__functor_number_map_mc_ann_constraint_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_ann_constraint_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__abstract_mode_constraints____Unify____mc_ann_constraint_0_0_10001)),
  ((MR_Box) (check_hlds__abstract_mode_constraints____Compare____mc_ann_constraint_0_0_10001)),
  (MR_String) "check_hlds.abstract_mode_constraints",
  (MR_String) "mc_ann_constraint",
  {     check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_name_ordered_mc_ann_constraint_0 },
  {     check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_ptag_ordered_mc_ann_constraint_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__functor_number_map_mc_ann_constraint_0
};

static const MR_Integer check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__functor_number_map_mc_annotation_0[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__notag_functor_desc_mc_annotation_0 = {
  (MR_String) "mc_annotation",
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_String) "context",
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_annotation_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (check_hlds__abstract_mode_constraints____Unify____mc_annotation_0_0_10001)),
  ((MR_Box) (check_hlds__abstract_mode_constraints____Compare____mc_annotation_0_0_10001)),
  (MR_String) "check_hlds.abstract_mode_constraints",
  (MR_String) "mc_annotation",
  {     &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__notag_functor_desc_mc_annotation_0 },
  {     &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__notag_functor_desc_mc_annotation_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__functor_number_map_mc_annotation_0
};

static const MR_FA_TypeInfo_Struct2 check_hlds__abstract_mode_constraints__tree234__ti_tree234_2term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0bool__type_ctor_info_bool_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &check_hlds__abstract_mode_constraints__term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0,
    (MR_TypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
  }
};

const MR_TypeCtorInfo_Struct check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_bindings_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__abstract_mode_constraints____Unify____mc_bindings_0_0_10001)),
  ((MR_Box) (check_hlds__abstract_mode_constraints____Compare____mc_bindings_0_0_10001)),
  (MR_String) "check_hlds.abstract_mode_constraints",
  (MR_String) "mc_bindings",
  {     NULL },
  {     (MR_PseudoTypeInfo) &check_hlds__abstract_mode_constraints__tree234__ti_tree234_2term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0bool__type_ctor_info_bool_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_FA_TypeInfo_Struct1 check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__ti_var_constraint_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0 = {
  &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_var_constraint_1,
  {
    (MR_TypeInfo) &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0
  }
};

static const MR_PseudoTypeInfo check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__field_types_mc_constraint_0_0[1] = {
  (MR_PseudoTypeInfo) &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__ti_var_constraint_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0
};

static const MR_DuFunctorDesc check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_functor_desc_mc_constraint_0_0 = {
  (MR_String) "mc_atomic",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__field_types_mc_constraint_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_FA_TypeInfo_Struct1 check_hlds__abstract_mode_constraints__list__ti_list_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_constraint_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_constraint_0
  }
};

static const MR_PseudoTypeInfo check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__field_types_mc_constraint_0_1[1] = {
  (MR_PseudoTypeInfo) &check_hlds__abstract_mode_constraints__list__ti_list_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_constraint_0
};

static const MR_DuFunctorDesc check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_functor_desc_mc_constraint_0_1 = {
  (MR_String) "mc_disj",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__field_types_mc_constraint_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__field_types_mc_constraint_0_2[1] = {
  (MR_PseudoTypeInfo) &check_hlds__abstract_mode_constraints__list__ti_list_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_constraint_0
};

static const MR_DuFunctorDesc check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_functor_desc_mc_constraint_0_2 = {
  (MR_String) "mc_conj",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__field_types_mc_constraint_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_stag_ordered_mc_constraint_0_0[1] = {
  &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_functor_desc_mc_constraint_0_0
};

static const MR_DuFunctorDescPtr check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_stag_ordered_mc_constraint_0_1[1] = {
  &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_functor_desc_mc_constraint_0_1
};

static const MR_DuFunctorDescPtr check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_stag_ordered_mc_constraint_0_2[1] = {
  &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_functor_desc_mc_constraint_0_2
};

static const MR_DuPtagLayout check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_ptag_ordered_mc_constraint_0[3] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_stag_ordered_mc_constraint_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_stag_ordered_mc_constraint_0_1
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_stag_ordered_mc_constraint_0_2
  }
};

static const MR_DuFunctorDescPtr check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_name_ordered_mc_constraint_0[3] = {
  &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_functor_desc_mc_constraint_0_0,
  &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_functor_desc_mc_constraint_0_2,
  &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_functor_desc_mc_constraint_0_1
};

static const MR_Integer check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__functor_number_map_mc_constraint_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_constraint_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 3,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__abstract_mode_constraints____Unify____mc_constraint_0_0_10001)),
  ((MR_Box) (check_hlds__abstract_mode_constraints____Compare____mc_constraint_0_0_10001)),
  (MR_String) "check_hlds.abstract_mode_constraints",
  (MR_String) "mc_constraint",
  {     check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_name_ordered_mc_constraint_0 },
  {     check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_ptag_ordered_mc_constraint_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__functor_number_map_mc_constraint_0
};

static const MR_EnumFunctorDesc check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__enum_functor_desc_mc_type_0_0 = {
  (MR_String) "mc_type",
  (MR_Integer) 0
};

static const MR_EnumFunctorDescPtr check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__enum_value_ordered_mc_type_0[1] = {
  &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__enum_functor_desc_mc_type_0_0
};

static const MR_EnumFunctorDescPtr check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__enum_name_ordered_mc_type_0[1] = {
  &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__enum_functor_desc_mc_type_0_0
};

static const MR_Integer check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__functor_number_map_mc_type_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_DUMMY,
  ((MR_Box) (check_hlds__abstract_mode_constraints____Unify____mc_type_0_0_10001)),
  ((MR_Box) (check_hlds__abstract_mode_constraints____Compare____mc_type_0_0_10001)),
  (MR_String) "check_hlds.abstract_mode_constraints",
  (MR_String) "mc_type",
  {     check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__enum_name_ordered_mc_type_0 },
  {     check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__enum_value_ordered_mc_type_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__functor_number_map_mc_type_0
};

const MR_TypeCtorInfo_Struct check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_var_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__abstract_mode_constraints____Unify____mc_var_0_0_10001)),
  ((MR_Box) (check_hlds__abstract_mode_constraints____Compare____mc_var_0_0_10001)),
  (MR_String) "check_hlds.abstract_mode_constraints",
  (MR_String) "mc_var",
  {     NULL },
  {     (MR_PseudoTypeInfo) &check_hlds__abstract_mode_constraints__term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_FA_TypeInfo_Struct1 check_hlds__abstract_mode_constraints__varset__ti_varset_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0
  }
};

const MR_TypeCtorInfo_Struct check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_varset_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__abstract_mode_constraints____Unify____mc_varset_0_0_10001)),
  ((MR_Box) (check_hlds__abstract_mode_constraints____Compare____mc_varset_0_0_10001)),
  (MR_String) "check_hlds.abstract_mode_constraints",
  (MR_String) "mc_varset",
  {     NULL },
  {     (MR_PseudoTypeInfo) &check_hlds__abstract_mode_constraints__varset__ti_varset_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_FA_TypeInfo_Struct1 check_hlds__abstract_mode_constraints__list__ti_list_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_ann_constraint_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_ann_constraint_0
  }
};

static const MR_FA_TypeInfo_Struct2 check_hlds__abstract_mode_constraints__tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_ann_constraint_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &check_hlds__abstract_mode_constraints__list__ti_list_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_ann_constraint_0
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__abstract_mode_constraints__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0
  }
};

static const MR_PseudoTypeInfo check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__field_types_pred_p_c_constraints_0_0[3] = {
  (MR_PseudoTypeInfo) &check_hlds__abstract_mode_constraints__tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_ann_constraint_0,
  (MR_PseudoTypeInfo) &check_hlds__abstract_mode_constraints__list__ti_list_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_ann_constraint_0,
  (MR_PseudoTypeInfo) &check_hlds__abstract_mode_constraints__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_id_0
};

static const MR_ConstString check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__field_names_pred_p_c_constraints_0_0[3] = {
  (MR_String) "ppcc_procspec_constraints",
  (MR_String) "ppcc_allproc_constraints",
  (MR_String) "ppcc_mode_infer_callees"
};

static const MR_DuFunctorDesc check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_functor_desc_pred_p_c_constraints_0_0 = {
  (MR_String) "pred_p_c_constraints",
  (MR_Integer) 3,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__field_types_pred_p_c_constraints_0_0,
  check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__field_names_pred_p_c_constraints_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_stag_ordered_pred_p_c_constraints_0_0[1] = {
  &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_functor_desc_pred_p_c_constraints_0_0
};

static const MR_DuPtagLayout check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_ptag_ordered_pred_p_c_constraints_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_stag_ordered_pred_p_c_constraints_0_0
  }
};

static const MR_DuFunctorDescPtr check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_name_ordered_pred_p_c_constraints_0[1] = {
  &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_functor_desc_pred_p_c_constraints_0_0
};

static const MR_Integer check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__functor_number_map_pred_p_c_constraints_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_pred_p_c_constraints_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__abstract_mode_constraints____Unify____pred_p_c_constraints_0_0_10001)),
  ((MR_Box) (check_hlds__abstract_mode_constraints____Compare____pred_p_c_constraints_0_0_10001)),
  (MR_String) "check_hlds.abstract_mode_constraints",
  (MR_String) "pred_p_c_constraints",
  {     check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_name_ordered_pred_p_c_constraints_0 },
  {     check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_ptag_ordered_pred_p_c_constraints_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__functor_number_map_pred_p_c_constraints_0
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__abstract_mode_constraints__term__pti_var_1__pseudo_1 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

static const MR_PseudoTypeInfo check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__field_types_var_constraint_1_0[2] = {
  (MR_PseudoTypeInfo) &check_hlds__abstract_mode_constraints__term__pti_var_1__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
};

static const MR_DuFunctorDesc check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_functor_desc_var_constraint_1_0 = {
  (MR_String) "equiv_bool",
  (MR_Integer) 2,
  (MR_Integer) 1,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__field_types_var_constraint_1_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__abstract_mode_constraints__list__pti_list_1__pseudo_term__pti_var_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__abstract_mode_constraints__term__pti_var_1__pseudo_1
  }
};

static const MR_PseudoTypeInfo check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__field_types_var_constraint_1_1[1] = {
  (MR_PseudoTypeInfo) &check_hlds__abstract_mode_constraints__list__pti_list_1__pseudo_term__pti_var_1__pseudo_1
};

static const MR_DuFunctorDesc check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_functor_desc_var_constraint_1_1 = {
  (MR_String) "equivalent",
  (MR_Integer) 1,
  (MR_Integer) 1,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__field_types_var_constraint_1_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__field_types_var_constraint_1_2[2] = {
  (MR_PseudoTypeInfo) &check_hlds__abstract_mode_constraints__term__pti_var_1__pseudo_1,
  (MR_PseudoTypeInfo) &check_hlds__abstract_mode_constraints__term__pti_var_1__pseudo_1
};

static const MR_DuFunctorDesc check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_functor_desc_var_constraint_1_2 = {
  (MR_String) "implies",
  (MR_Integer) 2,
  (MR_Integer) 3,
  MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__field_types_var_constraint_1_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__field_types_var_constraint_1_3[2] = {
  (MR_PseudoTypeInfo) &check_hlds__abstract_mode_constraints__term__pti_var_1__pseudo_1,
  (MR_PseudoTypeInfo) &check_hlds__abstract_mode_constraints__list__pti_list_1__pseudo_term__pti_var_1__pseudo_1
};

static const MR_DuFunctorDesc check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_functor_desc_var_constraint_1_3 = {
  (MR_String) "equiv_disj",
  (MR_Integer) 2,
  (MR_Integer) 3,
  MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 3,
  check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__field_types_var_constraint_1_3,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__field_types_var_constraint_1_4[1] = {
  (MR_PseudoTypeInfo) &check_hlds__abstract_mode_constraints__list__pti_list_1__pseudo_term__pti_var_1__pseudo_1
};

static const MR_DuFunctorDesc check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_functor_desc_var_constraint_1_4 = {
  (MR_String) "at_most_one",
  (MR_Integer) 1,
  (MR_Integer) 1,
  MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__field_types_var_constraint_1_4,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__field_types_var_constraint_1_5[1] = {
  (MR_PseudoTypeInfo) &check_hlds__abstract_mode_constraints__list__pti_list_1__pseudo_term__pti_var_1__pseudo_1
};

static const MR_DuFunctorDesc check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_functor_desc_var_constraint_1_5 = {
  (MR_String) "exactly_one",
  (MR_Integer) 1,
  (MR_Integer) 1,
  MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 5,
  check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__field_types_var_constraint_1_5,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_stag_ordered_var_constraint_1_0[1] = {
  &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_functor_desc_var_constraint_1_0
};

static const MR_DuFunctorDescPtr check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_stag_ordered_var_constraint_1_1[1] = {
  &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_functor_desc_var_constraint_1_1
};

static const MR_DuFunctorDescPtr check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_stag_ordered_var_constraint_1_2[1] = {
  &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_functor_desc_var_constraint_1_2
};

static const MR_DuFunctorDescPtr check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_stag_ordered_var_constraint_1_3[3] = {
  &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_functor_desc_var_constraint_1_3,
  &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_functor_desc_var_constraint_1_4,
  &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_functor_desc_var_constraint_1_5
};

static const MR_DuPtagLayout check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_ptag_ordered_var_constraint_1[4] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_stag_ordered_var_constraint_1_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_stag_ordered_var_constraint_1_1
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_stag_ordered_var_constraint_1_2
  },
  {
    (MR_Integer) 3,
    MR_SECTAG_REMOTE,
    check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_stag_ordered_var_constraint_1_3
  }
};

static const MR_DuFunctorDescPtr check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_name_ordered_var_constraint_1[6] = {
  &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_functor_desc_var_constraint_1_4,
  &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_functor_desc_var_constraint_1_0,
  &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_functor_desc_var_constraint_1_3,
  &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_functor_desc_var_constraint_1_1,
  &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_functor_desc_var_constraint_1_5,
  &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_functor_desc_var_constraint_1_2
};

static const MR_Integer check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__functor_number_map_var_constraint_1[6] = {
  (MR_Integer) 1,
  (MR_Integer) 3,
  (MR_Integer) 5,
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 4
};

const MR_TypeCtorInfo_Struct check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_var_constraint_1 = {
  (MR_Integer) 1,
  (MR_Integer) 17,
  (MR_Integer) 4,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__abstract_mode_constraints____Unify____var_constraint_1_0_10001)),
  ((MR_Box) (check_hlds__abstract_mode_constraints____Compare____var_constraint_1_0_10001)),
  (MR_String) "check_hlds.abstract_mode_constraints",
  (MR_String) "var_constraint",
  {     check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_name_ordered_var_constraint_1 },
  {     check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_ptag_ordered_var_constraint_1 },
  (MR_Integer) 6,
  (MR_Integer) 4,
  check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__functor_number_map_var_constraint_1
};

const MR_TypeCtorInfo_Struct check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_var_constraint_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__abstract_mode_constraints____Unify____var_constraint_0_0_10001)),
  ((MR_Box) (check_hlds__abstract_mode_constraints____Compare____var_constraint_0_0_10001)),
  (MR_String) "check_hlds.abstract_mode_constraints",
  (MR_String) "var_constraint",
  {     NULL },
  {     (MR_PseudoTypeInfo) &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__ti_var_constraint_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

void MR_CALL 
check_hlds__abstract_mode_constraints____Compare____var_constraint_1_0(
  MR_Word check_hlds__abstract_mode_constraints__TypeInfo_for_T_117,
  MR_Word * check_hlds__abstract_mode_constraints__HeadVar__1_1,
  MR_Word check_hlds__abstract_mode_constraints__HeadVar__2_2,
  MR_Word check_hlds__abstract_mode_constraints__HeadVar__3_3)
{
  {
    MR_bool check_hlds__abstract_mode_constraints__succeeded;
    MR_Integer check_hlds__abstract_mode_constraints__CastX_115 = (MR_Integer) check_hlds__abstract_mode_constraints__HeadVar__2_2;
    MR_Integer check_hlds__abstract_mode_constraints__CastY_116 = (MR_Integer) check_hlds__abstract_mode_constraints__HeadVar__3_3;

    check_hlds__abstract_mode_constraints__succeeded = (check_hlds__abstract_mode_constraints__CastX_115 == check_hlds__abstract_mode_constraints__CastY_116);
    if (check_hlds__abstract_mode_constraints__succeeded)
      *check_hlds__abstract_mode_constraints__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) check_hlds__abstract_mode_constraints__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word check_hlds__abstract_mode_constraints__Var_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word check_hlds__abstract_mode_constraints__Var_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) check_hlds__abstract_mode_constraints__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word check_hlds__abstract_mode_constraints__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__HeadVar__3_3, (MR_Integer) 0)));
                  MR_Word check_hlds__abstract_mode_constraints__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__HeadVar__3_3, (MR_Integer) 1)));
                  MR_Word check_hlds__abstract_mode_constraints__Var_8;

                  {
                    mercury__term____Compare____var_1_0(check_hlds__abstract_mode_constraints__TypeInfo_for_T_117, &check_hlds__abstract_mode_constraints__Var_8, check_hlds__abstract_mode_constraints__Var_145, check_hlds__abstract_mode_constraints__ArgY1_5);
                  }
                  check_hlds__abstract_mode_constraints__succeeded = (check_hlds__abstract_mode_constraints__Var_8 == (MR_Integer) 0);
                  check_hlds__abstract_mode_constraints__succeeded = !(check_hlds__abstract_mode_constraints__succeeded);
                  if (check_hlds__abstract_mode_constraints__succeeded)
                    *check_hlds__abstract_mode_constraints__HeadVar__1_1 = check_hlds__abstract_mode_constraints__Var_8;
                  else
                    {
                      MR_Integer check_hlds__abstract_mode_constraints__Var_152 = (MR_Integer) check_hlds__abstract_mode_constraints__Var_144;
                      MR_Integer check_hlds__abstract_mode_constraints__Var_153 = (MR_Integer) check_hlds__abstract_mode_constraints__ArgY2_7;

                      {
                        mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__abstract_mode_constraints__HeadVar__1_1, check_hlds__abstract_mode_constraints__Var_152, check_hlds__abstract_mode_constraints__Var_153);
                      }
                    }
                }
                break;
              case (MR_Integer) 1:
                *check_hlds__abstract_mode_constraints__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 2:
                *check_hlds__abstract_mode_constraints__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__abstract_mode_constraints__HeadVar__3_3, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *check_hlds__abstract_mode_constraints__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *check_hlds__abstract_mode_constraints__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    *check_hlds__abstract_mode_constraints__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word check_hlds__abstract_mode_constraints__Var_148 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__abstract_mode_constraints__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) check_hlds__abstract_mode_constraints__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *check_hlds__abstract_mode_constraints__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word check_hlds__abstract_mode_constraints__TypeInfo_137_137;
                  MR_Word check_hlds__abstract_mode_constraints__ArgY1_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__abstract_mode_constraints__HeadVar__3_3, (MR_Integer) 0)));

                  {
                    check_hlds__abstract_mode_constraints__TypeInfo_137_137 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__TypeInfo_137_137, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
                    MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__TypeInfo_137_137, 1) = ((MR_Box) (check_hlds__abstract_mode_constraints__TypeInfo_for_T_117));
                  }
                  {
                    mercury__list____Compare____list_1_0(check_hlds__abstract_mode_constraints__TypeInfo_137_137, check_hlds__abstract_mode_constraints__HeadVar__1_1, (MR_Word) check_hlds__abstract_mode_constraints__Var_148, (MR_Word) check_hlds__abstract_mode_constraints__ArgY1_30);
                  }
                }
                break;
              case (MR_Integer) 2:
                *check_hlds__abstract_mode_constraints__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__abstract_mode_constraints__HeadVar__3_3, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *check_hlds__abstract_mode_constraints__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *check_hlds__abstract_mode_constraints__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    *check_hlds__abstract_mode_constraints__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word check_hlds__abstract_mode_constraints__Var_150 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__abstract_mode_constraints__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word check_hlds__abstract_mode_constraints__Var_151 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__abstract_mode_constraints__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) check_hlds__abstract_mode_constraints__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *check_hlds__abstract_mode_constraints__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *check_hlds__abstract_mode_constraints__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word check_hlds__abstract_mode_constraints__ArgY1_49 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__abstract_mode_constraints__HeadVar__3_3, (MR_Integer) 0)));
                  MR_Word check_hlds__abstract_mode_constraints__ArgY2_51 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__abstract_mode_constraints__HeadVar__3_3, (MR_Integer) 1)));
                  MR_Word check_hlds__abstract_mode_constraints__Var_52;

                  {
                    mercury__term____Compare____var_1_0(check_hlds__abstract_mode_constraints__TypeInfo_for_T_117, &check_hlds__abstract_mode_constraints__Var_52, check_hlds__abstract_mode_constraints__Var_151, check_hlds__abstract_mode_constraints__ArgY1_49);
                  }
                  check_hlds__abstract_mode_constraints__succeeded = (check_hlds__abstract_mode_constraints__Var_52 == (MR_Integer) 0);
                  check_hlds__abstract_mode_constraints__succeeded = !(check_hlds__abstract_mode_constraints__succeeded);
                  if (check_hlds__abstract_mode_constraints__succeeded)
                    *check_hlds__abstract_mode_constraints__HeadVar__1_1 = check_hlds__abstract_mode_constraints__Var_52;
                  else
                    {
                      mercury__term____Compare____var_1_0(check_hlds__abstract_mode_constraints__TypeInfo_for_T_117, check_hlds__abstract_mode_constraints__HeadVar__1_1, check_hlds__abstract_mode_constraints__Var_150, check_hlds__abstract_mode_constraints__ArgY2_51);
                    }
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__abstract_mode_constraints__HeadVar__3_3, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *check_hlds__abstract_mode_constraints__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *check_hlds__abstract_mode_constraints__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    *check_hlds__abstract_mode_constraints__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__abstract_mode_constraints__HeadVar__2_2, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word check_hlds__abstract_mode_constraints__Var_146 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__abstract_mode_constraints__HeadVar__2_2, (MR_Integer) 2)));
                MR_Word check_hlds__abstract_mode_constraints__Var_147 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__abstract_mode_constraints__HeadVar__2_2, (MR_Integer) 1)));

                switch (MR_tag((MR_Word) check_hlds__abstract_mode_constraints__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *check_hlds__abstract_mode_constraints__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *check_hlds__abstract_mode_constraints__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *check_hlds__abstract_mode_constraints__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__abstract_mode_constraints__HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_Word check_hlds__abstract_mode_constraints__ArgY1_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__abstract_mode_constraints__HeadVar__3_3, (MR_Integer) 1)));
                          MR_Word check_hlds__abstract_mode_constraints__ArgY2_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__abstract_mode_constraints__HeadVar__3_3, (MR_Integer) 2)));
                          MR_Word check_hlds__abstract_mode_constraints__Var_78;

                          {
                            mercury__term____Compare____var_1_0(check_hlds__abstract_mode_constraints__TypeInfo_for_T_117, &check_hlds__abstract_mode_constraints__Var_78, check_hlds__abstract_mode_constraints__Var_147, check_hlds__abstract_mode_constraints__ArgY1_75);
                          }
                          check_hlds__abstract_mode_constraints__succeeded = (check_hlds__abstract_mode_constraints__Var_78 == (MR_Integer) 0);
                          check_hlds__abstract_mode_constraints__succeeded = !(check_hlds__abstract_mode_constraints__succeeded);
                          if (check_hlds__abstract_mode_constraints__succeeded)
                            *check_hlds__abstract_mode_constraints__HeadVar__1_1 = check_hlds__abstract_mode_constraints__Var_78;
                          else
                            {
                              MR_Word check_hlds__abstract_mode_constraints__TypeInfo_129_129;

                              {
                                check_hlds__abstract_mode_constraints__TypeInfo_129_129 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__TypeInfo_129_129, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
                                MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__TypeInfo_129_129, 1) = ((MR_Box) (check_hlds__abstract_mode_constraints__TypeInfo_for_T_117));
                              }
                              {
                                mercury__list____Compare____list_1_0(check_hlds__abstract_mode_constraints__TypeInfo_129_129, check_hlds__abstract_mode_constraints__HeadVar__1_1, (MR_Word) check_hlds__abstract_mode_constraints__Var_146, (MR_Word) check_hlds__abstract_mode_constraints__ArgY2_77);
                              }
                            }
                        }
                        break;
                      case (MR_Integer) 1:
                        *check_hlds__abstract_mode_constraints__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 2:
                        *check_hlds__abstract_mode_constraints__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word check_hlds__abstract_mode_constraints__Var_143 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__abstract_mode_constraints__HeadVar__2_2, (MR_Integer) 1)));

                switch (MR_tag((MR_Word) check_hlds__abstract_mode_constraints__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *check_hlds__abstract_mode_constraints__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *check_hlds__abstract_mode_constraints__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *check_hlds__abstract_mode_constraints__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__abstract_mode_constraints__HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *check_hlds__abstract_mode_constraints__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word check_hlds__abstract_mode_constraints__TypeInfo_123_123;
                          MR_Word check_hlds__abstract_mode_constraints__ArgY1_97 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__abstract_mode_constraints__HeadVar__3_3, (MR_Integer) 1)));

                          {
                            check_hlds__abstract_mode_constraints__TypeInfo_123_123 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__TypeInfo_123_123, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
                            MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__TypeInfo_123_123, 1) = ((MR_Box) (check_hlds__abstract_mode_constraints__TypeInfo_for_T_117));
                          }
                          {
                            mercury__list____Compare____list_1_0(check_hlds__abstract_mode_constraints__TypeInfo_123_123, check_hlds__abstract_mode_constraints__HeadVar__1_1, (MR_Word) check_hlds__abstract_mode_constraints__Var_143, (MR_Word) check_hlds__abstract_mode_constraints__ArgY1_97);
                          }
                        }
                        break;
                      case (MR_Integer) 2:
                        *check_hlds__abstract_mode_constraints__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word check_hlds__abstract_mode_constraints__Var_149 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__abstract_mode_constraints__HeadVar__2_2, (MR_Integer) 1)));

                switch (MR_tag((MR_Word) check_hlds__abstract_mode_constraints__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *check_hlds__abstract_mode_constraints__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *check_hlds__abstract_mode_constraints__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *check_hlds__abstract_mode_constraints__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__abstract_mode_constraints__HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *check_hlds__abstract_mode_constraints__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        *check_hlds__abstract_mode_constraints__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 2:
                        {
                          MR_Word check_hlds__abstract_mode_constraints__TypeInfo_119_119;
                          MR_Word check_hlds__abstract_mode_constraints__ArgY1_114 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__abstract_mode_constraints__HeadVar__3_3, (MR_Integer) 1)));

                          {
                            check_hlds__abstract_mode_constraints__TypeInfo_119_119 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__TypeInfo_119_119, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
                            MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__TypeInfo_119_119, 1) = ((MR_Box) (check_hlds__abstract_mode_constraints__TypeInfo_for_T_117));
                          }
                          {
                            mercury__list____Compare____list_1_0(check_hlds__abstract_mode_constraints__TypeInfo_119_119, check_hlds__abstract_mode_constraints__HeadVar__1_1, (MR_Word) check_hlds__abstract_mode_constraints__Var_149, (MR_Word) check_hlds__abstract_mode_constraints__ArgY1_114);
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

void MR_CALL 
check_hlds__abstract_mode_constraints____Compare____var_constraint_0_0(
  MR_Word * check_hlds__abstract_mode_constraints__HeadVar__1_1,
  MR_Word check_hlds__abstract_mode_constraints__HeadVar__2_2,
  MR_Word check_hlds__abstract_mode_constraints__HeadVar__3_3)
{
  {
    MR_bool check_hlds__abstract_mode_constraints__succeeded;
    MR_Word check_hlds__abstract_mode_constraints__Cast_HeadVar1_4 = check_hlds__abstract_mode_constraints__HeadVar__2_2;
    MR_Word check_hlds__abstract_mode_constraints__Cast_HeadVar2_5 = check_hlds__abstract_mode_constraints__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__abstract_mode_constraints_scalar_common_1[2], check_hlds__abstract_mode_constraints__HeadVar__1_1, ((MR_Box) (check_hlds__abstract_mode_constraints__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__abstract_mode_constraints__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
check_hlds__abstract_mode_constraints____Unify____var_constraint_0_0(
  MR_Word check_hlds__abstract_mode_constraints__HeadVar__1_1,
  MR_Word check_hlds__abstract_mode_constraints__HeadVar__2_2)
{
  {
    MR_bool check_hlds__abstract_mode_constraints__succeeded;
    MR_Word check_hlds__abstract_mode_constraints__Cast_HeadVar1_3 = check_hlds__abstract_mode_constraints__HeadVar__1_1;
    MR_Word check_hlds__abstract_mode_constraints__Cast_HeadVar2_4 = check_hlds__abstract_mode_constraints__HeadVar__2_2;

    {
      check_hlds__abstract_mode_constraints__succeeded = check_hlds__abstract_mode_constraints____Unify____var_constraint_1_0((MR_Word) &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0, check_hlds__abstract_mode_constraints__Cast_HeadVar1_3, check_hlds__abstract_mode_constraints__Cast_HeadVar2_4);
    }
    return check_hlds__abstract_mode_constraints__succeeded;
  }
}

void MR_CALL 
check_hlds__abstract_mode_constraints____Compare____pred_p_c_constraints_0_0(
  MR_Word * check_hlds__abstract_mode_constraints__HeadVar__1_1,
  MR_Word check_hlds__abstract_mode_constraints__HeadVar__2_2,
  MR_Word check_hlds__abstract_mode_constraints__HeadVar__3_3)
{
  {
    MR_bool check_hlds__abstract_mode_constraints__succeeded;
    MR_Integer check_hlds__abstract_mode_constraints__CastX_12 = (MR_Integer) check_hlds__abstract_mode_constraints__HeadVar__2_2;
    MR_Integer check_hlds__abstract_mode_constraints__CastY_13 = (MR_Integer) check_hlds__abstract_mode_constraints__HeadVar__3_3;

    check_hlds__abstract_mode_constraints__succeeded = (check_hlds__abstract_mode_constraints__CastX_12 == check_hlds__abstract_mode_constraints__CastY_13);
    if (check_hlds__abstract_mode_constraints__succeeded)
      *check_hlds__abstract_mode_constraints__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word check_hlds__abstract_mode_constraints__ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word check_hlds__abstract_mode_constraints__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word check_hlds__abstract_mode_constraints__ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word check_hlds__abstract_mode_constraints__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word check_hlds__abstract_mode_constraints__ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word check_hlds__abstract_mode_constraints__ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word check_hlds__abstract_mode_constraints__Var_10;

        {
          mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__abstract_mode_constraints_scalar_common_2[1], &check_hlds__abstract_mode_constraints__Var_10, ((MR_Box) (check_hlds__abstract_mode_constraints__ArgX1_4)), ((MR_Box) (check_hlds__abstract_mode_constraints__ArgY1_5)));
        }
        check_hlds__abstract_mode_constraints__succeeded = (check_hlds__abstract_mode_constraints__Var_10 == (MR_Integer) 0);
        check_hlds__abstract_mode_constraints__succeeded = !(check_hlds__abstract_mode_constraints__succeeded);
        if (check_hlds__abstract_mode_constraints__succeeded)
          *check_hlds__abstract_mode_constraints__HeadVar__1_1 = check_hlds__abstract_mode_constraints__Var_10;
        else
          {
            MR_Word check_hlds__abstract_mode_constraints__Var_11;

            {
              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__abstract_mode_constraints_scalar_common_1[4], &check_hlds__abstract_mode_constraints__Var_11, ((MR_Box) (check_hlds__abstract_mode_constraints__ArgX2_6)), ((MR_Box) (check_hlds__abstract_mode_constraints__ArgY2_7)));
            }
            check_hlds__abstract_mode_constraints__succeeded = (check_hlds__abstract_mode_constraints__Var_11 == (MR_Integer) 0);
            check_hlds__abstract_mode_constraints__succeeded = !(check_hlds__abstract_mode_constraints__succeeded);
            if (check_hlds__abstract_mode_constraints__succeeded)
              *check_hlds__abstract_mode_constraints__HeadVar__1_1 = check_hlds__abstract_mode_constraints__Var_11;
            else
              {
                {
                  mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__abstract_mode_constraints_scalar_common_1[5], check_hlds__abstract_mode_constraints__HeadVar__1_1, ((MR_Box) (check_hlds__abstract_mode_constraints__ArgX3_8)), ((MR_Box) (check_hlds__abstract_mode_constraints__ArgY3_9)));
                }
              }
          }
      }
  }
}

MR_bool MR_CALL 
check_hlds__abstract_mode_constraints____Unify____pred_p_c_constraints_0_0(
  MR_Word check_hlds__abstract_mode_constraints__HeadVar__1_1,
  MR_Word check_hlds__abstract_mode_constraints__HeadVar__2_2)
{
  {
    MR_bool check_hlds__abstract_mode_constraints__succeeded;
    MR_Integer check_hlds__abstract_mode_constraints__CastX_9 = (MR_Integer) check_hlds__abstract_mode_constraints__HeadVar__1_1;
    MR_Integer check_hlds__abstract_mode_constraints__CastY_10 = (MR_Integer) check_hlds__abstract_mode_constraints__HeadVar__2_2;

    check_hlds__abstract_mode_constraints__succeeded = (check_hlds__abstract_mode_constraints__CastX_9 == check_hlds__abstract_mode_constraints__CastY_10);
    if (check_hlds__abstract_mode_constraints__succeeded)
      check_hlds__abstract_mode_constraints__succeeded = MR_TRUE;
    else
      {
        MR_Word check_hlds__abstract_mode_constraints__TypeInfo_12_12;
        MR_Word check_hlds__abstract_mode_constraints__TypeInfo_13_13;
        MR_Word check_hlds__abstract_mode_constraints__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word check_hlds__abstract_mode_constraints__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word check_hlds__abstract_mode_constraints__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word check_hlds__abstract_mode_constraints__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word check_hlds__abstract_mode_constraints__ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word check_hlds__abstract_mode_constraints__ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__HeadVar__2_2, (MR_Integer) 2)));

        {
          check_hlds__abstract_mode_constraints__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__abstract_mode_constraints_scalar_common_2[1], ((MR_Box) (check_hlds__abstract_mode_constraints__ArgX1_3)), ((MR_Box) (check_hlds__abstract_mode_constraints__ArgY1_4)));
        }
        if (check_hlds__abstract_mode_constraints__succeeded)
          {
            check_hlds__abstract_mode_constraints__TypeInfo_12_12 = (MR_Word) &check_hlds__abstract_mode_constraints_scalar_common_1[4];
            {
              check_hlds__abstract_mode_constraints__succeeded = mercury__builtin__unify_2_p_0(check_hlds__abstract_mode_constraints__TypeInfo_12_12, ((MR_Box) (check_hlds__abstract_mode_constraints__ArgX2_5)), ((MR_Box) (check_hlds__abstract_mode_constraints__ArgY2_6)));
            }
            if (check_hlds__abstract_mode_constraints__succeeded)
              {
                check_hlds__abstract_mode_constraints__TypeInfo_13_13 = (MR_Word) &check_hlds__abstract_mode_constraints_scalar_common_1[5];
                {
                  check_hlds__abstract_mode_constraints__succeeded = mercury__builtin__unify_2_p_0(check_hlds__abstract_mode_constraints__TypeInfo_13_13, ((MR_Box) (check_hlds__abstract_mode_constraints__ArgX3_7)), ((MR_Box) (check_hlds__abstract_mode_constraints__ArgY3_8)));
                }
              }
          }
      }
    return check_hlds__abstract_mode_constraints__succeeded;
  }
}

void MR_CALL 
check_hlds__abstract_mode_constraints____Compare____mc_varset_0_0(
  MR_Word * check_hlds__abstract_mode_constraints__HeadVar__1_1,
  MR_Word check_hlds__abstract_mode_constraints__HeadVar__2_2,
  MR_Word check_hlds__abstract_mode_constraints__HeadVar__3_3)
{
  {
    MR_bool check_hlds__abstract_mode_constraints__succeeded;
    MR_Word check_hlds__abstract_mode_constraints__Cast_HeadVar1_4 = check_hlds__abstract_mode_constraints__HeadVar__2_2;
    MR_Word check_hlds__abstract_mode_constraints__Cast_HeadVar2_5 = check_hlds__abstract_mode_constraints__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__abstract_mode_constraints_scalar_common_1[3], check_hlds__abstract_mode_constraints__HeadVar__1_1, ((MR_Box) (check_hlds__abstract_mode_constraints__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__abstract_mode_constraints__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
check_hlds__abstract_mode_constraints____Unify____mc_varset_0_0(
  MR_Word check_hlds__abstract_mode_constraints__HeadVar__1_1,
  MR_Word check_hlds__abstract_mode_constraints__HeadVar__2_2)
{
  {
    MR_bool check_hlds__abstract_mode_constraints__succeeded;
    MR_Word check_hlds__abstract_mode_constraints__Cast_HeadVar1_3 = check_hlds__abstract_mode_constraints__HeadVar__1_1;
    MR_Word check_hlds__abstract_mode_constraints__Cast_HeadVar2_4 = check_hlds__abstract_mode_constraints__HeadVar__2_2;

    {
      check_hlds__abstract_mode_constraints__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__abstract_mode_constraints_scalar_common_1[3], ((MR_Box) (check_hlds__abstract_mode_constraints__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__abstract_mode_constraints__Cast_HeadVar2_4)));
    }
    return check_hlds__abstract_mode_constraints__succeeded;
  }
}

void MR_CALL 
check_hlds__abstract_mode_constraints____Compare____mc_var_0_0(
  MR_Word * check_hlds__abstract_mode_constraints__HeadVar__1_1,
  MR_Word check_hlds__abstract_mode_constraints__HeadVar__2_2,
  MR_Word check_hlds__abstract_mode_constraints__HeadVar__3_3)
{
  {
    MR_bool check_hlds__abstract_mode_constraints__succeeded;
    MR_Word check_hlds__abstract_mode_constraints__Cast_HeadVar1_4 = check_hlds__abstract_mode_constraints__HeadVar__2_2;
    MR_Word check_hlds__abstract_mode_constraints__Cast_HeadVar2_5 = check_hlds__abstract_mode_constraints__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__abstract_mode_constraints_scalar_common_1[0], check_hlds__abstract_mode_constraints__HeadVar__1_1, ((MR_Box) (check_hlds__abstract_mode_constraints__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__abstract_mode_constraints__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
check_hlds__abstract_mode_constraints____Unify____mc_var_0_0(
  MR_Word check_hlds__abstract_mode_constraints__HeadVar__1_1,
  MR_Word check_hlds__abstract_mode_constraints__HeadVar__2_2)
{
  {
    MR_bool check_hlds__abstract_mode_constraints__succeeded;
    MR_Word check_hlds__abstract_mode_constraints__Cast_HeadVar1_3 = check_hlds__abstract_mode_constraints__HeadVar__1_1;
    MR_Word check_hlds__abstract_mode_constraints__Cast_HeadVar2_4 = check_hlds__abstract_mode_constraints__HeadVar__2_2;

    {
      check_hlds__abstract_mode_constraints__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__abstract_mode_constraints_scalar_common_1[0], ((MR_Box) (check_hlds__abstract_mode_constraints__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__abstract_mode_constraints__Cast_HeadVar2_4)));
    }
    return check_hlds__abstract_mode_constraints__succeeded;
  }
}

void MR_CALL 
check_hlds__abstract_mode_constraints____Compare____mc_type_0_0(
  MR_Word * check_hlds__abstract_mode_constraints__HeadVar__1_1)
{
  {
    MR_bool check_hlds__abstract_mode_constraints__succeeded;

    {
      check_hlds__abstract_mode_constraints__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_99_104_101_99_107_95_104_108_100_115_95_95_97_98_115_116_114_97_99_116_95_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_115_95_95_109_99_95_116_121_112_101_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(check_hlds__abstract_mode_constraints__HeadVar__1_1);
    }
  }
}

void MR_CALL 
check_hlds__abstract_mode_constraints__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_99_104_101_99_107_95_104_108_100_115_95_95_97_98_115_116_114_97_99_116_95_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_115_95_95_109_99_95_116_121_112_101_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(
  MR_Word * check_hlds__abstract_mode_constraints__HeadVar__1_1)
{
  {
    MR_bool check_hlds__abstract_mode_constraints__succeeded;

    *check_hlds__abstract_mode_constraints__HeadVar__1_1 = (MR_Integer) 0;
  }
}

MR_bool MR_CALL 
check_hlds__abstract_mode_constraints____Unify____mc_type_0_0(void)
{
  {
    MR_bool check_hlds__abstract_mode_constraints__succeeded;

    {
      check_hlds__abstract_mode_constraints__succeeded = check_hlds__abstract_mode_constraints__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_99_104_101_99_107_95_104_108_100_115_95_95_97_98_115_116_114_97_99_116_95_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_115_95_95_109_99_95_116_121_112_101_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0();
    }
    return check_hlds__abstract_mode_constraints__succeeded;
  }
}

MR_bool MR_CALL 
check_hlds__abstract_mode_constraints__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_99_104_101_99_107_95_104_108_100_115_95_95_97_98_115_116_114_97_99_116_95_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_115_95_95_109_99_95_116_121_112_101_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0(void)
{
  {
    return MR_TRUE;
  }
}

void MR_CALL 
check_hlds__abstract_mode_constraints____Compare____mc_bindings_0_0(
  MR_Word * check_hlds__abstract_mode_constraints__HeadVar__1_1,
  MR_Word check_hlds__abstract_mode_constraints__HeadVar__2_2,
  MR_Word check_hlds__abstract_mode_constraints__HeadVar__3_3)
{
  {
    MR_bool check_hlds__abstract_mode_constraints__succeeded;
    MR_Word check_hlds__abstract_mode_constraints__Cast_HeadVar1_4 = check_hlds__abstract_mode_constraints__HeadVar__2_2;
    MR_Word check_hlds__abstract_mode_constraints__Cast_HeadVar2_5 = check_hlds__abstract_mode_constraints__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__abstract_mode_constraints_scalar_common_2[0], check_hlds__abstract_mode_constraints__HeadVar__1_1, ((MR_Box) (check_hlds__abstract_mode_constraints__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__abstract_mode_constraints__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
check_hlds__abstract_mode_constraints____Unify____mc_bindings_0_0(
  MR_Word check_hlds__abstract_mode_constraints__HeadVar__1_1,
  MR_Word check_hlds__abstract_mode_constraints__HeadVar__2_2)
{
  {
    MR_bool check_hlds__abstract_mode_constraints__succeeded;
    MR_Word check_hlds__abstract_mode_constraints__Cast_HeadVar1_3 = check_hlds__abstract_mode_constraints__HeadVar__1_1;
    MR_Word check_hlds__abstract_mode_constraints__Cast_HeadVar2_4 = check_hlds__abstract_mode_constraints__HeadVar__2_2;

    {
      check_hlds__abstract_mode_constraints__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__abstract_mode_constraints_scalar_common_2[0], ((MR_Box) (check_hlds__abstract_mode_constraints__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__abstract_mode_constraints__Cast_HeadVar2_4)));
    }
    return check_hlds__abstract_mode_constraints__succeeded;
  }
}

void MR_CALL 
check_hlds__abstract_mode_constraints____Compare____mc_ann_constraint_0_0(
  MR_Word * check_hlds__abstract_mode_constraints__HeadVar__1_1,
  MR_Word check_hlds__abstract_mode_constraints__HeadVar__2_2,
  MR_Word check_hlds__abstract_mode_constraints__HeadVar__3_3)
{
  {
    MR_bool check_hlds__abstract_mode_constraints__succeeded;
    MR_Integer check_hlds__abstract_mode_constraints__CastX_9 = (MR_Integer) check_hlds__abstract_mode_constraints__HeadVar__2_2;
    MR_Integer check_hlds__abstract_mode_constraints__CastY_10 = (MR_Integer) check_hlds__abstract_mode_constraints__HeadVar__3_3;

    check_hlds__abstract_mode_constraints__succeeded = (check_hlds__abstract_mode_constraints__CastX_9 == check_hlds__abstract_mode_constraints__CastY_10);
    if (check_hlds__abstract_mode_constraints__succeeded)
      *check_hlds__abstract_mode_constraints__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word check_hlds__abstract_mode_constraints__ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word check_hlds__abstract_mode_constraints__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word check_hlds__abstract_mode_constraints__ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word check_hlds__abstract_mode_constraints__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word check_hlds__abstract_mode_constraints__Var_8;

        {
          check_hlds__abstract_mode_constraints____Compare____mc_constraint_0_0(&check_hlds__abstract_mode_constraints__Var_8, check_hlds__abstract_mode_constraints__ArgX1_4, check_hlds__abstract_mode_constraints__ArgY1_5);
        }
        check_hlds__abstract_mode_constraints__succeeded = (check_hlds__abstract_mode_constraints__Var_8 == (MR_Integer) 0);
        check_hlds__abstract_mode_constraints__succeeded = !(check_hlds__abstract_mode_constraints__succeeded);
        if (check_hlds__abstract_mode_constraints__succeeded)
          *check_hlds__abstract_mode_constraints__HeadVar__1_1 = check_hlds__abstract_mode_constraints__Var_8;
        else
          {
            check_hlds__abstract_mode_constraints____Compare____mc_annotation_0_0(check_hlds__abstract_mode_constraints__HeadVar__1_1, check_hlds__abstract_mode_constraints__ArgX2_6, check_hlds__abstract_mode_constraints__ArgY2_7);
          }
      }
  }
}

void MR_CALL 
check_hlds__abstract_mode_constraints____Compare____mc_constraint_0_0(
  MR_Word * check_hlds__abstract_mode_constraints__HeadVar__1_1,
  MR_Word check_hlds__abstract_mode_constraints__HeadVar__2_2,
  MR_Word check_hlds__abstract_mode_constraints__HeadVar__3_3)
{
  {
    MR_bool check_hlds__abstract_mode_constraints__succeeded;
    MR_Integer check_hlds__abstract_mode_constraints__CastX_22 = (MR_Integer) check_hlds__abstract_mode_constraints__HeadVar__2_2;
    MR_Integer check_hlds__abstract_mode_constraints__CastY_23 = (MR_Integer) check_hlds__abstract_mode_constraints__HeadVar__3_3;

    check_hlds__abstract_mode_constraints__succeeded = (check_hlds__abstract_mode_constraints__CastX_22 == check_hlds__abstract_mode_constraints__CastY_23);
    if (check_hlds__abstract_mode_constraints__succeeded)
      *check_hlds__abstract_mode_constraints__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) check_hlds__abstract_mode_constraints__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word check_hlds__abstract_mode_constraints__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) check_hlds__abstract_mode_constraints__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word check_hlds__abstract_mode_constraints__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__HeadVar__3_3, (MR_Integer) 0)));

                  {
                    mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__abstract_mode_constraints_scalar_common_1[2], check_hlds__abstract_mode_constraints__HeadVar__1_1, ((MR_Box) (check_hlds__abstract_mode_constraints__Var_27)), ((MR_Box) (check_hlds__abstract_mode_constraints__ArgY1_5)));
                  }
                }
                break;
              case (MR_Integer) 1:
                *check_hlds__abstract_mode_constraints__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 2:
                *check_hlds__abstract_mode_constraints__HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word check_hlds__abstract_mode_constraints__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__abstract_mode_constraints__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) check_hlds__abstract_mode_constraints__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *check_hlds__abstract_mode_constraints__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word check_hlds__abstract_mode_constraints__ArgY1_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__abstract_mode_constraints__HeadVar__3_3, (MR_Integer) 0)));

                  {
                    mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__abstract_mode_constraints_scalar_common_1[1], check_hlds__abstract_mode_constraints__HeadVar__1_1, ((MR_Box) (check_hlds__abstract_mode_constraints__Var_29)), ((MR_Box) (check_hlds__abstract_mode_constraints__ArgY1_13)));
                  }
                }
                break;
              case (MR_Integer) 2:
                *check_hlds__abstract_mode_constraints__HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word check_hlds__abstract_mode_constraints__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__abstract_mode_constraints__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) check_hlds__abstract_mode_constraints__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *check_hlds__abstract_mode_constraints__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *check_hlds__abstract_mode_constraints__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word check_hlds__abstract_mode_constraints__ArgY1_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__abstract_mode_constraints__HeadVar__3_3, (MR_Integer) 0)));

                  {
                    mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__abstract_mode_constraints_scalar_common_1[1], check_hlds__abstract_mode_constraints__HeadVar__1_1, ((MR_Box) (check_hlds__abstract_mode_constraints__Var_28)), ((MR_Box) (check_hlds__abstract_mode_constraints__ArgY1_21)));
                  }
                }
                break;
            }
          }
          break;
      }
  }
}

void MR_CALL 
check_hlds__abstract_mode_constraints____Compare____mc_annotation_0_0(
  MR_Word * check_hlds__abstract_mode_constraints__HeadVar__1_1,
  MR_Word check_hlds__abstract_mode_constraints__HeadVar__2_2,
  MR_Word check_hlds__abstract_mode_constraints__HeadVar__3_3)
{
  {
    MR_bool check_hlds__abstract_mode_constraints__succeeded;
    MR_Integer check_hlds__abstract_mode_constraints__CastX_6 = (MR_Integer) check_hlds__abstract_mode_constraints__HeadVar__2_2;
    MR_Integer check_hlds__abstract_mode_constraints__CastY_7 = (MR_Integer) check_hlds__abstract_mode_constraints__HeadVar__3_3;

    check_hlds__abstract_mode_constraints__succeeded = (check_hlds__abstract_mode_constraints__CastX_6 == check_hlds__abstract_mode_constraints__CastY_7);
    if (check_hlds__abstract_mode_constraints__succeeded)
      *check_hlds__abstract_mode_constraints__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word check_hlds__abstract_mode_constraints__ArgX1_4 = (MR_Word) check_hlds__abstract_mode_constraints__HeadVar__2_2;
        MR_Word check_hlds__abstract_mode_constraints__ArgY1_5 = (MR_Word) check_hlds__abstract_mode_constraints__HeadVar__3_3;

        {
          mercury__term____Compare____context_0_0(check_hlds__abstract_mode_constraints__HeadVar__1_1, check_hlds__abstract_mode_constraints__ArgX1_4, check_hlds__abstract_mode_constraints__ArgY1_5);
        }
      }
  }
}

MR_bool MR_CALL 
check_hlds__abstract_mode_constraints____Unify____mc_ann_constraint_0_0(
  MR_Word check_hlds__abstract_mode_constraints__HeadVar__1_1,
  MR_Word check_hlds__abstract_mode_constraints__HeadVar__2_2)
{
  {
    MR_bool check_hlds__abstract_mode_constraints__succeeded;
    MR_Integer check_hlds__abstract_mode_constraints__CastX_7 = (MR_Integer) check_hlds__abstract_mode_constraints__HeadVar__1_1;
    MR_Integer check_hlds__abstract_mode_constraints__CastY_8 = (MR_Integer) check_hlds__abstract_mode_constraints__HeadVar__2_2;

    check_hlds__abstract_mode_constraints__succeeded = (check_hlds__abstract_mode_constraints__CastX_7 == check_hlds__abstract_mode_constraints__CastY_8);
    if (check_hlds__abstract_mode_constraints__succeeded)
      check_hlds__abstract_mode_constraints__succeeded = MR_TRUE;
    else
      {
        MR_Word check_hlds__abstract_mode_constraints__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word check_hlds__abstract_mode_constraints__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word check_hlds__abstract_mode_constraints__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word check_hlds__abstract_mode_constraints__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__HeadVar__2_2, (MR_Integer) 1)));

        {
          check_hlds__abstract_mode_constraints__succeeded = check_hlds__abstract_mode_constraints____Unify____mc_constraint_0_0(check_hlds__abstract_mode_constraints__ArgX1_3, check_hlds__abstract_mode_constraints__ArgY1_4);
        }
        if (check_hlds__abstract_mode_constraints__succeeded)
          {
            check_hlds__abstract_mode_constraints__succeeded = check_hlds__abstract_mode_constraints____Unify____mc_annotation_0_0(check_hlds__abstract_mode_constraints__ArgX2_5, check_hlds__abstract_mode_constraints__ArgY2_6);
          }
      }
    return check_hlds__abstract_mode_constraints__succeeded;
  }
}

MR_bool MR_CALL 
check_hlds__abstract_mode_constraints____Unify____mc_constraint_0_0(
  MR_Word check_hlds__abstract_mode_constraints__HeadVar__1_1,
  MR_Word check_hlds__abstract_mode_constraints__HeadVar__2_2)
{
  {
    MR_bool check_hlds__abstract_mode_constraints__succeeded;
    MR_Integer check_hlds__abstract_mode_constraints__CastX_9 = (MR_Integer) check_hlds__abstract_mode_constraints__HeadVar__1_1;
    MR_Integer check_hlds__abstract_mode_constraints__CastY_10 = (MR_Integer) check_hlds__abstract_mode_constraints__HeadVar__2_2;

    check_hlds__abstract_mode_constraints__succeeded = (check_hlds__abstract_mode_constraints__CastX_9 == check_hlds__abstract_mode_constraints__CastY_10);
    if (check_hlds__abstract_mode_constraints__succeeded)
      check_hlds__abstract_mode_constraints__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) check_hlds__abstract_mode_constraints__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word check_hlds__abstract_mode_constraints__TypeCtorInfo_11_11;
            MR_Word check_hlds__abstract_mode_constraints__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word check_hlds__abstract_mode_constraints__ArgY1_4;

            check_hlds__abstract_mode_constraints__succeeded = ((MR_tag((MR_Word) check_hlds__abstract_mode_constraints__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
            if (check_hlds__abstract_mode_constraints__succeeded)
              {
                check_hlds__abstract_mode_constraints__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__HeadVar__2_2, (MR_Integer) 0)));
                check_hlds__abstract_mode_constraints__TypeCtorInfo_11_11 = (MR_Word) &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0;
                {
                  check_hlds__abstract_mode_constraints__succeeded = check_hlds__abstract_mode_constraints____Unify____var_constraint_1_0(check_hlds__abstract_mode_constraints__TypeCtorInfo_11_11, check_hlds__abstract_mode_constraints__ArgX1_3, check_hlds__abstract_mode_constraints__ArgY1_4);
                }
              }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word check_hlds__abstract_mode_constraints__TypeInfo_13_13;
            MR_Word check_hlds__abstract_mode_constraints__ArgX1_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__abstract_mode_constraints__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word check_hlds__abstract_mode_constraints__ArgY1_6;

            check_hlds__abstract_mode_constraints__succeeded = ((MR_tag((MR_Word) check_hlds__abstract_mode_constraints__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (check_hlds__abstract_mode_constraints__succeeded)
              {
                check_hlds__abstract_mode_constraints__ArgY1_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__abstract_mode_constraints__HeadVar__2_2, (MR_Integer) 0)));
                check_hlds__abstract_mode_constraints__TypeInfo_13_13 = (MR_Word) &check_hlds__abstract_mode_constraints_scalar_common_1[1];
                {
                  check_hlds__abstract_mode_constraints__succeeded = mercury__builtin__unify_2_p_0(check_hlds__abstract_mode_constraints__TypeInfo_13_13, ((MR_Box) (check_hlds__abstract_mode_constraints__ArgX1_5)), ((MR_Box) (check_hlds__abstract_mode_constraints__ArgY1_6)));
                }
              }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word check_hlds__abstract_mode_constraints__TypeInfo_12_12;
            MR_Word check_hlds__abstract_mode_constraints__ArgX1_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__abstract_mode_constraints__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word check_hlds__abstract_mode_constraints__ArgY1_8;

            check_hlds__abstract_mode_constraints__succeeded = ((MR_tag((MR_Word) check_hlds__abstract_mode_constraints__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (check_hlds__abstract_mode_constraints__succeeded)
              {
                check_hlds__abstract_mode_constraints__ArgY1_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__abstract_mode_constraints__HeadVar__2_2, (MR_Integer) 0)));
                check_hlds__abstract_mode_constraints__TypeInfo_12_12 = (MR_Word) &check_hlds__abstract_mode_constraints_scalar_common_1[1];
                {
                  check_hlds__abstract_mode_constraints__succeeded = mercury__builtin__unify_2_p_0(check_hlds__abstract_mode_constraints__TypeInfo_12_12, ((MR_Box) (check_hlds__abstract_mode_constraints__ArgX1_7)), ((MR_Box) (check_hlds__abstract_mode_constraints__ArgY1_8)));
                }
              }
          }
          break;
      }
    return check_hlds__abstract_mode_constraints__succeeded;
  }
}

MR_bool MR_CALL 
check_hlds__abstract_mode_constraints____Unify____var_constraint_1_0(
  MR_Word check_hlds__abstract_mode_constraints__TypeInfo_for_T_23,
  MR_Word check_hlds__abstract_mode_constraints__HeadVar__1_1,
  MR_Word check_hlds__abstract_mode_constraints__HeadVar__2_2)
{
  {
    MR_bool check_hlds__abstract_mode_constraints__succeeded;
    MR_Integer check_hlds__abstract_mode_constraints__CastX_21 = (MR_Integer) check_hlds__abstract_mode_constraints__HeadVar__1_1;
    MR_Integer check_hlds__abstract_mode_constraints__CastY_22 = (MR_Integer) check_hlds__abstract_mode_constraints__HeadVar__2_2;

    check_hlds__abstract_mode_constraints__succeeded = (check_hlds__abstract_mode_constraints__CastX_21 == check_hlds__abstract_mode_constraints__CastY_22);
    if (check_hlds__abstract_mode_constraints__succeeded)
      check_hlds__abstract_mode_constraints__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) check_hlds__abstract_mode_constraints__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word check_hlds__abstract_mode_constraints__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word check_hlds__abstract_mode_constraints__ArgY1_4;
            MR_Word check_hlds__abstract_mode_constraints__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word check_hlds__abstract_mode_constraints__ArgY2_6;

            check_hlds__abstract_mode_constraints__succeeded = ((MR_tag((MR_Word) check_hlds__abstract_mode_constraints__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
            if (check_hlds__abstract_mode_constraints__succeeded)
              {
                check_hlds__abstract_mode_constraints__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__HeadVar__2_2, (MR_Integer) 0)));
                check_hlds__abstract_mode_constraints__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__HeadVar__2_2, (MR_Integer) 1)));
                {
                  check_hlds__abstract_mode_constraints__succeeded = mercury__term____Unify____var_1_0(check_hlds__abstract_mode_constraints__TypeInfo_for_T_23, check_hlds__abstract_mode_constraints__ArgX1_3, check_hlds__abstract_mode_constraints__ArgY1_4);
                }
                if (check_hlds__abstract_mode_constraints__succeeded)
                  check_hlds__abstract_mode_constraints__succeeded = (check_hlds__abstract_mode_constraints__ArgX2_5 == check_hlds__abstract_mode_constraints__ArgY2_6);
              }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word check_hlds__abstract_mode_constraints__TypeCtorInfo_36_36;
            MR_Word check_hlds__abstract_mode_constraints__TypeInfo_37_37;
            MR_Word check_hlds__abstract_mode_constraints__ArgX1_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__abstract_mode_constraints__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word check_hlds__abstract_mode_constraints__ArgY1_8;

            check_hlds__abstract_mode_constraints__succeeded = ((MR_tag((MR_Word) check_hlds__abstract_mode_constraints__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (check_hlds__abstract_mode_constraints__succeeded)
              {
                check_hlds__abstract_mode_constraints__ArgY1_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__abstract_mode_constraints__HeadVar__2_2, (MR_Integer) 0)));
                check_hlds__abstract_mode_constraints__TypeCtorInfo_36_36 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
                {
                  check_hlds__abstract_mode_constraints__TypeInfo_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__TypeInfo_37_37, 0) = ((MR_Box) (check_hlds__abstract_mode_constraints__TypeCtorInfo_36_36));
                  MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__TypeInfo_37_37, 1) = ((MR_Box) (check_hlds__abstract_mode_constraints__TypeInfo_for_T_23));
                }
                {
                  check_hlds__abstract_mode_constraints__succeeded = mercury__list____Unify____list_1_0(check_hlds__abstract_mode_constraints__TypeInfo_37_37, (MR_Word) check_hlds__abstract_mode_constraints__ArgX1_7, (MR_Word) check_hlds__abstract_mode_constraints__ArgY1_8);
                }
              }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word check_hlds__abstract_mode_constraints__ArgX1_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__abstract_mode_constraints__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word check_hlds__abstract_mode_constraints__ArgY1_10;
            MR_Word check_hlds__abstract_mode_constraints__ArgX2_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__abstract_mode_constraints__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word check_hlds__abstract_mode_constraints__ArgY2_12;

            check_hlds__abstract_mode_constraints__succeeded = ((MR_tag((MR_Word) check_hlds__abstract_mode_constraints__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (check_hlds__abstract_mode_constraints__succeeded)
              {
                check_hlds__abstract_mode_constraints__ArgY1_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__abstract_mode_constraints__HeadVar__2_2, (MR_Integer) 0)));
                check_hlds__abstract_mode_constraints__ArgY2_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__abstract_mode_constraints__HeadVar__2_2, (MR_Integer) 1)));
                {
                  check_hlds__abstract_mode_constraints__succeeded = mercury__term____Unify____var_1_0(check_hlds__abstract_mode_constraints__TypeInfo_for_T_23, check_hlds__abstract_mode_constraints__ArgX1_9, check_hlds__abstract_mode_constraints__ArgY1_10);
                }
                if (check_hlds__abstract_mode_constraints__succeeded)
                  {
                    check_hlds__abstract_mode_constraints__succeeded = mercury__term____Unify____var_1_0(check_hlds__abstract_mode_constraints__TypeInfo_for_T_23, check_hlds__abstract_mode_constraints__ArgX2_11, check_hlds__abstract_mode_constraints__ArgY2_12);
                  }
              }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__abstract_mode_constraints__HeadVar__1_1, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word check_hlds__abstract_mode_constraints__TypeCtorInfo_30_30;
                MR_Word check_hlds__abstract_mode_constraints__TypeInfo_33_33;
                MR_Word check_hlds__abstract_mode_constraints__ArgX1_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__abstract_mode_constraints__HeadVar__1_1, (MR_Integer) 1)));
                MR_Word check_hlds__abstract_mode_constraints__ArgY1_14;
                MR_Word check_hlds__abstract_mode_constraints__ArgX2_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__abstract_mode_constraints__HeadVar__1_1, (MR_Integer) 2)));
                MR_Word check_hlds__abstract_mode_constraints__ArgY2_16;

                check_hlds__abstract_mode_constraints__succeeded = ((((MR_tag((MR_Word) check_hlds__abstract_mode_constraints__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__abstract_mode_constraints__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (check_hlds__abstract_mode_constraints__succeeded)
                  {
                    check_hlds__abstract_mode_constraints__ArgY1_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__abstract_mode_constraints__HeadVar__2_2, (MR_Integer) 1)));
                    check_hlds__abstract_mode_constraints__ArgY2_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__abstract_mode_constraints__HeadVar__2_2, (MR_Integer) 2)));
                    check_hlds__abstract_mode_constraints__TypeCtorInfo_30_30 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
                    {
                      check_hlds__abstract_mode_constraints__TypeInfo_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__TypeInfo_33_33, 0) = ((MR_Box) (check_hlds__abstract_mode_constraints__TypeCtorInfo_30_30));
                      MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__TypeInfo_33_33, 1) = ((MR_Box) (check_hlds__abstract_mode_constraints__TypeInfo_for_T_23));
                    }
                    {
                      check_hlds__abstract_mode_constraints__succeeded = mercury__term____Unify____var_1_0(check_hlds__abstract_mode_constraints__TypeInfo_for_T_23, check_hlds__abstract_mode_constraints__ArgX1_13, check_hlds__abstract_mode_constraints__ArgY1_14);
                    }
                    if (check_hlds__abstract_mode_constraints__succeeded)
                      {
                        check_hlds__abstract_mode_constraints__succeeded = mercury__list____Unify____list_1_0(check_hlds__abstract_mode_constraints__TypeInfo_33_33, (MR_Word) check_hlds__abstract_mode_constraints__ArgX2_15, (MR_Word) check_hlds__abstract_mode_constraints__ArgY2_16);
                      }
                  }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word check_hlds__abstract_mode_constraints__TypeCtorInfo_24_24;
                MR_Word check_hlds__abstract_mode_constraints__TypeInfo_25_25;
                MR_Word check_hlds__abstract_mode_constraints__ArgX1_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__abstract_mode_constraints__HeadVar__1_1, (MR_Integer) 1)));
                MR_Word check_hlds__abstract_mode_constraints__ArgY1_18;

                check_hlds__abstract_mode_constraints__succeeded = ((((MR_tag((MR_Word) check_hlds__abstract_mode_constraints__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__abstract_mode_constraints__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (check_hlds__abstract_mode_constraints__succeeded)
                  {
                    check_hlds__abstract_mode_constraints__ArgY1_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__abstract_mode_constraints__HeadVar__2_2, (MR_Integer) 1)));
                    check_hlds__abstract_mode_constraints__TypeCtorInfo_24_24 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
                    {
                      check_hlds__abstract_mode_constraints__TypeInfo_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__TypeInfo_25_25, 0) = ((MR_Box) (check_hlds__abstract_mode_constraints__TypeCtorInfo_24_24));
                      MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__TypeInfo_25_25, 1) = ((MR_Box) (check_hlds__abstract_mode_constraints__TypeInfo_for_T_23));
                    }
                    {
                      check_hlds__abstract_mode_constraints__succeeded = mercury__list____Unify____list_1_0(check_hlds__abstract_mode_constraints__TypeInfo_25_25, (MR_Word) check_hlds__abstract_mode_constraints__ArgX1_17, (MR_Word) check_hlds__abstract_mode_constraints__ArgY1_18);
                    }
                  }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word check_hlds__abstract_mode_constraints__TypeCtorInfo_40_40;
                MR_Word check_hlds__abstract_mode_constraints__TypeInfo_41_41;
                MR_Word check_hlds__abstract_mode_constraints__ArgX1_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__abstract_mode_constraints__HeadVar__1_1, (MR_Integer) 1)));
                MR_Word check_hlds__abstract_mode_constraints__ArgY1_20;

                check_hlds__abstract_mode_constraints__succeeded = ((((MR_tag((MR_Word) check_hlds__abstract_mode_constraints__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__abstract_mode_constraints__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
                if (check_hlds__abstract_mode_constraints__succeeded)
                  {
                    check_hlds__abstract_mode_constraints__ArgY1_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__abstract_mode_constraints__HeadVar__2_2, (MR_Integer) 1)));
                    check_hlds__abstract_mode_constraints__TypeCtorInfo_40_40 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
                    {
                      check_hlds__abstract_mode_constraints__TypeInfo_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__TypeInfo_41_41, 0) = ((MR_Box) (check_hlds__abstract_mode_constraints__TypeCtorInfo_40_40));
                      MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__TypeInfo_41_41, 1) = ((MR_Box) (check_hlds__abstract_mode_constraints__TypeInfo_for_T_23));
                    }
                    {
                      check_hlds__abstract_mode_constraints__succeeded = mercury__list____Unify____list_1_0(check_hlds__abstract_mode_constraints__TypeInfo_41_41, (MR_Word) check_hlds__abstract_mode_constraints__ArgX1_19, (MR_Word) check_hlds__abstract_mode_constraints__ArgY1_20);
                    }
                  }
              }
              break;
          }
          break;
      }
    return check_hlds__abstract_mode_constraints__succeeded;
  }
}

MR_bool MR_CALL 
check_hlds__abstract_mode_constraints____Unify____mc_annotation_0_0(
  MR_Word check_hlds__abstract_mode_constraints__HeadVar__1_1,
  MR_Word check_hlds__abstract_mode_constraints__HeadVar__2_2)
{
  {
    MR_bool check_hlds__abstract_mode_constraints__succeeded;
    MR_Integer check_hlds__abstract_mode_constraints__CastX_5 = (MR_Integer) check_hlds__abstract_mode_constraints__HeadVar__1_1;
    MR_Integer check_hlds__abstract_mode_constraints__CastY_6 = (MR_Integer) check_hlds__abstract_mode_constraints__HeadVar__2_2;

    check_hlds__abstract_mode_constraints__succeeded = (check_hlds__abstract_mode_constraints__CastX_5 == check_hlds__abstract_mode_constraints__CastY_6);
    if (check_hlds__abstract_mode_constraints__succeeded)
      check_hlds__abstract_mode_constraints__succeeded = MR_TRUE;
    else
      {
        MR_Word check_hlds__abstract_mode_constraints__ArgX1_3 = (MR_Word) check_hlds__abstract_mode_constraints__HeadVar__1_1;
        MR_Word check_hlds__abstract_mode_constraints__ArgY1_4 = (MR_Word) check_hlds__abstract_mode_constraints__HeadVar__2_2;

        {
          check_hlds__abstract_mode_constraints__succeeded = mercury__term____Unify____context_0_0(check_hlds__abstract_mode_constraints__ArgX1_3, check_hlds__abstract_mode_constraints__ArgY1_4);
        }
      }
    return check_hlds__abstract_mode_constraints__succeeded;
  }
}

static void MR_CALL 
check_hlds__abstract_mode_constraints__pretty_print_binding_5_p_0(
  MR_Word check_hlds__abstract_mode_constraints__VarSet_6,
  MR_Word check_hlds__abstract_mode_constraints__Bindings_7,
  MR_Word check_hlds__abstract_mode_constraints__Var_8)
{
  {
    MR_bool check_hlds__abstract_mode_constraints__succeeded;
    MR_Word check_hlds__abstract_mode_constraints__TypeCtorInfo_23_23;
    MR_Word check_hlds__abstract_mode_constraints__Value_10;
    MR_String check_hlds__abstract_mode_constraints__Var_15;
    MR_Box check_hlds__abstract_mode_constraints__conv0_Value_10;

    {
      mercury__io__write_string_3_p_0((MR_String) "    ");
    }
    {
      check_hlds__abstract_mode_constraints__Var_15 = mercury__varset__lookup_name_2_f_0((MR_Word) &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0, check_hlds__abstract_mode_constraints__VarSet_6, check_hlds__abstract_mode_constraints__Var_8);
    }
    {
      mercury__io__write_string_3_p_0(check_hlds__abstract_mode_constraints__Var_15);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) " = ");
    }
    check_hlds__abstract_mode_constraints__TypeCtorInfo_23_23 = (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0;
    {
      mercury__map__lookup_3_p_0((MR_Word) &check_hlds__abstract_mode_constraints_scalar_common_1[0], check_hlds__abstract_mode_constraints__TypeCtorInfo_23_23, check_hlds__abstract_mode_constraints__Bindings_7, ((MR_Box) (check_hlds__abstract_mode_constraints__Var_8)), &check_hlds__abstract_mode_constraints__conv0_Value_10);
    }
    check_hlds__abstract_mode_constraints__Value_10 = ((MR_Word) check_hlds__abstract_mode_constraints__conv0_Value_10);
    {
      mercury__io__print_3_p_0(check_hlds__abstract_mode_constraints__TypeCtorInfo_23_23, ((MR_Box) (check_hlds__abstract_mode_constraints__Value_10)));
    }
    {
      mercury__io__nl_2_p_0();
    }
  }
}

static void MR_CALL 
check_hlds__abstract_mode_constraints__pretty_print_bindings_6_p_0_1(
  MR_Box check_hlds__abstract_mode_constraints__closure_arg,
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_1,
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_2,
  MR_Box * check_hlds__abstract_mode_constraints__wrapper_arg_3)
{
  {
    MR_Box check_hlds__abstract_mode_constraints__closure = check_hlds__abstract_mode_constraints__closure_arg;

    {
      check_hlds__abstract_mode_constraints__pretty_print_binding_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__abstract_mode_constraints__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
check_hlds__abstract_mode_constraints__pretty_print_bindings_6_p_0(
  MR_Word check_hlds__abstract_mode_constraints__VarSet_7,
  MR_Word check_hlds__abstract_mode_constraints__Bindings_8,
  MR_Integer check_hlds__abstract_mode_constraints__N_9,
  MR_Integer * check_hlds__abstract_mode_constraints__HeadVar__4_4)
{
  {
    MR_bool check_hlds__abstract_mode_constraints__succeeded;
    MR_Word check_hlds__abstract_mode_constraints__TypeInfo_25_25;
    MR_Word check_hlds__abstract_mode_constraints__Variables_11;
    MR_String check_hlds__abstract_mode_constraints__Var_15;
    MR_String check_hlds__abstract_mode_constraints__Var_18;
    MR_String check_hlds__abstract_mode_constraints__Var_19;
    MR_Word check_hlds__abstract_mode_constraints__Var_21;
    MR_Box check_hlds__abstract_mode_constraints__conv0_STATE_VARIABLE_IO_22_22;

    *check_hlds__abstract_mode_constraints__HeadVar__4_4 = (check_hlds__abstract_mode_constraints__N_9 + (MR_Integer) 1);
    {
      check_hlds__abstract_mode_constraints__Var_19 = mercury__string__from_int_1_f_0(check_hlds__abstract_mode_constraints__N_9);
    }
    {
      check_hlds__abstract_mode_constraints__Var_18 = mercury__string__f_43_43_2_f_0(check_hlds__abstract_mode_constraints__Var_19, (MR_String) ":\n{\n");
    }
    {
      check_hlds__abstract_mode_constraints__Var_15 = mercury__string__f_43_43_2_f_0((MR_String) "Solution ", check_hlds__abstract_mode_constraints__Var_18);
    }
    {
      mercury__io__write_string_3_p_0(check_hlds__abstract_mode_constraints__Var_15);
    }
    check_hlds__abstract_mode_constraints__TypeInfo_25_25 = (MR_Word) &check_hlds__abstract_mode_constraints_scalar_common_1[0];
    {
      check_hlds__abstract_mode_constraints__Variables_11 = mercury__map__keys_1_f_0(check_hlds__abstract_mode_constraints__TypeInfo_25_25, (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, check_hlds__abstract_mode_constraints__Bindings_8);
    }
    {
      check_hlds__abstract_mode_constraints__Var_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__Var_21, 0) = ((MR_Box) (&check_hlds__abstract_mode_constraints_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__Var_21, 1) = ((MR_Box) (check_hlds__abstract_mode_constraints__pretty_print_bindings_6_p_0_1));
      MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__Var_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__Var_21, 3) = ((MR_Box) (check_hlds__abstract_mode_constraints__VarSet_7));
      MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__Var_21, 4) = ((MR_Box) (check_hlds__abstract_mode_constraints__Bindings_8));
    }
    {
      mercury__list__foldl_4_p_2(check_hlds__abstract_mode_constraints__TypeInfo_25_25, (MR_Word) &mercury__io__io__type_ctor_info_state_0, check_hlds__abstract_mode_constraints__Var_21, check_hlds__abstract_mode_constraints__Variables_11, ((MR_Box) ((MR_Integer) 0)), &check_hlds__abstract_mode_constraints__conv0_STATE_VARIABLE_IO_22_22);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "}\n");
    }
  }
}

static void MR_CALL 
check_hlds__abstract_mode_constraints__dump_ann_constraint_6_p_0(
  MR_Word check_hlds__abstract_mode_constraints__Globals_7,
  MR_Word check_hlds__abstract_mode_constraints__VarSet_8,
  MR_Integer check_hlds__abstract_mode_constraints__Indent_9,
  MR_Word check_hlds__abstract_mode_constraints__AnnConstraint_10)
{
  {
    MR_bool check_hlds__abstract_mode_constraints__succeeded;
    MR_Word check_hlds__abstract_mode_constraints__Constraint_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__AnnConstraint_10, (MR_Integer) 0)));
    MR_Word check_hlds__abstract_mode_constraints__Annotation_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__AnnConstraint_10, (MR_Integer) 1)));

    {
      check_hlds__abstract_mode_constraints__dump_constraint_7_p_0(check_hlds__abstract_mode_constraints__Globals_7, check_hlds__abstract_mode_constraints__VarSet_8, check_hlds__abstract_mode_constraints__Indent_9, check_hlds__abstract_mode_constraints__Annotation_13, check_hlds__abstract_mode_constraints__Constraint_12);
    }
  }
}

static void MR_CALL 
check_hlds__abstract_mode_constraints__dump_constraint_7_p_0_2(
  MR_Box check_hlds__abstract_mode_constraints__closure_arg,
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_1,
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_2,
  MR_Box * check_hlds__abstract_mode_constraints__wrapper_arg_3)
{
  {
    MR_Box check_hlds__abstract_mode_constraints__closure = check_hlds__abstract_mode_constraints__closure_arg;

    {
      check_hlds__abstract_mode_constraints__dump_constraint_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__closure, (MR_Integer) 4))), ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__closure, (MR_Integer) 6))), ((MR_Word) check_hlds__abstract_mode_constraints__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
check_hlds__abstract_mode_constraints__dump_constraint_7_p_0_1(
  MR_Box check_hlds__abstract_mode_constraints__closure_arg,
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_1,
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_2,
  MR_Box * check_hlds__abstract_mode_constraints__wrapper_arg_3)
{
  {
    MR_Box check_hlds__abstract_mode_constraints__closure = check_hlds__abstract_mode_constraints__closure_arg;

    {
      check_hlds__abstract_mode_constraints__dump_constraint_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__closure, (MR_Integer) 4))), ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__closure, (MR_Integer) 6))), ((MR_Word) check_hlds__abstract_mode_constraints__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
check_hlds__abstract_mode_constraints__dump_constraint_7_p_0(
  MR_Word check_hlds__abstract_mode_constraints__Globals_8,
  MR_Word check_hlds__abstract_mode_constraints__VarSet_9,
  MR_Integer check_hlds__abstract_mode_constraints__Indent_10,
  MR_Word check_hlds__abstract_mode_constraints__Annotation_11,
  MR_Word check_hlds__abstract_mode_constraints__Constraint_12)
{
  {
    MR_bool check_hlds__abstract_mode_constraints__succeeded;

    switch (MR_tag((MR_Word) check_hlds__abstract_mode_constraints__Constraint_12)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word check_hlds__abstract_mode_constraints__AtomicConstraint_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__Constraint_12, (MR_Integer) 0)));

          {
            check_hlds__abstract_mode_constraints__dump_var_constraint_7_p_0(check_hlds__abstract_mode_constraints__Globals_8, check_hlds__abstract_mode_constraints__VarSet_9, check_hlds__abstract_mode_constraints__Indent_10, check_hlds__abstract_mode_constraints__Annotation_11, check_hlds__abstract_mode_constraints__AtomicConstraint_16);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word check_hlds__abstract_mode_constraints__Constraints_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__abstract_mode_constraints__Constraint_12, (MR_Integer) 0)));
          MR_Word check_hlds__abstract_mode_constraints__Context_15 = (MR_Word) check_hlds__abstract_mode_constraints__Annotation_11;
          MR_Integer check_hlds__abstract_mode_constraints__Var_38;
          MR_Word check_hlds__abstract_mode_constraints__Var_71;
          MR_Box check_hlds__abstract_mode_constraints__conv1_STATE_VARIABLE_IO_39_39;

          {
            parse_tree__error_util__write_error_pieces_6_p_0(check_hlds__abstract_mode_constraints__Globals_8, check_hlds__abstract_mode_constraints__Context_15, check_hlds__abstract_mode_constraints__Indent_10, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__abstract_mode_constraints_scalar_common_1[11]));
          }
          check_hlds__abstract_mode_constraints__Var_38 = (check_hlds__abstract_mode_constraints__Indent_10 + (MR_Integer) 1);
          {
            check_hlds__abstract_mode_constraints__Var_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__Var_71, 0) = ((MR_Box) (&check_hlds__abstract_mode_constraints_scalar_common_5[0]));
            MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__Var_71, 1) = ((MR_Box) (check_hlds__abstract_mode_constraints__dump_constraint_7_p_0_2));
            MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__Var_71, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
            MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__Var_71, 3) = ((MR_Box) (check_hlds__abstract_mode_constraints__Globals_8));
            MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__Var_71, 4) = ((MR_Box) (check_hlds__abstract_mode_constraints__VarSet_9));
            MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__Var_71, 5) = ((MR_Box) (check_hlds__abstract_mode_constraints__Var_38));
            MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__Var_71, 6) = ((MR_Box) (check_hlds__abstract_mode_constraints__Annotation_11));
          }
          {
            mercury__list__foldl_4_p_2((MR_Word) &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_constraint_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, check_hlds__abstract_mode_constraints__Var_71, check_hlds__abstract_mode_constraints__Constraints_14, ((MR_Box) ((MR_Integer) 0)), &check_hlds__abstract_mode_constraints__conv1_STATE_VARIABLE_IO_39_39);
          }
          {
            parse_tree__error_util__write_error_pieces_6_p_0(check_hlds__abstract_mode_constraints__Globals_8, check_hlds__abstract_mode_constraints__Context_15, check_hlds__abstract_mode_constraints__Indent_10, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__abstract_mode_constraints_scalar_common_1[13]));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer check_hlds__abstract_mode_constraints__Var_25;
          MR_Word check_hlds__abstract_mode_constraints__Constraints_46 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__abstract_mode_constraints__Constraint_12, (MR_Integer) 0)));
          MR_Word check_hlds__abstract_mode_constraints__Context_47 = (MR_Word) check_hlds__abstract_mode_constraints__Annotation_11;
          MR_Word check_hlds__abstract_mode_constraints__Var_56;
          MR_Box check_hlds__abstract_mode_constraints__conv0_STATE_VARIABLE_IO_26_26;

          {
            parse_tree__error_util__write_error_pieces_6_p_0(check_hlds__abstract_mode_constraints__Globals_8, check_hlds__abstract_mode_constraints__Context_47, check_hlds__abstract_mode_constraints__Indent_10, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__abstract_mode_constraints_scalar_common_1[7]));
          }
          check_hlds__abstract_mode_constraints__Var_25 = (check_hlds__abstract_mode_constraints__Indent_10 + (MR_Integer) 1);
          {
            check_hlds__abstract_mode_constraints__Var_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__Var_56, 0) = ((MR_Box) (&check_hlds__abstract_mode_constraints_scalar_common_5[0]));
            MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__Var_56, 1) = ((MR_Box) (check_hlds__abstract_mode_constraints__dump_constraint_7_p_0_1));
            MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__Var_56, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
            MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__Var_56, 3) = ((MR_Box) (check_hlds__abstract_mode_constraints__Globals_8));
            MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__Var_56, 4) = ((MR_Box) (check_hlds__abstract_mode_constraints__VarSet_9));
            MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__Var_56, 5) = ((MR_Box) (check_hlds__abstract_mode_constraints__Var_25));
            MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__Var_56, 6) = ((MR_Box) (check_hlds__abstract_mode_constraints__Annotation_11));
          }
          {
            mercury__list__foldl_4_p_2((MR_Word) &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_constraint_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, check_hlds__abstract_mode_constraints__Var_56, check_hlds__abstract_mode_constraints__Constraints_46, ((MR_Box) ((MR_Integer) 0)), &check_hlds__abstract_mode_constraints__conv0_STATE_VARIABLE_IO_26_26);
          }
          {
            parse_tree__error_util__write_error_pieces_6_p_0(check_hlds__abstract_mode_constraints__Globals_8, check_hlds__abstract_mode_constraints__Context_47, check_hlds__abstract_mode_constraints__Indent_10, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__abstract_mode_constraints_scalar_common_1[9]));
          }
        }
        break;
    }
  }
}

static void MR_CALL 
check_hlds__abstract_mode_constraints__dump_var_constraint_7_p_0(
  MR_Word check_hlds__abstract_mode_constraints__Globals_8,
  MR_Word check_hlds__abstract_mode_constraints__VarSet_9,
  MR_Integer check_hlds__abstract_mode_constraints__Indent_10,
  MR_Word check_hlds__abstract_mode_constraints__Annotation_11,
  MR_Word check_hlds__abstract_mode_constraints__Constraint_12)
{
  {
    MR_bool check_hlds__abstract_mode_constraints__succeeded;

    switch (MR_tag((MR_Word) check_hlds__abstract_mode_constraints__Constraint_12)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word check_hlds__abstract_mode_constraints__X_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__Constraint_12, (MR_Integer) 0)));
          MR_Word check_hlds__abstract_mode_constraints__Val_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__Constraint_12, (MR_Integer) 1)));
          MR_String check_hlds__abstract_mode_constraints__VarName_16;
          MR_String check_hlds__abstract_mode_constraints__ValString_17;
          MR_Word check_hlds__abstract_mode_constraints__Context_18;
          MR_Word check_hlds__abstract_mode_constraints__Var_71;
          MR_Word check_hlds__abstract_mode_constraints__Var_73;
          MR_Word check_hlds__abstract_mode_constraints__Var_75;
          MR_String check_hlds__abstract_mode_constraints__Var_76;
          MR_String check_hlds__abstract_mode_constraints__Var_77;

          {
            check_hlds__abstract_mode_constraints__Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__abstract_mode_constraints__Var_71, 0) = ((MR_Box) (check_hlds__abstract_mode_constraints__X_14));
            MR_hl_field(MR_mktag(1), check_hlds__abstract_mode_constraints__Var_71, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            check_hlds__abstract_mode_constraints__mc_var_list_to_string_3_p_0(check_hlds__abstract_mode_constraints__VarSet_9, check_hlds__abstract_mode_constraints__Var_71, &check_hlds__abstract_mode_constraints__VarName_16);
          }
          switch (check_hlds__abstract_mode_constraints__Val_15) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              check_hlds__abstract_mode_constraints__ValString_17 = (MR_String) "no";
              break;
            case (MR_Integer) 1:
              check_hlds__abstract_mode_constraints__ValString_17 = (MR_String) "yes";
              break;
          }
          check_hlds__abstract_mode_constraints__Context_18 = (MR_Word) check_hlds__abstract_mode_constraints__Annotation_11;
          {
            check_hlds__abstract_mode_constraints__Var_77 = mercury__string__f_43_43_2_f_0((MR_String) " = ", check_hlds__abstract_mode_constraints__ValString_17);
          }
          {
            check_hlds__abstract_mode_constraints__Var_76 = mercury__string__f_43_43_2_f_0(check_hlds__abstract_mode_constraints__VarName_16, check_hlds__abstract_mode_constraints__Var_77);
          }
          {
            check_hlds__abstract_mode_constraints__Var_75 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), check_hlds__abstract_mode_constraints__Var_75, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
            MR_hl_field(MR_mktag(3), check_hlds__abstract_mode_constraints__Var_75, 1) = ((MR_Box) (check_hlds__abstract_mode_constraints__Var_76));
          }
          {
            check_hlds__abstract_mode_constraints__Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__abstract_mode_constraints__Var_73, 0) = ((MR_Box) (check_hlds__abstract_mode_constraints__Var_75));
            MR_hl_field(MR_mktag(1), check_hlds__abstract_mode_constraints__Var_73, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            parse_tree__error_util__write_error_pieces_6_p_0(check_hlds__abstract_mode_constraints__Globals_8, check_hlds__abstract_mode_constraints__Context_18, check_hlds__abstract_mode_constraints__Indent_10, check_hlds__abstract_mode_constraints__Var_73);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word check_hlds__abstract_mode_constraints__Xs_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__abstract_mode_constraints__Constraint_12, (MR_Integer) 0)));
          MR_String check_hlds__abstract_mode_constraints__VarsString_20;
          MR_Word check_hlds__abstract_mode_constraints__Var_63;
          MR_Word check_hlds__abstract_mode_constraints__Var_65;
          MR_String check_hlds__abstract_mode_constraints__Var_66;
          MR_String check_hlds__abstract_mode_constraints__Var_68;
          MR_Word check_hlds__abstract_mode_constraints__Context_80;

          {
            check_hlds__abstract_mode_constraints__mc_var_list_to_string_3_p_0(check_hlds__abstract_mode_constraints__VarSet_9, check_hlds__abstract_mode_constraints__Xs_19, &check_hlds__abstract_mode_constraints__VarsString_20);
          }
          check_hlds__abstract_mode_constraints__Context_80 = (MR_Word) check_hlds__abstract_mode_constraints__Annotation_11;
          {
            check_hlds__abstract_mode_constraints__Var_68 = mercury__string__f_43_43_2_f_0(check_hlds__abstract_mode_constraints__VarsString_20, (MR_String) ")");
          }
          {
            check_hlds__abstract_mode_constraints__Var_66 = mercury__string__f_43_43_2_f_0((MR_String) "equivalent(", check_hlds__abstract_mode_constraints__Var_68);
          }
          {
            check_hlds__abstract_mode_constraints__Var_65 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), check_hlds__abstract_mode_constraints__Var_65, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
            MR_hl_field(MR_mktag(3), check_hlds__abstract_mode_constraints__Var_65, 1) = ((MR_Box) (check_hlds__abstract_mode_constraints__Var_66));
          }
          {
            check_hlds__abstract_mode_constraints__Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__abstract_mode_constraints__Var_63, 0) = ((MR_Box) (check_hlds__abstract_mode_constraints__Var_65));
            MR_hl_field(MR_mktag(1), check_hlds__abstract_mode_constraints__Var_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            parse_tree__error_util__write_error_pieces_6_p_0(check_hlds__abstract_mode_constraints__Globals_8, check_hlds__abstract_mode_constraints__Context_80, check_hlds__abstract_mode_constraints__Indent_10, check_hlds__abstract_mode_constraints__Var_63);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word check_hlds__abstract_mode_constraints__Y_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__abstract_mode_constraints__Constraint_12, (MR_Integer) 1)));
          MR_String check_hlds__abstract_mode_constraints__XName_22;
          MR_String check_hlds__abstract_mode_constraints__YName_23;
          MR_Word check_hlds__abstract_mode_constraints__Var_52;
          MR_Word check_hlds__abstract_mode_constraints__Var_54;
          MR_Word check_hlds__abstract_mode_constraints__Var_56;
          MR_Word check_hlds__abstract_mode_constraints__Var_58;
          MR_String check_hlds__abstract_mode_constraints__Var_59;
          MR_String check_hlds__abstract_mode_constraints__Var_60;
          MR_Word check_hlds__abstract_mode_constraints__X_81 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__abstract_mode_constraints__Constraint_12, (MR_Integer) 0)));
          MR_Word check_hlds__abstract_mode_constraints__Context_82;

          {
            check_hlds__abstract_mode_constraints__Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__abstract_mode_constraints__Var_52, 0) = ((MR_Box) (check_hlds__abstract_mode_constraints__X_81));
            MR_hl_field(MR_mktag(1), check_hlds__abstract_mode_constraints__Var_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            check_hlds__abstract_mode_constraints__mc_var_list_to_string_3_p_0(check_hlds__abstract_mode_constraints__VarSet_9, check_hlds__abstract_mode_constraints__Var_52, &check_hlds__abstract_mode_constraints__XName_22);
          }
          {
            check_hlds__abstract_mode_constraints__Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__abstract_mode_constraints__Var_54, 0) = ((MR_Box) (check_hlds__abstract_mode_constraints__Y_21));
            MR_hl_field(MR_mktag(1), check_hlds__abstract_mode_constraints__Var_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            check_hlds__abstract_mode_constraints__mc_var_list_to_string_3_p_0(check_hlds__abstract_mode_constraints__VarSet_9, check_hlds__abstract_mode_constraints__Var_54, &check_hlds__abstract_mode_constraints__YName_23);
          }
          check_hlds__abstract_mode_constraints__Context_82 = (MR_Word) check_hlds__abstract_mode_constraints__Annotation_11;
          {
            check_hlds__abstract_mode_constraints__Var_60 = mercury__string__f_43_43_2_f_0((MR_String) " -> ", check_hlds__abstract_mode_constraints__YName_23);
          }
          {
            check_hlds__abstract_mode_constraints__Var_59 = mercury__string__f_43_43_2_f_0(check_hlds__abstract_mode_constraints__XName_22, check_hlds__abstract_mode_constraints__Var_60);
          }
          {
            check_hlds__abstract_mode_constraints__Var_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), check_hlds__abstract_mode_constraints__Var_58, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
            MR_hl_field(MR_mktag(3), check_hlds__abstract_mode_constraints__Var_58, 1) = ((MR_Box) (check_hlds__abstract_mode_constraints__Var_59));
          }
          {
            check_hlds__abstract_mode_constraints__Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__abstract_mode_constraints__Var_56, 0) = ((MR_Box) (check_hlds__abstract_mode_constraints__Var_58));
            MR_hl_field(MR_mktag(1), check_hlds__abstract_mode_constraints__Var_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            parse_tree__error_util__write_error_pieces_6_p_0(check_hlds__abstract_mode_constraints__Globals_8, check_hlds__abstract_mode_constraints__Context_82, check_hlds__abstract_mode_constraints__Indent_10, check_hlds__abstract_mode_constraints__Var_56);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__abstract_mode_constraints__Constraint_12, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_String check_hlds__abstract_mode_constraints__XsString_24;
              MR_Word check_hlds__abstract_mode_constraints__Pieces_25;
              MR_Word check_hlds__abstract_mode_constraints__Var_42;
              MR_Word check_hlds__abstract_mode_constraints__Var_44;
              MR_String check_hlds__abstract_mode_constraints__Var_45;
              MR_String check_hlds__abstract_mode_constraints__Var_46;
              MR_String check_hlds__abstract_mode_constraints__Var_48;
              MR_Word check_hlds__abstract_mode_constraints__X_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__abstract_mode_constraints__Constraint_12, (MR_Integer) 1)));
              MR_Word check_hlds__abstract_mode_constraints__Context_84;
              MR_Word check_hlds__abstract_mode_constraints__Xs_85 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__abstract_mode_constraints__Constraint_12, (MR_Integer) 2)));
              MR_String check_hlds__abstract_mode_constraints__XName_86;

              {
                check_hlds__abstract_mode_constraints__Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__abstract_mode_constraints__Var_42, 0) = ((MR_Box) (check_hlds__abstract_mode_constraints__X_83));
                MR_hl_field(MR_mktag(1), check_hlds__abstract_mode_constraints__Var_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                check_hlds__abstract_mode_constraints__mc_var_list_to_string_3_p_0(check_hlds__abstract_mode_constraints__VarSet_9, check_hlds__abstract_mode_constraints__Var_42, &check_hlds__abstract_mode_constraints__XName_86);
              }
              {
                check_hlds__abstract_mode_constraints__mc_var_list_to_string_3_p_0(check_hlds__abstract_mode_constraints__VarSet_9, check_hlds__abstract_mode_constraints__Xs_85, &check_hlds__abstract_mode_constraints__XsString_24);
              }
              check_hlds__abstract_mode_constraints__Context_84 = (MR_Word) check_hlds__abstract_mode_constraints__Annotation_11;
              {
                check_hlds__abstract_mode_constraints__Var_48 = mercury__string__f_43_43_2_f_0(check_hlds__abstract_mode_constraints__XsString_24, (MR_String) ")");
              }
              {
                check_hlds__abstract_mode_constraints__Var_46 = mercury__string__f_43_43_2_f_0((MR_String) " <-> disj(", check_hlds__abstract_mode_constraints__Var_48);
              }
              {
                check_hlds__abstract_mode_constraints__Var_45 = mercury__string__f_43_43_2_f_0(check_hlds__abstract_mode_constraints__XName_86, check_hlds__abstract_mode_constraints__Var_46);
              }
              {
                check_hlds__abstract_mode_constraints__Var_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), check_hlds__abstract_mode_constraints__Var_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), check_hlds__abstract_mode_constraints__Var_44, 1) = ((MR_Box) (check_hlds__abstract_mode_constraints__Var_45));
              }
              {
                check_hlds__abstract_mode_constraints__Pieces_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__abstract_mode_constraints__Pieces_25, 0) = ((MR_Box) (check_hlds__abstract_mode_constraints__Var_44));
                MR_hl_field(MR_mktag(1), check_hlds__abstract_mode_constraints__Pieces_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                parse_tree__error_util__write_error_pieces_6_p_0(check_hlds__abstract_mode_constraints__Globals_8, check_hlds__abstract_mode_constraints__Context_84, check_hlds__abstract_mode_constraints__Indent_10, check_hlds__abstract_mode_constraints__Pieces_25);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word check_hlds__abstract_mode_constraints__Var_35;
              MR_String check_hlds__abstract_mode_constraints__Var_36;
              MR_String check_hlds__abstract_mode_constraints__Var_38;
              MR_Word check_hlds__abstract_mode_constraints__Context_87;
              MR_Word check_hlds__abstract_mode_constraints__Xs_88 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__abstract_mode_constraints__Constraint_12, (MR_Integer) 1)));
              MR_String check_hlds__abstract_mode_constraints__XsString_89;
              MR_Word check_hlds__abstract_mode_constraints__Pieces_90;

              {
                check_hlds__abstract_mode_constraints__mc_var_list_to_string_3_p_0(check_hlds__abstract_mode_constraints__VarSet_9, check_hlds__abstract_mode_constraints__Xs_88, &check_hlds__abstract_mode_constraints__XsString_89);
              }
              {
                check_hlds__abstract_mode_constraints__Var_38 = mercury__string__f_43_43_2_f_0(check_hlds__abstract_mode_constraints__XsString_89, (MR_String) ")");
              }
              {
                check_hlds__abstract_mode_constraints__Var_36 = mercury__string__f_43_43_2_f_0((MR_String) "at_most_one(", check_hlds__abstract_mode_constraints__Var_38);
              }
              {
                check_hlds__abstract_mode_constraints__Var_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), check_hlds__abstract_mode_constraints__Var_35, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), check_hlds__abstract_mode_constraints__Var_35, 1) = ((MR_Box) (check_hlds__abstract_mode_constraints__Var_36));
              }
              {
                check_hlds__abstract_mode_constraints__Pieces_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__abstract_mode_constraints__Pieces_90, 0) = ((MR_Box) (check_hlds__abstract_mode_constraints__Var_35));
                MR_hl_field(MR_mktag(1), check_hlds__abstract_mode_constraints__Pieces_90, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              check_hlds__abstract_mode_constraints__Context_87 = (MR_Word) check_hlds__abstract_mode_constraints__Annotation_11;
              {
                parse_tree__error_util__write_error_pieces_6_p_0(check_hlds__abstract_mode_constraints__Globals_8, check_hlds__abstract_mode_constraints__Context_87, check_hlds__abstract_mode_constraints__Indent_10, check_hlds__abstract_mode_constraints__Pieces_90);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word check_hlds__abstract_mode_constraints__Var_28;
              MR_String check_hlds__abstract_mode_constraints__Var_29;
              MR_String check_hlds__abstract_mode_constraints__Var_31;
              MR_Word check_hlds__abstract_mode_constraints__Context_91;
              MR_Word check_hlds__abstract_mode_constraints__Xs_92 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__abstract_mode_constraints__Constraint_12, (MR_Integer) 1)));
              MR_String check_hlds__abstract_mode_constraints__XsString_93;
              MR_Word check_hlds__abstract_mode_constraints__Pieces_94;

              {
                check_hlds__abstract_mode_constraints__mc_var_list_to_string_3_p_0(check_hlds__abstract_mode_constraints__VarSet_9, check_hlds__abstract_mode_constraints__Xs_92, &check_hlds__abstract_mode_constraints__XsString_93);
              }
              {
                check_hlds__abstract_mode_constraints__Var_31 = mercury__string__f_43_43_2_f_0(check_hlds__abstract_mode_constraints__XsString_93, (MR_String) ")");
              }
              {
                check_hlds__abstract_mode_constraints__Var_29 = mercury__string__f_43_43_2_f_0((MR_String) "exactly_one(", check_hlds__abstract_mode_constraints__Var_31);
              }
              {
                check_hlds__abstract_mode_constraints__Var_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), check_hlds__abstract_mode_constraints__Var_28, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), check_hlds__abstract_mode_constraints__Var_28, 1) = ((MR_Box) (check_hlds__abstract_mode_constraints__Var_29));
              }
              {
                check_hlds__abstract_mode_constraints__Pieces_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__abstract_mode_constraints__Pieces_94, 0) = ((MR_Box) (check_hlds__abstract_mode_constraints__Var_28));
                MR_hl_field(MR_mktag(1), check_hlds__abstract_mode_constraints__Pieces_94, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              check_hlds__abstract_mode_constraints__Context_91 = (MR_Word) check_hlds__abstract_mode_constraints__Annotation_11;
              {
                parse_tree__error_util__write_error_pieces_6_p_0(check_hlds__abstract_mode_constraints__Globals_8, check_hlds__abstract_mode_constraints__Context_91, check_hlds__abstract_mode_constraints__Indent_10, check_hlds__abstract_mode_constraints__Pieces_94);
              }
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
check_hlds__abstract_mode_constraints__mc_var_list_to_string_3_p_0(
  MR_Word check_hlds__abstract_mode_constraints__HeadVar__1_1,
  MR_Word check_hlds__abstract_mode_constraints__HeadVar__2_2,
  MR_String * check_hlds__abstract_mode_constraints__HeadVar__3_3)
{
  {
    MR_bool check_hlds__abstract_mode_constraints__succeeded;

    if ((check_hlds__abstract_mode_constraints__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *check_hlds__abstract_mode_constraints__HeadVar__3_3 = (MR_String) "";
    else
      {
        MR_Word check_hlds__abstract_mode_constraints__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__abstract_mode_constraints__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word check_hlds__abstract_mode_constraints__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__abstract_mode_constraints__HeadVar__2_2, (MR_Integer) 0)));

        if ((check_hlds__abstract_mode_constraints__Var_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              mercury__varset__lookup_name_3_p_0((MR_Word) &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0, check_hlds__abstract_mode_constraints__HeadVar__1_1, check_hlds__abstract_mode_constraints__Var_22, check_hlds__abstract_mode_constraints__HeadVar__3_3);
            }
          }
        else
          {
            MR_String check_hlds__abstract_mode_constraints__VarName_13;
            MR_String check_hlds__abstract_mode_constraints__VarNames_14;
            MR_String check_hlds__abstract_mode_constraints__Var_16;
            MR_Word check_hlds__abstract_mode_constraints__Var_40;
            MR_Word check_hlds__abstract_mode_constraints__Var_41;

            {
              mercury__varset__lookup_name_3_p_0((MR_Word) &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0, check_hlds__abstract_mode_constraints__HeadVar__1_1, check_hlds__abstract_mode_constraints__Var_22, &check_hlds__abstract_mode_constraints__VarName_13);
            }
            check_hlds__abstract_mode_constraints__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__abstract_mode_constraints__Var_21, (MR_Integer) 0)));
            check_hlds__abstract_mode_constraints__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__abstract_mode_constraints__Var_21, (MR_Integer) 1)));
            if ((check_hlds__abstract_mode_constraints__Var_40 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                {
                  mercury__varset__lookup_name_3_p_0((MR_Word) &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0, check_hlds__abstract_mode_constraints__HeadVar__1_1, check_hlds__abstract_mode_constraints__Var_41, &check_hlds__abstract_mode_constraints__VarNames_14);
                }
              }
            else
              {
                MR_String check_hlds__abstract_mode_constraints__VarName_32;
                MR_String check_hlds__abstract_mode_constraints__VarNames_33;
                MR_String check_hlds__abstract_mode_constraints__Var_35;

                {
                  mercury__varset__lookup_name_3_p_0((MR_Word) &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0, check_hlds__abstract_mode_constraints__HeadVar__1_1, check_hlds__abstract_mode_constraints__Var_41, &check_hlds__abstract_mode_constraints__VarName_32);
                }
                {
                  check_hlds__abstract_mode_constraints__mc_var_list_to_string_3_p_0(check_hlds__abstract_mode_constraints__HeadVar__1_1, check_hlds__abstract_mode_constraints__Var_40, &check_hlds__abstract_mode_constraints__VarNames_33);
                }
                {
                  check_hlds__abstract_mode_constraints__Var_35 = mercury__string__f_43_43_2_f_0((MR_String) ", ", check_hlds__abstract_mode_constraints__VarNames_33);
                }
                {
                  check_hlds__abstract_mode_constraints__VarNames_14 = mercury__string__f_43_43_2_f_0(check_hlds__abstract_mode_constraints__VarName_32, check_hlds__abstract_mode_constraints__Var_35);
                }
              }
            {
              check_hlds__abstract_mode_constraints__Var_16 = mercury__string__f_43_43_2_f_0((MR_String) ", ", check_hlds__abstract_mode_constraints__VarNames_14);
            }
            {
              *check_hlds__abstract_mode_constraints__HeadVar__3_3 = mercury__string__f_43_43_2_f_0(check_hlds__abstract_mode_constraints__VarName_13, check_hlds__abstract_mode_constraints__Var_16);
            }
          }
      }
  }
}

void MR_CALL 
check_hlds__abstract_mode_constraints__xor_6_p_0(
  MR_Word check_hlds__abstract_mode_constraints__MCVarSet_7,
  MR_Word check_hlds__abstract_mode_constraints__Context_8,
  MR_Word check_hlds__abstract_mode_constraints__A_9,
  MR_Word check_hlds__abstract_mode_constraints__B_10,
  MR_Word check_hlds__abstract_mode_constraints__STATE_VARIABLE_Constraints_0_12,
  MR_Word * check_hlds__abstract_mode_constraints__STATE_VARIABLE_Constraints_13)
{
  {
    MR_bool check_hlds__abstract_mode_constraints__succeeded;

    {
      check_hlds__abstract_mode_constraints__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_120_111_114_95_95_91_49_93_95_48_6_p_0(check_hlds__abstract_mode_constraints__Context_8, check_hlds__abstract_mode_constraints__A_9, check_hlds__abstract_mode_constraints__B_10, check_hlds__abstract_mode_constraints__STATE_VARIABLE_Constraints_0_12, check_hlds__abstract_mode_constraints__STATE_VARIABLE_Constraints_13);
    }
  }
}

void MR_CALL 
check_hlds__abstract_mode_constraints__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_120_111_114_95_95_91_49_93_95_48_6_p_0(
  MR_Word check_hlds__abstract_mode_constraints__Context_8,
  MR_Word check_hlds__abstract_mode_constraints__A_9,
  MR_Word check_hlds__abstract_mode_constraints__B_10,
  MR_Word check_hlds__abstract_mode_constraints__STATE_VARIABLE_Constraints_0_12,
  MR_Word * check_hlds__abstract_mode_constraints__STATE_VARIABLE_Constraints_13)
{
  {
    MR_bool check_hlds__abstract_mode_constraints__succeeded;
    MR_Word check_hlds__abstract_mode_constraints__Var_14;
    MR_Word check_hlds__abstract_mode_constraints__Var_16;
    MR_Word check_hlds__abstract_mode_constraints__Var_17;
    MR_Word check_hlds__abstract_mode_constraints__Var_18;
    MR_Word check_hlds__abstract_mode_constraints__AllProcsConstraints_27;
    MR_Word check_hlds__abstract_mode_constraints__ConstraintAnnotation_28;
    MR_Word check_hlds__abstract_mode_constraints__AnnotatedConstraint_29;
    MR_Word check_hlds__abstract_mode_constraints__Var_35;
    MR_Word check_hlds__abstract_mode_constraints__Var_36;
    MR_Word check_hlds__abstract_mode_constraints__Var_37;

    {
      check_hlds__abstract_mode_constraints__Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__abstract_mode_constraints__Var_18, 0) = ((MR_Box) (check_hlds__abstract_mode_constraints__B_10));
      MR_hl_field(MR_mktag(1), check_hlds__abstract_mode_constraints__Var_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__abstract_mode_constraints__Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__abstract_mode_constraints__Var_17, 0) = ((MR_Box) (check_hlds__abstract_mode_constraints__A_9));
      MR_hl_field(MR_mktag(1), check_hlds__abstract_mode_constraints__Var_17, 1) = ((MR_Box) (check_hlds__abstract_mode_constraints__Var_18));
    }
    {
      check_hlds__abstract_mode_constraints__Var_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), check_hlds__abstract_mode_constraints__Var_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), check_hlds__abstract_mode_constraints__Var_16, 1) = ((MR_Box) (check_hlds__abstract_mode_constraints__Var_17));
    }
    {
      check_hlds__abstract_mode_constraints__Var_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__Var_14, 0) = ((MR_Box) (check_hlds__abstract_mode_constraints__Var_16));
    }
    check_hlds__abstract_mode_constraints__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__STATE_VARIABLE_Constraints_0_12, (MR_Integer) 0)));
    check_hlds__abstract_mode_constraints__AllProcsConstraints_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__STATE_VARIABLE_Constraints_0_12, (MR_Integer) 1)));
    check_hlds__abstract_mode_constraints__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__STATE_VARIABLE_Constraints_0_12, (MR_Integer) 2)));
    check_hlds__abstract_mode_constraints__ConstraintAnnotation_28 = (MR_Word) check_hlds__abstract_mode_constraints__Context_8;
    {
      check_hlds__abstract_mode_constraints__AnnotatedConstraint_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__AnnotatedConstraint_29, 0) = ((MR_Box) (check_hlds__abstract_mode_constraints__Var_14));
      MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__AnnotatedConstraint_29, 1) = ((MR_Box) (check_hlds__abstract_mode_constraints__ConstraintAnnotation_28));
    }
    {
      check_hlds__abstract_mode_constraints__Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__abstract_mode_constraints__Var_35, 0) = ((MR_Box) (check_hlds__abstract_mode_constraints__AnnotatedConstraint_29));
      MR_hl_field(MR_mktag(1), check_hlds__abstract_mode_constraints__Var_35, 1) = ((MR_Box) (check_hlds__abstract_mode_constraints__AllProcsConstraints_27));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *check_hlds__abstract_mode_constraints__STATE_VARIABLE_Constraints_13 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__abstract_mode_constraints__Var_36));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__abstract_mode_constraints__Var_35));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__abstract_mode_constraints__Var_37));
    }
  }
}

void MR_CALL 
check_hlds__abstract_mode_constraints__exactly_one_5_p_0(
  MR_Word check_hlds__abstract_mode_constraints__MCVarSet_6,
  MR_Word check_hlds__abstract_mode_constraints__Context_7,
  MR_Word check_hlds__abstract_mode_constraints__MCVars_8,
  MR_Word check_hlds__abstract_mode_constraints__STATE_VARIABLE_Constraints_0_10,
  MR_Word * check_hlds__abstract_mode_constraints__STATE_VARIABLE_Constraints_11)
{
  {
    MR_bool check_hlds__abstract_mode_constraints__succeeded;

    {
      check_hlds__abstract_mode_constraints__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_97_99_116_108_121_95_111_110_101_95_95_91_49_93_95_48_5_p_0(check_hlds__abstract_mode_constraints__Context_7, check_hlds__abstract_mode_constraints__MCVars_8, check_hlds__abstract_mode_constraints__STATE_VARIABLE_Constraints_0_10, check_hlds__abstract_mode_constraints__STATE_VARIABLE_Constraints_11);
    }
  }
}

void MR_CALL 
check_hlds__abstract_mode_constraints__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_97_99_116_108_121_95_111_110_101_95_95_91_49_93_95_48_5_p_0(
  MR_Word check_hlds__abstract_mode_constraints__Context_7,
  MR_Word check_hlds__abstract_mode_constraints__MCVars_8,
  MR_Word check_hlds__abstract_mode_constraints__STATE_VARIABLE_Constraints_0_10,
  MR_Word * check_hlds__abstract_mode_constraints__STATE_VARIABLE_Constraints_11)
{
  {
    MR_bool check_hlds__abstract_mode_constraints__succeeded;
    MR_Word check_hlds__abstract_mode_constraints__Var_12;
    MR_Word check_hlds__abstract_mode_constraints__Var_14;
    MR_Word check_hlds__abstract_mode_constraints__AllProcsConstraints_22;
    MR_Word check_hlds__abstract_mode_constraints__ConstraintAnnotation_23;
    MR_Word check_hlds__abstract_mode_constraints__AnnotatedConstraint_24;
    MR_Word check_hlds__abstract_mode_constraints__Var_30;
    MR_Word check_hlds__abstract_mode_constraints__Var_31;
    MR_Word check_hlds__abstract_mode_constraints__Var_32;

    {
      check_hlds__abstract_mode_constraints__Var_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), check_hlds__abstract_mode_constraints__Var_14, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), check_hlds__abstract_mode_constraints__Var_14, 1) = ((MR_Box) (check_hlds__abstract_mode_constraints__MCVars_8));
    }
    {
      check_hlds__abstract_mode_constraints__Var_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__Var_12, 0) = ((MR_Box) (check_hlds__abstract_mode_constraints__Var_14));
    }
    check_hlds__abstract_mode_constraints__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__STATE_VARIABLE_Constraints_0_10, (MR_Integer) 0)));
    check_hlds__abstract_mode_constraints__AllProcsConstraints_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__STATE_VARIABLE_Constraints_0_10, (MR_Integer) 1)));
    check_hlds__abstract_mode_constraints__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__STATE_VARIABLE_Constraints_0_10, (MR_Integer) 2)));
    check_hlds__abstract_mode_constraints__ConstraintAnnotation_23 = (MR_Word) check_hlds__abstract_mode_constraints__Context_7;
    {
      check_hlds__abstract_mode_constraints__AnnotatedConstraint_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__AnnotatedConstraint_24, 0) = ((MR_Box) (check_hlds__abstract_mode_constraints__Var_12));
      MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__AnnotatedConstraint_24, 1) = ((MR_Box) (check_hlds__abstract_mode_constraints__ConstraintAnnotation_23));
    }
    {
      check_hlds__abstract_mode_constraints__Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__abstract_mode_constraints__Var_30, 0) = ((MR_Box) (check_hlds__abstract_mode_constraints__AnnotatedConstraint_24));
      MR_hl_field(MR_mktag(1), check_hlds__abstract_mode_constraints__Var_30, 1) = ((MR_Box) (check_hlds__abstract_mode_constraints__AllProcsConstraints_22));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *check_hlds__abstract_mode_constraints__STATE_VARIABLE_Constraints_11 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__abstract_mode_constraints__Var_31));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__abstract_mode_constraints__Var_30));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__abstract_mode_constraints__Var_32));
    }
  }
}

void MR_CALL 
check_hlds__abstract_mode_constraints__not_both_6_p_0(
  MR_Word check_hlds__abstract_mode_constraints__MCVarSet_7,
  MR_Word check_hlds__abstract_mode_constraints__Context_8,
  MR_Word check_hlds__abstract_mode_constraints__A_9,
  MR_Word check_hlds__abstract_mode_constraints__B_10,
  MR_Word check_hlds__abstract_mode_constraints__STATE_VARIABLE_Constraints_0_12,
  MR_Word * check_hlds__abstract_mode_constraints__STATE_VARIABLE_Constraints_13)
{
  {
    MR_bool check_hlds__abstract_mode_constraints__succeeded;

    {
      check_hlds__abstract_mode_constraints__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_111_116_95_98_111_116_104_95_95_91_49_93_95_48_6_p_0(check_hlds__abstract_mode_constraints__Context_8, check_hlds__abstract_mode_constraints__A_9, check_hlds__abstract_mode_constraints__B_10, check_hlds__abstract_mode_constraints__STATE_VARIABLE_Constraints_0_12, check_hlds__abstract_mode_constraints__STATE_VARIABLE_Constraints_13);
    }
  }
}

void MR_CALL 
check_hlds__abstract_mode_constraints__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_111_116_95_98_111_116_104_95_95_91_49_93_95_48_6_p_0(
  MR_Word check_hlds__abstract_mode_constraints__Context_8,
  MR_Word check_hlds__abstract_mode_constraints__A_9,
  MR_Word check_hlds__abstract_mode_constraints__B_10,
  MR_Word check_hlds__abstract_mode_constraints__STATE_VARIABLE_Constraints_0_12,
  MR_Word * check_hlds__abstract_mode_constraints__STATE_VARIABLE_Constraints_13)
{
  {
    MR_bool check_hlds__abstract_mode_constraints__succeeded;
    MR_Word check_hlds__abstract_mode_constraints__Var_14;
    MR_Word check_hlds__abstract_mode_constraints__Var_16;
    MR_Word check_hlds__abstract_mode_constraints__Var_17;
    MR_Word check_hlds__abstract_mode_constraints__Var_18;
    MR_Word check_hlds__abstract_mode_constraints__AllProcsConstraints_27;
    MR_Word check_hlds__abstract_mode_constraints__ConstraintAnnotation_28;
    MR_Word check_hlds__abstract_mode_constraints__AnnotatedConstraint_29;
    MR_Word check_hlds__abstract_mode_constraints__Var_35;
    MR_Word check_hlds__abstract_mode_constraints__Var_36;
    MR_Word check_hlds__abstract_mode_constraints__Var_37;

    {
      check_hlds__abstract_mode_constraints__Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__abstract_mode_constraints__Var_18, 0) = ((MR_Box) (check_hlds__abstract_mode_constraints__B_10));
      MR_hl_field(MR_mktag(1), check_hlds__abstract_mode_constraints__Var_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__abstract_mode_constraints__Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__abstract_mode_constraints__Var_17, 0) = ((MR_Box) (check_hlds__abstract_mode_constraints__A_9));
      MR_hl_field(MR_mktag(1), check_hlds__abstract_mode_constraints__Var_17, 1) = ((MR_Box) (check_hlds__abstract_mode_constraints__Var_18));
    }
    {
      check_hlds__abstract_mode_constraints__Var_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), check_hlds__abstract_mode_constraints__Var_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), check_hlds__abstract_mode_constraints__Var_16, 1) = ((MR_Box) (check_hlds__abstract_mode_constraints__Var_17));
    }
    {
      check_hlds__abstract_mode_constraints__Var_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__Var_14, 0) = ((MR_Box) (check_hlds__abstract_mode_constraints__Var_16));
    }
    check_hlds__abstract_mode_constraints__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__STATE_VARIABLE_Constraints_0_12, (MR_Integer) 0)));
    check_hlds__abstract_mode_constraints__AllProcsConstraints_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__STATE_VARIABLE_Constraints_0_12, (MR_Integer) 1)));
    check_hlds__abstract_mode_constraints__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__STATE_VARIABLE_Constraints_0_12, (MR_Integer) 2)));
    check_hlds__abstract_mode_constraints__ConstraintAnnotation_28 = (MR_Word) check_hlds__abstract_mode_constraints__Context_8;
    {
      check_hlds__abstract_mode_constraints__AnnotatedConstraint_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__AnnotatedConstraint_29, 0) = ((MR_Box) (check_hlds__abstract_mode_constraints__Var_14));
      MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__AnnotatedConstraint_29, 1) = ((MR_Box) (check_hlds__abstract_mode_constraints__ConstraintAnnotation_28));
    }
    {
      check_hlds__abstract_mode_constraints__Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__abstract_mode_constraints__Var_35, 0) = ((MR_Box) (check_hlds__abstract_mode_constraints__AnnotatedConstraint_29));
      MR_hl_field(MR_mktag(1), check_hlds__abstract_mode_constraints__Var_35, 1) = ((MR_Box) (check_hlds__abstract_mode_constraints__AllProcsConstraints_27));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *check_hlds__abstract_mode_constraints__STATE_VARIABLE_Constraints_13 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__abstract_mode_constraints__Var_36));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__abstract_mode_constraints__Var_35));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__abstract_mode_constraints__Var_37));
    }
  }
}

void MR_CALL 
check_hlds__abstract_mode_constraints__at_most_one_5_p_0(
  MR_Word check_hlds__abstract_mode_constraints__MCVarSet_6,
  MR_Word check_hlds__abstract_mode_constraints__Context_7,
  MR_Word check_hlds__abstract_mode_constraints__MCVars_8,
  MR_Word check_hlds__abstract_mode_constraints__STATE_VARIABLE_Constraints_0_10,
  MR_Word * check_hlds__abstract_mode_constraints__STATE_VARIABLE_Constraints_11)
{
  {
    MR_bool check_hlds__abstract_mode_constraints__succeeded;

    {
      check_hlds__abstract_mode_constraints__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_95_109_111_115_116_95_111_110_101_95_95_91_49_93_95_48_5_p_0(check_hlds__abstract_mode_constraints__Context_7, check_hlds__abstract_mode_constraints__MCVars_8, check_hlds__abstract_mode_constraints__STATE_VARIABLE_Constraints_0_10, check_hlds__abstract_mode_constraints__STATE_VARIABLE_Constraints_11);
    }
  }
}

void MR_CALL 
check_hlds__abstract_mode_constraints__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_95_109_111_115_116_95_111_110_101_95_95_91_49_93_95_48_5_p_0(
  MR_Word check_hlds__abstract_mode_constraints__Context_7,
  MR_Word check_hlds__abstract_mode_constraints__MCVars_8,
  MR_Word check_hlds__abstract_mode_constraints__STATE_VARIABLE_Constraints_0_10,
  MR_Word * check_hlds__abstract_mode_constraints__STATE_VARIABLE_Constraints_11)
{
  {
    MR_bool check_hlds__abstract_mode_constraints__succeeded;
    MR_Word check_hlds__abstract_mode_constraints__Var_12;
    MR_Word check_hlds__abstract_mode_constraints__Var_14;
    MR_Word check_hlds__abstract_mode_constraints__AllProcsConstraints_22;
    MR_Word check_hlds__abstract_mode_constraints__ConstraintAnnotation_23;
    MR_Word check_hlds__abstract_mode_constraints__AnnotatedConstraint_24;
    MR_Word check_hlds__abstract_mode_constraints__Var_30;
    MR_Word check_hlds__abstract_mode_constraints__Var_31;
    MR_Word check_hlds__abstract_mode_constraints__Var_32;

    {
      check_hlds__abstract_mode_constraints__Var_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), check_hlds__abstract_mode_constraints__Var_14, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), check_hlds__abstract_mode_constraints__Var_14, 1) = ((MR_Box) (check_hlds__abstract_mode_constraints__MCVars_8));
    }
    {
      check_hlds__abstract_mode_constraints__Var_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__Var_12, 0) = ((MR_Box) (check_hlds__abstract_mode_constraints__Var_14));
    }
    check_hlds__abstract_mode_constraints__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__STATE_VARIABLE_Constraints_0_10, (MR_Integer) 0)));
    check_hlds__abstract_mode_constraints__AllProcsConstraints_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__STATE_VARIABLE_Constraints_0_10, (MR_Integer) 1)));
    check_hlds__abstract_mode_constraints__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__STATE_VARIABLE_Constraints_0_10, (MR_Integer) 2)));
    check_hlds__abstract_mode_constraints__ConstraintAnnotation_23 = (MR_Word) check_hlds__abstract_mode_constraints__Context_7;
    {
      check_hlds__abstract_mode_constraints__AnnotatedConstraint_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__AnnotatedConstraint_24, 0) = ((MR_Box) (check_hlds__abstract_mode_constraints__Var_12));
      MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__AnnotatedConstraint_24, 1) = ((MR_Box) (check_hlds__abstract_mode_constraints__ConstraintAnnotation_23));
    }
    {
      check_hlds__abstract_mode_constraints__Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__abstract_mode_constraints__Var_30, 0) = ((MR_Box) (check_hlds__abstract_mode_constraints__AnnotatedConstraint_24));
      MR_hl_field(MR_mktag(1), check_hlds__abstract_mode_constraints__Var_30, 1) = ((MR_Box) (check_hlds__abstract_mode_constraints__AllProcsConstraints_22));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *check_hlds__abstract_mode_constraints__STATE_VARIABLE_Constraints_11 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__abstract_mode_constraints__Var_31));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__abstract_mode_constraints__Var_30));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__abstract_mode_constraints__Var_32));
    }
  }
}

void MR_CALL 
check_hlds__abstract_mode_constraints__equiv_disj_6_p_0(
  MR_Word check_hlds__abstract_mode_constraints__MCVarSet_7,
  MR_Word check_hlds__abstract_mode_constraints__Context_8,
  MR_Word check_hlds__abstract_mode_constraints__X_9,
  MR_Word check_hlds__abstract_mode_constraints__Ys_10,
  MR_Word check_hlds__abstract_mode_constraints__STATE_VARIABLE_Constraints_0_12,
  MR_Word * check_hlds__abstract_mode_constraints__STATE_VARIABLE_Constraints_13)
{
  {
    MR_bool check_hlds__abstract_mode_constraints__succeeded;

    {
      check_hlds__abstract_mode_constraints__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_113_117_105_118_95_100_105_115_106_95_95_91_49_93_95_48_6_p_0(check_hlds__abstract_mode_constraints__Context_8, check_hlds__abstract_mode_constraints__X_9, check_hlds__abstract_mode_constraints__Ys_10, check_hlds__abstract_mode_constraints__STATE_VARIABLE_Constraints_0_12, check_hlds__abstract_mode_constraints__STATE_VARIABLE_Constraints_13);
    }
  }
}

void MR_CALL 
check_hlds__abstract_mode_constraints__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_113_117_105_118_95_100_105_115_106_95_95_91_49_93_95_48_6_p_0(
  MR_Word check_hlds__abstract_mode_constraints__Context_8,
  MR_Word check_hlds__abstract_mode_constraints__X_9,
  MR_Word check_hlds__abstract_mode_constraints__Ys_10,
  MR_Word check_hlds__abstract_mode_constraints__STATE_VARIABLE_Constraints_0_12,
  MR_Word * check_hlds__abstract_mode_constraints__STATE_VARIABLE_Constraints_13)
{
  {
    MR_bool check_hlds__abstract_mode_constraints__succeeded;
    MR_Word check_hlds__abstract_mode_constraints__Var_14;
    MR_Word check_hlds__abstract_mode_constraints__Var_16;
    MR_Word check_hlds__abstract_mode_constraints__AllProcsConstraints_24;
    MR_Word check_hlds__abstract_mode_constraints__ConstraintAnnotation_25;
    MR_Word check_hlds__abstract_mode_constraints__AnnotatedConstraint_26;
    MR_Word check_hlds__abstract_mode_constraints__Var_32;
    MR_Word check_hlds__abstract_mode_constraints__Var_33;
    MR_Word check_hlds__abstract_mode_constraints__Var_34;

    {
      check_hlds__abstract_mode_constraints__Var_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), check_hlds__abstract_mode_constraints__Var_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), check_hlds__abstract_mode_constraints__Var_16, 1) = ((MR_Box) (check_hlds__abstract_mode_constraints__X_9));
      MR_hl_field(MR_mktag(3), check_hlds__abstract_mode_constraints__Var_16, 2) = ((MR_Box) (check_hlds__abstract_mode_constraints__Ys_10));
    }
    {
      check_hlds__abstract_mode_constraints__Var_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__Var_14, 0) = ((MR_Box) (check_hlds__abstract_mode_constraints__Var_16));
    }
    check_hlds__abstract_mode_constraints__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__STATE_VARIABLE_Constraints_0_12, (MR_Integer) 0)));
    check_hlds__abstract_mode_constraints__AllProcsConstraints_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__STATE_VARIABLE_Constraints_0_12, (MR_Integer) 1)));
    check_hlds__abstract_mode_constraints__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__STATE_VARIABLE_Constraints_0_12, (MR_Integer) 2)));
    check_hlds__abstract_mode_constraints__ConstraintAnnotation_25 = (MR_Word) check_hlds__abstract_mode_constraints__Context_8;
    {
      check_hlds__abstract_mode_constraints__AnnotatedConstraint_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__AnnotatedConstraint_26, 0) = ((MR_Box) (check_hlds__abstract_mode_constraints__Var_14));
      MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__AnnotatedConstraint_26, 1) = ((MR_Box) (check_hlds__abstract_mode_constraints__ConstraintAnnotation_25));
    }
    {
      check_hlds__abstract_mode_constraints__Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__abstract_mode_constraints__Var_32, 0) = ((MR_Box) (check_hlds__abstract_mode_constraints__AnnotatedConstraint_26));
      MR_hl_field(MR_mktag(1), check_hlds__abstract_mode_constraints__Var_32, 1) = ((MR_Box) (check_hlds__abstract_mode_constraints__AllProcsConstraints_24));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *check_hlds__abstract_mode_constraints__STATE_VARIABLE_Constraints_13 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__abstract_mode_constraints__Var_33));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__abstract_mode_constraints__Var_32));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__abstract_mode_constraints__Var_34));
    }
  }
}

void MR_CALL 
check_hlds__abstract_mode_constraints__equivalent_5_p_0(
  MR_Word check_hlds__abstract_mode_constraints__MCVarSet_6,
  MR_Word check_hlds__abstract_mode_constraints__Context_7,
  MR_Word check_hlds__abstract_mode_constraints__MCVars_8,
  MR_Word check_hlds__abstract_mode_constraints__STATE_VARIABLE_Constraints_0_10,
  MR_Word * check_hlds__abstract_mode_constraints__STATE_VARIABLE_Constraints_11)
{
  {
    MR_bool check_hlds__abstract_mode_constraints__succeeded;

    {
      check_hlds__abstract_mode_constraints__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_113_117_105_118_97_108_101_110_116_95_95_91_49_93_95_48_5_p_0(check_hlds__abstract_mode_constraints__Context_7, check_hlds__abstract_mode_constraints__MCVars_8, check_hlds__abstract_mode_constraints__STATE_VARIABLE_Constraints_0_10, check_hlds__abstract_mode_constraints__STATE_VARIABLE_Constraints_11);
    }
  }
}

void MR_CALL 
check_hlds__abstract_mode_constraints__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_113_117_105_118_97_108_101_110_116_95_95_91_49_93_95_48_5_p_0(
  MR_Word check_hlds__abstract_mode_constraints__Context_7,
  MR_Word check_hlds__abstract_mode_constraints__MCVars_8,
  MR_Word check_hlds__abstract_mode_constraints__STATE_VARIABLE_Constraints_0_10,
  MR_Word * check_hlds__abstract_mode_constraints__STATE_VARIABLE_Constraints_11)
{
  {
    MR_bool check_hlds__abstract_mode_constraints__succeeded;
    MR_Word check_hlds__abstract_mode_constraints__Var_12;
    MR_Word check_hlds__abstract_mode_constraints__Var_14;
    MR_Word check_hlds__abstract_mode_constraints__AllProcsConstraints_22;
    MR_Word check_hlds__abstract_mode_constraints__ConstraintAnnotation_23;
    MR_Word check_hlds__abstract_mode_constraints__AnnotatedConstraint_24;
    MR_Word check_hlds__abstract_mode_constraints__Var_30;
    MR_Word check_hlds__abstract_mode_constraints__Var_31;
    MR_Word check_hlds__abstract_mode_constraints__Var_32;

    {
      check_hlds__abstract_mode_constraints__Var_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__abstract_mode_constraints__Var_14, 0) = ((MR_Box) (check_hlds__abstract_mode_constraints__MCVars_8));
    }
    {
      check_hlds__abstract_mode_constraints__Var_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__Var_12, 0) = ((MR_Box) (check_hlds__abstract_mode_constraints__Var_14));
    }
    check_hlds__abstract_mode_constraints__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__STATE_VARIABLE_Constraints_0_10, (MR_Integer) 0)));
    check_hlds__abstract_mode_constraints__AllProcsConstraints_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__STATE_VARIABLE_Constraints_0_10, (MR_Integer) 1)));
    check_hlds__abstract_mode_constraints__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__STATE_VARIABLE_Constraints_0_10, (MR_Integer) 2)));
    check_hlds__abstract_mode_constraints__ConstraintAnnotation_23 = (MR_Word) check_hlds__abstract_mode_constraints__Context_7;
    {
      check_hlds__abstract_mode_constraints__AnnotatedConstraint_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__AnnotatedConstraint_24, 0) = ((MR_Box) (check_hlds__abstract_mode_constraints__Var_12));
      MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__AnnotatedConstraint_24, 1) = ((MR_Box) (check_hlds__abstract_mode_constraints__ConstraintAnnotation_23));
    }
    {
      check_hlds__abstract_mode_constraints__Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__abstract_mode_constraints__Var_30, 0) = ((MR_Box) (check_hlds__abstract_mode_constraints__AnnotatedConstraint_24));
      MR_hl_field(MR_mktag(1), check_hlds__abstract_mode_constraints__Var_30, 1) = ((MR_Box) (check_hlds__abstract_mode_constraints__AllProcsConstraints_22));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *check_hlds__abstract_mode_constraints__STATE_VARIABLE_Constraints_11 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__abstract_mode_constraints__Var_31));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__abstract_mode_constraints__Var_30));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__abstract_mode_constraints__Var_32));
    }
  }
}

void MR_CALL 
check_hlds__abstract_mode_constraints__equiv_no_5_p_0(
  MR_Word check_hlds__abstract_mode_constraints__MCVarSet_6,
  MR_Word check_hlds__abstract_mode_constraints__Context_7,
  MR_Word check_hlds__abstract_mode_constraints__MCVar_8,
  MR_Word check_hlds__abstract_mode_constraints__STATE_VARIABLE_Constraints_0_10,
  MR_Word * check_hlds__abstract_mode_constraints__STATE_VARIABLE_Constraints_11)
{
  {
    MR_bool check_hlds__abstract_mode_constraints__succeeded;

    {
      check_hlds__abstract_mode_constraints__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_113_117_105_118_95_110_111_95_95_91_49_93_95_48_5_p_0(check_hlds__abstract_mode_constraints__Context_7, check_hlds__abstract_mode_constraints__MCVar_8, check_hlds__abstract_mode_constraints__STATE_VARIABLE_Constraints_0_10, check_hlds__abstract_mode_constraints__STATE_VARIABLE_Constraints_11);
    }
  }
}

void MR_CALL 
check_hlds__abstract_mode_constraints__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_113_117_105_118_95_110_111_95_95_91_49_93_95_48_5_p_0(
  MR_Word check_hlds__abstract_mode_constraints__Context_7,
  MR_Word check_hlds__abstract_mode_constraints__MCVar_8,
  MR_Word check_hlds__abstract_mode_constraints__STATE_VARIABLE_Constraints_0_10,
  MR_Word * check_hlds__abstract_mode_constraints__STATE_VARIABLE_Constraints_11)
{
  {
    MR_bool check_hlds__abstract_mode_constraints__succeeded;
    MR_Word check_hlds__abstract_mode_constraints__Var_12;
    MR_Word check_hlds__abstract_mode_constraints__Var_14;
    MR_Word check_hlds__abstract_mode_constraints__AllProcsConstraints_23;
    MR_Word check_hlds__abstract_mode_constraints__ConstraintAnnotation_24;
    MR_Word check_hlds__abstract_mode_constraints__AnnotatedConstraint_25;
    MR_Word check_hlds__abstract_mode_constraints__Var_31;
    MR_Word check_hlds__abstract_mode_constraints__Var_32;
    MR_Word check_hlds__abstract_mode_constraints__Var_33;

    {
      check_hlds__abstract_mode_constraints__Var_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__Var_14, 0) = ((MR_Box) (check_hlds__abstract_mode_constraints__MCVar_8));
      MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__Var_14, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    {
      check_hlds__abstract_mode_constraints__Var_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__Var_12, 0) = ((MR_Box) (check_hlds__abstract_mode_constraints__Var_14));
    }
    check_hlds__abstract_mode_constraints__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__STATE_VARIABLE_Constraints_0_10, (MR_Integer) 0)));
    check_hlds__abstract_mode_constraints__AllProcsConstraints_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__STATE_VARIABLE_Constraints_0_10, (MR_Integer) 1)));
    check_hlds__abstract_mode_constraints__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__STATE_VARIABLE_Constraints_0_10, (MR_Integer) 2)));
    check_hlds__abstract_mode_constraints__ConstraintAnnotation_24 = (MR_Word) check_hlds__abstract_mode_constraints__Context_7;
    {
      check_hlds__abstract_mode_constraints__AnnotatedConstraint_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__AnnotatedConstraint_25, 0) = ((MR_Box) (check_hlds__abstract_mode_constraints__Var_12));
      MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__AnnotatedConstraint_25, 1) = ((MR_Box) (check_hlds__abstract_mode_constraints__ConstraintAnnotation_24));
    }
    {
      check_hlds__abstract_mode_constraints__Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__abstract_mode_constraints__Var_31, 0) = ((MR_Box) (check_hlds__abstract_mode_constraints__AnnotatedConstraint_25));
      MR_hl_field(MR_mktag(1), check_hlds__abstract_mode_constraints__Var_31, 1) = ((MR_Box) (check_hlds__abstract_mode_constraints__AllProcsConstraints_23));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *check_hlds__abstract_mode_constraints__STATE_VARIABLE_Constraints_11 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__abstract_mode_constraints__Var_32));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__abstract_mode_constraints__Var_31));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__abstract_mode_constraints__Var_33));
    }
  }
}

MR_Word MR_CALL 
check_hlds__abstract_mode_constraints__proc_specific_annotated_constraints_2_f_0(
  MR_Integer check_hlds__abstract_mode_constraints__ProcId_4,
  MR_Word check_hlds__abstract_mode_constraints__PredPCConstraints_5)
{
  {
    MR_bool check_hlds__abstract_mode_constraints__succeeded;
    MR_Word check_hlds__abstract_mode_constraints__HeadVar__3_3;
    MR_Word check_hlds__abstract_mode_constraints__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__PredPCConstraints_5, (MR_Integer) 0)));
    MR_Word check_hlds__abstract_mode_constraints__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__PredPCConstraints_5, (MR_Integer) 1)));
    MR_Word check_hlds__abstract_mode_constraints__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__PredPCConstraints_5, (MR_Integer) 2)));

    {
      check_hlds__abstract_mode_constraints__HeadVar__3_3 = mercury__multi_map__lookup_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_ann_constraint_0, check_hlds__abstract_mode_constraints__Var_6, ((MR_Box) (check_hlds__abstract_mode_constraints__ProcId_4)));
    }
    return check_hlds__abstract_mode_constraints__HeadVar__3_3;
  }
}

MR_Word MR_CALL 
check_hlds__abstract_mode_constraints__all_annotated_constraints_for_proc_2_f_0(
  MR_Integer check_hlds__abstract_mode_constraints__ProcId_4,
  MR_Word check_hlds__abstract_mode_constraints__PredPCConstraints_5)
{
  {
    MR_bool check_hlds__abstract_mode_constraints__succeeded;
    MR_Word check_hlds__abstract_mode_constraints__AnnotatedConstraints_6;
    MR_Word check_hlds__abstract_mode_constraints__TypeCtorInfo_15_15 = (MR_Word) &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_ann_constraint_0;
    MR_Word check_hlds__abstract_mode_constraints__ThisProcConstraints_7;
    MR_Word check_hlds__abstract_mode_constraints__AllProcConstraints_8;
    MR_Word check_hlds__abstract_mode_constraints__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__PredPCConstraints_5, (MR_Integer) 0)));
    MR_Word check_hlds__abstract_mode_constraints__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__PredPCConstraints_5, (MR_Integer) 1)));
    MR_Word check_hlds__abstract_mode_constraints__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__PredPCConstraints_5, (MR_Integer) 2)));
    MR_Word check_hlds__abstract_mode_constraints__Var_12;
    MR_Word check_hlds__abstract_mode_constraints__Var_13;

    {
      mercury__multi_map__lookup_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, check_hlds__abstract_mode_constraints__TypeCtorInfo_15_15, check_hlds__abstract_mode_constraints__Var_9, ((MR_Box) (check_hlds__abstract_mode_constraints__ProcId_4)), &check_hlds__abstract_mode_constraints__ThisProcConstraints_7);
    }
    check_hlds__abstract_mode_constraints__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__PredPCConstraints_5, (MR_Integer) 0)));
    check_hlds__abstract_mode_constraints__AllProcConstraints_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__PredPCConstraints_5, (MR_Integer) 1)));
    check_hlds__abstract_mode_constraints__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__PredPCConstraints_5, (MR_Integer) 2)));
    {
      check_hlds__abstract_mode_constraints__AnnotatedConstraints_6 = mercury__list__f_43_43_2_f_0(check_hlds__abstract_mode_constraints__TypeCtorInfo_15_15, check_hlds__abstract_mode_constraints__ThisProcConstraints_7, check_hlds__abstract_mode_constraints__AllProcConstraints_8);
    }
    return check_hlds__abstract_mode_constraints__AnnotatedConstraints_6;
  }
}

MR_Word MR_CALL 
check_hlds__abstract_mode_constraints__allproc_annotated_constraints_1_f_0(
  MR_Word check_hlds__abstract_mode_constraints__PredPCConstraints_3)
{
  {
    MR_bool check_hlds__abstract_mode_constraints__succeeded;
    MR_Word check_hlds__abstract_mode_constraints__AnnotatedConstraints_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__PredPCConstraints_3, (MR_Integer) 1)));
    MR_Word check_hlds__abstract_mode_constraints__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__PredPCConstraints_3, (MR_Integer) 0)));
    MR_Word check_hlds__abstract_mode_constraints__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__PredPCConstraints_3, (MR_Integer) 2)));

    return check_hlds__abstract_mode_constraints__AnnotatedConstraints_4;
  }
}

static MR_Box MR_CALL 
check_hlds__abstract_mode_constraints__all_constraints_for_proc_2_f_0_1(
  MR_Box check_hlds__abstract_mode_constraints__closure_arg,
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_1)
{
  {
    MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_2;
    MR_Box check_hlds__abstract_mode_constraints__closure = check_hlds__abstract_mode_constraints__closure_arg;
    MR_Word check_hlds__abstract_mode_constraints__conv0_Constraint_3;

    {
      check_hlds__abstract_mode_constraints__conv0_Constraint_3 = check_hlds__abstract_mode_constraints__project_mc_constraint_1_f_0(((MR_Word) check_hlds__abstract_mode_constraints__wrapper_arg_1));
    }
    check_hlds__abstract_mode_constraints__wrapper_arg_2 = ((MR_Box) (check_hlds__abstract_mode_constraints__conv0_Constraint_3));
    return check_hlds__abstract_mode_constraints__wrapper_arg_2;
  }
}

MR_Word MR_CALL 
check_hlds__abstract_mode_constraints__all_constraints_for_proc_2_f_0(
  MR_Integer check_hlds__abstract_mode_constraints__ProcId_4,
  MR_Word check_hlds__abstract_mode_constraints__PredPCConstraints_5)
{
  {
    MR_bool check_hlds__abstract_mode_constraints__succeeded;
    MR_Word check_hlds__abstract_mode_constraints__Constraints_6;
    MR_Word check_hlds__abstract_mode_constraints__TypeCtorInfo_15_24 = (MR_Word) &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_ann_constraint_0;
    MR_Word check_hlds__abstract_mode_constraints__AnnotatedConstraints_7;
    MR_Word check_hlds__abstract_mode_constraints__ThisProcConstraints_16;
    MR_Word check_hlds__abstract_mode_constraints__AllProcConstraints_17;
    MR_Word check_hlds__abstract_mode_constraints__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__PredPCConstraints_5, (MR_Integer) 0)));
    MR_Word check_hlds__abstract_mode_constraints__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__PredPCConstraints_5, (MR_Integer) 1)));
    MR_Word check_hlds__abstract_mode_constraints__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__PredPCConstraints_5, (MR_Integer) 2)));
    MR_Word check_hlds__abstract_mode_constraints__Var_21;
    MR_Word check_hlds__abstract_mode_constraints__Var_22;

    {
      mercury__multi_map__lookup_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, check_hlds__abstract_mode_constraints__TypeCtorInfo_15_24, check_hlds__abstract_mode_constraints__Var_18, ((MR_Box) (check_hlds__abstract_mode_constraints__ProcId_4)), &check_hlds__abstract_mode_constraints__ThisProcConstraints_16);
    }
    check_hlds__abstract_mode_constraints__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__PredPCConstraints_5, (MR_Integer) 0)));
    check_hlds__abstract_mode_constraints__AllProcConstraints_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__PredPCConstraints_5, (MR_Integer) 1)));
    check_hlds__abstract_mode_constraints__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__PredPCConstraints_5, (MR_Integer) 2)));
    {
      check_hlds__abstract_mode_constraints__AnnotatedConstraints_7 = mercury__list__f_43_43_2_f_0(check_hlds__abstract_mode_constraints__TypeCtorInfo_15_24, check_hlds__abstract_mode_constraints__ThisProcConstraints_16, check_hlds__abstract_mode_constraints__AllProcConstraints_17);
    }
    {
      check_hlds__abstract_mode_constraints__Constraints_6 = mercury__list__map_2_f_0((MR_Word) &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_ann_constraint_0, (MR_Word) &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_constraint_0, (MR_Word) &check_hlds__abstract_mode_constraints_scalar_common_2[3], check_hlds__abstract_mode_constraints__AnnotatedConstraints_7);
    }
    return check_hlds__abstract_mode_constraints__Constraints_6;
  }
}

static MR_Box MR_CALL 
check_hlds__abstract_mode_constraints__allproc_constraints_1_f_0_1(
  MR_Box check_hlds__abstract_mode_constraints__closure_arg,
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_1)
{
  {
    MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_2;
    MR_Box check_hlds__abstract_mode_constraints__closure = check_hlds__abstract_mode_constraints__closure_arg;
    MR_Word check_hlds__abstract_mode_constraints__conv0_Constraint_3;

    {
      check_hlds__abstract_mode_constraints__conv0_Constraint_3 = check_hlds__abstract_mode_constraints__project_mc_constraint_1_f_0(((MR_Word) check_hlds__abstract_mode_constraints__wrapper_arg_1));
    }
    check_hlds__abstract_mode_constraints__wrapper_arg_2 = ((MR_Box) (check_hlds__abstract_mode_constraints__conv0_Constraint_3));
    return check_hlds__abstract_mode_constraints__wrapper_arg_2;
  }
}

MR_Word MR_CALL 
check_hlds__abstract_mode_constraints__allproc_constraints_1_f_0(
  MR_Word check_hlds__abstract_mode_constraints__PredPCConstraints_3)
{
  {
    MR_bool check_hlds__abstract_mode_constraints__succeeded;
    MR_Word check_hlds__abstract_mode_constraints__Constraints_4;
    MR_Word check_hlds__abstract_mode_constraints__AnnotatedConstraints_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__PredPCConstraints_3, (MR_Integer) 1)));
    MR_Word check_hlds__abstract_mode_constraints__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__PredPCConstraints_3, (MR_Integer) 0)));
    MR_Word check_hlds__abstract_mode_constraints__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__PredPCConstraints_3, (MR_Integer) 2)));

    {
      check_hlds__abstract_mode_constraints__Constraints_4 = mercury__list__map_2_f_0((MR_Word) &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_ann_constraint_0, (MR_Word) &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_constraint_0, (MR_Word) &check_hlds__abstract_mode_constraints_scalar_common_2[2], check_hlds__abstract_mode_constraints__AnnotatedConstraints_5);
    }
    return check_hlds__abstract_mode_constraints__Constraints_4;
  }
}

void MR_CALL 
check_hlds__abstract_mode_constraints__add_mode_infer_callee_3_p_0(
  MR_Word check_hlds__abstract_mode_constraints__PredId_4,
  MR_Word check_hlds__abstract_mode_constraints__STATE_VARIABLE_PredPCConstraints_0_7,
  MR_Word * check_hlds__abstract_mode_constraints__STATE_VARIABLE_PredPCConstraints_8)
{
  {
    MR_bool check_hlds__abstract_mode_constraints__succeeded;
    MR_Word check_hlds__abstract_mode_constraints__ModeInferCallees_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__STATE_VARIABLE_PredPCConstraints_0_7, (MR_Integer) 2)));
    MR_Word check_hlds__abstract_mode_constraints__Var_10;
    MR_Word check_hlds__abstract_mode_constraints__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__STATE_VARIABLE_PredPCConstraints_0_7, (MR_Integer) 0)));
    MR_Word check_hlds__abstract_mode_constraints__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__STATE_VARIABLE_PredPCConstraints_0_7, (MR_Integer) 1)));
    MR_Word check_hlds__abstract_mode_constraints__Var_13;
    MR_Word check_hlds__abstract_mode_constraints__Var_14;
    MR_Word check_hlds__abstract_mode_constraints__Var_15;

    {
      check_hlds__abstract_mode_constraints__Var_10 = mercury__set__insert_2_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, check_hlds__abstract_mode_constraints__ModeInferCallees_6, ((MR_Box) (check_hlds__abstract_mode_constraints__PredId_4)));
    }
    check_hlds__abstract_mode_constraints__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__STATE_VARIABLE_PredPCConstraints_0_7, (MR_Integer) 0)));
    check_hlds__abstract_mode_constraints__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__STATE_VARIABLE_PredPCConstraints_0_7, (MR_Integer) 1)));
    check_hlds__abstract_mode_constraints__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__STATE_VARIABLE_PredPCConstraints_0_7, (MR_Integer) 2)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *check_hlds__abstract_mode_constraints__STATE_VARIABLE_PredPCConstraints_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__abstract_mode_constraints__Var_13));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__abstract_mode_constraints__Var_14));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__abstract_mode_constraints__Var_10));
    }
  }
}

void MR_CALL 
check_hlds__abstract_mode_constraints__add_proc_specific_constraint_6_p_0(
  MR_Word check_hlds__abstract_mode_constraints__MCVarSet_7,
  MR_Word check_hlds__abstract_mode_constraints__Context_8,
  MR_Integer check_hlds__abstract_mode_constraints__ProcId_9,
  MR_Word check_hlds__abstract_mode_constraints__Constraint_10,
  MR_Word check_hlds__abstract_mode_constraints__STATE_VARIABLE_PredPCConstraints_0_16,
  MR_Word * check_hlds__abstract_mode_constraints__STATE_VARIABLE_PredPCConstraints_17)
{
  {
    MR_bool check_hlds__abstract_mode_constraints__succeeded;

    {
      check_hlds__abstract_mode_constraints__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_112_114_111_99_95_115_112_101_99_105_102_105_99_95_99_111_110_115_116_114_97_105_110_116_95_95_91_49_93_95_48_6_p_0(check_hlds__abstract_mode_constraints__Context_8, check_hlds__abstract_mode_constraints__ProcId_9, check_hlds__abstract_mode_constraints__Constraint_10, check_hlds__abstract_mode_constraints__STATE_VARIABLE_PredPCConstraints_0_16, check_hlds__abstract_mode_constraints__STATE_VARIABLE_PredPCConstraints_17);
    }
  }
}

void MR_CALL 
check_hlds__abstract_mode_constraints__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_112_114_111_99_95_115_112_101_99_105_102_105_99_95_99_111_110_115_116_114_97_105_110_116_95_95_91_49_93_95_48_6_p_0(
  MR_Word check_hlds__abstract_mode_constraints__Context_8,
  MR_Integer check_hlds__abstract_mode_constraints__ProcId_9,
  MR_Word check_hlds__abstract_mode_constraints__Constraint_10,
  MR_Word check_hlds__abstract_mode_constraints__STATE_VARIABLE_PredPCConstraints_0_16,
  MR_Word * check_hlds__abstract_mode_constraints__STATE_VARIABLE_PredPCConstraints_17)
{
  {
    MR_bool check_hlds__abstract_mode_constraints__succeeded;
    MR_Word check_hlds__abstract_mode_constraints__ProcConstraints_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__STATE_VARIABLE_PredPCConstraints_0_16, (MR_Integer) 0)));
    MR_Word check_hlds__abstract_mode_constraints__ConstraintAnnotation_14 = (MR_Word) check_hlds__abstract_mode_constraints__Context_8;
    MR_Word check_hlds__abstract_mode_constraints__AnnotatedConstraint_15;
    MR_Word check_hlds__abstract_mode_constraints__Var_27;
    MR_Word check_hlds__abstract_mode_constraints__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__STATE_VARIABLE_PredPCConstraints_0_16, (MR_Integer) 1)));
    MR_Word check_hlds__abstract_mode_constraints__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__STATE_VARIABLE_PredPCConstraints_0_16, (MR_Integer) 2)));
    MR_Word check_hlds__abstract_mode_constraints__Var_31;
    MR_Word check_hlds__abstract_mode_constraints__Var_32;
    MR_Word check_hlds__abstract_mode_constraints__Var_30;

    {
      check_hlds__abstract_mode_constraints__AnnotatedConstraint_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__AnnotatedConstraint_15, 0) = ((MR_Box) (check_hlds__abstract_mode_constraints__Constraint_10));
      MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__AnnotatedConstraint_15, 1) = ((MR_Box) (check_hlds__abstract_mode_constraints__ConstraintAnnotation_14));
    }
    {
      check_hlds__abstract_mode_constraints__Var_27 = mercury__multi_map__add_3_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_ann_constraint_0, check_hlds__abstract_mode_constraints__ProcConstraints_13, ((MR_Box) (check_hlds__abstract_mode_constraints__ProcId_9)), ((MR_Box) (check_hlds__abstract_mode_constraints__AnnotatedConstraint_15)));
    }
    check_hlds__abstract_mode_constraints__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__STATE_VARIABLE_PredPCConstraints_0_16, (MR_Integer) 0)));
    check_hlds__abstract_mode_constraints__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__STATE_VARIABLE_PredPCConstraints_0_16, (MR_Integer) 1)));
    check_hlds__abstract_mode_constraints__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__STATE_VARIABLE_PredPCConstraints_0_16, (MR_Integer) 2)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *check_hlds__abstract_mode_constraints__STATE_VARIABLE_PredPCConstraints_17 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__abstract_mode_constraints__Var_27));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__abstract_mode_constraints__Var_31));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__abstract_mode_constraints__Var_32));
    }
  }
}

void MR_CALL 
check_hlds__abstract_mode_constraints__add_constraint_5_p_0(
  MR_Word check_hlds__abstract_mode_constraints__MCVarSet_6,
  MR_Word check_hlds__abstract_mode_constraints__Context_7,
  MR_Word check_hlds__abstract_mode_constraints__Constraint_8,
  MR_Word check_hlds__abstract_mode_constraints__STATE_VARIABLE_PredPCConstraints_0_14,
  MR_Word * check_hlds__abstract_mode_constraints__STATE_VARIABLE_PredPCConstraints_15)
{
  {
    MR_bool check_hlds__abstract_mode_constraints__succeeded;

    {
      check_hlds__abstract_mode_constraints__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_99_111_110_115_116_114_97_105_110_116_95_95_91_49_93_95_48_5_p_0(check_hlds__abstract_mode_constraints__Context_7, check_hlds__abstract_mode_constraints__Constraint_8, check_hlds__abstract_mode_constraints__STATE_VARIABLE_PredPCConstraints_0_14, check_hlds__abstract_mode_constraints__STATE_VARIABLE_PredPCConstraints_15);
    }
  }
}

void MR_CALL 
check_hlds__abstract_mode_constraints__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_99_111_110_115_116_114_97_105_110_116_95_95_91_49_93_95_48_5_p_0(
  MR_Word check_hlds__abstract_mode_constraints__Context_7,
  MR_Word check_hlds__abstract_mode_constraints__Constraint_8,
  MR_Word check_hlds__abstract_mode_constraints__STATE_VARIABLE_PredPCConstraints_0_14,
  MR_Word * check_hlds__abstract_mode_constraints__STATE_VARIABLE_PredPCConstraints_15)
{
  {
    MR_bool check_hlds__abstract_mode_constraints__succeeded;
    MR_Word check_hlds__abstract_mode_constraints__AllProcsConstraints_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__STATE_VARIABLE_PredPCConstraints_0_14, (MR_Integer) 1)));
    MR_Word check_hlds__abstract_mode_constraints__ConstraintAnnotation_12 = (MR_Word) check_hlds__abstract_mode_constraints__Context_7;
    MR_Word check_hlds__abstract_mode_constraints__AnnotatedConstraint_13;
    MR_Word check_hlds__abstract_mode_constraints__Var_21;
    MR_Word check_hlds__abstract_mode_constraints__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__STATE_VARIABLE_PredPCConstraints_0_14, (MR_Integer) 0)));
    MR_Word check_hlds__abstract_mode_constraints__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__STATE_VARIABLE_PredPCConstraints_0_14, (MR_Integer) 2)));

    {
      check_hlds__abstract_mode_constraints__AnnotatedConstraint_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__AnnotatedConstraint_13, 0) = ((MR_Box) (check_hlds__abstract_mode_constraints__Constraint_8));
      MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__AnnotatedConstraint_13, 1) = ((MR_Box) (check_hlds__abstract_mode_constraints__ConstraintAnnotation_12));
    }
    {
      check_hlds__abstract_mode_constraints__Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__abstract_mode_constraints__Var_21, 0) = ((MR_Box) (check_hlds__abstract_mode_constraints__AnnotatedConstraint_13));
      MR_hl_field(MR_mktag(1), check_hlds__abstract_mode_constraints__Var_21, 1) = ((MR_Box) (check_hlds__abstract_mode_constraints__AllProcsConstraints_11));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *check_hlds__abstract_mode_constraints__STATE_VARIABLE_PredPCConstraints_15 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__abstract_mode_constraints__Var_22));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__abstract_mode_constraints__Var_21));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__abstract_mode_constraints__Var_23));
    }
  }
}

MR_Word MR_CALL 
check_hlds__abstract_mode_constraints__init_pred_p_c_constraints_0_f_0(void)
{
  {
    MR_bool check_hlds__abstract_mode_constraints__succeeded;
    MR_Word check_hlds__abstract_mode_constraints__HeadVar__1_1;
    MR_Word check_hlds__abstract_mode_constraints__Var_2;
    MR_Word check_hlds__abstract_mode_constraints__Var_4;

    {
      check_hlds__abstract_mode_constraints__Var_2 = mercury__multi_map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_ann_constraint_0);
    }
    {
      check_hlds__abstract_mode_constraints__Var_4 = mercury__set__init_0_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0);
    }
    {
      check_hlds__abstract_mode_constraints__HeadVar__1_1 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__HeadVar__1_1, 0) = ((MR_Box) (check_hlds__abstract_mode_constraints__Var_2));
      MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__HeadVar__1_1, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__HeadVar__1_1, 2) = ((MR_Box) (check_hlds__abstract_mode_constraints__Var_4));
    }
    return check_hlds__abstract_mode_constraints__HeadVar__1_1;
  }
}

static void MR_CALL 
check_hlds__abstract_mode_constraints__pretty_print_solutions_4_p_0_1(
  MR_Box check_hlds__abstract_mode_constraints__closure_arg,
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_1,
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_2,
  MR_Box * check_hlds__abstract_mode_constraints__wrapper_arg_3,
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_4,
  MR_Box * check_hlds__abstract_mode_constraints__wrapper_arg_5)
{
  {
    MR_Box check_hlds__abstract_mode_constraints__closure = check_hlds__abstract_mode_constraints__closure_arg;
    MR_Integer check_hlds__abstract_mode_constraints__conv0_HeadVar__4_4;

    {
      check_hlds__abstract_mode_constraints__pretty_print_bindings_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__abstract_mode_constraints__wrapper_arg_1), ((MR_Integer) check_hlds__abstract_mode_constraints__wrapper_arg_2), &check_hlds__abstract_mode_constraints__conv0_HeadVar__4_4);
    }
    *check_hlds__abstract_mode_constraints__wrapper_arg_3 = ((MR_Box) (check_hlds__abstract_mode_constraints__conv0_HeadVar__4_4));
  }
}

void MR_CALL 
check_hlds__abstract_mode_constraints__pretty_print_solutions_4_p_0(
  MR_Word check_hlds__abstract_mode_constraints__VarSet_5,
  MR_Word check_hlds__abstract_mode_constraints__Solutions_6)
{
  {
    MR_bool check_hlds__abstract_mode_constraints__succeeded;
    MR_Word check_hlds__abstract_mode_constraints__Var_11;
    MR_Integer check_hlds__abstract_mode_constraints__Var_8;
    MR_Box check_hlds__abstract_mode_constraints__conv2_Var_8;
    MR_Box check_hlds__abstract_mode_constraints__conv1_STATE_VARIABLE_IO_10;

    {
      check_hlds__abstract_mode_constraints__Var_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__Var_11, 0) = ((MR_Box) (&check_hlds__abstract_mode_constraints_scalar_common_3[1]));
      MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__Var_11, 1) = ((MR_Box) (check_hlds__abstract_mode_constraints__pretty_print_solutions_4_p_0_1));
      MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__Var_11, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__Var_11, 3) = ((MR_Box) (check_hlds__abstract_mode_constraints__VarSet_5));
    }
    {
      mercury__list__foldl2_6_p_2((MR_Word) &check_hlds__abstract_mode_constraints_scalar_common_2[0], (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, check_hlds__abstract_mode_constraints__Var_11, check_hlds__abstract_mode_constraints__Solutions_6, ((MR_Box) ((MR_Integer) 0)), &check_hlds__abstract_mode_constraints__conv2_Var_8, ((MR_Box) ((MR_Integer) 0)), &check_hlds__abstract_mode_constraints__conv1_STATE_VARIABLE_IO_10);
    }
    check_hlds__abstract_mode_constraints__Var_8 = ((MR_Integer) check_hlds__abstract_mode_constraints__conv2_Var_8);
  }
}

static void MR_CALL 
check_hlds__abstract_mode_constraints__dump_constraints_and_annotations_5_p_0_1(
  MR_Box check_hlds__abstract_mode_constraints__closure_arg,
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_1,
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_2,
  MR_Box * check_hlds__abstract_mode_constraints__wrapper_arg_3)
{
  {
    MR_Box check_hlds__abstract_mode_constraints__closure = check_hlds__abstract_mode_constraints__closure_arg;

    {
      check_hlds__abstract_mode_constraints__dump_ann_constraint_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__closure, (MR_Integer) 4))), ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__closure, (MR_Integer) 5))), ((MR_Word) check_hlds__abstract_mode_constraints__wrapper_arg_1));
    }
  }
}

void MR_CALL 
check_hlds__abstract_mode_constraints__dump_constraints_and_annotations_5_p_0(
  MR_Word check_hlds__abstract_mode_constraints__Globals_6,
  MR_Word check_hlds__abstract_mode_constraints__VarSet_7,
  MR_Word check_hlds__abstract_mode_constraints__AnnConstraints_8)
{
  {
    MR_bool check_hlds__abstract_mode_constraints__succeeded;
    MR_Word check_hlds__abstract_mode_constraints__Var_13;
    MR_Box check_hlds__abstract_mode_constraints__conv0_STATE_VARIABLE_IO_12;

    {
      check_hlds__abstract_mode_constraints__Var_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__Var_13, 0) = ((MR_Box) (&check_hlds__abstract_mode_constraints_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__Var_13, 1) = ((MR_Box) (check_hlds__abstract_mode_constraints__dump_constraints_and_annotations_5_p_0_1));
      MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__Var_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__Var_13, 3) = ((MR_Box) (check_hlds__abstract_mode_constraints__Globals_6));
      MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__Var_13, 4) = ((MR_Box) (check_hlds__abstract_mode_constraints__VarSet_7));
      MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__Var_13, 5) = ((MR_Box) ((MR_Integer) 0));
    }
    {
      mercury__list__foldl_4_p_2((MR_Word) &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_ann_constraint_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, check_hlds__abstract_mode_constraints__Var_13, check_hlds__abstract_mode_constraints__AnnConstraints_8, ((MR_Box) ((MR_Integer) 0)), &check_hlds__abstract_mode_constraints__conv0_STATE_VARIABLE_IO_12);
    }
  }
}

void MR_CALL 
check_hlds__abstract_mode_constraints__pretty_print_constraints_4_p_0(
  MR_Word check_hlds__abstract_mode_constraints__VarSet_5,
  MR_Word check_hlds__abstract_mode_constraints__Constraints_6)
{
  {
    MR_bool check_hlds__abstract_mode_constraints__succeeded;

    {
      check_hlds__abstract_mode_constraints__pretty_print_constraints_indent_5_p_0(check_hlds__abstract_mode_constraints__VarSet_5, (MR_String) "", check_hlds__abstract_mode_constraints__Constraints_6);
    }
  }
}

void MR_CALL 
check_hlds__abstract_mode_constraints__pretty_print_constraint_4_p_0(
  MR_Word check_hlds__abstract_mode_constraints__VarSet_5,
  MR_Word check_hlds__abstract_mode_constraints__Constraint_6)
{
  {
    MR_bool check_hlds__abstract_mode_constraints__succeeded;

    switch (MR_tag((MR_Word) check_hlds__abstract_mode_constraints__Constraint_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word check_hlds__abstract_mode_constraints__AtomicConstraint_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__Constraint_6, (MR_Integer) 0)));

          {
            mercury__io__write_string_3_p_0((MR_String) "");
          }
          {
            check_hlds__abstract_mode_constraints__pretty_print_var_constraint_4_p_0(check_hlds__abstract_mode_constraints__VarSet_5, check_hlds__abstract_mode_constraints__AtomicConstraint_19);
          }
          {
            mercury__io__nl_2_p_0();
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word check_hlds__abstract_mode_constraints__Constraints_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__abstract_mode_constraints__Constraint_6, (MR_Integer) 0)));

          {
            mercury__io__write_string_3_p_0((MR_String) "");
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "disj(\n");
          }
          {
            check_hlds__abstract_mode_constraints__pretty_print_constraints_indent_5_p_0(check_hlds__abstract_mode_constraints__VarSet_5, (MR_String) "\t", check_hlds__abstract_mode_constraints__Constraints_18);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "");
          }
          {
            mercury__io__write_string_3_p_0((MR_String) ") end disj\n");
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word check_hlds__abstract_mode_constraints__Constraints_41 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__abstract_mode_constraints__Constraint_6, (MR_Integer) 0)));

          {
            mercury__io__write_string_3_p_0((MR_String) "");
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "conj(\n");
          }
          {
            check_hlds__abstract_mode_constraints__pretty_print_constraints_indent_5_p_0(check_hlds__abstract_mode_constraints__VarSet_5, (MR_String) "\t", check_hlds__abstract_mode_constraints__Constraints_41);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "");
          }
          {
            mercury__io__write_string_3_p_0((MR_String) ") end conj\n");
          }
        }
        break;
    }
  }
}

static void MR_CALL 
check_hlds__abstract_mode_constraints__pretty_print_constraints_indent_5_p_0(
  MR_Word check_hlds__abstract_mode_constraints__HeadVar__1_1,
  MR_String check_hlds__abstract_mode_constraints__HeadVar__2_2,
  MR_Word check_hlds__abstract_mode_constraints__HeadVar__3_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__abstract_mode_constraints__succeeded;

        if ((check_hlds__abstract_mode_constraints__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
          }
        else
          {
            MR_Word check_hlds__abstract_mode_constraints__Constraint_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__abstract_mode_constraints__HeadVar__3_3, (MR_Integer) 0)));
            MR_Word check_hlds__abstract_mode_constraints__Constraints_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__abstract_mode_constraints__HeadVar__3_3, (MR_Integer) 1)));

            switch (MR_tag((MR_Word) check_hlds__abstract_mode_constraints__Constraint_13)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word check_hlds__abstract_mode_constraints__AtomicConstraint_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__Constraint_13, (MR_Integer) 0)));

                  {
                    mercury__io__write_string_3_p_0(check_hlds__abstract_mode_constraints__HeadVar__2_2);
                  }
                  {
                    check_hlds__abstract_mode_constraints__pretty_print_var_constraint_4_p_0(check_hlds__abstract_mode_constraints__HeadVar__1_1, check_hlds__abstract_mode_constraints__AtomicConstraint_27);
                  }
                  {
                    mercury__io__nl_2_p_0();
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word check_hlds__abstract_mode_constraints__Constraints_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__abstract_mode_constraints__Constraint_13, (MR_Integer) 0)));
                  MR_String check_hlds__abstract_mode_constraints__Var_43;

                  {
                    mercury__io__write_string_3_p_0(check_hlds__abstract_mode_constraints__HeadVar__2_2);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) "disj(\n");
                  }
                  {
                    check_hlds__abstract_mode_constraints__Var_43 = mercury__string__f_43_43_2_f_0((MR_String) "\t", check_hlds__abstract_mode_constraints__HeadVar__2_2);
                  }
                  {
                    check_hlds__abstract_mode_constraints__pretty_print_constraints_indent_5_p_0(check_hlds__abstract_mode_constraints__HeadVar__1_1, check_hlds__abstract_mode_constraints__Var_43, check_hlds__abstract_mode_constraints__Constraints_26);
                  }
                  {
                    mercury__io__write_string_3_p_0(check_hlds__abstract_mode_constraints__HeadVar__2_2);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) ") end disj\n");
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_String check_hlds__abstract_mode_constraints__Var_34;
                  MR_Word check_hlds__abstract_mode_constraints__Constraints_49 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__abstract_mode_constraints__Constraint_13, (MR_Integer) 0)));

                  {
                    mercury__io__write_string_3_p_0(check_hlds__abstract_mode_constraints__HeadVar__2_2);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) "conj(\n");
                  }
                  {
                    check_hlds__abstract_mode_constraints__Var_34 = mercury__string__f_43_43_2_f_0((MR_String) "\t", check_hlds__abstract_mode_constraints__HeadVar__2_2);
                  }
                  {
                    check_hlds__abstract_mode_constraints__pretty_print_constraints_indent_5_p_0(check_hlds__abstract_mode_constraints__HeadVar__1_1, check_hlds__abstract_mode_constraints__Var_34, check_hlds__abstract_mode_constraints__Constraints_49);
                  }
                  {
                    mercury__io__write_string_3_p_0(check_hlds__abstract_mode_constraints__HeadVar__2_2);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) ") end conj\n");
                  }
                }
                break;
            }
            /* direct tailcall eliminated */
            {
              MR_Word check_hlds__abstract_mode_constraints__next_value_of_HeadVar__3_3 = check_hlds__abstract_mode_constraints__Constraints_14;

              check_hlds__abstract_mode_constraints__HeadVar__3_3 = check_hlds__abstract_mode_constraints__next_value_of_HeadVar__3_3;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
check_hlds__abstract_mode_constraints__pretty_print_var_constraint_4_p_0(
  MR_Word check_hlds__abstract_mode_constraints__VarSet_5,
  MR_Word check_hlds__abstract_mode_constraints__Constraint_6)
{
  {
    MR_bool check_hlds__abstract_mode_constraints__succeeded;

    switch (MR_tag((MR_Word) check_hlds__abstract_mode_constraints__Constraint_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word check_hlds__abstract_mode_constraints__X_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__Constraint_6, (MR_Integer) 0)));
          MR_Word check_hlds__abstract_mode_constraints__TF_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__Constraint_6, (MR_Integer) 1)));
          MR_String check_hlds__abstract_mode_constraints__VarName_54;

          {
            mercury__varset__lookup_name_3_p_0((MR_Word) &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0, check_hlds__abstract_mode_constraints__VarSet_5, check_hlds__abstract_mode_constraints__X_8, &check_hlds__abstract_mode_constraints__VarName_54);
          }
          {
            mercury__io__write_string_3_p_0(check_hlds__abstract_mode_constraints__VarName_54);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) " = ");
          }
          {
            mercury__io__print_3_p_0((MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, ((MR_Box) (check_hlds__abstract_mode_constraints__TF_9)));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word check_hlds__abstract_mode_constraints__Xs_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__abstract_mode_constraints__Constraint_6, (MR_Integer) 0)));

          {
            mercury__io__write_string_3_p_0((MR_String) "equivalent(");
          }
          {
            check_hlds__abstract_mode_constraints__pretty_print_mc_vars_4_p_0(check_hlds__abstract_mode_constraints__VarSet_5, check_hlds__abstract_mode_constraints__Xs_10);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word check_hlds__abstract_mode_constraints__Y_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__abstract_mode_constraints__Constraint_6, (MR_Integer) 1)));
          MR_Word check_hlds__abstract_mode_constraints__X_43 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__abstract_mode_constraints__Constraint_6, (MR_Integer) 0)));
          MR_String check_hlds__abstract_mode_constraints__VarName_70;
          MR_String check_hlds__abstract_mode_constraints__VarName_78;

          {
            mercury__varset__lookup_name_3_p_0((MR_Word) &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0, check_hlds__abstract_mode_constraints__VarSet_5, check_hlds__abstract_mode_constraints__X_43, &check_hlds__abstract_mode_constraints__VarName_70);
          }
          {
            mercury__io__write_string_3_p_0(check_hlds__abstract_mode_constraints__VarName_70);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) " -> ");
          }
          {
            mercury__varset__lookup_name_3_p_0((MR_Word) &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0, check_hlds__abstract_mode_constraints__VarSet_5, check_hlds__abstract_mode_constraints__Y_11, &check_hlds__abstract_mode_constraints__VarName_78);
          }
          {
            mercury__io__write_string_3_p_0(check_hlds__abstract_mode_constraints__VarName_78);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__abstract_mode_constraints__Constraint_6, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word check_hlds__abstract_mode_constraints__X_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__abstract_mode_constraints__Constraint_6, (MR_Integer) 1)));
              MR_Word check_hlds__abstract_mode_constraints__Xs_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__abstract_mode_constraints__Constraint_6, (MR_Integer) 2)));
              MR_String check_hlds__abstract_mode_constraints__VarName_62;

              {
                mercury__varset__lookup_name_3_p_0((MR_Word) &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0, check_hlds__abstract_mode_constraints__VarSet_5, check_hlds__abstract_mode_constraints__X_44, &check_hlds__abstract_mode_constraints__VarName_62);
              }
              {
                mercury__io__write_string_3_p_0(check_hlds__abstract_mode_constraints__VarName_62);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) " <-> disj(");
              }
              {
                check_hlds__abstract_mode_constraints__pretty_print_mc_vars_4_p_0(check_hlds__abstract_mode_constraints__VarSet_5, check_hlds__abstract_mode_constraints__Xs_45);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word check_hlds__abstract_mode_constraints__Xs_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__abstract_mode_constraints__Constraint_6, (MR_Integer) 1)));

              {
                mercury__io__write_string_3_p_0((MR_String) "at_most_one(");
              }
              {
                check_hlds__abstract_mode_constraints__pretty_print_mc_vars_4_p_0(check_hlds__abstract_mode_constraints__VarSet_5, check_hlds__abstract_mode_constraints__Xs_46);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word check_hlds__abstract_mode_constraints__Xs_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__abstract_mode_constraints__Constraint_6, (MR_Integer) 1)));

              {
                mercury__io__write_string_3_p_0((MR_String) "exactly_one(");
              }
              {
                check_hlds__abstract_mode_constraints__pretty_print_mc_vars_4_p_0(check_hlds__abstract_mode_constraints__VarSet_5, check_hlds__abstract_mode_constraints__Xs_47);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
check_hlds__abstract_mode_constraints__pretty_print_mc_vars_4_p_0(
  MR_Word check_hlds__abstract_mode_constraints__HeadVar__1_1,
  MR_Word check_hlds__abstract_mode_constraints__HeadVar__2_2)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__abstract_mode_constraints__succeeded;

        if ((check_hlds__abstract_mode_constraints__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
          }
        else
          {
            MR_Word check_hlds__abstract_mode_constraints__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__abstract_mode_constraints__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word check_hlds__abstract_mode_constraints__Vars_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__abstract_mode_constraints__HeadVar__2_2, (MR_Integer) 1)));
            MR_String check_hlds__abstract_mode_constraints__VarName_26;

            {
              mercury__varset__lookup_name_3_p_0((MR_Word) &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0, check_hlds__abstract_mode_constraints__HeadVar__1_1, check_hlds__abstract_mode_constraints__Var_10, &check_hlds__abstract_mode_constraints__VarName_26);
            }
            {
              mercury__io__write_string_3_p_0(check_hlds__abstract_mode_constraints__VarName_26);
            }
            if ((check_hlds__abstract_mode_constraints__Vars_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
              }
            else
              {
                MR_Word check_hlds__abstract_mode_constraints__Var_34;
                MR_Word check_hlds__abstract_mode_constraints__Vars_35;
                MR_String check_hlds__abstract_mode_constraints__VarName_50;

                {
                  mercury__io__write_string_3_p_0((MR_String) ", ");
                }
                check_hlds__abstract_mode_constraints__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__abstract_mode_constraints__Vars_11, (MR_Integer) 0)));
                check_hlds__abstract_mode_constraints__Vars_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__abstract_mode_constraints__Vars_11, (MR_Integer) 1)));
                {
                  mercury__varset__lookup_name_3_p_0((MR_Word) &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0, check_hlds__abstract_mode_constraints__HeadVar__1_1, check_hlds__abstract_mode_constraints__Var_34, &check_hlds__abstract_mode_constraints__VarName_50);
                }
                {
                  mercury__io__write_string_3_p_0(check_hlds__abstract_mode_constraints__VarName_50);
                }
                if ((check_hlds__abstract_mode_constraints__Vars_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  {
                  }
                else
                  {
                    {
                      mercury__io__write_string_3_p_0((MR_String) ", ");
                    }
                    /* direct tailcall eliminated */
                    {
                      MR_Word check_hlds__abstract_mode_constraints__next_value_of_HeadVar__2_2 = check_hlds__abstract_mode_constraints__Vars_35;

                      check_hlds__abstract_mode_constraints__HeadVar__2_2 = check_hlds__abstract_mode_constraints__next_value_of_HeadVar__2_2;
                    }
                    continue;
                  }
              }
          }
      }
      break;
    }
}

MR_Word MR_CALL 
check_hlds__abstract_mode_constraints__project_mc_annotation_1_f_0(
  MR_Word check_hlds__abstract_mode_constraints__HeadVar__1_1)
{
  {
    MR_bool check_hlds__abstract_mode_constraints__succeeded;
    MR_Word check_hlds__abstract_mode_constraints__Annotation_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word check_hlds__abstract_mode_constraints__Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__HeadVar__1_1, (MR_Integer) 0)));

    return check_hlds__abstract_mode_constraints__Annotation_4;
  }
}

MR_Word MR_CALL 
check_hlds__abstract_mode_constraints__project_mc_constraint_1_f_0(
  MR_Word check_hlds__abstract_mode_constraints__HeadVar__1_1)
{
  {
    MR_bool check_hlds__abstract_mode_constraints__succeeded;
    MR_Word check_hlds__abstract_mode_constraints__Constraint_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word check_hlds__abstract_mode_constraints__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__abstract_mode_constraints__HeadVar__1_1, (MR_Integer) 1)));

    return check_hlds__abstract_mode_constraints__Constraint_3;
  }
}

static MR_bool MR_CALL 
check_hlds__abstract_mode_constraints____Unify____mc_ann_constraint_0_0_10001(
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_1,
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_2)
{
  {
    MR_bool check_hlds__abstract_mode_constraints__succeeded;

    {
      check_hlds__abstract_mode_constraints__succeeded = check_hlds__abstract_mode_constraints____Unify____mc_ann_constraint_0_0(((MR_Word) check_hlds__abstract_mode_constraints__wrapper_arg_1), ((MR_Word) check_hlds__abstract_mode_constraints__wrapper_arg_2));
    }
    return check_hlds__abstract_mode_constraints__succeeded;
  }
}

static void MR_CALL 
check_hlds__abstract_mode_constraints____Compare____mc_ann_constraint_0_0_10001(
  MR_Box * check_hlds__abstract_mode_constraints__wrapper_arg_1,
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_2,
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_3)
{
  {
    MR_Word check_hlds__abstract_mode_constraints__conv0_HeadVar__1_1;

    {
      check_hlds__abstract_mode_constraints____Compare____mc_ann_constraint_0_0(&check_hlds__abstract_mode_constraints__conv0_HeadVar__1_1, ((MR_Word) check_hlds__abstract_mode_constraints__wrapper_arg_2), ((MR_Word) check_hlds__abstract_mode_constraints__wrapper_arg_3));
    }
    *check_hlds__abstract_mode_constraints__wrapper_arg_1 = ((MR_Box) (check_hlds__abstract_mode_constraints__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__abstract_mode_constraints____Unify____mc_annotation_0_0_10001(
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_1,
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_2)
{
  {
    MR_bool check_hlds__abstract_mode_constraints__succeeded;

    {
      check_hlds__abstract_mode_constraints__succeeded = check_hlds__abstract_mode_constraints____Unify____mc_annotation_0_0(((MR_Word) check_hlds__abstract_mode_constraints__wrapper_arg_1), ((MR_Word) check_hlds__abstract_mode_constraints__wrapper_arg_2));
    }
    return check_hlds__abstract_mode_constraints__succeeded;
  }
}

static void MR_CALL 
check_hlds__abstract_mode_constraints____Compare____mc_annotation_0_0_10001(
  MR_Box * check_hlds__abstract_mode_constraints__wrapper_arg_1,
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_2,
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_3)
{
  {
    MR_Word check_hlds__abstract_mode_constraints__conv0_HeadVar__1_1;

    {
      check_hlds__abstract_mode_constraints____Compare____mc_annotation_0_0(&check_hlds__abstract_mode_constraints__conv0_HeadVar__1_1, ((MR_Word) check_hlds__abstract_mode_constraints__wrapper_arg_2), ((MR_Word) check_hlds__abstract_mode_constraints__wrapper_arg_3));
    }
    *check_hlds__abstract_mode_constraints__wrapper_arg_1 = ((MR_Box) (check_hlds__abstract_mode_constraints__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__abstract_mode_constraints____Unify____mc_bindings_0_0_10001(
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_1,
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_2)
{
  {
    MR_bool check_hlds__abstract_mode_constraints__succeeded;

    {
      check_hlds__abstract_mode_constraints__succeeded = check_hlds__abstract_mode_constraints____Unify____mc_bindings_0_0(((MR_Word) check_hlds__abstract_mode_constraints__wrapper_arg_1), ((MR_Word) check_hlds__abstract_mode_constraints__wrapper_arg_2));
    }
    return check_hlds__abstract_mode_constraints__succeeded;
  }
}

static void MR_CALL 
check_hlds__abstract_mode_constraints____Compare____mc_bindings_0_0_10001(
  MR_Box * check_hlds__abstract_mode_constraints__wrapper_arg_1,
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_2,
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_3)
{
  {
    MR_Word check_hlds__abstract_mode_constraints__conv0_HeadVar__1_1;

    {
      check_hlds__abstract_mode_constraints____Compare____mc_bindings_0_0(&check_hlds__abstract_mode_constraints__conv0_HeadVar__1_1, ((MR_Word) check_hlds__abstract_mode_constraints__wrapper_arg_2), ((MR_Word) check_hlds__abstract_mode_constraints__wrapper_arg_3));
    }
    *check_hlds__abstract_mode_constraints__wrapper_arg_1 = ((MR_Box) (check_hlds__abstract_mode_constraints__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__abstract_mode_constraints____Unify____mc_constraint_0_0_10001(
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_1,
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_2)
{
  {
    MR_bool check_hlds__abstract_mode_constraints__succeeded;

    {
      check_hlds__abstract_mode_constraints__succeeded = check_hlds__abstract_mode_constraints____Unify____mc_constraint_0_0(((MR_Word) check_hlds__abstract_mode_constraints__wrapper_arg_1), ((MR_Word) check_hlds__abstract_mode_constraints__wrapper_arg_2));
    }
    return check_hlds__abstract_mode_constraints__succeeded;
  }
}

static void MR_CALL 
check_hlds__abstract_mode_constraints____Compare____mc_constraint_0_0_10001(
  MR_Box * check_hlds__abstract_mode_constraints__wrapper_arg_1,
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_2,
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_3)
{
  {
    MR_Word check_hlds__abstract_mode_constraints__conv0_HeadVar__1_1;

    {
      check_hlds__abstract_mode_constraints____Compare____mc_constraint_0_0(&check_hlds__abstract_mode_constraints__conv0_HeadVar__1_1, ((MR_Word) check_hlds__abstract_mode_constraints__wrapper_arg_2), ((MR_Word) check_hlds__abstract_mode_constraints__wrapper_arg_3));
    }
    *check_hlds__abstract_mode_constraints__wrapper_arg_1 = ((MR_Box) (check_hlds__abstract_mode_constraints__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__abstract_mode_constraints____Unify____mc_type_0_0_10001(
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_1,
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_2)
{
  {
    MR_bool check_hlds__abstract_mode_constraints__succeeded;

    {
      check_hlds__abstract_mode_constraints__succeeded = check_hlds__abstract_mode_constraints____Unify____mc_type_0_0();
    }
    return check_hlds__abstract_mode_constraints__succeeded;
  }
}

static void MR_CALL 
check_hlds__abstract_mode_constraints____Compare____mc_type_0_0_10001(
  MR_Box * check_hlds__abstract_mode_constraints__wrapper_arg_1,
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_2,
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_3)
{
  {
    MR_Word check_hlds__abstract_mode_constraints__conv0_HeadVar__1_1;

    {
      check_hlds__abstract_mode_constraints____Compare____mc_type_0_0(&check_hlds__abstract_mode_constraints__conv0_HeadVar__1_1);
    }
    *check_hlds__abstract_mode_constraints__wrapper_arg_1 = ((MR_Box) (check_hlds__abstract_mode_constraints__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__abstract_mode_constraints____Unify____mc_var_0_0_10001(
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_1,
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_2)
{
  {
    MR_bool check_hlds__abstract_mode_constraints__succeeded;

    {
      check_hlds__abstract_mode_constraints__succeeded = check_hlds__abstract_mode_constraints____Unify____mc_var_0_0(((MR_Word) check_hlds__abstract_mode_constraints__wrapper_arg_1), ((MR_Word) check_hlds__abstract_mode_constraints__wrapper_arg_2));
    }
    return check_hlds__abstract_mode_constraints__succeeded;
  }
}

static void MR_CALL 
check_hlds__abstract_mode_constraints____Compare____mc_var_0_0_10001(
  MR_Box * check_hlds__abstract_mode_constraints__wrapper_arg_1,
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_2,
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_3)
{
  {
    MR_Word check_hlds__abstract_mode_constraints__conv0_HeadVar__1_1;

    {
      check_hlds__abstract_mode_constraints____Compare____mc_var_0_0(&check_hlds__abstract_mode_constraints__conv0_HeadVar__1_1, ((MR_Word) check_hlds__abstract_mode_constraints__wrapper_arg_2), ((MR_Word) check_hlds__abstract_mode_constraints__wrapper_arg_3));
    }
    *check_hlds__abstract_mode_constraints__wrapper_arg_1 = ((MR_Box) (check_hlds__abstract_mode_constraints__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__abstract_mode_constraints____Unify____mc_varset_0_0_10001(
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_1,
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_2)
{
  {
    MR_bool check_hlds__abstract_mode_constraints__succeeded;

    {
      check_hlds__abstract_mode_constraints__succeeded = check_hlds__abstract_mode_constraints____Unify____mc_varset_0_0(((MR_Word) check_hlds__abstract_mode_constraints__wrapper_arg_1), ((MR_Word) check_hlds__abstract_mode_constraints__wrapper_arg_2));
    }
    return check_hlds__abstract_mode_constraints__succeeded;
  }
}

static void MR_CALL 
check_hlds__abstract_mode_constraints____Compare____mc_varset_0_0_10001(
  MR_Box * check_hlds__abstract_mode_constraints__wrapper_arg_1,
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_2,
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_3)
{
  {
    MR_Word check_hlds__abstract_mode_constraints__conv0_HeadVar__1_1;

    {
      check_hlds__abstract_mode_constraints____Compare____mc_varset_0_0(&check_hlds__abstract_mode_constraints__conv0_HeadVar__1_1, ((MR_Word) check_hlds__abstract_mode_constraints__wrapper_arg_2), ((MR_Word) check_hlds__abstract_mode_constraints__wrapper_arg_3));
    }
    *check_hlds__abstract_mode_constraints__wrapper_arg_1 = ((MR_Box) (check_hlds__abstract_mode_constraints__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__abstract_mode_constraints____Unify____pred_p_c_constraints_0_0_10001(
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_1,
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_2)
{
  {
    MR_bool check_hlds__abstract_mode_constraints__succeeded;

    {
      check_hlds__abstract_mode_constraints__succeeded = check_hlds__abstract_mode_constraints____Unify____pred_p_c_constraints_0_0(((MR_Word) check_hlds__abstract_mode_constraints__wrapper_arg_1), ((MR_Word) check_hlds__abstract_mode_constraints__wrapper_arg_2));
    }
    return check_hlds__abstract_mode_constraints__succeeded;
  }
}

static void MR_CALL 
check_hlds__abstract_mode_constraints____Compare____pred_p_c_constraints_0_0_10001(
  MR_Box * check_hlds__abstract_mode_constraints__wrapper_arg_1,
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_2,
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_3)
{
  {
    MR_Word check_hlds__abstract_mode_constraints__conv0_HeadVar__1_1;

    {
      check_hlds__abstract_mode_constraints____Compare____pred_p_c_constraints_0_0(&check_hlds__abstract_mode_constraints__conv0_HeadVar__1_1, ((MR_Word) check_hlds__abstract_mode_constraints__wrapper_arg_2), ((MR_Word) check_hlds__abstract_mode_constraints__wrapper_arg_3));
    }
    *check_hlds__abstract_mode_constraints__wrapper_arg_1 = ((MR_Box) (check_hlds__abstract_mode_constraints__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__abstract_mode_constraints____Unify____var_constraint_1_0_10001(
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_1,
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_2,
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_3)
{
  {
    MR_bool check_hlds__abstract_mode_constraints__succeeded;

    {
      check_hlds__abstract_mode_constraints__succeeded = check_hlds__abstract_mode_constraints____Unify____var_constraint_1_0(((MR_Word) check_hlds__abstract_mode_constraints__wrapper_arg_1), ((MR_Word) check_hlds__abstract_mode_constraints__wrapper_arg_2), ((MR_Word) check_hlds__abstract_mode_constraints__wrapper_arg_3));
    }
    return check_hlds__abstract_mode_constraints__succeeded;
  }
}

static void MR_CALL 
check_hlds__abstract_mode_constraints____Compare____var_constraint_1_0_10001(
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_1,
  MR_Box * check_hlds__abstract_mode_constraints__wrapper_arg_2,
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_3,
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_4)
{
  {
    MR_Word check_hlds__abstract_mode_constraints__conv0_HeadVar__1_1;

    {
      check_hlds__abstract_mode_constraints____Compare____var_constraint_1_0(((MR_Word) check_hlds__abstract_mode_constraints__wrapper_arg_1), &check_hlds__abstract_mode_constraints__conv0_HeadVar__1_1, ((MR_Word) check_hlds__abstract_mode_constraints__wrapper_arg_3), ((MR_Word) check_hlds__abstract_mode_constraints__wrapper_arg_4));
    }
    *check_hlds__abstract_mode_constraints__wrapper_arg_2 = ((MR_Box) (check_hlds__abstract_mode_constraints__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__abstract_mode_constraints____Unify____var_constraint_0_0_10001(
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_1,
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_2)
{
  {
    MR_bool check_hlds__abstract_mode_constraints__succeeded;

    {
      check_hlds__abstract_mode_constraints__succeeded = check_hlds__abstract_mode_constraints____Unify____var_constraint_0_0(((MR_Word) check_hlds__abstract_mode_constraints__wrapper_arg_1), ((MR_Word) check_hlds__abstract_mode_constraints__wrapper_arg_2));
    }
    return check_hlds__abstract_mode_constraints__succeeded;
  }
}

static void MR_CALL 
check_hlds__abstract_mode_constraints____Compare____var_constraint_0_0_10001(
  MR_Box * check_hlds__abstract_mode_constraints__wrapper_arg_1,
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_2,
  MR_Box check_hlds__abstract_mode_constraints__wrapper_arg_3)
{
  {
    MR_Word check_hlds__abstract_mode_constraints__conv0_HeadVar__1_1;

    {
      check_hlds__abstract_mode_constraints____Compare____var_constraint_0_0(&check_hlds__abstract_mode_constraints__conv0_HeadVar__1_1, ((MR_Word) check_hlds__abstract_mode_constraints__wrapper_arg_2), ((MR_Word) check_hlds__abstract_mode_constraints__wrapper_arg_3));
    }
    *check_hlds__abstract_mode_constraints__wrapper_arg_1 = ((MR_Box) (check_hlds__abstract_mode_constraints__conv0_HeadVar__1_1));
  }
}

void mercury__check_hlds__abstract_mode_constraints__init(void)
{
}

void mercury__check_hlds__abstract_mode_constraints__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_ann_constraint_0);
	MR_register_type_ctor_info(&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_annotation_0);
	MR_register_type_ctor_info(&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_bindings_0);
	MR_register_type_ctor_info(&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_constraint_0);
	MR_register_type_ctor_info(&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0);
	MR_register_type_ctor_info(&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_var_0);
	MR_register_type_ctor_info(&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_varset_0);
	MR_register_type_ctor_info(&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_pred_p_c_constraints_0);
	MR_register_type_ctor_info(&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_var_constraint_1);
	MR_register_type_ctor_info(&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_var_constraint_0);
}

void mercury__check_hlds__abstract_mode_constraints__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__abstract_mode_constraints__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module check_hlds.abstract_mode_constraints. */
