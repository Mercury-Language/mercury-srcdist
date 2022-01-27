/*
** Automatically generated from `add_mode.m'
** by the Mercury compiler,
** version rotd-2017-02-22
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


/* :- module hlds.make_hlds.add_mode. */
/* :- implementation. */

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
#include "check_hlds.unify_proc.mih"
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
#include "hlds.make_hlds.mih"
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
#include "hlds.make_hlds.add_pred.mih"
#include "hlds.make_hlds.add_special_pred.mih"
#include "hlds.make_hlds.make_hlds_error.mih"
#include "hlds.make_hlds.make_hlds_passes.mih"
#include "hlds.make_hlds.qual_info.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_PseudoTypeInfo hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__field_types_circ_id_0_0[2];

static const MR_DuFunctorDesc hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__du_functor_desc_circ_id_0_0;

static const MR_DuFunctorDescPtr hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__du_stag_ordered_circ_id_0_0[1];

static const MR_DuPtagLayout hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__du_ptag_ordered_circ_id_0[1];

static const MR_DuFunctorDescPtr hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__du_name_ordered_circ_id_0[1];

static const MR_Integer hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__functor_number_map_circ_id_0[1];

static MR_bool MR_CALL 
hlds__make_hlds__add_mode____Unify____circ_id_0_0_10001(
  MR_Box hlds__make_hlds__add_mode__wrapper_arg_1,
  MR_Box hlds__make_hlds__add_mode__wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__add_mode____Compare____circ_id_0_0_10001(
  MR_Box * hlds__make_hlds__add_mode__wrapper_arg_1,
  MR_Box hlds__make_hlds__add_mode__wrapper_arg_2,
  MR_Box hlds__make_hlds__add_mode__wrapper_arg_3);

static MR_Word MR_CALL 
hlds__make_hlds__add_mode__IntroducedFrom__func__report_circular_equiv_error__311__1_1_f_0(
  MR_Word hlds__make_hlds__add_mode__LambdaHeadVar__1_26);

static void MR_CALL 
hlds__make_hlds__add_mode____Compare____circ_id_0_0(
  MR_Word * hlds__make_hlds__add_mode__HeadVar__1_1,
  MR_Word hlds__make_hlds__add_mode__HeadVar__2_2,
  MR_Word hlds__make_hlds__add_mode__HeadVar__3_3);

static MR_bool MR_CALL 
hlds__make_hlds__add_mode____Unify____circ_id_0_0(
  MR_Word hlds__make_hlds__add_mode__HeadVar__1_1,
  MR_Word hlds__make_hlds__add_mode__HeadVar__2_2);

static MR_Word MR_CALL 
hlds__make_hlds__add_mode__mode_id_to_circ_id_1_f_0(
  MR_Word hlds__make_hlds__add_mode__HeadVar__1_1);

static MR_Word MR_CALL 
hlds__make_hlds__add_mode__inst_id_to_circ_id_1_f_0(
  MR_Word hlds__make_hlds__add_mode__HeadVar__1_1);

static MR_Box MR_CALL 
hlds__make_hlds__add_mode__report_circular_mode_equiv_error_6_p_0_2(
  MR_Box hlds__make_hlds__add_mode__closure_arg,
  MR_Box hlds__make_hlds__add_mode__wrapper_arg_1);

static MR_Box MR_CALL 
hlds__make_hlds__add_mode__report_circular_mode_equiv_error_6_p_0_1(
  MR_Box hlds__make_hlds__add_mode__closure_arg,
  MR_Box hlds__make_hlds__add_mode__wrapper_arg_1);

static void MR_CALL 
hlds__make_hlds__add_mode__report_circular_mode_equiv_error_6_p_0(
  MR_Word hlds__make_hlds__add_mode__OrigModeId_7,
  MR_Word hlds__make_hlds__add_mode__ModeId_8,
  MR_Word hlds__make_hlds__add_mode__Expansions_9,
  MR_Word hlds__make_hlds__add_mode__Context_10,
  MR_Word hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_0_12,
  MR_Word * hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_13);

static MR_Box MR_CALL 
hlds__make_hlds__add_mode__report_circular_inst_equiv_error_6_p_0_2(
  MR_Box hlds__make_hlds__add_mode__closure_arg,
  MR_Box hlds__make_hlds__add_mode__wrapper_arg_1);

static MR_Box MR_CALL 
hlds__make_hlds__add_mode__report_circular_inst_equiv_error_6_p_0_1(
  MR_Box hlds__make_hlds__add_mode__closure_arg,
  MR_Box hlds__make_hlds__add_mode__wrapper_arg_1);

static void MR_CALL 
hlds__make_hlds__add_mode__report_circular_inst_equiv_error_6_p_0(
  MR_Word hlds__make_hlds__add_mode__OrigInstId_7,
  MR_Word hlds__make_hlds__add_mode__InstId_8,
  MR_Word hlds__make_hlds__add_mode__Expansions_9,
  MR_Word hlds__make_hlds__add_mode__Context_10,
  MR_Word hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_0_12,
  MR_Word * hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_13);

static void MR_CALL 
hlds__make_hlds__add_mode__check_for_cyclic_mode_8_p_0(
  MR_Word hlds__make_hlds__add_mode__ModeTable_9,
  MR_Word hlds__make_hlds__add_mode__OrigModeId_10,
  MR_Word hlds__make_hlds__add_mode__ModeId0_11,
  MR_Word hlds__make_hlds__add_mode__Expansions0_12,
  MR_Word hlds__make_hlds__add_mode__Context_13,
  MR_Word * hlds__make_hlds__add_mode__InvalidMode_14,
  MR_Word hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_0_29,
  MR_Word * hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_30);

static MR_Word MR_CALL 
hlds__make_hlds__add_mode__should_report_duplicate_inst_or_mode_1_f_0(
  MR_Word hlds__make_hlds__add_mode__InstModeStatus_3);

static void MR_CALL 
hlds__make_hlds__add_mode__check_for_cyclic_inst_9_p_0(
  MR_Word hlds__make_hlds__add_mode__UserInstTable_10,
  MR_Word hlds__make_hlds__add_mode__OrigInstId_11,
  MR_Word hlds__make_hlds__add_mode__InstId0_12,
  MR_Word hlds__make_hlds__add_mode__Args0_13,
  MR_Word hlds__make_hlds__add_mode__Expansions0_14,
  MR_Word hlds__make_hlds__add_mode__Context_15,
  MR_Word * hlds__make_hlds__add_mode__InvalidMode_16,
  MR_Word hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_0_32,
  MR_Word * hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_33);

static void MR_CALL 
hlds__make_hlds__add_mode__insts_add_11_p_0(
  MR_Word hlds__make_hlds__add_mode__VarSet_1,
  MR_Word hlds__make_hlds__add_mode__InstSymName_2,
  MR_Word hlds__make_hlds__add_mode__InstParams_3,
  MR_Word hlds__make_hlds__add_mode__MaybeForType_4,
  MR_Word hlds__make_hlds__add_mode__HeadVar__5_5,
  MR_Word hlds__make_hlds__add_mode__Context_6,
  MR_Word hlds__make_hlds__add_mode__InstStatus_7,
  MR_Word hlds__make_hlds__add_mode__STATE_VARIABLE_UserInstTable_0_8,
  MR_Word * hlds__make_hlds__add_mode__STATE_VARIABLE_UserInstTable_9,
  MR_Word hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_0_10,
  MR_Word * hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_11);


static /* final */ const MR_Box hlds__make_hlds__add_mode_scalar_common_1[16][2];

static /* final */ const MR_Box hlds__make_hlds__add_mode_scalar_common_2[3][5];

static /* final */ const MR_Box hlds__make_hlds__add_mode_scalar_common_3[4][3];




static /* final */ const MR_Box hlds__make_hlds__add_mode_scalar_common_1[16][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "inst."))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mode_scalar_common_1[2]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mode_scalar_common_1[1])))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "bound"))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mode_scalar_common_1[4]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mode_scalar_common_1[3])))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "but it is not defined to be equivalent to a"))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mode_scalar_common_1[6]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mode_scalar_common_1[5])))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is specified to be for a given type constructor,"))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mode_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mode_scalar_common_1[7])))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mode_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mode_scalar_common_1[9])))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mode_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mode_scalar_common_1[1])))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: inst"))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: circular equivalence"))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_mode_scalar_common_2[3][5] = {
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

static /* final */ const MR_Box hlds__make_hlds__add_mode_scalar_common_3[4][3] = {
  /* row 0 */
  {
    ((MR_Box) (&hlds__make_hlds__add_mode_scalar_common_2[0])),
    ((MR_Box) (hlds__make_hlds__add_mode__report_circular_inst_equiv_error_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&hlds__make_hlds__add_mode_scalar_common_2[1])),
    ((MR_Box) (hlds__make_hlds__add_mode__report_circular_inst_equiv_error_6_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&hlds__make_hlds__add_mode_scalar_common_2[2])),
    ((MR_Box) (hlds__make_hlds__add_mode__report_circular_mode_equiv_error_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&hlds__make_hlds__add_mode_scalar_common_2[1])),
    ((MR_Box) (hlds__make_hlds__add_mode__report_circular_mode_equiv_error_6_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_PseudoTypeInfo hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__field_types_circ_id_0_0[2] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__du_functor_desc_circ_id_0_0 = {
  (MR_String) "circ_id",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__field_types_circ_id_0_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__du_stag_ordered_circ_id_0_0[1] = {
  &hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__du_functor_desc_circ_id_0_0
};

static const MR_DuPtagLayout hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__du_ptag_ordered_circ_id_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__du_stag_ordered_circ_id_0_0
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
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
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

static MR_bool MR_CALL 
hlds__make_hlds__add_mode____Unify____circ_id_0_0_10001(
  MR_Box hlds__make_hlds__add_mode__wrapper_arg_1,
  MR_Box hlds__make_hlds__add_mode__wrapper_arg_2)
{
  {
    MR_bool hlds__make_hlds__add_mode__succeeded;

    {
      hlds__make_hlds__add_mode__succeeded = hlds__make_hlds__add_mode____Unify____circ_id_0_0(((MR_Word) hlds__make_hlds__add_mode__wrapper_arg_1), ((MR_Word) hlds__make_hlds__add_mode__wrapper_arg_2));
    }
    return hlds__make_hlds__add_mode__succeeded;
  }
}

static void MR_CALL 
hlds__make_hlds__add_mode____Compare____circ_id_0_0_10001(
  MR_Box * hlds__make_hlds__add_mode__wrapper_arg_1,
  MR_Box hlds__make_hlds__add_mode__wrapper_arg_2,
  MR_Box hlds__make_hlds__add_mode__wrapper_arg_3)
{
  {
    MR_Word hlds__make_hlds__add_mode__conv0_HeadVar__1_1;

    {
      hlds__make_hlds__add_mode____Compare____circ_id_0_0(&hlds__make_hlds__add_mode__conv0_HeadVar__1_1, ((MR_Word) hlds__make_hlds__add_mode__wrapper_arg_2), ((MR_Word) hlds__make_hlds__add_mode__wrapper_arg_3));
    }
    *hlds__make_hlds__add_mode__wrapper_arg_1 = ((MR_Box) (hlds__make_hlds__add_mode__conv0_HeadVar__1_1));
  }
}

static MR_Word MR_CALL 
hlds__make_hlds__add_mode__IntroducedFrom__func__report_circular_equiv_error__311__1_1_f_0(
  MR_Word hlds__make_hlds__add_mode__LambdaHeadVar__1_26)
{
  {
    MR_bool hlds__make_hlds__add_mode__succeeded;
    MR_Word hlds__make_hlds__add_mode__LambdaHeadVar__2_27;
    MR_Word hlds__make_hlds__add_mode__V_28_28;
    MR_Word hlds__make_hlds__add_mode__SymName_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__LambdaHeadVar__1_26, (MR_Integer) 0)));
    MR_Integer hlds__make_hlds__add_mode__Arity_52 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__LambdaHeadVar__1_26, (MR_Integer) 1)));

    {
      hlds__make_hlds__add_mode__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__V_28_28, 0) = ((MR_Box) (hlds__make_hlds__add_mode__SymName_51));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__V_28_28, 1) = ((MR_Box) (hlds__make_hlds__add_mode__Arity_52));
    }
    {
      hlds__make_hlds__add_mode__LambdaHeadVar__2_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mode__LambdaHeadVar__2_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mode__LambdaHeadVar__2_27, 1) = ((MR_Box) (hlds__make_hlds__add_mode__V_28_28));
    }
    return hlds__make_hlds__add_mode__LambdaHeadVar__2_27;
  }
}

static void MR_CALL 
hlds__make_hlds__add_mode____Compare____circ_id_0_0(
  MR_Word * hlds__make_hlds__add_mode__HeadVar__1_1,
  MR_Word hlds__make_hlds__add_mode__HeadVar__2_2,
  MR_Word hlds__make_hlds__add_mode__HeadVar__3_3)
{
  {
    MR_bool hlds__make_hlds__add_mode__succeeded;
    MR_Integer hlds__make_hlds__add_mode__CastX_9 = (MR_Integer) hlds__make_hlds__add_mode__HeadVar__2_2;
    MR_Integer hlds__make_hlds__add_mode__CastY_10 = (MR_Integer) hlds__make_hlds__add_mode__HeadVar__3_3;

    hlds__make_hlds__add_mode__succeeded = (hlds__make_hlds__add_mode__CastX_9 == hlds__make_hlds__add_mode__CastY_10);
    if (hlds__make_hlds__add_mode__succeeded)
      *hlds__make_hlds__add_mode__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word hlds__make_hlds__add_mode__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__HeadVar__2_2, (MR_Integer) 0)));
        MR_Integer hlds__make_hlds__add_mode__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word hlds__make_hlds__add_mode__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__HeadVar__3_3, (MR_Integer) 0)));
        MR_Integer hlds__make_hlds__add_mode__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word hlds__make_hlds__add_mode__V_8_8;

        {
          mdbcomp__sym_name____Compare____sym_name_0_0(&hlds__make_hlds__add_mode__V_8_8, hlds__make_hlds__add_mode__V_4_4, hlds__make_hlds__add_mode__V_6_6);
        }
        hlds__make_hlds__add_mode__succeeded = (hlds__make_hlds__add_mode__V_8_8 == (MR_Integer) 0);
        hlds__make_hlds__add_mode__succeeded = !(hlds__make_hlds__add_mode__succeeded);
        if (hlds__make_hlds__add_mode__succeeded)
          *hlds__make_hlds__add_mode__HeadVar__1_1 = hlds__make_hlds__add_mode__V_8_8;
        else
          {
            mercury__private_builtin__builtin_compare_int_3_p_0(hlds__make_hlds__add_mode__HeadVar__1_1, hlds__make_hlds__add_mode__V_5_5, hlds__make_hlds__add_mode__V_7_7);
          }
      }
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_mode____Unify____circ_id_0_0(
  MR_Word hlds__make_hlds__add_mode__HeadVar__1_1,
  MR_Word hlds__make_hlds__add_mode__HeadVar__2_2)
{
  {
    MR_bool hlds__make_hlds__add_mode__succeeded;
    MR_Integer hlds__make_hlds__add_mode__CastX_7 = (MR_Integer) hlds__make_hlds__add_mode__HeadVar__1_1;
    MR_Integer hlds__make_hlds__add_mode__CastY_8 = (MR_Integer) hlds__make_hlds__add_mode__HeadVar__2_2;

    hlds__make_hlds__add_mode__succeeded = (hlds__make_hlds__add_mode__CastX_7 == hlds__make_hlds__add_mode__CastY_8);
    if (hlds__make_hlds__add_mode__succeeded)
      hlds__make_hlds__add_mode__succeeded = MR_TRUE;
    else
      {
        MR_Word hlds__make_hlds__add_mode__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__HeadVar__1_1, (MR_Integer) 0)));
        MR_Integer hlds__make_hlds__add_mode__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word hlds__make_hlds__add_mode__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__HeadVar__2_2, (MR_Integer) 0)));
        MR_Integer hlds__make_hlds__add_mode__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__HeadVar__2_2, (MR_Integer) 1)));

        {
          hlds__make_hlds__add_mode__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(hlds__make_hlds__add_mode__V_3_3, hlds__make_hlds__add_mode__V_5_5);
        }
        if (hlds__make_hlds__add_mode__succeeded)
          hlds__make_hlds__add_mode__succeeded = (hlds__make_hlds__add_mode__V_4_4 == hlds__make_hlds__add_mode__V_6_6);
      }
    return hlds__make_hlds__add_mode__succeeded;
  }
}

static MR_Word MR_CALL 
hlds__make_hlds__add_mode__mode_id_to_circ_id_1_f_0(
  MR_Word hlds__make_hlds__add_mode__HeadVar__1_1)
{
  {
    MR_bool hlds__make_hlds__add_mode__succeeded;
    MR_Word hlds__make_hlds__add_mode__HeadVar__2_2;
    MR_Word hlds__make_hlds__add_mode__SymName_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__HeadVar__1_1, (MR_Integer) 0)));
    MR_Integer hlds__make_hlds__add_mode__Arity_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__HeadVar__1_1, (MR_Integer) 1)));

    {
      hlds__make_hlds__add_mode__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__HeadVar__2_2, 0) = ((MR_Box) (hlds__make_hlds__add_mode__SymName_3));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__HeadVar__2_2, 1) = ((MR_Box) (hlds__make_hlds__add_mode__Arity_4));
    }
    return hlds__make_hlds__add_mode__HeadVar__2_2;
  }
}

static MR_Word MR_CALL 
hlds__make_hlds__add_mode__inst_id_to_circ_id_1_f_0(
  MR_Word hlds__make_hlds__add_mode__HeadVar__1_1)
{
  {
    MR_bool hlds__make_hlds__add_mode__succeeded;
    MR_Word hlds__make_hlds__add_mode__HeadVar__2_2;
    MR_Word hlds__make_hlds__add_mode__SymName_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__HeadVar__1_1, (MR_Integer) 0)));
    MR_Integer hlds__make_hlds__add_mode__Arity_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__HeadVar__1_1, (MR_Integer) 1)));

    {
      hlds__make_hlds__add_mode__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__HeadVar__2_2, 0) = ((MR_Box) (hlds__make_hlds__add_mode__SymName_3));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__HeadVar__2_2, 1) = ((MR_Box) (hlds__make_hlds__add_mode__Arity_4));
    }
    return hlds__make_hlds__add_mode__HeadVar__2_2;
  }
}

static MR_Box MR_CALL 
hlds__make_hlds__add_mode__report_circular_mode_equiv_error_6_p_0_2(
  MR_Box hlds__make_hlds__add_mode__closure_arg,
  MR_Box hlds__make_hlds__add_mode__wrapper_arg_1)
{
  {
    MR_Box hlds__make_hlds__add_mode__wrapper_arg_2;
    MR_Box hlds__make_hlds__add_mode__closure = hlds__make_hlds__add_mode__closure_arg;
    MR_Word hlds__make_hlds__add_mode__conv2_LambdaHeadVar__2_27;

    {
      hlds__make_hlds__add_mode__conv2_LambdaHeadVar__2_27 = hlds__make_hlds__add_mode__IntroducedFrom__func__report_circular_equiv_error__311__1_1_f_0(((MR_Word) hlds__make_hlds__add_mode__wrapper_arg_1));
    }
    hlds__make_hlds__add_mode__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__add_mode__conv2_LambdaHeadVar__2_27));
    return hlds__make_hlds__add_mode__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
hlds__make_hlds__add_mode__report_circular_mode_equiv_error_6_p_0_1(
  MR_Box hlds__make_hlds__add_mode__closure_arg,
  MR_Box hlds__make_hlds__add_mode__wrapper_arg_1)
{
  {
    MR_Box hlds__make_hlds__add_mode__wrapper_arg_2;
    MR_Box hlds__make_hlds__add_mode__closure = hlds__make_hlds__add_mode__closure_arg;
    MR_Word hlds__make_hlds__add_mode__conv0_HeadVar__2_2;

    {
      hlds__make_hlds__add_mode__conv0_HeadVar__2_2 = hlds__make_hlds__add_mode__mode_id_to_circ_id_1_f_0(((MR_Word) hlds__make_hlds__add_mode__wrapper_arg_1));
    }
    hlds__make_hlds__add_mode__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__add_mode__conv0_HeadVar__2_2));
    return hlds__make_hlds__add_mode__wrapper_arg_2;
  }
}

static void MR_CALL 
hlds__make_hlds__add_mode__report_circular_mode_equiv_error_6_p_0(
  MR_Word hlds__make_hlds__add_mode__OrigModeId_7,
  MR_Word hlds__make_hlds__add_mode__ModeId_8,
  MR_Word hlds__make_hlds__add_mode__Expansions_9,
  MR_Word hlds__make_hlds__add_mode__Context_10,
  MR_Word hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_0_12,
  MR_Word * hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_13)
{
  {
    MR_bool hlds__make_hlds__add_mode__succeeded;
    MR_Word hlds__make_hlds__add_mode__V_16_16;
    MR_Word hlds__make_hlds__add_mode__V_17_17;
    MR_Word hlds__make_hlds__add_mode__V_18_18;
    MR_Word hlds__make_hlds__add_mode__SymName_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__OrigModeId_7, (MR_Integer) 0)));
    MR_Integer hlds__make_hlds__add_mode__Arity_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__OrigModeId_7, (MR_Integer) 1)));
    MR_Word hlds__make_hlds__add_mode__SymName_27;
    MR_Integer hlds__make_hlds__add_mode__Arity_28;
    MR_Integer hlds__make_hlds__add_mode__CastX_80;
    MR_Integer hlds__make_hlds__add_mode__CastY_81;

    {
      hlds__make_hlds__add_mode__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__V_16_16, 0) = ((MR_Box) (hlds__make_hlds__add_mode__SymName_25));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__V_16_16, 1) = ((MR_Box) (hlds__make_hlds__add_mode__Arity_26));
    }
    hlds__make_hlds__add_mode__SymName_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__ModeId_8, (MR_Integer) 0)));
    hlds__make_hlds__add_mode__Arity_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__ModeId_8, (MR_Integer) 1)));
    {
      hlds__make_hlds__add_mode__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__V_17_17, 0) = ((MR_Box) (hlds__make_hlds__add_mode__SymName_27));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__V_17_17, 1) = ((MR_Box) (hlds__make_hlds__add_mode__Arity_28));
    }
    {
      hlds__make_hlds__add_mode__V_18_18 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_id_0, (MR_Word) &hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__type_ctor_info_circ_id_0, (MR_Word) &hlds__make_hlds__add_mode_scalar_common_3[2], hlds__make_hlds__add_mode__Expansions_9);
    }
    hlds__make_hlds__add_mode__CastX_80 = (MR_Integer) hlds__make_hlds__add_mode__V_17_17;
    hlds__make_hlds__add_mode__CastY_81 = (MR_Integer) hlds__make_hlds__add_mode__V_16_16;
    hlds__make_hlds__add_mode__succeeded = (hlds__make_hlds__add_mode__CastX_80 == hlds__make_hlds__add_mode__CastY_81);
    if (hlds__make_hlds__add_mode__succeeded)
      hlds__make_hlds__add_mode__succeeded = MR_TRUE;
    else
      {
        MR_Word hlds__make_hlds__add_mode__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__V_17_17, (MR_Integer) 0)));
        MR_Integer hlds__make_hlds__add_mode__V_77_77 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__V_17_17, (MR_Integer) 1)));
        MR_Word hlds__make_hlds__add_mode__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__V_16_16, (MR_Integer) 0)));
        MR_Integer hlds__make_hlds__add_mode__V_79_79 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__V_16_16, (MR_Integer) 1)));

        {
          hlds__make_hlds__add_mode__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(hlds__make_hlds__add_mode__V_76_76, hlds__make_hlds__add_mode__V_78_78);
        }
        if (hlds__make_hlds__add_mode__succeeded)
          hlds__make_hlds__add_mode__succeeded = (hlds__make_hlds__add_mode__V_77_77 == hlds__make_hlds__add_mode__V_79_79);
      }
    if (hlds__make_hlds__add_mode__succeeded)
      {
        MR_Word hlds__make_hlds__add_mode__TypeCtorInfo_53_73 = (MR_Word) &hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__type_ctor_info_circ_id_0;
        MR_Word hlds__make_hlds__add_mode__TypeCtorInfo_55_75;
        MR_String hlds__make_hlds__add_mode__Kinds_38;
        MR_Word hlds__make_hlds__add_mode__ExpansionPieces_39;
        MR_Word hlds__make_hlds__add_mode__Pieces_42;
        MR_Word hlds__make_hlds__add_mode__Msg_43;
        MR_Word hlds__make_hlds__add_mode__Spec_44;
        MR_Word hlds__make_hlds__add_mode__V_49_49;
        MR_Word hlds__make_hlds__add_mode__V_52_52;
        MR_Word hlds__make_hlds__add_mode__V_53_53;
        MR_Word hlds__make_hlds__add_mode__V_55_55;
        MR_Word hlds__make_hlds__add_mode__V_56_56;
        MR_Word hlds__make_hlds__add_mode__V_63_63;
        MR_Word hlds__make_hlds__add_mode__V_64_64;
        MR_Word hlds__make_hlds__add_mode__V_68_68;
        MR_Box hlds__make_hlds__add_mode__conv1_Kinds_38;

        {
          hlds__make_hlds__add_mode__conv1_Kinds_38 = parse_tree__error_util__choose_number_3_f_0(hlds__make_hlds__add_mode__TypeCtorInfo_53_73, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, hlds__make_hlds__add_mode__V_18_18, ((MR_Box) ((MR_String) "mode")), ((MR_Box) ((MR_String) "modes")));
        }
        hlds__make_hlds__add_mode__Kinds_38 = ((MR_String) hlds__make_hlds__add_mode__conv1_Kinds_38);
        hlds__make_hlds__add_mode__TypeCtorInfo_55_75 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
        {
          hlds__make_hlds__add_mode__ExpansionPieces_39 = mercury__list__map_2_f_0(hlds__make_hlds__add_mode__TypeCtorInfo_53_73, hlds__make_hlds__add_mode__TypeCtorInfo_55_75, (MR_Word) &hlds__make_hlds__add_mode_scalar_common_3[3], hlds__make_hlds__add_mode__V_18_18);
        }
        {
          hlds__make_hlds__add_mode__V_53_53 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), hlds__make_hlds__add_mode__V_53_53, 0) = ((MR_Box) (hlds__make_hlds__add_mode__Kinds_38));
        }
        {
          hlds__make_hlds__add_mode__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__V_52_52, 0) = ((MR_Box) (hlds__make_hlds__add_mode__V_53_53));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__V_52_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          hlds__make_hlds__add_mode__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__V_49_49, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mode_scalar_common_1[15])));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__V_49_49, 1) = ((MR_Box) (hlds__make_hlds__add_mode__V_52_52));
        }
        {
          hlds__make_hlds__add_mode__V_56_56 = parse_tree__error_util__component_list_to_pieces_1_f_0(hlds__make_hlds__add_mode__ExpansionPieces_39);
        }
        {
          hlds__make_hlds__add_mode__V_55_55 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__add_mode__TypeCtorInfo_55_75, hlds__make_hlds__add_mode__V_56_56, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mode_scalar_common_1[13]));
        }
        {
          hlds__make_hlds__add_mode__Pieces_42 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__add_mode__TypeCtorInfo_55_75, hlds__make_hlds__add_mode__V_49_49, hlds__make_hlds__add_mode__V_55_55);
        }
        {
          hlds__make_hlds__add_mode__V_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__V_64_64, 0) = ((MR_Box) (hlds__make_hlds__add_mode__Pieces_42));
        }
        {
          hlds__make_hlds__add_mode__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__V_63_63, 0) = ((MR_Box) (hlds__make_hlds__add_mode__V_64_64));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__V_63_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          hlds__make_hlds__add_mode__Msg_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__Msg_43, 0) = ((MR_Box) (hlds__make_hlds__add_mode__Context_10));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__Msg_43, 1) = ((MR_Box) (hlds__make_hlds__add_mode__V_63_63));
        }
        {
          hlds__make_hlds__add_mode__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__V_68_68, 0) = ((MR_Box) (hlds__make_hlds__add_mode__Msg_43));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__V_68_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          hlds__make_hlds__add_mode__Spec_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__Spec_44, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__Spec_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__Spec_44, 2) = ((MR_Box) (hlds__make_hlds__add_mode__V_68_68));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_13 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_mode__Spec_44));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_0_12));
        }
      }
    else
      *hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_13 = hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_0_12;
  }
}

static MR_Box MR_CALL 
hlds__make_hlds__add_mode__report_circular_inst_equiv_error_6_p_0_2(
  MR_Box hlds__make_hlds__add_mode__closure_arg,
  MR_Box hlds__make_hlds__add_mode__wrapper_arg_1)
{
  {
    MR_Box hlds__make_hlds__add_mode__wrapper_arg_2;
    MR_Box hlds__make_hlds__add_mode__closure = hlds__make_hlds__add_mode__closure_arg;
    MR_Word hlds__make_hlds__add_mode__conv2_LambdaHeadVar__2_27;

    {
      hlds__make_hlds__add_mode__conv2_LambdaHeadVar__2_27 = hlds__make_hlds__add_mode__IntroducedFrom__func__report_circular_equiv_error__311__1_1_f_0(((MR_Word) hlds__make_hlds__add_mode__wrapper_arg_1));
    }
    hlds__make_hlds__add_mode__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__add_mode__conv2_LambdaHeadVar__2_27));
    return hlds__make_hlds__add_mode__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
hlds__make_hlds__add_mode__report_circular_inst_equiv_error_6_p_0_1(
  MR_Box hlds__make_hlds__add_mode__closure_arg,
  MR_Box hlds__make_hlds__add_mode__wrapper_arg_1)
{
  {
    MR_Box hlds__make_hlds__add_mode__wrapper_arg_2;
    MR_Box hlds__make_hlds__add_mode__closure = hlds__make_hlds__add_mode__closure_arg;
    MR_Word hlds__make_hlds__add_mode__conv0_HeadVar__2_2;

    {
      hlds__make_hlds__add_mode__conv0_HeadVar__2_2 = hlds__make_hlds__add_mode__inst_id_to_circ_id_1_f_0(((MR_Word) hlds__make_hlds__add_mode__wrapper_arg_1));
    }
    hlds__make_hlds__add_mode__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__add_mode__conv0_HeadVar__2_2));
    return hlds__make_hlds__add_mode__wrapper_arg_2;
  }
}

static void MR_CALL 
hlds__make_hlds__add_mode__report_circular_inst_equiv_error_6_p_0(
  MR_Word hlds__make_hlds__add_mode__OrigInstId_7,
  MR_Word hlds__make_hlds__add_mode__InstId_8,
  MR_Word hlds__make_hlds__add_mode__Expansions_9,
  MR_Word hlds__make_hlds__add_mode__Context_10,
  MR_Word hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_0_12,
  MR_Word * hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_13)
{
  {
    MR_bool hlds__make_hlds__add_mode__succeeded;
    MR_Word hlds__make_hlds__add_mode__V_16_16;
    MR_Word hlds__make_hlds__add_mode__V_17_17;
    MR_Word hlds__make_hlds__add_mode__V_18_18;
    MR_Word hlds__make_hlds__add_mode__SymName_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__OrigInstId_7, (MR_Integer) 0)));
    MR_Integer hlds__make_hlds__add_mode__Arity_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__OrigInstId_7, (MR_Integer) 1)));
    MR_Word hlds__make_hlds__add_mode__SymName_27;
    MR_Integer hlds__make_hlds__add_mode__Arity_28;
    MR_Integer hlds__make_hlds__add_mode__CastX_80;
    MR_Integer hlds__make_hlds__add_mode__CastY_81;

    {
      hlds__make_hlds__add_mode__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__V_16_16, 0) = ((MR_Box) (hlds__make_hlds__add_mode__SymName_25));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__V_16_16, 1) = ((MR_Box) (hlds__make_hlds__add_mode__Arity_26));
    }
    hlds__make_hlds__add_mode__SymName_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__InstId_8, (MR_Integer) 0)));
    hlds__make_hlds__add_mode__Arity_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__InstId_8, (MR_Integer) 1)));
    {
      hlds__make_hlds__add_mode__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__V_17_17, 0) = ((MR_Box) (hlds__make_hlds__add_mode__SymName_27));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__V_17_17, 1) = ((MR_Box) (hlds__make_hlds__add_mode__Arity_28));
    }
    {
      hlds__make_hlds__add_mode__V_18_18 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0, (MR_Word) &hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__type_ctor_info_circ_id_0, (MR_Word) &hlds__make_hlds__add_mode_scalar_common_3[0], hlds__make_hlds__add_mode__Expansions_9);
    }
    hlds__make_hlds__add_mode__CastX_80 = (MR_Integer) hlds__make_hlds__add_mode__V_17_17;
    hlds__make_hlds__add_mode__CastY_81 = (MR_Integer) hlds__make_hlds__add_mode__V_16_16;
    hlds__make_hlds__add_mode__succeeded = (hlds__make_hlds__add_mode__CastX_80 == hlds__make_hlds__add_mode__CastY_81);
    if (hlds__make_hlds__add_mode__succeeded)
      hlds__make_hlds__add_mode__succeeded = MR_TRUE;
    else
      {
        MR_Word hlds__make_hlds__add_mode__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__V_17_17, (MR_Integer) 0)));
        MR_Integer hlds__make_hlds__add_mode__V_77_77 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__V_17_17, (MR_Integer) 1)));
        MR_Word hlds__make_hlds__add_mode__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__V_16_16, (MR_Integer) 0)));
        MR_Integer hlds__make_hlds__add_mode__V_79_79 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__V_16_16, (MR_Integer) 1)));

        {
          hlds__make_hlds__add_mode__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(hlds__make_hlds__add_mode__V_76_76, hlds__make_hlds__add_mode__V_78_78);
        }
        if (hlds__make_hlds__add_mode__succeeded)
          hlds__make_hlds__add_mode__succeeded = (hlds__make_hlds__add_mode__V_77_77 == hlds__make_hlds__add_mode__V_79_79);
      }
    if (hlds__make_hlds__add_mode__succeeded)
      {
        MR_Word hlds__make_hlds__add_mode__TypeCtorInfo_53_73 = (MR_Word) &hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__type_ctor_info_circ_id_0;
        MR_Word hlds__make_hlds__add_mode__TypeCtorInfo_55_75;
        MR_String hlds__make_hlds__add_mode__Kinds_38;
        MR_Word hlds__make_hlds__add_mode__ExpansionPieces_39;
        MR_Word hlds__make_hlds__add_mode__Pieces_42;
        MR_Word hlds__make_hlds__add_mode__Msg_43;
        MR_Word hlds__make_hlds__add_mode__Spec_44;
        MR_Word hlds__make_hlds__add_mode__V_49_49;
        MR_Word hlds__make_hlds__add_mode__V_52_52;
        MR_Word hlds__make_hlds__add_mode__V_53_53;
        MR_Word hlds__make_hlds__add_mode__V_55_55;
        MR_Word hlds__make_hlds__add_mode__V_56_56;
        MR_Word hlds__make_hlds__add_mode__V_63_63;
        MR_Word hlds__make_hlds__add_mode__V_64_64;
        MR_Word hlds__make_hlds__add_mode__V_68_68;
        MR_Box hlds__make_hlds__add_mode__conv1_Kinds_38;

        {
          hlds__make_hlds__add_mode__conv1_Kinds_38 = parse_tree__error_util__choose_number_3_f_0(hlds__make_hlds__add_mode__TypeCtorInfo_53_73, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, hlds__make_hlds__add_mode__V_18_18, ((MR_Box) ((MR_String) "inst")), ((MR_Box) ((MR_String) "insts")));
        }
        hlds__make_hlds__add_mode__Kinds_38 = ((MR_String) hlds__make_hlds__add_mode__conv1_Kinds_38);
        hlds__make_hlds__add_mode__TypeCtorInfo_55_75 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
        {
          hlds__make_hlds__add_mode__ExpansionPieces_39 = mercury__list__map_2_f_0(hlds__make_hlds__add_mode__TypeCtorInfo_53_73, hlds__make_hlds__add_mode__TypeCtorInfo_55_75, (MR_Word) &hlds__make_hlds__add_mode_scalar_common_3[1], hlds__make_hlds__add_mode__V_18_18);
        }
        {
          hlds__make_hlds__add_mode__V_53_53 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), hlds__make_hlds__add_mode__V_53_53, 0) = ((MR_Box) (hlds__make_hlds__add_mode__Kinds_38));
        }
        {
          hlds__make_hlds__add_mode__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__V_52_52, 0) = ((MR_Box) (hlds__make_hlds__add_mode__V_53_53));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__V_52_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          hlds__make_hlds__add_mode__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__V_49_49, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mode_scalar_common_1[15])));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__V_49_49, 1) = ((MR_Box) (hlds__make_hlds__add_mode__V_52_52));
        }
        {
          hlds__make_hlds__add_mode__V_56_56 = parse_tree__error_util__component_list_to_pieces_1_f_0(hlds__make_hlds__add_mode__ExpansionPieces_39);
        }
        {
          hlds__make_hlds__add_mode__V_55_55 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__add_mode__TypeCtorInfo_55_75, hlds__make_hlds__add_mode__V_56_56, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mode_scalar_common_1[13]));
        }
        {
          hlds__make_hlds__add_mode__Pieces_42 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__add_mode__TypeCtorInfo_55_75, hlds__make_hlds__add_mode__V_49_49, hlds__make_hlds__add_mode__V_55_55);
        }
        {
          hlds__make_hlds__add_mode__V_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__V_64_64, 0) = ((MR_Box) (hlds__make_hlds__add_mode__Pieces_42));
        }
        {
          hlds__make_hlds__add_mode__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__V_63_63, 0) = ((MR_Box) (hlds__make_hlds__add_mode__V_64_64));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__V_63_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          hlds__make_hlds__add_mode__Msg_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__Msg_43, 0) = ((MR_Box) (hlds__make_hlds__add_mode__Context_10));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__Msg_43, 1) = ((MR_Box) (hlds__make_hlds__add_mode__V_63_63));
        }
        {
          hlds__make_hlds__add_mode__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__V_68_68, 0) = ((MR_Box) (hlds__make_hlds__add_mode__Msg_43));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__V_68_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          hlds__make_hlds__add_mode__Spec_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__Spec_44, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__Spec_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__Spec_44, 2) = ((MR_Box) (hlds__make_hlds__add_mode__V_68_68));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_13 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_mode__Spec_44));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_0_12));
        }
      }
    else
      *hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_13 = hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_0_12;
  }
}

static void MR_CALL 
hlds__make_hlds__add_mode__check_for_cyclic_mode_8_p_0(
  MR_Word hlds__make_hlds__add_mode__ModeTable_9,
  MR_Word hlds__make_hlds__add_mode__OrigModeId_10,
  MR_Word hlds__make_hlds__add_mode__ModeId0_11,
  MR_Word hlds__make_hlds__add_mode__Expansions0_12,
  MR_Word hlds__make_hlds__add_mode__Context_13,
  MR_Word * hlds__make_hlds__add_mode__InvalidMode_14,
  MR_Word hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_0_29,
  MR_Word * hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_30)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__make_hlds__add_mode__succeeded;

        {
          hlds__make_hlds__add_mode__succeeded = mercury__list__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_id_0, ((MR_Box) (hlds__make_hlds__add_mode__ModeId0_11)), hlds__make_hlds__add_mode__Expansions0_12);
        }
        if (hlds__make_hlds__add_mode__succeeded)
          {
            {
              hlds__make_hlds__add_mode__report_circular_mode_equiv_error_6_p_0(hlds__make_hlds__add_mode__OrigModeId_10, hlds__make_hlds__add_mode__ModeId0_11, hlds__make_hlds__add_mode__Expansions0_12, hlds__make_hlds__add_mode__Context_13, hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_0_29, hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_30);
            }
            *hlds__make_hlds__add_mode__InvalidMode_14 = (MR_Integer) 1;
          }
        else
          {
            MR_Word hlds__make_hlds__add_mode__ModeDefns_16;
            MR_Word hlds__make_hlds__add_mode__Name_24;
            MR_Word hlds__make_hlds__add_mode__Args_25;
            MR_Word hlds__make_hlds__add_mode__ModeDefn_17;
            MR_Word hlds__make_hlds__add_mode__Body_20;
            MR_Word hlds__make_hlds__add_mode__EqvMode_23;
            MR_Box hlds__make_hlds__add_mode__conv0_ModeDefn_17;
            MR_Word hlds__make_hlds__add_mode__V_18_18;
            MR_Word hlds__make_hlds__add_mode__V_19_19;
            MR_Word hlds__make_hlds__add_mode__V_21_21;
            MR_Word hlds__make_hlds__add_mode__V_22_22;

            {
              hlds__hlds_data__mode_table_get_mode_defns_2_p_0(hlds__make_hlds__add_mode__ModeTable_9, &hlds__make_hlds__add_mode__ModeDefns_16);
            }
            {
              hlds__make_hlds__add_mode__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_mode_defn_0, hlds__make_hlds__add_mode__ModeDefns_16, ((MR_Box) (hlds__make_hlds__add_mode__ModeId0_11)), &hlds__make_hlds__add_mode__conv0_ModeDefn_17);
            }
            if (hlds__make_hlds__add_mode__succeeded)
              {
                hlds__make_hlds__add_mode__ModeDefn_17 = ((MR_Word) hlds__make_hlds__add_mode__conv0_ModeDefn_17);
                hlds__make_hlds__add_mode__succeeded = MR_TRUE;
              }
            if (hlds__make_hlds__add_mode__succeeded)
              {
                hlds__make_hlds__add_mode__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__ModeDefn_17, (MR_Integer) 0)));
                hlds__make_hlds__add_mode__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__ModeDefn_17, (MR_Integer) 1)));
                hlds__make_hlds__add_mode__Body_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__ModeDefn_17, (MR_Integer) 2)));
                hlds__make_hlds__add_mode__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__ModeDefn_17, (MR_Integer) 3)));
                hlds__make_hlds__add_mode__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__ModeDefn_17, (MR_Integer) 4)));
                hlds__make_hlds__add_mode__EqvMode_23 = (MR_Word) hlds__make_hlds__add_mode__Body_20;
                hlds__make_hlds__add_mode__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_mode__EqvMode_23)) == (MR_mktag((MR_Integer) 1)));
                if (hlds__make_hlds__add_mode__succeeded)
                  {
                    hlds__make_hlds__add_mode__Name_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__EqvMode_23, (MR_Integer) 0)));
                    hlds__make_hlds__add_mode__Args_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__EqvMode_23, (MR_Integer) 1)));
                  }
              }
            if (hlds__make_hlds__add_mode__succeeded)
              {
                MR_Integer hlds__make_hlds__add_mode__Arity_26;
                MR_Word hlds__make_hlds__add_mode__ModeId_27;
                MR_Word hlds__make_hlds__add_mode__Expansions_28;

                {
                  hlds__make_hlds__add_mode__Arity_26 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__make_hlds__add_mode__Args_25);
                }
                {
                  hlds__make_hlds__add_mode__ModeId_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__ModeId_27, 0) = ((MR_Box) (hlds__make_hlds__add_mode__Name_24));
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__ModeId_27, 1) = ((MR_Box) (hlds__make_hlds__add_mode__Arity_26));
                }
                {
                  hlds__make_hlds__add_mode__Expansions_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__Expansions_28, 0) = ((MR_Box) (hlds__make_hlds__add_mode__ModeId0_11));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__Expansions_28, 1) = ((MR_Box) (hlds__make_hlds__add_mode__Expansions0_12));
                }
                /* direct tailcall eliminated */
                {
                  MR_Word hlds__make_hlds__add_mode__ModeId0__tmp_copy_11 = hlds__make_hlds__add_mode__ModeId_27;
                  MR_Word hlds__make_hlds__add_mode__Expansions0__tmp_copy_12 = hlds__make_hlds__add_mode__Expansions_28;

                  hlds__make_hlds__add_mode__Expansions0_12 = hlds__make_hlds__add_mode__Expansions0__tmp_copy_12;
                  hlds__make_hlds__add_mode__ModeId0_11 = hlds__make_hlds__add_mode__ModeId0__tmp_copy_11;
                }
                continue;
              }
            else
              {
                *hlds__make_hlds__add_mode__InvalidMode_14 = (MR_Integer) 0;
                *hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_30 = hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_0_29;
              }
          }
      }
      break;
    }
}

static MR_Word MR_CALL 
hlds__make_hlds__add_mode__should_report_duplicate_inst_or_mode_1_f_0(
  MR_Word hlds__make_hlds__add_mode__InstModeStatus_3)
{
  {
    MR_bool hlds__make_hlds__add_mode__succeeded;
    MR_Word hlds__make_hlds__add_mode__ReportDup_4;

    if (((MR_tag((MR_Word) hlds__make_hlds__add_mode__InstModeStatus_3)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word hlds__make_hlds__add_mode__InstModeImport_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__InstModeStatus_3, (MR_Integer) 0)));

        switch (MR_tag((MR_Word) hlds__make_hlds__add_mode__InstModeImport_6)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(hlds__make_hlds__add_mode__InstModeImport_6)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                hlds__make_hlds__add_mode__ReportDup_4 = (MR_Integer) 1;
                break;
              case (MR_Integer) 1:
                hlds__make_hlds__add_mode__ReportDup_4 = (MR_Integer) 0;
                break;
            }
            break;
          case (MR_Integer) 1:
            hlds__make_hlds__add_mode__ReportDup_4 = (MR_Integer) 1;
            break;
        }
      }
    else
      hlds__make_hlds__add_mode__ReportDup_4 = (MR_Integer) 1;
    return hlds__make_hlds__add_mode__ReportDup_4;
  }
}

static void MR_CALL 
hlds__make_hlds__add_mode__check_for_cyclic_inst_9_p_0(
  MR_Word hlds__make_hlds__add_mode__UserInstTable_10,
  MR_Word hlds__make_hlds__add_mode__OrigInstId_11,
  MR_Word hlds__make_hlds__add_mode__InstId0_12,
  MR_Word hlds__make_hlds__add_mode__Args0_13,
  MR_Word hlds__make_hlds__add_mode__Expansions0_14,
  MR_Word hlds__make_hlds__add_mode__Context_15,
  MR_Word * hlds__make_hlds__add_mode__InvalidMode_16,
  MR_Word hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_0_32,
  MR_Word * hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_33)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__make_hlds__add_mode__succeeded;

        {
          hlds__make_hlds__add_mode__succeeded = mercury__list__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0, ((MR_Box) (hlds__make_hlds__add_mode__InstId0_12)), hlds__make_hlds__add_mode__Expansions0_14);
        }
        if (hlds__make_hlds__add_mode__succeeded)
          {
            {
              hlds__make_hlds__add_mode__report_circular_inst_equiv_error_6_p_0(hlds__make_hlds__add_mode__OrigInstId_11, hlds__make_hlds__add_mode__InstId0_12, hlds__make_hlds__add_mode__Expansions0_14, hlds__make_hlds__add_mode__Context_15, hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_0_32, hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_33);
            }
            *hlds__make_hlds__add_mode__InvalidMode_16 = (MR_Integer) 1;
          }
        else
          {
            MR_Word hlds__make_hlds__add_mode__Name_27;
            MR_Word hlds__make_hlds__add_mode__Args_28;
            MR_Word hlds__make_hlds__add_mode__InstDefn_18;
            MR_Word hlds__make_hlds__add_mode__Params_20;
            MR_Word hlds__make_hlds__add_mode__Body_21;
            MR_Word hlds__make_hlds__add_mode__EqvInst0_25;
            MR_Word hlds__make_hlds__add_mode__EqvInst_26;
            MR_Word hlds__make_hlds__add_mode__V_35_35;
            MR_Box hlds__make_hlds__add_mode__conv0_InstDefn_18;
            MR_Word hlds__make_hlds__add_mode__V_19_19;
            MR_Word hlds__make_hlds__add_mode__V_22_22;
            MR_Word hlds__make_hlds__add_mode__V_23_23;
            MR_Word hlds__make_hlds__add_mode__V_24_24;

            {
              hlds__make_hlds__add_mode__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_inst_defn_0, hlds__make_hlds__add_mode__UserInstTable_10, ((MR_Box) (hlds__make_hlds__add_mode__InstId0_12)), &hlds__make_hlds__add_mode__conv0_InstDefn_18);
            }
            if (hlds__make_hlds__add_mode__succeeded)
              {
                hlds__make_hlds__add_mode__InstDefn_18 = ((MR_Word) hlds__make_hlds__add_mode__conv0_InstDefn_18);
                hlds__make_hlds__add_mode__succeeded = MR_TRUE;
              }
            if (hlds__make_hlds__add_mode__succeeded)
              {
                hlds__make_hlds__add_mode__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__InstDefn_18, (MR_Integer) 0)));
                hlds__make_hlds__add_mode__Params_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__InstDefn_18, (MR_Integer) 1)));
                hlds__make_hlds__add_mode__Body_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__InstDefn_18, (MR_Integer) 2)));
                hlds__make_hlds__add_mode__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__InstDefn_18, (MR_Integer) 3)));
                hlds__make_hlds__add_mode__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__InstDefn_18, (MR_Integer) 4)));
                hlds__make_hlds__add_mode__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__InstDefn_18, (MR_Integer) 5)));
                hlds__make_hlds__add_mode__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_mode__Body_21)) == (MR_mktag((MR_Integer) 1)));
                if (hlds__make_hlds__add_mode__succeeded)
                  {
                    hlds__make_hlds__add_mode__EqvInst0_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__Body_21, (MR_Integer) 0)));
                    {
                      parse_tree__prog_mode__inst_substitute_arg_list_4_p_0(hlds__make_hlds__add_mode__Params_20, hlds__make_hlds__add_mode__Args0_13, hlds__make_hlds__add_mode__EqvInst0_25, &hlds__make_hlds__add_mode__EqvInst_26);
                    }
                    hlds__make_hlds__add_mode__succeeded = ((((MR_tag((MR_Word) hlds__make_hlds__add_mode__EqvInst_26)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mode__EqvInst_26, (MR_Integer) 0)))) == (MR_Integer) 4)));
                    if (hlds__make_hlds__add_mode__succeeded)
                      {
                        hlds__make_hlds__add_mode__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mode__EqvInst_26, (MR_Integer) 1)));
                        hlds__make_hlds__add_mode__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_mode__V_35_35)) == (MR_mktag((MR_Integer) 0)));
                        if (hlds__make_hlds__add_mode__succeeded)
                          {
                            hlds__make_hlds__add_mode__Name_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__V_35_35, (MR_Integer) 0)));
                            hlds__make_hlds__add_mode__Args_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__V_35_35, (MR_Integer) 1)));
                          }
                      }
                  }
              }
            if (hlds__make_hlds__add_mode__succeeded)
              {
                MR_Integer hlds__make_hlds__add_mode__Arity_29;
                MR_Word hlds__make_hlds__add_mode__InstId_30;
                MR_Word hlds__make_hlds__add_mode__Expansions_31;

                {
                  hlds__make_hlds__add_mode__Arity_29 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__make_hlds__add_mode__Args_28);
                }
                {
                  hlds__make_hlds__add_mode__InstId_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__InstId_30, 0) = ((MR_Box) (hlds__make_hlds__add_mode__Name_27));
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__InstId_30, 1) = ((MR_Box) (hlds__make_hlds__add_mode__Arity_29));
                }
                {
                  hlds__make_hlds__add_mode__Expansions_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__Expansions_31, 0) = ((MR_Box) (hlds__make_hlds__add_mode__InstId0_12));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__Expansions_31, 1) = ((MR_Box) (hlds__make_hlds__add_mode__Expansions0_14));
                }
                /* direct tailcall eliminated */
                {
                  MR_Word hlds__make_hlds__add_mode__InstId0__tmp_copy_12 = hlds__make_hlds__add_mode__InstId_30;
                  MR_Word hlds__make_hlds__add_mode__Args0__tmp_copy_13 = hlds__make_hlds__add_mode__Args_28;
                  MR_Word hlds__make_hlds__add_mode__Expansions0__tmp_copy_14 = hlds__make_hlds__add_mode__Expansions_31;

                  hlds__make_hlds__add_mode__Expansions0_14 = hlds__make_hlds__add_mode__Expansions0__tmp_copy_14;
                  hlds__make_hlds__add_mode__Args0_13 = hlds__make_hlds__add_mode__Args0__tmp_copy_13;
                  hlds__make_hlds__add_mode__InstId0_12 = hlds__make_hlds__add_mode__InstId0__tmp_copy_12;
                }
                continue;
              }
            else
              {
                *hlds__make_hlds__add_mode__InvalidMode_16 = (MR_Integer) 0;
                *hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_33 = hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_0_32;
              }
          }
      }
      break;
    }
}

static void MR_CALL 
hlds__make_hlds__add_mode__insts_add_11_p_0(
  MR_Word hlds__make_hlds__add_mode__VarSet_1,
  MR_Word hlds__make_hlds__add_mode__InstSymName_2,
  MR_Word hlds__make_hlds__add_mode__InstParams_3,
  MR_Word hlds__make_hlds__add_mode__MaybeForType_4,
  MR_Word hlds__make_hlds__add_mode__HeadVar__5_5,
  MR_Word hlds__make_hlds__add_mode__Context_6,
  MR_Word hlds__make_hlds__add_mode__InstStatus_7,
  MR_Word hlds__make_hlds__add_mode__STATE_VARIABLE_UserInstTable_0_8,
  MR_Word * hlds__make_hlds__add_mode__STATE_VARIABLE_UserInstTable_9,
  MR_Word hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_0_10,
  MR_Word * hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_11)
{
  {
    MR_bool hlds__make_hlds__add_mode__succeeded;

    if ((hlds__make_hlds__add_mode__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__require__sorry_3_p_0((MR_String) "hlds.make_hlds.add_mode", (MR_String) "predicate \140hlds.make_hlds.add_mode.insts_add\'/11", (MR_String) "abstract insts not implemented");
          return;
        }
      }
    else
      {
        MR_Word hlds__make_hlds__add_mode__EqvInst_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__HeadVar__5_5, (MR_Integer) 0)));
        MR_Integer hlds__make_hlds__add_mode__InstArity_36;
        MR_Word hlds__make_hlds__add_mode__InstId_37;
        MR_Word hlds__make_hlds__add_mode__IFTC_41;
        MR_Word hlds__make_hlds__add_mode__InstDefn_59;
        MR_Word hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_101_101;
        MR_Word hlds__make_hlds__add_mode__V_102_102;
        MR_Word hlds__make_hlds__add_mode__STATE_VARIABLE_UserInstTable_103_103;

        {
          mercury__list__length_2_p_0((MR_Word) &hlds__make_hlds__add_mode_scalar_common_1[0], hlds__make_hlds__add_mode__InstParams_3, &hlds__make_hlds__add_mode__InstArity_36);
        }
        {
          hlds__make_hlds__add_mode__InstId_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__InstId_37, 0) = ((MR_Box) (hlds__make_hlds__add_mode__InstSymName_2));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__InstId_37, 1) = ((MR_Box) (hlds__make_hlds__add_mode__InstArity_36));
        }
        switch (MR_tag((MR_Word) hlds__make_hlds__add_mode__EqvInst_31)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word hlds__make_hlds__add_mode__V_69_69;
              MR_Word hlds__make_hlds__add_mode___ForType_54;

              hlds__make_hlds__add_mode__IFTC_41 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              hlds__make_hlds__add_mode__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_mode__MaybeForType_4)) == (MR_mktag((MR_Integer) 1)));
              if (hlds__make_hlds__add_mode__succeeded)
                {
                  hlds__make_hlds__add_mode___ForType_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__MaybeForType_4, (MR_Integer) 0)));
                  {
                    hlds__make_hlds__add_mode__V_69_69 = hlds__status__inst_status_defined_in_this_module_1_f_0(hlds__make_hlds__add_mode__InstStatus_7);
                  }
                  hlds__make_hlds__add_mode__succeeded = (hlds__make_hlds__add_mode__V_69_69 == (MR_Integer) 1);
                }
              if (hlds__make_hlds__add_mode__succeeded)
                {
                  MR_Word hlds__make_hlds__add_mode__ShortInstSymName_55;
                  MR_Word hlds__make_hlds__add_mode__Pieces_56;
                  MR_Word hlds__make_hlds__add_mode__Msg_57;
                  MR_Word hlds__make_hlds__add_mode__Spec_58;
                  MR_String hlds__make_hlds__add_mode__V_70_70;
                  MR_Word hlds__make_hlds__add_mode__V_73_73;
                  MR_Word hlds__make_hlds__add_mode__V_74_74;
                  MR_Word hlds__make_hlds__add_mode__V_75_75;
                  MR_Word hlds__make_hlds__add_mode__V_94_94;
                  MR_Word hlds__make_hlds__add_mode__V_95_95;
                  MR_Word hlds__make_hlds__add_mode__V_99_99;

                  {
                    hlds__make_hlds__add_mode__V_70_70 = mdbcomp__sym_name__unqualify_name_1_f_0(hlds__make_hlds__add_mode__InstSymName_2);
                  }
                  {
                    hlds__make_hlds__add_mode__ShortInstSymName_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__ShortInstSymName_55, 0) = ((MR_Box) (hlds__make_hlds__add_mode__V_70_70));
                  }
                  {
                    hlds__make_hlds__add_mode__V_75_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__V_75_75, 0) = ((MR_Box) (hlds__make_hlds__add_mode__ShortInstSymName_55));
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__V_75_75, 1) = ((MR_Box) (hlds__make_hlds__add_mode__InstArity_36));
                  }
                  {
                    hlds__make_hlds__add_mode__V_74_74 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mode__V_74_74, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mode__V_74_74, 1) = ((MR_Box) (hlds__make_hlds__add_mode__V_75_75));
                  }
                  {
                    hlds__make_hlds__add_mode__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__V_73_73, 0) = ((MR_Box) (hlds__make_hlds__add_mode__V_74_74));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__V_73_73, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mode_scalar_common_1[11])));
                  }
                  {
                    hlds__make_hlds__add_mode__Pieces_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__Pieces_56, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mode_scalar_common_1[14])));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__Pieces_56, 1) = ((MR_Box) (hlds__make_hlds__add_mode__V_73_73));
                  }
                  {
                    hlds__make_hlds__add_mode__V_95_95 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__V_95_95, 0) = ((MR_Box) (hlds__make_hlds__add_mode__Pieces_56));
                  }
                  {
                    hlds__make_hlds__add_mode__V_94_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__V_94_94, 0) = ((MR_Box) (hlds__make_hlds__add_mode__V_95_95));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__V_94_94, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    hlds__make_hlds__add_mode__Msg_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__Msg_57, 0) = ((MR_Box) (hlds__make_hlds__add_mode__Context_6));
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__Msg_57, 1) = ((MR_Box) (hlds__make_hlds__add_mode__V_94_94));
                  }
                  {
                    hlds__make_hlds__add_mode__V_99_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__V_99_99, 0) = ((MR_Box) (hlds__make_hlds__add_mode__Msg_57));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__V_99_99, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    hlds__make_hlds__add_mode__Spec_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__Spec_58, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__Spec_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__Spec_58, 2) = ((MR_Box) (hlds__make_hlds__add_mode__V_99_99));
                  }
                  {
                    hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_101_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_101_101, 0) = ((MR_Box) (hlds__make_hlds__add_mode__Spec_58));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_101_101, 1) = ((MR_Box) (hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_0_10));
                  }
                }
              else
                hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_101_101 = hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_0_10;
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            {
              MR_Word hlds__make_hlds__add_mode__V_69_69;
              MR_Word hlds__make_hlds__add_mode___ForType_54;

              hlds__make_hlds__add_mode__IFTC_41 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              hlds__make_hlds__add_mode__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_mode__MaybeForType_4)) == (MR_mktag((MR_Integer) 1)));
              if (hlds__make_hlds__add_mode__succeeded)
                {
                  hlds__make_hlds__add_mode___ForType_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__MaybeForType_4, (MR_Integer) 0)));
                  {
                    hlds__make_hlds__add_mode__V_69_69 = hlds__status__inst_status_defined_in_this_module_1_f_0(hlds__make_hlds__add_mode__InstStatus_7);
                  }
                  hlds__make_hlds__add_mode__succeeded = (hlds__make_hlds__add_mode__V_69_69 == (MR_Integer) 1);
                }
              if (hlds__make_hlds__add_mode__succeeded)
                {
                  MR_Word hlds__make_hlds__add_mode__ShortInstSymName_55;
                  MR_Word hlds__make_hlds__add_mode__Pieces_56;
                  MR_Word hlds__make_hlds__add_mode__Msg_57;
                  MR_Word hlds__make_hlds__add_mode__Spec_58;
                  MR_String hlds__make_hlds__add_mode__V_70_70;
                  MR_Word hlds__make_hlds__add_mode__V_73_73;
                  MR_Word hlds__make_hlds__add_mode__V_74_74;
                  MR_Word hlds__make_hlds__add_mode__V_75_75;
                  MR_Word hlds__make_hlds__add_mode__V_94_94;
                  MR_Word hlds__make_hlds__add_mode__V_95_95;
                  MR_Word hlds__make_hlds__add_mode__V_99_99;

                  {
                    hlds__make_hlds__add_mode__V_70_70 = mdbcomp__sym_name__unqualify_name_1_f_0(hlds__make_hlds__add_mode__InstSymName_2);
                  }
                  {
                    hlds__make_hlds__add_mode__ShortInstSymName_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__ShortInstSymName_55, 0) = ((MR_Box) (hlds__make_hlds__add_mode__V_70_70));
                  }
                  {
                    hlds__make_hlds__add_mode__V_75_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__V_75_75, 0) = ((MR_Box) (hlds__make_hlds__add_mode__ShortInstSymName_55));
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__V_75_75, 1) = ((MR_Box) (hlds__make_hlds__add_mode__InstArity_36));
                  }
                  {
                    hlds__make_hlds__add_mode__V_74_74 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mode__V_74_74, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mode__V_74_74, 1) = ((MR_Box) (hlds__make_hlds__add_mode__V_75_75));
                  }
                  {
                    hlds__make_hlds__add_mode__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__V_73_73, 0) = ((MR_Box) (hlds__make_hlds__add_mode__V_74_74));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__V_73_73, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mode_scalar_common_1[11])));
                  }
                  {
                    hlds__make_hlds__add_mode__Pieces_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__Pieces_56, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mode_scalar_common_1[14])));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__Pieces_56, 1) = ((MR_Box) (hlds__make_hlds__add_mode__V_73_73));
                  }
                  {
                    hlds__make_hlds__add_mode__V_95_95 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__V_95_95, 0) = ((MR_Box) (hlds__make_hlds__add_mode__Pieces_56));
                  }
                  {
                    hlds__make_hlds__add_mode__V_94_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__V_94_94, 0) = ((MR_Box) (hlds__make_hlds__add_mode__V_95_95));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__V_94_94, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    hlds__make_hlds__add_mode__Msg_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__Msg_57, 0) = ((MR_Box) (hlds__make_hlds__add_mode__Context_6));
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__Msg_57, 1) = ((MR_Box) (hlds__make_hlds__add_mode__V_94_94));
                  }
                  {
                    hlds__make_hlds__add_mode__V_99_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__V_99_99, 0) = ((MR_Box) (hlds__make_hlds__add_mode__Msg_57));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__V_99_99, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    hlds__make_hlds__add_mode__Spec_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__Spec_58, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__Spec_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__Spec_58, 2) = ((MR_Box) (hlds__make_hlds__add_mode__V_99_99));
                  }
                  {
                    hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_101_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_101_101, 0) = ((MR_Box) (hlds__make_hlds__add_mode__Spec_58));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_101_101, 1) = ((MR_Box) (hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_0_10));
                  }
                }
              else
                hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_101_101 = hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_0_10;
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mode__EqvInst_31, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  if ((hlds__make_hlds__add_mode__MaybeForType_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    hlds__make_hlds__add_mode__IFTC_41 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
                  else
                    {
                      MR_Word hlds__make_hlds__add_mode__ForType_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__MaybeForType_4, (MR_Integer) 0)));

                      {
                        hlds__make_hlds__add_mode__IFTC_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__IFTC_41, 0) = ((MR_Box) (hlds__make_hlds__add_mode__ForType_42));
                      }
                    }
                  hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_101_101 = hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_0_10;
                }
                break;
              case (MR_Integer) 1:
              case (MR_Integer) 2:
              case (MR_Integer) 3:
              case (MR_Integer) 4:
              case (MR_Integer) 5:
                {
                  MR_Word hlds__make_hlds__add_mode__V_69_69;
                  MR_Word hlds__make_hlds__add_mode___ForType_54;

                  hlds__make_hlds__add_mode__IFTC_41 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  hlds__make_hlds__add_mode__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_mode__MaybeForType_4)) == (MR_mktag((MR_Integer) 1)));
                  if (hlds__make_hlds__add_mode__succeeded)
                    {
                      hlds__make_hlds__add_mode___ForType_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__MaybeForType_4, (MR_Integer) 0)));
                      {
                        hlds__make_hlds__add_mode__V_69_69 = hlds__status__inst_status_defined_in_this_module_1_f_0(hlds__make_hlds__add_mode__InstStatus_7);
                      }
                      hlds__make_hlds__add_mode__succeeded = (hlds__make_hlds__add_mode__V_69_69 == (MR_Integer) 1);
                    }
                  if (hlds__make_hlds__add_mode__succeeded)
                    {
                      MR_Word hlds__make_hlds__add_mode__ShortInstSymName_55;
                      MR_Word hlds__make_hlds__add_mode__Pieces_56;
                      MR_Word hlds__make_hlds__add_mode__Msg_57;
                      MR_Word hlds__make_hlds__add_mode__Spec_58;
                      MR_String hlds__make_hlds__add_mode__V_70_70;
                      MR_Word hlds__make_hlds__add_mode__V_73_73;
                      MR_Word hlds__make_hlds__add_mode__V_74_74;
                      MR_Word hlds__make_hlds__add_mode__V_75_75;
                      MR_Word hlds__make_hlds__add_mode__V_94_94;
                      MR_Word hlds__make_hlds__add_mode__V_95_95;
                      MR_Word hlds__make_hlds__add_mode__V_99_99;

                      {
                        hlds__make_hlds__add_mode__V_70_70 = mdbcomp__sym_name__unqualify_name_1_f_0(hlds__make_hlds__add_mode__InstSymName_2);
                      }
                      {
                        hlds__make_hlds__add_mode__ShortInstSymName_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__ShortInstSymName_55, 0) = ((MR_Box) (hlds__make_hlds__add_mode__V_70_70));
                      }
                      {
                        hlds__make_hlds__add_mode__V_75_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__V_75_75, 0) = ((MR_Box) (hlds__make_hlds__add_mode__ShortInstSymName_55));
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__V_75_75, 1) = ((MR_Box) (hlds__make_hlds__add_mode__InstArity_36));
                      }
                      {
                        hlds__make_hlds__add_mode__V_74_74 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mode__V_74_74, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
                        MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mode__V_74_74, 1) = ((MR_Box) (hlds__make_hlds__add_mode__V_75_75));
                      }
                      {
                        hlds__make_hlds__add_mode__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__V_73_73, 0) = ((MR_Box) (hlds__make_hlds__add_mode__V_74_74));
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__V_73_73, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mode_scalar_common_1[11])));
                      }
                      {
                        hlds__make_hlds__add_mode__Pieces_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__Pieces_56, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mode_scalar_common_1[14])));
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__Pieces_56, 1) = ((MR_Box) (hlds__make_hlds__add_mode__V_73_73));
                      }
                      {
                        hlds__make_hlds__add_mode__V_95_95 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__V_95_95, 0) = ((MR_Box) (hlds__make_hlds__add_mode__Pieces_56));
                      }
                      {
                        hlds__make_hlds__add_mode__V_94_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__V_94_94, 0) = ((MR_Box) (hlds__make_hlds__add_mode__V_95_95));
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__V_94_94, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      }
                      {
                        hlds__make_hlds__add_mode__Msg_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__Msg_57, 0) = ((MR_Box) (hlds__make_hlds__add_mode__Context_6));
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__Msg_57, 1) = ((MR_Box) (hlds__make_hlds__add_mode__V_94_94));
                      }
                      {
                        hlds__make_hlds__add_mode__V_99_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__V_99_99, 0) = ((MR_Box) (hlds__make_hlds__add_mode__Msg_57));
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__V_99_99, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      }
                      {
                        hlds__make_hlds__add_mode__Spec_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__Spec_58, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__Spec_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__Spec_58, 2) = ((MR_Box) (hlds__make_hlds__add_mode__V_99_99));
                      }
                      {
                        hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_101_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_101_101, 0) = ((MR_Box) (hlds__make_hlds__add_mode__Spec_58));
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_101_101, 1) = ((MR_Box) (hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_0_10));
                      }
                    }
                  else
                    hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_101_101 = hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_0_10;
                }
                break;
            }
            break;
        }
        {
          hlds__make_hlds__add_mode__V_102_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__V_102_102, 0) = ((MR_Box) (hlds__make_hlds__add_mode__EqvInst_31));
        }
        {
          hlds__make_hlds__add_mode__InstDefn_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__InstDefn_59, 0) = ((MR_Box) (hlds__make_hlds__add_mode__VarSet_1));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__InstDefn_59, 1) = ((MR_Box) (hlds__make_hlds__add_mode__InstParams_3));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__InstDefn_59, 2) = ((MR_Box) (hlds__make_hlds__add_mode__V_102_102));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__InstDefn_59, 3) = ((MR_Box) (hlds__make_hlds__add_mode__IFTC_41));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__InstDefn_59, 4) = ((MR_Box) (hlds__make_hlds__add_mode__Context_6));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__InstDefn_59, 5) = ((MR_Box) (hlds__make_hlds__add_mode__InstStatus_7));
        }
        {
          hlds__make_hlds__add_mode__succeeded = mercury__map__insert_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_inst_defn_0, ((MR_Box) (hlds__make_hlds__add_mode__InstId_37)), ((MR_Box) (hlds__make_hlds__add_mode__InstDefn_59)), hlds__make_hlds__add_mode__STATE_VARIABLE_UserInstTable_0_8, &hlds__make_hlds__add_mode__STATE_VARIABLE_UserInstTable_103_103);
        }
        if (hlds__make_hlds__add_mode__succeeded)
          {
            *hlds__make_hlds__add_mode__STATE_VARIABLE_UserInstTable_9 = hlds__make_hlds__add_mode__STATE_VARIABLE_UserInstTable_103_103;
            *hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_11 = hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_101_101;
          }
        else
          {
            MR_Word hlds__make_hlds__add_mode__InstModeStatus_60 = (MR_Word) hlds__make_hlds__add_mode__InstStatus_7;
            MR_Word hlds__make_hlds__add_mode__ReportDup_61;

            {
              hlds__make_hlds__add_mode__ReportDup_61 = hlds__make_hlds__add_mode__should_report_duplicate_inst_or_mode_1_f_0(hlds__make_hlds__add_mode__InstModeStatus_60);
            }
            switch (hlds__make_hlds__add_mode__ReportDup_61) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_11 = hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_101_101;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word hlds__make_hlds__add_mode__OrigInstDefn_62;
                  MR_Word hlds__make_hlds__add_mode__OrigContext_63;
                  MR_Box hlds__make_hlds__add_mode__conv0_OrigInstDefn_62;
                  MR_Word hlds__make_hlds__add_mode__V_108_108;
                  MR_Word hlds__make_hlds__add_mode__V_109_109;
                  MR_Word hlds__make_hlds__add_mode__V_110_110;
                  MR_Word hlds__make_hlds__add_mode__V_111_111;
                  MR_Word hlds__make_hlds__add_mode__V_112_112;

                  {
                    mercury__map__lookup_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_inst_defn_0, hlds__make_hlds__add_mode__STATE_VARIABLE_UserInstTable_0_8, ((MR_Box) (hlds__make_hlds__add_mode__InstId_37)), &hlds__make_hlds__add_mode__conv0_OrigInstDefn_62);
                  }
                  hlds__make_hlds__add_mode__OrigInstDefn_62 = ((MR_Word) hlds__make_hlds__add_mode__conv0_OrigInstDefn_62);
                  hlds__make_hlds__add_mode__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__OrigInstDefn_62, (MR_Integer) 0)));
                  hlds__make_hlds__add_mode__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__OrigInstDefn_62, (MR_Integer) 1)));
                  hlds__make_hlds__add_mode__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__OrigInstDefn_62, (MR_Integer) 2)));
                  hlds__make_hlds__add_mode__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__OrigInstDefn_62, (MR_Integer) 3)));
                  hlds__make_hlds__add_mode__OrigContext_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__OrigInstDefn_62, (MR_Integer) 4)));
                  hlds__make_hlds__add_mode__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__OrigInstDefn_62, (MR_Integer) 5)));
                  {
                    hlds__make_hlds__make_hlds_error__multiple_def_error_9_p_0((MR_Integer) 0, hlds__make_hlds__add_mode__InstSymName_2, hlds__make_hlds__add_mode__InstArity_36, (MR_String) "inst", hlds__make_hlds__add_mode__Context_6, hlds__make_hlds__add_mode__OrigContext_63, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_101_101, hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_11);
                  }
                }
                break;
            }
            *hlds__make_hlds__add_mode__STATE_VARIABLE_UserInstTable_9 = hlds__make_hlds__add_mode__STATE_VARIABLE_UserInstTable_0_8;
          }
      }
  }
}

void MR_CALL 
hlds__make_hlds__add_mode__module_add_mode_defn_7_p_0(
  MR_Word hlds__make_hlds__add_mode__ItemModeDefnInfo_8,
  MR_Word hlds__make_hlds__add_mode__ModeStatus_9,
  MR_Word * hlds__make_hlds__add_mode__InvalidMode_10,
  MR_Word hlds__make_hlds__add_mode__STATE_VARIABLE_ModuleInfo_0_21,
  MR_Word * hlds__make_hlds__add_mode__STATE_VARIABLE_ModuleInfo_22,
  MR_Word hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_0_23,
  MR_Word * hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_24)
{
  {
    MR_bool hlds__make_hlds__add_mode__succeeded;
    MR_Word hlds__make_hlds__add_mode__Name_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__ItemModeDefnInfo_8, (MR_Integer) 0)));
    MR_Word hlds__make_hlds__add_mode__Params_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__ItemModeDefnInfo_8, (MR_Integer) 1)));
    MR_Word hlds__make_hlds__add_mode__ModeDefn_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__ItemModeDefnInfo_8, (MR_Integer) 2)));
    MR_Word hlds__make_hlds__add_mode__VarSet_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__ItemModeDefnInfo_8, (MR_Integer) 3)));
    MR_Word hlds__make_hlds__add_mode__Context_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__ItemModeDefnInfo_8, (MR_Integer) 4)));
    MR_Word hlds__make_hlds__add_mode__ModeTable0_19;
    MR_Word hlds__make_hlds__add_mode__ModeTable_20;
    MR_Word hlds__make_hlds__add_mode__Body_37;
    MR_Integer hlds__make_hlds__add_mode__Arity_40;
    MR_Word hlds__make_hlds__add_mode__ModeId_41;
    MR_Word hlds__make_hlds__add_mode__ModeDefn_42;
    MR_Word hlds__make_hlds__add_mode__V_53_53;
    MR_Word hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_42_57;
    MR_Integer hlds__make_hlds__add_mode___SeqNum_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__ItemModeDefnInfo_8, (MR_Integer) 5)));
    MR_Word hlds__make_hlds__add_mode__STATE_VARIABLE_ModeTable_39_54;

    {
      hlds__hlds_module__module_info_get_mode_table_2_p_0(hlds__make_hlds__add_mode__STATE_VARIABLE_ModuleInfo_0_21, &hlds__make_hlds__add_mode__ModeTable0_19);
    }
    hlds__make_hlds__add_mode__Body_37 = (MR_Word) hlds__make_hlds__add_mode__ModeDefn_15;
    {
      mercury__list__length_2_p_0((MR_Word) &hlds__make_hlds__add_mode_scalar_common_1[0], hlds__make_hlds__add_mode__Params_14, &hlds__make_hlds__add_mode__Arity_40);
    }
    {
      hlds__make_hlds__add_mode__ModeId_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__ModeId_41, 0) = ((MR_Box) (hlds__make_hlds__add_mode__Name_13));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__ModeId_41, 1) = ((MR_Box) (hlds__make_hlds__add_mode__Arity_40));
    }
    hlds__make_hlds__add_mode__V_53_53 = (MR_Word) hlds__make_hlds__add_mode__Body_37;
    {
      hlds__make_hlds__add_mode__ModeDefn_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__ModeDefn_42, 0) = ((MR_Box) (hlds__make_hlds__add_mode__VarSet_16));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__ModeDefn_42, 1) = ((MR_Box) (hlds__make_hlds__add_mode__Params_14));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__ModeDefn_42, 2) = ((MR_Box) (hlds__make_hlds__add_mode__V_53_53));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__ModeDefn_42, 3) = ((MR_Box) (hlds__make_hlds__add_mode__Context_17));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__ModeDefn_42, 4) = ((MR_Box) (hlds__make_hlds__add_mode__ModeStatus_9));
    }
    {
      hlds__make_hlds__add_mode__succeeded = hlds__hlds_data__mode_table_insert_4_p_0(hlds__make_hlds__add_mode__ModeId_41, hlds__make_hlds__add_mode__ModeDefn_42, hlds__make_hlds__add_mode__ModeTable0_19, &hlds__make_hlds__add_mode__STATE_VARIABLE_ModeTable_39_54);
    }
    if (hlds__make_hlds__add_mode__succeeded)
      {
        hlds__make_hlds__add_mode__ModeTable_20 = hlds__make_hlds__add_mode__STATE_VARIABLE_ModeTable_39_54;
        hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_42_57 = hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_0_23;
      }
    else
      {
        MR_Word hlds__make_hlds__add_mode__InstModeStatus_43 = (MR_Word) hlds__make_hlds__add_mode__ModeStatus_9;

        if (((MR_tag((MR_Word) hlds__make_hlds__add_mode__InstModeStatus_43)) == (MR_mktag((MR_Integer) 1))))
          {
            MR_Word hlds__make_hlds__add_mode__InstModeImport_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__InstModeStatus_43, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) hlds__make_hlds__add_mode__InstModeImport_68)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(hlds__make_hlds__add_mode__InstModeImport_68)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word hlds__make_hlds__add_mode__ModeDefns_45;
                      MR_Word hlds__make_hlds__add_mode__OrigModeDefn_46;
                      MR_Word hlds__make_hlds__add_mode__OrigContext_50;
                      MR_Box hlds__make_hlds__add_mode__conv0_OrigModeDefn_46;
                      MR_Word hlds__make_hlds__add_mode__V_47_47;
                      MR_Word hlds__make_hlds__add_mode__V_48_48;
                      MR_Word hlds__make_hlds__add_mode__V_49_49;
                      MR_Word hlds__make_hlds__add_mode__V_51_51;

                      {
                        hlds__hlds_data__mode_table_get_mode_defns_2_p_0(hlds__make_hlds__add_mode__ModeTable0_19, &hlds__make_hlds__add_mode__ModeDefns_45);
                      }
                      {
                        mercury__map__lookup_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_mode_defn_0, hlds__make_hlds__add_mode__ModeDefns_45, ((MR_Box) (hlds__make_hlds__add_mode__ModeId_41)), &hlds__make_hlds__add_mode__conv0_OrigModeDefn_46);
                      }
                      hlds__make_hlds__add_mode__OrigModeDefn_46 = ((MR_Word) hlds__make_hlds__add_mode__conv0_OrigModeDefn_46);
                      hlds__make_hlds__add_mode__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__OrigModeDefn_46, (MR_Integer) 0)));
                      hlds__make_hlds__add_mode__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__OrigModeDefn_46, (MR_Integer) 1)));
                      hlds__make_hlds__add_mode__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__OrigModeDefn_46, (MR_Integer) 2)));
                      hlds__make_hlds__add_mode__OrigContext_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__OrigModeDefn_46, (MR_Integer) 3)));
                      hlds__make_hlds__add_mode__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__OrigModeDefn_46, (MR_Integer) 4)));
                      {
                        hlds__make_hlds__make_hlds_error__multiple_def_error_9_p_0((MR_Integer) 0, hlds__make_hlds__add_mode__Name_13, hlds__make_hlds__add_mode__Arity_40, (MR_String) "mode", hlds__make_hlds__add_mode__Context_17, hlds__make_hlds__add_mode__OrigContext_50, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_0_23, &hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_42_57);
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                    hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_42_57 = hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_0_23;
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word hlds__make_hlds__add_mode__ModeDefns_45;
                  MR_Word hlds__make_hlds__add_mode__OrigModeDefn_46;
                  MR_Word hlds__make_hlds__add_mode__OrigContext_50;
                  MR_Box hlds__make_hlds__add_mode__conv0_OrigModeDefn_46;
                  MR_Word hlds__make_hlds__add_mode__V_47_47;
                  MR_Word hlds__make_hlds__add_mode__V_48_48;
                  MR_Word hlds__make_hlds__add_mode__V_49_49;
                  MR_Word hlds__make_hlds__add_mode__V_51_51;

                  {
                    hlds__hlds_data__mode_table_get_mode_defns_2_p_0(hlds__make_hlds__add_mode__ModeTable0_19, &hlds__make_hlds__add_mode__ModeDefns_45);
                  }
                  {
                    mercury__map__lookup_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_mode_defn_0, hlds__make_hlds__add_mode__ModeDefns_45, ((MR_Box) (hlds__make_hlds__add_mode__ModeId_41)), &hlds__make_hlds__add_mode__conv0_OrigModeDefn_46);
                  }
                  hlds__make_hlds__add_mode__OrigModeDefn_46 = ((MR_Word) hlds__make_hlds__add_mode__conv0_OrigModeDefn_46);
                  hlds__make_hlds__add_mode__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__OrigModeDefn_46, (MR_Integer) 0)));
                  hlds__make_hlds__add_mode__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__OrigModeDefn_46, (MR_Integer) 1)));
                  hlds__make_hlds__add_mode__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__OrigModeDefn_46, (MR_Integer) 2)));
                  hlds__make_hlds__add_mode__OrigContext_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__OrigModeDefn_46, (MR_Integer) 3)));
                  hlds__make_hlds__add_mode__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__OrigModeDefn_46, (MR_Integer) 4)));
                  {
                    hlds__make_hlds__make_hlds_error__multiple_def_error_9_p_0((MR_Integer) 0, hlds__make_hlds__add_mode__Name_13, hlds__make_hlds__add_mode__Arity_40, (MR_String) "mode", hlds__make_hlds__add_mode__Context_17, hlds__make_hlds__add_mode__OrigContext_50, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_0_23, &hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_42_57);
                  }
                }
                break;
            }
          }
        else
          {
            MR_Word hlds__make_hlds__add_mode__ModeDefns_76;
            MR_Word hlds__make_hlds__add_mode__OrigModeDefn_77;
            MR_Word hlds__make_hlds__add_mode__OrigContext_81;
            MR_Box hlds__make_hlds__add_mode__conv1_OrigModeDefn_77;
            MR_Word hlds__make_hlds__add_mode__V_71_71;
            MR_Word hlds__make_hlds__add_mode__V_72_72;
            MR_Word hlds__make_hlds__add_mode__V_73_73;
            MR_Word hlds__make_hlds__add_mode__V_74_74;

            {
              hlds__hlds_data__mode_table_get_mode_defns_2_p_0(hlds__make_hlds__add_mode__ModeTable0_19, &hlds__make_hlds__add_mode__ModeDefns_76);
            }
            {
              mercury__map__lookup_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_mode_defn_0, hlds__make_hlds__add_mode__ModeDefns_76, ((MR_Box) (hlds__make_hlds__add_mode__ModeId_41)), &hlds__make_hlds__add_mode__conv1_OrigModeDefn_77);
            }
            hlds__make_hlds__add_mode__OrigModeDefn_77 = ((MR_Word) hlds__make_hlds__add_mode__conv1_OrigModeDefn_77);
            hlds__make_hlds__add_mode__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__OrigModeDefn_77, (MR_Integer) 0)));
            hlds__make_hlds__add_mode__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__OrigModeDefn_77, (MR_Integer) 1)));
            hlds__make_hlds__add_mode__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__OrigModeDefn_77, (MR_Integer) 2)));
            hlds__make_hlds__add_mode__OrigContext_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__OrigModeDefn_77, (MR_Integer) 3)));
            hlds__make_hlds__add_mode__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__OrigModeDefn_77, (MR_Integer) 4)));
            {
              hlds__make_hlds__make_hlds_error__multiple_def_error_9_p_0((MR_Integer) 0, hlds__make_hlds__add_mode__Name_13, hlds__make_hlds__add_mode__Arity_40, (MR_String) "mode", hlds__make_hlds__add_mode__Context_17, hlds__make_hlds__add_mode__OrigContext_81, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_0_23, &hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_42_57);
            }
          }
        hlds__make_hlds__add_mode__ModeTable_20 = hlds__make_hlds__add_mode__ModeTable0_19;
      }
    {
      hlds__make_hlds__add_mode__check_for_cyclic_mode_8_p_0(hlds__make_hlds__add_mode__ModeTable_20, hlds__make_hlds__add_mode__ModeId_41, hlds__make_hlds__add_mode__ModeId_41, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_mode__Context_17, hlds__make_hlds__add_mode__InvalidMode_10, hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_42_57, hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_24);
    }
    {
      hlds__hlds_module__module_info_set_mode_table_3_p_0(hlds__make_hlds__add_mode__ModeTable_20, hlds__make_hlds__add_mode__STATE_VARIABLE_ModuleInfo_0_21, hlds__make_hlds__add_mode__STATE_VARIABLE_ModuleInfo_22);
    }
  }
}

void MR_CALL 
hlds__make_hlds__add_mode__module_add_inst_defn_7_p_0(
  MR_Word hlds__make_hlds__add_mode__ItemInstDefnInfo_8,
  MR_Word hlds__make_hlds__add_mode__InstStatus_9,
  MR_Word * hlds__make_hlds__add_mode__InvalidInst_10,
  MR_Word hlds__make_hlds__add_mode__STATE_VARIABLE_ModuleInfo_0_27,
  MR_Word * hlds__make_hlds__add_mode__STATE_VARIABLE_ModuleInfo_28,
  MR_Word hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_0_29,
  MR_Word * hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_30)
{
  {
    MR_bool hlds__make_hlds__add_mode__succeeded;
    MR_Word hlds__make_hlds__add_mode__InstName_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__ItemInstDefnInfo_8, (MR_Integer) 0)));
    MR_Word hlds__make_hlds__add_mode__InstParams_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__ItemInstDefnInfo_8, (MR_Integer) 1)));
    MR_Word hlds__make_hlds__add_mode__MaybeForType_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__ItemInstDefnInfo_8, (MR_Integer) 2)));
    MR_Word hlds__make_hlds__add_mode__InstDefn_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__ItemInstDefnInfo_8, (MR_Integer) 3)));
    MR_Word hlds__make_hlds__add_mode__VarSet_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__ItemInstDefnInfo_8, (MR_Integer) 4)));
    MR_Word hlds__make_hlds__add_mode__Context_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__ItemInstDefnInfo_8, (MR_Integer) 5)));
    MR_Word hlds__make_hlds__add_mode__InstTable0_20;
    MR_Word hlds__make_hlds__add_mode__UserInstTable0_21;
    MR_Word hlds__make_hlds__add_mode__UserInstTable_22;
    MR_Word hlds__make_hlds__add_mode__InstTable_23;
    MR_Integer hlds__make_hlds__add_mode__InstArity_24;
    MR_Word hlds__make_hlds__add_mode__InstId_25;
    MR_Word hlds__make_hlds__add_mode__TestArgs_26;
    MR_Word hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_31_31;
    MR_Integer hlds__make_hlds__add_mode___SeqNum_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__ItemInstDefnInfo_8, (MR_Integer) 6)));

    {
      hlds__hlds_module__module_info_get_inst_table_2_p_0(hlds__make_hlds__add_mode__STATE_VARIABLE_ModuleInfo_0_27, &hlds__make_hlds__add_mode__InstTable0_20);
    }
    {
      hlds__hlds_data__inst_table_get_user_insts_2_p_0(hlds__make_hlds__add_mode__InstTable0_20, &hlds__make_hlds__add_mode__UserInstTable0_21);
    }
    {
      hlds__make_hlds__add_mode__insts_add_11_p_0(hlds__make_hlds__add_mode__VarSet_17, hlds__make_hlds__add_mode__InstName_13, hlds__make_hlds__add_mode__InstParams_14, hlds__make_hlds__add_mode__MaybeForType_15, hlds__make_hlds__add_mode__InstDefn_16, hlds__make_hlds__add_mode__Context_18, hlds__make_hlds__add_mode__InstStatus_9, hlds__make_hlds__add_mode__UserInstTable0_21, &hlds__make_hlds__add_mode__UserInstTable_22, hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_0_29, &hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_31_31);
    }
    {
      hlds__hlds_data__inst_table_set_user_insts_3_p_0(hlds__make_hlds__add_mode__UserInstTable_22, hlds__make_hlds__add_mode__InstTable0_20, &hlds__make_hlds__add_mode__InstTable_23);
    }
    {
      hlds__hlds_module__module_info_set_inst_table_3_p_0(hlds__make_hlds__add_mode__InstTable_23, hlds__make_hlds__add_mode__STATE_VARIABLE_ModuleInfo_0_27, hlds__make_hlds__add_mode__STATE_VARIABLE_ModuleInfo_28);
    }
    {
      hlds__make_hlds__add_mode__InstArity_24 = mercury__list__length_1_f_0((MR_Word) &hlds__make_hlds__add_mode_scalar_common_1[0], hlds__make_hlds__add_mode__InstParams_14);
    }
    {
      hlds__make_hlds__add_mode__InstId_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__InstId_25, 0) = ((MR_Box) (hlds__make_hlds__add_mode__InstName_13));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__InstId_25, 1) = ((MR_Box) (hlds__make_hlds__add_mode__InstArity_24));
    }
    {
      hlds__make_hlds__add_mode__TestArgs_26 = mercury__list__duplicate_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__make_hlds__add_mode__InstArity_24, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))));
    }
    {
      hlds__make_hlds__add_mode__check_for_cyclic_inst_9_p_0(hlds__make_hlds__add_mode__UserInstTable_22, hlds__make_hlds__add_mode__InstId_25, hlds__make_hlds__add_mode__InstId_25, hlds__make_hlds__add_mode__TestArgs_26, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_mode__Context_18, hlds__make_hlds__add_mode__InvalidInst_10, hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_31_31, hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_30);
    }
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

/* :- end_module hlds.make_hlds.add_mode. */
