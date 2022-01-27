/*
** Automatically generated from `add_mode.m'
** by the Mercury compiler,
** version rotd-2015-09-18
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
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
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




#line 147 "hlds.make_hlds.add_mode.c"
static const MR_PseudoTypeInfo hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__field_types_circ_id_0_0[2];

#line 150 "hlds.make_hlds.add_mode.c"
static const MR_DuFunctorDesc hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__du_functor_desc_circ_id_0_0;

#line 153 "hlds.make_hlds.add_mode.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__du_stag_ordered_circ_id_0_0[1];

#line 156 "hlds.make_hlds.add_mode.c"
static const MR_DuPtagLayout hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__du_ptag_ordered_circ_id_0[1];

#line 159 "hlds.make_hlds.add_mode.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__du_name_ordered_circ_id_0[1];

#line 162 "hlds.make_hlds.add_mode.c"
static const MR_Integer hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__functor_number_map_circ_id_0[1];

#line 165 "hlds.make_hlds.add_mode.c"
static MR_bool MR_CALL 
hlds__make_hlds__add_mode____Unify____circ_id_0_0_10001(
#line 168 "hlds.make_hlds.add_mode.c"
  MR_Box hlds__make_hlds__add_mode__wrapper_arg_1,
#line 170 "hlds.make_hlds.add_mode.c"
  MR_Box hlds__make_hlds__add_mode__wrapper_arg_2);

#line 173 "hlds.make_hlds.add_mode.c"
static void MR_CALL 
hlds__make_hlds__add_mode____Compare____circ_id_0_0_10001(
#line 176 "hlds.make_hlds.add_mode.c"
  MR_Box * hlds__make_hlds__add_mode__wrapper_arg_1,
#line 178 "hlds.make_hlds.add_mode.c"
  MR_Box hlds__make_hlds__add_mode__wrapper_arg_2,
#line 180 "hlds.make_hlds.add_mode.c"
  MR_Box hlds__make_hlds__add_mode__wrapper_arg_3);

#line 246 "add_mode.m"
static MR_Word MR_CALL 
hlds__make_hlds__add_mode__IntroducedFrom__func__report_circular_equiv_error__246__1_1_f_0(
#line 246 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__HeadVar__1_26);

#line 220 "add_mode.m"
static void MR_CALL 
hlds__make_hlds__add_mode____Compare____circ_id_0_0(
#line 220 "add_mode.m"
  MR_Word * hlds__make_hlds__add_mode__HeadVar__1_1,
#line 220 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__HeadVar__2_2,
#line 220 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__HeadVar__3_3);

#line 220 "add_mode.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mode____Unify____circ_id_0_0(
#line 220 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__HeadVar__1_1,
#line 220 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__HeadVar__2_2);

#line 224 "add_mode.m"
static MR_Word MR_CALL 
hlds__make_hlds__add_mode__mode_id_to_circ_id_1_f_0(
#line 224 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__HeadVar__1_1);

#line 223 "add_mode.m"
static MR_Word MR_CALL 
hlds__make_hlds__add_mode__inst_id_to_circ_id_1_f_0(
#line 223 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__HeadVar__1_1);

#line 246 "add_mode.m"
static MR_Box MR_CALL 
hlds__make_hlds__add_mode__report_circular_mode_equiv_error_6_p_0_2(
#line 246 "add_mode.m"
  MR_Box hlds__make_hlds__add_mode__closure_arg,
#line 246 "add_mode.m"
  MR_Box hlds__make_hlds__add_mode__wrapper_arg_1);

#line 217 "add_mode.m"
static MR_Box MR_CALL 
hlds__make_hlds__add_mode__report_circular_mode_equiv_error_6_p_0_1(
#line 217 "add_mode.m"
  MR_Box hlds__make_hlds__add_mode__closure_arg,
#line 217 "add_mode.m"
  MR_Box hlds__make_hlds__add_mode__wrapper_arg_1);

#line 209 "add_mode.m"
static void MR_CALL 
hlds__make_hlds__add_mode__report_circular_mode_equiv_error_6_p_0(
#line 209 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__OrigModeId_7,
#line 209 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__ModeId_8,
#line 209 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__Expansions_9,
#line 209 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__Context_10,
#line 209 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_0_12,
#line 209 "add_mode.m"
  MR_Word * hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_13);

#line 246 "add_mode.m"
static MR_Box MR_CALL 
hlds__make_hlds__add_mode__report_circular_inst_equiv_error_6_p_0_2(
#line 246 "add_mode.m"
  MR_Box hlds__make_hlds__add_mode__closure_arg,
#line 246 "add_mode.m"
  MR_Box hlds__make_hlds__add_mode__wrapper_arg_1);

#line 206 "add_mode.m"
static MR_Box MR_CALL 
hlds__make_hlds__add_mode__report_circular_inst_equiv_error_6_p_0_1(
#line 206 "add_mode.m"
  MR_Box hlds__make_hlds__add_mode__closure_arg,
#line 206 "add_mode.m"
  MR_Box hlds__make_hlds__add_mode__wrapper_arg_1);

#line 198 "add_mode.m"
static void MR_CALL 
hlds__make_hlds__add_mode__report_circular_inst_equiv_error_6_p_0(
#line 198 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__OrigInstId_7,
#line 198 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__InstId_8,
#line 198 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__Expansions_9,
#line 198 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__Context_10,
#line 198 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_0_12,
#line 198 "add_mode.m"
  MR_Word * hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_13);

#line 170 "add_mode.m"
static void MR_CALL 
hlds__make_hlds__add_mode__check_for_cyclic_mode_8_p_0(
#line 170 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__ModeTable_9,
#line 170 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__OrigModeId_10,
#line 170 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__ModeId0_11,
#line 170 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__Expansions0_12,
#line 170 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__Context_13,
#line 170 "add_mode.m"
  MR_Word * hlds__make_hlds__add_mode__InvalidMode_14,
#line 170 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_0_29,
#line 170 "add_mode.m"
  MR_Word * hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_30);

#line 101 "add_mode.m"
static void MR_CALL 
hlds__make_hlds__add_mode__check_for_cyclic_inst_9_p_0(
#line 101 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__UserInstTable_10,
#line 101 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__OrigInstId_11,
#line 101 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__InstId0_12,
#line 101 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__Args0_13,
#line 101 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__Expansions0_14,
#line 101 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__Context_15,
#line 101 "add_mode.m"
  MR_Word * hlds__make_hlds__add_mode__InvalidMode_16,
#line 101 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_0_32,
#line 101 "add_mode.m"
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
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: circular equivalence"))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
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
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 421 "hlds.make_hlds.add_mode.c"
static const MR_PseudoTypeInfo hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__field_types_circ_id_0_0[2] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 427 "hlds.make_hlds.add_mode.c"
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

#line 442 "hlds.make_hlds.add_mode.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__du_stag_ordered_circ_id_0_0[1] = {
  &hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__du_functor_desc_circ_id_0_0
};

#line 447 "hlds.make_hlds.add_mode.c"
static const MR_DuPtagLayout hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__du_ptag_ordered_circ_id_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__du_stag_ordered_circ_id_0_0
  }
};

#line 456 "hlds.make_hlds.add_mode.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__du_name_ordered_circ_id_0[1] = {
  &hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__du_functor_desc_circ_id_0_0
};

#line 461 "hlds.make_hlds.add_mode.c"
static const MR_Integer hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__functor_number_map_circ_id_0[1] = {
  (MR_Integer) 0
};

#line 466 "hlds.make_hlds.add_mode.c"
const MR_TypeCtorInfo_Struct hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__type_ctor_info_circ_id_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
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

#line 483 "hlds.make_hlds.add_mode.c"
static MR_bool MR_CALL 
hlds__make_hlds__add_mode____Unify____circ_id_0_0_10001(
#line 486 "hlds.make_hlds.add_mode.c"
  MR_Box hlds__make_hlds__add_mode__wrapper_arg_1,
#line 488 "hlds.make_hlds.add_mode.c"
  MR_Box hlds__make_hlds__add_mode__wrapper_arg_2)
#line 490 "hlds.make_hlds.add_mode.c"
{
#line 492 "hlds.make_hlds.add_mode.c"
  {
#line 494 "hlds.make_hlds.add_mode.c"
    MR_bool hlds__make_hlds__add_mode__succeeded;

#line 497 "hlds.make_hlds.add_mode.c"
    {
#line 499 "hlds.make_hlds.add_mode.c"
      hlds__make_hlds__add_mode__succeeded = hlds__make_hlds__add_mode____Unify____circ_id_0_0(((MR_Word) hlds__make_hlds__add_mode__wrapper_arg_1), ((MR_Word) hlds__make_hlds__add_mode__wrapper_arg_2));
    }
#line 502 "hlds.make_hlds.add_mode.c"
    return hlds__make_hlds__add_mode__succeeded;
#line 504 "hlds.make_hlds.add_mode.c"
  }
#line 506 "hlds.make_hlds.add_mode.c"
}

#line 509 "hlds.make_hlds.add_mode.c"
static void MR_CALL 
hlds__make_hlds__add_mode____Compare____circ_id_0_0_10001(
#line 512 "hlds.make_hlds.add_mode.c"
  MR_Box * hlds__make_hlds__add_mode__wrapper_arg_1,
#line 514 "hlds.make_hlds.add_mode.c"
  MR_Box hlds__make_hlds__add_mode__wrapper_arg_2,
#line 516 "hlds.make_hlds.add_mode.c"
  MR_Box hlds__make_hlds__add_mode__wrapper_arg_3)
#line 518 "hlds.make_hlds.add_mode.c"
{
#line 520 "hlds.make_hlds.add_mode.c"
  {
#line 522 "hlds.make_hlds.add_mode.c"
    MR_Word hlds__make_hlds__add_mode__conv0_HeadVar__1_1;

#line 525 "hlds.make_hlds.add_mode.c"
    {
#line 527 "hlds.make_hlds.add_mode.c"
      hlds__make_hlds__add_mode____Compare____circ_id_0_0(&hlds__make_hlds__add_mode__conv0_HeadVar__1_1, ((MR_Word) hlds__make_hlds__add_mode__wrapper_arg_2), ((MR_Word) hlds__make_hlds__add_mode__wrapper_arg_3));
    }
#line 530 "hlds.make_hlds.add_mode.c"
    *hlds__make_hlds__add_mode__wrapper_arg_1 = ((MR_Box) (hlds__make_hlds__add_mode__conv0_HeadVar__1_1));
#line 532 "hlds.make_hlds.add_mode.c"
  }
#line 534 "hlds.make_hlds.add_mode.c"
}

#line 246 "add_mode.m"
static MR_Word MR_CALL 
hlds__make_hlds__add_mode__IntroducedFrom__func__report_circular_equiv_error__246__1_1_f_0(
#line 246 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__HeadVar__1_26)
#line 246 "add_mode.m"
{
#line 246 "add_mode.m"
  {
#line 246 "add_mode.m"
    MR_bool hlds__make_hlds__add_mode__succeeded;
#line 246 "add_mode.m"
    MR_Word hlds__make_hlds__add_mode__HeadVar__2_27;
#line 246 "add_mode.m"
    MR_Word hlds__make_hlds__add_mode__V_28_28;
#line 246 "add_mode.m"
    MR_Word hlds__make_hlds__add_mode__SymName_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__HeadVar__1_26, (MR_Integer) 0)));
#line 246 "add_mode.m"
    MR_Integer hlds__make_hlds__add_mode__Arity_50 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__HeadVar__1_26, (MR_Integer) 1)));

#line 248 "add_mode.m"
    {
#line 248 "add_mode.m"
      hlds__make_hlds__add_mode__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 248 "add_mode.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__V_28_28, 0) = ((MR_Box) (hlds__make_hlds__add_mode__SymName_49));
#line 248 "add_mode.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__V_28_28, 1) = ((MR_Box) (hlds__make_hlds__add_mode__Arity_50));
#line 248 "add_mode.m"
    }
#line 248 "add_mode.m"
    {
#line 248 "add_mode.m"
      hlds__make_hlds__add_mode__HeadVar__2_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 248 "add_mode.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mode__HeadVar__2_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 248 "add_mode.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mode__HeadVar__2_27, 1) = ((MR_Box) (hlds__make_hlds__add_mode__V_28_28));
#line 248 "add_mode.m"
    }
#line 246 "add_mode.m"
    return hlds__make_hlds__add_mode__HeadVar__2_27;
#line 246 "add_mode.m"
  }
#line 246 "add_mode.m"
}

#line 220 "add_mode.m"
static void MR_CALL 
hlds__make_hlds__add_mode____Compare____circ_id_0_0(
#line 220 "add_mode.m"
  MR_Word * hlds__make_hlds__add_mode__HeadVar__1_1,
#line 220 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__HeadVar__2_2,
#line 220 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__HeadVar__3_3)
#line 220 "add_mode.m"
{
#line 220 "add_mode.m"
  {
#line 220 "add_mode.m"
    MR_bool hlds__make_hlds__add_mode__succeeded;
#line 220 "add_mode.m"
    MR_Integer hlds__make_hlds__add_mode__CastX_9 = (MR_Integer) hlds__make_hlds__add_mode__HeadVar__2_2;
#line 220 "add_mode.m"
    MR_Integer hlds__make_hlds__add_mode__CastY_10 = (MR_Integer) hlds__make_hlds__add_mode__HeadVar__3_3;

#line 220 "add_mode.m"
    hlds__make_hlds__add_mode__succeeded = (hlds__make_hlds__add_mode__CastX_9 == hlds__make_hlds__add_mode__CastY_10);
#line 220 "add_mode.m"
    if (hlds__make_hlds__add_mode__succeeded)
#line 608 "hlds.make_hlds.add_mode.c"
      *hlds__make_hlds__add_mode__HeadVar__1_1 = (MR_Integer) 0;
#line 220 "add_mode.m"
    else
#line 220 "add_mode.m"
      {
#line 220 "add_mode.m"
        MR_Word hlds__make_hlds__add_mode__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__HeadVar__2_2, (MR_Integer) 0)));
#line 220 "add_mode.m"
        MR_Integer hlds__make_hlds__add_mode__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__HeadVar__2_2, (MR_Integer) 1)));
#line 220 "add_mode.m"
        MR_Word hlds__make_hlds__add_mode__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__HeadVar__3_3, (MR_Integer) 0)));
#line 220 "add_mode.m"
        MR_Integer hlds__make_hlds__add_mode__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__HeadVar__3_3, (MR_Integer) 1)));
#line 220 "add_mode.m"
        MR_Word hlds__make_hlds__add_mode__V_8_8;

#line 220 "add_mode.m"
        {
#line 220 "add_mode.m"
          mdbcomp__sym_name____Compare____sym_name_0_0(&hlds__make_hlds__add_mode__V_8_8, hlds__make_hlds__add_mode__V_4_4, hlds__make_hlds__add_mode__V_6_6);
        }
#line 630 "hlds.make_hlds.add_mode.c"
        hlds__make_hlds__add_mode__succeeded = (hlds__make_hlds__add_mode__V_8_8 == (MR_Integer) 0);
#line 220 "add_mode.m"
        hlds__make_hlds__add_mode__succeeded = !(hlds__make_hlds__add_mode__succeeded);
#line 220 "add_mode.m"
        if (hlds__make_hlds__add_mode__succeeded)
#line 220 "add_mode.m"
          *hlds__make_hlds__add_mode__HeadVar__1_1 = hlds__make_hlds__add_mode__V_8_8;
#line 220 "add_mode.m"
        else
#line 220 "add_mode.m"
          {
#line 220 "add_mode.m"
            mercury__private_builtin__builtin_compare_int_3_p_0(hlds__make_hlds__add_mode__HeadVar__1_1, hlds__make_hlds__add_mode__V_5_5, hlds__make_hlds__add_mode__V_7_7);
#line 220 "add_mode.m"
            return;
          }
#line 220 "add_mode.m"
      }
#line 220 "add_mode.m"
  }
#line 220 "add_mode.m"
}

#line 220 "add_mode.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mode____Unify____circ_id_0_0(
#line 220 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__HeadVar__1_1,
#line 220 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__HeadVar__2_2)
#line 220 "add_mode.m"
{
#line 220 "add_mode.m"
  {
#line 220 "add_mode.m"
    MR_bool hlds__make_hlds__add_mode__succeeded;
#line 220 "add_mode.m"
    MR_Integer hlds__make_hlds__add_mode__CastX_7 = (MR_Integer) hlds__make_hlds__add_mode__HeadVar__1_1;
#line 220 "add_mode.m"
    MR_Integer hlds__make_hlds__add_mode__CastY_8 = (MR_Integer) hlds__make_hlds__add_mode__HeadVar__2_2;

#line 220 "add_mode.m"
    hlds__make_hlds__add_mode__succeeded = (hlds__make_hlds__add_mode__CastX_7 == hlds__make_hlds__add_mode__CastY_8);
#line 220 "add_mode.m"
    if (hlds__make_hlds__add_mode__succeeded)
#line 220 "add_mode.m"
      hlds__make_hlds__add_mode__succeeded = MR_TRUE;
#line 220 "add_mode.m"
    else
#line 220 "add_mode.m"
      {
#line 220 "add_mode.m"
        MR_Word hlds__make_hlds__add_mode__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__HeadVar__1_1, (MR_Integer) 0)));
#line 220 "add_mode.m"
        MR_Integer hlds__make_hlds__add_mode__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__HeadVar__1_1, (MR_Integer) 1)));
#line 220 "add_mode.m"
        MR_Word hlds__make_hlds__add_mode__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__HeadVar__2_2, (MR_Integer) 0)));
#line 220 "add_mode.m"
        MR_Integer hlds__make_hlds__add_mode__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__HeadVar__2_2, (MR_Integer) 1)));

#line 691 "hlds.make_hlds.add_mode.c"
        {
#line 693 "hlds.make_hlds.add_mode.c"
          hlds__make_hlds__add_mode__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(hlds__make_hlds__add_mode__V_3_3, hlds__make_hlds__add_mode__V_5_5);
        }
#line 220 "add_mode.m"
        if (hlds__make_hlds__add_mode__succeeded)
#line 698 "hlds.make_hlds.add_mode.c"
          hlds__make_hlds__add_mode__succeeded = (hlds__make_hlds__add_mode__V_4_4 == hlds__make_hlds__add_mode__V_6_6);
#line 220 "add_mode.m"
      }
#line 220 "add_mode.m"
    return hlds__make_hlds__add_mode__succeeded;
#line 220 "add_mode.m"
  }
#line 220 "add_mode.m"
}

#line 224 "add_mode.m"
static MR_Word MR_CALL 
hlds__make_hlds__add_mode__mode_id_to_circ_id_1_f_0(
#line 224 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__HeadVar__1_1)
#line 224 "add_mode.m"
{
#line 227 "add_mode.m"
  {
#line 227 "add_mode.m"
    MR_bool hlds__make_hlds__add_mode__succeeded;
#line 227 "add_mode.m"
    MR_Word hlds__make_hlds__add_mode__HeadVar__2_2;
#line 227 "add_mode.m"
    MR_Word hlds__make_hlds__add_mode__SymName_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__HeadVar__1_1, (MR_Integer) 0)));
#line 227 "add_mode.m"
    MR_Integer hlds__make_hlds__add_mode__Arity_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__HeadVar__1_1, (MR_Integer) 1)));

#line 227 "add_mode.m"
    {
#line 227 "add_mode.m"
      hlds__make_hlds__add_mode__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 227 "add_mode.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__HeadVar__2_2, 0) = ((MR_Box) (hlds__make_hlds__add_mode__SymName_3));
#line 227 "add_mode.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__HeadVar__2_2, 1) = ((MR_Box) (hlds__make_hlds__add_mode__Arity_4));
#line 227 "add_mode.m"
    }
#line 227 "add_mode.m"
    return hlds__make_hlds__add_mode__HeadVar__2_2;
#line 227 "add_mode.m"
  }
#line 224 "add_mode.m"
}

#line 223 "add_mode.m"
static MR_Word MR_CALL 
hlds__make_hlds__add_mode__inst_id_to_circ_id_1_f_0(
#line 223 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__HeadVar__1_1)
#line 223 "add_mode.m"
{
#line 226 "add_mode.m"
  {
#line 226 "add_mode.m"
    MR_bool hlds__make_hlds__add_mode__succeeded;
#line 226 "add_mode.m"
    MR_Word hlds__make_hlds__add_mode__HeadVar__2_2;
#line 226 "add_mode.m"
    MR_Word hlds__make_hlds__add_mode__SymName_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__HeadVar__1_1, (MR_Integer) 0)));
#line 226 "add_mode.m"
    MR_Integer hlds__make_hlds__add_mode__Arity_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__HeadVar__1_1, (MR_Integer) 1)));

#line 226 "add_mode.m"
    {
#line 226 "add_mode.m"
      hlds__make_hlds__add_mode__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 226 "add_mode.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__HeadVar__2_2, 0) = ((MR_Box) (hlds__make_hlds__add_mode__SymName_3));
#line 226 "add_mode.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__HeadVar__2_2, 1) = ((MR_Box) (hlds__make_hlds__add_mode__Arity_4));
#line 226 "add_mode.m"
    }
#line 226 "add_mode.m"
    return hlds__make_hlds__add_mode__HeadVar__2_2;
#line 226 "add_mode.m"
  }
#line 223 "add_mode.m"
}

#line 246 "add_mode.m"
static MR_Box MR_CALL 
hlds__make_hlds__add_mode__report_circular_mode_equiv_error_6_p_0_2(
#line 246 "add_mode.m"
  MR_Box hlds__make_hlds__add_mode__closure_arg,
#line 246 "add_mode.m"
  MR_Box hlds__make_hlds__add_mode__wrapper_arg_1)
#line 246 "add_mode.m"
{
#line 246 "add_mode.m"
  {
#line 246 "add_mode.m"
    MR_Box hlds__make_hlds__add_mode__wrapper_arg_2;
#line 246 "add_mode.m"
    MR_Box hlds__make_hlds__add_mode__closure = hlds__make_hlds__add_mode__closure_arg;
#line 246 "add_mode.m"
    MR_Word hlds__make_hlds__add_mode__conv2_HeadVar__2_27;

#line 246 "add_mode.m"
    {
#line 246 "add_mode.m"
      hlds__make_hlds__add_mode__conv2_HeadVar__2_27 = hlds__make_hlds__add_mode__IntroducedFrom__func__report_circular_equiv_error__246__1_1_f_0(((MR_Word) hlds__make_hlds__add_mode__wrapper_arg_1));
    }
#line 246 "add_mode.m"
    hlds__make_hlds__add_mode__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__add_mode__conv2_HeadVar__2_27));
#line 246 "add_mode.m"
    return hlds__make_hlds__add_mode__wrapper_arg_2;
#line 246 "add_mode.m"
  }
#line 246 "add_mode.m"
}

#line 217 "add_mode.m"
static MR_Box MR_CALL 
hlds__make_hlds__add_mode__report_circular_mode_equiv_error_6_p_0_1(
#line 217 "add_mode.m"
  MR_Box hlds__make_hlds__add_mode__closure_arg,
#line 217 "add_mode.m"
  MR_Box hlds__make_hlds__add_mode__wrapper_arg_1)
#line 217 "add_mode.m"
{
#line 217 "add_mode.m"
  {
#line 217 "add_mode.m"
    MR_Box hlds__make_hlds__add_mode__wrapper_arg_2;
#line 217 "add_mode.m"
    MR_Box hlds__make_hlds__add_mode__closure = hlds__make_hlds__add_mode__closure_arg;
#line 217 "add_mode.m"
    MR_Word hlds__make_hlds__add_mode__conv0_HeadVar__2_2;

#line 217 "add_mode.m"
    {
#line 217 "add_mode.m"
      hlds__make_hlds__add_mode__conv0_HeadVar__2_2 = hlds__make_hlds__add_mode__mode_id_to_circ_id_1_f_0(((MR_Word) hlds__make_hlds__add_mode__wrapper_arg_1));
    }
#line 217 "add_mode.m"
    hlds__make_hlds__add_mode__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__add_mode__conv0_HeadVar__2_2));
#line 217 "add_mode.m"
    return hlds__make_hlds__add_mode__wrapper_arg_2;
#line 217 "add_mode.m"
  }
#line 217 "add_mode.m"
}

#line 209 "add_mode.m"
static void MR_CALL 
hlds__make_hlds__add_mode__report_circular_mode_equiv_error_6_p_0(
#line 209 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__OrigModeId_7,
#line 209 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__ModeId_8,
#line 209 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__Expansions_9,
#line 209 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__Context_10,
#line 209 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_0_12,
#line 209 "add_mode.m"
  MR_Word * hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_13)
#line 209 "add_mode.m"
{
#line 214 "add_mode.m"
  {
#line 214 "add_mode.m"
    MR_bool hlds__make_hlds__add_mode__succeeded;
#line 214 "add_mode.m"
    MR_Word hlds__make_hlds__add_mode__V_16_16;
#line 214 "add_mode.m"
    MR_Word hlds__make_hlds__add_mode__V_17_17;
#line 214 "add_mode.m"
    MR_Word hlds__make_hlds__add_mode__V_18_18;
#line 214 "add_mode.m"
    MR_Word hlds__make_hlds__add_mode__SymName_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__OrigModeId_7, (MR_Integer) 0)));
#line 214 "add_mode.m"
    MR_Integer hlds__make_hlds__add_mode__Arity_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__OrigModeId_7, (MR_Integer) 1)));
#line 214 "add_mode.m"
    MR_Word hlds__make_hlds__add_mode__SymName_27;
#line 214 "add_mode.m"
    MR_Integer hlds__make_hlds__add_mode__Arity_28;
#line 220 "add_mode.m"
    MR_Integer hlds__make_hlds__add_mode__CastX_78;
#line 220 "add_mode.m"
    MR_Integer hlds__make_hlds__add_mode__CastY_79;

#line 227 "add_mode.m"
    {
#line 227 "add_mode.m"
      hlds__make_hlds__add_mode__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 227 "add_mode.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__V_16_16, 0) = ((MR_Box) (hlds__make_hlds__add_mode__SymName_25));
#line 227 "add_mode.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__V_16_16, 1) = ((MR_Box) (hlds__make_hlds__add_mode__Arity_26));
#line 227 "add_mode.m"
    }
#line 227 "add_mode.m"
    hlds__make_hlds__add_mode__SymName_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__ModeId_8, (MR_Integer) 0)));
#line 227 "add_mode.m"
    hlds__make_hlds__add_mode__Arity_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__ModeId_8, (MR_Integer) 1)));
#line 227 "add_mode.m"
    {
#line 227 "add_mode.m"
      hlds__make_hlds__add_mode__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 227 "add_mode.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__V_17_17, 0) = ((MR_Box) (hlds__make_hlds__add_mode__SymName_27));
#line 227 "add_mode.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__V_17_17, 1) = ((MR_Box) (hlds__make_hlds__add_mode__Arity_28));
#line 227 "add_mode.m"
    }
#line 217 "add_mode.m"
    {
#line 217 "add_mode.m"
      hlds__make_hlds__add_mode__V_18_18 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_id_0, (MR_Word) &hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__type_ctor_info_circ_id_0, (MR_Word) &hlds__make_hlds__add_mode_scalar_common_3[2], hlds__make_hlds__add_mode__Expansions_9);
    }
#line 220 "add_mode.m"
    hlds__make_hlds__add_mode__CastX_78 = (MR_Integer) hlds__make_hlds__add_mode__V_17_17;
#line 220 "add_mode.m"
    hlds__make_hlds__add_mode__CastY_79 = (MR_Integer) hlds__make_hlds__add_mode__V_16_16;
#line 220 "add_mode.m"
    hlds__make_hlds__add_mode__succeeded = (hlds__make_hlds__add_mode__CastX_78 == hlds__make_hlds__add_mode__CastY_79);
#line 220 "add_mode.m"
    if (hlds__make_hlds__add_mode__succeeded)
#line 220 "add_mode.m"
      hlds__make_hlds__add_mode__succeeded = MR_TRUE;
#line 220 "add_mode.m"
    else
#line 220 "add_mode.m"
      {
#line 220 "add_mode.m"
        MR_Word hlds__make_hlds__add_mode__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__V_17_17, (MR_Integer) 0)));
#line 220 "add_mode.m"
        MR_Integer hlds__make_hlds__add_mode__V_75_75 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__V_17_17, (MR_Integer) 1)));
#line 220 "add_mode.m"
        MR_Word hlds__make_hlds__add_mode__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__V_16_16, (MR_Integer) 0)));
#line 220 "add_mode.m"
        MR_Integer hlds__make_hlds__add_mode__V_77_77 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__V_16_16, (MR_Integer) 1)));

#line 935 "hlds.make_hlds.add_mode.c"
        {
#line 937 "hlds.make_hlds.add_mode.c"
          hlds__make_hlds__add_mode__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(hlds__make_hlds__add_mode__V_74_74, hlds__make_hlds__add_mode__V_76_76);
        }
#line 220 "add_mode.m"
        if (hlds__make_hlds__add_mode__succeeded)
#line 942 "hlds.make_hlds.add_mode.c"
          hlds__make_hlds__add_mode__succeeded = (hlds__make_hlds__add_mode__V_75_75 == hlds__make_hlds__add_mode__V_77_77);
#line 220 "add_mode.m"
      }
#line 255 "add_mode.m"
    if (hlds__make_hlds__add_mode__succeeded)
#line 245 "add_mode.m"
      {
#line 245 "add_mode.m"
        MR_Word hlds__make_hlds__add_mode__TypeCtorInfo_51_71 = (MR_Word) &hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__type_ctor_info_circ_id_0;
#line 245 "add_mode.m"
        MR_Word hlds__make_hlds__add_mode__TypeCtorInfo_53_73;
#line 245 "add_mode.m"
        MR_String hlds__make_hlds__add_mode__Kinds_38;
#line 245 "add_mode.m"
        MR_Word hlds__make_hlds__add_mode__ExpansionPieces_39;
#line 245 "add_mode.m"
        MR_Word hlds__make_hlds__add_mode__Pieces_42;
#line 245 "add_mode.m"
        MR_Word hlds__make_hlds__add_mode__Msg_43;
#line 245 "add_mode.m"
        MR_Word hlds__make_hlds__add_mode__Spec_44;
#line 245 "add_mode.m"
        MR_Word hlds__make_hlds__add_mode__V_49_49;
#line 245 "add_mode.m"
        MR_Word hlds__make_hlds__add_mode__V_52_52;
#line 245 "add_mode.m"
        MR_Word hlds__make_hlds__add_mode__V_53_53;
#line 245 "add_mode.m"
        MR_Word hlds__make_hlds__add_mode__V_55_55;
#line 245 "add_mode.m"
        MR_Word hlds__make_hlds__add_mode__V_56_56;
#line 245 "add_mode.m"
        MR_Word hlds__make_hlds__add_mode__V_61_61;
#line 245 "add_mode.m"
        MR_Word hlds__make_hlds__add_mode__V_62_62;
#line 245 "add_mode.m"
        MR_Word hlds__make_hlds__add_mode__V_66_66;
#line 245 "add_mode.m"
        MR_Box hlds__make_hlds__add_mode__conv1_Kinds_38;

#line 245 "add_mode.m"
        {
#line 245 "add_mode.m"
          hlds__make_hlds__add_mode__conv1_Kinds_38 = parse_tree__error_util__choose_number_3_f_0(hlds__make_hlds__add_mode__TypeCtorInfo_51_71, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, hlds__make_hlds__add_mode__V_18_18, ((MR_Box) ((MR_String) "mode")), ((MR_Box) ((MR_String) "modes")));
        }
#line 245 "add_mode.m"
        hlds__make_hlds__add_mode__Kinds_38 = ((MR_String) hlds__make_hlds__add_mode__conv1_Kinds_38);
#line 990 "hlds.make_hlds.add_mode.c"
        hlds__make_hlds__add_mode__TypeCtorInfo_53_73 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 246 "add_mode.m"
        {
#line 246 "add_mode.m"
          hlds__make_hlds__add_mode__ExpansionPieces_39 = mercury__list__map_2_f_0(hlds__make_hlds__add_mode__TypeCtorInfo_51_71, hlds__make_hlds__add_mode__TypeCtorInfo_53_73, (MR_Word) &hlds__make_hlds__add_mode_scalar_common_3[3], hlds__make_hlds__add_mode__V_18_18);
        }
#line 250 "add_mode.m"
        {
#line 250 "add_mode.m"
          hlds__make_hlds__add_mode__V_53_53 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 250 "add_mode.m"
          MR_hl_field(MR_mktag(2), hlds__make_hlds__add_mode__V_53_53, 0) = ((MR_Box) (hlds__make_hlds__add_mode__Kinds_38));
#line 250 "add_mode.m"
        }
#line 250 "add_mode.m"
        {
#line 250 "add_mode.m"
          hlds__make_hlds__add_mode__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 250 "add_mode.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__V_52_52, 0) = ((MR_Box) (hlds__make_hlds__add_mode__V_53_53));
#line 250 "add_mode.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__V_52_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 250 "add_mode.m"
        }
#line 250 "add_mode.m"
        {
#line 250 "add_mode.m"
          hlds__make_hlds__add_mode__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 250 "add_mode.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__V_49_49, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mode_scalar_common_1[1])));
#line 250 "add_mode.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__V_49_49, 1) = ((MR_Box) (hlds__make_hlds__add_mode__V_52_52));
#line 250 "add_mode.m"
        }
#line 251 "add_mode.m"
        {
#line 251 "add_mode.m"
          hlds__make_hlds__add_mode__V_56_56 = parse_tree__error_util__component_list_to_pieces_1_f_0(hlds__make_hlds__add_mode__ExpansionPieces_39);
        }
#line 251 "add_mode.m"
        {
#line 251 "add_mode.m"
          hlds__make_hlds__add_mode__V_55_55 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__add_mode__TypeCtorInfo_53_73, hlds__make_hlds__add_mode__V_56_56, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mode_scalar_common_1[3]));
        }
#line 251 "add_mode.m"
        {
#line 251 "add_mode.m"
          hlds__make_hlds__add_mode__Pieces_42 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__add_mode__TypeCtorInfo_53_73, hlds__make_hlds__add_mode__V_49_49, hlds__make_hlds__add_mode__V_55_55);
        }
#line 252 "add_mode.m"
        {
#line 252 "add_mode.m"
          hlds__make_hlds__add_mode__V_62_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 252 "add_mode.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__V_62_62, 0) = ((MR_Box) (hlds__make_hlds__add_mode__Pieces_42));
#line 252 "add_mode.m"
        }
#line 252 "add_mode.m"
        {
#line 252 "add_mode.m"
          hlds__make_hlds__add_mode__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 252 "add_mode.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__V_61_61, 0) = ((MR_Box) (hlds__make_hlds__add_mode__V_62_62));
#line 252 "add_mode.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__V_61_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 252 "add_mode.m"
        }
#line 252 "add_mode.m"
        {
#line 252 "add_mode.m"
          hlds__make_hlds__add_mode__Msg_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 252 "add_mode.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__Msg_43, 0) = ((MR_Box) (hlds__make_hlds__add_mode__Context_10));
#line 252 "add_mode.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__Msg_43, 1) = ((MR_Box) (hlds__make_hlds__add_mode__V_61_61));
#line 252 "add_mode.m"
        }
#line 253 "add_mode.m"
        {
#line 253 "add_mode.m"
          hlds__make_hlds__add_mode__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 253 "add_mode.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__V_66_66, 0) = ((MR_Box) (hlds__make_hlds__add_mode__Msg_43));
#line 253 "add_mode.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__V_66_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 253 "add_mode.m"
        }
#line 253 "add_mode.m"
        {
#line 253 "add_mode.m"
          hlds__make_hlds__add_mode__Spec_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 253 "add_mode.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__Spec_44, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 253 "add_mode.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__Spec_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 253 "add_mode.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__Spec_44, 2) = ((MR_Box) (hlds__make_hlds__add_mode__V_66_66));
#line 253 "add_mode.m"
        }
#line 254 "add_mode.m"
        {
#line 254 "add_mode.m"
          MR_Word base;
#line 254 "add_mode.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 254 "add_mode.m"
          *hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_13 = base;
#line 254 "add_mode.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_mode__Spec_44));
#line 254 "add_mode.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_0_12));
#line 254 "add_mode.m"
        }
#line 245 "add_mode.m"
      }
#line 255 "add_mode.m"
    else
#line 255 "add_mode.m"
      *hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_13 = hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_0_12;
#line 214 "add_mode.m"
  }
#line 209 "add_mode.m"
}

#line 246 "add_mode.m"
static MR_Box MR_CALL 
hlds__make_hlds__add_mode__report_circular_inst_equiv_error_6_p_0_2(
#line 246 "add_mode.m"
  MR_Box hlds__make_hlds__add_mode__closure_arg,
#line 246 "add_mode.m"
  MR_Box hlds__make_hlds__add_mode__wrapper_arg_1)
#line 246 "add_mode.m"
{
#line 246 "add_mode.m"
  {
#line 246 "add_mode.m"
    MR_Box hlds__make_hlds__add_mode__wrapper_arg_2;
#line 246 "add_mode.m"
    MR_Box hlds__make_hlds__add_mode__closure = hlds__make_hlds__add_mode__closure_arg;
#line 246 "add_mode.m"
    MR_Word hlds__make_hlds__add_mode__conv2_HeadVar__2_27;

#line 246 "add_mode.m"
    {
#line 246 "add_mode.m"
      hlds__make_hlds__add_mode__conv2_HeadVar__2_27 = hlds__make_hlds__add_mode__IntroducedFrom__func__report_circular_equiv_error__246__1_1_f_0(((MR_Word) hlds__make_hlds__add_mode__wrapper_arg_1));
    }
#line 246 "add_mode.m"
    hlds__make_hlds__add_mode__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__add_mode__conv2_HeadVar__2_27));
#line 246 "add_mode.m"
    return hlds__make_hlds__add_mode__wrapper_arg_2;
#line 246 "add_mode.m"
  }
#line 246 "add_mode.m"
}

#line 206 "add_mode.m"
static MR_Box MR_CALL 
hlds__make_hlds__add_mode__report_circular_inst_equiv_error_6_p_0_1(
#line 206 "add_mode.m"
  MR_Box hlds__make_hlds__add_mode__closure_arg,
#line 206 "add_mode.m"
  MR_Box hlds__make_hlds__add_mode__wrapper_arg_1)
#line 206 "add_mode.m"
{
#line 206 "add_mode.m"
  {
#line 206 "add_mode.m"
    MR_Box hlds__make_hlds__add_mode__wrapper_arg_2;
#line 206 "add_mode.m"
    MR_Box hlds__make_hlds__add_mode__closure = hlds__make_hlds__add_mode__closure_arg;
#line 206 "add_mode.m"
    MR_Word hlds__make_hlds__add_mode__conv0_HeadVar__2_2;

#line 206 "add_mode.m"
    {
#line 206 "add_mode.m"
      hlds__make_hlds__add_mode__conv0_HeadVar__2_2 = hlds__make_hlds__add_mode__inst_id_to_circ_id_1_f_0(((MR_Word) hlds__make_hlds__add_mode__wrapper_arg_1));
    }
#line 206 "add_mode.m"
    hlds__make_hlds__add_mode__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__add_mode__conv0_HeadVar__2_2));
#line 206 "add_mode.m"
    return hlds__make_hlds__add_mode__wrapper_arg_2;
#line 206 "add_mode.m"
  }
#line 206 "add_mode.m"
}

#line 198 "add_mode.m"
static void MR_CALL 
hlds__make_hlds__add_mode__report_circular_inst_equiv_error_6_p_0(
#line 198 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__OrigInstId_7,
#line 198 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__InstId_8,
#line 198 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__Expansions_9,
#line 198 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__Context_10,
#line 198 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_0_12,
#line 198 "add_mode.m"
  MR_Word * hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_13)
#line 198 "add_mode.m"
{
#line 203 "add_mode.m"
  {
#line 203 "add_mode.m"
    MR_bool hlds__make_hlds__add_mode__succeeded;
#line 203 "add_mode.m"
    MR_Word hlds__make_hlds__add_mode__V_16_16;
#line 203 "add_mode.m"
    MR_Word hlds__make_hlds__add_mode__V_17_17;
#line 203 "add_mode.m"
    MR_Word hlds__make_hlds__add_mode__V_18_18;
#line 203 "add_mode.m"
    MR_Word hlds__make_hlds__add_mode__SymName_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__OrigInstId_7, (MR_Integer) 0)));
#line 203 "add_mode.m"
    MR_Integer hlds__make_hlds__add_mode__Arity_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__OrigInstId_7, (MR_Integer) 1)));
#line 203 "add_mode.m"
    MR_Word hlds__make_hlds__add_mode__SymName_27;
#line 203 "add_mode.m"
    MR_Integer hlds__make_hlds__add_mode__Arity_28;
#line 220 "add_mode.m"
    MR_Integer hlds__make_hlds__add_mode__CastX_78;
#line 220 "add_mode.m"
    MR_Integer hlds__make_hlds__add_mode__CastY_79;

#line 226 "add_mode.m"
    {
#line 226 "add_mode.m"
      hlds__make_hlds__add_mode__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 226 "add_mode.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__V_16_16, 0) = ((MR_Box) (hlds__make_hlds__add_mode__SymName_25));
#line 226 "add_mode.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__V_16_16, 1) = ((MR_Box) (hlds__make_hlds__add_mode__Arity_26));
#line 226 "add_mode.m"
    }
#line 226 "add_mode.m"
    hlds__make_hlds__add_mode__SymName_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__InstId_8, (MR_Integer) 0)));
#line 226 "add_mode.m"
    hlds__make_hlds__add_mode__Arity_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__InstId_8, (MR_Integer) 1)));
#line 226 "add_mode.m"
    {
#line 226 "add_mode.m"
      hlds__make_hlds__add_mode__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 226 "add_mode.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__V_17_17, 0) = ((MR_Box) (hlds__make_hlds__add_mode__SymName_27));
#line 226 "add_mode.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__V_17_17, 1) = ((MR_Box) (hlds__make_hlds__add_mode__Arity_28));
#line 226 "add_mode.m"
    }
#line 206 "add_mode.m"
    {
#line 206 "add_mode.m"
      hlds__make_hlds__add_mode__V_18_18 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0, (MR_Word) &hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__type_ctor_info_circ_id_0, (MR_Word) &hlds__make_hlds__add_mode_scalar_common_3[0], hlds__make_hlds__add_mode__Expansions_9);
    }
#line 220 "add_mode.m"
    hlds__make_hlds__add_mode__CastX_78 = (MR_Integer) hlds__make_hlds__add_mode__V_17_17;
#line 220 "add_mode.m"
    hlds__make_hlds__add_mode__CastY_79 = (MR_Integer) hlds__make_hlds__add_mode__V_16_16;
#line 220 "add_mode.m"
    hlds__make_hlds__add_mode__succeeded = (hlds__make_hlds__add_mode__CastX_78 == hlds__make_hlds__add_mode__CastY_79);
#line 220 "add_mode.m"
    if (hlds__make_hlds__add_mode__succeeded)
#line 220 "add_mode.m"
      hlds__make_hlds__add_mode__succeeded = MR_TRUE;
#line 220 "add_mode.m"
    else
#line 220 "add_mode.m"
      {
#line 220 "add_mode.m"
        MR_Word hlds__make_hlds__add_mode__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__V_17_17, (MR_Integer) 0)));
#line 220 "add_mode.m"
        MR_Integer hlds__make_hlds__add_mode__V_75_75 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__V_17_17, (MR_Integer) 1)));
#line 220 "add_mode.m"
        MR_Word hlds__make_hlds__add_mode__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__V_16_16, (MR_Integer) 0)));
#line 220 "add_mode.m"
        MR_Integer hlds__make_hlds__add_mode__V_77_77 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__V_16_16, (MR_Integer) 1)));

#line 1271 "hlds.make_hlds.add_mode.c"
        {
#line 1273 "hlds.make_hlds.add_mode.c"
          hlds__make_hlds__add_mode__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(hlds__make_hlds__add_mode__V_74_74, hlds__make_hlds__add_mode__V_76_76);
        }
#line 220 "add_mode.m"
        if (hlds__make_hlds__add_mode__succeeded)
#line 1278 "hlds.make_hlds.add_mode.c"
          hlds__make_hlds__add_mode__succeeded = (hlds__make_hlds__add_mode__V_75_75 == hlds__make_hlds__add_mode__V_77_77);
#line 220 "add_mode.m"
      }
#line 255 "add_mode.m"
    if (hlds__make_hlds__add_mode__succeeded)
#line 245 "add_mode.m"
      {
#line 245 "add_mode.m"
        MR_Word hlds__make_hlds__add_mode__TypeCtorInfo_51_71 = (MR_Word) &hlds__make_hlds__add_mode__hlds__make_hlds__add_mode__type_ctor_info_circ_id_0;
#line 245 "add_mode.m"
        MR_Word hlds__make_hlds__add_mode__TypeCtorInfo_53_73;
#line 245 "add_mode.m"
        MR_String hlds__make_hlds__add_mode__Kinds_38;
#line 245 "add_mode.m"
        MR_Word hlds__make_hlds__add_mode__ExpansionPieces_39;
#line 245 "add_mode.m"
        MR_Word hlds__make_hlds__add_mode__Pieces_42;
#line 245 "add_mode.m"
        MR_Word hlds__make_hlds__add_mode__Msg_43;
#line 245 "add_mode.m"
        MR_Word hlds__make_hlds__add_mode__Spec_44;
#line 245 "add_mode.m"
        MR_Word hlds__make_hlds__add_mode__V_49_49;
#line 245 "add_mode.m"
        MR_Word hlds__make_hlds__add_mode__V_52_52;
#line 245 "add_mode.m"
        MR_Word hlds__make_hlds__add_mode__V_53_53;
#line 245 "add_mode.m"
        MR_Word hlds__make_hlds__add_mode__V_55_55;
#line 245 "add_mode.m"
        MR_Word hlds__make_hlds__add_mode__V_56_56;
#line 245 "add_mode.m"
        MR_Word hlds__make_hlds__add_mode__V_61_61;
#line 245 "add_mode.m"
        MR_Word hlds__make_hlds__add_mode__V_62_62;
#line 245 "add_mode.m"
        MR_Word hlds__make_hlds__add_mode__V_66_66;
#line 245 "add_mode.m"
        MR_Box hlds__make_hlds__add_mode__conv1_Kinds_38;

#line 245 "add_mode.m"
        {
#line 245 "add_mode.m"
          hlds__make_hlds__add_mode__conv1_Kinds_38 = parse_tree__error_util__choose_number_3_f_0(hlds__make_hlds__add_mode__TypeCtorInfo_51_71, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, hlds__make_hlds__add_mode__V_18_18, ((MR_Box) ((MR_String) "inst")), ((MR_Box) ((MR_String) "insts")));
        }
#line 245 "add_mode.m"
        hlds__make_hlds__add_mode__Kinds_38 = ((MR_String) hlds__make_hlds__add_mode__conv1_Kinds_38);
#line 1326 "hlds.make_hlds.add_mode.c"
        hlds__make_hlds__add_mode__TypeCtorInfo_53_73 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 246 "add_mode.m"
        {
#line 246 "add_mode.m"
          hlds__make_hlds__add_mode__ExpansionPieces_39 = mercury__list__map_2_f_0(hlds__make_hlds__add_mode__TypeCtorInfo_51_71, hlds__make_hlds__add_mode__TypeCtorInfo_53_73, (MR_Word) &hlds__make_hlds__add_mode_scalar_common_3[1], hlds__make_hlds__add_mode__V_18_18);
        }
#line 250 "add_mode.m"
        {
#line 250 "add_mode.m"
          hlds__make_hlds__add_mode__V_53_53 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 250 "add_mode.m"
          MR_hl_field(MR_mktag(2), hlds__make_hlds__add_mode__V_53_53, 0) = ((MR_Box) (hlds__make_hlds__add_mode__Kinds_38));
#line 250 "add_mode.m"
        }
#line 250 "add_mode.m"
        {
#line 250 "add_mode.m"
          hlds__make_hlds__add_mode__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 250 "add_mode.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__V_52_52, 0) = ((MR_Box) (hlds__make_hlds__add_mode__V_53_53));
#line 250 "add_mode.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__V_52_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 250 "add_mode.m"
        }
#line 250 "add_mode.m"
        {
#line 250 "add_mode.m"
          hlds__make_hlds__add_mode__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 250 "add_mode.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__V_49_49, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mode_scalar_common_1[1])));
#line 250 "add_mode.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__V_49_49, 1) = ((MR_Box) (hlds__make_hlds__add_mode__V_52_52));
#line 250 "add_mode.m"
        }
#line 251 "add_mode.m"
        {
#line 251 "add_mode.m"
          hlds__make_hlds__add_mode__V_56_56 = parse_tree__error_util__component_list_to_pieces_1_f_0(hlds__make_hlds__add_mode__ExpansionPieces_39);
        }
#line 251 "add_mode.m"
        {
#line 251 "add_mode.m"
          hlds__make_hlds__add_mode__V_55_55 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__add_mode__TypeCtorInfo_53_73, hlds__make_hlds__add_mode__V_56_56, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mode_scalar_common_1[3]));
        }
#line 251 "add_mode.m"
        {
#line 251 "add_mode.m"
          hlds__make_hlds__add_mode__Pieces_42 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__add_mode__TypeCtorInfo_53_73, hlds__make_hlds__add_mode__V_49_49, hlds__make_hlds__add_mode__V_55_55);
        }
#line 252 "add_mode.m"
        {
#line 252 "add_mode.m"
          hlds__make_hlds__add_mode__V_62_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 252 "add_mode.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__V_62_62, 0) = ((MR_Box) (hlds__make_hlds__add_mode__Pieces_42));
#line 252 "add_mode.m"
        }
#line 252 "add_mode.m"
        {
#line 252 "add_mode.m"
          hlds__make_hlds__add_mode__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 252 "add_mode.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__V_61_61, 0) = ((MR_Box) (hlds__make_hlds__add_mode__V_62_62));
#line 252 "add_mode.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__V_61_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 252 "add_mode.m"
        }
#line 252 "add_mode.m"
        {
#line 252 "add_mode.m"
          hlds__make_hlds__add_mode__Msg_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 252 "add_mode.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__Msg_43, 0) = ((MR_Box) (hlds__make_hlds__add_mode__Context_10));
#line 252 "add_mode.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__Msg_43, 1) = ((MR_Box) (hlds__make_hlds__add_mode__V_61_61));
#line 252 "add_mode.m"
        }
#line 253 "add_mode.m"
        {
#line 253 "add_mode.m"
          hlds__make_hlds__add_mode__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 253 "add_mode.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__V_66_66, 0) = ((MR_Box) (hlds__make_hlds__add_mode__Msg_43));
#line 253 "add_mode.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__V_66_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 253 "add_mode.m"
        }
#line 253 "add_mode.m"
        {
#line 253 "add_mode.m"
          hlds__make_hlds__add_mode__Spec_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 253 "add_mode.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__Spec_44, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 253 "add_mode.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__Spec_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 253 "add_mode.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__Spec_44, 2) = ((MR_Box) (hlds__make_hlds__add_mode__V_66_66));
#line 253 "add_mode.m"
        }
#line 254 "add_mode.m"
        {
#line 254 "add_mode.m"
          MR_Word base;
#line 254 "add_mode.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 254 "add_mode.m"
          *hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_13 = base;
#line 254 "add_mode.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_mode__Spec_44));
#line 254 "add_mode.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_0_12));
#line 254 "add_mode.m"
        }
#line 245 "add_mode.m"
      }
#line 255 "add_mode.m"
    else
#line 255 "add_mode.m"
      *hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_13 = hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_0_12;
#line 203 "add_mode.m"
  }
#line 198 "add_mode.m"
}

#line 170 "add_mode.m"
static void MR_CALL 
hlds__make_hlds__add_mode__check_for_cyclic_mode_8_p_0(
#line 170 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__ModeTable_9,
#line 170 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__OrigModeId_10,
#line 170 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__ModeId0_11,
#line 170 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__Expansions0_12,
#line 170 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__Context_13,
#line 170 "add_mode.m"
  MR_Word * hlds__make_hlds__add_mode__InvalidMode_14,
#line 170 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_0_29,
#line 170 "add_mode.m"
  MR_Word * hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_30)
#line 170 "add_mode.m"
{
#line 180 "add_mode.m"
  while (MR_TRUE)
#line 180 "add_mode.m"
    {
#line 180 "add_mode.m"
      /* tailcall optimized into a loop */
#line 180 "add_mode.m"
      {
#line 180 "add_mode.m"
        MR_bool hlds__make_hlds__add_mode__succeeded;

#line 176 "add_mode.m"
        {
#line 176 "add_mode.m"
          hlds__make_hlds__add_mode__succeeded = mercury__list__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_id_0, ((MR_Box) (hlds__make_hlds__add_mode__ModeId0_11)), hlds__make_hlds__add_mode__Expansions0_12);
        }
#line 180 "add_mode.m"
        if (hlds__make_hlds__add_mode__succeeded)
#line 178 "add_mode.m"
          {
#line 177 "add_mode.m"
            {
#line 177 "add_mode.m"
              hlds__make_hlds__add_mode__report_circular_mode_equiv_error_6_p_0(hlds__make_hlds__add_mode__OrigModeId_10, hlds__make_hlds__add_mode__ModeId0_11, hlds__make_hlds__add_mode__Expansions0_12, hlds__make_hlds__add_mode__Context_13, hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_0_29, hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_30);
            }
#line 179 "add_mode.m"
            *hlds__make_hlds__add_mode__InvalidMode_14 = (MR_Integer) 1;
#line 178 "add_mode.m"
          }
#line 180 "add_mode.m"
        else
#line 181 "add_mode.m"
          {
#line 181 "add_mode.m"
            MR_Word hlds__make_hlds__add_mode__ModeDefns_16;
#line 193 "add_mode.m"
            MR_Word hlds__make_hlds__add_mode__Name_24;
#line 193 "add_mode.m"
            MR_Word hlds__make_hlds__add_mode__Args_25;
#line 183 "add_mode.m"
            MR_Word hlds__make_hlds__add_mode__ModeDefn_17;
#line 183 "add_mode.m"
            MR_Word hlds__make_hlds__add_mode__Body_20;
#line 183 "add_mode.m"
            MR_Word hlds__make_hlds__add_mode__EqvMode_23;
#line 183 "add_mode.m"
            MR_Box hlds__make_hlds__add_mode__conv0_ModeDefn_17;
#line 184 "add_mode.m"
            MR_Word hlds__make_hlds__add_mode__V_18_18;
#line 184 "add_mode.m"
            MR_Word hlds__make_hlds__add_mode__V_19_19;
#line 184 "add_mode.m"
            MR_Word hlds__make_hlds__add_mode__V_21_21;
#line 184 "add_mode.m"
            MR_Word hlds__make_hlds__add_mode__V_22_22;

#line 181 "add_mode.m"
            {
#line 181 "add_mode.m"
              hlds__hlds_data__mode_table_get_mode_defns_2_p_0(hlds__make_hlds__add_mode__ModeTable_9, &hlds__make_hlds__add_mode__ModeDefns_16);
            }
#line 183 "add_mode.m"
            {
#line 183 "add_mode.m"
              hlds__make_hlds__add_mode__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_mode_defn_0, hlds__make_hlds__add_mode__ModeDefns_16, ((MR_Box) (hlds__make_hlds__add_mode__ModeId0_11)), &hlds__make_hlds__add_mode__conv0_ModeDefn_17);
            }
#line 183 "add_mode.m"
            if (hlds__make_hlds__add_mode__succeeded)
#line 183 "add_mode.m"
              {
#line 183 "add_mode.m"
                hlds__make_hlds__add_mode__ModeDefn_17 = ((MR_Word) hlds__make_hlds__add_mode__conv0_ModeDefn_17);
#line 183 "add_mode.m"
                hlds__make_hlds__add_mode__succeeded = MR_TRUE;
#line 183 "add_mode.m"
              }
#line 183 "add_mode.m"
            if (hlds__make_hlds__add_mode__succeeded)
#line 183 "add_mode.m"
              {
#line 184 "add_mode.m"
                hlds__make_hlds__add_mode__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__ModeDefn_17, (MR_Integer) 0)));
#line 184 "add_mode.m"
                hlds__make_hlds__add_mode__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__ModeDefn_17, (MR_Integer) 1)));
#line 184 "add_mode.m"
                hlds__make_hlds__add_mode__Body_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__ModeDefn_17, (MR_Integer) 2)));
#line 184 "add_mode.m"
                hlds__make_hlds__add_mode__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__ModeDefn_17, (MR_Integer) 3)));
#line 184 "add_mode.m"
                hlds__make_hlds__add_mode__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__ModeDefn_17, (MR_Integer) 4)));
#line 185 "add_mode.m"
                hlds__make_hlds__add_mode__EqvMode_23 = (MR_Word) hlds__make_hlds__add_mode__Body_20;
#line 186 "add_mode.m"
                hlds__make_hlds__add_mode__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_mode__EqvMode_23)) == (MR_mktag((MR_Integer) 1)));
#line 186 "add_mode.m"
                if (hlds__make_hlds__add_mode__succeeded)
#line 186 "add_mode.m"
                  {
#line 186 "add_mode.m"
                    hlds__make_hlds__add_mode__Name_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__EqvMode_23, (MR_Integer) 0)));
#line 186 "add_mode.m"
                    hlds__make_hlds__add_mode__Args_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__EqvMode_23, (MR_Integer) 1)));
#line 186 "add_mode.m"
                  }
#line 183 "add_mode.m"
              }
#line 193 "add_mode.m"
            if (hlds__make_hlds__add_mode__succeeded)
#line 188 "add_mode.m"
              {
#line 188 "add_mode.m"
                MR_Integer hlds__make_hlds__add_mode__Arity_26;
#line 188 "add_mode.m"
                MR_Word hlds__make_hlds__add_mode__ModeId_27;
#line 188 "add_mode.m"
                MR_Word hlds__make_hlds__add_mode__Expansions_28;

#line 188 "add_mode.m"
                {
#line 188 "add_mode.m"
                  hlds__make_hlds__add_mode__Arity_26 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__make_hlds__add_mode__Args_25);
                }
#line 189 "add_mode.m"
                {
#line 189 "add_mode.m"
                  hlds__make_hlds__add_mode__ModeId_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 189 "add_mode.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__ModeId_27, 0) = ((MR_Box) (hlds__make_hlds__add_mode__Name_24));
#line 189 "add_mode.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__ModeId_27, 1) = ((MR_Box) (hlds__make_hlds__add_mode__Arity_26));
#line 189 "add_mode.m"
                }
#line 190 "add_mode.m"
                {
#line 190 "add_mode.m"
                  hlds__make_hlds__add_mode__Expansions_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 190 "add_mode.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__Expansions_28, 0) = ((MR_Box) (hlds__make_hlds__add_mode__ModeId0_11));
#line 190 "add_mode.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__Expansions_28, 1) = ((MR_Box) (hlds__make_hlds__add_mode__Expansions0_12));
#line 190 "add_mode.m"
                }
#line 191 "add_mode.m"
                /* direct tailcall eliminated */
#line 191 "add_mode.m"
                {
#line 191 "add_mode.m"
                  MR_Word hlds__make_hlds__add_mode__ModeId0__tmp_copy_11 = hlds__make_hlds__add_mode__ModeId_27;
#line 191 "add_mode.m"
                  MR_Word hlds__make_hlds__add_mode__Expansions0__tmp_copy_12 = hlds__make_hlds__add_mode__Expansions_28;

#line 191 "add_mode.m"
                  hlds__make_hlds__add_mode__Expansions0_12 = hlds__make_hlds__add_mode__Expansions0__tmp_copy_12;
#line 191 "add_mode.m"
                  hlds__make_hlds__add_mode__ModeId0_11 = hlds__make_hlds__add_mode__ModeId0__tmp_copy_11;
#line 191 "add_mode.m"
                }
#line 191 "add_mode.m"
                continue;
#line 188 "add_mode.m"
              }
#line 193 "add_mode.m"
            else
#line 194 "add_mode.m"
              {
#line 194 "add_mode.m"
                *hlds__make_hlds__add_mode__InvalidMode_14 = (MR_Integer) 0;
#line 194 "add_mode.m"
                *hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_30 = hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_0_29;
#line 194 "add_mode.m"
              }
#line 181 "add_mode.m"
          }
#line 180 "add_mode.m"
      }
#line 180 "add_mode.m"
      break;
#line 180 "add_mode.m"
    }
#line 170 "add_mode.m"
}

#line 101 "add_mode.m"
static void MR_CALL 
hlds__make_hlds__add_mode__check_for_cyclic_inst_9_p_0(
#line 101 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__UserInstTable_10,
#line 101 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__OrigInstId_11,
#line 101 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__InstId0_12,
#line 101 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__Args0_13,
#line 101 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__Expansions0_14,
#line 101 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__Context_15,
#line 101 "add_mode.m"
  MR_Word * hlds__make_hlds__add_mode__InvalidMode_16,
#line 101 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_0_32,
#line 101 "add_mode.m"
  MR_Word * hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_33)
#line 101 "add_mode.m"
{
#line 111 "add_mode.m"
  while (MR_TRUE)
#line 111 "add_mode.m"
    {
#line 111 "add_mode.m"
      /* tailcall optimized into a loop */
#line 111 "add_mode.m"
      {
#line 111 "add_mode.m"
        MR_bool hlds__make_hlds__add_mode__succeeded;

#line 107 "add_mode.m"
        {
#line 107 "add_mode.m"
          hlds__make_hlds__add_mode__succeeded = mercury__list__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0, ((MR_Box) (hlds__make_hlds__add_mode__InstId0_12)), hlds__make_hlds__add_mode__Expansions0_14);
        }
#line 111 "add_mode.m"
        if (hlds__make_hlds__add_mode__succeeded)
#line 109 "add_mode.m"
          {
#line 108 "add_mode.m"
            {
#line 108 "add_mode.m"
              hlds__make_hlds__add_mode__report_circular_inst_equiv_error_6_p_0(hlds__make_hlds__add_mode__OrigInstId_11, hlds__make_hlds__add_mode__InstId0_12, hlds__make_hlds__add_mode__Expansions0_14, hlds__make_hlds__add_mode__Context_15, hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_0_32, hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_33);
            }
#line 110 "add_mode.m"
            *hlds__make_hlds__add_mode__InvalidMode_16 = (MR_Integer) 1;
#line 109 "add_mode.m"
          }
#line 111 "add_mode.m"
        else
#line 124 "add_mode.m"
          {
#line 124 "add_mode.m"
            MR_Word hlds__make_hlds__add_mode__Name_27;
#line 124 "add_mode.m"
            MR_Word hlds__make_hlds__add_mode__Args_28;
#line 113 "add_mode.m"
            MR_Word hlds__make_hlds__add_mode__InstDefn_18;
#line 113 "add_mode.m"
            MR_Word hlds__make_hlds__add_mode__Params_20;
#line 113 "add_mode.m"
            MR_Word hlds__make_hlds__add_mode__Body_21;
#line 113 "add_mode.m"
            MR_Word hlds__make_hlds__add_mode__EqvInst0_25;
#line 113 "add_mode.m"
            MR_Word hlds__make_hlds__add_mode__EqvInst_26;
#line 113 "add_mode.m"
            MR_Word hlds__make_hlds__add_mode__V_35_35;
#line 113 "add_mode.m"
            MR_Box hlds__make_hlds__add_mode__conv0_InstDefn_18;
#line 114 "add_mode.m"
            MR_Word hlds__make_hlds__add_mode__V_19_19;
#line 114 "add_mode.m"
            MR_Word hlds__make_hlds__add_mode__V_22_22;
#line 114 "add_mode.m"
            MR_Word hlds__make_hlds__add_mode__V_23_23;
#line 114 "add_mode.m"
            MR_Word hlds__make_hlds__add_mode__V_24_24;

#line 113 "add_mode.m"
            {
#line 113 "add_mode.m"
              hlds__make_hlds__add_mode__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_inst_defn_0, hlds__make_hlds__add_mode__UserInstTable_10, ((MR_Box) (hlds__make_hlds__add_mode__InstId0_12)), &hlds__make_hlds__add_mode__conv0_InstDefn_18);
            }
#line 113 "add_mode.m"
            if (hlds__make_hlds__add_mode__succeeded)
#line 113 "add_mode.m"
              {
#line 113 "add_mode.m"
                hlds__make_hlds__add_mode__InstDefn_18 = ((MR_Word) hlds__make_hlds__add_mode__conv0_InstDefn_18);
#line 113 "add_mode.m"
                hlds__make_hlds__add_mode__succeeded = MR_TRUE;
#line 113 "add_mode.m"
              }
#line 113 "add_mode.m"
            if (hlds__make_hlds__add_mode__succeeded)
#line 113 "add_mode.m"
              {
#line 114 "add_mode.m"
                hlds__make_hlds__add_mode__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__InstDefn_18, (MR_Integer) 0)));
#line 114 "add_mode.m"
                hlds__make_hlds__add_mode__Params_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__InstDefn_18, (MR_Integer) 1)));
#line 114 "add_mode.m"
                hlds__make_hlds__add_mode__Body_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__InstDefn_18, (MR_Integer) 2)));
#line 114 "add_mode.m"
                hlds__make_hlds__add_mode__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__InstDefn_18, (MR_Integer) 3)));
#line 114 "add_mode.m"
                hlds__make_hlds__add_mode__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__InstDefn_18, (MR_Integer) 4)));
#line 114 "add_mode.m"
                hlds__make_hlds__add_mode__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__InstDefn_18, (MR_Integer) 5)));
#line 115 "add_mode.m"
                hlds__make_hlds__add_mode__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_mode__Body_21)) == (MR_mktag((MR_Integer) 1)));
#line 115 "add_mode.m"
                if (hlds__make_hlds__add_mode__succeeded)
#line 115 "add_mode.m"
                  {
#line 115 "add_mode.m"
                    hlds__make_hlds__add_mode__EqvInst0_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__Body_21, (MR_Integer) 0)));
#line 116 "add_mode.m"
                    {
#line 116 "add_mode.m"
                      parse_tree__prog_mode__inst_substitute_arg_list_4_p_0(hlds__make_hlds__add_mode__Params_20, hlds__make_hlds__add_mode__Args0_13, hlds__make_hlds__add_mode__EqvInst0_25, &hlds__make_hlds__add_mode__EqvInst_26);
                    }
#line 117 "add_mode.m"
                    hlds__make_hlds__add_mode__succeeded = ((((MR_tag((MR_Word) hlds__make_hlds__add_mode__EqvInst_26)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mode__EqvInst_26, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 117 "add_mode.m"
                    if (hlds__make_hlds__add_mode__succeeded)
#line 117 "add_mode.m"
                      {
#line 117 "add_mode.m"
                        hlds__make_hlds__add_mode__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mode__EqvInst_26, (MR_Integer) 1)));
#line 117 "add_mode.m"
                        hlds__make_hlds__add_mode__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_mode__V_35_35)) == (MR_mktag((MR_Integer) 0)));
#line 117 "add_mode.m"
                        if (hlds__make_hlds__add_mode__succeeded)
#line 117 "add_mode.m"
                          {
#line 117 "add_mode.m"
                            hlds__make_hlds__add_mode__Name_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__V_35_35, (MR_Integer) 0)));
#line 117 "add_mode.m"
                            hlds__make_hlds__add_mode__Args_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__V_35_35, (MR_Integer) 1)));
#line 117 "add_mode.m"
                          }
#line 117 "add_mode.m"
                      }
#line 115 "add_mode.m"
                  }
#line 113 "add_mode.m"
              }
#line 124 "add_mode.m"
            if (hlds__make_hlds__add_mode__succeeded)
#line 119 "add_mode.m"
              {
#line 119 "add_mode.m"
                MR_Integer hlds__make_hlds__add_mode__Arity_29;
#line 119 "add_mode.m"
                MR_Word hlds__make_hlds__add_mode__InstId_30;
#line 119 "add_mode.m"
                MR_Word hlds__make_hlds__add_mode__Expansions_31;

#line 119 "add_mode.m"
                {
#line 119 "add_mode.m"
                  hlds__make_hlds__add_mode__Arity_29 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__make_hlds__add_mode__Args_28);
                }
#line 120 "add_mode.m"
                {
#line 120 "add_mode.m"
                  hlds__make_hlds__add_mode__InstId_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 120 "add_mode.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__InstId_30, 0) = ((MR_Box) (hlds__make_hlds__add_mode__Name_27));
#line 120 "add_mode.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__InstId_30, 1) = ((MR_Box) (hlds__make_hlds__add_mode__Arity_29));
#line 120 "add_mode.m"
                }
#line 121 "add_mode.m"
                {
#line 121 "add_mode.m"
                  hlds__make_hlds__add_mode__Expansions_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 121 "add_mode.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__Expansions_31, 0) = ((MR_Box) (hlds__make_hlds__add_mode__InstId0_12));
#line 121 "add_mode.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__Expansions_31, 1) = ((MR_Box) (hlds__make_hlds__add_mode__Expansions0_14));
#line 121 "add_mode.m"
                }
#line 122 "add_mode.m"
                /* direct tailcall eliminated */
#line 122 "add_mode.m"
                {
#line 122 "add_mode.m"
                  MR_Word hlds__make_hlds__add_mode__InstId0__tmp_copy_12 = hlds__make_hlds__add_mode__InstId_30;
#line 122 "add_mode.m"
                  MR_Word hlds__make_hlds__add_mode__Args0__tmp_copy_13 = hlds__make_hlds__add_mode__Args_28;
#line 122 "add_mode.m"
                  MR_Word hlds__make_hlds__add_mode__Expansions0__tmp_copy_14 = hlds__make_hlds__add_mode__Expansions_31;

#line 122 "add_mode.m"
                  hlds__make_hlds__add_mode__Expansions0_14 = hlds__make_hlds__add_mode__Expansions0__tmp_copy_14;
#line 122 "add_mode.m"
                  hlds__make_hlds__add_mode__Args0_13 = hlds__make_hlds__add_mode__Args0__tmp_copy_13;
#line 122 "add_mode.m"
                  hlds__make_hlds__add_mode__InstId0_12 = hlds__make_hlds__add_mode__InstId0__tmp_copy_12;
#line 122 "add_mode.m"
                }
#line 122 "add_mode.m"
                continue;
#line 119 "add_mode.m"
              }
#line 124 "add_mode.m"
            else
#line 125 "add_mode.m"
              {
#line 125 "add_mode.m"
                *hlds__make_hlds__add_mode__InvalidMode_16 = (MR_Integer) 0;
#line 125 "add_mode.m"
                *hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_33 = hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_0_32;
#line 125 "add_mode.m"
              }
#line 124 "add_mode.m"
          }
#line 111 "add_mode.m"
      }
#line 111 "add_mode.m"
      break;
#line 111 "add_mode.m"
    }
#line 101 "add_mode.m"
}

#line 29 "add_mode.m"
void MR_CALL 
hlds__make_hlds__add_mode__module_add_mode_defn_7_p_0(
#line 29 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__ItemModeDefnInfo_8,
#line 29 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__ModeStatus_9,
#line 29 "add_mode.m"
  MR_Word * hlds__make_hlds__add_mode__InvalidMode_10,
#line 29 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__STATE_VARIABLE_ModuleInfo_0_21,
#line 29 "add_mode.m"
  MR_Word * hlds__make_hlds__add_mode__STATE_VARIABLE_ModuleInfo_22,
#line 29 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_0_23,
#line 29 "add_mode.m"
  MR_Word * hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_24)
#line 29 "add_mode.m"
{
#line 132 "add_mode.m"
  {
#line 132 "add_mode.m"
    MR_bool hlds__make_hlds__add_mode__succeeded;
#line 132 "add_mode.m"
    MR_Word hlds__make_hlds__add_mode__Name_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__ItemModeDefnInfo_8, (MR_Integer) 0)));
#line 132 "add_mode.m"
    MR_Word hlds__make_hlds__add_mode__Params_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__ItemModeDefnInfo_8, (MR_Integer) 1)));
#line 132 "add_mode.m"
    MR_Word hlds__make_hlds__add_mode__ModeDefn_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__ItemModeDefnInfo_8, (MR_Integer) 2)));
#line 132 "add_mode.m"
    MR_Word hlds__make_hlds__add_mode__VarSet_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__ItemModeDefnInfo_8, (MR_Integer) 3)));
#line 132 "add_mode.m"
    MR_Word hlds__make_hlds__add_mode__Context_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__ItemModeDefnInfo_8, (MR_Integer) 4)));
#line 132 "add_mode.m"
    MR_Word hlds__make_hlds__add_mode__ModeTable0_19;
#line 132 "add_mode.m"
    MR_Word hlds__make_hlds__add_mode__ModeTable_20;
#line 132 "add_mode.m"
    MR_Word hlds__make_hlds__add_mode__Body_37;
#line 132 "add_mode.m"
    MR_Integer hlds__make_hlds__add_mode__Arity_40;
#line 132 "add_mode.m"
    MR_Word hlds__make_hlds__add_mode__ModeId_41;
#line 132 "add_mode.m"
    MR_Word hlds__make_hlds__add_mode__ModeDefn_42;
#line 132 "add_mode.m"
    MR_Word hlds__make_hlds__add_mode__V_51_51;
#line 132 "add_mode.m"
    MR_Word hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_41_56;
#line 133 "add_mode.m"
    MR_Integer hlds__make_hlds__add_mode___SeqNum_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__ItemModeDefnInfo_8, (MR_Integer) 5)));
#line 153 "add_mode.m"
    MR_Word hlds__make_hlds__add_mode__STATE_VARIABLE_ModeTable_37_52;

#line 135 "add_mode.m"
    {
#line 135 "add_mode.m"
      hlds__hlds_module__module_info_get_mode_table_2_p_0(hlds__make_hlds__add_mode__STATE_VARIABLE_ModuleInfo_0_21, &hlds__make_hlds__add_mode__ModeTable0_19);
    }
#line 145 "add_mode.m"
    hlds__make_hlds__add_mode__Body_37 = (MR_Word) hlds__make_hlds__add_mode__ModeDefn_15;
#line 147 "add_mode.m"
    {
#line 147 "add_mode.m"
      mercury__list__length_2_p_0((MR_Word) &hlds__make_hlds__add_mode_scalar_common_1[0], hlds__make_hlds__add_mode__Params_14, &hlds__make_hlds__add_mode__Arity_40);
    }
#line 148 "add_mode.m"
    {
#line 148 "add_mode.m"
      hlds__make_hlds__add_mode__ModeId_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 148 "add_mode.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__ModeId_41, 0) = ((MR_Box) (hlds__make_hlds__add_mode__Name_13));
#line 148 "add_mode.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__ModeId_41, 1) = ((MR_Box) (hlds__make_hlds__add_mode__Arity_40));
#line 148 "add_mode.m"
    }
#line 149 "add_mode.m"
    hlds__make_hlds__add_mode__V_51_51 = (MR_Word) hlds__make_hlds__add_mode__Body_37;
#line 149 "add_mode.m"
    {
#line 149 "add_mode.m"
      hlds__make_hlds__add_mode__ModeDefn_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 149 "add_mode.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__ModeDefn_42, 0) = ((MR_Box) (hlds__make_hlds__add_mode__VarSet_16));
#line 149 "add_mode.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__ModeDefn_42, 1) = ((MR_Box) (hlds__make_hlds__add_mode__Params_14));
#line 149 "add_mode.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__ModeDefn_42, 2) = ((MR_Box) (hlds__make_hlds__add_mode__V_51_51));
#line 149 "add_mode.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__ModeDefn_42, 3) = ((MR_Box) (hlds__make_hlds__add_mode__Context_17));
#line 149 "add_mode.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__ModeDefn_42, 4) = ((MR_Box) (hlds__make_hlds__add_mode__ModeStatus_9));
#line 149 "add_mode.m"
    }
#line 151 "add_mode.m"
    {
#line 151 "add_mode.m"
      hlds__make_hlds__add_mode__succeeded = hlds__hlds_data__mode_table_insert_4_p_0(hlds__make_hlds__add_mode__ModeId_41, hlds__make_hlds__add_mode__ModeDefn_42, hlds__make_hlds__add_mode__ModeTable0_19, &hlds__make_hlds__add_mode__STATE_VARIABLE_ModeTable_37_52);
    }
#line 153 "add_mode.m"
    if (hlds__make_hlds__add_mode__succeeded)
#line 152 "add_mode.m"
      {
#line 152 "add_mode.m"
        hlds__make_hlds__add_mode__ModeTable_20 = hlds__make_hlds__add_mode__STATE_VARIABLE_ModeTable_37_52;
#line 152 "add_mode.m"
        hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_41_56 = hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_0_23;
#line 152 "add_mode.m"
      }
#line 153 "add_mode.m"
    else
#line 156 "add_mode.m"
      {
#line 154 "add_mode.m"
        MR_Word hlds__make_hlds__add_mode__V_53_53 = (MR_Word) hlds__make_hlds__add_mode__ModeStatus_9;

#line 154 "add_mode.m"
        hlds__make_hlds__add_mode__succeeded = (hlds__make_hlds__add_mode__V_53_53 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 156 "add_mode.m"
        if (hlds__make_hlds__add_mode__succeeded)
#line 156 "add_mode.m"
          hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_41_56 = hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_0_23;
#line 156 "add_mode.m"
        else
#line 157 "add_mode.m"
          {
#line 157 "add_mode.m"
            MR_Word hlds__make_hlds__add_mode__ModeDefns_43;
#line 157 "add_mode.m"
            MR_Word hlds__make_hlds__add_mode__OrigModeDefn_44;
#line 157 "add_mode.m"
            MR_Word hlds__make_hlds__add_mode__OrigContext_48;
#line 158 "add_mode.m"
            MR_Box hlds__make_hlds__add_mode__conv0_OrigModeDefn_44;
#line 159 "add_mode.m"
            MR_Word hlds__make_hlds__add_mode__V_45_45;
#line 159 "add_mode.m"
            MR_Word hlds__make_hlds__add_mode__V_46_46;
#line 159 "add_mode.m"
            MR_Word hlds__make_hlds__add_mode__V_47_47;
#line 159 "add_mode.m"
            MR_Word hlds__make_hlds__add_mode__V_49_49;

#line 157 "add_mode.m"
            {
#line 157 "add_mode.m"
              hlds__hlds_data__mode_table_get_mode_defns_2_p_0(hlds__make_hlds__add_mode__ModeTable0_19, &hlds__make_hlds__add_mode__ModeDefns_43);
            }
#line 158 "add_mode.m"
            {
#line 158 "add_mode.m"
              mercury__map__lookup_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_mode_defn_0, hlds__make_hlds__add_mode__ModeDefns_43, ((MR_Box) (hlds__make_hlds__add_mode__ModeId_41)), &hlds__make_hlds__add_mode__conv0_OrigModeDefn_44);
            }
#line 158 "add_mode.m"
            hlds__make_hlds__add_mode__OrigModeDefn_44 = ((MR_Word) hlds__make_hlds__add_mode__conv0_OrigModeDefn_44);
#line 159 "add_mode.m"
            hlds__make_hlds__add_mode__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__OrigModeDefn_44, (MR_Integer) 0)));
#line 159 "add_mode.m"
            hlds__make_hlds__add_mode__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__OrigModeDefn_44, (MR_Integer) 1)));
#line 159 "add_mode.m"
            hlds__make_hlds__add_mode__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__OrigModeDefn_44, (MR_Integer) 2)));
#line 159 "add_mode.m"
            hlds__make_hlds__add_mode__OrigContext_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__OrigModeDefn_44, (MR_Integer) 3)));
#line 159 "add_mode.m"
            hlds__make_hlds__add_mode__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__OrigModeDefn_44, (MR_Integer) 4)));
#line 161 "add_mode.m"
            {
#line 161 "add_mode.m"
              hlds__make_hlds__make_hlds_error__multiple_def_error_9_p_0((MR_Integer) 0, hlds__make_hlds__add_mode__Name_13, hlds__make_hlds__add_mode__Arity_40, (MR_String) "mode", hlds__make_hlds__add_mode__Context_17, hlds__make_hlds__add_mode__OrigContext_48, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_0_23, &hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_41_56);
            }
#line 157 "add_mode.m"
          }
#line 156 "add_mode.m"
        hlds__make_hlds__add_mode__ModeTable_20 = hlds__make_hlds__add_mode__ModeTable0_19;
#line 156 "add_mode.m"
      }
#line 165 "add_mode.m"
    {
#line 165 "add_mode.m"
      hlds__make_hlds__add_mode__check_for_cyclic_mode_8_p_0(hlds__make_hlds__add_mode__ModeTable_20, hlds__make_hlds__add_mode__ModeId_41, hlds__make_hlds__add_mode__ModeId_41, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_mode__Context_17, hlds__make_hlds__add_mode__InvalidMode_10, hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_41_56, hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_24);
    }
#line 138 "add_mode.m"
    {
#line 138 "add_mode.m"
      hlds__hlds_module__module_info_set_mode_table_3_p_0(hlds__make_hlds__add_mode__ModeTable_20, hlds__make_hlds__add_mode__STATE_VARIABLE_ModuleInfo_0_21, hlds__make_hlds__add_mode__STATE_VARIABLE_ModuleInfo_22);
#line 138 "add_mode.m"
      return;
    }
#line 132 "add_mode.m"
  }
#line 29 "add_mode.m"
}

#line 25 "add_mode.m"
void MR_CALL 
hlds__make_hlds__add_mode__module_add_inst_defn_7_p_0(
#line 25 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__ItemInstDefnInfo_8,
#line 25 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__InstStatus_9,
#line 25 "add_mode.m"
  MR_Word * hlds__make_hlds__add_mode__InvalidInst_10,
#line 25 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__STATE_VARIABLE_ModuleInfo_0_26,
#line 25 "add_mode.m"
  MR_Word * hlds__make_hlds__add_mode__STATE_VARIABLE_ModuleInfo_27,
#line 25 "add_mode.m"
  MR_Word hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_0_28,
#line 25 "add_mode.m"
  MR_Word * hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_29)
#line 25 "add_mode.m"
{
#line 50 "add_mode.m"
  {
#line 50 "add_mode.m"
    MR_bool hlds__make_hlds__add_mode__succeeded;
#line 50 "add_mode.m"
    MR_Word hlds__make_hlds__add_mode__Name_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__ItemInstDefnInfo_8, (MR_Integer) 0)));
#line 50 "add_mode.m"
    MR_Word hlds__make_hlds__add_mode__Params_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__ItemInstDefnInfo_8, (MR_Integer) 1)));
#line 50 "add_mode.m"
    MR_Word hlds__make_hlds__add_mode__InstDefn_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__ItemInstDefnInfo_8, (MR_Integer) 2)));
#line 50 "add_mode.m"
    MR_Word hlds__make_hlds__add_mode__VarSet_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__ItemInstDefnInfo_8, (MR_Integer) 3)));
#line 50 "add_mode.m"
    MR_Word hlds__make_hlds__add_mode__Context_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__ItemInstDefnInfo_8, (MR_Integer) 4)));
#line 50 "add_mode.m"
    MR_Word hlds__make_hlds__add_mode__InstTable0_19;
#line 50 "add_mode.m"
    MR_Word hlds__make_hlds__add_mode__UserInstTable0_20;
#line 50 "add_mode.m"
    MR_Word hlds__make_hlds__add_mode__UserInstTable_21;
#line 50 "add_mode.m"
    MR_Word hlds__make_hlds__add_mode__InstTable_22;
#line 50 "add_mode.m"
    MR_Integer hlds__make_hlds__add_mode__Arity_23;
#line 50 "add_mode.m"
    MR_Word hlds__make_hlds__add_mode__InstId_24;
#line 50 "add_mode.m"
    MR_Word hlds__make_hlds__add_mode__TestArgs_25;
#line 50 "add_mode.m"
    MR_Word hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_30_30;
#line 51 "add_mode.m"
    MR_Integer hlds__make_hlds__add_mode___SeqNum_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__ItemInstDefnInfo_8, (MR_Integer) 5)));

#line 54 "add_mode.m"
    {
#line 54 "add_mode.m"
      hlds__hlds_module__module_info_get_inst_table_2_p_0(hlds__make_hlds__add_mode__STATE_VARIABLE_ModuleInfo_0_26, &hlds__make_hlds__add_mode__InstTable0_19);
    }
#line 55 "add_mode.m"
    {
#line 55 "add_mode.m"
      hlds__hlds_data__inst_table_get_user_insts_2_p_0(hlds__make_hlds__add_mode__InstTable0_19, &hlds__make_hlds__add_mode__UserInstTable0_20);
    }
#line 73 "add_mode.m"
    if ((hlds__make_hlds__add_mode__InstDefn_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 73 "add_mode.m"
      {
#line 75 "add_mode.m"
        {
#line 75 "add_mode.m"
          mercury__require__sorry_3_p_0((MR_String) "hlds.make_hlds.add_mode", (MR_String) "predicate \140hlds.make_hlds.add_mode.insts_add\'/10", (MR_String) "abstract insts not implemented");
#line 75 "add_mode.m"
          return;
        }
#line 73 "add_mode.m"
      }
#line 73 "add_mode.m"
    else
#line 77 "add_mode.m"
      {
#line 77 "add_mode.m"
        MR_Word hlds__make_hlds__add_mode__Body_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__InstDefn_15, (MR_Integer) 0)));
#line 77 "add_mode.m"
        MR_Integer hlds__make_hlds__add_mode__Arity_60;
#line 77 "add_mode.m"
        MR_Word hlds__make_hlds__add_mode__InstId_61;
#line 77 "add_mode.m"
        MR_Word hlds__make_hlds__add_mode__InstDefn_62;
#line 77 "add_mode.m"
        MR_Word hlds__make_hlds__add_mode__V_70_70;
#line 84 "add_mode.m"
        MR_Word hlds__make_hlds__add_mode__STATE_VARIABLE_UserInstTable_45_72;

#line 78 "add_mode.m"
        {
#line 78 "add_mode.m"
          mercury__list__length_2_p_0((MR_Word) &hlds__make_hlds__add_mode_scalar_common_1[0], hlds__make_hlds__add_mode__Params_14, &hlds__make_hlds__add_mode__Arity_60);
        }
#line 79 "add_mode.m"
        {
#line 79 "add_mode.m"
          hlds__make_hlds__add_mode__InstId_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 79 "add_mode.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__InstId_61, 0) = ((MR_Box) (hlds__make_hlds__add_mode__Name_13));
#line 79 "add_mode.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__InstId_61, 1) = ((MR_Box) (hlds__make_hlds__add_mode__Arity_60));
#line 79 "add_mode.m"
        }
#line 80 "add_mode.m"
        {
#line 80 "add_mode.m"
          hlds__make_hlds__add_mode__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 80 "add_mode.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mode__V_70_70, 0) = ((MR_Box) (hlds__make_hlds__add_mode__Body_55));
#line 80 "add_mode.m"
        }
#line 80 "add_mode.m"
        {
#line 80 "add_mode.m"
          hlds__make_hlds__add_mode__InstDefn_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 80 "add_mode.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__InstDefn_62, 0) = ((MR_Box) (hlds__make_hlds__add_mode__VarSet_16));
#line 80 "add_mode.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__InstDefn_62, 1) = ((MR_Box) (hlds__make_hlds__add_mode__Params_14));
#line 80 "add_mode.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__InstDefn_62, 2) = ((MR_Box) (hlds__make_hlds__add_mode__V_70_70));
#line 80 "add_mode.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__InstDefn_62, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 80 "add_mode.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__InstDefn_62, 4) = ((MR_Box) (hlds__make_hlds__add_mode__Context_17));
#line 80 "add_mode.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__InstDefn_62, 5) = ((MR_Box) (hlds__make_hlds__add_mode__InstStatus_9));
#line 80 "add_mode.m"
        }
#line 82 "add_mode.m"
        {
#line 82 "add_mode.m"
          hlds__make_hlds__add_mode__succeeded = mercury__map__insert_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_inst_defn_0, ((MR_Box) (hlds__make_hlds__add_mode__InstId_61)), ((MR_Box) (hlds__make_hlds__add_mode__InstDefn_62)), hlds__make_hlds__add_mode__UserInstTable0_20, &hlds__make_hlds__add_mode__STATE_VARIABLE_UserInstTable_45_72);
        }
#line 84 "add_mode.m"
        if (hlds__make_hlds__add_mode__succeeded)
#line 83 "add_mode.m"
          {
#line 83 "add_mode.m"
            hlds__make_hlds__add_mode__UserInstTable_21 = hlds__make_hlds__add_mode__STATE_VARIABLE_UserInstTable_45_72;
#line 83 "add_mode.m"
            hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_30_30 = hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_0_28;
#line 83 "add_mode.m"
          }
#line 84 "add_mode.m"
        else
#line 90 "add_mode.m"
          {
#line 88 "add_mode.m"
            MR_Word hlds__make_hlds__add_mode__V_73_73 = (MR_Word) hlds__make_hlds__add_mode__InstStatus_9;

#line 88 "add_mode.m"
            hlds__make_hlds__add_mode__succeeded = (hlds__make_hlds__add_mode__V_73_73 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 90 "add_mode.m"
            if (hlds__make_hlds__add_mode__succeeded)
#line 90 "add_mode.m"
              hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_30_30 = hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_0_28;
#line 90 "add_mode.m"
            else
#line 91 "add_mode.m"
              {
#line 91 "add_mode.m"
                MR_Word hlds__make_hlds__add_mode__OrigInstDefn_63;
#line 91 "add_mode.m"
                MR_Word hlds__make_hlds__add_mode__OrigContext_64;
#line 91 "add_mode.m"
                MR_Box hlds__make_hlds__add_mode__conv0_OrigInstDefn_63;
#line 92 "add_mode.m"
                MR_Word hlds__make_hlds__add_mode__V_78_78;
#line 92 "add_mode.m"
                MR_Word hlds__make_hlds__add_mode__V_79_79;
#line 92 "add_mode.m"
                MR_Word hlds__make_hlds__add_mode__V_80_80;
#line 92 "add_mode.m"
                MR_Word hlds__make_hlds__add_mode__V_81_81;
#line 92 "add_mode.m"
                MR_Word hlds__make_hlds__add_mode__V_82_82;

#line 91 "add_mode.m"
                {
#line 91 "add_mode.m"
                  mercury__map__lookup_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_inst_defn_0, hlds__make_hlds__add_mode__UserInstTable0_20, ((MR_Box) (hlds__make_hlds__add_mode__InstId_61)), &hlds__make_hlds__add_mode__conv0_OrigInstDefn_63);
                }
#line 91 "add_mode.m"
                hlds__make_hlds__add_mode__OrigInstDefn_63 = ((MR_Word) hlds__make_hlds__add_mode__conv0_OrigInstDefn_63);
#line 92 "add_mode.m"
                hlds__make_hlds__add_mode__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__OrigInstDefn_63, (MR_Integer) 0)));
#line 92 "add_mode.m"
                hlds__make_hlds__add_mode__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__OrigInstDefn_63, (MR_Integer) 1)));
#line 92 "add_mode.m"
                hlds__make_hlds__add_mode__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__OrigInstDefn_63, (MR_Integer) 2)));
#line 92 "add_mode.m"
                hlds__make_hlds__add_mode__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__OrigInstDefn_63, (MR_Integer) 3)));
#line 92 "add_mode.m"
                hlds__make_hlds__add_mode__OrigContext_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__OrigInstDefn_63, (MR_Integer) 4)));
#line 92 "add_mode.m"
                hlds__make_hlds__add_mode__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__OrigInstDefn_63, (MR_Integer) 5)));
#line 94 "add_mode.m"
                {
#line 94 "add_mode.m"
                  hlds__make_hlds__make_hlds_error__multiple_def_error_9_p_0((MR_Integer) 0, hlds__make_hlds__add_mode__Name_13, hlds__make_hlds__add_mode__Arity_60, (MR_String) "inst", hlds__make_hlds__add_mode__Context_17, hlds__make_hlds__add_mode__OrigContext_64, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_0_28, &hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_30_30);
                }
#line 91 "add_mode.m"
              }
#line 90 "add_mode.m"
            hlds__make_hlds__add_mode__UserInstTable_21 = hlds__make_hlds__add_mode__UserInstTable0_20;
#line 90 "add_mode.m"
          }
#line 77 "add_mode.m"
      }
#line 58 "add_mode.m"
    {
#line 58 "add_mode.m"
      hlds__hlds_data__inst_table_set_user_insts_3_p_0(hlds__make_hlds__add_mode__UserInstTable_21, hlds__make_hlds__add_mode__InstTable0_19, &hlds__make_hlds__add_mode__InstTable_22);
    }
#line 59 "add_mode.m"
    {
#line 59 "add_mode.m"
      hlds__hlds_module__module_info_set_inst_table_3_p_0(hlds__make_hlds__add_mode__InstTable_22, hlds__make_hlds__add_mode__STATE_VARIABLE_ModuleInfo_0_26, hlds__make_hlds__add_mode__STATE_VARIABLE_ModuleInfo_27);
    }
#line 62 "add_mode.m"
    {
#line 62 "add_mode.m"
      hlds__make_hlds__add_mode__Arity_23 = mercury__list__length_1_f_0((MR_Word) &hlds__make_hlds__add_mode_scalar_common_1[0], hlds__make_hlds__add_mode__Params_14);
    }
#line 63 "add_mode.m"
    {
#line 63 "add_mode.m"
      hlds__make_hlds__add_mode__InstId_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 63 "add_mode.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__InstId_24, 0) = ((MR_Box) (hlds__make_hlds__add_mode__Name_13));
#line 63 "add_mode.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mode__InstId_24, 1) = ((MR_Box) (hlds__make_hlds__add_mode__Arity_23));
#line 63 "add_mode.m"
    }
#line 64 "add_mode.m"
    {
#line 64 "add_mode.m"
      hlds__make_hlds__add_mode__TestArgs_25 = mercury__list__duplicate_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__make_hlds__add_mode__Arity_23, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))));
    }
#line 65 "add_mode.m"
    {
#line 65 "add_mode.m"
      hlds__make_hlds__add_mode__check_for_cyclic_inst_9_p_0(hlds__make_hlds__add_mode__UserInstTable_21, hlds__make_hlds__add_mode__InstId_24, hlds__make_hlds__add_mode__InstId_24, hlds__make_hlds__add_mode__TestArgs_25, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_mode__Context_17, hlds__make_hlds__add_mode__InvalidInst_10, hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_30_30, hlds__make_hlds__add_mode__STATE_VARIABLE_Specs_29);
#line 65 "add_mode.m"
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
