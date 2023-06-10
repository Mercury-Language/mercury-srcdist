/*
** Automatically generated from `hlds_out_typeclass_table.m'
** by the Mercury compiler,
** version rotd-2023-06-10
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
#include "check_hlds.mode_errors.mih"
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
#include "libs.maybe_util.mih"
#include "libs.polyhedron.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.parse_tree_out.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_misc.mih"
#include "parse_tree.parse_tree_out_sym_name.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.parse_tree_out_type.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
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
hlds__hlds_out__hlds_out_typeclass_table__write_instance_defn_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_typeclass_table__write_instance_defn_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_typeclass_table__write_instance_defn_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__hlds_out__hlds_out_typeclass_table__write_instance_defn_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word InstanceDefn_8);

static void MR_CALL 
hlds__hlds_out__hlds_out_typeclass_table__write_instance_methods_6_p_0(
  MR_Word Stream_1,
  MR_String IndentStr_2,
  MR_Word HeadVar__3_3,
  MR_Integer CurMethodNum_4);

static void MR_CALL 
hlds__hlds_out__hlds_out_typeclass_table__write_instance_defns_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_typeclass_table__write_instance_defns_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word HeadVar__3_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_typeclass_table__write_method_info_5_p_0(
  MR_Word Stream_6,
  MR_String IndentStr_7,
  MR_Word MethodInfo_8);

static void MR_CALL 
hlds__hlds_out__hlds_out_typeclass_table__hlds_output_constraint_7_p_0(
  MR_Word Stream_8,
  MR_String IndentStr_9,
  MR_Word TVarSet_10,
  MR_Word VarNamePrint_11,
  MR_Word Constraint_12);

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_typeclass_table__hlds_output_fundep_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_typeclass_table__hlds_output_fundep_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__hlds_out__hlds_out_typeclass_table__hlds_output_fundep_5_p_0(
  MR_Word Stream_6,
  MR_String IndentStr_7,
  MR_Word HeadVar__3_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_typeclass_table__write_class_defn_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_typeclass_table__write_class_defn_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_typeclass_table__write_class_defn_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_typeclass_table__write_class_defn_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word HeadVar__3_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_typeclass_table__write_instances_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_typeclass_table__write_classes_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);


static /* final */ const MR_Box hlds__hlds_out__hlds_out_typeclass_table_scalar_common_1[4][3];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_typeclass_table_scalar_common_2[1][2];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_typeclass_table_scalar_common_3[1][1];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_typeclass_table_scalar_common_4[5][8];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_typeclass_table_scalar_common_5[1][10];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_typeclass_table_scalar_common_6[1][5];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_typeclass_table_scalar_common_7[2][7];




static /* final */ const MR_Box hlds__hlds_out__hlds_out_typeclass_table_scalar_common_1[4][3] = {
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
    ((MR_Box) (&hlds__hlds_out__hlds_out_typeclass_table_scalar_common_6[0])),
    ((MR_Box) (hlds__hlds_out__hlds_out_typeclass_table__hlds_output_fundep_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_typeclass_table_scalar_common_6[0])),
    ((MR_Box) (hlds__hlds_out__hlds_out_typeclass_table__hlds_output_fundep_5_p_0_2)),
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

static /* final */ const MR_Box hlds__hlds_out__hlds_out_typeclass_table_scalar_common_3[1][1] = {
  /* row   0 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_typeclass_table_scalar_common_4[5][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__type_ctor_info_hlds_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_typeclass_table__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_hlds__hlds_class__type_ctor_info_hlds_class_defn_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__type_ctor_info_hlds_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_typeclass_table__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_list__ti_list_1hlds__hlds_class__type_ctor_info_hlds_instance_defn_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_fundep_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_method_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__type_ctor_info_hlds_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_typeclass_table_scalar_common_5[1][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_typeclass_table__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_var_name_print_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_typeclass_table_scalar_common_6[1][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_typeclass_table_scalar_common_7[2][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_typeclass_table__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_var_name_print_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   1 */
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
hlds__hlds_out__hlds_out_typeclass_table__write_instance_defn_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  hlds__hlds_out__hlds_out_typeclass_table__write_method_info_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
}

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_typeclass_table__write_instance_defn_5_p_0_2(
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
hlds__hlds_out__hlds_out_typeclass_table__write_instance_defn_5_p_0_1(
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
hlds__hlds_out__hlds_out_typeclass_table__write_instance_defn_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word InstanceDefn_8)
{
  MR_bool succeeded;
  MR_Word InstanceStatus_11 = ((MR_Word) ((MR_hl_field(0, InstanceDefn_8, (MR_Integer) 1))));
  MR_Word TVarSet_12 = ((MR_Word) ((MR_hl_field(0, InstanceDefn_8, (MR_Integer) 2))));
  MR_Word OriginalTypes_13 = ((MR_Word) ((MR_hl_field(0, InstanceDefn_8, (MR_Integer) 3))));
  MR_Word Types_14 = ((MR_Word) ((MR_hl_field(0, InstanceDefn_8, (MR_Integer) 4))));
  MR_Word Constraints_15 = ((MR_Word) ((MR_hl_field(0, InstanceDefn_8, (MR_Integer) 5))));
  MR_Word MaybeSubsumedContext_16 = ((MR_Word) ((MR_hl_field(0, InstanceDefn_8, (MR_Integer) 6))));
  MR_Word ProofMap_17 = ((MR_Word) ((MR_hl_field(0, InstanceDefn_8, (MR_Integer) 7))));
  MR_Word Body_18 = ((MR_Word) ((MR_hl_field(0, InstanceDefn_8, (MR_Integer) 8))));
  MR_Word MaybeMethodInfos_19 = ((MR_Word) ((MR_hl_field(0, InstanceDefn_8, (MR_Integer) 9))));
  MR_Word Context_20 = ((MR_Word) ((MR_hl_field(0, InstanceDefn_8, (MR_Integer) 10))));
  MR_String DumpOptions_21;
  MR_Word VarNamePrint_22;
  MR_String IndentStr_23;
  MR_Word TypeStrs_24;
  MR_Word OriginalTypeStrs_25;
  MR_String TypesStr_26;
  MR_String OriginalTypesStr_27;
  MR_String InstanceStatusStr_28;
  MR_Word ConstraintStrs_30;
  MR_String ConstraintsStr_31;
  MR_Word Var_42;
  MR_Word Var_75;

  mercury__io__nl_3_p_0(Stream_7);
  hlds__hlds_out__hlds_out_util__maybe_output_context_comment_6_p_0(Stream_7, (MR_Integer) 1, (MR_String) "", Context_20);
  DumpOptions_21 = ((MR_String) ((MR_hl_field(0, Info_6, (MR_Integer) 0))));
  succeeded = mercury__string__contains_char_2_p_0(DumpOptions_21, (MR_Char) 118);
  if (succeeded)
    VarNamePrint_22 = (MR_Integer) 1;
  else
    VarNamePrint_22 = (MR_Integer) 0;
  IndentStr_23 = libs__indent__indent2_string_1_f_0((MR_Integer) 1);
  {
    Var_42 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_42, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_typeclass_table_scalar_common_7[0]));
    MR_hl_field(0, Var_42, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_typeclass_table__write_instance_defn_5_p_0_1));
    MR_hl_field(0, Var_42, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_42, 3) = ((MR_Box) (TVarSet_12));
    MR_hl_field(0, Var_42, 4) = ((MR_Box) (VarNamePrint_22));
  }
  TypeStrs_24 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_42, Types_14);
  OriginalTypeStrs_25 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_42, OriginalTypes_13);
  TypesStr_26 = mercury__string__join_list_2_f_0((MR_String) ", ", TypeStrs_24);
  OriginalTypesStr_27 = mercury__string__join_list_2_f_0((MR_String) ", ", OriginalTypeStrs_25);
  mercury__io__write_string_4_p_0(Stream_7, IndentStr_23);
  mercury__io__write_string_4_p_0(Stream_7, (MR_String) "% Types: ");
  mercury__io__write_string_4_p_0(Stream_7, TypesStr_26);
  mercury__io__write_string_4_p_0(Stream_7, (MR_String) "\n");
  mercury__io__write_string_4_p_0(Stream_7, IndentStr_23);
  mercury__io__write_string_4_p_0(Stream_7, (MR_String) "% Original types: ");
  mercury__io__write_string_4_p_0(Stream_7, OriginalTypesStr_27);
  mercury__io__write_string_4_p_0(Stream_7, (MR_String) "\n");
  InstanceStatusStr_28 = hlds__hlds_out__hlds_out_util__instance_import_status_to_string_1_f_0(InstanceStatus_11);
  mercury__io__write_string_4_p_0(Stream_7, IndentStr_23);
  mercury__io__write_string_4_p_0(Stream_7, (MR_String) "% Status: ");
  mercury__io__write_string_4_p_0(Stream_7, InstanceStatusStr_28);
  mercury__io__write_string_4_p_0(Stream_7, (MR_String) "\n");
  if (!((MaybeSubsumedContext_16 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_Word SubsumedContext_29 = ((MR_Word) ((MR_hl_field(1, MaybeSubsumedContext_16, (MR_Integer) 0))));
    MR_String Var_73;

    Var_73 = hlds__hlds_out__hlds_out_util__context_to_brief_string_1_f_0(SubsumedContext_29);
    mercury__io__write_string_4_p_0(Stream_7, IndentStr_23);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "% Subsumed context: ");
    mercury__io__write_string_4_p_0(Stream_7, Var_73);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "\n");
  }
  {
    Var_75 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_75, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_typeclass_table_scalar_common_7[1]));
    MR_hl_field(0, Var_75, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_typeclass_table__write_instance_defn_5_p_0_2));
    MR_hl_field(0, Var_75, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_75, 3) = ((MR_Box) (TVarSet_12));
    MR_hl_field(0, Var_75, 4) = ((MR_Box) (VarNamePrint_22));
  }
  ConstraintStrs_30 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_75, Constraints_15);
  ConstraintsStr_31 = mercury__string__join_list_2_f_0((MR_String) ", ", ConstraintStrs_30);
  mercury__io__write_string_4_p_0(Stream_7, IndentStr_23);
  mercury__io__write_string_4_p_0(Stream_7, (MR_String) "% Constraints: ");
  mercury__io__write_string_4_p_0(Stream_7, ConstraintsStr_31);
  mercury__io__write_string_4_p_0(Stream_7, (MR_String) "\n");
  if ((Body_18 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    mercury__io__write_string_4_p_0(Stream_7, IndentStr_23);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "% abstract\n");
  }
  else
  {
    MR_Word Methods_32 = ((MR_Word) ((MR_hl_field(1, Body_18, (MR_Integer) 0))));

    mercury__io__write_string_4_p_0(Stream_7, IndentStr_23);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "% Instance methods:\n");
    hlds__hlds_out__hlds_out_typeclass_table__write_instance_methods_6_p_0(Stream_7, IndentStr_23, Methods_32, (MR_Integer) 1);
  }
  if (!((MaybeMethodInfos_19 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_Word MethodInfos_33 = ((MR_Word) ((MR_hl_field(1, MaybeMethodInfos_19, (MR_Integer) 0))));
    MR_Word Var_101;
    MR_Box conv2_STATE_VARIABLE_IO_102_102;

    mercury__io__write_string_4_p_0(Stream_7, IndentStr_23);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "% Procedures:\n");
    {
      Var_101 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_101, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_typeclass_table_scalar_common_4[3]));
      MR_hl_field(0, Var_101, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_typeclass_table__write_instance_defn_5_p_0_3));
      MR_hl_field(0, Var_101, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_101, 3) = ((MR_Box) (Stream_7));
      MR_hl_field(0, Var_101, 4) = ((MR_Box) (IndentStr_23));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_method_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_101, MethodInfos_33, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_102_102);
  }
  hlds__hlds_out__hlds_out_util__write_constraint_proof_map_7_p_0(Stream_7, (MR_Integer) 1, VarNamePrint_22, TVarSet_12, ProofMap_17);
}

static void MR_CALL 
hlds__hlds_out__hlds_out_typeclass_table__write_instance_methods_6_p_0(
  MR_Word Stream_1,
  MR_String IndentStr_2,
  MR_Word HeadVar__3_3,
  MR_Integer CurMethodNum_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word Method_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word Methods_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Word MethodName_19 = ((MR_Word) ((MR_hl_field(0, Method_15, (MR_Integer) 0))));
      MR_Word PredOrFunc_22 = ((MR_Unsigned) ((MR_hl_field(0, MethodName_19, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word MethodSymName_23 = ((MR_Word) ((MR_hl_field(0, MethodName_19, (MR_Integer) 1))));
      MR_Word UserArity_24 = ((MR_Word) ((MR_hl_field(0, MethodName_19, (MR_Integer) 2))));
      MR_Integer UserArityInt_25 = (MR_Integer) (UserArity_24);
      MR_String Var_36;
      MR_String Var_39;
      MR_Integer Var_50;
      MR_String Var_57;
      MR_String Var_73;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Integer next_value_of_CurMethodNum_4;

      Var_36 = parse_tree__parse_tree_out_misc__pred_or_func_to_str_1_f_0(PredOrFunc_22);
      Var_39 = mdbcomp__sym_name__sym_name_to_string_1_f_0(MethodSymName_23);
      mercury__io__write_string_4_p_0(Stream_1, IndentStr_2);
      mercury__io__write_string_4_p_0(Stream_1, (MR_String) "%   method ");
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_typeclass_table_scalar_common_3[0]), CurMethodNum_4, &Var_57);
      mercury__io__write_string_4_p_0(Stream_1, Var_57);
      mercury__io__write_string_4_p_0(Stream_1, (MR_String) ", ");
      mercury__io__write_string_4_p_0(Stream_1, Var_36);
      mercury__io__write_string_4_p_0(Stream_1, (MR_String) " ");
      mercury__io__write_string_4_p_0(Stream_1, Var_39);
      mercury__io__write_string_4_p_0(Stream_1, (MR_String) "/");
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_typeclass_table_scalar_common_3[0]), UserArityInt_25, &Var_73);
      mercury__io__write_string_4_p_0(Stream_1, Var_73);
      mercury__io__write_string_4_p_0(Stream_1, (MR_String) "\n");
      mercury__io__write_string_4_p_0(Stream_1, IndentStr_2);
      mercury__io__write_string_4_p_0(Stream_1, (MR_String) "%   ");
      parse_tree__parse_tree_out__mercury_output_instance_method_4_p_0(Method_15, Stream_1);
      mercury__io__nl_3_p_0(Stream_1);
      Var_50 = (MR_Integer) ((MR_Unsigned) CurMethodNum_4 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = Methods_16;
      next_value_of_CurMethodNum_4 = Var_50;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      CurMethodNum_4 = next_value_of_CurMethodNum_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_typeclass_table__write_instance_defns_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  hlds__hlds_out__hlds_out_typeclass_table__write_instance_defn_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
hlds__hlds_out__hlds_out_typeclass_table__write_instance_defns_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word HeadVar__3_3)
{
  MR_Word ClassId_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
  MR_Word InstanceDefns_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
  MR_String Var_17;
  MR_Word Var_19;
  MR_Box conv0_STATE_VARIABLE_IO_12;

  Var_17 = parse_tree__parse_tree_out_sym_name__class_id_to_string_1_f_0(ClassId_8);
  mercury__io__write_string_4_p_0(Stream_7, (MR_String) "\n% Instances for class ");
  mercury__io__write_string_4_p_0(Stream_7, Var_17);
  mercury__io__write_string_4_p_0(Stream_7, (MR_String) ":\n");
  {
    Var_19 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_19, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_typeclass_table_scalar_common_4[4]));
    MR_hl_field(0, Var_19, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_typeclass_table__write_instance_defns_5_p_0_1));
    MR_hl_field(0, Var_19, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_19, 3) = ((MR_Box) (Info_6));
    MR_hl_field(0, Var_19, 4) = ((MR_Box) (Stream_7));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_19, InstanceDefns_9, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_12);
}

static void MR_CALL 
hlds__hlds_out__hlds_out_typeclass_table__write_method_info_5_p_0(
  MR_Word Stream_6,
  MR_String IndentStr_7,
  MR_Word MethodInfo_8)
{
  MR_Integer MethodProcNum_10;
  MR_Word PredPfNameArity_11 = ((MR_Word) ((MR_hl_field(0, MethodInfo_8, (MR_Integer) 1))));
  MR_Word OrigPredProcId_12 = ((MR_Word) ((MR_hl_field(0, MethodInfo_8, (MR_Integer) 2))));
  MR_String NameStr_14;
  MR_Word OrigPredId_15;
  MR_Integer OrigProcId_16;
  MR_Integer OrigPredInt_17;
  MR_Integer OrigProcInt_18;
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, MethodInfo_8, (MR_Integer) 0))));
  MR_String Var_39;
  MR_String Var_53;
  MR_String Var_63;

  MethodProcNum_10 = (MR_Integer) (Var_21);
  NameStr_14 = parse_tree__parse_tree_out_sym_name__pf_sym_name_user_arity_to_unquoted_string_1_f_0(PredPfNameArity_11);
  OrigPredId_15 = ((MR_Word) ((MR_hl_field(0, OrigPredProcId_12, (MR_Integer) 0))));
  OrigProcId_16 = ((MR_Integer) ((MR_hl_field(0, OrigPredProcId_12, (MR_Integer) 1))));
  hlds__hlds_pred__pred_id_to_int_2_p_0(OrigPredId_15, &OrigPredInt_17);
  hlds__hlds_pred__proc_id_to_int_2_p_0(OrigProcId_16, &OrigProcInt_18);
  mercury__io__write_string_4_p_0(Stream_6, IndentStr_7);
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) "%   method ");
  mercury__string__format__format_signed_int_component_width_noprec_4_p_0((MR_Word) (&hlds__hlds_out__hlds_out_typeclass_table_scalar_common_3[0]), (MR_Integer) 2, MethodProcNum_10, &Var_39);
  mercury__io__write_string_4_p_0(Stream_6, Var_39);
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) ": ");
  mercury__io__write_string_4_p_0(Stream_6, NameStr_14);
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) ", proc(");
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_typeclass_table_scalar_common_3[0]), OrigPredInt_17, &Var_53);
  mercury__io__write_string_4_p_0(Stream_6, Var_53);
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) ", ");
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_typeclass_table_scalar_common_3[0]), OrigProcInt_18, &Var_63);
  mercury__io__write_string_4_p_0(Stream_6, Var_63);
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) ")\n");
}

static void MR_CALL 
hlds__hlds_out__hlds_out_typeclass_table__hlds_output_constraint_7_p_0(
  MR_Word Stream_8,
  MR_String IndentStr_9,
  MR_Word TVarSet_10,
  MR_Word VarNamePrint_11,
  MR_Word Constraint_12)
{
  MR_String ConstraintStr_14;

  ConstraintStr_14 = parse_tree__parse_tree_out_type__mercury_constraint_to_string_3_f_0(TVarSet_10, VarNamePrint_11, Constraint_12);
  mercury__io__write_string_4_p_0(Stream_8, IndentStr_9);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "%   ");
  mercury__io__write_string_4_p_0(Stream_8, ConstraintStr_14);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\n");
}

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_typeclass_table__hlds_output_fundep_5_p_0_2(
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
hlds__hlds_out__hlds_out_typeclass_table__hlds_output_fundep_5_p_0_1(
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
hlds__hlds_out__hlds_out_typeclass_table__hlds_output_fundep_5_p_0(
  MR_Word Stream_6,
  MR_String IndentStr_7,
  MR_Word HeadVar__3_3)
{
  MR_Word Domain_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
  MR_Word Range_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
  MR_Word DomainList_11;
  MR_Word RangeList_12;
  MR_Word DomainStrs_13;
  MR_Word RangeStrs_14;
  MR_String DomainStr_15;
  MR_String RangeStr_16;

  DomainList_11 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Domain_8);
  RangeList_12 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Range_9);
  DomainStrs_13 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__hlds_out__hlds_out_typeclass_table_scalar_common_1[2]), DomainList_11);
  RangeStrs_14 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__hlds_out__hlds_out_typeclass_table_scalar_common_1[3]), RangeList_12);
  DomainStr_15 = mercury__string__join_list_2_f_0((MR_String) ", ", DomainStrs_13);
  RangeStr_16 = mercury__string__join_list_2_f_0((MR_String) ", ", RangeStrs_14);
  mercury__io__write_string_4_p_0(Stream_6, IndentStr_7);
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) "%   (");
  mercury__io__write_string_4_p_0(Stream_6, DomainStr_15);
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) " -> ");
  mercury__io__write_string_4_p_0(Stream_6, RangeStr_16);
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) ")\n");
}

static void MR_CALL 
hlds__hlds_out__hlds_out_typeclass_table__write_class_defn_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  hlds__hlds_out__hlds_out_typeclass_table__write_method_info_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
hlds__hlds_out__hlds_out_typeclass_table__write_class_defn_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  hlds__hlds_out__hlds_out_typeclass_table__hlds_output_constraint_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
hlds__hlds_out__hlds_out_typeclass_table__write_class_defn_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  hlds__hlds_out__hlds_out_typeclass_table__hlds_output_fundep_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
hlds__hlds_out__hlds_out_typeclass_table__write_class_defn_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Word ClassId_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
  MR_Word ClassDefn_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
  MR_Word TVarSet_12 = ((MR_Word) ((MR_hl_field(0, ClassDefn_9, (MR_Integer) 1))));
  MR_Word Vars_14 = ((MR_Word) ((MR_hl_field(0, ClassDefn_9, (MR_Integer) 3))));
  MR_Word Constraints_15 = ((MR_Word) ((MR_hl_field(0, ClassDefn_9, (MR_Integer) 4))));
  MR_Word FunDeps_16 = ((MR_Word) ((MR_hl_field(0, ClassDefn_9, (MR_Integer) 5))));
  MR_Word MethodInfos_19 = ((MR_Word) ((MR_hl_field(0, ClassDefn_9, (MR_Integer) 8))));
  MR_Word Context_20 = ((MR_Word) ((MR_hl_field(0, ClassDefn_9, (MR_Integer) 9))));
  MR_String DumpOptions_22;
  MR_Word VarNamePrint_23;
  MR_String Var_31;
  MR_String Var_41;
  MR_Word Var_45;
  MR_Word Var_49;
  MR_Word Var_53;
  MR_Box conv0_STATE_VARIABLE_IO_46_46;
  MR_Box conv1_STATE_VARIABLE_IO_50_50;
  MR_Box conv2_STATE_VARIABLE_IO_26;

  Var_31 = parse_tree__parse_tree_out_sym_name__class_id_to_string_1_f_0(ClassId_8);
  mercury__io__write_string_4_p_0(Stream_7, (MR_String) "\n% ");
  mercury__io__write_string_4_p_0(Stream_7, Var_31);
  mercury__io__write_string_4_p_0(Stream_7, (MR_String) ":\n");
  hlds__hlds_out__hlds_out_util__maybe_output_context_comment_6_p_0(Stream_7, (MR_Integer) 0, (MR_String) "", Context_20);
  DumpOptions_22 = ((MR_String) ((MR_hl_field(0, Info_6, (MR_Integer) 0))));
  succeeded = mercury__string__contains_char_2_p_0(DumpOptions_22, (MR_Char) 118);
  if (succeeded)
    VarNamePrint_23 = (MR_Integer) 1;
  else
    VarNamePrint_23 = (MR_Integer) 0;
  Var_41 = parse_tree__parse_tree_out_term__mercury_vars_to_string_vs_3_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TVarSet_12, VarNamePrint_23, Vars_14);
  mercury__io__write_string_4_p_0(Stream_7, (MR_String) "% Vars: ");
  mercury__io__write_string_4_p_0(Stream_7, Var_41);
  mercury__io__write_string_4_p_0(Stream_7, (MR_String) "\n");
  mercury__io__write_string_4_p_0(Stream_7, (MR_String) "% Functional dependencies:\n");
  {
    Var_45 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_45, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_typeclass_table_scalar_common_4[2]));
    MR_hl_field(0, Var_45, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_typeclass_table__write_class_defn_5_p_0_1));
    MR_hl_field(0, Var_45, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_45, 3) = ((MR_Box) (Stream_7));
    MR_hl_field(0, Var_45, 4) = ((MR_Box) ((MR_String) ""));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_fundep_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_45, FunDeps_16, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_46_46);
  mercury__io__write_string_4_p_0(Stream_7, (MR_String) "% Constraints:\n");
  {
    Var_49 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_49, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_typeclass_table_scalar_common_5[0]));
    MR_hl_field(0, Var_49, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_typeclass_table__write_class_defn_5_p_0_2));
    MR_hl_field(0, Var_49, 2) = ((MR_Box) ((MR_Integer) 4));
    MR_hl_field(0, Var_49, 3) = ((MR_Box) (Stream_7));
    MR_hl_field(0, Var_49, 4) = ((MR_Box) ((MR_String) ""));
    MR_hl_field(0, Var_49, 5) = ((MR_Box) (TVarSet_12));
    MR_hl_field(0, Var_49, 6) = ((MR_Box) (VarNamePrint_23));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_49, Constraints_15, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_50_50);
  mercury__io__write_string_4_p_0(Stream_7, (MR_String) "% Class Methods:\n");
  {
    Var_53 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_53, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_typeclass_table_scalar_common_4[3]));
    MR_hl_field(0, Var_53, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_typeclass_table__write_class_defn_5_p_0_3));
    MR_hl_field(0, Var_53, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_53, 3) = ((MR_Box) (Stream_7));
    MR_hl_field(0, Var_53, 4) = ((MR_Box) ((MR_String) ""));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_method_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_53, MethodInfos_19, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_26);
}

static void MR_CALL 
hlds__hlds_out__hlds_out_typeclass_table__write_instances_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  hlds__hlds_out__hlds_out_typeclass_table__write_instance_defns_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
}

void MR_CALL 
hlds__hlds_out__hlds_out_typeclass_table__write_instances_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word InstanceTable_8)
{
  MR_Word InstanceTableList_10;
  MR_Word Var_15;
  MR_Box conv0_STATE_VARIABLE_IO_16_16;

  mercury__io__write_string_4_p_0(Stream_7, (MR_String) "%-------- Instances --------\n");
  mercury__map__to_assoc_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&hlds__hlds_out__hlds_out_typeclass_table_scalar_common_2[0]), InstanceTable_8, &InstanceTableList_10);
  {
    Var_15 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_15, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_typeclass_table_scalar_common_4[1]));
    MR_hl_field(0, Var_15, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_typeclass_table__write_instances_5_p_0_1));
    MR_hl_field(0, Var_15, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_15, 3) = ((MR_Box) (Info_6));
    MR_hl_field(0, Var_15, 4) = ((MR_Box) (Stream_7));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&hlds__hlds_out__hlds_out_typeclass_table_scalar_common_1[1]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_15, InstanceTableList_10, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_16_16);
  mercury__io__nl_3_p_0(Stream_7);
}

static void MR_CALL 
hlds__hlds_out__hlds_out_typeclass_table__write_classes_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  hlds__hlds_out__hlds_out_typeclass_table__write_class_defn_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
}

void MR_CALL 
hlds__hlds_out__hlds_out_typeclass_table__write_classes_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word ClassTable_8)
{
  MR_Word ClassTableList_10;
  MR_Word Var_15;
  MR_Box conv0_STATE_VARIABLE_IO_16_16;

  mercury__io__write_string_4_p_0(Stream_7, (MR_String) "%-------- Classes --------\n");
  mercury__map__to_assoc_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0), ClassTable_8, &ClassTableList_10);
  {
    Var_15 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_15, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_typeclass_table_scalar_common_4[0]));
    MR_hl_field(0, Var_15, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_typeclass_table__write_classes_5_p_0_1));
    MR_hl_field(0, Var_15, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_15, 3) = ((MR_Box) (Info_6));
    MR_hl_field(0, Var_15, 4) = ((MR_Box) (Stream_7));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&hlds__hlds_out__hlds_out_typeclass_table_scalar_common_1[0]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_15, ClassTableList_10, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_16_16);
  mercury__io__nl_3_p_0(Stream_7);
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
