/*
** Automatically generated from `add_mode.m'
** by the Mercury compiler,
** version rotd-2014-12-08
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
#include "array.mih"
#include "assoc_list.mih"
#include "bag.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "hlds.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "multi_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "random.mih"
#include "recompilation.mih"
#include "require.mih"
#include "robdd.mih"
#include "rtti_implementation.mih"
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
#include "tree_bitset.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
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
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.make_hlds.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
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
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.equiv_type.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
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




#line 141 "hlds.make_hlds.add_mode.c"
static const MR_PseudoTypeInfo hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__field_types_circ_id_0_0[2];

#line 144 "hlds.make_hlds.add_mode.c"
static const MR_DuFunctorDesc hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__du_functor_desc_circ_id_0_0;

#line 147 "hlds.make_hlds.add_mode.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__du_stag_ordered_circ_id_0_0[1];

#line 150 "hlds.make_hlds.add_mode.c"
static const MR_DuPtagLayout hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__du_ptag_ordered_circ_id_0[1];

#line 153 "hlds.make_hlds.add_mode.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__du_name_ordered_circ_id_0[1];

#line 156 "hlds.make_hlds.add_mode.c"
static const MR_Integer hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__functor_number_map_circ_id_0[1];

#line 159 "hlds.make_hlds.add_mode.c"
static MR_bool MR_CALL 
hlds__make_hlds__add_mode____Unify____circ_id_0_0_10001(
#line 162 "hlds.make_hlds.add_mode.c"
  MR_Box hlds__make_hlds__add_mode__wrapper_arg_1,
#line 164 "hlds.make_hlds.add_mode.c"
  MR_Box hlds__make_hlds__add_mode__wrapper_arg_2);

#line 167 "hlds.make_hlds.add_mode.c"
static void MR_CALL 
hlds__make_hlds__add_mode____Compare____circ_id_0_0_10001(
#line 170 "hlds.make_hlds.add_mode.c"
  MR_Box * hlds__make_hlds__add_mode__wrapper_arg_1,
#line 172 "hlds.make_hlds.add_mode.c"
  MR_Box hlds__make_hlds__add_mode__wrapper_arg_2,
#line 174 "hlds.make_hlds.add_mode.c"
  MR_Box hlds__make_hlds__add_mode__wrapper_arg_3);

#line 241 "add_mode.m"
static MR_Word MR_CALL 
hlds__make_hlds__add_mode__IntroducedFrom__func__report_circular_equiv_error__241__1_1_f_0(
#line 241 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__HeadVar__1_26);

#line 215 "add_mode.m"
static void MR_CALL 
hlds__make_hlds__add_mode____Compare____circ_id_0_0(
#line 215 "add_mode.m"
  MR_Word * hlds__make_hlds__add_mode__HeadVar__1_1,
#line 215 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__HeadVar__2_2,
#line 215 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__HeadVar__3_3);

#line 215 "add_mode.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mode____Unify____circ_id_0_0(
#line 215 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__HeadVar__1_1,
#line 215 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__HeadVar__2_2);

#line 219 "add_mode.m"
static MR_Word MR_CALL 
hlds__make_hlds__add_mode__mode_id_to_circ_id_1_f_0(
#line 219 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__HeadVar__1_1);

#line 218 "add_mode.m"
static MR_Word MR_CALL 
hlds__make_hlds__add_mode__inst_id_to_circ_id_1_f_0(
#line 218 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__HeadVar__1_1);

#line 241 "add_mode.m"
static MR_Box MR_CALL 
hlds__make_hlds__add_mode__report_circular_mode_equiv_error_6_p_0_2(
#line 241 "add_mode.m"
  MR_Box hlds__make_hlds__add_mode__closure_arg,
#line 241 "add_mode.m"
  MR_Box hlds__make_hlds__add_mode__wrapper_arg_1);

#line 212 "add_mode.m"
static MR_Box MR_CALL 
hlds__make_hlds__add_mode__report_circular_mode_equiv_error_6_p_0_1(
#line 212 "add_mode.m"
  MR_Box hlds__make_hlds__add_mode__closure_arg,
#line 212 "add_mode.m"
  MR_Box hlds__make_hlds__add_mode__wrapper_arg_1);

#line 204 "add_mode.m"
static void MR_CALL 
hlds__make_hlds__add_mode__report_circular_mode_equiv_error_6_p_0(
#line 204 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__OrigModeId_7,
#line 204 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__ModeId_8,
#line 204 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__Expansions_9,
#line 204 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__Context_10,
#line 204 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_0_12,
#line 204 "add_mode.m"
  MR_Word * hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_13);

#line 241 "add_mode.m"
static MR_Box MR_CALL 
hlds__make_hlds__add_mode__report_circular_inst_equiv_error_6_p_0_2(
#line 241 "add_mode.m"
  MR_Box hlds__make_hlds__add_mode__closure_arg,
#line 241 "add_mode.m"
  MR_Box hlds__make_hlds__add_mode__wrapper_arg_1);

#line 201 "add_mode.m"
static MR_Box MR_CALL 
hlds__make_hlds__add_mode__report_circular_inst_equiv_error_6_p_0_1(
#line 201 "add_mode.m"
  MR_Box hlds__make_hlds__add_mode__closure_arg,
#line 201 "add_mode.m"
  MR_Box hlds__make_hlds__add_mode__wrapper_arg_1);

#line 193 "add_mode.m"
static void MR_CALL 
hlds__make_hlds__add_mode__report_circular_inst_equiv_error_6_p_0(
#line 193 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__OrigInstId_7,
#line 193 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__InstId_8,
#line 193 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__Expansions_9,
#line 193 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__Context_10,
#line 193 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_0_12,
#line 193 "add_mode.m"
  MR_Word * hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_13);

#line 165 "add_mode.m"
static void MR_CALL 
hlds__make_hlds__add_mode__check_for_cyclic_mode_8_p_0(
#line 165 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__ModeTable_9,
#line 165 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__OrigModeId_10,
#line 165 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__ModeId0_11,
#line 165 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__Expansions0_12,
#line 165 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__Context_13,
#line 165 "add_mode.m"
  MR_Word * hlds__make_hlds__add_mode__InvalidMode_14,
#line 165 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_0_29,
#line 165 "add_mode.m"
  MR_Word * hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_30);

#line 99 "add_mode.m"
static void MR_CALL 
hlds__make_hlds__add_mode__check_for_cyclic_inst_9_p_0(
#line 99 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__UserInstTable_10,
#line 99 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__OrigInstId_11,
#line 99 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__InstId0_12,
#line 99 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__Args0_13,
#line 99 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__Expansions0_14,
#line 99 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__Context_15,
#line 99 "add_mode.m"
  MR_Word * hlds__make_hlds__add_mode__InvalidMode_16,
#line 99 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_0_32,
#line 99 "add_mode.m"
  MR_Word * hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_33);


static /* final */ const MR_Box hlds__make_hlds__add_mode_scalar_common_1[4][2];

static /* final */ const MR_Box hlds__make_hlds__add_mode_scalar_common_2[3][5];

static /* final */ const MR_Box hlds__make_hlds__add_mode_scalar_common_3[4][3];




static /* final */ const MR_Box hlds__make_hlds__add_mode_scalar_common_1[4][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: circular equivalence"))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mode_scalar_common_1[2]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
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
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 423 "hlds.make_hlds.add_mode.c"
static const MR_PseudoTypeInfo hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__field_types_circ_id_0_0[2] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 429 "hlds.make_hlds.add_mode.c"
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
  NULL
};

#line 444 "hlds.make_hlds.add_mode.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__du_stag_ordered_circ_id_0_0[1] = {
  &hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__du_functor_desc_circ_id_0_0
};

#line 449 "hlds.make_hlds.add_mode.c"
static const MR_DuPtagLayout hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__du_ptag_ordered_circ_id_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__du_stag_ordered_circ_id_0_0
  }
};

#line 458 "hlds.make_hlds.add_mode.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__du_name_ordered_circ_id_0[1] = {
  &hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__du_functor_desc_circ_id_0_0
};

#line 463 "hlds.make_hlds.add_mode.c"
static const MR_Integer hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__functor_number_map_circ_id_0[1] = {
  (MR_Integer) 0
};

#line 468 "hlds.make_hlds.add_mode.c"
const MR_TypeCtorInfo_Struct hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__type_ctor_info_circ_id_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__make_hlds__add_mode____Unify____circ_id_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__add_mode____Compare____circ_id_0_0_10001)),
  (MR_String) "hlds.make_hlds.add_mode",
  (MR_String) "circ_id",
  {
    hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__du_name_ordered_circ_id_0
  },
  {
    hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__du_ptag_ordered_circ_id_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__functor_number_map_circ_id_0
};

#line 489 "hlds.make_hlds.add_mode.c"
static MR_bool MR_CALL 
hlds__make_hlds__add_mode____Unify____circ_id_0_0_10001(
#line 492 "hlds.make_hlds.add_mode.c"
  MR_Box hlds__make_hlds__add_mode__wrapper_arg_1,
#line 494 "hlds.make_hlds.add_mode.c"
  MR_Box hlds__make_hlds__add_mode__wrapper_arg_2)
#line 496 "hlds.make_hlds.add_mode.c"
{
#line 498 "hlds.make_hlds.add_mode.c"
  {
#line 500 "hlds.make_hlds.add_mode.c"
    MR_bool hlds__make_hlds__add_mode__succeeded;

#line 503 "hlds.make_hlds.add_mode.c"
    {
#line 505 "hlds.make_hlds.add_mode.c"
      hlds__make_hlds__add_mode__succeeded = hlds__make_hlds__add_mode____Unify____circ_id_0_0(((MR_Word) hlds__make_hlds__add_mode__wrapper_arg_1), ((MR_Word) hlds__make_hlds__add_mode__wrapper_arg_2));
    }
#line 508 "hlds.make_hlds.add_mode.c"
    return hlds__make_hlds__add_mode__succeeded;
#line 510 "hlds.make_hlds.add_mode.c"
  }
#line 512 "hlds.make_hlds.add_mode.c"
}

#line 515 "hlds.make_hlds.add_mode.c"
static void MR_CALL 
hlds__make_hlds__add_mode____Compare____circ_id_0_0_10001(
#line 518 "hlds.make_hlds.add_mode.c"
  MR_Box * hlds__make_hlds__add_mode__wrapper_arg_1,
#line 520 "hlds.make_hlds.add_mode.c"
  MR_Box hlds__make_hlds__add_mode__wrapper_arg_2,
#line 522 "hlds.make_hlds.add_mode.c"
  MR_Box hlds__make_hlds__add_mode__wrapper_arg_3)
#line 524 "hlds.make_hlds.add_mode.c"
{
#line 526 "hlds.make_hlds.add_mode.c"
  {
#line 528 "hlds.make_hlds.add_mode.c"
    MR_Word hlds__make_hlds__add_mode__conv0_HeadVar__1_1;

#line 531 "hlds.make_hlds.add_mode.c"
    {
#line 533 "hlds.make_hlds.add_mode.c"
      hlds__make_hlds__add_mode____Compare____circ_id_0_0(&hlds__make_hlds__add_mode__conv0_HeadVar__1_1, ((MR_Word) hlds__make_hlds__add_mode__wrapper_arg_2), ((MR_Word) hlds__make_hlds__add_mode__wrapper_arg_3));
    }
#line 536 "hlds.make_hlds.add_mode.c"
    *hlds__make_hlds__add_mode__wrapper_arg_1 = ((MR_Box) (hlds__make_hlds__add_mode__conv0_HeadVar__1_1));
#line 538 "hlds.make_hlds.add_mode.c"
  }
#line 540 "hlds.make_hlds.add_mode.c"
}

#line 241 "add_mode.m"
static MR_Word MR_CALL 
hlds__make_hlds__add_mode__IntroducedFrom__func__report_circular_equiv_error__241__1_1_f_0(
#line 241 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__HeadVar__1_26)
#line 241 "add_mode.m"
{
#line 241 "add_mode.m"
  {
#line 241 "add_mode.m"
    MR_bool hlds__make_hlds__add_mode__succeeded;
#line 241 "add_mode.m"
    MR_Word hlds__make_hlds__add_mode__HeadVar__2_27;
#line 241 "add_mode.m"
    MR_Word hlds__make_hlds__add_mode__V_28_28;
#line 241 "add_mode.m"
    MR_Word hlds__make_hlds__add_mode__SymName_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__HeadVar__1_26, (MR_Integer) 0)));
#line 241 "add_mode.m"
    MR_Integer hlds__make_hlds__add_mode__Arity_50 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__HeadVar__1_26, (MR_Integer) 1)));

#line 243 "add_mode.m"
    {
#line 243 "add_mode.m"
      hlds__make_hlds__add_mode__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 243 "add_mode.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__V_28_28, 0) = ((MR_Box) (hlds__make_hlds__add_mode__SymName_49));
#line 243 "add_mode.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__V_28_28, 1) = ((MR_Box) (hlds__make_hlds__add_mode__Arity_50));
#line 243 "add_mode.m"
    }
#line 243 "add_mode.m"
    {
#line 243 "add_mode.m"
      hlds__make_hlds__add_mode__HeadVar__2_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 243 "add_mode.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mode__HeadVar__2_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 243 "add_mode.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mode__HeadVar__2_27, 1) = ((MR_Box) (hlds__make_hlds__add_mode__V_28_28));
#line 243 "add_mode.m"
    }
#line 241 "add_mode.m"
    return hlds__make_hlds__add_mode__HeadVar__2_27;
#line 241 "add_mode.m"
  }
#line 241 "add_mode.m"
}

#line 215 "add_mode.m"
static void MR_CALL 
hlds__make_hlds__add_mode____Compare____circ_id_0_0(
#line 215 "add_mode.m"
  MR_Word * hlds__make_hlds__add_mode__HeadVar__1_1,
#line 215 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__HeadVar__2_2,
#line 215 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__HeadVar__3_3)
#line 215 "add_mode.m"
{
#line 215 "add_mode.m"
  {
#line 215 "add_mode.m"
    MR_bool hlds__make_hlds__add_mode__succeeded;
#line 215 "add_mode.m"
    MR_Integer hlds__make_hlds__add_mode__CastX_9 = (MR_Integer) hlds__make_hlds__add_mode__HeadVar__2_2;
#line 215 "add_mode.m"
    MR_Integer hlds__make_hlds__add_mode__CastY_10 = (MR_Integer) hlds__make_hlds__add_mode__HeadVar__3_3;

#line 215 "add_mode.m"
    hlds__make_hlds__add_mode__succeeded = (hlds__make_hlds__add_mode__CastX_9 == hlds__make_hlds__add_mode__CastY_10);
#line 215 "add_mode.m"
    if (hlds__make_hlds__add_mode__succeeded)
#line 614 "hlds.make_hlds.add_mode.c"
      *hlds__make_hlds__add_mode__HeadVar__1_1 = (MR_Integer) 0;
#line 215 "add_mode.m"
    else
#line 215 "add_mode.m"
      {
#line 215 "add_mode.m"
        MR_Word hlds__make_hlds__add_mode__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__HeadVar__2_2, (MR_Integer) 0)));
#line 215 "add_mode.m"
        MR_Integer hlds__make_hlds__add_mode__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__HeadVar__2_2, (MR_Integer) 1)));
#line 215 "add_mode.m"
        MR_Word hlds__make_hlds__add_mode__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__HeadVar__3_3, (MR_Integer) 0)));
#line 215 "add_mode.m"
        MR_Integer hlds__make_hlds__add_mode__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__HeadVar__3_3, (MR_Integer) 1)));
#line 215 "add_mode.m"
        MR_Word hlds__make_hlds__add_mode__V_8_8;

#line 215 "add_mode.m"
        {
#line 215 "add_mode.m"
          mdbcomp__sym_name____Compare____sym_name_0_0(&hlds__make_hlds__add_mode__V_8_8, hlds__make_hlds__add_mode__V_4_4, hlds__make_hlds__add_mode__V_6_6);
        }
#line 636 "hlds.make_hlds.add_mode.c"
        hlds__make_hlds__add_mode__succeeded = (hlds__make_hlds__add_mode__V_8_8 == (MR_Integer) 0);
#line 215 "add_mode.m"
        hlds__make_hlds__add_mode__succeeded = !(hlds__make_hlds__add_mode__succeeded);
#line 215 "add_mode.m"
        if (hlds__make_hlds__add_mode__succeeded)
#line 215 "add_mode.m"
          *hlds__make_hlds__add_mode__HeadVar__1_1 = hlds__make_hlds__add_mode__V_8_8;
#line 215 "add_mode.m"
        else
#line 215 "add_mode.m"
          {
#line 215 "add_mode.m"
            mercury__private_builtin__builtin_compare_int_3_p_0(hlds__make_hlds__add_mode__HeadVar__1_1, hlds__make_hlds__add_mode__V_5_5, hlds__make_hlds__add_mode__V_7_7);
#line 215 "add_mode.m"
            return;
          }
#line 215 "add_mode.m"
      }
#line 215 "add_mode.m"
  }
#line 215 "add_mode.m"
}

#line 215 "add_mode.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mode____Unify____circ_id_0_0(
#line 215 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__HeadVar__1_1,
#line 215 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__HeadVar__2_2)
#line 215 "add_mode.m"
{
#line 215 "add_mode.m"
  {
#line 215 "add_mode.m"
    MR_bool hlds__make_hlds__add_mode__succeeded;
#line 215 "add_mode.m"
    MR_Integer hlds__make_hlds__add_mode__CastX_7 = (MR_Integer) hlds__make_hlds__add_mode__HeadVar__1_1;
#line 215 "add_mode.m"
    MR_Integer hlds__make_hlds__add_mode__CastY_8 = (MR_Integer) hlds__make_hlds__add_mode__HeadVar__2_2;

#line 215 "add_mode.m"
    hlds__make_hlds__add_mode__succeeded = (hlds__make_hlds__add_mode__CastX_7 == hlds__make_hlds__add_mode__CastY_8);
#line 215 "add_mode.m"
    if (hlds__make_hlds__add_mode__succeeded)
#line 215 "add_mode.m"
      hlds__make_hlds__add_mode__succeeded = MR_TRUE;
#line 215 "add_mode.m"
    else
#line 215 "add_mode.m"
      {
#line 215 "add_mode.m"
        MR_Word hlds__make_hlds__add_mode__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__HeadVar__1_1, (MR_Integer) 0)));
#line 215 "add_mode.m"
        MR_Integer hlds__make_hlds__add_mode__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__HeadVar__1_1, (MR_Integer) 1)));
#line 215 "add_mode.m"
        MR_Word hlds__make_hlds__add_mode__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__HeadVar__2_2, (MR_Integer) 0)));
#line 215 "add_mode.m"
        MR_Integer hlds__make_hlds__add_mode__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__HeadVar__2_2, (MR_Integer) 1)));

#line 697 "hlds.make_hlds.add_mode.c"
        {
#line 699 "hlds.make_hlds.add_mode.c"
          hlds__make_hlds__add_mode__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(hlds__make_hlds__add_mode__V_3_3, hlds__make_hlds__add_mode__V_5_5);
        }
#line 215 "add_mode.m"
        if (hlds__make_hlds__add_mode__succeeded)
#line 704 "hlds.make_hlds.add_mode.c"
          hlds__make_hlds__add_mode__succeeded = (hlds__make_hlds__add_mode__V_4_4 == hlds__make_hlds__add_mode__V_6_6);
#line 215 "add_mode.m"
      }
#line 215 "add_mode.m"
    return hlds__make_hlds__add_mode__succeeded;
#line 215 "add_mode.m"
  }
#line 215 "add_mode.m"
}

#line 219 "add_mode.m"
static MR_Word MR_CALL 
hlds__make_hlds__add_mode__mode_id_to_circ_id_1_f_0(
#line 219 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__HeadVar__1_1)
#line 219 "add_mode.m"
{
#line 222 "add_mode.m"
  {
#line 222 "add_mode.m"
    MR_bool hlds__make_hlds__add_mode__succeeded;
#line 222 "add_mode.m"
    MR_Word hlds__make_hlds__add_mode__HeadVar__2_2;
#line 222 "add_mode.m"
    MR_Word hlds__make_hlds__add_mode__SymName_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__HeadVar__1_1, (MR_Integer) 0)));
#line 222 "add_mode.m"
    MR_Integer hlds__make_hlds__add_mode__Arity_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__HeadVar__1_1, (MR_Integer) 1)));

#line 222 "add_mode.m"
    {
#line 222 "add_mode.m"
      hlds__make_hlds__add_mode__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 222 "add_mode.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__HeadVar__2_2, 0) = ((MR_Box) (hlds__make_hlds__add_mode__SymName_3));
#line 222 "add_mode.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__HeadVar__2_2, 1) = ((MR_Box) (hlds__make_hlds__add_mode__Arity_4));
#line 222 "add_mode.m"
    }
#line 222 "add_mode.m"
    return hlds__make_hlds__add_mode__HeadVar__2_2;
#line 222 "add_mode.m"
  }
#line 219 "add_mode.m"
}

#line 218 "add_mode.m"
static MR_Word MR_CALL 
hlds__make_hlds__add_mode__inst_id_to_circ_id_1_f_0(
#line 218 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__HeadVar__1_1)
#line 218 "add_mode.m"
{
#line 221 "add_mode.m"
  {
#line 221 "add_mode.m"
    MR_bool hlds__make_hlds__add_mode__succeeded;
#line 221 "add_mode.m"
    MR_Word hlds__make_hlds__add_mode__HeadVar__2_2;
#line 221 "add_mode.m"
    MR_Word hlds__make_hlds__add_mode__SymName_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__HeadVar__1_1, (MR_Integer) 0)));
#line 221 "add_mode.m"
    MR_Integer hlds__make_hlds__add_mode__Arity_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__HeadVar__1_1, (MR_Integer) 1)));

#line 221 "add_mode.m"
    {
#line 221 "add_mode.m"
      hlds__make_hlds__add_mode__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 221 "add_mode.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__HeadVar__2_2, 0) = ((MR_Box) (hlds__make_hlds__add_mode__SymName_3));
#line 221 "add_mode.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__HeadVar__2_2, 1) = ((MR_Box) (hlds__make_hlds__add_mode__Arity_4));
#line 221 "add_mode.m"
    }
#line 221 "add_mode.m"
    return hlds__make_hlds__add_mode__HeadVar__2_2;
#line 221 "add_mode.m"
  }
#line 218 "add_mode.m"
}

#line 241 "add_mode.m"
static MR_Box MR_CALL 
hlds__make_hlds__add_mode__report_circular_mode_equiv_error_6_p_0_2(
#line 241 "add_mode.m"
  MR_Box hlds__make_hlds__add_mode__closure_arg,
#line 241 "add_mode.m"
  MR_Box hlds__make_hlds__add_mode__wrapper_arg_1)
#line 241 "add_mode.m"
{
#line 241 "add_mode.m"
  {
#line 241 "add_mode.m"
    MR_Box hlds__make_hlds__add_mode__wrapper_arg_2;
#line 241 "add_mode.m"
    MR_Box hlds__make_hlds__add_mode__closure = hlds__make_hlds__add_mode__closure_arg;
#line 241 "add_mode.m"
    MR_Word hlds__make_hlds__add_mode__conv2_HeadVar__2_27;

#line 241 "add_mode.m"
    {
#line 241 "add_mode.m"
      hlds__make_hlds__add_mode__conv2_HeadVar__2_27 = hlds__make_hlds__add_mode__IntroducedFrom__func__report_circular_equiv_error__241__1_1_f_0(((MR_Word) hlds__make_hlds__add_mode__wrapper_arg_1));
    }
#line 241 "add_mode.m"
    hlds__make_hlds__add_mode__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__add_mode__conv2_HeadVar__2_27));
#line 241 "add_mode.m"
    return hlds__make_hlds__add_mode__wrapper_arg_2;
#line 241 "add_mode.m"
  }
#line 241 "add_mode.m"
}

#line 212 "add_mode.m"
static MR_Box MR_CALL 
hlds__make_hlds__add_mode__report_circular_mode_equiv_error_6_p_0_1(
#line 212 "add_mode.m"
  MR_Box hlds__make_hlds__add_mode__closure_arg,
#line 212 "add_mode.m"
  MR_Box hlds__make_hlds__add_mode__wrapper_arg_1)
#line 212 "add_mode.m"
{
#line 212 "add_mode.m"
  {
#line 212 "add_mode.m"
    MR_Box hlds__make_hlds__add_mode__wrapper_arg_2;
#line 212 "add_mode.m"
    MR_Box hlds__make_hlds__add_mode__closure = hlds__make_hlds__add_mode__closure_arg;
#line 212 "add_mode.m"
    MR_Word hlds__make_hlds__add_mode__conv0_HeadVar__2_2;

#line 212 "add_mode.m"
    {
#line 212 "add_mode.m"
      hlds__make_hlds__add_mode__conv0_HeadVar__2_2 = hlds__make_hlds__add_mode__mode_id_to_circ_id_1_f_0(((MR_Word) hlds__make_hlds__add_mode__wrapper_arg_1));
    }
#line 212 "add_mode.m"
    hlds__make_hlds__add_mode__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__add_mode__conv0_HeadVar__2_2));
#line 212 "add_mode.m"
    return hlds__make_hlds__add_mode__wrapper_arg_2;
#line 212 "add_mode.m"
  }
#line 212 "add_mode.m"
}

#line 204 "add_mode.m"
static void MR_CALL 
hlds__make_hlds__add_mode__report_circular_mode_equiv_error_6_p_0(
#line 204 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__OrigModeId_7,
#line 204 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__ModeId_8,
#line 204 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__Expansions_9,
#line 204 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__Context_10,
#line 204 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_0_12,
#line 204 "add_mode.m"
  MR_Word * hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_13)
#line 204 "add_mode.m"
{
#line 209 "add_mode.m"
  {
#line 209 "add_mode.m"
    MR_bool hlds__make_hlds__add_mode__succeeded;
#line 209 "add_mode.m"
    MR_Word hlds__make_hlds__add_mode__V_16_16;
#line 209 "add_mode.m"
    MR_Word hlds__make_hlds__add_mode__V_17_17;
#line 209 "add_mode.m"
    MR_Word hlds__make_hlds__add_mode__V_18_18;
#line 209 "add_mode.m"
    MR_Word hlds__make_hlds__add_mode__SymName_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__OrigModeId_7, (MR_Integer) 0)));
#line 209 "add_mode.m"
    MR_Integer hlds__make_hlds__add_mode__Arity_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__OrigModeId_7, (MR_Integer) 1)));
#line 209 "add_mode.m"
    MR_Word hlds__make_hlds__add_mode__SymName_27;
#line 209 "add_mode.m"
    MR_Integer hlds__make_hlds__add_mode__Arity_28;
#line 215 "add_mode.m"
    MR_Integer hlds__make_hlds__add_mode__CastX_78;
#line 215 "add_mode.m"
    MR_Integer hlds__make_hlds__add_mode__CastY_79;

#line 222 "add_mode.m"
    {
#line 222 "add_mode.m"
      hlds__make_hlds__add_mode__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 222 "add_mode.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__V_16_16, 0) = ((MR_Box) (hlds__make_hlds__add_mode__SymName_25));
#line 222 "add_mode.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__V_16_16, 1) = ((MR_Box) (hlds__make_hlds__add_mode__Arity_26));
#line 222 "add_mode.m"
    }
#line 222 "add_mode.m"
    hlds__make_hlds__add_mode__SymName_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__ModeId_8, (MR_Integer) 0)));
#line 222 "add_mode.m"
    hlds__make_hlds__add_mode__Arity_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__ModeId_8, (MR_Integer) 1)));
#line 222 "add_mode.m"
    {
#line 222 "add_mode.m"
      hlds__make_hlds__add_mode__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 222 "add_mode.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__V_17_17, 0) = ((MR_Box) (hlds__make_hlds__add_mode__SymName_27));
#line 222 "add_mode.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__V_17_17, 1) = ((MR_Box) (hlds__make_hlds__add_mode__Arity_28));
#line 222 "add_mode.m"
    }
#line 212 "add_mode.m"
    {
#line 212 "add_mode.m"
      hlds__make_hlds__add_mode__V_18_18 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_id_0, (MR_Word) &hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__type_ctor_info_circ_id_0, (MR_Word) &hlds__make_hlds__add_mode_scalar_common_3[2], hlds__make_hlds__add_mode__Expansions_9);
    }
#line 215 "add_mode.m"
    hlds__make_hlds__add_mode__CastX_78 = (MR_Integer) hlds__make_hlds__add_mode__V_17_17;
#line 215 "add_mode.m"
    hlds__make_hlds__add_mode__CastY_79 = (MR_Integer) hlds__make_hlds__add_mode__V_16_16;
#line 215 "add_mode.m"
    hlds__make_hlds__add_mode__succeeded = (hlds__make_hlds__add_mode__CastX_78 == hlds__make_hlds__add_mode__CastY_79);
#line 215 "add_mode.m"
    if (hlds__make_hlds__add_mode__succeeded)
#line 215 "add_mode.m"
      hlds__make_hlds__add_mode__succeeded = MR_TRUE;
#line 215 "add_mode.m"
    else
#line 215 "add_mode.m"
      {
#line 215 "add_mode.m"
        MR_Word hlds__make_hlds__add_mode__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__V_17_17, (MR_Integer) 0)));
#line 215 "add_mode.m"
        MR_Integer hlds__make_hlds__add_mode__V_75_75 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__V_17_17, (MR_Integer) 1)));
#line 215 "add_mode.m"
        MR_Word hlds__make_hlds__add_mode__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__V_16_16, (MR_Integer) 0)));
#line 215 "add_mode.m"
        MR_Integer hlds__make_hlds__add_mode__V_77_77 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__V_16_16, (MR_Integer) 1)));

#line 941 "hlds.make_hlds.add_mode.c"
        {
#line 943 "hlds.make_hlds.add_mode.c"
          hlds__make_hlds__add_mode__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(hlds__make_hlds__add_mode__V_74_74, hlds__make_hlds__add_mode__V_76_76);
        }
#line 215 "add_mode.m"
        if (hlds__make_hlds__add_mode__succeeded)
#line 948 "hlds.make_hlds.add_mode.c"
          hlds__make_hlds__add_mode__succeeded = (hlds__make_hlds__add_mode__V_75_75 == hlds__make_hlds__add_mode__V_77_77);
#line 215 "add_mode.m"
      }
#line 250 "add_mode.m"
    if (hlds__make_hlds__add_mode__succeeded)
#line 240 "add_mode.m"
      {
#line 240 "add_mode.m"
        MR_Word hlds__make_hlds__add_mode__TypeCtorInfo_51_71 = (MR_Word) &hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__type_ctor_info_circ_id_0;
#line 240 "add_mode.m"
        MR_Word hlds__make_hlds__add_mode__TypeCtorInfo_53_73;
#line 240 "add_mode.m"
        MR_String hlds__make_hlds__add_mode__Kinds_38;
#line 240 "add_mode.m"
        MR_Word hlds__make_hlds__add_mode__ExpansionPieces_39;
#line 240 "add_mode.m"
        MR_Word hlds__make_hlds__add_mode__Pieces_42;
#line 240 "add_mode.m"
        MR_Word hlds__make_hlds__add_mode__Msg_43;
#line 240 "add_mode.m"
        MR_Word hlds__make_hlds__add_mode__Spec_44;
#line 240 "add_mode.m"
        MR_Word hlds__make_hlds__add_mode__V_49_49;
#line 240 "add_mode.m"
        MR_Word hlds__make_hlds__add_mode__V_52_52;
#line 240 "add_mode.m"
        MR_Word hlds__make_hlds__add_mode__V_53_53;
#line 240 "add_mode.m"
        MR_Word hlds__make_hlds__add_mode__V_55_55;
#line 240 "add_mode.m"
        MR_Word hlds__make_hlds__add_mode__V_56_56;
#line 240 "add_mode.m"
        MR_Word hlds__make_hlds__add_mode__V_61_61;
#line 240 "add_mode.m"
        MR_Word hlds__make_hlds__add_mode__V_62_62;
#line 240 "add_mode.m"
        MR_Word hlds__make_hlds__add_mode__V_66_66;
#line 240 "add_mode.m"
        MR_Box hlds__make_hlds__add_mode__conv1_Kinds_38;

#line 240 "add_mode.m"
        {
#line 240 "add_mode.m"
          hlds__make_hlds__add_mode__conv1_Kinds_38 = parse_tree__error_util__choose_number_3_f_0(hlds__make_hlds__add_mode__TypeCtorInfo_51_71, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, hlds__make_hlds__add_mode__V_18_18, ((MR_Box) ((MR_String) "mode")), ((MR_Box) ((MR_String) "modes")));
        }
#line 240 "add_mode.m"
        hlds__make_hlds__add_mode__Kinds_38 = ((MR_String) hlds__make_hlds__add_mode__conv1_Kinds_38);
#line 996 "hlds.make_hlds.add_mode.c"
        hlds__make_hlds__add_mode__TypeCtorInfo_53_73 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 241 "add_mode.m"
        {
#line 241 "add_mode.m"
          hlds__make_hlds__add_mode__ExpansionPieces_39 = mercury__list__map_2_f_0(hlds__make_hlds__add_mode__TypeCtorInfo_51_71, hlds__make_hlds__add_mode__TypeCtorInfo_53_73, (MR_Word) &hlds__make_hlds__add_mode_scalar_common_3[3], hlds__make_hlds__add_mode__V_18_18);
        }
#line 245 "add_mode.m"
        {
#line 245 "add_mode.m"
          hlds__make_hlds__add_mode__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 245 "add_mode.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__V_53_53, 0) = ((MR_Box) (hlds__make_hlds__add_mode__Kinds_38));
#line 245 "add_mode.m"
        }
#line 245 "add_mode.m"
        {
#line 245 "add_mode.m"
          hlds__make_hlds__add_mode__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 245 "add_mode.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__V_52_52, 0) = ((MR_Box) (hlds__make_hlds__add_mode__V_53_53));
#line 245 "add_mode.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__V_52_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 245 "add_mode.m"
        }
#line 245 "add_mode.m"
        {
#line 245 "add_mode.m"
          hlds__make_hlds__add_mode__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 245 "add_mode.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__V_49_49, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mode_scalar_common_1[1])));
#line 245 "add_mode.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__V_49_49, 1) = ((MR_Box) (hlds__make_hlds__add_mode__V_52_52));
#line 245 "add_mode.m"
        }
#line 246 "add_mode.m"
        {
#line 246 "add_mode.m"
          hlds__make_hlds__add_mode__V_56_56 = parse_tree__error_util__component_list_to_pieces_1_f_0(hlds__make_hlds__add_mode__ExpansionPieces_39);
        }
#line 246 "add_mode.m"
        {
#line 246 "add_mode.m"
          hlds__make_hlds__add_mode__V_55_55 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__add_mode__TypeCtorInfo_53_73, hlds__make_hlds__add_mode__V_56_56, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mode_scalar_common_1[3]));
        }
#line 246 "add_mode.m"
        {
#line 246 "add_mode.m"
          hlds__make_hlds__add_mode__Pieces_42 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__add_mode__TypeCtorInfo_53_73, hlds__make_hlds__add_mode__V_49_49, hlds__make_hlds__add_mode__V_55_55);
        }
#line 247 "add_mode.m"
        {
#line 247 "add_mode.m"
          hlds__make_hlds__add_mode__V_62_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 247 "add_mode.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__V_62_62, 0) = ((MR_Box) (hlds__make_hlds__add_mode__Pieces_42));
#line 247 "add_mode.m"
        }
#line 247 "add_mode.m"
        {
#line 247 "add_mode.m"
          hlds__make_hlds__add_mode__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 247 "add_mode.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__V_61_61, 0) = ((MR_Box) (hlds__make_hlds__add_mode__V_62_62));
#line 247 "add_mode.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__V_61_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 247 "add_mode.m"
        }
#line 247 "add_mode.m"
        {
#line 247 "add_mode.m"
          hlds__make_hlds__add_mode__Msg_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 247 "add_mode.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__Msg_43, 0) = ((MR_Box) (hlds__make_hlds__add_mode__Context_10));
#line 247 "add_mode.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__Msg_43, 1) = ((MR_Box) (hlds__make_hlds__add_mode__V_61_61));
#line 247 "add_mode.m"
        }
#line 248 "add_mode.m"
        {
#line 248 "add_mode.m"
          hlds__make_hlds__add_mode__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 248 "add_mode.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__V_66_66, 0) = ((MR_Box) (hlds__make_hlds__add_mode__Msg_43));
#line 248 "add_mode.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__V_66_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 248 "add_mode.m"
        }
#line 248 "add_mode.m"
        {
#line 248 "add_mode.m"
          hlds__make_hlds__add_mode__Spec_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 248 "add_mode.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__Spec_44, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 248 "add_mode.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__Spec_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 248 "add_mode.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__Spec_44, 2) = ((MR_Box) (hlds__make_hlds__add_mode__V_66_66));
#line 248 "add_mode.m"
        }
#line 249 "add_mode.m"
        {
#line 249 "add_mode.m"
          MR_Word base;
#line 249 "add_mode.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 249 "add_mode.m"
          *hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_13 = base;
#line 249 "add_mode.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_mode__Spec_44));
#line 249 "add_mode.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_0_12));
#line 249 "add_mode.m"
        }
#line 240 "add_mode.m"
      }
#line 250 "add_mode.m"
    else
#line 249 "add_mode.m"
      *hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_13 = hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_0_12;
#line 209 "add_mode.m"
  }
#line 204 "add_mode.m"
}

#line 241 "add_mode.m"
static MR_Box MR_CALL 
hlds__make_hlds__add_mode__report_circular_inst_equiv_error_6_p_0_2(
#line 241 "add_mode.m"
  MR_Box hlds__make_hlds__add_mode__closure_arg,
#line 241 "add_mode.m"
  MR_Box hlds__make_hlds__add_mode__wrapper_arg_1)
#line 241 "add_mode.m"
{
#line 241 "add_mode.m"
  {
#line 241 "add_mode.m"
    MR_Box hlds__make_hlds__add_mode__wrapper_arg_2;
#line 241 "add_mode.m"
    MR_Box hlds__make_hlds__add_mode__closure = hlds__make_hlds__add_mode__closure_arg;
#line 241 "add_mode.m"
    MR_Word hlds__make_hlds__add_mode__conv2_HeadVar__2_27;

#line 241 "add_mode.m"
    {
#line 241 "add_mode.m"
      hlds__make_hlds__add_mode__conv2_HeadVar__2_27 = hlds__make_hlds__add_mode__IntroducedFrom__func__report_circular_equiv_error__241__1_1_f_0(((MR_Word) hlds__make_hlds__add_mode__wrapper_arg_1));
    }
#line 241 "add_mode.m"
    hlds__make_hlds__add_mode__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__add_mode__conv2_HeadVar__2_27));
#line 241 "add_mode.m"
    return hlds__make_hlds__add_mode__wrapper_arg_2;
#line 241 "add_mode.m"
  }
#line 241 "add_mode.m"
}

#line 201 "add_mode.m"
static MR_Box MR_CALL 
hlds__make_hlds__add_mode__report_circular_inst_equiv_error_6_p_0_1(
#line 201 "add_mode.m"
  MR_Box hlds__make_hlds__add_mode__closure_arg,
#line 201 "add_mode.m"
  MR_Box hlds__make_hlds__add_mode__wrapper_arg_1)
#line 201 "add_mode.m"
{
#line 201 "add_mode.m"
  {
#line 201 "add_mode.m"
    MR_Box hlds__make_hlds__add_mode__wrapper_arg_2;
#line 201 "add_mode.m"
    MR_Box hlds__make_hlds__add_mode__closure = hlds__make_hlds__add_mode__closure_arg;
#line 201 "add_mode.m"
    MR_Word hlds__make_hlds__add_mode__conv0_HeadVar__2_2;

#line 201 "add_mode.m"
    {
#line 201 "add_mode.m"
      hlds__make_hlds__add_mode__conv0_HeadVar__2_2 = hlds__make_hlds__add_mode__inst_id_to_circ_id_1_f_0(((MR_Word) hlds__make_hlds__add_mode__wrapper_arg_1));
    }
#line 201 "add_mode.m"
    hlds__make_hlds__add_mode__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__add_mode__conv0_HeadVar__2_2));
#line 201 "add_mode.m"
    return hlds__make_hlds__add_mode__wrapper_arg_2;
#line 201 "add_mode.m"
  }
#line 201 "add_mode.m"
}

#line 193 "add_mode.m"
static void MR_CALL 
hlds__make_hlds__add_mode__report_circular_inst_equiv_error_6_p_0(
#line 193 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__OrigInstId_7,
#line 193 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__InstId_8,
#line 193 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__Expansions_9,
#line 193 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__Context_10,
#line 193 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_0_12,
#line 193 "add_mode.m"
  MR_Word * hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_13)
#line 193 "add_mode.m"
{
#line 198 "add_mode.m"
  {
#line 198 "add_mode.m"
    MR_bool hlds__make_hlds__add_mode__succeeded;
#line 198 "add_mode.m"
    MR_Word hlds__make_hlds__add_mode__V_16_16;
#line 198 "add_mode.m"
    MR_Word hlds__make_hlds__add_mode__V_17_17;
#line 198 "add_mode.m"
    MR_Word hlds__make_hlds__add_mode__V_18_18;
#line 198 "add_mode.m"
    MR_Word hlds__make_hlds__add_mode__SymName_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__OrigInstId_7, (MR_Integer) 0)));
#line 198 "add_mode.m"
    MR_Integer hlds__make_hlds__add_mode__Arity_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__OrigInstId_7, (MR_Integer) 1)));
#line 198 "add_mode.m"
    MR_Word hlds__make_hlds__add_mode__SymName_27;
#line 198 "add_mode.m"
    MR_Integer hlds__make_hlds__add_mode__Arity_28;
#line 215 "add_mode.m"
    MR_Integer hlds__make_hlds__add_mode__CastX_78;
#line 215 "add_mode.m"
    MR_Integer hlds__make_hlds__add_mode__CastY_79;

#line 221 "add_mode.m"
    {
#line 221 "add_mode.m"
      hlds__make_hlds__add_mode__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 221 "add_mode.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__V_16_16, 0) = ((MR_Box) (hlds__make_hlds__add_mode__SymName_25));
#line 221 "add_mode.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__V_16_16, 1) = ((MR_Box) (hlds__make_hlds__add_mode__Arity_26));
#line 221 "add_mode.m"
    }
#line 221 "add_mode.m"
    hlds__make_hlds__add_mode__SymName_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__InstId_8, (MR_Integer) 0)));
#line 221 "add_mode.m"
    hlds__make_hlds__add_mode__Arity_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__InstId_8, (MR_Integer) 1)));
#line 221 "add_mode.m"
    {
#line 221 "add_mode.m"
      hlds__make_hlds__add_mode__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 221 "add_mode.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__V_17_17, 0) = ((MR_Box) (hlds__make_hlds__add_mode__SymName_27));
#line 221 "add_mode.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__V_17_17, 1) = ((MR_Box) (hlds__make_hlds__add_mode__Arity_28));
#line 221 "add_mode.m"
    }
#line 201 "add_mode.m"
    {
#line 201 "add_mode.m"
      hlds__make_hlds__add_mode__V_18_18 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0, (MR_Word) &hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__type_ctor_info_circ_id_0, (MR_Word) &hlds__make_hlds__add_mode_scalar_common_3[0], hlds__make_hlds__add_mode__Expansions_9);
    }
#line 215 "add_mode.m"
    hlds__make_hlds__add_mode__CastX_78 = (MR_Integer) hlds__make_hlds__add_mode__V_17_17;
#line 215 "add_mode.m"
    hlds__make_hlds__add_mode__CastY_79 = (MR_Integer) hlds__make_hlds__add_mode__V_16_16;
#line 215 "add_mode.m"
    hlds__make_hlds__add_mode__succeeded = (hlds__make_hlds__add_mode__CastX_78 == hlds__make_hlds__add_mode__CastY_79);
#line 215 "add_mode.m"
    if (hlds__make_hlds__add_mode__succeeded)
#line 215 "add_mode.m"
      hlds__make_hlds__add_mode__succeeded = MR_TRUE;
#line 215 "add_mode.m"
    else
#line 215 "add_mode.m"
      {
#line 215 "add_mode.m"
        MR_Word hlds__make_hlds__add_mode__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__V_17_17, (MR_Integer) 0)));
#line 215 "add_mode.m"
        MR_Integer hlds__make_hlds__add_mode__V_75_75 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__V_17_17, (MR_Integer) 1)));
#line 215 "add_mode.m"
        MR_Word hlds__make_hlds__add_mode__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__V_16_16, (MR_Integer) 0)));
#line 215 "add_mode.m"
        MR_Integer hlds__make_hlds__add_mode__V_77_77 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__V_16_16, (MR_Integer) 1)));

#line 1277 "hlds.make_hlds.add_mode.c"
        {
#line 1279 "hlds.make_hlds.add_mode.c"
          hlds__make_hlds__add_mode__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(hlds__make_hlds__add_mode__V_74_74, hlds__make_hlds__add_mode__V_76_76);
        }
#line 215 "add_mode.m"
        if (hlds__make_hlds__add_mode__succeeded)
#line 1284 "hlds.make_hlds.add_mode.c"
          hlds__make_hlds__add_mode__succeeded = (hlds__make_hlds__add_mode__V_75_75 == hlds__make_hlds__add_mode__V_77_77);
#line 215 "add_mode.m"
      }
#line 250 "add_mode.m"
    if (hlds__make_hlds__add_mode__succeeded)
#line 240 "add_mode.m"
      {
#line 240 "add_mode.m"
        MR_Word hlds__make_hlds__add_mode__TypeCtorInfo_51_71 = (MR_Word) &hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__type_ctor_info_circ_id_0;
#line 240 "add_mode.m"
        MR_Word hlds__make_hlds__add_mode__TypeCtorInfo_53_73;
#line 240 "add_mode.m"
        MR_String hlds__make_hlds__add_mode__Kinds_38;
#line 240 "add_mode.m"
        MR_Word hlds__make_hlds__add_mode__ExpansionPieces_39;
#line 240 "add_mode.m"
        MR_Word hlds__make_hlds__add_mode__Pieces_42;
#line 240 "add_mode.m"
        MR_Word hlds__make_hlds__add_mode__Msg_43;
#line 240 "add_mode.m"
        MR_Word hlds__make_hlds__add_mode__Spec_44;
#line 240 "add_mode.m"
        MR_Word hlds__make_hlds__add_mode__V_49_49;
#line 240 "add_mode.m"
        MR_Word hlds__make_hlds__add_mode__V_52_52;
#line 240 "add_mode.m"
        MR_Word hlds__make_hlds__add_mode__V_53_53;
#line 240 "add_mode.m"
        MR_Word hlds__make_hlds__add_mode__V_55_55;
#line 240 "add_mode.m"
        MR_Word hlds__make_hlds__add_mode__V_56_56;
#line 240 "add_mode.m"
        MR_Word hlds__make_hlds__add_mode__V_61_61;
#line 240 "add_mode.m"
        MR_Word hlds__make_hlds__add_mode__V_62_62;
#line 240 "add_mode.m"
        MR_Word hlds__make_hlds__add_mode__V_66_66;
#line 240 "add_mode.m"
        MR_Box hlds__make_hlds__add_mode__conv1_Kinds_38;

#line 240 "add_mode.m"
        {
#line 240 "add_mode.m"
          hlds__make_hlds__add_mode__conv1_Kinds_38 = parse_tree__error_util__choose_number_3_f_0(hlds__make_hlds__add_mode__TypeCtorInfo_51_71, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, hlds__make_hlds__add_mode__V_18_18, ((MR_Box) ((MR_String) "inst")), ((MR_Box) ((MR_String) "insts")));
        }
#line 240 "add_mode.m"
        hlds__make_hlds__add_mode__Kinds_38 = ((MR_String) hlds__make_hlds__add_mode__conv1_Kinds_38);
#line 1332 "hlds.make_hlds.add_mode.c"
        hlds__make_hlds__add_mode__TypeCtorInfo_53_73 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 241 "add_mode.m"
        {
#line 241 "add_mode.m"
          hlds__make_hlds__add_mode__ExpansionPieces_39 = mercury__list__map_2_f_0(hlds__make_hlds__add_mode__TypeCtorInfo_51_71, hlds__make_hlds__add_mode__TypeCtorInfo_53_73, (MR_Word) &hlds__make_hlds__add_mode_scalar_common_3[1], hlds__make_hlds__add_mode__V_18_18);
        }
#line 245 "add_mode.m"
        {
#line 245 "add_mode.m"
          hlds__make_hlds__add_mode__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 245 "add_mode.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__V_53_53, 0) = ((MR_Box) (hlds__make_hlds__add_mode__Kinds_38));
#line 245 "add_mode.m"
        }
#line 245 "add_mode.m"
        {
#line 245 "add_mode.m"
          hlds__make_hlds__add_mode__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 245 "add_mode.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__V_52_52, 0) = ((MR_Box) (hlds__make_hlds__add_mode__V_53_53));
#line 245 "add_mode.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__V_52_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 245 "add_mode.m"
        }
#line 245 "add_mode.m"
        {
#line 245 "add_mode.m"
          hlds__make_hlds__add_mode__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 245 "add_mode.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__V_49_49, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mode_scalar_common_1[1])));
#line 245 "add_mode.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__V_49_49, 1) = ((MR_Box) (hlds__make_hlds__add_mode__V_52_52));
#line 245 "add_mode.m"
        }
#line 246 "add_mode.m"
        {
#line 246 "add_mode.m"
          hlds__make_hlds__add_mode__V_56_56 = parse_tree__error_util__component_list_to_pieces_1_f_0(hlds__make_hlds__add_mode__ExpansionPieces_39);
        }
#line 246 "add_mode.m"
        {
#line 246 "add_mode.m"
          hlds__make_hlds__add_mode__V_55_55 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__add_mode__TypeCtorInfo_53_73, hlds__make_hlds__add_mode__V_56_56, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mode_scalar_common_1[3]));
        }
#line 246 "add_mode.m"
        {
#line 246 "add_mode.m"
          hlds__make_hlds__add_mode__Pieces_42 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__add_mode__TypeCtorInfo_53_73, hlds__make_hlds__add_mode__V_49_49, hlds__make_hlds__add_mode__V_55_55);
        }
#line 247 "add_mode.m"
        {
#line 247 "add_mode.m"
          hlds__make_hlds__add_mode__V_62_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 247 "add_mode.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__V_62_62, 0) = ((MR_Box) (hlds__make_hlds__add_mode__Pieces_42));
#line 247 "add_mode.m"
        }
#line 247 "add_mode.m"
        {
#line 247 "add_mode.m"
          hlds__make_hlds__add_mode__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 247 "add_mode.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__V_61_61, 0) = ((MR_Box) (hlds__make_hlds__add_mode__V_62_62));
#line 247 "add_mode.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__V_61_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 247 "add_mode.m"
        }
#line 247 "add_mode.m"
        {
#line 247 "add_mode.m"
          hlds__make_hlds__add_mode__Msg_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 247 "add_mode.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__Msg_43, 0) = ((MR_Box) (hlds__make_hlds__add_mode__Context_10));
#line 247 "add_mode.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__Msg_43, 1) = ((MR_Box) (hlds__make_hlds__add_mode__V_61_61));
#line 247 "add_mode.m"
        }
#line 248 "add_mode.m"
        {
#line 248 "add_mode.m"
          hlds__make_hlds__add_mode__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 248 "add_mode.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__V_66_66, 0) = ((MR_Box) (hlds__make_hlds__add_mode__Msg_43));
#line 248 "add_mode.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__V_66_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 248 "add_mode.m"
        }
#line 248 "add_mode.m"
        {
#line 248 "add_mode.m"
          hlds__make_hlds__add_mode__Spec_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 248 "add_mode.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__Spec_44, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 248 "add_mode.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__Spec_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 248 "add_mode.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__Spec_44, 2) = ((MR_Box) (hlds__make_hlds__add_mode__V_66_66));
#line 248 "add_mode.m"
        }
#line 249 "add_mode.m"
        {
#line 249 "add_mode.m"
          MR_Word base;
#line 249 "add_mode.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 249 "add_mode.m"
          *hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_13 = base;
#line 249 "add_mode.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_mode__Spec_44));
#line 249 "add_mode.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_0_12));
#line 249 "add_mode.m"
        }
#line 240 "add_mode.m"
      }
#line 250 "add_mode.m"
    else
#line 249 "add_mode.m"
      *hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_13 = hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_0_12;
#line 198 "add_mode.m"
  }
#line 193 "add_mode.m"
}

#line 165 "add_mode.m"
static void MR_CALL 
hlds__make_hlds__add_mode__check_for_cyclic_mode_8_p_0(
#line 165 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__ModeTable_9,
#line 165 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__OrigModeId_10,
#line 165 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__ModeId0_11,
#line 165 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__Expansions0_12,
#line 165 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__Context_13,
#line 165 "add_mode.m"
  MR_Word * hlds__make_hlds__add_mode__InvalidMode_14,
#line 165 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_0_29,
#line 165 "add_mode.m"
  MR_Word * hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_30)
#line 165 "add_mode.m"
{
#line 175 "add_mode.m"
  while (MR_TRUE)
#line 175 "add_mode.m"
    {
#line 175 "add_mode.m"
      /* tailcall optimized into a loop */
#line 175 "add_mode.m"
      {
#line 175 "add_mode.m"
        MR_bool hlds__make_hlds__add_mode__succeeded;

#line 171 "add_mode.m"
        {
#line 171 "add_mode.m"
          hlds__make_hlds__add_mode__succeeded = mercury__list__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_id_0, ((MR_Box) (hlds__make_hlds__add_mode__ModeId0_11)), hlds__make_hlds__add_mode__Expansions0_12);
        }
#line 175 "add_mode.m"
        if (hlds__make_hlds__add_mode__succeeded)
#line 173 "add_mode.m"
          {
#line 172 "add_mode.m"
            {
#line 172 "add_mode.m"
              hlds__make_hlds__add_mode__report_circular_mode_equiv_error_6_p_0(hlds__make_hlds__add_mode__OrigModeId_10, hlds__make_hlds__add_mode__ModeId0_11, hlds__make_hlds__add_mode__Expansions0_12, hlds__make_hlds__add_mode__Context_13, hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_0_29, hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_30);
            }
#line 174 "add_mode.m"
            *hlds__make_hlds__add_mode__InvalidMode_14 = (MR_Integer) 1;
#line 173 "add_mode.m"
          }
#line 175 "add_mode.m"
        else
#line 176 "add_mode.m"
          {
#line 176 "add_mode.m"
            MR_Word hlds__make_hlds__add_mode__ModeDefns_16;
#line 188 "add_mode.m"
            MR_Word hlds__make_hlds__add_mode__Name_24;
#line 188 "add_mode.m"
            MR_Word hlds__make_hlds__add_mode__Args_25;
#line 178 "add_mode.m"
            MR_Word hlds__make_hlds__add_mode__ModeDefn_17;
#line 178 "add_mode.m"
            MR_Word hlds__make_hlds__add_mode__Body_20;
#line 178 "add_mode.m"
            MR_Word hlds__make_hlds__add_mode__EqvMode_23;
#line 178 "add_mode.m"
            MR_Box hlds__make_hlds__add_mode__conv0_ModeDefn_17;
#line 179 "add_mode.m"
            MR_Word hlds__make_hlds__add_mode__V_18_18;
#line 179 "add_mode.m"
            MR_Word hlds__make_hlds__add_mode__V_19_19;
#line 179 "add_mode.m"
            MR_Word hlds__make_hlds__add_mode__V_21_21;
#line 179 "add_mode.m"
            MR_Word hlds__make_hlds__add_mode__V_22_22;

#line 176 "add_mode.m"
            {
#line 176 "add_mode.m"
              hlds__hlds_data__mode_table_get_mode_defns_2_p_0(hlds__make_hlds__add_mode__ModeTable_9, &hlds__make_hlds__add_mode__ModeDefns_16);
            }
#line 178 "add_mode.m"
            {
#line 178 "add_mode.m"
              hlds__make_hlds__add_mode__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_mode_defn_0, hlds__make_hlds__add_mode__ModeDefns_16, ((MR_Box) (hlds__make_hlds__add_mode__ModeId0_11)), &hlds__make_hlds__add_mode__conv0_ModeDefn_17);
            }
#line 178 "add_mode.m"
            if (hlds__make_hlds__add_mode__succeeded)
#line 178 "add_mode.m"
              {
#line 178 "add_mode.m"
                hlds__make_hlds__add_mode__ModeDefn_17 = ((MR_Word) hlds__make_hlds__add_mode__conv0_ModeDefn_17);
#line 178 "add_mode.m"
                hlds__make_hlds__add_mode__succeeded = MR_TRUE;
#line 178 "add_mode.m"
              }
#line 178 "add_mode.m"
            if (hlds__make_hlds__add_mode__succeeded)
#line 178 "add_mode.m"
              {
#line 179 "add_mode.m"
                hlds__make_hlds__add_mode__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__ModeDefn_17, (MR_Integer) 0)));
#line 179 "add_mode.m"
                hlds__make_hlds__add_mode__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__ModeDefn_17, (MR_Integer) 1)));
#line 179 "add_mode.m"
                hlds__make_hlds__add_mode__Body_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__ModeDefn_17, (MR_Integer) 2)));
#line 179 "add_mode.m"
                hlds__make_hlds__add_mode__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__ModeDefn_17, (MR_Integer) 3)));
#line 179 "add_mode.m"
                hlds__make_hlds__add_mode__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__ModeDefn_17, (MR_Integer) 4)));
#line 180 "add_mode.m"
                hlds__make_hlds__add_mode__EqvMode_23 = (MR_Word) hlds__make_hlds__add_mode__Body_20;
#line 181 "add_mode.m"
                hlds__make_hlds__add_mode__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_mode__EqvMode_23)) == (MR_mktag((MR_Integer) 1)));
#line 181 "add_mode.m"
                if (hlds__make_hlds__add_mode__succeeded)
#line 181 "add_mode.m"
                  {
#line 181 "add_mode.m"
                    hlds__make_hlds__add_mode__Name_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__EqvMode_23, (MR_Integer) 0)));
#line 181 "add_mode.m"
                    hlds__make_hlds__add_mode__Args_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__EqvMode_23, (MR_Integer) 1)));
#line 181 "add_mode.m"
                  }
#line 178 "add_mode.m"
              }
#line 188 "add_mode.m"
            if (hlds__make_hlds__add_mode__succeeded)
#line 183 "add_mode.m"
              {
#line 183 "add_mode.m"
                MR_Integer hlds__make_hlds__add_mode__Arity_26;
#line 183 "add_mode.m"
                MR_Word hlds__make_hlds__add_mode__ModeId_27;
#line 183 "add_mode.m"
                MR_Word hlds__make_hlds__add_mode__Expansions_28;

#line 183 "add_mode.m"
                {
#line 183 "add_mode.m"
                  hlds__make_hlds__add_mode__Arity_26 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__make_hlds__add_mode__Args_25);
                }
#line 184 "add_mode.m"
                {
#line 184 "add_mode.m"
                  hlds__make_hlds__add_mode__ModeId_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 184 "add_mode.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__ModeId_27, 0) = ((MR_Box) (hlds__make_hlds__add_mode__Name_24));
#line 184 "add_mode.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__ModeId_27, 1) = ((MR_Box) (hlds__make_hlds__add_mode__Arity_26));
#line 184 "add_mode.m"
                }
#line 185 "add_mode.m"
                {
#line 185 "add_mode.m"
                  hlds__make_hlds__add_mode__Expansions_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 185 "add_mode.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__Expansions_28, 0) = ((MR_Box) (hlds__make_hlds__add_mode__ModeId0_11));
#line 185 "add_mode.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__Expansions_28, 1) = ((MR_Box) (hlds__make_hlds__add_mode__Expansions0_12));
#line 185 "add_mode.m"
                }
#line 186 "add_mode.m"
                /* direct tailcall eliminated */
#line 186 "add_mode.m"
                {
#line 186 "add_mode.m"
                  MR_Word hlds__make_hlds__add_mode__ModeId0__tmp_copy_11 = hlds__make_hlds__add_mode__ModeId_27;
#line 186 "add_mode.m"
                  MR_Word hlds__make_hlds__add_mode__Expansions0__tmp_copy_12 = hlds__make_hlds__add_mode__Expansions_28;

#line 186 "add_mode.m"
                  hlds__make_hlds__add_mode__Expansions0_12 = hlds__make_hlds__add_mode__Expansions0__tmp_copy_12;
#line 186 "add_mode.m"
                  hlds__make_hlds__add_mode__ModeId0_11 = hlds__make_hlds__add_mode__ModeId0__tmp_copy_11;
#line 186 "add_mode.m"
                }
#line 186 "add_mode.m"
                continue;
#line 183 "add_mode.m"
              }
#line 188 "add_mode.m"
            else
#line 189 "add_mode.m"
              {
#line 189 "add_mode.m"
                *hlds__make_hlds__add_mode__InvalidMode_14 = (MR_Integer) 0;
#line 189 "add_mode.m"
                *hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_30 = hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_0_29;
#line 189 "add_mode.m"
              }
#line 176 "add_mode.m"
          }
#line 175 "add_mode.m"
      }
#line 175 "add_mode.m"
      break;
#line 175 "add_mode.m"
    }
#line 165 "add_mode.m"
}

#line 99 "add_mode.m"
static void MR_CALL 
hlds__make_hlds__add_mode__check_for_cyclic_inst_9_p_0(
#line 99 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__UserInstTable_10,
#line 99 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__OrigInstId_11,
#line 99 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__InstId0_12,
#line 99 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__Args0_13,
#line 99 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__Expansions0_14,
#line 99 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__Context_15,
#line 99 "add_mode.m"
  MR_Word * hlds__make_hlds__add_mode__InvalidMode_16,
#line 99 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_0_32,
#line 99 "add_mode.m"
  MR_Word * hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_33)
#line 99 "add_mode.m"
{
#line 109 "add_mode.m"
  while (MR_TRUE)
#line 109 "add_mode.m"
    {
#line 109 "add_mode.m"
      /* tailcall optimized into a loop */
#line 109 "add_mode.m"
      {
#line 109 "add_mode.m"
        MR_bool hlds__make_hlds__add_mode__succeeded;

#line 105 "add_mode.m"
        {
#line 105 "add_mode.m"
          hlds__make_hlds__add_mode__succeeded = mercury__list__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0, ((MR_Box) (hlds__make_hlds__add_mode__InstId0_12)), hlds__make_hlds__add_mode__Expansions0_14);
        }
#line 109 "add_mode.m"
        if (hlds__make_hlds__add_mode__succeeded)
#line 107 "add_mode.m"
          {
#line 106 "add_mode.m"
            {
#line 106 "add_mode.m"
              hlds__make_hlds__add_mode__report_circular_inst_equiv_error_6_p_0(hlds__make_hlds__add_mode__OrigInstId_11, hlds__make_hlds__add_mode__InstId0_12, hlds__make_hlds__add_mode__Expansions0_14, hlds__make_hlds__add_mode__Context_15, hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_0_32, hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_33);
            }
#line 108 "add_mode.m"
            *hlds__make_hlds__add_mode__InvalidMode_16 = (MR_Integer) 1;
#line 107 "add_mode.m"
          }
#line 109 "add_mode.m"
        else
#line 110 "add_mode.m"
          {
#line 110 "add_mode.m"
            MR_Word hlds__make_hlds__add_mode__InstDefns_18;
#line 123 "add_mode.m"
            MR_Word hlds__make_hlds__add_mode__Name_27;
#line 123 "add_mode.m"
            MR_Word hlds__make_hlds__add_mode__Args_28;
#line 112 "add_mode.m"
            MR_Word hlds__make_hlds__add_mode__InstDefn_19;
#line 112 "add_mode.m"
            MR_Word hlds__make_hlds__add_mode__Params_21;
#line 112 "add_mode.m"
            MR_Word hlds__make_hlds__add_mode__Body_22;
#line 112 "add_mode.m"
            MR_Word hlds__make_hlds__add_mode__EqvInst0_25;
#line 112 "add_mode.m"
            MR_Word hlds__make_hlds__add_mode__EqvInst_26;
#line 112 "add_mode.m"
            MR_Word hlds__make_hlds__add_mode__V_35_35;
#line 112 "add_mode.m"
            MR_Box hlds__make_hlds__add_mode__conv0_InstDefn_19;
#line 113 "add_mode.m"
            MR_Word hlds__make_hlds__add_mode__V_20_20;
#line 113 "add_mode.m"
            MR_Word hlds__make_hlds__add_mode__V_23_23;
#line 113 "add_mode.m"
            MR_Word hlds__make_hlds__add_mode__V_24_24;

#line 110 "add_mode.m"
            {
#line 110 "add_mode.m"
              hlds__hlds_data__user_inst_table_get_inst_defns_2_p_0(hlds__make_hlds__add_mode__UserInstTable_10, &hlds__make_hlds__add_mode__InstDefns_18);
            }
#line 112 "add_mode.m"
            {
#line 112 "add_mode.m"
              hlds__make_hlds__add_mode__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_inst_defn_0, hlds__make_hlds__add_mode__InstDefns_18, ((MR_Box) (hlds__make_hlds__add_mode__InstId0_12)), &hlds__make_hlds__add_mode__conv0_InstDefn_19);
            }
#line 112 "add_mode.m"
            if (hlds__make_hlds__add_mode__succeeded)
#line 112 "add_mode.m"
              {
#line 112 "add_mode.m"
                hlds__make_hlds__add_mode__InstDefn_19 = ((MR_Word) hlds__make_hlds__add_mode__conv0_InstDefn_19);
#line 112 "add_mode.m"
                hlds__make_hlds__add_mode__succeeded = MR_TRUE;
#line 112 "add_mode.m"
              }
#line 112 "add_mode.m"
            if (hlds__make_hlds__add_mode__succeeded)
#line 112 "add_mode.m"
              {
#line 113 "add_mode.m"
                hlds__make_hlds__add_mode__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__InstDefn_19, (MR_Integer) 0)));
#line 113 "add_mode.m"
                hlds__make_hlds__add_mode__Params_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__InstDefn_19, (MR_Integer) 1)));
#line 113 "add_mode.m"
                hlds__make_hlds__add_mode__Body_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__InstDefn_19, (MR_Integer) 2)));
#line 113 "add_mode.m"
                hlds__make_hlds__add_mode__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__InstDefn_19, (MR_Integer) 3)));
#line 113 "add_mode.m"
                hlds__make_hlds__add_mode__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__InstDefn_19, (MR_Integer) 4)));
#line 114 "add_mode.m"
                hlds__make_hlds__add_mode__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_mode__Body_22)) == (MR_mktag((MR_Integer) 1)));
#line 114 "add_mode.m"
                if (hlds__make_hlds__add_mode__succeeded)
#line 114 "add_mode.m"
                  {
#line 114 "add_mode.m"
                    hlds__make_hlds__add_mode__EqvInst0_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__Body_22, (MR_Integer) 0)));
#line 115 "add_mode.m"
                    {
#line 115 "add_mode.m"
                      parse_tree__prog_mode__inst_substitute_arg_list_4_p_0(hlds__make_hlds__add_mode__Params_21, hlds__make_hlds__add_mode__Args0_13, hlds__make_hlds__add_mode__EqvInst0_25, &hlds__make_hlds__add_mode__EqvInst_26);
                    }
#line 116 "add_mode.m"
                    hlds__make_hlds__add_mode__succeeded = ((((MR_tag((MR_Word) hlds__make_hlds__add_mode__EqvInst_26)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mode__EqvInst_26, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 116 "add_mode.m"
                    if (hlds__make_hlds__add_mode__succeeded)
#line 116 "add_mode.m"
                      {
#line 116 "add_mode.m"
                        hlds__make_hlds__add_mode__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mode__EqvInst_26, (MR_Integer) 1)));
#line 116 "add_mode.m"
                        hlds__make_hlds__add_mode__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_mode__V_35_35)) == (MR_mktag((MR_Integer) 0)));
#line 116 "add_mode.m"
                        if (hlds__make_hlds__add_mode__succeeded)
#line 116 "add_mode.m"
                          {
#line 116 "add_mode.m"
                            hlds__make_hlds__add_mode__Name_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__V_35_35, (MR_Integer) 0)));
#line 116 "add_mode.m"
                            hlds__make_hlds__add_mode__Args_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__V_35_35, (MR_Integer) 1)));
#line 116 "add_mode.m"
                          }
#line 116 "add_mode.m"
                      }
#line 114 "add_mode.m"
                  }
#line 112 "add_mode.m"
              }
#line 123 "add_mode.m"
            if (hlds__make_hlds__add_mode__succeeded)
#line 118 "add_mode.m"
              {
#line 118 "add_mode.m"
                MR_Integer hlds__make_hlds__add_mode__Arity_29;
#line 118 "add_mode.m"
                MR_Word hlds__make_hlds__add_mode__InstId_30;
#line 118 "add_mode.m"
                MR_Word hlds__make_hlds__add_mode__Expansions_31;

#line 118 "add_mode.m"
                {
#line 118 "add_mode.m"
                  hlds__make_hlds__add_mode__Arity_29 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__make_hlds__add_mode__Args_28);
                }
#line 119 "add_mode.m"
                {
#line 119 "add_mode.m"
                  hlds__make_hlds__add_mode__InstId_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 119 "add_mode.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__InstId_30, 0) = ((MR_Box) (hlds__make_hlds__add_mode__Name_27));
#line 119 "add_mode.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__InstId_30, 1) = ((MR_Box) (hlds__make_hlds__add_mode__Arity_29));
#line 119 "add_mode.m"
                }
#line 120 "add_mode.m"
                {
#line 120 "add_mode.m"
                  hlds__make_hlds__add_mode__Expansions_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 120 "add_mode.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__Expansions_31, 0) = ((MR_Box) (hlds__make_hlds__add_mode__InstId0_12));
#line 120 "add_mode.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__Expansions_31, 1) = ((MR_Box) (hlds__make_hlds__add_mode__Expansions0_14));
#line 120 "add_mode.m"
                }
#line 121 "add_mode.m"
                /* direct tailcall eliminated */
#line 121 "add_mode.m"
                {
#line 121 "add_mode.m"
                  MR_Word hlds__make_hlds__add_mode__InstId0__tmp_copy_12 = hlds__make_hlds__add_mode__InstId_30;
#line 121 "add_mode.m"
                  MR_Word hlds__make_hlds__add_mode__Args0__tmp_copy_13 = hlds__make_hlds__add_mode__Args_28;
#line 121 "add_mode.m"
                  MR_Word hlds__make_hlds__add_mode__Expansions0__tmp_copy_14 = hlds__make_hlds__add_mode__Expansions_31;

#line 121 "add_mode.m"
                  hlds__make_hlds__add_mode__Expansions0_14 = hlds__make_hlds__add_mode__Expansions0__tmp_copy_14;
#line 121 "add_mode.m"
                  hlds__make_hlds__add_mode__Args0_13 = hlds__make_hlds__add_mode__Args0__tmp_copy_13;
#line 121 "add_mode.m"
                  hlds__make_hlds__add_mode__InstId0_12 = hlds__make_hlds__add_mode__InstId0__tmp_copy_12;
#line 121 "add_mode.m"
                }
#line 121 "add_mode.m"
                continue;
#line 118 "add_mode.m"
              }
#line 123 "add_mode.m"
            else
#line 124 "add_mode.m"
              {
#line 124 "add_mode.m"
                *hlds__make_hlds__add_mode__InvalidMode_16 = (MR_Integer) 0;
#line 124 "add_mode.m"
                *hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_33 = hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_0_32;
#line 124 "add_mode.m"
              }
#line 110 "add_mode.m"
          }
#line 109 "add_mode.m"
      }
#line 109 "add_mode.m"
      break;
#line 109 "add_mode.m"
    }
#line 99 "add_mode.m"
}

#line 29 "add_mode.m"
void MR_CALL 
hlds__make_hlds__add_mode__module_add_mode_defn_7_p_0(
#line 29 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__ItemModeDefnInfo_8,
#line 29 "add_mode.m"
  MR_Word * hlds__make_hlds__add_mode__InvalidMode_9,
#line 29 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__ItemStatus_10,
#line 29 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__STATE_VARIABLE_ModuleInfo_0_24,
#line 29 "add_mode.m"
  MR_Word * hlds__make_hlds__add_mode__STATE_VARIABLE_ModuleInfo_25,
#line 29 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_0_26,
#line 29 "add_mode.m"
  MR_Word * hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_27)
#line 29 "add_mode.m"
{
#line 131 "add_mode.m"
  {
#line 131 "add_mode.m"
    MR_bool hlds__make_hlds__add_mode__succeeded;
#line 131 "add_mode.m"
    MR_Word hlds__make_hlds__add_mode__VarSet_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__ItemModeDefnInfo_8, (MR_Integer) 0)));
#line 131 "add_mode.m"
    MR_Word hlds__make_hlds__add_mode__Name_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__ItemModeDefnInfo_8, (MR_Integer) 1)));
#line 131 "add_mode.m"
    MR_Word hlds__make_hlds__add_mode__Params_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__ItemModeDefnInfo_8, (MR_Integer) 2)));
#line 131 "add_mode.m"
    MR_Word hlds__make_hlds__add_mode__ModeDefn_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__ItemModeDefnInfo_8, (MR_Integer) 3)));
#line 131 "add_mode.m"
    MR_Word hlds__make_hlds__add_mode__Context_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__ItemModeDefnInfo_8, (MR_Integer) 5)));
#line 131 "add_mode.m"
    MR_Word hlds__make_hlds__add_mode__Status_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__ItemStatus_10, (MR_Integer) 0)));
#line 131 "add_mode.m"
    MR_Word hlds__make_hlds__add_mode__Modes0_22;
#line 131 "add_mode.m"
    MR_Word hlds__make_hlds__add_mode__Modes_23;
#line 131 "add_mode.m"
    MR_Word hlds__make_hlds__add_mode__Body_41;
#line 131 "add_mode.m"
    MR_Integer hlds__make_hlds__add_mode__Arity_44;
#line 131 "add_mode.m"
    MR_Word hlds__make_hlds__add_mode__ModeId_45;
#line 131 "add_mode.m"
    MR_Word hlds__make_hlds__add_mode__I_46;
#line 131 "add_mode.m"
    MR_Word hlds__make_hlds__add_mode__V_54_54;
#line 131 "add_mode.m"
    MR_Word hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_41_58;
#line 132 "add_mode.m"
    MR_Word hlds__make_hlds__add_mode__Cond_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__ItemModeDefnInfo_8, (MR_Integer) 4)));
#line 132 "add_mode.m"
    MR_Integer hlds__make_hlds__add_mode___SeqNum_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__ItemModeDefnInfo_8, (MR_Integer) 6)));
#line 134 "add_mode.m"
    MR_Word hlds__make_hlds__add_mode___NeedQual_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__ItemStatus_10, (MR_Integer) 1)));
#line 152 "add_mode.m"
    MR_Word hlds__make_hlds__add_mode__STATE_VARIABLE_Modes_38_55;

#line 135 "add_mode.m"
    {
#line 135 "add_mode.m"
      hlds__hlds_module__module_info_get_mode_table_2_p_0(hlds__make_hlds__add_mode__STATE_VARIABLE_ModuleInfo_0_24, &hlds__make_hlds__add_mode__Modes0_22);
    }
#line 145 "add_mode.m"
    hlds__make_hlds__add_mode__Body_41 = (MR_Word) hlds__make_hlds__add_mode__ModeDefn_16;
#line 147 "add_mode.m"
    {
#line 147 "add_mode.m"
      mercury__list__length_2_p_0((MR_Word) &hlds__make_hlds__add_mode_scalar_common_1[0], hlds__make_hlds__add_mode__Params_15, &hlds__make_hlds__add_mode__Arity_44);
    }
#line 148 "add_mode.m"
    {
#line 148 "add_mode.m"
      hlds__make_hlds__add_mode__ModeId_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 148 "add_mode.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__ModeId_45, 0) = ((MR_Box) (hlds__make_hlds__add_mode__Name_14));
#line 148 "add_mode.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__ModeId_45, 1) = ((MR_Box) (hlds__make_hlds__add_mode__Arity_44));
#line 148 "add_mode.m"
    }
#line 149 "add_mode.m"
    hlds__make_hlds__add_mode__V_54_54 = (MR_Word) hlds__make_hlds__add_mode__Body_41;
#line 149 "add_mode.m"
    {
#line 149 "add_mode.m"
      hlds__make_hlds__add_mode__I_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 149 "add_mode.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__I_46, 0) = ((MR_Box) (hlds__make_hlds__add_mode__VarSet_13));
#line 149 "add_mode.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__I_46, 1) = ((MR_Box) (hlds__make_hlds__add_mode__Params_15));
#line 149 "add_mode.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__I_46, 2) = ((MR_Box) (hlds__make_hlds__add_mode__V_54_54));
#line 149 "add_mode.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__I_46, 3) = ((MR_Box) (hlds__make_hlds__add_mode__Context_18));
#line 149 "add_mode.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__I_46, 4) = ((MR_Box) (hlds__make_hlds__add_mode__Status_20));
#line 149 "add_mode.m"
    }
#line 150 "add_mode.m"
    {
#line 150 "add_mode.m"
      hlds__make_hlds__add_mode__succeeded = hlds__hlds_data__mode_table_insert_4_p_0(hlds__make_hlds__add_mode__ModeId_45, hlds__make_hlds__add_mode__I_46, hlds__make_hlds__add_mode__Modes0_22, &hlds__make_hlds__add_mode__STATE_VARIABLE_Modes_38_55);
    }
#line 152 "add_mode.m"
    if (hlds__make_hlds__add_mode__succeeded)
#line 151 "add_mode.m"
      {
#line 151 "add_mode.m"
        hlds__make_hlds__add_mode__Modes_23 = hlds__make_hlds__add_mode__STATE_VARIABLE_Modes_38_55;
#line 151 "add_mode.m"
        hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_41_58 = hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_0_26;
#line 151 "add_mode.m"
      }
#line 152 "add_mode.m"
    else
#line 153 "add_mode.m"
      {
#line 153 "add_mode.m"
        MR_Word hlds__make_hlds__add_mode__ModeDefns_47;
#line 153 "add_mode.m"
        MR_Word hlds__make_hlds__add_mode__OrigI_48;
#line 153 "add_mode.m"
        MR_Word hlds__make_hlds__add_mode__OrigContext_52;
#line 154 "add_mode.m"
        MR_Box hlds__make_hlds__add_mode__conv0_OrigI_48;
#line 155 "add_mode.m"
        MR_Word hlds__make_hlds__add_mode__V_49_49;
#line 155 "add_mode.m"
        MR_Word hlds__make_hlds__add_mode__V_50_50;
#line 155 "add_mode.m"
        MR_Word hlds__make_hlds__add_mode__V_51_51;
#line 155 "add_mode.m"
        MR_Word hlds__make_hlds__add_mode__V_53_53;

#line 153 "add_mode.m"
        {
#line 153 "add_mode.m"
          hlds__hlds_data__mode_table_get_mode_defns_2_p_0(hlds__make_hlds__add_mode__Modes0_22, &hlds__make_hlds__add_mode__ModeDefns_47);
        }
#line 154 "add_mode.m"
        {
#line 154 "add_mode.m"
          mercury__map__lookup_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_mode_defn_0, hlds__make_hlds__add_mode__ModeDefns_47, ((MR_Box) (hlds__make_hlds__add_mode__ModeId_45)), &hlds__make_hlds__add_mode__conv0_OrigI_48);
        }
#line 154 "add_mode.m"
        hlds__make_hlds__add_mode__OrigI_48 = ((MR_Word) hlds__make_hlds__add_mode__conv0_OrigI_48);
#line 155 "add_mode.m"
        hlds__make_hlds__add_mode__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__OrigI_48, (MR_Integer) 0)));
#line 155 "add_mode.m"
        hlds__make_hlds__add_mode__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__OrigI_48, (MR_Integer) 1)));
#line 155 "add_mode.m"
        hlds__make_hlds__add_mode__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__OrigI_48, (MR_Integer) 2)));
#line 155 "add_mode.m"
        hlds__make_hlds__add_mode__OrigContext_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__OrigI_48, (MR_Integer) 3)));
#line 155 "add_mode.m"
        hlds__make_hlds__add_mode__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__OrigI_48, (MR_Integer) 4)));
#line 157 "add_mode.m"
        {
#line 157 "add_mode.m"
          hlds__make_hlds__make_hlds_error__multiple_def_error_9_p_0(hlds__make_hlds__add_mode__Status_20, hlds__make_hlds__add_mode__Name_14, hlds__make_hlds__add_mode__Arity_44, (MR_String) "mode", hlds__make_hlds__add_mode__Context_18, hlds__make_hlds__add_mode__OrigContext_52, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_0_26, &hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_41_58);
        }
#line 157 "add_mode.m"
        hlds__make_hlds__add_mode__Modes_23 = hlds__make_hlds__add_mode__Modes0_22;
#line 153 "add_mode.m"
      }
#line 160 "add_mode.m"
    {
#line 160 "add_mode.m"
      hlds__make_hlds__add_mode__check_for_cyclic_mode_8_p_0(hlds__make_hlds__add_mode__Modes_23, hlds__make_hlds__add_mode__ModeId_45, hlds__make_hlds__add_mode__ModeId_45, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_mode__Context_18, hlds__make_hlds__add_mode__InvalidMode_9, hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_41_58, hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_27);
    }
#line 138 "add_mode.m"
    {
#line 138 "add_mode.m"
      hlds__hlds_module__module_info_set_mode_table_3_p_0(hlds__make_hlds__add_mode__Modes_23, hlds__make_hlds__add_mode__STATE_VARIABLE_ModuleInfo_0_24, hlds__make_hlds__add_mode__STATE_VARIABLE_ModuleInfo_25);
#line 138 "add_mode.m"
      return;
    }
#line 131 "add_mode.m"
  }
#line 29 "add_mode.m"
}

#line 25 "add_mode.m"
void MR_CALL 
hlds__make_hlds__add_mode__module_add_inst_defn_7_p_0(
#line 25 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__ItemInstDefnInfo_8,
#line 25 "add_mode.m"
  MR_Word * hlds__make_hlds__add_mode__InvalidMode_9,
#line 25 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__ItemStatus_10,
#line 25 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__STATE_VARIABLE_ModuleInfo_0_29,
#line 25 "add_mode.m"
  MR_Word * hlds__make_hlds__add_mode__STATE_VARIABLE_ModuleInfo_30,
#line 25 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_0_31,
#line 25 "add_mode.m"
  MR_Word * hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_32)
#line 25 "add_mode.m"
{
#line 50 "add_mode.m"
  {
#line 50 "add_mode.m"
    MR_bool hlds__make_hlds__add_mode__succeeded;
#line 50 "add_mode.m"
    MR_Word hlds__make_hlds__add_mode__Status_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__ItemStatus_10, (MR_Integer) 0)));
#line 50 "add_mode.m"
    MR_Word hlds__make_hlds__add_mode__VarSet_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__ItemInstDefnInfo_8, (MR_Integer) 0)));
#line 50 "add_mode.m"
    MR_Word hlds__make_hlds__add_mode__Name_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__ItemInstDefnInfo_8, (MR_Integer) 1)));
#line 50 "add_mode.m"
    MR_Word hlds__make_hlds__add_mode__Params_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__ItemInstDefnInfo_8, (MR_Integer) 2)));
#line 50 "add_mode.m"
    MR_Word hlds__make_hlds__add_mode__InstDefn_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__ItemInstDefnInfo_8, (MR_Integer) 3)));
#line 50 "add_mode.m"
    MR_Word hlds__make_hlds__add_mode__Context_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__ItemInstDefnInfo_8, (MR_Integer) 5)));
#line 50 "add_mode.m"
    MR_Word hlds__make_hlds__add_mode__InstTable0_22;
#line 50 "add_mode.m"
    MR_Word hlds__make_hlds__add_mode__Insts0_23;
#line 50 "add_mode.m"
    MR_Word hlds__make_hlds__add_mode__Insts_24;
#line 50 "add_mode.m"
    MR_Word hlds__make_hlds__add_mode__InstTable_25;
#line 50 "add_mode.m"
    MR_Integer hlds__make_hlds__add_mode__Arity_26;
#line 50 "add_mode.m"
    MR_Word hlds__make_hlds__add_mode__InstId_27;
#line 50 "add_mode.m"
    MR_Word hlds__make_hlds__add_mode__TestArgs_28;
#line 50 "add_mode.m"
    MR_Word hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_33_33;
#line 51 "add_mode.m"
    MR_Word hlds__make_hlds__add_mode___NeedQual_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__ItemStatus_10, (MR_Integer) 1)));
#line 52 "add_mode.m"
    MR_Word hlds__make_hlds__add_mode__Cond_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__ItemInstDefnInfo_8, (MR_Integer) 4)));
#line 52 "add_mode.m"
    MR_Integer hlds__make_hlds__add_mode___SeqNum_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__ItemInstDefnInfo_8, (MR_Integer) 6)));

#line 55 "add_mode.m"
    {
#line 55 "add_mode.m"
      hlds__hlds_module__module_info_get_inst_table_2_p_0(hlds__make_hlds__add_mode__STATE_VARIABLE_ModuleInfo_0_29, &hlds__make_hlds__add_mode__InstTable0_22);
    }
#line 56 "add_mode.m"
    {
#line 56 "add_mode.m"
      hlds__hlds_data__inst_table_get_user_insts_2_p_0(hlds__make_hlds__add_mode__InstTable0_22, &hlds__make_hlds__add_mode__Insts0_23);
    }
#line 74 "add_mode.m"
    if ((hlds__make_hlds__add_mode__InstDefn_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 74 "add_mode.m"
      {
#line 76 "add_mode.m"
        {
#line 76 "add_mode.m"
          mercury__require__sorry_3_p_0((MR_String) "hlds.make_hlds.add_mode", (MR_String) "predicate \140hlds.make_hlds.add_mode.insts_add\'/11", (MR_String) "abstract insts not implemented");
#line 76 "add_mode.m"
          return;
        }
#line 74 "add_mode.m"
      }
#line 74 "add_mode.m"
    else
#line 78 "add_mode.m"
      {
#line 78 "add_mode.m"
        MR_Word hlds__make_hlds__add_mode__Body_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__InstDefn_18, (MR_Integer) 0)));
#line 78 "add_mode.m"
        MR_Integer hlds__make_hlds__add_mode__Arity_65;
#line 78 "add_mode.m"
        MR_Word hlds__make_hlds__add_mode__InstId_66;
#line 78 "add_mode.m"
        MR_Word hlds__make_hlds__add_mode__I_67;
#line 78 "add_mode.m"
        MR_Word hlds__make_hlds__add_mode__V_79_79;
#line 84 "add_mode.m"
        MR_Word hlds__make_hlds__add_mode__STATE_VARIABLE_Insts_51_80;

#line 79 "add_mode.m"
        {
#line 79 "add_mode.m"
          mercury__list__length_2_p_0((MR_Word) &hlds__make_hlds__add_mode_scalar_common_1[0], hlds__make_hlds__add_mode__Params_17, &hlds__make_hlds__add_mode__Arity_65);
        }
#line 80 "add_mode.m"
        {
#line 80 "add_mode.m"
          hlds__make_hlds__add_mode__InstId_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 80 "add_mode.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__InstId_66, 0) = ((MR_Box) (hlds__make_hlds__add_mode__Name_16));
#line 80 "add_mode.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__InstId_66, 1) = ((MR_Box) (hlds__make_hlds__add_mode__Arity_65));
#line 80 "add_mode.m"
        }
#line 81 "add_mode.m"
        {
#line 81 "add_mode.m"
          hlds__make_hlds__add_mode__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 81 "add_mode.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__V_79_79, 0) = ((MR_Box) (hlds__make_hlds__add_mode__Body_59));
#line 81 "add_mode.m"
        }
#line 81 "add_mode.m"
        {
#line 81 "add_mode.m"
          hlds__make_hlds__add_mode__I_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 81 "add_mode.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__I_67, 0) = ((MR_Box) (hlds__make_hlds__add_mode__VarSet_15));
#line 81 "add_mode.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__I_67, 1) = ((MR_Box) (hlds__make_hlds__add_mode__Params_17));
#line 81 "add_mode.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__I_67, 2) = ((MR_Box) (hlds__make_hlds__add_mode__V_79_79));
#line 81 "add_mode.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__I_67, 3) = ((MR_Box) (hlds__make_hlds__add_mode__Context_20));
#line 81 "add_mode.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__I_67, 4) = ((MR_Box) (hlds__make_hlds__add_mode__Status_13));
#line 81 "add_mode.m"
        }
#line 82 "add_mode.m"
        {
#line 82 "add_mode.m"
          hlds__make_hlds__add_mode__succeeded = hlds__hlds_data__user_inst_table_insert_4_p_0(hlds__make_hlds__add_mode__InstId_66, hlds__make_hlds__add_mode__I_67, hlds__make_hlds__add_mode__Insts0_23, &hlds__make_hlds__add_mode__STATE_VARIABLE_Insts_51_80);
        }
#line 84 "add_mode.m"
        if (hlds__make_hlds__add_mode__succeeded)
#line 83 "add_mode.m"
          {
#line 83 "add_mode.m"
            hlds__make_hlds__add_mode__Insts_24 = hlds__make_hlds__add_mode__STATE_VARIABLE_Insts_51_80;
#line 83 "add_mode.m"
            hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_33_33 = hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_0_31;
#line 83 "add_mode.m"
          }
#line 84 "add_mode.m"
        else
#line 90 "add_mode.m"
          {
#line 90 "add_mode.m"
            MR_Word hlds__make_hlds__add_mode__InstDefns_68;
#line 90 "add_mode.m"
            MR_Word hlds__make_hlds__add_mode__OrigI_69;
#line 90 "add_mode.m"
            MR_Word hlds__make_hlds__add_mode__OrigContext_73;
#line 91 "add_mode.m"
            MR_Box hlds__make_hlds__add_mode__conv0_OrigI_69;
#line 92 "add_mode.m"
            MR_Word hlds__make_hlds__add_mode__V_70_70;
#line 92 "add_mode.m"
            MR_Word hlds__make_hlds__add_mode__V_71_71;
#line 92 "add_mode.m"
            MR_Word hlds__make_hlds__add_mode__V_72_72;
#line 92 "add_mode.m"
            MR_Word hlds__make_hlds__add_mode__V_74_74;

#line 90 "add_mode.m"
            {
#line 90 "add_mode.m"
              hlds__hlds_data__user_inst_table_get_inst_defns_2_p_0(hlds__make_hlds__add_mode__Insts0_23, &hlds__make_hlds__add_mode__InstDefns_68);
            }
#line 91 "add_mode.m"
            {
#line 91 "add_mode.m"
              mercury__map__lookup_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_inst_defn_0, hlds__make_hlds__add_mode__InstDefns_68, ((MR_Box) (hlds__make_hlds__add_mode__InstId_66)), &hlds__make_hlds__add_mode__conv0_OrigI_69);
            }
#line 91 "add_mode.m"
            hlds__make_hlds__add_mode__OrigI_69 = ((MR_Word) hlds__make_hlds__add_mode__conv0_OrigI_69);
#line 92 "add_mode.m"
            hlds__make_hlds__add_mode__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__OrigI_69, (MR_Integer) 0)));
#line 92 "add_mode.m"
            hlds__make_hlds__add_mode__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__OrigI_69, (MR_Integer) 1)));
#line 92 "add_mode.m"
            hlds__make_hlds__add_mode__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__OrigI_69, (MR_Integer) 2)));
#line 92 "add_mode.m"
            hlds__make_hlds__add_mode__OrigContext_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__OrigI_69, (MR_Integer) 3)));
#line 92 "add_mode.m"
            hlds__make_hlds__add_mode__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__OrigI_69, (MR_Integer) 4)));
#line 93 "add_mode.m"
            {
#line 93 "add_mode.m"
              hlds__make_hlds__make_hlds_error__multiple_def_error_9_p_0(hlds__make_hlds__add_mode__Status_13, hlds__make_hlds__add_mode__Name_16, hlds__make_hlds__add_mode__Arity_65, (MR_String) "inst", hlds__make_hlds__add_mode__Context_20, hlds__make_hlds__add_mode__OrigContext_73, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_0_31, &hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_33_33);
            }
#line 93 "add_mode.m"
            hlds__make_hlds__add_mode__Insts_24 = hlds__make_hlds__add_mode__Insts0_23;
#line 90 "add_mode.m"
          }
#line 78 "add_mode.m"
      }
#line 59 "add_mode.m"
    {
#line 59 "add_mode.m"
      hlds__hlds_data__inst_table_set_user_insts_3_p_0(hlds__make_hlds__add_mode__Insts_24, hlds__make_hlds__add_mode__InstTable0_22, &hlds__make_hlds__add_mode__InstTable_25);
    }
#line 60 "add_mode.m"
    {
#line 60 "add_mode.m"
      hlds__hlds_module__module_info_set_inst_table_3_p_0(hlds__make_hlds__add_mode__InstTable_25, hlds__make_hlds__add_mode__STATE_VARIABLE_ModuleInfo_0_29, hlds__make_hlds__add_mode__STATE_VARIABLE_ModuleInfo_30);
    }
#line 63 "add_mode.m"
    {
#line 63 "add_mode.m"
      hlds__make_hlds__add_mode__Arity_26 = mercury__list__length_1_f_0((MR_Word) &hlds__make_hlds__add_mode_scalar_common_1[0], hlds__make_hlds__add_mode__Params_17);
    }
#line 64 "add_mode.m"
    {
#line 64 "add_mode.m"
      hlds__make_hlds__add_mode__InstId_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 64 "add_mode.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__InstId_27, 0) = ((MR_Box) (hlds__make_hlds__add_mode__Name_16));
#line 64 "add_mode.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__InstId_27, 1) = ((MR_Box) (hlds__make_hlds__add_mode__Arity_26));
#line 64 "add_mode.m"
    }
#line 65 "add_mode.m"
    {
#line 65 "add_mode.m"
      hlds__make_hlds__add_mode__TestArgs_28 = mercury__list__duplicate_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__make_hlds__add_mode__Arity_26, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))));
    }
#line 66 "add_mode.m"
    {
#line 66 "add_mode.m"
      hlds__make_hlds__add_mode__check_for_cyclic_inst_9_p_0(hlds__make_hlds__add_mode__Insts_24, hlds__make_hlds__add_mode__InstId_27, hlds__make_hlds__add_mode__InstId_27, hlds__make_hlds__add_mode__TestArgs_28, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_mode__Context_20, hlds__make_hlds__add_mode__InvalidMode_9, hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_33_33, hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_32);
#line 66 "add_mode.m"
      return;
    }
#line 50 "add_mode.m"
  }
#line 25 "add_mode.m"
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module hlds.make_hlds.add_mode. */
