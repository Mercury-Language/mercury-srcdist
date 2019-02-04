/*
** Automatically generated from `add_mode.m'
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


// :- module hlds.make_hlds.add_mode.
// :- implementation.

/*
INIT mercury__hlds__make_hlds__add_mode__init
ENDINIT
*/

#include "hlds.make_hlds.add_mode.mih"


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
#include "hlds.make_hlds.mih"
#include "hlds.make_hlds_error.mih"
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
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.make_hlds.add_class.mih"
#include "hlds.make_hlds.make_hlds_passes.mih"
#include "hlds.make_hlds.qual_info.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_PseudoTypeInfo hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__field_types_circ_id_0_0[2];

static const MR_DuFunctorDesc hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__du_functor_desc_circ_id_0_0;

static const MR_DuFunctorDescPtr hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__du_stag_ordered_circ_id_0_0[1];

static const MR_DuPtagLayout hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__du_ptag_ordered_circ_id_0[1];

static const MR_DuFunctorDescPtr hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__du_name_ordered_circ_id_0[1];

static const MR_Integer hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__functor_number_map_circ_id_0[1];

static MR_Word MR_CALL 
hlds__make_hlds__add_mode__IntroducedFrom__func__report_circular_equiv_error__333__1_1_f_0(
  MR_Word LambdaHeadVar__1_26);

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
hlds__make_hlds__add_mode__mode_id_to_circ_id_1_f_0(
  MR_Word HeadVar__1_1);

static MR_Word MR_CALL 
hlds__make_hlds__add_mode__inst_id_to_circ_id_1_f_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
hlds__make_hlds__add_mode__check_for_cyclic_mode_8_p_0(
  MR_Word ModeTable_9,
  MR_Word OrigModeId_10,
  MR_Word ModeId0_11,
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
  MR_Word OrigModeId_7,
  MR_Word ModeId_8,
  MR_Word Expansions_9,
  MR_Word Context_10,
  MR_Word STATE_VARIABLE_Specs_0_12,
  MR_Word * STATE_VARIABLE_Specs_13);

static void MR_CALL 
hlds__make_hlds__add_mode__check_for_cyclic_inst_9_p_0(
  MR_Word UserInstTable_10,
  MR_Word OrigInstId_11,
  MR_Word InstId0_12,
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
  MR_Word OrigInstId_7,
  MR_Word InstId_8,
  MR_Word Expansions_9,
  MR_Word Context_10,
  MR_Word STATE_VARIABLE_Specs_0_12,
  MR_Word * STATE_VARIABLE_Specs_13);

static void MR_CALL 
hlds__make_hlds__add_mode__insts_add_11_p_0(
  MR_Word VarSet_1,
  MR_Word InstSymName_2,
  MR_Word InstParams_3,
  MR_Word MaybeForType_4,
  MR_Word HeadVar__5_5,
  MR_Word Context_6,
  MR_Word InstStatus_7,
  MR_Word STATE_VARIABLE_UserInstTable_0_8,
  MR_Word * STATE_VARIABLE_UserInstTable_9,
  MR_Word STATE_VARIABLE_Specs_0_10,
  MR_Word * STATE_VARIABLE_Specs_11);

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

static /* final */ const MR_Box hlds__make_hlds__add_mode_scalar_common_2[5][3];

static /* final */ const MR_Box hlds__make_hlds__add_mode_scalar_common_3[3][5];




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

static /* final */ const MR_Box hlds__make_hlds__add_mode_scalar_common_2[5][3] = {
  /* row 0 */
  {
    (MR_Box) (((((MR_Unsigned) ((MR_Integer) 47) << (MR_Integer) 1)) | (MR_Unsigned) ((MR_Integer) 1))),
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 1 */
  {
    ((MR_Box) (&hlds__make_hlds__add_mode_scalar_common_3[0])),
    ((MR_Box) (hlds__make_hlds__add_mode__report_circular_inst_equiv_error_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&hlds__make_hlds__add_mode_scalar_common_3[1])),
    ((MR_Box) (hlds__make_hlds__add_mode__report_circular_inst_equiv_error_6_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&hlds__make_hlds__add_mode_scalar_common_3[2])),
    ((MR_Box) (hlds__make_hlds__add_mode__report_circular_mode_equiv_error_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&hlds__make_hlds__add_mode_scalar_common_3[1])),
    ((MR_Box) (hlds__make_hlds__add_mode__report_circular_mode_equiv_error_6_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_mode_scalar_common_3[3][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0)),
    ((MR_Box) (&hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__type_ctor_info_circ_id_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__type_ctor_info_circ_id_0)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_id_0)),
    ((MR_Box) (&hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__type_ctor_info_circ_id_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_PseudoTypeInfo hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__field_types_circ_id_0_0[2] = {
  (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__du_functor_desc_circ_id_0_0 = {
  (MR_String) "circ_id",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
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
    (MR_Integer) 1,
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
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__make_hlds__add_mode____Unify____circ_id_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__add_mode____Compare____circ_id_0_0_10001)),
  (MR_String) "hlds.make_hlds.add_mode",
  (MR_String) "circ_id",
  {     hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__du_name_ordered_circ_id_0 },
  {     hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__du_ptag_ordered_circ_id_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__functor_number_map_circ_id_0
};

static MR_Word MR_CALL 
hlds__make_hlds__add_mode__IntroducedFrom__func__report_circular_equiv_error__333__1_1_f_0(
  MR_Word LambdaHeadVar__1_26)
{
  {
    MR_Word LambdaHeadVar__2_27;
    MR_Word Var_28;
    MR_Word SymName_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_26, (MR_Integer) 0))));
    MR_Integer Arity_53 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_26, (MR_Integer) 1))));

    {
      Var_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_28, 0) = ((MR_Box) (SymName_52));
      MR_hl_field(MR_mktag(0), Var_28, 1) = ((MR_Box) (Arity_53));
    }
    {
      LambdaHeadVar__2_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), LambdaHeadVar__2_27, 0) = ((MR_Box) ((MR_Unsigned) 9U));
      MR_hl_field(MR_mktag(3), LambdaHeadVar__2_27, 1) = ((MR_Box) (Var_28));
    }
    return LambdaHeadVar__2_27;
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
      MR_Integer ArgX2_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Integer ArgY2_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word Var_8;

      mdbcomp__sym_name____Compare____sym_name_0_0(&Var_8, ArgX1_4, ArgY1_5);
      succeeded = (Var_8 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_8;
      else
        mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, ArgX2_6, ArgY2_7);
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
hlds__make_hlds__add_mode__mode_id_to_circ_id_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word HeadVar__2_2;
    MR_Word SymName_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Integer Arity_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));

    {
      HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 0) = ((MR_Box) (SymName_3));
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 1) = ((MR_Box) (Arity_4));
    }
    return HeadVar__2_2;
  }
}

static MR_Word MR_CALL 
hlds__make_hlds__add_mode__inst_id_to_circ_id_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word HeadVar__2_2;
    MR_Word SymName_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Integer Arity_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));

    {
      HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 0) = ((MR_Box) (SymName_3));
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 1) = ((MR_Box) (Arity_4));
    }
    return HeadVar__2_2;
  }
}

void MR_CALL 
hlds__make_hlds__add_mode__module_add_mode_defn_7_p_0(
  MR_Word ItemModeDefnInfo_8,
  MR_Word ModeStatus_9,
  MR_Word * InvalidMode_10,
  MR_Word STATE_VARIABLE_ModuleInfo_0_21,
  MR_Word * STATE_VARIABLE_ModuleInfo_22,
  MR_Word STATE_VARIABLE_Specs_0_23,
  MR_Word * STATE_VARIABLE_Specs_24)
{
  {
    MR_bool succeeded;
    MR_Word Name_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeDefnInfo_8, (MR_Integer) 0))));
    MR_Word Params_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeDefnInfo_8, (MR_Integer) 1))));
    MR_Word ModeDefn_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeDefnInfo_8, (MR_Integer) 2))));
    MR_Word VarSet_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeDefnInfo_8, (MR_Integer) 3))));
    MR_Word Context_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeDefnInfo_8, (MR_Integer) 4))));
    MR_Word ModeTable0_19;
    MR_Word ModeTable_20;
    MR_Word Body_37;
    MR_Integer Arity_40;
    MR_Word ModeId_41;
    MR_Word ModeDefn_42;
    MR_Word Var_53;
    MR_Word STATE_VARIABLE_Specs_41_56;
    MR_Word STATE_VARIABLE_ModeTable_39_54;

    hlds__hlds_module__module_info_get_mode_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_21, &ModeTable0_19);
    Body_37 = (MR_Word) (ModeDefn_15);
    mercury__list__length_2_p_0((MR_Word) (&hlds__make_hlds__add_mode_scalar_common_1[0]), Params_14, &Arity_40);
    {
      ModeId_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ModeId_41, 0) = ((MR_Box) (Name_13));
      MR_hl_field(MR_mktag(0), ModeId_41, 1) = ((MR_Box) (Arity_40));
    }
    Var_53 = (MR_Word) (Body_37);
    {
      ModeDefn_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ModeDefn_42, 0) = ((MR_Box) (VarSet_16));
      MR_hl_field(MR_mktag(0), ModeDefn_42, 1) = ((MR_Box) (Params_14));
      MR_hl_field(MR_mktag(0), ModeDefn_42, 2) = ((MR_Box) (Var_53));
      MR_hl_field(MR_mktag(0), ModeDefn_42, 3) = ((MR_Box) (Context_17));
      MR_hl_field(MR_mktag(0), ModeDefn_42, 4) = ((MR_Box) (ModeStatus_9));
    }
    succeeded = hlds__hlds_inst_mode__mode_table_insert_4_p_0(ModeId_41, ModeDefn_42, ModeTable0_19, &STATE_VARIABLE_ModeTable_39_54);
    if (succeeded)
    {
      ModeTable_20 = STATE_VARIABLE_ModeTable_39_54;
      STATE_VARIABLE_Specs_41_56 = STATE_VARIABLE_Specs_0_23;
    }
    else
    {
      MR_Word InstModeStatus_43 = (MR_Word) (ModeStatus_9);

      if (((MR_tag((MR_Word) InstModeStatus_43)) == (MR_Integer) 1))
      {
        MR_Word InstModeImport_67 = ((MR_Word) ((MR_hl_field(MR_mktag(1), InstModeStatus_43, (MR_Integer) 0))));

        switch (MR_tag((MR_Word) InstModeImport_67)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(InstModeImport_67)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word ModeDefns_45;
                  MR_Word OrigModeDefn_46;
                  MR_Word OrigContext_50;
                  MR_Box conv0_OrigModeDefn_46;

                  hlds__hlds_inst_mode__mode_table_get_mode_defns_2_p_0(ModeTable0_19, &ModeDefns_45);
                  mercury__map__lookup_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_id_0), (MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_hlds_mode_defn_0), ModeDefns_45, ((MR_Box) (ModeId_41)), &conv0_OrigModeDefn_46);
                  OrigModeDefn_46 = ((MR_Word) (conv0_OrigModeDefn_46));
                  OrigContext_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrigModeDefn_46, (MR_Integer) 3))));
                  hlds__make_hlds_error__report_multiple_def_error_8_p_0(Name_13, Arity_40, (MR_String) "mode", Context_17, OrigContext_50, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_Specs_0_23, &STATE_VARIABLE_Specs_41_56);
                }
                break;
              case (MR_Integer) 1:
                STATE_VARIABLE_Specs_41_56 = STATE_VARIABLE_Specs_0_23;
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ModeDefns_45;
              MR_Word OrigModeDefn_46;
              MR_Word OrigContext_50;
              MR_Box conv0_OrigModeDefn_46;

              hlds__hlds_inst_mode__mode_table_get_mode_defns_2_p_0(ModeTable0_19, &ModeDefns_45);
              mercury__map__lookup_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_id_0), (MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_hlds_mode_defn_0), ModeDefns_45, ((MR_Box) (ModeId_41)), &conv0_OrigModeDefn_46);
              OrigModeDefn_46 = ((MR_Word) (conv0_OrigModeDefn_46));
              OrigContext_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrigModeDefn_46, (MR_Integer) 3))));
              hlds__make_hlds_error__report_multiple_def_error_8_p_0(Name_13, Arity_40, (MR_String) "mode", Context_17, OrigContext_50, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_Specs_0_23, &STATE_VARIABLE_Specs_41_56);
            }
            break;
        }
      }
      else
      {
        MR_Word ModeDefns_75;
        MR_Word OrigModeDefn_76;
        MR_Word OrigContext_80;
        MR_Box conv1_OrigModeDefn_76;

        hlds__hlds_inst_mode__mode_table_get_mode_defns_2_p_0(ModeTable0_19, &ModeDefns_75);
        mercury__map__lookup_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_id_0), (MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_hlds_mode_defn_0), ModeDefns_75, ((MR_Box) (ModeId_41)), &conv1_OrigModeDefn_76);
        OrigModeDefn_76 = ((MR_Word) (conv1_OrigModeDefn_76));
        OrigContext_80 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrigModeDefn_76, (MR_Integer) 3))));
        hlds__make_hlds_error__report_multiple_def_error_8_p_0(Name_13, Arity_40, (MR_String) "mode", Context_17, OrigContext_80, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_Specs_0_23, &STATE_VARIABLE_Specs_41_56);
      }
      ModeTable_20 = ModeTable0_19;
    }
    hlds__make_hlds__add_mode__check_for_cyclic_mode_8_p_0(ModeTable_20, ModeId_41, ModeId_41, (MR_Word) ((MR_Unsigned) 0U), Context_17, InvalidMode_10, STATE_VARIABLE_Specs_41_56, STATE_VARIABLE_Specs_24);
    hlds__hlds_module__module_info_set_mode_table_3_p_0(ModeTable_20, STATE_VARIABLE_ModuleInfo_0_21, STATE_VARIABLE_ModuleInfo_22);
  }
}

static void MR_CALL 
hlds__make_hlds__add_mode__check_for_cyclic_mode_8_p_0(
  MR_Word ModeTable_9,
  MR_Word OrigModeId_10,
  MR_Word ModeId0_11,
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
    succeeded = mercury__list__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_id_0), ((MR_Box) (ModeId0_11)), Expansions0_12);
    if (succeeded)
    {
      hlds__make_hlds__add_mode__report_circular_mode_equiv_error_6_p_0(OrigModeId_10, ModeId0_11, Expansions0_12, Context_13, STATE_VARIABLE_Specs_0_29, STATE_VARIABLE_Specs_30);
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
      succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_id_0), (MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_hlds_mode_defn_0), ModeDefns_16, ((MR_Box) (ModeId0_11)), &conv0_ModeDefn_17);
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
        MR_Word ModeId_27;
        MR_Word Expansions_28;
        MR_Word next_value_of_ModeId0_11;
        MR_Word next_value_of_Expansions0_12;

        Arity_26 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), Args_25);
        {
          ModeId_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ModeId_27, 0) = ((MR_Box) (Name_24));
          MR_hl_field(MR_mktag(0), ModeId_27, 1) = ((MR_Box) (Arity_26));
        }
        {
          Expansions_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Expansions_28, 0) = ((MR_Box) (ModeId0_11));
          MR_hl_field(MR_mktag(1), Expansions_28, 1) = ((MR_Box) (Expansions0_12));
        }
        // direct tailcall eliminated
        ;
        next_value_of_ModeId0_11 = ModeId_27;
        next_value_of_Expansions0_12 = Expansions_28;
        ModeId0_11 = next_value_of_ModeId0_11;
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
    MR_Word conv2_LambdaHeadVar__2_27;

    conv2_LambdaHeadVar__2_27 = hlds__make_hlds__add_mode__IntroducedFrom__func__report_circular_equiv_error__333__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv2_LambdaHeadVar__2_27));
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

    conv0_HeadVar__2_2 = hlds__make_hlds__add_mode__mode_id_to_circ_id_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
hlds__make_hlds__add_mode__report_circular_mode_equiv_error_6_p_0(
  MR_Word OrigModeId_7,
  MR_Word ModeId_8,
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
    MR_Word SymName_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrigModeId_7, (MR_Integer) 0))));
    MR_Integer Arity_26 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OrigModeId_7, (MR_Integer) 1))));
    MR_Word SymName_27;
    MR_Integer Arity_28;
    MR_Integer CastX_81;
    MR_Integer CastY_82;

    {
      Var_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_16, 0) = ((MR_Box) (SymName_25));
      MR_hl_field(MR_mktag(0), Var_16, 1) = ((MR_Box) (Arity_26));
    }
    SymName_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModeId_8, (MR_Integer) 0))));
    Arity_28 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ModeId_8, (MR_Integer) 1))));
    {
      Var_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_17, 0) = ((MR_Box) (SymName_27));
      MR_hl_field(MR_mktag(0), Var_17, 1) = ((MR_Box) (Arity_28));
    }
    Var_18 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_id_0), (MR_Word) (&hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__type_ctor_info_circ_id_0), (MR_Word) (&hlds__make_hlds__add_mode_scalar_common_2[3]), Expansions_9);
    CastX_81 = (MR_Integer) (Var_17);
    CastY_82 = (MR_Integer) (Var_16);
    succeeded = (CastX_81 == CastY_82);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word ArgX1_77 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_17, (MR_Integer) 0))));
      MR_Word ArgY1_78 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_16, (MR_Integer) 0))));
      MR_Integer ArgX2_79 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_17, (MR_Integer) 1))));
      MR_Integer ArgY2_80 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_16, (MR_Integer) 1))));

      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX1_77, ArgY1_78);
      if (succeeded)
        succeeded = (ArgX2_79 == ArgY2_80);
    }
    if (succeeded)
    {
      MR_String Kinds_38;
      MR_Word ExpansionPieces_39;
      MR_Word Pieces_42;
      MR_Word Msg_43;
      MR_Word Spec_44;
      MR_Word Var_49;
      MR_Word Var_52;
      MR_Word Var_53;
      MR_Word Var_55;
      MR_Word Var_56;
      MR_Word Var_64;
      MR_Word Var_65;
      MR_Word Var_69;
      MR_Box conv1_Kinds_38;

      conv1_Kinds_38 = parse_tree__error_util__choose_number_3_f_0((MR_Word) (&hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__type_ctor_info_circ_id_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_18, ((MR_Box) ((MR_String) "mode")), ((MR_Box) ((MR_String) "modes")));
      Kinds_38 = ((MR_String) (conv1_Kinds_38));
      ExpansionPieces_39 = mercury__list__map_2_f_0((MR_Word) (&hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__type_ctor_info_circ_id_0), (MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (&hlds__make_hlds__add_mode_scalar_common_2[4]), Var_18);
      {
        Var_53 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Var_53, 0) = ((MR_Box) (Kinds_38));
      }
      {
        Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (Var_53));
        MR_hl_field(MR_mktag(1), Var_52, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mode_scalar_common_1[20])));
        MR_hl_field(MR_mktag(1), Var_49, 1) = ((MR_Box) (Var_52));
      }
      Var_56 = parse_tree__error_util__component_list_to_pieces_2_f_0((MR_String) "and", ExpansionPieces_39);
      Var_55 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_56, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mode_scalar_common_1[17])));
      Pieces_42 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_49, Var_55);
      {
        Var_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_65, 0) = ((MR_Box) (Pieces_42));
      }
      {
        Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) (Var_65));
        MR_hl_field(MR_mktag(1), Var_64, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Msg_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Msg_43, 0) = ((MR_Box) (Context_10));
        MR_hl_field(MR_mktag(0), Msg_43, 1) = ((MR_Box) (Var_64));
      }
      {
        Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) (Msg_43));
        MR_hl_field(MR_mktag(1), Var_69, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Spec_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_44, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Spec_44, 1) = ((MR_Box) ((MR_Unsigned) 16U));
        MR_hl_field(MR_mktag(0), Spec_44, 2) = ((MR_Box) (Var_69));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_13 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_44));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_12));
      }
    }
    else
      *STATE_VARIABLE_Specs_13 = STATE_VARIABLE_Specs_0_12;
  }
}

void MR_CALL 
hlds__make_hlds__add_mode__module_add_inst_defn_7_p_0(
  MR_Word ItemInstDefnInfo_8,
  MR_Word InstStatus_9,
  MR_Word * InvalidInst_10,
  MR_Word STATE_VARIABLE_ModuleInfo_0_27,
  MR_Word * STATE_VARIABLE_ModuleInfo_28,
  MR_Word STATE_VARIABLE_Specs_0_29,
  MR_Word * STATE_VARIABLE_Specs_30)
{
  {
    MR_Word InstName_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstDefnInfo_8, (MR_Integer) 0))));
    MR_Word InstParams_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstDefnInfo_8, (MR_Integer) 1))));
    MR_Word MaybeForType_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstDefnInfo_8, (MR_Integer) 2))));
    MR_Word InstDefn_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstDefnInfo_8, (MR_Integer) 3))));
    MR_Word VarSet_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstDefnInfo_8, (MR_Integer) 4))));
    MR_Word Context_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstDefnInfo_8, (MR_Integer) 5))));
    MR_Word InstTable0_20;
    MR_Word UserInstTable0_21;
    MR_Word UserInstTable_22;
    MR_Word InstTable_23;
    MR_Integer InstArity_24;
    MR_Word InstId_25;
    MR_Word TestArgs_26;
    MR_Word STATE_VARIABLE_Specs_31_31;

    hlds__hlds_module__module_info_get_inst_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_27, &InstTable0_20);
    hlds__hlds_inst_mode__inst_table_get_user_insts_2_p_0(InstTable0_20, &UserInstTable0_21);
    hlds__make_hlds__add_mode__insts_add_11_p_0(VarSet_17, InstName_13, InstParams_14, MaybeForType_15, InstDefn_16, Context_18, InstStatus_9, UserInstTable0_21, &UserInstTable_22, STATE_VARIABLE_Specs_0_29, &STATE_VARIABLE_Specs_31_31);
    hlds__hlds_inst_mode__inst_table_set_user_insts_3_p_0(UserInstTable_22, InstTable0_20, &InstTable_23);
    hlds__hlds_module__module_info_set_inst_table_3_p_0(InstTable_23, STATE_VARIABLE_ModuleInfo_0_27, STATE_VARIABLE_ModuleInfo_28);
    InstArity_24 = mercury__list__length_1_f_0((MR_Word) (&hlds__make_hlds__add_mode_scalar_common_1[0]), InstParams_14);
    {
      InstId_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), InstId_25, 0) = ((MR_Box) (InstName_13));
      MR_hl_field(MR_mktag(0), InstId_25, 1) = ((MR_Box) (InstArity_24));
    }
    TestArgs_26 = mercury__list__duplicate_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), InstArity_24, ((MR_Box) ((MR_Unsigned) 4U)));
    hlds__make_hlds__add_mode__check_for_cyclic_inst_9_p_0(UserInstTable_22, InstId_25, InstId_25, TestArgs_26, (MR_Word) ((MR_Unsigned) 0U), Context_18, InvalidInst_10, STATE_VARIABLE_Specs_31_31, STATE_VARIABLE_Specs_30);
  }
}

static void MR_CALL 
hlds__make_hlds__add_mode__check_for_cyclic_inst_9_p_0(
  MR_Word UserInstTable_10,
  MR_Word OrigInstId_11,
  MR_Word InstId0_12,
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
    succeeded = mercury__list__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0), ((MR_Box) (InstId0_12)), Expansions0_14);
    if (succeeded)
    {
      hlds__make_hlds__add_mode__report_circular_inst_equiv_error_6_p_0(OrigInstId_11, InstId0_12, Expansions0_14, Context_15, STATE_VARIABLE_Specs_0_32, STATE_VARIABLE_Specs_33);
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

      succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0), (MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_hlds_inst_defn_0), UserInstTable_10, ((MR_Box) (InstId0_12)), &conv0_InstDefn_18);
      if (succeeded)
      {
        InstDefn_18 = ((MR_Word) (conv0_InstDefn_18));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        Params_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstDefn_18, (MR_Integer) 1))));
        Body_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstDefn_18, (MR_Integer) 2))));
        succeeded = ((MR_tag((MR_Word) Body_21)) == (MR_Integer) 1);
        if (succeeded)
        {
          EqvInst0_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Body_21, (MR_Integer) 0))));
          parse_tree__prog_mode__inst_substitute_arg_list_4_p_0(Params_20, Args0_13, EqvInst0_25, &EqvInst_26);
          succeeded = ((((MR_tag((MR_Word) EqvInst_26)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), EqvInst_26, (MR_Integer) 0))) == (MR_Integer) 4)));
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
      }
      if (succeeded)
      {
        MR_Integer Arity_29;
        MR_Word InstId_30;
        MR_Word Expansions_31;
        MR_Word next_value_of_InstId0_12;
        MR_Word next_value_of_Args0_13;
        MR_Word next_value_of_Expansions0_14;

        Arity_29 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), Args_28);
        {
          InstId_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), InstId_30, 0) = ((MR_Box) (Name_27));
          MR_hl_field(MR_mktag(0), InstId_30, 1) = ((MR_Box) (Arity_29));
        }
        {
          Expansions_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Expansions_31, 0) = ((MR_Box) (InstId0_12));
          MR_hl_field(MR_mktag(1), Expansions_31, 1) = ((MR_Box) (Expansions0_14));
        }
        // direct tailcall eliminated
        ;
        next_value_of_InstId0_12 = InstId_30;
        next_value_of_Args0_13 = Args_28;
        next_value_of_Expansions0_14 = Expansions_31;
        InstId0_12 = next_value_of_InstId0_12;
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
    MR_Word conv2_LambdaHeadVar__2_27;

    conv2_LambdaHeadVar__2_27 = hlds__make_hlds__add_mode__IntroducedFrom__func__report_circular_equiv_error__333__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv2_LambdaHeadVar__2_27));
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

    conv0_HeadVar__2_2 = hlds__make_hlds__add_mode__inst_id_to_circ_id_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
hlds__make_hlds__add_mode__report_circular_inst_equiv_error_6_p_0(
  MR_Word OrigInstId_7,
  MR_Word InstId_8,
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
    MR_Word SymName_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrigInstId_7, (MR_Integer) 0))));
    MR_Integer Arity_26 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OrigInstId_7, (MR_Integer) 1))));
    MR_Word SymName_27;
    MR_Integer Arity_28;
    MR_Integer CastX_81;
    MR_Integer CastY_82;

    {
      Var_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_16, 0) = ((MR_Box) (SymName_25));
      MR_hl_field(MR_mktag(0), Var_16, 1) = ((MR_Box) (Arity_26));
    }
    SymName_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstId_8, (MR_Integer) 0))));
    Arity_28 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), InstId_8, (MR_Integer) 1))));
    {
      Var_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_17, 0) = ((MR_Box) (SymName_27));
      MR_hl_field(MR_mktag(0), Var_17, 1) = ((MR_Box) (Arity_28));
    }
    Var_18 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0), (MR_Word) (&hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__type_ctor_info_circ_id_0), (MR_Word) (&hlds__make_hlds__add_mode_scalar_common_2[1]), Expansions_9);
    CastX_81 = (MR_Integer) (Var_17);
    CastY_82 = (MR_Integer) (Var_16);
    succeeded = (CastX_81 == CastY_82);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word ArgX1_77 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_17, (MR_Integer) 0))));
      MR_Word ArgY1_78 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_16, (MR_Integer) 0))));
      MR_Integer ArgX2_79 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_17, (MR_Integer) 1))));
      MR_Integer ArgY2_80 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_16, (MR_Integer) 1))));

      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX1_77, ArgY1_78);
      if (succeeded)
        succeeded = (ArgX2_79 == ArgY2_80);
    }
    if (succeeded)
    {
      MR_String Kinds_38;
      MR_Word ExpansionPieces_39;
      MR_Word Pieces_42;
      MR_Word Msg_43;
      MR_Word Spec_44;
      MR_Word Var_49;
      MR_Word Var_52;
      MR_Word Var_53;
      MR_Word Var_55;
      MR_Word Var_56;
      MR_Word Var_64;
      MR_Word Var_65;
      MR_Word Var_69;
      MR_Box conv1_Kinds_38;

      conv1_Kinds_38 = parse_tree__error_util__choose_number_3_f_0((MR_Word) (&hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__type_ctor_info_circ_id_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_18, ((MR_Box) ((MR_String) "inst")), ((MR_Box) ((MR_String) "insts")));
      Kinds_38 = ((MR_String) (conv1_Kinds_38));
      ExpansionPieces_39 = mercury__list__map_2_f_0((MR_Word) (&hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__type_ctor_info_circ_id_0), (MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (&hlds__make_hlds__add_mode_scalar_common_2[2]), Var_18);
      {
        Var_53 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Var_53, 0) = ((MR_Box) (Kinds_38));
      }
      {
        Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (Var_53));
        MR_hl_field(MR_mktag(1), Var_52, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mode_scalar_common_1[20])));
        MR_hl_field(MR_mktag(1), Var_49, 1) = ((MR_Box) (Var_52));
      }
      Var_56 = parse_tree__error_util__component_list_to_pieces_2_f_0((MR_String) "and", ExpansionPieces_39);
      Var_55 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_56, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mode_scalar_common_1[17])));
      Pieces_42 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_49, Var_55);
      {
        Var_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_65, 0) = ((MR_Box) (Pieces_42));
      }
      {
        Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) (Var_65));
        MR_hl_field(MR_mktag(1), Var_64, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Msg_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Msg_43, 0) = ((MR_Box) (Context_10));
        MR_hl_field(MR_mktag(0), Msg_43, 1) = ((MR_Box) (Var_64));
      }
      {
        Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) (Msg_43));
        MR_hl_field(MR_mktag(1), Var_69, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Spec_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_44, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Spec_44, 1) = ((MR_Box) ((MR_Unsigned) 16U));
        MR_hl_field(MR_mktag(0), Spec_44, 2) = ((MR_Box) (Var_69));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_13 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_44));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_12));
      }
    }
    else
      *STATE_VARIABLE_Specs_13 = STATE_VARIABLE_Specs_0_12;
  }
}

static void MR_CALL 
hlds__make_hlds__add_mode__insts_add_11_p_0(
  MR_Word VarSet_1,
  MR_Word InstSymName_2,
  MR_Word InstParams_3,
  MR_Word MaybeForType_4,
  MR_Word HeadVar__5_5,
  MR_Word Context_6,
  MR_Word InstStatus_7,
  MR_Word STATE_VARIABLE_UserInstTable_0_8,
  MR_Word * STATE_VARIABLE_UserInstTable_9,
  MR_Word STATE_VARIABLE_Specs_0_10,
  MR_Word * STATE_VARIABLE_Specs_11)
{
  {
    MR_bool succeeded;

    if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      {
        mercury__require__sorry_2_p_0((MR_String) "predicate \140hlds.make_hlds.add_mode.insts_add\'/11", (MR_String) "abstract insts not implemented");
        return;
      }
    }
    else
    {
      MR_Word EqvInst_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 0))));
      MR_Integer InstArity_35;
      MR_Word InstId_36;
      MR_Word IFTC_40;
      MR_Word InstDefn_61;
      MR_Word STATE_VARIABLE_Specs_132_132;
      MR_Word Var_133;
      MR_Word STATE_VARIABLE_UserInstTable_134_134;

      mercury__list__length_2_p_0((MR_Word) (&hlds__make_hlds__add_mode_scalar_common_1[0]), InstParams_3, &InstArity_35);
      {
        InstId_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), InstId_36, 0) = ((MR_Box) (InstSymName_2));
        MR_hl_field(MR_mktag(0), InstId_36, 1) = ((MR_Box) (InstArity_35));
      }
      switch (MR_tag((MR_Word) EqvInst_30)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_71;

            IFTC_40 = (MR_Word) ((MR_Unsigned) 0U);
            succeeded = ((MR_tag((MR_Word) MaybeForType_4)) == (MR_Integer) 1);
            if (succeeded)
            {
              Var_71 = hlds__status__inst_status_defined_in_this_module_1_f_0(InstStatus_7);
              succeeded = (Var_71 == (MR_Integer) 1);
            }
            if (succeeded)
            {
              MR_String Var_72;
              MR_Word Var_75;
              MR_Word Var_76;
              MR_Word Var_77;
              MR_Word Var_93;
              MR_Word Var_94;
              MR_Word Var_98;
              MR_Word ShortInstSymName_138;
              MR_Word Pieces_139;
              MR_Word Msg_140;
              MR_Word Spec_141;

              Var_72 = mdbcomp__sym_name__unqualify_name_1_f_0(InstSymName_2);
              {
                ShortInstSymName_138 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ShortInstSymName_138, 0) = ((MR_Box) (Var_72));
              }
              {
                Var_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_77, 0) = ((MR_Box) (ShortInstSymName_138));
                MR_hl_field(MR_mktag(0), Var_77, 1) = ((MR_Box) (InstArity_35));
              }
              {
                Var_76 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_76, 0) = ((MR_Box) ((MR_Unsigned) 9U));
                MR_hl_field(MR_mktag(3), Var_76, 1) = ((MR_Box) (Var_77));
              }
              {
                Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_75, 0) = ((MR_Box) (Var_76));
                MR_hl_field(MR_mktag(1), Var_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mode_scalar_common_1[9])));
              }
              {
                Pieces_139 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Pieces_139, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mode_scalar_common_1[18])));
                MR_hl_field(MR_mktag(1), Pieces_139, 1) = ((MR_Box) (Var_75));
              }
              {
                Var_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_94, 0) = ((MR_Box) (Pieces_139));
              }
              {
                Var_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_93, 0) = ((MR_Box) (Var_94));
                MR_hl_field(MR_mktag(1), Var_93, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Msg_140 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Msg_140, 0) = ((MR_Box) (Context_6));
                MR_hl_field(MR_mktag(0), Msg_140, 1) = ((MR_Box) (Var_93));
              }
              {
                Var_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_98, 0) = ((MR_Box) (Msg_140));
                MR_hl_field(MR_mktag(1), Var_98, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Spec_141 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Spec_141, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(0), Spec_141, 1) = ((MR_Box) ((MR_Unsigned) 16U));
                MR_hl_field(MR_mktag(0), Spec_141, 2) = ((MR_Box) (Var_98));
              }
              {
                STATE_VARIABLE_Specs_132_132 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_132_132, 0) = ((MR_Box) (Spec_141));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_132_132, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_10));
              }
            }
            else
              STATE_VARIABLE_Specs_132_132 = STATE_VARIABLE_Specs_0_10;
          }
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          {
            MR_Word Var_71;

            IFTC_40 = (MR_Word) ((MR_Unsigned) 0U);
            succeeded = ((MR_tag((MR_Word) MaybeForType_4)) == (MR_Integer) 1);
            if (succeeded)
            {
              Var_71 = hlds__status__inst_status_defined_in_this_module_1_f_0(InstStatus_7);
              succeeded = (Var_71 == (MR_Integer) 1);
            }
            if (succeeded)
            {
              MR_String Var_72;
              MR_Word Var_75;
              MR_Word Var_76;
              MR_Word Var_77;
              MR_Word Var_93;
              MR_Word Var_94;
              MR_Word Var_98;
              MR_Word ShortInstSymName_138;
              MR_Word Pieces_139;
              MR_Word Msg_140;
              MR_Word Spec_141;

              Var_72 = mdbcomp__sym_name__unqualify_name_1_f_0(InstSymName_2);
              {
                ShortInstSymName_138 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ShortInstSymName_138, 0) = ((MR_Box) (Var_72));
              }
              {
                Var_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_77, 0) = ((MR_Box) (ShortInstSymName_138));
                MR_hl_field(MR_mktag(0), Var_77, 1) = ((MR_Box) (InstArity_35));
              }
              {
                Var_76 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_76, 0) = ((MR_Box) ((MR_Unsigned) 9U));
                MR_hl_field(MR_mktag(3), Var_76, 1) = ((MR_Box) (Var_77));
              }
              {
                Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_75, 0) = ((MR_Box) (Var_76));
                MR_hl_field(MR_mktag(1), Var_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mode_scalar_common_1[9])));
              }
              {
                Pieces_139 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Pieces_139, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mode_scalar_common_1[18])));
                MR_hl_field(MR_mktag(1), Pieces_139, 1) = ((MR_Box) (Var_75));
              }
              {
                Var_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_94, 0) = ((MR_Box) (Pieces_139));
              }
              {
                Var_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_93, 0) = ((MR_Box) (Var_94));
                MR_hl_field(MR_mktag(1), Var_93, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Msg_140 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Msg_140, 0) = ((MR_Box) (Context_6));
                MR_hl_field(MR_mktag(0), Msg_140, 1) = ((MR_Box) (Var_93));
              }
              {
                Var_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_98, 0) = ((MR_Box) (Msg_140));
                MR_hl_field(MR_mktag(1), Var_98, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Spec_141 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Spec_141, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(0), Spec_141, 1) = ((MR_Box) ((MR_Unsigned) 16U));
                MR_hl_field(MR_mktag(0), Spec_141, 2) = ((MR_Box) (Var_98));
              }
              {
                STATE_VARIABLE_Specs_132_132 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_132_132, 0) = ((MR_Box) (Spec_141));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_132_132, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_10));
              }
            }
            else
              STATE_VARIABLE_Specs_132_132 = STATE_VARIABLE_Specs_0_10;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), EqvInst_30, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              if ((MaybeForType_4 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_Word Here_41;

                IFTC_40 = (MR_Word) ((MR_Unsigned) 4U);
                Here_41 = hlds__status__inst_status_defined_in_this_module_1_f_0(InstStatus_7);
                switch (Here_41) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    STATE_VARIABLE_Specs_132_132 = STATE_VARIABLE_Specs_0_10;
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word ShortInstSymName_42;
                      MR_Word Pieces_43;
                      MR_Word Msg_45;
                      MR_Word Spec_47;
                      MR_String Var_101;
                      MR_Word Var_104;
                      MR_Word Var_105;
                      MR_Word Var_106;
                      MR_Word Var_119;
                      MR_Word Var_120;
                      MR_Word Var_122;
                      MR_Word Var_123;
                      MR_Word Var_130;

                      Var_101 = mdbcomp__sym_name__unqualify_name_1_f_0(InstSymName_2);
                      {
                        ShortInstSymName_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), ShortInstSymName_42, 0) = ((MR_Box) (Var_101));
                      }
                      {
                        Var_106 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), Var_106, 0) = ((MR_Box) (ShortInstSymName_42));
                        MR_hl_field(MR_mktag(0), Var_106, 1) = ((MR_Box) (InstArity_35));
                      }
                      {
                        Var_105 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), Var_105, 0) = ((MR_Box) ((MR_Unsigned) 9U));
                        MR_hl_field(MR_mktag(3), Var_105, 1) = ((MR_Box) (Var_106));
                      }
                      {
                        Var_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_104, 0) = ((MR_Box) (Var_105));
                        MR_hl_field(MR_mktag(1), Var_104, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mode_scalar_common_1[15])));
                      }
                      {
                        Pieces_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Pieces_43, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mode_scalar_common_1[19])));
                        MR_hl_field(MR_mktag(1), Pieces_43, 1) = ((MR_Box) (Var_104));
                      }
                      {
                        Var_123 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), Var_123, 0) = ((MR_Box) (Pieces_43));
                      }
                      {
                        Var_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_122, 0) = ((MR_Box) (Var_123));
                        MR_hl_field(MR_mktag(1), Var_122, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      }
                      {
                        Var_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_120, 0) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 47) << (MR_Integer) 1)) | (MR_Unsigned) ((MR_Integer) 1)));
                        MR_hl_field(MR_mktag(1), Var_120, 1) = ((MR_Box) (Var_122));
                      }
                      {
                        Var_119 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_119, 0) = ((MR_Box) (Var_120));
                        MR_hl_field(MR_mktag(1), Var_119, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      }
                      {
                        Msg_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), Msg_45, 0) = ((MR_Box) (Context_6));
                        MR_hl_field(MR_mktag(0), Msg_45, 1) = ((MR_Box) (Var_119));
                      }
                      {
                        Var_130 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_130, 0) = ((MR_Box) (Msg_45));
                        MR_hl_field(MR_mktag(1), Var_130, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      }
                      {
                        Spec_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), Spec_47, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mode_scalar_common_2[0])));
                        MR_hl_field(MR_mktag(0), Spec_47, 1) = ((MR_Box) ((MR_Unsigned) 16U));
                        MR_hl_field(MR_mktag(0), Spec_47, 2) = ((MR_Box) (Var_130));
                      }
                      {
                        STATE_VARIABLE_Specs_132_132 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_132_132, 0) = ((MR_Box) (Spec_47));
                        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_132_132, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_10));
                      }
                    }
                    break;
                }
              }
              else
              {
                MR_Word ForType_48 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeForType_4, (MR_Integer) 0))));

                {
                  IFTC_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), IFTC_40, 0) = ((MR_Box) (ForType_48));
                }
                STATE_VARIABLE_Specs_132_132 = STATE_VARIABLE_Specs_0_10;
              }
              break;
            case (MR_Integer) 1:
            case (MR_Integer) 2:
            case (MR_Integer) 3:
            case (MR_Integer) 4:
            case (MR_Integer) 5:
              {
                MR_Word Var_71;

                IFTC_40 = (MR_Word) ((MR_Unsigned) 0U);
                succeeded = ((MR_tag((MR_Word) MaybeForType_4)) == (MR_Integer) 1);
                if (succeeded)
                {
                  Var_71 = hlds__status__inst_status_defined_in_this_module_1_f_0(InstStatus_7);
                  succeeded = (Var_71 == (MR_Integer) 1);
                }
                if (succeeded)
                {
                  MR_String Var_72;
                  MR_Word Var_75;
                  MR_Word Var_76;
                  MR_Word Var_77;
                  MR_Word Var_93;
                  MR_Word Var_94;
                  MR_Word Var_98;
                  MR_Word ShortInstSymName_138;
                  MR_Word Pieces_139;
                  MR_Word Msg_140;
                  MR_Word Spec_141;

                  Var_72 = mdbcomp__sym_name__unqualify_name_1_f_0(InstSymName_2);
                  {
                    ShortInstSymName_138 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), ShortInstSymName_138, 0) = ((MR_Box) (Var_72));
                  }
                  {
                    Var_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_77, 0) = ((MR_Box) (ShortInstSymName_138));
                    MR_hl_field(MR_mktag(0), Var_77, 1) = ((MR_Box) (InstArity_35));
                  }
                  {
                    Var_76 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Var_76, 0) = ((MR_Box) ((MR_Unsigned) 9U));
                    MR_hl_field(MR_mktag(3), Var_76, 1) = ((MR_Box) (Var_77));
                  }
                  {
                    Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_75, 0) = ((MR_Box) (Var_76));
                    MR_hl_field(MR_mktag(1), Var_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mode_scalar_common_1[9])));
                  }
                  {
                    Pieces_139 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Pieces_139, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mode_scalar_common_1[18])));
                    MR_hl_field(MR_mktag(1), Pieces_139, 1) = ((MR_Box) (Var_75));
                  }
                  {
                    Var_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_94, 0) = ((MR_Box) (Pieces_139));
                  }
                  {
                    Var_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_93, 0) = ((MR_Box) (Var_94));
                    MR_hl_field(MR_mktag(1), Var_93, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    Msg_140 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Msg_140, 0) = ((MR_Box) (Context_6));
                    MR_hl_field(MR_mktag(0), Msg_140, 1) = ((MR_Box) (Var_93));
                  }
                  {
                    Var_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_98, 0) = ((MR_Box) (Msg_140));
                    MR_hl_field(MR_mktag(1), Var_98, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    Spec_141 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Spec_141, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(MR_mktag(0), Spec_141, 1) = ((MR_Box) ((MR_Unsigned) 16U));
                    MR_hl_field(MR_mktag(0), Spec_141, 2) = ((MR_Box) (Var_98));
                  }
                  {
                    STATE_VARIABLE_Specs_132_132 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_132_132, 0) = ((MR_Box) (Spec_141));
                    MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_132_132, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_10));
                  }
                }
                else
                  STATE_VARIABLE_Specs_132_132 = STATE_VARIABLE_Specs_0_10;
              }
              break;
          }
          break;
      }
      {
        Var_133 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_133, 0) = ((MR_Box) (EqvInst_30));
      }
      {
        InstDefn_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), InstDefn_61, 0) = ((MR_Box) (VarSet_1));
        MR_hl_field(MR_mktag(0), InstDefn_61, 1) = ((MR_Box) (InstParams_3));
        MR_hl_field(MR_mktag(0), InstDefn_61, 2) = ((MR_Box) (Var_133));
        MR_hl_field(MR_mktag(0), InstDefn_61, 3) = ((MR_Box) (IFTC_40));
        MR_hl_field(MR_mktag(0), InstDefn_61, 4) = ((MR_Box) (Context_6));
        MR_hl_field(MR_mktag(0), InstDefn_61, 5) = ((MR_Box) (InstStatus_7));
      }
      succeeded = mercury__map__insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0), (MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_hlds_inst_defn_0), ((MR_Box) (InstId_36)), ((MR_Box) (InstDefn_61)), STATE_VARIABLE_UserInstTable_0_8, &STATE_VARIABLE_UserInstTable_134_134);
      if (succeeded)
      {
        *STATE_VARIABLE_UserInstTable_9 = STATE_VARIABLE_UserInstTable_134_134;
        *STATE_VARIABLE_Specs_11 = STATE_VARIABLE_Specs_132_132;
      }
      else
      {
        MR_Word InstModeStatus_62 = (MR_Word) (InstStatus_7);
        MR_Word ReportDup_63;

        ReportDup_63 = hlds__make_hlds__add_mode__should_report_duplicate_inst_or_mode_1_f_0(InstModeStatus_62);
        switch (ReportDup_63) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *STATE_VARIABLE_Specs_11 = STATE_VARIABLE_Specs_132_132;
            break;
          case (MR_Integer) 1:
            {
              MR_Word OrigInstDefn_64;
              MR_Word OrigContext_65;
              MR_Box conv0_OrigInstDefn_64;

              mercury__map__lookup_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0), (MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_hlds_inst_defn_0), STATE_VARIABLE_UserInstTable_0_8, ((MR_Box) (InstId_36)), &conv0_OrigInstDefn_64);
              OrigInstDefn_64 = ((MR_Word) (conv0_OrigInstDefn_64));
              OrigContext_65 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrigInstDefn_64, (MR_Integer) 4))));
              hlds__make_hlds_error__report_multiple_def_error_8_p_0(InstSymName_2, InstArity_35, (MR_String) "inst", Context_6, OrigContext_65, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_Specs_132_132, STATE_VARIABLE_Specs_11);
            }
            break;
        }
        *STATE_VARIABLE_UserInstTable_9 = STATE_VARIABLE_UserInstTable_0_8;
      }
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
      MR_Word InstModeImport_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), InstModeStatus_3, (MR_Integer) 0))));

      switch (MR_tag((MR_Word) InstModeImport_6)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(InstModeImport_6)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              ReportDup_4 = (MR_Integer) 1;
              break;
            case (MR_Integer) 1:
              ReportDup_4 = (MR_Integer) 0;
              break;
          }
          break;
        case (MR_Integer) 1:
          ReportDup_4 = (MR_Integer) 1;
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
