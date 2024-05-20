/*
** Automatically generated from `hlds_out_typeclass_table.m'
** by the Mercury compiler,
** version rotd-2024-05-20
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


// :- module hlds.hlds_out.hlds_out_typeclass_table.
// :- implementation.

/*
INIT mercury__hlds__hlds_out__hlds_out_typeclass_table__init
ENDINIT
*/

#include "hlds.hlds_out.hlds_out_typeclass_table.mih"


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
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
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
#include "hlds.status.mih"
#include "libs.globals.mih"
#include "libs.indent.mih"
#include "libs.polyhedron.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.canonicalize_interface.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_item.mih"
#include "parse_tree.parse_tree_out_sym_name.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.parse_tree_out_type.mih"
#include "parse_tree.parse_tree_output.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
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




static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_typeclass_table__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_hlds__hlds_class__type_ctor_info_hlds_class_defn_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_out__hlds_out_typeclass_table__list__ti_list_1hlds__hlds_class__type_ctor_info_hlds_instance_defn_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_typeclass_table__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_list__ti_list_1hlds__hlds_class__type_ctor_info_hlds_instance_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_typeclass_table__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static void MR_CALL 
hlds__hlds_out__hlds_out_typeclass_table__format_instance_defn_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_typeclass_table__format_instance_defn_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_typeclass_table__format_instance_defn_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__hlds_out__hlds_out_typeclass_table__format_instance_defn_4_p_0(
  MR_Word Info_5,
  MR_Word InstanceDefn_6,
  MR_Word STATE_VARIABLE_State_0_32,
  MR_Word * STATE_VARIABLE_State_33);

static void MR_CALL 
hlds__hlds_out__hlds_out_typeclass_table__format_instance_methods_5_p_0(
  MR_String IndentStr_1,
  MR_Word HeadVar__2_2,
  MR_Integer CurMethodNum_3,
  MR_Word STATE_VARIABLE_State_0_4,
  MR_Word * STATE_VARIABLE_State_5);

static void MR_CALL 
hlds__hlds_out__hlds_out_typeclass_table__format_instance_defns_for_class_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_typeclass_table__format_instance_defns_for_class_4_p_0(
  MR_Word Info_5,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_State_0_9,
  MR_Word * STATE_VARIABLE_State_10);

static void MR_CALL 
hlds__hlds_out__hlds_out_typeclass_table__format_method_info_4_p_0(
  MR_String IndentStr_5,
  MR_Word MethodInfo_6,
  MR_Word STATE_VARIABLE_State_0_17,
  MR_Word * STATE_VARIABLE_State_18);

static void MR_CALL 
hlds__hlds_out__hlds_out_typeclass_table__format_constraint_6_p_0(
  MR_String IndentStr_7,
  MR_Word TVarSet_8,
  MR_Word VarNamePrint_9,
  MR_Word Constraint_10,
  MR_Word STATE_VARIABLE_State_0_13,
  MR_Word * STATE_VARIABLE_State_14);

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_typeclass_table__format_fundep_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_typeclass_table__format_fundep_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__hlds_out__hlds_out_typeclass_table__format_fundep_4_p_0(
  MR_String IndentStr_5,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_State_0_15,
  MR_Word * STATE_VARIABLE_State_16);

static void MR_CALL 
hlds__hlds_out__hlds_out_typeclass_table__format_class_defn_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_typeclass_table__format_class_defn_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_typeclass_table__format_class_defn_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_typeclass_table__format_class_defn_4_p_0(
  MR_Word Info_5,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_State_0_23,
  MR_Word * STATE_VARIABLE_State_24);

static void MR_CALL 
hlds__hlds_out__hlds_out_typeclass_table__format_instances_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_typeclass_table__format_classes_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);


static /* final */ const MR_Box hlds__hlds_out__hlds_out_typeclass_table_scalar_common_1[5][3];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_typeclass_table_scalar_common_2[1][2];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_typeclass_table_scalar_common_3[4][4];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_typeclass_table_scalar_common_4[2][5];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_typeclass_table_scalar_common_5[1][1];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_typeclass_table_scalar_common_6[7][7];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_typeclass_table_scalar_common_7[1][9];




static /* final */ const MR_Box hlds__hlds_out__hlds_out_typeclass_table_scalar_common_1[5][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_typeclass_table_scalar_common_2[0]))
  },
  /* row   2 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__string__builder__handle__arity0__string__builder__state__arity0__)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_handle_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_typeclass_table_scalar_common_4[1])),
    ((MR_Box) (hlds__hlds_out__hlds_out_typeclass_table__format_fundep_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_typeclass_table_scalar_common_4[1])),
    ((MR_Box) (hlds__hlds_out__hlds_out_typeclass_table__format_fundep_4_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_typeclass_table_scalar_common_2[1][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_typeclass_table_scalar_common_3[4][4] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__string__builder__handle__arity0__string__builder__state__arity0__)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_typeclass_table_scalar_common_1[2])),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_handle_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    ((MR_Box) (base_typeclass_info_parse_tree__parse_tree_output__pt_output__arity2__string__builder__handle__arity0__string__builder__state__arity0__)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_typeclass_table_scalar_common_4[0])),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_handle_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_typeclass_table_scalar_common_6[2])),
    ((MR_Box) (hlds__hlds_out__hlds_out_typeclass_table__format_class_defn_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) ""))
  },
  /* row   3 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_typeclass_table_scalar_common_6[3])),
    ((MR_Box) (hlds__hlds_out__hlds_out_typeclass_table__format_class_defn_4_p_0_3)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) ""))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_typeclass_table_scalar_common_4[2][5] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__string__builder__handle__arity0__string__arity0__string__builder__state__arity0__)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_typeclass_table_scalar_common_3[0])),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_handle_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_typeclass_table_scalar_common_5[1][1] = {
  /* row   0 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_typeclass_table_scalar_common_6[7][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__type_ctor_info_hlds_out_info_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_typeclass_table__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_hlds__hlds_class__type_ctor_info_hlds_class_defn_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__type_ctor_info_hlds_out_info_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_typeclass_table__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_list__ti_list_1hlds__hlds_class__type_ctor_info_hlds_instance_defn_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_fundep_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_method_info_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__type_ctor_info_hlds_out_info_0)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0))
  },
  /* row   5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_typeclass_table__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_var_name_print_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_typeclass_table__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_var_name_print_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_typeclass_table_scalar_common_7[1][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_typeclass_table__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_var_name_print_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_typeclass_table__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_hlds__hlds_class__type_ctor_info_hlds_class_defn_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0),
    (MR_PseudoTypeInfo) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0)
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_out__hlds_out_typeclass_table__list__ti_list_1hlds__hlds_class__type_ctor_info_hlds_instance_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_typeclass_table__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_list__ti_list_1hlds__hlds_class__type_ctor_info_hlds_instance_defn_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0),
    (MR_PseudoTypeInfo) (&hlds__hlds_out__hlds_out_typeclass_table__list__ti_list_1hlds__hlds_class__type_ctor_info_hlds_instance_defn_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_typeclass_table__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static void MR_CALL 
hlds__hlds_out__hlds_out_typeclass_table__format_instance_defn_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_State_18;

  hlds__hlds_out__hlds_out_typeclass_table__format_method_info_4_p_0(((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_State_18);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_State_18));
}

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_typeclass_table__format_instance_defn_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv1_HeadVar__4_4;

  conv1_HeadVar__4_4 = parse_tree__parse_tree_out_type__mercury_constraint_to_string_3_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__4_4));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_typeclass_table__format_instance_defn_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_HeadVar__4_4;

  conv0_HeadVar__4_4 = parse_tree__parse_tree_out_type__mercury_type_to_string_3_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__4_4));
  return wrapper_arg_2;
}

static void MR_CALL 
hlds__hlds_out__hlds_out_typeclass_table__format_instance_defn_4_p_0(
  MR_Word Info_5,
  MR_Word InstanceDefn_6,
  MR_Word STATE_VARIABLE_State_0_32,
  MR_Word * STATE_VARIABLE_State_33)
{
  MR_bool succeeded;
  MR_Word InstanceStatus_9 = ((MR_Word) ((MR_hl_field(0, InstanceDefn_6, (MR_Integer) 1))));
  MR_Word TVarSet_10 = ((MR_Word) ((MR_hl_field(0, InstanceDefn_6, (MR_Integer) 2))));
  MR_Word OriginalTypes_11 = ((MR_Word) ((MR_hl_field(0, InstanceDefn_6, (MR_Integer) 3))));
  MR_Word Types_12 = ((MR_Word) ((MR_hl_field(0, InstanceDefn_6, (MR_Integer) 4))));
  MR_Word Constraints_13 = ((MR_Word) ((MR_hl_field(0, InstanceDefn_6, (MR_Integer) 5))));
  MR_Word MaybeSubsumedContext_14 = ((MR_Word) ((MR_hl_field(0, InstanceDefn_6, (MR_Integer) 6))));
  MR_Word ProofMap_15 = ((MR_Word) ((MR_hl_field(0, InstanceDefn_6, (MR_Integer) 7))));
  MR_Word Body_16 = ((MR_Word) ((MR_hl_field(0, InstanceDefn_6, (MR_Integer) 8))));
  MR_Word MaybeMethodInfos_17 = ((MR_Word) ((MR_hl_field(0, InstanceDefn_6, (MR_Integer) 9))));
  MR_Word Context_18 = ((MR_Word) ((MR_hl_field(0, InstanceDefn_6, (MR_Integer) 10))));
  MR_String DumpOptions_19;
  MR_Word VarNamePrint_20;
  MR_String IndentStr_21;
  MR_Word TypeStrs_22;
  MR_Word OriginalTypeStrs_23;
  MR_String TypesStr_24;
  MR_String OriginalTypesStr_25;
  MR_String InstanceStatusStr_26;
  MR_Word ConstraintStrs_28;
  MR_String ConstraintsStr_29;
  MR_Word STATE_VARIABLE_State_35_35;
  MR_Word STATE_VARIABLE_State_38_38;
  MR_Word Var_41;
  MR_Word STATE_VARIABLE_State_47_47;
  MR_Word STATE_VARIABLE_State_54_54;
  MR_Word STATE_VARIABLE_State_61_61;
  MR_Word STATE_VARIABLE_State_68_68;
  MR_Word Var_74;
  MR_Word STATE_VARIABLE_State_78_78;
  MR_Word STATE_VARIABLE_State_85_85;
  MR_Word STATE_VARIABLE_State_101_101;
  MR_Word Var_121;
  MR_Word Var_122;
  MR_Word Var_124;
  MR_Word Var_126;
  MR_Word Var_127;
  MR_Word Var_129;
  MR_Word Var_131;
  MR_Word Var_132;
  MR_Word Var_134;
  MR_Word Var_141;
  MR_Word Var_142;
  MR_Word Var_144;

  mercury__string__builder__append_string_3_p_0((MR_String) "\n", STATE_VARIABLE_State_0_32, &STATE_VARIABLE_State_35_35);
  hlds__hlds_out__hlds_out_util__maybe_format_context_comment_5_p_0((MR_Unsigned) 1U, (MR_String) "", Context_18, STATE_VARIABLE_State_35_35, &STATE_VARIABLE_State_38_38);
  DumpOptions_19 = ((MR_String) ((MR_hl_field(0, Info_5, (MR_Integer) 0))));
  succeeded = mercury__string__contains_char_2_p_0(DumpOptions_19, (MR_Char) 118);
  if (succeeded)
    VarNamePrint_20 = (MR_Integer) 1;
  else
    VarNamePrint_20 = (MR_Integer) 0;
  IndentStr_21 = libs__indent__indent2_string_1_f_0((MR_Unsigned) 1U);
  {
    Var_41 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_41, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_typeclass_table_scalar_common_6[5]));
    MR_hl_field(0, Var_41, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_typeclass_table__format_instance_defn_4_p_0_1));
    MR_hl_field(0, Var_41, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_41, 3) = ((MR_Box) (TVarSet_10));
    MR_hl_field(0, Var_41, 4) = ((MR_Box) (VarNamePrint_20));
  }
  TypeStrs_22 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_41, Types_12);
  OriginalTypeStrs_23 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_41, OriginalTypes_11);
  TypesStr_24 = mercury__string__join_list_2_f_0((MR_String) ", ", TypeStrs_22);
  OriginalTypesStr_25 = mercury__string__join_list_2_f_0((MR_String) ", ", OriginalTypeStrs_23);
  mercury__string__builder__append_string_3_p_0(IndentStr_21, STATE_VARIABLE_State_38_38, &Var_121);
  mercury__string__builder__append_string_3_p_0((MR_String) "% Types: ", Var_121, &Var_122);
  mercury__string__builder__append_string_3_p_0(TypesStr_24, Var_122, &Var_124);
  mercury__string__builder__append_string_3_p_0((MR_String) "\n", Var_124, &STATE_VARIABLE_State_47_47);
  mercury__string__builder__append_string_3_p_0(IndentStr_21, STATE_VARIABLE_State_47_47, &Var_126);
  mercury__string__builder__append_string_3_p_0((MR_String) "% Original types: ", Var_126, &Var_127);
  mercury__string__builder__append_string_3_p_0(OriginalTypesStr_25, Var_127, &Var_129);
  mercury__string__builder__append_string_3_p_0((MR_String) "\n", Var_129, &STATE_VARIABLE_State_54_54);
  InstanceStatusStr_26 = hlds__hlds_out__hlds_out_util__instance_import_status_to_string_1_f_0(InstanceStatus_9);
  mercury__string__builder__append_string_3_p_0(IndentStr_21, STATE_VARIABLE_State_54_54, &Var_131);
  mercury__string__builder__append_string_3_p_0((MR_String) "% Status: ", Var_131, &Var_132);
  mercury__string__builder__append_string_3_p_0(InstanceStatusStr_26, Var_132, &Var_134);
  mercury__string__builder__append_string_3_p_0((MR_String) "\n", Var_134, &STATE_VARIABLE_State_61_61);
  if ((MaybeSubsumedContext_14 == (MR_Word) ((MR_Unsigned) 0U)))
    STATE_VARIABLE_State_68_68 = STATE_VARIABLE_State_61_61;
  else
  {
    MR_Word SubsumedContext_27 = ((MR_Word) ((MR_hl_field(1, MaybeSubsumedContext_14, (MR_Integer) 0))));
    MR_String Var_72;
    MR_Word Var_136;
    MR_Word Var_137;
    MR_Word Var_139;

    Var_72 = hlds__hlds_out__hlds_out_util__context_to_brief_string_1_f_0(SubsumedContext_27);
    mercury__string__builder__append_string_3_p_0(IndentStr_21, STATE_VARIABLE_State_61_61, &Var_136);
    mercury__string__builder__append_string_3_p_0((MR_String) "% Subsumed context: ", Var_136, &Var_137);
    mercury__string__builder__append_string_3_p_0(Var_72, Var_137, &Var_139);
    mercury__string__builder__append_string_3_p_0((MR_String) "\n", Var_139, &STATE_VARIABLE_State_68_68);
  }
  {
    Var_74 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_74, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_typeclass_table_scalar_common_6[6]));
    MR_hl_field(0, Var_74, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_typeclass_table__format_instance_defn_4_p_0_2));
    MR_hl_field(0, Var_74, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_74, 3) = ((MR_Box) (TVarSet_10));
    MR_hl_field(0, Var_74, 4) = ((MR_Box) (VarNamePrint_20));
  }
  ConstraintStrs_28 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_74, Constraints_13);
  ConstraintsStr_29 = mercury__string__join_list_2_f_0((MR_String) ", ", ConstraintStrs_28);
  mercury__string__builder__append_string_3_p_0(IndentStr_21, STATE_VARIABLE_State_68_68, &Var_141);
  mercury__string__builder__append_string_3_p_0((MR_String) "% Constraints: ", Var_141, &Var_142);
  mercury__string__builder__append_string_3_p_0(ConstraintsStr_29, Var_142, &Var_144);
  mercury__string__builder__append_string_3_p_0((MR_String) "\n", Var_144, &STATE_VARIABLE_State_78_78);
  if ((Body_16 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Var_148;

    mercury__string__builder__append_string_3_p_0(IndentStr_21, STATE_VARIABLE_State_78_78, &Var_148);
    mercury__string__builder__append_string_3_p_0((MR_String) "% abstract\n", Var_148, &STATE_VARIABLE_State_85_85);
  }
  else
  {
    MR_Word Methods_30 = ((MR_Word) ((MR_hl_field(1, Body_16, (MR_Integer) 0))));
    MR_Word STATE_VARIABLE_State_90_90;
    MR_Word Var_146;

    mercury__string__builder__append_string_3_p_0(IndentStr_21, STATE_VARIABLE_State_78_78, &Var_146);
    mercury__string__builder__append_string_3_p_0((MR_String) "% Instance methods:\n", Var_146, &STATE_VARIABLE_State_90_90);
    hlds__hlds_out__hlds_out_typeclass_table__format_instance_methods_5_p_0(IndentStr_21, Methods_30, (MR_Integer) 1, STATE_VARIABLE_State_90_90, &STATE_VARIABLE_State_85_85);
  }
  if ((MaybeMethodInfos_17 == (MR_Word) ((MR_Unsigned) 0U)))
    STATE_VARIABLE_State_101_101 = STATE_VARIABLE_State_85_85;
  else
  {
    MR_Word MethodInfos_31 = ((MR_Word) ((MR_hl_field(1, MaybeMethodInfos_17, (MR_Integer) 0))));
    MR_Word STATE_VARIABLE_State_97_97;
    MR_Word Var_100;
    MR_Word Var_150;
    MR_Box conv3_STATE_VARIABLE_State_101_101;

    mercury__string__builder__append_string_3_p_0(IndentStr_21, STATE_VARIABLE_State_85_85, &Var_150);
    mercury__string__builder__append_string_3_p_0((MR_String) "% Procedures:\n", Var_150, &STATE_VARIABLE_State_97_97);
    {
      Var_100 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_100, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_typeclass_table_scalar_common_6[3]));
      MR_hl_field(0, Var_100, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_typeclass_table__format_instance_defn_4_p_0_3));
      MR_hl_field(0, Var_100, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_100, 3) = ((MR_Box) (IndentStr_21));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_method_info_0), (MR_Word) (&mercury__string__builder__string__builder__type_ctor_info_state_0), Var_100, MethodInfos_31, ((MR_Box) (STATE_VARIABLE_State_97_97)), &conv3_STATE_VARIABLE_State_101_101);
    STATE_VARIABLE_State_101_101 = ((MR_Word) (conv3_STATE_VARIABLE_State_101_101));
  }
  hlds__hlds_out__hlds_out_util__format_constraint_proof_map_6_p_0((MR_Unsigned) 1U, VarNamePrint_20, TVarSet_10, ProofMap_15, STATE_VARIABLE_State_101_101, STATE_VARIABLE_State_33);
}

static void MR_CALL 
hlds__hlds_out__hlds_out_typeclass_table__format_instance_methods_5_p_0(
  MR_String IndentStr_1,
  MR_Word HeadVar__2_2,
  MR_Integer CurMethodNum_3,
  MR_Word STATE_VARIABLE_State_0_4,
  MR_Word * STATE_VARIABLE_State_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_State_5 = STATE_VARIABLE_State_0_4;
    else
    {
      MR_Word Method_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Methods_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word MethodName_16 = ((MR_Word) ((MR_hl_field(0, Method_12, (MR_Integer) 0))));
      MR_Word PredOrFunc_19 = ((MR_Unsigned) ((MR_hl_field(0, MethodName_16, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word MethodSymName_20 = ((MR_Word) ((MR_hl_field(0, MethodName_16, (MR_Integer) 1))));
      MR_Word UserArity_21 = ((MR_Word) ((MR_hl_field(0, MethodName_16, (MR_Integer) 2))));
      MR_Integer UserArityInt_22 = (MR_Integer) (UserArity_21);
      MR_Word STATE_VARIABLE_State_27_27;
      MR_String Var_33;
      MR_String Var_36;
      MR_Word STATE_VARIABLE_State_42_42;
      MR_Word STATE_VARIABLE_State_46_46;
      MR_Word STATE_VARIABLE_State_48_48;
      MR_Integer Var_49;
      MR_Word Var_53;
      MR_Word Var_54;
      MR_Word Var_56;
      MR_String Var_57;
      MR_Word Var_64;
      MR_Word Var_66;
      MR_Word Var_67;
      MR_Word Var_69;
      MR_Word Var_70;
      MR_Word Var_72;
      MR_String Var_73;
      MR_Word Var_81;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Integer next_value_of_CurMethodNum_3;
      MR_Word next_value_of_STATE_VARIABLE_State_0_4;

      Var_33 = mdbcomp__prim_data__pred_or_func_to_str_1_f_0(PredOrFunc_19);
      Var_36 = mdbcomp__sym_name__sym_name_to_string_1_f_0(MethodSymName_20);
      mercury__string__builder__append_string_3_p_0(IndentStr_1, STATE_VARIABLE_State_0_4, &Var_53);
      mercury__string__builder__append_string_3_p_0((MR_String) "%   method ", Var_53, &Var_54);
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_typeclass_table_scalar_common_5[0]), CurMethodNum_3, &Var_57);
      mercury__string__builder__append_string_3_p_0(Var_57, Var_54, &Var_56);
      mercury__string__builder__append_string_3_p_0((MR_String) ", ", Var_56, &Var_64);
      mercury__string__builder__append_string_3_p_0(Var_33, Var_64, &Var_66);
      mercury__string__builder__append_string_3_p_0((MR_String) " ", Var_66, &Var_67);
      mercury__string__builder__append_string_3_p_0(Var_36, Var_67, &Var_69);
      mercury__string__builder__append_string_3_p_0((MR_String) "/", Var_69, &Var_70);
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_typeclass_table_scalar_common_5[0]), UserArityInt_22, &Var_73);
      mercury__string__builder__append_string_3_p_0(Var_73, Var_70, &Var_72);
      mercury__string__builder__append_string_3_p_0((MR_String) "\n", Var_72, &STATE_VARIABLE_State_27_27);
      mercury__string__builder__append_string_3_p_0(IndentStr_1, STATE_VARIABLE_State_27_27, &Var_81);
      mercury__string__builder__append_string_3_p_0((MR_String) "%   ", Var_81, &STATE_VARIABLE_State_42_42);
      parse_tree__parse_tree_out_item__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_105_110_115_116_97_110_99_101_95_109_101_116_104_111_100_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0((MR_Word) (&hlds__hlds_out__hlds_out_typeclass_table_scalar_common_3[1]), Method_12, STATE_VARIABLE_State_42_42, &STATE_VARIABLE_State_46_46);
      mercury__string__builder__append_string_3_p_0((MR_String) "\n", STATE_VARIABLE_State_46_46, &STATE_VARIABLE_State_48_48);
      Var_49 = (MR_Integer) ((MR_Unsigned) CurMethodNum_3 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Methods_13;
      next_value_of_CurMethodNum_3 = Var_49;
      next_value_of_STATE_VARIABLE_State_0_4 = STATE_VARIABLE_State_48_48;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      CurMethodNum_3 = next_value_of_CurMethodNum_3;
      STATE_VARIABLE_State_0_4 = next_value_of_STATE_VARIABLE_State_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_typeclass_table__format_instance_defns_for_class_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_State_33;

  hlds__hlds_out__hlds_out_typeclass_table__format_instance_defn_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_State_33);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_State_33));
}

static void MR_CALL 
hlds__hlds_out__hlds_out_typeclass_table__format_instance_defns_for_class_4_p_0(
  MR_Word Info_5,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_State_0_9,
  MR_Word * STATE_VARIABLE_State_10)
{
  MR_Word ClassId_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
  MR_Word InstanceDefns_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
  MR_Word STATE_VARIABLE_State_13_13;
  MR_String Var_15;
  MR_Word Var_17;
  MR_Word Var_23;
  MR_Word Var_25;
  MR_Box conv1_STATE_VARIABLE_State_10;

  Var_15 = parse_tree__parse_tree_out_sym_name__class_id_to_string_1_f_0(ClassId_6);
  mercury__string__builder__append_string_3_p_0((MR_String) "\n% Instances for class ", STATE_VARIABLE_State_0_9, &Var_23);
  mercury__string__builder__append_string_3_p_0(Var_15, Var_23, &Var_25);
  mercury__string__builder__append_string_3_p_0((MR_String) ":\n", Var_25, &STATE_VARIABLE_State_13_13);
  {
    Var_17 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_17, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_typeclass_table_scalar_common_6[4]));
    MR_hl_field(0, Var_17, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_typeclass_table__format_instance_defns_for_class_4_p_0_1));
    MR_hl_field(0, Var_17, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_17, 3) = ((MR_Box) (Info_5));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0), (MR_Word) (&mercury__string__builder__string__builder__type_ctor_info_state_0), Var_17, InstanceDefns_7, ((MR_Box) (STATE_VARIABLE_State_13_13)), &conv1_STATE_VARIABLE_State_10);
  *STATE_VARIABLE_State_10 = ((MR_Word) (conv1_STATE_VARIABLE_State_10));
}

static void MR_CALL 
hlds__hlds_out__hlds_out_typeclass_table__format_method_info_4_p_0(
  MR_String IndentStr_5,
  MR_Word MethodInfo_6,
  MR_Word STATE_VARIABLE_State_0_17,
  MR_Word * STATE_VARIABLE_State_18)
{
  MR_Integer MethodProcNum_8;
  MR_Word PredPfNameArity_9 = ((MR_Word) ((MR_hl_field(0, MethodInfo_6, (MR_Integer) 1))));
  MR_Word OrigPredProcId_10 = ((MR_Word) ((MR_hl_field(0, MethodInfo_6, (MR_Integer) 2))));
  MR_String NameStr_12;
  MR_Word OrigPredId_13;
  MR_Integer OrigProcId_14;
  MR_Integer OrigPredInt_15;
  MR_Integer OrigProcInt_16;
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, MethodInfo_6, (MR_Integer) 0))));
  MR_Word Var_33;
  MR_Word Var_34;
  MR_Word Var_36;
  MR_String Var_37;
  MR_Word Var_45;
  MR_Word Var_47;
  MR_Word Var_48;
  MR_Word Var_50;
  MR_String Var_51;
  MR_Word Var_58;
  MR_Word Var_60;
  MR_String Var_61;

  MethodProcNum_8 = (MR_Integer) (Var_19);
  NameStr_12 = parse_tree__parse_tree_out_sym_name__pf_sym_name_user_arity_to_unquoted_string_1_f_0(PredPfNameArity_9);
  OrigPredId_13 = ((MR_Word) ((MR_hl_field(0, OrigPredProcId_10, (MR_Integer) 0))));
  OrigProcId_14 = ((MR_Integer) ((MR_hl_field(0, OrigPredProcId_10, (MR_Integer) 1))));
  hlds__hlds_pred__pred_id_to_int_2_p_0(OrigPredId_13, &OrigPredInt_15);
  hlds__hlds_pred__proc_id_to_int_2_p_0(OrigProcId_14, &OrigProcInt_16);
  mercury__string__builder__append_string_3_p_0(IndentStr_5, STATE_VARIABLE_State_0_17, &Var_33);
  mercury__string__builder__append_string_3_p_0((MR_String) "%   method ", Var_33, &Var_34);
  mercury__string__format__format_signed_int_component_width_noprec_4_p_0((MR_Word) (&hlds__hlds_out__hlds_out_typeclass_table_scalar_common_5[0]), (MR_Integer) 2, MethodProcNum_8, &Var_37);
  mercury__string__builder__append_string_3_p_0(Var_37, Var_34, &Var_36);
  mercury__string__builder__append_string_3_p_0((MR_String) ": ", Var_36, &Var_45);
  mercury__string__builder__append_string_3_p_0(NameStr_12, Var_45, &Var_47);
  mercury__string__builder__append_string_3_p_0((MR_String) ", proc(", Var_47, &Var_48);
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_typeclass_table_scalar_common_5[0]), OrigPredInt_15, &Var_51);
  mercury__string__builder__append_string_3_p_0(Var_51, Var_48, &Var_50);
  mercury__string__builder__append_string_3_p_0((MR_String) ", ", Var_50, &Var_58);
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_typeclass_table_scalar_common_5[0]), OrigProcInt_16, &Var_61);
  mercury__string__builder__append_string_3_p_0(Var_61, Var_58, &Var_60);
  mercury__string__builder__append_string_3_p_0((MR_String) ")\n", Var_60, STATE_VARIABLE_State_18);
}

static void MR_CALL 
hlds__hlds_out__hlds_out_typeclass_table__format_constraint_6_p_0(
  MR_String IndentStr_7,
  MR_Word TVarSet_8,
  MR_Word VarNamePrint_9,
  MR_Word Constraint_10,
  MR_Word STATE_VARIABLE_State_0_13,
  MR_Word * STATE_VARIABLE_State_14)
{
  MR_String ConstraintStr_12;
  MR_Word Var_22;
  MR_Word Var_23;
  MR_Word Var_25;

  ConstraintStr_12 = parse_tree__parse_tree_out_type__mercury_constraint_to_string_3_f_0(TVarSet_8, VarNamePrint_9, Constraint_10);
  mercury__string__builder__append_string_3_p_0(IndentStr_7, STATE_VARIABLE_State_0_13, &Var_22);
  mercury__string__builder__append_string_3_p_0((MR_String) "%   ", Var_22, &Var_23);
  mercury__string__builder__append_string_3_p_0(ConstraintStr_12, Var_23, &Var_25);
  mercury__string__builder__append_string_3_p_0((MR_String) "\n", Var_25, STATE_VARIABLE_State_14);
}

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_typeclass_table__format_fundep_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv1_HeadVar__2_2;

  conv1_HeadVar__2_2 = mercury__string__int_to_string_1_f_0(((MR_Integer) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_typeclass_table__format_fundep_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = mercury__string__int_to_string_1_f_0(((MR_Integer) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
hlds__hlds_out__hlds_out_typeclass_table__format_fundep_4_p_0(
  MR_String IndentStr_5,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_State_0_15,
  MR_Word * STATE_VARIABLE_State_16)
{
  MR_Word Domain_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
  MR_Word Range_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
  MR_Word DomainList_9;
  MR_Word RangeList_10;
  MR_Word DomainStrs_11;
  MR_Word RangeStrs_12;
  MR_String DomainStr_13;
  MR_String RangeStr_14;
  MR_Word Var_36;
  MR_Word Var_37;
  MR_Word Var_39;
  MR_Word Var_40;
  MR_Word Var_42;

  DomainList_9 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Domain_6);
  RangeList_10 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Range_7);
  DomainStrs_11 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__hlds_out__hlds_out_typeclass_table_scalar_common_1[3]), DomainList_9);
  RangeStrs_12 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__hlds_out__hlds_out_typeclass_table_scalar_common_1[4]), RangeList_10);
  DomainStr_13 = mercury__string__join_list_2_f_0((MR_String) ", ", DomainStrs_11);
  RangeStr_14 = mercury__string__join_list_2_f_0((MR_String) ", ", RangeStrs_12);
  mercury__string__builder__append_string_3_p_0(IndentStr_5, STATE_VARIABLE_State_0_15, &Var_36);
  mercury__string__builder__append_string_3_p_0((MR_String) "%   (", Var_36, &Var_37);
  mercury__string__builder__append_string_3_p_0(DomainStr_13, Var_37, &Var_39);
  mercury__string__builder__append_string_3_p_0((MR_String) " -> ", Var_39, &Var_40);
  mercury__string__builder__append_string_3_p_0(RangeStr_14, Var_40, &Var_42);
  mercury__string__builder__append_string_3_p_0((MR_String) ")\n", Var_42, STATE_VARIABLE_State_16);
}

static void MR_CALL 
hlds__hlds_out__hlds_out_typeclass_table__format_class_defn_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_STATE_VARIABLE_State_18;

  hlds__hlds_out__hlds_out_typeclass_table__format_method_info_4_p_0(((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_State_18);
  *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_State_18));
}

static void MR_CALL 
hlds__hlds_out__hlds_out_typeclass_table__format_class_defn_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_State_14;

  hlds__hlds_out__hlds_out_typeclass_table__format_constraint_6_p_0(((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_State_14);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_State_14));
}

static void MR_CALL 
hlds__hlds_out__hlds_out_typeclass_table__format_class_defn_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_State_16;

  hlds__hlds_out__hlds_out_typeclass_table__format_fundep_4_p_0(((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_State_16);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_State_16));
}

static void MR_CALL 
hlds__hlds_out__hlds_out_typeclass_table__format_class_defn_4_p_0(
  MR_Word Info_5,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_State_0_23,
  MR_Word * STATE_VARIABLE_State_24)
{
  MR_bool succeeded;
  MR_Word ClassId_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
  MR_Word ClassDefn_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
  MR_Word TVarSet_10 = ((MR_Word) ((MR_hl_field(0, ClassDefn_7, (MR_Integer) 1))));
  MR_Word Vars_12 = ((MR_Word) ((MR_hl_field(0, ClassDefn_7, (MR_Integer) 3))));
  MR_Word SuperClassConstraints_13 = ((MR_Word) ((MR_hl_field(0, ClassDefn_7, (MR_Integer) 4))));
  MR_Word FunDeps_14 = ((MR_Word) ((MR_hl_field(0, ClassDefn_7, (MR_Integer) 5))));
  MR_Word MethodInfos_17 = ((MR_Word) ((MR_hl_field(0, ClassDefn_7, (MR_Integer) 8))));
  MR_Word Context_18 = ((MR_Word) ((MR_hl_field(0, ClassDefn_7, (MR_Integer) 9))));
  MR_String DumpOptions_20;
  MR_Word VarNamePrint_21;
  MR_Word STATE_VARIABLE_State_27_27;
  MR_String Var_29;
  MR_Word STATE_VARIABLE_State_33_33;
  MR_Word STATE_VARIABLE_State_37_37;
  MR_String Var_39;
  MR_Word STATE_VARIABLE_State_42_42;
  MR_Word STATE_VARIABLE_State_44_44;
  MR_Word STATE_VARIABLE_State_46_46;
  MR_Word Var_47;
  MR_Word STATE_VARIABLE_State_48_48;
  MR_Word STATE_VARIABLE_State_50_50;
  MR_Word Var_70;
  MR_Word Var_72;
  MR_Word Var_74;
  MR_Word Var_76;
  MR_Box conv1_STATE_VARIABLE_State_44_44;
  MR_Box conv3_STATE_VARIABLE_State_48_48;
  MR_Box conv5_STATE_VARIABLE_State_24;

  Var_29 = parse_tree__parse_tree_out_sym_name__class_id_to_string_1_f_0(ClassId_6);
  mercury__string__builder__append_string_3_p_0((MR_String) "\n% ", STATE_VARIABLE_State_0_23, &Var_70);
  mercury__string__builder__append_string_3_p_0(Var_29, Var_70, &Var_72);
  mercury__string__builder__append_string_3_p_0((MR_String) ":\n", Var_72, &STATE_VARIABLE_State_27_27);
  hlds__hlds_out__hlds_out_util__maybe_format_context_comment_5_p_0((MR_Unsigned) 0U, (MR_String) "", Context_18, STATE_VARIABLE_State_27_27, &STATE_VARIABLE_State_33_33);
  DumpOptions_20 = ((MR_String) ((MR_hl_field(0, Info_5, (MR_Integer) 0))));
  succeeded = mercury__string__contains_char_2_p_0(DumpOptions_20, (MR_Char) 118);
  if (succeeded)
    VarNamePrint_21 = (MR_Integer) 1;
  else
    VarNamePrint_21 = (MR_Integer) 0;
  Var_39 = parse_tree__parse_tree_out_term__mercury_vars_to_string_vs_3_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TVarSet_10, VarNamePrint_21, Vars_12);
  mercury__string__builder__append_string_3_p_0((MR_String) "% Vars: ", STATE_VARIABLE_State_33_33, &Var_74);
  mercury__string__builder__append_string_3_p_0(Var_39, Var_74, &Var_76);
  mercury__string__builder__append_string_3_p_0((MR_String) "\n", Var_76, &STATE_VARIABLE_State_37_37);
  mercury__string__builder__append_string_3_p_0((MR_String) "% Functional dependencies:\n", STATE_VARIABLE_State_37_37, &STATE_VARIABLE_State_42_42);
  mercury__list__foldl_4_p_2((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_fundep_0), (MR_Word) (&mercury__string__builder__string__builder__type_ctor_info_state_0), (MR_Word) (&hlds__hlds_out__hlds_out_typeclass_table_scalar_common_3[2]), FunDeps_14, ((MR_Box) (STATE_VARIABLE_State_42_42)), &conv1_STATE_VARIABLE_State_44_44);
  STATE_VARIABLE_State_44_44 = ((MR_Word) (conv1_STATE_VARIABLE_State_44_44));
  mercury__string__builder__append_string_3_p_0((MR_String) "% Superclass constraints:\n", STATE_VARIABLE_State_44_44, &STATE_VARIABLE_State_46_46);
  {
    Var_47 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_47, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_typeclass_table_scalar_common_7[0]));
    MR_hl_field(0, Var_47, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_typeclass_table__format_class_defn_4_p_0_2));
    MR_hl_field(0, Var_47, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_47, 3) = ((MR_Box) ((MR_String) ""));
    MR_hl_field(0, Var_47, 4) = ((MR_Box) (TVarSet_10));
    MR_hl_field(0, Var_47, 5) = ((MR_Box) (VarNamePrint_21));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&mercury__string__builder__string__builder__type_ctor_info_state_0), Var_47, SuperClassConstraints_13, ((MR_Box) (STATE_VARIABLE_State_46_46)), &conv3_STATE_VARIABLE_State_48_48);
  STATE_VARIABLE_State_48_48 = ((MR_Word) (conv3_STATE_VARIABLE_State_48_48));
  mercury__string__builder__append_string_3_p_0((MR_String) "% Class methods:\n", STATE_VARIABLE_State_48_48, &STATE_VARIABLE_State_50_50);
  mercury__list__foldl_4_p_2((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_method_info_0), (MR_Word) (&mercury__string__builder__string__builder__type_ctor_info_state_0), (MR_Word) (&hlds__hlds_out__hlds_out_typeclass_table_scalar_common_3[3]), MethodInfos_17, ((MR_Box) (STATE_VARIABLE_State_50_50)), &conv5_STATE_VARIABLE_State_24);
  *STATE_VARIABLE_State_24 = ((MR_Word) (conv5_STATE_VARIABLE_State_24));
}

void MR_CALL 
hlds__hlds_out__hlds_out_typeclass_table__write_instances_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word ClassTable_8)
{
  MR_Word State0_10;
  MR_Word State_11;
  MR_String Str_12;

  State0_10 = mercury__string__builder__init_0_f_0();
  hlds__hlds_out__hlds_out_typeclass_table__format_instances_4_p_0(Info_6, ClassTable_8, State0_10, &State_11);
  Str_12 = mercury__string__builder__to_string_1_f_0(State_11);
  mercury__io__write_string_4_p_0(Stream_7, Str_12);
}

static void MR_CALL 
hlds__hlds_out__hlds_out_typeclass_table__format_instances_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_State_10;

  hlds__hlds_out__hlds_out_typeclass_table__format_instance_defns_for_class_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_State_10);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_State_10));
}

void MR_CALL 
hlds__hlds_out__hlds_out_typeclass_table__format_instances_4_p_0(
  MR_Word Info_5,
  MR_Word InstanceTable_6,
  MR_Word STATE_VARIABLE_State_0_9,
  MR_Word * STATE_VARIABLE_State_10)
{
  MR_Word InstanceTableEntries_8;
  MR_Word STATE_VARIABLE_State_12_12;
  MR_Word Var_13;
  MR_Word STATE_VARIABLE_State_14_14;
  MR_Box conv1_STATE_VARIABLE_State_14_14;

  mercury__string__builder__append_string_3_p_0((MR_String) "%-------- Instances --------\n", STATE_VARIABLE_State_0_9, &STATE_VARIABLE_State_12_12);
  mercury__map__to_assoc_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&hlds__hlds_out__hlds_out_typeclass_table_scalar_common_2[0]), InstanceTable_6, &InstanceTableEntries_8);
  {
    Var_13 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_13, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_typeclass_table_scalar_common_6[1]));
    MR_hl_field(0, Var_13, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_typeclass_table__format_instances_4_p_0_1));
    MR_hl_field(0, Var_13, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_13, 3) = ((MR_Box) (Info_5));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&hlds__hlds_out__hlds_out_typeclass_table_scalar_common_1[1]), (MR_Word) (&mercury__string__builder__string__builder__type_ctor_info_state_0), Var_13, InstanceTableEntries_8, ((MR_Box) (STATE_VARIABLE_State_12_12)), &conv1_STATE_VARIABLE_State_14_14);
  STATE_VARIABLE_State_14_14 = ((MR_Word) (conv1_STATE_VARIABLE_State_14_14));
  mercury__string__builder__append_string_3_p_0((MR_String) "\n", STATE_VARIABLE_State_14_14, STATE_VARIABLE_State_10);
}

void MR_CALL 
hlds__hlds_out__hlds_out_typeclass_table__write_classes_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word ClassTable_8)
{
  MR_Word State0_10;
  MR_Word State_11;
  MR_String Str_12;

  State0_10 = mercury__string__builder__init_0_f_0();
  hlds__hlds_out__hlds_out_typeclass_table__format_classes_4_p_0(Info_6, ClassTable_8, State0_10, &State_11);
  Str_12 = mercury__string__builder__to_string_1_f_0(State_11);
  mercury__io__write_string_4_p_0(Stream_7, Str_12);
}

static void MR_CALL 
hlds__hlds_out__hlds_out_typeclass_table__format_classes_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_State_24;

  hlds__hlds_out__hlds_out_typeclass_table__format_class_defn_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_State_24);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_State_24));
}

void MR_CALL 
hlds__hlds_out__hlds_out_typeclass_table__format_classes_4_p_0(
  MR_Word Info_5,
  MR_Word ClassTable_6,
  MR_Word STATE_VARIABLE_State_0_9,
  MR_Word * STATE_VARIABLE_State_10)
{
  MR_Word ClassTableList_8;
  MR_Word STATE_VARIABLE_State_12_12;
  MR_Word Var_13;
  MR_Word STATE_VARIABLE_State_14_14;
  MR_Box conv1_STATE_VARIABLE_State_14_14;

  mercury__string__builder__append_string_3_p_0((MR_String) "%-------- Classes --------\n", STATE_VARIABLE_State_0_9, &STATE_VARIABLE_State_12_12);
  mercury__map__to_assoc_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0), ClassTable_6, &ClassTableList_8);
  {
    Var_13 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_13, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_typeclass_table_scalar_common_6[0]));
    MR_hl_field(0, Var_13, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_typeclass_table__format_classes_4_p_0_1));
    MR_hl_field(0, Var_13, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_13, 3) = ((MR_Box) (Info_5));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&hlds__hlds_out__hlds_out_typeclass_table_scalar_common_1[0]), (MR_Word) (&mercury__string__builder__string__builder__type_ctor_info_state_0), Var_13, ClassTableList_8, ((MR_Box) (STATE_VARIABLE_State_12_12)), &conv1_STATE_VARIABLE_State_14_14);
  STATE_VARIABLE_State_14_14 = ((MR_Word) (conv1_STATE_VARIABLE_State_14_14));
  mercury__string__builder__append_string_3_p_0((MR_String) "\n", STATE_VARIABLE_State_14_14, STATE_VARIABLE_State_10);
}

void mercury__hlds__hlds_out__hlds_out_typeclass_table__init(void)
{
}

void mercury__hlds__hlds_out__hlds_out_typeclass_table__init_type_tables(void)
{
}

void mercury__hlds__hlds_out__hlds_out_typeclass_table__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__hlds__hlds_out__hlds_out_typeclass_table__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module hlds.hlds_out.hlds_out_typeclass_table.
