/*
** Automatically generated from `hlds_out_typeclass_table.m'
** by the Mercury compiler,
** version 22.01-beta-2022-03-18
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
#include "hlds.pred_table.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.globals.mih"
#include "libs.maybe_succeeded.mih"
#include "libs.polyhedron.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.mercury_to_mercury.mih"
#include "parse_tree.parse_tree_out.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
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
hlds__hlds_out__hlds_out_typeclass_table__write_instance_defn_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
hlds__hlds_out__hlds_out_typeclass_table__write_instance_defn_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
hlds__hlds_out__hlds_out_typeclass_table__write_instance_defn_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word InstanceDefn_8);

static void MR_CALL 
hlds__hlds_out__hlds_out_typeclass_table__write_instance_methods_5_p_0(
  MR_Word Stream_1,
  MR_Word HeadVar__2_2,
  MR_Integer STATE_VARIABLE_CurMethodNum_0_3);

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
hlds__hlds_out__hlds_out_typeclass_table__write_class_proc_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Stream_7);

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_typeclass_table__hlds_output_fundep_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_typeclass_table__hlds_output_fundep_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__hlds_out__hlds_out_typeclass_table__hlds_output_fundep_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Stream_7);

static void MR_CALL 
hlds__hlds_out__hlds_out_typeclass_table__write_class_defn_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
hlds__hlds_out__hlds_out_typeclass_table__write_class_defn_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
hlds__hlds_out__hlds_out_typeclass_table__write_class_defn_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

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


static /* final */ const MR_Box hlds__hlds_out__hlds_out_typeclass_table_scalar_common_1[6][3];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_typeclass_table_scalar_common_2[2][2];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_typeclass_table_scalar_common_3[1][1];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_typeclass_table_scalar_common_4[3][8];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_typeclass_table_scalar_common_5[2][7];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_typeclass_table_scalar_common_6[2][9];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_typeclass_table_scalar_common_7[1][5];




static /* final */ const MR_Box hlds__hlds_out__hlds_out_typeclass_table_scalar_common_1[6][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_typeclass_table_scalar_common_2[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_typeclass_table_scalar_common_5[0])),
    ((MR_Box) (hlds__hlds_out__hlds_out_typeclass_table__write_class_defn_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_typeclass_table_scalar_common_5[1])),
    ((MR_Box) (hlds__hlds_out__hlds_out_typeclass_table__write_class_defn_5_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_typeclass_table_scalar_common_7[0])),
    ((MR_Box) (hlds__hlds_out__hlds_out_typeclass_table__hlds_output_fundep_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_typeclass_table_scalar_common_7[0])),
    ((MR_Box) (hlds__hlds_out__hlds_out_typeclass_table__hlds_output_fundep_4_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_typeclass_table_scalar_common_2[2][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_typeclass_table_scalar_common_3[1][1] = {
  /* row 0 */
  {
    (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1))))))))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_typeclass_table_scalar_common_4[3][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__type_ctor_info_hlds_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_typeclass_table__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_hlds__hlds_class__type_ctor_info_hlds_class_defn_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__type_ctor_info_hlds_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_typeclass_table__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_list__ti_list_1hlds__hlds_class__type_ctor_info_hlds_instance_defn_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__type_ctor_info_hlds_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_typeclass_table_scalar_common_5[2][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_fundep_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_typeclass_table_scalar_common_6[2][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_typeclass_table__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_var_name_print_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_typeclass_table__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_var_name_print_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_typeclass_table_scalar_common_7[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_typeclass_table__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_hlds__hlds_class__type_ctor_info_hlds_class_defn_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0),
    (MR_PseudoTypeInfo) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0)
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_out__hlds_out_typeclass_table__list__ti_list_1hlds__hlds_class__type_ctor_info_hlds_instance_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0)
  }
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
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static void MR_CALL 
hlds__hlds_out__hlds_out_typeclass_table__write_instance_defn_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__mercury_to_mercury__mercury_output_constraint_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_typeclass_table__write_instance_defn_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__mercury_to_mercury__mercury_output_type_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_typeclass_table__write_instance_defn_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word InstanceDefn_8)
{
  {
    MR_bool succeeded;
    MR_Word Types_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceDefn_8, (MR_Integer) 1))));
    MR_Word OriginalTypes_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceDefn_8, (MR_Integer) 2))));
    MR_Word InstanceStatus_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceDefn_8, (MR_Integer) 3))));
    MR_Word Context_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceDefn_8, (MR_Integer) 4))));
    MR_Word Constraints_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceDefn_8, (MR_Integer) 5))));
    MR_Word Body_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceDefn_8, (MR_Integer) 6))));
    MR_Word MaybePredProcIds_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceDefn_8, (MR_Integer) 7))));
    MR_Word VarSet_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceDefn_8, (MR_Integer) 8))));
    MR_Word ProofMap_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceDefn_8, (MR_Integer) 9))));
    MR_String DumpOptions_20;
    MR_Word VarNamePrint_21;
    MR_Word PrintTerm_22;
    MR_String Var_51;
    MR_Word Var_58;

    mercury__io__nl_3_p_0(Stream_7);
    hlds__hlds_out__hlds_out_util__maybe_output_context_comment_6_p_0(Stream_7, (MR_Integer) 1, (MR_String) "", Context_14);
    DumpOptions_20 = ((MR_String) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 0))));
    succeeded = mercury__string__contains_char_2_p_0(DumpOptions_20, (MR_Char) 118);
    if (succeeded)
      VarNamePrint_21 = (MR_Integer) 1;
    else
      VarNamePrint_21 = (MR_Integer) 0;
    {
      PrintTerm_22 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), PrintTerm_22, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_typeclass_table_scalar_common_6[1]));
      MR_hl_field(MR_mktag(0), PrintTerm_22, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_typeclass_table__write_instance_defn_5_p_0_1));
      MR_hl_field(MR_mktag(0), PrintTerm_22, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), PrintTerm_22, 3) = ((MR_Box) (VarSet_18));
      MR_hl_field(MR_mktag(0), PrintTerm_22, 4) = ((MR_Box) (VarNamePrint_21));
    }
    hlds__hlds_out__hlds_out_util__write_indent_4_p_0(Stream_7, (MR_Integer) 1);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "% Types: ");
    parse_tree__parse_tree_out_info__write_out_list_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), PrintTerm_22, (MR_String) ", ", Types_11, Stream_7);
    mercury__io__nl_3_p_0(Stream_7);
    hlds__hlds_out__hlds_out_util__write_indent_4_p_0(Stream_7, (MR_Integer) 1);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "% Original types: ");
    parse_tree__parse_tree_out_info__write_out_list_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), PrintTerm_22, (MR_String) ", ", OriginalTypes_12, Stream_7);
    mercury__io__nl_3_p_0(Stream_7);
    hlds__hlds_out__hlds_out_util__write_indent_4_p_0(Stream_7, (MR_Integer) 1);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "% Status: ");
    Var_51 = hlds__hlds_out__hlds_out_util__instance_import_status_to_string_1_f_0(InstanceStatus_13);
    mercury__io__write_string_4_p_0(Stream_7, Var_51);
    mercury__io__nl_3_p_0(Stream_7);
    hlds__hlds_out__hlds_out_util__write_indent_4_p_0(Stream_7, (MR_Integer) 1);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "% Constraints: ");
    {
      Var_58 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_58, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_typeclass_table_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), Var_58, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_typeclass_table__write_instance_defn_5_p_0_2));
      MR_hl_field(MR_mktag(0), Var_58, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_58, 3) = ((MR_Box) (VarSet_18));
      MR_hl_field(MR_mktag(0), Var_58, 4) = ((MR_Box) (VarNamePrint_21));
    }
    parse_tree__parse_tree_out_info__write_out_list_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), Var_58, (MR_String) ", ", Constraints_15, Stream_7);
    mercury__io__nl_3_p_0(Stream_7);
    hlds__hlds_out__hlds_out_util__write_indent_4_p_0(Stream_7, (MR_Integer) 1);
    if ((Body_16 == (MR_Word) ((MR_Unsigned) 0U)))
      mercury__io__write_string_4_p_0(Stream_7, (MR_String) "% abstract");
    else
    {
      MR_Word Methods_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Body_16, (MR_Integer) 0))));

      mercury__io__write_string_4_p_0(Stream_7, (MR_String) "% Instance methods:\n");
      hlds__hlds_out__hlds_out_typeclass_table__write_instance_methods_5_p_0(Stream_7, Methods_23, (MR_Integer) 1);
    }
    mercury__io__nl_3_p_0(Stream_7);
    if (!((MaybePredProcIds_17 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word PredProcIds_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePredProcIds_17, (MR_Integer) 0))));

      hlds__hlds_out__hlds_out_util__write_indent_4_p_0(Stream_7, (MR_Integer) 1);
      mercury__io__write_string_4_p_0(Stream_7, (MR_String) "% Procedures: ");
      mercury__io__write_4_p_0((MR_Word) (&hlds__hlds_out__hlds_out_typeclass_table_scalar_common_2[1]), Stream_7, ((MR_Box) (PredProcIds_24)));
      mercury__io__nl_3_p_0(Stream_7);
    }
    hlds__hlds_out__hlds_out_util__write_constraint_proof_map_7_p_0(Stream_7, (MR_Integer) 1, VarNamePrint_21, VarSet_18, ProofMap_19);
    mercury__io__nl_3_p_0(Stream_7);
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_typeclass_table__write_instance_methods_5_p_0(
  MR_Word Stream_1,
  MR_Word HeadVar__2_2,
  MR_Integer STATE_VARIABLE_CurMethodNum_0_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word Method_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Methods_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word PredOrFunc_16 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Method_12, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word MethodName_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Method_12, (MR_Integer) 1))));
      MR_Integer Arity_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Method_12, (MR_Integer) 3))));
      MR_String Var_34;
      MR_String Var_37;
      MR_String Var_50;
      MR_String Var_66;

      hlds__hlds_out__hlds_out_util__write_indent_4_p_0(Stream_1, (MR_Integer) 1);
      Var_34 = parse_tree__prog_out__pred_or_func_to_str_1_f_0(PredOrFunc_16);
      Var_37 = mdbcomp__sym_name__sym_name_to_string_1_f_0(MethodName_17);
      mercury__io__write_string_4_p_0(Stream_1, (MR_String) "% method ");
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_typeclass_table_scalar_common_3[0]), STATE_VARIABLE_CurMethodNum_0_3, &Var_50);
      mercury__io__write_string_4_p_0(Stream_1, Var_50);
      mercury__io__write_string_4_p_0(Stream_1, (MR_String) ", ");
      mercury__io__write_string_4_p_0(Stream_1, Var_34);
      mercury__io__write_string_4_p_0(Stream_1, (MR_String) " ");
      mercury__io__write_string_4_p_0(Stream_1, Var_37);
      mercury__io__write_string_4_p_0(Stream_1, (MR_String) "/");
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_typeclass_table_scalar_common_3[0]), Arity_19, &Var_66);
      mercury__io__write_string_4_p_0(Stream_1, Var_66);
      mercury__io__write_string_4_p_0(Stream_1, (MR_String) "\n");
      parse_tree__parse_tree_out__mercury_output_instance_method_4_p_0(Method_12, Stream_1);
      if (!((Methods_13 == (MR_Word) ((MR_Unsigned) 0U))))
      {
        MR_Integer STATE_VARIABLE_CurMethodNum_44_44;
        MR_Word next_value_of_HeadVar__2_2;
        MR_Integer next_value_of_STATE_VARIABLE_CurMethodNum_0_3;

        mercury__io__write_string_4_p_0(Stream_1, (MR_String) ",\n");
        STATE_VARIABLE_CurMethodNum_44_44 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_CurMethodNum_0_3 + (MR_Unsigned) 1);
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_2 = Methods_13;
        next_value_of_STATE_VARIABLE_CurMethodNum_0_3 = STATE_VARIABLE_CurMethodNum_44_44;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        STATE_VARIABLE_CurMethodNum_0_3 = next_value_of_STATE_VARIABLE_CurMethodNum_0_3;
        continue;
      }
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
  {
    MR_Box closure = closure_arg;

    hlds__hlds_out__hlds_out_typeclass_table__write_instance_defn_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_typeclass_table__write_instance_defns_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word ClassId_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word InstanceDefns_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
    MR_Word Var_19;
    MR_Box conv0_STATE_VARIABLE_IO_12;

    mercury__io__nl_3_p_0(Stream_7);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "% Instances for class ");
    parse_tree__prog_out__write_class_id_4_p_0(Stream_7, ClassId_8);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) ":\n");
    {
      Var_19 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_19, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_typeclass_table_scalar_common_4[2]));
      MR_hl_field(MR_mktag(0), Var_19, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_typeclass_table__write_instance_defns_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_19, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_19, 3) = ((MR_Box) (Info_6));
      MR_hl_field(MR_mktag(0), Var_19, 4) = ((MR_Box) (Stream_7));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_19, InstanceDefns_9, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_12);
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_typeclass_table__write_class_proc_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Stream_7)
{
  {
    MR_Word PredId_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Integer ProcId_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_Integer PredInt_9;
    MR_Integer ProcInt_10;
    MR_String Var_23;
    MR_String Var_33;

    hlds__hlds_pred__pred_id_to_int_2_p_0(PredId_5, &PredInt_9);
    hlds__hlds_pred__proc_id_to_int_2_p_0(ProcId_6, &ProcInt_10);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "proc(pred_id:");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_typeclass_table_scalar_common_3[0]), PredInt_9, &Var_23);
    mercury__io__write_string_4_p_0(Stream_7, Var_23);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) ", proc_id:");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_typeclass_table_scalar_common_3[0]), ProcInt_10, &Var_33);
    mercury__io__write_string_4_p_0(Stream_7, Var_33);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")");
  }
}

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_typeclass_table__hlds_output_fundep_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv1_HeadVar__2_2;

    conv1_HeadVar__2_2 = mercury__string__int_to_string_1_f_0(((MR_Integer) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_typeclass_table__hlds_output_fundep_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = mercury__string__int_to_string_1_f_0(((MR_Integer) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_typeclass_table__hlds_output_fundep_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Stream_7)
{
  {
    MR_Word Domain_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Range_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word DomainList_9;
    MR_Word RangeList_10;
    MR_Word DomainStrs_11;
    MR_Word RangeStrs_12;
    MR_String DomainStr_13;
    MR_String RangeStr_14;

    DomainList_9 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Domain_5);
    RangeList_10 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Range_6);
    DomainStrs_11 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__hlds_out__hlds_out_typeclass_table_scalar_common_1[4]), DomainList_9);
    RangeStrs_12 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__hlds_out__hlds_out_typeclass_table_scalar_common_1[5]), RangeList_10);
    DomainStr_13 = mercury__string__join_list_2_f_0((MR_String) ", ", DomainStrs_11);
    RangeStr_14 = mercury__string__join_list_2_f_0((MR_String) ", ", RangeStrs_12);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "(");
    mercury__io__write_string_4_p_0(Stream_7, DomainStr_13);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) " -> ");
    mercury__io__write_string_4_p_0(Stream_7, RangeStr_14);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")");
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_typeclass_table__write_class_defn_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;

    hlds__hlds_out__hlds_out_typeclass_table__write_class_proc_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_typeclass_table__write_class_defn_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__mercury_to_mercury__mercury_output_constraint_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_typeclass_table__write_class_defn_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;

    hlds__hlds_out__hlds_out_typeclass_table__hlds_output_fundep_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_typeclass_table__write_class_defn_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Word ClassId_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ClassDefn_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
    MR_Word Constraints_12;
    MR_Word FunDeps_13;
    MR_Word Vars_15;
    MR_Word Interface_18;
    MR_Word VarSet_19;
    MR_Word Context_20;
    MR_String DumpOptions_22;
    MR_Word VarNamePrint_23;
    MR_Word Var_47;

    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "% ");
    parse_tree__prog_out__write_class_id_4_p_0(Stream_7, ClassId_8);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) ":\n");
    Constraints_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn_9, (MR_Integer) 1))));
    FunDeps_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn_9, (MR_Integer) 2))));
    Vars_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn_9, (MR_Integer) 4))));
    Interface_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn_9, (MR_Integer) 7))));
    VarSet_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn_9, (MR_Integer) 8))));
    Context_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn_9, (MR_Integer) 9))));
    hlds__hlds_out__hlds_out_util__maybe_output_context_comment_6_p_0(Stream_7, (MR_Integer) 0, (MR_String) "", Context_20);
    DumpOptions_22 = ((MR_String) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 0))));
    succeeded = mercury__string__contains_char_2_p_0(DumpOptions_22, (MR_Char) 118);
    if (succeeded)
      VarNamePrint_23 = (MR_Integer) 1;
    else
      VarNamePrint_23 = (MR_Integer) 0;
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "% Vars: ");
    parse_tree__parse_tree_out_term__mercury_output_vars_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), VarSet_19, VarNamePrint_23, Vars_15, Stream_7);
    mercury__io__nl_3_p_0(Stream_7);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "% Functional dependencies: ");
    parse_tree__parse_tree_out_info__write_out_list_6_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_fundep_0), (MR_Word) (&hlds__hlds_out__hlds_out_typeclass_table_scalar_common_1[2]), (MR_String) ", ", FunDeps_13, Stream_7);
    mercury__io__nl_3_p_0(Stream_7);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "% Constraints: ");
    {
      Var_47 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_47, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_typeclass_table_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), Var_47, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_typeclass_table__write_class_defn_5_p_0_2));
      MR_hl_field(MR_mktag(0), Var_47, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_47, 3) = ((MR_Box) (VarSet_19));
      MR_hl_field(MR_mktag(0), Var_47, 4) = ((MR_Box) (VarNamePrint_23));
    }
    parse_tree__parse_tree_out_info__write_out_list_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), Var_47, (MR_String) ", ", Constraints_12, Stream_7);
    mercury__io__nl_3_p_0(Stream_7);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "% Class Methods: ");
    parse_tree__parse_tree_out_info__write_out_list_6_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&hlds__hlds_out__hlds_out_typeclass_table_scalar_common_1[3]), (MR_String) ", ", Interface_18, Stream_7);
    mercury__io__nl_3_p_0(Stream_7);
    mercury__io__nl_3_p_0(Stream_7);
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_typeclass_table__write_instances_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    hlds__hlds_out__hlds_out_typeclass_table__write_instance_defns_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

void MR_CALL 
hlds__hlds_out__hlds_out_typeclass_table__write_instances_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word InstanceTable_8)
{
  {
    MR_Word InstanceTableList_10;
    MR_Word Var_15;
    MR_Box conv0_STATE_VARIABLE_IO_16_16;

    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "%-------- Instances --------\n");
    mercury__map__to_assoc_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&hlds__hlds_out__hlds_out_typeclass_table_scalar_common_2[0]), InstanceTable_8, &InstanceTableList_10);
    {
      Var_15 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_15, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_typeclass_table_scalar_common_4[1]));
      MR_hl_field(MR_mktag(0), Var_15, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_typeclass_table__write_instances_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_15, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_15, 3) = ((MR_Box) (Info_6));
      MR_hl_field(MR_mktag(0), Var_15, 4) = ((MR_Box) (Stream_7));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&hlds__hlds_out__hlds_out_typeclass_table_scalar_common_1[1]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_15, InstanceTableList_10, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_16_16);
    mercury__io__nl_3_p_0(Stream_7);
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_typeclass_table__write_classes_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    hlds__hlds_out__hlds_out_typeclass_table__write_class_defn_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

void MR_CALL 
hlds__hlds_out__hlds_out_typeclass_table__write_classes_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word ClassTable_8)
{
  {
    MR_Word ClassTableList_10;
    MR_Word Var_15;
    MR_Box conv0_STATE_VARIABLE_IO_16_16;

    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "%-------- Classes --------\n");
    mercury__map__to_assoc_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0), ClassTable_8, &ClassTableList_10);
    {
      Var_15 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_15, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_typeclass_table_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), Var_15, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_typeclass_table__write_classes_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_15, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_15, 3) = ((MR_Box) (Info_6));
      MR_hl_field(MR_mktag(0), Var_15, 4) = ((MR_Box) (Stream_7));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&hlds__hlds_out__hlds_out_typeclass_table_scalar_common_1[0]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_15, ClassTableList_10, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_16_16);
    mercury__io__nl_3_p_0(Stream_7);
  }
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
