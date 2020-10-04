/*
** Automatically generated from `add_mode.m'
** by the Mercury compiler,
** version 20.06.1-beta-2020-10-04
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


// :- module hlds.make_hlds.add_mode.
// :- implementation.

/*
INIT mercury__hlds__make_hlds__add_mode__init
ENDINIT
*/

#include "hlds.make_hlds.add_mode.mih"


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
#include "getopt_io.mih"
#include "hlds.mih"
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
#include "robdd.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
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
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
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
#include "hlds.make_hlds.mih"
#include "hlds.make_hlds_error.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.equiv_type.mih"
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
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.make_hlds.add_class.mih"
#include "hlds.make_hlds.make_hlds_passes.mih"
#include "hlds.make_hlds.qual_info.mih"




static const MR_PseudoTypeInfo hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__field_types_circ_id_0_0[2];

static const MR_DuFunctorDesc hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__du_functor_desc_circ_id_0_0;

static const MR_DuFunctorDescPtr hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__du_stag_ordered_circ_id_0_0[1];

static const MR_DuPtagLayout hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__du_ptag_ordered_circ_id_0[1];

static const MR_DuFunctorDescPtr hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__du_name_ordered_circ_id_0[1];

static const MR_Integer hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__functor_number_map_circ_id_0[1];

static MR_Word MR_CALL 
hlds__make_hlds__add_mode__IntroducedFrom__func__report_circular_equiv_error__358__1_1_f_0(
  MR_Word LambdaHeadVar__1_25);

static void MR_CALL 
hlds__make_hlds__add_mode____Compare____circ_id_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__make_hlds__add_mode____Unify____circ_id_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_Word MR_CALL 
hlds__make_hlds__add_mode__mode_ctor_to_circ_id_1_f_0(
  MR_Word HeadVar__1_1);

static MR_Word MR_CALL 
hlds__make_hlds__add_mode__inst_ctor_to_circ_id_1_f_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
hlds__make_hlds__add_mode__check_for_cyclic_mode_8_p_0(
  MR_Word ModeTable_9,
  MR_Word OrigModeCtor_10,
  MR_Word ModeCtor0_11,
  MR_Word Expansions0_12,
  MR_Word Context_13,
  MR_Word * InvalidMode_14,
  MR_Word STATE_VARIABLE_Specs_0_29,
  MR_Word * STATE_VARIABLE_Specs_30);

static MR_Box MR_CALL 
hlds__make_hlds__add_mode__report_circular_mode_equiv_error_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
hlds__make_hlds__add_mode__report_circular_mode_equiv_error_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__make_hlds__add_mode__report_circular_mode_equiv_error_6_p_0(
  MR_Word OrigModeCtor_7,
  MR_Word ModeCtor_8,
  MR_Word Expansions_9,
  MR_Word Context_10,
  MR_Word STATE_VARIABLE_Specs_0_12,
  MR_Word * STATE_VARIABLE_Specs_13);

static void MR_CALL 
hlds__make_hlds__add_mode__check_for_cyclic_inst_9_p_0(
  MR_Word UserInstTable_10,
  MR_Word OrigInstCtor_11,
  MR_Word InstCtor0_12,
  MR_Word Args0_13,
  MR_Word Expansions0_14,
  MR_Word Context_15,
  MR_Word * InvalidMode_16,
  MR_Word STATE_VARIABLE_Specs_0_32,
  MR_Word * STATE_VARIABLE_Specs_33);

static MR_Box MR_CALL 
hlds__make_hlds__add_mode__report_circular_inst_equiv_error_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
hlds__make_hlds__add_mode__report_circular_inst_equiv_error_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__make_hlds__add_mode__report_circular_inst_equiv_error_6_p_0(
  MR_Word OrigInstCtor_7,
  MR_Word InstCtor_8,
  MR_Word Expansions_9,
  MR_Word Context_10,
  MR_Word STATE_VARIABLE_Specs_0_12,
  MR_Word * STATE_VARIABLE_Specs_13);

static void MR_CALL 
hlds__make_hlds__add_mode__insts_add_11_p_0(
  MR_Word VarSet_12,
  MR_Word InstSymName_13,
  MR_Word InstParams_14,
  MR_Word MaybeForType_15,
  MR_Word HeadVar__5_5,
  MR_Word Context_17,
  MR_Word InstStatus_18,
  MR_Word STATE_VARIABLE_UserInstTable_0_51,
  MR_Word * STATE_VARIABLE_UserInstTable_52,
  MR_Word STATE_VARIABLE_Specs_0_53,
  MR_Word * STATE_VARIABLE_Specs_54);

static MR_Word MR_CALL 
hlds__make_hlds__add_mode__should_report_duplicate_inst_or_mode_1_f_0(
  MR_Word InstModeStatus_3);

static MR_bool MR_CALL 
hlds__make_hlds__add_mode____Unify____circ_id_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__add_mode____Compare____circ_id_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box hlds__make_hlds__add_mode_scalar_common_1[21][2];

static /* final */ const MR_Box hlds__make_hlds__add_mode_scalar_common_2[3][5];

static /* final */ const MR_Box hlds__make_hlds__add_mode_scalar_common_3[4][3];




static /* final */ const MR_Box hlds__make_hlds__add_mode_scalar_common_1[21][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "inst."))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mode_scalar_common_1[2]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mode_scalar_common_1[1])))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "bound"))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mode_scalar_common_1[4]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mode_scalar_common_1[3])))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "but it is not defined to be equivalent to a"))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mode_scalar_common_1[6]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mode_scalar_common_1[5])))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is specified to be for a given type constructor,"))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mode_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mode_scalar_common_1[7])))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "it is for."))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mode_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mode_scalar_common_1[1])))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "but does not declare what type constructor"))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mode_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mode_scalar_common_1[11])))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "includes references to function symbols,"))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mode_scalar_common_1[14]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mode_scalar_common_1[13])))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mode_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mode_scalar_common_1[1])))
  },
  /* row 18 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: inst"))
  },
  /* row 19 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Warning: inst"))
  },
  /* row 20 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: circular equivalence"))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_mode_scalar_common_2[3][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0)),
    ((MR_Box) (&hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__type_ctor_info_circ_id_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__type_ctor_info_circ_id_0)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_ctor_0)),
    ((MR_Box) (&hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__type_ctor_info_circ_id_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_mode_scalar_common_3[4][3] = {
  /* row 0 */
  {
    ((MR_Box) (&hlds__make_hlds__add_mode_scalar_common_2[0])),
    ((MR_Box) (hlds__make_hlds__add_mode__report_circular_inst_equiv_error_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&hlds__make_hlds__add_mode_scalar_common_2[1])),
    ((MR_Box) (hlds__make_hlds__add_mode__report_circular_inst_equiv_error_6_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&hlds__make_hlds__add_mode_scalar_common_2[2])),
    ((MR_Box) (hlds__make_hlds__add_mode__report_circular_mode_equiv_error_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&hlds__make_hlds__add_mode_scalar_common_2[1])),
    ((MR_Box) (hlds__make_hlds__add_mode__report_circular_mode_equiv_error_6_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_PseudoTypeInfo hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__field_types_circ_id_0_0[2] = {
  (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__du_functor_desc_circ_id_0_0 = {
  (MR_String) "circ_id",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__field_types_circ_id_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__du_stag_ordered_circ_id_0_0[1] = {
  &hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__du_functor_desc_circ_id_0_0
};

static const MR_DuPtagLayout hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__du_ptag_ordered_circ_id_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__du_stag_ordered_circ_id_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__du_name_ordered_circ_id_0[1] = {
  &hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__du_functor_desc_circ_id_0_0
};

static const MR_Integer hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__functor_number_map_circ_id_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__type_ctor_info_circ_id_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__make_hlds__add_mode____Unify____circ_id_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__add_mode____Compare____circ_id_0_0_10001)),
  (MR_String) "hlds.make_hlds.add_mode",
  (MR_String) "circ_id",
  {     hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__du_name_ordered_circ_id_0 },
  {     hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__du_ptag_ordered_circ_id_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__functor_number_map_circ_id_0
};

static MR_Word MR_CALL 
hlds__make_hlds__add_mode__IntroducedFrom__func__report_circular_equiv_error__358__1_1_f_0(
  MR_Word LambdaHeadVar__1_25)
{
  {
    MR_Word LambdaHeadVar__2_26;
    MR_Word Var_27;
    MR_Word SymName_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_25, (MR_Integer) 0))));
    MR_Integer Arity_48 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_25, (MR_Integer) 1))));

    {
      Var_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_27, 0) = ((MR_Box) (SymName_47));
      MR_hl_field(MR_mktag(0), Var_27, 1) = ((MR_Box) (Arity_48));
    }
    {
      LambdaHeadVar__2_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), LambdaHeadVar__2_26, 0) = ((MR_Box) ((MR_Unsigned) 9U));
      MR_hl_field(MR_mktag(3), LambdaHeadVar__2_26, 1) = ((MR_Box) (Var_27));
    }
    return LambdaHeadVar__2_26;
  }
}

static void MR_CALL 
hlds__make_hlds__add_mode____Compare____circ_id_0_0(
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
      MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word SubResult1_6;

      mdbcomp__sym_name____Compare____sym_name_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        succeeded = (ArgX2_7 < ArgY2_8);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 1;
        else
        {
          succeeded = (ArgX2_7 > ArgY2_8);
          if (succeeded)
            *HeadVar__1_1 = (MR_Integer) 2;
          else
            *HeadVar__1_1 = (MR_Integer) 0;
        }
      }
    }
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_mode____Unify____circ_id_0_0(
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
      MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Integer ArgY2_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));

      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
        succeeded = (ArgX2_5 == ArgY2_6);
    }
    return succeeded;
  }
}

static MR_Word MR_CALL 
hlds__make_hlds__add_mode__mode_ctor_to_circ_id_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word HeadVar__2_2;
    MR_Word SymName_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Integer Arity_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));

    {
      HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 0) = ((MR_Box) (SymName_3));
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 1) = ((MR_Box) (Arity_4));
    }
    return HeadVar__2_2;
  }
}

static MR_Word MR_CALL 
hlds__make_hlds__add_mode__inst_ctor_to_circ_id_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word HeadVar__2_2;
    MR_Word SymName_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Integer Arity_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));

    {
      HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 0) = ((MR_Box) (SymName_3));
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 1) = ((MR_Box) (Arity_4));
    }
    return HeadVar__2_2;
  }
}

void MR_CALL 
hlds__make_hlds__add_mode__module_add_mode_defn_8_p_0(
  MR_Word ItemModeDefnInfo_9,
  MR_Word ModeStatus_10,
  MR_Word STATE_VARIABLE_ModuleInfo_0_24,
  MR_Word * STATE_VARIABLE_ModuleInfo_25,
  MR_Word STATE_VARIABLE_FoundInvalidInstOrMode_0_26,
  MR_Word * STATE_VARIABLE_FoundInvalidInstOrMode_27,
  MR_Word STATE_VARIABLE_Specs_0_28,
  MR_Word * STATE_VARIABLE_Specs_29)
{
  {
    MR_bool succeeded;
    MR_Word Name_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeDefnInfo_9, (MR_Integer) 0))));
    MR_Word Params_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeDefnInfo_9, (MR_Integer) 1))));
    MR_Word MaybeAbstractModeDefn_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeDefnInfo_9, (MR_Integer) 2))));
    MR_Word VarSet_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeDefnInfo_9, (MR_Integer) 3))));
    MR_Word Context_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeDefnInfo_9, (MR_Integer) 4))));

    if ((MaybeAbstractModeDefn_16 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_ModuleInfo_25 = STATE_VARIABLE_ModuleInfo_0_24;
      *STATE_VARIABLE_FoundInvalidInstOrMode_27 = STATE_VARIABLE_FoundInvalidInstOrMode_0_26;
      *STATE_VARIABLE_Specs_29 = STATE_VARIABLE_Specs_0_28;
    }
    else
    {
      MR_Word ModeDefn_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeAbstractModeDefn_16, (MR_Integer) 0))));
      MR_Word ModeTable0_21;
      MR_Word InvalidMode_22;
      MR_Word ModeTable_23;
      MR_Integer Arity_46;
      MR_Word ModeCtor_47;
      MR_Word EqvMode_48;
      MR_Word HldsModeBody_49;
      MR_Word ModeDefn_50;
      MR_Word STATE_VARIABLE_Specs_43_64;
      MR_Word STATE_VARIABLE_ModeTable_41_62;

      hlds__hlds_module__module_info_get_mode_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_24, &ModeTable0_21);
      mercury__list__length_2_p_0((MR_Word) (&hlds__make_hlds__add_mode_scalar_common_1[0]), Params_15, &Arity_46);
      {
        ModeCtor_47 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ModeCtor_47, 0) = ((MR_Box) (Name_14));
        MR_hl_field(MR_mktag(0), ModeCtor_47, 1) = ((MR_Box) (Arity_46));
      }
      EqvMode_48 = (MR_Word) (ModeDefn_20);
      HldsModeBody_49 = (MR_Word) (EqvMode_48);
      {
        ModeDefn_50 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ModeDefn_50, 0) = ((MR_Box) (VarSet_17));
        MR_hl_field(MR_mktag(0), ModeDefn_50, 1) = ((MR_Box) (Params_15));
        MR_hl_field(MR_mktag(0), ModeDefn_50, 2) = ((MR_Box) (HldsModeBody_49));
        MR_hl_field(MR_mktag(0), ModeDefn_50, 3) = ((MR_Box) (Context_18));
        MR_hl_field(MR_mktag(0), ModeDefn_50, 4) = ((MR_Box) (ModeStatus_10));
      }
      succeeded = hlds__hlds_inst_mode__mode_table_insert_4_p_0(ModeCtor_47, ModeDefn_50, ModeTable0_21, &STATE_VARIABLE_ModeTable_41_62);
      if (succeeded)
      {
        ModeTable_23 = STATE_VARIABLE_ModeTable_41_62;
        STATE_VARIABLE_Specs_43_64 = STATE_VARIABLE_Specs_0_28;
      }
      else
      {
        MR_Word InstModeStatus_51 = (MR_Word) (ModeStatus_10);

        if (((MR_tag((MR_Word) InstModeStatus_51)) == (MR_Integer) 1))
        {
          MR_Word InstModeImport_74 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), InstModeStatus_51, (MR_Integer) 0))) & (MR_Integer) 3);

          switch (InstModeImport_74) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
            case (MR_Integer) 0:
              {
                MR_Word ModeDefns_53;
                MR_Word OrigModeDefn_54;
                MR_Word OrigContext_58;
                MR_Box conv0_OrigModeDefn_54;

                hlds__hlds_inst_mode__mode_table_get_mode_defns_2_p_0(ModeTable0_21, &ModeDefns_53);
                mercury__map__lookup_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_ctor_0), (MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_hlds_mode_defn_0), ModeDefns_53, ((MR_Box) (ModeCtor_47)), &conv0_OrigModeDefn_54);
                OrigModeDefn_54 = ((MR_Word) (conv0_OrigModeDefn_54));
                OrigContext_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrigModeDefn_54, (MR_Integer) 3))));
                hlds__make_hlds_error__report_multiple_def_error_8_p_0(Name_14, Arity_46, (MR_String) "mode", Context_18, OrigContext_58, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_Specs_0_28, &STATE_VARIABLE_Specs_43_64);
              }
              break;
            case (MR_Integer) 2:
              STATE_VARIABLE_Specs_43_64 = STATE_VARIABLE_Specs_0_28;
              break;
          }
        }
        else
        {
          MR_Word ModeDefns_81;
          MR_Word OrigModeDefn_82;
          MR_Word OrigContext_86;
          MR_Box conv1_OrigModeDefn_82;

          hlds__hlds_inst_mode__mode_table_get_mode_defns_2_p_0(ModeTable0_21, &ModeDefns_81);
          mercury__map__lookup_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_ctor_0), (MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_hlds_mode_defn_0), ModeDefns_81, ((MR_Box) (ModeCtor_47)), &conv1_OrigModeDefn_82);
          OrigModeDefn_82 = ((MR_Word) (conv1_OrigModeDefn_82));
          OrigContext_86 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrigModeDefn_82, (MR_Integer) 3))));
          hlds__make_hlds_error__report_multiple_def_error_8_p_0(Name_14, Arity_46, (MR_String) "mode", Context_18, OrigContext_86, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_Specs_0_28, &STATE_VARIABLE_Specs_43_64);
        }
        ModeTable_23 = ModeTable0_21;
      }
      hlds__make_hlds__add_mode__check_for_cyclic_mode_8_p_0(ModeTable_23, ModeCtor_47, ModeCtor_47, (MR_Word) ((MR_Unsigned) 0U), Context_18, &InvalidMode_22, STATE_VARIABLE_Specs_43_64, STATE_VARIABLE_Specs_29);
      hlds__hlds_module__module_info_set_mode_table_3_p_0(ModeTable_23, STATE_VARIABLE_ModuleInfo_0_24, STATE_VARIABLE_ModuleInfo_25);
      switch (InvalidMode_22) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *STATE_VARIABLE_FoundInvalidInstOrMode_27 = STATE_VARIABLE_FoundInvalidInstOrMode_0_26;
          break;
        case (MR_Integer) 1:
          *STATE_VARIABLE_FoundInvalidInstOrMode_27 = (MR_Integer) 1;
          break;
      }
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_mode__check_for_cyclic_mode_8_p_0(
  MR_Word ModeTable_9,
  MR_Word OrigModeCtor_10,
  MR_Word ModeCtor0_11,
  MR_Word Expansions0_12,
  MR_Word Context_13,
  MR_Word * InvalidMode_14,
  MR_Word STATE_VARIABLE_Specs_0_29,
  MR_Word * STATE_VARIABLE_Specs_30)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    succeeded = mercury__list__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_ctor_0), ((MR_Box) (ModeCtor0_11)), Expansions0_12);
    if (succeeded)
    {
      hlds__make_hlds__add_mode__report_circular_mode_equiv_error_6_p_0(OrigModeCtor_10, ModeCtor0_11, Expansions0_12, Context_13, STATE_VARIABLE_Specs_0_29, STATE_VARIABLE_Specs_30);
      *InvalidMode_14 = (MR_Integer) 1;
    }
    else
    {
      MR_Word ModeDefns_16;
      MR_Word Name_24;
      MR_Word Args_25;
      MR_Word ModeDefn_17;
      MR_Word Body_20;
      MR_Word EqvMode_23;
      MR_Box conv0_ModeDefn_17;

      hlds__hlds_inst_mode__mode_table_get_mode_defns_2_p_0(ModeTable_9, &ModeDefns_16);
      succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_ctor_0), (MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_hlds_mode_defn_0), ModeDefns_16, ((MR_Box) (ModeCtor0_11)), &conv0_ModeDefn_17);
      if (succeeded)
      {
        ModeDefn_17 = ((MR_Word) (conv0_ModeDefn_17));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        Body_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModeDefn_17, (MR_Integer) 2))));
        EqvMode_23 = (MR_Word) (Body_20);
        succeeded = ((MR_tag((MR_Word) EqvMode_23)) == (MR_Integer) 1);
        if (succeeded)
        {
          Name_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), EqvMode_23, (MR_Integer) 0))));
          Args_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), EqvMode_23, (MR_Integer) 1))));
        }
      }
      if (succeeded)
      {
        MR_Integer Arity_26;
        MR_Word ModeCtor_27;
        MR_Word Expansions_28;
        MR_Word next_value_of_ModeCtor0_11;
        MR_Word next_value_of_Expansions0_12;

        Arity_26 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), Args_25);
        {
          ModeCtor_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ModeCtor_27, 0) = ((MR_Box) (Name_24));
          MR_hl_field(MR_mktag(0), ModeCtor_27, 1) = ((MR_Box) (Arity_26));
        }
        {
          Expansions_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Expansions_28, 0) = ((MR_Box) (ModeCtor0_11));
          MR_hl_field(MR_mktag(1), Expansions_28, 1) = ((MR_Box) (Expansions0_12));
        }
        // direct tailcall eliminated
        ;
        next_value_of_ModeCtor0_11 = ModeCtor_27;
        next_value_of_Expansions0_12 = Expansions_28;
        ModeCtor0_11 = next_value_of_ModeCtor0_11;
        Expansions0_12 = next_value_of_Expansions0_12;
        continue;
      }
      else
      {
        *InvalidMode_14 = (MR_Integer) 0;
        *STATE_VARIABLE_Specs_30 = STATE_VARIABLE_Specs_0_29;
      }
    }
    break;
  }
}

static MR_Box MR_CALL 
hlds__make_hlds__add_mode__report_circular_mode_equiv_error_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv2_LambdaHeadVar__2_26;

    conv2_LambdaHeadVar__2_26 = hlds__make_hlds__add_mode__IntroducedFrom__func__report_circular_equiv_error__358__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv2_LambdaHeadVar__2_26));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
hlds__make_hlds__add_mode__report_circular_mode_equiv_error_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = hlds__make_hlds__add_mode__mode_ctor_to_circ_id_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
hlds__make_hlds__add_mode__report_circular_mode_equiv_error_6_p_0(
  MR_Word OrigModeCtor_7,
  MR_Word ModeCtor_8,
  MR_Word Expansions_9,
  MR_Word Context_10,
  MR_Word STATE_VARIABLE_Specs_0_12,
  MR_Word * STATE_VARIABLE_Specs_13)
{
  {
    MR_bool succeeded;
    MR_Word Var_16;
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Word SymName_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrigModeCtor_7, (MR_Integer) 0))));
    MR_Integer Arity_26 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OrigModeCtor_7, (MR_Integer) 1))));
    MR_Word SymName_27;
    MR_Integer Arity_28;
    MR_Integer CastX_76;
    MR_Integer CastY_77;

    {
      Var_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_16, 0) = ((MR_Box) (SymName_25));
      MR_hl_field(MR_mktag(0), Var_16, 1) = ((MR_Box) (Arity_26));
    }
    SymName_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModeCtor_8, (MR_Integer) 0))));
    Arity_28 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ModeCtor_8, (MR_Integer) 1))));
    {
      Var_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_17, 0) = ((MR_Box) (SymName_27));
      MR_hl_field(MR_mktag(0), Var_17, 1) = ((MR_Box) (Arity_28));
    }
    Var_18 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_ctor_0), (MR_Word) (&hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__type_ctor_info_circ_id_0), (MR_Word) (&hlds__make_hlds__add_mode_scalar_common_3[2]), Expansions_9);
    CastX_76 = (MR_Integer) (Var_17);
    CastY_77 = (MR_Integer) (Var_16);
    succeeded = (CastX_76 == CastY_77);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word ArgX1_72 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_17, (MR_Integer) 0))));
      MR_Word ArgY1_73 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_16, (MR_Integer) 0))));
      MR_Integer ArgX2_74 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_17, (MR_Integer) 1))));
      MR_Integer ArgY2_75 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_16, (MR_Integer) 1))));

      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX1_72, ArgY1_73);
      if (succeeded)
        succeeded = (ArgX2_74 == ArgY2_75);
    }
    if (succeeded)
    {
      MR_String Kinds_38;
      MR_Word ExpansionPieces_39;
      MR_Word Pieces_42;
      MR_Word Spec_43;
      MR_Word Var_48;
      MR_Word Var_51;
      MR_Word Var_52;
      MR_Word Var_54;
      MR_Word Var_55;
      MR_Box conv1_Kinds_38;

      conv1_Kinds_38 = parse_tree__error_util__choose_number_3_f_0((MR_Word) (&hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__type_ctor_info_circ_id_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_18, ((MR_Box) ((MR_String) "mode")), ((MR_Box) ((MR_String) "modes")));
      Kinds_38 = ((MR_String) (conv1_Kinds_38));
      ExpansionPieces_39 = mercury__list__map_2_f_0((MR_Word) (&hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__type_ctor_info_circ_id_0), (MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (&hlds__make_hlds__add_mode_scalar_common_3[3]), Var_18);
      {
        Var_52 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Var_52, 0) = ((MR_Box) (Kinds_38));
      }
      {
        Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (Var_52));
        MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mode_scalar_common_1[20])));
        MR_hl_field(MR_mktag(1), Var_48, 1) = ((MR_Box) (Var_51));
      }
      Var_55 = parse_tree__error_util__component_list_to_pieces_2_f_0((MR_String) "and", ExpansionPieces_39);
      Var_54 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_55, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mode_scalar_common_1[17])));
      Pieces_42 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_48, Var_54);
      {
        Spec_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_43, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_mode.report_circular_equiv_error\'/8"));
        MR_hl_field(MR_mktag(1), Spec_43, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_43, 2) = ((MR_Box) ((MR_Unsigned) 16U));
        MR_hl_field(MR_mktag(1), Spec_43, 3) = ((MR_Box) (Context_10));
        MR_hl_field(MR_mktag(1), Spec_43, 4) = ((MR_Box) (Pieces_42));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_13 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_43));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_12));
      }
    }
    else
      *STATE_VARIABLE_Specs_13 = STATE_VARIABLE_Specs_0_12;
  }
}

void MR_CALL 
hlds__make_hlds__add_mode__module_add_inst_defn_8_p_0(
  MR_Word ItemInstDefnInfo_9,
  MR_Word InstStatus_10,
  MR_Word STATE_VARIABLE_ModuleInfo_0_30,
  MR_Word * STATE_VARIABLE_ModuleInfo_31,
  MR_Word STATE_VARIABLE_FoundInvalidInstOrMode_0_32,
  MR_Word * STATE_VARIABLE_FoundInvalidInstOrMode_33,
  MR_Word STATE_VARIABLE_Specs_0_34,
  MR_Word * STATE_VARIABLE_Specs_35)
{
  {
    MR_Word InstName_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstDefnInfo_9, (MR_Integer) 0))));
    MR_Word InstParams_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstDefnInfo_9, (MR_Integer) 1))));
    MR_Word MaybeForType_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstDefnInfo_9, (MR_Integer) 2))));
    MR_Word MaybeAbstractInstDefn_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstDefnInfo_9, (MR_Integer) 3))));
    MR_Word VarSet_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstDefnInfo_9, (MR_Integer) 4))));
    MR_Word Context_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstDefnInfo_9, (MR_Integer) 5))));

    if ((MaybeAbstractInstDefn_17 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_ModuleInfo_31 = STATE_VARIABLE_ModuleInfo_0_30;
      *STATE_VARIABLE_FoundInvalidInstOrMode_33 = STATE_VARIABLE_FoundInvalidInstOrMode_0_32;
      *STATE_VARIABLE_Specs_35 = STATE_VARIABLE_Specs_0_34;
    }
    else
    {
      MR_Word InstDefn_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeAbstractInstDefn_17, (MR_Integer) 0))));
      MR_Word InstTable0_22;
      MR_Word UserInstTable0_23;
      MR_Word UserInstTable_24;
      MR_Word InstTable_25;
      MR_Integer InstArity_26;
      MR_Word InstCtor_27;
      MR_Word TestArgs_28;
      MR_Word InvalidInst_29;
      MR_Word STATE_VARIABLE_Specs_36_36;

      hlds__hlds_module__module_info_get_inst_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_30, &InstTable0_22);
      hlds__hlds_inst_mode__inst_table_get_user_insts_2_p_0(InstTable0_22, &UserInstTable0_23);
      hlds__make_hlds__add_mode__insts_add_11_p_0(VarSet_18, InstName_14, InstParams_15, MaybeForType_16, InstDefn_21, Context_19, InstStatus_10, UserInstTable0_23, &UserInstTable_24, STATE_VARIABLE_Specs_0_34, &STATE_VARIABLE_Specs_36_36);
      hlds__hlds_inst_mode__inst_table_set_user_insts_3_p_0(UserInstTable_24, InstTable0_22, &InstTable_25);
      hlds__hlds_module__module_info_set_inst_table_3_p_0(InstTable_25, STATE_VARIABLE_ModuleInfo_0_30, STATE_VARIABLE_ModuleInfo_31);
      InstArity_26 = mercury__list__length_1_f_0((MR_Word) (&hlds__make_hlds__add_mode_scalar_common_1[0]), InstParams_15);
      {
        InstCtor_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), InstCtor_27, 0) = ((MR_Box) (InstName_14));
        MR_hl_field(MR_mktag(0), InstCtor_27, 1) = ((MR_Box) (InstArity_26));
      }
      TestArgs_28 = mercury__list__duplicate_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), InstArity_26, ((MR_Box) ((MR_Unsigned) 4U)));
      hlds__make_hlds__add_mode__check_for_cyclic_inst_9_p_0(UserInstTable_24, InstCtor_27, InstCtor_27, TestArgs_28, (MR_Word) ((MR_Unsigned) 0U), Context_19, &InvalidInst_29, STATE_VARIABLE_Specs_36_36, STATE_VARIABLE_Specs_35);
      switch (InvalidInst_29) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *STATE_VARIABLE_FoundInvalidInstOrMode_33 = STATE_VARIABLE_FoundInvalidInstOrMode_0_32;
          break;
        case (MR_Integer) 1:
          *STATE_VARIABLE_FoundInvalidInstOrMode_33 = (MR_Integer) 1;
          break;
      }
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_mode__check_for_cyclic_inst_9_p_0(
  MR_Word UserInstTable_10,
  MR_Word OrigInstCtor_11,
  MR_Word InstCtor0_12,
  MR_Word Args0_13,
  MR_Word Expansions0_14,
  MR_Word Context_15,
  MR_Word * InvalidMode_16,
  MR_Word STATE_VARIABLE_Specs_0_32,
  MR_Word * STATE_VARIABLE_Specs_33)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    succeeded = mercury__list__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), ((MR_Box) (InstCtor0_12)), Expansions0_14);
    if (succeeded)
    {
      hlds__make_hlds__add_mode__report_circular_inst_equiv_error_6_p_0(OrigInstCtor_11, InstCtor0_12, Expansions0_14, Context_15, STATE_VARIABLE_Specs_0_32, STATE_VARIABLE_Specs_33);
      *InvalidMode_16 = (MR_Integer) 1;
    }
    else
    {
      MR_Word Name_27;
      MR_Word Args_28;
      MR_Word InstDefn_18;
      MR_Word Params_20;
      MR_Word Body_21;
      MR_Word EqvInst0_25;
      MR_Word EqvInst_26;
      MR_Word Var_35;
      MR_Box conv0_InstDefn_18;

      succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), (MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_hlds_inst_defn_0), UserInstTable_10, ((MR_Box) (InstCtor0_12)), &conv0_InstDefn_18);
      if (succeeded)
      {
        InstDefn_18 = ((MR_Word) (conv0_InstDefn_18));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        Params_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstDefn_18, (MR_Integer) 1))));
        Body_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstDefn_18, (MR_Integer) 2))));
        EqvInst0_25 = (MR_Word) (Body_21);
        parse_tree__prog_mode__inst_substitute_arg_list_4_p_0(Params_20, Args0_13, EqvInst0_25, &EqvInst_26);
        succeeded = ((((MR_tag((MR_Word) EqvInst_26)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), EqvInst_26, (MR_Integer) 0)))) == (MR_Integer) 4)));
        if (succeeded)
        {
          Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(3), EqvInst_26, (MR_Integer) 1))));
          succeeded = ((MR_tag((MR_Word) Var_35)) == (MR_Integer) 0);
          if (succeeded)
          {
            Name_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_35, (MR_Integer) 0))));
            Args_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_35, (MR_Integer) 1))));
          }
        }
      }
      if (succeeded)
      {
        MR_Integer Arity_29;
        MR_Word InstCtor_30;
        MR_Word Expansions_31;
        MR_Word next_value_of_InstCtor0_12;
        MR_Word next_value_of_Args0_13;
        MR_Word next_value_of_Expansions0_14;

        Arity_29 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), Args_28);
        {
          InstCtor_30 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), InstCtor_30, 0) = ((MR_Box) (Name_27));
          MR_hl_field(MR_mktag(0), InstCtor_30, 1) = ((MR_Box) (Arity_29));
        }
        {
          Expansions_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Expansions_31, 0) = ((MR_Box) (InstCtor0_12));
          MR_hl_field(MR_mktag(1), Expansions_31, 1) = ((MR_Box) (Expansions0_14));
        }
        // direct tailcall eliminated
        ;
        next_value_of_InstCtor0_12 = InstCtor_30;
        next_value_of_Args0_13 = Args_28;
        next_value_of_Expansions0_14 = Expansions_31;
        InstCtor0_12 = next_value_of_InstCtor0_12;
        Args0_13 = next_value_of_Args0_13;
        Expansions0_14 = next_value_of_Expansions0_14;
        continue;
      }
      else
      {
        *InvalidMode_16 = (MR_Integer) 0;
        *STATE_VARIABLE_Specs_33 = STATE_VARIABLE_Specs_0_32;
      }
    }
    break;
  }
}

static MR_Box MR_CALL 
hlds__make_hlds__add_mode__report_circular_inst_equiv_error_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv2_LambdaHeadVar__2_26;

    conv2_LambdaHeadVar__2_26 = hlds__make_hlds__add_mode__IntroducedFrom__func__report_circular_equiv_error__358__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv2_LambdaHeadVar__2_26));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
hlds__make_hlds__add_mode__report_circular_inst_equiv_error_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = hlds__make_hlds__add_mode__inst_ctor_to_circ_id_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
hlds__make_hlds__add_mode__report_circular_inst_equiv_error_6_p_0(
  MR_Word OrigInstCtor_7,
  MR_Word InstCtor_8,
  MR_Word Expansions_9,
  MR_Word Context_10,
  MR_Word STATE_VARIABLE_Specs_0_12,
  MR_Word * STATE_VARIABLE_Specs_13)
{
  {
    MR_bool succeeded;
    MR_Word Var_16;
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Word SymName_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrigInstCtor_7, (MR_Integer) 0))));
    MR_Integer Arity_26 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OrigInstCtor_7, (MR_Integer) 1))));
    MR_Word SymName_27;
    MR_Integer Arity_28;
    MR_Integer CastX_76;
    MR_Integer CastY_77;

    {
      Var_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_16, 0) = ((MR_Box) (SymName_25));
      MR_hl_field(MR_mktag(0), Var_16, 1) = ((MR_Box) (Arity_26));
    }
    SymName_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstCtor_8, (MR_Integer) 0))));
    Arity_28 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), InstCtor_8, (MR_Integer) 1))));
    {
      Var_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_17, 0) = ((MR_Box) (SymName_27));
      MR_hl_field(MR_mktag(0), Var_17, 1) = ((MR_Box) (Arity_28));
    }
    Var_18 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), (MR_Word) (&hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__type_ctor_info_circ_id_0), (MR_Word) (&hlds__make_hlds__add_mode_scalar_common_3[0]), Expansions_9);
    CastX_76 = (MR_Integer) (Var_17);
    CastY_77 = (MR_Integer) (Var_16);
    succeeded = (CastX_76 == CastY_77);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word ArgX1_72 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_17, (MR_Integer) 0))));
      MR_Word ArgY1_73 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_16, (MR_Integer) 0))));
      MR_Integer ArgX2_74 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_17, (MR_Integer) 1))));
      MR_Integer ArgY2_75 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_16, (MR_Integer) 1))));

      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX1_72, ArgY1_73);
      if (succeeded)
        succeeded = (ArgX2_74 == ArgY2_75);
    }
    if (succeeded)
    {
      MR_String Kinds_38;
      MR_Word ExpansionPieces_39;
      MR_Word Pieces_42;
      MR_Word Spec_43;
      MR_Word Var_48;
      MR_Word Var_51;
      MR_Word Var_52;
      MR_Word Var_54;
      MR_Word Var_55;
      MR_Box conv1_Kinds_38;

      conv1_Kinds_38 = parse_tree__error_util__choose_number_3_f_0((MR_Word) (&hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__type_ctor_info_circ_id_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_18, ((MR_Box) ((MR_String) "inst")), ((MR_Box) ((MR_String) "insts")));
      Kinds_38 = ((MR_String) (conv1_Kinds_38));
      ExpansionPieces_39 = mercury__list__map_2_f_0((MR_Word) (&hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__type_ctor_info_circ_id_0), (MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (&hlds__make_hlds__add_mode_scalar_common_3[1]), Var_18);
      {
        Var_52 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Var_52, 0) = ((MR_Box) (Kinds_38));
      }
      {
        Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (Var_52));
        MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mode_scalar_common_1[20])));
        MR_hl_field(MR_mktag(1), Var_48, 1) = ((MR_Box) (Var_51));
      }
      Var_55 = parse_tree__error_util__component_list_to_pieces_2_f_0((MR_String) "and", ExpansionPieces_39);
      Var_54 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_55, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mode_scalar_common_1[17])));
      Pieces_42 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_48, Var_54);
      {
        Spec_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_43, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_mode.report_circular_equiv_error\'/8"));
        MR_hl_field(MR_mktag(1), Spec_43, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_43, 2) = ((MR_Box) ((MR_Unsigned) 16U));
        MR_hl_field(MR_mktag(1), Spec_43, 3) = ((MR_Box) (Context_10));
        MR_hl_field(MR_mktag(1), Spec_43, 4) = ((MR_Box) (Pieces_42));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_13 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_43));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_12));
      }
    }
    else
      *STATE_VARIABLE_Specs_13 = STATE_VARIABLE_Specs_0_12;
  }
}

static void MR_CALL 
hlds__make_hlds__add_mode__insts_add_11_p_0(
  MR_Word VarSet_12,
  MR_Word InstSymName_13,
  MR_Word InstParams_14,
  MR_Word MaybeForType_15,
  MR_Word HeadVar__5_5,
  MR_Word Context_17,
  MR_Word InstStatus_18,
  MR_Word STATE_VARIABLE_UserInstTable_0_51,
  MR_Word * STATE_VARIABLE_UserInstTable_52,
  MR_Word STATE_VARIABLE_Specs_0_53,
  MR_Word * STATE_VARIABLE_Specs_54)
{
  {
    MR_bool succeeded;
    MR_Word EqvInst_16 = (MR_Word) (HeadVar__5_5);
    MR_Integer InstArity_21;
    MR_Word InstCtor_22;
    MR_Word IFTC_26;
    MR_Word InstDefn_45;
    MR_Word STATE_VARIABLE_Specs_106_106;
    MR_Word STATE_VARIABLE_UserInstTable_108_108;

    mercury__list__length_2_p_0((MR_Word) (&hlds__make_hlds__add_mode_scalar_common_1[0]), InstParams_14, &InstArity_21);
    {
      InstCtor_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), InstCtor_22, 0) = ((MR_Box) (InstSymName_13));
      MR_hl_field(MR_mktag(0), InstCtor_22, 1) = ((MR_Box) (InstArity_21));
    }
    switch (MR_tag((MR_Word) EqvInst_16)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Var_55;

          IFTC_26 = (MR_Word) ((MR_Unsigned) 0U);
          succeeded = (MaybeForType_15 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Var_55 = hlds__status__inst_status_defined_in_this_module_1_f_0(InstStatus_18);
            succeeded = (Var_55 == (MR_Integer) 1);
          }
          if (succeeded)
          {
            MR_String Var_56;
            MR_Word Var_59;
            MR_Word Var_60;
            MR_Word Var_61;
            MR_Word ShortInstSymName_112;
            MR_Word Pieces_113;
            MR_Word Spec_114;

            Var_56 = mdbcomp__sym_name__unqualify_name_1_f_0(InstSymName_13);
            {
              ShortInstSymName_112 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ShortInstSymName_112, 0) = ((MR_Box) (Var_56));
            }
            {
              Var_61 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_61, 0) = ((MR_Box) (ShortInstSymName_112));
              MR_hl_field(MR_mktag(0), Var_61, 1) = ((MR_Box) (InstArity_21));
            }
            {
              Var_60 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_60, 0) = ((MR_Box) ((MR_Unsigned) 9U));
              MR_hl_field(MR_mktag(3), Var_60, 1) = ((MR_Box) (Var_61));
            }
            {
              Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (Var_60));
              MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mode_scalar_common_1[9])));
            }
            {
              Pieces_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Pieces_113, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mode_scalar_common_1[18])));
              MR_hl_field(MR_mktag(1), Pieces_113, 1) = ((MR_Box) (Var_59));
            }
            {
              Spec_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Spec_114, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_mode.insts_add\'/11"));
              MR_hl_field(MR_mktag(1), Spec_114, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(1), Spec_114, 2) = ((MR_Box) ((MR_Unsigned) 16U));
              MR_hl_field(MR_mktag(1), Spec_114, 3) = ((MR_Box) (Context_17));
              MR_hl_field(MR_mktag(1), Spec_114, 4) = ((MR_Box) (Pieces_113));
            }
            {
              STATE_VARIABLE_Specs_106_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_106_106, 0) = ((MR_Box) (Spec_114));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_106_106, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_53));
            }
          }
          else
            STATE_VARIABLE_Specs_106_106 = STATE_VARIABLE_Specs_0_53;
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          MR_Word Var_55;

          IFTC_26 = (MR_Word) ((MR_Unsigned) 0U);
          succeeded = (MaybeForType_15 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Var_55 = hlds__status__inst_status_defined_in_this_module_1_f_0(InstStatus_18);
            succeeded = (Var_55 == (MR_Integer) 1);
          }
          if (succeeded)
          {
            MR_String Var_56;
            MR_Word Var_59;
            MR_Word Var_60;
            MR_Word Var_61;
            MR_Word ShortInstSymName_112;
            MR_Word Pieces_113;
            MR_Word Spec_114;

            Var_56 = mdbcomp__sym_name__unqualify_name_1_f_0(InstSymName_13);
            {
              ShortInstSymName_112 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ShortInstSymName_112, 0) = ((MR_Box) (Var_56));
            }
            {
              Var_61 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_61, 0) = ((MR_Box) (ShortInstSymName_112));
              MR_hl_field(MR_mktag(0), Var_61, 1) = ((MR_Box) (InstArity_21));
            }
            {
              Var_60 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_60, 0) = ((MR_Box) ((MR_Unsigned) 9U));
              MR_hl_field(MR_mktag(3), Var_60, 1) = ((MR_Box) (Var_61));
            }
            {
              Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (Var_60));
              MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mode_scalar_common_1[9])));
            }
            {
              Pieces_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Pieces_113, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mode_scalar_common_1[18])));
              MR_hl_field(MR_mktag(1), Pieces_113, 1) = ((MR_Box) (Var_59));
            }
            {
              Spec_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Spec_114, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_mode.insts_add\'/11"));
              MR_hl_field(MR_mktag(1), Spec_114, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(1), Spec_114, 2) = ((MR_Box) ((MR_Unsigned) 16U));
              MR_hl_field(MR_mktag(1), Spec_114, 3) = ((MR_Box) (Context_17));
              MR_hl_field(MR_mktag(1), Spec_114, 4) = ((MR_Box) (Pieces_113));
            }
            {
              STATE_VARIABLE_Specs_106_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_106_106, 0) = ((MR_Box) (Spec_114));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_106_106, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_53));
            }
          }
          else
            STATE_VARIABLE_Specs_106_106 = STATE_VARIABLE_Specs_0_53;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), EqvInst_16, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            if ((MaybeForType_15 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word Here_27;

              IFTC_26 = (MR_Word) ((MR_Unsigned) 4U);
              Here_27 = hlds__status__inst_status_defined_in_this_module_1_f_0(InstStatus_18);
              switch (Here_27) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  STATE_VARIABLE_Specs_106_106 = STATE_VARIABLE_Specs_0_53;
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word ShortInstSymName_28;
                    MR_Word Pieces_29;
                    MR_Word Spec_31;
                    MR_String Var_81;
                    MR_Word Var_84;
                    MR_Word Var_85;
                    MR_Word Var_86;
                    MR_Word Var_103;
                    MR_Word Var_104;

                    Var_81 = mdbcomp__sym_name__unqualify_name_1_f_0(InstSymName_13);
                    {
                      ShortInstSymName_28 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), ShortInstSymName_28, 0) = ((MR_Box) (Var_81));
                    }
                    {
                      Var_86 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Var_86, 0) = ((MR_Box) (ShortInstSymName_28));
                      MR_hl_field(MR_mktag(0), Var_86, 1) = ((MR_Box) (InstArity_21));
                    }
                    {
                      Var_85 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_85, 0) = ((MR_Box) ((MR_Unsigned) 9U));
                      MR_hl_field(MR_mktag(3), Var_85, 1) = ((MR_Box) (Var_86));
                    }
                    {
                      Var_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_84, 0) = ((MR_Box) (Var_85));
                      MR_hl_field(MR_mktag(1), Var_84, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mode_scalar_common_1[15])));
                    }
                    {
                      Pieces_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Pieces_29, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mode_scalar_common_1[19])));
                      MR_hl_field(MR_mktag(1), Pieces_29, 1) = ((MR_Box) (Var_84));
                    }
                    {
                      Var_104 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Var_104, 0) = ((MR_Box) (Context_17));
                      MR_hl_field(MR_mktag(0), Var_104, 1) = ((MR_Box) (Pieces_29));
                    }
                    {
                      Var_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_103, 0) = ((MR_Box) (Var_104));
                      MR_hl_field(MR_mktag(1), Var_103, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      Spec_31 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), Spec_31, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_mode.insts_add\'/11"));
                      MR_hl_field(MR_mktag(2), Spec_31, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 50) << 1)) | (MR_Unsigned) ((MR_Integer) 1)));
                      MR_hl_field(MR_mktag(2), Spec_31, 2) = ((MR_Box) ((MR_Unsigned) 4U));
                      MR_hl_field(MR_mktag(2), Spec_31, 3) = ((MR_Box) ((MR_Unsigned) 16U));
                      MR_hl_field(MR_mktag(2), Spec_31, 4) = ((MR_Box) (Var_103));
                    }
                    {
                      STATE_VARIABLE_Specs_106_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_106_106, 0) = ((MR_Box) (Spec_31));
                      MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_106_106, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_53));
                    }
                  }
                  break;
              }
            }
            else
            {
              MR_Word ForType_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeForType_15, (MR_Integer) 0))));

              {
                IFTC_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), IFTC_26, 0) = ((MR_Box) (ForType_32));
              }
              STATE_VARIABLE_Specs_106_106 = STATE_VARIABLE_Specs_0_53;
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
          case (MR_Integer) 3:
          case (MR_Integer) 4:
          case (MR_Integer) 5:
            {
              MR_Word Var_55;

              IFTC_26 = (MR_Word) ((MR_Unsigned) 0U);
              succeeded = (MaybeForType_15 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                Var_55 = hlds__status__inst_status_defined_in_this_module_1_f_0(InstStatus_18);
                succeeded = (Var_55 == (MR_Integer) 1);
              }
              if (succeeded)
              {
                MR_String Var_56;
                MR_Word Var_59;
                MR_Word Var_60;
                MR_Word Var_61;
                MR_Word ShortInstSymName_112;
                MR_Word Pieces_113;
                MR_Word Spec_114;

                Var_56 = mdbcomp__sym_name__unqualify_name_1_f_0(InstSymName_13);
                {
                  ShortInstSymName_112 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), ShortInstSymName_112, 0) = ((MR_Box) (Var_56));
                }
                {
                  Var_61 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_61, 0) = ((MR_Box) (ShortInstSymName_112));
                  MR_hl_field(MR_mktag(0), Var_61, 1) = ((MR_Box) (InstArity_21));
                }
                {
                  Var_60 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_60, 0) = ((MR_Box) ((MR_Unsigned) 9U));
                  MR_hl_field(MR_mktag(3), Var_60, 1) = ((MR_Box) (Var_61));
                }
                {
                  Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (Var_60));
                  MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mode_scalar_common_1[9])));
                }
                {
                  Pieces_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Pieces_113, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mode_scalar_common_1[18])));
                  MR_hl_field(MR_mktag(1), Pieces_113, 1) = ((MR_Box) (Var_59));
                }
                {
                  Spec_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Spec_114, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_mode.insts_add\'/11"));
                  MR_hl_field(MR_mktag(1), Spec_114, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(1), Spec_114, 2) = ((MR_Box) ((MR_Unsigned) 16U));
                  MR_hl_field(MR_mktag(1), Spec_114, 3) = ((MR_Box) (Context_17));
                  MR_hl_field(MR_mktag(1), Spec_114, 4) = ((MR_Box) (Pieces_113));
                }
                {
                  STATE_VARIABLE_Specs_106_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_106_106, 0) = ((MR_Box) (Spec_114));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_106_106, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_53));
                }
              }
              else
                STATE_VARIABLE_Specs_106_106 = STATE_VARIABLE_Specs_0_53;
            }
            break;
        }
        break;
    }
    {
      InstDefn_45 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), InstDefn_45, 0) = ((MR_Box) (VarSet_12));
      MR_hl_field(MR_mktag(0), InstDefn_45, 1) = ((MR_Box) (InstParams_14));
      MR_hl_field(MR_mktag(0), InstDefn_45, 2) = ((MR_Box) (HeadVar__5_5));
      MR_hl_field(MR_mktag(0), InstDefn_45, 3) = ((MR_Box) (IFTC_26));
      MR_hl_field(MR_mktag(0), InstDefn_45, 4) = ((MR_Box) (Context_17));
      MR_hl_field(MR_mktag(0), InstDefn_45, 5) = ((MR_Box) (InstStatus_18));
    }
    succeeded = mercury__map__insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), (MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_hlds_inst_defn_0), ((MR_Box) (InstCtor_22)), ((MR_Box) (InstDefn_45)), STATE_VARIABLE_UserInstTable_0_51, &STATE_VARIABLE_UserInstTable_108_108);
    if (succeeded)
    {
      *STATE_VARIABLE_UserInstTable_52 = STATE_VARIABLE_UserInstTable_108_108;
      *STATE_VARIABLE_Specs_54 = STATE_VARIABLE_Specs_106_106;
    }
    else
    {
      MR_Word InstModeStatus_46 = (MR_Word) (InstStatus_18);
      MR_Word ReportDup_47;

      ReportDup_47 = hlds__make_hlds__add_mode__should_report_duplicate_inst_or_mode_1_f_0(InstModeStatus_46);
      switch (ReportDup_47) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *STATE_VARIABLE_Specs_54 = STATE_VARIABLE_Specs_106_106;
          break;
        case (MR_Integer) 1:
          {
            MR_Word OrigInstDefn_48;
            MR_Word OrigContext_49;
            MR_Box conv0_OrigInstDefn_48;

            mercury__map__lookup_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), (MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_hlds_inst_defn_0), STATE_VARIABLE_UserInstTable_0_51, ((MR_Box) (InstCtor_22)), &conv0_OrigInstDefn_48);
            OrigInstDefn_48 = ((MR_Word) (conv0_OrigInstDefn_48));
            OrigContext_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrigInstDefn_48, (MR_Integer) 4))));
            hlds__make_hlds_error__report_multiple_def_error_8_p_0(InstSymName_13, InstArity_21, (MR_String) "inst", Context_17, OrigContext_49, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_Specs_106_106, STATE_VARIABLE_Specs_54);
          }
          break;
      }
      *STATE_VARIABLE_UserInstTable_52 = STATE_VARIABLE_UserInstTable_0_51;
    }
  }
}

static MR_Word MR_CALL 
hlds__make_hlds__add_mode__should_report_duplicate_inst_or_mode_1_f_0(
  MR_Word InstModeStatus_3)
{
  {
    MR_Word ReportDup_4;

    if (((MR_tag((MR_Word) InstModeStatus_3)) == (MR_Integer) 1))
    {
      MR_Word InstModeImport_6 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), InstModeStatus_3, (MR_Integer) 0))) & (MR_Integer) 3);

      switch (InstModeImport_6) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
        case (MR_Integer) 0:
          ReportDup_4 = (MR_Integer) 1;
          break;
        case (MR_Integer) 2:
          ReportDup_4 = (MR_Integer) 0;
          break;
      }
    }
    else
      ReportDup_4 = (MR_Integer) 1;
    return ReportDup_4;
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_mode____Unify____circ_id_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__make_hlds__add_mode____Unify____circ_id_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__make_hlds__add_mode____Compare____circ_id_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__make_hlds__add_mode____Compare____circ_id_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__hlds__make_hlds__add_mode__init(void)
{
}

void mercury__hlds__make_hlds__add_mode__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__type_ctor_info_circ_id_0);
}

void mercury__hlds__make_hlds__add_mode__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__hlds__make_hlds__add_mode__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module hlds.make_hlds.add_mode.
