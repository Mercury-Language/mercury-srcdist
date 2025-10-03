/*
** Automatically generated from `abstract_mode_constraints.m'
** by the Mercury compiler,
** version rotd-2025-10-03
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


// :- module check_hlds.abstract_mode_constraints.
// :- implementation.

/*
INIT mercury__check_hlds__abstract_mode_constraints__init
ENDINIT
*/

#include "check_hlds.abstract_mode_constraints.mih"


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
#include "robdd.mih"
#include "set.mih"
#include "set_ordlist.mih"
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
#include "uint.mih"
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
#include "libs.indent.mih"
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
#include "parse_tree.error_spec.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.write_error_spec.mih"
#include "string.builder.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.feedback_info.mih"




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

static const MR_EnumFunctorDescPtr check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__enum_ordinal_ordered_mc_type_0[1];

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

static const MR_DuArgLocn check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__field_locns_var_constraint_1_0[2];

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
check_hlds__abstract_mode_constraints__pretty_print_binding_6_p_0(
  MR_Word OutputStream_7,
  MR_Word VarSet_8,
  MR_Word Bindings_9,
  MR_Word Var_10);

static void MR_CALL 
check_hlds__abstract_mode_constraints__pretty_print_bindings_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__abstract_mode_constraints__pretty_print_bindings_7_p_0(
  MR_Word OutputStream_8,
  MR_Word VarSet_9,
  MR_Word Bindings_10,
  MR_Integer N_11,
  MR_Integer * HeadVar__5_5);

static void MR_CALL 
check_hlds__abstract_mode_constraints__dump_ann_constraint_7_p_0(
  MR_Word OutputStream_8,
  MR_Word Globals_9,
  MR_Word VarSet_10,
  MR_Unsigned Indent_11,
  MR_Word AnnConstraint_12);

static void MR_CALL 
check_hlds__abstract_mode_constraints__dump_constraint_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__abstract_mode_constraints__dump_constraint_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__abstract_mode_constraints__dump_constraint_8_p_0(
  MR_Word OutputStream_9,
  MR_Word Globals_10,
  MR_Word VarSet_11,
  MR_Unsigned Indent_12,
  MR_Word Annotation_13,
  MR_Word Constraint_14);

static void MR_CALL 
check_hlds__abstract_mode_constraints__dump_var_constraint_8_p_0(
  MR_Word OutputStream_9,
  MR_Word Globals_10,
  MR_Word VarSet_11,
  MR_Unsigned Indent_12,
  MR_Word Annotation_13,
  MR_Word Constraint_14);

static void MR_CALL 
check_hlds__abstract_mode_constraints__mc_var_list_to_string_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_String * HeadVar__3_3);

static void MR_CALL 
check_hlds__abstract_mode_constraints__pretty_print_solutions_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
check_hlds__abstract_mode_constraints__pretty_print_constraints_indent_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_String HeadVar__3_3,
  MR_Word HeadVar__4_4);

static void MR_CALL 
check_hlds__abstract_mode_constraints__pretty_print_mc_vars_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static void MR_CALL 
check_hlds__abstract_mode_constraints__dump_constraints_and_annotations_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
check_hlds__abstract_mode_constraints__all_constraints_for_proc_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
check_hlds__abstract_mode_constraints__allproc_constraints_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
check_hlds__abstract_mode_constraints____Unify____mc_ann_constraint_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__abstract_mode_constraints____Compare____mc_ann_constraint_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__abstract_mode_constraints____Unify____mc_annotation_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__abstract_mode_constraints____Compare____mc_annotation_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__abstract_mode_constraints____Unify____mc_bindings_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__abstract_mode_constraints____Compare____mc_bindings_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__abstract_mode_constraints____Unify____mc_constraint_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__abstract_mode_constraints____Compare____mc_constraint_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__abstract_mode_constraints____Unify____mc_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__abstract_mode_constraints____Compare____mc_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__abstract_mode_constraints____Unify____mc_var_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__abstract_mode_constraints____Compare____mc_var_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__abstract_mode_constraints____Unify____mc_varset_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__abstract_mode_constraints____Compare____mc_varset_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__abstract_mode_constraints____Unify____pred_p_c_constraints_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__abstract_mode_constraints____Compare____pred_p_c_constraints_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__abstract_mode_constraints____Unify____var_constraint_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
check_hlds__abstract_mode_constraints____Compare____var_constraint_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
check_hlds__abstract_mode_constraints____Unify____var_constraint_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__abstract_mode_constraints____Compare____var_constraint_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box check_hlds__abstract_mode_constraints_scalar_common_1[14][2];

static /* final */ const MR_Box check_hlds__abstract_mode_constraints_scalar_common_2[4][3];

static /* final */ const MR_Box check_hlds__abstract_mode_constraints_scalar_common_3[1][5];

static /* final */ const MR_Box check_hlds__abstract_mode_constraints_scalar_common_4[2][10];

static /* final */ const MR_Box check_hlds__abstract_mode_constraints_scalar_common_5[1][11];

static /* final */ const MR_Box check_hlds__abstract_mode_constraints_scalar_common_6[1][9];




static /* final */ const MR_Box check_hlds__abstract_mode_constraints_scalar_common_1[14][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_constraint_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_var_constraint_1)),
    ((MR_Box) (&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_ann_constraint_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "conj("))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__abstract_mode_constraints_scalar_common_1[6]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) ") end conj"))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__abstract_mode_constraints_scalar_common_1[8]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "disj("))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__abstract_mode_constraints_scalar_common_1[10]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) ") end disj"))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__abstract_mode_constraints_scalar_common_1[12]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box check_hlds__abstract_mode_constraints_scalar_common_2[4][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__abstract_mode_constraints_scalar_common_1[0])),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0)),
    ((MR_Box) (&check_hlds__abstract_mode_constraints_scalar_common_1[4]))
  },
  /* row   2 */
  {
    ((MR_Box) (&check_hlds__abstract_mode_constraints_scalar_common_3[0])),
    ((MR_Box) (check_hlds__abstract_mode_constraints__allproc_constraints_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&check_hlds__abstract_mode_constraints_scalar_common_3[0])),
    ((MR_Box) (check_hlds__abstract_mode_constraints__all_constraints_for_proc_2_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__abstract_mode_constraints_scalar_common_3[1][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_ann_constraint_0)),
    ((MR_Box) (&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_constraint_0))
  },
};

static /* final */ const MR_Box check_hlds__abstract_mode_constraints_scalar_common_4[2][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&check_hlds__abstract_mode_constraints__varset__pti_varset_1__plain_check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_uint_0)),
    ((MR_Box) (&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_ann_constraint_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&check_hlds__abstract_mode_constraints__varset__pti_varset_1__plain_check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0)),
    ((MR_Box) (&check_hlds__abstract_mode_constraints__tree234__pti_tree234_2__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0__plain_bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box check_hlds__abstract_mode_constraints_scalar_common_5[1][11] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&check_hlds__abstract_mode_constraints__varset__pti_varset_1__plain_check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_uint_0)),
    ((MR_Box) (&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_annotation_0)),
    ((MR_Box) (&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_constraint_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box check_hlds__abstract_mode_constraints_scalar_common_6[1][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&check_hlds__abstract_mode_constraints__varset__pti_varset_1__plain_check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0)),
    ((MR_Box) (&check_hlds__abstract_mode_constraints__tree234__pti_tree234_2__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0__plain_bool__type_ctor_info_bool_0)),
    ((MR_Box) (&check_hlds__abstract_mode_constraints__term__pti_var_1__plain_check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__abstract_mode_constraints__varset__pti_varset_1__plain_check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  { (MR_PseudoTypeInfo) (&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0) }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__abstract_mode_constraints__term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__abstract_mode_constraints__tree234__pti_tree234_2__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0__plain_bool__type_ctor_info_bool_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&check_hlds__abstract_mode_constraints__term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0),
    (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__abstract_mode_constraints__term__pti_var_1__plain_check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0) }
};

static const MR_PseudoTypeInfo check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__field_types_mc_ann_constraint_0_0[2] = {
  (MR_PseudoTypeInfo) (&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_constraint_0),
  (MR_PseudoTypeInfo) (&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_annotation_0)
};

static const MR_DuFunctorDesc check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_functor_desc_mc_ann_constraint_0_0 = {
  (MR_String) "mc_ann_constraint",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__field_types_mc_ann_constraint_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_stag_ordered_mc_ann_constraint_0_0[1] = { &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_functor_desc_mc_ann_constraint_0_0 };

static const MR_DuPtagLayout check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_ptag_ordered_mc_ann_constraint_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_stag_ordered_mc_ann_constraint_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_name_ordered_mc_ann_constraint_0[1] = { &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_functor_desc_mc_ann_constraint_0_0 };

static const MR_Integer check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__functor_number_map_mc_ann_constraint_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_ann_constraint_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__abstract_mode_constraints____Unify____mc_ann_constraint_0_0_10001)),
  ((MR_Box) (check_hlds__abstract_mode_constraints____Compare____mc_ann_constraint_0_0_10001)),
  (MR_String) "check_hlds.abstract_mode_constraints",
  (MR_String) "mc_ann_constraint",
  { check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_name_ordered_mc_ann_constraint_0 },
  { check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_ptag_ordered_mc_ann_constraint_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__functor_number_map_mc_ann_constraint_0,

};

static const MR_Integer check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__functor_number_map_mc_annotation_0[1] = { (MR_Integer) 0 };

static const MR_NotagFunctorDesc check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__notag_functor_desc_mc_annotation_0 = {
  (MR_String) "mc_annotation",
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0),
  (MR_String) "context",
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_annotation_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (check_hlds__abstract_mode_constraints____Unify____mc_annotation_0_0_10001)),
  ((MR_Box) (check_hlds__abstract_mode_constraints____Compare____mc_annotation_0_0_10001)),
  (MR_String) "check_hlds.abstract_mode_constraints",
  (MR_String) "mc_annotation",
  { &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__notag_functor_desc_mc_annotation_0 },
  { &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__notag_functor_desc_mc_annotation_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__functor_number_map_mc_annotation_0,

};

static const MR_FA_TypeInfo_Struct2 check_hlds__abstract_mode_constraints__tree234__ti_tree234_2term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0bool__type_ctor_info_bool_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&check_hlds__abstract_mode_constraints__term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0),
    (MR_TypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0)
  }
};

const MR_TypeCtorInfo_Struct check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_bindings_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__abstract_mode_constraints____Unify____mc_bindings_0_0_10001)),
  ((MR_Box) (check_hlds__abstract_mode_constraints____Compare____mc_bindings_0_0_10001)),
  (MR_String) "check_hlds.abstract_mode_constraints",
  (MR_String) "mc_bindings",
  { NULL },
  { (MR_PseudoTypeInfo) (&check_hlds__abstract_mode_constraints__tree234__ti_tree234_2term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0bool__type_ctor_info_bool_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct1 check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__ti_var_constraint_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0 = {
  &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_var_constraint_1,
  { (MR_TypeInfo) (&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0) }
};

static const MR_PseudoTypeInfo check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__field_types_mc_constraint_0_0[1] = { (MR_PseudoTypeInfo) (&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__ti_var_constraint_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0) };

static const MR_DuFunctorDesc check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_functor_desc_mc_constraint_0_0 = {
  (MR_String) "mc_atomic",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__field_types_mc_constraint_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_TypeInfo_Struct1 check_hlds__abstract_mode_constraints__list__ti_list_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_constraint_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_constraint_0) }
};

static const MR_PseudoTypeInfo check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__field_types_mc_constraint_0_1[1] = { (MR_PseudoTypeInfo) (&check_hlds__abstract_mode_constraints__list__ti_list_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_constraint_0) };

static const MR_DuFunctorDesc check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_functor_desc_mc_constraint_0_1 = {
  (MR_String) "mc_disj",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__field_types_mc_constraint_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__field_types_mc_constraint_0_2[1] = { (MR_PseudoTypeInfo) (&check_hlds__abstract_mode_constraints__list__ti_list_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_constraint_0) };

static const MR_DuFunctorDesc check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_functor_desc_mc_constraint_0_2 = {
  (MR_String) "mc_conj",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__field_types_mc_constraint_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_stag_ordered_mc_constraint_0_0[1] = { &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_functor_desc_mc_constraint_0_0 };

static const MR_DuFunctorDescPtr check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_stag_ordered_mc_constraint_0_1[1] = { &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_functor_desc_mc_constraint_0_1 };

static const MR_DuFunctorDescPtr check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_stag_ordered_mc_constraint_0_2[1] = { &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_functor_desc_mc_constraint_0_2 };

static const MR_DuPtagLayout check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_ptag_ordered_mc_constraint_0[3] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_stag_ordered_mc_constraint_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_stag_ordered_mc_constraint_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_stag_ordered_mc_constraint_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(3),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__abstract_mode_constraints____Unify____mc_constraint_0_0_10001)),
  ((MR_Box) (check_hlds__abstract_mode_constraints____Compare____mc_constraint_0_0_10001)),
  (MR_String) "check_hlds.abstract_mode_constraints",
  (MR_String) "mc_constraint",
  { check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_name_ordered_mc_constraint_0 },
  { check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_ptag_ordered_mc_constraint_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__functor_number_map_mc_constraint_0,

};

static const MR_EnumFunctorDesc check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__enum_functor_desc_mc_type_0_0 = {
  (MR_String) "mc_type",
  INT32_C(0)
};

static const MR_EnumFunctorDescPtr check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__enum_ordinal_ordered_mc_type_0[1] = { &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__enum_functor_desc_mc_type_0_0 };

static const MR_EnumFunctorDescPtr check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__enum_name_ordered_mc_type_0[1] = { &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__enum_functor_desc_mc_type_0_0 };

static const MR_Integer check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__functor_number_map_mc_type_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_DUMMY,
  ((MR_Box) (check_hlds__abstract_mode_constraints____Unify____mc_type_0_0_10001)),
  ((MR_Box) (check_hlds__abstract_mode_constraints____Compare____mc_type_0_0_10001)),
  (MR_String) "check_hlds.abstract_mode_constraints",
  (MR_String) "mc_type",
  { check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__enum_name_ordered_mc_type_0 },
  { check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__enum_ordinal_ordered_mc_type_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__functor_number_map_mc_type_0,

};

const MR_TypeCtorInfo_Struct check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_var_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__abstract_mode_constraints____Unify____mc_var_0_0_10001)),
  ((MR_Box) (check_hlds__abstract_mode_constraints____Compare____mc_var_0_0_10001)),
  (MR_String) "check_hlds.abstract_mode_constraints",
  (MR_String) "mc_var",
  { NULL },
  { (MR_PseudoTypeInfo) (&check_hlds__abstract_mode_constraints__term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct1 check_hlds__abstract_mode_constraints__varset__ti_varset_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  { (MR_TypeInfo) (&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0) }
};

const MR_TypeCtorInfo_Struct check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_varset_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__abstract_mode_constraints____Unify____mc_varset_0_0_10001)),
  ((MR_Box) (check_hlds__abstract_mode_constraints____Compare____mc_varset_0_0_10001)),
  (MR_String) "check_hlds.abstract_mode_constraints",
  (MR_String) "mc_varset",
  { NULL },
  { (MR_PseudoTypeInfo) (&check_hlds__abstract_mode_constraints__varset__ti_varset_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct1 check_hlds__abstract_mode_constraints__list__ti_list_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_ann_constraint_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_ann_constraint_0) }
};

static const MR_FA_TypeInfo_Struct2 check_hlds__abstract_mode_constraints__tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_ann_constraint_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_TypeInfo) (&check_hlds__abstract_mode_constraints__list__ti_list_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_ann_constraint_0)
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__abstract_mode_constraints__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0) }
};

static const MR_PseudoTypeInfo check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__field_types_pred_p_c_constraints_0_0[3] = {
  (MR_PseudoTypeInfo) (&check_hlds__abstract_mode_constraints__tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_ann_constraint_0),
  (MR_PseudoTypeInfo) (&check_hlds__abstract_mode_constraints__list__ti_list_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_ann_constraint_0),
  (MR_PseudoTypeInfo) (&check_hlds__abstract_mode_constraints__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_id_0)
};

static const MR_ConstString check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__field_names_pred_p_c_constraints_0_0[3] = {
  (MR_String) "ppcc_procspec_constraints",
  (MR_String) "ppcc_allproc_constraints",
  (MR_String) "ppcc_mode_infer_callees"
};

static const MR_DuFunctorDesc check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_functor_desc_pred_p_c_constraints_0_0 = {
  (MR_String) "pred_p_c_constraints",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__field_types_pred_p_c_constraints_0_0,
  check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__field_names_pred_p_c_constraints_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_stag_ordered_pred_p_c_constraints_0_0[1] = { &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_functor_desc_pred_p_c_constraints_0_0 };

static const MR_DuPtagLayout check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_ptag_ordered_pred_p_c_constraints_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_stag_ordered_pred_p_c_constraints_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_name_ordered_pred_p_c_constraints_0[1] = { &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_functor_desc_pred_p_c_constraints_0_0 };

static const MR_Integer check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__functor_number_map_pred_p_c_constraints_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_pred_p_c_constraints_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__abstract_mode_constraints____Unify____pred_p_c_constraints_0_0_10001)),
  ((MR_Box) (check_hlds__abstract_mode_constraints____Compare____pred_p_c_constraints_0_0_10001)),
  (MR_String) "check_hlds.abstract_mode_constraints",
  (MR_String) "pred_p_c_constraints",
  { check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_name_ordered_pred_p_c_constraints_0 },
  { check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_ptag_ordered_pred_p_c_constraints_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__functor_number_map_pred_p_c_constraints_0,

};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__abstract_mode_constraints__term__pti_var_1__pseudo_1 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) ((MR_Integer) 1) }
};

static const MR_PseudoTypeInfo check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__field_types_var_constraint_1_0[2] = {
  (MR_PseudoTypeInfo) (&check_hlds__abstract_mode_constraints__term__pti_var_1__pseudo_1),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0)
};

static const MR_DuArgLocn check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__field_locns_var_constraint_1_0[2] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_functor_desc_var_constraint_1_0 = {
  (MR_String) "equiv_bool",
  INT16_C(2),
  UINT16_C(1),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__field_types_var_constraint_1_0,
  NULL,
  check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__field_locns_var_constraint_1_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__abstract_mode_constraints__list__pti_list_1__pseudo_term__pti_var_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&check_hlds__abstract_mode_constraints__term__pti_var_1__pseudo_1) }
};

static const MR_PseudoTypeInfo check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__field_types_var_constraint_1_1[1] = { (MR_PseudoTypeInfo) (&check_hlds__abstract_mode_constraints__list__pti_list_1__pseudo_term__pti_var_1__pseudo_1) };

static const MR_DuFunctorDesc check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_functor_desc_var_constraint_1_1 = {
  (MR_String) "equivalent",
  INT16_C(1),
  UINT16_C(1),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__field_types_var_constraint_1_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__field_types_var_constraint_1_2[2] = {
  (MR_PseudoTypeInfo) (&check_hlds__abstract_mode_constraints__term__pti_var_1__pseudo_1),
  (MR_PseudoTypeInfo) (&check_hlds__abstract_mode_constraints__term__pti_var_1__pseudo_1)
};

static const MR_DuFunctorDesc check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_functor_desc_var_constraint_1_2 = {
  (MR_String) "implies",
  INT16_C(2),
  UINT16_C(3),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__field_types_var_constraint_1_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__field_types_var_constraint_1_3[2] = {
  (MR_PseudoTypeInfo) (&check_hlds__abstract_mode_constraints__term__pti_var_1__pseudo_1),
  (MR_PseudoTypeInfo) (&check_hlds__abstract_mode_constraints__list__pti_list_1__pseudo_term__pti_var_1__pseudo_1)
};

static const MR_DuFunctorDesc check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_functor_desc_var_constraint_1_3 = {
  (MR_String) "equiv_disj",
  INT16_C(2),
  UINT16_C(3),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 0,
  INT32_C(3),
  check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__field_types_var_constraint_1_3,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__field_types_var_constraint_1_4[1] = { (MR_PseudoTypeInfo) (&check_hlds__abstract_mode_constraints__list__pti_list_1__pseudo_term__pti_var_1__pseudo_1) };

static const MR_DuFunctorDesc check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_functor_desc_var_constraint_1_4 = {
  (MR_String) "at_most_one",
  INT16_C(1),
  UINT16_C(1),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 1,
  INT32_C(4),
  check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__field_types_var_constraint_1_4,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__field_types_var_constraint_1_5[1] = { (MR_PseudoTypeInfo) (&check_hlds__abstract_mode_constraints__list__pti_list_1__pseudo_term__pti_var_1__pseudo_1) };

static const MR_DuFunctorDesc check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_functor_desc_var_constraint_1_5 = {
  (MR_String) "exactly_one",
  INT16_C(1),
  UINT16_C(1),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 2,
  INT32_C(5),
  check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__field_types_var_constraint_1_5,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_stag_ordered_var_constraint_1_0[1] = { &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_functor_desc_var_constraint_1_0 };

static const MR_DuFunctorDescPtr check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_stag_ordered_var_constraint_1_1[1] = { &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_functor_desc_var_constraint_1_1 };

static const MR_DuFunctorDescPtr check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_stag_ordered_var_constraint_1_2[1] = { &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_functor_desc_var_constraint_1_2 };

static const MR_DuFunctorDescPtr check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_stag_ordered_var_constraint_1_3[3] = {
  &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_functor_desc_var_constraint_1_3,
  &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_functor_desc_var_constraint_1_4,
  &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_functor_desc_var_constraint_1_5
};

static const MR_DuPtagLayout check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_ptag_ordered_var_constraint_1[4] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_stag_ordered_var_constraint_1_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_stag_ordered_var_constraint_1_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_stag_ordered_var_constraint_1_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  },
  {
    UINT32_C(3),
    MR_SECTAG_REMOTE_FULL_WORD,
    check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_stag_ordered_var_constraint_1_3,
    INT8_C(-1),
    UINT8_C(3),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__abstract_mode_constraints____Unify____var_constraint_1_0_10001)),
  ((MR_Box) (check_hlds__abstract_mode_constraints____Compare____var_constraint_1_0_10001)),
  (MR_String) "check_hlds.abstract_mode_constraints",
  (MR_String) "var_constraint",
  { check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_name_ordered_var_constraint_1 },
  { check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__du_ptag_ordered_var_constraint_1 },
  (MR_Integer) 6,
  UINT16_C(12),
  check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__functor_number_map_var_constraint_1,

};

const MR_TypeCtorInfo_Struct check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_var_constraint_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__abstract_mode_constraints____Unify____var_constraint_0_0_10001)),
  ((MR_Box) (check_hlds__abstract_mode_constraints____Compare____var_constraint_0_0_10001)),
  (MR_String) "check_hlds.abstract_mode_constraints",
  (MR_String) "var_constraint",
  { NULL },
  { (MR_PseudoTypeInfo) (&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__ti_var_constraint_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

void MR_CALL 
check_hlds__abstract_mode_constraints____Compare____var_constraint_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__abstract_mode_constraints_scalar_common_1[2]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
check_hlds__abstract_mode_constraints____Unify____var_constraint_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = check_hlds__abstract_mode_constraints____Unify____var_constraint_1_0((MR_Word) (&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0), Cast_HeadVar1_3, Cast_HeadVar2_4);
  return succeeded;
}

void MR_CALL 
check_hlds__abstract_mode_constraints____Compare____var_constraint_1_0(
  MR_Word TypeInfo_for_T_27,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_25 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_26 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_25 == CastY_26);
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
              MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
              MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
              MR_Word ArgX2_7 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 1))) & (MR_Integer) 1);
              MR_Word ArgY2_8 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 1))) & (MR_Integer) 1);
              MR_Word SubResult1_6;

              mercury__term____Compare____var_1_0(TypeInfo_for_T_27, &SubResult1_6, ArgX1_4, ArgY1_5);
              succeeded = (SubResult1_6 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult1_6;
              else
              {
                MR_Integer Var_53 = (MR_Integer) (ArgX2_7);
                MR_Integer Var_54 = (MR_Integer) (ArgY2_8);

                succeeded = (Var_53 < Var_54);
                if (succeeded)
                  *HeadVar__1_1 = (MR_Integer) 1;
                else
                {
                  succeeded = (Var_53 > Var_54);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 2;
                  else
                    *HeadVar__1_1 = (MR_Integer) 0;
                }
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
              MR_Word TypeInfo_47_47;
              MR_Word ArgX1_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
              MR_Word ArgY1_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));

              {
                TypeInfo_47_47 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, TypeInfo_47_47, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
                MR_hl_field(0, TypeInfo_47_47, 1) = ((MR_Box) (TypeInfo_for_T_27));
              }
              mercury__list____Compare____list_1_0(TypeInfo_47_47, HeadVar__1_1, (MR_Word) (ArgX1_9), (MR_Word) (ArgY1_10));
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
              MR_Word ArgX1_11 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 0))));
              MR_Word ArgY1_12 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, 0))));
              MR_Word ArgX2_14 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 1))));
              MR_Word ArgY2_15 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, 1))));
              MR_Word SubResult1_13;

              mercury__term____Compare____var_1_0(TypeInfo_for_T_27, &SubResult1_13, ArgX1_11, ArgY1_12);
              succeeded = (SubResult1_13 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult1_13;
              else
                mercury__term____Compare____var_1_0(TypeInfo_for_T_27, HeadVar__1_1, ArgX2_14, ArgY2_15);
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
                      MR_Word SubResult1_18;

                      mercury__term____Compare____var_1_0(TypeInfo_for_T_27, &SubResult1_18, ArgX1_16, ArgY1_17);
                      succeeded = (SubResult1_18 != (MR_Integer) 0);
                      if (succeeded)
                        *HeadVar__1_1 = SubResult1_18;
                      else
                      {
                        MR_Word TypeInfo_39_39;

                        {
                          TypeInfo_39_39 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(0, TypeInfo_39_39, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
                          MR_hl_field(0, TypeInfo_39_39, 1) = ((MR_Box) (TypeInfo_for_T_27));
                        }
                        mercury__list____Compare____list_1_0(TypeInfo_39_39, HeadVar__1_1, (MR_Word) (ArgX2_19), (MR_Word) (ArgY2_20));
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
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
                      MR_Word TypeInfo_33_33;
                      MR_Word ArgX1_21 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                      MR_Word ArgY1_22 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 1))));

                      {
                        TypeInfo_33_33 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(0, TypeInfo_33_33, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
                        MR_hl_field(0, TypeInfo_33_33, 1) = ((MR_Box) (TypeInfo_for_T_27));
                      }
                      mercury__list____Compare____list_1_0(TypeInfo_33_33, HeadVar__1_1, (MR_Word) (ArgX1_21), (MR_Word) (ArgY1_22));
                    }
                    break;
                  case (MR_Integer) 2:
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
                      MR_Word TypeInfo_29_29;
                      MR_Word ArgX1_23 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                      MR_Word ArgY1_24 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 1))));

                      {
                        TypeInfo_29_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(0, TypeInfo_29_29, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
                        MR_hl_field(0, TypeInfo_29_29, 1) = ((MR_Box) (TypeInfo_for_T_27));
                      }
                      mercury__list____Compare____list_1_0(TypeInfo_29_29, HeadVar__1_1, (MR_Word) (ArgX1_23), (MR_Word) (ArgY1_24));
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
check_hlds__abstract_mode_constraints____Compare____pred_p_c_constraints_0_0(
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
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__abstract_mode_constraints_scalar_common_2[1]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__abstract_mode_constraints_scalar_common_1[4]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
        mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__abstract_mode_constraints_scalar_common_1[5]), HeadVar__1_1, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
    }
  }
}

MR_bool MR_CALL 
check_hlds__abstract_mode_constraints____Unify____pred_p_c_constraints_0_0(
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
    MR_Word TypeInfo_12_12;
    MR_Word TypeInfo_13_13;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__abstract_mode_constraints_scalar_common_2[1]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
    {
      TypeInfo_12_12 = (MR_Word) (&check_hlds__abstract_mode_constraints_scalar_common_1[4]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_12, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
      {
        TypeInfo_13_13 = (MR_Word) (&check_hlds__abstract_mode_constraints_scalar_common_1[5]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_13_13, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
      }
    }
  }
  return succeeded;
}

void MR_CALL 
check_hlds__abstract_mode_constraints____Compare____mc_varset_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__abstract_mode_constraints_scalar_common_1[3]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
check_hlds__abstract_mode_constraints____Unify____mc_varset_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__abstract_mode_constraints_scalar_common_1[3]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
check_hlds__abstract_mode_constraints____Compare____mc_var_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__abstract_mode_constraints_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
check_hlds__abstract_mode_constraints____Unify____mc_var_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__abstract_mode_constraints_scalar_common_1[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
check_hlds__abstract_mode_constraints____Compare____mc_type_0_0(
  MR_Word * HeadVar__1_1)
{
  check_hlds__abstract_mode_constraints__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_99_104_101_99_107_95_104_108_100_115_95_95_97_98_115_116_114_97_99_116_95_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_115_95_95_109_99_95_116_121_112_101_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(HeadVar__1_1);
}

void MR_CALL 
check_hlds__abstract_mode_constraints__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_99_104_101_99_107_95_104_108_100_115_95_95_97_98_115_116_114_97_99_116_95_109_111_100_101_95_99_111_110_115_116_114_97_105_110_116_115_95_95_109_99_95_116_121_112_101_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(
  MR_Word * HeadVar__1_1)
{
  *HeadVar__1_1 = (MR_Integer) 0;
}

MR_bool MR_CALL 
check_hlds__abstract_mode_constraints____Unify____mc_type_0_0(void)
{
  return MR_TRUE;
}

void MR_CALL 
check_hlds__abstract_mode_constraints____Compare____mc_bindings_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__abstract_mode_constraints_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
check_hlds__abstract_mode_constraints____Unify____mc_bindings_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__abstract_mode_constraints_scalar_common_2[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
check_hlds__abstract_mode_constraints____Compare____mc_ann_constraint_0_0(
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word SubResult1_6;

    check_hlds__abstract_mode_constraints____Compare____mc_constraint_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      check_hlds__abstract_mode_constraints____Compare____mc_annotation_0_0(HeadVar__1_1, ArgX2_7, ArgY2_8);
  }
}

void MR_CALL 
check_hlds__abstract_mode_constraints____Compare____mc_constraint_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_10 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_11 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_10 == CastY_11);
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
              MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
              MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));

              mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__abstract_mode_constraints_scalar_common_1[2]), HeadVar__1_1, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
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

              mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__abstract_mode_constraints_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (ArgX1_6)), ((MR_Box) (ArgY1_7)));
            }
            break;
          case (MR_Integer) 2:
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

              mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__abstract_mode_constraints_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (ArgX1_8)), ((MR_Box) (ArgY1_9)));
            }
            break;
        }
        break;
    }
}

void MR_CALL 
check_hlds__abstract_mode_constraints____Compare____mc_annotation_0_0(
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
check_hlds__abstract_mode_constraints____Unify____mc_ann_constraint_0_0(
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
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));

    succeeded = check_hlds__abstract_mode_constraints____Unify____mc_constraint_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
      succeeded = check_hlds__abstract_mode_constraints____Unify____mc_annotation_0_0(ArgX2_5, ArgY2_6);
  }
  return succeeded;
}

MR_bool MR_CALL 
check_hlds__abstract_mode_constraints____Unify____mc_constraint_0_0(
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
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word TypeCtorInfo_11_11;
          MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
          MR_Word ArgY1_4;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
            TypeCtorInfo_11_11 = (MR_Word) (&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0);
            succeeded = check_hlds__abstract_mode_constraints____Unify____var_constraint_1_0(TypeCtorInfo_11_11, ArgX1_3, ArgY1_4);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word TypeInfo_13_13;
          MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
          MR_Word ArgY1_6;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
            TypeInfo_13_13 = (MR_Word) (&check_hlds__abstract_mode_constraints_scalar_common_1[1]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_13_13, ((MR_Box) (ArgX1_5)), ((MR_Box) (ArgY1_6)));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word TypeInfo_12_12;
          MR_Word ArgX1_7 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, 0))));
          MR_Word ArgY1_8;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_8 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 0))));
            TypeInfo_12_12 = (MR_Word) (&check_hlds__abstract_mode_constraints_scalar_common_1[1]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_12, ((MR_Box) (ArgX1_7)), ((MR_Box) (ArgY1_8)));
          }
        }
        break;
    }
  return succeeded;
}

MR_bool MR_CALL 
check_hlds__abstract_mode_constraints____Unify____var_constraint_1_0(
  MR_Word TypeInfo_for_T_23,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_21 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_22 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_21 == CastY_22);
  if (succeeded)
    succeeded = MR_TRUE;
  else
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
          MR_Word ArgY1_4;
          MR_Word ArgX2_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 1))) & (MR_Integer) 1);
          MR_Word ArgY2_6;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
            ArgY2_6 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 1))) & (MR_Integer) 1);
            succeeded = mercury__term____Unify____var_1_0(TypeInfo_for_T_23, ArgX1_3, ArgY1_4);
            if (succeeded)
              succeeded = (ArgX2_5 == ArgY2_6);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word TypeCtorInfo_36_36;
          MR_Word TypeInfo_37_37;
          MR_Word ArgX1_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
          MR_Word ArgY1_8;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
            TypeCtorInfo_36_36 = (MR_Word) (&mercury__term__term__type_ctor_info_var_1);
            {
              TypeInfo_37_37 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, TypeInfo_37_37, 0) = ((MR_Box) (TypeCtorInfo_36_36));
              MR_hl_field(0, TypeInfo_37_37, 1) = ((MR_Box) (TypeInfo_for_T_23));
            }
            succeeded = mercury__list____Unify____list_1_0(TypeInfo_37_37, (MR_Word) (ArgX1_7), (MR_Word) (ArgY1_8));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ArgX1_9 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, 0))));
          MR_Word ArgY1_10;
          MR_Word ArgX2_11 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, 1))));
          MR_Word ArgY2_12;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_10 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 0))));
            ArgY2_12 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 1))));
            succeeded = mercury__term____Unify____var_1_0(TypeInfo_for_T_23, ArgX1_9, ArgY1_10);
            if (succeeded)
              succeeded = mercury__term____Unify____var_1_0(TypeInfo_for_T_23, ArgX2_11, ArgY2_12);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word TypeCtorInfo_30_30;
              MR_Word TypeInfo_33_33;
              MR_Word ArgX1_13 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_Word ArgY1_14;
              MR_Word ArgX2_15 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_Word ArgY2_16;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                ArgY1_14 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                ArgY2_16 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 2))));
                TypeCtorInfo_30_30 = (MR_Word) (&mercury__term__term__type_ctor_info_var_1);
                {
                  TypeInfo_33_33 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, TypeInfo_33_33, 0) = ((MR_Box) (TypeCtorInfo_30_30));
                  MR_hl_field(0, TypeInfo_33_33, 1) = ((MR_Box) (TypeInfo_for_T_23));
                }
                succeeded = mercury__term____Unify____var_1_0(TypeInfo_for_T_23, ArgX1_13, ArgY1_14);
                if (succeeded)
                  succeeded = mercury__list____Unify____list_1_0(TypeInfo_33_33, (MR_Word) (ArgX2_15), (MR_Word) (ArgY2_16));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word TypeCtorInfo_24_24;
              MR_Word TypeInfo_25_25;
              MR_Word ArgX1_17 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_Word ArgY1_18;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                ArgY1_18 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                TypeCtorInfo_24_24 = (MR_Word) (&mercury__term__term__type_ctor_info_var_1);
                {
                  TypeInfo_25_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, TypeInfo_25_25, 0) = ((MR_Box) (TypeCtorInfo_24_24));
                  MR_hl_field(0, TypeInfo_25_25, 1) = ((MR_Box) (TypeInfo_for_T_23));
                }
                succeeded = mercury__list____Unify____list_1_0(TypeInfo_25_25, (MR_Word) (ArgX1_17), (MR_Word) (ArgY1_18));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word TypeCtorInfo_40_40;
              MR_Word TypeInfo_41_41;
              MR_Word ArgX1_19 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_Word ArgY1_20;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 2)));
              if (succeeded)
              {
                ArgY1_20 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                TypeCtorInfo_40_40 = (MR_Word) (&mercury__term__term__type_ctor_info_var_1);
                {
                  TypeInfo_41_41 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, TypeInfo_41_41, 0) = ((MR_Box) (TypeCtorInfo_40_40));
                  MR_hl_field(0, TypeInfo_41_41, 1) = ((MR_Box) (TypeInfo_for_T_23));
                }
                succeeded = mercury__list____Unify____list_1_0(TypeInfo_41_41, (MR_Word) (ArgX1_19), (MR_Word) (ArgY1_20));
              }
            }
            break;
        }
        break;
    }
  return succeeded;
}

MR_bool MR_CALL 
check_hlds__abstract_mode_constraints____Unify____mc_annotation_0_0(
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

static void MR_CALL 
check_hlds__abstract_mode_constraints__pretty_print_binding_6_p_0(
  MR_Word OutputStream_7,
  MR_Word VarSet_8,
  MR_Word Bindings_9,
  MR_Word Var_10)
{
  MR_String VarName_12;
  MR_Word Value_13;
  MR_String ValueStr_14;
  MR_Box conv0_Value_13;

  VarName_12 = mercury__varset__lookup_name_2_f_0((MR_Word) (&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0), VarSet_8, Var_10);
  mercury__map__lookup_3_p_0((MR_Word) (&check_hlds__abstract_mode_constraints_scalar_common_1[0]), (MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), Bindings_9, ((MR_Box) (Var_10)), &conv0_Value_13);
  Value_13 = ((MR_Word) (conv0_Value_13));
  ValueStr_14 = mercury__string__string_1_f_0((MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), ((MR_Box) (Value_13)));
  mercury__io__write_string_4_p_0(OutputStream_7, (MR_String) "    ");
  mercury__io__write_string_4_p_0(OutputStream_7, VarName_12);
  mercury__io__write_string_4_p_0(OutputStream_7, (MR_String) " = ");
  mercury__io__write_string_4_p_0(OutputStream_7, ValueStr_14);
  mercury__io__write_string_4_p_0(OutputStream_7, (MR_String) "\n");
}

static void MR_CALL 
check_hlds__abstract_mode_constraints__pretty_print_bindings_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  check_hlds__abstract_mode_constraints__pretty_print_binding_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
check_hlds__abstract_mode_constraints__pretty_print_bindings_7_p_0(
  MR_Word OutputStream_8,
  MR_Word VarSet_9,
  MR_Word Bindings_10,
  MR_Integer N_11,
  MR_Integer * HeadVar__5_5)
{
  MR_Word Variables_13;
  MR_String Var_17;
  MR_String Var_20;
  MR_String Var_21;
  MR_Word Var_23;
  MR_Box conv0_STATE_VARIABLE_IO_2_24;

  *HeadVar__5_5 = (MR_Integer) ((MR_Unsigned) N_11 + (MR_Unsigned) 1);
  Var_21 = mercury__string__from_int_1_f_0(N_11);
  Var_20 = mercury__string__f_43_43_2_f_0(Var_21, (MR_String) ":\n{\n");
  Var_17 = mercury__string__f_43_43_2_f_0((MR_String) "Solution ", Var_20);
  mercury__io__write_string_4_p_0(OutputStream_8, Var_17);
  Variables_13 = mercury__map__keys_1_f_0((MR_Word) (&check_hlds__abstract_mode_constraints_scalar_common_1[0]), (MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), Bindings_10);
  {
    Var_23 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_23, 0) = ((MR_Box) (&check_hlds__abstract_mode_constraints_scalar_common_6[0]));
    MR_hl_field(0, Var_23, 1) = ((MR_Box) (check_hlds__abstract_mode_constraints__pretty_print_bindings_7_p_0_1));
    MR_hl_field(0, Var_23, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_23, 3) = ((MR_Box) (OutputStream_8));
    MR_hl_field(0, Var_23, 4) = ((MR_Box) (VarSet_9));
    MR_hl_field(0, Var_23, 5) = ((MR_Box) (Bindings_10));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&check_hlds__abstract_mode_constraints_scalar_common_1[0]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_23, Variables_13, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_2_24);
  mercury__io__write_string_4_p_0(OutputStream_8, (MR_String) "}\n");
}

static void MR_CALL 
check_hlds__abstract_mode_constraints__dump_ann_constraint_7_p_0(
  MR_Word OutputStream_8,
  MR_Word Globals_9,
  MR_Word VarSet_10,
  MR_Unsigned Indent_11,
  MR_Word AnnConstraint_12)
{
  MR_Word Constraint_14 = ((MR_Word) ((MR_hl_field(0, AnnConstraint_12, 0))));
  MR_Word Annotation_15 = ((MR_Word) ((MR_hl_field(0, AnnConstraint_12, 1))));

  check_hlds__abstract_mode_constraints__dump_constraint_8_p_0(OutputStream_8, Globals_9, VarSet_10, Indent_11, Annotation_15, Constraint_14);
}

static void MR_CALL 
check_hlds__abstract_mode_constraints__dump_constraint_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  check_hlds__abstract_mode_constraints__dump_constraint_8_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Unsigned) ((MR_hl_field(0, closure, 6)))), ((MR_Word) ((MR_hl_field(0, closure, 7)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
check_hlds__abstract_mode_constraints__dump_constraint_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  check_hlds__abstract_mode_constraints__dump_constraint_8_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Unsigned) ((MR_hl_field(0, closure, 6)))), ((MR_Word) ((MR_hl_field(0, closure, 7)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
check_hlds__abstract_mode_constraints__dump_constraint_8_p_0(
  MR_Word OutputStream_9,
  MR_Word Globals_10,
  MR_Word VarSet_11,
  MR_Unsigned Indent_12,
  MR_Word Annotation_13,
  MR_Word Constraint_14)
{
  switch (MR_tag((MR_Word) Constraint_14)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word AtomicConstraint_18 = ((MR_Word) ((MR_hl_field(0, Constraint_14, 0))));

        check_hlds__abstract_mode_constraints__dump_var_constraint_8_p_0(OutputStream_9, Globals_10, VarSet_11, Indent_12, Annotation_13, AtomicConstraint_18);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Constraints_16 = ((MR_Word) ((MR_hl_field(1, Constraint_14, 0))));
        MR_Word Context_17 = (MR_Word) (Annotation_13);
        MR_Unsigned Var_26;
        MR_Word Var_53;
        MR_Box conv1_STATE_VARIABLE_IO_2_27;

        parse_tree__write_error_spec__write_error_pieces_7_p_0(OutputStream_9, Globals_10, Context_17, Indent_12, (MR_Word) (MR_mkword(1, &check_hlds__abstract_mode_constraints_scalar_common_1[11])));
        Var_26 = (Indent_12 + (MR_Unsigned) 1U);
        {
          Var_53 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_53, 0) = ((MR_Box) (&check_hlds__abstract_mode_constraints_scalar_common_5[0]));
          MR_hl_field(0, Var_53, 1) = ((MR_Box) (check_hlds__abstract_mode_constraints__dump_constraint_8_p_0_2));
          MR_hl_field(0, Var_53, 2) = ((MR_Box) ((MR_Integer) 5));
          MR_hl_field(0, Var_53, 3) = ((MR_Box) (OutputStream_9));
          MR_hl_field(0, Var_53, 4) = ((MR_Box) (Globals_10));
          MR_hl_field(0, Var_53, 5) = ((MR_Box) (VarSet_11));
          MR_hl_field(0, Var_53, 6) = ((MR_Box) (Var_26));
          MR_hl_field(0, Var_53, 7) = ((MR_Box) (Annotation_13));
        }
        mercury__list__foldl_4_p_2((MR_Word) (&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_constraint_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_53, Constraints_16, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_2_27);
        parse_tree__write_error_spec__write_error_pieces_7_p_0(OutputStream_9, Globals_10, Context_17, Indent_12, (MR_Word) (MR_mkword(1, &check_hlds__abstract_mode_constraints_scalar_common_1[13])));
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Unsigned Var_39;
        MR_Word Constraints_48 = ((MR_Word) ((MR_hl_field(2, Constraint_14, 0))));
        MR_Word Context_49 = (MR_Word) (Annotation_13);
        MR_Word Var_50;
        MR_Box conv0_STATE_VARIABLE_IO_5_40;

        parse_tree__write_error_spec__write_error_pieces_7_p_0(OutputStream_9, Globals_10, Context_49, Indent_12, (MR_Word) (MR_mkword(1, &check_hlds__abstract_mode_constraints_scalar_common_1[7])));
        Var_39 = (Indent_12 + (MR_Unsigned) 1U);
        {
          Var_50 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_50, 0) = ((MR_Box) (&check_hlds__abstract_mode_constraints_scalar_common_5[0]));
          MR_hl_field(0, Var_50, 1) = ((MR_Box) (check_hlds__abstract_mode_constraints__dump_constraint_8_p_0_1));
          MR_hl_field(0, Var_50, 2) = ((MR_Box) ((MR_Integer) 5));
          MR_hl_field(0, Var_50, 3) = ((MR_Box) (OutputStream_9));
          MR_hl_field(0, Var_50, 4) = ((MR_Box) (Globals_10));
          MR_hl_field(0, Var_50, 5) = ((MR_Box) (VarSet_11));
          MR_hl_field(0, Var_50, 6) = ((MR_Box) (Var_39));
          MR_hl_field(0, Var_50, 7) = ((MR_Box) (Annotation_13));
        }
        mercury__list__foldl_4_p_2((MR_Word) (&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_constraint_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_50, Constraints_48, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_5_40);
        parse_tree__write_error_spec__write_error_pieces_7_p_0(OutputStream_9, Globals_10, Context_49, Indent_12, (MR_Word) (MR_mkword(1, &check_hlds__abstract_mode_constraints_scalar_common_1[9])));
      }
      break;
  }
}

static void MR_CALL 
check_hlds__abstract_mode_constraints__dump_var_constraint_8_p_0(
  MR_Word OutputStream_9,
  MR_Word Globals_10,
  MR_Word VarSet_11,
  MR_Unsigned Indent_12,
  MR_Word Annotation_13,
  MR_Word Constraint_14)
{
  switch (MR_tag((MR_Word) Constraint_14)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word X_16 = ((MR_Word) ((MR_hl_field(0, Constraint_14, 0))));
        MR_Word Val_17 = ((MR_Unsigned) ((MR_hl_field(0, Constraint_14, 1))) & (MR_Integer) 1);
        MR_String VarName_18;
        MR_String ValString_19;
        MR_Word Context_20;
        MR_Word Var_30;
        MR_Word Var_32;
        MR_Word Var_34;
        MR_String Var_35;
        MR_String Var_36;

        {
          Var_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_30, 0) = ((MR_Box) (X_16));
          MR_hl_field(1, Var_30, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        check_hlds__abstract_mode_constraints__mc_var_list_to_string_3_p_0(VarSet_11, Var_30, &VarName_18);
        switch (Val_17) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            ValString_19 = (MR_String) "no";
            break;
          case (MR_Integer) 1:
            ValString_19 = (MR_String) "yes";
            break;
        }
        Context_20 = (MR_Word) (Annotation_13);
        Var_36 = mercury__string__f_43_43_2_f_0((MR_String) " = ", ValString_19);
        Var_35 = mercury__string__f_43_43_2_f_0(VarName_18, Var_36);
        {
          Var_34 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_34, 0) = ((MR_Box) ((MR_Unsigned) 9U));
          MR_hl_field(3, Var_34, 1) = ((MR_Box) (Var_35));
        }
        {
          Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_32, 0) = ((MR_Box) (Var_34));
          MR_hl_field(1, Var_32, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        parse_tree__write_error_spec__write_error_pieces_7_p_0(OutputStream_9, Globals_10, Context_20, Indent_12, Var_32);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Xs_21 = ((MR_Word) ((MR_hl_field(1, Constraint_14, 0))));
        MR_String VarsString_22;
        MR_Word Var_39;
        MR_Word Var_41;
        MR_String Var_42;
        MR_String Var_44;
        MR_Word Context_82;

        check_hlds__abstract_mode_constraints__mc_var_list_to_string_3_p_0(VarSet_11, Xs_21, &VarsString_22);
        Context_82 = (MR_Word) (Annotation_13);
        Var_44 = mercury__string__f_43_43_2_f_0(VarsString_22, (MR_String) ")");
        Var_42 = mercury__string__f_43_43_2_f_0((MR_String) "equivalent(", Var_44);
        {
          Var_41 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_41, 0) = ((MR_Box) ((MR_Unsigned) 9U));
          MR_hl_field(3, Var_41, 1) = ((MR_Box) (Var_42));
        }
        {
          Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_39, 0) = ((MR_Box) (Var_41));
          MR_hl_field(1, Var_39, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        parse_tree__write_error_spec__write_error_pieces_7_p_0(OutputStream_9, Globals_10, Context_82, Indent_12, Var_39);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Y_23 = ((MR_Word) ((MR_hl_field(2, Constraint_14, 1))));
        MR_String XName_24;
        MR_String YName_25;
        MR_Word Var_47;
        MR_Word Var_49;
        MR_Word Var_51;
        MR_Word Var_53;
        MR_String Var_54;
        MR_String Var_55;
        MR_Word X_83 = ((MR_Word) ((MR_hl_field(2, Constraint_14, 0))));
        MR_Word Context_84;

        {
          Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_47, 0) = ((MR_Box) (X_83));
          MR_hl_field(1, Var_47, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        check_hlds__abstract_mode_constraints__mc_var_list_to_string_3_p_0(VarSet_11, Var_47, &XName_24);
        {
          Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_49, 0) = ((MR_Box) (Y_23));
          MR_hl_field(1, Var_49, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        check_hlds__abstract_mode_constraints__mc_var_list_to_string_3_p_0(VarSet_11, Var_49, &YName_25);
        Context_84 = (MR_Word) (Annotation_13);
        Var_55 = mercury__string__f_43_43_2_f_0((MR_String) " -> ", YName_25);
        Var_54 = mercury__string__f_43_43_2_f_0(XName_24, Var_55);
        {
          Var_53 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_53, 0) = ((MR_Box) ((MR_Unsigned) 9U));
          MR_hl_field(3, Var_53, 1) = ((MR_Box) (Var_54));
        }
        {
          Var_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_51, 0) = ((MR_Box) (Var_53));
          MR_hl_field(1, Var_51, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        parse_tree__write_error_spec__write_error_pieces_7_p_0(OutputStream_9, Globals_10, Context_84, Indent_12, Var_51);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Constraint_14, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_String XsString_26;
            MR_Word Pieces_27;
            MR_Word Var_58;
            MR_Word Var_60;
            MR_String Var_61;
            MR_String Var_62;
            MR_String Var_64;
            MR_Word X_85 = ((MR_Word) ((MR_hl_field(3, Constraint_14, 1))));
            MR_Word Context_86;
            MR_Word Xs_87 = ((MR_Word) ((MR_hl_field(3, Constraint_14, 2))));
            MR_String XName_88;

            {
              Var_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_58, 0) = ((MR_Box) (X_85));
              MR_hl_field(1, Var_58, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            check_hlds__abstract_mode_constraints__mc_var_list_to_string_3_p_0(VarSet_11, Var_58, &XName_88);
            check_hlds__abstract_mode_constraints__mc_var_list_to_string_3_p_0(VarSet_11, Xs_87, &XsString_26);
            Context_86 = (MR_Word) (Annotation_13);
            Var_64 = mercury__string__f_43_43_2_f_0(XsString_26, (MR_String) ")");
            Var_62 = mercury__string__f_43_43_2_f_0((MR_String) " <-> disj(", Var_64);
            Var_61 = mercury__string__f_43_43_2_f_0(XName_88, Var_62);
            {
              Var_60 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_60, 0) = ((MR_Box) ((MR_Unsigned) 9U));
              MR_hl_field(3, Var_60, 1) = ((MR_Box) (Var_61));
            }
            {
              Pieces_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Pieces_27, 0) = ((MR_Box) (Var_60));
              MR_hl_field(1, Pieces_27, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            parse_tree__write_error_spec__write_error_pieces_7_p_0(OutputStream_9, Globals_10, Context_86, Indent_12, Pieces_27);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_68;
            MR_String Var_69;
            MR_String Var_71;
            MR_Word Context_89;
            MR_Word Xs_90 = ((MR_Word) ((MR_hl_field(3, Constraint_14, 1))));
            MR_String XsString_91;
            MR_Word Pieces_92;

            check_hlds__abstract_mode_constraints__mc_var_list_to_string_3_p_0(VarSet_11, Xs_90, &XsString_91);
            Var_71 = mercury__string__f_43_43_2_f_0(XsString_91, (MR_String) ")");
            Var_69 = mercury__string__f_43_43_2_f_0((MR_String) "at_most_one(", Var_71);
            {
              Var_68 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_68, 0) = ((MR_Box) ((MR_Unsigned) 9U));
              MR_hl_field(3, Var_68, 1) = ((MR_Box) (Var_69));
            }
            {
              Pieces_92 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Pieces_92, 0) = ((MR_Box) (Var_68));
              MR_hl_field(1, Pieces_92, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            Context_89 = (MR_Word) (Annotation_13);
            parse_tree__write_error_spec__write_error_pieces_7_p_0(OutputStream_9, Globals_10, Context_89, Indent_12, Pieces_92);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Var_75;
            MR_String Var_76;
            MR_String Var_78;
            MR_Word Context_93;
            MR_Word Xs_94 = ((MR_Word) ((MR_hl_field(3, Constraint_14, 1))));
            MR_String XsString_95;
            MR_Word Pieces_96;

            check_hlds__abstract_mode_constraints__mc_var_list_to_string_3_p_0(VarSet_11, Xs_94, &XsString_95);
            Var_78 = mercury__string__f_43_43_2_f_0(XsString_95, (MR_String) ")");
            Var_76 = mercury__string__f_43_43_2_f_0((MR_String) "exactly_one(", Var_78);
            {
              Var_75 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_75, 0) = ((MR_Box) ((MR_Unsigned) 9U));
              MR_hl_field(3, Var_75, 1) = ((MR_Box) (Var_76));
            }
            {
              Pieces_96 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Pieces_96, 0) = ((MR_Box) (Var_75));
              MR_hl_field(1, Pieces_96, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            Context_93 = (MR_Word) (Annotation_13);
            parse_tree__write_error_spec__write_error_pieces_7_p_0(OutputStream_9, Globals_10, Context_93, Indent_12, Pieces_96);
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
check_hlds__abstract_mode_constraints__mc_var_list_to_string_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_String * HeadVar__3_3)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__3_3 = (MR_String) "";
  else
  {
    MR_Word Var_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_Word Var_22 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));

    if ((Var_21 == (MR_Word) ((MR_Unsigned) 0U)))
      mercury__varset__lookup_name_3_p_0((MR_Word) (&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0), HeadVar__1_1, Var_22, HeadVar__3_3);
    else
    {
      MR_String VarName_13;
      MR_String VarNames_14;
      MR_String Var_16;
      MR_Word Var_40;
      MR_Word Var_41;

      mercury__varset__lookup_name_3_p_0((MR_Word) (&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0), HeadVar__1_1, Var_22, &VarName_13);
      Var_41 = ((MR_Word) ((MR_hl_field(1, Var_21, 0))));
      Var_40 = ((MR_Word) ((MR_hl_field(1, Var_21, 1))));
      if ((Var_40 == (MR_Word) ((MR_Unsigned) 0U)))
        mercury__varset__lookup_name_3_p_0((MR_Word) (&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0), HeadVar__1_1, Var_41, &VarNames_14);
      else
      {
        MR_String VarName_32;
        MR_String VarNames_33;
        MR_String Var_35;

        mercury__varset__lookup_name_3_p_0((MR_Word) (&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0), HeadVar__1_1, Var_41, &VarName_32);
        check_hlds__abstract_mode_constraints__mc_var_list_to_string_3_p_0(HeadVar__1_1, Var_40, &VarNames_33);
        Var_35 = mercury__string__f_43_43_2_f_0((MR_String) ", ", VarNames_33);
        VarNames_14 = mercury__string__f_43_43_2_f_0(VarName_32, Var_35);
      }
      Var_16 = mercury__string__f_43_43_2_f_0((MR_String) ", ", VarNames_14);
      *HeadVar__3_3 = mercury__string__f_43_43_2_f_0(VarName_13, Var_16);
    }
  }
}

static void MR_CALL 
check_hlds__abstract_mode_constraints__pretty_print_solutions_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Integer conv0_HeadVar__5_5;

  check_hlds__abstract_mode_constraints__pretty_print_bindings_7_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv0_HeadVar__5_5);
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__5_5));
}

void MR_CALL 
check_hlds__abstract_mode_constraints__pretty_print_solutions_5_p_0(
  MR_Word OutputStream_6,
  MR_Word VarSet_7,
  MR_Word Solutions_8)
{
  MR_Word Var_13;
  MR_Box conv2_Var_10;
  MR_Box conv1_STATE_VARIABLE_IO_12;

  {
    Var_13 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_13, 0) = ((MR_Box) (&check_hlds__abstract_mode_constraints_scalar_common_4[1]));
    MR_hl_field(0, Var_13, 1) = ((MR_Box) (check_hlds__abstract_mode_constraints__pretty_print_solutions_5_p_0_1));
    MR_hl_field(0, Var_13, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_13, 3) = ((MR_Box) (OutputStream_6));
    MR_hl_field(0, Var_13, 4) = ((MR_Box) (VarSet_7));
  }
  mercury__list__foldl2_6_p_2((MR_Word) (&check_hlds__abstract_mode_constraints_scalar_common_2[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_13, Solutions_8, ((MR_Box) ((MR_Integer) 0)), &conv2_Var_10, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_12);
}

void MR_CALL 
check_hlds__abstract_mode_constraints__pretty_print_constraints_5_p_0(
  MR_Word OutputStream_6,
  MR_Word VarSet_7,
  MR_Word Constraints_8)
{
  check_hlds__abstract_mode_constraints__pretty_print_constraints_indent_6_p_0(OutputStream_6, VarSet_7, (MR_String) "", Constraints_8);
}

void MR_CALL 
check_hlds__abstract_mode_constraints__pretty_print_constraint_5_p_0(
  MR_Word OutputStream_6,
  MR_Word VarSet_7,
  MR_Word Constraint_8)
{
  switch (MR_tag((MR_Word) Constraint_8)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word AtomicConstraint_14 = ((MR_Word) ((MR_hl_field(0, Constraint_8, 0))));

        mercury__io__write_string_4_p_0(OutputStream_6, (MR_String) "");
        switch (MR_tag((MR_Word) AtomicConstraint_14)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word X_34 = ((MR_Word) ((MR_hl_field(0, AtomicConstraint_14, 0))));
              MR_Word TF_35 = ((MR_Unsigned) ((MR_hl_field(0, AtomicConstraint_14, 1))) & (MR_Integer) 1);
              MR_String VarName_67;

              mercury__varset__lookup_name_3_p_0((MR_Word) (&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0), VarSet_7, X_34, &VarName_67);
              mercury__io__write_string_4_p_0(OutputStream_6, VarName_67);
              mercury__io__write_string_4_p_0(OutputStream_6, (MR_String) " = ");
              mercury__io__print_4_p_0((MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), OutputStream_6, ((MR_Box) (TF_35)));
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Xs_36 = ((MR_Word) ((MR_hl_field(1, AtomicConstraint_14, 0))));

              mercury__io__write_string_4_p_0(OutputStream_6, (MR_String) "equivalent(");
              check_hlds__abstract_mode_constraints__pretty_print_mc_vars_5_p_0(OutputStream_6, VarSet_7, Xs_36);
              mercury__io__write_string_4_p_0(OutputStream_6, (MR_String) ")");
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Y_37 = ((MR_Word) ((MR_hl_field(2, AtomicConstraint_14, 1))));
              MR_Word X_61 = ((MR_Word) ((MR_hl_field(2, AtomicConstraint_14, 0))));
              MR_String VarName_71;
              MR_String VarName_73;

              mercury__varset__lookup_name_3_p_0((MR_Word) (&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0), VarSet_7, X_61, &VarName_71);
              mercury__io__write_string_4_p_0(OutputStream_6, VarName_71);
              mercury__io__write_string_4_p_0(OutputStream_6, (MR_String) " -> ");
              mercury__varset__lookup_name_3_p_0((MR_Word) (&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0), VarSet_7, Y_37, &VarName_73);
              mercury__io__write_string_4_p_0(OutputStream_6, VarName_73);
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(3, AtomicConstraint_14, 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word X_62 = ((MR_Word) ((MR_hl_field(3, AtomicConstraint_14, 1))));
                  MR_Word Xs_63 = ((MR_Word) ((MR_hl_field(3, AtomicConstraint_14, 2))));
                  MR_String VarName_69;

                  mercury__varset__lookup_name_3_p_0((MR_Word) (&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0), VarSet_7, X_62, &VarName_69);
                  mercury__io__write_string_4_p_0(OutputStream_6, VarName_69);
                  mercury__io__write_string_4_p_0(OutputStream_6, (MR_String) " <-> disj(");
                  check_hlds__abstract_mode_constraints__pretty_print_mc_vars_5_p_0(OutputStream_6, VarSet_7, Xs_63);
                  mercury__io__write_string_4_p_0(OutputStream_6, (MR_String) ")");
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word Xs_64 = ((MR_Word) ((MR_hl_field(3, AtomicConstraint_14, 1))));

                  mercury__io__write_string_4_p_0(OutputStream_6, (MR_String) "at_most_one(");
                  check_hlds__abstract_mode_constraints__pretty_print_mc_vars_5_p_0(OutputStream_6, VarSet_7, Xs_64);
                  mercury__io__write_string_4_p_0(OutputStream_6, (MR_String) ")");
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word Xs_65 = ((MR_Word) ((MR_hl_field(3, AtomicConstraint_14, 1))));

                  mercury__io__write_string_4_p_0(OutputStream_6, (MR_String) "exactly_one(");
                  check_hlds__abstract_mode_constraints__pretty_print_mc_vars_5_p_0(OutputStream_6, VarSet_7, Xs_65);
                  mercury__io__write_string_4_p_0(OutputStream_6, (MR_String) ")");
                }
                break;
            }
            break;
        }
        mercury__io__nl_3_p_0(OutputStream_6);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Constraints_13 = ((MR_Word) ((MR_hl_field(1, Constraint_8, 0))));

        mercury__io__write_string_4_p_0(OutputStream_6, (MR_String) "");
        mercury__io__write_string_4_p_0(OutputStream_6, (MR_String) "disj(\n");
        check_hlds__abstract_mode_constraints__pretty_print_constraints_indent_6_p_0(OutputStream_6, VarSet_7, (MR_String) "\t", Constraints_13);
        mercury__io__write_string_4_p_0(OutputStream_6, (MR_String) "");
        mercury__io__write_string_4_p_0(OutputStream_6, (MR_String) ") end disj\n");
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Constraints_33 = ((MR_Word) ((MR_hl_field(2, Constraint_8, 0))));

        mercury__io__write_string_4_p_0(OutputStream_6, (MR_String) "");
        mercury__io__write_string_4_p_0(OutputStream_6, (MR_String) "conj(\n");
        check_hlds__abstract_mode_constraints__pretty_print_constraints_indent_6_p_0(OutputStream_6, VarSet_7, (MR_String) "\t", Constraints_33);
        mercury__io__write_string_4_p_0(OutputStream_6, (MR_String) "");
        mercury__io__write_string_4_p_0(OutputStream_6, (MR_String) ") end conj\n");
      }
      break;
  }
}

static void MR_CALL 
check_hlds__abstract_mode_constraints__pretty_print_constraints_indent_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_String HeadVar__3_3,
  MR_Word HeadVar__4_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word Constraint_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 0))));
      MR_Word Constraints_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 1))));
      MR_Word next_value_of_HeadVar__4_4;

      switch (MR_tag((MR_Word) Constraint_16)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word AtomicConstraint_23 = ((MR_Word) ((MR_hl_field(0, Constraint_16, 0))));

            mercury__io__write_string_4_p_0(HeadVar__1_1, HeadVar__3_3);
            switch (MR_tag((MR_Word) AtomicConstraint_23)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word X_43 = ((MR_Word) ((MR_hl_field(0, AtomicConstraint_23, 0))));
                  MR_Word TF_44 = ((MR_Unsigned) ((MR_hl_field(0, AtomicConstraint_23, 1))) & (MR_Integer) 1);
                  MR_String VarName_76;

                  mercury__varset__lookup_name_3_p_0((MR_Word) (&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0), HeadVar__2_2, X_43, &VarName_76);
                  mercury__io__write_string_4_p_0(HeadVar__1_1, VarName_76);
                  mercury__io__write_string_4_p_0(HeadVar__1_1, (MR_String) " = ");
                  mercury__io__print_4_p_0((MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), HeadVar__1_1, ((MR_Box) (TF_44)));
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word Xs_45 = ((MR_Word) ((MR_hl_field(1, AtomicConstraint_23, 0))));

                  mercury__io__write_string_4_p_0(HeadVar__1_1, (MR_String) "equivalent(");
                  check_hlds__abstract_mode_constraints__pretty_print_mc_vars_5_p_0(HeadVar__1_1, HeadVar__2_2, Xs_45);
                  mercury__io__write_string_4_p_0(HeadVar__1_1, (MR_String) ")");
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word Y_46 = ((MR_Word) ((MR_hl_field(2, AtomicConstraint_23, 1))));
                  MR_Word X_70 = ((MR_Word) ((MR_hl_field(2, AtomicConstraint_23, 0))));
                  MR_String VarName_80;
                  MR_String VarName_82;

                  mercury__varset__lookup_name_3_p_0((MR_Word) (&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0), HeadVar__2_2, X_70, &VarName_80);
                  mercury__io__write_string_4_p_0(HeadVar__1_1, VarName_80);
                  mercury__io__write_string_4_p_0(HeadVar__1_1, (MR_String) " -> ");
                  mercury__varset__lookup_name_3_p_0((MR_Word) (&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0), HeadVar__2_2, Y_46, &VarName_82);
                  mercury__io__write_string_4_p_0(HeadVar__1_1, VarName_82);
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, AtomicConstraint_23, 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word X_71 = ((MR_Word) ((MR_hl_field(3, AtomicConstraint_23, 1))));
                      MR_Word Xs_72 = ((MR_Word) ((MR_hl_field(3, AtomicConstraint_23, 2))));
                      MR_String VarName_78;

                      mercury__varset__lookup_name_3_p_0((MR_Word) (&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0), HeadVar__2_2, X_71, &VarName_78);
                      mercury__io__write_string_4_p_0(HeadVar__1_1, VarName_78);
                      mercury__io__write_string_4_p_0(HeadVar__1_1, (MR_String) " <-> disj(");
                      check_hlds__abstract_mode_constraints__pretty_print_mc_vars_5_p_0(HeadVar__1_1, HeadVar__2_2, Xs_72);
                      mercury__io__write_string_4_p_0(HeadVar__1_1, (MR_String) ")");
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word Xs_73 = ((MR_Word) ((MR_hl_field(3, AtomicConstraint_23, 1))));

                      mercury__io__write_string_4_p_0(HeadVar__1_1, (MR_String) "at_most_one(");
                      check_hlds__abstract_mode_constraints__pretty_print_mc_vars_5_p_0(HeadVar__1_1, HeadVar__2_2, Xs_73);
                      mercury__io__write_string_4_p_0(HeadVar__1_1, (MR_String) ")");
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word Xs_74 = ((MR_Word) ((MR_hl_field(3, AtomicConstraint_23, 1))));

                      mercury__io__write_string_4_p_0(HeadVar__1_1, (MR_String) "exactly_one(");
                      check_hlds__abstract_mode_constraints__pretty_print_mc_vars_5_p_0(HeadVar__1_1, HeadVar__2_2, Xs_74);
                      mercury__io__write_string_4_p_0(HeadVar__1_1, (MR_String) ")");
                    }
                    break;
                }
                break;
            }
            mercury__io__nl_3_p_0(HeadVar__1_1);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Constraints_22 = ((MR_Word) ((MR_hl_field(1, Constraint_16, 0))));
            MR_String Var_27;

            mercury__io__write_string_4_p_0(HeadVar__1_1, HeadVar__3_3);
            mercury__io__write_string_4_p_0(HeadVar__1_1, (MR_String) "disj(\n");
            Var_27 = mercury__string__f_43_43_2_f_0((MR_String) "\t", HeadVar__3_3);
            check_hlds__abstract_mode_constraints__pretty_print_constraints_indent_6_p_0(HeadVar__1_1, HeadVar__2_2, Var_27, Constraints_22);
            mercury__io__write_string_4_p_0(HeadVar__1_1, HeadVar__3_3);
            mercury__io__write_string_4_p_0(HeadVar__1_1, (MR_String) ") end disj\n");
          }
          break;
        case (MR_Integer) 2:
          {
            MR_String Var_35;
            MR_Word Constraints_42 = ((MR_Word) ((MR_hl_field(2, Constraint_16, 0))));

            mercury__io__write_string_4_p_0(HeadVar__1_1, HeadVar__3_3);
            mercury__io__write_string_4_p_0(HeadVar__1_1, (MR_String) "conj(\n");
            Var_35 = mercury__string__f_43_43_2_f_0((MR_String) "\t", HeadVar__3_3);
            check_hlds__abstract_mode_constraints__pretty_print_constraints_indent_6_p_0(HeadVar__1_1, HeadVar__2_2, Var_35, Constraints_42);
            mercury__io__write_string_4_p_0(HeadVar__1_1, HeadVar__3_3);
            mercury__io__write_string_4_p_0(HeadVar__1_1, (MR_String) ") end conj\n");
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__4_4 = Constraints_17;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__abstract_mode_constraints__pretty_print_mc_vars_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word Var_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
      MR_Word Vars_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_String VarName_23;

      mercury__varset__lookup_name_3_p_0((MR_Word) (&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0), HeadVar__2_2, Var_13, &VarName_23);
      mercury__io__write_string_4_p_0(HeadVar__1_1, VarName_23);
      if (!((Vars_14 == (MR_Word) ((MR_Unsigned) 0U))))
      {
        MR_Word Var_31;
        MR_Word Vars_32;
        MR_String VarName_40;

        mercury__io__write_string_4_p_0(HeadVar__1_1, (MR_String) ", ");
        Var_31 = ((MR_Word) ((MR_hl_field(1, Vars_14, 0))));
        Vars_32 = ((MR_Word) ((MR_hl_field(1, Vars_14, 1))));
        mercury__varset__lookup_name_3_p_0((MR_Word) (&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0), HeadVar__2_2, Var_31, &VarName_40);
        mercury__io__write_string_4_p_0(HeadVar__1_1, VarName_40);
        if (!((Vars_32 == (MR_Word) ((MR_Unsigned) 0U))))
        {
          MR_Word next_value_of_HeadVar__3_3;

          mercury__io__write_string_4_p_0(HeadVar__1_1, (MR_String) ", ");
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__3_3 = Vars_32;
          HeadVar__3_3 = next_value_of_HeadVar__3_3;
          continue;
        }
      }
    }
    break;
  }
}

static void MR_CALL 
check_hlds__abstract_mode_constraints__dump_constraints_and_annotations_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  check_hlds__abstract_mode_constraints__dump_ann_constraint_7_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Unsigned) ((MR_hl_field(0, closure, 6)))), ((MR_Word) (wrapper_arg_1)));
}

void MR_CALL 
check_hlds__abstract_mode_constraints__dump_constraints_and_annotations_6_p_0(
  MR_Word OutputStream_7,
  MR_Word Globals_8,
  MR_Word VarSet_9,
  MR_Word AnnConstraints_10)
{
  MR_Word Var_15;
  MR_Box conv0_STATE_VARIABLE_IO_14;

  {
    Var_15 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_15, 0) = ((MR_Box) (&check_hlds__abstract_mode_constraints_scalar_common_4[0]));
    MR_hl_field(0, Var_15, 1) = ((MR_Box) (check_hlds__abstract_mode_constraints__dump_constraints_and_annotations_6_p_0_1));
    MR_hl_field(0, Var_15, 2) = ((MR_Box) ((MR_Integer) 4));
    MR_hl_field(0, Var_15, 3) = ((MR_Box) (OutputStream_7));
    MR_hl_field(0, Var_15, 4) = ((MR_Box) (Globals_8));
    MR_hl_field(0, Var_15, 5) = ((MR_Box) (VarSet_9));
    MR_hl_field(0, Var_15, 6) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_ann_constraint_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_15, AnnConstraints_10, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_14);
}

void MR_CALL 
check_hlds__abstract_mode_constraints__xor_6_p_0(
  MR_Word MCVarSet_7,
  MR_Word Context_8,
  MR_Word A_9,
  MR_Word B_10,
  MR_Word STATE_VARIABLE_Constraints_0_12,
  MR_Word * STATE_VARIABLE_Constraints_13)
{
  check_hlds__abstract_mode_constraints__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_120_111_114_95_95_91_49_93_95_48_6_p_0(Context_8, A_9, B_10, STATE_VARIABLE_Constraints_0_12, STATE_VARIABLE_Constraints_13);
}

void MR_CALL 
check_hlds__abstract_mode_constraints__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_120_111_114_95_95_91_49_93_95_48_6_p_0(
  MR_Word Context_8,
  MR_Word A_9,
  MR_Word B_10,
  MR_Word STATE_VARIABLE_Constraints_0_12,
  MR_Word * STATE_VARIABLE_Constraints_13)
{
  MR_Word Var_14;
  MR_Word Var_16;
  MR_Word Var_17;
  MR_Word Var_18;
  MR_Word AllProcsConstraints_21;
  MR_Word ConstraintAnnotation_22;
  MR_Word AnnotatedConstraint_23;
  MR_Word Var_29;
  MR_Word Var_30;
  MR_Word Var_31;

  {
    Var_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_18, 0) = ((MR_Box) (B_10));
    MR_hl_field(1, Var_18, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_17, 0) = ((MR_Box) (A_9));
    MR_hl_field(1, Var_17, 1) = ((MR_Box) (Var_18));
  }
  {
    Var_16 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_16, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, Var_16, 1) = ((MR_Box) (Var_17));
  }
  {
    Var_14 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_14, 0) = ((MR_Box) (Var_16));
  }
  Var_30 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Constraints_0_12, 0))));
  AllProcsConstraints_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Constraints_0_12, 1))));
  Var_31 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Constraints_0_12, 2))));
  ConstraintAnnotation_22 = (MR_Word) (Context_8);
  {
    AnnotatedConstraint_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, AnnotatedConstraint_23, 0) = ((MR_Box) (Var_14));
    MR_hl_field(0, AnnotatedConstraint_23, 1) = ((MR_Box) (ConstraintAnnotation_22));
  }
  {
    Var_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_29, 0) = ((MR_Box) (AnnotatedConstraint_23));
    MR_hl_field(1, Var_29, 1) = ((MR_Box) (AllProcsConstraints_21));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Constraints_13 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_30));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_29));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_31));
  }
}

void MR_CALL 
check_hlds__abstract_mode_constraints__exactly_one_5_p_0(
  MR_Word MCVarSet_6,
  MR_Word Context_7,
  MR_Word MCVars_8,
  MR_Word STATE_VARIABLE_Constraints_0_10,
  MR_Word * STATE_VARIABLE_Constraints_11)
{
  check_hlds__abstract_mode_constraints__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_97_99_116_108_121_95_111_110_101_95_95_91_49_93_95_48_5_p_0(Context_7, MCVars_8, STATE_VARIABLE_Constraints_0_10, STATE_VARIABLE_Constraints_11);
}

void MR_CALL 
check_hlds__abstract_mode_constraints__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_97_99_116_108_121_95_111_110_101_95_95_91_49_93_95_48_5_p_0(
  MR_Word Context_7,
  MR_Word MCVars_8,
  MR_Word STATE_VARIABLE_Constraints_0_10,
  MR_Word * STATE_VARIABLE_Constraints_11)
{
  MR_Word Var_12;
  MR_Word Var_14;
  MR_Word AllProcsConstraints_16;
  MR_Word ConstraintAnnotation_17;
  MR_Word AnnotatedConstraint_18;
  MR_Word Var_24;
  MR_Word Var_25;
  MR_Word Var_26;

  {
    Var_14 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_14, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, Var_14, 1) = ((MR_Box) (MCVars_8));
  }
  {
    Var_12 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_12, 0) = ((MR_Box) (Var_14));
  }
  Var_25 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Constraints_0_10, 0))));
  AllProcsConstraints_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Constraints_0_10, 1))));
  Var_26 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Constraints_0_10, 2))));
  ConstraintAnnotation_17 = (MR_Word) (Context_7);
  {
    AnnotatedConstraint_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, AnnotatedConstraint_18, 0) = ((MR_Box) (Var_12));
    MR_hl_field(0, AnnotatedConstraint_18, 1) = ((MR_Box) (ConstraintAnnotation_17));
  }
  {
    Var_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_24, 0) = ((MR_Box) (AnnotatedConstraint_18));
    MR_hl_field(1, Var_24, 1) = ((MR_Box) (AllProcsConstraints_16));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Constraints_11 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_25));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_24));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_26));
  }
}

void MR_CALL 
check_hlds__abstract_mode_constraints__not_both_6_p_0(
  MR_Word MCVarSet_7,
  MR_Word Context_8,
  MR_Word A_9,
  MR_Word B_10,
  MR_Word STATE_VARIABLE_Constraints_0_12,
  MR_Word * STATE_VARIABLE_Constraints_13)
{
  check_hlds__abstract_mode_constraints__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_111_116_95_98_111_116_104_95_95_91_49_93_95_48_6_p_0(Context_8, A_9, B_10, STATE_VARIABLE_Constraints_0_12, STATE_VARIABLE_Constraints_13);
}

void MR_CALL 
check_hlds__abstract_mode_constraints__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_111_116_95_98_111_116_104_95_95_91_49_93_95_48_6_p_0(
  MR_Word Context_8,
  MR_Word A_9,
  MR_Word B_10,
  MR_Word STATE_VARIABLE_Constraints_0_12,
  MR_Word * STATE_VARIABLE_Constraints_13)
{
  MR_Word Var_14;
  MR_Word Var_16;
  MR_Word Var_17;
  MR_Word Var_18;
  MR_Word AllProcsConstraints_21;
  MR_Word ConstraintAnnotation_22;
  MR_Word AnnotatedConstraint_23;
  MR_Word Var_29;
  MR_Word Var_30;
  MR_Word Var_31;

  {
    Var_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_18, 0) = ((MR_Box) (B_10));
    MR_hl_field(1, Var_18, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_17, 0) = ((MR_Box) (A_9));
    MR_hl_field(1, Var_17, 1) = ((MR_Box) (Var_18));
  }
  {
    Var_16 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_16, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_16, 1) = ((MR_Box) (Var_17));
  }
  {
    Var_14 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_14, 0) = ((MR_Box) (Var_16));
  }
  Var_30 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Constraints_0_12, 0))));
  AllProcsConstraints_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Constraints_0_12, 1))));
  Var_31 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Constraints_0_12, 2))));
  ConstraintAnnotation_22 = (MR_Word) (Context_8);
  {
    AnnotatedConstraint_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, AnnotatedConstraint_23, 0) = ((MR_Box) (Var_14));
    MR_hl_field(0, AnnotatedConstraint_23, 1) = ((MR_Box) (ConstraintAnnotation_22));
  }
  {
    Var_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_29, 0) = ((MR_Box) (AnnotatedConstraint_23));
    MR_hl_field(1, Var_29, 1) = ((MR_Box) (AllProcsConstraints_21));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Constraints_13 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_30));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_29));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_31));
  }
}

void MR_CALL 
check_hlds__abstract_mode_constraints__at_most_one_5_p_0(
  MR_Word MCVarSet_6,
  MR_Word Context_7,
  MR_Word MCVars_8,
  MR_Word STATE_VARIABLE_Constraints_0_10,
  MR_Word * STATE_VARIABLE_Constraints_11)
{
  check_hlds__abstract_mode_constraints__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_95_109_111_115_116_95_111_110_101_95_95_91_49_93_95_48_5_p_0(Context_7, MCVars_8, STATE_VARIABLE_Constraints_0_10, STATE_VARIABLE_Constraints_11);
}

void MR_CALL 
check_hlds__abstract_mode_constraints__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_95_109_111_115_116_95_111_110_101_95_95_91_49_93_95_48_5_p_0(
  MR_Word Context_7,
  MR_Word MCVars_8,
  MR_Word STATE_VARIABLE_Constraints_0_10,
  MR_Word * STATE_VARIABLE_Constraints_11)
{
  MR_Word Var_12;
  MR_Word Var_14;
  MR_Word AllProcsConstraints_16;
  MR_Word ConstraintAnnotation_17;
  MR_Word AnnotatedConstraint_18;
  MR_Word Var_24;
  MR_Word Var_25;
  MR_Word Var_26;

  {
    Var_14 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_14, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_14, 1) = ((MR_Box) (MCVars_8));
  }
  {
    Var_12 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_12, 0) = ((MR_Box) (Var_14));
  }
  Var_25 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Constraints_0_10, 0))));
  AllProcsConstraints_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Constraints_0_10, 1))));
  Var_26 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Constraints_0_10, 2))));
  ConstraintAnnotation_17 = (MR_Word) (Context_7);
  {
    AnnotatedConstraint_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, AnnotatedConstraint_18, 0) = ((MR_Box) (Var_12));
    MR_hl_field(0, AnnotatedConstraint_18, 1) = ((MR_Box) (ConstraintAnnotation_17));
  }
  {
    Var_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_24, 0) = ((MR_Box) (AnnotatedConstraint_18));
    MR_hl_field(1, Var_24, 1) = ((MR_Box) (AllProcsConstraints_16));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Constraints_11 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_25));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_24));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_26));
  }
}

void MR_CALL 
check_hlds__abstract_mode_constraints__equiv_disj_6_p_0(
  MR_Word MCVarSet_7,
  MR_Word Context_8,
  MR_Word X_9,
  MR_Word Ys_10,
  MR_Word STATE_VARIABLE_Constraints_0_12,
  MR_Word * STATE_VARIABLE_Constraints_13)
{
  check_hlds__abstract_mode_constraints__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_113_117_105_118_95_100_105_115_106_95_95_91_49_93_95_48_6_p_0(Context_8, X_9, Ys_10, STATE_VARIABLE_Constraints_0_12, STATE_VARIABLE_Constraints_13);
}

void MR_CALL 
check_hlds__abstract_mode_constraints__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_113_117_105_118_95_100_105_115_106_95_95_91_49_93_95_48_6_p_0(
  MR_Word Context_8,
  MR_Word X_9,
  MR_Word Ys_10,
  MR_Word STATE_VARIABLE_Constraints_0_12,
  MR_Word * STATE_VARIABLE_Constraints_13)
{
  MR_Word Var_14;
  MR_Word Var_16;
  MR_Word AllProcsConstraints_18;
  MR_Word ConstraintAnnotation_19;
  MR_Word AnnotatedConstraint_20;
  MR_Word Var_26;
  MR_Word Var_27;
  MR_Word Var_28;

  {
    Var_16 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_16, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_16, 1) = ((MR_Box) (X_9));
    MR_hl_field(3, Var_16, 2) = ((MR_Box) (Ys_10));
  }
  {
    Var_14 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_14, 0) = ((MR_Box) (Var_16));
  }
  Var_27 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Constraints_0_12, 0))));
  AllProcsConstraints_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Constraints_0_12, 1))));
  Var_28 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Constraints_0_12, 2))));
  ConstraintAnnotation_19 = (MR_Word) (Context_8);
  {
    AnnotatedConstraint_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, AnnotatedConstraint_20, 0) = ((MR_Box) (Var_14));
    MR_hl_field(0, AnnotatedConstraint_20, 1) = ((MR_Box) (ConstraintAnnotation_19));
  }
  {
    Var_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_26, 0) = ((MR_Box) (AnnotatedConstraint_20));
    MR_hl_field(1, Var_26, 1) = ((MR_Box) (AllProcsConstraints_18));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Constraints_13 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_27));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_26));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_28));
  }
}

void MR_CALL 
check_hlds__abstract_mode_constraints__equivalent_5_p_0(
  MR_Word MCVarSet_6,
  MR_Word Context_7,
  MR_Word MCVars_8,
  MR_Word STATE_VARIABLE_Constraints_0_10,
  MR_Word * STATE_VARIABLE_Constraints_11)
{
  check_hlds__abstract_mode_constraints__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_113_117_105_118_97_108_101_110_116_95_95_91_49_93_95_48_5_p_0(Context_7, MCVars_8, STATE_VARIABLE_Constraints_0_10, STATE_VARIABLE_Constraints_11);
}

void MR_CALL 
check_hlds__abstract_mode_constraints__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_113_117_105_118_97_108_101_110_116_95_95_91_49_93_95_48_5_p_0(
  MR_Word Context_7,
  MR_Word MCVars_8,
  MR_Word STATE_VARIABLE_Constraints_0_10,
  MR_Word * STATE_VARIABLE_Constraints_11)
{
  MR_Word Var_12;
  MR_Word Var_14;
  MR_Word AllProcsConstraints_16;
  MR_Word ConstraintAnnotation_17;
  MR_Word AnnotatedConstraint_18;
  MR_Word Var_24;
  MR_Word Var_25;
  MR_Word Var_26;

  {
    Var_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_14, 0) = ((MR_Box) (MCVars_8));
  }
  {
    Var_12 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_12, 0) = ((MR_Box) (Var_14));
  }
  Var_25 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Constraints_0_10, 0))));
  AllProcsConstraints_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Constraints_0_10, 1))));
  Var_26 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Constraints_0_10, 2))));
  ConstraintAnnotation_17 = (MR_Word) (Context_7);
  {
    AnnotatedConstraint_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, AnnotatedConstraint_18, 0) = ((MR_Box) (Var_12));
    MR_hl_field(0, AnnotatedConstraint_18, 1) = ((MR_Box) (ConstraintAnnotation_17));
  }
  {
    Var_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_24, 0) = ((MR_Box) (AnnotatedConstraint_18));
    MR_hl_field(1, Var_24, 1) = ((MR_Box) (AllProcsConstraints_16));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Constraints_11 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_25));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_24));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_26));
  }
}

void MR_CALL 
check_hlds__abstract_mode_constraints__equiv_no_5_p_0(
  MR_Word MCVarSet_6,
  MR_Word Context_7,
  MR_Word MCVar_8,
  MR_Word STATE_VARIABLE_Constraints_0_10,
  MR_Word * STATE_VARIABLE_Constraints_11)
{
  check_hlds__abstract_mode_constraints__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_113_117_105_118_95_110_111_95_95_91_49_93_95_48_5_p_0(Context_7, MCVar_8, STATE_VARIABLE_Constraints_0_10, STATE_VARIABLE_Constraints_11);
}

void MR_CALL 
check_hlds__abstract_mode_constraints__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_113_117_105_118_95_110_111_95_95_91_49_93_95_48_5_p_0(
  MR_Word Context_7,
  MR_Word MCVar_8,
  MR_Word STATE_VARIABLE_Constraints_0_10,
  MR_Word * STATE_VARIABLE_Constraints_11)
{
  MR_Word Var_12;
  MR_Word Var_14;
  MR_Word AllProcsConstraints_17;
  MR_Word ConstraintAnnotation_18;
  MR_Word AnnotatedConstraint_19;
  MR_Word Var_25;
  MR_Word Var_26;
  MR_Word Var_27;

  {
    Var_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_14, 0) = ((MR_Box) (MCVar_8));
    MR_hl_field(0, Var_14, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
  }
  {
    Var_12 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_12, 0) = ((MR_Box) (Var_14));
  }
  Var_26 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Constraints_0_10, 0))));
  AllProcsConstraints_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Constraints_0_10, 1))));
  Var_27 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Constraints_0_10, 2))));
  ConstraintAnnotation_18 = (MR_Word) (Context_7);
  {
    AnnotatedConstraint_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, AnnotatedConstraint_19, 0) = ((MR_Box) (Var_12));
    MR_hl_field(0, AnnotatedConstraint_19, 1) = ((MR_Box) (ConstraintAnnotation_18));
  }
  {
    Var_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_25, 0) = ((MR_Box) (AnnotatedConstraint_19));
    MR_hl_field(1, Var_25, 1) = ((MR_Box) (AllProcsConstraints_17));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Constraints_11 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_26));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_25));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_27));
  }
}

MR_Word MR_CALL 
check_hlds__abstract_mode_constraints__proc_specific_annotated_constraints_2_f_0(
  MR_Integer ProcId_4,
  MR_Word PredPCConstraints_5)
{
  MR_Word HeadVar__3_3;
  MR_Word Var_6 = ((MR_Word) ((MR_hl_field(0, PredPCConstraints_5, 0))));

  HeadVar__3_3 = mercury__multi_map__lookup_2_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_ann_constraint_0), Var_6, ((MR_Box) (ProcId_4)));
  return HeadVar__3_3;
}

MR_Word MR_CALL 
check_hlds__abstract_mode_constraints__all_annotated_constraints_for_proc_2_f_0(
  MR_Integer ProcId_4,
  MR_Word PredPCConstraints_5)
{
  MR_Word AnnotatedConstraints_6;
  MR_Word ThisProcConstraints_7;
  MR_Word AllProcConstraints_8;
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, PredPCConstraints_5, 0))));

  mercury__multi_map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_ann_constraint_0), Var_9, ((MR_Box) (ProcId_4)), &ThisProcConstraints_7);
  AllProcConstraints_8 = ((MR_Word) ((MR_hl_field(0, PredPCConstraints_5, 1))));
  AnnotatedConstraints_6 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_ann_constraint_0), ThisProcConstraints_7, AllProcConstraints_8);
  return AnnotatedConstraints_6;
}

MR_Word MR_CALL 
check_hlds__abstract_mode_constraints__allproc_annotated_constraints_1_f_0(
  MR_Word PredPCConstraints_3)
{
  MR_Word AnnotatedConstraints_4 = ((MR_Word) ((MR_hl_field(0, PredPCConstraints_3, 1))));

  return AnnotatedConstraints_4;
}

static MR_Box MR_CALL 
check_hlds__abstract_mode_constraints__all_constraints_for_proc_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_Constraint_3;

  conv0_Constraint_3 = check_hlds__abstract_mode_constraints__project_mc_constraint_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_Constraint_3));
  return wrapper_arg_2;
}

MR_Word MR_CALL 
check_hlds__abstract_mode_constraints__all_constraints_for_proc_2_f_0(
  MR_Integer ProcId_4,
  MR_Word PredPCConstraints_5)
{
  MR_Word Constraints_6;
  MR_Word AnnotatedConstraints_7;
  MR_Word ThisProcConstraints_11;
  MR_Word AllProcConstraints_12;
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, PredPCConstraints_5, 0))));

  mercury__multi_map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_ann_constraint_0), Var_13, ((MR_Box) (ProcId_4)), &ThisProcConstraints_11);
  AllProcConstraints_12 = ((MR_Word) ((MR_hl_field(0, PredPCConstraints_5, 1))));
  AnnotatedConstraints_7 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_ann_constraint_0), ThisProcConstraints_11, AllProcConstraints_12);
  Constraints_6 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_ann_constraint_0), (MR_Word) (&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_constraint_0), (MR_Word) (&check_hlds__abstract_mode_constraints_scalar_common_2[3]), AnnotatedConstraints_7);
  return Constraints_6;
}

static MR_Box MR_CALL 
check_hlds__abstract_mode_constraints__allproc_constraints_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_Constraint_3;

  conv0_Constraint_3 = check_hlds__abstract_mode_constraints__project_mc_constraint_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_Constraint_3));
  return wrapper_arg_2;
}

MR_Word MR_CALL 
check_hlds__abstract_mode_constraints__allproc_constraints_1_f_0(
  MR_Word PredPCConstraints_3)
{
  MR_Word Constraints_4;
  MR_Word AnnotatedConstraints_5 = ((MR_Word) ((MR_hl_field(0, PredPCConstraints_3, 1))));

  Constraints_4 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_ann_constraint_0), (MR_Word) (&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_constraint_0), (MR_Word) (&check_hlds__abstract_mode_constraints_scalar_common_2[2]), AnnotatedConstraints_5);
  return Constraints_4;
}

void MR_CALL 
check_hlds__abstract_mode_constraints__add_mode_infer_callee_3_p_0(
  MR_Word PredId_4,
  MR_Word STATE_VARIABLE_PredPCConstraints_0_7,
  MR_Word * STATE_VARIABLE_PredPCConstraints_8)
{
  MR_Word ModeInferCallees_6 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PredPCConstraints_0_7, 2))));
  MR_Word Var_10;
  MR_Word Var_13;
  MR_Word Var_14;

  Var_10 = mercury__set__insert_2_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), ModeInferCallees_6, ((MR_Box) (PredId_4)));
  Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PredPCConstraints_0_7, 0))));
  Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PredPCConstraints_0_7, 1))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_PredPCConstraints_8 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_10));
  }
}

void MR_CALL 
check_hlds__abstract_mode_constraints__add_proc_specific_constraint_6_p_0(
  MR_Word MCVarSet_7,
  MR_Word Context_8,
  MR_Integer ProcId_9,
  MR_Word Constraint_10,
  MR_Word STATE_VARIABLE_PredPCConstraints_0_17,
  MR_Word * STATE_VARIABLE_PredPCConstraints_18)
{
  check_hlds__abstract_mode_constraints__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_112_114_111_99_95_115_112_101_99_105_102_105_99_95_99_111_110_115_116_114_97_105_110_116_95_95_91_49_93_95_48_6_p_0(Context_8, ProcId_9, Constraint_10, STATE_VARIABLE_PredPCConstraints_0_17, STATE_VARIABLE_PredPCConstraints_18);
}

void MR_CALL 
check_hlds__abstract_mode_constraints__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_112_114_111_99_95_115_112_101_99_105_102_105_99_95_99_111_110_115_116_114_97_105_110_116_95_95_91_49_93_95_48_6_p_0(
  MR_Word Context_8,
  MR_Integer ProcId_9,
  MR_Word Constraint_10,
  MR_Word STATE_VARIABLE_PredPCConstraints_0_17,
  MR_Word * STATE_VARIABLE_PredPCConstraints_18)
{
  MR_Word ProcConstraints_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PredPCConstraints_0_17, 0))));
  MR_Word ConstraintAnnotation_15 = (MR_Word) (Context_8);
  MR_Word AnnotatedConstraint_16;
  MR_Word Var_29;
  MR_Word Var_33;
  MR_Word Var_34;

  {
    AnnotatedConstraint_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, AnnotatedConstraint_16, 0) = ((MR_Box) (Constraint_10));
    MR_hl_field(0, AnnotatedConstraint_16, 1) = ((MR_Box) (ConstraintAnnotation_15));
  }
  Var_29 = mercury__multi_map__add_3_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_ann_constraint_0), ProcConstraints_14, ((MR_Box) (ProcId_9)), ((MR_Box) (AnnotatedConstraint_16)));
  Var_33 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PredPCConstraints_0_17, 1))));
  Var_34 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PredPCConstraints_0_17, 2))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_PredPCConstraints_18 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_29));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_33));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_34));
  }
}

void MR_CALL 
check_hlds__abstract_mode_constraints__add_constraint_5_p_0(
  MR_Word MCVarSet_6,
  MR_Word Context_7,
  MR_Word Constraint_8,
  MR_Word STATE_VARIABLE_PredPCConstraints_0_15,
  MR_Word * STATE_VARIABLE_PredPCConstraints_16)
{
  check_hlds__abstract_mode_constraints__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_99_111_110_115_116_114_97_105_110_116_95_95_91_49_93_95_48_5_p_0(Context_7, Constraint_8, STATE_VARIABLE_PredPCConstraints_0_15, STATE_VARIABLE_PredPCConstraints_16);
}

void MR_CALL 
check_hlds__abstract_mode_constraints__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_99_111_110_115_116_114_97_105_110_116_95_95_91_49_93_95_48_5_p_0(
  MR_Word Context_7,
  MR_Word Constraint_8,
  MR_Word STATE_VARIABLE_PredPCConstraints_0_15,
  MR_Word * STATE_VARIABLE_PredPCConstraints_16)
{
  MR_Word AllProcsConstraints_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PredPCConstraints_0_15, 1))));
  MR_Word ConstraintAnnotation_13 = (MR_Word) (Context_7);
  MR_Word AnnotatedConstraint_14;
  MR_Word Var_23;
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PredPCConstraints_0_15, 0))));
  MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PredPCConstraints_0_15, 2))));

  {
    AnnotatedConstraint_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, AnnotatedConstraint_14, 0) = ((MR_Box) (Constraint_8));
    MR_hl_field(0, AnnotatedConstraint_14, 1) = ((MR_Box) (ConstraintAnnotation_13));
  }
  {
    Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_23, 0) = ((MR_Box) (AnnotatedConstraint_14));
    MR_hl_field(1, Var_23, 1) = ((MR_Box) (AllProcsConstraints_12));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_PredPCConstraints_16 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_24));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_23));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_25));
  }
}

MR_Word MR_CALL 
check_hlds__abstract_mode_constraints__init_pred_p_c_constraints_0_f_0(void)
{
  MR_Word HeadVar__1_1;
  MR_Word Var_2;
  MR_Word Var_4;

  Var_2 = mercury__multi_map__init_0_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_ann_constraint_0));
  Var_4 = mercury__set__init_0_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0));
  {
    HeadVar__1_1 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__1_1, 0) = ((MR_Box) (Var_2));
    MR_hl_field(0, HeadVar__1_1, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, HeadVar__1_1, 2) = ((MR_Box) (Var_4));
  }
  return HeadVar__1_1;
}

MR_Word MR_CALL 
check_hlds__abstract_mode_constraints__project_mc_annotation_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Word Annotation_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));

  return Annotation_4;
}

MR_Word MR_CALL 
check_hlds__abstract_mode_constraints__project_mc_constraint_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Word Constraint_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));

  return Constraint_3;
}

static MR_bool MR_CALL 
check_hlds__abstract_mode_constraints____Unify____mc_ann_constraint_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__abstract_mode_constraints____Unify____mc_ann_constraint_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__abstract_mode_constraints____Compare____mc_ann_constraint_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__abstract_mode_constraints____Compare____mc_ann_constraint_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__abstract_mode_constraints____Unify____mc_annotation_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__abstract_mode_constraints____Unify____mc_annotation_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__abstract_mode_constraints____Compare____mc_annotation_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__abstract_mode_constraints____Compare____mc_annotation_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__abstract_mode_constraints____Unify____mc_bindings_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__abstract_mode_constraints____Unify____mc_bindings_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__abstract_mode_constraints____Compare____mc_bindings_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__abstract_mode_constraints____Compare____mc_bindings_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__abstract_mode_constraints____Unify____mc_constraint_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__abstract_mode_constraints____Unify____mc_constraint_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__abstract_mode_constraints____Compare____mc_constraint_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__abstract_mode_constraints____Compare____mc_constraint_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__abstract_mode_constraints____Unify____mc_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__abstract_mode_constraints____Unify____mc_type_0_0();
  return succeeded;
}

static void MR_CALL 
check_hlds__abstract_mode_constraints____Compare____mc_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__abstract_mode_constraints____Compare____mc_type_0_0(&conv0_HeadVar__1_1);
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__abstract_mode_constraints____Unify____mc_var_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__abstract_mode_constraints____Unify____mc_var_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__abstract_mode_constraints____Compare____mc_var_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__abstract_mode_constraints____Compare____mc_var_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__abstract_mode_constraints____Unify____mc_varset_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__abstract_mode_constraints____Unify____mc_varset_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__abstract_mode_constraints____Compare____mc_varset_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__abstract_mode_constraints____Compare____mc_varset_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__abstract_mode_constraints____Unify____pred_p_c_constraints_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__abstract_mode_constraints____Unify____pred_p_c_constraints_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__abstract_mode_constraints____Compare____pred_p_c_constraints_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__abstract_mode_constraints____Compare____pred_p_c_constraints_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__abstract_mode_constraints____Unify____var_constraint_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = check_hlds__abstract_mode_constraints____Unify____var_constraint_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
check_hlds__abstract_mode_constraints____Compare____var_constraint_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__abstract_mode_constraints____Compare____var_constraint_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__abstract_mode_constraints____Unify____var_constraint_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__abstract_mode_constraints____Unify____var_constraint_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__abstract_mode_constraints____Compare____var_constraint_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__abstract_mode_constraints____Compare____var_constraint_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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

// :- end_module check_hlds.abstract_mode_constraints.
